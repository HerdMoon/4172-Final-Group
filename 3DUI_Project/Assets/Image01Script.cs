using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Image01Script : MonoBehaviour {

	private bool selected = false;
	private Color origincolor;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void buttonClick(){
		if (!selected) {
			origincolor = gameObject.GetComponent<Image> ().color;
			gameObject.GetComponent<Image> ().color = Color.grey;
			selected = true;
		} else {
			gameObject.GetComponent<Image> ().color = origincolor;
			selected = false;
		}
	}
}
