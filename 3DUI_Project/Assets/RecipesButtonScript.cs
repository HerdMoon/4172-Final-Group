using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RecipesButtonScript : MonoBehaviour {

	public bool selected = false;
	private GameObject RecPanel;
	private GameObject backButton;
	private Color origincolor;

	void Start(){
		RecPanel = GameObject.Find ("RecipeScroll");
		backButton = GameObject.Find ("Back");
		RecPanel.SetActive (false);
	}
	public void ButtonClick(){
		if (GameObject.Find ("Materials").GetComponent<MaterialsButtonScript> ().selected) {
			GameObject.Find ("Materials").GetComponent<MaterialsButtonScript> ().ButtonClick ();
		}
		if (selected == false) {
			RecPanel.SetActive (true);
			origincolor = gameObject.GetComponent<Image>().color;
			gameObject.GetComponent<Image> ().color = Color.green;
			backButton.SetActive (false);
		} else {
			RecPanel.SetActive (false);
			gameObject.GetComponent<Image> ().color = origincolor;
			backButton.SetActive (true);
		}
		selected = !selected;
	}
}
