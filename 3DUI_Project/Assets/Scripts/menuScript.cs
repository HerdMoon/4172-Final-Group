using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;

public class menuScript : MonoBehaviour {

	public AspectRatioFitter bg;
	private WebCamTexture backCam;

//	void Start(){
//		WebCamDevice[] devices = WebCamTexture.devices;
//
//		if (devices.Length == 0) {
//			Debug.Log ("No Camera!!");
//			return;
//		}
//
//		for (int i = 0; i < devices.Length; i++) {
//			if (!devices [i].isFrontFacing) {
//				backCam = new WebCamTexture (devices [i].name, Screen.width, Screen.height);
//			}
//		}
//
//		if (backCam == null) {
//			Debug.Log ("Unable to find back camera!");
//			return;
//		}
////		VuforiaRuntime.Instance.Deinit ();
//		float ratio = (float)backCam.width / (float)backCam.height;
//		bg.aspectRatio = ratio;
//	}

	public void changemeunscene(string scenename){
		Application.LoadLevel (scenename);
	}
}
