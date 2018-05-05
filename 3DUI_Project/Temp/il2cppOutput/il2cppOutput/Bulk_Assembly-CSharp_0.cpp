﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// ActiveStateToggler
struct ActiveStateToggler_t3846380968;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// ApplicationManager
struct ApplicationManager_t3254129643;
// ARScript
struct ARScript_t1214039674;
// System.String
struct String_t;
// ChangeColor
struct ChangeColor_t3909000678;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Light
struct Light_t3756812086;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// database
struct database_t2832598855;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t3870565407;
// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_t3916884476;
// Mono.Data.Sqlite.SqliteParameterCollection
struct SqliteParameterCollection_t2576174450;
// Mono.Data.Sqlite.SqliteParameter
struct SqliteParameter_t314071523;
// Mono.Data.Sqlite.SqliteDataReader
struct SqliteDataReader_t2933346592;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// database/<upload_graph>c__Iterator0
struct U3Cupload_graphU3Ec__Iterator0_t3978570228;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1314943911;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UnityEngine.WWWForm
struct WWWForm_t4064702195;
// UnityEngine.WWW
struct WWW_t3688466362;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// DefaultInitializationErrorHandler
struct DefaultInitializationErrorHandler_t3109936861;
// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t1949122020;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t3593217305;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3146511083;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t1763229349;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t3697830469;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t1588957063;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t1495975588;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// DragMe
struct DragMe_t1855460060;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t2349950;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RectTransform>
struct Dictionary_2_t2593370356;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.CanvasGroup
struct CanvasGroup_t4083511760;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Camera
struct Camera_t4157153871;
// DragPanel
struct DragPanel_t1406753375;
// DropMe
struct DropMe_t2942052774;
// Image01Script
struct Image01Script_t2305065612;
// Image02Script
struct Image02Script_t3649433479;
// Image03Script
struct Image03Script_t1182672150;
// Image04Script
struct Image04Script_t3494716217;
// Image05Script
struct Image05Script_t1027954888;
// Image1pos
struct Image1pos_t715604387;
// Image2pos
struct Image2pos_t722092451;
// MatImageSc
struct MatImageSc_t920972473;
// menuScript
struct menuScript_t2744932923;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1514609158;
// UnityEngine.UI.AspectRatioFitter
struct AspectRatioFitter_t3312407083;
// PanelManager
struct PanelManager_t438216159;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t774044132;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// PanelManager/<DisablePanelDeleyed>c__Iterator0
struct U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890;
// Panelpos
struct Panelpos_t23664475;
// phoneCamera
struct phoneCamera_t2918078011;
// UnityEngine.UI.RawImage
struct RawImage_t3182918964;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413;
// Positionset
struct Positionset_t2664798813;
// RadialProgressBar
struct RadialProgressBar_t2821283243;
// UnityEngine.UI.Text
struct Text_t1901882714;
// wandScript
struct wandScript_t1125606077;
// ResizePanel
struct ResizePanel_t4061714193;
// Scanning
struct Scanning_t651759208;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// Vuforia.ITrackerManager
struct ITrackerManager_t607206903;
// Vuforia.StateManager
struct StateManager_t1982749557;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t93412101;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// wayFinding
struct wayFinding_t2735345900;
// UnityEngine.UI.Toggle
struct Toggle_t2735377061;
// ScrollDetailTexture
struct ScrollDetailTexture_t3112174197;
// Scrollpos
struct Scrollpos_t1103970193;
// ShowSliderValue
struct ShowSliderValue_t410941925;
// TiltWindow
struct TiltWindow_t335293945;
// UICube
struct UICube_t784951944;
// WandPanelpos
struct WandPanelpos_t1049921294;
// WandSelection
struct WandSelection_t972065371;
// wandScript/<infoprocess>c__Iterator0
struct U3CinfoprocessU3Ec__Iterator0_t196706046;
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2994659099;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t1568156503;
// System.Collections.Hashtable/HashValues
struct HashValues_t618387445;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t2272543;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t2585633954;
// Vuforia.WordManager
struct WordManager_t3100853168;
// Vuforia.VuMarkManager
struct VuMarkManager_t2982459596;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t3849131975;
// Vuforia.IExtendedTrackingManager
struct IExtendedTrackingManager_t821947488;
// Vuforia.IlluminationManager
struct IlluminationManager_t3960931838;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1293755103;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t107129948;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.RectTransform,System.Collections.DictionaryEntry>
struct Transform_1_t4006436088;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GameObject,System.Collections.DictionaryEntry>
struct Transform_1_t2932937990;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// System.Void
struct Void_t1185182177;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>
struct List_1_t1786146265;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2129269699;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2467502454;
// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t1470694543;
// Mono.Data.Sqlite.SQLiteType[]
struct SQLiteTypeU5BU5D_t2470409038;
// Mono.Data.Sqlite.SqliteKeyReader
struct SqliteKeyReader_t2457387554;
// System.WeakReference
struct WeakReference_t1334886716;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>
struct List_1_t2942769285;
// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_t2018962351;
// Mono.Data.Sqlite.SQLiteEnlistment
struct SQLiteEnlistment_t238178236;
// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t1448580847;
// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_t3929343441;
// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_t583925460;
// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t3445264418;
// Mono.Data.Sqlite.SQLiteUpdateEventHandler
struct SQLiteUpdateEventHandler_t65030829;
// Mono.Data.Sqlite.SQLiteCommitHandler
struct SQLiteCommitHandler_t4261451224;
// System.EventHandler
struct EventHandler_t1348719766;
// System.Data.StateChangeEventHandler
struct StateChangeEventHandler_t3645615602;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t546560202;
// Vuforia.VuforiaConfiguration/DatabaseLoadConfiguration
struct DatabaseLoadConfiguration_t449697234;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t721467671;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t1514074484;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t1101614731;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// Vuforia.Trackable
struct Trackable_t2451999991;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t3491343620;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t2019268878;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t2475741330;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t3135238028;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t123837990;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t1873685584;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisLight_t3756812086_m916313317_RuntimeMethod_var;
extern const uint32_t ChangeColor_OnValueChanged_m3623988026_MetadataUsageId;
extern const uint32_t ChangeColor_OnPointerClick_m2250507928_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1290152079_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m669319585_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3378792279_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1254101744_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2026665411_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2276455407_RuntimeMethod_var;
extern String_t* _stringLiteral1604535310;
extern String_t* _stringLiteral3394506779;
extern String_t* _stringLiteral3564307928;
extern String_t* _stringLiteral1697614252;
extern String_t* _stringLiteral417203670;
extern String_t* _stringLiteral2882831085;
extern String_t* _stringLiteral1283244854;
extern String_t* _stringLiteral2260289627;
extern String_t* _stringLiteral922614677;
extern String_t* _stringLiteral485170879;
extern String_t* _stringLiteral88613354;
extern String_t* _stringLiteral2791739702;
extern String_t* _stringLiteral842113881;
extern String_t* _stringLiteral3335371912;
extern String_t* _stringLiteral3603670260;
extern const uint32_t database_Start_m3293190645_MetadataUsageId;
extern RuntimeClass* SqliteConnection_t3870565407_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3482776685;
extern String_t* _stringLiteral224159198;
extern String_t* _stringLiteral22215158;
extern String_t* _stringLiteral2334747157;
extern const uint32_t database_CreateSchema_m3630400501_MetadataUsageId;
extern RuntimeClass* SqliteParameter_t314071523_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1700619094;
extern String_t* _stringLiteral1487869097;
extern String_t* _stringLiteral63249573;
extern String_t* _stringLiteral1451098921;
extern String_t* _stringLiteral3407414057;
extern String_t* _stringLiteral1068761897;
extern String_t* _stringLiteral3025077033;
extern String_t* _stringLiteral3620046386;
extern const uint32_t database_Insert_Photo_By_URL_m1652390081_MetadataUsageId;
extern String_t* _stringLiteral3735239857;
extern String_t* _stringLiteral62725275;
extern String_t* _stringLiteral2409271600;
extern String_t* _stringLiteral3220737671;
extern String_t* _stringLiteral2562033219;
extern const uint32_t database_InsertMat_Info_m1941889789_MetadataUsageId;
extern String_t* _stringLiteral3421408643;
extern String_t* _stringLiteral3629099586;
extern String_t* _stringLiteral3077300020;
extern String_t* _stringLiteral3075332230;
extern const uint32_t database_InsertMat_Drawer_Pair_m366633393_MetadataUsageId;
extern String_t* _stringLiteral2718088135;
extern String_t* _stringLiteral188910960;
extern String_t* _stringLiteral3279586766;
extern const uint32_t database_Lookup_Drawer_m3676041653_MetadataUsageId;
extern String_t* _stringLiteral1694103759;
extern String_t* _stringLiteral2834521899;
extern String_t* _stringLiteral1750022173;
extern const uint32_t database_Lookup_Mat_m148036058_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern String_t* _stringLiteral2788740427;
extern String_t* _stringLiteral3227435492;
extern String_t* _stringLiteral1615023743;
extern String_t* _stringLiteral3809017321;
extern const uint32_t database_Lookup_URL_m2247219714_MetadataUsageId;
extern String_t* _stringLiteral1150927608;
extern String_t* _stringLiteral3629099554;
extern String_t* _stringLiteral321203952;
extern String_t* _stringLiteral3288959135;
extern const uint32_t database_Get_Description_m2229621183_MetadataUsageId;
extern String_t* _stringLiteral1131764937;
extern const uint32_t database_Get_Image_URL_m4261697933_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m3729392029_RuntimeMethod_var;
extern String_t* _stringLiteral2410385622;
extern const uint32_t database_Insert_Data_m839353478_MetadataUsageId;
extern RuntimeClass* U3Cupload_graphU3Ec__Iterator0_t3978570228_il2cpp_TypeInfo_var;
extern const uint32_t database_upload_graph_m1526148084_MetadataUsageId;
extern RuntimeClass* WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var;
extern RuntimeClass* WWWForm_t4064702195_il2cpp_TypeInfo_var;
extern RuntimeClass* WWW_t3688466362_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral207938285;
extern String_t* _stringLiteral1629333464;
extern String_t* _stringLiteral2045074213;
extern String_t* _stringLiteral1534596270;
extern String_t* _stringLiteral204976784;
extern const uint32_t U3Cupload_graphU3Ec__Iterator0_MoveNext_m196589103_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3Cupload_graphU3Ec__Iterator0_Reset_m602822813_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler__ctor_m2145257936_MetadataUsageId;
extern RuntimeClass* VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3593217305_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2713332384_RuntimeMethod_var;
extern const uint32_t DefaultInitializationErrorHandler_Awake_m1713298888_MetadataUsageId;
extern RuntimeClass* WindowFunction_t3146511083_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_RuntimeMethod_var;
extern const uint32_t DefaultInitializationErrorHandler_OnGUI_m2338842741_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnDestroy_m3668093536_MetadataUsageId;
extern String_t* _stringLiteral2016908147;
extern String_t* _stringLiteral3483484711;
extern const uint32_t DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_MetadataUsageId;
extern RuntimeClass* InitError_t3420749710_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3279329212;
extern String_t* _stringLiteral3325583105;
extern String_t* _stringLiteral1253325676;
extern String_t* _stringLiteral2959890895;
extern String_t* _stringLiteral2293327149;
extern String_t* _stringLiteral2746077084;
extern String_t* _stringLiteral2746058527;
extern String_t* _stringLiteral491174246;
extern String_t* _stringLiteral3183081100;
extern String_t* _stringLiteral868600955;
extern String_t* _stringLiteral3122929577;
extern String_t* _stringLiteral3567432369;
extern String_t* _stringLiteral229317972;
extern String_t* _stringLiteral3452614641;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral2072581803;
extern String_t* _stringLiteral2642543365;
extern String_t* _stringLiteral3752705136;
extern String_t* _stringLiteral3453007782;
extern const uint32_t DefaultInitializationErrorHandler_SetErrorCode_m599033302_MetadataUsageId;
extern RuntimeClass* VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1431967569;
extern String_t* _stringLiteral3797279721;
extern String_t* _stringLiteral1108443480;
extern String_t* _stringLiteral2072975055;
extern String_t* _stringLiteral1498400317;
extern const uint32_t DefaultInitializationErrorHandler_getKeyInfo_m1864640064_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern RuntimeClass* RectOffset_t1369453676_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var;
extern String_t* _stringLiteral2974894664;
extern const uint32_t DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424_MetadataUsageId;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern const uint32_t DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var;
extern const uint32_t DefaultTrackableEventHandler_Start_m796446126_MetadataUsageId;
extern String_t* _stringLiteral3820270571;
extern String_t* _stringLiteral3073488411;
extern String_t* _stringLiteral3483481617;
extern const uint32_t DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingFound_m4202593607_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingLost_m424172778_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2349950_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2593370356_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1313944780_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m643394606_RuntimeMethod_var;
extern const uint32_t DragMe__ctor_m213099560_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* RectTransform_t3704657025_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DragMe_FindInParents_TisCanvas_t3310196443_m2011939038_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3272033541_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m798225041_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisImage_t2670269651_m1594579417_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisCanvasGroup_t4083511760_m2435735462_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m325663497_RuntimeMethod_var;
extern String_t* _stringLiteral416089526;
extern const uint32_t DragMe_OnBeginDrag_m1718647512_MetadataUsageId;
extern const uint32_t DragMe_OnDrag_m3476121208_MetadataUsageId;
extern RuntimeClass* RectTransformUtility_t1743242446_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3108585763_RuntimeMethod_var;
extern const uint32_t DragMe_SetDraggedPosition_m2008884886_MetadataUsageId;
extern const uint32_t DragMe_OnEndDrag_m3338192045_MetadataUsageId;
extern const uint32_t DragPanel_Awake_m1691295277_MetadataUsageId;
extern const uint32_t DragPanel_OnPointerDown_m2387986402_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t DragPanel_OnDrag_m3554559104_MetadataUsageId;
extern const uint32_t DragPanel_ClampToWindow_m1122603434_MetadataUsageId;
extern const uint32_t DropMe_OnEnable_m3547282480_MetadataUsageId;
extern const uint32_t DropMe_OnDrop_m3443959515_MetadataUsageId;
extern const uint32_t DropMe_OnPointerEnter_m2959818878_MetadataUsageId;
extern const uint32_t DropMe_OnPointerExit_m3994401717_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisDragMe_t1855460060_m2149275024_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var;
extern const uint32_t DropMe_GetDropSprite_m4241245197_MetadataUsageId;
extern String_t* _stringLiteral3451500483;
extern const uint32_t Image01Script__ctor_m2334745484_MetadataUsageId;
extern const uint32_t Image01Script_buttonClick_m2724225317_MetadataUsageId;
extern String_t* _stringLiteral3451434947;
extern const uint32_t Image02Script__ctor_m1791749585_MetadataUsageId;
extern const uint32_t Image02Script_buttonClick_m2687317576_MetadataUsageId;
extern String_t* _stringLiteral3451369411;
extern const uint32_t Image03Script__ctor_m1837694578_MetadataUsageId;
extern const uint32_t Image03Script_buttonClick_m4075333831_MetadataUsageId;
extern String_t* _stringLiteral3451303875;
extern const uint32_t Image04Script__ctor_m1168761743_MetadataUsageId;
extern const uint32_t Image04Script_buttonClick_m3712086978_MetadataUsageId;
extern String_t* _stringLiteral3451238339;
extern const uint32_t Image05Script__ctor_m4173960096_MetadataUsageId;
extern const uint32_t Image05Script_buttonClick_m3997986753_MetadataUsageId;
extern RuntimeClass* WebCamTexture_t1514609158_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1787862189;
extern String_t* _stringLiteral1253313187;
extern const uint32_t menuScript_Start_m1157450492_MetadataUsageId;
extern String_t* _stringLiteral3905732978;
extern const uint32_t PanelManager_OnEnable_m713308551_MetadataUsageId;
extern RuntimeClass* EventSystem_t1003666588_il2cpp_TypeInfo_var;
extern const uint32_t PanelManager_OpenPanel_m3662240133_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponentsInChildren_TisSelectable_t3250028441_m1331223003_RuntimeMethod_var;
extern const uint32_t PanelManager_FindFirstEnabledSelectable_m2730067898_MetadataUsageId;
extern const uint32_t PanelManager_CloseCurrent_m345023962_MetadataUsageId;
extern RuntimeClass* U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890_il2cpp_TypeInfo_var;
extern const uint32_t PanelManager_DisablePanelDeleyed_m4002285899_MetadataUsageId;
extern const uint32_t PanelManager_SetSelected_m1638836315_MetadataUsageId;
extern String_t* _stringLiteral3481649703;
extern const uint32_t U3CDisablePanelDeleyedU3Ec__Iterator0_MoveNext_m2344874914_MetadataUsageId;
extern const uint32_t U3CDisablePanelDeleyedU3Ec__Iterator0_Reset_m3020971600_MetadataUsageId;
extern String_t* _stringLiteral3825948899;
extern String_t* _stringLiteral56219663;
extern const uint32_t phoneCamera_Start_m4270680149_MetadataUsageId;
extern const uint32_t phoneCamera_TakePhoto_m2460353388_MetadataUsageId;
extern const uint32_t phoneCamera_FlipTexture_m2327608388_MetadataUsageId;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_Tisdatabase_t2832598855_m1122944689_RuntimeMethod_var;
extern String_t* _stringLiteral2708195106;
extern String_t* _stringLiteral4274279047;
extern String_t* _stringLiteral1545395692;
extern String_t* _stringLiteral3467709993;
extern String_t* _stringLiteral738826638;
extern const uint32_t phoneCamera_submit_m1108475423_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TiswandScript_t1125606077_m2772890611_RuntimeMethod_var;
extern String_t* _stringLiteral3450189712;
extern String_t* _stringLiteral3452614523;
extern String_t* _stringLiteral2242364214;
extern const uint32_t RadialProgressBar_Update_m2238120533_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var;
extern const uint32_t ResizePanel_Awake_m3009818539_MetadataUsageId;
extern const uint32_t ResizePanel_OnPointerDown_m3366400817_MetadataUsageId;
extern const uint32_t ResizePanel_OnDrag_m4061856464_MetadataUsageId;
extern RuntimeClass* Hashtable_t1853889766_il2cpp_TypeInfo_var;
extern const uint32_t Scanning_Start_m452152981_MetadataUsageId;
extern RuntimeClass* ITrackerManager_t607206903_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t93412101_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1546129680_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2812834599_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3743125852_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1750140655_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4179928398_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4286844348_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1341201278_RuntimeMethod_var;
extern String_t* _stringLiteral3524438320;
extern String_t* _stringLiteral29061571;
extern const uint32_t Scanning_Scan_m3132931746_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TiswayFinding_t2735345900_m927213380_RuntimeMethod_var;
extern String_t* _stringLiteral371078329;
extern const uint32_t Scanning_ScanOff_m3523975996_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var;
extern String_t* _stringLiteral598262237;
extern String_t* _stringLiteral1855518568;
extern String_t* _stringLiteral2164346178;
extern String_t* _stringLiteral1452234041;
extern String_t* _stringLiteral3730430119;
extern String_t* _stringLiteral3018317982;
extern String_t* _stringLiteral1357777124;
extern String_t* _stringLiteral2615033455;
extern const uint32_t Scanning_toggleOn_m2982140418_MetadataUsageId;
extern const uint32_t ScrollDetailTexture__ctor_m3705192081_MetadataUsageId;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3886820241;
extern const uint32_t ScrollDetailTexture_OnEnable_m1987362712_MetadataUsageId;
extern const uint32_t ScrollDetailTexture_OnDisable_m79911482_MetadataUsageId;
extern String_t* _stringLiteral3912932732;
extern const uint32_t ScrollDetailTexture_Update_m2053991687_MetadataUsageId;
extern const uint32_t ShowSliderValue_UpdateLabel_m2874180491_MetadataUsageId;
extern const uint32_t TiltWindow__ctor_m1549845387_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t TiltWindow_Update_m2838027175_MetadataUsageId;
extern const uint32_t UICube_Start_m1915831054_MetadataUsageId;
extern const uint32_t UICube_Update_m1624795200_MetadataUsageId;
extern String_t* _stringLiteral3313807377;
extern const uint32_t WandPanelpos_Start_m2832213578_MetadataUsageId;
extern String_t* _stringLiteral1816458849;
extern String_t* _stringLiteral3461181473;
extern String_t* _stringLiteral1895097532;
extern String_t* _stringLiteral329013591;
extern String_t* _stringLiteral3057896946;
extern String_t* _stringLiteral4075094846;
extern const uint32_t wandScript_Start_m2771058127_MetadataUsageId;
extern RuntimeClass* NullReferenceException_t1023182353_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisWandSelection_t972065371_m280005558_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMatImageSc_t920972473_m1982302322_RuntimeMethod_var;
extern String_t* _stringLiteral4204889489;
extern String_t* _stringLiteral4204889486;
extern String_t* _stringLiteral835293501;
extern const uint32_t wandScript_Update_m2714974931_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisRadialProgressBar_t2821283243_m606195954_RuntimeMethod_var;
extern String_t* _stringLiteral1160595072;
extern const uint32_t wandScript_OnTriggerEnter_m4006158908_MetadataUsageId;
extern String_t* _stringLiteral568955277;
extern const uint32_t wandScript_OnTriggerExit_m1309687079_MetadataUsageId;
extern String_t* _stringLiteral1661352404;
extern const uint32_t wandScript_getinfo_m3056267977_MetadataUsageId;
extern RuntimeClass* U3CinfoprocessU3Ec__Iterator0_t196706046_il2cpp_TypeInfo_var;
extern const uint32_t wandScript_infoprocess_m4253497090_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRawImage_t3182918964_m856277241_RuntimeMethod_var;
extern String_t* _stringLiteral2916484413;
extern String_t* _stringLiteral2916025675;
extern String_t* _stringLiteral748256399;
extern String_t* _stringLiteral3137637767;
extern String_t* _stringLiteral1289741697;
extern const uint32_t U3CinfoprocessU3Ec__Iterator0_MoveNext_m2487083052_MetadataUsageId;
extern const uint32_t U3CinfoprocessU3Ec__Iterator0_Reset_m3652318565_MetadataUsageId;
extern const uint32_t WandSelection_Start_m1207540189_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var;
extern String_t* _stringLiteral2220010688;
extern String_t* _stringLiteral2222042304;
extern String_t* _stringLiteral2224336064;
extern const uint32_t WandSelection_Update_m4208196211_MetadataUsageId;
extern const uint32_t wayFinding__ctor_m4203325114_MetadataUsageId;
extern const uint32_t wayFinding_Start_m3959844388_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2270779390;
extern String_t* _stringLiteral2339461447;
extern const uint32_t wayFinding_initSelectedObjTable_m1636343849_MetadataUsageId;
extern RuntimeClass* DictionaryEntry_t3123975638_il2cpp_TypeInfo_var;
extern const uint32_t wayFinding_Highlight_m3273843370_MetadataUsageId;
extern const uint32_t wayFinding_SetMat_m2726953727_MetadataUsageId;
extern const uint32_t wayFinding_getDir_m2911279075_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const uint32_t wayFinding_DrawArrow_m3284252164_MetadataUsageId;
extern const uint32_t wayFinding_TransformArrow_m2453897102_MetadataUsageId;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern const uint32_t wayFinding_ResetTable_m429605708_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisScanning_t651759208_m2415015816_RuntimeMethod_var;
extern const uint32_t wayFinding_startTraveling_m2168396428_MetadataUsageId;
extern const uint32_t wayFinding_exitTraveling_m256940023_MetadataUsageId;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyleState_t1397964415_marshaled_com;
struct RectOffset_t1369453676_marshaled_com;

struct ByteU5BU5D_t4116647657;
struct ObjectU5BU5D_t2843939325;
struct RendererU5BU5D_t3210418286;
struct ColliderU5BU5D_t4234922487;
struct CanvasU5BU5D_t682926938;
struct WebCamDeviceU5BU5D_t4294070825;
struct SelectableU5BU5D_t774044132;
struct ColorU5BU5D_t941916413;
struct MaterialU5BU5D_t561872642;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T692745556_H
#define U3CMODULEU3E_T692745556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745556 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745556_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CINFOPROCESSU3EC__ITERATOR0_T196706046_H
#define U3CINFOPROCESSU3EC__ITERATOR0_T196706046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// wandScript/<infoprocess>c__Iterator0
struct  U3CinfoprocessU3Ec__Iterator0_t196706046  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> wandScript/<infoprocess>c__Iterator0::info
	List_1_t3319525431 * ___info_0;
	// UnityEngine.WWW wandScript/<infoprocess>c__Iterator0::<www>__0
	WWW_t3688466362 * ___U3CwwwU3E__0_1;
	// System.Object wandScript/<infoprocess>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean wandScript/<infoprocess>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 wandScript/<infoprocess>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(U3CinfoprocessU3Ec__Iterator0_t196706046, ___info_0)); }
	inline List_1_t3319525431 * get_info_0() const { return ___info_0; }
	inline List_1_t3319525431 ** get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(List_1_t3319525431 * value)
	{
		___info_0 = value;
		Il2CppCodeGenWriteBarrier((&___info_0), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__0_1() { return static_cast<int32_t>(offsetof(U3CinfoprocessU3Ec__Iterator0_t196706046, ___U3CwwwU3E__0_1)); }
	inline WWW_t3688466362 * get_U3CwwwU3E__0_1() const { return ___U3CwwwU3E__0_1; }
	inline WWW_t3688466362 ** get_address_of_U3CwwwU3E__0_1() { return &___U3CwwwU3E__0_1; }
	inline void set_U3CwwwU3E__0_1(WWW_t3688466362 * value)
	{
		___U3CwwwU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CinfoprocessU3Ec__Iterator0_t196706046, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CinfoprocessU3Ec__Iterator0_t196706046, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CinfoprocessU3Ec__Iterator0_t196706046, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINFOPROCESSU3EC__ITERATOR0_T196706046_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t2994659099* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t385246372* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t1568156503 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t618387445 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t950877179 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___table_4)); }
	inline SlotU5BU5D_t2994659099* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t2994659099** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t2994659099* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashes_5)); }
	inline Int32U5BU5D_t385246372* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t385246372** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t385246372* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashKeys_7)); }
	inline HashKeys_t1568156503 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t1568156503 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t1568156503 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashValues_8)); }
	inline HashValues_t618387445 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t618387445 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t618387445 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___serializationInfo_11)); }
	inline SerializationInfo_t950877179 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t950877179 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t950877179 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t1853889766_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t385246372* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t385246372* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t385246372** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t385246372* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef STATEMANAGER_T1982749557_H
#define STATEMANAGER_T1982749557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StateManager
struct  StateManager_t1982749557  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManager::mTrackableBehaviours
	Dictionary_2_t2272543 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManager::mAutomaticallyCreatedBehaviours
	List_1_t128053199 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mBehavioursMarkedForDeletion
	List_1_t2585633954 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mActiveTrackableBehaviours
	List_1_t2585633954 * ___mActiveTrackableBehaviours_3;
	// Vuforia.WordManager Vuforia.StateManager::mWordManager
	WordManager_t3100853168 * ___mWordManager_4;
	// Vuforia.VuMarkManager Vuforia.StateManager::mVuMarkManager
	VuMarkManager_t2982459596 * ___mVuMarkManager_5;
	// Vuforia.DeviceTrackingManager Vuforia.StateManager::mDeviceTrackingManager
	DeviceTrackingManager_t3849131975 * ___mDeviceTrackingManager_6;
	// UnityEngine.GameObject Vuforia.StateManager::mCameraPositioningHelper
	GameObject_t1113636619 * ___mCameraPositioningHelper_7;
	// Vuforia.IExtendedTrackingManager Vuforia.StateManager::mExtendedTrackingManager
	RuntimeObject* ___mExtendedTrackingManager_8;
	// Vuforia.IlluminationManager Vuforia.StateManager::mIlluminationManager
	IlluminationManager_t3960931838 * ___mIlluminationManager_9;

public:
	inline static int32_t get_offset_of_mTrackableBehaviours_0() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mTrackableBehaviours_0)); }
	inline Dictionary_2_t2272543 * get_mTrackableBehaviours_0() const { return ___mTrackableBehaviours_0; }
	inline Dictionary_2_t2272543 ** get_address_of_mTrackableBehaviours_0() { return &___mTrackableBehaviours_0; }
	inline void set_mTrackableBehaviours_0(Dictionary_2_t2272543 * value)
	{
		___mTrackableBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviours_0), value);
	}

	inline static int32_t get_offset_of_mAutomaticallyCreatedBehaviours_1() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mAutomaticallyCreatedBehaviours_1)); }
	inline List_1_t128053199 * get_mAutomaticallyCreatedBehaviours_1() const { return ___mAutomaticallyCreatedBehaviours_1; }
	inline List_1_t128053199 ** get_address_of_mAutomaticallyCreatedBehaviours_1() { return &___mAutomaticallyCreatedBehaviours_1; }
	inline void set_mAutomaticallyCreatedBehaviours_1(List_1_t128053199 * value)
	{
		___mAutomaticallyCreatedBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier((&___mAutomaticallyCreatedBehaviours_1), value);
	}

	inline static int32_t get_offset_of_mBehavioursMarkedForDeletion_2() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mBehavioursMarkedForDeletion_2)); }
	inline List_1_t2585633954 * get_mBehavioursMarkedForDeletion_2() const { return ___mBehavioursMarkedForDeletion_2; }
	inline List_1_t2585633954 ** get_address_of_mBehavioursMarkedForDeletion_2() { return &___mBehavioursMarkedForDeletion_2; }
	inline void set_mBehavioursMarkedForDeletion_2(List_1_t2585633954 * value)
	{
		___mBehavioursMarkedForDeletion_2 = value;
		Il2CppCodeGenWriteBarrier((&___mBehavioursMarkedForDeletion_2), value);
	}

	inline static int32_t get_offset_of_mActiveTrackableBehaviours_3() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mActiveTrackableBehaviours_3)); }
	inline List_1_t2585633954 * get_mActiveTrackableBehaviours_3() const { return ___mActiveTrackableBehaviours_3; }
	inline List_1_t2585633954 ** get_address_of_mActiveTrackableBehaviours_3() { return &___mActiveTrackableBehaviours_3; }
	inline void set_mActiveTrackableBehaviours_3(List_1_t2585633954 * value)
	{
		___mActiveTrackableBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveTrackableBehaviours_3), value);
	}

	inline static int32_t get_offset_of_mWordManager_4() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mWordManager_4)); }
	inline WordManager_t3100853168 * get_mWordManager_4() const { return ___mWordManager_4; }
	inline WordManager_t3100853168 ** get_address_of_mWordManager_4() { return &___mWordManager_4; }
	inline void set_mWordManager_4(WordManager_t3100853168 * value)
	{
		___mWordManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___mWordManager_4), value);
	}

	inline static int32_t get_offset_of_mVuMarkManager_5() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mVuMarkManager_5)); }
	inline VuMarkManager_t2982459596 * get_mVuMarkManager_5() const { return ___mVuMarkManager_5; }
	inline VuMarkManager_t2982459596 ** get_address_of_mVuMarkManager_5() { return &___mVuMarkManager_5; }
	inline void set_mVuMarkManager_5(VuMarkManager_t2982459596 * value)
	{
		___mVuMarkManager_5 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkManager_5), value);
	}

	inline static int32_t get_offset_of_mDeviceTrackingManager_6() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mDeviceTrackingManager_6)); }
	inline DeviceTrackingManager_t3849131975 * get_mDeviceTrackingManager_6() const { return ___mDeviceTrackingManager_6; }
	inline DeviceTrackingManager_t3849131975 ** get_address_of_mDeviceTrackingManager_6() { return &___mDeviceTrackingManager_6; }
	inline void set_mDeviceTrackingManager_6(DeviceTrackingManager_t3849131975 * value)
	{
		___mDeviceTrackingManager_6 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceTrackingManager_6), value);
	}

	inline static int32_t get_offset_of_mCameraPositioningHelper_7() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mCameraPositioningHelper_7)); }
	inline GameObject_t1113636619 * get_mCameraPositioningHelper_7() const { return ___mCameraPositioningHelper_7; }
	inline GameObject_t1113636619 ** get_address_of_mCameraPositioningHelper_7() { return &___mCameraPositioningHelper_7; }
	inline void set_mCameraPositioningHelper_7(GameObject_t1113636619 * value)
	{
		___mCameraPositioningHelper_7 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraPositioningHelper_7), value);
	}

	inline static int32_t get_offset_of_mExtendedTrackingManager_8() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mExtendedTrackingManager_8)); }
	inline RuntimeObject* get_mExtendedTrackingManager_8() const { return ___mExtendedTrackingManager_8; }
	inline RuntimeObject** get_address_of_mExtendedTrackingManager_8() { return &___mExtendedTrackingManager_8; }
	inline void set_mExtendedTrackingManager_8(RuntimeObject* value)
	{
		___mExtendedTrackingManager_8 = value;
		Il2CppCodeGenWriteBarrier((&___mExtendedTrackingManager_8), value);
	}

	inline static int32_t get_offset_of_mIlluminationManager_9() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mIlluminationManager_9)); }
	inline IlluminationManager_t3960931838 * get_mIlluminationManager_9() const { return ___mIlluminationManager_9; }
	inline IlluminationManager_t3960931838 ** get_address_of_mIlluminationManager_9() { return &___mIlluminationManager_9; }
	inline void set_mIlluminationManager_9(IlluminationManager_t3960931838 * value)
	{
		___mIlluminationManager_9 = value;
		Il2CppCodeGenWriteBarrier((&___mIlluminationManager_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMANAGER_T1982749557_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef WWWFORM_T4064702195_H
#define WWWFORM_T4064702195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWForm
struct  WWWForm_t4064702195  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t1293755103 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t3319525431 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t3319525431 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t3319525431 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t4116647657* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___formData_0)); }
	inline List_1_t1293755103 * get_formData_0() const { return ___formData_0; }
	inline List_1_t1293755103 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t1293755103 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((&___formData_0), value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fieldNames_1)); }
	inline List_1_t3319525431 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t3319525431 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t3319525431 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___fieldNames_1), value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fileNames_2)); }
	inline List_1_t3319525431 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t3319525431 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t3319525431 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___fileNames_2), value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___types_3)); }
	inline List_1_t3319525431 * get_types_3() const { return ___types_3; }
	inline List_1_t3319525431 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t3319525431 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((&___types_3), value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___boundary_4)); }
	inline ByteU5BU5D_t4116647657* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_t4116647657* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORM_T4064702195_H
#ifndef U3CUPLOAD_GRAPHU3EC__ITERATOR0_T3978570228_H
#define U3CUPLOAD_GRAPHU3EC__ITERATOR0_T3978570228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// database/<upload_graph>c__Iterator0
struct  U3Cupload_graphU3Ec__Iterator0_t3978570228  : public RuntimeObject
{
public:
	// System.Int32 database/<upload_graph>c__Iterator0::<width>__0
	int32_t ___U3CwidthU3E__0_0;
	// System.Int32 database/<upload_graph>c__Iterator0::<height>__0
	int32_t ___U3CheightU3E__0_1;
	// UnityEngine.Texture2D database/<upload_graph>c__Iterator0::tex
	Texture2D_t3840446185 * ___tex_2;
	// System.Byte[] database/<upload_graph>c__Iterator0::<bytes>__0
	ByteU5BU5D_t4116647657* ___U3CbytesU3E__0_3;
	// UnityEngine.WWWForm database/<upload_graph>c__Iterator0::<form>__0
	WWWForm_t4064702195 * ___U3CformU3E__0_4;
	// System.String database/<upload_graph>c__Iterator0::upload_name
	String_t* ___upload_name_5;
	// System.String database/<upload_graph>c__Iterator0::<screenShotURL>__0
	String_t* ___U3CscreenShotURLU3E__0_6;
	// UnityEngine.WWW database/<upload_graph>c__Iterator0::<w>__0
	WWW_t3688466362 * ___U3CwU3E__0_7;
	// System.Object database/<upload_graph>c__Iterator0::$current
	RuntimeObject * ___U24current_8;
	// System.Boolean database/<upload_graph>c__Iterator0::$disposing
	bool ___U24disposing_9;
	// System.Int32 database/<upload_graph>c__Iterator0::$PC
	int32_t ___U24PC_10;

public:
	inline static int32_t get_offset_of_U3CwidthU3E__0_0() { return static_cast<int32_t>(offsetof(U3Cupload_graphU3Ec__Iterator0_t3978570228, ___U3CwidthU3E__0_0)); }
	inline int32_t get_U3CwidthU3E__0_0() const { return ___U3CwidthU3E__0_0; }
	inline int32_t* get_address_of_U3CwidthU3E__0_0() { return &___U3CwidthU3E__0_0; }
	inline void set_U3CwidthU3E__0_0(int32_t value)
	{
		___U3CwidthU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3E__0_1() { return static_cast<int32_t>(offsetof(U3Cupload_graphU3Ec__Iterator0_t3978570228, ___U3CheightU3E__0_1)); }
	inline int32_t get_U3CheightU3E__0_1() const { return ___U3CheightU3E__0_1; }
	inline int32_t* get_address_of_U3CheightU3E__0_1() { return &___U3CheightU3E__0_1; }
	inline void set_U3CheightU3E__0_1(int32_t value)
	{
		___U3CheightU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_tex_2() { return static_cast<int32_t>(offsetof(U3Cupload_graphU3Ec__Iterator0_t3978570228, ___tex_2)); }
	inline Texture2D_t3840446185 * get_tex_2() const { return ___tex_2; }
	inline Texture2D_t3840446185 ** get_address_of_tex_2() { return &___tex_2; }
	inline void set_tex_2(Texture2D_t3840446185 * value)
	{
		___tex_2 = value;
		Il2CppCodeGenWriteBarrier((&___tex_2), value);
	}

	inline static int32_t get_offset_of_U3CbytesU3E__0_3() { return static_cast<int32_t>(offsetof(U3Cupload_graphU3Ec__Iterator0_t3978570228, ___U3CbytesU3E__0_3)); }
	inline ByteU5BU5D_t4116647657* get_U3CbytesU3E__0_3() const { return ___U3CbytesU3E__0_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CbytesU3E__0_3() { return &___U3CbytesU3E__0_3; }
	inline void set_U3CbytesU3E__0_3(ByteU5BU5D_t4116647657* value)
	{
		___U3CbytesU3E__0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CbytesU3E__0_3), value);
	}

	inline static int32_t get_offset_of_U3CformU3E__0_4() { return static_cast<int32_t>(offsetof(U3Cupload_graphU3Ec__Iterator0_t3978570228, ___U3CformU3E__0_4)); }
	inline WWWForm_t4064702195 * get_U3CformU3E__0_4() const { return ___U3CformU3E__0_4; }
	inline WWWForm_t4064702195 ** get_address_of_U3CformU3E__0_4() { return &___U3CformU3E__0_4; }
	inline void set_U3CformU3E__0_4(WWWForm_t4064702195 * value)
	{
		___U3CformU3E__0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CformU3E__0_4), value);
	}

	inline static int32_t get_offset_of_upload_name_5() { return static_cast<int32_t>(offsetof(U3Cupload_graphU3Ec__Iterator0_t3978570228, ___upload_name_5)); }
	inline String_t* get_upload_name_5() const { return ___upload_name_5; }
	inline String_t** get_address_of_upload_name_5() { return &___upload_name_5; }
	inline void set_upload_name_5(String_t* value)
	{
		___upload_name_5 = value;
		Il2CppCodeGenWriteBarrier((&___upload_name_5), value);
	}

	inline static int32_t get_offset_of_U3CscreenShotURLU3E__0_6() { return static_cast<int32_t>(offsetof(U3Cupload_graphU3Ec__Iterator0_t3978570228, ___U3CscreenShotURLU3E__0_6)); }
	inline String_t* get_U3CscreenShotURLU3E__0_6() const { return ___U3CscreenShotURLU3E__0_6; }
	inline String_t** get_address_of_U3CscreenShotURLU3E__0_6() { return &___U3CscreenShotURLU3E__0_6; }
	inline void set_U3CscreenShotURLU3E__0_6(String_t* value)
	{
		___U3CscreenShotURLU3E__0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CscreenShotURLU3E__0_6), value);
	}

	inline static int32_t get_offset_of_U3CwU3E__0_7() { return static_cast<int32_t>(offsetof(U3Cupload_graphU3Ec__Iterator0_t3978570228, ___U3CwU3E__0_7)); }
	inline WWW_t3688466362 * get_U3CwU3E__0_7() const { return ___U3CwU3E__0_7; }
	inline WWW_t3688466362 ** get_address_of_U3CwU3E__0_7() { return &___U3CwU3E__0_7; }
	inline void set_U3CwU3E__0_7(WWW_t3688466362 * value)
	{
		___U3CwU3E__0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwU3E__0_7), value);
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3Cupload_graphU3Ec__Iterator0_t3978570228, ___U24current_8)); }
	inline RuntimeObject * get_U24current_8() const { return ___U24current_8; }
	inline RuntimeObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(RuntimeObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_8), value);
	}

	inline static int32_t get_offset_of_U24disposing_9() { return static_cast<int32_t>(offsetof(U3Cupload_graphU3Ec__Iterator0_t3978570228, ___U24disposing_9)); }
	inline bool get_U24disposing_9() const { return ___U24disposing_9; }
	inline bool* get_address_of_U24disposing_9() { return &___U24disposing_9; }
	inline void set_U24disposing_9(bool value)
	{
		___U24disposing_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3Cupload_graphU3Ec__Iterator0_t3978570228, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUPLOAD_GRAPHU3EC__ITERATOR0_T3978570228_H
#ifndef DICTIONARY_2_T2593370356_H
#define DICTIONARY_2_T2593370356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RectTransform>
struct  Dictionary_2_t2593370356  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	RectTransformU5BU5D_t107129948* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2593370356, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2593370356, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2593370356, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2593370356, ___valueSlots_7)); }
	inline RectTransformU5BU5D_t107129948* get_valueSlots_7() const { return ___valueSlots_7; }
	inline RectTransformU5BU5D_t107129948** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(RectTransformU5BU5D_t107129948* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2593370356, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2593370356, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2593370356, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2593370356, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2593370356, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2593370356, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2593370356, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2593370356_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4006436088 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2593370356_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4006436088 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4006436088 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4006436088 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2593370356_H
#ifndef DICTIONARY_2_T2349950_H
#define DICTIONARY_2_T2349950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct  Dictionary_2_t2349950  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	GameObjectU5BU5D_t3328599146* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2349950, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2349950, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2349950, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2349950, ___valueSlots_7)); }
	inline GameObjectU5BU5D_t3328599146* get_valueSlots_7() const { return ___valueSlots_7; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(GameObjectU5BU5D_t3328599146* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2349950, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2349950, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2349950, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2349950, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2349950, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2349950, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2349950, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2349950_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2932937990 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2349950_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2932937990 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2932937990 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2932937990 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2349950_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef U3CDISABLEPANELDELEYEDU3EC__ITERATOR0_T1057847890_H
#define U3CDISABLEPANELDELEYEDU3EC__ITERATOR0_T1057847890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelManager/<DisablePanelDeleyed>c__Iterator0
struct  U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890  : public RuntimeObject
{
public:
	// System.Boolean PanelManager/<DisablePanelDeleyed>c__Iterator0::<closedStateReached>__0
	bool ___U3CclosedStateReachedU3E__0_0;
	// System.Boolean PanelManager/<DisablePanelDeleyed>c__Iterator0::<wantToClose>__0
	bool ___U3CwantToCloseU3E__0_1;
	// UnityEngine.Animator PanelManager/<DisablePanelDeleyed>c__Iterator0::anim
	Animator_t434523843 * ___anim_2;
	// PanelManager PanelManager/<DisablePanelDeleyed>c__Iterator0::$this
	PanelManager_t438216159 * ___U24this_3;
	// System.Object PanelManager/<DisablePanelDeleyed>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean PanelManager/<DisablePanelDeleyed>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 PanelManager/<DisablePanelDeleyed>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CclosedStateReachedU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890, ___U3CclosedStateReachedU3E__0_0)); }
	inline bool get_U3CclosedStateReachedU3E__0_0() const { return ___U3CclosedStateReachedU3E__0_0; }
	inline bool* get_address_of_U3CclosedStateReachedU3E__0_0() { return &___U3CclosedStateReachedU3E__0_0; }
	inline void set_U3CclosedStateReachedU3E__0_0(bool value)
	{
		___U3CclosedStateReachedU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CwantToCloseU3E__0_1() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890, ___U3CwantToCloseU3E__0_1)); }
	inline bool get_U3CwantToCloseU3E__0_1() const { return ___U3CwantToCloseU3E__0_1; }
	inline bool* get_address_of_U3CwantToCloseU3E__0_1() { return &___U3CwantToCloseU3E__0_1; }
	inline void set_U3CwantToCloseU3E__0_1(bool value)
	{
		___U3CwantToCloseU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890, ___anim_2)); }
	inline Animator_t434523843 * get_anim_2() const { return ___anim_2; }
	inline Animator_t434523843 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t434523843 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier((&___anim_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890, ___U24this_3)); }
	inline PanelManager_t438216159 * get_U24this_3() const { return ___U24this_3; }
	inline PanelManager_t438216159 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(PanelManager_t438216159 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDISABLEPANELDELEYEDU3EC__ITERATOR0_T1057847890_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef WWW_T3688466362_H
#define WWW_T3688466362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWW
struct  WWW_t3688466362  : public CustomYieldInstruction_t1895667560
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t463507806 * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_t3688466362, ____uwr_0)); }
	inline UnityWebRequest_t463507806 * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_t463507806 ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_t463507806 * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((&____uwr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWW_T3688466362_H
#ifndef WAITFORENDOFFRAME_T1314943911_H
#define WAITFORENDOFFRAME_T1314943911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t1314943911  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T1314943911_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef ENUMERATOR_T179987942_H
#define ENUMERATOR_T179987942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct  Enumerator_t179987942 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2585711361 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_t1113636619 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___l_0)); }
	inline List_1_t2585711361 * get_l_0() const { return ___l_0; }
	inline List_1_t2585711361 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2585711361 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___current_3)); }
	inline GameObject_t1113636619 * get_current_3() const { return ___current_3; }
	inline GameObject_t1113636619 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_t1113636619 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T179987942_H
#ifndef ANIMATORSTATEINFO_T509032636_H
#define ANIMATORSTATEINFO_T509032636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t509032636 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T509032636_H
#ifndef DICTIONARYENTRY_T3123975638_H
#define DICTIONARYENTRY_T3123975638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t3123975638 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T3123975638_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef COMPONENT_T3620823400_H
#define COMPONENT_T3620823400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t3620823400  : public MarshalByRefObject_t2760389100
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t1108123056 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___event_handlers_1)); }
	inline EventHandlerList_t1108123056 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t1108123056 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t1108123056 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3620823400_H
#ifndef WEBCAMDEVICE_T1322781432_H
#define WEBCAMDEVICE_T1322781432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamDevice
struct  WebCamDevice_t1322781432 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Flags_1() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Flags_1)); }
	inline int32_t get_m_Flags_1() const { return ___m_Flags_1; }
	inline int32_t* get_address_of_m_Flags_1() { return &___m_Flags_1; }
	inline void set_m_Flags_1(int32_t value)
	{
		___m_Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Flags_1;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Flags_1;
};
#endif // WEBCAMDEVICE_T1322781432_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef ENUMERATOR_T913802012_H
#define ENUMERATOR_T913802012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_t913802012 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3319525431 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___l_0)); }
	inline List_1_t3319525431 * get_l_0() const { return ___l_0; }
	inline List_1_t3319525431 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3319525431 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T913802012_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef DBPARAMETER_T3789779732_H
#define DBPARAMETER_T3789779732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameter
struct  DbParameter_t3789779732  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETER_T3789779732_H
#ifndef DBPARAMETERCOLLECTION_T2951779354_H
#define DBPARAMETERCOLLECTION_T2951779354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameterCollection
struct  DbParameterCollection_t2951779354  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETERCOLLECTION_T2951779354_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef DBDATAREADER_T1623509450_H
#define DBDATAREADER_T1623509450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataReader
struct  DbDataReader_t1623509450  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBDATAREADER_T1623509450_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef TOGGLETRANSITION_T3587297765_H
#define TOGGLETRANSITION_T3587297765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle/ToggleTransition
struct  ToggleTransition_t3587297765 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ToggleTransition_t3587297765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLETRANSITION_T3587297765_H
#ifndef ISOLATIONLEVEL_T3069690175_H
#define ISOLATIONLEVEL_T3069690175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.IsolationLevel
struct  IsolationLevel_t3069690175 
{
public:
	// System.Int32 System.Data.IsolationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IsolationLevel_t3069690175, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATIONLEVEL_T3069690175_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef UPDATEROWSOURCE_T2047423930_H
#define UPDATEROWSOURCE_T2047423930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.UpdateRowSource
struct  UpdateRowSource_t2047423930 
{
public:
	// System.Int32 System.Data.UpdateRowSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UpdateRowSource_t2047423930, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEROWSOURCE_T2047423930_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADIRECTION_T637748435_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef COMMANDBEHAVIOR_T1478218036_H
#define COMMANDBEHAVIOR_T1478218036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.CommandBehavior
struct  CommandBehavior_t1478218036 
{
public:
	// System.Int32 System.Data.CommandBehavior::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CommandBehavior_t1478218036, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDBEHAVIOR_T1478218036_H
#ifndef CONNECTIONSTATE_T3885229639_H
#define CONNECTIONSTATE_T3885229639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConnectionState
struct  ConnectionState_t3885229639 
{
public:
	// System.Int32 System.Data.ConnectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectionState_t3885229639, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONSTATE_T3885229639_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T4250555765_H
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
#ifndef ASPECTMODE_T3417192999_H
#define ASPECTMODE_T3417192999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.AspectRatioFitter/AspectMode
struct  AspectMode_t3417192999 
{
public:
	// System.Int32 UnityEngine.UI.AspectRatioFitter/AspectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AspectMode_t3417192999, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASPECTMODE_T3417192999_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTBUTTON_T3704011348_H
#ifndef DATAROWVERSION_T3777956179_H
#define DATAROWVERSION_T3777956179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowVersion
struct  DataRowVersion_t3777956179 
{
public:
	// System.Int32 System.Data.DataRowVersion::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowVersion_t3777956179, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWVERSION_T3777956179_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T1100905814_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef SQLITEPARAMETERCOLLECTION_T2576174450_H
#define SQLITEPARAMETERCOLLECTION_T2576174450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteParameterCollection
struct  SqliteParameterCollection_t2576174450  : public DbParameterCollection_t2951779354
{
public:
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteParameterCollection::_command
	SqliteCommand_t3916884476 * ____command_1;
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter> Mono.Data.Sqlite.SqliteParameterCollection::_parameterList
	List_1_t1786146265 * ____parameterList_2;
	// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::_unboundFlag
	bool ____unboundFlag_3;

public:
	inline static int32_t get_offset_of__command_1() { return static_cast<int32_t>(offsetof(SqliteParameterCollection_t2576174450, ____command_1)); }
	inline SqliteCommand_t3916884476 * get__command_1() const { return ____command_1; }
	inline SqliteCommand_t3916884476 ** get_address_of__command_1() { return &____command_1; }
	inline void set__command_1(SqliteCommand_t3916884476 * value)
	{
		____command_1 = value;
		Il2CppCodeGenWriteBarrier((&____command_1), value);
	}

	inline static int32_t get_offset_of__parameterList_2() { return static_cast<int32_t>(offsetof(SqliteParameterCollection_t2576174450, ____parameterList_2)); }
	inline List_1_t1786146265 * get__parameterList_2() const { return ____parameterList_2; }
	inline List_1_t1786146265 ** get_address_of__parameterList_2() { return &____parameterList_2; }
	inline void set__parameterList_2(List_1_t1786146265 * value)
	{
		____parameterList_2 = value;
		Il2CppCodeGenWriteBarrier((&____parameterList_2), value);
	}

	inline static int32_t get_offset_of__unboundFlag_3() { return static_cast<int32_t>(offsetof(SqliteParameterCollection_t2576174450, ____unboundFlag_3)); }
	inline bool get__unboundFlag_3() const { return ____unboundFlag_3; }
	inline bool* get_address_of__unboundFlag_3() { return &____unboundFlag_3; }
	inline void set__unboundFlag_3(bool value)
	{
		____unboundFlag_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEPARAMETERCOLLECTION_T2576174450_H
#ifndef COMMANDTYPE_T755427385_H
#define COMMANDTYPE_T755427385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.CommandType
struct  CommandType_t755427385 
{
public:
	// System.Int32 System.Data.CommandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CommandType_t755427385, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDTYPE_T755427385_H
#ifndef DBCOMMAND_T187824494_H
#define DBCOMMAND_T187824494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbCommand
struct  DbCommand_t187824494  : public Component_t3620823400
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCOMMAND_T187824494_H
#ifndef DBCONNECTION_T1716984062_H
#define DBCONNECTION_T1716984062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbConnection
struct  DbConnection_t1716984062  : public Component_t3620823400
{
public:

public:
};

struct DbConnection_t1716984062_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Data.Common.DbConnection::<>f__switch$map1
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_4() { return static_cast<int32_t>(offsetof(DbConnection_t1716984062_StaticFields, ___U3CU3Ef__switchU24map1_4)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1_4() const { return ___U3CU3Ef__switchU24map1_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1_4() { return &___U3CU3Ef__switchU24map1_4; }
	inline void set_U3CU3Ef__switchU24map1_4(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCONNECTION_T1716984062_H
#ifndef INITERROR_T3420749710_H
#define INITERROR_T3420749710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t3420749710 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitError_t3420749710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITERROR_T3420749710_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t3840446185 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Background_2)); }
	inline Texture2D_t3840446185 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t3840446185 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t3840446185 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Background_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T2035777396_H
#ifndef FONT_T1956802104_H
#define FONT_T1956802104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1956802104  : public Object_t631007953
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2467502454 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t1956802104, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t2467502454 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t2467502454 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t2467502454 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_3), value);
	}
};

struct Font_t1956802104_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2129269699 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t1956802104_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t2129269699 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t2129269699 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t2129269699 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1956802104_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef SQLITEPARAMETER_T314071523_H
#define SQLITEPARAMETER_T314071523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteParameter
struct  SqliteParameter_t314071523  : public DbParameter_t3789779732
{
public:
	// System.Int32 Mono.Data.Sqlite.SqliteParameter::_dbType
	int32_t ____dbType_1;
	// System.Data.DataRowVersion Mono.Data.Sqlite.SqliteParameter::_rowVersion
	int32_t ____rowVersion_2;
	// System.Object Mono.Data.Sqlite.SqliteParameter::_objValue
	RuntimeObject * ____objValue_3;
	// System.String Mono.Data.Sqlite.SqliteParameter::_sourceColumn
	String_t* ____sourceColumn_4;
	// System.String Mono.Data.Sqlite.SqliteParameter::_parameterName
	String_t* ____parameterName_5;
	// System.Int32 Mono.Data.Sqlite.SqliteParameter::_dataSize
	int32_t ____dataSize_6;
	// System.Boolean Mono.Data.Sqlite.SqliteParameter::_nullable
	bool ____nullable_7;
	// System.Boolean Mono.Data.Sqlite.SqliteParameter::_nullMapping
	bool ____nullMapping_8;

public:
	inline static int32_t get_offset_of__dbType_1() { return static_cast<int32_t>(offsetof(SqliteParameter_t314071523, ____dbType_1)); }
	inline int32_t get__dbType_1() const { return ____dbType_1; }
	inline int32_t* get_address_of__dbType_1() { return &____dbType_1; }
	inline void set__dbType_1(int32_t value)
	{
		____dbType_1 = value;
	}

	inline static int32_t get_offset_of__rowVersion_2() { return static_cast<int32_t>(offsetof(SqliteParameter_t314071523, ____rowVersion_2)); }
	inline int32_t get__rowVersion_2() const { return ____rowVersion_2; }
	inline int32_t* get_address_of__rowVersion_2() { return &____rowVersion_2; }
	inline void set__rowVersion_2(int32_t value)
	{
		____rowVersion_2 = value;
	}

	inline static int32_t get_offset_of__objValue_3() { return static_cast<int32_t>(offsetof(SqliteParameter_t314071523, ____objValue_3)); }
	inline RuntimeObject * get__objValue_3() const { return ____objValue_3; }
	inline RuntimeObject ** get_address_of__objValue_3() { return &____objValue_3; }
	inline void set__objValue_3(RuntimeObject * value)
	{
		____objValue_3 = value;
		Il2CppCodeGenWriteBarrier((&____objValue_3), value);
	}

	inline static int32_t get_offset_of__sourceColumn_4() { return static_cast<int32_t>(offsetof(SqliteParameter_t314071523, ____sourceColumn_4)); }
	inline String_t* get__sourceColumn_4() const { return ____sourceColumn_4; }
	inline String_t** get_address_of__sourceColumn_4() { return &____sourceColumn_4; }
	inline void set__sourceColumn_4(String_t* value)
	{
		____sourceColumn_4 = value;
		Il2CppCodeGenWriteBarrier((&____sourceColumn_4), value);
	}

	inline static int32_t get_offset_of__parameterName_5() { return static_cast<int32_t>(offsetof(SqliteParameter_t314071523, ____parameterName_5)); }
	inline String_t* get__parameterName_5() const { return ____parameterName_5; }
	inline String_t** get_address_of__parameterName_5() { return &____parameterName_5; }
	inline void set__parameterName_5(String_t* value)
	{
		____parameterName_5 = value;
		Il2CppCodeGenWriteBarrier((&____parameterName_5), value);
	}

	inline static int32_t get_offset_of__dataSize_6() { return static_cast<int32_t>(offsetof(SqliteParameter_t314071523, ____dataSize_6)); }
	inline int32_t get__dataSize_6() const { return ____dataSize_6; }
	inline int32_t* get_address_of__dataSize_6() { return &____dataSize_6; }
	inline void set__dataSize_6(int32_t value)
	{
		____dataSize_6 = value;
	}

	inline static int32_t get_offset_of__nullable_7() { return static_cast<int32_t>(offsetof(SqliteParameter_t314071523, ____nullable_7)); }
	inline bool get__nullable_7() const { return ____nullable_7; }
	inline bool* get_address_of__nullable_7() { return &____nullable_7; }
	inline void set__nullable_7(bool value)
	{
		____nullable_7 = value;
	}

	inline static int32_t get_offset_of__nullMapping_8() { return static_cast<int32_t>(offsetof(SqliteParameter_t314071523, ____nullMapping_8)); }
	inline bool get__nullMapping_8() const { return ____nullMapping_8; }
	inline bool* get_address_of__nullMapping_8() { return &____nullMapping_8; }
	inline void set__nullMapping_8(bool value)
	{
		____nullMapping_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEPARAMETER_T314071523_H
#ifndef GENERICVUFORIACONFIGURATION_T3697830469_H
#define GENERICVUFORIACONFIGURATION_T3697830469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t3697830469  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_1;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_2;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_3;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_4;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_5;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_6;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_7;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDirection
	int32_t ___cameraDirection_8;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::mirrorVideoBackground
	int32_t ___mirrorVideoBackground_9;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___vuforiaLicenseKey_1)); }
	inline String_t* get_vuforiaLicenseKey_1() const { return ___vuforiaLicenseKey_1; }
	inline String_t** get_address_of_vuforiaLicenseKey_1() { return &___vuforiaLicenseKey_1; }
	inline void set_vuforiaLicenseKey_1(String_t* value)
	{
		___vuforiaLicenseKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___vuforiaLicenseKey_1), value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___ufoLicenseKey_2)); }
	inline String_t* get_ufoLicenseKey_2() const { return ___ufoLicenseKey_2; }
	inline String_t** get_address_of_ufoLicenseKey_2() { return &___ufoLicenseKey_2; }
	inline void set_ufoLicenseKey_2(String_t* value)
	{
		___ufoLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___ufoLicenseKey_2), value);
	}

	inline static int32_t get_offset_of_delayedInitialization_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___delayedInitialization_3)); }
	inline bool get_delayedInitialization_3() const { return ___delayedInitialization_3; }
	inline bool* get_address_of_delayedInitialization_3() { return &___delayedInitialization_3; }
	inline void set_delayedInitialization_3(bool value)
	{
		___delayedInitialization_3 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDeviceModeSetting_4)); }
	inline int32_t get_cameraDeviceModeSetting_4() const { return ___cameraDeviceModeSetting_4; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_4() { return &___cameraDeviceModeSetting_4; }
	inline void set_cameraDeviceModeSetting_4(int32_t value)
	{
		___cameraDeviceModeSetting_4 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousImageTargets_5)); }
	inline int32_t get_maxSimultaneousImageTargets_5() const { return ___maxSimultaneousImageTargets_5; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_5() { return &___maxSimultaneousImageTargets_5; }
	inline void set_maxSimultaneousImageTargets_5(int32_t value)
	{
		___maxSimultaneousImageTargets_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousObjectTargets_6)); }
	inline int32_t get_maxSimultaneousObjectTargets_6() const { return ___maxSimultaneousObjectTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_6() { return &___maxSimultaneousObjectTargets_6; }
	inline void set_maxSimultaneousObjectTargets_6(int32_t value)
	{
		___maxSimultaneousObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___useDelayedLoadingObjectTargets_7)); }
	inline bool get_useDelayedLoadingObjectTargets_7() const { return ___useDelayedLoadingObjectTargets_7; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_7() { return &___useDelayedLoadingObjectTargets_7; }
	inline void set_useDelayedLoadingObjectTargets_7(bool value)
	{
		___useDelayedLoadingObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_cameraDirection_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDirection_8)); }
	inline int32_t get_cameraDirection_8() const { return ___cameraDirection_8; }
	inline int32_t* get_address_of_cameraDirection_8() { return &___cameraDirection_8; }
	inline void set_cameraDirection_8(int32_t value)
	{
		___cameraDirection_8 = value;
	}

	inline static int32_t get_offset_of_mirrorVideoBackground_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___mirrorVideoBackground_9)); }
	inline int32_t get_mirrorVideoBackground_9() const { return ___mirrorVideoBackground_9; }
	inline int32_t* get_address_of_mirrorVideoBackground_9() { return &___mirrorVideoBackground_9; }
	inline void set_mirrorVideoBackground_9(int32_t value)
	{
		___mirrorVideoBackground_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICVUFORIACONFIGURATION_T3697830469_H
#ifndef SQLITEDATAREADER_T2933346592_H
#define SQLITEDATAREADER_T2933346592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteDataReader
struct  SqliteDataReader_t2933346592  : public DbDataReader_t1623509450
{
public:
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteDataReader::_command
	SqliteCommand_t3916884476 * ____command_1;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_activeStatementIndex
	int32_t ____activeStatementIndex_2;
	// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SqliteDataReader::_activeStatement
	SqliteStatement_t1470694543 * ____activeStatement_3;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_readingState
	int32_t ____readingState_4;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_rowsAffected
	int32_t ____rowsAffected_5;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_fieldCount
	int32_t ____fieldCount_6;
	// Mono.Data.Sqlite.SQLiteType[] Mono.Data.Sqlite.SqliteDataReader::_fieldTypeArray
	SQLiteTypeU5BU5D_t2470409038* ____fieldTypeArray_7;
	// System.Data.CommandBehavior Mono.Data.Sqlite.SqliteDataReader::_commandBehavior
	int32_t ____commandBehavior_8;
	// System.Boolean Mono.Data.Sqlite.SqliteDataReader::_disposeCommand
	bool ____disposeCommand_9;
	// Mono.Data.Sqlite.SqliteKeyReader Mono.Data.Sqlite.SqliteDataReader::_keyInfo
	SqliteKeyReader_t2457387554 * ____keyInfo_10;
	// System.Int64 Mono.Data.Sqlite.SqliteDataReader::_version
	int64_t ____version_11;

public:
	inline static int32_t get_offset_of__command_1() { return static_cast<int32_t>(offsetof(SqliteDataReader_t2933346592, ____command_1)); }
	inline SqliteCommand_t3916884476 * get__command_1() const { return ____command_1; }
	inline SqliteCommand_t3916884476 ** get_address_of__command_1() { return &____command_1; }
	inline void set__command_1(SqliteCommand_t3916884476 * value)
	{
		____command_1 = value;
		Il2CppCodeGenWriteBarrier((&____command_1), value);
	}

	inline static int32_t get_offset_of__activeStatementIndex_2() { return static_cast<int32_t>(offsetof(SqliteDataReader_t2933346592, ____activeStatementIndex_2)); }
	inline int32_t get__activeStatementIndex_2() const { return ____activeStatementIndex_2; }
	inline int32_t* get_address_of__activeStatementIndex_2() { return &____activeStatementIndex_2; }
	inline void set__activeStatementIndex_2(int32_t value)
	{
		____activeStatementIndex_2 = value;
	}

	inline static int32_t get_offset_of__activeStatement_3() { return static_cast<int32_t>(offsetof(SqliteDataReader_t2933346592, ____activeStatement_3)); }
	inline SqliteStatement_t1470694543 * get__activeStatement_3() const { return ____activeStatement_3; }
	inline SqliteStatement_t1470694543 ** get_address_of__activeStatement_3() { return &____activeStatement_3; }
	inline void set__activeStatement_3(SqliteStatement_t1470694543 * value)
	{
		____activeStatement_3 = value;
		Il2CppCodeGenWriteBarrier((&____activeStatement_3), value);
	}

	inline static int32_t get_offset_of__readingState_4() { return static_cast<int32_t>(offsetof(SqliteDataReader_t2933346592, ____readingState_4)); }
	inline int32_t get__readingState_4() const { return ____readingState_4; }
	inline int32_t* get_address_of__readingState_4() { return &____readingState_4; }
	inline void set__readingState_4(int32_t value)
	{
		____readingState_4 = value;
	}

	inline static int32_t get_offset_of__rowsAffected_5() { return static_cast<int32_t>(offsetof(SqliteDataReader_t2933346592, ____rowsAffected_5)); }
	inline int32_t get__rowsAffected_5() const { return ____rowsAffected_5; }
	inline int32_t* get_address_of__rowsAffected_5() { return &____rowsAffected_5; }
	inline void set__rowsAffected_5(int32_t value)
	{
		____rowsAffected_5 = value;
	}

	inline static int32_t get_offset_of__fieldCount_6() { return static_cast<int32_t>(offsetof(SqliteDataReader_t2933346592, ____fieldCount_6)); }
	inline int32_t get__fieldCount_6() const { return ____fieldCount_6; }
	inline int32_t* get_address_of__fieldCount_6() { return &____fieldCount_6; }
	inline void set__fieldCount_6(int32_t value)
	{
		____fieldCount_6 = value;
	}

	inline static int32_t get_offset_of__fieldTypeArray_7() { return static_cast<int32_t>(offsetof(SqliteDataReader_t2933346592, ____fieldTypeArray_7)); }
	inline SQLiteTypeU5BU5D_t2470409038* get__fieldTypeArray_7() const { return ____fieldTypeArray_7; }
	inline SQLiteTypeU5BU5D_t2470409038** get_address_of__fieldTypeArray_7() { return &____fieldTypeArray_7; }
	inline void set__fieldTypeArray_7(SQLiteTypeU5BU5D_t2470409038* value)
	{
		____fieldTypeArray_7 = value;
		Il2CppCodeGenWriteBarrier((&____fieldTypeArray_7), value);
	}

	inline static int32_t get_offset_of__commandBehavior_8() { return static_cast<int32_t>(offsetof(SqliteDataReader_t2933346592, ____commandBehavior_8)); }
	inline int32_t get__commandBehavior_8() const { return ____commandBehavior_8; }
	inline int32_t* get_address_of__commandBehavior_8() { return &____commandBehavior_8; }
	inline void set__commandBehavior_8(int32_t value)
	{
		____commandBehavior_8 = value;
	}

	inline static int32_t get_offset_of__disposeCommand_9() { return static_cast<int32_t>(offsetof(SqliteDataReader_t2933346592, ____disposeCommand_9)); }
	inline bool get__disposeCommand_9() const { return ____disposeCommand_9; }
	inline bool* get_address_of__disposeCommand_9() { return &____disposeCommand_9; }
	inline void set__disposeCommand_9(bool value)
	{
		____disposeCommand_9 = value;
	}

	inline static int32_t get_offset_of__keyInfo_10() { return static_cast<int32_t>(offsetof(SqliteDataReader_t2933346592, ____keyInfo_10)); }
	inline SqliteKeyReader_t2457387554 * get__keyInfo_10() const { return ____keyInfo_10; }
	inline SqliteKeyReader_t2457387554 ** get_address_of__keyInfo_10() { return &____keyInfo_10; }
	inline void set__keyInfo_10(SqliteKeyReader_t2457387554 * value)
	{
		____keyInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&____keyInfo_10), value);
	}

	inline static int32_t get_offset_of__version_11() { return static_cast<int32_t>(offsetof(SqliteDataReader_t2933346592, ____version_11)); }
	inline int64_t get__version_11() const { return ____version_11; }
	inline int64_t* get_address_of__version_11() { return &____version_11; }
	inline void set__version_11(int64_t value)
	{
		____version_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEDATAREADER_T2933346592_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t1956802104 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_FontInternal_13)); }
	inline Font_t1956802104 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t1956802104 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t1956802104 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_15)); }
	inline GUIStyle_t3956901511 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t3956901511 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T3956901511_H
#ifndef VUFORIARUNTIME_T1949122020_H
#define VUFORIARUNTIME_T1949122020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime
struct  VuforiaRuntime_t1949122020  : public RuntimeObject
{
public:
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_t3593217305 * ___mOnVuforiaInitError_1;
	// System.Boolean Vuforia.VuforiaRuntime::mFailedToInitialize
	bool ___mFailedToInitialize_2;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaRuntime::mInitError
	int32_t ___mInitError_3;
	// System.Boolean Vuforia.VuforiaRuntime::mHasInitialized
	bool ___mHasInitialized_4;

public:
	inline static int32_t get_offset_of_mOnVuforiaInitError_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mOnVuforiaInitError_1)); }
	inline Action_1_t3593217305 * get_mOnVuforiaInitError_1() const { return ___mOnVuforiaInitError_1; }
	inline Action_1_t3593217305 ** get_address_of_mOnVuforiaInitError_1() { return &___mOnVuforiaInitError_1; }
	inline void set_mOnVuforiaInitError_1(Action_1_t3593217305 * value)
	{
		___mOnVuforiaInitError_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitError_1), value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mFailedToInitialize_2)); }
	inline bool get_mFailedToInitialize_2() const { return ___mFailedToInitialize_2; }
	inline bool* get_address_of_mFailedToInitialize_2() { return &___mFailedToInitialize_2; }
	inline void set_mFailedToInitialize_2(bool value)
	{
		___mFailedToInitialize_2 = value;
	}

	inline static int32_t get_offset_of_mInitError_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitError_3)); }
	inline int32_t get_mInitError_3() const { return ___mInitError_3; }
	inline int32_t* get_address_of_mInitError_3() { return &___mInitError_3; }
	inline void set_mInitError_3(int32_t value)
	{
		___mInitError_3 = value;
	}

	inline static int32_t get_offset_of_mHasInitialized_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mHasInitialized_4)); }
	inline bool get_mHasInitialized_4() const { return ___mHasInitialized_4; }
	inline bool* get_address_of_mHasInitialized_4() { return &___mHasInitialized_4; }
	inline void set_mHasInitialized_4(bool value)
	{
		___mHasInitialized_4 = value;
	}
};

struct VuforiaRuntime_t1949122020_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_t1949122020 * ___mInstance_5;
	// System.Object Vuforia.VuforiaRuntime::mPadlock
	RuntimeObject * ___mPadlock_6;

public:
	inline static int32_t get_offset_of_mInstance_5() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mInstance_5)); }
	inline VuforiaRuntime_t1949122020 * get_mInstance_5() const { return ___mInstance_5; }
	inline VuforiaRuntime_t1949122020 ** get_address_of_mInstance_5() { return &___mInstance_5; }
	inline void set_mInstance_5(VuforiaRuntime_t1949122020 * value)
	{
		___mInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_5), value);
	}

	inline static int32_t get_offset_of_mPadlock_6() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mPadlock_6)); }
	inline RuntimeObject * get_mPadlock_6() const { return ___mPadlock_6; }
	inline RuntimeObject ** get_address_of_mPadlock_6() { return &___mPadlock_6; }
	inline void set_mPadlock_6(RuntimeObject * value)
	{
		___mPadlock_6 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARUNTIME_T1949122020_H
#ifndef SQLITECOMMAND_T3916884476_H
#define SQLITECOMMAND_T3916884476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteCommand
struct  SqliteCommand_t3916884476  : public DbCommand_t187824494
{
public:
	// System.String Mono.Data.Sqlite.SqliteCommand::_commandText
	String_t* ____commandText_4;
	// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteCommand::_cnn
	SqliteConnection_t3870565407 * ____cnn_5;
	// System.Int64 Mono.Data.Sqlite.SqliteCommand::_version
	int64_t ____version_6;
	// System.WeakReference Mono.Data.Sqlite.SqliteCommand::_activeReader
	WeakReference_t1334886716 * ____activeReader_7;
	// System.Int32 Mono.Data.Sqlite.SqliteCommand::_commandTimeout
	int32_t ____commandTimeout_8;
	// System.Boolean Mono.Data.Sqlite.SqliteCommand::_designTimeVisible
	bool ____designTimeVisible_9;
	// System.Data.UpdateRowSource Mono.Data.Sqlite.SqliteCommand::_updateRowSource
	int32_t ____updateRowSource_10;
	// Mono.Data.Sqlite.SqliteParameterCollection Mono.Data.Sqlite.SqliteCommand::_parameterCollection
	SqliteParameterCollection_t2576174450 * ____parameterCollection_11;
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement> Mono.Data.Sqlite.SqliteCommand::_statementList
	List_1_t2942769285 * ____statementList_12;
	// System.String Mono.Data.Sqlite.SqliteCommand::_remainingText
	String_t* ____remainingText_13;
	// Mono.Data.Sqlite.SqliteTransaction Mono.Data.Sqlite.SqliteCommand::_transaction
	SqliteTransaction_t2018962351 * ____transaction_14;

public:
	inline static int32_t get_offset_of__commandText_4() { return static_cast<int32_t>(offsetof(SqliteCommand_t3916884476, ____commandText_4)); }
	inline String_t* get__commandText_4() const { return ____commandText_4; }
	inline String_t** get_address_of__commandText_4() { return &____commandText_4; }
	inline void set__commandText_4(String_t* value)
	{
		____commandText_4 = value;
		Il2CppCodeGenWriteBarrier((&____commandText_4), value);
	}

	inline static int32_t get_offset_of__cnn_5() { return static_cast<int32_t>(offsetof(SqliteCommand_t3916884476, ____cnn_5)); }
	inline SqliteConnection_t3870565407 * get__cnn_5() const { return ____cnn_5; }
	inline SqliteConnection_t3870565407 ** get_address_of__cnn_5() { return &____cnn_5; }
	inline void set__cnn_5(SqliteConnection_t3870565407 * value)
	{
		____cnn_5 = value;
		Il2CppCodeGenWriteBarrier((&____cnn_5), value);
	}

	inline static int32_t get_offset_of__version_6() { return static_cast<int32_t>(offsetof(SqliteCommand_t3916884476, ____version_6)); }
	inline int64_t get__version_6() const { return ____version_6; }
	inline int64_t* get_address_of__version_6() { return &____version_6; }
	inline void set__version_6(int64_t value)
	{
		____version_6 = value;
	}

	inline static int32_t get_offset_of__activeReader_7() { return static_cast<int32_t>(offsetof(SqliteCommand_t3916884476, ____activeReader_7)); }
	inline WeakReference_t1334886716 * get__activeReader_7() const { return ____activeReader_7; }
	inline WeakReference_t1334886716 ** get_address_of__activeReader_7() { return &____activeReader_7; }
	inline void set__activeReader_7(WeakReference_t1334886716 * value)
	{
		____activeReader_7 = value;
		Il2CppCodeGenWriteBarrier((&____activeReader_7), value);
	}

	inline static int32_t get_offset_of__commandTimeout_8() { return static_cast<int32_t>(offsetof(SqliteCommand_t3916884476, ____commandTimeout_8)); }
	inline int32_t get__commandTimeout_8() const { return ____commandTimeout_8; }
	inline int32_t* get_address_of__commandTimeout_8() { return &____commandTimeout_8; }
	inline void set__commandTimeout_8(int32_t value)
	{
		____commandTimeout_8 = value;
	}

	inline static int32_t get_offset_of__designTimeVisible_9() { return static_cast<int32_t>(offsetof(SqliteCommand_t3916884476, ____designTimeVisible_9)); }
	inline bool get__designTimeVisible_9() const { return ____designTimeVisible_9; }
	inline bool* get_address_of__designTimeVisible_9() { return &____designTimeVisible_9; }
	inline void set__designTimeVisible_9(bool value)
	{
		____designTimeVisible_9 = value;
	}

	inline static int32_t get_offset_of__updateRowSource_10() { return static_cast<int32_t>(offsetof(SqliteCommand_t3916884476, ____updateRowSource_10)); }
	inline int32_t get__updateRowSource_10() const { return ____updateRowSource_10; }
	inline int32_t* get_address_of__updateRowSource_10() { return &____updateRowSource_10; }
	inline void set__updateRowSource_10(int32_t value)
	{
		____updateRowSource_10 = value;
	}

	inline static int32_t get_offset_of__parameterCollection_11() { return static_cast<int32_t>(offsetof(SqliteCommand_t3916884476, ____parameterCollection_11)); }
	inline SqliteParameterCollection_t2576174450 * get__parameterCollection_11() const { return ____parameterCollection_11; }
	inline SqliteParameterCollection_t2576174450 ** get_address_of__parameterCollection_11() { return &____parameterCollection_11; }
	inline void set__parameterCollection_11(SqliteParameterCollection_t2576174450 * value)
	{
		____parameterCollection_11 = value;
		Il2CppCodeGenWriteBarrier((&____parameterCollection_11), value);
	}

	inline static int32_t get_offset_of__statementList_12() { return static_cast<int32_t>(offsetof(SqliteCommand_t3916884476, ____statementList_12)); }
	inline List_1_t2942769285 * get__statementList_12() const { return ____statementList_12; }
	inline List_1_t2942769285 ** get_address_of__statementList_12() { return &____statementList_12; }
	inline void set__statementList_12(List_1_t2942769285 * value)
	{
		____statementList_12 = value;
		Il2CppCodeGenWriteBarrier((&____statementList_12), value);
	}

	inline static int32_t get_offset_of__remainingText_13() { return static_cast<int32_t>(offsetof(SqliteCommand_t3916884476, ____remainingText_13)); }
	inline String_t* get__remainingText_13() const { return ____remainingText_13; }
	inline String_t** get_address_of__remainingText_13() { return &____remainingText_13; }
	inline void set__remainingText_13(String_t* value)
	{
		____remainingText_13 = value;
		Il2CppCodeGenWriteBarrier((&____remainingText_13), value);
	}

	inline static int32_t get_offset_of__transaction_14() { return static_cast<int32_t>(offsetof(SqliteCommand_t3916884476, ____transaction_14)); }
	inline SqliteTransaction_t2018962351 * get__transaction_14() const { return ____transaction_14; }
	inline SqliteTransaction_t2018962351 ** get_address_of__transaction_14() { return &____transaction_14; }
	inline void set__transaction_14(SqliteTransaction_t2018962351 * value)
	{
		____transaction_14 = value;
		Il2CppCodeGenWriteBarrier((&____transaction_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECOMMAND_T3916884476_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef SQLITECONNECTION_T3870565407_H
#define SQLITECONNECTION_T3870565407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteConnection
struct  SqliteConnection_t3870565407  : public DbConnection_t1716984062
{
public:
	// System.Data.ConnectionState Mono.Data.Sqlite.SqliteConnection::_connectionState
	int32_t ____connectionState_5;
	// System.String Mono.Data.Sqlite.SqliteConnection::_connectionString
	String_t* ____connectionString_6;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_transactionLevel
	int32_t ____transactionLevel_7;
	// System.Data.IsolationLevel Mono.Data.Sqlite.SqliteConnection::_defaultIsolation
	int32_t ____defaultIsolation_8;
	// Mono.Data.Sqlite.SQLiteEnlistment Mono.Data.Sqlite.SqliteConnection::_enlistment
	SQLiteEnlistment_t238178236 * ____enlistment_9;
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteConnection::_sql
	SQLiteBase_t1448580847 * ____sql_10;
	// System.String Mono.Data.Sqlite.SqliteConnection::_dataSource
	String_t* ____dataSource_11;
	// System.Byte[] Mono.Data.Sqlite.SqliteConnection::_password
	ByteU5BU5D_t4116647657* ____password_12;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_defaultTimeout
	int32_t ____defaultTimeout_13;
	// System.Boolean Mono.Data.Sqlite.SqliteConnection::_binaryGuid
	bool ____binaryGuid_14;
	// System.Int64 Mono.Data.Sqlite.SqliteConnection::_version
	int64_t ____version_15;
	// Mono.Data.Sqlite.SQLiteUpdateCallback Mono.Data.Sqlite.SqliteConnection::_updateCallback
	SQLiteUpdateCallback_t3929343441 * ____updateCallback_16;
	// Mono.Data.Sqlite.SQLiteCommitCallback Mono.Data.Sqlite.SqliteConnection::_commitCallback
	SQLiteCommitCallback_t583925460 * ____commitCallback_17;
	// Mono.Data.Sqlite.SQLiteRollbackCallback Mono.Data.Sqlite.SqliteConnection::_rollbackCallback
	SQLiteRollbackCallback_t3445264418 * ____rollbackCallback_18;
	// Mono.Data.Sqlite.SQLiteUpdateEventHandler Mono.Data.Sqlite.SqliteConnection::_updateHandler
	SQLiteUpdateEventHandler_t65030829 * ____updateHandler_19;
	// Mono.Data.Sqlite.SQLiteCommitHandler Mono.Data.Sqlite.SqliteConnection::_commitHandler
	SQLiteCommitHandler_t4261451224 * ____commitHandler_20;
	// System.EventHandler Mono.Data.Sqlite.SqliteConnection::_rollbackHandler
	EventHandler_t1348719766 * ____rollbackHandler_21;
	// System.Data.StateChangeEventHandler Mono.Data.Sqlite.SqliteConnection::StateChange
	StateChangeEventHandler_t3645615602 * ___StateChange_22;

public:
	inline static int32_t get_offset_of__connectionState_5() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____connectionState_5)); }
	inline int32_t get__connectionState_5() const { return ____connectionState_5; }
	inline int32_t* get_address_of__connectionState_5() { return &____connectionState_5; }
	inline void set__connectionState_5(int32_t value)
	{
		____connectionState_5 = value;
	}

	inline static int32_t get_offset_of__connectionString_6() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____connectionString_6)); }
	inline String_t* get__connectionString_6() const { return ____connectionString_6; }
	inline String_t** get_address_of__connectionString_6() { return &____connectionString_6; }
	inline void set__connectionString_6(String_t* value)
	{
		____connectionString_6 = value;
		Il2CppCodeGenWriteBarrier((&____connectionString_6), value);
	}

	inline static int32_t get_offset_of__transactionLevel_7() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____transactionLevel_7)); }
	inline int32_t get__transactionLevel_7() const { return ____transactionLevel_7; }
	inline int32_t* get_address_of__transactionLevel_7() { return &____transactionLevel_7; }
	inline void set__transactionLevel_7(int32_t value)
	{
		____transactionLevel_7 = value;
	}

	inline static int32_t get_offset_of__defaultIsolation_8() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____defaultIsolation_8)); }
	inline int32_t get__defaultIsolation_8() const { return ____defaultIsolation_8; }
	inline int32_t* get_address_of__defaultIsolation_8() { return &____defaultIsolation_8; }
	inline void set__defaultIsolation_8(int32_t value)
	{
		____defaultIsolation_8 = value;
	}

	inline static int32_t get_offset_of__enlistment_9() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____enlistment_9)); }
	inline SQLiteEnlistment_t238178236 * get__enlistment_9() const { return ____enlistment_9; }
	inline SQLiteEnlistment_t238178236 ** get_address_of__enlistment_9() { return &____enlistment_9; }
	inline void set__enlistment_9(SQLiteEnlistment_t238178236 * value)
	{
		____enlistment_9 = value;
		Il2CppCodeGenWriteBarrier((&____enlistment_9), value);
	}

	inline static int32_t get_offset_of__sql_10() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____sql_10)); }
	inline SQLiteBase_t1448580847 * get__sql_10() const { return ____sql_10; }
	inline SQLiteBase_t1448580847 ** get_address_of__sql_10() { return &____sql_10; }
	inline void set__sql_10(SQLiteBase_t1448580847 * value)
	{
		____sql_10 = value;
		Il2CppCodeGenWriteBarrier((&____sql_10), value);
	}

	inline static int32_t get_offset_of__dataSource_11() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____dataSource_11)); }
	inline String_t* get__dataSource_11() const { return ____dataSource_11; }
	inline String_t** get_address_of__dataSource_11() { return &____dataSource_11; }
	inline void set__dataSource_11(String_t* value)
	{
		____dataSource_11 = value;
		Il2CppCodeGenWriteBarrier((&____dataSource_11), value);
	}

	inline static int32_t get_offset_of__password_12() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____password_12)); }
	inline ByteU5BU5D_t4116647657* get__password_12() const { return ____password_12; }
	inline ByteU5BU5D_t4116647657** get_address_of__password_12() { return &____password_12; }
	inline void set__password_12(ByteU5BU5D_t4116647657* value)
	{
		____password_12 = value;
		Il2CppCodeGenWriteBarrier((&____password_12), value);
	}

	inline static int32_t get_offset_of__defaultTimeout_13() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____defaultTimeout_13)); }
	inline int32_t get__defaultTimeout_13() const { return ____defaultTimeout_13; }
	inline int32_t* get_address_of__defaultTimeout_13() { return &____defaultTimeout_13; }
	inline void set__defaultTimeout_13(int32_t value)
	{
		____defaultTimeout_13 = value;
	}

	inline static int32_t get_offset_of__binaryGuid_14() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____binaryGuid_14)); }
	inline bool get__binaryGuid_14() const { return ____binaryGuid_14; }
	inline bool* get_address_of__binaryGuid_14() { return &____binaryGuid_14; }
	inline void set__binaryGuid_14(bool value)
	{
		____binaryGuid_14 = value;
	}

	inline static int32_t get_offset_of__version_15() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____version_15)); }
	inline int64_t get__version_15() const { return ____version_15; }
	inline int64_t* get_address_of__version_15() { return &____version_15; }
	inline void set__version_15(int64_t value)
	{
		____version_15 = value;
	}

	inline static int32_t get_offset_of__updateCallback_16() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____updateCallback_16)); }
	inline SQLiteUpdateCallback_t3929343441 * get__updateCallback_16() const { return ____updateCallback_16; }
	inline SQLiteUpdateCallback_t3929343441 ** get_address_of__updateCallback_16() { return &____updateCallback_16; }
	inline void set__updateCallback_16(SQLiteUpdateCallback_t3929343441 * value)
	{
		____updateCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&____updateCallback_16), value);
	}

	inline static int32_t get_offset_of__commitCallback_17() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____commitCallback_17)); }
	inline SQLiteCommitCallback_t583925460 * get__commitCallback_17() const { return ____commitCallback_17; }
	inline SQLiteCommitCallback_t583925460 ** get_address_of__commitCallback_17() { return &____commitCallback_17; }
	inline void set__commitCallback_17(SQLiteCommitCallback_t583925460 * value)
	{
		____commitCallback_17 = value;
		Il2CppCodeGenWriteBarrier((&____commitCallback_17), value);
	}

	inline static int32_t get_offset_of__rollbackCallback_18() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____rollbackCallback_18)); }
	inline SQLiteRollbackCallback_t3445264418 * get__rollbackCallback_18() const { return ____rollbackCallback_18; }
	inline SQLiteRollbackCallback_t3445264418 ** get_address_of__rollbackCallback_18() { return &____rollbackCallback_18; }
	inline void set__rollbackCallback_18(SQLiteRollbackCallback_t3445264418 * value)
	{
		____rollbackCallback_18 = value;
		Il2CppCodeGenWriteBarrier((&____rollbackCallback_18), value);
	}

	inline static int32_t get_offset_of__updateHandler_19() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____updateHandler_19)); }
	inline SQLiteUpdateEventHandler_t65030829 * get__updateHandler_19() const { return ____updateHandler_19; }
	inline SQLiteUpdateEventHandler_t65030829 ** get_address_of__updateHandler_19() { return &____updateHandler_19; }
	inline void set__updateHandler_19(SQLiteUpdateEventHandler_t65030829 * value)
	{
		____updateHandler_19 = value;
		Il2CppCodeGenWriteBarrier((&____updateHandler_19), value);
	}

	inline static int32_t get_offset_of__commitHandler_20() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____commitHandler_20)); }
	inline SQLiteCommitHandler_t4261451224 * get__commitHandler_20() const { return ____commitHandler_20; }
	inline SQLiteCommitHandler_t4261451224 ** get_address_of__commitHandler_20() { return &____commitHandler_20; }
	inline void set__commitHandler_20(SQLiteCommitHandler_t4261451224 * value)
	{
		____commitHandler_20 = value;
		Il2CppCodeGenWriteBarrier((&____commitHandler_20), value);
	}

	inline static int32_t get_offset_of__rollbackHandler_21() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ____rollbackHandler_21)); }
	inline EventHandler_t1348719766 * get__rollbackHandler_21() const { return ____rollbackHandler_21; }
	inline EventHandler_t1348719766 ** get_address_of__rollbackHandler_21() { return &____rollbackHandler_21; }
	inline void set__rollbackHandler_21(EventHandler_t1348719766 * value)
	{
		____rollbackHandler_21 = value;
		Il2CppCodeGenWriteBarrier((&____rollbackHandler_21), value);
	}

	inline static int32_t get_offset_of_StateChange_22() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407, ___StateChange_22)); }
	inline StateChangeEventHandler_t3645615602 * get_StateChange_22() const { return ___StateChange_22; }
	inline StateChangeEventHandler_t3645615602 ** get_address_of_StateChange_22() { return &___StateChange_22; }
	inline void set_StateChange_22(StateChangeEventHandler_t3645615602 * value)
	{
		___StateChange_22 = value;
		Il2CppCodeGenWriteBarrier((&___StateChange_22), value);
	}
};

struct SqliteConnection_t3870565407_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConnection::<>f__switch$map1
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConnection::<>f__switch$map2
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2_24;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_23() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407_StaticFields, ___U3CU3Ef__switchU24map1_23)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1_23() const { return ___U3CU3Ef__switchU24map1_23; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1_23() { return &___U3CU3Ef__switchU24map1_23; }
	inline void set_U3CU3Ef__switchU24map1_23(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_24() { return static_cast<int32_t>(offsetof(SqliteConnection_t3870565407_StaticFields, ___U3CU3Ef__switchU24map2_24)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2_24() const { return ___U3CU3Ef__switchU24map2_24; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2_24() { return &___U3CU3Ef__switchU24map2_24; }
	inline void set_U3CU3Ef__switchU24map2_24(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECONNECTION_T3870565407_H
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef ACTION_1_T3593217305_H
#define ACTION_1_T3593217305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct  Action_1_t3593217305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3593217305_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef WEBCAMTEXTURE_T1514609158_H
#define WEBCAMTEXTURE_T1514609158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamTexture
struct  WebCamTexture_t1514609158  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXTURE_T1514609158_H
#ifndef CANVASGROUP_T4083511760_H
#define CANVASGROUP_T4083511760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasGroup
struct  CanvasGroup_t4083511760  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASGROUP_T4083511760_H
#ifndef WINDOWFUNCTION_T3146511083_H
#define WINDOWFUNCTION_T3146511083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3146511083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3146511083_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef VUFORIACONFIGURATION_T1763229349_H
#define VUFORIACONFIGURATION_T1763229349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t1763229349  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t3697830469 * ___vuforia_4;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t546560202 * ___digitalEyewear_5;
	// Vuforia.VuforiaConfiguration/DatabaseLoadConfiguration Vuforia.VuforiaConfiguration::databaseLoad
	DatabaseLoadConfiguration_t449697234 * ___databaseLoad_6;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t3392414655 * ___videoBackground_7;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_t721467671 * ___deviceTracker_8;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t1514074484 * ___smartTerrain_9;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t1101614731 * ___webcam_10;

public:
	inline static int32_t get_offset_of_vuforia_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___vuforia_4)); }
	inline GenericVuforiaConfiguration_t3697830469 * get_vuforia_4() const { return ___vuforia_4; }
	inline GenericVuforiaConfiguration_t3697830469 ** get_address_of_vuforia_4() { return &___vuforia_4; }
	inline void set_vuforia_4(GenericVuforiaConfiguration_t3697830469 * value)
	{
		___vuforia_4 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_4), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___digitalEyewear_5)); }
	inline DigitalEyewearConfiguration_t546560202 * get_digitalEyewear_5() const { return ___digitalEyewear_5; }
	inline DigitalEyewearConfiguration_t546560202 ** get_address_of_digitalEyewear_5() { return &___digitalEyewear_5; }
	inline void set_digitalEyewear_5(DigitalEyewearConfiguration_t546560202 * value)
	{
		___digitalEyewear_5 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_5), value);
	}

	inline static int32_t get_offset_of_databaseLoad_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___databaseLoad_6)); }
	inline DatabaseLoadConfiguration_t449697234 * get_databaseLoad_6() const { return ___databaseLoad_6; }
	inline DatabaseLoadConfiguration_t449697234 ** get_address_of_databaseLoad_6() { return &___databaseLoad_6; }
	inline void set_databaseLoad_6(DatabaseLoadConfiguration_t449697234 * value)
	{
		___databaseLoad_6 = value;
		Il2CppCodeGenWriteBarrier((&___databaseLoad_6), value);
	}

	inline static int32_t get_offset_of_videoBackground_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___videoBackground_7)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_videoBackground_7() const { return ___videoBackground_7; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_videoBackground_7() { return &___videoBackground_7; }
	inline void set_videoBackground_7(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___videoBackground_7 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_7), value);
	}

	inline static int32_t get_offset_of_deviceTracker_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___deviceTracker_8)); }
	inline DeviceTrackerConfiguration_t721467671 * get_deviceTracker_8() const { return ___deviceTracker_8; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_deviceTracker_8() { return &___deviceTracker_8; }
	inline void set_deviceTracker_8(DeviceTrackerConfiguration_t721467671 * value)
	{
		___deviceTracker_8 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_8), value);
	}

	inline static int32_t get_offset_of_smartTerrain_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___smartTerrain_9)); }
	inline SmartTerrainConfiguration_t1514074484 * get_smartTerrain_9() const { return ___smartTerrain_9; }
	inline SmartTerrainConfiguration_t1514074484 ** get_address_of_smartTerrain_9() { return &___smartTerrain_9; }
	inline void set_smartTerrain_9(SmartTerrainConfiguration_t1514074484 * value)
	{
		___smartTerrain_9 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_9), value);
	}

	inline static int32_t get_offset_of_webcam_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___webcam_10)); }
	inline WebCamConfiguration_t1101614731 * get_webcam_10() const { return ___webcam_10; }
	inline WebCamConfiguration_t1101614731 ** get_address_of_webcam_10() { return &___webcam_10; }
	inline void set_webcam_10(WebCamConfiguration_t1101614731 * value)
	{
		___webcam_10 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_10), value);
	}
};

struct VuforiaConfiguration_t1763229349_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t1763229349 * ___mInstance_2;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_3;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mInstance_2)); }
	inline VuforiaConfiguration_t1763229349 * get_mInstance_2() const { return ___mInstance_2; }
	inline VuforiaConfiguration_t1763229349 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(VuforiaConfiguration_t1763229349 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_2), value);
	}

	inline static int32_t get_offset_of_mPadlock_3() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mPadlock_3)); }
	inline RuntimeObject * get_mPadlock_3() const { return ___mPadlock_3; }
	inline RuntimeObject ** get_address_of_mPadlock_3() { return &___mPadlock_3; }
	inline void set_mPadlock_3(RuntimeObject * value)
	{
		___mPadlock_3 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIACONFIGURATION_T1763229349_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef LIGHT_T3756812086_H
#define LIGHT_T3756812086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Light
struct  Light_t3756812086  : public Behaviour_t1437897464
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_2;

public:
	inline static int32_t get_offset_of_m_BakedIndex_2() { return static_cast<int32_t>(offsetof(Light_t3756812086, ___m_BakedIndex_2)); }
	inline int32_t get_m_BakedIndex_2() const { return ___m_BakedIndex_2; }
	inline int32_t* get_address_of_m_BakedIndex_2() { return &___m_BakedIndex_2; }
	inline void set_m_BakedIndex_2(int32_t value)
	{
		___m_BakedIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHT_T3756812086_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef ACTIVESTATETOGGLER_T3846380968_H
#define ACTIVESTATETOGGLER_T3846380968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ActiveStateToggler
struct  ActiveStateToggler_t3846380968  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVESTATETOGGLER_T3846380968_H
#ifndef APPLICATIONMANAGER_T3254129643_H
#define APPLICATIONMANAGER_T3254129643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ApplicationManager
struct  ApplicationManager_t3254129643  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONMANAGER_T3254129643_H
#ifndef ARSCRIPT_T1214039674_H
#define ARSCRIPT_T1214039674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARScript
struct  ARScript_t1214039674  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSCRIPT_T1214039674_H
#ifndef CHANGECOLOR_T3909000678_H
#define CHANGECOLOR_T3909000678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeColor
struct  ChangeColor_t3909000678  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANGECOLOR_T3909000678_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t3109936861  : public MonoBehaviour_t3962482529
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_2;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_3;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_6;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_7;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_8;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t3840446185 * ___headerTexture_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t3840446185 * ___footerTexture_10;

public:
	inline static int32_t get_offset_of_mErrorText_2() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorText_2)); }
	inline String_t* get_mErrorText_2() const { return ___mErrorText_2; }
	inline String_t** get_address_of_mErrorText_2() { return &___mErrorText_2; }
	inline void set_mErrorText_2(String_t* value)
	{
		___mErrorText_2 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_2), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_3() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorOccurred_3)); }
	inline bool get_mErrorOccurred_3() const { return ___mErrorOccurred_3; }
	inline bool* get_address_of_mErrorOccurred_3() { return &___mErrorOccurred_3; }
	inline void set_mErrorOccurred_3(bool value)
	{
		___mErrorOccurred_3 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyStyle_5)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_5() const { return ___bodyStyle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_5() { return &___bodyStyle_5; }
	inline void set_bodyStyle_5(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_5 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_5), value);
	}

	inline static int32_t get_offset_of_headerStyle_6() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerStyle_6)); }
	inline GUIStyle_t3956901511 * get_headerStyle_6() const { return ___headerStyle_6; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_6() { return &___headerStyle_6; }
	inline void set_headerStyle_6(GUIStyle_t3956901511 * value)
	{
		___headerStyle_6 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_6), value);
	}

	inline static int32_t get_offset_of_footerStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerStyle_7)); }
	inline GUIStyle_t3956901511 * get_footerStyle_7() const { return ___footerStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_7() { return &___footerStyle_7; }
	inline void set_footerStyle_7(GUIStyle_t3956901511 * value)
	{
		___footerStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_7), value);
	}

	inline static int32_t get_offset_of_bodyTexture_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyTexture_8)); }
	inline Texture2D_t3840446185 * get_bodyTexture_8() const { return ___bodyTexture_8; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_8() { return &___bodyTexture_8; }
	inline void set_bodyTexture_8(Texture2D_t3840446185 * value)
	{
		___bodyTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_8), value);
	}

	inline static int32_t get_offset_of_headerTexture_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerTexture_9)); }
	inline Texture2D_t3840446185 * get_headerTexture_9() const { return ___headerTexture_9; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_9() { return &___headerTexture_9; }
	inline void set_headerTexture_9(Texture2D_t3840446185 * value)
	{
		___headerTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_9), value);
	}

	inline static int32_t get_offset_of_footerTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerTexture_10)); }
	inline Texture2D_t3840446185 * get_footerTexture_10() const { return ___footerTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_10() { return &___footerTexture_10; }
	inline void set_footerTexture_10(Texture2D_t3840446185 * value)
	{
		___footerTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifndef DATABASE_T2832598855_H
#define DATABASE_T2832598855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// database
struct  database_t2832598855  : public MonoBehaviour_t3962482529
{
public:
	// System.String database::dbPath
	String_t* ___dbPath_2;

public:
	inline static int32_t get_offset_of_dbPath_2() { return static_cast<int32_t>(offsetof(database_t2832598855, ___dbPath_2)); }
	inline String_t* get_dbPath_2() const { return ___dbPath_2; }
	inline String_t** get_address_of_dbPath_2() { return &___dbPath_2; }
	inline void set_dbPath_2(String_t* value)
	{
		___dbPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___dbPath_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATABASE_T2832598855_H
#ifndef WANDSELECTION_T972065371_H
#define WANDSELECTION_T972065371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WandSelection
struct  WandSelection_t972065371  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 WandSelection::state
	int32_t ___state_2;
	// System.Boolean WandSelection::isTravel
	bool ___isTravel_3;
	// UnityEngine.GameObject WandSelection::canv1
	GameObject_t1113636619 * ___canv1_4;
	// UnityEngine.GameObject WandSelection::canv2
	GameObject_t1113636619 * ___canv2_5;
	// UnityEngine.GameObject WandSelection::canv3
	GameObject_t1113636619 * ___canv3_6;
	// UnityEngine.GameObject WandSelection::canv4
	GameObject_t1113636619 * ___canv4_7;
	// UnityEngine.GameObject WandSelection::UIcube
	GameObject_t1113636619 * ___UIcube_8;
	// UnityEngine.GameObject WandSelection::drawer1
	GameObject_t1113636619 * ___drawer1_9;
	// UnityEngine.GameObject WandSelection::drawer2
	GameObject_t1113636619 * ___drawer2_10;
	// UnityEngine.GameObject WandSelection::drawer3
	GameObject_t1113636619 * ___drawer3_11;

public:
	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(WandSelection_t972065371, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_isTravel_3() { return static_cast<int32_t>(offsetof(WandSelection_t972065371, ___isTravel_3)); }
	inline bool get_isTravel_3() const { return ___isTravel_3; }
	inline bool* get_address_of_isTravel_3() { return &___isTravel_3; }
	inline void set_isTravel_3(bool value)
	{
		___isTravel_3 = value;
	}

	inline static int32_t get_offset_of_canv1_4() { return static_cast<int32_t>(offsetof(WandSelection_t972065371, ___canv1_4)); }
	inline GameObject_t1113636619 * get_canv1_4() const { return ___canv1_4; }
	inline GameObject_t1113636619 ** get_address_of_canv1_4() { return &___canv1_4; }
	inline void set_canv1_4(GameObject_t1113636619 * value)
	{
		___canv1_4 = value;
		Il2CppCodeGenWriteBarrier((&___canv1_4), value);
	}

	inline static int32_t get_offset_of_canv2_5() { return static_cast<int32_t>(offsetof(WandSelection_t972065371, ___canv2_5)); }
	inline GameObject_t1113636619 * get_canv2_5() const { return ___canv2_5; }
	inline GameObject_t1113636619 ** get_address_of_canv2_5() { return &___canv2_5; }
	inline void set_canv2_5(GameObject_t1113636619 * value)
	{
		___canv2_5 = value;
		Il2CppCodeGenWriteBarrier((&___canv2_5), value);
	}

	inline static int32_t get_offset_of_canv3_6() { return static_cast<int32_t>(offsetof(WandSelection_t972065371, ___canv3_6)); }
	inline GameObject_t1113636619 * get_canv3_6() const { return ___canv3_6; }
	inline GameObject_t1113636619 ** get_address_of_canv3_6() { return &___canv3_6; }
	inline void set_canv3_6(GameObject_t1113636619 * value)
	{
		___canv3_6 = value;
		Il2CppCodeGenWriteBarrier((&___canv3_6), value);
	}

	inline static int32_t get_offset_of_canv4_7() { return static_cast<int32_t>(offsetof(WandSelection_t972065371, ___canv4_7)); }
	inline GameObject_t1113636619 * get_canv4_7() const { return ___canv4_7; }
	inline GameObject_t1113636619 ** get_address_of_canv4_7() { return &___canv4_7; }
	inline void set_canv4_7(GameObject_t1113636619 * value)
	{
		___canv4_7 = value;
		Il2CppCodeGenWriteBarrier((&___canv4_7), value);
	}

	inline static int32_t get_offset_of_UIcube_8() { return static_cast<int32_t>(offsetof(WandSelection_t972065371, ___UIcube_8)); }
	inline GameObject_t1113636619 * get_UIcube_8() const { return ___UIcube_8; }
	inline GameObject_t1113636619 ** get_address_of_UIcube_8() { return &___UIcube_8; }
	inline void set_UIcube_8(GameObject_t1113636619 * value)
	{
		___UIcube_8 = value;
		Il2CppCodeGenWriteBarrier((&___UIcube_8), value);
	}

	inline static int32_t get_offset_of_drawer1_9() { return static_cast<int32_t>(offsetof(WandSelection_t972065371, ___drawer1_9)); }
	inline GameObject_t1113636619 * get_drawer1_9() const { return ___drawer1_9; }
	inline GameObject_t1113636619 ** get_address_of_drawer1_9() { return &___drawer1_9; }
	inline void set_drawer1_9(GameObject_t1113636619 * value)
	{
		___drawer1_9 = value;
		Il2CppCodeGenWriteBarrier((&___drawer1_9), value);
	}

	inline static int32_t get_offset_of_drawer2_10() { return static_cast<int32_t>(offsetof(WandSelection_t972065371, ___drawer2_10)); }
	inline GameObject_t1113636619 * get_drawer2_10() const { return ___drawer2_10; }
	inline GameObject_t1113636619 ** get_address_of_drawer2_10() { return &___drawer2_10; }
	inline void set_drawer2_10(GameObject_t1113636619 * value)
	{
		___drawer2_10 = value;
		Il2CppCodeGenWriteBarrier((&___drawer2_10), value);
	}

	inline static int32_t get_offset_of_drawer3_11() { return static_cast<int32_t>(offsetof(WandSelection_t972065371, ___drawer3_11)); }
	inline GameObject_t1113636619 * get_drawer3_11() const { return ___drawer3_11; }
	inline GameObject_t1113636619 ** get_address_of_drawer3_11() { return &___drawer3_11; }
	inline void set_drawer3_11(GameObject_t1113636619 * value)
	{
		___drawer3_11 = value;
		Il2CppCodeGenWriteBarrier((&___drawer3_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WANDSELECTION_T972065371_H
#ifndef MATIMAGESC_T920972473_H
#define MATIMAGESC_T920972473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatImageSc
struct  MatImageSc_t920972473  : public MonoBehaviour_t3962482529
{
public:
	// System.String MatImageSc::url
	String_t* ___url_2;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(MatImageSc_t920972473, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier((&___url_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATIMAGESC_T920972473_H
#ifndef MENUSCRIPT_T2744932923_H
#define MENUSCRIPT_T2744932923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// menuScript
struct  menuScript_t2744932923  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.AspectRatioFitter menuScript::bg
	AspectRatioFitter_t3312407083 * ___bg_2;
	// UnityEngine.WebCamTexture menuScript::backCam
	WebCamTexture_t1514609158 * ___backCam_3;

public:
	inline static int32_t get_offset_of_bg_2() { return static_cast<int32_t>(offsetof(menuScript_t2744932923, ___bg_2)); }
	inline AspectRatioFitter_t3312407083 * get_bg_2() const { return ___bg_2; }
	inline AspectRatioFitter_t3312407083 ** get_address_of_bg_2() { return &___bg_2; }
	inline void set_bg_2(AspectRatioFitter_t3312407083 * value)
	{
		___bg_2 = value;
		Il2CppCodeGenWriteBarrier((&___bg_2), value);
	}

	inline static int32_t get_offset_of_backCam_3() { return static_cast<int32_t>(offsetof(menuScript_t2744932923, ___backCam_3)); }
	inline WebCamTexture_t1514609158 * get_backCam_3() const { return ___backCam_3; }
	inline WebCamTexture_t1514609158 ** get_address_of_backCam_3() { return &___backCam_3; }
	inline void set_backCam_3(WebCamTexture_t1514609158 * value)
	{
		___backCam_3 = value;
		Il2CppCodeGenWriteBarrier((&___backCam_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUSCRIPT_T2744932923_H
#ifndef PANELMANAGER_T438216159_H
#define PANELMANAGER_T438216159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelManager
struct  PanelManager_t438216159  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator PanelManager::initiallyOpen
	Animator_t434523843 * ___initiallyOpen_2;
	// System.Int32 PanelManager::m_OpenParameterId
	int32_t ___m_OpenParameterId_3;
	// UnityEngine.Animator PanelManager::m_Open
	Animator_t434523843 * ___m_Open_4;
	// UnityEngine.GameObject PanelManager::m_PreviouslySelected
	GameObject_t1113636619 * ___m_PreviouslySelected_5;

public:
	inline static int32_t get_offset_of_initiallyOpen_2() { return static_cast<int32_t>(offsetof(PanelManager_t438216159, ___initiallyOpen_2)); }
	inline Animator_t434523843 * get_initiallyOpen_2() const { return ___initiallyOpen_2; }
	inline Animator_t434523843 ** get_address_of_initiallyOpen_2() { return &___initiallyOpen_2; }
	inline void set_initiallyOpen_2(Animator_t434523843 * value)
	{
		___initiallyOpen_2 = value;
		Il2CppCodeGenWriteBarrier((&___initiallyOpen_2), value);
	}

	inline static int32_t get_offset_of_m_OpenParameterId_3() { return static_cast<int32_t>(offsetof(PanelManager_t438216159, ___m_OpenParameterId_3)); }
	inline int32_t get_m_OpenParameterId_3() const { return ___m_OpenParameterId_3; }
	inline int32_t* get_address_of_m_OpenParameterId_3() { return &___m_OpenParameterId_3; }
	inline void set_m_OpenParameterId_3(int32_t value)
	{
		___m_OpenParameterId_3 = value;
	}

	inline static int32_t get_offset_of_m_Open_4() { return static_cast<int32_t>(offsetof(PanelManager_t438216159, ___m_Open_4)); }
	inline Animator_t434523843 * get_m_Open_4() const { return ___m_Open_4; }
	inline Animator_t434523843 ** get_address_of_m_Open_4() { return &___m_Open_4; }
	inline void set_m_Open_4(Animator_t434523843 * value)
	{
		___m_Open_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Open_4), value);
	}

	inline static int32_t get_offset_of_m_PreviouslySelected_5() { return static_cast<int32_t>(offsetof(PanelManager_t438216159, ___m_PreviouslySelected_5)); }
	inline GameObject_t1113636619 * get_m_PreviouslySelected_5() const { return ___m_PreviouslySelected_5; }
	inline GameObject_t1113636619 ** get_address_of_m_PreviouslySelected_5() { return &___m_PreviouslySelected_5; }
	inline void set_m_PreviouslySelected_5(GameObject_t1113636619 * value)
	{
		___m_PreviouslySelected_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PreviouslySelected_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PANELMANAGER_T438216159_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef DRAGME_T1855460060_H
#define DRAGME_T1855460060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragMe
struct  DragMe_t1855460060  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean DragMe::dragOnSurfaces
	bool ___dragOnSurfaces_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> DragMe::m_DraggingIcons
	Dictionary_2_t2349950 * ___m_DraggingIcons_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RectTransform> DragMe::m_DraggingPlanes
	Dictionary_2_t2593370356 * ___m_DraggingPlanes_4;

public:
	inline static int32_t get_offset_of_dragOnSurfaces_2() { return static_cast<int32_t>(offsetof(DragMe_t1855460060, ___dragOnSurfaces_2)); }
	inline bool get_dragOnSurfaces_2() const { return ___dragOnSurfaces_2; }
	inline bool* get_address_of_dragOnSurfaces_2() { return &___dragOnSurfaces_2; }
	inline void set_dragOnSurfaces_2(bool value)
	{
		___dragOnSurfaces_2 = value;
	}

	inline static int32_t get_offset_of_m_DraggingIcons_3() { return static_cast<int32_t>(offsetof(DragMe_t1855460060, ___m_DraggingIcons_3)); }
	inline Dictionary_2_t2349950 * get_m_DraggingIcons_3() const { return ___m_DraggingIcons_3; }
	inline Dictionary_2_t2349950 ** get_address_of_m_DraggingIcons_3() { return &___m_DraggingIcons_3; }
	inline void set_m_DraggingIcons_3(Dictionary_2_t2349950 * value)
	{
		___m_DraggingIcons_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_DraggingIcons_3), value);
	}

	inline static int32_t get_offset_of_m_DraggingPlanes_4() { return static_cast<int32_t>(offsetof(DragMe_t1855460060, ___m_DraggingPlanes_4)); }
	inline Dictionary_2_t2593370356 * get_m_DraggingPlanes_4() const { return ___m_DraggingPlanes_4; }
	inline Dictionary_2_t2593370356 ** get_address_of_m_DraggingPlanes_4() { return &___m_DraggingPlanes_4; }
	inline void set_m_DraggingPlanes_4(Dictionary_2_t2593370356 * value)
	{
		___m_DraggingPlanes_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_DraggingPlanes_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAGME_T1855460060_H
#ifndef PANELPOS_T23664475_H
#define PANELPOS_T23664475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Panelpos
struct  Panelpos_t23664475  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Canvas Panelpos::canv
	Canvas_t3310196443 * ___canv_2;

public:
	inline static int32_t get_offset_of_canv_2() { return static_cast<int32_t>(offsetof(Panelpos_t23664475, ___canv_2)); }
	inline Canvas_t3310196443 * get_canv_2() const { return ___canv_2; }
	inline Canvas_t3310196443 ** get_address_of_canv_2() { return &___canv_2; }
	inline void set_canv_2(Canvas_t3310196443 * value)
	{
		___canv_2 = value;
		Il2CppCodeGenWriteBarrier((&___canv_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PANELPOS_T23664475_H
#ifndef PHONECAMERA_T2918078011_H
#define PHONECAMERA_T2918078011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// phoneCamera
struct  phoneCamera_t2918078011  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean phoneCamera::camAvailable
	bool ___camAvailable_2;
	// UnityEngine.WebCamTexture phoneCamera::backCam
	WebCamTexture_t1514609158 * ___backCam_3;
	// UnityEngine.Texture phoneCamera::defaultBackground
	Texture_t3661962703 * ___defaultBackground_4;
	// UnityEngine.UI.RawImage phoneCamera::background
	RawImage_t3182918964 * ___background_5;
	// UnityEngine.UI.AspectRatioFitter phoneCamera::fit
	AspectRatioFitter_t3312407083 * ___fit_6;
	// UnityEngine.GameObject phoneCamera::buttonpanel
	GameObject_t1113636619 * ___buttonpanel_7;
	// UnityEngine.GameObject phoneCamera::scroll
	GameObject_t1113636619 * ___scroll_8;
	// UnityEngine.Texture2D phoneCamera::reverse
	Texture2D_t3840446185 * ___reverse_9;
	// System.Boolean phoneCamera::taken
	bool ___taken_10;

public:
	inline static int32_t get_offset_of_camAvailable_2() { return static_cast<int32_t>(offsetof(phoneCamera_t2918078011, ___camAvailable_2)); }
	inline bool get_camAvailable_2() const { return ___camAvailable_2; }
	inline bool* get_address_of_camAvailable_2() { return &___camAvailable_2; }
	inline void set_camAvailable_2(bool value)
	{
		___camAvailable_2 = value;
	}

	inline static int32_t get_offset_of_backCam_3() { return static_cast<int32_t>(offsetof(phoneCamera_t2918078011, ___backCam_3)); }
	inline WebCamTexture_t1514609158 * get_backCam_3() const { return ___backCam_3; }
	inline WebCamTexture_t1514609158 ** get_address_of_backCam_3() { return &___backCam_3; }
	inline void set_backCam_3(WebCamTexture_t1514609158 * value)
	{
		___backCam_3 = value;
		Il2CppCodeGenWriteBarrier((&___backCam_3), value);
	}

	inline static int32_t get_offset_of_defaultBackground_4() { return static_cast<int32_t>(offsetof(phoneCamera_t2918078011, ___defaultBackground_4)); }
	inline Texture_t3661962703 * get_defaultBackground_4() const { return ___defaultBackground_4; }
	inline Texture_t3661962703 ** get_address_of_defaultBackground_4() { return &___defaultBackground_4; }
	inline void set_defaultBackground_4(Texture_t3661962703 * value)
	{
		___defaultBackground_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBackground_4), value);
	}

	inline static int32_t get_offset_of_background_5() { return static_cast<int32_t>(offsetof(phoneCamera_t2918078011, ___background_5)); }
	inline RawImage_t3182918964 * get_background_5() const { return ___background_5; }
	inline RawImage_t3182918964 ** get_address_of_background_5() { return &___background_5; }
	inline void set_background_5(RawImage_t3182918964 * value)
	{
		___background_5 = value;
		Il2CppCodeGenWriteBarrier((&___background_5), value);
	}

	inline static int32_t get_offset_of_fit_6() { return static_cast<int32_t>(offsetof(phoneCamera_t2918078011, ___fit_6)); }
	inline AspectRatioFitter_t3312407083 * get_fit_6() const { return ___fit_6; }
	inline AspectRatioFitter_t3312407083 ** get_address_of_fit_6() { return &___fit_6; }
	inline void set_fit_6(AspectRatioFitter_t3312407083 * value)
	{
		___fit_6 = value;
		Il2CppCodeGenWriteBarrier((&___fit_6), value);
	}

	inline static int32_t get_offset_of_buttonpanel_7() { return static_cast<int32_t>(offsetof(phoneCamera_t2918078011, ___buttonpanel_7)); }
	inline GameObject_t1113636619 * get_buttonpanel_7() const { return ___buttonpanel_7; }
	inline GameObject_t1113636619 ** get_address_of_buttonpanel_7() { return &___buttonpanel_7; }
	inline void set_buttonpanel_7(GameObject_t1113636619 * value)
	{
		___buttonpanel_7 = value;
		Il2CppCodeGenWriteBarrier((&___buttonpanel_7), value);
	}

	inline static int32_t get_offset_of_scroll_8() { return static_cast<int32_t>(offsetof(phoneCamera_t2918078011, ___scroll_8)); }
	inline GameObject_t1113636619 * get_scroll_8() const { return ___scroll_8; }
	inline GameObject_t1113636619 ** get_address_of_scroll_8() { return &___scroll_8; }
	inline void set_scroll_8(GameObject_t1113636619 * value)
	{
		___scroll_8 = value;
		Il2CppCodeGenWriteBarrier((&___scroll_8), value);
	}

	inline static int32_t get_offset_of_reverse_9() { return static_cast<int32_t>(offsetof(phoneCamera_t2918078011, ___reverse_9)); }
	inline Texture2D_t3840446185 * get_reverse_9() const { return ___reverse_9; }
	inline Texture2D_t3840446185 ** get_address_of_reverse_9() { return &___reverse_9; }
	inline void set_reverse_9(Texture2D_t3840446185 * value)
	{
		___reverse_9 = value;
		Il2CppCodeGenWriteBarrier((&___reverse_9), value);
	}

	inline static int32_t get_offset_of_taken_10() { return static_cast<int32_t>(offsetof(phoneCamera_t2918078011, ___taken_10)); }
	inline bool get_taken_10() const { return ___taken_10; }
	inline bool* get_address_of_taken_10() { return &___taken_10; }
	inline void set_taken_10(bool value)
	{
		___taken_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHONECAMERA_T2918078011_H
#ifndef IMAGE2POS_T722092451_H
#define IMAGE2POS_T722092451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Image2pos
struct  Image2pos_t722092451  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Canvas Image2pos::canv
	Canvas_t3310196443 * ___canv_2;

public:
	inline static int32_t get_offset_of_canv_2() { return static_cast<int32_t>(offsetof(Image2pos_t722092451, ___canv_2)); }
	inline Canvas_t3310196443 * get_canv_2() const { return ___canv_2; }
	inline Canvas_t3310196443 ** get_address_of_canv_2() { return &___canv_2; }
	inline void set_canv_2(Canvas_t3310196443 * value)
	{
		___canv_2 = value;
		Il2CppCodeGenWriteBarrier((&___canv_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE2POS_T722092451_H
#ifndef DRAGPANEL_T1406753375_H
#define DRAGPANEL_T1406753375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragPanel
struct  DragPanel_t1406753375  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector2 DragPanel::originalLocalPointerPosition
	Vector2_t2156229523  ___originalLocalPointerPosition_2;
	// UnityEngine.Vector3 DragPanel::originalPanelLocalPosition
	Vector3_t3722313464  ___originalPanelLocalPosition_3;
	// UnityEngine.RectTransform DragPanel::panelRectTransform
	RectTransform_t3704657025 * ___panelRectTransform_4;
	// UnityEngine.RectTransform DragPanel::parentRectTransform
	RectTransform_t3704657025 * ___parentRectTransform_5;

public:
	inline static int32_t get_offset_of_originalLocalPointerPosition_2() { return static_cast<int32_t>(offsetof(DragPanel_t1406753375, ___originalLocalPointerPosition_2)); }
	inline Vector2_t2156229523  get_originalLocalPointerPosition_2() const { return ___originalLocalPointerPosition_2; }
	inline Vector2_t2156229523 * get_address_of_originalLocalPointerPosition_2() { return &___originalLocalPointerPosition_2; }
	inline void set_originalLocalPointerPosition_2(Vector2_t2156229523  value)
	{
		___originalLocalPointerPosition_2 = value;
	}

	inline static int32_t get_offset_of_originalPanelLocalPosition_3() { return static_cast<int32_t>(offsetof(DragPanel_t1406753375, ___originalPanelLocalPosition_3)); }
	inline Vector3_t3722313464  get_originalPanelLocalPosition_3() const { return ___originalPanelLocalPosition_3; }
	inline Vector3_t3722313464 * get_address_of_originalPanelLocalPosition_3() { return &___originalPanelLocalPosition_3; }
	inline void set_originalPanelLocalPosition_3(Vector3_t3722313464  value)
	{
		___originalPanelLocalPosition_3 = value;
	}

	inline static int32_t get_offset_of_panelRectTransform_4() { return static_cast<int32_t>(offsetof(DragPanel_t1406753375, ___panelRectTransform_4)); }
	inline RectTransform_t3704657025 * get_panelRectTransform_4() const { return ___panelRectTransform_4; }
	inline RectTransform_t3704657025 ** get_address_of_panelRectTransform_4() { return &___panelRectTransform_4; }
	inline void set_panelRectTransform_4(RectTransform_t3704657025 * value)
	{
		___panelRectTransform_4 = value;
		Il2CppCodeGenWriteBarrier((&___panelRectTransform_4), value);
	}

	inline static int32_t get_offset_of_parentRectTransform_5() { return static_cast<int32_t>(offsetof(DragPanel_t1406753375, ___parentRectTransform_5)); }
	inline RectTransform_t3704657025 * get_parentRectTransform_5() const { return ___parentRectTransform_5; }
	inline RectTransform_t3704657025 ** get_address_of_parentRectTransform_5() { return &___parentRectTransform_5; }
	inline void set_parentRectTransform_5(RectTransform_t3704657025 * value)
	{
		___parentRectTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___parentRectTransform_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAGPANEL_T1406753375_H
#ifndef DROPME_T2942052774_H
#define DROPME_T2942052774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DropMe
struct  DropMe_t2942052774  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image DropMe::containerImage
	Image_t2670269651 * ___containerImage_2;
	// UnityEngine.UI.Image DropMe::receivingImage
	Image_t2670269651 * ___receivingImage_3;
	// UnityEngine.Color DropMe::normalColor
	Color_t2555686324  ___normalColor_4;
	// UnityEngine.Color DropMe::highlightColor
	Color_t2555686324  ___highlightColor_5;

public:
	inline static int32_t get_offset_of_containerImage_2() { return static_cast<int32_t>(offsetof(DropMe_t2942052774, ___containerImage_2)); }
	inline Image_t2670269651 * get_containerImage_2() const { return ___containerImage_2; }
	inline Image_t2670269651 ** get_address_of_containerImage_2() { return &___containerImage_2; }
	inline void set_containerImage_2(Image_t2670269651 * value)
	{
		___containerImage_2 = value;
		Il2CppCodeGenWriteBarrier((&___containerImage_2), value);
	}

	inline static int32_t get_offset_of_receivingImage_3() { return static_cast<int32_t>(offsetof(DropMe_t2942052774, ___receivingImage_3)); }
	inline Image_t2670269651 * get_receivingImage_3() const { return ___receivingImage_3; }
	inline Image_t2670269651 ** get_address_of_receivingImage_3() { return &___receivingImage_3; }
	inline void set_receivingImage_3(Image_t2670269651 * value)
	{
		___receivingImage_3 = value;
		Il2CppCodeGenWriteBarrier((&___receivingImage_3), value);
	}

	inline static int32_t get_offset_of_normalColor_4() { return static_cast<int32_t>(offsetof(DropMe_t2942052774, ___normalColor_4)); }
	inline Color_t2555686324  get_normalColor_4() const { return ___normalColor_4; }
	inline Color_t2555686324 * get_address_of_normalColor_4() { return &___normalColor_4; }
	inline void set_normalColor_4(Color_t2555686324  value)
	{
		___normalColor_4 = value;
	}

	inline static int32_t get_offset_of_highlightColor_5() { return static_cast<int32_t>(offsetof(DropMe_t2942052774, ___highlightColor_5)); }
	inline Color_t2555686324  get_highlightColor_5() const { return ___highlightColor_5; }
	inline Color_t2555686324 * get_address_of_highlightColor_5() { return &___highlightColor_5; }
	inline void set_highlightColor_5(Color_t2555686324  value)
	{
		___highlightColor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPME_T2942052774_H
#ifndef IMAGE01SCRIPT_T2305065612_H
#define IMAGE01SCRIPT_T2305065612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Image01Script
struct  Image01Script_t2305065612  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Image01Script::selected
	bool ___selected_2;
	// System.String Image01Script::name
	String_t* ___name_3;
	// UnityEngine.Color Image01Script::origincolor
	Color_t2555686324  ___origincolor_4;

public:
	inline static int32_t get_offset_of_selected_2() { return static_cast<int32_t>(offsetof(Image01Script_t2305065612, ___selected_2)); }
	inline bool get_selected_2() const { return ___selected_2; }
	inline bool* get_address_of_selected_2() { return &___selected_2; }
	inline void set_selected_2(bool value)
	{
		___selected_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(Image01Script_t2305065612, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_origincolor_4() { return static_cast<int32_t>(offsetof(Image01Script_t2305065612, ___origincolor_4)); }
	inline Color_t2555686324  get_origincolor_4() const { return ___origincolor_4; }
	inline Color_t2555686324 * get_address_of_origincolor_4() { return &___origincolor_4; }
	inline void set_origincolor_4(Color_t2555686324  value)
	{
		___origincolor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE01SCRIPT_T2305065612_H
#ifndef IMAGE02SCRIPT_T3649433479_H
#define IMAGE02SCRIPT_T3649433479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Image02Script
struct  Image02Script_t3649433479  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Image02Script::selected
	bool ___selected_2;
	// System.String Image02Script::name
	String_t* ___name_3;
	// UnityEngine.Color Image02Script::origincolor
	Color_t2555686324  ___origincolor_4;

public:
	inline static int32_t get_offset_of_selected_2() { return static_cast<int32_t>(offsetof(Image02Script_t3649433479, ___selected_2)); }
	inline bool get_selected_2() const { return ___selected_2; }
	inline bool* get_address_of_selected_2() { return &___selected_2; }
	inline void set_selected_2(bool value)
	{
		___selected_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(Image02Script_t3649433479, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_origincolor_4() { return static_cast<int32_t>(offsetof(Image02Script_t3649433479, ___origincolor_4)); }
	inline Color_t2555686324  get_origincolor_4() const { return ___origincolor_4; }
	inline Color_t2555686324 * get_address_of_origincolor_4() { return &___origincolor_4; }
	inline void set_origincolor_4(Color_t2555686324  value)
	{
		___origincolor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE02SCRIPT_T3649433479_H
#ifndef IMAGE03SCRIPT_T1182672150_H
#define IMAGE03SCRIPT_T1182672150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Image03Script
struct  Image03Script_t1182672150  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Image03Script::selected
	bool ___selected_2;
	// System.String Image03Script::name
	String_t* ___name_3;
	// UnityEngine.Color Image03Script::origincolor
	Color_t2555686324  ___origincolor_4;

public:
	inline static int32_t get_offset_of_selected_2() { return static_cast<int32_t>(offsetof(Image03Script_t1182672150, ___selected_2)); }
	inline bool get_selected_2() const { return ___selected_2; }
	inline bool* get_address_of_selected_2() { return &___selected_2; }
	inline void set_selected_2(bool value)
	{
		___selected_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(Image03Script_t1182672150, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_origincolor_4() { return static_cast<int32_t>(offsetof(Image03Script_t1182672150, ___origincolor_4)); }
	inline Color_t2555686324  get_origincolor_4() const { return ___origincolor_4; }
	inline Color_t2555686324 * get_address_of_origincolor_4() { return &___origincolor_4; }
	inline void set_origincolor_4(Color_t2555686324  value)
	{
		___origincolor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE03SCRIPT_T1182672150_H
#ifndef IMAGE05SCRIPT_T1027954888_H
#define IMAGE05SCRIPT_T1027954888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Image05Script
struct  Image05Script_t1027954888  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Image05Script::selected
	bool ___selected_2;
	// System.String Image05Script::name
	String_t* ___name_3;
	// UnityEngine.Color Image05Script::origincolor
	Color_t2555686324  ___origincolor_4;

public:
	inline static int32_t get_offset_of_selected_2() { return static_cast<int32_t>(offsetof(Image05Script_t1027954888, ___selected_2)); }
	inline bool get_selected_2() const { return ___selected_2; }
	inline bool* get_address_of_selected_2() { return &___selected_2; }
	inline void set_selected_2(bool value)
	{
		___selected_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(Image05Script_t1027954888, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_origincolor_4() { return static_cast<int32_t>(offsetof(Image05Script_t1027954888, ___origincolor_4)); }
	inline Color_t2555686324  get_origincolor_4() const { return ___origincolor_4; }
	inline Color_t2555686324 * get_address_of_origincolor_4() { return &___origincolor_4; }
	inline void set_origincolor_4(Color_t2555686324  value)
	{
		___origincolor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE05SCRIPT_T1027954888_H
#ifndef IMAGE1POS_T715604387_H
#define IMAGE1POS_T715604387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Image1pos
struct  Image1pos_t715604387  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Canvas Image1pos::canv
	Canvas_t3310196443 * ___canv_2;

public:
	inline static int32_t get_offset_of_canv_2() { return static_cast<int32_t>(offsetof(Image1pos_t715604387, ___canv_2)); }
	inline Canvas_t3310196443 * get_canv_2() const { return ___canv_2; }
	inline Canvas_t3310196443 ** get_address_of_canv_2() { return &___canv_2; }
	inline void set_canv_2(Canvas_t3310196443 * value)
	{
		___canv_2 = value;
		Il2CppCodeGenWriteBarrier((&___canv_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE1POS_T715604387_H
#ifndef POSITIONSET_T2664798813_H
#define POSITIONSET_T2664798813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Positionset
struct  Positionset_t2664798813  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONSET_T2664798813_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public MonoBehaviour_t3962482529
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_2;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_3;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_4;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3722313464  ___mPreviousScale_6;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_7;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_8;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_9;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_2)); }
	inline double get_U3CTimeStampU3Ek__BackingField_2() const { return ___U3CTimeStampU3Ek__BackingField_2; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_2() { return &___U3CTimeStampU3Ek__BackingField_2; }
	inline void set_U3CTimeStampU3Ek__BackingField_2(double value)
	{
		___U3CTimeStampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_3)); }
	inline String_t* get_mTrackableName_3() const { return ___mTrackableName_3; }
	inline String_t** get_address_of_mTrackableName_3() { return &___mTrackableName_3; }
	inline void set_mTrackableName_3(String_t* value)
	{
		___mTrackableName_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_3), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_4)); }
	inline bool get_mPreserveChildSize_4() const { return ___mPreserveChildSize_4; }
	inline bool* get_address_of_mPreserveChildSize_4() { return &___mPreserveChildSize_4; }
	inline void set_mPreserveChildSize_4(bool value)
	{
		___mPreserveChildSize_4 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_5)); }
	inline bool get_mInitializedInEditor_5() const { return ___mInitializedInEditor_5; }
	inline bool* get_address_of_mInitializedInEditor_5() { return &___mInitializedInEditor_5; }
	inline void set_mInitializedInEditor_5(bool value)
	{
		___mInitializedInEditor_5 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_6)); }
	inline Vector3_t3722313464  get_mPreviousScale_6() const { return ___mPreviousScale_6; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_6() { return &___mPreviousScale_6; }
	inline void set_mPreviousScale_6(Vector3_t3722313464  value)
	{
		___mPreviousScale_6 = value;
	}

	inline static int32_t get_offset_of_mStatus_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_7)); }
	inline int32_t get_mStatus_7() const { return ___mStatus_7; }
	inline int32_t* get_address_of_mStatus_7() { return &___mStatus_7; }
	inline void set_mStatus_7(int32_t value)
	{
		___mStatus_7 = value;
	}

	inline static int32_t get_offset_of_mTrackable_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_8)); }
	inline RuntimeObject* get_mTrackable_8() const { return ___mTrackable_8; }
	inline RuntimeObject** get_address_of_mTrackable_8() { return &___mTrackable_8; }
	inline void set_mTrackable_8(RuntimeObject* value)
	{
		___mTrackable_8 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_8), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_9)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_9() const { return ___mTrackableEventHandlers_9; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_9() { return &___mTrackableEventHandlers_9; }
	inline void set_mTrackableEventHandlers_9(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef WAYFINDING_T2735345900_H
#define WAYFINDING_T2735345900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// wayFinding
struct  wayFinding_t2735345900  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject wayFinding::arrowInstance
	GameObject_t1113636619 * ___arrowInstance_2;
	// UnityEngine.Material wayFinding::mat
	Material_t340375123 * ___mat_3;
	// System.String wayFinding::url
	String_t* ___url_4;
	// UnityEngine.GameObject wayFinding::startTravelBtn
	GameObject_t1113636619 * ___startTravelBtn_5;
	// UnityEngine.GameObject wayFinding::finishTravelBtn
	GameObject_t1113636619 * ___finishTravelBtn_6;
	// UnityEngine.GameObject wayFinding::startScanBtn
	GameObject_t1113636619 * ___startScanBtn_7;
	// System.Collections.Generic.List`1<System.String> wayFinding::mat_List
	List_1_t3319525431 * ___mat_List_8;
	// System.String wayFinding::drawer
	String_t* ___drawer_9;
	// System.Collections.Hashtable wayFinding::selectedObjTable
	Hashtable_t1853889766 * ___selectedObjTable_10;
	// UnityEngine.Vector3 wayFinding::start
	Vector3_t3722313464  ___start_11;
	// System.Collections.Hashtable wayFinding::table
	Hashtable_t1853889766 * ___table_12;
	// System.Collections.Hashtable wayFinding::database
	Hashtable_t1853889766 * ___database_13;
	// WandSelection wayFinding::ws
	WandSelection_t972065371 * ___ws_14;
	// database wayFinding::db
	database_t2832598855 * ___db_15;
	// System.Boolean wayFinding::traveling
	bool ___traveling_16;
	// System.Boolean wayFinding::flag1
	bool ___flag1_17;
	// System.Boolean wayFinding::flag2
	bool ___flag2_18;

public:
	inline static int32_t get_offset_of_arrowInstance_2() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___arrowInstance_2)); }
	inline GameObject_t1113636619 * get_arrowInstance_2() const { return ___arrowInstance_2; }
	inline GameObject_t1113636619 ** get_address_of_arrowInstance_2() { return &___arrowInstance_2; }
	inline void set_arrowInstance_2(GameObject_t1113636619 * value)
	{
		___arrowInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___arrowInstance_2), value);
	}

	inline static int32_t get_offset_of_mat_3() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___mat_3)); }
	inline Material_t340375123 * get_mat_3() const { return ___mat_3; }
	inline Material_t340375123 ** get_address_of_mat_3() { return &___mat_3; }
	inline void set_mat_3(Material_t340375123 * value)
	{
		___mat_3 = value;
		Il2CppCodeGenWriteBarrier((&___mat_3), value);
	}

	inline static int32_t get_offset_of_url_4() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___url_4)); }
	inline String_t* get_url_4() const { return ___url_4; }
	inline String_t** get_address_of_url_4() { return &___url_4; }
	inline void set_url_4(String_t* value)
	{
		___url_4 = value;
		Il2CppCodeGenWriteBarrier((&___url_4), value);
	}

	inline static int32_t get_offset_of_startTravelBtn_5() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___startTravelBtn_5)); }
	inline GameObject_t1113636619 * get_startTravelBtn_5() const { return ___startTravelBtn_5; }
	inline GameObject_t1113636619 ** get_address_of_startTravelBtn_5() { return &___startTravelBtn_5; }
	inline void set_startTravelBtn_5(GameObject_t1113636619 * value)
	{
		___startTravelBtn_5 = value;
		Il2CppCodeGenWriteBarrier((&___startTravelBtn_5), value);
	}

	inline static int32_t get_offset_of_finishTravelBtn_6() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___finishTravelBtn_6)); }
	inline GameObject_t1113636619 * get_finishTravelBtn_6() const { return ___finishTravelBtn_6; }
	inline GameObject_t1113636619 ** get_address_of_finishTravelBtn_6() { return &___finishTravelBtn_6; }
	inline void set_finishTravelBtn_6(GameObject_t1113636619 * value)
	{
		___finishTravelBtn_6 = value;
		Il2CppCodeGenWriteBarrier((&___finishTravelBtn_6), value);
	}

	inline static int32_t get_offset_of_startScanBtn_7() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___startScanBtn_7)); }
	inline GameObject_t1113636619 * get_startScanBtn_7() const { return ___startScanBtn_7; }
	inline GameObject_t1113636619 ** get_address_of_startScanBtn_7() { return &___startScanBtn_7; }
	inline void set_startScanBtn_7(GameObject_t1113636619 * value)
	{
		___startScanBtn_7 = value;
		Il2CppCodeGenWriteBarrier((&___startScanBtn_7), value);
	}

	inline static int32_t get_offset_of_mat_List_8() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___mat_List_8)); }
	inline List_1_t3319525431 * get_mat_List_8() const { return ___mat_List_8; }
	inline List_1_t3319525431 ** get_address_of_mat_List_8() { return &___mat_List_8; }
	inline void set_mat_List_8(List_1_t3319525431 * value)
	{
		___mat_List_8 = value;
		Il2CppCodeGenWriteBarrier((&___mat_List_8), value);
	}

	inline static int32_t get_offset_of_drawer_9() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___drawer_9)); }
	inline String_t* get_drawer_9() const { return ___drawer_9; }
	inline String_t** get_address_of_drawer_9() { return &___drawer_9; }
	inline void set_drawer_9(String_t* value)
	{
		___drawer_9 = value;
		Il2CppCodeGenWriteBarrier((&___drawer_9), value);
	}

	inline static int32_t get_offset_of_selectedObjTable_10() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___selectedObjTable_10)); }
	inline Hashtable_t1853889766 * get_selectedObjTable_10() const { return ___selectedObjTable_10; }
	inline Hashtable_t1853889766 ** get_address_of_selectedObjTable_10() { return &___selectedObjTable_10; }
	inline void set_selectedObjTable_10(Hashtable_t1853889766 * value)
	{
		___selectedObjTable_10 = value;
		Il2CppCodeGenWriteBarrier((&___selectedObjTable_10), value);
	}

	inline static int32_t get_offset_of_start_11() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___start_11)); }
	inline Vector3_t3722313464  get_start_11() const { return ___start_11; }
	inline Vector3_t3722313464 * get_address_of_start_11() { return &___start_11; }
	inline void set_start_11(Vector3_t3722313464  value)
	{
		___start_11 = value;
	}

	inline static int32_t get_offset_of_table_12() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___table_12)); }
	inline Hashtable_t1853889766 * get_table_12() const { return ___table_12; }
	inline Hashtable_t1853889766 ** get_address_of_table_12() { return &___table_12; }
	inline void set_table_12(Hashtable_t1853889766 * value)
	{
		___table_12 = value;
		Il2CppCodeGenWriteBarrier((&___table_12), value);
	}

	inline static int32_t get_offset_of_database_13() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___database_13)); }
	inline Hashtable_t1853889766 * get_database_13() const { return ___database_13; }
	inline Hashtable_t1853889766 ** get_address_of_database_13() { return &___database_13; }
	inline void set_database_13(Hashtable_t1853889766 * value)
	{
		___database_13 = value;
		Il2CppCodeGenWriteBarrier((&___database_13), value);
	}

	inline static int32_t get_offset_of_ws_14() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___ws_14)); }
	inline WandSelection_t972065371 * get_ws_14() const { return ___ws_14; }
	inline WandSelection_t972065371 ** get_address_of_ws_14() { return &___ws_14; }
	inline void set_ws_14(WandSelection_t972065371 * value)
	{
		___ws_14 = value;
		Il2CppCodeGenWriteBarrier((&___ws_14), value);
	}

	inline static int32_t get_offset_of_db_15() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___db_15)); }
	inline database_t2832598855 * get_db_15() const { return ___db_15; }
	inline database_t2832598855 ** get_address_of_db_15() { return &___db_15; }
	inline void set_db_15(database_t2832598855 * value)
	{
		___db_15 = value;
		Il2CppCodeGenWriteBarrier((&___db_15), value);
	}

	inline static int32_t get_offset_of_traveling_16() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___traveling_16)); }
	inline bool get_traveling_16() const { return ___traveling_16; }
	inline bool* get_address_of_traveling_16() { return &___traveling_16; }
	inline void set_traveling_16(bool value)
	{
		___traveling_16 = value;
	}

	inline static int32_t get_offset_of_flag1_17() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___flag1_17)); }
	inline bool get_flag1_17() const { return ___flag1_17; }
	inline bool* get_address_of_flag1_17() { return &___flag1_17; }
	inline void set_flag1_17(bool value)
	{
		___flag1_17 = value;
	}

	inline static int32_t get_offset_of_flag2_18() { return static_cast<int32_t>(offsetof(wayFinding_t2735345900, ___flag2_18)); }
	inline bool get_flag2_18() const { return ___flag2_18; }
	inline bool* get_address_of_flag2_18() { return &___flag2_18; }
	inline void set_flag2_18(bool value)
	{
		___flag2_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYFINDING_T2735345900_H
#ifndef SCROLLDETAILTEXTURE_T3112174197_H
#define SCROLLDETAILTEXTURE_T3112174197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollDetailTexture
struct  ScrollDetailTexture_t3112174197  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean ScrollDetailTexture::uniqueMaterial
	bool ___uniqueMaterial_2;
	// UnityEngine.Vector2 ScrollDetailTexture::scrollPerSecond
	Vector2_t2156229523  ___scrollPerSecond_3;
	// UnityEngine.Matrix4x4 ScrollDetailTexture::m_Matrix
	Matrix4x4_t1817901843  ___m_Matrix_4;
	// UnityEngine.Material ScrollDetailTexture::mCopy
	Material_t340375123 * ___mCopy_5;
	// UnityEngine.Material ScrollDetailTexture::mOriginal
	Material_t340375123 * ___mOriginal_6;
	// UnityEngine.UI.Image ScrollDetailTexture::mSprite
	Image_t2670269651 * ___mSprite_7;
	// UnityEngine.Material ScrollDetailTexture::m_Mat
	Material_t340375123 * ___m_Mat_8;

public:
	inline static int32_t get_offset_of_uniqueMaterial_2() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3112174197, ___uniqueMaterial_2)); }
	inline bool get_uniqueMaterial_2() const { return ___uniqueMaterial_2; }
	inline bool* get_address_of_uniqueMaterial_2() { return &___uniqueMaterial_2; }
	inline void set_uniqueMaterial_2(bool value)
	{
		___uniqueMaterial_2 = value;
	}

	inline static int32_t get_offset_of_scrollPerSecond_3() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3112174197, ___scrollPerSecond_3)); }
	inline Vector2_t2156229523  get_scrollPerSecond_3() const { return ___scrollPerSecond_3; }
	inline Vector2_t2156229523 * get_address_of_scrollPerSecond_3() { return &___scrollPerSecond_3; }
	inline void set_scrollPerSecond_3(Vector2_t2156229523  value)
	{
		___scrollPerSecond_3 = value;
	}

	inline static int32_t get_offset_of_m_Matrix_4() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3112174197, ___m_Matrix_4)); }
	inline Matrix4x4_t1817901843  get_m_Matrix_4() const { return ___m_Matrix_4; }
	inline Matrix4x4_t1817901843 * get_address_of_m_Matrix_4() { return &___m_Matrix_4; }
	inline void set_m_Matrix_4(Matrix4x4_t1817901843  value)
	{
		___m_Matrix_4 = value;
	}

	inline static int32_t get_offset_of_mCopy_5() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3112174197, ___mCopy_5)); }
	inline Material_t340375123 * get_mCopy_5() const { return ___mCopy_5; }
	inline Material_t340375123 ** get_address_of_mCopy_5() { return &___mCopy_5; }
	inline void set_mCopy_5(Material_t340375123 * value)
	{
		___mCopy_5 = value;
		Il2CppCodeGenWriteBarrier((&___mCopy_5), value);
	}

	inline static int32_t get_offset_of_mOriginal_6() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3112174197, ___mOriginal_6)); }
	inline Material_t340375123 * get_mOriginal_6() const { return ___mOriginal_6; }
	inline Material_t340375123 ** get_address_of_mOriginal_6() { return &___mOriginal_6; }
	inline void set_mOriginal_6(Material_t340375123 * value)
	{
		___mOriginal_6 = value;
		Il2CppCodeGenWriteBarrier((&___mOriginal_6), value);
	}

	inline static int32_t get_offset_of_mSprite_7() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3112174197, ___mSprite_7)); }
	inline Image_t2670269651 * get_mSprite_7() const { return ___mSprite_7; }
	inline Image_t2670269651 ** get_address_of_mSprite_7() { return &___mSprite_7; }
	inline void set_mSprite_7(Image_t2670269651 * value)
	{
		___mSprite_7 = value;
		Il2CppCodeGenWriteBarrier((&___mSprite_7), value);
	}

	inline static int32_t get_offset_of_m_Mat_8() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3112174197, ___m_Mat_8)); }
	inline Material_t340375123 * get_m_Mat_8() const { return ___m_Mat_8; }
	inline Material_t340375123 ** get_address_of_m_Mat_8() { return &___m_Mat_8; }
	inline void set_m_Mat_8(Material_t340375123 * value)
	{
		___m_Mat_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mat_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLDETAILTEXTURE_T3112174197_H
#ifndef SCROLLPOS_T1103970193_H
#define SCROLLPOS_T1103970193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scrollpos
struct  Scrollpos_t1103970193  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Canvas Scrollpos::canv
	Canvas_t3310196443 * ___canv_2;

public:
	inline static int32_t get_offset_of_canv_2() { return static_cast<int32_t>(offsetof(Scrollpos_t1103970193, ___canv_2)); }
	inline Canvas_t3310196443 * get_canv_2() const { return ___canv_2; }
	inline Canvas_t3310196443 ** get_address_of_canv_2() { return &___canv_2; }
	inline void set_canv_2(Canvas_t3310196443 * value)
	{
		___canv_2 = value;
		Il2CppCodeGenWriteBarrier((&___canv_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLPOS_T1103970193_H
#ifndef SHOWSLIDERVALUE_T410941925_H
#define SHOWSLIDERVALUE_T410941925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowSliderValue
struct  ShowSliderValue_t410941925  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOWSLIDERVALUE_T410941925_H
#ifndef TILTWINDOW_T335293945_H
#define TILTWINDOW_T335293945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TiltWindow
struct  TiltWindow_t335293945  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector2 TiltWindow::range
	Vector2_t2156229523  ___range_2;
	// UnityEngine.Transform TiltWindow::mTrans
	Transform_t3600365921 * ___mTrans_3;
	// UnityEngine.Quaternion TiltWindow::mStart
	Quaternion_t2301928331  ___mStart_4;
	// UnityEngine.Vector2 TiltWindow::mRot
	Vector2_t2156229523  ___mRot_5;

public:
	inline static int32_t get_offset_of_range_2() { return static_cast<int32_t>(offsetof(TiltWindow_t335293945, ___range_2)); }
	inline Vector2_t2156229523  get_range_2() const { return ___range_2; }
	inline Vector2_t2156229523 * get_address_of_range_2() { return &___range_2; }
	inline void set_range_2(Vector2_t2156229523  value)
	{
		___range_2 = value;
	}

	inline static int32_t get_offset_of_mTrans_3() { return static_cast<int32_t>(offsetof(TiltWindow_t335293945, ___mTrans_3)); }
	inline Transform_t3600365921 * get_mTrans_3() const { return ___mTrans_3; }
	inline Transform_t3600365921 ** get_address_of_mTrans_3() { return &___mTrans_3; }
	inline void set_mTrans_3(Transform_t3600365921 * value)
	{
		___mTrans_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrans_3), value);
	}

	inline static int32_t get_offset_of_mStart_4() { return static_cast<int32_t>(offsetof(TiltWindow_t335293945, ___mStart_4)); }
	inline Quaternion_t2301928331  get_mStart_4() const { return ___mStart_4; }
	inline Quaternion_t2301928331 * get_address_of_mStart_4() { return &___mStart_4; }
	inline void set_mStart_4(Quaternion_t2301928331  value)
	{
		___mStart_4 = value;
	}

	inline static int32_t get_offset_of_mRot_5() { return static_cast<int32_t>(offsetof(TiltWindow_t335293945, ___mRot_5)); }
	inline Vector2_t2156229523  get_mRot_5() const { return ___mRot_5; }
	inline Vector2_t2156229523 * get_address_of_mRot_5() { return &___mRot_5; }
	inline void set_mRot_5(Vector2_t2156229523  value)
	{
		___mRot_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILTWINDOW_T335293945_H
#ifndef UICUBE_T784951944_H
#define UICUBE_T784951944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICube
struct  UICube_t784951944  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UICube::angle
	float ___angle_2;
	// System.Single UICube::speed
	float ___speed_3;
	// System.Single UICube::distance
	float ___distance_4;

public:
	inline static int32_t get_offset_of_angle_2() { return static_cast<int32_t>(offsetof(UICube_t784951944, ___angle_2)); }
	inline float get_angle_2() const { return ___angle_2; }
	inline float* get_address_of_angle_2() { return &___angle_2; }
	inline void set_angle_2(float value)
	{
		___angle_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(UICube_t784951944, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(UICube_t784951944, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICUBE_T784951944_H
#ifndef WANDPANELPOS_T1049921294_H
#define WANDPANELPOS_T1049921294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WandPanelpos
struct  WandPanelpos_t1049921294  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject WandPanelpos::p
	GameObject_t1113636619 * ___p_2;

public:
	inline static int32_t get_offset_of_p_2() { return static_cast<int32_t>(offsetof(WandPanelpos_t1049921294, ___p_2)); }
	inline GameObject_t1113636619 * get_p_2() const { return ___p_2; }
	inline GameObject_t1113636619 ** get_address_of_p_2() { return &___p_2; }
	inline void set_p_2(GameObject_t1113636619 * value)
	{
		___p_2 = value;
		Il2CppCodeGenWriteBarrier((&___p_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WANDPANELPOS_T1049921294_H
#ifndef RESIZEPANEL_T4061714193_H
#define RESIZEPANEL_T4061714193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResizePanel
struct  ResizePanel_t4061714193  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector2 ResizePanel::minSize
	Vector2_t2156229523  ___minSize_2;
	// UnityEngine.Vector2 ResizePanel::maxSize
	Vector2_t2156229523  ___maxSize_3;
	// UnityEngine.RectTransform ResizePanel::panelRectTransform
	RectTransform_t3704657025 * ___panelRectTransform_4;
	// UnityEngine.Vector2 ResizePanel::originalLocalPointerPosition
	Vector2_t2156229523  ___originalLocalPointerPosition_5;
	// UnityEngine.Vector2 ResizePanel::originalSizeDelta
	Vector2_t2156229523  ___originalSizeDelta_6;

public:
	inline static int32_t get_offset_of_minSize_2() { return static_cast<int32_t>(offsetof(ResizePanel_t4061714193, ___minSize_2)); }
	inline Vector2_t2156229523  get_minSize_2() const { return ___minSize_2; }
	inline Vector2_t2156229523 * get_address_of_minSize_2() { return &___minSize_2; }
	inline void set_minSize_2(Vector2_t2156229523  value)
	{
		___minSize_2 = value;
	}

	inline static int32_t get_offset_of_maxSize_3() { return static_cast<int32_t>(offsetof(ResizePanel_t4061714193, ___maxSize_3)); }
	inline Vector2_t2156229523  get_maxSize_3() const { return ___maxSize_3; }
	inline Vector2_t2156229523 * get_address_of_maxSize_3() { return &___maxSize_3; }
	inline void set_maxSize_3(Vector2_t2156229523  value)
	{
		___maxSize_3 = value;
	}

	inline static int32_t get_offset_of_panelRectTransform_4() { return static_cast<int32_t>(offsetof(ResizePanel_t4061714193, ___panelRectTransform_4)); }
	inline RectTransform_t3704657025 * get_panelRectTransform_4() const { return ___panelRectTransform_4; }
	inline RectTransform_t3704657025 ** get_address_of_panelRectTransform_4() { return &___panelRectTransform_4; }
	inline void set_panelRectTransform_4(RectTransform_t3704657025 * value)
	{
		___panelRectTransform_4 = value;
		Il2CppCodeGenWriteBarrier((&___panelRectTransform_4), value);
	}

	inline static int32_t get_offset_of_originalLocalPointerPosition_5() { return static_cast<int32_t>(offsetof(ResizePanel_t4061714193, ___originalLocalPointerPosition_5)); }
	inline Vector2_t2156229523  get_originalLocalPointerPosition_5() const { return ___originalLocalPointerPosition_5; }
	inline Vector2_t2156229523 * get_address_of_originalLocalPointerPosition_5() { return &___originalLocalPointerPosition_5; }
	inline void set_originalLocalPointerPosition_5(Vector2_t2156229523  value)
	{
		___originalLocalPointerPosition_5 = value;
	}

	inline static int32_t get_offset_of_originalSizeDelta_6() { return static_cast<int32_t>(offsetof(ResizePanel_t4061714193, ___originalSizeDelta_6)); }
	inline Vector2_t2156229523  get_originalSizeDelta_6() const { return ___originalSizeDelta_6; }
	inline Vector2_t2156229523 * get_address_of_originalSizeDelta_6() { return &___originalSizeDelta_6; }
	inline void set_originalSizeDelta_6(Vector2_t2156229523  value)
	{
		___originalSizeDelta_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESIZEPANEL_T4061714193_H
#ifndef RADIALPROGRESSBAR_T2821283243_H
#define RADIALPROGRESSBAR_T2821283243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RadialProgressBar
struct  RadialProgressBar_t2821283243  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform RadialProgressBar::LoadingBar
	Transform_t3600365921 * ___LoadingBar_2;
	// UnityEngine.Transform RadialProgressBar::Text
	Transform_t3600365921 * ___Text_3;
	// System.Boolean RadialProgressBar::signalCol
	bool ___signalCol_4;
	// System.Single RadialProgressBar::currentAmount
	float ___currentAmount_5;
	// System.Single RadialProgressBar::speed
	float ___speed_6;

public:
	inline static int32_t get_offset_of_LoadingBar_2() { return static_cast<int32_t>(offsetof(RadialProgressBar_t2821283243, ___LoadingBar_2)); }
	inline Transform_t3600365921 * get_LoadingBar_2() const { return ___LoadingBar_2; }
	inline Transform_t3600365921 ** get_address_of_LoadingBar_2() { return &___LoadingBar_2; }
	inline void set_LoadingBar_2(Transform_t3600365921 * value)
	{
		___LoadingBar_2 = value;
		Il2CppCodeGenWriteBarrier((&___LoadingBar_2), value);
	}

	inline static int32_t get_offset_of_Text_3() { return static_cast<int32_t>(offsetof(RadialProgressBar_t2821283243, ___Text_3)); }
	inline Transform_t3600365921 * get_Text_3() const { return ___Text_3; }
	inline Transform_t3600365921 ** get_address_of_Text_3() { return &___Text_3; }
	inline void set_Text_3(Transform_t3600365921 * value)
	{
		___Text_3 = value;
		Il2CppCodeGenWriteBarrier((&___Text_3), value);
	}

	inline static int32_t get_offset_of_signalCol_4() { return static_cast<int32_t>(offsetof(RadialProgressBar_t2821283243, ___signalCol_4)); }
	inline bool get_signalCol_4() const { return ___signalCol_4; }
	inline bool* get_address_of_signalCol_4() { return &___signalCol_4; }
	inline void set_signalCol_4(bool value)
	{
		___signalCol_4 = value;
	}

	inline static int32_t get_offset_of_currentAmount_5() { return static_cast<int32_t>(offsetof(RadialProgressBar_t2821283243, ___currentAmount_5)); }
	inline float get_currentAmount_5() const { return ___currentAmount_5; }
	inline float* get_address_of_currentAmount_5() { return &___currentAmount_5; }
	inline void set_currentAmount_5(float value)
	{
		___currentAmount_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(RadialProgressBar_t2821283243, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RADIALPROGRESSBAR_T2821283243_H
#ifndef WANDSCRIPT_T1125606077_H
#define WANDSCRIPT_T1125606077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// wandScript
struct  wandScript_t1125606077  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean wandScript::signal
	bool ___signal_2;
	// System.String wandScript::nameCol
	String_t* ___nameCol_3;
	// UnityEngine.GameObject wandScript::canv1
	GameObject_t1113636619 * ___canv1_4;
	// UnityEngine.GameObject wandScript::canv2
	GameObject_t1113636619 * ___canv2_5;
	// UnityEngine.GameObject wandScript::canv3
	GameObject_t1113636619 * ___canv3_6;
	// UnityEngine.GameObject wandScript::canv4
	GameObject_t1113636619 * ___canv4_7;
	// UnityEngine.GameObject wandScript::UIcube
	GameObject_t1113636619 * ___UIcube_8;
	// UnityEngine.GameObject wandScript::progress
	GameObject_t1113636619 * ___progress_9;

public:
	inline static int32_t get_offset_of_signal_2() { return static_cast<int32_t>(offsetof(wandScript_t1125606077, ___signal_2)); }
	inline bool get_signal_2() const { return ___signal_2; }
	inline bool* get_address_of_signal_2() { return &___signal_2; }
	inline void set_signal_2(bool value)
	{
		___signal_2 = value;
	}

	inline static int32_t get_offset_of_nameCol_3() { return static_cast<int32_t>(offsetof(wandScript_t1125606077, ___nameCol_3)); }
	inline String_t* get_nameCol_3() const { return ___nameCol_3; }
	inline String_t** get_address_of_nameCol_3() { return &___nameCol_3; }
	inline void set_nameCol_3(String_t* value)
	{
		___nameCol_3 = value;
		Il2CppCodeGenWriteBarrier((&___nameCol_3), value);
	}

	inline static int32_t get_offset_of_canv1_4() { return static_cast<int32_t>(offsetof(wandScript_t1125606077, ___canv1_4)); }
	inline GameObject_t1113636619 * get_canv1_4() const { return ___canv1_4; }
	inline GameObject_t1113636619 ** get_address_of_canv1_4() { return &___canv1_4; }
	inline void set_canv1_4(GameObject_t1113636619 * value)
	{
		___canv1_4 = value;
		Il2CppCodeGenWriteBarrier((&___canv1_4), value);
	}

	inline static int32_t get_offset_of_canv2_5() { return static_cast<int32_t>(offsetof(wandScript_t1125606077, ___canv2_5)); }
	inline GameObject_t1113636619 * get_canv2_5() const { return ___canv2_5; }
	inline GameObject_t1113636619 ** get_address_of_canv2_5() { return &___canv2_5; }
	inline void set_canv2_5(GameObject_t1113636619 * value)
	{
		___canv2_5 = value;
		Il2CppCodeGenWriteBarrier((&___canv2_5), value);
	}

	inline static int32_t get_offset_of_canv3_6() { return static_cast<int32_t>(offsetof(wandScript_t1125606077, ___canv3_6)); }
	inline GameObject_t1113636619 * get_canv3_6() const { return ___canv3_6; }
	inline GameObject_t1113636619 ** get_address_of_canv3_6() { return &___canv3_6; }
	inline void set_canv3_6(GameObject_t1113636619 * value)
	{
		___canv3_6 = value;
		Il2CppCodeGenWriteBarrier((&___canv3_6), value);
	}

	inline static int32_t get_offset_of_canv4_7() { return static_cast<int32_t>(offsetof(wandScript_t1125606077, ___canv4_7)); }
	inline GameObject_t1113636619 * get_canv4_7() const { return ___canv4_7; }
	inline GameObject_t1113636619 ** get_address_of_canv4_7() { return &___canv4_7; }
	inline void set_canv4_7(GameObject_t1113636619 * value)
	{
		___canv4_7 = value;
		Il2CppCodeGenWriteBarrier((&___canv4_7), value);
	}

	inline static int32_t get_offset_of_UIcube_8() { return static_cast<int32_t>(offsetof(wandScript_t1125606077, ___UIcube_8)); }
	inline GameObject_t1113636619 * get_UIcube_8() const { return ___UIcube_8; }
	inline GameObject_t1113636619 ** get_address_of_UIcube_8() { return &___UIcube_8; }
	inline void set_UIcube_8(GameObject_t1113636619 * value)
	{
		___UIcube_8 = value;
		Il2CppCodeGenWriteBarrier((&___UIcube_8), value);
	}

	inline static int32_t get_offset_of_progress_9() { return static_cast<int32_t>(offsetof(wandScript_t1125606077, ___progress_9)); }
	inline GameObject_t1113636619 * get_progress_9() const { return ___progress_9; }
	inline GameObject_t1113636619 ** get_address_of_progress_9() { return &___progress_9; }
	inline void set_progress_9(GameObject_t1113636619 * value)
	{
		___progress_9 = value;
		Il2CppCodeGenWriteBarrier((&___progress_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WANDSCRIPT_T1125606077_H
#ifndef IMAGE04SCRIPT_T3494716217_H
#define IMAGE04SCRIPT_T3494716217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Image04Script
struct  Image04Script_t3494716217  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Image04Script::selected
	bool ___selected_2;
	// System.String Image04Script::name
	String_t* ___name_3;
	// UnityEngine.Color Image04Script::origincolor
	Color_t2555686324  ___origincolor_4;

public:
	inline static int32_t get_offset_of_selected_2() { return static_cast<int32_t>(offsetof(Image04Script_t3494716217, ___selected_2)); }
	inline bool get_selected_2() const { return ___selected_2; }
	inline bool* get_address_of_selected_2() { return &___selected_2; }
	inline void set_selected_2(bool value)
	{
		___selected_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(Image04Script_t3494716217, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_origincolor_4() { return static_cast<int32_t>(offsetof(Image04Script_t3494716217, ___origincolor_4)); }
	inline Color_t2555686324  get_origincolor_4() const { return ___origincolor_4; }
	inline Color_t2555686324 * get_address_of_origincolor_4() { return &___origincolor_4; }
	inline void set_origincolor_4(Color_t2555686324  value)
	{
		___origincolor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE04SCRIPT_T3494716217_H
#ifndef SCANNING_T651759208_H
#define SCANNING_T651759208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scanning
struct  Scanning_t651759208  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Hashtable Scanning::database
	Hashtable_t1853889766 * ___database_2;
	// System.Boolean Scanning::scanning
	bool ___scanning_3;
	// UnityEngine.GameObject Scanning::startScanBtn
	GameObject_t1113636619 * ___startScanBtn_4;
	// UnityEngine.GameObject Scanning::finishScanBtn
	GameObject_t1113636619 * ___finishScanBtn_5;
	// UnityEngine.GameObject Scanning::scanStatus
	GameObject_t1113636619 * ___scanStatus_6;

public:
	inline static int32_t get_offset_of_database_2() { return static_cast<int32_t>(offsetof(Scanning_t651759208, ___database_2)); }
	inline Hashtable_t1853889766 * get_database_2() const { return ___database_2; }
	inline Hashtable_t1853889766 ** get_address_of_database_2() { return &___database_2; }
	inline void set_database_2(Hashtable_t1853889766 * value)
	{
		___database_2 = value;
		Il2CppCodeGenWriteBarrier((&___database_2), value);
	}

	inline static int32_t get_offset_of_scanning_3() { return static_cast<int32_t>(offsetof(Scanning_t651759208, ___scanning_3)); }
	inline bool get_scanning_3() const { return ___scanning_3; }
	inline bool* get_address_of_scanning_3() { return &___scanning_3; }
	inline void set_scanning_3(bool value)
	{
		___scanning_3 = value;
	}

	inline static int32_t get_offset_of_startScanBtn_4() { return static_cast<int32_t>(offsetof(Scanning_t651759208, ___startScanBtn_4)); }
	inline GameObject_t1113636619 * get_startScanBtn_4() const { return ___startScanBtn_4; }
	inline GameObject_t1113636619 ** get_address_of_startScanBtn_4() { return &___startScanBtn_4; }
	inline void set_startScanBtn_4(GameObject_t1113636619 * value)
	{
		___startScanBtn_4 = value;
		Il2CppCodeGenWriteBarrier((&___startScanBtn_4), value);
	}

	inline static int32_t get_offset_of_finishScanBtn_5() { return static_cast<int32_t>(offsetof(Scanning_t651759208, ___finishScanBtn_5)); }
	inline GameObject_t1113636619 * get_finishScanBtn_5() const { return ___finishScanBtn_5; }
	inline GameObject_t1113636619 ** get_address_of_finishScanBtn_5() { return &___finishScanBtn_5; }
	inline void set_finishScanBtn_5(GameObject_t1113636619 * value)
	{
		___finishScanBtn_5 = value;
		Il2CppCodeGenWriteBarrier((&___finishScanBtn_5), value);
	}

	inline static int32_t get_offset_of_scanStatus_6() { return static_cast<int32_t>(offsetof(Scanning_t651759208, ___scanStatus_6)); }
	inline GameObject_t1113636619 * get_scanStatus_6() const { return ___scanStatus_6; }
	inline GameObject_t1113636619 ** get_address_of_scanStatus_6() { return &___scanStatus_6; }
	inline void set_scanStatus_6(GameObject_t1113636619 * value)
	{
		___scanStatus_6 = value;
		Il2CppCodeGenWriteBarrier((&___scanStatus_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCANNING_T651759208_H
#ifndef ASPECTRATIOFITTER_T3312407083_H
#define ASPECTRATIOFITTER_T3312407083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.AspectRatioFitter
struct  AspectRatioFitter_t3312407083  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.AspectRatioFitter/AspectMode UnityEngine.UI.AspectRatioFitter::m_AspectMode
	int32_t ___m_AspectMode_2;
	// System.Single UnityEngine.UI.AspectRatioFitter::m_AspectRatio
	float ___m_AspectRatio_3;
	// UnityEngine.RectTransform UnityEngine.UI.AspectRatioFitter::m_Rect
	RectTransform_t3704657025 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.AspectRatioFitter::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_5;

public:
	inline static int32_t get_offset_of_m_AspectMode_2() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3312407083, ___m_AspectMode_2)); }
	inline int32_t get_m_AspectMode_2() const { return ___m_AspectMode_2; }
	inline int32_t* get_address_of_m_AspectMode_2() { return &___m_AspectMode_2; }
	inline void set_m_AspectMode_2(int32_t value)
	{
		___m_AspectMode_2 = value;
	}

	inline static int32_t get_offset_of_m_AspectRatio_3() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3312407083, ___m_AspectRatio_3)); }
	inline float get_m_AspectRatio_3() const { return ___m_AspectRatio_3; }
	inline float* get_address_of_m_AspectRatio_3() { return &___m_AspectRatio_3; }
	inline void set_m_AspectRatio_3(float value)
	{
		___m_AspectRatio_3 = value;
	}

	inline static int32_t get_offset_of_m_Rect_4() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3312407083, ___m_Rect_4)); }
	inline RectTransform_t3704657025 * get_m_Rect_4() const { return ___m_Rect_4; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_4() { return &___m_Rect_4; }
	inline void set_m_Rect_4(RectTransform_t3704657025 * value)
	{
		___m_Rect_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_4), value);
	}

	inline static int32_t get_offset_of_m_Tracker_5() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3312407083, ___m_Tracker_5)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_5() const { return ___m_Tracker_5; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_5() { return &___m_Tracker_5; }
	inline void set_m_Tracker_5(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASPECTRATIOFITTER_T3312407083_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef EVENTSYSTEM_T1003666588_H
#define EVENTSYSTEM_T1003666588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t1003666588  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t3491343620 * ___m_SystemInputModules_2;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t2019268878 * ___m_CurrentInputModule_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t1113636619 * ___m_FirstSelected_5;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_6;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_7;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t1113636619 * ___m_CurrentSelected_8;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_9;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_10;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t3903027533 * ___m_DummyData_11;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_2() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SystemInputModules_2)); }
	inline List_1_t3491343620 * get_m_SystemInputModules_2() const { return ___m_SystemInputModules_2; }
	inline List_1_t3491343620 ** get_address_of_m_SystemInputModules_2() { return &___m_SystemInputModules_2; }
	inline void set_m_SystemInputModules_2(List_1_t3491343620 * value)
	{
		___m_SystemInputModules_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_3() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentInputModule_3)); }
	inline BaseInputModule_t2019268878 * get_m_CurrentInputModule_3() const { return ___m_CurrentInputModule_3; }
	inline BaseInputModule_t2019268878 ** get_address_of_m_CurrentInputModule_3() { return &___m_CurrentInputModule_3; }
	inline void set_m_CurrentInputModule_3(BaseInputModule_t2019268878 * value)
	{
		___m_CurrentInputModule_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_3), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_5() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_FirstSelected_5)); }
	inline GameObject_t1113636619 * get_m_FirstSelected_5() const { return ___m_FirstSelected_5; }
	inline GameObject_t1113636619 ** get_address_of_m_FirstSelected_5() { return &___m_FirstSelected_5; }
	inline void set_m_FirstSelected_5(GameObject_t1113636619 * value)
	{
		___m_FirstSelected_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_5), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_6() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_sendNavigationEvents_6)); }
	inline bool get_m_sendNavigationEvents_6() const { return ___m_sendNavigationEvents_6; }
	inline bool* get_address_of_m_sendNavigationEvents_6() { return &___m_sendNavigationEvents_6; }
	inline void set_m_sendNavigationEvents_6(bool value)
	{
		___m_sendNavigationEvents_6 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_7() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DragThreshold_7)); }
	inline int32_t get_m_DragThreshold_7() const { return ___m_DragThreshold_7; }
	inline int32_t* get_address_of_m_DragThreshold_7() { return &___m_DragThreshold_7; }
	inline void set_m_DragThreshold_7(int32_t value)
	{
		___m_DragThreshold_7 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_8() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentSelected_8)); }
	inline GameObject_t1113636619 * get_m_CurrentSelected_8() const { return ___m_CurrentSelected_8; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentSelected_8() { return &___m_CurrentSelected_8; }
	inline void set_m_CurrentSelected_8(GameObject_t1113636619 * value)
	{
		___m_CurrentSelected_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_8), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_9() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_HasFocus_9)); }
	inline bool get_m_HasFocus_9() const { return ___m_HasFocus_9; }
	inline bool* get_address_of_m_HasFocus_9() { return &___m_HasFocus_9; }
	inline void set_m_HasFocus_9(bool value)
	{
		___m_HasFocus_9 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_10() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SelectionGuard_10)); }
	inline bool get_m_SelectionGuard_10() const { return ___m_SelectionGuard_10; }
	inline bool* get_address_of_m_SelectionGuard_10() { return &___m_SelectionGuard_10; }
	inline void set_m_SelectionGuard_10(bool value)
	{
		___m_SelectionGuard_10 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_11() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DummyData_11)); }
	inline BaseEventData_t3903027533 * get_m_DummyData_11() const { return ___m_DummyData_11; }
	inline BaseEventData_t3903027533 ** get_address_of_m_DummyData_11() { return &___m_DummyData_11; }
	inline void set_m_DummyData_11(BaseEventData_t3903027533 * value)
	{
		___m_DummyData_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_11), value);
	}
};

struct EventSystem_t1003666588_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t2475741330 * ___m_EventSystems_4;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t3135238028 * ___s_RaycastComparer_12;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mg$cache0
	Comparison_1_t3135238028 * ___U3CU3Ef__mgU24cache0_13;

public:
	inline static int32_t get_offset_of_m_EventSystems_4() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___m_EventSystems_4)); }
	inline List_1_t2475741330 * get_m_EventSystems_4() const { return ___m_EventSystems_4; }
	inline List_1_t2475741330 ** get_address_of_m_EventSystems_4() { return &___m_EventSystems_4; }
	inline void set_m_EventSystems_4(List_1_t2475741330 * value)
	{
		___m_EventSystems_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_4), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_12() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___s_RaycastComparer_12)); }
	inline Comparison_1_t3135238028 * get_s_RaycastComparer_12() const { return ___s_RaycastComparer_12; }
	inline Comparison_1_t3135238028 ** get_address_of_s_RaycastComparer_12() { return &___s_RaycastComparer_12; }
	inline void set_s_RaycastComparer_12(Comparison_1_t3135238028 * value)
	{
		___s_RaycastComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_13() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___U3CU3Ef__mgU24cache0_13)); }
	inline Comparison_1_t3135238028 * get_U3CU3Ef__mgU24cache0_13() const { return ___U3CU3Ef__mgU24cache0_13; }
	inline Comparison_1_t3135238028 ** get_address_of_U3CU3Ef__mgU24cache0_13() { return &___U3CU3Ef__mgU24cache0_13; }
	inline void set_U3CU3Ef__mgU24cache0_13(Comparison_1_t3135238028 * value)
	{
		___U3CU3Ef__mgU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T1003666588_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef TOGGLE_T2735377061_H
#define TOGGLE_T2735377061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle
struct  Toggle_t2735377061  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t1660335611 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t123837990 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t1873685584 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;

public:
	inline static int32_t get_offset_of_toggleTransition_16() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___toggleTransition_16)); }
	inline int32_t get_toggleTransition_16() const { return ___toggleTransition_16; }
	inline int32_t* get_address_of_toggleTransition_16() { return &___toggleTransition_16; }
	inline void set_toggleTransition_16(int32_t value)
	{
		___toggleTransition_16 = value;
	}

	inline static int32_t get_offset_of_graphic_17() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___graphic_17)); }
	inline Graphic_t1660335611 * get_graphic_17() const { return ___graphic_17; }
	inline Graphic_t1660335611 ** get_address_of_graphic_17() { return &___graphic_17; }
	inline void set_graphic_17(Graphic_t1660335611 * value)
	{
		___graphic_17 = value;
		Il2CppCodeGenWriteBarrier((&___graphic_17), value);
	}

	inline static int32_t get_offset_of_m_Group_18() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_Group_18)); }
	inline ToggleGroup_t123837990 * get_m_Group_18() const { return ___m_Group_18; }
	inline ToggleGroup_t123837990 ** get_address_of_m_Group_18() { return &___m_Group_18; }
	inline void set_m_Group_18(ToggleGroup_t123837990 * value)
	{
		___m_Group_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Group_18), value);
	}

	inline static int32_t get_offset_of_onValueChanged_19() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___onValueChanged_19)); }
	inline ToggleEvent_t1873685584 * get_onValueChanged_19() const { return ___onValueChanged_19; }
	inline ToggleEvent_t1873685584 ** get_address_of_onValueChanged_19() { return &___onValueChanged_19; }
	inline void set_onValueChanged_19(ToggleEvent_t1873685584 * value)
	{
		___onValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___onValueChanged_19), value);
	}

	inline static int32_t get_offset_of_m_IsOn_20() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_IsOn_20)); }
	inline bool get_m_IsOn_20() const { return ___m_IsOn_20; }
	inline bool* get_address_of_m_IsOn_20() { return &___m_IsOn_20; }
	inline void set_m_IsOn_20(bool value)
	{
		___m_IsOn_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLE_T2735377061_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef RAWIMAGE_T3182918964_H
#define RAWIMAGE_T3182918964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RawImage
struct  RawImage_t3182918964  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t3661962703 * ___m_Texture_28;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t2360479859  ___m_UVRect_29;

public:
	inline static int32_t get_offset_of_m_Texture_28() { return static_cast<int32_t>(offsetof(RawImage_t3182918964, ___m_Texture_28)); }
	inline Texture_t3661962703 * get_m_Texture_28() const { return ___m_Texture_28; }
	inline Texture_t3661962703 ** get_address_of_m_Texture_28() { return &___m_Texture_28; }
	inline void set_m_Texture_28(Texture_t3661962703 * value)
	{
		___m_Texture_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_Texture_28), value);
	}

	inline static int32_t get_offset_of_m_UVRect_29() { return static_cast<int32_t>(offsetof(RawImage_t3182918964, ___m_UVRect_29)); }
	inline Rect_t2360479859  get_m_UVRect_29() const { return ___m_UVRect_29; }
	inline Rect_t2360479859 * get_address_of_m_UVRect_29() { return &___m_UVRect_29; }
	inline void set_m_UVRect_29(Rect_t2360479859  value)
	{
		___m_UVRect_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAWIMAGE_T3182918964_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t3310196443 * m_Items[1];

public:
	inline Canvas_t3310196443 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Canvas_t3310196443 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_t1322781432  m_Items[1];

public:
	inline WebCamDevice_t1322781432  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WebCamDevice_t1322781432  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t774044132  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Selectable_t3250028441 * m_Items[1];

public:
	inline Selectable_t3250028441 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Selectable_t3250028441 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Selectable_t3250028441 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Selectable_t3250028441 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Selectable_t3250028441 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Selectable_t3250028441 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t2555686324  m_Items[1];

public:
	inline Color_t2555686324  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t2555686324  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t340375123 * m_Items[1];

public:
	inline Material_t340375123 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Material_t340375123 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m3947764094_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2713332384_gshared (Action_1_t3593217305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// T DragMe::FindInParents<System.Object>(UnityEngine.GameObject)
extern "C"  RuntimeObject * DragMe_FindInParents_TisRuntimeObject_m1191662837_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3327106492_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m107019914_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* GameObject_GetComponentsInChildren_TisRuntimeObject_m836045_gshared (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C"  bool GameObject_get_activeSelf_m1767405923 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C"  void Application_LoadLevel_m2650087286 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ChangeColor::OnValueChanged(System.Single,System.Int32)
extern "C"  void ChangeColor_OnValueChanged_m3623988026 (ChangeColor_t3909000678 * __this, float ___value0, int32_t ___channel1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, method) ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::get_color()
extern "C"  Color_t2555686324  Material_get_color_m3827673574 (Material_t340375123 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
#define Component_GetComponent_TisLight_t3756812086_m916313317(__this, method) ((  Light_t3756812086 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Color UnityEngine.Light::get_color()
extern "C"  Color_t2555686324  Light_get_color_m552487206 (Light_t3756812086 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::set_Item(System.Int32,System.Single)
extern "C"  void Color_set_Item_m3480552301 (Color_t2555686324 * __this, int32_t p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m1794818007 (Material_t340375123 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
extern "C"  void Light_set_color_m608660336 (Light_t3756812086 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::get_value()
extern "C"  float Random_get_value_m3115885645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C"  String_t* Application_get_persistentDataPath_m1428108154 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void database::CreateSchema()
extern "C"  void database_CreateSchema_m3630400501 (database_t2832598855 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void database::InsertMat_Info(System.String,System.Int32,System.String)
extern "C"  void database_InsertMat_Info_m1941889789 (database_t2832598855 * __this, String_t* ___mat_name0, int32_t ___is_dangerous1, String_t* ___mat_des2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void database::Insert_Photo_By_URL(System.String,System.String,System.String,System.String,System.String,System.Int32)
extern "C"  void database_Insert_Photo_By_URL_m1652390081 (database_t2832598855 * __this, String_t* ___URL0, String_t* ___Mat11, String_t* ___Mat22, String_t* ___Mat33, String_t* ___Mat44, int32_t ___time_stamp5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void database::InsertMat_Drawer_Pair(System.String,System.String)
extern "C"  void database_InsertMat_Drawer_Pair_m366633393 (database_t2832598855 * __this, String_t* ___mat_name0, String_t* ___drawer_name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void database::Lookup_Mat(System.String,System.String&)
extern "C"  void database_Lookup_Mat_m148036058 (database_t2832598855 * __this, String_t* ___mat_name0, String_t** ___drawer_name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void database::Get_Description(System.String,System.Boolean&,System.String&)
extern "C"  void database_Get_Description_m2229621183 (database_t2832598855 * __this, String_t* ___Mat_name0, bool* ___is_dangerous1, String_t** ___description2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m1290152079(__this, p0, method) ((  void (*) (List_1_t3319525431 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method)
// System.Void database::Get_Image_URL(System.String,System.Collections.Generic.List`1<System.String>&)
extern "C"  void database_Get_Image_URL_m4261697933 (database_t2832598855 * __this, String_t* ___Mat_name0, List_1_t3319525431 ** ___URL_List1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m669319585(__this, method) ((  Enumerator_t913802012  (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
#define Enumerator_get_Current_m3378792279(__this, method) ((  String_t* (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
#define Enumerator_MoveNext_m1254101744(__this, method) ((  bool (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
#define Enumerator_Dispose_m2026665411(__this, method) ((  void (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m2276455407(__this, method) ((  int32_t (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void database::Lookup_URL(System.String,System.Collections.Generic.List`1<System.String>&)
extern "C"  void database_Lookup_URL_m2247219714 (database_t2832598855 * __this, String_t* ___URL0, List_1_t3319525431 ** ___Mat_List1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnection::.ctor(System.String)
extern "C"  void SqliteConnection__ctor_m1023779099 (SqliteConnection_t3870565407 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteConnection::CreateCommand()
extern "C"  SqliteCommand_t3916884476 * SqliteConnection_CreateCommand_m1680859346 (SqliteConnection_t3870565407 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteParameterCollection Mono.Data.Sqlite.SqliteCommand::get_Parameters()
extern "C"  SqliteParameterCollection_t2576174450 * SqliteCommand_get_Parameters_m1252166937 (SqliteCommand_t3916884476 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor()
extern "C"  void SqliteParameter__ctor_m3178908702 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(Mono.Data.Sqlite.SqliteParameter)
extern "C"  int32_t SqliteParameterCollection_Add_m649006753 (SqliteParameterCollection_t2576174450 * __this, SqliteParameter_t314071523 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteDataReader Mono.Data.Sqlite.SqliteCommand::ExecuteReader()
extern "C"  SqliteDataReader_t2933346592 * SqliteCommand_ExecuteReader_m2650318165 (SqliteCommand_t3916884476 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
#define List_1_Add_m1685793073(__this, p0, method) ((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m3729392029(__this, p0, method) ((  String_t* (*) (List_1_t3319525431 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Collections.IEnumerator database::upload_graph(UnityEngine.Texture2D,System.String)
extern "C"  RuntimeObject* database_upload_graph_m1526148084 (database_t2832598855 * __this, Texture2D_t3840446185 * ___tex0, String_t* ___upload_name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void database/<upload_graph>c__Iterator0::.ctor()
extern "C"  void U3Cupload_graphU3Ec__Iterator0__ctor_m3944818885 (U3Cupload_graphU3Ec__Iterator0_t3978570228 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C"  void WaitForEndOfFrame__ctor_m1381314187 (WaitForEndOfFrame_t1314943911 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
extern "C"  ByteU5BU5D_t4116647657* ImageConversion_EncodeToPNG_m2292631531 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::.ctor()
extern "C"  void WWWForm__ctor_m2465700452 (WWWForm_t4064702195 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C"  int32_t Time_get_frameCount_m1220035214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C"  void WWWForm_AddField_m2357902982 (WWWForm_t4064702195 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
extern "C"  void WWWForm_AddBinaryData_m1593257607 (WWWForm_t4064702195 * __this, String_t* p0, ByteU5BU5D_t4116647657* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C"  void WWW__ctor_m1562165 (WWW_t3688466362 * __this, String_t* p0, WWWForm_t4064702195 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C"  String_t* WWW_get_error_m3055313367 (WWW_t3688466362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C"  String_t* WWW_get_text_m898164367 (WWW_t3688466362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_url()
extern "C"  String_t* WWW_get_url_m3672399347 (WWW_t3688466362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_SetErrorCode_m599033302 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C"  void DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::get_Instance()
extern "C"  VuforiaRuntime_t1949122020 * VuforiaRuntime_get_Instance_m1058251676 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m2713332384(__this, p0, p1, method) ((  void (*) (Action_1_t3593217305 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2713332384_gshared)(__this, p0, p1, method)
// System.Void Vuforia.VuforiaRuntime::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C"  void DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void WindowFunction__ctor_m2544237635 (WindowFunction_t3146511083 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C"  Rect_t2360479859  GUI_Window_m1088326791 (RuntimeObject * __this /* static, unused */, int32_t p0, Rect_t2360479859  p1, WindowFunction_t3146511083 * p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntime::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m2420537077 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m2223708732 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C"  String_t* DefaultInitializationErrorHandler_getKeyInfo_m1864640064 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_productName()
extern "C"  String_t* Application_get_productName_m2401755738 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C"  VuforiaConfiguration_t1763229349 * VuforiaConfiguration_get_Instance_m3335903280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
extern "C"  GenericVuforiaConfiguration_t3697830469 * VuforiaConfiguration_get_Vuforia_m1588208597 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
extern "C"  String_t* GenericVuforiaConfiguration_get_LicenseKey_m2270076687 (GenericVuforiaConfiguration_t3697830469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Screen::get_dpi()
extern "C"  float Screen_get_dpi_m495672463 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C"  Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C"  void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C"  GUIStyleState_t1397964415 * GUIStyle_get_normal_m729441812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C"  void GUIStyleState_set_background_m369476077 (GUIStyleState_t1397964415 * __this, Texture2D_t3840446185 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
#define Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(__this /* static, unused */, p0, method) ((  Font_t1956802104 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C"  void GUIStyle_set_font_m2490449107 (GUIStyle_t3956901511 * __this, Font_t1956802104 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C"  void GUIStyle_set_fontSize_m1566850023 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C"  void GUIStyleState_set_textColor_m1105876047 (GUIStyleState_t1397964415 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C"  void GUIStyle_set_wordWrap_m1419501823 (GUIStyle_t3956901511 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C"  void GUIStyle_set_alignment_m3944619660 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void RectOffset__ctor_m732140021 (RectOffset_t1369453676 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_padding_m3302456044 (GUIStyle_t3956901511 * __this, RectOffset_t1369453676 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C"  void GUIStyle__ctor_m2912682974 (GUIStyle_t3956901511 * __this, GUIStyle_t3956901511 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, Color_t2555686324  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
#define Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, method) ((  TrackableBehaviour_t1113559212 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  void TrackableBehaviour_RegisterTrackableEventHandler_m2462783619 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C"  String_t* TrackableBehaviour_get_TrackableName_m3644057705 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
#define Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, p0, method) ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
#define Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, p0, method) ((  ColliderU5BU5D_t4234922487* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>(System.Boolean)
#define Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, p0, method) ((  CanvasU5BU5D_t682926938* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::.ctor()
#define Dictionary_2__ctor_m1313944780(__this, method) ((  void (*) (Dictionary_2_t2349950 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RectTransform>::.ctor()
#define Dictionary_2__ctor_m643394606(__this, method) ((  void (*) (Dictionary_2_t2593370356 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// T DragMe::FindInParents<UnityEngine.Canvas>(UnityEngine.GameObject)
#define DragMe_FindInParents_TisCanvas_t3310196443_m2011939038(__this /* static, unused */, ___go0, method) ((  Canvas_t3310196443 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))DragMe_FindInParents_TisRuntimeObject_m1191662837_gshared)(__this /* static, unused */, ___go0, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
extern "C"  int32_t PointerEventData_get_pointerId_m1200356155 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m3272033541(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2349950 *, int32_t, GameObject_t1113636619 *, const RuntimeMethod*))Dictionary_2_set_Item_m3327106492_gshared)(__this, p0, p1, method)
// !1 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::get_Item(!0)
#define Dictionary_2_get_Item_m798225041(__this, p0, method) ((  GameObject_t1113636619 * (*) (Dictionary_2_t2349950 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m107019914_gshared)(__this, p0, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C"  void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsLastSibling()
extern "C"  void Transform_SetAsLastSibling_m3949169710 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
#define GameObject_AddComponent_TisImage_t2670269651_m1594579417(__this, method) ((  Image_t2670269651 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CanvasGroup>()
#define GameObject_AddComponent_TisCanvasGroup_t4083511760_m2435735462(__this, method) ((  CanvasGroup_t4083511760 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
extern "C"  void CanvasGroup_set_blocksRaycasts_m3675023212 (CanvasGroup_t4083511760 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t2670269651_m980647750(__this, method) ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
extern "C"  Sprite_t280657092 * Image_get_sprite_m1811690853 (Image_t2670269651 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C"  void Image_set_sprite_m2369174689 (Image_t2670269651 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RectTransform>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m325663497(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2593370356 *, int32_t, RectTransform_t3704657025 *, const RuntimeMethod*))Dictionary_2_set_Item_m3327106492_gshared)(__this, p0, p1, method)
// System.Void DragMe::SetDraggedPosition(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DragMe_SetDraggedPosition_m2008884886 (DragMe_t1855460060 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
extern "C"  GameObject_t1113636619 * PointerEventData_get_pointerEnter_m3901270554 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(__this, method) ((  RectTransform_t3704657025 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RectTransform>::get_Item(!0)
#define Dictionary_2_get_Item_m3108585763(__this, p0, method) ((  RectTransform_t3704657025 * (*) (Dictionary_2_t2593370356 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m107019914_gshared)(__this, p0, method)
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C"  Vector2_t2156229523  PointerEventData_get_position_m437660275 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
extern "C"  Camera_t4157153871 * PointerEventData_get_pressEventCamera_m2613974917 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C"  bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m1761902807 (RuntimeObject * __this /* static, unused */, RectTransform_t3704657025 * p0, Vector2_t2156229523  p1, Camera_t4157153871 * p2, Vector3_t3722313464 * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C"  Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C"  bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2327269187 (RuntimeObject * __this /* static, unused */, RectTransform_t3704657025 * p0, Vector2_t2156229523  p1, Camera_t4157153871 * p2, Vector2_t2156229523 * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::ClampToWindow()
extern "C"  void DragPanel_ClampToWindow_m1122603434 (DragPanel_t1406753375 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C"  Rect_t2360479859  RectTransform_get_rect_m574169965 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_min()
extern "C"  Vector2_t2156229523  Rect_get_min_m847841034 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_max()
extern "C"  Vector2_t2156229523  Rect_get_max_m350137314 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C"  Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite DropMe::GetDropSprite(UnityEngine.EventSystems.PointerEventData)
extern "C"  Sprite_t280657092 * DropMe_GetDropSprite_m4241245197 (DropMe_t2942052774 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_overrideSprite(UnityEngine.Sprite)
extern "C"  void Image_set_overrideSprite_m3213596394 (Image_t2670269651 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
extern "C"  GameObject_t1113636619 * PointerEventData_get_pointerDrag_m3056187725 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<DragMe>()
#define GameObject_GetComponent_TisDragMe_t1855460060_m2149275024(__this, method) ((  DragMe_t1855460060 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t2670269651_m2486712510(__this, method) ((  Image_t2670269651 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Color UnityEngine.Color::get_grey()
extern "C"  Color_t2555686324  Color_get_grey_m3440705476 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C"  WebCamDeviceU5BU5D_t4294070825* WebCamTexture_get_devices_m844246756 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C"  bool WebCamDevice_get_isFrontFacing_m1172074790 (WebCamDevice_t1322781432 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WebCamDevice::get_name()
extern "C"  String_t* WebCamDevice_get_name_m3782173082 (WebCamDevice_t1322781432 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::.ctor(System.String,System.Int32,System.Int32)
extern "C"  void WebCamTexture__ctor_m2270899567 (WebCamTexture_t1514609158 * __this, String_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.AspectRatioFitter::set_aspectRatio(System.Single)
extern "C"  void AspectRatioFitter_set_aspectRatio_m626759227 (AspectRatioFitter_t3312407083 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m1666053228 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OpenPanel(UnityEngine.Animator)
extern "C"  void PanelManager_OpenPanel_m3662240133 (PanelManager_t438216159 * __this, Animator_t434523843 * ___anim0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C"  EventSystem_t1003666588 * EventSystem_get_current_m1416377559 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C"  GameObject_t1113636619 * EventSystem_get_currentSelectedGameObject_m2939274948 (EventSystem_t1003666588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::CloseCurrent()
extern "C"  void PanelManager_CloseCurrent_m345023962 (PanelManager_t438216159 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
extern "C"  void Animator_SetBool_m2873262441 (Animator_t434523843 * __this, int32_t p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PanelManager::FindFirstEnabledSelectable(UnityEngine.GameObject)
extern "C"  GameObject_t1113636619 * PanelManager_FindFirstEnabledSelectable_m2730067898 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___gameObject0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::SetSelected(UnityEngine.GameObject)
extern "C"  void PanelManager_SetSelected_m1638836315 (PanelManager_t438216159 * __this, GameObject_t1113636619 * ___go0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Selectable>(System.Boolean)
#define GameObject_GetComponentsInChildren_TisSelectable_t3250028441_m1331223003(__this, p0, method) ((  SelectableU5BU5D_t774044132* (*) (GameObject_t1113636619 *, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m836045_gshared)(__this, p0, method)
// System.Collections.IEnumerator PanelManager::DisablePanelDeleyed(UnityEngine.Animator)
extern "C"  RuntimeObject* PanelManager_DisablePanelDeleyed_m4002285899 (PanelManager_t438216159 * __this, Animator_t434523843 * ___anim0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager/<DisablePanelDeleyed>c__Iterator0::.ctor()
extern "C"  void U3CDisablePanelDeleyedU3Ec__Iterator0__ctor_m1819955435 (U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
extern "C"  void EventSystem_SetSelectedGameObject_m2232337908 (EventSystem_t1003666588 * __this, GameObject_t1113636619 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern "C"  bool Animator_IsInTransition_m2711427730 (Animator_t434523843 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t509032636  Animator_GetCurrentAnimatorStateInfo_m18694920 (Animator_t434523843 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C"  bool AnimatorStateInfo_IsName_m3393819976 (AnimatorStateInfo_t509032636 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
extern "C"  bool Animator_GetBool_m2974171932 (Animator_t434523843 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C"  Texture_t3661962703 * RawImage_get_texture_m2319641407 (RawImage_t3182918964 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Play()
extern "C"  void WebCamTexture_Play_m3866603461 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C"  void RawImage_set_texture_m415027901 (RawImage_t3182918964 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_videoVerticallyMirrored()
extern "C"  bool WebCamTexture_get_videoVerticallyMirrored_m839300021 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C"  RectTransform_t3704657025 * Graphic_get_rectTransform_m1167152468 (Graphic_t1660335611 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.WebCamTexture::get_videoRotationAngle()
extern "C"  int32_t WebCamTexture_get_videoRotationAngle_m2525477697 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_localEulerAngles_m4202601546 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.WebCamTexture::GetPixels()
extern "C"  ColorU5BU5D_t941916413* WebCamTexture_GetPixels_m2308263178 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C"  void Texture2D_SetPixels_m3008871897 (Texture2D_t3840446185 * __this, ColorU5BU5D_t941916413* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D phoneCamera::FlipTexture(UnityEngine.Texture2D,System.Boolean)
extern "C"  Texture2D_t3840446185 * phoneCamera_FlipTexture_m2327608388 (phoneCamera_t2918078011 * __this, Texture2D_t3840446185 * ___original0, bool ___reverse1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
extern "C"  Color_t2555686324  Texture2D_GetPixel_m1195410881 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<Image01Script>()
#define GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943(__this, method) ((  Image01Script_t2305065612 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
extern "C"  void DateTime__ctor_m2956360140 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_UtcNow()
extern "C"  DateTime_t3738529785  DateTime_get_UtcNow_m1393945741 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
extern "C"  TimeSpan_t881159249  DateTime_op_Subtraction_m3579235380 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C"  double TimeSpan_get_TotalSeconds_m4083325051 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<database>()
#define GameObject_GetComponent_Tisdatabase_t2832598855_m1122944689(__this, method) ((  database_t2832598855 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void database::Insert_Data(UnityEngine.Texture2D,System.Collections.Generic.List`1<System.String>,System.Int32)
extern "C"  void database_Insert_Data_m839353478 (database_t2832598855 * __this, Texture2D_t3840446185 * ___Saved_Img0, List_1_t3319525431 * ___Chosen_Mat1, int32_t ___time_stamp2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t1901882714_m4196288697(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<wandScript>()
#define GameObject_GetComponent_TiswandScript_t1125606077_m2772890611(__this, method) ((  wandScript_t1125606077 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
extern "C"  void Image_set_fillAmount_m3737925590 (Image_t2670269651 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, method) ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C"  Vector2_t2156229523  RectTransform_get_sizeDelta_m2183112744 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C"  void RectTransform_set_sizeDelta_m3462269772 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor()
extern "C"  void Hashtable__ctor_m1815022027 (Hashtable_t1853889766 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Scanning::Scan()
extern "C"  void Scanning_Scan_m3132931746 (Scanning_t651759208 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.ITrackerManager Vuforia.TrackerManager::get_Instance()
extern "C"  RuntimeObject* TrackerManager_get_Instance_m777262631 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::GetActiveTrackableBehaviours()
extern "C"  RuntimeObject* StateManager_GetActiveTrackableBehaviours_m3434576304 (StateManager_t1982749557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
#define List_1__ctor_m1424466557(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
#define List_1_Add_m2765963565(__this, p0, method) ((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m2812834599(__this, method) ((  int32_t (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m3743125852(__this, p0, method) ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Scanning::toggleOn(UnityEngine.GameObject)
extern "C"  void Scanning_toggleOn_m2982140418 (Scanning_t651759208 * __this, GameObject_t1113636619 * ___go0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m1750140655(__this, method) ((  Enumerator_t179987942  (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
#define Enumerator_get_Current_m4179928398(__this, method) ((  GameObject_t1113636619 * (*) (Enumerator_t179987942 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
#define Enumerator_MoveNext_m4286844348(__this, method) ((  bool (*) (Enumerator_t179987942 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
#define Enumerator_Dispose_m1341201278(__this, method) ((  void (*) (Enumerator_t179987942 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<wayFinding>()
#define GameObject_GetComponent_TiswayFinding_t2735345900_m927213380(__this, method) ((  wayFinding_t2735345900 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Toggle>()
#define GameObject_GetComponent_TisToggle_t2735377061_m3911858412(__this, method) ((  Toggle_t2735377061 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C"  void Toggle_set_isOn_m3548357404 (Toggle_t2735377061 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m249231841 (Material_t340375123 * __this, Material_t340375123 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C"  void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C"  bool Application_get_isEditor_m857789090 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C"  void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C"  Texture_t3661962703 * Material_GetTexture_m3545614349 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C"  void Material_SetTextureOffset_m2380336123 (Material_t340375123 * __this, String_t* p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C"  int32_t Mathf_RoundToInt_m1874334613 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C"  Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_Lerp_m854472224 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  Quaternion_op_Multiply_m1294064023 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C"  float Camera_get_nearClipPlane_m837839537 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
extern "C"  void Transform_LookAt_m3968184312 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_AngleAxis_m1767165696 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void wandScript::setactive()
extern "C"  void wandScript_setactive_m2438207176 (wandScript_t1125606077 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> wandScript::getinfo(System.Int32)
extern "C"  List_1_t3319525431 * wandScript_getinfo_m3056267977 (wandScript_t1125606077 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator wandScript::infoprocess(System.Collections.Generic.List`1<System.String>)
extern "C"  RuntimeObject* wandScript_infoprocess_m4253497090 (wandScript_t1125606077 * __this, List_1_t3319525431 * ___info0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<WandSelection>()
#define GameObject_GetComponent_TisWandSelection_t972065371_m280005558(__this, method) ((  WandSelection_t972065371 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<MatImageSc>()
#define GameObject_GetComponent_TisMatImageSc_t920972473_m1982302322(__this, method) ((  MatImageSc_t920972473 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void wandScript::setinactive()
extern "C"  void wandScript_setinactive_m2976640003 (wandScript_t1125606077 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<RadialProgressBar>()
#define GameObject_GetComponent_TisRadialProgressBar_t2821283243_m606195954(__this, method) ((  RadialProgressBar_t2821283243 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void database::Lookup_Drawer(System.String&,System.String)
extern "C"  void database_Lookup_Drawer_m3676041653 (database_t2832598855 * __this, String_t** ___mat_name0, String_t* ___drawer_name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void wandScript/<infoprocess>c__Iterator0::.ctor()
extern "C"  void U3CinfoprocessU3Ec__Iterator0__ctor_m3232207588 (U3CinfoprocessU3Ec__Iterator0_t196706046 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t1901882714_m2114913816(__this, method) ((  Text_t1901882714 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C"  void WWW__ctor_m2915079343 (WWW_t3688466362 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.RawImage>()
#define GameObject_GetComponent_TisRawImage_t3182918964_m856277241(__this, method) ((  RawImage_t3182918964 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
extern "C"  Texture2D_t3840446185 * WWW_get_texture_m3513075325 (WWW_t3688466362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WandSelection::setactive()
extern "C"  void WandSelection_setactive_m821691556 (WandSelection_t972065371 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(__this, method) ((  Renderer_t2627027031 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C"  MaterialU5BU5D_t561872642* Renderer_get_materials_m2188790026 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C"  Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WandSelection::setinactive()
extern "C"  void WandSelection_setinactive_m3109346688 (WandSelection_t972065371 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void wayFinding::initSelectedObjTable()
extern "C"  void wayFinding_initSelectedObjTable_m1636343849 (wayFinding_t2735345900 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void wayFinding::Highlight()
extern "C"  void wayFinding_Highlight_m3273843370 (wayFinding_t2735345900 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void wayFinding::ResetTable(System.Collections.Hashtable)
extern "C"  void wayFinding_ResetTable_m429605708 (wayFinding_t2735345900 * __this, Hashtable_t1853889766 * ___selectedObjTable0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Key()
extern "C"  RuntimeObject * DictionaryEntry_get_Key_m3117378551 (DictionaryEntry_t3123975638 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void wayFinding::SetMat(UnityEngine.GameObject,UnityEngine.Material)
extern "C"  void wayFinding_SetMat_m2726953727 (wayFinding_t2735345900 * __this, GameObject_t1113636619 * ___go0, Material_t340375123 * ___mat1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Value()
extern "C"  RuntimeObject * DictionaryEntry_get_Value_m618120527 (DictionaryEntry_t3123975638 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 wayFinding::getDir(UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  wayFinding_getDir_m2911279075 (wayFinding_t2735345900 * __this, GameObject_t1113636619 * ___relativeObj0, GameObject_t1113636619 * ___endObj1, Vector3_t3722313464  ___start2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void wayFinding::TransformArrow(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void wayFinding_TransformArrow_m2453897102 (wayFinding_t2735345900 * __this, GameObject_t1113636619 * ___arrow0, Vector3_t3722313464  ___start1, Vector3_t3722313464  ___dir2, float ___height3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject wayFinding::DrawArrow(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  GameObject_t1113636619 * wayFinding_DrawArrow_m3284252164 (wayFinding_t2735345900 * __this, GameObject_t1113636619 * ___arrow0, Vector3_t3722313464  ___start1, Vector3_t3722313464  ___dir2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C"  void Renderer_set_sharedMaterial_m2374163090 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_LookRotation_m4040767668 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C"  Vector3_t3722313464  Vector3_get_left_m2428419009 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_LookRotation_m3197602968 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  Quaternion_Inverse_m1311579081 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Scanning>()
#define GameObject_GetComponent_TisScanning_t651759208_m2415015816(__this, method) ((  Scanning_t651759208 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
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
// System.Void ActiveStateToggler::.ctor()
extern "C"  void ActiveStateToggler__ctor_m1883044509 (ActiveStateToggler_t3846380968 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ActiveStateToggler::ToggleActive()
extern "C"  void ActiveStateToggler_ToggleActive_m191618295 (ActiveStateToggler_t3846380968 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_get_activeSelf_m1767405923(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
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
// System.Void ApplicationManager::.ctor()
extern "C"  void ApplicationManager__ctor_m3866842737 (ApplicationManager_t3254129643 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ApplicationManager::Quit()
extern "C"  void ApplicationManager_Quit_m3997839980 (ApplicationManager_t3254129643 * __this, const RuntimeMethod* method)
{
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void ARScript::.ctor()
extern "C"  void ARScript__ctor_m187503681 (ARScript_t1214039674 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ARScript::Start()
extern "C"  void ARScript_Start_m4213788465 (ARScript_t1214039674 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ARScript::Update()
extern "C"  void ARScript_Update_m3501060325 (ARScript_t1214039674 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ARScript::GoMainMenu(System.String)
extern "C"  void ARScript_GoMainMenu_m2367796716 (ARScript_t1214039674 * __this, String_t* ___scenename0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___scenename0;
		Application_LoadLevel_m2650087286(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// System.Void ChangeColor::.ctor()
extern "C"  void ChangeColor__ctor_m3103841732 (ChangeColor_t3909000678 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeColor::OnEnable()
extern "C"  void ChangeColor_OnEnable_m3495721972 (ChangeColor_t3909000678 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ChangeColor::SetRed(System.Single)
extern "C"  void ChangeColor_SetRed_m409600201 (ChangeColor_t3909000678 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		ChangeColor_OnValueChanged_m3623988026(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeColor::SetGreen(System.Single)
extern "C"  void ChangeColor_SetGreen_m942651179 (ChangeColor_t3909000678 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		ChangeColor_OnValueChanged_m3623988026(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeColor::SetBlue(System.Single)
extern "C"  void ChangeColor_SetBlue_m138565078 (ChangeColor_t3909000678 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		ChangeColor_OnValueChanged_m3623988026(__this, L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeColor::OnValueChanged(System.Single,System.Int32)
extern "C"  void ChangeColor_OnValueChanged_m3623988026 (ChangeColor_t3909000678 * __this, float ___value0, int32_t ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeColor_OnValueChanged_m3623988026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Color_t2555686324  L_0 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Renderer_t2627027031 * L_1 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Renderer_t2627027031 * L_3 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		NullCheck(L_3);
		Material_t340375123 * L_4 = Renderer_get_material_m4171603682(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Color_t2555686324  L_5 = Material_get_color_m3827673574(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_004a;
	}

IL_002d:
	{
		Light_t3756812086 * L_6 = Component_GetComponent_TisLight_t3756812086_m916313317(__this, /*hidden argument*/Component_GetComponent_TisLight_t3756812086_m916313317_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		Light_t3756812086 * L_8 = Component_GetComponent_TisLight_t3756812086_m916313317(__this, /*hidden argument*/Component_GetComponent_TisLight_t3756812086_m916313317_RuntimeMethod_var);
		NullCheck(L_8);
		Color_t2555686324  L_9 = Light_get_color_m552487206(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_004a:
	{
		int32_t L_10 = ___channel1;
		float L_11 = ___value0;
		Color_set_Item_m3480552301((&V_0), L_10, L_11, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_12 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_12, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		Renderer_t2627027031 * L_14 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		NullCheck(L_14);
		Material_t340375123 * L_15 = Renderer_get_material_m4171603682(L_14, /*hidden argument*/NULL);
		Color_t2555686324  L_16 = V_0;
		NullCheck(L_15);
		Material_set_color_m1794818007(L_15, L_16, /*hidden argument*/NULL);
		goto IL_0097;
	}

IL_007a:
	{
		Light_t3756812086 * L_17 = Component_GetComponent_TisLight_t3756812086_m916313317(__this, /*hidden argument*/Component_GetComponent_TisLight_t3756812086_m916313317_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0097;
		}
	}
	{
		Light_t3756812086 * L_19 = Component_GetComponent_TisLight_t3756812086_m916313317(__this, /*hidden argument*/Component_GetComponent_TisLight_t3756812086_m916313317_RuntimeMethod_var);
		Color_t2555686324  L_20 = V_0;
		NullCheck(L_19);
		Light_set_color_m608660336(L_19, L_20, /*hidden argument*/NULL);
	}

IL_0097:
	{
		return;
	}
}
// System.Void ChangeColor::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ChangeColor_OnPointerClick_m2250507928 (ChangeColor_t3909000678 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeColor_OnPointerClick_m2250507928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t2627027031 * L_0 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		Renderer_t2627027031 * L_2 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t340375123 * L_3 = Renderer_get_material_m4171603682(L_2, /*hidden argument*/NULL);
		float L_4 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Color__ctor_m2943235014((&L_7), L_4, L_5, L_6, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Material_set_color_m1794818007(L_3, L_7, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_003f:
	{
		Light_t3756812086 * L_8 = Component_GetComponent_TisLight_t3756812086_m916313317(__this, /*hidden argument*/Component_GetComponent_TisLight_t3756812086_m916313317_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		Light_t3756812086 * L_10 = Component_GetComponent_TisLight_t3756812086_m916313317(__this, /*hidden argument*/Component_GetComponent_TisLight_t3756812086_m916313317_RuntimeMethod_var);
		float L_11 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Color__ctor_m2943235014((&L_14), L_11, L_12, L_13, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Light_set_color_m608660336(L_10, L_14, /*hidden argument*/NULL);
	}

IL_0074:
	{
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
// System.Void database::.ctor()
extern "C"  void database__ctor_m77086883 (database_t2832598855 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void database::Start()
extern "C"  void database_Start_m3293190645 (database_t2832598855 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (database_Start_m3293190645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	List_1_t3319525431 * V_3 = NULL;
	String_t* V_4 = NULL;
	Enumerator_t913802012  V_5;
	memset(&V_5, 0, sizeof(V_5));
	List_1_t3319525431 * V_6 = NULL;
	String_t* V_7 = NULL;
	Enumerator_t913802012  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = Application_get_persistentDataPath_m1428108154(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1604535310, L_0, _stringLiteral3394506779, /*hidden argument*/NULL);
		__this->set_dbPath_2(L_1);
		String_t* L_2 = Application_get_persistentDataPath_m1428108154(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		database_CreateSchema_m3630400501(__this, /*hidden argument*/NULL);
		database_InsertMat_Info_m1941889789(__this, _stringLiteral3564307928, 0, _stringLiteral1697614252, /*hidden argument*/NULL);
		database_InsertMat_Info_m1941889789(__this, _stringLiteral417203670, 0, _stringLiteral2882831085, /*hidden argument*/NULL);
		database_InsertMat_Info_m1941889789(__this, _stringLiteral1283244854, 1, _stringLiteral2260289627, /*hidden argument*/NULL);
		database_InsertMat_Info_m1941889789(__this, _stringLiteral922614677, 0, _stringLiteral485170879, /*hidden argument*/NULL);
		database_Insert_Photo_By_URL_m1652390081(__this, _stringLiteral88613354, _stringLiteral3564307928, _stringLiteral1283244854, _stringLiteral2791739702, _stringLiteral2791739702, ((int32_t)10000), /*hidden argument*/NULL);
		database_Insert_Photo_By_URL_m1652390081(__this, _stringLiteral842113881, _stringLiteral3564307928, _stringLiteral417203670, _stringLiteral922614677, _stringLiteral2791739702, ((int32_t)20000), /*hidden argument*/NULL);
		database_InsertMat_Drawer_Pair_m366633393(__this, _stringLiteral3564307928, _stringLiteral3335371912, /*hidden argument*/NULL);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_3;
		database_Lookup_Mat_m148036058(__this, _stringLiteral3564307928, (&V_0), /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_1 = (bool)1;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_2 = L_5;
		database_Get_Description_m2229621183(__this, _stringLiteral3564307928, (&V_1), (&V_2), /*hidden argument*/NULL);
		String_t* L_6 = V_2;
		Debug_Log_m4051431634(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		List_1_t3319525431 * L_7 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m1290152079(L_7, 4, /*hidden argument*/List_1__ctor_m1290152079_RuntimeMethod_var);
		V_3 = L_7;
		database_Get_Image_URL_m4261697933(__this, _stringLiteral3564307928, (&V_3), /*hidden argument*/NULL);
		List_1_t3319525431 * L_8 = V_3;
		NullCheck(L_8);
		Enumerator_t913802012  L_9 = List_1_GetEnumerator_m669319585(L_8, /*hidden argument*/List_1_GetEnumerator_m669319585_RuntimeMethod_var);
		V_5 = L_9;
	}

IL_0118:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012d;
		}

IL_011d:
		{
			String_t* L_10 = Enumerator_get_Current_m3378792279((&V_5), /*hidden argument*/Enumerator_get_Current_m3378792279_RuntimeMethod_var);
			V_4 = L_10;
			String_t* L_11 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		}

IL_012d:
		{
			bool L_12 = Enumerator_MoveNext_m1254101744((&V_5), /*hidden argument*/Enumerator_MoveNext_m1254101744_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_011d;
			}
		}

IL_0139:
		{
			IL2CPP_LEAVE(0x14C, FINALLY_013e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013e;
	}

FINALLY_013e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2026665411((&V_5), /*hidden argument*/Enumerator_Dispose_m2026665411_RuntimeMethod_var);
		IL2CPP_END_FINALLY(318)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(318)
	{
		IL2CPP_JUMP_TBL(0x14C, IL_014c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_014c:
	{
		List_1_t3319525431 * L_13 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m1290152079(L_13, 4, /*hidden argument*/List_1__ctor_m1290152079_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t3319525431 * L_14 = V_6;
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m2276455407(L_14, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_16);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		database_Lookup_URL_m2247219714(__this, _stringLiteral88613354, (&V_6), /*hidden argument*/NULL);
		List_1_t3319525431 * L_18 = V_6;
		NullCheck(L_18);
		Enumerator_t913802012  L_19 = List_1_GetEnumerator_m669319585(L_18, /*hidden argument*/List_1_GetEnumerator_m669319585_RuntimeMethod_var);
		V_8 = L_19;
	}

IL_017b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_019a;
		}

IL_0180:
		{
			String_t* L_20 = Enumerator_get_Current_m3378792279((&V_8), /*hidden argument*/Enumerator_get_Current_m3378792279_RuntimeMethod_var);
			V_7 = L_20;
			String_t* L_21 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_22 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3603670260, L_21, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		}

IL_019a:
		{
			bool L_23 = Enumerator_MoveNext_m1254101744((&V_8), /*hidden argument*/Enumerator_MoveNext_m1254101744_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0180;
			}
		}

IL_01a6:
		{
			IL2CPP_LEAVE(0x1B9, FINALLY_01ab);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ab;
	}

FINALLY_01ab:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2026665411((&V_8), /*hidden argument*/Enumerator_Dispose_m2026665411_RuntimeMethod_var);
		IL2CPP_END_FINALLY(427)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(427)
	{
		IL2CPP_JUMP_TBL(0x1B9, IL_01b9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01b9:
	{
		List_1_t3319525431 * L_24 = V_6;
		NullCheck(L_24);
		int32_t L_25 = List_1_get_Count_m2276455407(L_24, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_26);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void database::CreateSchema()
extern "C"  void database_CreateSchema_m3630400501 (database_t2832598855 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (database_CreateSchema_m3630400501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteConnection_t3870565407 * V_0 = NULL;
	SqliteCommand_t3916884476 * V_1 = NULL;
	int32_t V_2 = 0;
	SqliteCommand_t3916884476 * V_3 = NULL;
	int32_t V_4 = 0;
	SqliteCommand_t3916884476 * V_5 = NULL;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get_dbPath_2();
		SqliteConnection_t3870565407 * L_1 = (SqliteConnection_t3870565407 *)il2cpp_codegen_object_new(SqliteConnection_t3870565407_il2cpp_TypeInfo_var);
		SqliteConnection__ctor_m1023779099(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t3870565407 * L_2 = V_0;
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(24 /* System.Void System.Data.Common.DbConnection::Open() */, L_2);
			SqliteConnection_t3870565407 * L_3 = V_0;
			NullCheck(L_3);
			SqliteCommand_t3916884476 * L_4 = SqliteConnection_CreateCommand_m1680859346(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			SqliteCommand_t3916884476 * L_5 = V_1;
			NullCheck(L_5);
			VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType) */, L_5, 1);
			SqliteCommand_t3916884476 * L_6 = V_1;
			NullCheck(L_6);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_6, _stringLiteral3482776685);
			SqliteCommand_t3916884476 * L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(30 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_7);
			V_2 = L_8;
			int32_t L_9 = V_2;
			int32_t L_10 = L_9;
			RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_12 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral224159198, L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x59, FINALLY_004c);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004c;
		}

FINALLY_004c:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t3916884476 * L_13 = V_1;
				if (!L_13)
				{
					goto IL_0058;
				}
			}

IL_0052:
			{
				SqliteCommand_t3916884476 * L_14 = V_1;
				NullCheck(L_14);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_14);
			}

IL_0058:
			{
				IL2CPP_END_FINALLY(76)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(76)
		{
			IL2CPP_JUMP_TBL(0x59, IL_0059)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0059:
		{
			SqliteConnection_t3870565407 * L_15 = V_0;
			NullCheck(L_15);
			SqliteCommand_t3916884476 * L_16 = SqliteConnection_CreateCommand_m1680859346(L_15, /*hidden argument*/NULL);
			V_3 = L_16;
		}

IL_0060:
		try
		{ // begin try (depth: 2)
			SqliteCommand_t3916884476 * L_17 = V_3;
			NullCheck(L_17);
			VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType) */, L_17, 1);
			SqliteCommand_t3916884476 * L_18 = V_3;
			NullCheck(L_18);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_18, _stringLiteral22215158);
			SqliteCommand_t3916884476 * L_19 = V_3;
			NullCheck(L_19);
			int32_t L_20 = VirtFuncInvoker0< int32_t >::Invoke(30 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_19);
			V_4 = L_20;
			int32_t L_21 = V_4;
			int32_t L_22 = L_21;
			RuntimeObject * L_23 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_22);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_24 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral224159198, L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xA2, FINALLY_0095);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0095;
		}

FINALLY_0095:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t3916884476 * L_25 = V_3;
				if (!L_25)
				{
					goto IL_00a1;
				}
			}

IL_009b:
			{
				SqliteCommand_t3916884476 * L_26 = V_3;
				NullCheck(L_26);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_26);
			}

IL_00a1:
			{
				IL2CPP_END_FINALLY(149)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(149)
		{
			IL2CPP_JUMP_TBL(0xA2, IL_00a2)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00a2:
		{
			SqliteConnection_t3870565407 * L_27 = V_0;
			NullCheck(L_27);
			SqliteCommand_t3916884476 * L_28 = SqliteConnection_CreateCommand_m1680859346(L_27, /*hidden argument*/NULL);
			V_5 = L_28;
		}

IL_00aa:
		try
		{ // begin try (depth: 2)
			SqliteCommand_t3916884476 * L_29 = V_5;
			NullCheck(L_29);
			VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType) */, L_29, 1);
			SqliteCommand_t3916884476 * L_30 = V_5;
			NullCheck(L_30);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_30, _stringLiteral2334747157);
			SqliteCommand_t3916884476 * L_31 = V_5;
			NullCheck(L_31);
			int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(30 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_31);
			V_6 = L_32;
			int32_t L_33 = V_6;
			int32_t L_34 = L_33;
			RuntimeObject * L_35 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_34);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_36 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral224159198, L_35, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xF1, FINALLY_00e2);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00e2;
		}

FINALLY_00e2:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t3916884476 * L_37 = V_5;
				if (!L_37)
				{
					goto IL_00f0;
				}
			}

IL_00e9:
			{
				SqliteCommand_t3916884476 * L_38 = V_5;
				NullCheck(L_38);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_38);
			}

IL_00f0:
			{
				IL2CPP_END_FINALLY(226)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(226)
		{
			IL2CPP_JUMP_TBL(0xF1, IL_00f1)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00f1:
		{
			IL2CPP_LEAVE(0x103, FINALLY_00f6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f6;
	}

FINALLY_00f6:
	{ // begin finally (depth: 1)
		{
			SqliteConnection_t3870565407 * L_39 = V_0;
			if (!L_39)
			{
				goto IL_0102;
			}
		}

IL_00fc:
		{
			SqliteConnection_t3870565407 * L_40 = V_0;
			NullCheck(L_40);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_40);
		}

IL_0102:
		{
			IL2CPP_END_FINALLY(246)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(246)
	{
		IL2CPP_JUMP_TBL(0x103, IL_0103)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0103:
	{
		return;
	}
}
// System.Void database::Insert_Photo_By_URL(System.String,System.String,System.String,System.String,System.String,System.Int32)
extern "C"  void database_Insert_Photo_By_URL_m1652390081 (database_t2832598855 * __this, String_t* ___URL0, String_t* ___Mat11, String_t* ___Mat22, String_t* ___Mat33, String_t* ___Mat44, int32_t ___time_stamp5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (database_Insert_Photo_By_URL_m1652390081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteConnection_t3870565407 * V_0 = NULL;
	SqliteCommand_t3916884476 * V_1 = NULL;
	SqliteParameter_t314071523 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get_dbPath_2();
		SqliteConnection_t3870565407 * L_1 = (SqliteConnection_t3870565407 *)il2cpp_codegen_object_new(SqliteConnection_t3870565407_il2cpp_TypeInfo_var);
		SqliteConnection__ctor_m1023779099(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t3870565407 * L_2 = V_0;
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(24 /* System.Void System.Data.Common.DbConnection::Open() */, L_2);
			SqliteConnection_t3870565407 * L_3 = V_0;
			NullCheck(L_3);
			SqliteCommand_t3916884476 * L_4 = SqliteConnection_CreateCommand_m1680859346(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			SqliteCommand_t3916884476 * L_5 = V_1;
			NullCheck(L_5);
			VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType) */, L_5, 1);
			SqliteCommand_t3916884476 * L_6 = V_1;
			NullCheck(L_6);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_6, _stringLiteral1700619094);
			SqliteCommand_t3916884476 * L_7 = V_1;
			NullCheck(L_7);
			SqliteParameterCollection_t2576174450 * L_8 = SqliteCommand_get_Parameters_m1252166937(L_7, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_9 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_9, /*hidden argument*/NULL);
			V_2 = L_9;
			SqliteParameter_t314071523 * L_10 = V_2;
			NullCheck(L_10);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_10, _stringLiteral1487869097);
			SqliteParameter_t314071523 * L_11 = V_2;
			String_t* L_12 = ___URL0;
			NullCheck(L_11);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_11, L_12);
			SqliteParameter_t314071523 * L_13 = V_2;
			NullCheck(L_8);
			SqliteParameterCollection_Add_m649006753(L_8, L_13, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_14 = V_1;
			NullCheck(L_14);
			SqliteParameterCollection_t2576174450 * L_15 = SqliteCommand_get_Parameters_m1252166937(L_14, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_16 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_16, /*hidden argument*/NULL);
			V_2 = L_16;
			SqliteParameter_t314071523 * L_17 = V_2;
			NullCheck(L_17);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_17, _stringLiteral63249573);
			SqliteParameter_t314071523 * L_18 = V_2;
			int32_t L_19 = ___time_stamp5;
			int32_t L_20 = L_19;
			RuntimeObject * L_21 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_20);
			NullCheck(L_18);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_18, L_21);
			SqliteParameter_t314071523 * L_22 = V_2;
			NullCheck(L_15);
			SqliteParameterCollection_Add_m649006753(L_15, L_22, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_23 = V_1;
			NullCheck(L_23);
			SqliteParameterCollection_t2576174450 * L_24 = SqliteCommand_get_Parameters_m1252166937(L_23, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_25 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_25, /*hidden argument*/NULL);
			V_2 = L_25;
			SqliteParameter_t314071523 * L_26 = V_2;
			NullCheck(L_26);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_26, _stringLiteral1451098921);
			SqliteParameter_t314071523 * L_27 = V_2;
			String_t* L_28 = ___Mat11;
			NullCheck(L_27);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_27, L_28);
			SqliteParameter_t314071523 * L_29 = V_2;
			NullCheck(L_24);
			SqliteParameterCollection_Add_m649006753(L_24, L_29, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_30 = V_1;
			NullCheck(L_30);
			SqliteParameterCollection_t2576174450 * L_31 = SqliteCommand_get_Parameters_m1252166937(L_30, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_32 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_32, /*hidden argument*/NULL);
			V_2 = L_32;
			SqliteParameter_t314071523 * L_33 = V_2;
			NullCheck(L_33);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_33, _stringLiteral3407414057);
			SqliteParameter_t314071523 * L_34 = V_2;
			String_t* L_35 = ___Mat22;
			NullCheck(L_34);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_34, L_35);
			SqliteParameter_t314071523 * L_36 = V_2;
			NullCheck(L_31);
			SqliteParameterCollection_Add_m649006753(L_31, L_36, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_37 = V_1;
			NullCheck(L_37);
			SqliteParameterCollection_t2576174450 * L_38 = SqliteCommand_get_Parameters_m1252166937(L_37, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_39 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_39, /*hidden argument*/NULL);
			V_2 = L_39;
			SqliteParameter_t314071523 * L_40 = V_2;
			NullCheck(L_40);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_40, _stringLiteral1068761897);
			SqliteParameter_t314071523 * L_41 = V_2;
			String_t* L_42 = ___Mat33;
			NullCheck(L_41);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_41, L_42);
			SqliteParameter_t314071523 * L_43 = V_2;
			NullCheck(L_38);
			SqliteParameterCollection_Add_m649006753(L_38, L_43, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_44 = V_1;
			NullCheck(L_44);
			SqliteParameterCollection_t2576174450 * L_45 = SqliteCommand_get_Parameters_m1252166937(L_44, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_46 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_46, /*hidden argument*/NULL);
			V_2 = L_46;
			SqliteParameter_t314071523 * L_47 = V_2;
			NullCheck(L_47);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_47, _stringLiteral3025077033);
			SqliteParameter_t314071523 * L_48 = V_2;
			String_t* L_49 = ___Mat44;
			NullCheck(L_48);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_48, L_49);
			SqliteParameter_t314071523 * L_50 = V_2;
			NullCheck(L_45);
			SqliteParameterCollection_Add_m649006753(L_45, L_50, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_51 = V_1;
			NullCheck(L_51);
			int32_t L_52 = VirtFuncInvoker0< int32_t >::Invoke(30 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_51);
			V_3 = L_52;
			int32_t L_53 = V_3;
			int32_t L_54 = L_53;
			RuntimeObject * L_55 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_54);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_56 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3620046386, L_55, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x13F, FINALLY_0132);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0132;
		}

FINALLY_0132:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t3916884476 * L_57 = V_1;
				if (!L_57)
				{
					goto IL_013e;
				}
			}

IL_0138:
			{
				SqliteCommand_t3916884476 * L_58 = V_1;
				NullCheck(L_58);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_58);
			}

IL_013e:
			{
				IL2CPP_END_FINALLY(306)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(306)
		{
			IL2CPP_JUMP_TBL(0x13F, IL_013f)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_013f:
		{
			IL2CPP_LEAVE(0x151, FINALLY_0144);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0144;
	}

FINALLY_0144:
	{ // begin finally (depth: 1)
		{
			SqliteConnection_t3870565407 * L_59 = V_0;
			if (!L_59)
			{
				goto IL_0150;
			}
		}

IL_014a:
		{
			SqliteConnection_t3870565407 * L_60 = V_0;
			NullCheck(L_60);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_60);
		}

IL_0150:
		{
			IL2CPP_END_FINALLY(324)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(324)
	{
		IL2CPP_JUMP_TBL(0x151, IL_0151)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0151:
	{
		return;
	}
}
// System.Void database::InsertMat_Info(System.String,System.Int32,System.String)
extern "C"  void database_InsertMat_Info_m1941889789 (database_t2832598855 * __this, String_t* ___mat_name0, int32_t ___is_dangerous1, String_t* ___mat_des2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (database_InsertMat_Info_m1941889789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteConnection_t3870565407 * V_0 = NULL;
	SqliteCommand_t3916884476 * V_1 = NULL;
	SqliteParameter_t314071523 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get_dbPath_2();
		SqliteConnection_t3870565407 * L_1 = (SqliteConnection_t3870565407 *)il2cpp_codegen_object_new(SqliteConnection_t3870565407_il2cpp_TypeInfo_var);
		SqliteConnection__ctor_m1023779099(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t3870565407 * L_2 = V_0;
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(24 /* System.Void System.Data.Common.DbConnection::Open() */, L_2);
			SqliteConnection_t3870565407 * L_3 = V_0;
			NullCheck(L_3);
			SqliteCommand_t3916884476 * L_4 = SqliteConnection_CreateCommand_m1680859346(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			SqliteCommand_t3916884476 * L_5 = V_1;
			NullCheck(L_5);
			VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType) */, L_5, 1);
			SqliteCommand_t3916884476 * L_6 = V_1;
			NullCheck(L_6);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_6, _stringLiteral3735239857);
			SqliteCommand_t3916884476 * L_7 = V_1;
			NullCheck(L_7);
			SqliteParameterCollection_t2576174450 * L_8 = SqliteCommand_get_Parameters_m1252166937(L_7, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_9 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_9, /*hidden argument*/NULL);
			V_2 = L_9;
			SqliteParameter_t314071523 * L_10 = V_2;
			NullCheck(L_10);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_10, _stringLiteral62725275);
			SqliteParameter_t314071523 * L_11 = V_2;
			String_t* L_12 = ___mat_name0;
			NullCheck(L_11);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_11, L_12);
			SqliteParameter_t314071523 * L_13 = V_2;
			NullCheck(L_8);
			SqliteParameterCollection_Add_m649006753(L_8, L_13, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_14 = V_1;
			NullCheck(L_14);
			SqliteParameterCollection_t2576174450 * L_15 = SqliteCommand_get_Parameters_m1252166937(L_14, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_16 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_16, /*hidden argument*/NULL);
			V_2 = L_16;
			SqliteParameter_t314071523 * L_17 = V_2;
			NullCheck(L_17);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_17, _stringLiteral2409271600);
			SqliteParameter_t314071523 * L_18 = V_2;
			int32_t L_19 = ___is_dangerous1;
			int32_t L_20 = L_19;
			RuntimeObject * L_21 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_20);
			NullCheck(L_18);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_18, L_21);
			SqliteParameter_t314071523 * L_22 = V_2;
			NullCheck(L_15);
			SqliteParameterCollection_Add_m649006753(L_15, L_22, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_23 = V_1;
			NullCheck(L_23);
			SqliteParameterCollection_t2576174450 * L_24 = SqliteCommand_get_Parameters_m1252166937(L_23, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_25 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_25, /*hidden argument*/NULL);
			V_2 = L_25;
			SqliteParameter_t314071523 * L_26 = V_2;
			NullCheck(L_26);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_26, _stringLiteral3220737671);
			SqliteParameter_t314071523 * L_27 = V_2;
			String_t* L_28 = ___mat_des2;
			NullCheck(L_27);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_27, L_28);
			SqliteParameter_t314071523 * L_29 = V_2;
			NullCheck(L_24);
			SqliteParameterCollection_Add_m649006753(L_24, L_29, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_30 = V_1;
			NullCheck(L_30);
			int32_t L_31 = VirtFuncInvoker0< int32_t >::Invoke(30 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_30);
			V_3 = L_31;
			int32_t L_32 = V_3;
			int32_t L_33 = L_32;
			RuntimeObject * L_34 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_33);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_35 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2562033219, L_34, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xCD, FINALLY_00c0);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00c0;
		}

FINALLY_00c0:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t3916884476 * L_36 = V_1;
				if (!L_36)
				{
					goto IL_00cc;
				}
			}

IL_00c6:
			{
				SqliteCommand_t3916884476 * L_37 = V_1;
				NullCheck(L_37);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_37);
			}

IL_00cc:
			{
				IL2CPP_END_FINALLY(192)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(192)
		{
			IL2CPP_JUMP_TBL(0xCD, IL_00cd)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00cd:
		{
			IL2CPP_LEAVE(0xDF, FINALLY_00d2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d2;
	}

FINALLY_00d2:
	{ // begin finally (depth: 1)
		{
			SqliteConnection_t3870565407 * L_38 = V_0;
			if (!L_38)
			{
				goto IL_00de;
			}
		}

IL_00d8:
		{
			SqliteConnection_t3870565407 * L_39 = V_0;
			NullCheck(L_39);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_39);
		}

IL_00de:
		{
			IL2CPP_END_FINALLY(210)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(210)
	{
		IL2CPP_JUMP_TBL(0xDF, IL_00df)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00df:
	{
		return;
	}
}
// System.Void database::InsertMat_Drawer_Pair(System.String,System.String)
extern "C"  void database_InsertMat_Drawer_Pair_m366633393 (database_t2832598855 * __this, String_t* ___mat_name0, String_t* ___drawer_name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (database_InsertMat_Drawer_Pair_m366633393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteConnection_t3870565407 * V_0 = NULL;
	SqliteCommand_t3916884476 * V_1 = NULL;
	SqliteParameter_t314071523 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get_dbPath_2();
		SqliteConnection_t3870565407 * L_1 = (SqliteConnection_t3870565407 *)il2cpp_codegen_object_new(SqliteConnection_t3870565407_il2cpp_TypeInfo_var);
		SqliteConnection__ctor_m1023779099(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t3870565407 * L_2 = V_0;
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(24 /* System.Void System.Data.Common.DbConnection::Open() */, L_2);
			SqliteConnection_t3870565407 * L_3 = V_0;
			NullCheck(L_3);
			SqliteCommand_t3916884476 * L_4 = SqliteConnection_CreateCommand_m1680859346(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			SqliteCommand_t3916884476 * L_5 = V_1;
			NullCheck(L_5);
			VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType) */, L_5, 1);
			SqliteCommand_t3916884476 * L_6 = V_1;
			NullCheck(L_6);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_6, _stringLiteral3421408643);
			SqliteCommand_t3916884476 * L_7 = V_1;
			NullCheck(L_7);
			SqliteParameterCollection_t2576174450 * L_8 = SqliteCommand_get_Parameters_m1252166937(L_7, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_9 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_9, /*hidden argument*/NULL);
			V_2 = L_9;
			SqliteParameter_t314071523 * L_10 = V_2;
			NullCheck(L_10);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_10, _stringLiteral3629099586);
			SqliteParameter_t314071523 * L_11 = V_2;
			String_t* L_12 = ___mat_name0;
			NullCheck(L_11);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_11, L_12);
			SqliteParameter_t314071523 * L_13 = V_2;
			NullCheck(L_8);
			SqliteParameterCollection_Add_m649006753(L_8, L_13, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_14 = V_1;
			NullCheck(L_14);
			SqliteParameterCollection_t2576174450 * L_15 = SqliteCommand_get_Parameters_m1252166937(L_14, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_16 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_16, /*hidden argument*/NULL);
			V_2 = L_16;
			SqliteParameter_t314071523 * L_17 = V_2;
			NullCheck(L_17);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_17, _stringLiteral3077300020);
			SqliteParameter_t314071523 * L_18 = V_2;
			String_t* L_19 = ___drawer_name1;
			NullCheck(L_18);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_18, L_19);
			SqliteParameter_t314071523 * L_20 = V_2;
			NullCheck(L_15);
			SqliteParameterCollection_Add_m649006753(L_15, L_20, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_21 = V_1;
			NullCheck(L_21);
			int32_t L_22 = VirtFuncInvoker0< int32_t >::Invoke(30 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_21);
			V_3 = L_22;
			int32_t L_23 = V_3;
			int32_t L_24 = L_23;
			RuntimeObject * L_25 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_24);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_26 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3075332230, L_25, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xA3, FINALLY_0096);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0096;
		}

FINALLY_0096:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t3916884476 * L_27 = V_1;
				if (!L_27)
				{
					goto IL_00a2;
				}
			}

IL_009c:
			{
				SqliteCommand_t3916884476 * L_28 = V_1;
				NullCheck(L_28);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_28);
			}

IL_00a2:
			{
				IL2CPP_END_FINALLY(150)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(150)
		{
			IL2CPP_JUMP_TBL(0xA3, IL_00a3)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00a3:
		{
			IL2CPP_LEAVE(0xB5, FINALLY_00a8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{ // begin finally (depth: 1)
		{
			SqliteConnection_t3870565407 * L_29 = V_0;
			if (!L_29)
			{
				goto IL_00b4;
			}
		}

IL_00ae:
		{
			SqliteConnection_t3870565407 * L_30 = V_0;
			NullCheck(L_30);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_30);
		}

IL_00b4:
		{
			IL2CPP_END_FINALLY(168)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b5:
	{
		return;
	}
}
// System.Void database::Lookup_Drawer(System.String&,System.String)
extern "C"  void database_Lookup_Drawer_m3676041653 (database_t2832598855 * __this, String_t** ___mat_name0, String_t* ___drawer_name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (database_Lookup_Drawer_m3676041653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteConnection_t3870565407 * V_0 = NULL;
	SqliteCommand_t3916884476 * V_1 = NULL;
	SqliteParameter_t314071523 * V_2 = NULL;
	SqliteDataReader_t2933346592 * V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get_dbPath_2();
		SqliteConnection_t3870565407 * L_1 = (SqliteConnection_t3870565407 *)il2cpp_codegen_object_new(SqliteConnection_t3870565407_il2cpp_TypeInfo_var);
		SqliteConnection__ctor_m1023779099(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t3870565407 * L_2 = V_0;
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(24 /* System.Void System.Data.Common.DbConnection::Open() */, L_2);
			SqliteConnection_t3870565407 * L_3 = V_0;
			NullCheck(L_3);
			SqliteCommand_t3916884476 * L_4 = SqliteConnection_CreateCommand_m1680859346(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				SqliteCommand_t3916884476 * L_5 = V_1;
				NullCheck(L_5);
				VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType) */, L_5, 1);
				SqliteCommand_t3916884476 * L_6 = V_1;
				NullCheck(L_6);
				VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_6, _stringLiteral2718088135);
				SqliteCommand_t3916884476 * L_7 = V_1;
				NullCheck(L_7);
				SqliteParameterCollection_t2576174450 * L_8 = SqliteCommand_get_Parameters_m1252166937(L_7, /*hidden argument*/NULL);
				SqliteParameter_t314071523 * L_9 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
				SqliteParameter__ctor_m3178908702(L_9, /*hidden argument*/NULL);
				V_2 = L_9;
				SqliteParameter_t314071523 * L_10 = V_2;
				NullCheck(L_10);
				VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_10, _stringLiteral3077300020);
				SqliteParameter_t314071523 * L_11 = V_2;
				String_t* L_12 = ___drawer_name1;
				NullCheck(L_11);
				VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_11, L_12);
				SqliteParameter_t314071523 * L_13 = V_2;
				NullCheck(L_8);
				SqliteParameterCollection_Add_m649006753(L_8, L_13, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
				Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral188910960, /*hidden argument*/NULL);
				SqliteCommand_t3916884476 * L_14 = V_1;
				NullCheck(L_14);
				SqliteDataReader_t2933346592 * L_15 = SqliteCommand_ExecuteReader_m2650318165(L_14, /*hidden argument*/NULL);
				V_3 = L_15;
				goto IL_0073;
			}

IL_0066:
			{
				SqliteDataReader_t2933346592 * L_16 = V_3;
				NullCheck(L_16);
				String_t* L_17 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(32 /* System.String System.Data.Common.DbDataReader::GetString(System.Int32) */, L_16, 0);
				V_4 = L_17;
				String_t** L_18 = ___mat_name0;
				String_t* L_19 = V_4;
				*((RuntimeObject **)(L_18)) = (RuntimeObject *)L_19;
				Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_18), (RuntimeObject *)L_19);
			}

IL_0073:
			{
				SqliteDataReader_t2933346592 * L_20 = V_3;
				NullCheck(L_20);
				bool L_21 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Data.Common.DbDataReader::Read() */, L_20);
				if (L_21)
				{
					goto IL_0066;
				}
			}

IL_007e:
			{
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
				Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3279586766, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x9A, FINALLY_008d);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_008d;
		}

FINALLY_008d:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t3916884476 * L_22 = V_1;
				if (!L_22)
				{
					goto IL_0099;
				}
			}

IL_0093:
			{
				SqliteCommand_t3916884476 * L_23 = V_1;
				NullCheck(L_23);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
			}

IL_0099:
			{
				IL2CPP_END_FINALLY(141)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(141)
		{
			IL2CPP_JUMP_TBL(0x9A, IL_009a)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_009a:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_009f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009f;
	}

FINALLY_009f:
	{ // begin finally (depth: 1)
		{
			SqliteConnection_t3870565407 * L_24 = V_0;
			if (!L_24)
			{
				goto IL_00ab;
			}
		}

IL_00a5:
		{
			SqliteConnection_t3870565407 * L_25 = V_0;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
		}

IL_00ab:
		{
			IL2CPP_END_FINALLY(159)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ac:
	{
		return;
	}
}
// System.Void database::Lookup_Mat(System.String,System.String&)
extern "C"  void database_Lookup_Mat_m148036058 (database_t2832598855 * __this, String_t* ___mat_name0, String_t** ___drawer_name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (database_Lookup_Mat_m148036058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteConnection_t3870565407 * V_0 = NULL;
	SqliteCommand_t3916884476 * V_1 = NULL;
	SqliteParameter_t314071523 * V_2 = NULL;
	SqliteDataReader_t2933346592 * V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get_dbPath_2();
		SqliteConnection_t3870565407 * L_1 = (SqliteConnection_t3870565407 *)il2cpp_codegen_object_new(SqliteConnection_t3870565407_il2cpp_TypeInfo_var);
		SqliteConnection__ctor_m1023779099(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t3870565407 * L_2 = V_0;
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(24 /* System.Void System.Data.Common.DbConnection::Open() */, L_2);
			SqliteConnection_t3870565407 * L_3 = V_0;
			NullCheck(L_3);
			SqliteCommand_t3916884476 * L_4 = SqliteConnection_CreateCommand_m1680859346(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				SqliteCommand_t3916884476 * L_5 = V_1;
				NullCheck(L_5);
				VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType) */, L_5, 1);
				SqliteCommand_t3916884476 * L_6 = V_1;
				NullCheck(L_6);
				VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_6, _stringLiteral1694103759);
				SqliteCommand_t3916884476 * L_7 = V_1;
				NullCheck(L_7);
				SqliteParameterCollection_t2576174450 * L_8 = SqliteCommand_get_Parameters_m1252166937(L_7, /*hidden argument*/NULL);
				SqliteParameter_t314071523 * L_9 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
				SqliteParameter__ctor_m3178908702(L_9, /*hidden argument*/NULL);
				V_2 = L_9;
				SqliteParameter_t314071523 * L_10 = V_2;
				NullCheck(L_10);
				VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_10, _stringLiteral3629099586);
				SqliteParameter_t314071523 * L_11 = V_2;
				String_t* L_12 = ___mat_name0;
				NullCheck(L_11);
				VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_11, L_12);
				SqliteParameter_t314071523 * L_13 = V_2;
				NullCheck(L_8);
				SqliteParameterCollection_Add_m649006753(L_8, L_13, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
				Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2834521899, /*hidden argument*/NULL);
				SqliteCommand_t3916884476 * L_14 = V_1;
				NullCheck(L_14);
				SqliteDataReader_t2933346592 * L_15 = SqliteCommand_ExecuteReader_m2650318165(L_14, /*hidden argument*/NULL);
				V_3 = L_15;
				goto IL_0073;
			}

IL_0066:
			{
				SqliteDataReader_t2933346592 * L_16 = V_3;
				NullCheck(L_16);
				String_t* L_17 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(32 /* System.String System.Data.Common.DbDataReader::GetString(System.Int32) */, L_16, 0);
				V_4 = L_17;
				String_t** L_18 = ___drawer_name1;
				String_t* L_19 = V_4;
				*((RuntimeObject **)(L_18)) = (RuntimeObject *)L_19;
				Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_18), (RuntimeObject *)L_19);
			}

IL_0073:
			{
				SqliteDataReader_t2933346592 * L_20 = V_3;
				NullCheck(L_20);
				bool L_21 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Data.Common.DbDataReader::Read() */, L_20);
				if (L_21)
				{
					goto IL_0066;
				}
			}

IL_007e:
			{
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
				Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1750022173, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x9A, FINALLY_008d);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_008d;
		}

FINALLY_008d:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t3916884476 * L_22 = V_1;
				if (!L_22)
				{
					goto IL_0099;
				}
			}

IL_0093:
			{
				SqliteCommand_t3916884476 * L_23 = V_1;
				NullCheck(L_23);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
			}

IL_0099:
			{
				IL2CPP_END_FINALLY(141)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(141)
		{
			IL2CPP_JUMP_TBL(0x9A, IL_009a)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_009a:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_009f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009f;
	}

FINALLY_009f:
	{ // begin finally (depth: 1)
		{
			SqliteConnection_t3870565407 * L_24 = V_0;
			if (!L_24)
			{
				goto IL_00ab;
			}
		}

IL_00a5:
		{
			SqliteConnection_t3870565407 * L_25 = V_0;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
		}

IL_00ab:
		{
			IL2CPP_END_FINALLY(159)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ac:
	{
		return;
	}
}
// System.Void database::Lookup_URL(System.String,System.Collections.Generic.List`1<System.String>&)
extern "C"  void database_Lookup_URL_m2247219714 (database_t2832598855 * __this, String_t* ___URL0, List_1_t3319525431 ** ___Mat_List1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (database_Lookup_URL_m2247219714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteConnection_t3870565407 * V_0 = NULL;
	SqliteCommand_t3916884476 * V_1 = NULL;
	SqliteParameter_t314071523 * V_2 = NULL;
	int32_t V_3 = 0;
	SqliteDataReader_t2933346592 * V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get_dbPath_2();
		SqliteConnection_t3870565407 * L_1 = (SqliteConnection_t3870565407 *)il2cpp_codegen_object_new(SqliteConnection_t3870565407_il2cpp_TypeInfo_var);
		SqliteConnection__ctor_m1023779099(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t3870565407 * L_2 = V_0;
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(24 /* System.Void System.Data.Common.DbConnection::Open() */, L_2);
			SqliteConnection_t3870565407 * L_3 = V_0;
			NullCheck(L_3);
			SqliteCommand_t3916884476 * L_4 = SqliteConnection_CreateCommand_m1680859346(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				SqliteCommand_t3916884476 * L_5 = V_1;
				NullCheck(L_5);
				VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType) */, L_5, 1);
				SqliteCommand_t3916884476 * L_6 = V_1;
				NullCheck(L_6);
				VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_6, _stringLiteral2788740427);
				SqliteCommand_t3916884476 * L_7 = V_1;
				NullCheck(L_7);
				SqliteParameterCollection_t2576174450 * L_8 = SqliteCommand_get_Parameters_m1252166937(L_7, /*hidden argument*/NULL);
				SqliteParameter_t314071523 * L_9 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
				SqliteParameter__ctor_m3178908702(L_9, /*hidden argument*/NULL);
				V_2 = L_9;
				SqliteParameter_t314071523 * L_10 = V_2;
				NullCheck(L_10);
				VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_10, _stringLiteral1487869097);
				SqliteParameter_t314071523 * L_11 = V_2;
				String_t* L_12 = ___URL0;
				NullCheck(L_11);
				VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_11, L_12);
				SqliteParameter_t314071523 * L_13 = V_2;
				NullCheck(L_8);
				SqliteParameterCollection_Add_m649006753(L_8, L_13, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
				Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3227435492, /*hidden argument*/NULL);
				V_3 = 0;
				SqliteCommand_t3916884476 * L_14 = V_1;
				NullCheck(L_14);
				SqliteDataReader_t2933346592 * L_15 = SqliteCommand_ExecuteReader_m2650318165(L_14, /*hidden argument*/NULL);
				V_4 = L_15;
				goto IL_00fd;
			}

IL_0069:
			{
				int32_t L_16 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
				SqliteDataReader_t2933346592 * L_17 = V_4;
				NullCheck(L_17);
				String_t* L_18 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(32 /* System.String System.Data.Common.DbDataReader::GetString(System.Int32) */, L_17, 0);
				V_5 = L_18;
				SqliteDataReader_t2933346592 * L_19 = V_4;
				NullCheck(L_19);
				String_t* L_20 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(32 /* System.String System.Data.Common.DbDataReader::GetString(System.Int32) */, L_19, 1);
				V_6 = L_20;
				SqliteDataReader_t2933346592 * L_21 = V_4;
				NullCheck(L_21);
				String_t* L_22 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(32 /* System.String System.Data.Common.DbDataReader::GetString(System.Int32) */, L_21, 2);
				V_7 = L_22;
				SqliteDataReader_t2933346592 * L_23 = V_4;
				NullCheck(L_23);
				String_t* L_24 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(32 /* System.String System.Data.Common.DbDataReader::GetString(System.Int32) */, L_23, 3);
				V_8 = L_24;
				String_t* L_25 = V_5;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				bool L_26 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_25, _stringLiteral2791739702, /*hidden argument*/NULL);
				if (!L_26)
				{
					goto IL_00af;
				}
			}

IL_00a6:
			{
				List_1_t3319525431 ** L_27 = ___Mat_List1;
				String_t* L_28 = V_5;
				NullCheck((*((List_1_t3319525431 **)L_27)));
				List_1_Add_m1685793073((*((List_1_t3319525431 **)L_27)), L_28, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
			}

IL_00af:
			{
				String_t* L_29 = V_6;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				bool L_30 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_29, _stringLiteral2791739702, /*hidden argument*/NULL);
				if (!L_30)
				{
					goto IL_00c9;
				}
			}

IL_00c0:
			{
				List_1_t3319525431 ** L_31 = ___Mat_List1;
				String_t* L_32 = V_6;
				NullCheck((*((List_1_t3319525431 **)L_31)));
				List_1_Add_m1685793073((*((List_1_t3319525431 **)L_31)), L_32, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
			}

IL_00c9:
			{
				String_t* L_33 = V_7;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				bool L_34 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_33, _stringLiteral2791739702, /*hidden argument*/NULL);
				if (!L_34)
				{
					goto IL_00e3;
				}
			}

IL_00da:
			{
				List_1_t3319525431 ** L_35 = ___Mat_List1;
				String_t* L_36 = V_7;
				NullCheck((*((List_1_t3319525431 **)L_35)));
				List_1_Add_m1685793073((*((List_1_t3319525431 **)L_35)), L_36, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
			}

IL_00e3:
			{
				String_t* L_37 = V_8;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				bool L_38 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_37, _stringLiteral2791739702, /*hidden argument*/NULL);
				if (!L_38)
				{
					goto IL_00fd;
				}
			}

IL_00f4:
			{
				List_1_t3319525431 ** L_39 = ___Mat_List1;
				String_t* L_40 = V_8;
				NullCheck((*((List_1_t3319525431 **)L_39)));
				List_1_Add_m1685793073((*((List_1_t3319525431 **)L_39)), L_40, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
			}

IL_00fd:
			{
				SqliteDataReader_t2933346592 * L_41 = V_4;
				NullCheck(L_41);
				bool L_42 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Data.Common.DbDataReader::Read() */, L_41);
				if (L_42)
				{
					goto IL_0069;
				}
			}

IL_0109:
			{
				String_t* L_43 = Int32_ToString_m141394615((&V_3), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_44 = String_Concat_m3937257545(NULL /*static, unused*/, L_43, _stringLiteral1615023743, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
				Debug_Log_m4051431634(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
				Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3809017321, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x141, FINALLY_0134);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0134;
		}

FINALLY_0134:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t3916884476 * L_45 = V_1;
				if (!L_45)
				{
					goto IL_0140;
				}
			}

IL_013a:
			{
				SqliteCommand_t3916884476 * L_46 = V_1;
				NullCheck(L_46);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_46);
			}

IL_0140:
			{
				IL2CPP_END_FINALLY(308)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(308)
		{
			IL2CPP_JUMP_TBL(0x141, IL_0141)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0141:
		{
			IL2CPP_LEAVE(0x153, FINALLY_0146);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0146;
	}

FINALLY_0146:
	{ // begin finally (depth: 1)
		{
			SqliteConnection_t3870565407 * L_47 = V_0;
			if (!L_47)
			{
				goto IL_0152;
			}
		}

IL_014c:
		{
			SqliteConnection_t3870565407 * L_48 = V_0;
			NullCheck(L_48);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_48);
		}

IL_0152:
		{
			IL2CPP_END_FINALLY(326)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(326)
	{
		IL2CPP_JUMP_TBL(0x153, IL_0153)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0153:
	{
		return;
	}
}
// System.Void database::Get_Description(System.String,System.Boolean&,System.String&)
extern "C"  void database_Get_Description_m2229621183 (database_t2832598855 * __this, String_t* ___Mat_name0, bool* ___is_dangerous1, String_t** ___description2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (database_Get_Description_m2229621183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteConnection_t3870565407 * V_0 = NULL;
	SqliteCommand_t3916884476 * V_1 = NULL;
	SqliteParameter_t314071523 * V_2 = NULL;
	SqliteDataReader_t2933346592 * V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get_dbPath_2();
		SqliteConnection_t3870565407 * L_1 = (SqliteConnection_t3870565407 *)il2cpp_codegen_object_new(SqliteConnection_t3870565407_il2cpp_TypeInfo_var);
		SqliteConnection__ctor_m1023779099(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t3870565407 * L_2 = V_0;
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(24 /* System.Void System.Data.Common.DbConnection::Open() */, L_2);
			SqliteConnection_t3870565407 * L_3 = V_0;
			NullCheck(L_3);
			SqliteCommand_t3916884476 * L_4 = SqliteConnection_CreateCommand_m1680859346(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				SqliteCommand_t3916884476 * L_5 = V_1;
				NullCheck(L_5);
				VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType) */, L_5, 1);
				SqliteCommand_t3916884476 * L_6 = V_1;
				NullCheck(L_6);
				VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_6, _stringLiteral1150927608);
				SqliteCommand_t3916884476 * L_7 = V_1;
				NullCheck(L_7);
				SqliteParameterCollection_t2576174450 * L_8 = SqliteCommand_get_Parameters_m1252166937(L_7, /*hidden argument*/NULL);
				SqliteParameter_t314071523 * L_9 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
				SqliteParameter__ctor_m3178908702(L_9, /*hidden argument*/NULL);
				V_2 = L_9;
				SqliteParameter_t314071523 * L_10 = V_2;
				NullCheck(L_10);
				VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_10, _stringLiteral3629099554);
				SqliteParameter_t314071523 * L_11 = V_2;
				String_t* L_12 = ___Mat_name0;
				NullCheck(L_11);
				VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_11, L_12);
				SqliteParameter_t314071523 * L_13 = V_2;
				NullCheck(L_8);
				SqliteParameterCollection_Add_m649006753(L_8, L_13, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
				Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral321203952, /*hidden argument*/NULL);
				SqliteCommand_t3916884476 * L_14 = V_1;
				NullCheck(L_14);
				SqliteDataReader_t2933346592 * L_15 = SqliteCommand_ExecuteReader_m2650318165(L_14, /*hidden argument*/NULL);
				V_3 = L_15;
				goto IL_00a1;
			}

IL_0066:
			{
				SqliteDataReader_t2933346592 * L_16 = V_3;
				NullCheck(L_16);
				int32_t L_17 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* System.Int32 System.Data.Common.DbDataReader::GetInt32(System.Int32) */, L_16, 0);
				V_4 = L_17;
				SqliteDataReader_t2933346592 * L_18 = V_3;
				NullCheck(L_18);
				String_t* L_19 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(32 /* System.String System.Data.Common.DbDataReader::GetString(System.Int32) */, L_18, 1);
				V_5 = L_19;
				SqliteDataReader_t2933346592 * L_20 = V_3;
				NullCheck(L_20);
				int32_t L_21 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* System.Int32 System.Data.Common.DbDataReader::GetInt32(System.Int32) */, L_20, 2);
				V_6 = L_21;
				int32_t L_22 = V_6;
				if ((!(((uint32_t)L_22) == ((uint32_t)1))))
				{
					goto IL_0091;
				}
			}

IL_0089:
			{
				bool* L_23 = ___is_dangerous1;
				*((int8_t*)(L_23)) = (int8_t)1;
				goto IL_0094;
			}

IL_0091:
			{
				bool* L_24 = ___is_dangerous1;
				*((int8_t*)(L_24)) = (int8_t)0;
			}

IL_0094:
			{
				SqliteDataReader_t2933346592 * L_25 = V_3;
				NullCheck(L_25);
				String_t* L_26 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(32 /* System.String System.Data.Common.DbDataReader::GetString(System.Int32) */, L_25, 3);
				V_7 = L_26;
				String_t** L_27 = ___description2;
				String_t* L_28 = V_7;
				*((RuntimeObject **)(L_27)) = (RuntimeObject *)L_28;
				Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_27), (RuntimeObject *)L_28);
			}

IL_00a1:
			{
				SqliteDataReader_t2933346592 * L_29 = V_3;
				NullCheck(L_29);
				bool L_30 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Data.Common.DbDataReader::Read() */, L_29);
				if (L_30)
				{
					goto IL_0066;
				}
			}

IL_00ac:
			{
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
				Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3288959135, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0xC8, FINALLY_00bb);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00bb;
		}

FINALLY_00bb:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t3916884476 * L_31 = V_1;
				if (!L_31)
				{
					goto IL_00c7;
				}
			}

IL_00c1:
			{
				SqliteCommand_t3916884476 * L_32 = V_1;
				NullCheck(L_32);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_32);
			}

IL_00c7:
			{
				IL2CPP_END_FINALLY(187)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(187)
		{
			IL2CPP_JUMP_TBL(0xC8, IL_00c8)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00c8:
		{
			IL2CPP_LEAVE(0xDA, FINALLY_00cd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cd;
	}

FINALLY_00cd:
	{ // begin finally (depth: 1)
		{
			SqliteConnection_t3870565407 * L_33 = V_0;
			if (!L_33)
			{
				goto IL_00d9;
			}
		}

IL_00d3:
		{
			SqliteConnection_t3870565407 * L_34 = V_0;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_34);
		}

IL_00d9:
		{
			IL2CPP_END_FINALLY(205)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(205)
	{
		IL2CPP_JUMP_TBL(0xDA, IL_00da)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00da:
	{
		return;
	}
}
// System.Void database::Get_Image_URL(System.String,System.Collections.Generic.List`1<System.String>&)
extern "C"  void database_Get_Image_URL_m4261697933 (database_t2832598855 * __this, String_t* ___Mat_name0, List_1_t3319525431 ** ___URL_List1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (database_Get_Image_URL_m4261697933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteConnection_t3870565407 * V_0 = NULL;
	SqliteCommand_t3916884476 * V_1 = NULL;
	SqliteParameter_t314071523 * V_2 = NULL;
	SqliteDataReader_t2933346592 * V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get_dbPath_2();
		SqliteConnection_t3870565407 * L_1 = (SqliteConnection_t3870565407 *)il2cpp_codegen_object_new(SqliteConnection_t3870565407_il2cpp_TypeInfo_var);
		SqliteConnection__ctor_m1023779099(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t3870565407 * L_2 = V_0;
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(24 /* System.Void System.Data.Common.DbConnection::Open() */, L_2);
			SqliteConnection_t3870565407 * L_3 = V_0;
			NullCheck(L_3);
			SqliteCommand_t3916884476 * L_4 = SqliteConnection_CreateCommand_m1680859346(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				SqliteCommand_t3916884476 * L_5 = V_1;
				NullCheck(L_5);
				VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType) */, L_5, 1);
				SqliteCommand_t3916884476 * L_6 = V_1;
				NullCheck(L_6);
				VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_6, _stringLiteral1131764937);
				SqliteCommand_t3916884476 * L_7 = V_1;
				NullCheck(L_7);
				SqliteParameterCollection_t2576174450 * L_8 = SqliteCommand_get_Parameters_m1252166937(L_7, /*hidden argument*/NULL);
				SqliteParameter_t314071523 * L_9 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
				SqliteParameter__ctor_m3178908702(L_9, /*hidden argument*/NULL);
				V_2 = L_9;
				SqliteParameter_t314071523 * L_10 = V_2;
				NullCheck(L_10);
				VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_10, _stringLiteral3629099554);
				SqliteParameter_t314071523 * L_11 = V_2;
				String_t* L_12 = ___Mat_name0;
				NullCheck(L_11);
				VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_11, L_12);
				SqliteParameter_t314071523 * L_13 = V_2;
				NullCheck(L_8);
				SqliteParameterCollection_Add_m649006753(L_8, L_13, /*hidden argument*/NULL);
				SqliteCommand_t3916884476 * L_14 = V_1;
				NullCheck(L_14);
				SqliteDataReader_t2933346592 * L_15 = SqliteCommand_ExecuteReader_m2650318165(L_14, /*hidden argument*/NULL);
				V_3 = L_15;
				goto IL_006e;
			}

IL_005c:
			{
				SqliteDataReader_t2933346592 * L_16 = V_3;
				NullCheck(L_16);
				String_t* L_17 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(32 /* System.String System.Data.Common.DbDataReader::GetString(System.Int32) */, L_16, 0);
				V_4 = L_17;
				List_1_t3319525431 ** L_18 = ___URL_List1;
				String_t* L_19 = V_4;
				NullCheck((*((List_1_t3319525431 **)L_18)));
				List_1_Add_m1685793073((*((List_1_t3319525431 **)L_18)), L_19, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
			}

IL_006e:
			{
				SqliteDataReader_t2933346592 * L_20 = V_3;
				NullCheck(L_20);
				bool L_21 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Data.Common.DbDataReader::Read() */, L_20);
				if (L_21)
				{
					goto IL_005c;
				}
			}

IL_0079:
			{
				IL2CPP_LEAVE(0x8B, FINALLY_007e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_007e;
		}

FINALLY_007e:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t3916884476 * L_22 = V_1;
				if (!L_22)
				{
					goto IL_008a;
				}
			}

IL_0084:
			{
				SqliteCommand_t3916884476 * L_23 = V_1;
				NullCheck(L_23);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
			}

IL_008a:
			{
				IL2CPP_END_FINALLY(126)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(126)
		{
			IL2CPP_JUMP_TBL(0x8B, IL_008b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_008b:
		{
			IL2CPP_LEAVE(0x9D, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		{
			SqliteConnection_t3870565407 * L_24 = V_0;
			if (!L_24)
			{
				goto IL_009c;
			}
		}

IL_0096:
		{
			SqliteConnection_t3870565407 * L_25 = V_0;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
		}

IL_009c:
		{
			IL2CPP_END_FINALLY(144)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009d:
	{
		return;
	}
}
// System.Void database::Insert_Data(UnityEngine.Texture2D,System.Collections.Generic.List`1<System.String>,System.Int32)
extern "C"  void database_Insert_Data_m839353478 (database_t2832598855 * __this, Texture2D_t3840446185 * ___Saved_Img0, List_1_t3319525431 * ___Chosen_Mat1, int32_t ___time_stamp2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (database_Insert_Data_m839353478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	SqliteConnection_t3870565407 * V_2 = NULL;
	SqliteCommand_t3916884476 * V_3 = NULL;
	SqliteParameter_t314071523 * V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = Int32_ToString_m141394615((&___time_stamp2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, _stringLiteral2410385622, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0028;
	}

IL_001d:
	{
		List_1_t3319525431 * L_2 = ___Chosen_Mat1;
		NullCheck(L_2);
		List_1_Add_m1685793073(L_2, _stringLiteral2791739702, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_0028:
	{
		List_1_t3319525431 * L_3 = ___Chosen_Mat1;
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m2276455407(L_3, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		V_1 = _stringLiteral88613354;
		String_t* L_5 = __this->get_dbPath_2();
		SqliteConnection_t3870565407 * L_6 = (SqliteConnection_t3870565407 *)il2cpp_codegen_object_new(SqliteConnection_t3870565407_il2cpp_TypeInfo_var);
		SqliteConnection__ctor_m1023779099(L_6, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t3870565407 * L_7 = V_2;
			NullCheck(L_7);
			VirtActionInvoker0::Invoke(24 /* System.Void System.Data.Common.DbConnection::Open() */, L_7);
			SqliteConnection_t3870565407 * L_8 = V_2;
			NullCheck(L_8);
			SqliteCommand_t3916884476 * L_9 = SqliteConnection_CreateCommand_m1680859346(L_8, /*hidden argument*/NULL);
			V_3 = L_9;
		}

IL_0053:
		try
		{ // begin try (depth: 2)
			SqliteCommand_t3916884476 * L_10 = V_3;
			NullCheck(L_10);
			VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType) */, L_10, 1);
			SqliteCommand_t3916884476 * L_11 = V_3;
			NullCheck(L_11);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_11, _stringLiteral1700619094);
			SqliteCommand_t3916884476 * L_12 = V_3;
			NullCheck(L_12);
			SqliteParameterCollection_t2576174450 * L_13 = SqliteCommand_get_Parameters_m1252166937(L_12, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_14 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_14, /*hidden argument*/NULL);
			V_4 = L_14;
			SqliteParameter_t314071523 * L_15 = V_4;
			NullCheck(L_15);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_15, _stringLiteral1487869097);
			SqliteParameter_t314071523 * L_16 = V_4;
			String_t* L_17 = V_1;
			NullCheck(L_16);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_16, L_17);
			SqliteParameter_t314071523 * L_18 = V_4;
			NullCheck(L_13);
			SqliteParameterCollection_Add_m649006753(L_13, L_18, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_19 = V_3;
			NullCheck(L_19);
			SqliteParameterCollection_t2576174450 * L_20 = SqliteCommand_get_Parameters_m1252166937(L_19, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_21 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_21, /*hidden argument*/NULL);
			V_4 = L_21;
			SqliteParameter_t314071523 * L_22 = V_4;
			NullCheck(L_22);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_22, _stringLiteral63249573);
			SqliteParameter_t314071523 * L_23 = V_4;
			int32_t L_24 = ___time_stamp2;
			int32_t L_25 = L_24;
			RuntimeObject * L_26 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_25);
			NullCheck(L_23);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_23, L_26);
			SqliteParameter_t314071523 * L_27 = V_4;
			NullCheck(L_20);
			SqliteParameterCollection_Add_m649006753(L_20, L_27, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_28 = V_3;
			NullCheck(L_28);
			SqliteParameterCollection_t2576174450 * L_29 = SqliteCommand_get_Parameters_m1252166937(L_28, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_30 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_30, /*hidden argument*/NULL);
			V_4 = L_30;
			SqliteParameter_t314071523 * L_31 = V_4;
			NullCheck(L_31);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_31, _stringLiteral1451098921);
			SqliteParameter_t314071523 * L_32 = V_4;
			List_1_t3319525431 * L_33 = ___Chosen_Mat1;
			NullCheck(L_33);
			String_t* L_34 = List_1_get_Item_m3729392029(L_33, 0, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
			NullCheck(L_32);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_32, L_34);
			SqliteParameter_t314071523 * L_35 = V_4;
			NullCheck(L_29);
			SqliteParameterCollection_Add_m649006753(L_29, L_35, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_36 = V_3;
			NullCheck(L_36);
			SqliteParameterCollection_t2576174450 * L_37 = SqliteCommand_get_Parameters_m1252166937(L_36, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_38 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_38, /*hidden argument*/NULL);
			V_4 = L_38;
			SqliteParameter_t314071523 * L_39 = V_4;
			NullCheck(L_39);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_39, _stringLiteral3407414057);
			SqliteParameter_t314071523 * L_40 = V_4;
			List_1_t3319525431 * L_41 = ___Chosen_Mat1;
			NullCheck(L_41);
			String_t* L_42 = List_1_get_Item_m3729392029(L_41, 1, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
			NullCheck(L_40);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_40, L_42);
			SqliteParameter_t314071523 * L_43 = V_4;
			NullCheck(L_37);
			SqliteParameterCollection_Add_m649006753(L_37, L_43, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_44 = V_3;
			NullCheck(L_44);
			SqliteParameterCollection_t2576174450 * L_45 = SqliteCommand_get_Parameters_m1252166937(L_44, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_46 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_46, /*hidden argument*/NULL);
			V_4 = L_46;
			SqliteParameter_t314071523 * L_47 = V_4;
			NullCheck(L_47);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_47, _stringLiteral1068761897);
			SqliteParameter_t314071523 * L_48 = V_4;
			List_1_t3319525431 * L_49 = ___Chosen_Mat1;
			NullCheck(L_49);
			String_t* L_50 = List_1_get_Item_m3729392029(L_49, 2, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
			NullCheck(L_48);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_48, L_50);
			SqliteParameter_t314071523 * L_51 = V_4;
			NullCheck(L_45);
			SqliteParameterCollection_Add_m649006753(L_45, L_51, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_52 = V_3;
			NullCheck(L_52);
			SqliteParameterCollection_t2576174450 * L_53 = SqliteCommand_get_Parameters_m1252166937(L_52, /*hidden argument*/NULL);
			SqliteParameter_t314071523 * L_54 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
			SqliteParameter__ctor_m3178908702(L_54, /*hidden argument*/NULL);
			V_4 = L_54;
			SqliteParameter_t314071523 * L_55 = V_4;
			NullCheck(L_55);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Data.Common.DbParameter::set_ParameterName(System.String) */, L_55, _stringLiteral3025077033);
			SqliteParameter_t314071523 * L_56 = V_4;
			List_1_t3319525431 * L_57 = ___Chosen_Mat1;
			NullCheck(L_57);
			String_t* L_58 = List_1_get_Item_m3729392029(L_57, 3, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
			NullCheck(L_56);
			VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_56, L_58);
			SqliteParameter_t314071523 * L_59 = V_4;
			NullCheck(L_53);
			SqliteParameterCollection_Add_m649006753(L_53, L_59, /*hidden argument*/NULL);
			SqliteCommand_t3916884476 * L_60 = V_3;
			NullCheck(L_60);
			int32_t L_61 = VirtFuncInvoker0< int32_t >::Invoke(30 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_60);
			V_5 = L_61;
			int32_t L_62 = V_5;
			int32_t L_63 = L_62;
			RuntimeObject * L_64 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_63);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_65 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3620046386, L_64, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x1A8, FINALLY_019b);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_019b;
		}

FINALLY_019b:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t3916884476 * L_66 = V_3;
				if (!L_66)
				{
					goto IL_01a7;
				}
			}

IL_01a1:
			{
				SqliteCommand_t3916884476 * L_67 = V_3;
				NullCheck(L_67);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_67);
			}

IL_01a7:
			{
				IL2CPP_END_FINALLY(411)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(411)
		{
			IL2CPP_JUMP_TBL(0x1A8, IL_01a8)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_01a8:
		{
			IL2CPP_LEAVE(0x1BA, FINALLY_01ad);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ad;
	}

FINALLY_01ad:
	{ // begin finally (depth: 1)
		{
			SqliteConnection_t3870565407 * L_68 = V_2;
			if (!L_68)
			{
				goto IL_01b9;
			}
		}

IL_01b3:
		{
			SqliteConnection_t3870565407 * L_69 = V_2;
			NullCheck(L_69);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_69);
		}

IL_01b9:
		{
			IL2CPP_END_FINALLY(429)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(429)
	{
		IL2CPP_JUMP_TBL(0x1BA, IL_01ba)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01ba:
	{
		Texture2D_t3840446185 * L_70 = ___Saved_Img0;
		String_t* L_71 = V_0;
		RuntimeObject* L_72 = database_upload_graph_m1526148084(__this, L_70, L_71, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_72, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator database::upload_graph(UnityEngine.Texture2D,System.String)
extern "C"  RuntimeObject* database_upload_graph_m1526148084 (database_t2832598855 * __this, Texture2D_t3840446185 * ___tex0, String_t* ___upload_name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (database_upload_graph_m1526148084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3Cupload_graphU3Ec__Iterator0_t3978570228 * V_0 = NULL;
	{
		U3Cupload_graphU3Ec__Iterator0_t3978570228 * L_0 = (U3Cupload_graphU3Ec__Iterator0_t3978570228 *)il2cpp_codegen_object_new(U3Cupload_graphU3Ec__Iterator0_t3978570228_il2cpp_TypeInfo_var);
		U3Cupload_graphU3Ec__Iterator0__ctor_m3944818885(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3Cupload_graphU3Ec__Iterator0_t3978570228 * L_1 = V_0;
		Texture2D_t3840446185 * L_2 = ___tex0;
		NullCheck(L_1);
		L_1->set_tex_2(L_2);
		U3Cupload_graphU3Ec__Iterator0_t3978570228 * L_3 = V_0;
		String_t* L_4 = ___upload_name1;
		NullCheck(L_3);
		L_3->set_upload_name_5(L_4);
		U3Cupload_graphU3Ec__Iterator0_t3978570228 * L_5 = V_0;
		return L_5;
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
// System.Void database/<upload_graph>c__Iterator0::.ctor()
extern "C"  void U3Cupload_graphU3Ec__Iterator0__ctor_m3944818885 (U3Cupload_graphU3Ec__Iterator0_t3978570228 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean database/<upload_graph>c__Iterator0::MoveNext()
extern "C"  bool U3Cupload_graphU3Ec__Iterator0_MoveNext_m196589103 (U3Cupload_graphU3Ec__Iterator0_t3978570228 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cupload_graphU3Ec__Iterator0_MoveNext_m196589103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U24PC_10();
		V_0 = L_0;
		__this->set_U24PC_10((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_00fc;
			}
		}
	}
	{
		goto IL_0152;
	}

IL_0025:
	{
		WaitForEndOfFrame_t1314943911 * L_2 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_2, /*hidden argument*/NULL);
		__this->set_U24current_8(L_2);
		bool L_3 = __this->get_U24disposing_9();
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		__this->set_U24PC_10(1);
	}

IL_003f:
	{
		goto IL_0154;
	}

IL_0044:
	{
		int32_t L_4 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CwidthU3E__0_0(L_4);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CheightU3E__0_1(L_5);
		Texture2D_t3840446185 * L_6 = __this->get_tex_2();
		ByteU5BU5D_t4116647657* L_7 = ImageConversion_EncodeToPNG_m2292631531(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->set_U3CbytesU3E__0_3(L_7);
		WWWForm_t4064702195 * L_8 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_8, /*hidden argument*/NULL);
		__this->set_U3CformU3E__0_4(L_8);
		WWWForm_t4064702195 * L_9 = __this->get_U3CformU3E__0_4();
		int32_t L_10 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = Int32_ToString_m141394615((&V_1), /*hidden argument*/NULL);
		NullCheck(L_9);
		WWWForm_AddField_m2357902982(L_9, _stringLiteral207938285, L_11, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_12 = __this->get_U3CformU3E__0_4();
		ByteU5BU5D_t4116647657* L_13 = __this->get_U3CbytesU3E__0_3();
		String_t* L_14 = __this->get_upload_name_5();
		NullCheck(L_12);
		WWWForm_AddBinaryData_m1593257607(L_12, _stringLiteral1629333464, L_13, L_14, _stringLiteral2045074213, /*hidden argument*/NULL);
		__this->set_U3CscreenShotURLU3E__0_6(_stringLiteral1534596270);
		String_t* L_15 = __this->get_U3CscreenShotURLU3E__0_6();
		WWWForm_t4064702195 * L_16 = __this->get_U3CformU3E__0_4();
		WWW_t3688466362 * L_17 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m1562165(L_17, L_15, L_16, /*hidden argument*/NULL);
		__this->set_U3CwU3E__0_7(L_17);
		WWW_t3688466362 * L_18 = __this->get_U3CwU3E__0_7();
		__this->set_U24current_8(L_18);
		bool L_19 = __this->get_U24disposing_9();
		if (L_19)
		{
			goto IL_00f7;
		}
	}
	{
		__this->set_U24PC_10(2);
	}

IL_00f7:
	{
		goto IL_0154;
	}

IL_00fc:
	{
		WWW_t3688466362 * L_20 = __this->get_U3CwU3E__0_7();
		NullCheck(L_20);
		String_t* L_21 = WWW_get_error_m3055313367(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0121;
		}
	}
	{
		WWW_t3688466362 * L_22 = __this->get_U3CwU3E__0_7();
		NullCheck(L_22);
		String_t* L_23 = WWW_get_error_m3055313367(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_0121:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral204976784, /*hidden argument*/NULL);
		WWW_t3688466362 * L_24 = __this->get_U3CwU3E__0_7();
		NullCheck(L_24);
		String_t* L_25 = WWW_get_text_m898164367(L_24, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		WWW_t3688466362 * L_26 = __this->get_U3CwU3E__0_7();
		NullCheck(L_26);
		String_t* L_27 = WWW_get_url_m3672399347(L_26, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
	}

IL_014b:
	{
		__this->set_U24PC_10((-1));
	}

IL_0152:
	{
		return (bool)0;
	}

IL_0154:
	{
		return (bool)1;
	}
}
// System.Object database/<upload_graph>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3Cupload_graphU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2641706498 (U3Cupload_graphU3Ec__Iterator0_t3978570228 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_8();
		return L_0;
	}
}
// System.Object database/<upload_graph>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3Cupload_graphU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3513749992 (U3Cupload_graphU3Ec__Iterator0_t3978570228 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_8();
		return L_0;
	}
}
// System.Void database/<upload_graph>c__Iterator0::Dispose()
extern "C"  void U3Cupload_graphU3Ec__Iterator0_Dispose_m2225872125 (U3Cupload_graphU3Ec__Iterator0_t3978570228 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_9((bool)1);
		__this->set_U24PC_10((-1));
		return;
	}
}
// System.Void database/<upload_graph>c__Iterator0::Reset()
extern "C"  void U3Cupload_graphU3Ec__Iterator0_Reset_m602822813 (U3Cupload_graphU3Ec__Iterator0_t3978570228 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cupload_graphU3Ec__Iterator0_Reset_m602822813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void DefaultInitializationErrorHandler::.ctor()
extern "C"  void DefaultInitializationErrorHandler__ctor_m2145257936 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler__ctor_m2145257936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_mErrorText_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnVuforiaInitializationError(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___initError0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___initError0;
		DefaultInitializationErrorHandler_SetErrorCode_m599033302(__this, L_1, /*hidden argument*/NULL);
		DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Awake()
extern "C"  void DefaultInitializationErrorHandler_Awake_m1713298888 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_Awake_m1713298888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Start()
extern "C"  void DefaultInitializationErrorHandler_Start_m2498604264 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	{
		DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnGUI()
extern "C"  void DefaultInitializationErrorHandler_OnGUI_m2338842741 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnGUI_m2338842741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mErrorOccurred_3();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_RuntimeMethod_var;
		WindowFunction_t3146511083 * L_5 = (WindowFunction_t3146511083 *)il2cpp_codegen_object_new(WindowFunction_t3146511083_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2544237635(L_5, __this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Window_m1088326791(NULL /*static, unused*/, 0, L_3, L_5, L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnDestroy()
extern "C"  void DefaultInitializationErrorHandler_OnDestroy_m3668093536 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnDestroy_m3668093536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::DrawWindowContent(System.Int32)
extern "C"  void DefaultInitializationErrorHandler_DrawWindowContent_m2208378571 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_0), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)((int32_t)((int32_t)L_1/(int32_t)8))))), /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_1), (0.0f), (((float)((float)((int32_t)((int32_t)L_2/(int32_t)8))))), (((float)((float)L_3))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_4/(int32_t)8)), (int32_t)6))))), /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_2), (0.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_6/(int32_t)8))))))), (((float)((float)L_7))), (((float)((float)((int32_t)((int32_t)L_8/(int32_t)8))))), /*hidden argument*/NULL);
		Rect_t2360479859  L_9 = V_0;
		GUIStyle_t3956901511 * L_10 = __this->get_headerStyle_6();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Label_m2420537077(NULL /*static, unused*/, L_9, _stringLiteral2016908147, L_10, /*hidden argument*/NULL);
		Rect_t2360479859  L_11 = V_1;
		String_t* L_12 = __this->get_mErrorText_2();
		GUIStyle_t3956901511 * L_13 = __this->get_bodyStyle_5();
		GUI_Label_m2420537077(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		Rect_t2360479859  L_14 = V_2;
		GUIStyle_t3956901511 * L_15 = __this->get_footerStyle_7();
		bool L_16 = GUI_Button_m2223708732(NULL /*static, unused*/, L_14, _stringLiteral3483484711, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_SetErrorCode_m599033302 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetErrorCode_m599033302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00ac;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0046;
			}
			case 7:
			{
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00eb;
			}
			case 9:
			{
				goto IL_00fb;
			}
		}
	}
	{
		goto IL_010b;
	}

IL_0036:
	{
		__this->set_mErrorText_2(_stringLiteral3279329212);
		goto IL_010b;
	}

IL_0046:
	{
		__this->set_mErrorText_2(_stringLiteral3325583105);
		goto IL_010b;
	}

IL_0056:
	{
		String_t* L_1 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1253325676, L_1, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_2);
		goto IL_010b;
	}

IL_0071:
	{
		__this->set_mErrorText_2(_stringLiteral2959890895);
		goto IL_010b;
	}

IL_0081:
	{
		__this->set_mErrorText_2(_stringLiteral2293327149);
		goto IL_010b;
	}

IL_0091:
	{
		String_t* L_3 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2746077084, L_3, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_4);
		goto IL_010b;
	}

IL_00ac:
	{
		String_t* L_5 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2746058527, L_5, _stringLiteral491174246, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_6);
		goto IL_010b;
	}

IL_00cc:
	{
		String_t* L_7 = Application_get_productName_m2401755738(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3183081100, L_7, _stringLiteral868600955, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_8);
		goto IL_010b;
	}

IL_00eb:
	{
		__this->set_mErrorText_2(_stringLiteral3122929577);
		goto IL_010b;
	}

IL_00fb:
	{
		__this->set_mErrorText_2(_stringLiteral3567432369);
		goto IL_010b;
	}

IL_010b:
	{
		RuntimeObject * L_9 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, (&___errorCode0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___errorCode0 = *(int32_t*)UnBox(L_9);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m1273907647(L_10, _stringLiteral3452614641, _stringLiteral3452614528, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_mErrorText_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral229317972, L_11, _stringLiteral2072581803, L_12, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_13);
		String_t* L_14 = __this->get_mErrorText_2();
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_14);
		String_t* L_16 = String_Replace_m1273907647(L_14, _stringLiteral229317972, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_16);
		String_t* L_18 = String_Replace_m1273907647(L_16, _stringLiteral2642543365, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		ObjectU5BU5D_t2843939325* L_19 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral3752705136);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3752705136);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		int32_t L_21 = ___errorCode0;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = L_20;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral3453007782);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3453007782);
		ObjectU5BU5D_t2843939325* L_25 = L_24;
		String_t* L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_26);
		String_t* L_27 = String_Concat_m2971454694(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C"  void DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___errorOccurred0;
		__this->set_mErrorOccurred_3(L_0);
		return;
	}
}
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C"  String_t* DefaultInitializationErrorHandler_getKeyInfo_m1864640064 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_getKeyInfo_m1864640064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t3697830469 * L_1 = VuforiaConfiguration_get_Vuforia_m1588208597(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GenericVuforiaConfiguration_get_LicenseKey_m2270076687(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1431967569);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_6;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3797279721);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3797279721);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		String_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = String_Substring_m1610150815(L_13, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		ObjectU5BU5D_t2843939325* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1108443480);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1108443480);
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_20 = String_Substring_m1610150815(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)5)), 5, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_16;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral2072975055);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m2971454694(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		goto IL_00af;
	}

IL_0079:
	{
		ObjectU5BU5D_t2843939325* L_23 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral1431967569);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_24 = L_23;
		String_t* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m3847582255(L_25, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_28);
		ObjectU5BU5D_t2843939325* L_29 = L_24;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral1498400317);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1498400317);
		ObjectU5BU5D_t2843939325* L_30 = L_29;
		String_t* L_31 = V_0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = L_30;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral2072975055);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m2971454694(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_1 = L_33;
	}

IL_00af:
	{
		String_t* L_34 = V_1;
		return L_34;
	}
}
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C"  void DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0019:
	{
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		float L_5 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((float)L_4)))/(float)L_5));
		float L_6 = V_1;
		if ((!(((float)L_6) > ((float)(4.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		G_B6_0 = 2;
		goto IL_003a;
	}

IL_0039:
	{
		G_B6_0 = 1;
	}

IL_003a:
	{
		V_2 = G_B6_0;
		Color_t2555686324  L_7 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_8 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_7, /*hidden argument*/NULL);
		__this->set_bodyTexture_8(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_10 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_11 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Color__ctor_m286683560((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_13 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_12, /*hidden argument*/NULL);
		__this->set_headerTexture_9(L_13);
		float L_14 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (35.0f), /*hidden argument*/NULL);
		float L_15 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (178.0f), /*hidden argument*/NULL);
		float L_16 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Color__ctor_m286683560((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_18 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_17, /*hidden argument*/NULL);
		__this->set_footerTexture_10(L_18);
		GUIStyle_t3956901511 * L_19 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_19, /*hidden argument*/NULL);
		__this->set_bodyStyle_5(L_19);
		GUIStyle_t3956901511 * L_20 = __this->get_bodyStyle_5();
		NullCheck(L_20);
		GUIStyleState_t1397964415 * L_21 = GUIStyle_get_normal_m729441812(L_20, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_22 = __this->get_bodyTexture_8();
		NullCheck(L_21);
		GUIStyleState_set_background_m369476077(L_21, L_22, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_23 = __this->get_bodyStyle_5();
		Font_t1956802104 * L_24 = Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(NULL /*static, unused*/, _stringLiteral2974894664, /*hidden argument*/Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var);
		NullCheck(L_23);
		GUIStyle_set_font_m2490449107(L_23, L_24, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_25 = __this->get_bodyStyle_5();
		int32_t L_26 = V_2;
		float L_27 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		GUIStyle_set_fontSize_m1566850023(L_25, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)18), (int32_t)L_26))))), (float)L_27))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_28 = __this->get_bodyStyle_5();
		NullCheck(L_28);
		GUIStyleState_t1397964415 * L_29 = GUIStyle_get_normal_m729441812(L_28, /*hidden argument*/NULL);
		Color_t2555686324  L_30 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		GUIStyleState_set_textColor_m1105876047(L_29, L_30, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_31 = __this->get_bodyStyle_5();
		NullCheck(L_31);
		GUIStyle_set_wordWrap_m1419501823(L_31, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_32 = __this->get_bodyStyle_5();
		NullCheck(L_32);
		GUIStyle_set_alignment_m3944619660(L_32, 4, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_33 = __this->get_bodyStyle_5();
		RectOffset_t1369453676 * L_34 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m732140021(L_34, ((int32_t)40), ((int32_t)40), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyle_set_padding_m3302456044(L_33, L_34, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_35 = __this->get_bodyStyle_5();
		GUIStyle_t3956901511 * L_36 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_36, L_35, /*hidden argument*/NULL);
		__this->set_headerStyle_6(L_36);
		GUIStyle_t3956901511 * L_37 = __this->get_headerStyle_6();
		NullCheck(L_37);
		GUIStyleState_t1397964415 * L_38 = GUIStyle_get_normal_m729441812(L_37, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_39 = __this->get_headerTexture_9();
		NullCheck(L_38);
		GUIStyleState_set_background_m369476077(L_38, L_39, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_40 = __this->get_headerStyle_6();
		int32_t L_41 = V_2;
		float L_42 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		GUIStyle_set_fontSize_m1566850023(L_40, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)24), (int32_t)L_41))))), (float)L_42))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_43 = __this->get_bodyStyle_5();
		GUIStyle_t3956901511 * L_44 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_44, L_43, /*hidden argument*/NULL);
		__this->set_footerStyle_7(L_44);
		GUIStyle_t3956901511 * L_45 = __this->get_footerStyle_7();
		NullCheck(L_45);
		GUIStyleState_t1397964415 * L_46 = GUIStyle_get_normal_m729441812(L_45, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_47 = __this->get_footerTexture_10();
		NullCheck(L_46);
		GUIStyleState_set_background_m369476077(L_46, L_47, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_48 = __this->get_footerStyle_7();
		NullCheck(L_48);
		GUIStyleState_t1397964415 * L_49 = GUIStyle_get_normal_m729441812(L_48, /*hidden argument*/NULL);
		Color_t2555686324  L_50 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_49);
		GUIStyleState_set_textColor_m1105876047(L_49, L_50, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_51 = __this->get_footerStyle_7();
		int32_t L_52 = V_2;
		float L_53 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_51);
		GUIStyle_set_fontSize_m1566850023(L_51, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)28), (int32_t)L_52))))), (float)L_53))/(float)(160.0f)))))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C"  Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		Texture2D_t3840446185 * L_0 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_0, 1, 1, 5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		Texture2D_t3840446185 * L_1 = V_0;
		Color_t2555686324  L_2 = ___color0;
		NullCheck(L_1);
		Texture2D_SetPixel_m2984741184(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = V_0;
		NullCheck(L_3);
		Texture2D_Apply_m2271746283(L_3, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = V_0;
		return L_4;
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
// System.Void DefaultTrackableEventHandler::.ctor()
extern "C"  void DefaultTrackableEventHandler__ctor_m2856359002 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultTrackableEventHandler::Start()
extern "C"  void DefaultTrackableEventHandler_Start_m796446126 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_Start_m796446126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_2(L_0);
		TrackableBehaviour_t1113559212 * L_1 = __this->get_mTrackableBehaviour_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m2462783619(L_3, __this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C"  void DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111 (DefaultTrackableEventHandler_t1588957063 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___newStatus1;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___newStatus1;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___newStatus1;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_003f;
		}
	}

IL_0015:
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_3);
		String_t* L_4 = TrackableBehaviour_get_TrackableName_m3644057705(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_4, _stringLiteral3073488411, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(6 /* System.Void DefaultTrackableEventHandler::OnTrackingFound() */, __this);
		goto IL_007d;
	}

IL_003f:
	{
		int32_t L_6 = ___previousStatus0;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_7 = ___newStatus1;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0077;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_8 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_8);
		String_t* L_9 = TrackableBehaviour_get_TrackableName_m3644057705(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_9, _stringLiteral3483481617, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
		goto IL_007d;
	}

IL_0077:
	{
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
	}

IL_007d:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingFound()
extern "C"  void DefaultTrackableEventHandler_OnTrackingFound_m4202593607 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingFound_m4202593607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)1, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)1, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)1, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingLost()
extern "C"  void DefaultTrackableEventHandler_OnTrackingLost_m424172778 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingLost_m424172778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)0, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)0, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)0, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
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
// System.Void DragMe::.ctor()
extern "C"  void DragMe__ctor_m213099560 (DragMe_t1855460060 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragMe__ctor_m213099560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_dragOnSurfaces_2((bool)1);
		Dictionary_2_t2349950 * L_0 = (Dictionary_2_t2349950 *)il2cpp_codegen_object_new(Dictionary_2_t2349950_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1313944780(L_0, /*hidden argument*/Dictionary_2__ctor_m1313944780_RuntimeMethod_var);
		__this->set_m_DraggingIcons_3(L_0);
		Dictionary_2_t2593370356 * L_1 = (Dictionary_2_t2593370356 *)il2cpp_codegen_object_new(Dictionary_2_t2593370356_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m643394606(L_1, /*hidden argument*/Dictionary_2__ctor_m643394606_RuntimeMethod_var);
		__this->set_m_DraggingPlanes_4(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragMe::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DragMe_OnBeginDrag_m1718647512 (DragMe_t1855460060 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragMe_OnBeginDrag_m1718647512_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_t3310196443 * V_0 = NULL;
	Image_t2670269651 * V_1 = NULL;
	CanvasGroup_t4083511760 * V_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_1 = DragMe_FindInParents_TisCanvas_t3310196443_m2011939038(NULL /*static, unused*/, L_0, /*hidden argument*/DragMe_FindInParents_TisCanvas_t3310196443_m2011939038_RuntimeMethod_var);
		V_0 = L_1;
		Canvas_t3310196443 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		Dictionary_2_t2349950 * L_4 = __this->get_m_DraggingIcons_3();
		PointerEventData_t3807901092 * L_5 = ___eventData0;
		NullCheck(L_5);
		int32_t L_6 = PointerEventData_get_pointerId_m1200356155(L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_7, _stringLiteral416089526, /*hidden argument*/NULL);
		NullCheck(L_4);
		Dictionary_2_set_Item_m3272033541(L_4, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m3272033541_RuntimeMethod_var);
		Dictionary_2_t2349950 * L_8 = __this->get_m_DraggingIcons_3();
		PointerEventData_t3807901092 * L_9 = ___eventData0;
		NullCheck(L_9);
		int32_t L_10 = PointerEventData_get_pointerId_m1200356155(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_t1113636619 * L_11 = Dictionary_2_get_Item_m798225041(L_8, L_10, /*hidden argument*/Dictionary_2_get_Item_m798225041_RuntimeMethod_var);
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = GameObject_get_transform_m1369836730(L_11, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_13 = V_0;
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_SetParent_m273471670(L_12, L_14, (bool)0, /*hidden argument*/NULL);
		Dictionary_2_t2349950 * L_15 = __this->get_m_DraggingIcons_3();
		PointerEventData_t3807901092 * L_16 = ___eventData0;
		NullCheck(L_16);
		int32_t L_17 = PointerEventData_get_pointerId_m1200356155(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_t1113636619 * L_18 = Dictionary_2_get_Item_m798225041(L_15, L_17, /*hidden argument*/Dictionary_2_get_Item_m798225041_RuntimeMethod_var);
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = GameObject_get_transform_m1369836730(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_SetAsLastSibling_m3949169710(L_19, /*hidden argument*/NULL);
		Dictionary_2_t2349950 * L_20 = __this->get_m_DraggingIcons_3();
		PointerEventData_t3807901092 * L_21 = ___eventData0;
		NullCheck(L_21);
		int32_t L_22 = PointerEventData_get_pointerId_m1200356155(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_t1113636619 * L_23 = Dictionary_2_get_Item_m798225041(L_20, L_22, /*hidden argument*/Dictionary_2_get_Item_m798225041_RuntimeMethod_var);
		NullCheck(L_23);
		Image_t2670269651 * L_24 = GameObject_AddComponent_TisImage_t2670269651_m1594579417(L_23, /*hidden argument*/GameObject_AddComponent_TisImage_t2670269651_m1594579417_RuntimeMethod_var);
		V_1 = L_24;
		Dictionary_2_t2349950 * L_25 = __this->get_m_DraggingIcons_3();
		PointerEventData_t3807901092 * L_26 = ___eventData0;
		NullCheck(L_26);
		int32_t L_27 = PointerEventData_get_pointerId_m1200356155(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_t1113636619 * L_28 = Dictionary_2_get_Item_m798225041(L_25, L_27, /*hidden argument*/Dictionary_2_get_Item_m798225041_RuntimeMethod_var);
		NullCheck(L_28);
		CanvasGroup_t4083511760 * L_29 = GameObject_AddComponent_TisCanvasGroup_t4083511760_m2435735462(L_28, /*hidden argument*/GameObject_AddComponent_TisCanvasGroup_t4083511760_m2435735462_RuntimeMethod_var);
		V_2 = L_29;
		CanvasGroup_t4083511760 * L_30 = V_2;
		NullCheck(L_30);
		CanvasGroup_set_blocksRaycasts_m3675023212(L_30, (bool)0, /*hidden argument*/NULL);
		Image_t2670269651 * L_31 = V_1;
		Image_t2670269651 * L_32 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		NullCheck(L_32);
		Sprite_t280657092 * L_33 = Image_get_sprite_m1811690853(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Image_set_sprite_m2369174689(L_31, L_33, /*hidden argument*/NULL);
		Image_t2670269651 * L_34 = V_1;
		NullCheck(L_34);
		VirtActionInvoker0::Invoke(44 /* System.Void UnityEngine.UI.Graphic::SetNativeSize() */, L_34);
		bool L_35 = __this->get_dragOnSurfaces_2();
		if (!L_35)
		{
			goto IL_00e9;
		}
	}
	{
		Dictionary_2_t2593370356 * L_36 = __this->get_m_DraggingPlanes_4();
		PointerEventData_t3807901092 * L_37 = ___eventData0;
		NullCheck(L_37);
		int32_t L_38 = PointerEventData_get_pointerId_m1200356155(L_37, /*hidden argument*/NULL);
		Transform_t3600365921 * L_39 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Dictionary_2_set_Item_m325663497(L_36, L_38, ((RectTransform_t3704657025 *)IsInstSealed((RuntimeObject*)L_39, RectTransform_t3704657025_il2cpp_TypeInfo_var)), /*hidden argument*/Dictionary_2_set_Item_m325663497_RuntimeMethod_var);
		goto IL_0105;
	}

IL_00e9:
	{
		Dictionary_2_t2593370356 * L_40 = __this->get_m_DraggingPlanes_4();
		PointerEventData_t3807901092 * L_41 = ___eventData0;
		NullCheck(L_41);
		int32_t L_42 = PointerEventData_get_pointerId_m1200356155(L_41, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_43 = V_0;
		NullCheck(L_43);
		Transform_t3600365921 * L_44 = Component_get_transform_m3162698980(L_43, /*hidden argument*/NULL);
		NullCheck(L_40);
		Dictionary_2_set_Item_m325663497(L_40, L_42, ((RectTransform_t3704657025 *)IsInstSealed((RuntimeObject*)L_44, RectTransform_t3704657025_il2cpp_TypeInfo_var)), /*hidden argument*/Dictionary_2_set_Item_m325663497_RuntimeMethod_var);
	}

IL_0105:
	{
		PointerEventData_t3807901092 * L_45 = ___eventData0;
		DragMe_SetDraggedPosition_m2008884886(__this, L_45, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragMe::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DragMe_OnDrag_m3476121208 (DragMe_t1855460060 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragMe_OnDrag_m3476121208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2349950 * L_0 = __this->get_m_DraggingIcons_3();
		PointerEventData_t3807901092 * L_1 = ___eventData0;
		NullCheck(L_1);
		int32_t L_2 = PointerEventData_get_pointerId_m1200356155(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_t1113636619 * L_3 = Dictionary_2_get_Item_m798225041(L_0, L_2, /*hidden argument*/Dictionary_2_get_Item_m798225041_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		PointerEventData_t3807901092 * L_5 = ___eventData0;
		DragMe_SetDraggedPosition_m2008884886(__this, L_5, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void DragMe::SetDraggedPosition(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DragMe_SetDraggedPosition_m2008884886 (DragMe_t1855460060 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragMe_SetDraggedPosition_m2008884886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t3704657025 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = __this->get_dragOnSurfaces_2();
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		PointerEventData_t3807901092 * L_1 = ___eventData0;
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = PointerEventData_get_pointerEnter_m3901270554(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		PointerEventData_t3807901092 * L_4 = ___eventData0;
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = PointerEventData_get_pointerEnter_m3901270554(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, ((RectTransform_t3704657025 *)IsInstSealed((RuntimeObject*)L_6, RectTransform_t3704657025_il2cpp_TypeInfo_var)), (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t2593370356 * L_8 = __this->get_m_DraggingPlanes_4();
		PointerEventData_t3807901092 * L_9 = ___eventData0;
		NullCheck(L_9);
		int32_t L_10 = PointerEventData_get_pointerId_m1200356155(L_9, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_11 = ___eventData0;
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = PointerEventData_get_pointerEnter_m3901270554(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		Dictionary_2_set_Item_m325663497(L_8, L_10, ((RectTransform_t3704657025 *)IsInstSealed((RuntimeObject*)L_13, RectTransform_t3704657025_il2cpp_TypeInfo_var)), /*hidden argument*/Dictionary_2_set_Item_m325663497_RuntimeMethod_var);
	}

IL_0058:
	{
		Dictionary_2_t2349950 * L_14 = __this->get_m_DraggingIcons_3();
		PointerEventData_t3807901092 * L_15 = ___eventData0;
		NullCheck(L_15);
		int32_t L_16 = PointerEventData_get_pointerId_m1200356155(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_t1113636619 * L_17 = Dictionary_2_get_Item_m798225041(L_14, L_16, /*hidden argument*/Dictionary_2_get_Item_m798225041_RuntimeMethod_var);
		NullCheck(L_17);
		RectTransform_t3704657025 * L_18 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_17, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		V_0 = L_18;
		Dictionary_2_t2593370356 * L_19 = __this->get_m_DraggingPlanes_4();
		PointerEventData_t3807901092 * L_20 = ___eventData0;
		NullCheck(L_20);
		int32_t L_21 = PointerEventData_get_pointerId_m1200356155(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_t3704657025 * L_22 = Dictionary_2_get_Item_m3108585763(L_19, L_21, /*hidden argument*/Dictionary_2_get_Item_m3108585763_RuntimeMethod_var);
		PointerEventData_t3807901092 * L_23 = ___eventData0;
		NullCheck(L_23);
		Vector2_t2156229523  L_24 = PointerEventData_get_position_m437660275(L_23, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_25 = ___eventData0;
		NullCheck(L_25);
		Camera_t4157153871 * L_26 = PointerEventData_get_pressEventCamera_m2613974917(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		bool L_27 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m1761902807(NULL /*static, unused*/, L_22, L_24, L_26, (&V_1), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00bb;
		}
	}
	{
		RectTransform_t3704657025 * L_28 = V_0;
		Vector3_t3722313464  L_29 = V_1;
		NullCheck(L_28);
		Transform_set_position_m3387557959(L_28, L_29, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_30 = V_0;
		Dictionary_2_t2593370356 * L_31 = __this->get_m_DraggingPlanes_4();
		PointerEventData_t3807901092 * L_32 = ___eventData0;
		NullCheck(L_32);
		int32_t L_33 = PointerEventData_get_pointerId_m1200356155(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		RectTransform_t3704657025 * L_34 = Dictionary_2_get_Item_m3108585763(L_31, L_33, /*hidden argument*/Dictionary_2_get_Item_m3108585763_RuntimeMethod_var);
		NullCheck(L_34);
		Quaternion_t2301928331  L_35 = Transform_get_rotation_m3502953881(L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_rotation_m3524318132(L_30, L_35, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		return;
	}
}
// System.Void DragMe::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DragMe_OnEndDrag_m3338192045 (DragMe_t1855460060 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragMe_OnEndDrag_m3338192045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2349950 * L_0 = __this->get_m_DraggingIcons_3();
		PointerEventData_t3807901092 * L_1 = ___eventData0;
		NullCheck(L_1);
		int32_t L_2 = PointerEventData_get_pointerId_m1200356155(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_t1113636619 * L_3 = Dictionary_2_get_Item_m798225041(L_0, L_2, /*hidden argument*/Dictionary_2_get_Item_m798225041_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		Dictionary_2_t2349950 * L_5 = __this->get_m_DraggingIcons_3();
		PointerEventData_t3807901092 * L_6 = ___eventData0;
		NullCheck(L_6);
		int32_t L_7 = PointerEventData_get_pointerId_m1200356155(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_t1113636619 * L_8 = Dictionary_2_get_Item_m798225041(L_5, L_7, /*hidden argument*/Dictionary_2_get_Item_m798225041_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0032:
	{
		Dictionary_2_t2349950 * L_9 = __this->get_m_DraggingIcons_3();
		PointerEventData_t3807901092 * L_10 = ___eventData0;
		NullCheck(L_10);
		int32_t L_11 = PointerEventData_get_pointerId_m1200356155(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Dictionary_2_set_Item_m3272033541(L_9, L_11, (GameObject_t1113636619 *)NULL, /*hidden argument*/Dictionary_2_set_Item_m3272033541_RuntimeMethod_var);
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
// System.Void DragPanel::.ctor()
extern "C"  void DragPanel__ctor_m974253773 (DragPanel_t1406753375 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragPanel::Awake()
extern "C"  void DragPanel_Awake_m1691295277 (DragPanel_t1406753375 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragPanel_Awake_m1691295277_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Transform_get_parent_m835071599(L_0, /*hidden argument*/NULL);
		__this->set_panelRectTransform_4(((RectTransform_t3704657025 *)IsInstSealed((RuntimeObject*)L_1, RectTransform_t3704657025_il2cpp_TypeInfo_var)));
		RectTransform_t3704657025 * L_2 = __this->get_panelRectTransform_4();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Transform_get_parent_m835071599(L_2, /*hidden argument*/NULL);
		__this->set_parentRectTransform_5(((RectTransform_t3704657025 *)IsInstSealed((RuntimeObject*)L_3, RectTransform_t3704657025_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void DragPanel::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DragPanel_OnPointerDown_m2387986402 (DragPanel_t1406753375 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragPanel_OnPointerDown_m2387986402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = __this->get_panelRectTransform_4();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_localPosition_m4234289348(L_0, /*hidden argument*/NULL);
		__this->set_originalPanelLocalPosition_3(L_1);
		RectTransform_t3704657025 * L_2 = __this->get_parentRectTransform_5();
		PointerEventData_t3807901092 * L_3 = ___data0;
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = PointerEventData_get_position_m437660275(L_3, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_5 = ___data0;
		NullCheck(L_5);
		Camera_t4157153871 * L_6 = PointerEventData_get_pressEventCamera_m2613974917(L_5, /*hidden argument*/NULL);
		Vector2_t2156229523 * L_7 = __this->get_address_of_originalLocalPointerPosition_2();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		RectTransformUtility_ScreenPointToLocalPointInRectangle_m2327269187(NULL /*static, unused*/, L_2, L_4, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragPanel::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DragPanel_OnDrag_m3554559104 (DragPanel_t1406753375 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragPanel_OnDrag_m3554559104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		RectTransform_t3704657025 * L_0 = __this->get_panelRectTransform_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		RectTransform_t3704657025 * L_2 = __this->get_parentRectTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		return;
	}

IL_0023:
	{
		RectTransform_t3704657025 * L_4 = __this->get_parentRectTransform_5();
		PointerEventData_t3807901092 * L_5 = ___data0;
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = PointerEventData_get_position_m437660275(L_5, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_7 = ___data0;
		NullCheck(L_7);
		Camera_t4157153871 * L_8 = PointerEventData_get_pressEventCamera_m2613974917(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		bool L_9 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m2327269187(NULL /*static, unused*/, L_4, L_6, L_8, (&V_0), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		Vector2_t2156229523  L_10 = V_0;
		Vector2_t2156229523  L_11 = __this->get_originalLocalPointerPosition_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_12 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		RectTransform_t3704657025 * L_14 = __this->get_panelRectTransform_4();
		Vector3_t3722313464  L_15 = __this->get_originalPanelLocalPosition_3();
		Vector3_t3722313464  L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localPosition_m4128471975(L_14, L_17, /*hidden argument*/NULL);
	}

IL_006a:
	{
		DragPanel_ClampToWindow_m1122603434(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragPanel::ClampToWindow()
extern "C"  void DragPanel_ClampToWindow_m1122603434 (DragPanel_t1406753375 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragPanel_ClampToWindow_m1122603434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Rect_t2360479859  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Rect_t2360479859  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Rect_t2360479859  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		RectTransform_t3704657025 * L_0 = __this->get_panelRectTransform_4();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_localPosition_m4234289348(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RectTransform_t3704657025 * L_2 = __this->get_parentRectTransform_5();
		NullCheck(L_2);
		Rect_t2360479859  L_3 = RectTransform_get_rect_m574169965(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		Vector2_t2156229523  L_4 = Rect_get_min_m847841034((&V_2), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_5 = __this->get_panelRectTransform_4();
		NullCheck(L_5);
		Rect_t2360479859  L_6 = RectTransform_get_rect_m574169965(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		Vector2_t2156229523  L_7 = Rect_get_min_m847841034((&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_8 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		RectTransform_t3704657025 * L_10 = __this->get_parentRectTransform_5();
		NullCheck(L_10);
		Rect_t2360479859  L_11 = RectTransform_get_rect_m574169965(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		Vector2_t2156229523  L_12 = Rect_get_max_m350137314((&V_5), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_13 = __this->get_panelRectTransform_4();
		NullCheck(L_13);
		Rect_t2360479859  L_14 = RectTransform_get_rect_m574169965(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		Vector2_t2156229523  L_15 = Rect_get_max_m350137314((&V_6), /*hidden argument*/NULL);
		Vector2_t2156229523  L_16 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		RectTransform_t3704657025 * L_18 = __this->get_panelRectTransform_4();
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_localPosition_m4234289348(L_18, /*hidden argument*/NULL);
		V_7 = L_19;
		float L_20 = (&V_7)->get_x_1();
		float L_21 = (&V_1)->get_x_1();
		float L_22 = (&V_4)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_23 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		(&V_0)->set_x_1(L_23);
		RectTransform_t3704657025 * L_24 = __this->get_panelRectTransform_4();
		NullCheck(L_24);
		Vector3_t3722313464  L_25 = Transform_get_localPosition_m4234289348(L_24, /*hidden argument*/NULL);
		V_8 = L_25;
		float L_26 = (&V_8)->get_y_2();
		float L_27 = (&V_1)->get_y_2();
		float L_28 = (&V_4)->get_y_2();
		float L_29 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		(&V_0)->set_y_2(L_29);
		RectTransform_t3704657025 * L_30 = __this->get_panelRectTransform_4();
		Vector3_t3722313464  L_31 = V_0;
		NullCheck(L_30);
		Transform_set_localPosition_m4128471975(L_30, L_31, /*hidden argument*/NULL);
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
// System.Void DropMe::.ctor()
extern "C"  void DropMe__ctor_m4242129955 (DropMe_t2942052774 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_highlightColor_5(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DropMe::OnEnable()
extern "C"  void DropMe_OnEnable_m3547282480 (DropMe_t2942052774 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropMe_OnEnable_m3547282480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = __this->get_containerImage_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Image_t2670269651 * L_2 = __this->get_containerImage_2();
		NullCheck(L_2);
		Color_t2555686324  L_3 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		__this->set_normalColor_4(L_3);
	}

IL_0022:
	{
		return;
	}
}
// System.Void DropMe::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DropMe_OnDrop_m3443959515 (DropMe_t2942052774 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropMe_OnDrop_m3443959515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Sprite_t280657092 * V_0 = NULL;
	{
		Image_t2670269651 * L_0 = __this->get_containerImage_2();
		Color_t2555686324  L_1 = __this->get_normalColor_4();
		NullCheck(L_0);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		Image_t2670269651 * L_2 = __this->get_receivingImage_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		PointerEventData_t3807901092 * L_4 = ___data0;
		Sprite_t280657092 * L_5 = DropMe_GetDropSprite_m4241245197(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Sprite_t280657092 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		Image_t2670269651 * L_8 = __this->get_receivingImage_3();
		Sprite_t280657092 * L_9 = V_0;
		NullCheck(L_8);
		Image_set_overrideSprite_m3213596394(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void DropMe::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DropMe_OnPointerEnter_m2959818878 (DropMe_t2942052774 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropMe_OnPointerEnter_m2959818878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Sprite_t280657092 * V_0 = NULL;
	{
		Image_t2670269651 * L_0 = __this->get_containerImage_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		PointerEventData_t3807901092 * L_2 = ___data0;
		Sprite_t280657092 * L_3 = DropMe_GetDropSprite_m4241245197(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Sprite_t280657092 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		Image_t2670269651 * L_6 = __this->get_containerImage_2();
		Color_t2555686324  L_7 = __this->get_highlightColor_5();
		NullCheck(L_6);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
	}

IL_0037:
	{
		return;
	}
}
// System.Void DropMe::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DropMe_OnPointerExit_m3994401717 (DropMe_t2942052774 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropMe_OnPointerExit_m3994401717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = __this->get_containerImage_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Image_t2670269651 * L_2 = __this->get_containerImage_2();
		Color_t2555686324  L_3 = __this->get_normalColor_4();
		NullCheck(L_2);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		return;
	}
}
// UnityEngine.Sprite DropMe::GetDropSprite(UnityEngine.EventSystems.PointerEventData)
extern "C"  Sprite_t280657092 * DropMe_GetDropSprite_m4241245197 (DropMe_t2942052774 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropMe_GetDropSprite_m4241245197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	DragMe_t1855460060 * V_1 = NULL;
	Image_t2670269651 * V_2 = NULL;
	{
		PointerEventData_t3807901092 * L_0 = ___data0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = PointerEventData_get_pointerDrag_m3056187725(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (Sprite_t280657092 *)NULL;
	}

IL_0015:
	{
		GameObject_t1113636619 * L_4 = V_0;
		NullCheck(L_4);
		DragMe_t1855460060 * L_5 = GameObject_GetComponent_TisDragMe_t1855460060_m2149275024(L_4, /*hidden argument*/GameObject_GetComponent_TisDragMe_t1855460060_m2149275024_RuntimeMethod_var);
		V_1 = L_5;
		DragMe_t1855460060 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		return (Sprite_t280657092 *)NULL;
	}

IL_002a:
	{
		GameObject_t1113636619 * L_8 = V_0;
		NullCheck(L_8);
		Image_t2670269651 * L_9 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		V_2 = L_9;
		Image_t2670269651 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_10, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		return (Sprite_t280657092 *)NULL;
	}

IL_003f:
	{
		Image_t2670269651 * L_12 = V_2;
		NullCheck(L_12);
		Sprite_t280657092 * L_13 = Image_get_sprite_m1811690853(L_12, /*hidden argument*/NULL);
		return L_13;
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
// System.Void Image01Script::.ctor()
extern "C"  void Image01Script__ctor_m2334745484 (Image01Script_t2305065612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Image01Script__ctor_m2334745484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_name_3(_stringLiteral3451500483);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Image01Script::buttonClick()
extern "C"  void Image01Script_buttonClick_m2724225317 (Image01Script_t2305065612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Image01Script_buttonClick_m2724225317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_selected_2();
		if (L_0)
		{
			goto IL_0042;
		}
	}
	{
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Image_t2670269651 * L_2 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_1, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		NullCheck(L_2);
		Color_t2555686324  L_3 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		__this->set_origincolor_4(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Image_t2670269651 * L_5 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_6 = Color_get_grey_m3440705476(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		__this->set_selected_2((bool)1);
		goto IL_005f;
	}

IL_0042:
	{
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Image_t2670269651 * L_8 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_9 = __this->get_origincolor_4();
		NullCheck(L_8);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		__this->set_selected_2((bool)0);
	}

IL_005f:
	{
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
// System.Void Image02Script::.ctor()
extern "C"  void Image02Script__ctor_m1791749585 (Image02Script_t3649433479 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Image02Script__ctor_m1791749585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_name_3(_stringLiteral3451434947);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Image02Script::buttonClick()
extern "C"  void Image02Script_buttonClick_m2687317576 (Image02Script_t3649433479 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Image02Script_buttonClick_m2687317576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_selected_2();
		if (L_0)
		{
			goto IL_0042;
		}
	}
	{
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Image_t2670269651 * L_2 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_1, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		NullCheck(L_2);
		Color_t2555686324  L_3 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		__this->set_origincolor_4(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Image_t2670269651 * L_5 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_6 = Color_get_grey_m3440705476(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		__this->set_selected_2((bool)1);
		goto IL_005f;
	}

IL_0042:
	{
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Image_t2670269651 * L_8 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_9 = __this->get_origincolor_4();
		NullCheck(L_8);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		__this->set_selected_2((bool)0);
	}

IL_005f:
	{
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
// System.Void Image03Script::.ctor()
extern "C"  void Image03Script__ctor_m1837694578 (Image03Script_t1182672150 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Image03Script__ctor_m1837694578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_name_3(_stringLiteral3451369411);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Image03Script::buttonClick()
extern "C"  void Image03Script_buttonClick_m4075333831 (Image03Script_t1182672150 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Image03Script_buttonClick_m4075333831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_selected_2();
		if (L_0)
		{
			goto IL_0042;
		}
	}
	{
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Image_t2670269651 * L_2 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_1, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		NullCheck(L_2);
		Color_t2555686324  L_3 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		__this->set_origincolor_4(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Image_t2670269651 * L_5 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_6 = Color_get_grey_m3440705476(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		__this->set_selected_2((bool)1);
		goto IL_005f;
	}

IL_0042:
	{
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Image_t2670269651 * L_8 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_9 = __this->get_origincolor_4();
		NullCheck(L_8);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		__this->set_selected_2((bool)0);
	}

IL_005f:
	{
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
// System.Void Image04Script::.ctor()
extern "C"  void Image04Script__ctor_m1168761743 (Image04Script_t3494716217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Image04Script__ctor_m1168761743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_name_3(_stringLiteral3451303875);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Image04Script::buttonClick()
extern "C"  void Image04Script_buttonClick_m3712086978 (Image04Script_t3494716217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Image04Script_buttonClick_m3712086978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_selected_2();
		if (L_0)
		{
			goto IL_0042;
		}
	}
	{
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Image_t2670269651 * L_2 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_1, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		NullCheck(L_2);
		Color_t2555686324  L_3 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		__this->set_origincolor_4(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Image_t2670269651 * L_5 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_6 = Color_get_grey_m3440705476(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		__this->set_selected_2((bool)1);
		goto IL_005f;
	}

IL_0042:
	{
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Image_t2670269651 * L_8 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_9 = __this->get_origincolor_4();
		NullCheck(L_8);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		__this->set_selected_2((bool)0);
	}

IL_005f:
	{
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
// System.Void Image05Script::.ctor()
extern "C"  void Image05Script__ctor_m4173960096 (Image05Script_t1027954888 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Image05Script__ctor_m4173960096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_name_3(_stringLiteral3451238339);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Image05Script::buttonClick()
extern "C"  void Image05Script_buttonClick_m3997986753 (Image05Script_t1027954888 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Image05Script_buttonClick_m3997986753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_selected_2();
		if (L_0)
		{
			goto IL_0042;
		}
	}
	{
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Image_t2670269651 * L_2 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_1, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		NullCheck(L_2);
		Color_t2555686324  L_3 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		__this->set_origincolor_4(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Image_t2670269651 * L_5 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_6 = Color_get_grey_m3440705476(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		__this->set_selected_2((bool)1);
		goto IL_005f;
	}

IL_0042:
	{
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Image_t2670269651 * L_8 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_9 = __this->get_origincolor_4();
		NullCheck(L_8);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		__this->set_selected_2((bool)0);
	}

IL_005f:
	{
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
// System.Void Image1pos::.ctor()
extern "C"  void Image1pos__ctor_m1740403238 (Image1pos_t715604387 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Image1pos::Start()
extern "C"  void Image1pos_Start_m2595562612 (Image1pos_t715604387 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Image1pos::Update()
extern "C"  void Image1pos_Update_m444311290 (Image1pos_t715604387 * __this, const RuntimeMethod* method)
{
	{
		Canvas_t3310196443 * L_0 = __this->get_canv_2();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t2301928331  L_3 = Transform_get_rotation_m3502953881(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_rotation_m3524318132(L_1, L_3, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_4 = __this->get_canv_2();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_7, /*hidden argument*/NULL);
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
// System.Void Image2pos::.ctor()
extern "C"  void Image2pos__ctor_m4241584679 (Image2pos_t722092451 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Image2pos::Start()
extern "C"  void Image2pos_Start_m798237813 (Image2pos_t722092451 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Image2pos::Update()
extern "C"  void Image2pos_Update_m2936973049 (Image2pos_t722092451 * __this, const RuntimeMethod* method)
{
	{
		Canvas_t3310196443 * L_0 = __this->get_canv_2();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t2301928331  L_3 = Transform_get_rotation_m3502953881(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_rotation_m3524318132(L_1, L_3, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_4 = __this->get_canv_2();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_7, /*hidden argument*/NULL);
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
// System.Void MatImageSc::.ctor()
extern "C"  void MatImageSc__ctor_m2286297304 (MatImageSc_t920972473 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MatImageSc::Start()
extern "C"  void MatImageSc_Start_m101375540 (MatImageSc_t920972473 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MatImageSc::Update()
extern "C"  void MatImageSc_Update_m923010414 (MatImageSc_t920972473 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void menuScript::.ctor()
extern "C"  void menuScript__ctor_m3387536380 (menuScript_t2744932923 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void menuScript::Start()
extern "C"  void menuScript_Start_m1157450492 (menuScript_t2744932923 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menuScript_Start_m1157450492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamDeviceU5BU5D_t4294070825* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		WebCamDeviceU5BU5D_t4294070825* L_0 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		WebCamDeviceU5BU5D_t4294070825* L_1 = V_0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1787862189, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		V_1 = 0;
		goto IL_0056;
	}

IL_0020:
	{
		WebCamDeviceU5BU5D_t4294070825* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		bool L_4 = WebCamDevice_get_isFrontFacing_m1172074790(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0052;
		}
	}
	{
		WebCamDeviceU5BU5D_t4294070825* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7 = WebCamDevice_get_name_m3782173082(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_9 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_10 = (WebCamTexture_t1514609158 *)il2cpp_codegen_object_new(WebCamTexture_t1514609158_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m2270899567(L_10, L_7, L_8, L_9, /*hidden argument*/NULL);
		__this->set_backCam_3(L_10);
	}

IL_0052:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0056:
	{
		int32_t L_12 = V_1;
		WebCamDeviceU5BU5D_t4294070825* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_0020;
		}
	}
	{
		WebCamTexture_t1514609158 * L_14 = __this->get_backCam_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_14, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1253313187, /*hidden argument*/NULL);
		return;
	}

IL_007b:
	{
		WebCamTexture_t1514609158 * L_16 = __this->get_backCam_3();
		NullCheck(L_16);
		int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		WebCamTexture_t1514609158 * L_18 = __this->get_backCam_3();
		NullCheck(L_18);
		int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		V_2 = ((float)((float)(((float)((float)L_17)))/(float)(((float)((float)L_19)))));
		AspectRatioFitter_t3312407083 * L_20 = __this->get_bg_2();
		float L_21 = V_2;
		NullCheck(L_20);
		AspectRatioFitter_set_aspectRatio_m626759227(L_20, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void menuScript::changemeunscene(System.String)
extern "C"  void menuScript_changemeunscene_m1575628736 (menuScript_t2744932923 * __this, String_t* ___scenename0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___scenename0;
		Application_LoadLevel_m2650087286(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// System.Void PanelManager::.ctor()
extern "C"  void PanelManager__ctor_m283605778 (PanelManager_t438216159 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PanelManager::OnEnable()
extern "C"  void PanelManager_OnEnable_m713308551 (PanelManager_t438216159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelManager_OnEnable_m713308551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Animator_StringToHash_m1666053228(NULL /*static, unused*/, _stringLiteral3905732978, /*hidden argument*/NULL);
		__this->set_m_OpenParameterId_3(L_0);
		Animator_t434523843 * L_1 = __this->get_initiallyOpen_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		Animator_t434523843 * L_3 = __this->get_initiallyOpen_2();
		PanelManager_OpenPanel_m3662240133(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PanelManager::OpenPanel(UnityEngine.Animator)
extern "C"  void PanelManager_OpenPanel_m3662240133 (PanelManager_t438216159 * __this, Animator_t434523843 * ___anim0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelManager_OpenPanel_m3662240133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		Animator_t434523843 * L_0 = __this->get_m_Open_4();
		Animator_t434523843 * L_1 = ___anim0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Animator_t434523843 * L_3 = ___anim0;
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t1003666588_il2cpp_TypeInfo_var);
		EventSystem_t1003666588 * L_5 = EventSystem_get_current_m1416377559(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = EventSystem_get_currentSelectedGameObject_m2939274948(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Animator_t434523843 * L_7 = ___anim0;
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_SetAsLastSibling_m3949169710(L_8, /*hidden argument*/NULL);
		PanelManager_CloseCurrent_m345023962(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = V_0;
		__this->set_m_PreviouslySelected_5(L_9);
		Animator_t434523843 * L_10 = ___anim0;
		__this->set_m_Open_4(L_10);
		Animator_t434523843 * L_11 = __this->get_m_Open_4();
		int32_t L_12 = __this->get_m_OpenParameterId_3();
		NullCheck(L_11);
		Animator_SetBool_m2873262441(L_11, L_12, (bool)1, /*hidden argument*/NULL);
		Animator_t434523843 * L_13 = ___anim0;
		NullCheck(L_13);
		GameObject_t1113636619 * L_14 = Component_get_gameObject_m442555142(L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = PanelManager_FindFirstEnabledSelectable_m2730067898(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		GameObject_t1113636619 * L_16 = V_1;
		PanelManager_SetSelected_m1638836315(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject PanelManager::FindFirstEnabledSelectable(UnityEngine.GameObject)
extern "C"  GameObject_t1113636619 * PanelManager_FindFirstEnabledSelectable_m2730067898 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___gameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelManager_FindFirstEnabledSelectable_m2730067898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	SelectableU5BU5D_t774044132* V_1 = NULL;
	Selectable_t3250028441 * V_2 = NULL;
	SelectableU5BU5D_t774044132* V_3 = NULL;
	int32_t V_4 = 0;
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		GameObject_t1113636619 * L_0 = ___gameObject0;
		NullCheck(L_0);
		SelectableU5BU5D_t774044132* L_1 = GameObject_GetComponentsInChildren_TisSelectable_t3250028441_m1331223003(L_0, (bool)1, /*hidden argument*/GameObject_GetComponentsInChildren_TisSelectable_t3250028441_m1331223003_RuntimeMethod_var);
		V_1 = L_1;
		SelectableU5BU5D_t774044132* L_2 = V_1;
		V_3 = L_2;
		V_4 = 0;
		goto IL_0041;
	}

IL_0014:
	{
		SelectableU5BU5D_t774044132* L_3 = V_3;
		int32_t L_4 = V_4;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Selectable_t3250028441 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Selectable_t3250028441 * L_7 = V_2;
		NullCheck(L_7);
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, L_7);
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		Selectable_t3250028441 * L_9 = V_2;
		NullCheck(L_9);
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_9);
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		Selectable_t3250028441 * L_11 = V_2;
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = Component_get_gameObject_m442555142(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_004b;
	}

IL_003b:
	{
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_14 = V_4;
		SelectableU5BU5D_t774044132* L_15 = V_3;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0014;
		}
	}

IL_004b:
	{
		GameObject_t1113636619 * L_16 = V_0;
		return L_16;
	}
}
// System.Void PanelManager::CloseCurrent()
extern "C"  void PanelManager_CloseCurrent_m345023962 (PanelManager_t438216159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelManager_CloseCurrent_m345023962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = __this->get_m_Open_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Animator_t434523843 * L_2 = __this->get_m_Open_4();
		int32_t L_3 = __this->get_m_OpenParameterId_3();
		NullCheck(L_2);
		Animator_SetBool_m2873262441(L_2, L_3, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_m_PreviouslySelected_5();
		PanelManager_SetSelected_m1638836315(__this, L_4, /*hidden argument*/NULL);
		Animator_t434523843 * L_5 = __this->get_m_Open_4();
		RuntimeObject* L_6 = PanelManager_DisablePanelDeleyed_m4002285899(__this, L_5, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_6, /*hidden argument*/NULL);
		__this->set_m_Open_4((Animator_t434523843 *)NULL);
		return;
	}
}
// System.Collections.IEnumerator PanelManager::DisablePanelDeleyed(UnityEngine.Animator)
extern "C"  RuntimeObject* PanelManager_DisablePanelDeleyed_m4002285899 (PanelManager_t438216159 * __this, Animator_t434523843 * ___anim0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelManager_DisablePanelDeleyed_m4002285899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 * V_0 = NULL;
	{
		U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 * L_0 = (U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 *)il2cpp_codegen_object_new(U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890_il2cpp_TypeInfo_var);
		U3CDisablePanelDeleyedU3Ec__Iterator0__ctor_m1819955435(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 * L_1 = V_0;
		Animator_t434523843 * L_2 = ___anim0;
		NullCheck(L_1);
		L_1->set_anim_2(L_2);
		U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_3(__this);
		U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 * L_4 = V_0;
		return L_4;
	}
}
// System.Void PanelManager::SetSelected(UnityEngine.GameObject)
extern "C"  void PanelManager_SetSelected_m1638836315 (PanelManager_t438216159 * __this, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelManager_SetSelected_m1638836315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t1003666588_il2cpp_TypeInfo_var);
		EventSystem_t1003666588 * L_0 = EventSystem_get_current_m1416377559(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = ___go0;
		NullCheck(L_0);
		EventSystem_SetSelectedGameObject_m2232337908(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void PanelManager/<DisablePanelDeleyed>c__Iterator0::.ctor()
extern "C"  void U3CDisablePanelDeleyedU3Ec__Iterator0__ctor_m1819955435 (U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PanelManager/<DisablePanelDeleyed>c__Iterator0::MoveNext()
extern "C"  bool U3CDisablePanelDeleyedU3Ec__Iterator0_MoveNext_m2344874914 (U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDisablePanelDeleyedU3Ec__Iterator0_MoveNext_m2344874914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	AnimatorStateInfo_t509032636  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00a2;
			}
		}
	}
	{
		goto IL_00db;
	}

IL_0021:
	{
		__this->set_U3CclosedStateReachedU3E__0_0((bool)0);
		__this->set_U3CwantToCloseU3E__0_1((bool)1);
		goto IL_00a2;
	}

IL_0034:
	{
		Animator_t434523843 * L_2 = __this->get_anim_2();
		NullCheck(L_2);
		bool L_3 = Animator_IsInTransition_m2711427730(L_2, 0, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0064;
		}
	}
	{
		Animator_t434523843 * L_4 = __this->get_anim_2();
		NullCheck(L_4);
		AnimatorStateInfo_t509032636  L_5 = Animator_GetCurrentAnimatorStateInfo_m18694920(L_4, 0, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = AnimatorStateInfo_IsName_m3393819976((&V_1), _stringLiteral3481649703, /*hidden argument*/NULL);
		__this->set_U3CclosedStateReachedU3E__0_0(L_6);
	}

IL_0064:
	{
		Animator_t434523843 * L_7 = __this->get_anim_2();
		PanelManager_t438216159 * L_8 = __this->get_U24this_3();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_m_OpenParameterId_3();
		NullCheck(L_7);
		bool L_10 = Animator_GetBool_m2974171932(L_7, L_9, /*hidden argument*/NULL);
		__this->set_U3CwantToCloseU3E__0_1((bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0));
		WaitForEndOfFrame_t1314943911 * L_11 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_11, /*hidden argument*/NULL);
		__this->set_U24current_4(L_11);
		bool L_12 = __this->get_U24disposing_5();
		if (L_12)
		{
			goto IL_009d;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_009d:
	{
		goto IL_00dd;
	}

IL_00a2:
	{
		bool L_13 = __this->get_U3CclosedStateReachedU3E__0_0();
		if (L_13)
		{
			goto IL_00b8;
		}
	}
	{
		bool L_14 = __this->get_U3CwantToCloseU3E__0_1();
		if (L_14)
		{
			goto IL_0034;
		}
	}

IL_00b8:
	{
		bool L_15 = __this->get_U3CwantToCloseU3E__0_1();
		if (!L_15)
		{
			goto IL_00d4;
		}
	}
	{
		Animator_t434523843 * L_16 = __this->get_anim_2();
		NullCheck(L_16);
		GameObject_t1113636619 * L_17 = Component_get_gameObject_m442555142(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_SetActive_m796801857(L_17, (bool)0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		__this->set_U24PC_6((-1));
	}

IL_00db:
	{
		return (bool)0;
	}

IL_00dd:
	{
		return (bool)1;
	}
}
// System.Object PanelManager/<DisablePanelDeleyed>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CDisablePanelDeleyedU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1241498837 (U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object PanelManager/<DisablePanelDeleyed>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CDisablePanelDeleyedU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3811176629 (U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void PanelManager/<DisablePanelDeleyed>c__Iterator0::Dispose()
extern "C"  void U3CDisablePanelDeleyedU3Ec__Iterator0_Dispose_m2609818702 (U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void PanelManager/<DisablePanelDeleyed>c__Iterator0::Reset()
extern "C"  void U3CDisablePanelDeleyedU3Ec__Iterator0_Reset_m3020971600 (U3CDisablePanelDeleyedU3Ec__Iterator0_t1057847890 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDisablePanelDeleyedU3Ec__Iterator0_Reset_m3020971600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void Panelpos::.ctor()
extern "C"  void Panelpos__ctor_m258971733 (Panelpos_t23664475 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Panelpos::Start()
extern "C"  void Panelpos_Start_m1910630575 (Panelpos_t23664475 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Panelpos::Update()
extern "C"  void Panelpos_Update_m1937143903 (Panelpos_t23664475 * __this, const RuntimeMethod* method)
{
	{
		Canvas_t3310196443 * L_0 = __this->get_canv_2();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t2301928331  L_3 = Transform_get_rotation_m3502953881(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_rotation_m3524318132(L_1, L_3, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_4 = __this->get_canv_2();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_7, /*hidden argument*/NULL);
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
// System.Void phoneCamera::.ctor()
extern "C"  void phoneCamera__ctor_m1473117431 (phoneCamera_t2918078011 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void phoneCamera::Start()
extern "C"  void phoneCamera_Start_m4270680149 (phoneCamera_t2918078011 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (phoneCamera_Start_m4270680149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamDeviceU5BU5D_t4294070825* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RawImage_t3182918964 * L_0 = __this->get_background_5();
		NullCheck(L_0);
		Texture_t3661962703 * L_1 = RawImage_get_texture_m2319641407(L_0, /*hidden argument*/NULL);
		__this->set_defaultBackground_4(L_1);
		WebCamDeviceU5BU5D_t4294070825* L_2 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3825948899, /*hidden argument*/NULL);
		__this->set_buttonpanel_7(L_3);
		GameObject_t1113636619 * L_4 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral56219663, /*hidden argument*/NULL);
		__this->set_scroll_8(L_4);
		GameObject_t1113636619 * L_5 = __this->get_buttonpanel_7();
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_scroll_8();
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)0, /*hidden argument*/NULL);
		__this->set_taken_10((bool)0);
		WebCamDeviceU5BU5D_t4294070825* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1787862189, /*hidden argument*/NULL);
		__this->set_camAvailable_2((bool)0);
		return;
	}

IL_0070:
	{
		V_1 = 0;
		goto IL_00ad;
	}

IL_0077:
	{
		WebCamDeviceU5BU5D_t4294070825* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10 = WebCamDevice_get_isFrontFacing_m1172074790(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00a9;
		}
	}
	{
		WebCamDeviceU5BU5D_t4294070825* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		String_t* L_13 = WebCamDevice_get_name_m3782173082(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), /*hidden argument*/NULL);
		int32_t L_14 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_15 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_16 = (WebCamTexture_t1514609158 *)il2cpp_codegen_object_new(WebCamTexture_t1514609158_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m2270899567(L_16, L_13, L_14, L_15, /*hidden argument*/NULL);
		__this->set_backCam_3(L_16);
	}

IL_00a9:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_00ad:
	{
		int32_t L_18 = V_1;
		WebCamDeviceU5BU5D_t4294070825* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		WebCamTexture_t1514609158 * L_20 = __this->get_backCam_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_20, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00d2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1253313187, /*hidden argument*/NULL);
		return;
	}

IL_00d2:
	{
		WebCamTexture_t1514609158 * L_22 = __this->get_backCam_3();
		NullCheck(L_22);
		WebCamTexture_Play_m3866603461(L_22, /*hidden argument*/NULL);
		RawImage_t3182918964 * L_23 = __this->get_background_5();
		WebCamTexture_t1514609158 * L_24 = __this->get_backCam_3();
		NullCheck(L_23);
		RawImage_set_texture_m415027901(L_23, L_24, /*hidden argument*/NULL);
		__this->set_camAvailable_2((bool)1);
		return;
	}
}
// System.Void phoneCamera::Update()
extern "C"  void phoneCamera_Update_m4042048559 (phoneCamera_t2918078011 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float G_B6_0 = 0.0f;
	{
		bool L_0 = __this->get_camAvailable_2();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		bool L_1 = __this->get_taken_10();
		if (L_1)
		{
			goto IL_00c7;
		}
	}
	{
		WebCamTexture_t1514609158 * L_2 = __this->get_backCam_3();
		NullCheck(L_2);
		WebCamTexture_Play_m3866603461(L_2, /*hidden argument*/NULL);
		RawImage_t3182918964 * L_3 = __this->get_background_5();
		WebCamTexture_t1514609158 * L_4 = __this->get_backCam_3();
		NullCheck(L_3);
		RawImage_set_texture_m415027901(L_3, L_4, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_5 = __this->get_backCam_3();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		WebCamTexture_t1514609158 * L_7 = __this->get_backCam_3();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		V_0 = ((float)((float)(((float)((float)L_6)))/(float)(((float)((float)L_8)))));
		AspectRatioFitter_t3312407083 * L_9 = __this->get_fit_6();
		float L_10 = V_0;
		NullCheck(L_9);
		AspectRatioFitter_set_aspectRatio_m626759227(L_9, L_10, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_11 = __this->get_backCam_3();
		NullCheck(L_11);
		bool L_12 = WebCamTexture_get_videoVerticallyMirrored_m839300021(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		G_B6_0 = (-1.0f);
		goto IL_0078;
	}

IL_0073:
	{
		G_B6_0 = (1.0f);
	}

IL_0078:
	{
		V_1 = G_B6_0;
		RawImage_t3182918964 * L_13 = __this->get_background_5();
		NullCheck(L_13);
		RectTransform_t3704657025 * L_14 = Graphic_get_rectTransform_m1167152468(L_13, /*hidden argument*/NULL);
		float L_15 = V_1;
		Vector3_t3722313464  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m3353183577((&L_16), (1.0f), L_15, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_m3053443106(L_14, L_16, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_17 = __this->get_backCam_3();
		NullCheck(L_17);
		int32_t L_18 = WebCamTexture_get_videoRotationAngle_m2525477697(L_17, /*hidden argument*/NULL);
		V_2 = ((-L_18));
		RawImage_t3182918964 * L_19 = __this->get_background_5();
		NullCheck(L_19);
		RectTransform_t3704657025 * L_20 = Graphic_get_rectTransform_m1167152468(L_19, /*hidden argument*/NULL);
		int32_t L_21 = V_2;
		Vector3_t3722313464  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Vector3__ctor_m3353183577((&L_22), (0.0f), (0.0f), (((float)((float)L_21))), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localEulerAngles_m4202601546(L_20, L_22, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		return;
	}
}
// System.Void phoneCamera::TakePhoto()
extern "C"  void phoneCamera_TakePhoto_m2460353388 (phoneCamera_t2918078011 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (phoneCamera_TakePhoto_m2460353388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		bool L_0 = __this->get_camAvailable_2();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		WebCamTexture_t1514609158 * L_1 = __this->get_backCam_3();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		WebCamTexture_t1514609158 * L_3 = __this->get_backCam_3();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_3);
		Texture2D_t3840446185 * L_5 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_5, L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Texture2D_t3840446185 * L_6 = V_0;
		WebCamTexture_t1514609158 * L_7 = __this->get_backCam_3();
		NullCheck(L_7);
		ColorU5BU5D_t941916413* L_8 = WebCamTexture_GetPixels_m2308263178(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Texture2D_SetPixels_m3008871897(L_6, L_8, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_9 = V_0;
		NullCheck(L_9);
		Texture2D_Apply_m2271746283(L_9, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_10 = V_0;
		Texture2D_t3840446185 * L_11 = phoneCamera_FlipTexture_m2327608388(__this, L_10, (bool)1, /*hidden argument*/NULL);
		__this->set_reverse_9(L_11);
		RawImage_t3182918964 * L_12 = __this->get_background_5();
		Texture2D_t3840446185 * L_13 = __this->get_reverse_9();
		NullCheck(L_12);
		RawImage_set_texture_m415027901(L_12, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = __this->get_buttonpanel_7();
		NullCheck(L_14);
		GameObject_SetActive_m796801857(L_14, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = __this->get_scroll_8();
		NullCheck(L_15);
		GameObject_SetActive_m796801857(L_15, (bool)1, /*hidden argument*/NULL);
		__this->set_taken_10((bool)1);
		return;
	}
}
// UnityEngine.Texture2D phoneCamera::FlipTexture(UnityEngine.Texture2D,System.Boolean)
extern "C"  Texture2D_t3840446185 * phoneCamera_FlipTexture_m2327608388 (phoneCamera_t2918078011 * __this, Texture2D_t3840446185 * ___original0, bool ___reverse1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (phoneCamera_FlipTexture_m2327608388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Texture2D_t3840446185 * L_0 = ___original0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t3840446185 * L_2 = ___original0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_t3840446185 * L_4 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Texture2D_t3840446185 * L_5 = ___original0;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		V_1 = L_6;
		Texture2D_t3840446185 * L_7 = ___original0;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		V_2 = L_8;
		V_3 = 0;
		goto IL_0078;
	}

IL_0027:
	{
		V_4 = 0;
		goto IL_006c;
	}

IL_002f:
	{
		bool L_9 = ___reverse1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		Texture2D_t3840446185 * L_10 = V_0;
		int32_t L_11 = V_3;
		int32_t L_12 = V_2;
		int32_t L_13 = V_4;
		Texture2D_t3840446185 * L_14 = ___original0;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		NullCheck(L_14);
		Color_t2555686324  L_17 = Texture2D_GetPixel_m1195410881(L_14, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_10);
		Texture2D_SetPixel_m2984741184(L_10, L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), (int32_t)1)), L_17, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0050:
	{
		Texture2D_t3840446185 * L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = V_4;
		Texture2D_t3840446185 * L_22 = ___original0;
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck(L_22);
		Color_t2555686324  L_25 = Texture2D_GetPixel_m1195410881(L_22, L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_18);
		Texture2D_SetPixel_m2984741184(L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20)), (int32_t)1)), L_21, L_25, /*hidden argument*/NULL);
	}

IL_0066:
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_006c:
	{
		int32_t L_27 = V_4;
		int32_t L_28 = V_2;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_1;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0027;
		}
	}
	{
		Texture2D_t3840446185 * L_32 = V_0;
		NullCheck(L_32);
		Texture2D_Apply_m2271746283(L_32, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_33 = V_0;
		return L_33;
	}
}
// System.Void phoneCamera::submit()
extern "C"  void phoneCamera_submit_m1108475423 (phoneCamera_t2918078011 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (phoneCamera_submit_m1108475423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3319525431 * V_0 = NULL;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimeSpan_t881159249  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		List_1_t3319525431 * L_0 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_0, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_0 = L_0;
		GameObject_t1113636619 * L_1 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2708195106, /*hidden argument*/NULL);
		NullCheck(L_1);
		Image01Script_t2305065612 * L_2 = GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943(L_1, /*hidden argument*/GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = L_2->get_selected_2();
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t3319525431 * L_4 = V_0;
		GameObject_t1113636619 * L_5 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2708195106, /*hidden argument*/NULL);
		NullCheck(L_5);
		Image01Script_t2305065612 * L_6 = GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943(L_5, /*hidden argument*/GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_7 = L_6->get_name_3();
		NullCheck(L_4);
		List_1_Add_m1685793073(L_4, L_7, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_0039:
	{
		GameObject_t1113636619 * L_8 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4274279047, /*hidden argument*/NULL);
		NullCheck(L_8);
		Image01Script_t2305065612 * L_9 = GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943(L_8, /*hidden argument*/GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943_RuntimeMethod_var);
		NullCheck(L_9);
		bool L_10 = L_9->get_selected_2();
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		List_1_t3319525431 * L_11 = V_0;
		GameObject_t1113636619 * L_12 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4274279047, /*hidden argument*/NULL);
		NullCheck(L_12);
		Image01Script_t2305065612 * L_13 = GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943(L_12, /*hidden argument*/GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14 = L_13->get_name_3();
		NullCheck(L_11);
		List_1_Add_m1685793073(L_11, L_14, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_006c:
	{
		GameObject_t1113636619 * L_15 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1545395692, /*hidden argument*/NULL);
		NullCheck(L_15);
		Image01Script_t2305065612 * L_16 = GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943(L_15, /*hidden argument*/GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943_RuntimeMethod_var);
		NullCheck(L_16);
		bool L_17 = L_16->get_selected_2();
		if (!L_17)
		{
			goto IL_009f;
		}
	}
	{
		List_1_t3319525431 * L_18 = V_0;
		GameObject_t1113636619 * L_19 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1545395692, /*hidden argument*/NULL);
		NullCheck(L_19);
		Image01Script_t2305065612 * L_20 = GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943(L_19, /*hidden argument*/GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943_RuntimeMethod_var);
		NullCheck(L_20);
		String_t* L_21 = L_20->get_name_3();
		NullCheck(L_18);
		List_1_Add_m1685793073(L_18, L_21, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_009f:
	{
		GameObject_t1113636619 * L_22 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3467709993, /*hidden argument*/NULL);
		NullCheck(L_22);
		Image01Script_t2305065612 * L_23 = GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943(L_22, /*hidden argument*/GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943_RuntimeMethod_var);
		NullCheck(L_23);
		bool L_24 = L_23->get_selected_2();
		if (!L_24)
		{
			goto IL_00d2;
		}
	}
	{
		List_1_t3319525431 * L_25 = V_0;
		GameObject_t1113636619 * L_26 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3467709993, /*hidden argument*/NULL);
		NullCheck(L_26);
		Image01Script_t2305065612 * L_27 = GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943(L_26, /*hidden argument*/GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943_RuntimeMethod_var);
		NullCheck(L_27);
		String_t* L_28 = L_27->get_name_3();
		NullCheck(L_25);
		List_1_Add_m1685793073(L_25, L_28, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_00d2:
	{
		GameObject_t1113636619 * L_29 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral738826638, /*hidden argument*/NULL);
		NullCheck(L_29);
		Image01Script_t2305065612 * L_30 = GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943(L_29, /*hidden argument*/GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943_RuntimeMethod_var);
		NullCheck(L_30);
		bool L_31 = L_30->get_selected_2();
		if (!L_31)
		{
			goto IL_0105;
		}
	}
	{
		List_1_t3319525431 * L_32 = V_0;
		GameObject_t1113636619 * L_33 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral738826638, /*hidden argument*/NULL);
		NullCheck(L_33);
		Image01Script_t2305065612 * L_34 = GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943(L_33, /*hidden argument*/GameObject_GetComponent_TisImage01Script_t2305065612_m3561223943_RuntimeMethod_var);
		NullCheck(L_34);
		String_t* L_35 = L_34->get_name_3();
		NullCheck(L_32);
		List_1_Add_m1685793073(L_32, L_35, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_0105:
	{
		DateTime__ctor_m2956360140((&V_1), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_36 = DateTime_get_UtcNow_m1393945741(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTime_t3738529785  L_37 = V_1;
		TimeSpan_t881159249  L_38 = DateTime_op_Subtraction_m3579235380(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		V_3 = L_38;
		double L_39 = TimeSpan_get_TotalSeconds_m4083325051((&V_3), /*hidden argument*/NULL);
		V_2 = (((int32_t)((int32_t)L_39)));
		GameObject_t1113636619 * L_40 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		database_t2832598855 * L_41 = GameObject_GetComponent_Tisdatabase_t2832598855_m1122944689(L_40, /*hidden argument*/GameObject_GetComponent_Tisdatabase_t2832598855_m1122944689_RuntimeMethod_var);
		Texture2D_t3840446185 * L_42 = __this->get_reverse_9();
		List_1_t3319525431 * L_43 = V_0;
		int32_t L_44 = V_2;
		NullCheck(L_41);
		database_Insert_Data_m839353478(L_41, L_42, L_43, L_44, /*hidden argument*/NULL);
		return;
	}
}
// System.Void phoneCamera::BackToCamera()
extern "C"  void phoneCamera_BackToCamera_m1573130608 (phoneCamera_t2918078011 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_buttonpanel_7();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_scroll_8();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		__this->set_taken_10((bool)0);
		RawImage_t3182918964 * L_2 = __this->get_background_5();
		WebCamTexture_t1514609158 * L_3 = __this->get_backCam_3();
		NullCheck(L_2);
		RawImage_set_texture_m415027901(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void phoneCamera::BackToMainMenu(System.String)
extern "C"  void phoneCamera_BackToMainMenu_m1058070684 (phoneCamera_t2918078011 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		__this->set_taken_10((bool)1);
		String_t* L_0 = ___name0;
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// System.Void Positionset::.ctor()
extern "C"  void Positionset__ctor_m1066190175 (Positionset_t2664798813 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Positionset::Start()
extern "C"  void Positionset_Start_m1799116503 (Positionset_t2664798813 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Positionset::Update()
extern "C"  void Positionset_Update_m1694914430 (Positionset_t2664798813 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void RadialProgressBar::.ctor()
extern "C"  void RadialProgressBar__ctor_m3412094701 (RadialProgressBar_t2821283243 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_6((80.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RadialProgressBar::Start()
extern "C"  void RadialProgressBar_Start_m979553849 (RadialProgressBar_t2821283243 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void RadialProgressBar::Update()
extern "C"  void RadialProgressBar_Update_m2238120533 (RadialProgressBar_t2821283243 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialProgressBar_Update_m2238120533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_signalCol_4();
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		__this->set_currentAmount_5((0.0f));
		Transform_t3600365921 * L_1 = __this->get_Text_3();
		NullCheck(L_1);
		Text_t1901882714 * L_2 = Component_GetComponent_TisText_t1901882714_m4196288697(L_1, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral3450189712);
		goto IL_00b3;
	}

IL_0030:
	{
		float L_3 = __this->get_currentAmount_5();
		if ((!(((float)L_3) < ((float)(100.0f)))))
		{
			goto IL_009e;
		}
	}
	{
		float L_4 = __this->get_currentAmount_5();
		float L_5 = __this->get_speed_6();
		float L_6 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentAmount_5(((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)))));
		Transform_t3600365921 * L_7 = __this->get_Text_3();
		NullCheck(L_7);
		Text_t1901882714 * L_8 = Component_GetComponent_TisText_t1901882714_m4196288697(L_7, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		float L_9 = __this->get_currentAmount_5();
		V_0 = (((int32_t)((int32_t)L_9)));
		String_t* L_10 = Int32_ToString_m141394615((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, L_10, _stringLiteral3452614523, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		Transform_t3600365921 * L_12 = __this->get_Text_3();
		NullCheck(L_12);
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SetActive_m796801857(L_13, (bool)1, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_009e:
	{
		GameObject_t1113636619 * L_14 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2242364214, /*hidden argument*/NULL);
		NullCheck(L_14);
		wandScript_t1125606077 * L_15 = GameObject_GetComponent_TiswandScript_t1125606077_m2772890611(L_14, /*hidden argument*/GameObject_GetComponent_TiswandScript_t1125606077_m2772890611_RuntimeMethod_var);
		NullCheck(L_15);
		L_15->set_signal_2((bool)1);
	}

IL_00b3:
	{
		Transform_t3600365921 * L_16 = __this->get_LoadingBar_2();
		NullCheck(L_16);
		Image_t2670269651 * L_17 = Component_GetComponent_TisImage_t2670269651_m980647750(L_16, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		float L_18 = __this->get_currentAmount_5();
		NullCheck(L_17);
		Image_set_fillAmount_m3737925590(L_17, ((float)((float)L_18/(float)(100.0f))), /*hidden argument*/NULL);
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
// System.Void ResizePanel::.ctor()
extern "C"  void ResizePanel__ctor_m2282478011 (ResizePanel_t4061714193 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (100.0f), (100.0f), /*hidden argument*/NULL);
		__this->set_minSize_2(L_0);
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (400.0f), (400.0f), /*hidden argument*/NULL);
		__this->set_maxSize_3(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResizePanel::Awake()
extern "C"  void ResizePanel_Awake_m3009818539 (ResizePanel_t4061714193 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResizePanel_Awake_m3009818539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Transform_get_parent_m835071599(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_t3704657025 * L_2 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_1, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set_panelRectTransform_4(L_2);
		return;
	}
}
// System.Void ResizePanel::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ResizePanel_OnPointerDown_m3366400817 (ResizePanel_t4061714193 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResizePanel_OnPointerDown_m3366400817_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = __this->get_panelRectTransform_4();
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = RectTransform_get_sizeDelta_m2183112744(L_0, /*hidden argument*/NULL);
		__this->set_originalSizeDelta_6(L_1);
		RectTransform_t3704657025 * L_2 = __this->get_panelRectTransform_4();
		PointerEventData_t3807901092 * L_3 = ___data0;
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = PointerEventData_get_position_m437660275(L_3, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_5 = ___data0;
		NullCheck(L_5);
		Camera_t4157153871 * L_6 = PointerEventData_get_pressEventCamera_m2613974917(L_5, /*hidden argument*/NULL);
		Vector2_t2156229523 * L_7 = __this->get_address_of_originalLocalPointerPosition_5();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		RectTransformUtility_ScreenPointToLocalPointInRectangle_m2327269187(NULL /*static, unused*/, L_2, L_4, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResizePanel::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ResizePanel_OnDrag_m4061856464 (ResizePanel_t4061714193 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResizePanel_OnDrag_m4061856464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		RectTransform_t3704657025 * L_0 = __this->get_panelRectTransform_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		RectTransform_t3704657025 * L_2 = __this->get_panelRectTransform_4();
		PointerEventData_t3807901092 * L_3 = ___data0;
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = PointerEventData_get_position_m437660275(L_3, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_5 = ___data0;
		NullCheck(L_5);
		Camera_t4157153871 * L_6 = PointerEventData_get_pressEventCamera_m2613974917(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		RectTransformUtility_ScreenPointToLocalPointInRectangle_m2327269187(NULL /*static, unused*/, L_2, L_4, L_6, (&V_0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_7 = V_0;
		Vector2_t2156229523  L_8 = __this->get_originalLocalPointerPosition_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_9 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector2_t2156229523  L_11 = __this->get_originalSizeDelta_6();
		float L_12 = (&V_1)->get_x_1();
		float L_13 = (&V_1)->get_y_2();
		Vector2_t2156229523  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector2__ctor_m3970636864((&L_14), L_12, ((-L_13)), /*hidden argument*/NULL);
		Vector2_t2156229523  L_15 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = (&V_2)->get_x_0();
		Vector2_t2156229523 * L_17 = __this->get_address_of_minSize_2();
		float L_18 = L_17->get_x_0();
		Vector2_t2156229523 * L_19 = __this->get_address_of_maxSize_3();
		float L_20 = L_19->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_16, L_18, L_20, /*hidden argument*/NULL);
		float L_22 = (&V_2)->get_y_1();
		Vector2_t2156229523 * L_23 = __this->get_address_of_minSize_2();
		float L_24 = L_23->get_y_1();
		Vector2_t2156229523 * L_25 = __this->get_address_of_maxSize_3();
		float L_26 = L_25->get_y_1();
		float L_27 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_22, L_24, L_26, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((&V_2), L_21, L_27, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_28 = __this->get_panelRectTransform_4();
		Vector2_t2156229523  L_29 = V_2;
		NullCheck(L_28);
		RectTransform_set_sizeDelta_m3462269772(L_28, L_29, /*hidden argument*/NULL);
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
// System.Void Scanning::.ctor()
extern "C"  void Scanning__ctor_m140994811 (Scanning_t651759208 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scanning::Start()
extern "C"  void Scanning_Start_m452152981 (Scanning_t651759208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scanning_Start_m452152981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_scanning_3((bool)0);
		Hashtable_t1853889766 * L_0 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_0, /*hidden argument*/NULL);
		__this->set_database_2(L_0);
		return;
	}
}
// System.Void Scanning::Update()
extern "C"  void Scanning_Update_m3163442067 (Scanning_t651759208 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_scanning_3();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Scanning_Scan_m3132931746(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void Scanning::Scan()
extern "C"  void Scanning_Scan_m3132931746 (Scanning_t651759208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scanning_Scan_m3132931746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateManager_t1982749557 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	List_1_t2585711361 * V_2 = NULL;
	List_1_t2585711361 * V_3 = NULL;
	TrackableBehaviour_t1113559212 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	GameObject_t1113636619 * V_7 = NULL;
	GameObject_t1113636619 * V_8 = NULL;
	Enumerator_t179987942  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		StateManager_t1982749557 * L_1 = InterfaceFuncInvoker0< StateManager_t1982749557 * >::Invoke(3 /* Vuforia.StateManager Vuforia.ITrackerManager::GetStateManager() */, ITrackerManager_t607206903_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		StateManager_t1982749557 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = StateManager_GetActiveTrackableBehaviours_m3434576304(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		List_1_t2585711361 * L_4 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_4, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		V_2 = L_4;
		List_1_t2585711361 * L_5 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_5, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		V_3 = L_5;
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>::GetEnumerator() */, IEnumerable_1_t93412101_il2cpp_TypeInfo_var, L_6);
		V_5 = L_7;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006a;
		}

IL_002b:
		{
			RuntimeObject* L_8 = V_5;
			NullCheck(L_8);
			TrackableBehaviour_t1113559212 * L_9 = InterfaceFuncInvoker0< TrackableBehaviour_t1113559212 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.TrackableBehaviour>::get_Current() */, IEnumerator_1_t1546129680_il2cpp_TypeInfo_var, L_8);
			V_4 = L_9;
			Hashtable_t1853889766 * L_10 = __this->get_database_2();
			TrackableBehaviour_t1113559212 * L_11 = V_4;
			NullCheck(L_11);
			GameObject_t1113636619 * L_12 = Component_get_gameObject_m442555142(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			bool L_13 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(31 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_10, L_12);
			if (!L_13)
			{
				goto IL_005d;
			}
		}

IL_004b:
		{
			List_1_t2585711361 * L_14 = V_2;
			TrackableBehaviour_t1113559212 * L_15 = V_4;
			NullCheck(L_15);
			GameObject_t1113636619 * L_16 = Component_get_gameObject_m442555142(L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			List_1_Add_m2765963565(L_14, L_16, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
			goto IL_006a;
		}

IL_005d:
		{
			List_1_t2585711361 * L_17 = V_3;
			TrackableBehaviour_t1113559212 * L_18 = V_4;
			NullCheck(L_18);
			GameObject_t1113636619 * L_19 = Component_get_gameObject_m442555142(L_18, /*hidden argument*/NULL);
			NullCheck(L_17);
			List_1_Add_m2765963565(L_17, L_19, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
		}

IL_006a:
		{
			RuntimeObject* L_20 = V_5;
			NullCheck(L_20);
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_002b;
			}
		}

IL_0076:
		{
			IL2CPP_LEAVE(0x8A, FINALLY_007b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007b;
	}

FINALLY_007b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_5;
			if (!L_22)
			{
				goto IL_0089;
			}
		}

IL_0082:
		{
			RuntimeObject* L_23 = V_5;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
		}

IL_0089:
		{
			IL2CPP_END_FINALLY(123)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(123)
	{
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008a:
	{
		List_1_t2585711361 * L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = List_1_get_Count_m2812834599(L_24, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_0096;
		}
	}
	{
		return;
	}

IL_0096:
	{
		List_1_t2585711361 * L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = List_1_get_Count_m2812834599(L_26, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if (L_27)
		{
			goto IL_018b;
		}
	}
	{
		Hashtable_t1853889766 * L_28 = __this->get_database_2();
		NullCheck(L_28);
		int32_t L_29 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_28);
		if (L_29)
		{
			goto IL_018a;
		}
	}
	{
		Hashtable_t1853889766 * L_30 = __this->get_database_2();
		List_1_t2585711361 * L_31 = V_3;
		NullCheck(L_31);
		GameObject_t1113636619 * L_32 = List_1_get_Item_m3743125852(L_31, 0, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		Vector3_t3722313464  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector3__ctor_m3353183577((&L_33), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_34 = L_33;
		RuntimeObject * L_35 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_30);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_30, L_32, L_35);
		List_1_t2585711361 * L_36 = V_3;
		NullCheck(L_36);
		GameObject_t1113636619 * L_37 = List_1_get_Item_m3743125852(L_36, 0, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		NullCheck(L_37);
		String_t* L_38 = Object_get_name_m4211327027(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Concat_m3937257545(NULL /*static, unused*/, L_38, _stringLiteral3524438320, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		List_1_t2585711361 * L_40 = V_3;
		NullCheck(L_40);
		GameObject_t1113636619 * L_41 = List_1_get_Item_m3743125852(L_40, 0, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		Scanning_toggleOn_m2982140418(__this, L_41, /*hidden argument*/NULL);
		V_6 = 1;
		goto IL_017c;
	}

IL_010c:
	{
		Hashtable_t1853889766 * L_42 = __this->get_database_2();
		List_1_t2585711361 * L_43 = V_3;
		int32_t L_44 = V_6;
		NullCheck(L_43);
		GameObject_t1113636619 * L_45 = List_1_get_Item_m3743125852(L_43, L_44, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		List_1_t2585711361 * L_46 = V_3;
		int32_t L_47 = V_6;
		NullCheck(L_46);
		GameObject_t1113636619 * L_48 = List_1_get_Item_m3743125852(L_46, L_47, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		NullCheck(L_48);
		Transform_t3600365921 * L_49 = GameObject_get_transform_m1369836730(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t3722313464  L_50 = Transform_get_position_m36019626(L_49, /*hidden argument*/NULL);
		List_1_t2585711361 * L_51 = V_3;
		NullCheck(L_51);
		GameObject_t1113636619 * L_52 = List_1_get_Item_m3743125852(L_51, 0, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		NullCheck(L_52);
		Transform_t3600365921 * L_53 = GameObject_get_transform_m1369836730(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t3722313464  L_54 = Transform_get_position_m36019626(L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_55 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_50, L_54, /*hidden argument*/NULL);
		Vector3_t3722313464  L_56 = L_55;
		RuntimeObject * L_57 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_56);
		NullCheck(L_42);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_42, L_45, L_57);
		List_1_t2585711361 * L_58 = V_3;
		int32_t L_59 = V_6;
		NullCheck(L_58);
		GameObject_t1113636619 * L_60 = List_1_get_Item_m3743125852(L_58, L_59, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		NullCheck(L_60);
		String_t* L_61 = Object_get_name_m4211327027(L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = String_Concat_m3937257545(NULL /*static, unused*/, L_61, _stringLiteral3524438320, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		List_1_t2585711361 * L_63 = V_3;
		int32_t L_64 = V_6;
		NullCheck(L_63);
		GameObject_t1113636619 * L_65 = List_1_get_Item_m3743125852(L_63, L_64, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		Scanning_toggleOn_m2982140418(__this, L_65, /*hidden argument*/NULL);
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_017c:
	{
		int32_t L_67 = V_6;
		List_1_t2585711361 * L_68 = V_3;
		NullCheck(L_68);
		int32_t L_69 = List_1_get_Count_m2812834599(L_68, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if ((((int32_t)L_67) < ((int32_t)L_69)))
		{
			goto IL_010c;
		}
	}
	{
		return;
	}

IL_018a:
	{
		return;
	}

IL_018b:
	{
		List_1_t2585711361 * L_70 = V_2;
		NullCheck(L_70);
		GameObject_t1113636619 * L_71 = List_1_get_Item_m3743125852(L_70, 0, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		V_7 = L_71;
		List_1_t2585711361 * L_72 = V_3;
		NullCheck(L_72);
		Enumerator_t179987942  L_73 = List_1_GetEnumerator_m1750140655(L_72, /*hidden argument*/List_1_GetEnumerator_m1750140655_RuntimeMethod_var);
		V_9 = L_73;
	}

IL_019c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020e;
		}

IL_01a1:
		{
			GameObject_t1113636619 * L_74 = Enumerator_get_Current_m4179928398((&V_9), /*hidden argument*/Enumerator_get_Current_m4179928398_RuntimeMethod_var);
			V_8 = L_74;
			Hashtable_t1853889766 * L_75 = __this->get_database_2();
			GameObject_t1113636619 * L_76 = V_8;
			GameObject_t1113636619 * L_77 = V_8;
			NullCheck(L_77);
			Transform_t3600365921 * L_78 = GameObject_get_transform_m1369836730(L_77, /*hidden argument*/NULL);
			NullCheck(L_78);
			Vector3_t3722313464  L_79 = Transform_get_position_m36019626(L_78, /*hidden argument*/NULL);
			GameObject_t1113636619 * L_80 = V_7;
			NullCheck(L_80);
			Transform_t3600365921 * L_81 = GameObject_get_transform_m1369836730(L_80, /*hidden argument*/NULL);
			NullCheck(L_81);
			Vector3_t3722313464  L_82 = Transform_get_position_m36019626(L_81, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_83 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_79, L_82, /*hidden argument*/NULL);
			Hashtable_t1853889766 * L_84 = __this->get_database_2();
			GameObject_t1113636619 * L_85 = V_7;
			NullCheck(L_84);
			RuntimeObject * L_86 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_84, L_85);
			Vector3_t3722313464  L_87 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_83, ((*(Vector3_t3722313464 *)((Vector3_t3722313464 *)UnBox(L_86, Vector3_t3722313464_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			Vector3_t3722313464  L_88 = L_87;
			RuntimeObject * L_89 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_88);
			NullCheck(L_75);
			VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_75, L_76, L_89);
			GameObject_t1113636619 * L_90 = V_8;
			NullCheck(L_90);
			String_t* L_91 = Object_get_name_m4211327027(L_90, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_92 = String_Concat_m3937257545(NULL /*static, unused*/, L_91, _stringLiteral29061571, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_92, /*hidden argument*/NULL);
			GameObject_t1113636619 * L_93 = V_8;
			Scanning_toggleOn_m2982140418(__this, L_93, /*hidden argument*/NULL);
		}

IL_020e:
		{
			bool L_94 = Enumerator_MoveNext_m4286844348((&V_9), /*hidden argument*/Enumerator_MoveNext_m4286844348_RuntimeMethod_var);
			if (L_94)
			{
				goto IL_01a1;
			}
		}

IL_021a:
		{
			IL2CPP_LEAVE(0x22D, FINALLY_021f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_021f;
	}

FINALLY_021f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1341201278((&V_9), /*hidden argument*/Enumerator_Dispose_m1341201278_RuntimeMethod_var);
		IL2CPP_END_FINALLY(543)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(543)
	{
		IL2CPP_JUMP_TBL(0x22D, IL_022d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_022d:
	{
		return;
	}
}
// System.Void Scanning::ScanOn()
extern "C"  void Scanning_ScanOn_m1836700839 (Scanning_t651759208 * __this, const RuntimeMethod* method)
{
	{
		__this->set_scanning_3((bool)1);
		GameObject_t1113636619 * L_0 = __this->get_startScanBtn_4();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_finishScanBtn_5();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_scanStatus_6();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scanning::ScanOff()
extern "C"  void Scanning_ScanOff_m3523975996 (Scanning_t651759208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scanning_ScanOff_m3523975996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_scanning_3((bool)0);
		GameObject_t1113636619 * L_0 = __this->get_startScanBtn_4();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_finishScanBtn_5();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral371078329, /*hidden argument*/NULL);
		NullCheck(L_2);
		wayFinding_t2735345900 * L_3 = GameObject_GetComponent_TiswayFinding_t2735345900_m927213380(L_2, /*hidden argument*/GameObject_GetComponent_TiswayFinding_t2735345900_m927213380_RuntimeMethod_var);
		Hashtable_t1853889766 * L_4 = __this->get_database_2();
		NullCheck(L_3);
		L_3->set_database_13(L_4);
		GameObject_t1113636619 * L_5 = __this->get_scanStatus_6();
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scanning::toggleOn(UnityEngine.GameObject)
extern "C"  void Scanning_toggleOn_m2982140418 (Scanning_t651759208 * __this, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scanning_toggleOn_m2982140418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ___go0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m4211327027(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral598262237, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		GameObject_t1113636619 * L_3 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1855518568, /*hidden argument*/NULL);
		NullCheck(L_3);
		Toggle_t2735377061 * L_4 = GameObject_GetComponent_TisToggle_t2735377061_m3911858412(L_3, /*hidden argument*/GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var);
		NullCheck(L_4);
		Toggle_set_isOn_m3548357404(L_4, (bool)1, /*hidden argument*/NULL);
		goto IL_00b7;
	}

IL_002f:
	{
		GameObject_t1113636619 * L_5 = ___go0;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, _stringLiteral2164346178, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		GameObject_t1113636619 * L_8 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1452234041, /*hidden argument*/NULL);
		NullCheck(L_8);
		Toggle_t2735377061 * L_9 = GameObject_GetComponent_TisToggle_t2735377061_m3911858412(L_8, /*hidden argument*/GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var);
		NullCheck(L_9);
		Toggle_set_isOn_m3548357404(L_9, (bool)1, /*hidden argument*/NULL);
		goto IL_00b7;
	}

IL_005e:
	{
		GameObject_t1113636619 * L_10 = ___go0;
		NullCheck(L_10);
		String_t* L_11 = Object_get_name_m4211327027(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral3730430119, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008d;
		}
	}
	{
		GameObject_t1113636619 * L_13 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3018317982, /*hidden argument*/NULL);
		NullCheck(L_13);
		Toggle_t2735377061 * L_14 = GameObject_GetComponent_TisToggle_t2735377061_m3911858412(L_13, /*hidden argument*/GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var);
		NullCheck(L_14);
		Toggle_set_isOn_m3548357404(L_14, (bool)1, /*hidden argument*/NULL);
		goto IL_00b7;
	}

IL_008d:
	{
		GameObject_t1113636619 * L_15 = ___go0;
		NullCheck(L_15);
		String_t* L_16 = Object_get_name_m4211327027(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m920492651(NULL /*static, unused*/, L_16, _stringLiteral1357777124, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		GameObject_t1113636619 * L_18 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2615033455, /*hidden argument*/NULL);
		NullCheck(L_18);
		Toggle_t2735377061 * L_19 = GameObject_GetComponent_TisToggle_t2735377061_m3911858412(L_18, /*hidden argument*/GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var);
		NullCheck(L_19);
		Toggle_set_isOn_m3548357404(L_19, (bool)1, /*hidden argument*/NULL);
	}

IL_00b7:
	{
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
// System.Void ScrollDetailTexture::.ctor()
extern "C"  void ScrollDetailTexture__ctor_m3705192081 (ScrollDetailTexture_t3112174197 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollDetailTexture__ctor_m3705192081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_scrollPerSecond_3(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScrollDetailTexture::OnEnable()
extern "C"  void ScrollDetailTexture_OnEnable_m1987362712 (ScrollDetailTexture_t3112174197 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollDetailTexture_OnEnable_m1987362712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_mSprite_7(L_0);
		Image_t2670269651 * L_1 = __this->get_mSprite_7();
		NullCheck(L_1);
		Material_t340375123 * L_2 = VirtFuncInvoker0< Material_t340375123 * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_1);
		__this->set_mOriginal_6(L_2);
		bool L_3 = __this->get_uniqueMaterial_2();
		if (!L_3)
		{
			goto IL_008d;
		}
	}
	{
		Image_t2670269651 * L_4 = __this->get_mSprite_7();
		NullCheck(L_4);
		Material_t340375123 * L_5 = VirtFuncInvoker0< Material_t340375123 * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_008d;
		}
	}
	{
		Material_t340375123 * L_7 = __this->get_mOriginal_6();
		Material_t340375123 * L_8 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m249231841(L_8, L_7, /*hidden argument*/NULL);
		__this->set_mCopy_5(L_8);
		Material_t340375123 * L_9 = __this->get_mCopy_5();
		Material_t340375123 * L_10 = __this->get_mOriginal_6();
		NullCheck(L_10);
		String_t* L_11 = Object_get_name_m4211327027(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3886820241, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Object_set_name_m291480324(L_9, L_12, /*hidden argument*/NULL);
		Material_t340375123 * L_13 = __this->get_mCopy_5();
		NullCheck(L_13);
		Object_set_hideFlags_m1648752846(L_13, ((int32_t)52), /*hidden argument*/NULL);
		Image_t2670269651 * L_14 = __this->get_mSprite_7();
		Material_t340375123 * L_15 = __this->get_mCopy_5();
		NullCheck(L_14);
		VirtActionInvoker1< Material_t340375123 * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_14, L_15);
	}

IL_008d:
	{
		return;
	}
}
// System.Void ScrollDetailTexture::OnDisable()
extern "C"  void ScrollDetailTexture_OnDisable_m79911482 (ScrollDetailTexture_t3112174197 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollDetailTexture_OnDisable_m79911482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t340375123 * L_0 = __this->get_mCopy_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		Image_t2670269651 * L_2 = __this->get_mSprite_7();
		Material_t340375123 * L_3 = __this->get_mOriginal_6();
		NullCheck(L_2);
		VirtActionInvoker1< Material_t340375123 * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_2, L_3);
		bool L_4 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		Material_t340375123 * L_5 = __this->get_mCopy_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_003c:
	{
		Material_t340375123 * L_6 = __this->get_mCopy_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0047:
	{
		__this->set_mCopy_5((Material_t340375123 *)NULL);
	}

IL_004e:
	{
		__this->set_mOriginal_6((Material_t340375123 *)NULL);
		return;
	}
}
// System.Void ScrollDetailTexture::Update()
extern "C"  void ScrollDetailTexture_Update_m2053991687 (ScrollDetailTexture_t3112174197 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollDetailTexture_Update_m2053991687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Material_t340375123 * V_0 = NULL;
	Texture_t3661962703 * V_1 = NULL;
	Material_t340375123 * G_B3_0 = NULL;
	{
		Material_t340375123 * L_0 = __this->get_mCopy_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Material_t340375123 * L_2 = __this->get_mCopy_5();
		G_B3_0 = L_2;
		goto IL_0022;
	}

IL_001c:
	{
		Material_t340375123 * L_3 = __this->get_mOriginal_6();
		G_B3_0 = L_3;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		Material_t340375123 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		Material_t340375123 * L_6 = V_0;
		NullCheck(L_6);
		Texture_t3661962703 * L_7 = Material_GetTexture_m3545614349(L_6, _stringLiteral3912932732, /*hidden argument*/NULL);
		V_1 = L_7;
		Texture_t3661962703 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		Material_t340375123 * L_10 = V_0;
		Vector2_t2156229523  L_11 = __this->get_scrollPerSecond_3();
		float L_12 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_13 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Material_SetTextureOffset_m2380336123(L_10, _stringLiteral3912932732, L_13, /*hidden argument*/NULL);
	}

IL_0062:
	{
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
// System.Void Scrollpos::.ctor()
extern "C"  void Scrollpos__ctor_m1967298649 (Scrollpos_t1103970193 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scrollpos::Start()
extern "C"  void Scrollpos_Start_m575561799 (Scrollpos_t1103970193 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Scrollpos::Update()
extern "C"  void Scrollpos_Update_m346548410 (Scrollpos_t1103970193 * __this, const RuntimeMethod* method)
{
	{
		Canvas_t3310196443 * L_0 = __this->get_canv_2();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t2301928331  L_3 = Transform_get_rotation_m3502953881(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_rotation_m3524318132(L_1, L_3, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_4 = __this->get_canv_2();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_7, /*hidden argument*/NULL);
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
// System.Void ShowSliderValue::.ctor()
extern "C"  void ShowSliderValue__ctor_m438683780 (ShowSliderValue_t410941925 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShowSliderValue::UpdateLabel(System.Single)
extern "C"  void ShowSliderValue_UpdateLabel_m2874180491 (ShowSliderValue_t410941925 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowSliderValue_UpdateLabel_m2874180491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_t1901882714 * V_0 = NULL;
	{
		Text_t1901882714 * L_0 = Component_GetComponent_TisText_t1901882714_m4196288697(__this, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		V_0 = L_0;
		Text_t1901882714 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Text_t1901882714 * L_3 = V_0;
		float L_4 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_4, (float)(100.0f))), /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m904156431(NULL /*static, unused*/, L_7, _stringLiteral3452614523, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_8);
	}

IL_0034:
	{
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
// System.Void TiltWindow::.ctor()
extern "C"  void TiltWindow__ctor_m1549845387 (TiltWindow_t335293945 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TiltWindow__ctor_m1549845387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (5.0f), (3.0f), /*hidden argument*/NULL);
		__this->set_range_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mRot_5(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TiltWindow::Start()
extern "C"  void TiltWindow_Start_m735426265 (TiltWindow_t335293945 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		__this->set_mTrans_3(L_0);
		Transform_t3600365921 * L_1 = __this->get_mTrans_3();
		NullCheck(L_1);
		Quaternion_t2301928331  L_2 = Transform_get_localRotation_m3487911431(L_1, /*hidden argument*/NULL);
		__this->set_mStart_4(L_2);
		return;
	}
}
// System.Void TiltWindow::Update()
extern "C"  void TiltWindow_Update_m2838027175 (TiltWindow_t335293945 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TiltWindow_Update_m2838027175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_1))), (float)(0.5f)));
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_2))), (float)(0.5f)));
		float L_3 = (&V_0)->get_x_1();
		float L_4 = V_1;
		float L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))/(float)L_5)), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = (&V_0)->get_y_2();
		float L_8 = V_2;
		float L_9 = V_2;
		float L_10 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8))/(float)L_9)), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_4 = L_10;
		Vector2_t2156229523  L_11 = __this->get_mRot_5();
		float L_12 = V_3;
		float L_13 = V_4;
		Vector2_t2156229523  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector2__ctor_m3970636864((&L_14), L_12, L_13, /*hidden argument*/NULL);
		float L_15 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_16 = Vector2_Lerp_m854472224(NULL /*static, unused*/, L_11, L_14, ((float)il2cpp_codegen_multiply((float)L_15, (float)(5.0f))), /*hidden argument*/NULL);
		__this->set_mRot_5(L_16);
		Transform_t3600365921 * L_17 = __this->get_mTrans_3();
		Quaternion_t2301928331  L_18 = __this->get_mStart_4();
		Vector2_t2156229523 * L_19 = __this->get_address_of_mRot_5();
		float L_20 = L_19->get_y_1();
		Vector2_t2156229523 * L_21 = __this->get_address_of_range_2();
		float L_22 = L_21->get_y_1();
		Vector2_t2156229523 * L_23 = __this->get_address_of_mRot_5();
		float L_24 = L_23->get_x_0();
		Vector2_t2156229523 * L_25 = __this->get_address_of_range_2();
		float L_26 = L_25->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_27 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)((-L_20)), (float)L_22)), ((float)il2cpp_codegen_multiply((float)L_24, (float)L_26)), (0.0f), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_28 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_18, L_27, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localRotation_m19445462(L_17, L_28, /*hidden argument*/NULL);
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
// System.Void UICube::.ctor()
extern "C"  void UICube__ctor_m2246872336 (UICube_t784951944 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_3((0.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UICube::Start()
extern "C"  void UICube_Start_m1915831054 (UICube_t784951944 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UICube_Start_m1915831054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		__this->set_distance_4((25.0f));
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Camera_t4157153871 * L_1 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t4157153871 * L_4 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5 = Camera_get_nearClipPlane_m837839537(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_distance_4();
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), (((float)((float)((int32_t)((int32_t)L_2/(int32_t)2))))), (((float)((float)((int32_t)((int32_t)L_3/(int32_t)2))))), ((float)il2cpp_codegen_add((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_8 = Camera_ScreenToWorldPoint_m3978588570(L_1, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_8, /*hidden argument*/NULL);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Camera_t4157153871 * L_10 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_LookAt_m3968184312(L_9, L_11, /*hidden argument*/NULL);
		Camera_t4157153871 * L_12 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t2301928331  L_14 = Transform_get_rotation_m3502953881(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_18 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (45.0f), L_17, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_19 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_rotation_m3524318132(L_15, L_19, /*hidden argument*/NULL);
		__this->set_angle_2((45.0f));
		return;
	}
}
// System.Void UICube::Update()
extern "C"  void UICube_Update_m1624795200 (UICube_t784951944 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UICube_Update_m1624795200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Camera_t4157153871 * L_1 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t4157153871 * L_4 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5 = Camera_get_nearClipPlane_m837839537(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_distance_4();
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), (((float)((float)((int32_t)((int32_t)L_2/(int32_t)2))))), (((float)((float)((int32_t)((int32_t)L_3/(int32_t)2))))), ((float)il2cpp_codegen_add((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_8 = Camera_ScreenToWorldPoint_m3978588570(L_1, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_8, /*hidden argument*/NULL);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Camera_t4157153871 * L_10 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_LookAt_m3968184312(L_9, L_11, /*hidden argument*/NULL);
		Camera_t4157153871 * L_12 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t2301928331  L_14 = Transform_get_rotation_m3502953881(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_16 = V_0;
		float L_17 = __this->get_angle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_19 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_20 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_16, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_rotation_m3524318132(L_15, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_21 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_22 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_22;
		float L_23 = (&V_1)->get_x_1();
		if ((!(((float)L_23) < ((float)(800.0f)))))
		{
			goto IL_00bb;
		}
	}
	{
		float L_24 = __this->get_angle_2();
		float L_25 = __this->get_speed_3();
		__this->set_angle_2(((float)il2cpp_codegen_add((float)L_24, (float)L_25)));
		goto IL_00ce;
	}

IL_00bb:
	{
		float L_26 = __this->get_angle_2();
		float L_27 = __this->get_speed_3();
		__this->set_angle_2(((float)il2cpp_codegen_subtract((float)L_26, (float)L_27)));
	}

IL_00ce:
	{
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
// System.Void WandPanelpos::.ctor()
extern "C"  void WandPanelpos__ctor_m3366193296 (WandPanelpos_t1049921294 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WandPanelpos::Start()
extern "C"  void WandPanelpos_Start_m2832213578 (WandPanelpos_t1049921294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WandPanelpos_Start_m2832213578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3313807377, /*hidden argument*/NULL);
		__this->set_p_2(L_0);
		GameObject_t1113636619 * L_1 = __this->get_p_2();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WandPanelpos::Update()
extern "C"  void WandPanelpos_Update_m3105548394 (WandPanelpos_t1049921294 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_p_2();
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = __this->get_p_2();
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Quaternion_t2301928331  L_7 = Transform_get_rotation_m3502953881(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_rotation_m3524318132(L_4, L_7, /*hidden argument*/NULL);
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
// System.Void wandScript::.ctor()
extern "C"  void wandScript__ctor_m2380157005 (wandScript_t1125606077 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void wandScript::Start()
extern "C"  void wandScript_Start_m2771058127 (wandScript_t1125606077 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wandScript_Start_m2771058127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1816458849, /*hidden argument*/NULL);
		__this->set_progress_9(L_0);
		GameObject_t1113636619 * L_1 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3461181473, /*hidden argument*/NULL);
		__this->set_canv1_4(L_1);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1895097532, /*hidden argument*/NULL);
		__this->set_canv2_5(L_2);
		GameObject_t1113636619 * L_3 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral329013591, /*hidden argument*/NULL);
		__this->set_canv3_6(L_3);
		GameObject_t1113636619 * L_4 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3057896946, /*hidden argument*/NULL);
		__this->set_canv4_7(L_4);
		GameObject_t1113636619 * L_5 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4075094846, /*hidden argument*/NULL);
		__this->set_UIcube_8(L_5);
		__this->set_signal_2((bool)0);
		return;
	}
}
// System.Void wandScript::Update()
extern "C"  void wandScript_Update_m2714974931 (wandScript_t1125606077 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wandScript_Update_m2714974931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3319525431 * V_0 = NULL;
	String_t* V_1 = NULL;
	NullReferenceException_t1023182353 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_signal_2();
		if (!L_0)
		{
			goto IL_01e1;
		}
	}
	{
		__this->set_signal_2((bool)0);
		String_t* L_1 = __this->get_nameCol_3();
		V_1 = L_1;
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_01e1;
		}
	}
	{
		String_t* L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, _stringLiteral598262237, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0084;
		}
	}
	{
		String_t* L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, _stringLiteral2164346178, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_00ba;
		}
	}
	{
		String_t* L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m920492651(NULL /*static, unused*/, L_7, _stringLiteral3730430119, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_00f0;
		}
	}
	{
		String_t* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, _stringLiteral4204889489, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0126;
		}
	}
	{
		String_t* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral4204889486, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0179;
		}
	}
	{
		String_t* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m920492651(NULL /*static, unused*/, L_13, _stringLiteral1357777124, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_01c1;
		}
	}
	{
		goto IL_01e1;
	}

IL_0084:
	{
		wandScript_setactive_m2438207176(__this, /*hidden argument*/NULL);
		List_1_t3319525431 * L_15 = wandScript_getinfo_m3056267977(__this, 1, /*hidden argument*/NULL);
		V_0 = L_15;
		List_1_t3319525431 * L_16 = V_0;
		RuntimeObject* L_17 = wandScript_infoprocess_m4253497090(__this, L_16, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_17, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_18 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral835293501, /*hidden argument*/NULL);
		NullCheck(L_18);
		WandSelection_t972065371 * L_19 = GameObject_GetComponent_TisWandSelection_t972065371_m280005558(L_18, /*hidden argument*/GameObject_GetComponent_TisWandSelection_t972065371_m280005558_RuntimeMethod_var);
		NullCheck(L_19);
		L_19->set_state_2(1);
		goto IL_01e1;
	}

IL_00ba:
	{
		wandScript_setactive_m2438207176(__this, /*hidden argument*/NULL);
		List_1_t3319525431 * L_20 = wandScript_getinfo_m3056267977(__this, 2, /*hidden argument*/NULL);
		V_0 = L_20;
		List_1_t3319525431 * L_21 = V_0;
		RuntimeObject* L_22 = wandScript_infoprocess_m4253497090(__this, L_21, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_22, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_23 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral835293501, /*hidden argument*/NULL);
		NullCheck(L_23);
		WandSelection_t972065371 * L_24 = GameObject_GetComponent_TisWandSelection_t972065371_m280005558(L_23, /*hidden argument*/GameObject_GetComponent_TisWandSelection_t972065371_m280005558_RuntimeMethod_var);
		NullCheck(L_24);
		L_24->set_state_2(2);
		goto IL_01e1;
	}

IL_00f0:
	{
		wandScript_setactive_m2438207176(__this, /*hidden argument*/NULL);
		List_1_t3319525431 * L_25 = wandScript_getinfo_m3056267977(__this, 3, /*hidden argument*/NULL);
		V_0 = L_25;
		List_1_t3319525431 * L_26 = V_0;
		RuntimeObject* L_27 = wandScript_infoprocess_m4253497090(__this, L_26, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_27, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_28 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral835293501, /*hidden argument*/NULL);
		NullCheck(L_28);
		WandSelection_t972065371 * L_29 = GameObject_GetComponent_TisWandSelection_t972065371_m280005558(L_28, /*hidden argument*/GameObject_GetComponent_TisWandSelection_t972065371_m280005558_RuntimeMethod_var);
		NullCheck(L_29);
		L_29->set_state_2(3);
		goto IL_01e1;
	}

IL_0126:
	try
	{ // begin try (depth: 1)
		GameObject_t1113636619 * L_30 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral371078329, /*hidden argument*/NULL);
		NullCheck(L_30);
		wayFinding_t2735345900 * L_31 = GameObject_GetComponent_TiswayFinding_t2735345900_m927213380(L_30, /*hidden argument*/GameObject_GetComponent_TiswayFinding_t2735345900_m927213380_RuntimeMethod_var);
		GameObject_t1113636619 * L_32 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4204889489, /*hidden argument*/NULL);
		NullCheck(L_32);
		MatImageSc_t920972473 * L_33 = GameObject_GetComponent_TisMatImageSc_t920972473_m1982302322(L_32, /*hidden argument*/GameObject_GetComponent_TisMatImageSc_t920972473_m1982302322_RuntimeMethod_var);
		NullCheck(L_33);
		String_t* L_34 = L_33->get_url_2();
		NullCheck(L_31);
		L_31->set_url_4(L_34);
		goto IL_0159;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0153;
		throw e;
	}

CATCH_0153:
	{ // begin catch(System.NullReferenceException)
		V_2 = ((NullReferenceException_t1023182353 *)__exception_local);
		goto IL_01e1;
	} // end catch (depth: 1)

IL_0159:
	{
		GameObject_t1113636619 * L_35 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral835293501, /*hidden argument*/NULL);
		NullCheck(L_35);
		WandSelection_t972065371 * L_36 = GameObject_GetComponent_TisWandSelection_t972065371_m280005558(L_35, /*hidden argument*/GameObject_GetComponent_TisWandSelection_t972065371_m280005558_RuntimeMethod_var);
		NullCheck(L_36);
		L_36->set_isTravel_3((bool)1);
		wandScript_setinactive_m2976640003(__this, /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_0179:
	{
		GameObject_t1113636619 * L_37 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral371078329, /*hidden argument*/NULL);
		NullCheck(L_37);
		wayFinding_t2735345900 * L_38 = GameObject_GetComponent_TiswayFinding_t2735345900_m927213380(L_37, /*hidden argument*/GameObject_GetComponent_TiswayFinding_t2735345900_m927213380_RuntimeMethod_var);
		GameObject_t1113636619 * L_39 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4204889486, /*hidden argument*/NULL);
		NullCheck(L_39);
		MatImageSc_t920972473 * L_40 = GameObject_GetComponent_TisMatImageSc_t920972473_m1982302322(L_39, /*hidden argument*/GameObject_GetComponent_TisMatImageSc_t920972473_m1982302322_RuntimeMethod_var);
		NullCheck(L_40);
		String_t* L_41 = L_40->get_url_2();
		NullCheck(L_38);
		L_38->set_url_4(L_41);
		GameObject_t1113636619 * L_42 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral835293501, /*hidden argument*/NULL);
		NullCheck(L_42);
		WandSelection_t972065371 * L_43 = GameObject_GetComponent_TisWandSelection_t972065371_m280005558(L_42, /*hidden argument*/GameObject_GetComponent_TisWandSelection_t972065371_m280005558_RuntimeMethod_var);
		NullCheck(L_43);
		L_43->set_isTravel_3((bool)1);
		wandScript_setinactive_m2976640003(__this, /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_01c1:
	{
		wandScript_setinactive_m2976640003(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_44 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral835293501, /*hidden argument*/NULL);
		NullCheck(L_44);
		WandSelection_t972065371 * L_45 = GameObject_GetComponent_TisWandSelection_t972065371_m280005558(L_44, /*hidden argument*/GameObject_GetComponent_TisWandSelection_t972065371_m280005558_RuntimeMethod_var);
		NullCheck(L_45);
		L_45->set_state_2(0);
		goto IL_01e1;
	}

IL_01e1:
	{
		return;
	}
}
// System.Void wandScript::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void wandScript_OnTriggerEnter_m4006158908 (wandScript_t1125606077 * __this, Collider_t1773347010 * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wandScript_OnTriggerEnter_m4006158908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t1773347010 * L_0 = ___instance0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m4211327027(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, L_1, _stringLiteral1160595072, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Collider_t1773347010 * L_3 = ___instance0;
		NullCheck(L_3);
		String_t* L_4 = Object_get_name_m4211327027(L_3, /*hidden argument*/NULL);
		__this->set_nameCol_3(L_4);
		GameObject_t1113636619 * L_5 = __this->get_progress_9();
		NullCheck(L_5);
		RadialProgressBar_t2821283243 * L_6 = GameObject_GetComponent_TisRadialProgressBar_t2821283243_m606195954(L_5, /*hidden argument*/GameObject_GetComponent_TisRadialProgressBar_t2821283243_m606195954_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_signalCol_4((bool)1);
		return;
	}
}
// System.Void wandScript::OnTriggerExit(UnityEngine.Collider)
extern "C"  void wandScript_OnTriggerExit_m1309687079 (wandScript_t1125606077 * __this, Collider_t1773347010 * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wandScript_OnTriggerExit_m1309687079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t1773347010 * L_0 = ___instance0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m4211327027(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, L_1, _stringLiteral568955277, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_progress_9();
		NullCheck(L_3);
		RadialProgressBar_t2821283243 * L_4 = GameObject_GetComponent_TisRadialProgressBar_t2821283243_m606195954(L_3, /*hidden argument*/GameObject_GetComponent_TisRadialProgressBar_t2821283243_m606195954_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_signalCol_4((bool)0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> wandScript::getinfo(System.Int32)
extern "C"  List_1_t3319525431 * wandScript_getinfo_m3056267977 (wandScript_t1125606077 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wandScript_getinfo_m3056267977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	List_1_t3319525431 * V_3 = NULL;
	List_1_t3319525431 * V_4 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		V_1 = (bool)0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_2 = L_1;
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_2, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_3 = L_2;
		GameObject_t1113636619 * L_3 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral371078329, /*hidden argument*/NULL);
		NullCheck(L_3);
		database_t2832598855 * L_4 = GameObject_GetComponent_Tisdatabase_t2832598855_m1122944689(L_3, /*hidden argument*/GameObject_GetComponent_Tisdatabase_t2832598855_m1122944689_RuntimeMethod_var);
		NullCheck(L_4);
		database_Lookup_Drawer_m3676041653(L_4, (&V_0), _stringLiteral3335371912, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral371078329, /*hidden argument*/NULL);
		NullCheck(L_5);
		database_t2832598855 * L_6 = GameObject_GetComponent_Tisdatabase_t2832598855_m1122944689(L_5, /*hidden argument*/GameObject_GetComponent_Tisdatabase_t2832598855_m1122944689_RuntimeMethod_var);
		String_t* L_7 = V_0;
		NullCheck(L_6);
		database_Get_Description_m2229621183(L_6, L_7, (&V_1), (&V_2), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral371078329, /*hidden argument*/NULL);
		NullCheck(L_8);
		database_t2832598855 * L_9 = GameObject_GetComponent_Tisdatabase_t2832598855_m1122944689(L_8, /*hidden argument*/GameObject_GetComponent_Tisdatabase_t2832598855_m1122944689_RuntimeMethod_var);
		String_t* L_10 = V_0;
		NullCheck(L_9);
		database_Get_Image_URL_m4261697933(L_9, L_10, (&V_3), /*hidden argument*/NULL);
		List_1_t3319525431 * L_11 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_11, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_4 = L_11;
		List_1_t3319525431 * L_12 = V_4;
		String_t* L_13 = Int32_ToString_m141394615((&___id0), /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_Add_m1685793073(L_12, L_13, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_14 = V_4;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		List_1_Add_m1685793073(L_14, L_15, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_16 = V_4;
		String_t* L_17 = V_2;
		NullCheck(L_16);
		List_1_Add_m1685793073(L_16, L_17, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_18 = V_4;
		NullCheck(L_18);
		List_1_Add_m1685793073(L_18, _stringLiteral1661352404, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_19 = V_4;
		String_t* L_20 = V_0;
		NullCheck(L_19);
		List_1_Add_m1685793073(L_19, L_20, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_21 = V_4;
		String_t* L_22 = V_2;
		NullCheck(L_21);
		List_1_Add_m1685793073(L_21, L_22, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_23 = V_4;
		List_1_t3319525431 * L_24 = V_3;
		NullCheck(L_24);
		String_t* L_25 = List_1_get_Item_m3729392029(L_24, 0, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
		NullCheck(L_23);
		List_1_Add_m1685793073(L_23, L_25, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_26 = V_4;
		List_1_t3319525431 * L_27 = V_3;
		NullCheck(L_27);
		String_t* L_28 = List_1_get_Item_m3729392029(L_27, 1, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
		NullCheck(L_26);
		List_1_Add_m1685793073(L_26, L_28, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_29 = V_3;
		NullCheck(L_29);
		String_t* L_30 = List_1_get_Item_m3729392029(L_29, 1, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		List_1_t3319525431 * L_31 = V_4;
		return L_31;
	}
}
// System.Collections.IEnumerator wandScript::infoprocess(System.Collections.Generic.List`1<System.String>)
extern "C"  RuntimeObject* wandScript_infoprocess_m4253497090 (wandScript_t1125606077 * __this, List_1_t3319525431 * ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wandScript_infoprocess_m4253497090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CinfoprocessU3Ec__Iterator0_t196706046 * V_0 = NULL;
	{
		U3CinfoprocessU3Ec__Iterator0_t196706046 * L_0 = (U3CinfoprocessU3Ec__Iterator0_t196706046 *)il2cpp_codegen_object_new(U3CinfoprocessU3Ec__Iterator0_t196706046_il2cpp_TypeInfo_var);
		U3CinfoprocessU3Ec__Iterator0__ctor_m3232207588(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CinfoprocessU3Ec__Iterator0_t196706046 * L_1 = V_0;
		List_1_t3319525431 * L_2 = ___info0;
		NullCheck(L_1);
		L_1->set_info_0(L_2);
		U3CinfoprocessU3Ec__Iterator0_t196706046 * L_3 = V_0;
		return L_3;
	}
}
// System.Void wandScript::setactive()
extern "C"  void wandScript_setactive_m2438207176 (wandScript_t1125606077 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_canv1_4();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_canv2_5();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_canv3_6();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_canv4_7();
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_UIcube_8();
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void wandScript::setinactive()
extern "C"  void wandScript_setinactive_m2976640003 (wandScript_t1125606077 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_canv1_4();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_canv2_5();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_canv3_6();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_canv4_7();
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_UIcube_8();
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
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
// System.Void wandScript/<infoprocess>c__Iterator0::.ctor()
extern "C"  void U3CinfoprocessU3Ec__Iterator0__ctor_m3232207588 (U3CinfoprocessU3Ec__Iterator0_t196706046 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean wandScript/<infoprocess>c__Iterator0::MoveNext()
extern "C"  bool U3CinfoprocessU3Ec__Iterator0_MoveNext_m2487083052 (U3CinfoprocessU3Ec__Iterator0_t196706046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CinfoprocessU3Ec__Iterator0_MoveNext_m2487083052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_00e0;
			}
			case 2:
			{
				goto IL_0136;
			}
			case 3:
			{
				goto IL_01ac;
			}
		}
	}
	{
		goto IL_01f2;
	}

IL_0029:
	{
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2916484413, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t1901882714 * L_3 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		List_1_t3319525431 * L_4 = __this->get_info_0();
		NullCheck(L_4);
		String_t* L_5 = List_1_get_Item_m3729392029(L_4, 1, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		GameObject_t1113636619 * L_6 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2916025675, /*hidden argument*/NULL);
		NullCheck(L_6);
		Text_t1901882714 * L_7 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_6, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		List_1_t3319525431 * L_8 = __this->get_info_0();
		NullCheck(L_8);
		String_t* L_9 = List_1_get_Item_m3729392029(L_8, 2, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
		GameObject_t1113636619 * L_10 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral748256399, /*hidden argument*/NULL);
		NullCheck(L_10);
		Text_t1901882714 * L_11 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_10, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		List_1_t3319525431 * L_12 = __this->get_info_0();
		NullCheck(L_12);
		String_t* L_13 = List_1_get_Item_m3729392029(L_12, 4, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		GameObject_t1113636619 * L_14 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3137637767, /*hidden argument*/NULL);
		NullCheck(L_14);
		Text_t1901882714 * L_15 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_14, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		List_1_t3319525431 * L_16 = __this->get_info_0();
		NullCheck(L_16);
		String_t* L_17 = List_1_get_Item_m3729392029(L_16, 5, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_17);
		List_1_t3319525431 * L_18 = __this->get_info_0();
		NullCheck(L_18);
		String_t* L_19 = List_1_get_Item_m3729392029(L_18, 3, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
		WWW_t3688466362 * L_20 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m2915079343(L_20, L_19, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__0_1(L_20);
		WWW_t3688466362 * L_21 = __this->get_U3CwwwU3E__0_1();
		__this->set_U24current_2(L_21);
		bool L_22 = __this->get_U24disposing_3();
		if (L_22)
		{
			goto IL_00db;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_00db:
	{
		goto IL_01f4;
	}

IL_00e0:
	{
		GameObject_t1113636619 * L_23 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1289741697, /*hidden argument*/NULL);
		NullCheck(L_23);
		RawImage_t3182918964 * L_24 = GameObject_GetComponent_TisRawImage_t3182918964_m856277241(L_23, /*hidden argument*/GameObject_GetComponent_TisRawImage_t3182918964_m856277241_RuntimeMethod_var);
		WWW_t3688466362 * L_25 = __this->get_U3CwwwU3E__0_1();
		NullCheck(L_25);
		Texture2D_t3840446185 * L_26 = WWW_get_texture_m3513075325(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		RawImage_set_texture_m415027901(L_24, L_26, /*hidden argument*/NULL);
		List_1_t3319525431 * L_27 = __this->get_info_0();
		NullCheck(L_27);
		String_t* L_28 = List_1_get_Item_m3729392029(L_27, 6, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
		WWW_t3688466362 * L_29 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m2915079343(L_29, L_28, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__0_1(L_29);
		WWW_t3688466362 * L_30 = __this->get_U3CwwwU3E__0_1();
		__this->set_U24current_2(L_30);
		bool L_31 = __this->get_U24disposing_3();
		if (L_31)
		{
			goto IL_0131;
		}
	}
	{
		__this->set_U24PC_4(2);
	}

IL_0131:
	{
		goto IL_01f4;
	}

IL_0136:
	{
		GameObject_t1113636619 * L_32 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4204889489, /*hidden argument*/NULL);
		NullCheck(L_32);
		RawImage_t3182918964 * L_33 = GameObject_GetComponent_TisRawImage_t3182918964_m856277241(L_32, /*hidden argument*/GameObject_GetComponent_TisRawImage_t3182918964_m856277241_RuntimeMethod_var);
		WWW_t3688466362 * L_34 = __this->get_U3CwwwU3E__0_1();
		NullCheck(L_34);
		Texture2D_t3840446185 * L_35 = WWW_get_texture_m3513075325(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		RawImage_set_texture_m415027901(L_33, L_35, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_36 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4204889489, /*hidden argument*/NULL);
		NullCheck(L_36);
		MatImageSc_t920972473 * L_37 = GameObject_GetComponent_TisMatImageSc_t920972473_m1982302322(L_36, /*hidden argument*/GameObject_GetComponent_TisMatImageSc_t920972473_m1982302322_RuntimeMethod_var);
		List_1_t3319525431 * L_38 = __this->get_info_0();
		NullCheck(L_38);
		String_t* L_39 = List_1_get_Item_m3729392029(L_38, 6, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
		NullCheck(L_37);
		L_37->set_url_2(L_39);
		List_1_t3319525431 * L_40 = __this->get_info_0();
		NullCheck(L_40);
		String_t* L_41 = List_1_get_Item_m3729392029(L_40, 7, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
		WWW_t3688466362 * L_42 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m2915079343(L_42, L_41, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__0_1(L_42);
		WWW_t3688466362 * L_43 = __this->get_U3CwwwU3E__0_1();
		__this->set_U24current_2(L_43);
		bool L_44 = __this->get_U24disposing_3();
		if (L_44)
		{
			goto IL_01a7;
		}
	}
	{
		__this->set_U24PC_4(3);
	}

IL_01a7:
	{
		goto IL_01f4;
	}

IL_01ac:
	{
		GameObject_t1113636619 * L_45 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4204889486, /*hidden argument*/NULL);
		NullCheck(L_45);
		RawImage_t3182918964 * L_46 = GameObject_GetComponent_TisRawImage_t3182918964_m856277241(L_45, /*hidden argument*/GameObject_GetComponent_TisRawImage_t3182918964_m856277241_RuntimeMethod_var);
		WWW_t3688466362 * L_47 = __this->get_U3CwwwU3E__0_1();
		NullCheck(L_47);
		Texture2D_t3840446185 * L_48 = WWW_get_texture_m3513075325(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		RawImage_set_texture_m415027901(L_46, L_48, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_49 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4204889489, /*hidden argument*/NULL);
		NullCheck(L_49);
		MatImageSc_t920972473 * L_50 = GameObject_GetComponent_TisMatImageSc_t920972473_m1982302322(L_49, /*hidden argument*/GameObject_GetComponent_TisMatImageSc_t920972473_m1982302322_RuntimeMethod_var);
		List_1_t3319525431 * L_51 = __this->get_info_0();
		NullCheck(L_51);
		String_t* L_52 = List_1_get_Item_m3729392029(L_51, 7, /*hidden argument*/List_1_get_Item_m3729392029_RuntimeMethod_var);
		NullCheck(L_50);
		L_50->set_url_2(L_52);
		__this->set_U24PC_4((-1));
	}

IL_01f2:
	{
		return (bool)0;
	}

IL_01f4:
	{
		return (bool)1;
	}
}
// System.Object wandScript/<infoprocess>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CinfoprocessU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1478086621 (U3CinfoprocessU3Ec__Iterator0_t196706046 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object wandScript/<infoprocess>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CinfoprocessU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m620508540 (U3CinfoprocessU3Ec__Iterator0_t196706046 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void wandScript/<infoprocess>c__Iterator0::Dispose()
extern "C"  void U3CinfoprocessU3Ec__Iterator0_Dispose_m3320961509 (U3CinfoprocessU3Ec__Iterator0_t196706046 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void wandScript/<infoprocess>c__Iterator0::Reset()
extern "C"  void U3CinfoprocessU3Ec__Iterator0_Reset_m3652318565 (U3CinfoprocessU3Ec__Iterator0_t196706046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CinfoprocessU3Ec__Iterator0_Reset_m3652318565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void WandSelection::.ctor()
extern "C"  void WandSelection__ctor_m694438921 (WandSelection_t972065371 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WandSelection::Start()
extern "C"  void WandSelection_Start_m1207540189 (WandSelection_t972065371 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WandSelection_Start_m1207540189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3461181473, /*hidden argument*/NULL);
		__this->set_canv1_4(L_0);
		GameObject_t1113636619 * L_1 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1895097532, /*hidden argument*/NULL);
		__this->set_canv2_5(L_1);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral329013591, /*hidden argument*/NULL);
		__this->set_canv3_6(L_2);
		GameObject_t1113636619 * L_3 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3057896946, /*hidden argument*/NULL);
		__this->set_canv4_7(L_3);
		GameObject_t1113636619 * L_4 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4075094846, /*hidden argument*/NULL);
		__this->set_UIcube_8(L_4);
		return;
	}
}
// System.Void WandSelection::Update()
extern "C"  void WandSelection_Update_m4208196211 (WandSelection_t972065371 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WandSelection_Update_m4208196211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_isTravel_3();
		if (L_0)
		{
			goto IL_02df;
		}
	}
	{
		GameObject_t1113636619 * L_1 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2220010688, /*hidden argument*/NULL);
		__this->set_drawer1_9(L_1);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2222042304, /*hidden argument*/NULL);
		__this->set_drawer2_10(L_2);
		GameObject_t1113636619 * L_3 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2224336064, /*hidden argument*/NULL);
		__this->set_drawer3_11(L_3);
		int32_t L_4 = __this->get_state_2();
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
		{
			case 0:
			{
				goto IL_005b;
			}
			case 1:
			{
				goto IL_00fc;
			}
			case 2:
			{
				goto IL_019d;
			}
		}
	}
	{
		goto IL_023e;
	}

IL_005b:
	{
		WandSelection_setactive_m821691556(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_drawer1_9();
		NullCheck(L_6);
		Renderer_t2627027031 * L_7 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_6, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0093;
		}
	}
	{
		GameObject_t1113636619 * L_9 = __this->get_drawer1_9();
		NullCheck(L_9);
		Renderer_t2627027031 * L_10 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_9, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		NullCheck(L_10);
		MaterialU5BU5D_t561872642* L_11 = Renderer_get_materials_m2188790026(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = 0;
		Material_t340375123 * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Color_t2555686324  L_14 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_set_color_m1794818007(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0093:
	{
		GameObject_t1113636619 * L_15 = __this->get_drawer2_10();
		NullCheck(L_15);
		Renderer_t2627027031 * L_16 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_15, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_16, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00c5;
		}
	}
	{
		GameObject_t1113636619 * L_18 = __this->get_drawer2_10();
		NullCheck(L_18);
		Renderer_t2627027031 * L_19 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_18, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		NullCheck(L_19);
		MaterialU5BU5D_t561872642* L_20 = Renderer_get_materials_m2188790026(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = 0;
		Material_t340375123 * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Color_t2555686324  L_23 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_22);
		Material_set_color_m1794818007(L_22, L_23, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		GameObject_t1113636619 * L_24 = __this->get_drawer3_11();
		NullCheck(L_24);
		Renderer_t2627027031 * L_25 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_24, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_25, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00f7;
		}
	}
	{
		GameObject_t1113636619 * L_27 = __this->get_drawer3_11();
		NullCheck(L_27);
		Renderer_t2627027031 * L_28 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_27, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		NullCheck(L_28);
		MaterialU5BU5D_t561872642* L_29 = Renderer_get_materials_m2188790026(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		int32_t L_30 = 0;
		Material_t340375123 * L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Color_t2555686324  L_32 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_31);
		Material_set_color_m1794818007(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		goto IL_02df;
	}

IL_00fc:
	{
		WandSelection_setactive_m821691556(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_33 = __this->get_drawer2_10();
		NullCheck(L_33);
		Renderer_t2627027031 * L_34 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_33, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_35 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_34, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0134;
		}
	}
	{
		GameObject_t1113636619 * L_36 = __this->get_drawer2_10();
		NullCheck(L_36);
		Renderer_t2627027031 * L_37 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_36, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		NullCheck(L_37);
		MaterialU5BU5D_t561872642* L_38 = Renderer_get_materials_m2188790026(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		int32_t L_39 = 0;
		Material_t340375123 * L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		Color_t2555686324  L_41 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		Material_set_color_m1794818007(L_40, L_41, /*hidden argument*/NULL);
	}

IL_0134:
	{
		GameObject_t1113636619 * L_42 = __this->get_drawer1_9();
		NullCheck(L_42);
		Renderer_t2627027031 * L_43 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_42, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_44 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_43, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0166;
		}
	}
	{
		GameObject_t1113636619 * L_45 = __this->get_drawer1_9();
		NullCheck(L_45);
		Renderer_t2627027031 * L_46 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_45, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		NullCheck(L_46);
		MaterialU5BU5D_t561872642* L_47 = Renderer_get_materials_m2188790026(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		int32_t L_48 = 0;
		Material_t340375123 * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		Color_t2555686324  L_50 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_49);
		Material_set_color_m1794818007(L_49, L_50, /*hidden argument*/NULL);
	}

IL_0166:
	{
		GameObject_t1113636619 * L_51 = __this->get_drawer3_11();
		NullCheck(L_51);
		Renderer_t2627027031 * L_52 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_51, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_53 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_52, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0198;
		}
	}
	{
		GameObject_t1113636619 * L_54 = __this->get_drawer3_11();
		NullCheck(L_54);
		Renderer_t2627027031 * L_55 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_54, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		NullCheck(L_55);
		MaterialU5BU5D_t561872642* L_56 = Renderer_get_materials_m2188790026(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		int32_t L_57 = 0;
		Material_t340375123 * L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Color_t2555686324  L_59 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_58);
		Material_set_color_m1794818007(L_58, L_59, /*hidden argument*/NULL);
	}

IL_0198:
	{
		goto IL_02df;
	}

IL_019d:
	{
		WandSelection_setactive_m821691556(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_60 = __this->get_drawer3_11();
		NullCheck(L_60);
		Renderer_t2627027031 * L_61 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_60, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_62 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_61, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_01d5;
		}
	}
	{
		GameObject_t1113636619 * L_63 = __this->get_drawer3_11();
		NullCheck(L_63);
		Renderer_t2627027031 * L_64 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_63, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		NullCheck(L_64);
		MaterialU5BU5D_t561872642* L_65 = Renderer_get_materials_m2188790026(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		int32_t L_66 = 0;
		Material_t340375123 * L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Color_t2555686324  L_68 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_67);
		Material_set_color_m1794818007(L_67, L_68, /*hidden argument*/NULL);
	}

IL_01d5:
	{
		GameObject_t1113636619 * L_69 = __this->get_drawer2_10();
		NullCheck(L_69);
		Renderer_t2627027031 * L_70 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_69, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_71 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_70, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0207;
		}
	}
	{
		GameObject_t1113636619 * L_72 = __this->get_drawer2_10();
		NullCheck(L_72);
		Renderer_t2627027031 * L_73 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_72, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		NullCheck(L_73);
		MaterialU5BU5D_t561872642* L_74 = Renderer_get_materials_m2188790026(L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		int32_t L_75 = 0;
		Material_t340375123 * L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		Color_t2555686324  L_77 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_76);
		Material_set_color_m1794818007(L_76, L_77, /*hidden argument*/NULL);
	}

IL_0207:
	{
		GameObject_t1113636619 * L_78 = __this->get_drawer1_9();
		NullCheck(L_78);
		Renderer_t2627027031 * L_79 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_78, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_80 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_79, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_0239;
		}
	}
	{
		GameObject_t1113636619 * L_81 = __this->get_drawer1_9();
		NullCheck(L_81);
		Renderer_t2627027031 * L_82 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_81, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		NullCheck(L_82);
		MaterialU5BU5D_t561872642* L_83 = Renderer_get_materials_m2188790026(L_82, /*hidden argument*/NULL);
		NullCheck(L_83);
		int32_t L_84 = 0;
		Material_t340375123 * L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		Color_t2555686324  L_86 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_85);
		Material_set_color_m1794818007(L_85, L_86, /*hidden argument*/NULL);
	}

IL_0239:
	{
		goto IL_02df;
	}

IL_023e:
	{
		WandSelection_setinactive_m3109346688(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_87 = __this->get_drawer1_9();
		NullCheck(L_87);
		Renderer_t2627027031 * L_88 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_87, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_89 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_88, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_0276;
		}
	}
	{
		GameObject_t1113636619 * L_90 = __this->get_drawer1_9();
		NullCheck(L_90);
		Renderer_t2627027031 * L_91 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_90, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		NullCheck(L_91);
		MaterialU5BU5D_t561872642* L_92 = Renderer_get_materials_m2188790026(L_91, /*hidden argument*/NULL);
		NullCheck(L_92);
		int32_t L_93 = 0;
		Material_t340375123 * L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Color_t2555686324  L_95 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_94);
		Material_set_color_m1794818007(L_94, L_95, /*hidden argument*/NULL);
	}

IL_0276:
	{
		GameObject_t1113636619 * L_96 = __this->get_drawer2_10();
		NullCheck(L_96);
		Renderer_t2627027031 * L_97 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_96, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_98 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_97, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_98)
		{
			goto IL_02a8;
		}
	}
	{
		GameObject_t1113636619 * L_99 = __this->get_drawer2_10();
		NullCheck(L_99);
		Renderer_t2627027031 * L_100 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_99, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		NullCheck(L_100);
		MaterialU5BU5D_t561872642* L_101 = Renderer_get_materials_m2188790026(L_100, /*hidden argument*/NULL);
		NullCheck(L_101);
		int32_t L_102 = 0;
		Material_t340375123 * L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		Color_t2555686324  L_104 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_103);
		Material_set_color_m1794818007(L_103, L_104, /*hidden argument*/NULL);
	}

IL_02a8:
	{
		GameObject_t1113636619 * L_105 = __this->get_drawer3_11();
		NullCheck(L_105);
		Renderer_t2627027031 * L_106 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_105, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_107 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_106, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_107)
		{
			goto IL_02da;
		}
	}
	{
		GameObject_t1113636619 * L_108 = __this->get_drawer3_11();
		NullCheck(L_108);
		Renderer_t2627027031 * L_109 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_108, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		NullCheck(L_109);
		MaterialU5BU5D_t561872642* L_110 = Renderer_get_materials_m2188790026(L_109, /*hidden argument*/NULL);
		NullCheck(L_110);
		int32_t L_111 = 0;
		Material_t340375123 * L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		Color_t2555686324  L_113 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_112);
		Material_set_color_m1794818007(L_112, L_113, /*hidden argument*/NULL);
	}

IL_02da:
	{
		goto IL_02df;
	}

IL_02df:
	{
		return;
	}
}
// System.Void WandSelection::setactive()
extern "C"  void WandSelection_setactive_m821691556 (WandSelection_t972065371 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_canv1_4();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_canv2_5();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_canv3_6();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_canv4_7();
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_UIcube_8();
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WandSelection::setinactive()
extern "C"  void WandSelection_setinactive_m3109346688 (WandSelection_t972065371 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_canv1_4();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_canv2_5();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_canv3_6();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_canv4_7();
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_UIcube_8();
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
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
// System.Void wayFinding::.ctor()
extern "C"  void wayFinding__ctor_m4203325114 (wayFinding_t2735345900 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wayFinding__ctor_m4203325114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_t1853889766 * L_0 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_0, /*hidden argument*/NULL);
		__this->set_table_12(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void wayFinding::Start()
extern "C"  void wayFinding_Start_m3959844388 (wayFinding_t2735345900 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wayFinding_Start_m3959844388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral835293501, /*hidden argument*/NULL);
		NullCheck(L_0);
		WandSelection_t972065371 * L_1 = GameObject_GetComponent_TisWandSelection_t972065371_m280005558(L_0, /*hidden argument*/GameObject_GetComponent_TisWandSelection_t972065371_m280005558_RuntimeMethod_var);
		__this->set_ws_14(L_1);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral371078329, /*hidden argument*/NULL);
		NullCheck(L_2);
		database_t2832598855 * L_3 = GameObject_GetComponent_Tisdatabase_t2832598855_m1122944689(L_2, /*hidden argument*/GameObject_GetComponent_Tisdatabase_t2832598855_m1122944689_RuntimeMethod_var);
		__this->set_db_15(L_3);
		__this->set_traveling_16((bool)0);
		__this->set_flag1_17((bool)1);
		__this->set_flag2_18((bool)1);
		Camera_t4157153871 * L_4 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t4157153871 * L_7 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		float L_8 = Camera_get_nearClipPlane_m837839537(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), (((float)((float)((int32_t)((int32_t)L_5/(int32_t)2))))), (((float)((float)((int32_t)((int32_t)L_6/(int32_t)2))))), ((float)il2cpp_codegen_add((float)L_8, (float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_10 = Camera_ScreenToWorldPoint_m3978588570(L_4, L_9, /*hidden argument*/NULL);
		__this->set_start_11(L_10);
		wayFinding_initSelectedObjTable_m1636343849(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void wayFinding::Update()
extern "C"  void wayFinding_Update_m768467670 (wayFinding_t2735345900 * __this, const RuntimeMethod* method)
{
	{
		WandSelection_t972065371 * L_0 = __this->get_ws_14();
		NullCheck(L_0);
		bool L_1 = L_0->get_isTravel_3();
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		bool L_2 = __this->get_flag1_17();
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t1113636619 * L_3 = __this->get_startTravelBtn_5();
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_startScanBtn_7();
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)1, /*hidden argument*/NULL);
		__this->set_flag1_17((bool)0);
	}

IL_003a:
	{
		bool L_5 = __this->get_traveling_16();
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		bool L_6 = __this->get_flag2_18();
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		wayFinding_initSelectedObjTable_m1636343849(__this, /*hidden argument*/NULL);
		__this->set_flag2_18((bool)0);
	}

IL_005d:
	{
		wayFinding_Highlight_m3273843370(__this, /*hidden argument*/NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Void wayFinding::initSelectedObjTable()
extern "C"  void wayFinding_initSelectedObjTable_m1636343849 (wayFinding_t2735345900 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wayFinding_initSelectedObjTable_m1636343849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_t913802012  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Hashtable_t1853889766 * L_0 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_0, /*hidden argument*/NULL);
		__this->set_selectedObjTable_10(L_0);
		List_1_t3319525431 * L_1 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_1, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_mat_List_8(L_1);
		database_t2832598855 * L_2 = __this->get_db_15();
		String_t* L_3 = __this->get_url_4();
		List_1_t3319525431 ** L_4 = __this->get_address_of_mat_List_8();
		NullCheck(L_2);
		database_Lookup_URL_m2247219714(L_2, L_3, L_4, /*hidden argument*/NULL);
		List_1_t3319525431 * L_5 = __this->get_mat_List_8();
		NullCheck(L_5);
		Enumerator_t913802012  L_6 = List_1_GetEnumerator_m669319585(L_5, /*hidden argument*/List_1_GetEnumerator_m669319585_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0039:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b9;
		}

IL_003e:
		{
			String_t* L_7 = Enumerator_get_Current_m3378792279((&V_1), /*hidden argument*/Enumerator_get_Current_m3378792279_RuntimeMethod_var);
			V_0 = L_7;
			String_t* L_8 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_9 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2270779390, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
			database_t2832598855 * L_10 = __this->get_db_15();
			String_t* L_11 = V_0;
			String_t** L_12 = __this->get_address_of_drawer_9();
			NullCheck(L_10);
			database_Lookup_Mat_m148036058(L_10, L_11, L_12, /*hidden argument*/NULL);
			String_t* L_13 = __this->get_drawer_9();
			String_t* L_14 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2339461447, L_13, /*hidden argument*/NULL);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			String_t* L_15 = __this->get_drawer_9();
			bool L_16 = String_op_Equality_m920492651(NULL /*static, unused*/, L_15, _stringLiteral3335371912, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_009d;
			}
		}

IL_0092:
		{
			__this->set_drawer_9(_stringLiteral598262237);
		}

IL_009d:
		{
			Hashtable_t1853889766 * L_17 = __this->get_selectedObjTable_10();
			String_t* L_18 = __this->get_drawer_9();
			GameObject_t1113636619 * L_19 = GameObject_Find_m2032535176(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			bool L_20 = ((bool)0);
			RuntimeObject * L_21 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_20);
			NullCheck(L_17);
			VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_17, L_19, L_21);
		}

IL_00b9:
		{
			bool L_22 = Enumerator_MoveNext_m1254101744((&V_1), /*hidden argument*/Enumerator_MoveNext_m1254101744_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_003e;
			}
		}

IL_00c5:
		{
			IL2CPP_LEAVE(0xD8, FINALLY_00ca);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ca;
	}

FINALLY_00ca:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2026665411((&V_1), /*hidden argument*/Enumerator_Dispose_m2026665411_RuntimeMethod_var);
		IL2CPP_END_FINALLY(202)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_JUMP_TBL(0xD8, IL_00d8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d8:
	{
		return;
	}
}
// System.Void wayFinding::Highlight()
extern "C"  void wayFinding_Highlight_m3273843370 (wayFinding_t2735345900 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wayFinding_Highlight_m3273843370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateManager_t1982749557 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	bool V_3 = false;
	TrackableBehaviour_t1113559212 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	DictionaryEntry_t3123975638  V_6;
	memset(&V_6, 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	GameObject_t1113636619 * V_8 = NULL;
	bool V_9 = false;
	GameObject_t1113636619 * V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		StateManager_t1982749557 * L_1 = InterfaceFuncInvoker0< StateManager_t1982749557 * >::Invoke(3 /* Vuforia.StateManager Vuforia.ITrackerManager::GetStateManager() */, ITrackerManager_t607206903_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		StateManager_t1982749557 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = StateManager_GetActiveTrackableBehaviours_m3434576304(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = (GameObject_t1113636619 *)NULL;
		V_3 = (bool)1;
		Hashtable_t1853889766 * L_4 = __this->get_selectedObjTable_10();
		wayFinding_ResetTable_m429605708(__this, L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>::GetEnumerator() */, IEnumerable_1_t93412101_il2cpp_TypeInfo_var, L_5);
		V_5 = L_6;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0077;
		}

IL_002f:
		{
			RuntimeObject* L_7 = V_5;
			NullCheck(L_7);
			TrackableBehaviour_t1113559212 * L_8 = InterfaceFuncInvoker0< TrackableBehaviour_t1113559212 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.TrackableBehaviour>::get_Current() */, IEnumerator_1_t1546129680_il2cpp_TypeInfo_var, L_7);
			V_4 = L_8;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0048;
			}
		}

IL_003e:
		{
			TrackableBehaviour_t1113559212 * L_10 = V_4;
			NullCheck(L_10);
			GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
			V_2 = L_11;
			V_3 = (bool)0;
		}

IL_0048:
		{
			Hashtable_t1853889766 * L_12 = __this->get_selectedObjTable_10();
			TrackableBehaviour_t1113559212 * L_13 = V_4;
			NullCheck(L_13);
			GameObject_t1113636619 * L_14 = Component_get_gameObject_m442555142(L_13, /*hidden argument*/NULL);
			NullCheck(L_12);
			bool L_15 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(31 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_12, L_14);
			if (!L_15)
			{
				goto IL_0077;
			}
		}

IL_005f:
		{
			Hashtable_t1853889766 * L_16 = __this->get_selectedObjTable_10();
			TrackableBehaviour_t1113559212 * L_17 = V_4;
			NullCheck(L_17);
			GameObject_t1113636619 * L_18 = Component_get_gameObject_m442555142(L_17, /*hidden argument*/NULL);
			bool L_19 = ((bool)1);
			RuntimeObject * L_20 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_19);
			NullCheck(L_16);
			VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_16, L_18, L_20);
		}

IL_0077:
		{
			RuntimeObject* L_21 = V_5;
			NullCheck(L_21);
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_002f;
			}
		}

IL_0083:
		{
			IL2CPP_LEAVE(0x97, FINALLY_0088);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0088;
	}

FINALLY_0088:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_5;
			if (!L_23)
			{
				goto IL_0096;
			}
		}

IL_008f:
		{
			RuntimeObject* L_24 = V_5;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_24);
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(136)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(136)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0097:
	{
		GameObject_t1113636619 * L_25 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_25, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_01d7;
		}
	}
	{
		Hashtable_t1853889766 * L_27 = __this->get_selectedObjTable_10();
		NullCheck(L_27);
		RuntimeObject* L_28 = VirtFuncInvoker0< RuntimeObject* >::Invoke(32 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_27);
		V_7 = L_28;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01af;
		}

IL_00b5:
		{
			RuntimeObject* L_29 = V_7;
			NullCheck(L_29);
			RuntimeObject * L_30 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_29);
			V_6 = ((*(DictionaryEntry_t3123975638 *)((DictionaryEntry_t3123975638 *)UnBox(L_30, DictionaryEntry_t3123975638_il2cpp_TypeInfo_var))));
			RuntimeObject * L_31 = DictionaryEntry_get_Key_m3117378551((&V_6), /*hidden argument*/NULL);
			V_8 = ((GameObject_t1113636619 *)CastclassSealed((RuntimeObject*)L_31, GameObject_t1113636619_il2cpp_TypeInfo_var));
			GameObject_t1113636619 * L_32 = V_8;
			Material_t340375123 * L_33 = __this->get_mat_3();
			wayFinding_SetMat_m2726953727(__this, L_32, L_33, /*hidden argument*/NULL);
			RuntimeObject * L_34 = DictionaryEntry_get_Value_m618120527((&V_6), /*hidden argument*/NULL);
			V_9 = ((*(bool*)((bool*)UnBox(L_34, Boolean_t97287965_il2cpp_TypeInfo_var))));
			bool L_35 = V_9;
			if (L_35)
			{
				goto IL_0175;
			}
		}

IL_00f4:
		{
			Hashtable_t1853889766 * L_36 = __this->get_table_12();
			RuntimeObject * L_37 = DictionaryEntry_get_Key_m3117378551((&V_6), /*hidden argument*/NULL);
			NullCheck(L_36);
			bool L_38 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(34 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_36, L_37);
			if (!L_38)
			{
				goto IL_0142;
			}
		}

IL_010b:
		{
			Hashtable_t1853889766 * L_39 = __this->get_table_12();
			GameObject_t1113636619 * L_40 = V_8;
			NullCheck(L_39);
			RuntimeObject * L_41 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_39, L_40);
			Vector3_t3722313464  L_42 = __this->get_start_11();
			GameObject_t1113636619 * L_43 = V_2;
			GameObject_t1113636619 * L_44 = V_8;
			Vector3_t3722313464  L_45 = __this->get_start_11();
			Vector3_t3722313464  L_46 = wayFinding_getDir_m2911279075(__this, L_43, L_44, L_45, /*hidden argument*/NULL);
			wayFinding_TransformArrow_m2453897102(__this, ((GameObject_t1113636619 *)CastclassSealed((RuntimeObject*)L_41, GameObject_t1113636619_il2cpp_TypeInfo_var)), L_42, L_46, (0.0f), /*hidden argument*/NULL);
			goto IL_0170;
		}

IL_0142:
		{
			Hashtable_t1853889766 * L_47 = __this->get_table_12();
			GameObject_t1113636619 * L_48 = V_8;
			GameObject_t1113636619 * L_49 = __this->get_arrowInstance_2();
			Vector3_t3722313464  L_50 = __this->get_start_11();
			GameObject_t1113636619 * L_51 = V_2;
			GameObject_t1113636619 * L_52 = V_8;
			Vector3_t3722313464  L_53 = __this->get_start_11();
			Vector3_t3722313464  L_54 = wayFinding_getDir_m2911279075(__this, L_51, L_52, L_53, /*hidden argument*/NULL);
			GameObject_t1113636619 * L_55 = wayFinding_DrawArrow_m3284252164(__this, L_49, L_50, L_54, /*hidden argument*/NULL);
			NullCheck(L_47);
			VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_47, L_48, L_55);
		}

IL_0170:
		{
			goto IL_01af;
		}

IL_0175:
		{
			Hashtable_t1853889766 * L_56 = __this->get_table_12();
			GameObject_t1113636619 * L_57 = V_8;
			NullCheck(L_56);
			bool L_58 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(34 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_56, L_57);
			if (!L_58)
			{
				goto IL_01af;
			}
		}

IL_0187:
		{
			Hashtable_t1853889766 * L_59 = __this->get_table_12();
			GameObject_t1113636619 * L_60 = V_8;
			NullCheck(L_59);
			RuntimeObject * L_61 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_59, L_60);
			V_10 = ((GameObject_t1113636619 *)CastclassSealed((RuntimeObject*)L_61, GameObject_t1113636619_il2cpp_TypeInfo_var));
			Hashtable_t1853889766 * L_62 = __this->get_table_12();
			GameObject_t1113636619 * L_63 = V_8;
			NullCheck(L_62);
			VirtActionInvoker1< RuntimeObject * >::Invoke(33 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_62, L_63);
			GameObject_t1113636619 * L_64 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_64, /*hidden argument*/NULL);
		}

IL_01af:
		{
			RuntimeObject* L_65 = V_7;
			NullCheck(L_65);
			bool L_66 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_65);
			if (L_66)
			{
				goto IL_00b5;
			}
		}

IL_01bb:
		{
			IL2CPP_LEAVE(0x1D7, FINALLY_01c0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01c0;
	}

FINALLY_01c0:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_67 = V_7;
			RuntimeObject* L_68 = ((RuntimeObject*)IsInst((RuntimeObject*)L_67, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_11 = L_68;
			if (!L_68)
			{
				goto IL_01d6;
			}
		}

IL_01cf:
		{
			RuntimeObject* L_69 = V_11;
			NullCheck(L_69);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_69);
		}

IL_01d6:
		{
			IL2CPP_END_FINALLY(448)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(448)
	{
		IL2CPP_JUMP_TBL(0x1D7, IL_01d7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01d7:
	{
		return;
	}
}
// System.Void wayFinding::SetMat(UnityEngine.GameObject,UnityEngine.Material)
extern "C"  void wayFinding_SetMat_m2726953727 (wayFinding_t2735345900 * __this, GameObject_t1113636619 * ___go0, Material_t340375123 * ___mat1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wayFinding_SetMat_m2726953727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t2627027031 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___go0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Transform_GetChild_m1092972975(L_1, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		Renderer_t2627027031 * L_3 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(L_2, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		V_0 = L_3;
		Renderer_t2627027031 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		Renderer_t2627027031 * L_6 = V_0;
		NullCheck(L_6);
		MaterialU5BU5D_t561872642* L_7 = Renderer_get_materials_m2188790026(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = 0;
		Material_t340375123 * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_10 = V_0;
		Material_t340375123 * L_11 = ___mat1;
		NullCheck(L_10);
		Renderer_set_sharedMaterial_m2374163090(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// UnityEngine.Vector3 wayFinding::getDir(UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  wayFinding_getDir_m2911279075 (wayFinding_t2735345900 * __this, GameObject_t1113636619 * ___relativeObj0, GameObject_t1113636619 * ___endObj1, Vector3_t3722313464  ___start2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wayFinding_getDir_m2911279075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = ___relativeObj0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = ___start2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Hashtable_t1853889766 * L_5 = __this->get_database_13();
		GameObject_t1113636619 * L_6 = ___endObj1;
		NullCheck(L_5);
		RuntimeObject * L_7 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_5, L_6);
		Hashtable_t1853889766 * L_8 = __this->get_database_13();
		GameObject_t1113636619 * L_9 = ___relativeObj0;
		NullCheck(L_8);
		RuntimeObject * L_10 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, L_9);
		Vector3_t3722313464  L_11 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, ((*(Vector3_t3722313464 *)((Vector3_t3722313464 *)UnBox(L_7, Vector3_t3722313464_il2cpp_TypeInfo_var)))), ((*(Vector3_t3722313464 *)((Vector3_t3722313464 *)UnBox(L_10, Vector3_t3722313464_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_11;
		Vector3_t3722313464  L_12 = V_0;
		Vector3_t3722313464  L_13 = V_1;
		Vector3_t3722313464  L_14 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// UnityEngine.GameObject wayFinding::DrawArrow(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  GameObject_t1113636619 * wayFinding_DrawArrow_m3284252164 (wayFinding_t2735345900 * __this, GameObject_t1113636619 * ___arrow0, Vector3_t3722313464  ___start1, Vector3_t3722313464  ___dir2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wayFinding_DrawArrow_m3284252164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___arrow0;
		GameObject_t1113636619 * L_1 = ___arrow0;
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = ___arrow0;
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t2301928331  L_6 = Transform_get_rotation_m3502953881(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_0, L_3, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_7;
		GameObject_t1113636619 * L_8 = V_0;
		Vector3_t3722313464  L_9 = ___start1;
		Vector3_t3722313464  L_10 = ___dir2;
		wayFinding_TransformArrow_m2453897102(__this, L_8, L_9, L_10, (0.0f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = V_0;
		return L_11;
	}
}
// System.Void wayFinding::TransformArrow(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void wayFinding_TransformArrow_m2453897102 (wayFinding_t2735345900 * __this, GameObject_t1113636619 * ___arrow0, Vector3_t3722313464  ___start1, Vector3_t3722313464  ___dir2, float ___height3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wayFinding_TransformArrow_m2453897102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Quaternion_t2301928331  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Vector3_t3722313464  L_0 = ___start1;
		V_0 = L_0;
		float L_1 = (&___start1)->get_y_2();
		float L_2 = ___height3;
		(&V_0)->set_y_2(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		GameObject_t1113636619 * L_3 = ___arrow0;
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = V_0;
		NullCheck(L_4);
		Transform_set_position_m3387557959(L_4, L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = ___dir2;
		V_1 = L_6;
		Vector3_t3722313464  L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_8 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_get_left_m2428419009(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_11 = Quaternion_LookRotation_m3197602968(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_12 = Quaternion_Inverse_m1311579081(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		GameObject_t1113636619 * L_13 = ___arrow0;
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_15 = V_2;
		Quaternion_t2301928331  L_16 = V_3;
		Quaternion_t2301928331  L_17 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_rotation_m3524318132(L_14, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void wayFinding::ResetTable(System.Collections.Hashtable)
extern "C"  void wayFinding_ResetTable_m429605708 (wayFinding_t2735345900 * __this, Hashtable_t1853889766 * ___selectedObjTable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wayFinding_ResetTable_m429605708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2585711361 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	GameObject_t1113636619 * V_4 = NULL;
	Enumerator_t179987942  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2585711361 * L_0 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_0, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		V_0 = L_0;
		Hashtable_t1853889766 * L_1 = ___selectedObjTable0;
		NullCheck(L_1);
		RuntimeObject* L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_0017:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			V_1 = ((GameObject_t1113636619 *)CastclassSealed((RuntimeObject*)L_5, GameObject_t1113636619_il2cpp_TypeInfo_var));
			List_1_t2585711361 * L_6 = V_0;
			GameObject_t1113636619 * L_7 = V_1;
			NullCheck(L_6);
			List_1_Add_m2765963565(L_6, L_7, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
		}

IL_002a:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0017;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_11;
			if (!L_11)
			{
				goto IL_004d;
			}
		}

IL_0047:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
		}

IL_004d:
		{
			IL2CPP_END_FINALLY(58)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004e:
	{
		List_1_t2585711361 * L_13 = V_0;
		NullCheck(L_13);
		Enumerator_t179987942  L_14 = List_1_GetEnumerator_m1750140655(L_13, /*hidden argument*/List_1_GetEnumerator_m1750140655_RuntimeMethod_var);
		V_5 = L_14;
	}

IL_0056:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_005b:
		{
			GameObject_t1113636619 * L_15 = Enumerator_get_Current_m4179928398((&V_5), /*hidden argument*/Enumerator_get_Current_m4179928398_RuntimeMethod_var);
			V_4 = L_15;
			Hashtable_t1853889766 * L_16 = ___selectedObjTable0;
			GameObject_t1113636619 * L_17 = V_4;
			bool L_18 = ((bool)0);
			RuntimeObject * L_19 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_18);
			NullCheck(L_16);
			VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_16, L_17, L_19);
		}

IL_0072:
		{
			bool L_20 = Enumerator_MoveNext_m4286844348((&V_5), /*hidden argument*/Enumerator_MoveNext_m4286844348_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_005b;
			}
		}

IL_007e:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1341201278((&V_5), /*hidden argument*/Enumerator_Dispose_m1341201278_RuntimeMethod_var);
		IL2CPP_END_FINALLY(131)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0091:
	{
		return;
	}
}
// System.Void wayFinding::startTraveling()
extern "C"  void wayFinding_startTraveling_m2168396428 (wayFinding_t2735345900 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wayFinding_startTraveling_m2168396428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_t1853889766 * L_0 = __this->get_database_13();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t1113636619 * L_1 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral371078329, /*hidden argument*/NULL);
		NullCheck(L_1);
		Scanning_t651759208 * L_2 = GameObject_GetComponent_TisScanning_t651759208_m2415015816(L_1, /*hidden argument*/GameObject_GetComponent_TisScanning_t651759208_m2415015816_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_scanning_3((bool)1);
		return;
	}

IL_0021:
	{
		__this->set_traveling_16((bool)1);
		GameObject_t1113636619 * L_3 = __this->get_startTravelBtn_5();
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_finishTravelBtn_6();
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = __this->get_startScanBtn_7();
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void wayFinding::exitTraveling()
extern "C"  void wayFinding_exitTraveling_m256940023 (wayFinding_t2735345900 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wayFinding_exitTraveling_m256940023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WandSelection_t972065371 * L_0 = __this->get_ws_14();
		NullCheck(L_0);
		L_0->set_isTravel_3((bool)0);
		__this->set_traveling_16((bool)0);
		__this->set_flag1_17((bool)1);
		__this->set_flag2_18((bool)1);
		GameObject_t1113636619 * L_1 = __this->get_startTravelBtn_5();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_finishTravelBtn_6();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2242364214, /*hidden argument*/NULL);
		NullCheck(L_3);
		wandScript_t1125606077 * L_4 = GameObject_GetComponent_TiswandScript_t1125606077_m2772890611(L_3, /*hidden argument*/GameObject_GetComponent_TiswandScript_t1125606077_m2772890611_RuntimeMethod_var);
		NullCheck(L_4);
		wandScript_setactive_m2438207176(L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
