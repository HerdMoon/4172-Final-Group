using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class ARScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
//		VuforiaRuntime.Instance.InitVuforia ();
//		GetComponent<VuforiaBehaviour> ().enabled = true;
//		GetComponent<DefaultInitializationErrorHandler> ().enabled = true;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void GoMainMenu(string scenename){
//		GetComponent<VuforiaBehaviour> ().enabled = false;
//		GetComponent<DefaultInitializationErrorHandler> ().enabled = false;
		Application.LoadLevel (scenename);
	}
}
