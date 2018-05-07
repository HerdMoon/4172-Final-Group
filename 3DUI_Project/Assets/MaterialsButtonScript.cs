using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MaterialsButtonScript : MonoBehaviour {

	public bool selected = false;
	private GameObject MatPanel;
	private GameObject backButton;
	private Color origincolor;

	void Start(){
		MatPanel = GameObject.Find ("MaterialScroll");
		backButton = GameObject.Find ("Back");
		MatPanel.SetActive (false);
	}
	public void ButtonClick(){
		if (GameObject.Find ("Recipes").GetComponent<RecipesButtonScript> ().selected) {
			GameObject.Find ("Recipes").GetComponent<RecipesButtonScript> ().ButtonClick ();
		}
		if (selected == false) {
			MatPanel.SetActive (true);
			origincolor = gameObject.GetComponent<Image>().color;
			gameObject.GetComponent<Image> ().color = Color.green;
			backButton.transform.localScale = new Vector3 (1.0f, -1.0f, 1.0f);
			backButton.SetActive (false);
		} else {
			MatPanel.SetActive (false);
			gameObject.GetComponent<Image> ().color = origincolor;
			backButton.SetActive (true);
		}
		selected = !selected;
	}
}
