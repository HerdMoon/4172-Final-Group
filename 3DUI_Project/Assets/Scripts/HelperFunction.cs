using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;

public class HelperFunction : MonoBehaviour {

	private Scanning scanningScript;
	private InitScan initScanScript;
	public Text text;

	void Start () {
		scanningScript = GameObject.Find ("ARCamera").GetComponent<Scanning> ();
		initScanScript = GameObject.Find ("ARCamera").GetComponent<InitScan> ();
		text.text = "Scanning";
	}

	public void SaveToText() {
		Hashtable table = scanningScript.database;
		string txt_path = Application.persistentDataPath + "/position.txt";
		StreamWriter sw = new StreamWriter(txt_path,false);
		foreach (DictionaryEntry pair in table) {
			GameObject temp_gameobject = (GameObject)pair.Key;
			Vector3 now_position = (Vector3) pair.Value;
			sw.WriteLine(temp_gameobject.name);
			sw.WriteLine(now_position.x);
			sw.WriteLine(now_position.y);
			sw.WriteLine(now_position.z);
		}
		sw.Close();
		initScanScript.flag = false;
		text.text = "Successfully saved";
		Debug.Log ("sucessfully save text to local!!!!!!!!!!!!!!!!!!!!!!");

	}

	public Hashtable GetTableFromText() {
		string txt_path = Application.persistentDataPath + "/position.txt";
		Hashtable table = new Hashtable ();
		StreamReader sr = new StreamReader(txt_path);
		while(!sr.EndOfStream)
		{
			GameObject key = GameObject.Find (sr.ReadLine ());
			Vector3 value = new Vector3 (float.Parse (sr.ReadLine ()), float.Parse (sr.ReadLine ()), float.Parse (sr.ReadLine ()));
			table[key] = value;
		}
		sr.Close();
		return table;
	}
}
