using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEditor;

public class Avatarmatcher : EditorWindow
{
    private GameObject Reference_Avatar;
    private GameObject Target_Avatar;
    //bool fing = false;
    //bool zensin = false;
    ConstraintSource cnt;


    [MenuItem("MANKALO/Avatar_Matcher")]

    static void init()
    {
        Avatarmatcher window = (Avatarmatcher)GetWindow(typeof(Avatarmatcher), false, "Avatar_Matcher");
        window.Show();
    }

    private void OnGUI()
    {
        doLabel("VRC_Avatar_Merger", 12, TextAnchor.MiddleCenter);
        Reference_Avatar = (GameObject)EditorGUILayout.ObjectField("Bugged_Avatar", Reference_Avatar, typeof(GameObject), true);
        Target_Avatar = (GameObject)EditorGUILayout.ObjectField("Animator_Avatar", Target_Avatar, typeof(GameObject), true);
        //fing = EditorGUILayout.Toggle("Finger to rotation constraints", fing);
        //zensin = EditorGUILayout.Toggle("All armature to rotation constraints", zensin);
        if (Reference_Avatar != null && Target_Avatar != null && GUILayout.Button("Match"))
        {
            var refanim = Reference_Avatar.GetComponent<Animator>();
            var taranim = Target_Avatar.GetComponent<Animator>();

            Target_Avatar.transform.localScale = Reference_Avatar.transform.localScale;
            Target_Avatar.transform.position = Reference_Avatar.transform.position;
            Target_Avatar.transform.rotation = Reference_Avatar.transform.rotation;

            for(int x = 0; x < 55; x++)
            {
                if (refanim.GetBoneTransform((HumanBodyBones)x) != null)
                {
                    Debug.Log((HumanBodyBones)x);
                    refanim.GetBoneTransform((HumanBodyBones)x).gameObject.transform.localPosition = taranim.GetBoneTransform((HumanBodyBones)x).gameObject.transform.localPosition;
                    refanim.GetBoneTransform((HumanBodyBones)x).gameObject.transform.localRotation = taranim.GetBoneTransform((HumanBodyBones)x).gameObject.transform.localRotation;
                }
            }
        }
    }

    private static void doLabel(string text, int textSize, TextAnchor anchor)
    {
        GUILayout.Label(text, new GUIStyle(EditorStyles.label)
        {
            alignment = anchor,
            wordWrap = true,
            fontSize = textSize
        });
    }
}
