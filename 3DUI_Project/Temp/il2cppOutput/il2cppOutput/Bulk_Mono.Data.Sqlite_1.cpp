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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// Mono.Data.Sqlite.SqliteStatementHandle
struct SqliteStatementHandle_t2894995162;
// System.Runtime.InteropServices.CriticalHandle
struct CriticalHandle_t2719507733;
// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_t2018962351;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t3870565407;
// System.Data.Common.DbTransaction
struct DbTransaction_t2989397904;
// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_t3916884476;
// System.String
struct String_t;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// Mono.Data.Sqlite.SqliteException
struct SqliteException_t1654350877;
// Mono.Data.Sqlite.SQLiteType
struct SQLiteType_t3858798327;
// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_t3929343441;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Mono.Data.Sqlite.SQLiteUpdateEventHandler
struct SQLiteUpdateEventHandler_t65030829;
// Mono.Data.Sqlite.UpdateEventArgs
struct UpdateEventArgs_t1504787517;
// System.Resources.ResourceManager
struct ResourceManager_t4037989559;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// Mono.Data.Sqlite.SQLiteCallback
struct SQLiteCallback_t1634814860;
// Mono.Data.Sqlite.SQLiteFinalCallback
struct SQLiteFinalCallback_t3927043577;
// Mono.Data.Sqlite.SQLiteCollation
struct SQLiteCollation_t2922389035;
// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_t583925460;
// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t3445264418;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// Mono.Data.Sqlite.SQLiteEnlistment
struct SQLiteEnlistment_t238178236;
// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t1448580847;
// Mono.Data.Sqlite.SQLiteCommitHandler
struct SQLiteCommitHandler_t4261451224;
// System.EventHandler
struct EventHandler_t1348719766;
// System.Data.StateChangeEventHandler
struct StateChangeEventHandler_t3645615602;
// System.WeakReference
struct WeakReference_t1334886716;
// Mono.Data.Sqlite.SqliteParameterCollection
struct SqliteParameterCollection_t2576174450;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>
struct List_1_t2942769285;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.String[]
struct StringU5BU5D_t1281789340;

extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t SqliteStatementHandle__ctor_m3041060064_MetadataUsageId;
extern RuntimeClass* SQLiteBase_t1448580847_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteException_t1654350877_il2cpp_TypeInfo_var;
extern const uint32_t SqliteStatementHandle_ReleaseHandle_m3069235056_MetadataUsageId;
extern const uint32_t SqliteStatementHandle_get_IsInvalid_m882893773_MetadataUsageId;
extern RuntimeClass* SqliteStatementHandle_t2894995162_il2cpp_TypeInfo_var;
extern const uint32_t SqliteStatementHandle_op_Implicit_m3583322638_MetadataUsageId;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral523764549;
extern String_t* _stringLiteral3139949461;
extern const uint32_t SqliteTransaction__ctor_m4125206649_MetadataUsageId;
extern String_t* _stringLiteral863716709;
extern const uint32_t SqliteTransaction_Commit_m1892628780_MetadataUsageId;
extern String_t* _stringLiteral2788878995;
extern const uint32_t SqliteTransaction_IssueRollback_m2494991181_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1898132772;
extern String_t* _stringLiteral4164993244;
extern String_t* _stringLiteral3879940289;
extern String_t* _stringLiteral3302423820;
extern const uint32_t SqliteTransaction_IsValid_m881367657_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern const uint32_t SQLiteUpdateCallback_BeginInvoke_m112044681_MetadataUsageId;
extern const RuntimeType* SR_t3821587234_0_0_0_var;
extern RuntimeClass* SR_t3821587234_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ResourceManager_t4037989559_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3457726445;
extern const uint32_t SR_get_ResourceManager_m1851418131_MetadataUsageId;
extern String_t* _stringLiteral3960432262;
extern const uint32_t SR_get_DataTypes_m2546763937_MetadataUsageId;
extern String_t* _stringLiteral1750709949;
extern const uint32_t SR_get_Keywords_m2637100942_MetadataUsageId;
extern String_t* _stringLiteral340362515;
extern const uint32_t SR_get_MetaDataCollections_m3448345499_MetadataUsageId;

struct ByteU5BU5D_t4116647657;


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
#ifndef SR_T3821587234_H
#define SR_T3821587234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SR
struct  SR_t3821587234  : public RuntimeObject
{
public:

public:
};

struct SR_t3821587234_StaticFields
{
public:
	// System.Resources.ResourceManager Mono.Data.Sqlite.SR::resourceMan
	ResourceManager_t4037989559 * ___resourceMan_0;
	// System.Globalization.CultureInfo Mono.Data.Sqlite.SR::resourceCulture
	CultureInfo_t4157843068 * ___resourceCulture_1;

public:
	inline static int32_t get_offset_of_resourceMan_0() { return static_cast<int32_t>(offsetof(SR_t3821587234_StaticFields, ___resourceMan_0)); }
	inline ResourceManager_t4037989559 * get_resourceMan_0() const { return ___resourceMan_0; }
	inline ResourceManager_t4037989559 ** get_address_of_resourceMan_0() { return &___resourceMan_0; }
	inline void set_resourceMan_0(ResourceManager_t4037989559 * value)
	{
		___resourceMan_0 = value;
		Il2CppCodeGenWriteBarrier((&___resourceMan_0), value);
	}

	inline static int32_t get_offset_of_resourceCulture_1() { return static_cast<int32_t>(offsetof(SR_t3821587234_StaticFields, ___resourceCulture_1)); }
	inline CultureInfo_t4157843068 * get_resourceCulture_1() const { return ___resourceCulture_1; }
	inline CultureInfo_t4157843068 ** get_address_of_resourceCulture_1() { return &___resourceCulture_1; }
	inline void set_resourceCulture_1(CultureInfo_t4157843068 * value)
	{
		___resourceCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___resourceCulture_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SR_T3821587234_H
#ifndef RESOURCEMANAGER_T4037989559_H
#define RESOURCEMANAGER_T4037989559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t4037989559  : public RuntimeObject
{
public:
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_4;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t * ___MainAssembly_5;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t1853889766 * ___ResourceSets_6;
	// System.Boolean System.Resources.ResourceManager::ignoreCase
	bool ___ignoreCase_7;
	// System.Type System.Resources.ResourceManager::resourceSource
	Type_t * ___resourceSource_8;
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_9;
	// System.String System.Resources.ResourceManager::resourceDir
	String_t* ___resourceDir_10;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::neutral_culture
	CultureInfo_t4157843068 * ___neutral_culture_11;

public:
	inline static int32_t get_offset_of_BaseNameField_4() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___BaseNameField_4)); }
	inline String_t* get_BaseNameField_4() const { return ___BaseNameField_4; }
	inline String_t** get_address_of_BaseNameField_4() { return &___BaseNameField_4; }
	inline void set_BaseNameField_4(String_t* value)
	{
		___BaseNameField_4 = value;
		Il2CppCodeGenWriteBarrier((&___BaseNameField_4), value);
	}

	inline static int32_t get_offset_of_MainAssembly_5() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___MainAssembly_5)); }
	inline Assembly_t * get_MainAssembly_5() const { return ___MainAssembly_5; }
	inline Assembly_t ** get_address_of_MainAssembly_5() { return &___MainAssembly_5; }
	inline void set_MainAssembly_5(Assembly_t * value)
	{
		___MainAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___MainAssembly_5), value);
	}

	inline static int32_t get_offset_of_ResourceSets_6() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___ResourceSets_6)); }
	inline Hashtable_t1853889766 * get_ResourceSets_6() const { return ___ResourceSets_6; }
	inline Hashtable_t1853889766 ** get_address_of_ResourceSets_6() { return &___ResourceSets_6; }
	inline void set_ResourceSets_6(Hashtable_t1853889766 * value)
	{
		___ResourceSets_6 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceSets_6), value);
	}

	inline static int32_t get_offset_of_ignoreCase_7() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___ignoreCase_7)); }
	inline bool get_ignoreCase_7() const { return ___ignoreCase_7; }
	inline bool* get_address_of_ignoreCase_7() { return &___ignoreCase_7; }
	inline void set_ignoreCase_7(bool value)
	{
		___ignoreCase_7 = value;
	}

	inline static int32_t get_offset_of_resourceSource_8() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___resourceSource_8)); }
	inline Type_t * get_resourceSource_8() const { return ___resourceSource_8; }
	inline Type_t ** get_address_of_resourceSource_8() { return &___resourceSource_8; }
	inline void set_resourceSource_8(Type_t * value)
	{
		___resourceSource_8 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSource_8), value);
	}

	inline static int32_t get_offset_of_resourceSetType_9() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___resourceSetType_9)); }
	inline Type_t * get_resourceSetType_9() const { return ___resourceSetType_9; }
	inline Type_t ** get_address_of_resourceSetType_9() { return &___resourceSetType_9; }
	inline void set_resourceSetType_9(Type_t * value)
	{
		___resourceSetType_9 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_9), value);
	}

	inline static int32_t get_offset_of_resourceDir_10() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___resourceDir_10)); }
	inline String_t* get_resourceDir_10() const { return ___resourceDir_10; }
	inline String_t** get_address_of_resourceDir_10() { return &___resourceDir_10; }
	inline void set_resourceDir_10(String_t* value)
	{
		___resourceDir_10 = value;
		Il2CppCodeGenWriteBarrier((&___resourceDir_10), value);
	}

	inline static int32_t get_offset_of_neutral_culture_11() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___neutral_culture_11)); }
	inline CultureInfo_t4157843068 * get_neutral_culture_11() const { return ___neutral_culture_11; }
	inline CultureInfo_t4157843068 ** get_address_of_neutral_culture_11() { return &___neutral_culture_11; }
	inline void set_neutral_culture_11(CultureInfo_t4157843068 * value)
	{
		___neutral_culture_11 = value;
		Il2CppCodeGenWriteBarrier((&___neutral_culture_11), value);
	}
};

struct ResourceManager_t4037989559_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t1853889766 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t1853889766 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t1853889766 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t1853889766 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t1853889766 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t1853889766 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t1853889766 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t1853889766 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T4037989559_H
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
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1B
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1B_40;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1C
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1C_41;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1B_40() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1B_40)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1B_40() const { return ___U3CU3Ef__switchU24map1B_40; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1B_40() { return &___U3CU3Ef__switchU24map1B_40; }
	inline void set_U3CU3Ef__switchU24map1B_40(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1B_40 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1B_40), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1C_41() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1C_41)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1C_41() const { return ___U3CU3Ef__switchU24map1C_41; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1C_41() { return &___U3CU3Ef__switchU24map1C_41; }
	inline void set_U3CU3Ef__switchU24map1C_41(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1C_41 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1C_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef UNSAFENATIVEMETHODS_T47733028_H
#define UNSAFENATIVEMETHODS_T47733028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.UnsafeNativeMethods
struct  UnsafeNativeMethods_t47733028  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFENATIVEMETHODS_T47733028_H
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
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
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
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef DBTRANSACTION_T2989397904_H
#define DBTRANSACTION_T2989397904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbTransaction
struct  DbTransaction_t2989397904  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBTRANSACTION_T2989397904_H
#ifndef UPDATEEVENTARGS_T1504787517_H
#define UPDATEEVENTARGS_T1504787517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.UpdateEventArgs
struct  UpdateEventArgs_t1504787517  : public EventArgs_t3591816995
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEEVENTARGS_T1504787517_H
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
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef DBTYPE_T2468447662_H
#define DBTYPE_T2468447662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DbType
struct  DbType_t2468447662 
{
public:
	// System.Int32 System.Data.DbType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DbType_t2468447662, ___value___1)); }
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
#endif // DBTYPE_T2468447662_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
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
#ifndef CRITICALHANDLE_T2719507733_H
#define CRITICALHANDLE_T2719507733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CriticalHandle
struct  CriticalHandle_t2719507733  : public CriticalFinalizerObject_t701527852
{
public:
	// System.IntPtr System.Runtime.InteropServices.CriticalHandle::handle
	intptr_t ___handle_0;
	// System.Boolean System.Runtime.InteropServices.CriticalHandle::_disposed
	bool ____disposed_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(CriticalHandle_t2719507733, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__disposed_1() { return static_cast<int32_t>(offsetof(CriticalHandle_t2719507733, ____disposed_1)); }
	inline bool get__disposed_1() const { return ____disposed_1; }
	inline bool* get_address_of__disposed_1() { return &____disposed_1; }
	inline void set__disposed_1(bool value)
	{
		____disposed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALHANDLE_T2719507733_H
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
#ifndef SQLITEERRORCODE_T1296275473_H
#define SQLITEERRORCODE_T1296275473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteErrorCode
struct  SQLiteErrorCode_t1296275473 
{
public:
	// System.Int32 Mono.Data.Sqlite.SQLiteErrorCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SQLiteErrorCode_t1296275473, ___value___1)); }
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
#endif // SQLITEERRORCODE_T1296275473_H
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
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2008144148 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t223948603 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t223948603 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t223948603 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t223948603 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t223948603 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2120639521 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2120639521 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2120639521 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t2008144148 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2008144148 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2008144148 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t223948603 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t223948603 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t223948603 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t223948603 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t223948603 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t223948603 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t223948603 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t223948603 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t223948603 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t223948603 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t223948603 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t223948603 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t223948603 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t223948603 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t223948603 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T_H
#ifndef EXTERNALEXCEPTION_T3544951457_H
#define EXTERNALEXCEPTION_T3544951457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3544951457  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3544951457_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef TYPEAFFINITY_T268438681_H
#define TYPEAFFINITY_T268438681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.TypeAffinity
struct  TypeAffinity_t268438681 
{
public:
	// System.Int32 Mono.Data.Sqlite.TypeAffinity::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAffinity_t268438681, ___value___1)); }
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
#endif // TYPEAFFINITY_T268438681_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
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
#ifndef SQLITESTATEMENTHANDLE_T2894995162_H
#define SQLITESTATEMENTHANDLE_T2894995162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteStatementHandle
struct  SqliteStatementHandle_t2894995162  : public CriticalHandle_t2719507733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITESTATEMENTHANDLE_T2894995162_H
#ifndef SQLITETYPE_T3858798327_H
#define SQLITETYPE_T3858798327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteType
struct  SQLiteType_t3858798327  : public RuntimeObject
{
public:
	// System.Data.DbType Mono.Data.Sqlite.SQLiteType::Type
	int32_t ___Type_0;
	// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SQLiteType::Affinity
	int32_t ___Affinity_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(SQLiteType_t3858798327, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Affinity_1() { return static_cast<int32_t>(offsetof(SQLiteType_t3858798327, ___Affinity_1)); }
	inline int32_t get_Affinity_1() const { return ___Affinity_1; }
	inline int32_t* get_address_of_Affinity_1() { return &___Affinity_1; }
	inline void set_Affinity_1(int32_t value)
	{
		___Affinity_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITETYPE_T3858798327_H
#ifndef SQLITETRANSACTION_T2018962351_H
#define SQLITETRANSACTION_T2018962351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteTransaction
struct  SqliteTransaction_t2018962351  : public DbTransaction_t2989397904
{
public:
	// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteTransaction::_cnn
	SqliteConnection_t3870565407 * ____cnn_1;
	// System.Int64 Mono.Data.Sqlite.SqliteTransaction::_version
	int64_t ____version_2;
	// System.Data.IsolationLevel Mono.Data.Sqlite.SqliteTransaction::_level
	int32_t ____level_3;

public:
	inline static int32_t get_offset_of__cnn_1() { return static_cast<int32_t>(offsetof(SqliteTransaction_t2018962351, ____cnn_1)); }
	inline SqliteConnection_t3870565407 * get__cnn_1() const { return ____cnn_1; }
	inline SqliteConnection_t3870565407 ** get_address_of__cnn_1() { return &____cnn_1; }
	inline void set__cnn_1(SqliteConnection_t3870565407 * value)
	{
		____cnn_1 = value;
		Il2CppCodeGenWriteBarrier((&____cnn_1), value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(SqliteTransaction_t2018962351, ____version_2)); }
	inline int64_t get__version_2() const { return ____version_2; }
	inline int64_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int64_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__level_3() { return static_cast<int32_t>(offsetof(SqliteTransaction_t2018962351, ____level_3)); }
	inline int32_t get__level_3() const { return ____level_3; }
	inline int32_t* get_address_of__level_3() { return &____level_3; }
	inline void set__level_3(int32_t value)
	{
		____level_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITETRANSACTION_T2018962351_H
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
#ifndef SQLITETYPENAMES_T2304190112_H
#define SQLITETYPENAMES_T2304190112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteTypeNames
struct  SQLiteTypeNames_t2304190112 
{
public:
	// System.String Mono.Data.Sqlite.SQLiteTypeNames::typeName
	String_t* ___typeName_0;
	// System.Data.DbType Mono.Data.Sqlite.SQLiteTypeNames::dataType
	int32_t ___dataType_1;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(SQLiteTypeNames_t2304190112, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_0), value);
	}

	inline static int32_t get_offset_of_dataType_1() { return static_cast<int32_t>(offsetof(SQLiteTypeNames_t2304190112, ___dataType_1)); }
	inline int32_t get_dataType_1() const { return ___dataType_1; }
	inline int32_t* get_address_of_dataType_1() { return &___dataType_1; }
	inline void set_dataType_1(int32_t value)
	{
		___dataType_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Data.Sqlite.SQLiteTypeNames
struct SQLiteTypeNames_t2304190112_marshaled_pinvoke
{
	char* ___typeName_0;
	int32_t ___dataType_1;
};
// Native definition for COM marshalling of Mono.Data.Sqlite.SQLiteTypeNames
struct SQLiteTypeNames_t2304190112_marshaled_com
{
	Il2CppChar* ___typeName_0;
	int32_t ___dataType_1;
};
#endif // SQLITETYPENAMES_T2304190112_H
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
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef DBEXCEPTION_T64224457_H
#define DBEXCEPTION_T64224457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbException
struct  DbException_t64224457  : public ExternalException_t3544951457
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBEXCEPTION_T64224457_H
#ifndef SQLITEUPDATECALLBACK_T3929343441_H
#define SQLITEUPDATECALLBACK_T3929343441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteUpdateCallback
struct  SQLiteUpdateCallback_t3929343441  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEUPDATECALLBACK_T3929343441_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef SQLITEEXCEPTION_T1654350877_H
#define SQLITEEXCEPTION_T1654350877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteException
struct  SqliteException_t1654350877  : public DbException_t64224457
{
public:
	// Mono.Data.Sqlite.SQLiteErrorCode Mono.Data.Sqlite.SqliteException::_errorCode
	int32_t ____errorCode_11;

public:
	inline static int32_t get_offset_of__errorCode_11() { return static_cast<int32_t>(offsetof(SqliteException_t1654350877, ____errorCode_11)); }
	inline int32_t get__errorCode_11() const { return ____errorCode_11; }
	inline int32_t* get_address_of__errorCode_11() { return &____errorCode_11; }
	inline void set__errorCode_11(int32_t value)
	{
		____errorCode_11 = value;
	}
};

struct SqliteException_t1654350877_StaticFields
{
public:
	// System.String[] Mono.Data.Sqlite.SqliteException::_errorMessages
	StringU5BU5D_t1281789340* ____errorMessages_12;

public:
	inline static int32_t get_offset_of__errorMessages_12() { return static_cast<int32_t>(offsetof(SqliteException_t1654350877_StaticFields, ____errorMessages_12)); }
	inline StringU5BU5D_t1281789340* get__errorMessages_12() const { return ____errorMessages_12; }
	inline StringU5BU5D_t1281789340** get_address_of__errorMessages_12() { return &____errorMessages_12; }
	inline void set__errorMessages_12(StringU5BU5D_t1281789340* value)
	{
		____errorMessages_12 = value;
		Il2CppCodeGenWriteBarrier((&____errorMessages_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEEXCEPTION_T1654350877_H
#ifndef SQLITECALLBACK_T1634814860_H
#define SQLITECALLBACK_T1634814860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteCallback
struct  SQLiteCallback_t1634814860  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECALLBACK_T1634814860_H
#ifndef SQLITEFINALCALLBACK_T3927043577_H
#define SQLITEFINALCALLBACK_T3927043577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteFinalCallback
struct  SQLiteFinalCallback_t3927043577  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEFINALCALLBACK_T3927043577_H
#ifndef SQLITECOLLATION_T2922389035_H
#define SQLITECOLLATION_T2922389035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteCollation
struct  SQLiteCollation_t2922389035  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECOLLATION_T2922389035_H
#ifndef SQLITECOMMITCALLBACK_T583925460_H
#define SQLITECOMMITCALLBACK_T583925460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteCommitCallback
struct  SQLiteCommitCallback_t583925460  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECOMMITCALLBACK_T583925460_H
#ifndef SQLITEROLLBACKCALLBACK_T3445264418_H
#define SQLITEROLLBACKCALLBACK_T3445264418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteRollbackCallback
struct  SQLiteRollbackCallback_t3445264418  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEROLLBACKCALLBACK_T3445264418_H
#ifndef SQLITEUPDATEEVENTHANDLER_T65030829_H
#define SQLITEUPDATEEVENTHANDLER_T65030829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteUpdateEventHandler
struct  SQLiteUpdateEventHandler_t65030829  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEUPDATEEVENTHANDLER_T65030829_H
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



// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor()
extern "C"  void SqliteStatementHandle__ctor_m3041060064 (SqliteStatementHandle_t2894995162 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.CriticalHandle::SetHandle(System.IntPtr)
extern "C"  void CriticalHandle_SetHandle_m393101319 (CriticalHandle_t2719507733 * __this, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.CriticalHandle::.ctor(System.IntPtr)
extern "C"  void CriticalHandle__ctor_m1948407678 (CriticalHandle_t2719507733 * __this, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteBase::FinalizeStatement(Mono.Data.Sqlite.SqliteStatementHandle)
extern "C"  void SQLiteBase_FinalizeStatement_m2940168490 (RuntimeObject * __this /* static, unused */, SqliteStatementHandle_t2894995162 * ___stmt0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor(System.IntPtr)
extern "C"  void SqliteStatementHandle__ctor_m2554088766 (SqliteStatementHandle_t2894995162 * __this, intptr_t ___stmt0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbTransaction::.ctor()
extern "C"  void DbTransaction__ctor_m897502483 (DbTransaction_t2989397904 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteConnection::CreateCommand()
extern "C"  SqliteCommand_t3916884476 * SqliteConnection_CreateCommand_m1680859346 (SqliteConnection_t3870565407 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::set_CommandText(System.String)
extern "C"  void SqliteCommand_set_CommandText_m781537148 (SqliteCommand_t3916884476 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteCommand::ExecuteNonQuery()
extern "C"  int32_t SqliteCommand_ExecuteNonQuery_m1623908333 (SqliteCommand_t3916884476 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteTransaction::IsValid(System.Boolean)
extern "C"  bool SqliteTransaction_IsValid_m881367657 (SqliteTransaction_t2018962351 * __this, bool ___throwError0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteTransaction::Rollback()
extern "C"  void SqliteTransaction_Rollback_m2625955415 (SqliteTransaction_t2018962351 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbTransaction::Dispose(System.Boolean)
extern "C"  void DbTransaction_Dispose_m3839529911 (DbTransaction_t2989397904 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteTransaction::IssueRollback(Mono.Data.Sqlite.SqliteConnection)
extern "C"  void SqliteTransaction_IssueRollback_m2494991181 (RuntimeObject * __this /* static, unused */, SqliteConnection_t3870565407 * ___cnn0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Int32,System.String)
extern "C"  void SqliteException__ctor_m1183710838 (SqliteException_t1654350877 * __this, int32_t ___errorCode0, String_t* ___extendedInformation1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.ConnectionState Mono.Data.Sqlite.SqliteConnection::get_State()
extern "C"  int32_t SqliteConnection_get_State_m722659400 (SqliteConnection_t3870565407 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteTypeNames::.ctor(System.String,System.Data.DbType)
extern "C"  void SQLiteTypeNames__ctor_m2817028333 (SQLiteTypeNames_t2304190112 * __this, String_t* ___newtypeName0, int32_t ___newdataType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteUpdateCallback::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.Int64)
extern "C"  void SQLiteUpdateCallback_Invoke_m270625502 (SQLiteUpdateCallback_t3929343441 * __this, intptr_t ___puser0, int32_t ___type1, intptr_t ___database2, intptr_t ___table3, int64_t ___rowid4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteUpdateEventHandler::Invoke(System.Object,Mono.Data.Sqlite.UpdateEventArgs)
extern "C"  void SQLiteUpdateEventHandler_Invoke_m2185124143 (SQLiteUpdateEventHandler_t65030829 * __this, RuntimeObject * ___sender0, UpdateEventArgs_t1504787517 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::ReferenceEquals(System.Object,System.Object)
extern "C"  bool Object_ReferenceEquals_m610702577 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceManager::.ctor(System.String,System.Reflection.Assembly)
extern "C"  void ResourceManager__ctor_m2289870624 (ResourceManager_t4037989559 * __this, String_t* p0, Assembly_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Resources.ResourceManager Mono.Data.Sqlite.SR::get_ResourceManager()
extern "C"  ResourceManager_t4037989559 * SR_get_ResourceManager_m1851418131 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor(System.IntPtr)
extern "C"  void SqliteStatementHandle__ctor_m2554088766 (SqliteStatementHandle_t2894995162 * __this, intptr_t ___stmt0, const RuntimeMethod* method)
{
	{
		SqliteStatementHandle__ctor_m3041060064(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___stmt0;
		CriticalHandle_SetHandle_m393101319(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor()
extern "C"  void SqliteStatementHandle__ctor_m3041060064 (SqliteStatementHandle_t2894995162 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle__ctor_m3041060064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CriticalHandle__ctor_m1948407678(__this, (intptr_t)(0), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteStatementHandle::ReleaseHandle()
extern "C"  bool SqliteStatementHandle_ReleaseHandle_m3069235056 (SqliteStatementHandle_t2894995162 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle_ReleaseHandle_m3069235056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SQLiteBase_t1448580847_il2cpp_TypeInfo_var);
		SQLiteBase_FinalizeStatement_m2940168490(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		goto IL_0011;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SqliteException_t1654350877_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(Mono.Data.Sqlite.SqliteException)
		goto IL_0011;
	} // end catch (depth: 1)

IL_0011:
	{
		return (bool)1;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteStatementHandle::get_IsInvalid()
extern "C"  bool SqliteStatementHandle_get_IsInvalid_m882893773 (SqliteStatementHandle_t2894995162 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle_get_IsInvalid_m882893773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((CriticalHandle_t2719507733 *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr Mono.Data.Sqlite.SqliteStatementHandle::op_Implicit(Mono.Data.Sqlite.SqliteStatementHandle)
extern "C"  intptr_t SqliteStatementHandle_op_Implicit_m3090031945 (RuntimeObject * __this /* static, unused */, SqliteStatementHandle_t2894995162 * ___stmt0, const RuntimeMethod* method)
{
	{
		SqliteStatementHandle_t2894995162 * L_0 = ___stmt0;
		NullCheck(L_0);
		intptr_t L_1 = ((CriticalHandle_t2719507733 *)L_0)->get_handle_0();
		return L_1;
	}
}
// Mono.Data.Sqlite.SqliteStatementHandle Mono.Data.Sqlite.SqliteStatementHandle::op_Implicit(System.IntPtr)
extern "C"  SqliteStatementHandle_t2894995162 * SqliteStatementHandle_op_Implicit_m3583322638 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle_op_Implicit_m3583322638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___stmt0;
		SqliteStatementHandle_t2894995162 * L_1 = (SqliteStatementHandle_t2894995162 *)il2cpp_codegen_object_new(SqliteStatementHandle_t2894995162_il2cpp_TypeInfo_var);
		SqliteStatementHandle__ctor_m2554088766(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Mono.Data.Sqlite.SqliteTransaction::.ctor(Mono.Data.Sqlite.SqliteConnection,System.Boolean)
extern "C"  void SqliteTransaction__ctor_m4125206649 (SqliteTransaction_t2018962351 * __this, SqliteConnection_t3870565407 * ___connection0, bool ___deferredLock1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteTransaction__ctor_m4125206649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteCommand_t3916884476 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	SqliteTransaction_t2018962351 * G_B2_0 = NULL;
	SqliteTransaction_t2018962351 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	SqliteTransaction_t2018962351 * G_B3_1 = NULL;
	{
		DbTransaction__ctor_m897502483(__this, /*hidden argument*/NULL);
		SqliteConnection_t3870565407 * L_0 = ___connection0;
		__this->set__cnn_1(L_0);
		SqliteConnection_t3870565407 * L_1 = __this->get__cnn_1();
		NullCheck(L_1);
		int64_t L_2 = L_1->get__version_15();
		__this->set__version_2(L_2);
		bool L_3 = ___deferredLock1;
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = ((int32_t)4096);
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_002f:
	{
		G_B3_0 = ((int32_t)1048576);
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__level_3(G_B3_0);
		SqliteConnection_t3870565407 * L_4 = __this->get__cnn_1();
		SqliteConnection_t3870565407 * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->get__transactionLevel_7();
		int32_t L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->set__transactionLevel_7(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		int32_t L_8 = V_1;
		if (L_8)
		{
			goto IL_00c1;
		}
	}

IL_0054:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t3870565407 * L_9 = __this->get__cnn_1();
			NullCheck(L_9);
			SqliteCommand_t3916884476 * L_10 = SqliteConnection_CreateCommand_m1680859346(L_9, /*hidden argument*/NULL);
			V_0 = L_10;
		}

IL_0060:
		try
		{ // begin try (depth: 2)
			{
				bool L_11 = ___deferredLock1;
				if (L_11)
				{
					goto IL_0076;
				}
			}

IL_0066:
			{
				SqliteCommand_t3916884476 * L_12 = V_0;
				NullCheck(L_12);
				SqliteCommand_set_CommandText_m781537148(L_12, _stringLiteral523764549, /*hidden argument*/NULL);
				goto IL_0081;
			}

IL_0076:
			{
				SqliteCommand_t3916884476 * L_13 = V_0;
				NullCheck(L_13);
				SqliteCommand_set_CommandText_m781537148(L_13, _stringLiteral3139949461, /*hidden argument*/NULL);
			}

IL_0081:
			{
				SqliteCommand_t3916884476 * L_14 = V_0;
				NullCheck(L_14);
				SqliteCommand_ExecuteNonQuery_m1623908333(L_14, /*hidden argument*/NULL);
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
				SqliteCommand_t3916884476 * L_15 = V_0;
				if (!L_15)
				{
					goto IL_0099;
				}
			}

IL_0093:
			{
				SqliteCommand_t3916884476 * L_16 = V_0;
				NullCheck(L_16);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_16);
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
			goto IL_00c1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SqliteException_t1654350877_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009f;
		throw e;
	}

CATCH_009f:
	{ // begin catch(Mono.Data.Sqlite.SqliteException)
		{
			SqliteConnection_t3870565407 * L_17 = __this->get__cnn_1();
			SqliteConnection_t3870565407 * L_18 = L_17;
			NullCheck(L_18);
			int32_t L_19 = L_18->get__transactionLevel_7();
			NullCheck(L_18);
			L_18->set__transactionLevel_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
			__this->set__cnn_1((SqliteConnection_t3870565407 *)NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local);
		}

IL_00bc:
		{
			goto IL_00c1;
		}
	} // end catch (depth: 1)

IL_00c1:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::Commit()
extern "C"  void SqliteTransaction_Commit_m1892628780 (SqliteTransaction_t2018962351 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteTransaction_Commit_m1892628780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteCommand_t3916884476 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SqliteTransaction_IsValid_m881367657(__this, (bool)1, /*hidden argument*/NULL);
		SqliteConnection_t3870565407 * L_0 = __this->get__cnn_1();
		NullCheck(L_0);
		int32_t L_1 = L_0->get__transactionLevel_7();
		if (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		SqliteConnection_t3870565407 * L_2 = __this->get__cnn_1();
		NullCheck(L_2);
		SqliteCommand_t3916884476 * L_3 = SqliteConnection_CreateCommand_m1680859346(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		SqliteCommand_t3916884476 * L_4 = V_0;
		NullCheck(L_4);
		SqliteCommand_set_CommandText_m781537148(L_4, _stringLiteral863716709, /*hidden argument*/NULL);
		SqliteCommand_t3916884476 * L_5 = V_0;
		NullCheck(L_5);
		SqliteCommand_ExecuteNonQuery_m1623908333(L_5, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x4A, FINALLY_003d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		{
			SqliteCommand_t3916884476 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0049;
			}
		}

IL_0043:
		{
			SqliteCommand_t3916884476 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_7);
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(61)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		SqliteConnection_t3870565407 * L_8 = __this->get__cnn_1();
		SqliteConnection_t3870565407 * L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__transactionLevel_7();
		NullCheck(L_9);
		L_9->set__transactionLevel_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		__this->set__cnn_1((SqliteConnection_t3870565407 *)NULL);
		return;
	}
}
// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteTransaction::get_Connection()
extern "C"  SqliteConnection_t3870565407 * SqliteTransaction_get_Connection_m2064979124 (SqliteTransaction_t2018962351 * __this, const RuntimeMethod* method)
{
	{
		SqliteConnection_t3870565407 * L_0 = __this->get__cnn_1();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::Dispose(System.Boolean)
extern "C"  void SqliteTransaction_Dispose_m3770840239 (SqliteTransaction_t2018962351 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	SqliteTransaction_t2018962351 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = __this;
		SqliteTransaction_t2018962351 * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = SqliteTransaction_IsValid_m881367657(__this, (bool)0, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0020;
			}
		}

IL_001a:
		{
			SqliteTransaction_Rollback_m2625955415(__this, /*hidden argument*/NULL);
		}

IL_0020:
		{
			__this->set__cnn_1((SqliteConnection_t3870565407 *)NULL);
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		SqliteTransaction_t2018962351 * L_3 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0033:
	{
		bool L_4 = ___disposing0;
		DbTransaction_Dispose_m3839529911(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::Rollback()
extern "C"  void SqliteTransaction_Rollback_m2625955415 (SqliteTransaction_t2018962351 * __this, const RuntimeMethod* method)
{
	{
		SqliteTransaction_IsValid_m881367657(__this, (bool)1, /*hidden argument*/NULL);
		SqliteConnection_t3870565407 * L_0 = __this->get__cnn_1();
		SqliteTransaction_IssueRollback_m2494991181(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		SqliteConnection_t3870565407 * L_1 = __this->get__cnn_1();
		NullCheck(L_1);
		L_1->set__transactionLevel_7(0);
		__this->set__cnn_1((SqliteConnection_t3870565407 *)NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::IssueRollback(Mono.Data.Sqlite.SqliteConnection)
extern "C"  void SqliteTransaction_IssueRollback_m2494991181 (RuntimeObject * __this /* static, unused */, SqliteConnection_t3870565407 * ___cnn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteTransaction_IssueRollback_m2494991181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteCommand_t3916884476 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SqliteConnection_t3870565407 * L_0 = ___cnn0;
		NullCheck(L_0);
		SqliteCommand_t3916884476 * L_1 = SqliteConnection_CreateCommand_m1680859346(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		SqliteCommand_t3916884476 * L_2 = V_0;
		NullCheck(L_2);
		SqliteCommand_set_CommandText_m781537148(L_2, _stringLiteral2788878995, /*hidden argument*/NULL);
		SqliteCommand_t3916884476 * L_3 = V_0;
		NullCheck(L_3);
		SqliteCommand_ExecuteNonQuery_m1623908333(L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2B, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		{
			SqliteCommand_t3916884476 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			SqliteCommand_t3916884476 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_5);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(30)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteTransaction::IsValid(System.Boolean)
extern "C"  bool SqliteTransaction_IsValid_m881367657 (SqliteTransaction_t2018962351 * __this, bool ___throwError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteTransaction_IsValid_m881367657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteConnection_t3870565407 * L_0 = __this->get__cnn_1();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1 = ___throwError0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral1898132772, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		SqliteConnection_t3870565407 * L_3 = __this->get__cnn_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get__transactionLevel_7();
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		bool L_5 = ___throwError0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		SqliteException_t1654350877 * L_6 = (SqliteException_t1654350877 *)il2cpp_codegen_object_new(SqliteException_t1654350877_il2cpp_TypeInfo_var);
		SqliteException__ctor_m1183710838(L_6, ((int32_t)21), _stringLiteral4164993244, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0041:
	{
		return (bool)0;
	}

IL_0043:
	{
		SqliteConnection_t3870565407 * L_7 = __this->get__cnn_1();
		NullCheck(L_7);
		int64_t L_8 = L_7->get__version_15();
		int64_t L_9 = __this->get__version_2();
		if ((((int64_t)L_8) == ((int64_t)L_9)))
		{
			goto IL_006e;
		}
	}
	{
		bool L_10 = ___throwError0;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		SqliteException_t1654350877 * L_11 = (SqliteException_t1654350877 *)il2cpp_codegen_object_new(SqliteException_t1654350877_il2cpp_TypeInfo_var);
		SqliteException__ctor_m1183710838(L_11, ((int32_t)21), _stringLiteral3879940289, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}

IL_006c:
	{
		return (bool)0;
	}

IL_006e:
	{
		SqliteConnection_t3870565407 * L_12 = __this->get__cnn_1();
		NullCheck(L_12);
		int32_t L_13 = SqliteConnection_get_State_m722659400(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_0094;
		}
	}
	{
		bool L_14 = ___throwError0;
		if (!L_14)
		{
			goto IL_0092;
		}
	}
	{
		SqliteException_t1654350877 * L_15 = (SqliteException_t1654350877 *)il2cpp_codegen_object_new(SqliteException_t1654350877_il2cpp_TypeInfo_var);
		SqliteException__ctor_m1183710838(L_15, ((int32_t)21), _stringLiteral3302423820, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15);
	}

IL_0092:
	{
		return (bool)0;
	}

IL_0094:
	{
		return (bool)1;
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
// System.Void Mono.Data.Sqlite.SQLiteType::.ctor()
extern "C"  void SQLiteType__ctor_m2235937951 (SQLiteType_t3858798327 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Mono.Data.Sqlite.SQLiteTypeNames
extern "C" void SQLiteTypeNames_t2304190112_marshal_pinvoke(const SQLiteTypeNames_t2304190112& unmarshaled, SQLiteTypeNames_t2304190112_marshaled_pinvoke& marshaled)
{
	marshaled.___typeName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_typeName_0());
	marshaled.___dataType_1 = unmarshaled.get_dataType_1();
}
extern "C" void SQLiteTypeNames_t2304190112_marshal_pinvoke_back(const SQLiteTypeNames_t2304190112_marshaled_pinvoke& marshaled, SQLiteTypeNames_t2304190112& unmarshaled)
{
	unmarshaled.set_typeName_0(il2cpp_codegen_marshal_string_result(marshaled.___typeName_0));
	int32_t unmarshaled_dataType_temp_1 = 0;
	unmarshaled_dataType_temp_1 = marshaled.___dataType_1;
	unmarshaled.set_dataType_1(unmarshaled_dataType_temp_1);
}
// Conversion method for clean up from marshalling of: Mono.Data.Sqlite.SQLiteTypeNames
extern "C" void SQLiteTypeNames_t2304190112_marshal_pinvoke_cleanup(SQLiteTypeNames_t2304190112_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___typeName_0);
	marshaled.___typeName_0 = NULL;
}
// Conversion methods for marshalling of: Mono.Data.Sqlite.SQLiteTypeNames
extern "C" void SQLiteTypeNames_t2304190112_marshal_com(const SQLiteTypeNames_t2304190112& unmarshaled, SQLiteTypeNames_t2304190112_marshaled_com& marshaled)
{
	marshaled.___typeName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_typeName_0());
	marshaled.___dataType_1 = unmarshaled.get_dataType_1();
}
extern "C" void SQLiteTypeNames_t2304190112_marshal_com_back(const SQLiteTypeNames_t2304190112_marshaled_com& marshaled, SQLiteTypeNames_t2304190112& unmarshaled)
{
	unmarshaled.set_typeName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___typeName_0));
	int32_t unmarshaled_dataType_temp_1 = 0;
	unmarshaled_dataType_temp_1 = marshaled.___dataType_1;
	unmarshaled.set_dataType_1(unmarshaled_dataType_temp_1);
}
// Conversion method for clean up from marshalling of: Mono.Data.Sqlite.SQLiteTypeNames
extern "C" void SQLiteTypeNames_t2304190112_marshal_com_cleanup(SQLiteTypeNames_t2304190112_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___typeName_0);
	marshaled.___typeName_0 = NULL;
}
// System.Void Mono.Data.Sqlite.SQLiteTypeNames::.ctor(System.String,System.Data.DbType)
extern "C"  void SQLiteTypeNames__ctor_m2817028333 (SQLiteTypeNames_t2304190112 * __this, String_t* ___newtypeName0, int32_t ___newdataType1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___newtypeName0;
		__this->set_typeName_0(L_0);
		int32_t L_1 = ___newdataType1;
		__this->set_dataType_1(L_1);
		return;
	}
}
extern "C"  void SQLiteTypeNames__ctor_m2817028333_AdjustorThunk (RuntimeObject * __this, String_t* ___newtypeName0, int32_t ___newdataType1, const RuntimeMethod* method)
{
	SQLiteTypeNames_t2304190112 * _thisAdjusted = reinterpret_cast<SQLiteTypeNames_t2304190112 *>(__this + 1);
	SQLiteTypeNames__ctor_m2817028333(_thisAdjusted, ___newtypeName0, ___newdataType1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_SQLiteUpdateCallback_t3929343441 (SQLiteUpdateCallback_t3929343441 * __this, intptr_t ___puser0, int32_t ___type1, intptr_t ___database2, intptr_t ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___puser0, ___type1, ___database2, ___table3, ___rowid4);

}
// System.Void Mono.Data.Sqlite.SQLiteUpdateCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SQLiteUpdateCallback__ctor_m3139144970 (SQLiteUpdateCallback_t3929343441 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Data.Sqlite.SQLiteUpdateCallback::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.Int64)
extern "C"  void SQLiteUpdateCallback_Invoke_m270625502 (SQLiteUpdateCallback_t3929343441 * __this, intptr_t ___puser0, int32_t ___type1, intptr_t ___database2, intptr_t ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		SQLiteUpdateCallback_Invoke_m270625502((SQLiteUpdateCallback_t3929343441 *)__this->get_prev_9(), ___puser0, ___type1, ___database2, ___table3, ___rowid4, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 5)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, int32_t, intptr_t, intptr_t, int64_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___puser0, ___type1, ___database2, ___table3, ___rowid4, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, int32_t, intptr_t, intptr_t, int64_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___puser0, ___type1, ___database2, ___table3, ___rowid4, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t, intptr_t, int64_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___puser0, ___type1, ___database2, ___table3, ___rowid4, targetMethod);
		}
	}
}
// System.IAsyncResult Mono.Data.Sqlite.SQLiteUpdateCallback::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.Int64,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* SQLiteUpdateCallback_BeginInvoke_m112044681 (SQLiteUpdateCallback_t3929343441 * __this, intptr_t ___puser0, int32_t ___type1, intptr_t ___database2, intptr_t ___table3, int64_t ___rowid4, AsyncCallback_t3962456242 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SQLiteUpdateCallback_BeginInvoke_m112044681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___puser0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___type1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___database2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___table3);
	__d_args[4] = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &___rowid4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void Mono.Data.Sqlite.SQLiteUpdateCallback::EndInvoke(System.IAsyncResult)
extern "C"  void SQLiteUpdateCallback_EndInvoke_m3744553101 (SQLiteUpdateCallback_t3929343441 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Data.Sqlite.SQLiteUpdateEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void SQLiteUpdateEventHandler__ctor_m756753322 (SQLiteUpdateEventHandler_t65030829 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Data.Sqlite.SQLiteUpdateEventHandler::Invoke(System.Object,Mono.Data.Sqlite.UpdateEventArgs)
extern "C"  void SQLiteUpdateEventHandler_Invoke_m2185124143 (SQLiteUpdateEventHandler_t65030829 * __this, RuntimeObject * ___sender0, UpdateEventArgs_t1504787517 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		SQLiteUpdateEventHandler_Invoke_m2185124143((SQLiteUpdateEventHandler_t65030829 *)__this->get_prev_9(), ___sender0, ___e1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, UpdateEventArgs_t1504787517 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, UpdateEventArgs_t1504787517 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, RuntimeObject *, UpdateEventArgs_t1504787517 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, UpdateEventArgs_t1504787517 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
		}
	}
}
// System.IAsyncResult Mono.Data.Sqlite.SQLiteUpdateEventHandler::BeginInvoke(System.Object,Mono.Data.Sqlite.UpdateEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* SQLiteUpdateEventHandler_BeginInvoke_m144889656 (SQLiteUpdateEventHandler_t65030829 * __this, RuntimeObject * ___sender0, UpdateEventArgs_t1504787517 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Mono.Data.Sqlite.SQLiteUpdateEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void SQLiteUpdateEventHandler_EndInvoke_m3337696865 (SQLiteUpdateEventHandler_t65030829 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Resources.ResourceManager Mono.Data.Sqlite.SR::get_ResourceManager()
extern "C"  ResourceManager_t4037989559 * SR_get_ResourceManager_m1851418131 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_get_ResourceManager_m1851418131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t4037989559 * V_0 = NULL;
	{
		ResourceManager_t4037989559 * L_0 = ((SR_t3821587234_StaticFields*)il2cpp_codegen_static_fields_for(SR_t3821587234_il2cpp_TypeInfo_var))->get_resourceMan_0();
		bool L_1 = Object_ReferenceEquals_m610702577(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (SR_t3821587234_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Assembly_t * L_4 = VirtFuncInvoker0< Assembly_t * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_3);
		ResourceManager_t4037989559 * L_5 = (ResourceManager_t4037989559 *)il2cpp_codegen_object_new(ResourceManager_t4037989559_il2cpp_TypeInfo_var);
		ResourceManager__ctor_m2289870624(L_5, _stringLiteral3457726445, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		ResourceManager_t4037989559 * L_6 = V_0;
		((SR_t3821587234_StaticFields*)il2cpp_codegen_static_fields_for(SR_t3821587234_il2cpp_TypeInfo_var))->set_resourceMan_0(L_6);
	}

IL_0030:
	{
		ResourceManager_t4037989559 * L_7 = ((SR_t3821587234_StaticFields*)il2cpp_codegen_static_fields_for(SR_t3821587234_il2cpp_TypeInfo_var))->get_resourceMan_0();
		return L_7;
	}
}
// System.String Mono.Data.Sqlite.SR::get_DataTypes()
extern "C"  String_t* SR_get_DataTypes_m2546763937 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_get_DataTypes_m2546763937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResourceManager_t4037989559 * L_0 = SR_get_ResourceManager_m1851418131(NULL /*static, unused*/, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_1 = ((SR_t3821587234_StaticFields*)il2cpp_codegen_static_fields_for(SR_t3821587234_il2cpp_TypeInfo_var))->get_resourceCulture_1();
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker2< String_t*, String_t*, CultureInfo_t4157843068 * >::Invoke(4 /* System.String System.Resources.ResourceManager::GetString(System.String,System.Globalization.CultureInfo) */, L_0, _stringLiteral3960432262, L_1);
		return L_2;
	}
}
// System.String Mono.Data.Sqlite.SR::get_Keywords()
extern "C"  String_t* SR_get_Keywords_m2637100942 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_get_Keywords_m2637100942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResourceManager_t4037989559 * L_0 = SR_get_ResourceManager_m1851418131(NULL /*static, unused*/, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_1 = ((SR_t3821587234_StaticFields*)il2cpp_codegen_static_fields_for(SR_t3821587234_il2cpp_TypeInfo_var))->get_resourceCulture_1();
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker2< String_t*, String_t*, CultureInfo_t4157843068 * >::Invoke(4 /* System.String System.Resources.ResourceManager::GetString(System.String,System.Globalization.CultureInfo) */, L_0, _stringLiteral1750709949, L_1);
		return L_2;
	}
}
// System.String Mono.Data.Sqlite.SR::get_MetaDataCollections()
extern "C"  String_t* SR_get_MetaDataCollections_m3448345499 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_get_MetaDataCollections_m3448345499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResourceManager_t4037989559 * L_0 = SR_get_ResourceManager_m1851418131(NULL /*static, unused*/, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_1 = ((SR_t3821587234_StaticFields*)il2cpp_codegen_static_fields_for(SR_t3821587234_il2cpp_TypeInfo_var))->get_resourceCulture_1();
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker2< String_t*, String_t*, CultureInfo_t4157843068 * >::Invoke(4 /* System.String System.Resources.ResourceManager::GetString(System.String,System.Globalization.CultureInfo) */, L_0, _stringLiteral340362515, L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_close(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_close_m2998066677 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_close", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_close'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_create_function(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IntPtr,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteFinalCallback)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_create_function_m2862226744 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, ByteU5BU5D_t4116647657* ___strName1, int32_t ___nArgs2, int32_t ___nType3, intptr_t ___pvUser4, SQLiteCallback_t1634814860 * ___func5, SQLiteCallback_t1634814860 * ___fstep6, SQLiteFinalCallback_t3927043577 * ___ffinal7, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_create_function", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_create_function'"));
		}
	}

	// Marshaling of parameter '___strName1' to native representation
	uint8_t* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = reinterpret_cast<uint8_t*>((___strName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___func5' to native representation
	Il2CppMethodPointer ____func5_marshaled = NULL;
	____func5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func5));

	// Marshaling of parameter '___fstep6' to native representation
	Il2CppMethodPointer ____fstep6_marshaled = NULL;
	____fstep6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___fstep6));

	// Marshaling of parameter '___ffinal7' to native representation
	Il2CppMethodPointer ____ffinal7_marshaled = NULL;
	____ffinal7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ffinal7));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strName1_marshaled, ___nArgs2, ___nType3, ___pvUser4, ____func5_marshaled, ____fstep6_marshaled, ____ffinal7_marshaled);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_finalize(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_finalize_m2558891839 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_finalize", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_finalize'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open_v2(System.Byte[],System.IntPtr&,System.Int32,System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_open_v2_m2368480615 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___utf8Filename0, intptr_t* ___db1, int32_t ___flags2, intptr_t ___vfs3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open_v2", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_open_v2'"));
		}
	}

	// Marshaling of parameter '___utf8Filename0' to native representation
	uint8_t* ____utf8Filename0_marshaled = NULL;
	if (___utf8Filename0 != NULL)
	{
		____utf8Filename0_marshaled = reinterpret_cast<uint8_t*>((___utf8Filename0)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___db1' to native representation
	intptr_t ____db1_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____utf8Filename0_marshaled, (&____db1_empty), ___flags2, ___vfs3);

	// Marshaling of parameter '___db1' back from native representation
	*___db1 = ____db1_empty;

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open(System.Byte[],System.IntPtr&)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_open_m232265129 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___utf8Filename0, intptr_t* ___db1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_open'"));
		}
	}

	// Marshaling of parameter '___utf8Filename0' to native representation
	uint8_t* ____utf8Filename0_marshaled = NULL;
	if (___utf8Filename0 != NULL)
	{
		____utf8Filename0_marshaled = reinterpret_cast<uint8_t*>((___utf8Filename0)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___db1' to native representation
	intptr_t ____db1_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____utf8Filename0_marshaled, (&____db1_empty));

	// Marshaling of parameter '___db1' back from native representation
	*___db1 = ____db1_empty;

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open16(System.String,System.IntPtr&)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_open16_m1481624615 (RuntimeObject * __this /* static, unused */, String_t* ___fileName0, intptr_t* ___db1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (Il2CppChar*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_open16'"));
		}
	}

	// Marshaling of parameter '___fileName0' to native representation
	Il2CppChar* ____fileName0_marshaled = NULL;
	if (___fileName0 != NULL)
	{
		____fileName0_marshaled = ___fileName0->get_address_of_start_char_1();
	}

	// Marshaling of parameter '___db1' to native representation
	intptr_t ____db1_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____fileName0_marshaled, (&____db1_empty));

	// Marshaling of parameter '___db1' back from native representation
	*___db1 = ____db1_empty;

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_reset(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_reset_m3498500024 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_reset", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_reset'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_parameter_name(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_bind_parameter_name_m892068349 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_parameter_name", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_parameter_name'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_database_name(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_column_database_name_m3506908552 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_database_name", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_database_name'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_database_name16(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_column_database_name16_m972576669 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_database_name16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_database_name16'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_decltype(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_column_decltype_m3961130600 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_decltype", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_decltype'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_name(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_column_name_m437882687 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_name", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_name'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_name16(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_column_name16_m2001030568 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_name16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_name16'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_origin_name(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_column_origin_name_m1070613838 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_origin_name", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_origin_name'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_origin_name16(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_column_origin_name16_m2948039724 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_origin_name16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_origin_name16'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_table_name(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_column_table_name_m3744640887 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_table_name", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_table_name'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_table_name16(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_column_table_name16_m530206799 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_table_name16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_table_name16'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_text(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_column_text_m3883882684 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_text", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_text'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_text16(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_column_text16_m222241133 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_text16'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_errmsg(System.IntPtr)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_errmsg_m3176165033 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_errmsg", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_errmsg'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___db0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_prepare(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&,System.IntPtr&)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_prepare_m1561901234 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, intptr_t ___pSql1, int32_t ___nBytes2, intptr_t* ___stmt3, intptr_t* ___ptrRemain4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_prepare", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_prepare'"));
		}
	}

	// Marshaling of parameter '___stmt3' to native representation
	intptr_t ____stmt3_empty = 0;

	// Marshaling of parameter '___ptrRemain4' to native representation
	intptr_t ____ptrRemain4_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ___pSql1, ___nBytes2, (&____stmt3_empty), (&____ptrRemain4_empty));

	// Marshaling of parameter '___stmt3' back from native representation
	*___stmt3 = ____stmt3_empty;

	// Marshaling of parameter '___ptrRemain4' back from native representation
	*___ptrRemain4 = ____ptrRemain4_empty;

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_table_column_metadata(System.IntPtr,System.Byte[],System.Byte[],System.Byte[],System.IntPtr&,System.IntPtr&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_table_column_metadata_m3850868766 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, ByteU5BU5D_t4116647657* ___dbName1, ByteU5BU5D_t4116647657* ___tblName2, ByteU5BU5D_t4116647657* ___colName3, intptr_t* ___ptrDataType4, intptr_t* ___ptrCollSeq5, int32_t* ___notNull6, int32_t* ___primaryKey7, int32_t* ___autoInc8, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, uint8_t*, uint8_t*, intptr_t*, intptr_t*, int32_t*, int32_t*, int32_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(intptr_t*) + sizeof(intptr_t*) + sizeof(int32_t*) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_table_column_metadata", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_table_column_metadata'"));
		}
	}

	// Marshaling of parameter '___dbName1' to native representation
	uint8_t* ____dbName1_marshaled = NULL;
	if (___dbName1 != NULL)
	{
		____dbName1_marshaled = reinterpret_cast<uint8_t*>((___dbName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___tblName2' to native representation
	uint8_t* ____tblName2_marshaled = NULL;
	if (___tblName2 != NULL)
	{
		____tblName2_marshaled = reinterpret_cast<uint8_t*>((___tblName2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___colName3' to native representation
	uint8_t* ____colName3_marshaled = NULL;
	if (___colName3 != NULL)
	{
		____colName3_marshaled = reinterpret_cast<uint8_t*>((___colName3)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___ptrDataType4' to native representation
	intptr_t ____ptrDataType4_empty = 0;

	// Marshaling of parameter '___ptrCollSeq5' to native representation
	intptr_t ____ptrCollSeq5_empty = 0;

	// Marshaling of parameter '___notNull6' to native representation
	int32_t ____notNull6_empty = 0;

	// Marshaling of parameter '___primaryKey7' to native representation
	int32_t ____primaryKey7_empty = 0;

	// Marshaling of parameter '___autoInc8' to native representation
	int32_t ____autoInc8_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____dbName1_marshaled, ____tblName2_marshaled, ____colName3_marshaled, (&____ptrDataType4_empty), (&____ptrCollSeq5_empty), (&____notNull6_empty), (&____primaryKey7_empty), (&____autoInc8_empty));

	// Marshaling of parameter '___ptrDataType4' back from native representation
	*___ptrDataType4 = ____ptrDataType4_empty;

	// Marshaling of parameter '___ptrCollSeq5' back from native representation
	*___ptrCollSeq5 = ____ptrCollSeq5_empty;

	// Marshaling of parameter '___notNull6' back from native representation
	*___notNull6 = ____notNull6_empty;

	// Marshaling of parameter '___primaryKey7' back from native representation
	*___primaryKey7 = ____primaryKey7_empty;

	// Marshaling of parameter '___autoInc8' back from native representation
	*___autoInc8 = ____autoInc8_empty;

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_text(System.IntPtr)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_value_text_m3584550402 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_text", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_text'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_text16(System.IntPtr)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_value_text16_m734642400 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_text16'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_libversion()
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_libversion_m103677152 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_libversion", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_libversion'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_changes(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_changes_m2054051445 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_changes", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_changes'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_busy_timeout(System.IntPtr,System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_busy_timeout_m3830907368 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, int32_t ___ms1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_busy_timeout", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_busy_timeout'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ___ms1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_blob(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_blob_m3574368098 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, ByteU5BU5D_t4116647657* ___value2, int32_t ___nSize3, intptr_t ___nTransient4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_blob", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_blob'"));
		}
	}

	// Marshaling of parameter '___value2' to native representation
	uint8_t* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = reinterpret_cast<uint8_t*>((___value2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ____value2_marshaled, ___nSize3, ___nTransient4);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_double(System.IntPtr,System.Int32,System.Double)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_double_m4092852149 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, double ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, double);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_double", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_double'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_int(System.IntPtr,System.Int32,System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_int_m1714497249 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_int", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_int'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_int64(System.IntPtr,System.Int32,System.Int64)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_int64_m2953941672 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, int64_t ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int64_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_int64", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_int64'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_null(System.IntPtr,System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_null_m64291565 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_null", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_null'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_text(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_text_m3649328464 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, ByteU5BU5D_t4116647657* ___value2, int32_t ___nlen3, intptr_t ___pvReserved4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_text", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_text'"));
		}
	}

	// Marshaling of parameter '___value2' to native representation
	uint8_t* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = reinterpret_cast<uint8_t*>((___value2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ____value2_marshaled, ___nlen3, ___pvReserved4);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_parameter_count(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_parameter_count_m3425658776 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_parameter_count", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_parameter_count'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_count(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_column_count_m2076872247 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_count", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_count'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_step(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_step_m1516822508 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_step", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_step'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.Double Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_double(System.IntPtr,System.Int32)
extern "C"  double UnsafeNativeMethods_sqlite3_column_double_m1042061917 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_double", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_double'"));
		}
	}

	// Native function invocation
	double returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_int(System.IntPtr,System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_column_int_m3565378138 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_int", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_int'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int64 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_int64(System.IntPtr,System.Int32)
extern "C"  int64_t UnsafeNativeMethods_sqlite3_column_int64_m780049365 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_int64", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_int64'"));
		}
	}

	// Native function invocation
	int64_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_blob(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_column_blob_m3178067971 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_blob", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_blob'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_bytes(System.IntPtr,System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_column_bytes_m4173770185 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_bytes", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_bytes'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_type(System.IntPtr,System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_column_type_m3232121130 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_type", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_type'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_create_collation(System.IntPtr,System.Byte[],System.Int32,System.IntPtr,Mono.Data.Sqlite.SQLiteCollation)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_create_collation_m3660294722 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, ByteU5BU5D_t4116647657* ___strName1, int32_t ___nType2, intptr_t ___pvUser3, SQLiteCollation_t2922389035 * ___func4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_create_collation", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_create_collation'"));
		}
	}

	// Marshaling of parameter '___strName1' to native representation
	uint8_t* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = reinterpret_cast<uint8_t*>((___strName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___func4' to native representation
	Il2CppMethodPointer ____func4_marshaled = NULL;
	____func4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func4));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strName1_marshaled, ___nType2, ___pvUser3, ____func4_marshaled);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_blob(System.IntPtr)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_value_blob_m3125989879 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_blob", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_blob'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_bytes(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_value_bytes_m4249983591 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_bytes", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_bytes'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Double Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_double(System.IntPtr)
extern "C"  double UnsafeNativeMethods_sqlite3_value_double_m3767775324 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_double", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_double'"));
		}
	}

	// Native function invocation
	double returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Int64 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_int64(System.IntPtr)
extern "C"  int64_t UnsafeNativeMethods_sqlite3_value_int64_m568793785 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_int64", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_int64'"));
		}
	}

	// Native function invocation
	int64_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_type(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_value_type_m392562512 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_type", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_type'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_blob(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
extern "C"  void UnsafeNativeMethods_sqlite3_result_blob_m3235775100 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, ByteU5BU5D_t4116647657* ___value1, int32_t ___nSize2, intptr_t ___pvReserved3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_blob", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_blob'"));
		}
	}

	// Marshaling of parameter '___value1' to native representation
	uint8_t* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = reinterpret_cast<uint8_t*>((___value1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ____value1_marshaled, ___nSize2, ___pvReserved3);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_double(System.IntPtr,System.Double)
extern "C"  void UnsafeNativeMethods_sqlite3_result_double_m3114459021 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, double ___value1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, double);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_double", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_double'"));
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ___value1);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_error(System.IntPtr,System.Byte[],System.Int32)
extern "C"  void UnsafeNativeMethods_sqlite3_result_error_m1066557020 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, ByteU5BU5D_t4116647657* ___strErr1, int32_t ___nLen2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_error", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_error'"));
		}
	}

	// Marshaling of parameter '___strErr1' to native representation
	uint8_t* ____strErr1_marshaled = NULL;
	if (___strErr1 != NULL)
	{
		____strErr1_marshaled = reinterpret_cast<uint8_t*>((___strErr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ____strErr1_marshaled, ___nLen2);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_int64(System.IntPtr,System.Int64)
extern "C"  void UnsafeNativeMethods_sqlite3_result_int64_m1336636029 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, int64_t ___value1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int64_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_int64", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_int64'"));
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ___value1);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_null(System.IntPtr)
extern "C"  void UnsafeNativeMethods_sqlite3_result_null_m3599232391 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_null", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_null'"));
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_text(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
extern "C"  void UnsafeNativeMethods_sqlite3_result_text_m3737941061 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, ByteU5BU5D_t4116647657* ___value1, int32_t ___nLen2, intptr_t ___pvReserved3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_text", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_text'"));
		}
	}

	// Marshaling of parameter '___value1' to native representation
	uint8_t* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = reinterpret_cast<uint8_t*>((___value1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ____value1_marshaled, ___nLen2, ___pvReserved3);

}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_aggregate_context(System.IntPtr,System.Int32)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_aggregate_context_m1257140450 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, int32_t ___nBytes1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_aggregate_context", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_aggregate_context'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___nBytes1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_text16(System.IntPtr,System.Int32,System.String,System.Int32,System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_text16_m3032602632 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, String_t* ___value2, int32_t ___nlen3, intptr_t ___pvReserved4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, Il2CppChar*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_text16'"));
		}
	}

	// Marshaling of parameter '___value2' to native representation
	Il2CppChar* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = ___value2->get_address_of_start_char_1();
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ____value2_marshaled, ___nlen3, ___pvReserved4);

	return returnValue;
}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_error16(System.IntPtr,System.String,System.Int32)
extern "C"  void UnsafeNativeMethods_sqlite3_result_error16_m18639957 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, String_t* ___strName1, int32_t ___nLen2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_error16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_error16'"));
		}
	}

	// Marshaling of parameter '___strName1' to native representation
	Il2CppChar* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = ___strName1->get_address_of_start_char_1();
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ____strName1_marshaled, ___nLen2);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_text16(System.IntPtr,System.String,System.Int32,System.IntPtr)
extern "C"  void UnsafeNativeMethods_sqlite3_result_text16_m3270968340 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, String_t* ___strName1, int32_t ___nLen2, intptr_t ___pvReserved3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_text16'"));
		}
	}

	// Marshaling of parameter '___strName1' to native representation
	Il2CppChar* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = ___strName1->get_address_of_start_char_1();
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ____strName1_marshaled, ___nLen2, ___pvReserved3);

}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_key(System.IntPtr,System.Byte[],System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_key_m889750284 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, ByteU5BU5D_t4116647657* ___key1, int32_t ___keylen2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_key", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_key'"));
		}
	}

	// Marshaling of parameter '___key1' to native representation
	uint8_t* ____key1_marshaled = NULL;
	if (___key1 != NULL)
	{
		____key1_marshaled = reinterpret_cast<uint8_t*>((___key1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____key1_marshaled, ___keylen2);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_update_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteUpdateCallback,System.IntPtr)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_update_hook_m3994016578 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, SQLiteUpdateCallback_t3929343441 * ___func1, intptr_t ___pvUser2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_update_hook", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_update_hook'"));
		}
	}

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ____func1_marshaled, ___pvUser2);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_commit_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteCommitCallback,System.IntPtr)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_commit_hook_m75929880 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, SQLiteCommitCallback_t583925460 * ___func1, intptr_t ___pvUser2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_commit_hook", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_commit_hook'"));
		}
	}

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ____func1_marshaled, ___pvUser2);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_rollback_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteRollbackCallback,System.IntPtr)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_rollback_hook_m2390921629 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, SQLiteRollbackCallback_t3445264418 * ___func1, intptr_t ___pvUser2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_rollback_hook", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_rollback_hook'"));
		}
	}

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ____func1_marshaled, ___pvUser2);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_next_stmt(System.IntPtr,System.IntPtr)
extern "C"  intptr_t UnsafeNativeMethods_sqlite3_next_stmt_m1131400450 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, intptr_t ___stmt1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_next_stmt", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_next_stmt'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ___stmt1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_exec(System.IntPtr,System.Byte[],System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_exec_m1538089573 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, ByteU5BU5D_t4116647657* ___strSql1, intptr_t ___pvCallback2, intptr_t ___pvParam3, intptr_t* ___errMsg4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, intptr_t, intptr_t, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_exec", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_exec'"));
		}
	}

	// Marshaling of parameter '___strSql1' to native representation
	uint8_t* ____strSql1_marshaled = NULL;
	if (___strSql1 != NULL)
	{
		____strSql1_marshaled = reinterpret_cast<uint8_t*>((___strSql1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___errMsg4' to native representation
	intptr_t ____errMsg4_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strSql1_marshaled, ___pvCallback2, ___pvParam3, (&____errMsg4_empty));

	// Marshaling of parameter '___errMsg4' back from native representation
	*___errMsg4 = ____errMsg4_empty;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
