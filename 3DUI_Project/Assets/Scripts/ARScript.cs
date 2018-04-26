using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class ARScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
//		VuforiaBehaviour.Instance.enabled = true/false;
		VuforiaRuntime.Instance.InitVuforia ();
		GetComponent<VuforiaBehaviour> ().enabled = true;
		GetComponent<DefaultInitializationErrorHandler> ().enabled = true;
	}
	
	// Update is called once per frame
	void Update () {
//		//Go back to main menu: need to deinit vuforia camera
//		VuforiaRuntime.Instance.Deinit ();
//		GetComponent<VuforiaBehaviour> ().enabled = false;
//		GetComponent<DefaultInitializationErrorHandler> ().enabled = false;
		
	}
}
