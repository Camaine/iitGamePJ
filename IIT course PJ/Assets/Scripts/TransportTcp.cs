﻿using UnityEngine;
using System.Collections;
using System.Net;
using System.Text;
using System.Net.Sockets;


public class TransportTCP : ITransport
{

	private	int				m_nodeId = -1;

	// 통신용 소켓.
	private Socket			m_socket = null;

	// 접속할 포트 번호.
	// 로그 출력용으로 사용한다.
	//private int				m_port = -1;

	// 접속 플래그.
	private	bool			m_isConnected = false;

	// 송신 버퍼.
	private PacketQueue		m_sendQueue = new PacketQueue();
	
	// 수신 버퍼.
	private PacketQueue		m_recvQueue = new PacketQueue();
	
	// 통지 델리게이트.
	private EventHandler	m_handler;
	
	// 송수신용 패킷의 최대 크기.
	private const int		m_packetSize = 1400;

	public string	transportName = "";

	public TransportTCP()
	{

	}


	public TransportTCP(Socket socket, string name)
	{
		m_socket = socket;
		transportName = name;
	}


	public bool Initialize(Socket socket)
	{
		m_socket = socket;
		m_isConnected = true;

		return true;
	}


	public bool Terminate()
	{
		m_socket = null;

		return true;
	}

	public int GetNodeId()
	{
		return m_nodeId;
	}

	public void SetNodeId(int node)
	{
		m_nodeId = node;
	}

	public IPEndPoint GetLocalEndPoint()
	{
		if (m_socket == null) {
			return default(IPEndPoint);
		}
		
		return m_socket.LocalEndPoint as IPEndPoint;
	}

	public IPEndPoint GetRemoteEndPoint()
	{
		if (m_socket == null) {
			return default(IPEndPoint);
		}
		
		return m_socket.RemoteEndPoint as IPEndPoint;
	}

	public void SetServerPort(int port)
	{
	}

	// 
	public bool Connect(string address, int port)
	{
		Debug.Log("Transport connect called");

		if (m_socket != null) {
			return false;
		}

		try {
			m_socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
			m_socket.Connect(address, port);
			m_socket.NoDelay = true;
			// 로그 출력용으로 사용.
			//m_port = port;
			m_isConnected = true;
			Debug.Log("Connection success");
		}
		catch (SocketException e) {
			m_socket = null;
			m_isConnected = false;
			Debug.Log("Connect fail");
			Debug.Log(e.ToString());
		}

		string str = "TransportTCP connect:" + m_isConnected.ToString(); 
		Debug.Log(str);
		if (m_handler != null) {
			// 접속결과를 통지.
			NetEventState state = new NetEventState();
			state.type = NetEventType.Connect;
			state.result = (m_isConnected == true)? NetEventResult.Success : NetEventResult.Failure;
			m_handler(this, state);
			Debug.Log("event handler called");
		}

		return m_isConnected;
	}

	public void Disconnect()
	{
		m_isConnected = false;

		if (m_socket != null) {
			// 소켓 닫기.
			m_socket.Shutdown(SocketShutdown.Both);
			m_socket.Close();
            Debug.Log("socket close");
			m_socket = null;
		}

		// 접속 끊김 통지.
		if (m_handler != null) {
			NetEventState state = new NetEventState();
			state.type = NetEventType.Disconnect;
			state.result = NetEventResult.Success;
			m_handler(this, state);
		}
	}

	//
	public int Send(byte[] data, int size)
	{
		return m_sendQueue.Enqueue(data, size);
	}
	
	//
	public int Receive(ref byte[] buffer, int size) 
	{
		return m_recvQueue.Dequeue(ref buffer, size);
	}
	
	public void RegisterEventHandler(EventHandler handler)
	{
		m_handler += handler;
	}

	public void UnregisterEventHandler(EventHandler handler)
	{
		m_handler -= handler;
	}

	// 
	public void Dispatch()
	{
		// 클라이언트와의 송수신을 처리한다.
		if (m_isConnected == true && m_socket != null) {

			// 송신처리.
			DispatchSend();
			
			// 수신처리.
			DispatchReceive();
		}
	}

	void DispatchSend()
	{
		if (m_socket == null) {
			return;
		}

		try {
			// 송신처리.
			if (m_socket.Poll(0, SelectMode.SelectWrite)) {
				byte[] buffer = new byte[m_packetSize];
				
				int sendSize = m_sendQueue.Dequeue(ref buffer, buffer.Length);
				while (sendSize > 0) {
					try {
						int sendResult = m_socket.Send(buffer, sendSize, SocketFlags.None);
						if (sendResult < 0) {
							Debug.Log("Transport send error send size:" + sendResult);
						}
					}
					catch (SocketException e) {
						Debug.Log("Transport send error:" + e.Message);

						if (m_handler != null) {
							NetEventState state = new NetEventState();
							state.node = m_nodeId;
							state.type = NetEventType.SendError;
							state.result = NetEventResult.Failure;
							m_handler(this, state);
						}
					}
					sendSize = m_sendQueue.Dequeue(ref buffer, buffer.Length);
				}
			}
		}
		catch {
			return;
		}
	}

	void DispatchReceive()
	{
		if (m_socket == null) {
			return;
		}

		// 수신처리.
		try {
			while (m_socket.Poll(0, SelectMode.SelectRead)) {
				byte[] buffer = new byte[m_packetSize];

				int recvSize = m_socket.Receive(buffer, buffer.Length, SocketFlags.None);
				
				if (recvSize == 0) {
					// 연결 끊기.
					Debug.Log("[TCP]Disconnect recv from other.");
					Disconnect();
				}
				else if (recvSize > 0) {
					//Debug.Log("[TCP]DispatchReceive received [Port:" + m_port + "]");				
					m_recvQueue.Enqueue(buffer, recvSize);
				}
			}
		}
		catch {
			return;
		}
	}


	public void SetReceiveData(byte[] data, int size)
	{	
		// 수신 데이터를 버퍼에 추가.
		if (size > 0) {
			//			Debug.Log("DispatchReceive received");				
			m_recvQueue.Enqueue(data, size);
		}
	}

    public void SimpleSend(string s)
    {
        if (m_socket == null)
        {
            return;
        }

        try
        {
            // 송신처리.
            if (m_socket.Poll(0, SelectMode.SelectWrite))
            {
                byte[] buffer = Encoding.UTF8.GetBytes(s);

                //int sendSize = m_sendQueue.Dequeue(ref buffer, buffer.Length);
                
                try
                {
                    int sendResult = m_socket.Send(buffer, buffer.Length, SocketFlags.None);
                    if (sendResult < 0)
                    {
                        Debug.Log("Transport send error send size:" + sendResult);
                    }
                }
                catch (SocketException e)
                {
                    Debug.Log("Transport send error:" + e.Message);

                    if (m_handler != null)
                    {
                        NetEventState state = new NetEventState();
                        state.node = m_nodeId;
                        state.type = NetEventType.SendError;
                        state.result = NetEventResult.Failure;
                        m_handler(this, state);
                    }
                }
                    //sendSize = m_sendQueue.Dequeue(ref buffer, buffer.Length);
            }
        }
        catch
        {
            return;
        }
    }

    public string SimpleReceive()
    {
        byte[] buffer = new byte[1400];
        string client_no = "";
        int recvSize = m_socket.Receive(buffer, buffer.Length, SocketFlags.None);
        if(recvSize > 0)
        {
            string msg = System.Text.Encoding.UTF8.GetString(buffer).Trim('\0');

            client_no = msg;           
            Debug.Log(msg);
        }
        return client_no;
    }

	//
	public bool IsConnected()
	{
		return	m_isConnected;
	}

}
