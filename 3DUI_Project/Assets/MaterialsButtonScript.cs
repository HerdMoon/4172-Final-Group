using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MaterialsButtonScript : MonoBehaviour {

	public bool selected = false;
	private GameObject MatPanel;
	private Color origincolor;

	void Start(){
		MatPanel = GameObject.Find ("MaterialScroll");
		MatPanel.SetActive (false);
	}
	public void ButtonClick(){
		if (!selected) {
			MatPanel.SetActive (true);
			origincolor = gameObject.GetComponent<Image>().color;
			gameObject.GetComponent<Image> ().color = Color.green;
		} else {
			MatPanel.SetActive (false);
			gameObject.GetComponent<Image> ().color = origincolor;
		}
		selected = !selected;
			
	}
}
