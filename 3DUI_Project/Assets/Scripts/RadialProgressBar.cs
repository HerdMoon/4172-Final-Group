using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RadialProgressBar : MonoBehaviour {

	public Transform LoadingBar;
	public Transform Text;
	public bool signalCol = false;  //collision signal

	float currentAmount;
	float speed = 30;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (signalCol == false) {
			currentAmount = 0;
			Text.GetComponent<Text> ().text = "0%";
		}
		else {
			if (currentAmount < 100) {
				currentAmount += speed * Time.deltaTime;
				Text.GetComponent<Text> ().text = ((int)currentAmount).ToString () + "%";
				Text.gameObject.SetActive (true);
			} else
				GameObject.Find ("WandCube").GetComponent<wandScript> ().signal = true;
		}
		LoadingBar.GetComponent<Image> ().fillAmount = currentAmount / 100;
	}
}
