using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class phoneCamera : MonoBehaviour {

	private bool camAvailable;
	private WebCamTexture backCam;
	private Texture defaultBackground;

	public RawImage background;
	public AspectRatioFitter fit;

	private GameObject buttonpanel;
	private GameObject scroll;

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
		Texture2D PhotoTaken= new Texture2D(backCam.width, backCam.height);
		PhotoTaken.SetPixels(backCam.GetPixels());

		PhotoTaken.Apply();
		background.texture = PhotoTaken;
		buttonpanel.SetActive (false);
		scroll.SetActive (true);
		taken = true;

	}

	public void BackToCamera(){
		buttonpanel.SetActive (true);
		scroll.SetActive (false);
		taken = false;
		background.texture = backCam;
	}

}
