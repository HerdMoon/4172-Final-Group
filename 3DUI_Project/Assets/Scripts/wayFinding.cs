using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class wayFinding : MonoBehaviour {

	public GameObject arrowInstance;
	public Material mat;
	public string url;

	public GameObject startTravelBtn;
	public GameObject finishTravelBtn;
	public GameObject startScanBtn;
	public GameObject finishScanBtn;

	public GameObject wandCube;

	private List<string> mat_List;
	private string drawer;

	private Hashtable selectedObjTable;

	private Vector3 start;
	private Hashtable table;
	public Hashtable database;

	private WandSelection ws;
	private database db;
	private bool traveling;

	private bool flag1;
	private bool flag2;

	void Start () {


//		database.Add (GameObject.Find ("drawer1"), new Vector3(-3, 3, 0));
//		database.Add (GameObject.Find ("drawer2"), new Vector3(4, 3, 0));
//		database.Add (GameObject.Find ("drawer3"), new Vector3(-3, -3, 0));
//		database.Add (GameObject.Find ("drawer4"), new Vector3(43, -3, 0));

		ws = GameObject.Find ("Wand").GetComponent<WandSelection>();
		db = GameObject.Find("ARCamera").GetComponent<database>();

		traveling = false;
		flag1 = true;
		flag2 = true;

		start = Camera.main.ScreenToWorldPoint (new Vector3 (Screen.width / 2, Screen.height / 2, Camera.main.nearClipPlane + 10));

//		url = "herdmoon.org/static/f/silver_rose.png";
		initSelectedObjTable ();
		table = new Hashtable ();

	}

	// Update is called once per frame
	void Update () {
		if (ws.isTravel) {
			if (flag1) {
				startTravelBtn.SetActive (true);
				startScanBtn.SetActive (true);
				flag1 = false;
			}
			if (traveling) {
				if (flag2) {
					initSelectedObjTable ();
					flag2 = false;
				}
				Highlight ();
			}
		} else {
			flag1 = true;
			flag2 = true;
		}
	}

	private void initSelectedObjTable() {
		selectedObjTable = new Hashtable();
		mat_List = new List<string> ();
		string temp_name = "";
		string temp_content = "";
		db.Lookup_URL (url, ref mat_List , ref temp_name, ref temp_content);
		foreach (string mat in mat_List) {
			Debug.Log ("wayfind material is " + mat);
			db.Lookup_Mat (mat, ref drawer);
			Debug.Log ("wayfinding drawer is " + drawer);
			if (drawer == "Wood_Drawer")
				drawer = "drawer1";
			selectedObjTable [GameObject.Find (drawer)] = false;
		}
	}

	private void Highlight () {
		StateManager sm = TrackerManager.Instance.GetStateManager ();
		IEnumerable<TrackableBehaviour> activeTrackables = sm.GetActiveTrackableBehaviours ();
		GameObject relativeObj = null;
		bool flag = true;
		ResetTable (selectedObjTable);

		foreach (TrackableBehaviour tb in activeTrackables) {
			//			Debug.Log (tb.gameObject.name);
			if (flag) {
				relativeObj = tb.gameObject;
				flag = false;
			}
			if (selectedObjTable.Contains (tb.gameObject)) {
				selectedObjTable [tb.gameObject] = true;
				//				Debug.Log (tb.transform.name + ", " + tb.transform.position);
			}
		}

		if (relativeObj != null) {
			foreach (DictionaryEntry pair in selectedObjTable) {
				GameObject go = (GameObject)pair.Key;
				SetMat (go, mat);
				bool inSight = (bool)pair.Value;
				if (!inSight) {
					if (table.ContainsKey (pair.Key)) {
						TransformArrow ((GameObject)table [go], start, getDir (relativeObj, go, start));
					} else {
						table.Add (go, DrawArrow (arrowInstance, start, getDir (relativeObj, go, start)));
					}
				} else if (table.ContainsKey (go)) {
					GameObject tempArrow = (GameObject)table [go];
					table.Remove (go);
					Destroy (tempArrow);
				}
			}
		}
	}

	private void SetMat(GameObject go, Material mat) {
		Renderer rend = go.transform.GetChild (0).GetComponent<Renderer> ();
//		go.transform.GetChild (0).GetComponent<Renderer> ().materials [0].color = Color.green;
		if (rend != null) {
			Debug.Log (rend.materials[0]);
			rend.sharedMaterial = mat;
		}
	}
	private Vector3 getDir(GameObject relativeObj, GameObject endObj, Vector3 start) {
		Vector3 x = relativeObj.transform.position - start;
		Vector3 y = (Vector3)database[endObj] - (Vector3)database[relativeObj];
		return x + y;
	}
	private GameObject DrawArrow (GameObject arrow, Vector3 start, Vector3 dir) {
		GameObject clonedarrow = Instantiate (arrow, arrow.transform.position, arrow.transform.rotation);
		TransformArrow (clonedarrow, start, dir);
		return clonedarrow;
	}
	void TransformArrow(GameObject arrow, Vector3 start, Vector3 dir, float height=0) {
		// This is similar to what you already have.
		Vector3 arrowPosition = start;
		arrowPosition.y = start.y + height;
		arrow.transform.position = arrowPosition;

		Vector3 direction = dir;

		Quaternion arrowOrientation = Quaternion.LookRotation(direction);

		// Your prefab arrow points along -x ("left"), with +z ("forward") pointing up.
		// We want to rotate this to Unity's standard: +z forward, y+ up.
		// We'll construct the orientation facing "left" with "forward" up, then invert it.

		Quaternion correction = Quaternion.Inverse(
			Quaternion.LookRotation(Vector3.left, Vector3.forward)
		);

		// Now we apply our orientation and the correction for the prefab's orientation.
		arrow.transform.rotation = arrowOrientation * correction;
	}

	private void ResetTable(Hashtable selectedObjTable) {
		List<GameObject> temp = new List<GameObject> ();
		foreach (GameObject go in selectedObjTable.Keys) {
			temp.Add (go);
		}

		foreach (GameObject go in temp) {
			selectedObjTable [go] = false;
		}
	}

	public void startTraveling() {
		if (database == null) {
			Debug.Log ("start traveling!!!!!!!!!!!!");
			GameObject.Find ("ARCamera").GetComponent<Scanning> ().ScanOn();
			return;
		}
		traveling = true;
		startTravelBtn.SetActive (false);
		finishTravelBtn.SetActive (true);
		startScanBtn.SetActive (false);
		finishTravelBtn.SetActive (true);
	}

	public void exitTraveling() {
		
		ws.isTravel = false;
		traveling = false;
//		flag1 = true;
//		flag2 = true;
		startTravelBtn.SetActive (false);
		finishTravelBtn.SetActive (false);
		startScanBtn.SetActive (false);
		finishScanBtn.SetActive (false);

//		Debug.Log ("aaaaaaaaaaaaaaaaaaaaaaaaaa    " + ws.isTravel);
		destroyArrow();
		wandCube.GetComponent<wandScript>().setactive();
		wandCube.GetComponent<wandScript> ().nameCol = "";
	}

	private void destroyArrow () {

		foreach (DictionaryEntry pair in table) {
			Destroy((GameObject) table[pair.Key]);
		}
		table.Clear();
	}

}
