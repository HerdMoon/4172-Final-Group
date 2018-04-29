using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class menuScript : MonoBehaviour {

	void Start(){

		VuforiaRuntime.Instance.Deinit ();

	}

	public void changemeunscene(string scenename){
		Application.LoadLevel (scenename);
	}
}
