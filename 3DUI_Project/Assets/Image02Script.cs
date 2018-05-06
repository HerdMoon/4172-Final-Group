﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Image02Script : MonoBehaviour {

	public bool selected = false;
	public string name = "m2";
	private Color origincolor;

	public void buttonClick(){
		if (!selected) {
			origincolor = gameObject.GetComponent<RawImage> ().color;
			gameObject.GetComponent<RawImage> ().color = Color.grey;
			selected = true;
		} else {
			gameObject.GetComponent<RawImage> ().color = origincolor;
			selected = false;
		}
	}
}
