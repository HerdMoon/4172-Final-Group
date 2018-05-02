using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class wayFinding : MonoBehaviour {

	public GameObject arrowInstance;
	public Material mat;

//	private List<GameObject> selectedList = new List<GameObject>();
	private Hashtable selectedObjTable = new Hashtable();

	private Vector3 start;
	private Hashtable table = new Hashtable();
	private Hashtable database = new Hashtable();

	void Start () {

		selectedObjTable.Add (GameObject.Find ("drawer1"), false);
		selectedObjTable.Add (GameObject.Find ("drawer2"), false);
		selectedObjTable.Add (GameObject.Find ("drawer3"), false);
		selectedObjTable.Add (GameObject.Find ("drawer4"), false);

		database.Add (GameObject.Find ("drawer1"), new Vector3(-3, 3, 0));
		database.Add (GameObject.Find ("drawer2"), new Vector3(4, 3, 0));
		database.Add (GameObject.Find ("drawer3"), new Vector3(-3, -3, 0));
		database.Add (GameObject.Find ("drawer4"), new Vector3(43, -3, 0));

		start = Camera.main.ScreenToWorldPoint (new Vector3 (Screen.width / 2, Screen.height / 2, Camera.main.nearClipPlane + 10));

	}
	
	// Update is called once per frame
	void Update () {
		Highlight ();
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
				Debug.Log (tb.transform.name + ", " + tb.transform.position);
			}
		}

		if (relativeObj != null) {
			foreach (DictionaryEntry pair in selectedObjTable) {
				GameObject go = (GameObject)pair.Key;
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

//		foreach (GameObject go in list) {
//			SetMat (go, mat);
//			if (!InSight (go)) {
//				start = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width/2, Screen.height/2, Camera.main.nearClipPlane+10));
//				if (table.ContainsKey (go)) {
//					TransformArrow (((GameObject)table [go]), start, go.transform.position);
//				} else {
//					table.Add (go, DrawArrow (arrowInstance, start, go.transform.position));
//				}
//			} else {
//				if (table.ContainsKey (go)) {
//					GameObject tempArrow = (GameObject)table [go];
//					table.Remove (go);
//					Destroy (tempArrow);
//				}
//			}
//		}
	}

	private void SetMat(GameObject go, Material mat) {
		Renderer rend = go.transform.GetChild (0).GetComponent<Renderer> ();

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

}
