// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "HOD/Crystal_Reflection/Transparent"
{
	Properties
	{
		[Enum(UnityEngine.Rendering.CullMode)]_Culling("Culling", Int) = 2
		_Main_Color("Main_Color", Color) = (1,1,1,0)
		_Reflection_Texture("Reflection_Texture", 2D) = "white" {}
		_Gradient_Start("Gradient_Start", Color) = (0,0,0,0)
		_Gradient_End("Gradient_End", Color) = (1,1,1,0)
		_Power("Power", Float) = 1
		_Scale("Scale", Float) = 1.2
		_Position("Position", Float) = 0.23
		_Speed("Speed", Float) = 1
		_Cubemap("Cubemap", CUBE) = "white" {}
		_Cubemap_Color("Cubemap_Color", Color) = (1,1,1,0)
		_Cubemap_Power("Cubemap_Power", Float) = 0.43
		_NomalTexture("Nomal Texture", 2D) = "bump" {}
		_Nomal_Scale("Nomal_Scale", Range( 0 , 1)) = 1
		_Normal_Speed("Normal_Speed", Vector) = (0,0,0,0)

	}
	
	SubShader
	{
		
		
		Tags { "RenderType"="Opaque" "Queue"="Transparent" }
	LOD 0

		CGINCLUDE
		#pragma target 3.0
		ENDCG
		Blend Off
		AlphaToMask Off
		Cull [_Culling]
		ColorMask RGBA
		ZWrite On
		ZTest LEqual
		Offset 0 , 0
		
		
		GrabPass{ }

		Pass
		{
			Name "Unlit"
			Tags { "LightMode"="ForwardBase" }
			CGPROGRAM

			#if defined(UNITY_STEREO_INSTANCING_ENABLED) || defined(UNITY_STEREO_MULTIVIEW_ENABLED)
			#define ASE_DECLARE_SCREENSPACE_TEXTURE(tex) UNITY_DECLARE_SCREENSPACE_TEXTURE(tex);
			#else
			#define ASE_DECLARE_SCREENSPACE_TEXTURE(tex) UNITY_DECLARE_SCREENSPACE_TEXTURE(tex)
			#endif


			#ifndef UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX
			//only defining to not throw compilation error over Unity 5.5
			#define UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(input)
			#endif
			#pragma vertex vert
			#pragma fragment frag
			#pragma multi_compile_instancing
			#include "UnityCG.cginc"
			#include "UnityShaderVariables.cginc"
			#include "UnityStandardUtils.cginc"
			#define ASE_NEEDS_FRAG_WORLD_POSITION


			struct appdata
			{
				float4 vertex : POSITION;
				float4 color : COLOR;
				float3 ase_normal : NORMAL;
				float4 ase_texcoord : TEXCOORD0;
				float4 ase_tangent : TANGENT;
				UNITY_VERTEX_INPUT_INSTANCE_ID
			};
			
			struct v2f
			{
				float4 vertex : SV_POSITION;
				#ifdef ASE_NEEDS_FRAG_WORLD_POSITION
				float3 worldPos : TEXCOORD0;
				#endif
				float4 ase_texcoord1 : TEXCOORD1;
				float4 ase_texcoord2 : TEXCOORD2;
				float4 ase_texcoord3 : TEXCOORD3;
				float4 ase_texcoord4 : TEXCOORD4;
				float4 ase_texcoord5 : TEXCOORD5;
				UNITY_VERTEX_INPUT_INSTANCE_ID
				UNITY_VERTEX_OUTPUT_STEREO
			};

			uniform int _Culling;
			uniform samplerCUBE _Cubemap;
			uniform float _Cubemap_Power;
			uniform float4 _Cubemap_Color;
			ASE_DECLARE_SCREENSPACE_TEXTURE( _GrabTexture )
			uniform sampler2D _NomalTexture;
			uniform float2 _Normal_Speed;
			uniform float4 _NomalTexture_ST;
			uniform float _Nomal_Scale;
			uniform float4 _Main_Color;
			uniform sampler2D _Reflection_Texture;
			uniform float _Speed;
			uniform float4 _Reflection_Texture_ST;
			uniform float4 _Gradient_End;
			uniform float4 _Gradient_Start;
			uniform float _Position;
			uniform float _Scale;
			uniform float _Power;
			inline float4 ASE_ComputeGrabScreenPos( float4 pos )
			{
				#if UNITY_UV_STARTS_AT_TOP
				float scale = -1.0;
				#else
				float scale = 1.0;
				#endif
				float4 o = pos;
				o.y = pos.w * 0.5f;
				o.y = ( pos.y - o.y ) * _ProjectionParams.x * scale + o.y;
				return o;
			}
			

			
			v2f vert ( appdata v )
			{
				v2f o;
				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
				UNITY_TRANSFER_INSTANCE_ID(v, o);

				float3 ase_worldNormal = UnityObjectToWorldNormal(v.ase_normal);
				o.ase_texcoord1.xyz = ase_worldNormal;
				float4 ase_clipPos = UnityObjectToClipPos(v.vertex);
				float4 screenPos = ComputeScreenPos(ase_clipPos);
				o.ase_texcoord3 = screenPos;
				float3 ase_worldTangent = UnityObjectToWorldDir(v.ase_tangent);
				o.ase_texcoord4.xyz = ase_worldTangent;
				float ase_vertexTangentSign = v.ase_tangent.w * unity_WorldTransformParams.w;
				float3 ase_worldBitangent = cross( ase_worldNormal, ase_worldTangent ) * ase_vertexTangentSign;
				o.ase_texcoord5.xyz = ase_worldBitangent;
				
				o.ase_texcoord2.xyz = v.ase_texcoord.xyz;
				
				//setting value to unused interpolator channels and avoid initialization warnings
				o.ase_texcoord1.w = 0;
				o.ase_texcoord2.w = 0;
				o.ase_texcoord4.w = 0;
				o.ase_texcoord5.w = 0;
				float3 vertexValue = float3(0, 0, 0);
				#if ASE_ABSOLUTE_VERTEX_POS
				vertexValue = v.vertex.xyz;
				#endif
				vertexValue = vertexValue;
				#if ASE_ABSOLUTE_VERTEX_POS
				v.vertex.xyz = vertexValue;
				#else
				v.vertex.xyz += vertexValue;
				#endif
				o.vertex = UnityObjectToClipPos(v.vertex);

				#ifdef ASE_NEEDS_FRAG_WORLD_POSITION
				o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
				#endif
				return o;
			}
			
			fixed4 frag (v2f i ) : SV_Target
			{
				UNITY_SETUP_INSTANCE_ID(i);
				UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(i);
				fixed4 finalColor;
				#ifdef ASE_NEEDS_FRAG_WORLD_POSITION
				float3 WorldPosition = i.worldPos;
				#endif
				float3 ase_worldNormal = i.ase_texcoord1.xyz;
				float3 ase_worldViewDir = UnityWorldSpaceViewDir(WorldPosition);
				ase_worldViewDir = normalize(ase_worldViewDir);
				float3 ase_worldReflection = reflect(-ase_worldViewDir, ase_worldNormal);
				float4 Cubemap196 = ( texCUBE( _Cubemap, ( ase_worldReflection * reflect( -ase_worldViewDir , float3( 0,0,0 ) ) ) ) * _Cubemap_Power * _Cubemap_Color );
				float2 uv_NomalTexture = i.ase_texcoord2.xyz.xy * _NomalTexture_ST.xy + _NomalTexture_ST.zw;
				float2 panner171 = ( _Time.y * _Normal_Speed + uv_NomalTexture);
				float4 screenPos = i.ase_texcoord3;
				float4 ase_grabScreenPos = ASE_ComputeGrabScreenPos( screenPos );
				float4 ase_grabScreenPosNorm = ase_grabScreenPos / ase_grabScreenPos.w;
				float4 screenColor177 = UNITY_SAMPLE_SCREENSPACE_TEXTURE(_GrabTexture,( float4( UnpackScaleNormal( tex2D( _NomalTexture, ( panner171 + i.ase_texcoord2.xyz.xy ) ), _Nomal_Scale ) , 0.0 ) + ase_grabScreenPosNorm ).xy);
				float4 Distortion197 = screenColor177;
				float2 appendResult190 = (float2(0.0 , _Speed));
				float3 ase_worldTangent = i.ase_texcoord4.xyz;
				float3 ase_worldBitangent = i.ase_texcoord5.xyz;
				float3 tanToWorld0 = float3( ase_worldTangent.x, ase_worldBitangent.x, ase_worldNormal.x );
				float3 tanToWorld1 = float3( ase_worldTangent.y, ase_worldBitangent.y, ase_worldNormal.y );
				float3 tanToWorld2 = float3( ase_worldTangent.z, ase_worldBitangent.z, ase_worldNormal.z );
				float3 worldRefl89 = reflect( -ase_worldViewDir, float3( dot( tanToWorld0, mul( UNITY_MATRIX_V, float4( ase_worldNormal , 0.0 ) ).xyz ), dot( tanToWorld1, mul( UNITY_MATRIX_V, float4( ase_worldNormal , 0.0 ) ).xyz ), dot( tanToWorld2, mul( UNITY_MATRIX_V, float4( ase_worldNormal , 0.0 ) ).xyz ) ) );
				float2 texCoord11 = i.ase_texcoord2.xyz.xy * float2( 0,0 ) + worldRefl89.xy;
				float2 uv_Reflection_Texture = i.ase_texcoord2.xyz.xy * _Reflection_Texture_ST.xy + _Reflection_Texture_ST.zw;
				float2 panner10 = ( _Time.y * appendResult190 + ( texCoord11 * uv_Reflection_Texture ));
				float lerpResult189 = lerp( 1.0 , 0.0 , _Position);
				float lerpResult192 = lerp( 1.0 , 0.0 , _Scale);
				float fresnelNdotV18 = dot( ase_worldNormal, ase_worldViewDir );
				float fresnelNode18 = ( lerpResult189 + lerpResult192 * pow( 1.0 - fresnelNdotV18, _Power ) );
				float clampResult30 = clamp( fresnelNode18 , 0.0 , 1.0 );
				float4 lerpResult22 = lerp( _Gradient_End , _Gradient_Start , clampResult30);
				float4 Reflection194 = ( tex2D( _Reflection_Texture, panner10 ) * lerpResult22 );
				
				
				finalColor = ( ( ( Cubemap196 + Distortion197 ) * _Main_Color ) + Reflection194 );
				return finalColor;
			}
			ENDCG
		}
	}
	CustomEditor "ASEMaterialInspector"
	
	
}
