using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Firebase.Auth;

public class MenuController : MonoBehaviour {

	public Text UserName;
    public Image ProfileImage;
	// Use this for initialization
	void Start () {
        DontDestroyOnLoad(transform.gameObject);
        updateInfos();
	}

    void Update(){
        if(!UserName.text.Equals(LoginModule.UserName)){
            updateInfos();
        }
    }

    public void updateInfos(){
		Debug.Log("My Name is" + LoginModule.UserName);
		UserName.text = LoginModule.UserName;
		StartCoroutine(_GetImageFromUrl(LoginModule.photourlstring));
		StopCoroutine(_GetImageFromUrl(LoginModule.photourlstring));
    } 

    public IEnumerator _GetImageFromUrl(string url)
	{
		WWW imagewww = new WWW(url);
		yield return imagewww;
        ProfileImage.sprite = Sprite.Create(imagewww.texture, new Rect(0, 0, imagewww.texture.width, imagewww.texture.height), new Vector2(0, 0));
	}

    public void SingleGameBtn(){
        SceneManager.LoadScene("Main Game");
    }

}
