using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class InitScan : MonoBehaviour {

	// Use this for initialization
	private Scanning scanningScript;
	public bool flag;
	void Start () {
		scanningScript = GameObject.Find ("ARCamera").GetComponent<Scanning> ();
		flag = true;
	}
	
	// Update is called once per frame
	void Update () {
		if (flag) {
//			Debug.Log (Application.persistentDataPath);
			scanningScript.Scan ();
//			if (scanningScript.database.Count == 5) {
//				Debug.Log ("hahahahahahahahah");
//				SaveToText (scanningScript.database);
//				flag = false;
//			}
		}
	}

	public void SaveToText(Hashtable table)
	{
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

		StreamReader sr = new StreamReader(txt_path);
		for (int i=0;i<5;i++)
		{
			string this_line = "";
			string read_line_temp = sr.ReadLine();
			this_line += read_line_temp;
			read_line_temp = sr.ReadLine();
			this_line += read_line_temp;
			read_line_temp = sr.ReadLine();
			this_line += read_line_temp;
			read_line_temp = sr.ReadLine();
			this_line += read_line_temp;
			Debug.Log("Object " + i.ToString() + this_line);
		}
		sr.Close();
	}


}
