using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Image05Script : MonoBehaviour {

	private bool selected = false;
	private Color origincolor;

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
