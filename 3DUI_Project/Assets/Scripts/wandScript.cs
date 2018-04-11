using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class wandScript : MonoBehaviour {

	// Use this for initialization

	GameObject canv = GameObject.Find("Canvas");
	void Start () {
		canv.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
		
	}


	void OnTriggerEnter(Collider instance){
		
		Debug.Log (instance.name + " Collide!!");

		// im trying to modify the text here, according to the collider.

		if (instance.name == "drawer1") {
			GameObject.Find ("Canvas").SetActive (true);
			GameObject.Find ("PanelTopic").GetComponent<Text> ().text = "gold";
		}
		else {
			GameObject.Find ("Canvas").SetActive (true);
			GameObject.Find ("PanelTopic").GetComponent<Text> ().text = "silver";
		}
	}
}
