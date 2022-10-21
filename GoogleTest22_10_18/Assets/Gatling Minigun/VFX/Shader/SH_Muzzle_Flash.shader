// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "Effects/Muzzleflash_Core"
{
	Properties
	{
		_T_MF_Tile_01("T_MF_Tile_01", 2D) = "white" {}
		_TextureSample0("Texture Sample 0", 2D) = "white" {}
		_Emissive("Emissive", Range( 0 , 1)) = 1
		_Intensity("Intensity", Range( 0 , 1)) = 0.05
		_T_MF_Tile_02("T_MF_Tile_02", 2D) = "white" {}
		_T_MG_Core("T_MG_Core", 2D) = "white" {}
		[HideInInspector] _texcoord( "", 2D ) = "white" {}
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags{ "RenderType" = "Custom"  "Queue" = "Transparent+0" "IgnoreProjector" = "True" "IsEmissive" = "true"  }
		Cull Back
		Blend OneMinusDstColor One
		CGPROGRAM
		#include "UnityShaderVariables.cginc"
		#pragma target 3.0
		#pragma surface surf Unlit keepalpha noshadow 
		struct Input
		{
			float2 uv_texcoord;
			float4 vertexColor : COLOR;
		};

		uniform sampler2D _T_MF_Tile_02;
		uniform float _Intensity;
		uniform sampler2D _T_MF_Tile_01;
		uniform sampler2D _TextureSample0;
		uniform sampler2D _T_MG_Core;
		uniform float4 _T_MG_Core_ST;
		uniform float _Emissive;

		inline half4 LightingUnlit( SurfaceOutput s, half3 lightDir, half atten )
		{
			return half4 ( 0, 0, 0, s.Alpha );
		}

		void surf( Input i , inout SurfaceOutput o )
		{
			float2 uv_TexCoord16 = i.uv_texcoord * float2( 0.5,0.5 );
			float2 panner17 = ( 1.0 * _Time.y * float2( -3,0.35 ) + uv_TexCoord16);
			float2 panner9 = ( 1.0 * _Time.y * float2( -3,0 ) + ( float2( 0.5,1 ) * i.uv_texcoord ));
			float2 panner10 = ( 1.0 * _Time.y * float2( -1.75,0.125 ) + ( float2( 0.5,1 ) * i.uv_texcoord ));
			float2 uv_T_MG_Core = i.uv_texcoord * _T_MG_Core_ST.xy + _T_MG_Core_ST.zw;
			float4 tex2DNode25 = tex2D( _T_MG_Core, uv_T_MG_Core );
			o.Emission = ( ( ( ( tex2D( _T_MF_Tile_02, panner17 ) + _Intensity ) * ( tex2D( _T_MF_Tile_01, panner9 ) + tex2D( _TextureSample0, panner10 ) ) ) * ( ( 5.0 * i.vertexColor ) * tex2DNode25 ) ) * _Emissive ).rgb;
			float clampResult26 = clamp( ( i.vertexColor.a * ( tex2DNode25.b * 0.3 ) ) , 0.0 , 1.0 );
			o.Alpha = clampResult26;
		}

		ENDCG
	}
	CustomEditor "ASEMaterialInspector"
}
/*ASEBEGIN
Version=15401
378;29;837;1004;3411.464;1236.439;2.068171;True;False
Node;AmplifyShaderEditor.TextureCoordinatesNode;6;-3199.879,-487.1897;Float;False;0;-1;2;3;2;SAMPLER2D;;False;0;FLOAT2;1,1;False;1;FLOAT2;0,0;False;5;FLOAT2;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.Vector2Node;3;-3082.063,-735.5959;Float;False;Constant;_Vector0;Vector 0;1;0;Create;True;0;0;False;0;0.5,1;0,0;0;3;FLOAT2;0;FLOAT;1;FLOAT;2
Node;AmplifyShaderEditor.Vector2Node;2;-3085.796,-332.2234;Float;False;Constant;_Vector1;Vector 1;1;0;Create;True;0;0;False;0;0.5,1;0,0;0;3;FLOAT2;0;FLOAT;1;FLOAT;2
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;8;-2790.554,-392.8251;Float;True;2;2;0;FLOAT2;0,0;False;1;FLOAT2;0,0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;7;-2808.489,-663.7756;Float;True;2;2;0;FLOAT2;0,0;False;1;FLOAT2;0,0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.TextureCoordinatesNode;16;-2918.045,-1239.151;Float;False;0;-1;2;3;2;SAMPLER2D;;False;0;FLOAT2;0.5,0.5;False;1;FLOAT2;0,0;False;5;FLOAT2;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.PannerNode;17;-2551.424,-1235.352;Float;False;3;0;FLOAT2;0,0;False;2;FLOAT2;-3,0.35;False;1;FLOAT;1;False;1;FLOAT2;0
Node;AmplifyShaderEditor.PannerNode;9;-2511.862,-651.5959;Float;False;3;0;FLOAT2;0,0;False;2;FLOAT2;-3,0;False;1;FLOAT;1;False;1;FLOAT2;0
Node;AmplifyShaderEditor.PannerNode;10;-2463.063,-384.5959;Float;False;3;0;FLOAT2;0,0;False;2;FLOAT2;-1.75,0.125;False;1;FLOAT;1;False;1;FLOAT2;0
Node;AmplifyShaderEditor.VertexColorNode;22;-2709.038,199.4355;Float;False;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.RangedFloatNode;19;-2210.929,-1019.174;Float;True;Property;_Intensity;Intensity;4;0;Create;True;0;0;False;0;0.05;0.079;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;21;-2737.711,-78.61673;Float;True;Constant;_Float1;Float 1;3;0;Create;True;0;0;False;0;5;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SamplerNode;11;-2238.007,-702.4056;Float;True;Property;_T_MF_Tile_01;T_MF_Tile_01;0;0;Create;True;0;0;False;0;e38890d25a0bc2e44819626585007889;e38890d25a0bc2e44819626585007889;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;6;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;18;-2288.838,-1251.213;Float;True;Property;_T_MF_Tile_02;T_MF_Tile_02;5;0;Create;True;0;0;False;0;df938d6a9a5ca454ea61aa40f57d7d97;df938d6a9a5ca454ea61aa40f57d7d97;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;6;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;12;-2233.178,-413.2959;Float;True;Property;_TextureSample0;Texture Sample 0;2;0;Create;True;0;0;False;0;e38890d25a0bc2e44819626585007889;e38890d25a0bc2e44819626585007889;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;6;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;23;-2359.68,-92.93191;Float;True;2;2;0;FLOAT;0;False;1;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.SamplerNode;25;-2414.08,347.6978;Float;True;Property;_T_MG_Core;T_MG_Core;6;0;Create;True;0;0;False;0;50ceb4c0b3e342a40ac41e306daa1349;50ceb4c0b3e342a40ac41e306daa1349;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;6;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.RangedFloatNode;28;-2168.957,622.4911;Float;True;Constant;_Float2;Float 2;3;0;Create;True;0;0;False;0;0.3;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleAddOpNode;20;-1929.271,-1198.571;Float;True;2;2;0;COLOR;0,0,0,0;False;1;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleAddOpNode;13;-1794.647,-577.589;Float;True;2;2;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;14;-1556.215,-882.1879;Float;True;2;2;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;24;-1993.042,-71.69592;Float;True;2;2;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;27;-1841.084,367.6448;Float;True;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;32;-926.49,32.13203;Float;True;Property;_Emissive;Emissive;3;0;Create;True;0;0;False;0;1;0.848;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;15;-1056.535,-436.0302;Float;True;2;2;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;30;-1489.088,244.5473;Float;True;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;29;-561.2054,-29.53097;Float;True;2;2;0;COLOR;0,0,0,0;False;1;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.ClampOpNode;26;-1075.478,313.8063;Float;True;3;0;FLOAT;0;False;1;FLOAT;0;False;2;FLOAT;1;False;1;FLOAT;0
Node;AmplifyShaderEditor.StandardSurfaceOutputNode;0;0,0;Float;False;True;2;Float;ASEMaterialInspector;0;0;Unlit;Effects/Muzzleflash_Core;False;False;False;False;False;False;False;False;False;False;False;False;False;False;True;False;False;False;False;False;Back;0;False;-1;0;False;-1;False;0;False;-1;0;False;-1;False;0;Custom;0.5;True;False;0;True;Custom;;Transparent;All;True;True;True;True;True;True;True;True;True;True;True;True;True;True;True;True;True;0;False;-1;False;0;False;-1;255;False;-1;255;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;False;2;15;10;25;False;0.5;False;5;4;False;-1;1;False;-1;0;0;False;-1;0;False;-1;-1;False;-1;-1;False;-1;0;False;0;0,0,0,0;VertexOffset;True;False;Cylindrical;False;Relative;0;;1;-1;-1;-1;0;False;0;0;False;-1;-1;0;False;-1;0;0;15;0;FLOAT3;0,0,0;False;1;FLOAT3;0,0,0;False;2;FLOAT3;0,0,0;False;3;FLOAT;0;False;4;FLOAT;0;False;6;FLOAT3;0,0,0;False;7;FLOAT3;0,0,0;False;8;FLOAT;0;False;9;FLOAT;0;False;10;FLOAT;0;False;13;FLOAT3;0,0,0;False;11;FLOAT3;0,0,0;False;12;FLOAT3;0,0,0;False;14;FLOAT4;0,0,0,0;False;15;FLOAT3;0,0,0;False;0
WireConnection;8;0;2;0
WireConnection;8;1;6;0
WireConnection;7;0;3;0
WireConnection;7;1;6;0
WireConnection;17;0;16;0
WireConnection;9;0;7;0
WireConnection;10;0;8;0
WireConnection;11;1;9;0
WireConnection;18;1;17;0
WireConnection;12;1;10;0
WireConnection;23;0;21;0
WireConnection;23;1;22;0
WireConnection;20;0;18;0
WireConnection;20;1;19;0
WireConnection;13;0;11;0
WireConnection;13;1;12;0
WireConnection;14;0;20;0
WireConnection;14;1;13;0
WireConnection;24;0;23;0
WireConnection;24;1;25;0
WireConnection;27;0;25;3
WireConnection;27;1;28;0
WireConnection;15;0;14;0
WireConnection;15;1;24;0
WireConnection;30;0;22;4
WireConnection;30;1;27;0
WireConnection;29;0;15;0
WireConnection;29;1;32;0
WireConnection;26;0;30;0
WireConnection;0;2;29;0
WireConnection;0;9;26;0
ASEEND*/
//CHKSM=C95C73967F275102F05E9EA2B9C8CF8FCC80392E