using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class wandScript : MonoBehaviour {


	public bool signal;     //listen to the signal from radial progress bar, finishes = true

	string nameCol;
	GameObject progress;

	// Use this for initialization
	void Start () {
		progress = GameObject.Find ("RadialProgressBar");
		signal = false;
	}
	
	// Update is called once per frame
	void Update () {
		if (signal == true) {   //upload the signal of count finishing
			signal = false;
			switch (nameCol) {
			case "drawer1":
				GameObject.Find ("Wand").GetComponent<WandSelection> ().state = 1;
				break;
			case "drawer2":
				GameObject.Find ("Wand").GetComponent<WandSelection> ().state = 2;
				break;
			case "drawer3":
				GameObject.Find ("Wand").GetComponent<WandSelection> ().state = 3;
				break;
			default:
				GameObject.Find ("Wand").GetComponent<WandSelection> ().state = 0;
				break;
			}
		}
	}


	void OnTriggerEnter(Collider instance){
		
		Debug.Log (instance.name + " Collide!!");
		nameCol = instance.name;

		progress.GetComponent<RadialProgressBar> ().signalCol = true;
	}

	void OnTriggerExit(Collider instance){

		Debug.Log (instance.name + " Exit!!");

		progress.GetComponent<RadialProgressBar> ().signalCol = false;
	}
}
