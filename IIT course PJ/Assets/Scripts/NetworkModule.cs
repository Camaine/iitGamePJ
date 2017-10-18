using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NetworkModule : MonoBehaviour {
    public TransportTCP consend;
    public TransportTCP conrcv;

    string rcvmsg;
    string sendmsg;
    string[] packet = new string[4];

	// Use this for initialization
	void Start () {
        consend = new TransportTCP();
        conrcv = new TransportTCP();
        ConnectWithServer();
	}
	
	// Update is called once per frame
	void Update () {
        
	}

    public void ConnectWithServer(){
        try
        {
            consend.Connect("18.221.216.122", 6000);
            conrcv.Connect("18.221.216.122",6001);
            sendmsg = "Okay";

            consend.SimpleSend(sendmsg);
            rcvmsg = conrcv.SimpleReceive();
            Debug.Log(rcvmsg + "...Success");
            consend.Disconnect();
            conrcv.Disconnect();
        }
        catch
        {
            Debug.Log("fail");
        }

    }
}
