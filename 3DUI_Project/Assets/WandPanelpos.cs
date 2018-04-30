using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WandPanelpos : MonoBehaviour {
	GameObject p;

	// Use this for initialization
	void Start () {
		p = GameObject.Find ("Panelpos");
		p.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
		
		transform.position = p.transform.position;
		transform.rotation = p.transform.rotation;
	}
}
