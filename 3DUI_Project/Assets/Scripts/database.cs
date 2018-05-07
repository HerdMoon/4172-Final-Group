using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using Mono.Data.Sqlite;
using System.Data;
using System.Net.NetworkInformation;
using System.Net;

public class database : MonoBehaviour {

	private string dbPath;


	private void Start() {
		dbPath = "URI=file:" + Application.persistentDataPath + "/exampleDatabase.db";
		try 
		{
			StreamReader sr = File.OpenText(Application.persistentDataPath + "/flag3.txt");
			string input = null;
			Debug.Log("Exist!");
			while ((input = sr.ReadLine())!=null)
			{
			}
			sr.Close();
		}
		catch (FileNotFoundException) {
			InitDatabase ();
			StreamWriter sw = new StreamWriter (Application.persistentDataPath + "/flag3.txt", false);
			sw.WriteLine ("Exist");
			Debug.Log ("None init!");
			sw.Close ();
		}
	}



	public void InitDatabase() {

		using (var conn = new SqliteConnection (dbPath)) {
			conn.Open ();
			Debug.Log (Application.persistentDataPath);
			using (var cmd = conn.CreateCommand ()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "DROP TABLE if exists Mat_Info";
				var result = cmd.ExecuteNonQuery ();
				Debug.Log ("drop table: " + result);      
			}
			using (var cmd = conn.CreateCommand ()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "DROP TABLE if exists Pic_Info";
				var result = cmd.ExecuteNonQuery ();
				Debug.Log ("drop table: " + result);      
			}
			using (var cmd = conn.CreateCommand ()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "DROP TABLE if exists Mat_Drawer_Table";
				var result = cmd.ExecuteNonQuery ();
				Debug.Log ("drop table: " + result);      
			}
			using (var cmd = conn.CreateCommand ()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "DROP TABLE if exists Recipe_Dic";
				var result = cmd.ExecuteNonQuery ();
				Debug.Log ("drop table: " + result);      
			}
		}

		CreateSchema ();

		InsertMat_Info ("Wood", 0,"Wood is a porous and fibrous structural tissue found in the stems " +
			"and roots of trees and other woody plants. It is an organic material, a natural composite of cellulose fibers that are " +
			"strong in tension and embedded in a matrix of lignin that resists compression. " +
			"Wood is sometimes defined as only the secondary xylem in the stems of trees.", "Wood is an usual Material.");
		InsertMat_Info ("Copper_Powder", 0, "This is a fine grade of 325 mesh the correct fineness " +
			"for cold casting. Copper or other metallic powder is added to polyester resin, polyurethane resin," +
			" epoxy, gypsum cement or other binders. Small objects are cast and cured in suitable molds. " +
			"To conserve metal when casting large pieces you can dust (salt) the mold surface, brush a thin " +
			"coating on the surface, spread or roll the metal on or spray a thin coating. The mold is then back " +
			"filled with resin or fiberglass, iron or steel shot, sand or calcium carbonate to increase the weight to " +
			"give it the heft and feel of a hot foundry ‘pour.’", "Copper Powder is copper and powder");
		InsertMat_Info ("Gold_Leaf", 0, "Size: approx. 5.5 x 5.5 inch/ 14 x 14 cm.\nMaterial: copper\nColor: gold\nQuantity: 200 sheets\n" +
			"Notes:\nDue to the light and screen difference, the item's color may be slightly different from the pictures, thanks for " +
			"understanding.\nTo use gold leaf: Avoid touching gold leaf with your hands or fingers as it will stick. Do not breath directly on " +
			"gold leaf, it will blow away or wrinkle. Using a pair of knife, tweezers, or razor, cut away the portion of gold sheet that you " +
			"wish to use. Pick up the piece of gold using just the tip of your knife or tool and gently touch the item you are applying the " +
			"gold leaf to. It should stick as it applies very easily to surfaces.","Gold Leaf is paper with golden color");
		InsertMat_Info ("Vermillion", 1, "Chemical name: Mercuric sulfide; HgS Common name: Vermilion Formula: HgS (C.I. 77766) CAS no.: 1344-48-5 " +
			"Chemical family: C.I. Pigment Red 106 Physical properties: Appearance: yellowish red, very fine, odorless powder, without " +
			"crystallines Molecular weight: 232.68 Theoretical content: 86.22 % Hg Solubility: soluble in a mixture of HCl / HNO3, under " +
			"separation of sulphur Specifications: Humidity: 0.5 % max. Oil absorption: 7 - 12 % Remainder through 300 mesh: 1.5 % max. ","Vermillion is a type of red powder");
		InsertMat_Info ("Lead_White", 0, "Lead is placed in earthen vessels over sharp vinegar, and after it has acquired some thickness of a " +
			"sort of rust, which it commonly does in about ten days, they open the vessels and scrape it off, as it were, in a sort of foulness; " +
			"they then place the lead over vinegar again, repeating over and over again the same method of scraping it till it has wholly dissolved. " +
			"What has been scraped off they then beat to powder and boil for a long time, and what at last subsides to the bottom of the vessel is " +
			"ceruse.","Lead White is used to paint");

		Insert_Recipe ("Silver Rose", "Our Silver Rose is not based on silver. To save money, we used wood and lead white to make it. \n" +
			"First cut a wood and polish it to 6cm.\n Then use lead white to make a flower and add it to the wood. " +
			"To make them blend in quickly, we could heat it or use some glue.\n Wait till it cools down, the very end step is to brush some " +
			"lead white to the wood so we can make it look more like silver.");
		Insert_Recipe ("Gold Tree", "Our Gold Tree is made from gold leaf. Although the gold tree sounds like a wood product, we actually did not use " +
			"any wood in it. \nSo first use scissors and cut gold leaf to small pieces.\n Then heat them up to make the color more natural. \n" +
			"Next, take reference from the sheet that tell you how to fold each piece of leaf and follow the instruction. \n" +
			"Finally, dye some vermillion on the surface so it appears less shiny.");
		Insert_Recipe ("medal", "First a model is shaped in wax. To make a mold, sand, clay, or even old molds are finely grounded and mixed with a liquid " +
			"binder.\nThen, half of a box frame, or flask, is placed on a flat surface, and tightly packed with the wet sand. The wax model is pressed " +
			"firmly into the sand. \nThe surface is dusted to prevent the two halves from sticking together. \nThe other half of the frame is packed with " +
			"sand. \nDry the mold, remove the model. \nMelt metal and pour it into the mold. \nOnce cool, the mold is opened, revealing the cast medal. \n" +
			"Then use the chasing process to finish the medal.");
		Insert_Recipe ("crab", "1. Melt the refined rosin in a container.\n2. Prepare pigment: mix vermilion with walnut oil and mix them up.\n" +
			"3. Add pigment to rosin and keep string while melting.\n4. Prepare wood pieces and dip them into the finished pigment.\n" +
			"5. Rest them for 10 minutes to make the color will stick on wood pieces.\n6. Design your product by shaping the wood pieces with knife or scissor");

		Insert_Photo_By_URL ("herdmoon.org/static/f/silver_rose.png", "Wood", "Lead_White", "None", "None", 10000, 1);
		Insert_Photo_By_URL ("herdmoon.org/static/f/gold_tree.jpg", "Gold_Leaf", "Vermillion", "None", "None", 20000 , 2);
		Insert_Photo_By_URL ("herdmoon.org/static/f/medal.png", "Copper_Powder", "Vermillion", "Gold_Leaf", "Lead_White", 12000, 3);
		Insert_Photo_By_URL ("herdmoon.org/static/f/crab.png", "Wood", "Vermillion", "None", "None", 16000, 4);

		//    InsertMat_Drawer_Pair ("Wood", "drawer1");
		InsertMat_Drawer_Pair ("Wood", "drawer1");
		InsertMat_Drawer_Pair ("Copper_Powder", "drawer2");
		InsertMat_Drawer_Pair ("Lead_White", "drawer3");
		InsertMat_Drawer_Pair ("Gold_Leaf", "drawer5");
		InsertMat_Drawer_Pair ("Vermillion", "drawer6");

		string res_Mat = "";
		Lookup_Mat ("Wood", ref res_Mat);
		Debug.Log (res_Mat);
		bool res_Dangerous = true;
		string res_Descripton = "";
		string res_Note = "";
		Get_Description ("Wood", ref res_Dangerous, ref res_Descripton,ref res_Note);
		Debug.Log (res_Descripton);
		Debug.Log (res_Note);
		List<string> res_List = new List<string> (4);
		Get_Image_URL ("Wood", ref res_List);
		foreach (string res_URL in res_List)
		{
			Debug.Log (res_URL);
		}

		List<string> mat_List = new List<string> (4);
		string read_recipe_name = "";
		string read_recipe_content = "";
		Debug.Log (mat_List.Count);
		Lookup_URL ("herdmoon.org/static/f/silver_rose.png", ref mat_List,ref read_recipe_name,ref read_recipe_content);
		foreach (string res_Mat_Read in mat_List)
		{
			Debug.Log ("Mat Res" + res_Mat_Read);
		}

		Debug.Log (mat_List.Count);
		Debug.Log ("Recipe Name:" + read_recipe_name);
		Debug.Log ("Recipe Content" + read_recipe_content);

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
					"  'description' TEXT," +
					"  'note' TEXT" +
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
					"  'Mat4' TEXT, " +
					"  'Recipe_Id' INTEGER" +
					");";

				var result = cmd.ExecuteNonQuery();
				Debug.Log("create schema: " + result);      
			}

			using (var cmd = conn.CreateCommand ()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "CREATE TABLE IF NOT EXISTS 'Mat_Drawer_Table' ( " +
					"  'id' INTEGER PRIMARY KEY, " +
					"  'Mat_Name' TEXT," + 
					"  'Drawer_Name' TEXT" +
					");";

				var result = cmd.ExecuteNonQuery();
				Debug.Log("create schema: " + result);      
			}

			using (var cmd = conn.CreateCommand ()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "CREATE TABLE IF NOT EXISTS 'Recipe_Dic' ( " +
					"  'id' INTEGER PRIMARY KEY, " +
					"  'Recipe_Name' TEXT," + 
					"  'Recipe_Content' TEXT " +
					");";

				var result = cmd.ExecuteNonQuery();
				Debug.Log("create schema: " + result);      
			}
		}
	}

	public void Insert_Photo_By_URL(string URL,string Mat1,string Mat2,string Mat3,string Mat4,int time_stamp,int Recipe_Id)
	{
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "INSERT INTO Pic_Info (URL,Time_Stamp,Mat1,Mat2,Mat3,Mat4,Recipe_Id) " +
					"VALUES (@URL, @Time,@Mat1,@Mat2,@Mat3,@Mat4,@Recipe_Id);";

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
				cmd.Parameters.Add (new SqliteParameter {
					ParameterName = "Recipe_Id",
					Value = Recipe_Id
				});
				var result = cmd.ExecuteNonQuery();
				Debug.Log("insert URL: " + result);
			}
		}   
	}




	public void InsertMat_Info(string mat_name,int is_dangerous, string mat_des,string mat_note)
	{
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "INSERT INTO Mat_info (name,dangerous,description,note) " +
					"VALUES (@Name, @Dang,@Desc ,@mat_note);";

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
				cmd.Parameters.Add (new SqliteParameter {
					ParameterName = "mat_note",
					Value = mat_note
				});
				var result = cmd.ExecuteNonQuery();
				Debug.Log("insert mat: " + mat_name);
			}
		}   
	}

	public void InsertMat_Drawer_Pair(string mat_name,string drawer_name)
	{
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "INSERT INTO Mat_Drawer_Table (Mat_Name,Drawer_Name) " +
					"VALUES (@Mat_Name, @Drawer_Name);";

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "Mat_Name",
					Value = mat_name
				});

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "Drawer_Name",
					Value = drawer_name
				});
				var result = cmd.ExecuteNonQuery();
				Debug.Log("insert pair: " + result);
			}
		}       
	}


	public void Lookup_Drawer(ref string mat_name,string drawer_name)
	{
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "SELECT Mat_Name FROM Mat_Drawer_Table WHERE Drawer_Name =  @Drawer_Name;";

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "Drawer_Name",
					Value = drawer_name
				});

				Debug.Log("Mat_Name_Search (begin)");
				var reader = cmd.ExecuteReader();
				while (reader.Read()) {
					var Read_Mat_Name = reader.GetString(0);
					mat_name = Read_Mat_Name;
				}
				Debug.Log("Mat_Name_Search (end)");
			}
		}   
	}

	public void Lookup_Mat(string mat_name,ref string drawer_name)
	{
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "SELECT Drawer_Name FROM Mat_Drawer_Table WHERE Mat_Name =  @Mat_Name;";

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "Mat_Name",
					Value = mat_name
				});

				Debug.Log("Drawer_Name_Search (begin)");
				var reader = cmd.ExecuteReader();
				while (reader.Read()) {
					var Read_Drawer_Name = reader.GetString(0);
					drawer_name = Read_Drawer_Name;
				}
				Debug.Log("Drawer_Name_Search (end)");
			}
		}     
	}

	public void Lookup_URL(string URL,ref List<string> Mat_List ,ref string Recipe_Name,ref string Recipe_Content)
	{

		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "SELECT distinct P.Mat1,P.Mat2,P.Mat3,P.Mat4,Recipe_Name,Recipe_Content FROM Pic_Info P, Recipe_Dic  R WHERE URL = @URL And P.Recipe_Id = R.id;";

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "URL",
					Value = URL
				});

				Debug.Log("Search_Mat_By_URL (begin)");
				int count_num = 0;
				var reader = cmd.ExecuteReader();
				while (reader.Read()) {
					count_num++;
					var Read_Mat1 = reader.GetString (0);
					var Read_Mat2 = reader.GetString (1);
					var Read_Mat3 = reader.GetString (2);
					var Read_Mat4 = reader.GetString (3);
					var read_recipe_name = reader.GetString(4);
					var read_recipe_content = reader.GetString (5);
					Recipe_Name = read_recipe_name;
					Recipe_Content = read_recipe_content;
					if (Read_Mat1 != "None") {
						Mat_List.Add (Read_Mat1);
					}
					if (Read_Mat2 != "None") {
						Mat_List.Add (Read_Mat2);
					}
					if (Read_Mat3 != "None") {
						Mat_List.Add (Read_Mat3);
					}
					if (Read_Mat4 != "None") {
						Mat_List.Add (Read_Mat4);
					}



				}
				Debug.Log (count_num.ToString () + "Lines");
				Debug.Log("Search_Mat_By_URL (end)");



			}
		}   
	}


	public void Get_Description(string Mat_name, ref bool is_dangerous, ref string description,ref string note)
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
					var read_note = reader.GetString (4);
					note = read_note;
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
		while (URL_List.Count < 2) {
			URL_List.Add ("");
		}
	}

	public void Insert_Recipe(string recipe_name,string recipe_content)
	{
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "INSERT INTO Recipe_Dic (Recipe_Name,Recipe_Content) " +
					"VALUES (@recipe_name, @recipe_content);";

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "recipe_name",
					Value = recipe_name
				});

				cmd.Parameters.Add(new SqliteParameter {
					ParameterName = "recipe_content",
					Value = recipe_content
				});
				var result = cmd.ExecuteNonQuery();
				Debug.Log("insert recipe: " + recipe_name);
			}
		}     
	}

	public void Get_All_Recipe_Name(ref List <string> recipe_name,ref List <int> recipe_id)
	{
		recipe_name.Clear ();
		recipe_id.Clear ();
		using (var conn = new SqliteConnection(dbPath)) {
			conn.Open();
			int count = 0;
			using (var cmd = conn.CreateCommand()) {
				cmd.CommandType = CommandType.Text;
				cmd.CommandText = "SELECT Recipe_Id,Recipe_Name FROM Recipe_Dic;";
				var reader = cmd.ExecuteReader();
				while (reader.Read()) {
					var read_recipe_name = reader.GetString (0);
					var read_recipe_id = reader.GetInt32 (1);
					recipe_name.Add (read_recipe_name);
					recipe_id.Add (read_recipe_id);
					count++;
				}
				Debug.Log("Recipe_Show (end)" + count.ToString());
			}
		}   
	}

	public void Insert_Data(Texture2D Saved_Img,List<string> Chosen_Mat,int time_stamp,int recipe_id)
	{
		string file_name = time_stamp.ToString () + ".png";
		while (Chosen_Mat.Count <= 4) {
			Chosen_Mat.Add ("None");
		}

		string upload_URL = "herdmoon.org/upload/" + file_name;
		//string upload_URL = "herdmoon.org/static/f/silver_rose.png";


		StartCoroutine (upload_graph (Saved_Img, file_name , upload_URL,time_stamp,Chosen_Mat,recipe_id));

	}

	IEnumerator upload_graph(Texture2D tex,string upload_name,string upload_URL,int time_stamp,List<string> Chosen_Mat,int recipe_id)
	{

		yield return new WaitForEndOfFrame (); 

		int width = Screen.width;
		int height = Screen.height;
		var bytes = tex.EncodeToPNG();
		WWWForm form = new WWWForm();
		form.AddField("frameCount", Time.frameCount.ToString());
		form.AddBinaryData("fileToUpload", bytes, upload_name, "image/png");

		// Upload to a cgi script
		string screenShotURL= "http://herdmoon.org/upload.php";
		GameObject.Find ("Info").GetComponent<Text> ().text = "Submitting...";
		GameObject.Find ("Info").GetComponent<Text> ().enabled = true;
		WWW w = new WWW(screenShotURL, form);
		yield return w;
		if (w.error != null){
			Debug.Log(w.error);
		}
		else{
			Debug.Log("Image Uploaded!");
			Debug.Log (w.text);
			int find_string = w.text.IndexOf ("has been uploaded.");
			if (find_string >= 0) {
				GameObject.Find ("Info").GetComponent<Text>().text = "Submit Successfully!";
				GameObject.Find("Info").GetComponent<Text>().enabled =  true;

				using (var conn = new SqliteConnection(dbPath)) {
					conn.Open();
					using (var cmd = conn.CreateCommand()) {
						cmd.CommandType = CommandType.Text;
						cmd.CommandText = "INSERT INTO Pic_Info (URL,Time_Stamp,Mat1,Mat2,Mat3,Mat4,Recipe_id) " +
							"VALUES (@URL, @Time,@Mat1,@Mat2,@Mat3,@Mat4,@Recipe_Id);";

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
						cmd.Parameters.Add (new SqliteParameter {
							ParameterName = "Recipe_id",
							Value = recipe_id
						});
						var result = cmd.ExecuteNonQuery();
						Debug.Log("insert URL: " + result);
					}
				}



			} else {
				GameObject.Find ("Info").GetComponent<Text>().text = "Submit Failed!!";
				GameObject.Find ("Info").GetComponent<Text> ().text += w.text;
				GameObject.Find ("Info").GetComponent<Text> ().enabled = true;

			}
			Debug.Log (w.url);
		}

	}


}




