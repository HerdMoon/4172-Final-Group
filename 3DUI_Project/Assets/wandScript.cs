using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class wandScript : MonoBehaviour {


	public bool signal;     //listen to the signal from radial progress bar, finishes = true

	string nameCol;
	GameObject canv1, canv2, canv3, canv4, UIcube, progress;

	// Use this for initialization
	void Start () {
		progress = GameObject.Find ("RadialProgressBar");
		canv1 = GameObject.Find ("Canvas1");
		canv2 = GameObject.Find("Canvas2");
		canv3 = GameObject.Find ("Canvas3");
		canv4 = GameObject.Find("Canvas4");
		UIcube = GameObject.Find ("UICube");
		signal = false;

	}
	
	// Update is called once per frame
	void Update () {
		if (signal == true) {   //upload the signal of count finishing
			signal = false;
			List<string> info;
			switch (nameCol) {
			case "drawer1":
				setactive ();
				info = getinfo (1);
				StartCoroutine(infoprocess (info));
				GameObject.Find ("Wand").GetComponent<WandSelection> ().state = 1;
				break;
			case "drawer2":
				setactive ();
				info = getinfo (2);
				StartCoroutine(infoprocess (info));
				GameObject.Find ("Wand").GetComponent<WandSelection> ().state = 2;
				break;
			case "drawer3":
				setactive ();
				info = getinfo (3);
				StartCoroutine(infoprocess (info));
				GameObject.Find ("Wand").GetComponent<WandSelection> ().state = 3;
				break;
			case "MatImage1":
				//send url to travel scripts
				break;
			case "MatImage2":
				break;
			default:
				setinactive ();
				GameObject.Find ("Wand").GetComponent<WandSelection> ().state = 0;
				break;
			}
		}
	}


	void OnTriggerEnter(Collider instance){
		
		Debug.Log (instance.name + " Collide!!");
		nameCol = instance.name;

		progress.GetComponent<RadialProgressBar> ().signalCol = true;
	}

	void OnTriggerExit(Collider instance){

		Debug.Log (instance.name + " Exit!!");

		progress.GetComponent<RadialProgressBar> ().signalCol = false;
	}

	private List<string> getinfo(int id) {
		//id, name, note, symbol, topic, description, image1, image2
//		string[] info = {id.ToString(), "gold", "precious, I love it!", "https://pictogram-illustration.com/material/128-poster-free.jpg", 
//			"gold", "It is very hard so you should not eat it.", "https://upload.wikimedia.org/wikipedia/commons/thumb/d/d7/Gold-crystals.jpg/2560px-Gold-crystals.jpg",
//			"https://www.flightclub.com/media/catalog/product/cache/1/image/1600x1140/9df78eab33525d08d6e5fb8d27136e95/a/d/adidas-js-wings-30-gold-batman-goldmt-goldmt-goldmt-201074_1.jpg"
//		};

		string name = "";
		bool danger = false;
		string description = "";
		List<string> url = new List<string>();
		GameObject.Find("ARCamera").GetComponent<database>().Lookup_Drawer (ref name, "Wood_Drawer");
		GameObject.Find("ARCamera").GetComponent<database>().Get_Description (name, ref danger, ref description);
		GameObject.Find("ARCamera").GetComponent<database>().Get_Image_URL (name, ref url);


		List<string> info = new List<string>();

		info.Add (id.ToString());
		info.Add (name);
		info.Add (description);
		info.Add ("https://pictogram-illustration.com/material/128-poster-free.jpg");
		info.Add (name);
		info.Add (description);
		info.Add (url[0]);
		info.Add (url[1]);
		Debug.Log (url [1]);
		return info;
	}

	private IEnumerator infoprocess(List<string> info) {
		GameObject.Find ("MatName").GetComponent<Text> ().text = info[1];
		GameObject.Find ("MatNote").GetComponent<Text> ().text = info[2];
		GameObject.Find ("MatTopic").GetComponent<Text> ().text = info[4];
		GameObject.Find ("MatDescription").GetComponent<Text> ().text = info[5];
		WWW www = new WWW (info[3]);
		yield return www;
		GameObject.Find ("MatSymbol").GetComponent<RawImage> ().texture = www.texture;
		www = new WWW (info[6]);
		yield return www;
		GameObject.Find ("MatImage1").GetComponent<RawImage> ().texture = www.texture;
		GameObject.Find ("MatImage1").GetComponent<MatImageSc> ().url = info[6];

		www = new WWW (info[7]);

		yield return www;
		GameObject.Find ("MatImage2").GetComponent<RawImage> ().texture = www.texture;
		GameObject.Find ("MatImage1").GetComponent<MatImageSc> ().url = info[7];

	}

	public void setactive(){
		canv1.SetActive (true);
		canv2.SetActive (true);
		canv3.SetActive (true);
		canv4.SetActive (true);
		UIcube.SetActive (true);
	}

	public void setinactive(){
		canv1.SetActive (false);
		canv2.SetActive (false);
		canv3.SetActive (false);
		canv4.SetActive (false);
		UIcube.SetActive (false);
	}
}
