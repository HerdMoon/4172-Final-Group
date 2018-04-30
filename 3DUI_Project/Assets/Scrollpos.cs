using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Scrollpos : MonoBehaviour {

	public Canvas canv;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {
//		Vector3 pos = Camera.main.WorldToScreenPoint (this.transform.position);
		canv.transform.rotation = this.transform.rotation;
		canv.transform.position = this.transform.position;//pos;

	}
}

