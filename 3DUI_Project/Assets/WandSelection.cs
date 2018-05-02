using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WandSelection : MonoBehaviour {

	public int state = 0;

	public bool isTravel = false;

	GameObject canv1, canv2, canv3, canv4, UIcube, drawer1, drawer2, drawer3;

	// Use this for initialization
	void Start () {
		canv1 = GameObject.Find ("Canvas1");
		canv2 = GameObject.Find("Canvas2");
		canv3 = GameObject.Find ("Canvas3");
		canv4 = GameObject.Find("Canvas4");
		UIcube = GameObject.Find ("UICube");
//		canv1.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
		if (!isTravel) {
			// im trying to modify the text here, according to the collider.
			drawer1 = GameObject.Find ("d1Plane");
			drawer2 = GameObject.Find ("d2Plane");
			drawer3 = GameObject.Find ("d3Plane");
			switch (state) {
			case 1:
				setactive ();
//			GameObject.Find ("MatName").GetComponent<Text> ().text = "gold";
				if (drawer1.GetComponent<Renderer> () != null)
					drawer1.GetComponent<Renderer> ().materials [0].color = Color.red;
				if (drawer2.GetComponent<Renderer> () != null)
					drawer2.GetComponent<Renderer> ().materials [0].color = Color.yellow;
				if (drawer3.GetComponent<Renderer> () != null)
					drawer3.GetComponent<Renderer> ().materials [0].color = Color.yellow;
				break;
			case 2:
				setactive ();
//			GameObject.Find ("PanelTopic").GetComponent<Text> ().text = "silver";
				if (drawer2.GetComponent<Renderer> () != null)
					drawer2.GetComponent<Renderer> ().materials [0].color = Color.red;
				if (drawer1.GetComponent<Renderer> () != null)
					drawer1.GetComponent<Renderer> ().materials [0].color = Color.yellow;
				if (drawer3.GetComponent<Renderer> () != null)
					drawer3.GetComponent<Renderer> ().materials [0].color = Color.yellow;
				break;
			case 3:
				setactive ();
//			GameObject.Find ("PanelTopic").GetComponent<Text> ().text = "silver";
				if (drawer3.GetComponent<Renderer> () != null)
					drawer3.GetComponent<Renderer> ().materials [0].color = Color.red;
				if (drawer2.GetComponent<Renderer> () != null)
					drawer2.GetComponent<Renderer> ().materials [0].color = Color.yellow;
				if (drawer1.GetComponent<Renderer> () != null)
					drawer1.GetComponent<Renderer> ().materials [0].color = Color.yellow;
				break;
			default:
				setinactive ();

				if (drawer1.GetComponent<Renderer> () != null)
					drawer1.GetComponent<Renderer> ().materials [0].color = Color.yellow;
				if (drawer2.GetComponent<Renderer> () != null)
					drawer2.GetComponent<Renderer> ().materials [0].color = Color.yellow;
				if (drawer3.GetComponent<Renderer> () != null)
					drawer3.GetComponent<Renderer> ().materials [0].color = Color.yellow;
				break;
			}
		}
	}

	public void setactive(){
		canv1.SetActive (true);
		canv2.SetActive (true);
		canv3.SetActive (true);
		canv4.SetActive (true);
		UIcube.SetActive (true);
	}

	public void setinactive(){
		canv1.SetActive (false);
		canv2.SetActive (false);
		canv3.SetActive (false);
		canv4.SetActive (false);
		UIcube.SetActive (false);
	}


}
