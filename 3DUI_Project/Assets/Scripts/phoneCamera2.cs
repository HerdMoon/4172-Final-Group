using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class phoneCamera2 : MonoBehaviour {

	private Vuforia.Image.PIXEL_FORMAT mPixelFormat = Vuforia.Image.PIXEL_FORMAT.UNKNOWN_FORMAT;

	private bool mAccessCameraImage = true;
	private bool mFormatRegistered = false;

	private GameObject buttonpanel;
	private GameObject scroll;
	private RawImage background;
	private Texture2D texture;
	private bool nontexture;

	// Use this for initialization
	void Start () {
//		Debug.Log ("Enter the take photo scene!!!!!!!!!!");
		background = GameObject.Find ("Background").GetComponent<RawImage>();
		background.enabled = true;
		buttonpanel = GameObject.Find ("ButtonPanel");
		scroll = GameObject.Find ("Scroll");
		buttonpanel.SetActive (true);
		scroll.SetActive (false);
		nontexture = true;


//		mPixelFormat = Vuforia.Image.PIXEL_FORMAT.GRAYSCALE; // Use RGB888 for mobile
		mPixelFormat = Vuforia.Image.PIXEL_FORMAT.RGB888;
 

        // Register Vuforia life-cycle callbacks:
        VuforiaARController.Instance.RegisterVuforiaStartedCallback(OnVuforiaStarted);
        VuforiaARController.Instance.RegisterTrackablesUpdatedCallback(OnTrackablesUpdated);
        VuforiaARController.Instance.RegisterOnPauseCallback(OnPause);
	}

	void OnVuforiaStarted()
	{
		// Try register camera image format
		CameraDevice.Instance.SetFrameFormat(mPixelFormat, false);
		if (CameraDevice.Instance.SetFrameFormat(mPixelFormat, true))
		{
//			CameraDevice.Instance.Start ();

			Debug.Log("Successfully registered pixel format " + mPixelFormat.ToString());

			mFormatRegistered = true;
		}
		else
		{
			Debug.LogError(
				"\nFailed to register pixel format: " + mPixelFormat.ToString() +
				"\nThe format may be unsupported by your device." +
				"\nConsider using a different pixel format.\n");

			mFormatRegistered = false;
		}

	}


	void OnTrackablesUpdated()
	{
		
	}

	void Update(){

		if (mFormatRegistered && SceneManager.GetActiveScene().name == "TakePhoto")
		{
			if (mAccessCameraImage) {
				Vuforia.Image image = CameraDevice.Instance.GetCameraImage(mPixelFormat);
				if (image != null) {
					if (nontexture == true) {
						Debug.Log ("New texture!");
						texture = new Texture2D (image.Width, image.Height);
						nontexture = false;
					}
//					Debug.Log (image.Pixels[50]);   
					image.CopyToTexture (texture);
					texture.Apply ();
					if (background != null) {
//						Debug.Log (texture.GetPixel(30, 30));
//						Debug.Log ("NOT NULL BACKGROUND");
						background.texture = texture;
						background.transform.localScale = new Vector3 (1f, -1f, 1f);
					}
				}

			} 
		}
	}

	public void startTaking(){

		buttonpanel.SetActive (false);
		scroll.SetActive (true);
		mAccessCameraImage = false;

	}
		

	public void endTaking(){
		buttonpanel.SetActive (true);
		scroll.SetActive (false);
		mAccessCameraImage = true;
	}

	public void backToMenu(){
//		Debug.Log ("Go to MainMenu");
		SceneManager.LoadScene ("MainMenu");
	}


	void OnPause(bool paused)
	{
		if (paused)
		{
			Debug.Log("App was paused");
			UnregisterFormat();
		}
		else
		{
			Debug.Log("App was resumed");
			RegisterFormat();
		}
	}


	void RegisterFormat()
	{
		if (CameraDevice.Instance.SetFrameFormat(mPixelFormat, true))
		{
			Debug.Log("Successfully registered camera pixel format " + mPixelFormat.ToString());
			mFormatRegistered = true;
		}
		else
		{
			Debug.LogError("Failed to register camera pixel format " + mPixelFormat.ToString());
			mFormatRegistered = false;
		}
	}

	void UnregisterFormat()
	{
		Debug.Log("Unregistering camera pixel format " + mPixelFormat.ToString());
		CameraDevice.Instance.SetFrameFormat(mPixelFormat, false);
		mFormatRegistered = false;
	}
}
