using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;

public class Scanning : MonoBehaviour {

	public Hashtable database;
	public bool scanning;

	public GameObject startScanBtn;
	public GameObject finishScanBtn;
//	public bool finishScan;
	public GameObject scanStatus;

	void Start() {
//		scanStatus = GameObject.Find ("ScanStaus");
		scanning = false;
//		finishScan = false;
		database = new Hashtable();
	}

	void Update () {
		if (scanning) {
			Scan ();
		}
	}
	public void Scan() {
		StateManager sm = TrackerManager.Instance.GetStateManager ();
		IEnumerable<TrackableBehaviour> activeTrackables = sm.GetActiveTrackableBehaviours ();
		List<GameObject> inDb = new List<GameObject>();
		List<GameObject> outDb = new List<GameObject>();
		foreach (TrackableBehaviour tb in activeTrackables) {
			if (database.Contains (tb.gameObject))
				inDb.Add (tb.gameObject);
			else
				outDb.Add (tb.gameObject);
		}

		if (outDb.Count == 0)
			return;

		if (inDb.Count == 0) {
			if (database.Count == 0) {
				database [outDb [0]] = new Vector3 (0, 0, 0);
				Debug.Log (outDb [0].name + "ready");
				toggleOn (outDb [0]);
				for (int i = 1; i < outDb.Count; i++) {
					database [outDb [i]] = (Vector3) outDb [i].transform.position - (Vector3) outDb [0].transform.position;
					Debug.Log (outDb [i].name + "ready");
					toggleOn (outDb [i]);
				}
				return;
			}
			return;
		}

		GameObject relativeOb = inDb [0];

		foreach (GameObject go in outDb) {
			database [go] = go.transform.position - relativeOb.transform.position + (Vector3) database [relativeOb];
			Debug.Log (go.name + " ready");
			toggleOn (go);
		}
		return;
	}

	public void ScanOn() {
		scanning = true;
		startScanBtn.SetActive (false);
		finishScanBtn.SetActive (true);
		scanStatus.SetActive (true);
//		finishScan = false;
	}

	public void ScanOff() {
		scanning = false;
		startScanBtn.SetActive (true);
		finishScanBtn.SetActive (false);
		GameObject.Find ("ARCamera").GetComponent<wayFinding> ().database = database;
		scanStatus.SetActive (false);
//		finishScan = true;
	}

	private void toggleOn(GameObject go) {
		if (go.name == "drawer1") {
			GameObject.Find ("Toggle1").GetComponent<Toggle> ().isOn = true;
		} else if (go.name == "drawer2") {
			GameObject.Find ("Toggle2").GetComponent<Toggle> ().isOn = true;
		} else if (go.name == "drawer3") {
			GameObject.Find ("Toggle3").GetComponent<Toggle> ().isOn = true;
		} else if (go.name == "drawer4") {
			GameObject.Find ("Toggle4").GetComponent<Toggle> ().isOn = true;
		}
	}
		
}
