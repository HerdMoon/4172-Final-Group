using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class menuScript : MonoBehaviour {

	public void changemeunscene(string scenename){

		Application.LoadLevel (scenename);
	}
}
