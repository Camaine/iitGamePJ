using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;
using UnityEngine.UI;
using TwitterKit.Unity;
using Facebook.Unity;
using Firebase.Auth;
using System;
using LitJson;

public class LoginModule : MonoBehaviour {

    private string TwtAuthToken;
    private string TwtAuthTokenSecret;
    private JsonData RcvData;
    //private string SampleAuth = "836889103245389825-pWWxyczGPeWa8GCkifsQq5LzVMU5XWG";
    //private string SampleSecret = "VhCVvGDdhMMeuXxuEQlVioulUNrAnkhZ6B1E6yHwWLSWm";
    private string infourl = "https://api.twitter.com/1.1/users/show.json?oauth_consumer_key=7LF7jtBSrD3EfpSOQQvLzoJVj&oauth_token=836889103245389825-pWWxyczGPeWa8GCkifsQq5LzVMU5XWG&oauth_signature_method=HMAC-SHA1&oauth_timestamp=1507407958&oauth_nonce=U6Sia8iyBwD&oauth_version=1.0&oauth_signature=KcFAywCniFcMSiWMAXWbluibNVU%3D&include_entities=true";
    public static string UserName = "default";
    public static string UserEmail;
    public static Uri photo_url;
    public static string photourlstring;
    public static long UserID;
    public GameObject LoginPanel;
    public GameObject RegisterPanel;
    public GameObject PopupPanel;
    public Text LoginEmail, LoginPassword, RegistEmail, RegistPassword, RegistPasswordCheck, PopupMsg;

	void Awake()
	{
        DontDestroyOnLoad(transform.gameObject);
		if (!FB.IsInitialized)
		{
			// Initialize the Facebook SDK
			FB.Init(InitCallback, OnHideUnity);
		}
		else
		{
			// Already initialized, signal an app activation App Event
			FB.ActivateApp();
		}
	}

    //Twitter Auth

    public void StartTwitterLogin(){

        Firebase.Auth.FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
		Firebase.Auth.Credential credential = Firebase.Auth.TwitterAuthProvider.GetCredential(TwtAuthToken,TwtAuthTokenSecret);
        //Firebase.Auth.Credential credential = Firebase.Auth.TwitterAuthProvider.GetCredential(SampleAuth, SampleSecret);

		auth.SignInWithCredentialAsync(credential).ContinueWith(task =>
        {
            if (task.IsCanceled)
            {
                Debug.LogError("SignInWithCredentialAsync was canceled.");
                return;
            }
            if (task.IsFaulted)
            {
                Debug.LogError("SignInWithCredentialAsync encountered an error: " + task.Exception);
                return;
            }

		    Firebase.Auth.FirebaseUser user = auth.CurrentUser;
            Debug.Log("UserName is " + user.DisplayName);
            Debug.Log("Photo URL is " + user.PhotoUrl.ToString());
            if (user != null)
            {
                UserName = user.DisplayName;
                UserEmail = user.Email;
                photo_url = user.PhotoUrl;
                photourlstring = user.PhotoUrl.ToString();
                // The user's Id, unique to the Firebase project.
                // Do NOT use this value to authenticate with your backend server, if you
                // have one; use User.TokenAsync() instead.
            }
        });

        SceneManager.LoadScene("Main Menu");
    }

    public void TwitterLoginBtn(){
        UnityEngine.Debug.Log("startLogin()");
        Twitter.Init();
        TwitterSession session = Twitter.Session;
        /*if(session ==  null){
            Twitter.LogIn(TwitterLoginSuccess, (ApiError error) => {
				UnityEngine.Debug.Log(error.message);
			});
        }else{
            TwitterLoginSuccess(session);
        }*/
        Twitter.LogIn(TwitterLoginSuccess, (ApiError error) => {
			UnityEngine.Debug.Log(error.message);
		});
    }

    public void TwitterLoginSuccess(TwitterSession session){
        Debug.Log("Login Success");
		TwtAuthToken = session.authToken.token;
		TwtAuthTokenSecret = session.authToken.secret;
        UserName = session.userName;
        UserID = session.id;
        StartCoroutine(_GetInfosFromAPI(UserName));
        StopCoroutine(_GetInfosFromAPI(UserName));
        //Twitter.RequestEmail(session, TwitterRequestEmailComplete, (ApiError error) => { UnityEngine.Debug.Log(error.message); });
        StartTwitterLogin();

    }

    public void TwitterLoginFail(ApiError error){
        Debug.Log("Login Fail");
    }

	public void TwitterRequestEmailComplete(string email)
	{
		UnityEngine.Debug.Log("email=" + email);
        TwitterLoginSuccess(Twitter.Session);
	}

	public IEnumerator _GetInfosFromAPI(string ScreeNname)
	{
        WWW www = new WWW(infourl + "&screen_name=" + ScreeNname);
        yield return www;
        if(www.error == null){
            RcvData = JsonMapper.ToObject(www.text);
			Debug.Log("Get API");
			photourlstring = (string)RcvData["profile_image_url"];
			UserName = (string)RcvData["name"];
			Debug.Log("UserName : " + UserName);
			Debug.Log("Photo : " + photourlstring);
        }
	}

    //Facebook Auth

    public void FBloginBtn(){
		var perms = new List<string>() { "public_profile", "email", "user_friends" };
		FB.LogInWithReadPermissions(perms, AuthCallback);
    }

	private void InitCallback()
	{
		if (FB.IsInitialized)
		{
			// Signal an app activation App Event
			FB.ActivateApp();
			// Continue with Facebook SDK
			// ...
		}
		else
		{
			Debug.Log("Failed to Initialize the Facebook SDK");
		}
	}

	private void OnHideUnity(bool isGameShown)
	{
		if (!isGameShown)
		{
			// Pause the game - we will need to hide
			Time.timeScale = 0;
		}
		else
		{
			// Resume the game - we're getting focus again
			Time.timeScale = 1;
		}
	}

	private void AuthCallback(ILoginResult result)
	{
		if (FB.IsLoggedIn)
		{
			// AccessToken class will have session details
			var aToken = Facebook.Unity.AccessToken.CurrentAccessToken;
			// Print current access token's User ID
			Debug.Log(aToken.UserId);
            FB.API("me?fields=name", Facebook.Unity.HttpMethod.GET, GetFacebookName);
			// Print current access token's granted permissions
			foreach (string perm in aToken.Permissions)
			{
				Debug.Log(perm);
			}
			photourlstring = "https" + "://graph.facebook.com/" + AccessToken.CurrentAccessToken.UserId + "/picture" + "?access_token=" + AccessToken.CurrentAccessToken.TokenString;
		}
		else
		{
			Debug.Log("User cancelled login");
		}
        FacebookAuth(Facebook.Unity.AccessToken.CurrentAccessToken.ToString());
        SceneManager.LoadScene("Main Menu");

	}

    private void FacebookAuth(string accessToken){
        Firebase.Auth.FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
		Firebase.Auth.Credential credential =
	Firebase.Auth.FacebookAuthProvider.GetCredential(accessToken);
		auth.SignInWithCredentialAsync(credential).ContinueWith(task => {
			if (task.IsCanceled)
			{
				Debug.LogError("SignInWithCredentialAsync was canceled.");
				return;
			}
			if (task.IsFaulted)
			{
				Debug.LogError("SignInWithCredentialAsync encountered an error: " + task.Exception);
				return;
			}

			Firebase.Auth.FirebaseUser newUser = task.Result;
			Debug.LogFormat("User signed in successfully: {0} ({1})",
				newUser.DisplayName, newUser.UserId);
		});
		Firebase.Auth.FirebaseUser user = auth.CurrentUser;
		if (user != null)
		{
			string myname = user.DisplayName;
			string myemail = user.Email;
			System.Uri myphoto_url = user.PhotoUrl;
			// The user's Id, unique to the Firebase project.
			// Do NOT use this value to authenticate with your backend server, if you
			// have one; use User.TokenAsync() instead.
			string uid = user.UserId;
		}
    }

	public void GetFacebookName(Facebook.Unity.IGraphResult result)
	{
		string fbName = result.ResultDictionary["name"].ToString();
        UserName = fbName;

		Debug.Log("fbName: " + fbName);
	}

    //Email Login GUI Control

    public void EmailLoginBtn(){
        LoginPanel.SetActive(true);
    }

    public void LoginBtn(){
        LoginwithEmail(LoginEmail.text, LoginPassword.text);
        SceneManager.LoadScene("Main Menu");
    }

    public void NewAccountBtn(){
        RegisterPanel.SetActive(true);
        LoginPanel.SetActive(false);
    }

    public void LoginCloseBtn(){
        LoginPanel.SetActive(false);
    }

    public void SubmitBtn(){
        if(RegistPassword.text.Equals(RegistPasswordCheck.text)){
            RegisterNewEmail(RegistEmail.text, RegistPassword.text);
			PopupMsg.text = "Account register comaplete";
			PopupPanel.SetActive(true);
        }else{
            PopupMsg.text = "Password is not same";
            PopupPanel.SetActive(true);
        }
    }

    public void RegisterCloseBtn(){
        RegisterPanel.SetActive(false);
        LoginPanel.SetActive(true);
    }

    public void PopupCloseBtn(){
        PopupPanel.SetActive(false);
    }

    //Email Auth

    private void RegisterNewEmail(string email, string password){
        Firebase.Auth.FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
		auth.CreateUserWithEmailAndPasswordAsync(email, password).ContinueWith(task => {
			if (task.IsCanceled)
			{
				Debug.LogError("CreateUserWithEmailAndPasswordAsync was canceled.");
				return;
			}
			if (task.IsFaulted)
			{
				Debug.LogError("CreateUserWithEmailAndPasswordAsync encountered an error: " + task.Exception);
				return;
			}

			// Firebase user has been created.
			Firebase.Auth.FirebaseUser newUser = task.Result;
			Debug.LogFormat("Firebase user created successfully: {0} ({1})",
				newUser.DisplayName, newUser.UserId);
            
		});
		
    }

    private void LoginwithEmail(string email, string password){
        Firebase.Auth.FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
		auth.SignInWithEmailAndPasswordAsync(email, password).ContinueWith(task => {
			if (task.IsCanceled)
			{
				PopupMsg.text = "Check your Email or Password";
				PopupPanel.SetActive(true);
				Debug.LogError("SignInWithEmailAndPasswordAsync was canceled.");
				return;
			}
			if (task.IsFaulted)
			{
				PopupMsg.text = "Check your Email or Password";
				PopupPanel.SetActive(true);
				Debug.LogError("SignInWithEmailAndPasswordAsync encountered an error: " + task.Exception);
				return;
			}

			Firebase.Auth.FirebaseUser newUser = task.Result;
            UserName = newUser.DisplayName;
			Debug.LogFormat("User signed in successfully: {0} ({1})",
				newUser.DisplayName, newUser.UserId);
		});
		Firebase.Auth.FirebaseUser user = auth.CurrentUser;
		if (user != null)
		{
			user.SendEmailVerificationAsync().ContinueWith(task => {
				if (task.IsCanceled)
				{
					Debug.LogError("SendEmailVerificationAsync was canceled.");
					return;
				}
				if (task.IsFaulted)
				{
					Debug.LogError("SendEmailVerificationAsync encountered an error: " + task.Exception);
					return;
				}

				Debug.Log("Email sent successfully.");
			});
			string myname = user.DisplayName;
			string myemail = user.Email;
			System.Uri myphoto_url = user.PhotoUrl;
			// The user's Id, unique to the Firebase project.
			// Do NOT use this value to authenticate with your backend server, if you
			// have one; use User.TokenAsync() instead.
			string uid = user.UserId;
		}
    }

}