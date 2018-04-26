using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WandSelection : MonoBehaviour {

	public int state = 0;

	GameObject canv;

	// Use this for initialization
	void Start () {
		canv = GameObject.Find("Canvas");
		canv.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
		// im trying to modify the text here, according to the collider.

		switch(state) {
		case 1:
			canv.SetActive (true);
			GameObject.Find ("PanelTopic").GetComponent<Text> ().text = "gold";
			break;
		case 2:
			canv.SetActive (true);
			GameObject.Find ("PanelTopic").GetComponent<Text> ().text = "silver";
			break;
		case 3:
			canv.SetActive (true);
			GameObject.Find ("PanelTopic").GetComponent<Text> ().text = "silver";
			break;
		default:
			canv.SetActive (false);
			break;
		}
	}
}
