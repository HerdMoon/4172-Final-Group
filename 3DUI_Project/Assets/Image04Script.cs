using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Image04Script : MonoBehaviour {

	public bool selected = false;
	public string name = "m4";
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
