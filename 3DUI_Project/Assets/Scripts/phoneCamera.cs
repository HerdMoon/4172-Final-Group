using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class phoneCamera : MonoBehaviour {

	private bool camAvailable;
	private WebCamTexture backCam;
	private Texture defaultBackground;

	public RawImage background;
	public AspectRatioFitter fit;

	private GameObject buttonpanel;
	private GameObject scroll;
	private Texture2D reverse;

	private bool taken;


	private void Start(){
		defaultBackground = background.texture;
		WebCamDevice[] devices = WebCamTexture.devices;

		buttonpanel = GameObject.Find ("ButtonPanel");
		scroll = GameObject.Find ("Scroll");
		buttonpanel.SetActive (true);
		scroll.SetActive (false);
		taken = false;

		if (devices.Length == 0) {
			Debug.Log ("No Camera!!");
			camAvailable = false;
			return;
		}

		for (int i = 0; i < devices.Length; i++) {
			if (!devices [i].isFrontFacing) {
				backCam = new WebCamTexture (devices [i].name, Screen.width, Screen.height);
			}
		}

		if (backCam == null) {
			Debug.Log ("Unable to find back camera!");
			return;
		}

		backCam.Play ();
		background.texture = backCam;

		camAvailable = true;

	}

	private void Update(){
		if (!camAvailable) {
			return;
		}
			
		if (!taken) {
			backCam.Play ();
			background.texture = backCam;
			float ratio = (float)backCam.width / (float)backCam.height;
			fit.aspectRatio = ratio;
			float scaleY = backCam.videoVerticallyMirrored ? -1f : 1f;
			background.rectTransform.localScale = new Vector3 (1f, scaleY, 1f);

			int orient = -backCam.videoRotationAngle;
			background.rectTransform.localEulerAngles = new Vector3 (0, 0, orient);

		}

	}
		

	public void TakePhoto(){

		if (!camAvailable) {
			return;
		}
		//		Texture2D PhotoTaken= new Texture2D(backCam.width, backCam.height);
		//		PhotoTaken = background.texture as Texture2D;
		Texture2D PhotoTaken= new Texture2D(backCam.width, backCam.height);
		PhotoTaken.SetPixels(backCam.GetPixels());
		PhotoTaken.Apply();
		reverse = FlipTexture (PhotoTaken, true);
//		Texture2D reverse1 = FlipTexture (PhotoTaken, true);
		background.texture = reverse;
		buttonpanel.SetActive (false);
		scroll.SetActive (true);
		taken = true;

	}

	Texture2D FlipTexture(Texture2D original, bool reverse){
		Texture2D flipped = new Texture2D(original.width,original.height);

		int xN = original.width;
		int yN = original.height;


		for (int i = 0; i < xN; i++)
		{
			for (int j = 0; j < yN; j++)
			{
				if (reverse)
				{
					flipped.SetPixel(i, yN - j - 1, original.GetPixel(i, j));
				}
				else
				{
					flipped.SetPixel(xN - i - 1, j, original.GetPixel(i, j));
				}
			}
		}
		flipped.Apply();

		return flipped;
	}

	public void submit(){
		List<string> mats = new List<string> ();
		if (GameObject.Find ("Image01").GetComponent<Image01Script> ().selected == true){
			mats.Add (GameObject.Find ("Image01").GetComponent<Image01Script> ().name);
		}
		if (GameObject.Find ("Image02").GetComponent<Image01Script> ().selected == true){
			mats.Add (GameObject.Find ("Image02").GetComponent<Image01Script> ().name);
		}
		if (GameObject.Find ("Image03").GetComponent<Image01Script> ().selected == true){
			mats.Add (GameObject.Find ("Image03").GetComponent<Image01Script> ().name);
		}
		if (GameObject.Find ("Image04").GetComponent<Image01Script> ().selected == true){
			mats.Add (GameObject.Find ("Image04").GetComponent<Image01Script> ().name);
		}
		if (GameObject.Find ("Image05").GetComponent<Image01Script> ().selected == true){
			mats.Add (GameObject.Find ("Image05").GetComponent<Image01Script> ().name);
		}
		System.DateTime epochStart = new System.DateTime(1970, 1, 1, 0, 0, 0, System.DateTimeKind.Utc);
		int time = (int)(System.DateTime.UtcNow - epochStart).TotalSeconds;
		gameObject.GetComponent<database>().Insert_Data (reverse, mats, time);
	}

	public void BackToCamera(){
		buttonpanel.SetActive (true);
		scroll.SetActive (false);
		taken = false;
		background.texture = backCam;
	}

	public void BackToMainMenu(string name){
		taken = true;
		SceneManager.LoadScene (name);

	}

}
