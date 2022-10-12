﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<DepthTarget>
struct List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// DepthTarget[]
struct DepthTargetU5BU5D_tB7C063FC050D5EF5F6DD81AE9179391719E0CEAC;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory[]
struct GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARCore.ARCoreCameraSubsystem
struct ARCoreCameraSubsystem_t037314216B2DA66DC532ABFB17CFD90B38830AD9;
// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41;
// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3;
// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem
struct ARCoreSessionSubsystem_t7B755C740E5ADE41F6B32317BC5105B96B137349;
// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DepthDataSourceConfig
struct DepthDataSourceConfig_tF075BE2FD9D235EC12FC9F14D3F2191FA10ADD92;
// DepthSource
struct DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2;
// DepthTarget
struct DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection
struct GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController
struct GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// IDepthDataSource
struct IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// InteractObj
struct InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler
struct SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Selection
struct Selection_tC3273612256235F7FCFBC6A2337AA1DC7FB19538;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c
struct U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47
struct U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthDataSourceConfig_tF075BE2FD9D235EC12FC9F14D3F2191FA10ADD92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FeatureSupported_tC15463343F78E985BF776995FBE804EC3D2991A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainAnchorState_tAA75FC29D5E05B159FB4B825A67F7ADEACDE0C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral002FD9BA3AE0E060C2E4E855D3879613062FB95E;
IL2CPP_EXTERN_C String_t* _stringLiteral0048CE9B060DBE934C10C085C743ACCBD5290464;
IL2CPP_EXTERN_C String_t* _stringLiteral019FF652A88FCDAF4B31156B64E8957F028B40B8;
IL2CPP_EXTERN_C String_t* _stringLiteral0642FD4A763B782EEF7CA72009CA8D1E0FFC5D86;
IL2CPP_EXTERN_C String_t* _stringLiteral098533C94B14961259EF414728C4A68C6289E9AE;
IL2CPP_EXTERN_C String_t* _stringLiteral0AD5241E070B724D1D5CE76F8E905B1B2E830A43;
IL2CPP_EXTERN_C String_t* _stringLiteral0B33E2273C9AB388C21E973B33AEB2CD77079D68;
IL2CPP_EXTERN_C String_t* _stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C;
IL2CPP_EXTERN_C String_t* _stringLiteral14E227568A75A99F99D64B36A7F13EF4EBA70B06;
IL2CPP_EXTERN_C String_t* _stringLiteral17B8F3EF49CC7544D310EC961509B812B673A5EF;
IL2CPP_EXTERN_C String_t* _stringLiteral1CD8725749511AED54A82B7EEB159755F15D7128;
IL2CPP_EXTERN_C String_t* _stringLiteral23E836F9814F83ED24864553FD4B41704BFEFFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral242A0070D29873DA9B6E4E1164C9C8B53CE23D19;
IL2CPP_EXTERN_C String_t* _stringLiteral272FD43E889593108C54482F13ABAACDD71C5FFE;
IL2CPP_EXTERN_C String_t* _stringLiteral2C9E4BF3A5F27EAE20727D2908834E2813033910;
IL2CPP_EXTERN_C String_t* _stringLiteral3187553363A94FA380DF7928E3C910219A40C90A;
IL2CPP_EXTERN_C String_t* _stringLiteral31D77236056880C0D3C936B020E57CFE072FD559;
IL2CPP_EXTERN_C String_t* _stringLiteral3A80DBD535E7AFB2B86F791A732EBEEE4BCF7CDB;
IL2CPP_EXTERN_C String_t* _stringLiteral402969FEF140B759AA2E21468D1A944100BDBBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64;
IL2CPP_EXTERN_C String_t* _stringLiteral659DC561CB989579B2C5DB5BC9116FC03B863958;
IL2CPP_EXTERN_C String_t* _stringLiteral66C80CC984CDD28BB6F1D9982F162BFCE4A9B0A2;
IL2CPP_EXTERN_C String_t* _stringLiteral6F7E278F82DB764B5165C505CCBEC35D56D7C1C6;
IL2CPP_EXTERN_C String_t* _stringLiteral78E274AC89F9BB2B7C9C9C38754AE07662487DED;
IL2CPP_EXTERN_C String_t* _stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91;
IL2CPP_EXTERN_C String_t* _stringLiteral80D87A6B5B660BA3CC373D14B317E3A40FC27CD9;
IL2CPP_EXTERN_C String_t* _stringLiteral84603BEBCE50D165E99F4F1BE49F02FF0B3BC3DB;
IL2CPP_EXTERN_C String_t* _stringLiteral8E5080011A7CA3BD4949A61B46ADA7657E8540F9;
IL2CPP_EXTERN_C String_t* _stringLiteral96EF7EFF0F00A2F793F25BE896448C3A1BBA9828;
IL2CPP_EXTERN_C String_t* _stringLiteral970A4D6490D612AAF148057C65320C8178CD0C87;
IL2CPP_EXTERN_C String_t* _stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888;
IL2CPP_EXTERN_C String_t* _stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD;
IL2CPP_EXTERN_C String_t* _stringLiteralA628C3EA1A977D457A54A899CA2F513C35C50B9C;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3;
IL2CPP_EXTERN_C String_t* _stringLiteralB3485A54065E6F4E66AFF0546DB80DF7DA4A5284;
IL2CPP_EXTERN_C String_t* _stringLiteralB7CA9DC3E5A221DFCC0483888D319D118E5CEF90;
IL2CPP_EXTERN_C String_t* _stringLiteralBA97DB5D365444C5E6EF88EF63073328B97B1146;
IL2CPP_EXTERN_C String_t* _stringLiteralBC7FFF74C9144CC4E77C56C5F9B4FDBC4516816D;
IL2CPP_EXTERN_C String_t* _stringLiteralC5B3F23F2F2DE4C8840CF9F1CF35FDF0FF44919B;
IL2CPP_EXTERN_C String_t* _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
IL2CPP_EXTERN_C String_t* _stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A905249C0409DB8B563D30BAE889395AFBDB30;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralEC2DBADB2D94879827209856D3681D3473726A46;
IL2CPP_EXTERN_C String_t* _stringLiteralEF7042B13A54AE6D2F33826F9F5FA12143D46847;
IL2CPP_EXTERN_C String_t* _stringLiteralEF77921BB4414128C613E3684C3DFD982CC653E1;
IL2CPP_EXTERN_C String_t* _stringLiteralF971503E7E762E947F8E0E4CFCDBDEEBB6C91D01;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA251D8CD4C01D372EB4EAC50A26C0633FA71D7;
IL2CPP_EXTERN_C String_t* _stringLiteralFF4CB593B711998014E24A8BDC4D1A685D2F9E5B;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4A4BFF47B2E8691771C828AE432726FF86D847F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisInteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_m7116D069F0684C098197FA17DE5A0E800C7DE05B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DepthDataSourceConfig_Awake_m88ED71CD8F91DAD8CCD4F4DAFDFA8C4DA6121BBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCE96364DCD502F6D89B13F6E92EF5DA6AB7AEFF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB0AEA7A79B7DA5F93654C0D255F69B0B13A47206_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE0DA2B755C219615C83D8C6FA228F2F15C73985A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m449821BD94BB048929D0F08D05D4BA227B430BE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeospatialController_OnSetTerrainAnchorClicked_mCC1F911FC63B5358DF41DED0EEB82A0D04F9C85A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_mB3CF0CB18FC4CB0B45740E7AAD892F7B4F55CC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m464AB96C7D0E34D4B4EE0791194F5CE91DB61B7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mEAFBC70667E1D566974A277B094BEC9CF033C37C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD168CA35CA40857A9D4FBC3A2EA4DAD90F8AFD2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m235BD13C396FE1F7FCB97F5C13CBD3A96FDE5EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m056575F3AC5160C6E092709D3D5556091EBBE26F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckTerrainAnchorStateU3Ed__47_System_Collections_IEnumerator_Reset_mC3BD78A1B1B9D44B583A674E4D6F98474D5DFA17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__51_0_mE465BE86F8DEAC940DD1FF509F9DC1CA643A67EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass50_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_m2B28B230DAE31AD3881A0E5B845DB0AC2AE93987_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<DepthTarget>
struct List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DepthTargetU5BU5D_tB7C063FC050D5EF5F6DD81AE9179391719E0CEAC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DepthTargetU5BU5D_tB7C063FC050D5EF5F6DD81AE9179391719E0CEAC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection
struct GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::Collection
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* ___Collection_0;
};

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c
struct U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA  : public RuntimeObject
{
};

struct U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields
{
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<>9
	U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* ___U3CU3E9_0;
	// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<>9__51_0
	Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* ___U3CU3E9__51_0_1;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47
struct U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710  : public RuntimeObject
{
	// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47::anchor
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___anchor_2;
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47::<>4__this
	GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* ___U3CU3E4__this_3;
	// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47::<retry>5__2
	int32_t ___U3CretryU3E5__2_4;
};

// System.Collections.Generic.List`1/Enumerator<DepthTarget>
struct Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C 
{
	// System.String Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::SerializedTime
	String_t* ___SerializedTime_0;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Latitude
	double ___Latitude_1;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Longitude
	double ___Longitude_2;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Altitude
	double ___Altitude_3;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Heading
	double ___Heading_4;
};
// Native definition for P/Invoke marshalling of Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke
{
	char* ___SerializedTime_0;
	double ___Latitude_1;
	double ___Longitude_2;
	double ___Altitude_3;
	double ___Heading_4;
};
// Native definition for COM marshalling of Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com
{
	Il2CppChar* ___SerializedTime_0;
	double ___Latitude_1;
	double ___Longitude_2;
	double ___Altitude_3;
	double ___Heading_4;
};

// Google.XR.ARCoreExtensions.GeospatialPose
struct GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C 
{
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Latitude
	double ___Latitude_0;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Longitude
	double ___Longitude_1;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Altitude
	double ___Altitude_2;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Heading
	double ___Heading_3;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HeadingAccuracy
	double ___HeadingAccuracy_4;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HorizontalAccuracy
	double ___HorizontalAccuracy_5;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::VerticalAccuracy
	double ___VerticalAccuracy_6;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ____current_3;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA  : public RuntimeObject
{
	// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass50_0::current
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___current_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654  : public MulticastDelegate_t
{
};

// System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9  : public MulticastDelegate_t
{
};

// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Google.XR.ARCoreExtensions.CloudAnchorMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CloudAnchorMode
	int32_t ___CloudAnchorMode_4;
	// Google.XR.ARCoreExtensions.GeospatialMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::GeospatialMode
	int32_t ___GeospatialMode_5;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DepthDataSourceConfig
struct DepthDataSourceConfig_tF075BE2FD9D235EC12FC9F14D3F2191FA10ADD92  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String DepthDataSourceConfig::DepthSourceClassName
	String_t* ___DepthSourceClassName_4;
	// IDepthDataSource DepthDataSourceConfig::DepthDataSource
	RuntimeObject* ___DepthDataSource_5;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.ARCoreExtensions::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.ARCoreExtensions::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.ARCoreExtensions::CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___CameraManager_6;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::ARCoreExtensionsConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___ARCoreExtensionsConfig_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::CameraConfigFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ___CameraConfigFilter_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent Google.XR.ARCoreExtensions.ARCoreExtensions::OnChooseXRCameraConfiguration
	OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* ___OnChooseXRCameraConfiguration_9;
	// System.String Google.XR.ARCoreExtensions.ARCoreExtensions::_currentPermissionRequest
	String_t* ____currentPermissionRequest_12;
	// System.Collections.Generic.HashSet`1<System.String> Google.XR.ARCoreExtensions.ARCoreExtensions::_requiredPermissionNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____requiredPermissionNames_13;
	// UnityEngine.XR.ARCore.ARCoreSessionSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreSubsystem
	ARCoreSessionSubsystem_t7B755C740E5ADE41F6B32317BC5105B96B137349* ____arCoreSubsystem_14;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ____cachedConfig_15;
	// UnityEngine.XR.ARCore.ARCoreCameraSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreCameraSubsystem
	ARCoreCameraSubsystem_t037314216B2DA66DC532ABFB17CFD90B38830AD9* ____arCoreCameraSubsystem_16;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ____cachedFilter_17;
};

struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields
{
	// UnityEngine.AndroidJavaClass Google.XR.ARCoreExtensions.ARCoreExtensions::_versionInfo
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ____versionInfo_11;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::<_instance>k__BackingField
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___U3C_instanceU3Ek__BackingField_18;
};

// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_5;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// DepthSource
struct DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean DepthSource::ReprojectIntermediateRawDepth
	bool ___ReprojectIntermediateRawDepth_6;
	// UnityEngine.Camera DepthSource::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_21;
};

struct DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields
{
	// System.String DepthSource::DepthTexturePropertyName
	String_t* ___DepthTexturePropertyName_7;
	// System.String DepthSource::DisplayTransformPropertyName
	String_t* ___DisplayTransformPropertyName_8;
	// System.String DepthSource::OcclusionBlendingScale
	String_t* ___OcclusionBlendingScale_9;
	// UnityEngine.Texture2D DepthSource::_depthTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____depthTexture_10;
	// UnityEngine.Texture2D DepthSource::_confidenceTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____confidenceTexture_11;
	// System.Collections.Generic.List`1<DepthTarget> DepthSource::_depthTargets
	List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* ____depthTargets_12;
	// DepthSource DepthSource::_instance
	DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2* ____instance_13;
	// UnityEngine.Matrix4x4 DepthSource::_screenRotation
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____screenRotation_14;
	// UnityEngine.Matrix4x4 DepthSource::_localToWorldTransform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____localToWorldTransform_15;
	// System.Boolean DepthSource::_updateDepth
	bool ____updateDepth_16;
	// System.Boolean DepthSource::_updateConfidence
	bool ____updateConfidence_17;
	// System.Boolean DepthSource::_alwaysUpdateDepth
	bool ____alwaysUpdateDepth_18;
	// System.Boolean DepthSource::_alwaysUpdateConfidence
	bool ____alwaysUpdateConfidence_19;
	// IDepthDataSource DepthSource::_depthDataSource
	RuntimeObject* ____depthDataSource_20;
};

// DepthTarget
struct DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean DepthTarget::UseRawDepth
	bool ___UseRawDepth_4;
	// System.Boolean DepthTarget::SetAsMainTexture
	bool ___SetAsMainTexture_5;
	// UnityEngine.Material DepthTarget::DepthTargetMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___DepthTargetMaterial_6;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController
struct GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_4;
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_5;
	// UnityEngine.XR.ARFoundation.ARAnchorManager Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___AnchorManager_6;
	// Google.XR.ARCoreExtensions.AREarthManager Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::EarthManager
	AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* ___EarthManager_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ARCoreExtensions
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___ARCoreExtensions_8;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::GeospatialPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GeospatialPrefab_9;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::TerrainPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TerrainPrefab_10;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PrivacyPromptCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PrivacyPromptCanvas_11;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ARViewCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ARViewCanvas_12;
	// UnityEngine.UI.Button Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ClearAllButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ClearAllButton_13;
	// UnityEngine.UI.Button Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SetAnchorButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___SetAnchorButton_14;
	// UnityEngine.UI.Button Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::TerrainButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___TerrainButton_15;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::InfoPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___InfoPanel_16;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::InfoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___InfoText_17;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SnackBarText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___SnackBarText_18;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::DebugText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DebugText_19;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_isInARView
	bool ____isInARView_33;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_isReturning
	bool ____isReturning_34;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_isLocalizing
	bool ____isLocalizing_35;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_enablingGeospatial
	bool ____enablingGeospatial_36;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_shouldResolvingHistory
	bool ____shouldResolvingHistory_37;
	// System.Single Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_localizationPassedTime
	float ____localizationPassedTime_38;
	// System.Single Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_configurePrepareTime
	float ____configurePrepareTime_39;
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_historyCollection
	GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* ____historyCollection_40;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_anchorObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____anchorObjects_41;
};

// InteractObj
struct InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject InteractObj::_selcetedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____selcetedObject_4;
};

struct InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_StaticFields
{
	// InteractObj InteractObj::_interactObject
	InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* ____interactObject_5;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler
struct SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rect Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::_screenSafeArea
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____screenSafeArea_4;
};

// Selection
struct Selection_tC3273612256235F7FCFBC6A2337AA1DC7FB19538  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Selection::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_4;
	// UnityEngine.LayerMask Selection::_selectObjectLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____selectObjectLayer_5;
	// UnityEngine.Vector2 Selection::_touchPose
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____touchPose_6;
	// UnityEngine.Ray Selection::_ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____ray_7;
	// UnityEngine.RaycastHit Selection::_hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ____hit_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory[]
struct GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244  : public RuntimeArray
{
	ALIGN_FIELD (8) GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C m_Items[1];

	inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___SerializedTime_0), (void*)NULL);
	}
	inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___SerializedTime_0), (void*)NULL);
	}
};


// System.Void System.Array::Resize<System.Int16>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4A4BFF47B2E8691771C828AE432726FF86D847F6_gshared (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_gshared (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_gshared_inline (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_gshared (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m6906BC0330B02272E5E11B26C6C18A3A8CC271A7_gshared (Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* ___match0, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m4F653C6CE2CE5AE4F2EBB6FF39AFD589ED84244F_gshared (Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* ___comparison0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;

// InteractObj InteractObj::get_SelectedObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* InteractObj_get_SelectedObject_mFB3C932EB23F5AF08A785685A93CF850844375B9_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D DepthSource::get_DepthTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870 (const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Texture2D::Reinitialize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2D_Reinitialize_m9AB4169DA359C18BB4102F8E00C4321B53714E6B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::CopyTexture(UnityEngine.Texture,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_CopyTexture_m613750C66DF707DB4F24570A3402EE94257C0C58 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___dst1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D DepthSource::get_ConfidenceTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DepthSource_get_ConfidenceTexture_mAD1FB0238B5E07E5AEF5B26FBFD972CF4B44CC2C (const RuntimeMethod* method) ;
// System.Int16[] DepthSource::get_DepthArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* DepthSource_get_DepthArray_m1144DBABD159674216A6D77CC03C19B8308470B6 (const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Int16>(T[]&,System.Int32)
inline void Array_Resize_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4A4BFF47B2E8691771C828AE432726FF86D847F6 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB**, int32_t, const RuntimeMethod*))Array_Resize_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4A4BFF47B2E8691771C828AE432726FF86D847F6_gshared)(___array0, ___newSize1, method);
}
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Byte[] DepthSource::get_ConfidenceArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DepthSource_get_ConfidenceArray_m7F5132A1A8780EDBA5C499324924D1ED5421A121 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_negativeInfinity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_negativeInfinity_mAE9CF7FAC4027EC241B939EDC4E954C1241799CB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 DepthSource::get_PrincipalPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DepthSource_get_PrincipalPoint_m40D0C0DF9BD60DA642EC0816DE91B6610D2AA59D (const RuntimeMethod* method) ;
// UnityEngine.Vector2 DepthSource::get_FocalLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DepthSource_get_FocalLength_m7656FAC6B917D46E9D9585F32DCBC1870B5ED732 (const RuntimeMethod* method) ;
// System.Int32 DepthSource::get_DepthWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DepthSource_get_DepthWidth_mADC9A00926B3A9AE6A389EA3252F981C96470060 (const RuntimeMethod* method) ;
// System.Int32 DepthSource::get_DepthHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DepthSource_get_DepthHeight_m16607D365A4C1D64B0291D9A3B538D161D23D7B3 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 DepthSource::ComputeVertex(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DepthSource_ComputeVertex_m8F227D571C48FE332D8624899908E3D8E60FCFAF (int32_t ___x0, int32_t ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DepthSource::DepthXYtoUV(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DepthSource_DepthXYtoUV_m8632759BE002FA088BD7217F408D2A84A537780F (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 DepthSource::get_LocalToWorldMatrix()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 DepthSource_get_LocalToWorldMatrix_m577A220FC9E7AC4C14B0AB2024D51A323A8D8AB2_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int DepthSource::ScreenToDepthXY(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A DepthSource_ScreenToDepthXY_m6EE2E3A7A6E3F5E706CE851DAC707EF2FEE94597 (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Single DepthSource::GetDepthFromXY(System.Int32,System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DepthSource_GetDepthFromXY_m81E244A5DA000483C508BDF6966F5E52EFBB348E (int32_t ___x0, int32_t ___y1, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___depthArray2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DepthSource::TransformVertexToWorldSpace(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DepthSource_TransformVertexToWorldSpace_m1880B01AF89850BEDD924B77FED2BE821E61A470 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vertex0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 DepthSource::GetVertexInWorldSpaceFromScreenXY(System.Int32,System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DepthSource_GetVertexInWorldSpaceFromScreenXY_m70660448D1E3E1CD5E4E9720BB9F843B1EDCA03A (int32_t ___x0, int32_t ___y1, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___depthArray2, const RuntimeMethod* method) ;
// System.Boolean DepthSource::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthSource_get_Initialized_mCD97BEA63B240225D7A9B3E0875AAC7D82153715 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DepthSource::ScreenToDepthUV(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DepthSource_ScreenToDepthUV_m78472F5CAFC963BC40708BE538E4075034B06933 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<DepthTarget>::Contains(T)
inline bool List_1_Contains_mEAFBC70667E1D566974A277B094BEC9CF033C37C (List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* __this, DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19*, DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<DepthTarget>::Add(T)
inline void List_1_Add_m464AB96C7D0E34D4B4EE0791194F5CE91DB61B7F_inline (List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* __this, DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19*, DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void DepthSource::SetDepthTexture(DepthTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_SetDepthTexture_mE382ED10316B8EB838B937DE6B35E13427642FC6 (DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* ___target0, const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<DepthTarget>::Remove(T)
inline bool List_1_Remove_m235BD13C396FE1F7FCB97F5C13CBD3A96FDE5EBE (List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* __this, DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19*, DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Rotate(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Rotate_m015442530DFF5651458BBFDFB3CBC9180FC09D9E (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DepthTarget>::GetEnumerator()
inline Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF List_1_GetEnumerator_mD168CA35CA40857A9D4FBC3A2EA4DAD90F8AFD2A (List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF (*) (List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DepthTarget>::Dispose()
inline void Enumerator_Dispose_mCE96364DCD502F6D89B13F6E92EF5DA6AB7AEFF2 (Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DepthTarget>::get_Current()
inline DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* Enumerator_get_Current_mE0DA2B755C219615C83D8C6FA228F2F15C73985A_inline (Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF* __this, const RuntimeMethod* method)
{
	return ((  DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* (*) (Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void DepthSource::UpdateScreenOrientationOnMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_UpdateScreenOrientationOnMaterial_m895F991420B4BD0C947C3DA1E179A6C38AED34CC (DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) ;
// System.Void DepthSource::SetAlphaForBlendedOcclusionProperties(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_SetAlphaForBlendedOcclusionProperties_m873EE977AE900EECFFA4120E4B4E28D9297E0492 (DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DepthTarget>::MoveNext()
inline bool Enumerator_MoveNext_mB0AEA7A79B7DA5F93654C0D255F69B0B13A47206 (Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void DepthSource::UpdateScreenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_UpdateScreenOrientation_m2AC068CA108D2CF7D7EFDA2813248198FFC10BB5 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 DepthSource::get_ScreenRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 DepthSource_get_ScreenRotation_m128F72FAE35126621A6730F25AF1712519051D48_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DepthTarget>::.ctor()
inline void List_1__ctor_m056575F3AC5160C6E092709D3D5556091EBBE26F (List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void DepthSource::SwitchToRawDepth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_SwitchToRawDepth_mE20E39D7166AD8CA1AFD0669CDD7CF42E2B03E03 (bool ___useRawDepth0, const RuntimeMethod* method) ;
// System.Void DepthSource::AddDepthTarget(DepthTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_AddDepthTarget_m822A7ECA801DCFEBED146F0779B796DA6EA8A9D2 (DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* ___target0, const RuntimeMethod* method) ;
// System.Void DepthSource::RemoveDepthTarget(DepthTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_RemoveDepthTarget_m571EBCCB90971F95A8DF6E07945856D2313DF95A (DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* ___target0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<InteractObj>()
inline InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* Component_GetComponentInChildren_TisInteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_m7116D069F0684C098197FA17DE5A0E800C7DE05B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void InteractObj::set_SelectedObject(InteractObj)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractObj_set_SelectedObject_m3EA21BB05BD7E5BB0E2109A9D160932CEEAF5B37 (InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.DateTime,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_m11B5D19C7052A20A372B2D78E05D2EF997EA0F5B (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time0, double ___latitude1, double ___longitude2, double ___altitude3, double ___heading4, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_mC5B6E43C79DCB7BB244DBE4D791EB0F596B74703 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, double ___latitude0, double ___longitude1, double ___altitude2, double ___heading3, const RuntimeMethod* method) ;
// System.DateTime System.Convert::ToDateTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Convert_ToDateTime_mE15C6E51579A9876015F9E295D5025B80BE73726 (String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::get_CreatedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeospatialAnchorHistory_ToString_mEF75221D34F044801DB11C95F4113DD9EFA87CF9 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor()
inline void List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83 (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SwitchToARView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Clear()
inline void List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SaveGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.GeospatialPose Google.XR.ARCoreExtensions.AREarthManager::get_CameraGeospatialPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PlaceGeospatialAnchor(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* GeospatialController_PlaceGeospatialAnchor_m20AC740B55383282D2AFE8F9181848A75DE2A650 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___history0, bool ___terrain1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Add(T)
inline void List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C, const RuntimeMethod*))List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Count()
inline int32_t List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_gshared_inline)(__this, method);
}
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::CheckTerrainAnchorState(Google.XR.ARCoreExtensions.ARGeospatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeospatialController_CheckTerrainAnchorState_mECBEC2C347FE65F6FFE796326250B8B6985FF19F (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___anchor0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToLandscapeLeft(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeLeft_mEBF1EEDF3BCD85A85FEF5B59ECEE40D6A73983D0 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToLandscapeRight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeRight_m259F67F2F38E5E28A7A5ABBEA5CFE9650DD7B184 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToPortraitUpsideDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortraitUpsideDown_m322363C3E0347AF6C62240BD814C8719CF54AF12 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01 (const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LoadGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LoadGeospatialAnchorHistory_m78B8DEB20F80FE681FA18AC34EFBB190DE330605 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::UpdateDebugInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_UpdateDebugInfo_m4DD7408BE036B30EE50B0F2CB2D5ED7B24B314A1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LifecycleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LifecycleUpdate_m9DF865831BF6070D17D792ABD8948E03B692AC9C (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline (const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.AREarthManager::IsGeospatialModeSupported(Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ReturnWithReason(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, String_t* ___reason0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.EarthState Google.XR.ARCoreExtensions.AREarthManager::get_EarthState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38 (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.AREarthManager::get_EarthTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Google.XR.ARCoreExtensions.ARGeospatialAnchor>()
inline ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* GameObject_GetComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m449821BD94BB048929D0F08D05D4BA227B430BE9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// Google.XR.ARCoreExtensions.TerrainAnchorState Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_terrainAnchorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ResolveHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ResolveHistory_mF4A2FFB2FC64B439305A9B081795341F5F4A7359 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75 (double* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckTerrainAnchorStateU3Ed__47__ctor_m550E6D45CCA50968E1599938087320E0F7603A22 (U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, double ___latitude1, double ___longitude2, double ___altitude3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::ResolveAnchorOnTerrain(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ARAnchorManagerExtensions_ResolveAnchorOnTerrain_mFB8A8E939F146EA51A5FB24086DF91F1C6795AFF (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, double ___latitude1, double ___longitude2, double ___altitudeAboveTerrain3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::GetEnumerator()
inline Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Dispose()
inline void Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6*, const RuntimeMethod*))Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Current()
inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_inline (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method)
{
	return ((  GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C (*) (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6*, const RuntimeMethod*))Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::MoveNext()
inline bool Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447 (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6*, const RuntimeMethod*))Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_gshared)(__this, method);
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_m09442E832444FC97B7E07328A074649C7F964DD7 (U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection>(System.String)
inline GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_mB3CF0CB18FC4CB0B45740E7AAD892F7B4F55CC22 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// System.Void System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m6906BC0330B02272E5E11B26C6C18A3A8CC271A7 (Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m6906BC0330B02272E5E11B26C6C18A3A8CC271A7_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveAll(System.Predicate`1<T>)
inline int32_t List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347 (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9*, const RuntimeMethod*))List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_gshared)(__this, ___match0, method);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistoryCollection__ctor_mF8B2CC65BEF02F8F5AD9A6745E9DA6B05D7D06FA (GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m4F653C6CE2CE5AE4F2EBB6FF39AFD589ED84244F (Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m4F653C6CE2CE5AE4F2EBB6FF39AFD589ED84244F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654*, const RuntimeMethod*))List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_gshared)(__this, ___comparison0, method);
}
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273 (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_gshared)(__this, ___index0, ___count1, method);
}
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___value0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5 (const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
inline bool List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARGeospatialAnchor_get_trackableId_m8560D0B2C6E8D602B97A0B61EA92499AAD683939 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<TSource>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared)(___source0, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_CompareTo_m4A3000CD4FF15EA7CA2E9C5C95A9D07F3AA8D35D (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Screen::get_safeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Screen_get_safeArea_m2ADAD6C36CC5DB40CC2DAD300DD1DF7CA4DF2525 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Inequality_mB5D7316EB50B1DDA9324F4BE6741DFF6A673137D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lhs0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rhs1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::MatchRectTransformToSafeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64 (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean InteractObj::get_IsSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractObj_get_IsSelected_m5CE1BE2AA594B5FFB42550E21E21F1ECDA8E97DB (InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => SelectedObject == this;
		InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* L_0;
		L_0 = InteractObj_get_SelectedObject_mFB3C932EB23F5AF08A785685A93CF850844375B9_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		return L_1;
	}
}
// InteractObj InteractObj::get_SelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* InteractObj_get_SelectedObject_mFB3C932EB23F5AF08A785685A93CF850844375B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _interactObject;
		InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* L_0 = ((InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_StaticFields*)il2cpp_codegen_static_fields_for(InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_il2cpp_TypeInfo_var))->____interactObject_5;
		return L_0;
	}
}
// System.Void InteractObj::set_SelectedObject(InteractObj)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractObj_set_SelectedObject_m3EA21BB05BD7E5BB0E2109A9D160932CEEAF5B37 (InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_interactObject == value)
		InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* L_0 = ((InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_StaticFields*)il2cpp_codegen_static_fields_for(InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_il2cpp_TypeInfo_var))->____interactObject_5;
		InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if(_interactObject != null)
		InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* L_3 = ((InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_StaticFields*)il2cpp_codegen_static_fields_for(InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_il2cpp_TypeInfo_var))->____interactObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// _interactObject._selcetedObject.SetActive(false);
		InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* L_5 = ((InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_StaticFields*)il2cpp_codegen_static_fields_for(InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_il2cpp_TypeInfo_var))->____interactObject_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->____selcetedObject_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_002b:
	{
		// _interactObject = value;
		InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* L_7 = ___value0;
		((InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_StaticFields*)il2cpp_codegen_static_fields_for(InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_il2cpp_TypeInfo_var))->____interactObject_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_StaticFields*)il2cpp_codegen_static_fields_for(InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_il2cpp_TypeInfo_var))->____interactObject_5), (void*)L_7);
		// if(value != null)
		InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* L_8 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		// value._selcetedObject.SetActive(true);
		InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* L_10 = ___value0;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->____selcetedObject_4;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void InteractObj::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractObj_Awake_mC3B19C0E5245B37FCE5FA422FCF3E4048976917E (InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* __this, const RuntimeMethod* method) 
{
	{
		// _selcetedObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____selcetedObject_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void InteractObj::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractObj__ctor_m5D4CF8DC8F1FB51E7841D349DEED3E9543D610DD (InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DepthDataSourceConfig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthDataSourceConfig_Awake_m88ED71CD8F91DAD8CCD4F4DAFDFA8C4DA6121BBE (DepthDataSourceConfig_tF075BE2FD9D235EC12FC9F14D3F2191FA10ADD92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthDataSourceConfig_Awake_m88ED71CD8F91DAD8CCD4F4DAFDFA8C4DA6121BBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		// Type type = Type.GetType(DepthSourceClassName);
		String_t* L_0 = __this->___DepthSourceClassName_4;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = il2cpp_codegen_get_type(L_0, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, DepthDataSourceConfig_Awake_m88ED71CD8F91DAD8CCD4F4DAFDFA8C4DA6121BBE_RuntimeMethod_var);
		V_0 = L_1;
		// DepthDataSource = (IDepthDataSource)Activator.CreateInstance(type);
		Type_t* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_2, NULL);
		__this->___DepthDataSource_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DepthDataSource_5), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_3, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void DepthDataSourceConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthDataSourceConfig__ctor_m38C15A16B2FC337675FCD6CA2171AA945CFB7BDD (DepthDataSourceConfig_tF075BE2FD9D235EC12FC9F14D3F2191FA10ADD92* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Camera DepthSource::get_ARCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* DepthSource_get_ARCamera_m6670D4BA970993DFA325714B6CECE30917A4CC77 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Camera ARCamera => _instance == null ? null : _instance._camera;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____instance_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2* L_2 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____instance_13;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = L_2->____camera_21;
		return L_3;
	}

IL_0018:
	{
		return (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
	}
}
// System.Boolean DepthSource::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthSource_get_Initialized_mCD97BEA63B240225D7A9B3E0875AAC7D82153715 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Initialized => _depthDataSource.Initialized;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean IDepthDataSource::get_Initialized() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// DepthSource DepthSource::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2* DepthSource_get_Instance_m1DA56C9AFA65F731232B41B9B71E7F033074AC95 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DepthSource Instance => _instance;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____instance_13;
		return L_0;
	}
}
// IDepthDataSource DepthSource::get_DepthDataSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DepthSource_get_DepthDataSource_m2D75E25CB936FE02959367D1AA97F428ED547153 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IDepthDataSource DepthDataSource => _depthDataSource;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		return L_0;
	}
}
// UnityEngine.Vector2 DepthSource::get_FocalLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DepthSource_get_FocalLength_m7656FAC6B917D46E9D9585F32DCBC1870B5ED732 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector2 FocalLength => _depthDataSource.FocalLength;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(4 /* UnityEngine.Vector2 IDepthDataSource::get_FocalLength() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// UnityEngine.Vector2 DepthSource::get_PrincipalPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DepthSource_get_PrincipalPoint_m40D0C0DF9BD60DA642EC0816DE91B6610D2AA59D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector2 PrincipalPoint => _depthDataSource.PrincipalPoint;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(5 /* UnityEngine.Vector2 IDepthDataSource::get_PrincipalPoint() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// UnityEngine.Vector2Int DepthSource::get_ImageDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A DepthSource_get_ImageDimensions_m047C60D8C59E0F33B88DD1EC656EF8C1A9B6FC5B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector2Int ImageDimensions => _depthDataSource.ImageDimensions;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_0);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
		L_1 = InterfaceFuncInvoker0< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(6 /* UnityEngine.Vector2Int IDepthDataSource::get_ImageDimensions() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// UnityEngine.Matrix4x4 DepthSource::get_LocalToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 DepthSource_get_LocalToWorldMatrix_m577A220FC9E7AC4C14B0AB2024D51A323A8D8AB2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Matrix4x4 LocalToWorldMatrix => _localToWorldTransform;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____localToWorldTransform_15;
		return L_0;
	}
}
// UnityEngine.Texture2D DepthSource::get_DepthTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_updateDepth)
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		bool L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateDepth_16;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// _depthDataSource.UpdateDepthTexture(ref _depthTexture);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_1);
		InterfaceActionInvoker1< Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** >::Invoke(8 /* System.Void IDepthDataSource::UpdateDepthTexture(UnityEngine.Texture2D&) */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_1, (&((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTexture_10));
		// _updateDepth = true;
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateDepth_16 = (bool)1;
	}

IL_001c:
	{
		// return _depthTexture;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTexture_10;
		return L_2;
	}
}
// UnityEngine.Texture2D DepthSource::get_ConfidenceTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DepthSource_get_ConfidenceTexture_mAD1FB0238B5E07E5AEF5B26FBFD972CF4B44CC2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_updateDepth || _updateConfidence)
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		bool L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateDepth_16;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		bool L_1 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateConfidence_17;
		if (!L_1)
		{
			goto IL_0023;
		}
	}

IL_000e:
	{
		// _depthDataSource.UpdateConfidenceTexture(ref _confidenceTexture);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_2);
		InterfaceActionInvoker1< Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** >::Invoke(9 /* System.Void IDepthDataSource::UpdateConfidenceTexture(UnityEngine.Texture2D&) */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_2, (&((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____confidenceTexture_11));
		// _updateConfidence = true;
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateConfidence_17 = (bool)1;
	}

IL_0023:
	{
		// return _confidenceTexture;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____confidenceTexture_11;
		return L_3;
	}
}
// System.Int16[] DepthSource::get_DepthArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* DepthSource_get_DepthArray_m1144DBABD159674216A6D77CC03C19B8308470B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_updateDepth)
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		bool L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateDepth_16;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// _depthDataSource.UpdateDepthArray();
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_1);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2;
		L_2 = InterfaceFuncInvoker0< Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* >::Invoke(10 /* System.Int16[] IDepthDataSource::UpdateDepthArray() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_1);
	}

IL_0012:
	{
		// return _depthDataSource.DepthArray;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_3);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4;
		L_4 = InterfaceFuncInvoker0< Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* >::Invoke(1 /* System.Int16[] IDepthDataSource::get_DepthArray() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}
}
// System.Byte[] DepthSource::get_ConfidenceArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DepthSource_get_ConfidenceArray_m7F5132A1A8780EDBA5C499324924D1ED5421A121 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_updateDepth || _updateConfidence)
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		bool L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateDepth_16;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		bool L_1 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateConfidence_17;
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_000e:
	{
		// _depthDataSource.UpdateConfidenceArray();
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Byte[] IDepthDataSource::UpdateConfidenceArray() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_2);
	}

IL_0019:
	{
		// return _depthDataSource.ConfidenceArray;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] IDepthDataSource::get_ConfidenceArray() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_4);
		return L_5;
	}
}
// System.Int32 DepthSource::get_DepthWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DepthSource_get_DepthWidth_mADC9A00926B3A9AE6A389EA3252F981C96470060 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static int DepthWidth => _depthDataSource.ImageDimensions.x;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_0);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
		L_1 = InterfaceFuncInvoker0< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(6 /* UnityEngine.Vector2Int IDepthDataSource::get_ImageDimensions() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 DepthSource::get_DepthHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DepthSource_get_DepthHeight_m16607D365A4C1D64B0291D9A3B538D161D23D7B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static int DepthHeight => _depthDataSource.ImageDimensions.y;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_0);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
		L_1 = InterfaceFuncInvoker0< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(6 /* UnityEngine.Vector2Int IDepthDataSource::get_ImageDimensions() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Boolean DepthSource::get_AlwaysUpdateDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthSource_get_AlwaysUpdateDepth_m9A07352693455D2F06C5E3776845F9FE062CCF49 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _alwaysUpdateDepth;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		bool L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____alwaysUpdateDepth_18;
		return L_0;
	}
}
// System.Void DepthSource::set_AlwaysUpdateDepth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_set_AlwaysUpdateDepth_m18A5B8A789F4BC95BF022C91D9939E7647BAB6DD (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => _alwaysUpdateDepth = value;
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____alwaysUpdateDepth_18 = L_0;
		return;
	}
}
// System.Boolean DepthSource::get_AlwaysUpdateConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthSource_get_AlwaysUpdateConfidence_mC51ABABEBA508B5D5D5881AB115ED33C85FF90EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _alwaysUpdateConfidence;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		bool L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____alwaysUpdateConfidence_19;
		return L_0;
	}
}
// System.Void DepthSource::set_AlwaysUpdateConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_set_AlwaysUpdateConfidence_m2C465A1F90B6E2C953DB0F4598BBBDCC2B51E33D (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => _alwaysUpdateConfidence = value;
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____alwaysUpdateConfidence_19 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 DepthSource::get_ScreenRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 DepthSource_get_ScreenRotation_m128F72FAE35126621A6730F25AF1712519051D48 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Matrix4x4 ScreenRotation => _screenRotation;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____screenRotation_14;
		return L_0;
	}
}
// System.Void DepthSource::SwitchToRawDepth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_SwitchToRawDepth_mE20E39D7166AD8CA1AFD0669CDD7CF42E2B03E03 (bool ___useRawDepth0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_depthDataSource != null)
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// _depthDataSource.SwitchToRawDepth(useRawDepth);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		bool L_2 = ___useRawDepth0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void IDepthDataSource::SwitchToRawDepth(System.Boolean) */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// UnityEngine.Texture2D DepthSource::GetDepthTextureSnapshot(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DepthSource_GetDepthTextureSnapshot_mA3CDA897BE6E3D56BEF7A58E8F1FB7FE9644DFFD (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___snapshot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (snapshot == null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___snapshot0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// snapshot = new Texture2D(DepthTexture.width, DepthTexture.height,
		//     DepthTexture.format, false);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4;
		L_4 = DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6;
		L_6 = DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_6, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_8, L_3, L_5, L_7, (bool)0, NULL);
		___snapshot0 = L_8;
		// snapshot.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = ___snapshot0;
		NullCheck(L_9);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_9, NULL);
		goto IL_007c;
	}

IL_0037:
	{
		// else if (snapshot.width != DepthTexture.width || snapshot.height != DepthTexture.height)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___snapshot0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12;
		L_12 = DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870(NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_005b;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = ___snapshot0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16;
		L_16 = DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870(NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		if ((((int32_t)L_15) == ((int32_t)L_17)))
		{
			goto IL_007c;
		}
	}

IL_005b:
	{
		// snapshot.Reinitialize(DepthTexture.width, DepthTexture.height);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___snapshot0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19;
		L_19 = DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870(NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_19);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21;
		L_21 = DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870(NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_21);
		NullCheck(L_18);
		bool L_23;
		L_23 = Texture2D_Reinitialize_m9AB4169DA359C18BB4102F8E00C4321B53714E6B(L_18, L_20, L_22, NULL);
		// snapshot.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = ___snapshot0;
		NullCheck(L_24);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_24, NULL);
	}

IL_007c:
	{
		// Graphics.CopyTexture(DepthTexture, snapshot);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25;
		L_25 = DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = ___snapshot0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_m613750C66DF707DB4F24570A3402EE94257C0C58(L_25, L_26, NULL);
		// return snapshot;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = ___snapshot0;
		return L_27;
	}
}
// UnityEngine.Texture2D DepthSource::GetConfidenceTextureSnapshot(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DepthSource_GetConfidenceTextureSnapshot_mB93EED55391D2D2A5E934C3CC17A19F1D011CBA5 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___snapshot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (snapshot == null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___snapshot0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// snapshot = new Texture2D(ConfidenceTexture.width, ConfidenceTexture.height,
		//     ConfidenceTexture.format, false);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = DepthSource_get_ConfidenceTexture_mAD1FB0238B5E07E5AEF5B26FBFD972CF4B44CC2C(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4;
		L_4 = DepthSource_get_ConfidenceTexture_mAD1FB0238B5E07E5AEF5B26FBFD972CF4B44CC2C(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6;
		L_6 = DepthSource_get_ConfidenceTexture_mAD1FB0238B5E07E5AEF5B26FBFD972CF4B44CC2C(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_6, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_8, L_3, L_5, L_7, (bool)0, NULL);
		___snapshot0 = L_8;
		// snapshot.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = ___snapshot0;
		NullCheck(L_9);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_9, NULL);
		goto IL_007c;
	}

IL_0037:
	{
		// else if (snapshot.width != ConfidenceTexture.width ||
		//          snapshot.height != ConfidenceTexture.height)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___snapshot0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12;
		L_12 = DepthSource_get_ConfidenceTexture_mAD1FB0238B5E07E5AEF5B26FBFD972CF4B44CC2C(NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_005b;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = ___snapshot0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16;
		L_16 = DepthSource_get_ConfidenceTexture_mAD1FB0238B5E07E5AEF5B26FBFD972CF4B44CC2C(NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		if ((((int32_t)L_15) == ((int32_t)L_17)))
		{
			goto IL_007c;
		}
	}

IL_005b:
	{
		// snapshot.Reinitialize(ConfidenceTexture.width, ConfidenceTexture.height);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___snapshot0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19;
		L_19 = DepthSource_get_ConfidenceTexture_mAD1FB0238B5E07E5AEF5B26FBFD972CF4B44CC2C(NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_19);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21;
		L_21 = DepthSource_get_ConfidenceTexture_mAD1FB0238B5E07E5AEF5B26FBFD972CF4B44CC2C(NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_21);
		NullCheck(L_18);
		bool L_23;
		L_23 = Texture2D_Reinitialize_m9AB4169DA359C18BB4102F8E00C4321B53714E6B(L_18, L_20, L_22, NULL);
		// snapshot.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = ___snapshot0;
		NullCheck(L_24);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_24, NULL);
	}

IL_007c:
	{
		// Graphics.CopyTexture(ConfidenceTexture, snapshot);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25;
		L_25 = DepthSource_get_ConfidenceTexture_mAD1FB0238B5E07E5AEF5B26FBFD972CF4B44CC2C(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = ___snapshot0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_m613750C66DF707DB4F24570A3402EE94257C0C58(L_25, L_26, NULL);
		// return snapshot;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = ___snapshot0;
		return L_27;
	}
}
// System.Int16[] DepthSource::GetDepthArraySnapshot(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* DepthSource_GetDepthArraySnapshot_m9BCC66F1F853D9B9913297D55E625A87AE3FDA44 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___snapshot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4A4BFF47B2E8691771C828AE432726FF86D847F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (snapshot == null)
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___snapshot0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// snapshot = new short[DepthArray.Length];
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1;
		L_1 = DepthSource_get_DepthArray_m1144DBABD159674216A6D77CC03C19B8308470B6(NULL);
		NullCheck(L_1);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		___snapshot0 = L_2;
		goto IL_002d;
	}

IL_0013:
	{
		// else if (snapshot.Length != DepthArray.Length)
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = ___snapshot0;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4;
		L_4 = DepthSource_get_DepthArray_m1144DBABD159674216A6D77CC03C19B8308470B6(NULL);
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002d;
		}
	}
	{
		// Array.Resize(ref snapshot, DepthArray.Length);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5;
		L_5 = DepthSource_get_DepthArray_m1144DBABD159674216A6D77CC03C19B8308470B6(NULL);
		NullCheck(L_5);
		Array_Resize_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4A4BFF47B2E8691771C828AE432726FF86D847F6((&___snapshot0), ((int32_t)(((RuntimeArray*)L_5)->max_length)), Array_Resize_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4A4BFF47B2E8691771C828AE432726FF86D847F6_RuntimeMethod_var);
	}

IL_002d:
	{
		// Array.Copy(DepthArray, snapshot, snapshot.Length);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6;
		L_6 = DepthSource_get_DepthArray_m1144DBABD159674216A6D77CC03C19B8308470B6(NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___snapshot0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = ___snapshot0;
		NullCheck(L_8);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_6, (RuntimeArray*)L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		// return snapshot;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = ___snapshot0;
		return L_9;
	}
}
// System.Byte[] DepthSource::GetConfidenceArraySnapshot(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DepthSource_GetConfidenceArraySnapshot_m3CF83711044E9FD9536AD4E1146CC9C6A9178772 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___snapshot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (snapshot == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___snapshot0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// snapshot = new byte[ConfidenceArray.Length];
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = DepthSource_get_ConfidenceArray_m7F5132A1A8780EDBA5C499324924D1ED5421A121(NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		___snapshot0 = L_2;
	}

IL_0011:
	{
		// Array.Copy(ConfidenceArray, snapshot, snapshot.Length);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = DepthSource_get_ConfidenceArray_m7F5132A1A8780EDBA5C499324924D1ED5421A121(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___snapshot0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___snapshot0;
		NullCheck(L_5);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_3, (RuntimeArray*)L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// return snapshot;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___snapshot0;
		return L_6;
	}
}
// UnityEngine.Vector3 DepthSource::ComputeVertex(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DepthSource_ComputeVertex_m8F227D571C48FE332D8624899908E3D8E60FCFAF (int32_t ___x0, int32_t ___y1, float ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector3 vertex = Vector3.negativeInfinity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_negativeInfinity_mAE9CF7FAC4027EC241B939EDC4E954C1241799CB_inline(NULL);
		V_0 = L_0;
		// if (z > 0)
		float L_1 = ___z2;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// float vertex_x = (x - PrincipalPoint.x) * z / FocalLength.x;
		int32_t L_2 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = DepthSource_get_PrincipalPoint_m40D0C0DF9BD60DA642EC0816DE91B6610D2AA59D(NULL);
		float L_4 = L_3.___x_0;
		float L_5 = ___z2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = DepthSource_get_FocalLength_m7656FAC6B917D46E9D9585F32DCBC1870B5ED732(NULL);
		float L_7 = L_6.___x_0;
		V_1 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_2), L_4)), L_5))/L_7));
		// float vertex_y = (y - PrincipalPoint.y) * z / FocalLength.y;
		int32_t L_8 = ___y1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = DepthSource_get_PrincipalPoint_m40D0C0DF9BD60DA642EC0816DE91B6610D2AA59D(NULL);
		float L_10 = L_9.___y_1;
		float L_11 = ___z2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = DepthSource_get_FocalLength_m7656FAC6B917D46E9D9585F32DCBC1870B5ED732(NULL);
		float L_13 = L_12.___y_1;
		V_2 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_8), L_10)), L_11))/L_13));
		// vertex.x = vertex_x;
		float L_14 = V_1;
		(&V_0)->___x_2 = L_14;
		// vertex.y = -vertex_y;
		float L_15 = V_2;
		(&V_0)->___y_3 = ((-L_15));
		// vertex.z = z;
		float L_16 = ___z2;
		(&V_0)->___z_4 = L_16;
	}

IL_005d:
	{
		// return vertex;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		return L_17;
	}
}
// UnityEngine.Vector3 DepthSource::ComputeVertex(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DepthSource_ComputeVertex_m11D77DC1110AC0156B23DA9322D68CD1F3EBF13C (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, float ___z1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int x = (int)(uv.x * (DepthWidth - 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___uv0;
		float L_1 = L_0.___x_0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DepthSource_get_DepthWidth_mADC9A00926B3A9AE6A389EA3252F981C96470060(NULL);
		// int y = (int)(uv.y * (DepthHeight - 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___uv0;
		float L_4 = L_3.___y_1;
		int32_t L_5;
		L_5 = DepthSource_get_DepthHeight_m16607D365A4C1D64B0291D9A3B538D161D23D7B3(NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_4, ((float)((int32_t)il2cpp_codegen_subtract(L_5, 1))))));
		// return ComputeVertex(x, y, z);
		int32_t L_6 = V_0;
		float L_7 = ___z1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = DepthSource_ComputeVertex_m8F227D571C48FE332D8624899908E3D8E60FCFAF(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_1, ((float)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))), L_6, L_7, NULL);
		return L_8;
	}
}
// UnityEngine.Vector2Int DepthSource::DepthUVtoXY(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A DepthSource_DepthUVtoXY_mD43DAF16E050B29B7A29F2395892F4CA84D68619 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector2Int((int)(uv.x * (DepthWidth - 1)), (int)(uv.y * (DepthHeight - 1)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___uv0;
		float L_1 = L_0.___x_0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DepthSource_get_DepthWidth_mADC9A00926B3A9AE6A389EA3252F981C96470060(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___uv0;
		float L_4 = L_3.___y_1;
		int32_t L_5;
		L_5 = DepthSource_get_DepthHeight_m16607D365A4C1D64B0291D9A3B538D161D23D7B3(NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_6), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_1, ((float)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_4, ((float)((int32_t)il2cpp_codegen_subtract(L_5, 1)))))), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 DepthSource::DepthXYtoUV(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DepthSource_DepthXYtoUV_m8632759BE002FA088BD7217F408D2A84A537780F (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector2(x / (float)(DepthWidth - 1), y / (float)(DepthHeight - 1));
		int32_t L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DepthSource_get_DepthWidth_mADC9A00926B3A9AE6A389EA3252F981C96470060(NULL);
		int32_t L_2 = ___y1;
		int32_t L_3;
		L_3 = DepthSource_get_DepthHeight_m16607D365A4C1D64B0291D9A3B538D161D23D7B3(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)(((float)L_0)/((float)((int32_t)il2cpp_codegen_subtract(L_1, 1))))), ((float)(((float)L_2)/((float)((int32_t)il2cpp_codegen_subtract(L_3, 1))))), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 DepthSource::DepthXYtoUV(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DepthSource_DepthXYtoUV_mCE3B332FCCC3E8613BAAB9D7565B35598E2C2919 (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___xy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DepthXYtoUV(xy.x, xy.y);
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___xy0), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___xy0), NULL);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = DepthSource_DepthXYtoUV_m8632759BE002FA088BD7217F408D2A84A537780F(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 DepthSource::TransformVertexToWorldSpace(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DepthSource_TransformVertexToWorldSpace_m1880B01AF89850BEDD924B77FED2BE821E61A470 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vertex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return LocalToWorldMatrix.MultiplyPoint(vertex);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0;
		L_0 = DepthSource_get_LocalToWorldMatrix_m577A220FC9E7AC4C14B0AB2024D51A323A8D8AB2_inline(NULL);
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vertex0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_0), L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 DepthSource::GetVertexInWorldSpaceFromScreenXY(System.Int32,System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DepthSource_GetVertexInWorldSpaceFromScreenXY_m70660448D1E3E1CD5E4E9720BB9F843B1EDCA03A (int32_t ___x0, int32_t ___y1, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___depthArray2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector2Int depthXY = ScreenToDepthXY(x, y);
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		L_2 = DepthSource_ScreenToDepthXY_m6EE2E3A7A6E3F5E706CE851DAC707EF2FEE94597(L_0, L_1, NULL);
		V_0 = L_2;
		// if (depthArray == null)
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = ___depthArray2;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		// depthArray = DepthArray;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4;
		L_4 = DepthSource_get_DepthArray_m1144DBABD159674216A6D77CC03C19B8308470B6(NULL);
		___depthArray2 = L_4;
	}

IL_0012:
	{
		// float depth = GetDepthFromXY(depthXY.x, depthXY.y, depthArray);
		int32_t L_5;
		L_5 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_6;
		L_6 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___depthArray2;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = DepthSource_GetDepthFromXY_m81E244A5DA000483C508BDF6966F5E52EFBB348E(L_5, L_6, L_7, NULL);
		V_1 = L_8;
		// Vector3 vertex = ComputeVertex(depthXY.x, depthXY.y, depth);
		int32_t L_9;
		L_9 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_10;
		L_10 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		float L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = DepthSource_ComputeVertex_m8F227D571C48FE332D8624899908E3D8E60FCFAF(L_9, L_10, L_11, NULL);
		// return TransformVertexToWorldSpace(vertex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = DepthSource_TransformVertexToWorldSpace_m1880B01AF89850BEDD924B77FED2BE821E61A470(L_12, NULL);
		return L_13;
	}
}
// UnityEngine.Vector3 DepthSource::GetVertexInWorldSpaceFromScreenUV(UnityEngine.Vector2,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DepthSource_GetVertexInWorldSpaceFromScreenUV_m0EE8ED6B9D030AB06529E4CFB04C177D9070EA79 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___depthArray1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int screenX = (int)(uv.x * (Screen.width - 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___uv0;
		float L_1 = L_0.___x_0;
		int32_t L_2;
		L_2 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		// int screenY = (int)(uv.y * (Screen.height - 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___uv0;
		float L_4 = L_3.___y_1;
		int32_t L_5;
		L_5 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_4, ((float)((int32_t)il2cpp_codegen_subtract(L_5, 1))))));
		// return GetVertexInWorldSpaceFromScreenXY(screenX, screenY, depthArray);
		int32_t L_6 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___depthArray1;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = DepthSource_GetVertexInWorldSpaceFromScreenXY_m70660448D1E3E1CD5E4E9720BB9F843B1EDCA03A(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_1, ((float)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))), L_6, L_7, NULL);
		return L_8;
	}
}
// System.Single DepthSource::GetDepthFromUV(UnityEngine.Vector2,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DepthSource_GetDepthFromUV_m453C3CFCFB56264B2E1B6778CB07BF89A62907F6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___depthArray1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int depthX = (int)(uv.x * (DepthWidth - 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___uv0;
		float L_1 = L_0.___x_0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DepthSource_get_DepthWidth_mADC9A00926B3A9AE6A389EA3252F981C96470060(NULL);
		// int depthY = (int)(uv.y * (DepthHeight - 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___uv0;
		float L_4 = L_3.___y_1;
		int32_t L_5;
		L_5 = DepthSource_get_DepthHeight_m16607D365A4C1D64B0291D9A3B538D161D23D7B3(NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_4, ((float)((int32_t)il2cpp_codegen_subtract(L_5, 1))))));
		// return GetDepthFromXY(depthX, depthY, depthArray);
		int32_t L_6 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___depthArray1;
		float L_8;
		L_8 = DepthSource_GetDepthFromXY_m81E244A5DA000483C508BDF6966F5E52EFBB348E(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_1, ((float)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))), L_6, L_7, NULL);
		return L_8;
	}
}
// System.Single DepthSource::GetDepthFromXY(System.Int32,System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DepthSource_GetDepthFromXY_m81E244A5DA000483C508BDF6966F5E52EFBB348E (int32_t ___x0, int32_t ___y1, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___depthArray2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!Initialized)
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = DepthSource_get_Initialized_mCD97BEA63B240225D7A9B3E0875AAC7D82153715(NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return InvalidDepthValue;
		return (0.0f);
	}

IL_000d:
	{
		// if (x >= DepthWidth || x < 0 || y >= DepthHeight || y < 0)
		int32_t L_1 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DepthSource_get_DepthWidth_mADC9A00926B3A9AE6A389EA3252F981C96470060(NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___x0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = DepthSource_get_DepthHeight_m16607D365A4C1D64B0291D9A3B538D161D23D7B3(NULL);
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = ___y1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}

IL_0025:
	{
		// return InvalidDepthValue;
		return (0.0f);
	}

IL_002b:
	{
		// var depthIndex = (y * DepthWidth) + x;
		int32_t L_7 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = DepthSource_get_DepthWidth_mADC9A00926B3A9AE6A389EA3252F981C96470060(NULL);
		int32_t L_9 = ___x0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, L_8)), L_9));
		// var depthInShort = depthArray[depthIndex];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = ___depthArray2;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int16_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// var depthInMeters = depthInShort * MillimeterToMeter;
		// return depthInMeters;
		return ((float)il2cpp_codegen_multiply(((float)L_13), (0.00100000005f)));
	}
}
// UnityEngine.Vector2 DepthSource::ScreenToDepthUV(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DepthSource_ScreenToDepthUV_m78472F5CAFC963BC40708BE538E4075034B06933 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var transformed = _depthDataSource.DepthDisplayMatrix * new Vector4(uv.x, 1 - uv.y, 1f, 0f);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(3 /* UnityEngine.Matrix4x4 IDepthDataSource::get_DepthDisplayMatrix() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___uv0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___uv0;
		float L_5 = L_4.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_3, ((float)il2cpp_codegen_subtract((1.0f), L_5)), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_1, L_6, NULL);
		V_0 = L_7;
		// return new Vector2(transformed.x, transformed.y);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = V_0;
		float L_9 = L_8.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = V_0;
		float L_11 = L_10.___y_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Vector2Int DepthSource::ScreenToDepthXY(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A DepthSource_ScreenToDepthXY_m6EE2E3A7A6E3F5E706CE851DAC707EF2FEE94597 (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector2 uv = new Vector2(x / (float)(Screen.width - 1), y / (float)(Screen.height - 1));
		int32_t L_0 = ___x0;
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_2 = ___y1;
		int32_t L_3;
		L_3 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)(((float)L_0)/((float)((int32_t)il2cpp_codegen_subtract(L_1, 1))))), ((float)(((float)L_2)/((float)((int32_t)il2cpp_codegen_subtract(L_3, 1))))), /*hidden argument*/NULL);
		// uv = ScreenToDepthUV(uv);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = DepthSource_ScreenToDepthUV_m78472F5CAFC963BC40708BE538E4075034B06933(L_4, NULL);
		// x = (int)(uv.x * (DepthWidth - 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = L_5;
		float L_7 = L_6.___x_0;
		int32_t L_8;
		L_8 = DepthSource_get_DepthWidth_mADC9A00926B3A9AE6A389EA3252F981C96470060(NULL);
		___x0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_7, ((float)((int32_t)il2cpp_codegen_subtract(L_8, 1))))));
		// y = (int)(uv.y * (DepthHeight - 1));
		float L_9 = L_6.___y_1;
		int32_t L_10;
		L_10 = DepthSource_get_DepthHeight_m16607D365A4C1D64B0291D9A3B538D161D23D7B3(NULL);
		___y1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_9, ((float)((int32_t)il2cpp_codegen_subtract(L_10, 1))))));
		// return new Vector2Int(x, y);
		int32_t L_11 = ___x0;
		int32_t L_12 = ___y1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_13), L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void DepthSource::AddDepthTarget(DepthTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_AddDepthTarget_m822A7ECA801DCFEBED146F0779B796DA6EA8A9D2 (DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m464AB96C7D0E34D4B4EE0791194F5CE91DB61B7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mEAFBC70667E1D566974A277B094BEC9CF033C37C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_depthTargets.Contains(target))
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTargets_12;
		DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_1 = ___target0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mEAFBC70667E1D566974A277B094BEC9CF033C37C(L_0, L_1, List_1_Contains_mEAFBC70667E1D566974A277B094BEC9CF033C37C_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		// _depthTargets.Add(target);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* L_3 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTargets_12;
		DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_4 = ___target0;
		NullCheck(L_3);
		List_1_Add_m464AB96C7D0E34D4B4EE0791194F5CE91DB61B7F_inline(L_3, L_4, List_1_Add_m464AB96C7D0E34D4B4EE0791194F5CE91DB61B7F_RuntimeMethod_var);
		// if (target.DepthTargetMaterial != null)
		DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_5 = ___target0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = L_5->___DepthTargetMaterial_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		// SetDepthTexture(target);
		DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_8 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		DepthSource_SetDepthTexture_mE382ED10316B8EB838B937DE6B35E13427642FC6(L_8, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2Int DepthSource::ReorientDepthXY(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A DepthSource_ReorientDepthXY_m66F376AB39D707FFA9C02982090D666119A95F22 (int32_t ___x0, int32_t ___y1, bool ___relativeCoordinates2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// Vector2Int result = new Vector2Int();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A));
		// int coeff = relativeCoordinates ? 0 : 1;
		bool L_0 = ___relativeCoordinates2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
	}

IL_000f:
	{
		V_1 = G_B3_0;
		// switch (Screen.orientation)
		int32_t L_1;
		L_1 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_0073;
			}
			case 3:
			{
				goto IL_004c;
			}
		}
	}
	{
		goto IL_0097;
	}

IL_0030:
	{
		// result.x = y;
		int32_t L_3 = ___y1;
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline((&V_0), L_3, NULL);
		// result.y = (coeff * (DepthHeight - 1)) - x;
		int32_t L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = DepthSource_get_DepthHeight_m16607D365A4C1D64B0291D9A3B538D161D23D7B3(NULL);
		int32_t L_6 = ___x0;
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline((&V_0), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)il2cpp_codegen_subtract(L_5, 1)))), L_6)), NULL);
		// break;
		goto IL_0097;
	}

IL_004c:
	{
		// result = new Vector2Int(x, y);
		int32_t L_7 = ___x0;
		int32_t L_8 = ___y1;
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_0), L_7, L_8, NULL);
		// break;
		goto IL_0097;
	}

IL_0057:
	{
		// result.x = (coeff * (DepthWidth - 1)) - y;
		int32_t L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = DepthSource_get_DepthWidth_mADC9A00926B3A9AE6A389EA3252F981C96470060(NULL);
		int32_t L_11 = ___y1;
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline((&V_0), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)il2cpp_codegen_subtract(L_10, 1)))), L_11)), NULL);
		// result.y = x;
		int32_t L_12 = ___x0;
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline((&V_0), L_12, NULL);
		// break;
		goto IL_0097;
	}

IL_0073:
	{
		// result.x = (coeff * (DepthWidth - 1)) - x;
		int32_t L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = DepthSource_get_DepthWidth_mADC9A00926B3A9AE6A389EA3252F981C96470060(NULL);
		int32_t L_15 = ___x0;
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline((&V_0), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)il2cpp_codegen_subtract(L_14, 1)))), L_15)), NULL);
		// result.y = (coeff * (DepthHeight - 1)) - y;
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = DepthSource_get_DepthHeight_m16607D365A4C1D64B0291D9A3B538D161D23D7B3(NULL);
		int32_t L_18 = ___y1;
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline((&V_0), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)))), L_18)), NULL);
	}

IL_0097:
	{
		// return result;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_19 = V_0;
		return L_19;
	}
}
// UnityEngine.Vector2 DepthSource::ReorientDepthUV(UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DepthSource_ReorientDepthUV_mFBD1F65CC5634E3E560530B3A085D6E0822A0019 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, bool ___relativeCoordinates1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// Vector2 result = uv;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___uv0;
		V_0 = L_0;
		// float coeff = relativeCoordinates ? 0 : 1;
		bool L_1 = ___relativeCoordinates1;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 0;
	}

IL_0009:
	{
		V_1 = ((float)G_B3_0);
		// switch (Screen.orientation)
		int32_t L_2;
		L_2 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1)))
		{
			case 0:
			{
				goto IL_002b;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_006b;
			}
			case 3:
			{
				goto IL_0049;
			}
		}
	}
	{
		goto IL_0089;
	}

IL_002b:
	{
		// result.x = uv.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___uv0;
		float L_5 = L_4.___y_1;
		(&V_0)->___x_0 = L_5;
		// result.y = coeff - uv.x;
		float L_6 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___uv0;
		float L_8 = L_7.___x_0;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_subtract(L_6, L_8));
		// break;
		goto IL_0089;
	}

IL_0049:
	{
		// result = uv;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___uv0;
		V_0 = L_9;
		// break;
		goto IL_0089;
	}

IL_004d:
	{
		// result.x = coeff - uv.y;
		float L_10 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___uv0;
		float L_12 = L_11.___y_1;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_subtract(L_10, L_12));
		// result.y = uv.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___uv0;
		float L_14 = L_13.___x_0;
		(&V_0)->___y_1 = L_14;
		// break;
		goto IL_0089;
	}

IL_006b:
	{
		// result.x = coeff - uv.x;
		float L_15 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___uv0;
		float L_17 = L_16.___x_0;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_subtract(L_15, L_17));
		// result.y = coeff - uv.y;
		float L_18 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___uv0;
		float L_20 = L_19.___y_1;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_subtract(L_18, L_20));
	}

IL_0089:
	{
		// return result;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		return L_21;
	}
}
// System.Void DepthSource::RemoveDepthTarget(DepthTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_RemoveDepthTarget_m571EBCCB90971F95A8DF6E07945856D2313DF95A (DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mEAFBC70667E1D566974A277B094BEC9CF033C37C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m235BD13C396FE1F7FCB97F5C13CBD3A96FDE5EBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_depthTargets.Contains(target))
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTargets_12;
		DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_1 = ___target0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mEAFBC70667E1D566974A277B094BEC9CF033C37C(L_0, L_1, List_1_Contains_mEAFBC70667E1D566974A277B094BEC9CF033C37C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// _depthTargets.Remove(target);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* L_3 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTargets_12;
		DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_4 = ___target0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_m235BD13C396FE1F7FCB97F5C13CBD3A96FDE5EBE(L_3, L_4, List_1_Remove_m235BD13C396FE1F7FCB97F5C13CBD3A96FDE5EBE_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void DepthSource::SetDepthTexture(DepthTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_SetDepthTexture_mE382ED10316B8EB838B937DE6B35E13427642FC6 (DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target.SetAsMainTexture)
		DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_0 = ___target0;
		NullCheck(L_0);
		bool L_1 = L_0->___SetAsMainTexture_5;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// if (target.DepthTargetMaterial.mainTexture != DepthTexture)
		DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_2 = ___target0;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = L_2->___DepthTargetMaterial_6;
		NullCheck(L_3);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4;
		L_4 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
		L_5 = DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0073;
		}
	}
	{
		// target.DepthTargetMaterial.mainTexture = DepthTexture;
		DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_7 = ___target0;
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = L_7->___DepthTargetMaterial_6;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9;
		L_9 = DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870(NULL);
		NullCheck(L_8);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_8, L_9, NULL);
		return;
	}

IL_0030:
	{
		// else if (target.DepthTargetMaterial.HasProperty(DepthTexturePropertyName) &&
		//          target.DepthTargetMaterial.GetTexture(DepthTexturePropertyName) !=
		//          DepthTexture)
		DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_10 = ___target0;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = L_10->___DepthTargetMaterial_6;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		String_t* L_12 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->___DepthTexturePropertyName_7;
		NullCheck(L_11);
		bool L_13;
		L_13 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_14 = ___target0;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = L_14->___DepthTargetMaterial_6;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		String_t* L_16 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->___DepthTexturePropertyName_7;
		NullCheck(L_15);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17;
		L_17 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(L_15, L_16, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18;
		L_18 = DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		// target.DepthTargetMaterial.SetTexture(DepthTexturePropertyName,
		//     DepthTexture);
		DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_20 = ___target0;
		NullCheck(L_20);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = L_20->___DepthTargetMaterial_6;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		String_t* L_22 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->___DepthTexturePropertyName_7;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23;
		L_23 = DepthSource_get_DepthTexture_m0A7BF6BD59B31A60135676E296CF657373608870(NULL);
		NullCheck(L_21);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_21, L_22, L_23, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void DepthSource::UpdateScreenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_UpdateScreenOrientation_m2AC068CA108D2CF7D7EFDA2813248198FFC10BB5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (Screen.orientation)
		int32_t L_0;
		L_0 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_003e;
			}
			case 3:
			{
				goto IL_006d;
			}
		}
	}
	{
		return;
	}

IL_001f:
	{
		// _screenRotation = Matrix4x4.Rotate(Quaternion.Euler(0, 0, -90));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (-90.0f), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_Rotate_m015442530DFF5651458BBFDFB3CBC9180FC09D9E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____screenRotation_14 = L_3;
		// break;
		return;
	}

IL_003e:
	{
		// _screenRotation = Matrix4x4.Rotate(Quaternion.identity);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_Rotate_m015442530DFF5651458BBFDFB3CBC9180FC09D9E(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____screenRotation_14 = L_5;
		// break;
		return;
	}

IL_004e:
	{
		// _screenRotation = Matrix4x4.Rotate(Quaternion.Euler(0, 0, 90));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (90.0f), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Matrix4x4_Rotate_m015442530DFF5651458BBFDFB3CBC9180FC09D9E(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____screenRotation_14 = L_7;
		// break;
		return;
	}

IL_006d:
	{
		// _screenRotation = Matrix4x4.Rotate(Quaternion.Euler(0, 0, 180));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (180.0f), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix4x4_Rotate_m015442530DFF5651458BBFDFB3CBC9180FC09D9E(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____screenRotation_14 = L_9;
		// }
		return;
	}
}
// System.Void DepthSource::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_Awake_mB65AF6D0E3A403AD53BCB860FE2152B8A99DC10E (DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthDataSourceConfig_tF075BE2FD9D235EC12FC9F14D3F2191FA10ADD92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE96364DCD502F6D89B13F6E92EF5DA6AB7AEFF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB0AEA7A79B7DA5F93654C0D255F69B0B13A47206_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE0DA2B755C219615C83D8C6FA228F2F15C73985A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD168CA35CA40857A9D4FBC3A2EA4DAD90F8AFD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C9E4BF3A5F27EAE20727D2908834E2813033910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF77921BB4414128C613E3684C3DFD982CC653E1);
		s_Il2CppMethodInitialized = true;
	}
	DepthDataSourceConfig_tF075BE2FD9D235EC12FC9F14D3F2191FA10ADD92* V_0 = NULL;
	Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* V_2 = NULL;
	{
		// _camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->____camera_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_21), (void*)L_0);
		// var config = (DepthDataSourceConfig)Resources.Load("DepthDataSourceConfig");
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteral2C9E4BF3A5F27EAE20727D2908834E2813033910, NULL);
		V_0 = ((DepthDataSourceConfig_tF075BE2FD9D235EC12FC9F14D3F2191FA10ADD92*)CastclassClass((RuntimeObject*)L_1, DepthDataSourceConfig_tF075BE2FD9D235EC12FC9F14D3F2191FA10ADD92_il2cpp_TypeInfo_var));
		// if (config != null && config.DepthDataSource != null)
		DepthDataSourceConfig_tF075BE2FD9D235EC12FC9F14D3F2191FA10ADD92* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		DepthDataSourceConfig_tF075BE2FD9D235EC12FC9F14D3F2191FA10ADD92* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___DepthDataSource_5;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// _depthDataSource = config.DepthDataSource;
		DepthDataSourceConfig_tF075BE2FD9D235EC12FC9F14D3F2191FA10ADD92* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___DepthDataSource_5;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20), (void*)L_7);
		goto IL_0044;
	}

IL_003a:
	{
		// Debug.LogError("Failed to obtain depth data source");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEF77921BB4414128C613E3684C3DFD982CC653E1, NULL);
	}

IL_0044:
	{
		// _instance = this;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____instance_13 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____instance_13), (void*)__this);
		// _alwaysUpdateDepth = true;
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____alwaysUpdateDepth_18 = (bool)1;
		// _depthTexture = new Texture2D(2, 2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_8, 2, 2, NULL);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTexture_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTexture_10), (void*)L_8);
		// _confidenceTexture = new Texture2D(2, 2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_9, 2, 2, NULL);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____confidenceTexture_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____confidenceTexture_11), (void*)L_9);
		// _depthTexture.filterMode = FilterMode.Bilinear;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTexture_10;
		NullCheck(L_10);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_10, 1, NULL);
		// _confidenceTexture.filterMode = FilterMode.Point;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____confidenceTexture_11;
		NullCheck(L_11);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_11, 0, NULL);
		// _depthTexture.wrapMode = TextureWrapMode.Clamp;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTexture_10;
		NullCheck(L_12);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_12, 1, NULL);
		// _confidenceTexture.wrapMode = TextureWrapMode.Clamp;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____confidenceTexture_11;
		NullCheck(L_13);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_13, 1, NULL);
		// foreach (DepthTarget target in _depthTargets)
		List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* L_14 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTargets_12;
		NullCheck(L_14);
		Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF L_15;
		L_15 = List_1_GetEnumerator_mD168CA35CA40857A9D4FBC3A2EA4DAD90F8AFD2A(L_14, List_1_GetEnumerator_mD168CA35CA40857A9D4FBC3A2EA4DAD90F8AFD2A_RuntimeMethod_var);
		V_1 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCE96364DCD502F6D89B13F6E92EF5DA6AB7AEFF2((&V_1), Enumerator_Dispose_mCE96364DCD502F6D89B13F6E92EF5DA6AB7AEFF2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d5_1;
			}

IL_00a1_1:
			{
				// foreach (DepthTarget target in _depthTargets)
				DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_16;
				L_16 = Enumerator_get_Current_mE0DA2B755C219615C83D8C6FA228F2F15C73985A_inline((&V_1), Enumerator_get_Current_mE0DA2B755C219615C83D8C6FA228F2F15C73985A_RuntimeMethod_var);
				V_2 = L_16;
				// if (target.DepthTargetMaterial != null)
				DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_17 = V_2;
				NullCheck(L_17);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = L_17->___DepthTargetMaterial_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_19)
				{
					goto IL_00d5_1;
				}
			}
			{
				// SetDepthTexture(target);
				DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_20 = V_2;
				il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
				DepthSource_SetDepthTexture_mE382ED10316B8EB838B937DE6B35E13427642FC6(L_20, NULL);
				// UpdateScreenOrientationOnMaterial(target.DepthTargetMaterial);
				DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_21 = V_2;
				NullCheck(L_21);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = L_21->___DepthTargetMaterial_6;
				DepthSource_UpdateScreenOrientationOnMaterial_m895F991420B4BD0C947C3DA1E179A6C38AED34CC(__this, L_22, NULL);
				// SetAlphaForBlendedOcclusionProperties(target.DepthTargetMaterial);
				DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_23 = V_2;
				NullCheck(L_23);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = L_23->___DepthTargetMaterial_6;
				DepthSource_SetAlphaForBlendedOcclusionProperties_m873EE977AE900EECFFA4120E4B4E28D9297E0492(__this, L_24, NULL);
			}

IL_00d5_1:
			{
				// foreach (DepthTarget target in _depthTargets)
				bool L_25;
				L_25 = Enumerator_MoveNext_mB0AEA7A79B7DA5F93654C0D255F69B0B13A47206((&V_1), Enumerator_MoveNext_mB0AEA7A79B7DA5F93654C0D255F69B0B13A47206_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_00a1_1;
				}
			}
			{
				goto IL_00ee;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void DepthSource::UpdateScreenOrientationOnMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_UpdateScreenOrientationOnMaterial_m895F991420B4BD0C947C3DA1E179A6C38AED34CC (DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material.SetMatrix(DisplayTransformPropertyName, _depthDataSource.DepthDisplayMatrix);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		String_t* L_1 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->___DisplayTransformPropertyName_8;
		RuntimeObject* L_2 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_2);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(3 /* UnityEngine.Matrix4x4 IDepthDataSource::get_DepthDisplayMatrix() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_0);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_0, L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void DepthSource::SetAlphaForBlendedOcclusionProperties(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_SetAlphaForBlendedOcclusionProperties_m873EE977AE900EECFFA4120E4B4E28D9297E0492 (DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material.SetFloat(OcclusionBlendingScale, 0.5f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		String_t* L_1 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->___OcclusionBlendingScale_9;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, L_1, (0.5f), NULL);
		// }
		return;
	}
}
// System.Void DepthSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource_Update_m0840155FA2E0477CA168D3567CAD195180973172 (DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE96364DCD502F6D89B13F6E92EF5DA6AB7AEFF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB0AEA7A79B7DA5F93654C0D255F69B0B13A47206_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE0DA2B755C219615C83D8C6FA228F2F15C73985A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD168CA35CA40857A9D4FBC3A2EA4DAD90F8AFD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* V_2 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// UpdateScreenOrientation();
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		DepthSource_UpdateScreenOrientation_m2AC068CA108D2CF7D7EFDA2813248198FFC10BB5(NULL);
		// _localToWorldTransform = _camera.transform.localToWorldMatrix * ScreenRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____camera_21;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_1, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = DepthSource_get_ScreenRotation_m128F72FAE35126621A6730F25AF1712519051D48_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_2, L_3, NULL);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____localToWorldTransform_15 = L_4;
		// if (!_depthDataSource.Initialized)
		RuntimeObject* L_5 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean IDepthDataSource::get_Initialized() */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_5);
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		return;
	}

IL_0031:
	{
		// bool updateDepth = false;
		V_0 = (bool)0;
		// foreach (DepthTarget target in _depthTargets)
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* L_7 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTargets_12;
		NullCheck(L_7);
		Enumerator_tE42BF596D029507F738DCC80A26CB21EA50932FF L_8;
		L_8 = List_1_GetEnumerator_mD168CA35CA40857A9D4FBC3A2EA4DAD90F8AFD2A(L_7, List_1_GetEnumerator_mD168CA35CA40857A9D4FBC3A2EA4DAD90F8AFD2A_RuntimeMethod_var);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0081:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCE96364DCD502F6D89B13F6E92EF5DA6AB7AEFF2((&V_1), Enumerator_Dispose_mCE96364DCD502F6D89B13F6E92EF5DA6AB7AEFF2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0076_1;
			}

IL_0040_1:
			{
				// foreach (DepthTarget target in _depthTargets)
				DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_9;
				L_9 = Enumerator_get_Current_mE0DA2B755C219615C83D8C6FA228F2F15C73985A_inline((&V_1), Enumerator_get_Current_mE0DA2B755C219615C83D8C6FA228F2F15C73985A_RuntimeMethod_var);
				V_2 = L_9;
				// updateDepth = true;
				V_0 = (bool)1;
				// if (target.DepthTargetMaterial != null)
				DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_10 = V_2;
				NullCheck(L_10);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = L_10->___DepthTargetMaterial_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_12)
				{
					goto IL_0076_1;
				}
			}
			{
				// SetDepthTexture(target);
				DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_13 = V_2;
				il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
				DepthSource_SetDepthTexture_mE382ED10316B8EB838B937DE6B35E13427642FC6(L_13, NULL);
				// UpdateScreenOrientationOnMaterial(target.DepthTargetMaterial);
				DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_14 = V_2;
				NullCheck(L_14);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = L_14->___DepthTargetMaterial_6;
				DepthSource_UpdateScreenOrientationOnMaterial_m895F991420B4BD0C947C3DA1E179A6C38AED34CC(__this, L_15, NULL);
				// SetAlphaForBlendedOcclusionProperties(target.DepthTargetMaterial);
				DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* L_16 = V_2;
				NullCheck(L_16);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = L_16->___DepthTargetMaterial_6;
				DepthSource_SetAlphaForBlendedOcclusionProperties_m873EE977AE900EECFFA4120E4B4E28D9297E0492(__this, L_17, NULL);
			}

IL_0076_1:
			{
				// foreach (DepthTarget target in _depthTargets)
				bool L_18;
				L_18 = Enumerator_MoveNext_mB0AEA7A79B7DA5F93654C0D255F69B0B13A47206((&V_1), Enumerator_MoveNext_mB0AEA7A79B7DA5F93654C0D255F69B0B13A47206_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0040_1;
				}
			}
			{
				goto IL_008f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008f:
	{
		// _updateDepth = updateDepth || _alwaysUpdateDepth;
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_0099;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		bool L_20 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____alwaysUpdateDepth_18;
		G_B12_0 = ((int32_t)(L_20));
		goto IL_009a;
	}

IL_0099:
	{
		G_B12_0 = 1;
	}

IL_009a:
	{
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateDepth_16 = (bool)G_B12_0;
		// _updateConfidence = _updateDepth || _alwaysUpdateConfidence;
		bool L_21 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateDepth_16;
		if (L_21)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		bool L_22 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____alwaysUpdateConfidence_19;
		G_B15_0 = ((int32_t)(L_22));
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B15_0 = 1;
	}

IL_00ae:
	{
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateConfidence_17 = (bool)G_B15_0;
		// if (_updateConfidence)
		bool L_23 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateConfidence_17;
		if (!L_23)
		{
			goto IL_00c9;
		}
	}
	{
		// _depthDataSource.UpdateConfidenceTexture(ref _confidenceTexture);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_24 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_24);
		InterfaceActionInvoker1< Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** >::Invoke(9 /* System.Void IDepthDataSource::UpdateConfidenceTexture(UnityEngine.Texture2D&) */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_24, (&((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____confidenceTexture_11));
	}

IL_00c9:
	{
		// if (_updateDepth)
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		bool L_25 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____updateDepth_16;
		if (!L_25)
		{
			goto IL_00df;
		}
	}
	{
		// _depthDataSource.UpdateDepthTexture(ref _depthTexture);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_26 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthDataSource_20;
		NullCheck(L_26);
		InterfaceActionInvoker1< Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** >::Invoke(8 /* System.Void IDepthDataSource::UpdateDepthTexture(UnityEngine.Texture2D&) */, IDepthDataSource_tBE2C3D7E64CA23C257AE5FDDB5DCABADFD172621_il2cpp_TypeInfo_var, L_26, (&((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTexture_10));
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Void DepthSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource__ctor_m0958B0750FB6ECC2D6BBBF3DAEBF3D1EDB44088B (DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2* __this, const RuntimeMethod* method) 
{
	{
		// public bool ReprojectIntermediateRawDepth = true;
		__this->___ReprojectIntermediateRawDepth_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void DepthSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthSource__cctor_m3CC74174C80EE72502FFBF004A032242F4112D22 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m056575F3AC5160C6E092709D3D5556091EBBE26F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0048CE9B060DBE934C10C085C743ACCBD5290464);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral019FF652A88FCDAF4B31156B64E8957F028B40B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F7E278F82DB764B5165C505CCBEC35D56D7C1C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string DepthTexturePropertyName = "_CurrentDepthTexture";
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->___DepthTexturePropertyName_7 = _stringLiteral0048CE9B060DBE934C10C085C743ACCBD5290464;
		Il2CppCodeGenWriteBarrier((void**)(&((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->___DepthTexturePropertyName_7), (void*)_stringLiteral0048CE9B060DBE934C10C085C743ACCBD5290464);
		// public static readonly string DisplayTransformPropertyName = "_DisplayTransform";
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->___DisplayTransformPropertyName_8 = _stringLiteral019FF652A88FCDAF4B31156B64E8957F028B40B8;
		Il2CppCodeGenWriteBarrier((void**)(&((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->___DisplayTransformPropertyName_8), (void*)_stringLiteral019FF652A88FCDAF4B31156B64E8957F028B40B8);
		// public static readonly string OcclusionBlendingScale = "_OcclusionBlendingScale";
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->___OcclusionBlendingScale_9 = _stringLiteral6F7E278F82DB764B5165C505CCBEC35D56D7C1C6;
		Il2CppCodeGenWriteBarrier((void**)(&((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->___OcclusionBlendingScale_9), (void*)_stringLiteral6F7E278F82DB764B5165C505CCBEC35D56D7C1C6);
		// private static List<DepthTarget> _depthTargets = new List<DepthTarget>();
		List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19* L_0 = (List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19*)il2cpp_codegen_object_new(List_1_t83B431E14B9336DAE472AB295D6F3552AC1F2C19_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m056575F3AC5160C6E092709D3D5556091EBBE26F(L_0, List_1__ctor_m056575F3AC5160C6E092709D3D5556091EBBE26F_RuntimeMethod_var);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTargets_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____depthTargets_12), (void*)L_0);
		// private static Matrix4x4 _screenRotation = Matrix4x4.Rotate(Quaternion.identity);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_Rotate_m015442530DFF5651458BBFDFB3CBC9180FC09D9E(L_1, NULL);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____screenRotation_14 = L_2;
		// private static Matrix4x4 _localToWorldTransform = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____localToWorldTransform_15 = L_3;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DepthTarget::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthTarget_OnEnable_m8EAEB230CE85650C9A2A45527324E68705682E07 (DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	{
		// if (DepthTargetMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___DepthTargetMaterial_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// var renderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_0 = L_2;
		// if (renderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// DepthTargetMaterial = renderer.sharedMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = V_0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_5, NULL);
		__this->___DepthTargetMaterial_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DepthTargetMaterial_6), (void*)L_6);
	}

IL_002a:
	{
		// DepthSource.SwitchToRawDepth(UseRawDepth);
		bool L_7 = __this->___UseRawDepth_4;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		DepthSource_SwitchToRawDepth_mE20E39D7166AD8CA1AFD0669CDD7CF42E2B03E03(L_7, NULL);
		// DepthSource.AddDepthTarget(this);
		DepthSource_AddDepthTarget_m822A7ECA801DCFEBED146F0779B796DA6EA8A9D2(__this, NULL);
		// }
		return;
	}
}
// System.Void DepthTarget::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthTarget_OnDisable_m072D7579D15D89C0B42BDFA486ABB15A49B13B19 (DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DepthSource.RemoveDepthTarget(this);
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		DepthSource_RemoveDepthTarget_m571EBCCB90971F95A8DF6E07945856D2313DF95A(__this, NULL);
		// }
		return;
	}
}
// System.Void DepthTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthTarget__ctor_mC53E9F5FD69BB9CE672360ECE3137F71E896E26F (DepthTarget_tDF345335D782A4CB8465E327CF804D973DF435B0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Selection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selection_Update_m301B7FF7E7EF73183DEF1DDDBB78D83EF25416B2 (Selection_tC3273612256235F7FCFBC6A2337AA1DC7FB19538* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisInteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_m7116D069F0684C098197FA17DE5A0E800C7DE05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66C80CC984CDD28BB6F1D9982F162BFCE4A9B0A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _ray = _camera.ScreenPointToRay(_touchPose);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____camera_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->____touchPose_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_1, NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_2, NULL);
		__this->____ray_7 = L_3;
		// if(Physics.Raycast(_ray, out _hit, Mathf.Infinity, _selectObjectLayer))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_4 = __this->____ray_7;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_5 = (&__this->____hit_8);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = __this->____selectObjectLayer_5;
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_6, NULL);
		bool L_8;
		L_8 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_4, L_5, (std::numeric_limits<float>::infinity()), L_7, NULL);
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		// InteractObj.SelectedObject = _hit.transform.GetComponentInChildren<InteractObj>();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_9 = (&__this->____hit_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_9, NULL);
		NullCheck(L_10);
		InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* L_11;
		L_11 = Component_GetComponentInChildren_TisInteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_m7116D069F0684C098197FA17DE5A0E800C7DE05B(L_10, Component_GetComponentInChildren_TisInteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_m7116D069F0684C098197FA17DE5A0E800C7DE05B_RuntimeMethod_var);
		InteractObj_set_SelectedObject_m3EA21BB05BD7E5BB0E2109A9D160932CEEAF5B37(L_11, NULL);
		// Debug.Log("??????? ???");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral66C80CC984CDD28BB6F1D9982F162BFCE4A9B0A2, NULL);
		// return;
		return;
	}

IL_005f:
	{
		// InteractObj.SelectedObject = null;
		InteractObj_set_SelectedObject_m3EA21BB05BD7E5BB0E2109A9D160932CEEAF5B37((InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Selection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selection__ctor_m0EA5B69BCF82AFD12A8C868E4A4D95CB1DEF967E (Selection_tC3273612256235F7FCFBC6A2337AA1DC7FB19538* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_pinvoke(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke& marshaled)
{
	marshaled.___SerializedTime_0 = il2cpp_codegen_marshal_string(unmarshaled.___SerializedTime_0);
	marshaled.___Latitude_1 = unmarshaled.___Latitude_1;
	marshaled.___Longitude_2 = unmarshaled.___Longitude_2;
	marshaled.___Altitude_3 = unmarshaled.___Altitude_3;
	marshaled.___Heading_4 = unmarshaled.___Heading_4;
}
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_pinvoke_back(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke& marshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled)
{
	unmarshaled.___SerializedTime_0 = il2cpp_codegen_marshal_string_result(marshaled.___SerializedTime_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SerializedTime_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___SerializedTime_0));
	double unmarshaledLatitude_temp_1 = 0.0;
	unmarshaledLatitude_temp_1 = marshaled.___Latitude_1;
	unmarshaled.___Latitude_1 = unmarshaledLatitude_temp_1;
	double unmarshaledLongitude_temp_2 = 0.0;
	unmarshaledLongitude_temp_2 = marshaled.___Longitude_2;
	unmarshaled.___Longitude_2 = unmarshaledLongitude_temp_2;
	double unmarshaledAltitude_temp_3 = 0.0;
	unmarshaledAltitude_temp_3 = marshaled.___Altitude_3;
	unmarshaled.___Altitude_3 = unmarshaledAltitude_temp_3;
	double unmarshaledHeading_temp_4 = 0.0;
	unmarshaledHeading_temp_4 = marshaled.___Heading_4;
	unmarshaled.___Heading_4 = unmarshaledHeading_temp_4;
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_pinvoke_cleanup(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___SerializedTime_0);
	marshaled.___SerializedTime_0 = NULL;
}
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_com(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com& marshaled)
{
	marshaled.___SerializedTime_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___SerializedTime_0);
	marshaled.___Latitude_1 = unmarshaled.___Latitude_1;
	marshaled.___Longitude_2 = unmarshaled.___Longitude_2;
	marshaled.___Altitude_3 = unmarshaled.___Altitude_3;
	marshaled.___Heading_4 = unmarshaled.___Heading_4;
}
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_com_back(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com& marshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled)
{
	unmarshaled.___SerializedTime_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___SerializedTime_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SerializedTime_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___SerializedTime_0));
	double unmarshaledLatitude_temp_1 = 0.0;
	unmarshaledLatitude_temp_1 = marshaled.___Latitude_1;
	unmarshaled.___Latitude_1 = unmarshaledLatitude_temp_1;
	double unmarshaledLongitude_temp_2 = 0.0;
	unmarshaledLongitude_temp_2 = marshaled.___Longitude_2;
	unmarshaled.___Longitude_2 = unmarshaledLongitude_temp_2;
	double unmarshaledAltitude_temp_3 = 0.0;
	unmarshaledAltitude_temp_3 = marshaled.___Altitude_3;
	unmarshaled.___Altitude_3 = unmarshaledAltitude_temp_3;
	double unmarshaledHeading_temp_4 = 0.0;
	unmarshaledHeading_temp_4 = marshaled.___Heading_4;
	unmarshaled.___Heading_4 = unmarshaledHeading_temp_4;
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_com_cleanup(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___SerializedTime_0);
	marshaled.___SerializedTime_0 = NULL;
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.DateTime,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_m11B5D19C7052A20A372B2D78E05D2EF997EA0F5B (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time0, double ___latitude1, double ___longitude2, double ___altitude3, double ___heading4, const RuntimeMethod* method) 
{
	{
		// SerializedTime = time.ToString();
		String_t* L_0;
		L_0 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A((&___time0), NULL);
		__this->___SerializedTime_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SerializedTime_0), (void*)L_0);
		// Latitude = latitude;
		double L_1 = ___latitude1;
		__this->___Latitude_1 = L_1;
		// Longitude = longitude;
		double L_2 = ___longitude2;
		__this->___Longitude_2 = L_2;
		// Altitude = altitude;
		double L_3 = ___altitude3;
		__this->___Altitude_3 = L_3;
		// Heading = heading;
		double L_4 = ___heading4;
		__this->___Heading_4 = L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GeospatialAnchorHistory__ctor_m11B5D19C7052A20A372B2D78E05D2EF997EA0F5B_AdjustorThunk (RuntimeObject* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time0, double ___latitude1, double ___longitude2, double ___altitude3, double ___heading4, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	GeospatialAnchorHistory__ctor_m11B5D19C7052A20A372B2D78E05D2EF997EA0F5B(_thisAdjusted, ___time0, ___latitude1, ___longitude2, ___altitude3, ___heading4, method);
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_mC5B6E43C79DCB7BB244DBE4D791EB0F596B74703 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, double ___latitude0, double ___longitude1, double ___altitude2, double ___heading3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this(DateTime.Now, latitude, longitude, altitude, heading)
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		double L_1 = ___latitude0;
		double L_2 = ___longitude1;
		double L_3 = ___altitude2;
		double L_4 = ___heading3;
		GeospatialAnchorHistory__ctor_m11B5D19C7052A20A372B2D78E05D2EF997EA0F5B(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GeospatialAnchorHistory__ctor_mC5B6E43C79DCB7BB244DBE4D791EB0F596B74703_AdjustorThunk (RuntimeObject* __this, double ___latitude0, double ___longitude1, double ___altitude2, double ___heading3, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	GeospatialAnchorHistory__ctor_mC5B6E43C79DCB7BB244DBE4D791EB0F596B74703(_thisAdjusted, ___latitude0, ___longitude1, ___altitude2, ___heading3, method);
}
// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::get_CreatedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DateTime CreatedTime => Convert.ToDateTime(SerializedTime);
		String_t* L_0 = __this->___SerializedTime_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = Convert_ToDateTime_mE15C6E51579A9876015F9E295D5025B80BE73726(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D _returnValue;
	_returnValue = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A(_thisAdjusted, method);
	return _returnValue;
}
// System.String Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeospatialAnchorHistory_ToString_mEF75221D34F044801DB11C95F4113DD9EFA87CF9 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.ToJson(this);
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_0 = (*(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*)__this);
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_1 = L_0;
		RuntimeObject* L_2 = Box(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* GeospatialAnchorHistory_ToString_mEF75221D34F044801DB11C95F4113DD9EFA87CF9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = GeospatialAnchorHistory_ToString_mEF75221D34F044801DB11C95F4113DD9EFA87CF9(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistoryCollection__ctor_mF8B2CC65BEF02F8F5AD9A6745E9DA6B05D7D06FA (GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GeospatialAnchorHistory> Collection = new List<GeospatialAnchorHistory>();
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_0 = (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*)il2cpp_codegen_object_new(List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83(L_0, List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_RuntimeMethod_var);
		__this->___Collection_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Collection_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnGetStartedClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnGetStartedClicked_mB6C4C94AC37A8E6D9893E59949F2A4AC1B69CCF2 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(_hasDisplayedPrivacyPromptKey, 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478, 1, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// SwitchToARView(true);
		GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnLearnMoreClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnLearnMoreClicked_m30E869F7D9259B137402B70B9ECCE93CDD0996E1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF7042B13A54AE6D2F33826F9F5FA12143D46847);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL(
		//     "https://developers.google.com/ar/data-privacy");
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(_stringLiteralEF7042B13A54AE6D2F33826F9F5FA12143D46847, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnClearAllClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnClearAllClicked_m6B7370DE319DE3D74783693764E3D9D408C5D90C (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402969FEF140B759AA2E21468D1A944100BDBBF1);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var anchor in _anchorObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____anchorObjects_41;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var anchor in _anchorObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(anchor);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var anchor in _anchorObjects)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// _anchorObjects.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->____anchorObjects_41;
		NullCheck(L_4);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_4, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// _historyCollection.Collection.Clear();
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_5 = __this->____historyCollection_40;
		NullCheck(L_5);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_6 = L_5->___Collection_0;
		NullCheck(L_6);
		List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_inline(L_6, List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_RuntimeMethod_var);
		// SnackBarText.text = "Anchor(s) cleared!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___SnackBarText_18;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral402969FEF140B759AA2E21468D1A944100BDBBF1);
		// ClearAllButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___ClearAllButton_13;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnSetAnchorClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnSetAnchorClicked_m8470510D1E0D3E09FA8A9CE037B816533158843D (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E227568A75A99F99D64B36A7F13EF4EBA70B06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78E274AC89F9BB2B7C9C9C38754AE07662487DED);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var pose = EarthManager.CameraGeospatialPose;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___EarthManager_7;
		NullCheck(L_0);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_1;
		L_1 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_0, NULL);
		V_0 = L_1;
		// GeospatialAnchorHistory history = new GeospatialAnchorHistory(
		//     pose.Latitude, pose.Longitude, pose.Altitude, pose.Heading);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_2 = V_0;
		double L_3 = L_2.___Latitude_0;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_4 = V_0;
		double L_5 = L_4.___Longitude_1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_6 = V_0;
		double L_7 = L_6.___Altitude_2;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_8 = V_0;
		double L_9 = L_8.___Heading_3;
		GeospatialAnchorHistory__ctor_mC5B6E43C79DCB7BB244DBE4D791EB0F596B74703((&V_1), L_3, L_5, L_7, L_9, NULL);
		// if (PlaceGeospatialAnchor(history) != null)
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_10 = V_1;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_11;
		L_11 = GeospatialController_PlaceGeospatialAnchor_m20AC740B55383282D2AFE8F9181848A75DE2A650(__this, L_10, (bool)0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		// _historyCollection.Collection.Add(history);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_13 = __this->____historyCollection_40;
		NullCheck(L_13);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_14 = L_13->___Collection_0;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_15 = V_1;
		NullCheck(L_14);
		List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_inline(L_14, L_15, List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var);
		// SnackBarText.text = $"{_anchorObjects.Count} Anchor(s) Set!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___SnackBarText_18;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_17 = __this->____anchorObjects_41;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_17, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral78E274AC89F9BB2B7C9C9C38754AE07662487DED, L_20, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_21);
		goto IL_0083;
	}

IL_0073:
	{
		// SnackBarText.text = "Failed to set an anchor!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___SnackBarText_18;
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, _stringLiteral14E227568A75A99F99D64B36A7F13EF4EBA70B06);
	}

IL_0083:
	{
		// ClearAllButton.gameObject.SetActive(_historyCollection.Collection.Count > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = __this->___ClearAllButton_13;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_25 = __this->____historyCollection_40;
		NullCheck(L_25);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_26 = L_25->___Collection_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_26, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)((((int32_t)L_27) > ((int32_t)0))? 1 : 0), NULL);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnSetTerrainAnchorClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnSetTerrainAnchorClicked_mCC1F911FC63B5358DF41DED0EEB82A0D04F9C85A (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B3F23F2F2DE4C8840CF9F1CF35FDF0FF44919B);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_2 = NULL;
	{
		// var pose = EarthManager.CameraGeospatialPose;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___EarthManager_7;
		NullCheck(L_0);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_1;
		L_1 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_0, NULL);
		V_0 = L_1;
		// GeospatialAnchorHistory history = new GeospatialAnchorHistory(
		//     pose.Latitude, pose.Longitude, pose.Altitude, pose.Heading);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_2 = V_0;
		double L_3 = L_2.___Latitude_0;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_4 = V_0;
		double L_5 = L_4.___Longitude_1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_6 = V_0;
		double L_7 = L_6.___Altitude_2;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_8 = V_0;
		double L_9 = L_8.___Heading_3;
		GeospatialAnchorHistory__ctor_mC5B6E43C79DCB7BB244DBE4D791EB0F596B74703((&V_1), L_3, L_5, L_7, L_9, NULL);
		// var anchor = PlaceGeospatialAnchor(history, true);
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_10 = V_1;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_11;
		L_11 = GeospatialController_PlaceGeospatialAnchor_m20AC740B55383282D2AFE8F9181848A75DE2A650(__this, L_10, (bool)1, NULL);
		V_2 = L_11;
		// if (anchor != null)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_12 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		// _historyCollection.Collection.Add(history);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_14 = __this->____historyCollection_40;
		NullCheck(L_14);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_15 = L_14->___Collection_0;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_16 = V_1;
		NullCheck(L_15);
		List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_inline(L_15, L_16, List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var);
		// StartCoroutine(CheckTerrainAnchorState(anchor));
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_17 = V_2;
		RuntimeObject* L_18;
		L_18 = GeospatialController_CheckTerrainAnchorState_mECBEC2C347FE65F6FFE796326250B8B6985FF19F(__this, L_17, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_19;
		L_19 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_18, NULL);
		goto IL_006e;
	}

IL_005e:
	{
		// SnackBarText.text = "Failed to set a terrain anchor!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___SnackBarText_18;
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, _stringLiteralC5B3F23F2F2DE4C8840CF9F1CF35FDF0FF44919B);
	}

IL_006e:
	{
		// ClearAllButton.gameObject.SetActive(_historyCollection.Collection.Count > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = __this->___ClearAllButton_13;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_23 = __this->____historyCollection_40;
		NullCheck(L_23);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_24 = L_23->___Collection_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_24, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0), NULL);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_Awake_mCA86E4AF23D51CFD648FE92B0A03D51B9BA0DC62 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral002FD9BA3AE0E060C2E4E855D3879613062FB95E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84603BEBCE50D165E99F4F1BE49F02FF0B3BC3DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2DBADB2D94879827209856D3681D3473726A46);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.autorotateToLandscapeLeft = false;
		Screen_set_autorotateToLandscapeLeft_mEBF1EEDF3BCD85A85FEF5B59ECEE40D6A73983D0((bool)0, NULL);
		// Screen.autorotateToLandscapeRight = false;
		Screen_set_autorotateToLandscapeRight_m259F67F2F38E5E28A7A5ABBEA5CFE9650DD7B184((bool)0, NULL);
		// Screen.autorotateToPortraitUpsideDown = false;
		Screen_set_autorotateToPortraitUpsideDown_m322363C3E0347AF6C62240BD814C8719CF54AF12((bool)0, NULL);
		// Screen.orientation = ScreenOrientation.Portrait;
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(1, NULL);
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)60), NULL);
		// if (SessionOrigin == null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = __this->___SessionOrigin_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogError("Cannot find ARSessionOrigin.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral002FD9BA3AE0E060C2E4E855D3879613062FB95E, NULL);
	}

IL_0037:
	{
		// if (Session == null)
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_2 = __this->___Session_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogError("Cannot find ARSession.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral84603BEBCE50D165E99F4F1BE49F02FF0B3BC3DB, NULL);
	}

IL_004f:
	{
		// if (ARCoreExtensions == null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4 = __this->___ARCoreExtensions_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		// Debug.LogError("Cannot find ARCoreExtensions.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEC2DBADB2D94879827209856D3681D3473726A46, NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnEnable_mEB3602FCCA7C89B722AFD4159D144A8DEEA618B9 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialController_OnSetTerrainAnchorClicked_mCC1F911FC63B5358DF41DED0EEB82A0D04F9C85A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral098533C94B14961259EF414728C4A68C6289E9AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_1 = NULL;
	{
		// SwitchToARView(PlayerPrefs.HasKey(_hasDisplayedPrivacyPromptKey));
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478, NULL);
		GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E(__this, L_0, NULL);
		// _isReturning = false;
		__this->____isReturning_34 = (bool)0;
		// _enablingGeospatial = false;
		__this->____enablingGeospatial_36 = (bool)0;
		// InfoPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___InfoPanel_16;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// SetAnchorButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___SetAnchorButton_14;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// TerrainButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___TerrainButton_15;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// ClearAllButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___ClearAllButton_13;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// DebugText.gameObject.SetActive(Debug.isDebugBuild && EarthManager != null);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___DebugText_19;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		G_B1_0 = L_9;
		if (!L_10)
		{
			G_B2_0 = L_9;
			goto IL_007d;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_11 = __this->___EarthManager_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_12));
		G_B3_1 = G_B1_0;
		goto IL_007e;
	}

IL_007d:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_007e:
	{
		NullCheck(G_B3_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B3_1, (bool)G_B3_0, NULL);
		// TerrainButton.onClick.AddListener(OnSetTerrainAnchorClicked);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___TerrainButton_15;
		NullCheck(L_13);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_14;
		L_14 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_13, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_15 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_15, __this, (intptr_t)((void*)GeospatialController_OnSetTerrainAnchorClicked_mCC1F911FC63B5358DF41DED0EEB82A0D04F9C85A_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_14, L_15, NULL);
		// _localizationPassedTime = 0f;
		__this->____localizationPassedTime_38 = (0.0f);
		// _isLocalizing = true;
		__this->____isLocalizing_35 = (bool)1;
		// SnackBarText.text = _localizingMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___SnackBarText_18;
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteral098533C94B14961259EF414728C4A68C6289E9AE);
		// LoadGeospatialAnchorHistory();
		GeospatialController_LoadGeospatialAnchorHistory_m78B8DEB20F80FE681FA18AC34EFBB190DE330605(__this, NULL);
		// _shouldResolvingHistory = _historyCollection.Collection.Count > 0;
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_17 = __this->____historyCollection_40;
		NullCheck(L_17);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_18 = L_17->___Collection_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_18, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		__this->____shouldResolvingHistory_37 = (bool)((((int32_t)L_19) > ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnDisable_m4494298A36B1BF602BC9839471386CC264FE50D1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var anchor in _anchorObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____anchorObjects_41;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var anchor in _anchorObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(anchor);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var anchor in _anchorObjects)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// _anchorObjects.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->____anchorObjects_41;
		NullCheck(L_4);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_4, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_Update_m12FBC3C41C8B9B1060B6C586F36B51FA8315191E (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m449821BD94BB048929D0F08D05D4BA227B430BE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B33E2273C9AB388C21E973B33AEB2CD77079D68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242A0070D29873DA9B6E4E1164C9C8B53CE23D19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970A4D6490D612AAF148057C65320C8178CD0C87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA628C3EA1A977D457A54A899CA2F513C35C50B9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3485A54065E6F4E66AFF0546DB80DF7DA4A5284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA97DB5D365444C5E6EF88EF63073328B97B1146);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF971503E7E762E947F8E0E4CFCDBDEEBB6C91D01);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_6;
	memset((&V_6), 0, sizeof(V_6));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B22_0 = 0;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	int32_t G_B24_1 = 0;
	{
		// if (!_isInARView)
		bool L_0 = __this->____isInARView_33;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// UpdateDebugInfo();
		GeospatialController_UpdateDebugInfo_m4DD7408BE036B30EE50B0F2CB2D5ED7B24B314A1(__this, NULL);
		// LifecycleUpdate();
		GeospatialController_LifecycleUpdate_m9DF865831BF6070D17D792ABD8948E03B692AC9C(__this, NULL);
		// if (_isReturning)
		bool L_1 = __this->____isReturning_34;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// if (ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_2;
		L_2 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_2) == ((int32_t)6)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3;
		L_3 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_3) == ((int32_t)7)))
		{
			goto IL_002f;
		}
	}
	{
		// return;
		return;
	}

IL_002f:
	{
		// var featureSupport = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_4 = __this->___EarthManager_7;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F(L_4, 2, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (L_6)
		{
			case 0:
			{
				goto IL_005d;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_009d;
	}

IL_0050:
	{
		// return;
		return;
	}

IL_0051:
	{
		// ReturnWithReason("Geospatial API is not supported by this devices.");
		GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF(__this, _stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A, NULL);
		// return;
		return;
	}

IL_005d:
	{
		// if (ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode ==
		//     GeospatialMode.Disabled)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7 = __this->___ARCoreExtensions_8;
		NullCheck(L_7);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_8 = L_7->___ARCoreExtensionsConfig_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->___GeospatialMode_5;
		if (L_9)
		{
			goto IL_009d;
		}
	}
	{
		// Debug.Log("Geospatial sample switched to GeospatialMode.Enabled.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD, NULL);
		// ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode =
		//     GeospatialMode.Enabled;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_10 = __this->___ARCoreExtensions_8;
		NullCheck(L_10);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_11 = L_10->___ARCoreExtensionsConfig_7;
		NullCheck(L_11);
		L_11->___GeospatialMode_5 = 2;
		// _configurePrepareTime = 3.0f;
		__this->____configurePrepareTime_39 = (3.0f);
		// _enablingGeospatial = true;
		__this->____enablingGeospatial_36 = (bool)1;
		// return;
		return;
	}

IL_009d:
	{
		// if (_enablingGeospatial)
		bool L_12 = __this->____enablingGeospatial_36;
		if (!L_12)
		{
			goto IL_00ce;
		}
	}
	{
		// _configurePrepareTime -= Time.deltaTime;
		float L_13 = __this->____configurePrepareTime_39;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____configurePrepareTime_39 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// if (_configurePrepareTime < 0)
		float L_15 = __this->____configurePrepareTime_39;
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_00cd;
		}
	}
	{
		// _enablingGeospatial = false;
		__this->____enablingGeospatial_36 = (bool)0;
		goto IL_00ce;
	}

IL_00cd:
	{
		// return;
		return;
	}

IL_00ce:
	{
		// var earthState = EarthManager.EarthState;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_16 = __this->___EarthManager_7;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38(L_16, NULL);
		V_1 = L_17;
		// if (earthState == EarthState.ErrorEarthNotReady)
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)-100)))))
		{
			goto IL_00f0;
		}
	}
	{
		// SnackBarText.text = _localizationInitializingMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___SnackBarText_18;
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteralF971503E7E762E947F8E0E4CFCDBDEEBB6C91D01);
		// return;
		return;
	}

IL_00f0:
	{
		// else if (earthState != EarthState.Enabled)
		int32_t L_20 = V_1;
		if (!L_20)
		{
			goto IL_0121;
		}
	}
	{
		// string errorMessage =
		//     "Geospatial sample encountered an EarthState error: " + earthState;
		Il2CppFakeBox<int32_t> L_21(EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_22;
		L_22 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_21), NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C, L_22, NULL);
		V_4 = L_23;
		// Debug.LogWarning(errorMessage);
		String_t* L_24 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_24, NULL);
		// SnackBarText.text = errorMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___SnackBarText_18;
		String_t* L_26 = V_4;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_26);
		// return;
		return;
	}

IL_0121:
	{
		// bool isSessionReady = ARSession.state == ARSessionState.SessionTracking;
		int32_t L_27;
		L_27 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		// var earthTrackingState = EarthManager.EarthTrackingState;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_28 = __this->___EarthManager_7;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_28, NULL);
		V_2 = L_29;
		// var pose = earthTrackingState == TrackingState.Tracking ?
		//     EarthManager.CameraGeospatialPose : new GeospatialPose();
		int32_t L_30 = V_2;
		G_B22_0 = ((((int32_t)L_27) == ((int32_t)7))? 1 : 0);
		if ((((int32_t)L_30) == ((int32_t)2)))
		{
			G_B23_0 = ((((int32_t)L_27) == ((int32_t)7))? 1 : 0);
			goto IL_0145;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C));
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_31 = V_5;
		G_B24_0 = L_31;
		G_B24_1 = G_B22_0;
		goto IL_0150;
	}

IL_0145:
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_32 = __this->___EarthManager_7;
		NullCheck(L_32);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_33;
		L_33 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_32, NULL);
		G_B24_0 = L_33;
		G_B24_1 = G_B23_0;
	}

IL_0150:
	{
		V_3 = G_B24_0;
		// if (!isSessionReady || earthTrackingState != TrackingState.Tracking ||
		//     pose.HeadingAccuracy > _headingAccuracyThreshold ||
		//     pose.HorizontalAccuracy > _horizontalAccuracyThreshold)
		if (!G_B24_1)
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_017c;
		}
	}
	{
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_35 = V_3;
		double L_36 = L_35.___HeadingAccuracy_4;
		if ((((double)L_36) > ((double)(25.0))))
		{
			goto IL_017c;
		}
	}
	{
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_37 = V_3;
		double L_38 = L_37.___HorizontalAccuracy_5;
		if ((!(((double)L_38) > ((double)(20.0)))))
		{
			goto IL_024c;
		}
	}

IL_017c:
	{
		// if (!_isLocalizing)
		bool L_39 = __this->____isLocalizing_35;
		if (L_39)
		{
			goto IL_01fe;
		}
	}
	{
		// _isLocalizing = true;
		__this->____isLocalizing_35 = (bool)1;
		// _localizationPassedTime = 0f;
		__this->____localizationPassedTime_38 = (0.0f);
		// SetAnchorButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_40 = __this->___SetAnchorButton_14;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// TerrainButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_42 = __this->___TerrainButton_15;
		NullCheck(L_42);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_42, NULL);
		NullCheck(L_43);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
		// ClearAllButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_44 = __this->___ClearAllButton_13;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_44, NULL);
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)0, NULL);
		// foreach (var go in _anchorObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_46 = __this->____anchorObjects_41;
		NullCheck(L_46);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_47;
		L_47 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_46, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_6 = L_47;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01f0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_6), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01e5_1;
			}

IL_01d8_1:
			{
				// foreach (var go in _anchorObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
				L_48 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_6), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// go.SetActive(false);
				NullCheck(L_48);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)0, NULL);
			}

IL_01e5_1:
			{
				// foreach (var go in _anchorObjects)
				bool L_49;
				L_49 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_6), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_01d8_1;
				}
			}
			{
				goto IL_01fe;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01fe:
	{
		// if (_localizationPassedTime > _timeoutSeconds)
		float L_50 = __this->____localizationPassedTime_38;
		if ((!(((float)L_50) > ((float)(180.0f)))))
		{
			goto IL_0225;
		}
	}
	{
		// Debug.LogError("Geospatial sample localization passed timeout.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral0B33E2273C9AB388C21E973B33AEB2CD77079D68, NULL);
		// ReturnWithReason(_localizationFailureMessage);
		GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF(__this, _stringLiteral970A4D6490D612AAF148057C65320C8178CD0C87, NULL);
		goto IL_030f;
	}

IL_0225:
	{
		// _localizationPassedTime += Time.deltaTime;
		float L_51 = __this->____localizationPassedTime_38;
		float L_52;
		L_52 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____localizationPassedTime_38 = ((float)il2cpp_codegen_add(L_51, L_52));
		// SnackBarText.text = _localizationInstructionMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_53 = __this->___SnackBarText_18;
		NullCheck(L_53);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_53, _stringLiteralB3485A54065E6F4E66AFF0546DB80DF7DA4A5284);
		goto IL_030f;
	}

IL_024c:
	{
		// else if (_isLocalizing)
		bool L_54 = __this->____isLocalizing_35;
		if (!L_54)
		{
			goto IL_030f;
		}
	}
	{
		// _isLocalizing = false;
		__this->____isLocalizing_35 = (bool)0;
		// _localizationPassedTime = 0f;
		__this->____localizationPassedTime_38 = (0.0f);
		// SetAnchorButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_55 = __this->___SetAnchorButton_14;
		NullCheck(L_55);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_55, NULL);
		NullCheck(L_56);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)1, NULL);
		// TerrainButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_57 = __this->___TerrainButton_15;
		NullCheck(L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_57, NULL);
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)1, NULL);
		// ClearAllButton.gameObject.SetActive(_anchorObjects.Count > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_59 = __this->___ClearAllButton_13;
		NullCheck(L_59);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_59, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_61 = __this->____anchorObjects_41;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_61, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)((((int32_t)L_62) > ((int32_t)0))? 1 : 0), NULL);
		// SnackBarText.text = _localizationSuccessMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_63 = __this->___SnackBarText_18;
		NullCheck(L_63);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_63, _stringLiteral242A0070D29873DA9B6E4E1164C9C8B53CE23D19);
		// foreach (var go in _anchorObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_64 = __this->____anchorObjects_41;
		NullCheck(L_64);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_65;
		L_65 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_64, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_6 = L_65;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02fb:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_6), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02f0_1;
			}

IL_02c8_1:
			{
				// foreach (var go in _anchorObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
				L_66 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_6), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_7 = L_66;
				// var terrainState = go.GetComponent<ARGeospatialAnchor>().terrainAnchorState;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = V_7;
				NullCheck(L_67);
				ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_68;
				L_68 = GameObject_GetComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m449821BD94BB048929D0F08D05D4BA227B430BE9(L_67, GameObject_GetComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m449821BD94BB048929D0F08D05D4BA227B430BE9_RuntimeMethod_var);
				NullCheck(L_68);
				int32_t L_69;
				L_69 = ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047(L_68, NULL);
				V_8 = L_69;
				// if (terrainState != TerrainAnchorState.None &&
				//     terrainState != TerrainAnchorState.Success)
				int32_t L_70 = V_8;
				if (!L_70)
				{
					goto IL_02e8_1;
				}
			}
			{
				int32_t L_71 = V_8;
				if ((!(((uint32_t)L_71) == ((uint32_t)2))))
				{
					goto IL_02f0_1;
				}
			}

IL_02e8_1:
			{
				// go.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = V_7;
				NullCheck(L_72);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_72, (bool)1, NULL);
			}

IL_02f0_1:
			{
				// foreach (var go in _anchorObjects)
				bool L_73;
				L_73 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_6), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_73)
				{
					goto IL_02c8_1;
				}
			}
			{
				goto IL_0309;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0309:
	{
		// ResolveHistory();
		GeospatialController_ResolveHistory_mF4A2FFB2FC64B439305A9B081795341F5F4A7359(__this, NULL);
	}

IL_030f:
	{
		// InfoPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = __this->___InfoPanel_16;
		NullCheck(L_74);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_74, (bool)1, NULL);
		// if (earthTrackingState == TrackingState.Tracking)
		int32_t L_75 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)2))))
		{
			goto IL_03d2;
		}
	}
	{
		// InfoText.text = string.Format(
		// "Latitude/Longitude: {1}?, {2}?{0}" +
		// "Horizontal Accuracy: {3}m{0}" +
		// "Altitude: {4}m{0}" +
		// "Vertical Accuracy: {5}m{0}" +
		// "Heading: {6}?{0}" +
		// "Heading Accuracy: {7}?",
		// Environment.NewLine,
		// pose.Latitude.ToString("F6"),
		// pose.Longitude.ToString("F6"),
		// pose.HorizontalAccuracy.ToString("F6"),
		// pose.Altitude.ToString("F2"),
		// pose.VerticalAccuracy.ToString("F2"),
		// pose.Heading.ToString("F1"),
		// pose.HeadingAccuracy.ToString("F1"));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_76 = __this->___InfoText_17;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = L_77;
		String_t* L_79;
		L_79 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_79);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_79);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_80 = L_78;
		double* L_81 = (&(&V_3)->___Latitude_0);
		String_t* L_82;
		L_82 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_81, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, NULL);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_82);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_82);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_83 = L_80;
		double* L_84 = (&(&V_3)->___Longitude_1);
		String_t* L_85;
		L_85 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_84, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, NULL);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_85);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_85);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86 = L_83;
		double* L_87 = (&(&V_3)->___HorizontalAccuracy_5);
		String_t* L_88;
		L_88 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_87, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_88);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_88);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_89 = L_86;
		double* L_90 = (&(&V_3)->___Altitude_2);
		String_t* L_91;
		L_91 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_90, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_91);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_91);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_92 = L_89;
		double* L_93 = (&(&V_3)->___VerticalAccuracy_6);
		String_t* L_94;
		L_94 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_93, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_94);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_94);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_95 = L_92;
		double* L_96 = (&(&V_3)->___Heading_3);
		String_t* L_97;
		L_97 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_96, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, L_97);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_97);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_98 = L_95;
		double* L_99 = (&(&V_3)->___HeadingAccuracy_4);
		String_t* L_100;
		L_100 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_99, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, L_100);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_100);
		String_t* L_101;
		L_101 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralA628C3EA1A977D457A54A899CA2F513C35C50B9C, L_98, NULL);
		NullCheck(L_76);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_76, L_101);
		return;
	}

IL_03d2:
	{
		// InfoText.text = "GEOSPATIAL POSE: not tracking";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_102 = __this->___InfoText_17;
		NullCheck(L_102);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_102, _stringLiteralBA97DB5D365444C5E6EF88EF63073328B97B1146);
		// }
		return;
	}
}
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::CheckTerrainAnchorState(Google.XR.ARCoreExtensions.ARGeospatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeospatialController_CheckTerrainAnchorState_mECBEC2C347FE65F6FFE796326250B8B6985FF19F (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___anchor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710* L_0 = (U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710*)il2cpp_codegen_object_new(U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckTerrainAnchorStateU3Ed__47__ctor_m550E6D45CCA50968E1599938087320E0F7603A22(L_0, 0, NULL);
		U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710* L_2 = L_1;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_3 = ___anchor0;
		NullCheck(L_2);
		L_2->___anchor_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___anchor_2), (void*)L_3);
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PlaceGeospatialAnchor(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* GeospatialController_PlaceGeospatialAnchor_m20AC740B55383282D2AFE8F9181848A75DE2A650 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___history0, bool ___terrain1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_1 = NULL;
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* G_B3_0 = NULL;
	{
		// Quaternion quaternion =
		//     Quaternion.AngleAxis(180f - (float)history.Heading, Vector3.up);
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_0 = ___history0;
		double L_1 = L_0.___Heading_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_subtract((180.0f), ((float)L_1))), L_2, NULL);
		V_0 = L_3;
		// var anchor = terrain ?
		//     AnchorManager.ResolveAnchorOnTerrain(
		//         history.Latitude, history.Longitude, 0, quaternion) :
		//     AnchorManager.AddAnchor(
		//         history.Latitude, history.Longitude, history.Altitude, quaternion);
		bool L_4 = ___terrain1;
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_5 = __this->___AnchorManager_6;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_6 = ___history0;
		double L_7 = L_6.___Latitude_1;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_8 = ___history0;
		double L_9 = L_8.___Longitude_2;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_10 = ___history0;
		double L_11 = L_10.___Altitude_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_13;
		L_13 = ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78(L_5, L_7, L_9, L_11, L_12, NULL);
		G_B3_0 = L_13;
		goto IL_005c;
	}

IL_003b:
	{
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_14 = __this->___AnchorManager_6;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_15 = ___history0;
		double L_16 = L_15.___Latitude_1;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_17 = ___history0;
		double L_18 = L_17.___Longitude_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_20;
		L_20 = ARAnchorManagerExtensions_ResolveAnchorOnTerrain_mFB8A8E939F146EA51A5FB24086DF91F1C6795AFF(L_14, L_16, L_18, (0.0), L_19, NULL);
		G_B3_0 = L_20;
	}

IL_005c:
	{
		V_1 = G_B3_0;
		// if (anchor != null)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_21 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_00af;
		}
	}
	{
		// GameObject anchorGO = terrain ?
		//     Instantiate(TerrainPrefab, anchor.transform) :
		//     Instantiate(GeospatialPrefab, anchor.transform);
		bool L_23 = ___terrain1;
		if (L_23)
		{
			goto IL_007d;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___GeospatialPrefab_9;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_25 = V_1;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_24, L_26, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		goto IL_008f;
	}

IL_007d:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___TerrainPrefab_10;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_29 = V_1;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_28, L_30, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
	}

IL_008f:
	{
		// anchor.gameObject.SetActive(!terrain);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_32 = V_1;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		bool L_34 = ___terrain1;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0), NULL);
		// _anchorObjects.Add(anchor.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_35 = __this->____anchorObjects_41;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_36 = V_1;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		NullCheck(L_35);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_35, L_37, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
	}

IL_00af:
	{
		// return anchor;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_38 = V_1;
		return L_38;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ResolveHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ResolveHistory_mF4A2FFB2FC64B439305A9B081795341F5F4A7359 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3187553363A94FA380DF7928E3C910219A40C90A);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!_shouldResolvingHistory)
		bool L_0 = __this->____shouldResolvingHistory_37;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _shouldResolvingHistory = false;
		__this->____shouldResolvingHistory_37 = (bool)0;
		// foreach (var history in _historyCollection.Collection)
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_1 = __this->____historyCollection_40;
		NullCheck(L_1);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_2 = L_1->___Collection_0;
		NullCheck(L_2);
		Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 L_3;
		L_3 = List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF(L_2, List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C((&V_0), Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0034_1;
			}

IL_0023_1:
			{
				// foreach (var history in _historyCollection.Collection)
				GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_4;
				L_4 = Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_inline((&V_0), Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_RuntimeMethod_var);
				V_1 = L_4;
				// PlaceGeospatialAnchor(history);
				GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_5 = V_1;
				ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_6;
				L_6 = GeospatialController_PlaceGeospatialAnchor_m20AC740B55383282D2AFE8F9181848A75DE2A650(__this, L_5, (bool)0, NULL);
			}

IL_0034_1:
			{
				// foreach (var history in _historyCollection.Collection)
				bool L_7;
				L_7 = Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447((&V_0), Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		// ClearAllButton.gameObject.SetActive(_historyCollection.Collection.Count > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___ClearAllButton_13;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_10 = __this->____historyCollection_40;
		NullCheck(L_10);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_11 = L_10->___Collection_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_11, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)((((int32_t)L_12) > ((int32_t)0))? 1 : 0), NULL);
		// SnackBarText.text = string.Format("{0} anchor(s) set from history.",
		//     _anchorObjects.Count);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___SnackBarText_18;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->____anchorObjects_41;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_14, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3187553363A94FA380DF7928E3C910219A40C90A, L_17, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_18);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LoadGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LoadGeospatialAnchorHistory_m78B8DEB20F80FE681FA18AC34EFBB190DE330605 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_mB3CF0CB18FC4CB0B45740E7AAD892F7B4F55CC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass50_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_m2B28B230DAE31AD3881A0E5B845DB0AC2AE93987_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA* V_0 = NULL;
	{
		// if (PlayerPrefs.HasKey(_persistentGeospatialAnchorsStorageKey))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, NULL);
		if (!L_0)
		{
			goto IL_006a;
		}
	}
	{
		U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA* L_1 = (U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		U3CU3Ec__DisplayClass50_0__ctor_m09442E832444FC97B7E07328A074649C7F964DD7(L_1, NULL);
		V_0 = L_1;
		// _historyCollection = JsonUtility.FromJson<GeospatialAnchorHistoryCollection>(
		//     PlayerPrefs.GetString(_persistentGeospatialAnchorsStorageKey));
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, NULL);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_3;
		L_3 = JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_mB3CF0CB18FC4CB0B45740E7AAD892F7B4F55CC22(L_2, JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_mB3CF0CB18FC4CB0B45740E7AAD892F7B4F55CC22_RuntimeMethod_var);
		__this->____historyCollection_40 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____historyCollection_40), (void*)L_3);
		// DateTime current = DateTime.Now;
		U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		NullCheck(L_4);
		L_4->___current_0 = L_5;
		// _historyCollection.Collection.RemoveAll(
		//     data => current.Subtract(data.CreatedTime).Days > 0);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_6 = __this->____historyCollection_40;
		NullCheck(L_6);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_7 = L_6->___Collection_0;
		U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA* L_8 = V_0;
		Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* L_9 = (Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9*)il2cpp_codegen_object_new(Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Predicate_1__ctor_m6906BC0330B02272E5E11B26C6C18A3A8CC271A7(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass50_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_m2B28B230DAE31AD3881A0E5B845DB0AC2AE93987_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347(L_7, L_9, List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_RuntimeMethod_var);
		// PlayerPrefs.SetString(_persistentGeospatialAnchorsStorageKey,
		//     JsonUtility.ToJson(_historyCollection));
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_11 = __this->____historyCollection_40;
		String_t* L_12;
		L_12 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_11, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, L_12, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		return;
	}

IL_006a:
	{
		// _historyCollection = new GeospatialAnchorHistoryCollection();
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_13 = (GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD*)il2cpp_codegen_object_new(GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		GeospatialAnchorHistoryCollection__ctor_mF8B2CC65BEF02F8F5AD9A6745E9DA6B05D7D06FA(L_13, NULL);
		__this->____historyCollection_40 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____historyCollection_40), (void*)L_13);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SaveGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__51_0_mE465BE86F8DEAC940DD1FF509F9DC1CA643A67EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888);
		s_Il2CppMethodInitialized = true;
	}
	Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* G_B2_0 = NULL;
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* G_B2_1 = NULL;
	Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* G_B1_0 = NULL;
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* G_B1_1 = NULL;
	{
		// _historyCollection.Collection.Sort((left, right) =>
		//     right.CreatedTime.CompareTo(left.CreatedTime));
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_0 = __this->____historyCollection_40;
		NullCheck(L_0);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_1 = L_0->___Collection_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* L_2 = ((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9__51_0_1;
		Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* L_4 = ((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* L_5 = (Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654*)il2cpp_codegen_object_new(Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Comparison_1__ctor_m4F653C6CE2CE5AE4F2EBB6FF39AFD589ED84244F(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__51_0_mE465BE86F8DEAC940DD1FF509F9DC1CA643A67EB_RuntimeMethod_var), NULL);
		Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* L_6 = L_5;
		((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9__51_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9__51_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		NullCheck(G_B2_1);
		List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E(G_B2_1, G_B2_0, List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_RuntimeMethod_var);
		// if (_historyCollection.Collection.Count > _storageLimit)
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_7 = __this->____historyCollection_40;
		NullCheck(L_7);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_8 = L_7->___Collection_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_8, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)5)))
		{
			goto IL_0065;
		}
	}
	{
		// _historyCollection.Collection.RemoveRange(
		//     _storageLimit, _historyCollection.Collection.Count - _storageLimit);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_10 = __this->____historyCollection_40;
		NullCheck(L_10);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_11 = L_10->___Collection_0;
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_12 = __this->____historyCollection_40;
		NullCheck(L_12);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_13 = L_12->___Collection_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_13, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273(L_11, 5, ((int32_t)il2cpp_codegen_subtract(L_14, 5)), List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_RuntimeMethod_var);
	}

IL_0065:
	{
		// PlayerPrefs.SetString(
		//     _persistentGeospatialAnchorsStorageKey, JsonUtility.ToJson(_historyCollection));
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_15 = __this->____historyCollection_40;
		String_t* L_16;
		L_16 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_15, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, L_16, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SwitchToARView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, bool ___enable0, const RuntimeMethod* method) 
{
	{
		// _isInARView = enable;
		bool L_0 = ___enable0;
		__this->____isInARView_33 = L_0;
		// SessionOrigin.gameObject.SetActive(enable);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_1 = __this->___SessionOrigin_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		bool L_3 = ___enable0;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, L_3, NULL);
		// Session.gameObject.SetActive(enable);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_4 = __this->___Session_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		bool L_6 = ___enable0;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_6, NULL);
		// ARCoreExtensions.gameObject.SetActive(enable);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7 = __this->___ARCoreExtensions_8;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		bool L_9 = ___enable0;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, L_9, NULL);
		// ARViewCanvas.SetActive(enable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___ARViewCanvas_12;
		bool L_11 = ___enable0;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, L_11, NULL);
		// PrivacyPromptCanvas.SetActive(!enable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___PrivacyPromptCanvas_11;
		bool L_13 = ___enable0;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LifecycleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LifecycleUpdate_m9DF865831BF6070D17D792ABD8948E03B692AC9C (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// if (Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_000e:
	{
		// if (_isReturning)
		bool L_1 = __this->____isReturning_34;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// var sleepTimeout = SleepTimeout.NeverSleep;
		V_0 = (-1);
		// if (ARSession.state != ARSessionState.SessionTracking)
		int32_t L_2;
		L_2 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_2) == ((int32_t)7)))
		{
			goto IL_0024;
		}
	}
	{
		// sleepTimeout = SleepTimeout.SystemSetting;
		V_0 = ((int32_t)-2);
	}

IL_0024:
	{
		// Screen.sleepTimeout = sleepTimeout;
		int32_t L_3 = V_0;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A(L_3, NULL);
		// string returningReason = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_4;
		// if (ARSession.state != ARSessionState.CheckingAvailability &&
		//     ARSession.state != ARSessionState.Ready &&
		//     ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_5;
		L_5 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6;
		L_6 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_6) == ((int32_t)5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_7;
		L_7 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_7) == ((int32_t)6)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_8;
		L_8 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_8) == ((int32_t)7)))
		{
			goto IL_0067;
		}
	}
	{
		// returningReason = string.Format(
		//     "Geospatial sample encountered an ARSession error state {0}.\n" +
		//     "Please start the app again.",
		//     ARSession.state);
		int32_t L_9;
		L_9 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64, L_11, NULL);
		V_1 = L_12;
		goto IL_00a1;
	}

IL_0067:
	{
		// else if (SessionOrigin == null || Session == null || ARCoreExtensions == null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_13 = __this->___SessionOrigin_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_14)
		{
			goto IL_0091;
		}
	}
	{
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_15 = __this->___Session_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_16)
		{
			goto IL_0091;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_17 = __this->___ARCoreExtensions_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a1;
		}
	}

IL_0091:
	{
		// returningReason = string.Format(
		//     "Geospatial sample failed with missing AR Components.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19;
		L_19 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_20;
		L_20 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91, L_19, NULL);
		V_1 = L_20;
	}

IL_00a1:
	{
		// ReturnWithReason(returningReason);
		String_t* L_21 = V_1;
		GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF(__this, L_21, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ReturnWithReason(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, String_t* ___reason0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23E836F9814F83ED24864553FD4B41704BFEFFA8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(reason))
		String_t* L_0 = ___reason0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// SetAnchorButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___SetAnchorButton_14;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// TerrainButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___TerrainButton_15;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// ClearAllButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___ClearAllButton_13;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// InfoPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___InfoPanel_16;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// Debug.LogError(reason);
		String_t* L_9 = ___reason0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
		// SnackBarText.text = reason;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___SnackBarText_18;
		String_t* L_11 = ___reason0;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		// _isReturning = true;
		__this->____isReturning_34 = (bool)1;
		// Invoke(nameof(QuitApplication), _errorDisplaySeconds);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral23E836F9814F83ED24864553FD4B41704BFEFFA8, (3.0f), NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::QuitApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_QuitApplication_m374C0568E0D871CB80991D28B9DAC2F2086B7B0A (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::UpdateDebugInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_UpdateDebugInfo_m4DD7408BE036B30EE50B0F2CB2D5ED7B24B314A1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureSupported_tC15463343F78E985BF776995FBE804EC3D2991A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0642FD4A763B782EEF7CA72009CA8D1E0FFC5D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral272FD43E889593108C54482F13ABAACDD71C5FFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D77236056880C0D3C936B020E57CFE072FD559);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A80DBD535E7AFB2B86F791A732EBEEE4BCF7CDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral659DC561CB989579B2C5DB5BC9116FC03B863958);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D87A6B5B660BA3CC373D14B317E3A40FC27CD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E5080011A7CA3BD4949A61B46ADA7657E8540F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96EF7EFF0F00A2F793F25BE896448C3A1BBA9828);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7CA9DC3E5A221DFCC0483888D319D118E5CEF90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC7FFF74C9144CC4E77C56C5F9B4FDBC4516816D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A905249C0409DB8B563D30BAE889395AFBDB30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA251D8CD4C01D372EB4EAC50A26C0633FA71D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF4CB593B711998014E24A8BDC4D1A685D2F9E5B);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		// if (!Debug.isDebugBuild || EarthManager == null)
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_1 = __this->___EarthManager_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// var pose = EarthManager.EarthState == EarthState.Enabled &&
		//     EarthManager.EarthTrackingState == TrackingState.Tracking ?
		//     EarthManager.CameraGeospatialPose : new GeospatialPose();
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_3 = __this->___EarthManager_7;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38(L_3, NULL);
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_5 = __this->___EarthManager_7;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003c;
		}
	}

IL_0031:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C));
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_7 = V_2;
		G_B7_0 = L_7;
		goto IL_0047;
	}

IL_003c:
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_8 = __this->___EarthManager_7;
		NullCheck(L_8);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_9;
		L_9 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_8, NULL);
		G_B7_0 = L_9;
	}

IL_0047:
	{
		V_0 = G_B7_0;
		// var supported = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_10 = __this->___EarthManager_7;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F(L_10, 2, NULL);
		V_1 = L_11;
		// DebugText.text =
		//     $"IsReturning: {_isReturning}\n" +
		//     $"IsLocalizing: {_isLocalizing}\n" +
		//     $"SessionState: {ARSession.state}\n" +
		//     $"LocationServiceStatus: {Input.location.status}\n" +
		//     $"FeatureSupported: {supported}\n" +
		//     $"EarthState: {EarthManager.EarthState}\n" +
		//     $"EarthTrackingState: {EarthManager.EarthTrackingState}\n" +
		//     $"  LAT/LNG: {pose.Latitude:F6}, {pose.Longitude:F6}\n" +
		//     $"  HorizontalAcc: {pose.HorizontalAccuracy:F6}\n" +
		//     $"  ALT: {pose.Altitude:F2}\n" +
		//     $"  VerticalAcc: {pose.VerticalAccuracy:F2}\n" +
		//     $"  Heading: {pose.Heading:F2}\n" +
		//     $"  HeadingAcc: {pose.HeadingAccuracy:F2}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___DebugText_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		bool L_15 = __this->____isReturning_34;
		bool L_16 = L_15;
		RuntimeObject* L_17 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral80D87A6B5B660BA3CC373D14B317E3A40FC27CD9, L_17, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_14;
		bool L_20 = __this->____isLocalizing_35;
		bool L_21 = L_20;
		RuntimeObject* L_22 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral659DC561CB989579B2C5DB5BC9116FC03B863958, L_22, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_19;
		int32_t L_25;
		L_25 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28;
		L_28 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralB7CA9DC3E5A221DFCC0483888D319D118E5CEF90, L_27, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_24;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_30;
		L_30 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_30, NULL);
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3A80DBD535E7AFB2B86F791A732EBEEE4BCF7CDB, L_33, NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_34);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_29;
		int32_t L_36 = V_1;
		int32_t L_37 = L_36;
		RuntimeObject* L_38 = Box(FeatureSupported_tC15463343F78E985BF776995FBE804EC3D2991A0_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39;
		L_39 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD7A905249C0409DB8B563D30BAE889395AFBDB30, L_38, NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_35;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_41 = __this->___EarthManager_7;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38(L_41, NULL);
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45;
		L_45 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralFF4CB593B711998014E24A8BDC4D1A685D2F9E5B, L_44, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_45);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_45);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_40;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_47 = __this->___EarthManager_7;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_47, NULL);
		int32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var, &L_49);
		String_t* L_51;
		L_51 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral96EF7EFF0F00A2F793F25BE896448C3A1BBA9828, L_50, NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_51);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_51);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_46;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_53 = V_0;
		double L_54 = L_53.___Latitude_0;
		double L_55 = L_54;
		RuntimeObject* L_56 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_55);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_57 = V_0;
		double L_58 = L_57.___Longitude_1;
		double L_59 = L_58;
		RuntimeObject* L_60 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_59);
		String_t* L_61;
		L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBA251D8CD4C01D372EB4EAC50A26C0633FA71D7, L_56, L_60, NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_61);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_61);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_52;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_63 = V_0;
		double L_64 = L_63.___HorizontalAccuracy_5;
		double L_65 = L_64;
		RuntimeObject* L_66 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_65);
		String_t* L_67;
		L_67 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral31D77236056880C0D3C936B020E57CFE072FD559, L_66, NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_67);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_67);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = L_62;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_69 = V_0;
		double L_70 = L_69.___Altitude_2;
		double L_71 = L_70;
		RuntimeObject* L_72 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_71);
		String_t* L_73;
		L_73 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral8E5080011A7CA3BD4949A61B46ADA7657E8540F9, L_72, NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_73);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_68;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_75 = V_0;
		double L_76 = L_75.___VerticalAccuracy_6;
		double L_77 = L_76;
		RuntimeObject* L_78 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_77);
		String_t* L_79;
		L_79 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral272FD43E889593108C54482F13ABAACDD71C5FFE, L_78, NULL);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_79);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_79);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_74;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_81 = V_0;
		double L_82 = L_81.___Heading_3;
		double L_83 = L_82;
		RuntimeObject* L_84 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_83);
		String_t* L_85;
		L_85 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral0642FD4A763B782EEF7CA72009CA8D1E0FFC5D86, L_84, NULL);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_85);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_85);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_86 = L_80;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_87 = V_0;
		double L_88 = L_87.___HeadingAccuracy_4;
		double L_89 = L_88;
		RuntimeObject* L_90 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_89);
		String_t* L_91;
		L_91 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralBC7FFF74C9144CC4E77C56C5F9B4FDBC4516816D, L_90, NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_91);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_91);
		String_t* L_92;
		L_92 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_86, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_92);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController__ctor_m94BF4BBFAAEC1C97890C4E06BF04404FBE6D8FEC (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _configurePrepareTime = 3f;
		__this->____configurePrepareTime_39 = (3.0f);
		// private List<GameObject> _anchorObjects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____anchorObjects_41 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anchorObjects_41), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckTerrainAnchorStateU3Ed__47__ctor_m550E6D45CCA50968E1599938087320E0F7603A22 (U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckTerrainAnchorStateU3Ed__47_System_IDisposable_Dispose_m99BF13F1F8EDEFB86A85A06C58A413135F0BFEC7 (U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckTerrainAnchorStateU3Ed__47_MoveNext_mE3810FB7BC981585EAACB9CBC5EB4800AE5A53C6 (U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainAnchorState_tAA75FC29D5E05B159FB4B825A67F7ADEACDE0C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD5241E070B724D1D5CE76F8E905B1B2E830A43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17B8F3EF49CC7544D310EC961509B812B673A5EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CD8725749511AED54A82B7EEB159755F15D7128);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B18_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B19_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00df;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (anchor == null || _anchorObjects == null)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_4 = __this->___anchor_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_6 = V_1;
		NullCheck(L_6);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = L_6->____anchorObjects_41;
		if (L_7)
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		// yield break;
		return (bool)0;
	}

IL_0039:
	{
		// int retry = 0;
		__this->___U3CretryU3E5__2_4 = 0;
		goto IL_00fb;
	}

IL_0045:
	{
		// if (_anchorObjects.Count == 0 || !_anchorObjects.Contains(anchor.gameObject))
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_8 = V_1;
		NullCheck(L_8);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = L_8->____anchorObjects_41;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_9, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_11 = V_1;
		NullCheck(L_11);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = L_11->____anchorObjects_41;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_13 = __this->___anchor_2;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_12);
		bool L_15;
		L_15 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_12, L_14, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_008f;
		}
	}

IL_006a:
	{
		// Debug.LogFormat(
		//     "{0} has been removed, exist terrain anchor state check.",
		//     anchor.trackableId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_18 = __this->___anchor_2;
		NullCheck(L_18);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_19;
		L_19 = ARGeospatialAnchor_get_trackableId_m8560D0B2C6E8D602B97A0B61EA92499AAD683939(L_18, NULL);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_20 = L_19;
		RuntimeObject* L_21 = Box(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral1CD8725749511AED54A82B7EEB159755F15D7128, L_17, NULL);
		// yield break;
		return (bool)0;
	}

IL_008f:
	{
		// if (retry == 100 && _anchorObjects.Last().Equals(anchor.gameObject))
		int32_t L_22 = __this->___U3CretryU3E5__2_4;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_00c6;
		}
	}
	{
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_23 = V_1;
		NullCheck(L_23);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = L_23->____anchorObjects_41;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B(L_24, Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_26 = __this->___anchor_2;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		NullCheck(L_25);
		bool L_28;
		L_28 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_25, L_27);
		if (!L_28)
		{
			goto IL_00c6;
		}
	}
	{
		// SnackBarText.text = _resolvingTimeoutMessage;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_29 = V_1;
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = L_29->___SnackBarText_18;
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, _stringLiteral0AD5241E070B724D1D5CE76F8E905B1B2E830A43);
	}

IL_00c6:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_31 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_31, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00df:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// retry = Math.Min(retry + 1, 100);
		int32_t L_32 = __this->___U3CretryU3E5__2_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_32, 1)), ((int32_t)100), NULL);
		__this->___U3CretryU3E5__2_4 = L_33;
	}

IL_00fb:
	{
		// while (anchor.terrainAnchorState == TerrainAnchorState.TaskInProgress)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_34 = __this->___anchor_2;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047(L_34, NULL);
		if ((((int32_t)L_35) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		// anchor.gameObject.SetActive(
		//     !_isLocalizing && anchor.terrainAnchorState == TerrainAnchorState.Success);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_36 = __this->___anchor_2;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_38 = V_1;
		NullCheck(L_38);
		bool L_39 = L_38->____isLocalizing_35;
		G_B17_0 = L_37;
		if (L_39)
		{
			G_B18_0 = L_37;
			goto IL_012f;
		}
	}
	{
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_40 = __this->___anchor_2;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047(L_40, NULL);
		G_B19_0 = ((((int32_t)L_41) == ((int32_t)2))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_0130;
	}

IL_012f:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_0130:
	{
		NullCheck(G_B19_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B19_1, (bool)G_B19_0, NULL);
		// if (_anchorObjects.Last().Equals(anchor.gameObject))
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_42 = V_1;
		NullCheck(L_42);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_43 = L_42->____anchorObjects_41;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B(L_43, Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_45 = __this->___anchor_2;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_45, NULL);
		NullCheck(L_44);
		bool L_47;
		L_47 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_44, L_46);
		if (!L_47)
		{
			goto IL_0177;
		}
	}
	{
		// SnackBarText.text = $"Terrain Anchor State: {anchor.terrainAnchorState}";
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_48 = V_1;
		NullCheck(L_48);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_49 = L_48->___SnackBarText_18;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_50 = __this->___anchor_2;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047(L_50, NULL);
		int32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(TerrainAnchorState_tAA75FC29D5E05B159FB4B825A67F7ADEACDE0C1D_il2cpp_TypeInfo_var, &L_52);
		String_t* L_54;
		L_54 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral17B8F3EF49CC7544D310EC961509B812B673A5EF, L_53, NULL);
		NullCheck(L_49);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, L_54);
	}

IL_0177:
	{
		// yield break;
		return (bool)0;
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckTerrainAnchorStateU3Ed__47_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m272B99BFE97EB912E69DE22D304F762D57429AD3 (U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckTerrainAnchorStateU3Ed__47_System_Collections_IEnumerator_Reset_mC3BD78A1B1B9D44B583A674E4D6F98474D5DFA17 (U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckTerrainAnchorStateU3Ed__47_System_Collections_IEnumerator_Reset_mC3BD78A1B1B9D44B583A674E4D6F98474D5DFA17_RuntimeMethod_var)));
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__47::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckTerrainAnchorStateU3Ed__47_System_Collections_IEnumerator_get_Current_m9166FC8C87476C314BBB8991D7EB5E0390474606 (U3CCheckTerrainAnchorStateU3Ed__47_t3C7680888A7FEC4D2A37944C54A0B85AEF6C5710* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_m09442E832444FC97B7E07328A074649C7F964DD7 (U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass50_0::<LoadGeospatialAnchorHistory>b__0(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass50_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_m2B28B230DAE31AD3881A0E5B845DB0AC2AE93987 (U3CU3Ec__DisplayClass50_0_tE9C08F49FB091C46BF314D39548A3AAFCF95EDAA* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___data0, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// data => current.Subtract(data.CreatedTime).Days > 0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___current_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A((&___data0), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107((&V_0), NULL);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF33920987DC5FA14E7DC0240B2361237B504622C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* L_0 = (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA*)il2cpp_codegen_object_new(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC(L_0, NULL);
		((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<SaveGeospatialAnchorHistory>b__51_0(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory,Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__51_0_mE465BE86F8DEAC940DD1FF509F9DC1CA643A67EB (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___left0, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___right1, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// right.CreatedTime.CompareTo(left.CreatedTime));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A((&___right1), NULL);
		V_0 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A((&___left0), NULL);
		int32_t L_2;
		L_2 = DateTime_CompareTo_m4A3000CD4FF15EA7CA2E9C5C95A9D07F3AA8D35D((&V_0), L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_Update_m4C02B57A221CB119573B865749FAEFB0E75F569A (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// safeArea = Screen.safeArea;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = Screen_get_safeArea_m2ADAD6C36CC5DB40CC2DAD300DD1DF7CA4DF2525(NULL);
		V_0 = L_0;
		// if (_screenSafeArea != safeArea)
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = __this->____screenSafeArea_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = V_0;
		bool L_3;
		L_3 = Rect_op_Inequality_mB5D7316EB50B1DDA9324F4BE6741DFF6A673137D(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// _screenSafeArea = safeArea;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = V_0;
		__this->____screenSafeArea_4 = L_4;
		// MatchRectTransformToSafeArea();
		SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64(__this, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::MatchRectTransformToSafeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64 (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// RectTransform rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		// Vector2 offsetMin = new Vector2(_screenSafeArea.xMin,
		//     Screen.height - _screenSafeArea.yMax);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&__this->____screenSafeArea_4);
		float L_2;
		L_2 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D(L_1, NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = (&__this->____screenSafeArea_4);
		float L_5;
		L_5 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E(L_4, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_2, ((float)il2cpp_codegen_subtract(((float)L_3), L_5)), NULL);
		// Vector2 offsetMax = new Vector2(
		//     _screenSafeArea.xMax - Screen.width,
		//     -_screenSafeArea.yMin);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = (&__this->____screenSafeArea_4);
		float L_7;
		L_7 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F(L_6, NULL);
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_9 = (&__this->____screenSafeArea_4);
		float L_10;
		L_10 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F(L_9, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_subtract(L_7, ((float)L_8))), ((-L_10)), NULL);
		// rectTransform.offsetMin = offsetMin;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		NullCheck(L_11);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_11, L_12, NULL);
		// rectTransform.offsetMax = offsetMax;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		NullCheck(L_11);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler__ctor_m61ED2F6F927714C4ED11AA2AEE2A0B9EA79B484B (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	{
		// private Rect _screenSafeArea = new Rect(0, 0, 0, 0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->____screenSafeArea_4 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* InteractObj_get_SelectedObject_mFB3C932EB23F5AF08A785685A93CF850844375B9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _interactObject;
		InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5* L_0 = ((InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_StaticFields*)il2cpp_codegen_static_fields_for(InteractObj_t864685B5B03B423AC6BEFD744E65D155C2B646F5_il2cpp_TypeInfo_var))->____interactObject_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_negativeInfinity_mAE9CF7FAC4027EC241B939EDC4E954C1241799CB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___negativeInfinityVector_14;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 DepthSource_get_LocalToWorldMatrix_m577A220FC9E7AC4C14B0AB2024D51A323A8D8AB2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Matrix4x4 LocalToWorldMatrix => _localToWorldTransform;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____localToWorldTransform_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_X_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Y_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 DepthSource_get_ScreenRotation_m128F72FAE35126621A6730F25AF1712519051D48_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Matrix4x4 ScreenRotation => _screenRotation;
		il2cpp_codegen_runtime_class_init_inline(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_StaticFields*)il2cpp_codegen_static_fields_for(DepthSource_tB4D213C811B3742DA0572C322BCF8F2CF06406E2_il2cpp_TypeInfo_var))->____screenRotation_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_State;
		int32_t L_0 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_State_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* L_3 = (GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___item0, const RuntimeMethod* method) 
{
	GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* L_1 = (GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* L_6 = V_0;
		int32_t L_7 = V_1;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C)L_8);
		return;
	}

IL_0034:
	{
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_9 = ___item0;
		((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_gshared_inline (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method) 
{
	{
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_0 = (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
