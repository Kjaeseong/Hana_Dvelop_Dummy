using System;
using UnityEditor;
using UnityEditor.PackageManager.Requests;
using UnityEditor.PackageManager;
using UnityEngine;


namespace Unity.Editor.Example {
	[InitializeOnLoad]
	static class AddPackageExample
	{
	   static AddRequest Request;
	  
	   [MenuItem("Window/Add Package Example")]
	   static void Add()
	   {
		   // Add a package to the project
		   Request = Client.Add("com.unity.postprocessing");
		   EditorApplication.update += Progress;
	   }

	   static void Progress()
	   {
		   if (Request.IsCompleted)
		   {
			   if (Request.Status == StatusCode.Success)
				   Debug.Log("Installed: " + Request.Result.packageId);
			   else if (Request.Status >= StatusCode.Failure)
				   Debug.Log(Request.Error.message);

			   EditorApplication.update -= Progress;
		   }
	   }
	   
	   static AddPackageExample()
		{
			Debug.Log("Install PostProcessing");
			Add();
		}
	   
	}
}

