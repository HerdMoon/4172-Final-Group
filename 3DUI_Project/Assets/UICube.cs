using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UICube : MonoBehaviour {

	float angle;
	float speed = 0.50f;

	// Use this for initialization
	void Start () {
		this.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width/2, Screen.height/2, Camera.main.nearClipPlane + 5.0f));
		this.transform.LookAt (Camera.main.transform);
		 
		Quaternion originalRot = Camera.main.transform.rotation;    
		this.transform.rotation = originalRot * Quaternion.AngleAxis(45.0f, Vector3.up);
		angle = 45.0f;
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width/2, Screen.height/2, Camera.main.nearClipPlane + 5.0f));
		this.transform.LookAt (Camera.main.transform);
		Quaternion originalRot = Camera.main.transform.rotation;    
		this.transform.rotation = originalRot * Quaternion.AngleAxis(angle, Vector3.up);
		if (Input.GetMouseButton(0)) {
			if (Input.mousePosition.x < 800.0f)
				angle += speed;
			else
				angle -= speed;
		}
	}
}
