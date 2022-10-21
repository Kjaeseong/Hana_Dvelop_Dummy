Shader "ikita/SpawnLogo"
{
	Properties
	{
		_MainTex("MainTex", 2D) = "white" {}
		[HDR]_Color("Color", Color) = (1,0.514151,0.514151,1)
		[HDR]_Color2("Color2", Color) = (0,1,0.8198209,1)
		_Color2Strength("Color2 Strength", Range( 0 , 1)) = 0.5
		_Brightness("Brightness", Range( 0 , 1)) = 0.25
		_TileCount("Tile Count", Vector) = (50,10,0,0)
		_TileScale("Tile Scale", Vector) = (10,10,0,0)
		_Randomness("Randomness", Float) = 0
		_SwipeDirection("Swipe Direction", Range( 0 , 100)) = 46
		_SwipeWidth("Swipe Width", Float) = 2.5
		[HideInInspector] [Toggle]_Scanlines("Scanlines", Float) = 0
		[HideInInspector] _ScanlineSettings("Scanline Settings", Vector) = (1,20,0,0.1)
		[HideInInspector] _texcoord( "", 2D ) = "white" {}
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags{ "RenderType" = "Custom"  "Queue" = "Transparent+0" "IgnoreProjector" = "True" "IsEmissive" = "true"  }
		Cull Off
		ZWrite Off
		Blend SrcAlpha One , SrcAlpha One
		
		CGPROGRAM
		#include "UnityShaderVariables.cginc"
		#pragma target 3.0
		#include "UnityCG.cginc"
		#pragma surface surf Unlit keepalpha noshadow 
		struct Input
		{
			float4 vertexColor : COLOR;
			float2 uv_texcoord;
			float3 worldPos;
		};

		uniform sampler2D _MainTex;
		uniform float _SwipeWidth;
		uniform float4 _TileCount;
		uniform float _Randomness;
		uniform float _SwipeDirection;
		uniform float4 _TileScale;
		uniform float _Scanlines;
		uniform float4 _ScanlineSettings;
		uniform float4 _MainTex_ST;
		uniform float4 _Color;
		uniform float4 _Color2;
		uniform float _Color2Strength;
		uniform float _Brightness;

		inline half4 LightingUnlit( SurfaceOutput s, half3 lightDir, half atten )
		{
			return half4 ( 0, 0, 0, s.Alpha );
		}

		void surf( Input i , inout SurfaceOutput o )
		{
			float sharpness151 = ( ( ( 1.0 / _SwipeWidth ) * 15.0 ) + 1.0 );
			float p225 = i.vertexColor.a;
			float4 break89 = _TileCount;
			float2 appendResult90 = (float2(break89.x , break89.y));
			float2 TileCountXY88 = appendResult90;
			float2 uv121 = i.uv_texcoord;
			float2 TileUV101 = ( floor( ( TileCountXY88 * uv121 ) ) / TileCountXY88 );
			float2 TileWidth104 = ( 0.5 / TileCountXY88 );
			float2 TileCenter105 = ( TileUV101 + TileWidth104 );
			float dotResult549 = dot( ( floor( ( TileCenter105 * 16.0 ) ) / 16.0 ) , float2( 12.988,78.233 ) );
			float3 temp_cast_0 = (frac( ( sin( dotResult549 ) * 43758.55 ) )).xxx;
			float luminance556 = Luminance(temp_cast_0);
			float TileScatter116 = ( luminance556 - 0.5 );
			float scatterAmount154 = ( _Randomness * 2.0 );
			float invsharpness152 = ( 1.0 / sharpness151 );
			float2 temp_cast_1 = (0.5).xx;
			float2 break183 = ( TileCenter105 - temp_cast_1 );
			float temp_output_163_0 = ( _SwipeDirection * 6.28318548202515 * 0.01 );
			float temp_output_166_0 = cos( temp_output_163_0 );
			float cr171 = temp_output_166_0;
			float temp_output_165_0 = sin( temp_output_163_0 );
			float sr170 = temp_output_165_0;
			float2 appendResult194 = (float2(( ( break183.x * cr171 ) - ( break183.y * sr170 ) ) , ( ( break183.x * sr170 ) + ( break183.y * cr171 ) )));
			float2 temp_cast_2 = (0.5).xx;
			float pRange172 = max( abs( temp_output_165_0 ) , abs( temp_output_166_0 ) );
			float2 phaseuv206 = ( ( ( ( appendResult194 + 0.5 ) - temp_cast_2 ) * pRange172 ) + 0.5 );
			float temp_output_205_0 = saturate( phaseuv206.x );
			float phasePos209 = temp_output_205_0;
			float q226 = ( 1.0 - i.vertexColor.a );
			float effectTransition256 = saturate( ( ( ( sharpness151 * ( ( ( ( ( p225 - 0.5 ) + TileScatter116 ) * scatterAmount154 * invsharpness152 ) + phasePos209 ) - q226 ) ) + q226 ) - ( ( 2.0 * q226 ) - 1.0 ) ) );
			float temp_output_264_0 = saturate( pow( ( 1.0 - effectTransition256 ) , 3.0 ) );
			float effectBase267 = temp_output_264_0;
			float2 appendResult273 = (float2(_TileScale.x , _TileScale.y));
			float2 temp_cast_3 = (0.5).xx;
			float2 break402 = ( ( ( ( effectBase267 * appendResult273 ) + 1.0 ) * ( uv121 - temp_cast_3 ) ) + 0.5 );
			float scanlinesToggle414 = (( _Scanlines )?( 1.0 ):( 0.0 ));
			float4 xScanlineData378 = _ScanlineSettings;
			float scanlineShift397 = ( xScanlineData378.z / _ScreenParams.x );
			float ifLocalVar419 = 0;
			if( scanlinesToggle414 >= 0.5 )
				ifLocalVar419 = scanlineShift397;
			else
				ifLocalVar419 = 0.0;
			float2 appendResult404 = (float2(( break402.x + ifLocalVar419 ) , break402.y));
			float2 scaledUv286 = appendResult404;
			float2 TexTiling288 = _MainTex_ST.xy;
			float2 TexOffset289 = _MainTex_ST.zw;
			float4 TexColor221 = tex2D( _MainTex, ( ( scaledUv286 * TexTiling288 ) + TexOffset289 ) );
			float4 xColor301 = _Color;
			float4 xColor2302 = _Color2;
			float xFlashAmount322 = _Color2Strength;
			float4 lerpResult305 = lerp( xColor301 , xColor2302 , ( effectBase267 * xFlashAmount322 ));
			float visibility317 = ( 1.0 - saturate( pow( ( 1.0 - effectTransition256 ) , 4.0 ) ) );
			float3 ase_worldPos = i.worldPos;
			float temp_output_368_0 = ( abs( ( ( frac( ( ( ( ( 10.0 * xScanlineData378.y ) + 1.0 ) * ase_worldPos.x * 10.0 ) + ( xScanlineData378.w * _Time.y ) ) ) * 2.0 ) - 1.0 ) ) - 0.5 );
			float temp_output_370_0 = fwidth( temp_output_368_0 );
			float smoothstepResult373 = smoothstep( -temp_output_370_0 , temp_output_370_0 , temp_output_368_0);
			float ifLocalVar371 = 0;
			if( temp_output_370_0 == 0.0 )
				ifLocalVar371 = temp_output_368_0;
			else
				ifLocalVar371 = smoothstepResult373;
			float scanlines386 = ( ( 1.0 - ifLocalVar371 ) * xScanlineData378.x );
			float ifLocalVar412 = 0;
			if( scanlinesToggle414 >= 0.5 )
				ifLocalVar412 = scanlines386;
			else
				ifLocalVar412 = 1.0;
			float4 break320 = ( TexColor221 * lerpResult305 * visibility317 * ifLocalVar412 );
			float3 appendResult321 = (float3(break320.r , break320.g , break320.b));
			float xflash330 = ( ( effectBase267 * xFlashAmount322 * 10.0 ) + 1.0 );
			float xOverbright343 = _Brightness;
			o.Emission = ( float4( ( appendResult321 * ( ( ( xflash330 - 1.0 ) * visibility317 ) + 1.0 ) ) , 0.0 ) * ( ( xOverbright343 * xOverbright343 * 16.0 ) + 1.0 ) * i.vertexColor ).rgb;
			o.Alpha = max( break320.a , 0.0 );
		}

		ENDCG
	}
}