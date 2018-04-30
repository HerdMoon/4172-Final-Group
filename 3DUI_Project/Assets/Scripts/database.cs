using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using Mono.Data.Sqlite;
using System.Data;


public class database : MonoBehaviour {

	private string dbPath;

	private void Start() {
		dbPath = "URI=file:" + Application.persistentDataPath + "/exampleDatabase.db";
		Debug.Log (Application.persistentDataPath);
		CreateSchema();
		InsertMat_Info ("Wood", 0, "Wood is an usual Material.");
		InsertMat_Info ("Iron", 0, "Iron is a kind of metal.");
		InsertMat_Info ("Silver Pigment", 1, "Silver Pigment made from lead,poison.");
		InsertMat_Info ("Yellow Pigment", 0, "Yellow Pigment made from oil,not poison.");
		Insert_Photo_By_URL ("herdmoon.org/static/f/silver_rose.png", "Wood", "Silver Pigment", "None", "None", 10000);
		Insert_Photo_By_URL ("herdmoon.org/static/f/chair.png", "Wood", "Iron", "Yellow Pigment", "None", 20000);
		bool res_Dangerous = true;
		string res_Descripton = "";
		Get_Description ("Wood", ref res_Dangerous, ref res_Descripton);
		Debug.Log (res_Descripton);

		List<string> res_List = new List<string> (4);
		Get_Image_URL ("Wood", ref res_List);
		foreach (string res_URL in res_List)
		{
			Debug.Log (res_URL);
		}



	}

	public void CreateSchema() {
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "CREATE TABLE IF NOT EXISTS 'Mat_Info' ( " +
					"  'id' INTEGER PRIMARY KEY, " +
					"  'name' TEXT NOT NULL, " +
					"  'dangerous' INTEGER NOT NULL," +
					"  'description' TEXT" +
					");";

				var result = cmd.ExecuteNonQuery();
				Debug.Log("create schema: " + result);
			}

			using (var cmd = conn.CreateCommand ()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "CREATE TABLE IF NOT EXISTS 'Pic_Info' ( " +
					"  'id' INTEGER PRIMARY KEY, " +
					"  'URL' TEXT NOT NULL, " +
					"  'Time_Stamp' INTEGER NOT NULL," + 
					"  'Mat1' TEXT, " +
					"  'Mat2' TEXT, " +
					"  'Mat3' TEXT, " + 
					"  'Mat4' TEXT " +
					");";

				var result = cmd.ExecuteNonQuery();
				Debug.Log("create schema: " + result);			
			
			}

		}
	}

	public void Insert_Photo_By_URL(string URL,string Mat1,string Mat2,string Mat3,string Mat4,int time_stamp)
	{
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "INSERT INTO Pic_Info (URL,Time_Stamp,Mat1,Mat2,Mat3,Mat4) " +
					"VALUES (@URL, @Time,@Mat1,@Mat2,@Mat3,@Mat4);";

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "URL",
					Value = URL
				});

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "Time",
					Value = time_stamp
				});
				cmd.Parameters.Add (new SqliteParameter {
					ParameterName = "Mat1",
					Value = Mat1
				});
				cmd.Parameters.Add (new SqliteParameter {
					ParameterName = "Mat2",
					Value = Mat2
				});
				cmd.Parameters.Add (new SqliteParameter {
					ParameterName = "Mat3",
					Value = Mat3
				});
				cmd.Parameters.Add (new SqliteParameter {
					ParameterName = "Mat4",
					Value = Mat4
				});
				var result = cmd.ExecuteNonQuery();
				Debug.Log("insert URL: " + result);
			}
		}		
	}


	public void InsertMat_Info(string mat_name,int is_dangerous, string mat_des)
	{
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "INSERT INTO Mat_info (name,dangerous,description) " +
					"VALUES (@Name, @Dang,@Desc);";

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "Name",
					Value = mat_name
				});

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "Dang",
					Value = is_dangerous
				});
				cmd.Parameters.Add (new SqliteParameter {
					ParameterName = "Desc",
					Value = mat_des
				});
				var result = cmd.ExecuteNonQuery();
				Debug.Log("insert mat: " + result);
			}
		}		
	}

	public void InsertScore(string highScoreName, int score) {
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "INSERT INTO Mat_info (name, score) " +
					"VALUES (@Name, @Score);";

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "Name",
					Value = highScoreName
				});

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "Score",
					Value = score
				});

				var result = cmd.ExecuteNonQuery();
				Debug.Log("insert score: " + result);
			}
		}
	}

	public void Get_Description(string Mat_name, ref bool is_dangerous, ref string description)
	{
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "SELECT * FROM Mat_Info WHERE name =  @Mat_name;";

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "Mat_name",
					Value = Mat_name
				});

				Debug.Log("Mat_Search (begin)");
				var reader = cmd.ExecuteReader();
				while (reader.Read()) {
					var id = reader.GetInt32(0);
					var Mat_Name = reader.GetString(1);
					var Dangerous_Int = reader.GetInt32(2);
					if (Dangerous_Int == 1) {
						is_dangerous = true;
					} else {
						is_dangerous = false;
					}

					var read_description = reader.GetString(3);
					description = read_description;
				}
				Debug.Log("Mat_Search (end)");
			}
		}		
	}

	public void Get_Image_URL(string Mat_name, ref List<string> URL_List)
	{
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand ()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "SELECT DISTINCT URL,Time_Stamp FROM Pic_Info WHERE Mat1 =  @Mat_name or Mat2 = @Mat_name or Mat3 = @Mat_name"
				+ " or Mat4 = @Mat_name ORDER BY Time_Stamp ";
				
				cmd.Parameters.Add (new SqliteParameter {
					ParameterName = "Mat_name",
					Value = Mat_name
				});

				var reader = cmd.ExecuteReader();
				while (reader.Read()) {
					var Read_URL = reader.GetString (0);
					URL_List.Add (Read_URL);
				}


			}

		}
	}

	public void Insert_Data(Texture2D Saved_Img,List<string> Chosen_Mat,int time_stamp)
	{
		string file_name = time_stamp.ToString () + ".png";
		while (Chosen_Mat.Count <= 4) {
			Chosen_Mat.Add ("None");
		}

		//string upload_URL = "herdmoon.org/upload/" + file_name;
		string upload_URL = "herdmoon.org/static/f/silver_rose.png";

		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "INSERT INTO Pic_Info (URL,Time_Stamp,Mat1,Mat2,Mat3,Mat4) " +
					"VALUES (@URL, @Time,@Mat1,@Mat2,@Mat3,@Mat4);";

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "URL",
					Value = upload_URL
				});

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "Time",
					Value = time_stamp
				});
				cmd.Parameters.Add (new SqliteParameter {
					ParameterName = "Mat1",
					Value = Chosen_Mat[0]
				});
				cmd.Parameters.Add (new SqliteParameter {
					ParameterName = "Mat2",
					Value = Chosen_Mat[1]
				});
				cmd.Parameters.Add (new SqliteParameter {
					ParameterName = "Mat3",
					Value = Chosen_Mat[2]
				});
				cmd.Parameters.Add (new SqliteParameter {
					ParameterName = "Mat4",
					Value = Chosen_Mat[3]
				});
				var result = cmd.ExecuteNonQuery();
				Debug.Log("insert URL: " + result);
			}
		}
		StartCoroutine (upload_graph (Saved_Img, file_name));

	}

	IEnumerator upload_graph(Texture2D tex,string upload_name)
	{

		yield return new WaitForEndOfFrame (); 

		int width = Screen.width;
		int height = Screen.height;
		var bytes = tex.EncodeToPNG();
		WWWForm form = new WWWForm();
		form.AddField("frameCount", Time.frameCount.ToString());
		form.AddBinaryData("file", bytes, upload_name, "image/png");

		// Upload to a cgi script
		string screenShotURL= "http://herdmoon.org/upload_file.php";
		WWW w = new WWW(screenShotURL, form);
		yield return w;
		if (w.error != null){
			Debug.Log(w.error);
		}
		else{
			Debug.Log("Image Uploaded!");
			Debug.Log (w.text);
			Debug.Log (w.url);
		}
	}

		
}




