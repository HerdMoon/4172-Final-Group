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
	private GameObject successInfo;
	private GameObject Image01;
	private GameObject Image02;
	private GameObject Image03;
	private GameObject Image04;
	private GameObject Image05;
	private GameObject Recipe1;
	private GameObject Recipe2;
	private GameObject Recipe3;
	private GameObject Recipe4;

	private int recipe = -1;
	private string selectedRecipe = ""; 


	// Use this for initialization
	void Start () {
		//		Debug.Log ("Enter the take photo scene!!!!!!!!!!");
		background = GameObject.Find ("Background").GetComponent<RawImage>();
		background.enabled = true;
		buttonpanel = GameObject.Find ("ButtonPanel");
		scroll = GameObject.Find ("OnSelectPanel");
		Image01 = GameObject.Find ("Image01");
		Image02 = GameObject.Find ("Image02");
		Image03 = GameObject.Find ("Image03");
		Image04 = GameObject.Find ("Image04");
		Image05 = GameObject.Find ("Image05");
		Recipe1 = GameObject.Find ("Recipe1");
		Recipe2 = GameObject.Find ("Recipe2");
		Recipe3 = GameObject.Find ("Recipe3");
		Recipe4 = GameObject.Find ("Recipe4");
		successInfo = GameObject.Find ("Info");

		buttonpanel.SetActive (true);
		scroll.SetActive (false);
		nontexture = true;


		//		mScroll.SetActive (false);


		//		successInfo.SetActive (false);


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


	IEnumerator waitSubmitSeconds(){
		Debug.Log ("waiting!");
		yield return new WaitForSeconds (3);
		GameObject.Find ("Info").GetComponent<Text> ().enabled = false;
		Debug.Log ("wait completed!");
		endTaking ();
	}


	IEnumerator waitRemindSeconds(){
		Debug.Log ("waiting!");
		yield return new WaitForSeconds (3);
		GameObject.Find ("Info").GetComponent<Text> ().enabled = false;
		Debug.Log ("wait completed!");
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
		if (gameObject.GetComponent<database> ().submitNum != 0) {
			StartCoroutine(waitSubmitSeconds ());
			gameObject.GetComponent<database> ().submitNum = 0;
		}
	}

	public void clearSelection(){
		Image01.GetComponent<RawImage> ().color = Color.white;
		Image02.GetComponent<RawImage> ().color = Color.white;
		Image03.GetComponent<RawImage> ().color = Color.white;
		Image04.GetComponent<RawImage> ().color = Color.white;
		Image05.GetComponent<RawImage> ().color = Color.white;
		Recipe1.GetComponent<RawImage> ().color = Color.white;
		Recipe2.GetComponent<RawImage> ().color = Color.white;
		Recipe3.GetComponent<RawImage> ().color = Color.white;
		Recipe4.GetComponent<RawImage> ().color = Color.white;
	}


	public void startTaking(){
		clearSelection ();
		buttonpanel.SetActive (false);
		scroll.SetActive (true);
		successInfo.GetComponent<Text>().enabled = false;
		mAccessCameraImage = false;

	}


	public void endTaking(){
		clearSelection ();
		buttonpanel.SetActive (true);
		scroll.SetActive (false);
		mAccessCameraImage = true;
		recipe = -1;
		selectedRecipe = "";
	}

	public void backToMenu(){
		//		Debug.Log ("Go to MainMenu");
		SceneManager.LoadScene ("MainMenu");
	}


	public void addRecipe(int num){
		string currentRecipe = "Recipe" + num.ToString();
		recipe = num;
		if (currentRecipe == selectedRecipe)
			return;
		GameObject.Find (currentRecipe).GetComponent<RawImage> ().color = Color.grey;
		if(selectedRecipe != "")
			GameObject.Find (selectedRecipe).GetComponent<RawImage> ().color = Color.white;
		selectedRecipe = currentRecipe;
	}

	public void submit(){

		Texture2D flipped = new Texture2D(texture.width,texture.height);

		int xN = texture.width;
		int yN = texture.height;


		for (int i = 0; i < xN; i++)
		{
			for (int j = 0; j < yN; j++)
			{
				flipped.SetPixel(i, yN - j - 1, texture.GetPixel(i, j));
			}
		}
		flipped.Apply();

		List<string> mats = new List<string> ();
		if (Image01.GetComponent<Image01Script> ().selected == true){
			mats.Add (Image01.GetComponent<Image01Script> ().name);
		}
		if (Image02.GetComponent<Image02Script> ().selected == true){
			mats.Add (Image02.GetComponent<Image02Script> ().name);
		}
		if (Image03.GetComponent<Image03Script> ().selected == true){
			mats.Add (Image03.GetComponent<Image03Script> ().name);
		}
		if (Image04.GetComponent<Image04Script> ().selected == true){
			mats.Add (Image04.GetComponent<Image04Script> ().name);
		}
		if (Image05.GetComponent<Image05Script> ().selected == true){
			mats.Add (Image05.GetComponent<Image05Script> ().name);
		}
		System.DateTime epochStart = new System.DateTime(1970, 1, 1, 0, 0, 0, System.DateTimeKind.Utc);
		int time = (int)(System.DateTime.UtcNow - epochStart).TotalSeconds;
		if (mats.Count > 0 && recipe != -1) {
			gameObject.GetComponent<database> ().Insert_Data (flipped, mats, time, recipe);
		} else {
			GameObject.Find ("Info").GetComponent<Text>().text = "No material or recipe is selected!";
			GameObject.Find("Info").GetComponent<Text>().enabled =  true;
			StartCoroutine(waitRemindSeconds ());
			clearSelection ();
		}
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
