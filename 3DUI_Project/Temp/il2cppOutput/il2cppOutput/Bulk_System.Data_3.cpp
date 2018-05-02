#include "il2cpp-config.h"

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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Data.XmlSchemaWriter
struct XmlSchemaWriter_t4200114175;
// System.Data.DataSet
struct DataSet_t3773542243;
// System.Xml.XmlWriter
struct XmlWriter_t127905479;
// System.Data.DataTableCollection
struct DataTableCollection_t2837452619;
// System.Data.DataRelationCollection
struct DataRelationCollection_t3198980347;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Data.PropertyCollection
struct PropertyCollection_t3446977085;
// System.Data.DataTable
struct DataTable_t1734486485;
// System.Data.DataRelation
struct DataRelation_t2257224951;
// System.Data.DataTable[]
struct DataTableU5BU5D_t3044315960;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t2648313166;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1624492310;
// System.Data.DataColumnCollection
struct DataColumnCollection_t479471535;
// System.Data.DataColumn
struct DataColumn_t2485786120;
// System.Collections.ICollection
struct ICollection_t3904884886;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Data.ConstraintCollection
struct ConstraintCollection_t259828334;
// System.Data.UniqueConstraint
struct UniqueConstraint_t841719017;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3317819609;
// System.Data.Constraint
struct Constraint_t2778807214;
// System.Type
struct Type_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;
// System.MonoTODOAttribute
struct MonoTODOAttribute_t4131080587;
// System.Attribute
struct Attribute_t861562559;
// System.Collections.Generic.List`1<System.Data.DataTable>
struct List_1_t3206561227;
// System.Collections.Generic.List`1<System.Data.DataRelation>
struct List_1_t3729299693;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Data.DataRowCollection
struct DataRowCollection_t3217300826;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
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
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t3489911826;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t417719465;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t3314986516;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.ComponentModel.ISite
struct ISite_t4006303512;
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
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Data.Common.Index
struct Index_t4155063583;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t1703970447;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t2526189854;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t1445784527;
// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t645599195;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t1903229978;
// System.Data.Common.DataContainer
struct DataContainer_t2712869782;
// System.Data.DataRowBuilder
struct DataRowBuilder_t3193098686;
// System.Data.Common.RecordCache
struct RecordCache_t2814565283;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4164928659;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3122106530;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t1943750078;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t1758895939;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t4233335338;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern RuntimeClass* Hashtable_t1853889766_il2cpp_TypeInfo_var;
extern RuntimeClass* DataTableU5BU5D_t3044315960_il2cpp_TypeInfo_var;
extern RuntimeClass* DataRelationU5BU5D_t2648313166_il2cpp_TypeInfo_var;
extern const uint32_t XmlSchemaWriter__ctor_m80241102_MetadataUsageId;
extern RuntimeClass* PropertyCollection_t3446977085_il2cpp_TypeInfo_var;
extern const uint32_t XmlSchemaWriter__ctor_m3899701125_MetadataUsageId;
extern RuntimeClass* XmlSchemaWriter_t4200114175_il2cpp_TypeInfo_var;
extern const uint32_t XmlSchemaWriter_WriteXmlSchema_m1728258581_MetadataUsageId;
extern const uint32_t XmlSchemaWriter_WriteXmlSchema_m2398581613_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3594632370;
extern const uint32_t XmlSchemaWriter_get_ConstraintPrefix_m2906567781_MetadataUsageId;
extern RuntimeClass* ListDictionary_t1624492310_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* DataColumn_t2485786120_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlHelper_t906262798_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* DataRelation_t2257224951_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3455563736;
extern String_t* _stringLiteral2397802450;
extern String_t* _stringLiteral1569427300;
extern String_t* _stringLiteral3454449607;
extern String_t* _stringLiteral973338492;
extern String_t* _stringLiteral3929236445;
extern String_t* _stringLiteral2829469855;
extern String_t* _stringLiteral1579746915;
extern String_t* _stringLiteral832805569;
extern String_t* _stringLiteral3557812802;
extern String_t* _stringLiteral1176523726;
extern String_t* _stringLiteral2706799785;
extern String_t* _stringLiteral902390592;
extern String_t* _stringLiteral763438049;
extern String_t* _stringLiteral2392128703;
extern String_t* _stringLiteral3207129801;
extern String_t* _stringLiteral3820675233;
extern String_t* _stringLiteral4101407196;
extern const uint32_t XmlSchemaWriter_WriteSchema_m4254253614_MetadataUsageId;
extern String_t* _stringLiteral4059539929;
extern String_t* _stringLiteral62725243;
extern String_t* _stringLiteral4125990780;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral3123811713;
extern String_t* _stringLiteral1531930854;
extern String_t* _stringLiteral2500701358;
extern String_t* _stringLiteral2444421609;
extern String_t* _stringLiteral2342829633;
extern String_t* _stringLiteral837243573;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral660438115;
extern String_t* _stringLiteral256783401;
extern String_t* _stringLiteral133510650;
extern String_t* _stringLiteral1102688753;
extern String_t* _stringLiteral2379694236;
extern const uint32_t XmlSchemaWriter_WriteDataSetElement_m1619178635_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral951075993;
extern String_t* _stringLiteral3215840460;
extern String_t* _stringLiteral430703268;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral4093622601;
extern String_t* _stringLiteral3392650531;
extern const uint32_t XmlSchemaWriter_WriteDataRelationAnnotation_m3718815923_MetadataUsageId;
extern RuntimeClass* Constraint_t2778807214_il2cpp_TypeInfo_var;
extern RuntimeClass* UniqueConstraint_t841719017_il2cpp_TypeInfo_var;
extern RuntimeClass* ForeignKeyConstraint_t3489911826_il2cpp_TypeInfo_var;
extern const uint32_t XmlSchemaWriter_WriteConstraints_m3401741529_MetadataUsageId;
extern String_t* _stringLiteral379716803;
extern String_t* _stringLiteral3452614641;
extern String_t* _stringLiteral2614094554;
extern String_t* _stringLiteral3094911024;
extern String_t* _stringLiteral3977229295;
extern String_t* _stringLiteral2333584123;
extern String_t* _stringLiteral1057238065;
extern String_t* _stringLiteral3110369597;
extern String_t* _stringLiteral3452614624;
extern const uint32_t XmlSchemaWriter_AddUniqueConstraints_m2284359376_MetadataUsageId;
extern String_t* _stringLiteral1608497597;
extern String_t* _stringLiteral1945301054;
extern String_t* _stringLiteral224753216;
extern String_t* _stringLiteral2076657817;
extern const uint32_t XmlSchemaWriter_AddForeignKeys_m3748968575_MetadataUsageId;
extern const uint32_t XmlSchemaWriter_CheckExtendedPropertyExists_m3325967644_MetadataUsageId;
extern RuntimeClass* DictionaryEntry_t3123975638_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlConvert_t1981561327_il2cpp_TypeInfo_var;
extern const uint32_t XmlSchemaWriter_AddExtendedPropertyAttributes_m1125702825_MetadataUsageId;
extern const uint32_t XmlSchemaWriter_WriteTableElement_m4190275309_MetadataUsageId;
extern String_t* _stringLiteral2185284321;
extern String_t* _stringLiteral2264397076;
extern String_t* _stringLiteral3378744793;
extern String_t* _stringLiteral1610623306;
extern String_t* _stringLiteral2838662761;
extern String_t* _stringLiteral3810116474;
extern const uint32_t XmlSchemaWriter_WriteTableType_m1855352219_MetadataUsageId;
extern const RuntimeType* String_t_0_0_0_var;
extern const RuntimeType* Char_t3634460470_0_0_0_var;
extern RuntimeClass* XmlConstants_t798939411_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3247624226;
extern String_t* _stringLiteral1811025211;
extern String_t* _stringLiteral1615082796;
extern String_t* _stringLiteral761459563;
extern String_t* _stringLiteral1948332219;
extern String_t* _stringLiteral827625748;
extern String_t* _stringLiteral3243520166;
extern String_t* _stringLiteral260118666;
extern const uint32_t XmlSchemaWriter_WriteTableTypeParticles_m3120939737_MetadataUsageId;
extern const uint32_t XmlSchemaWriter_WriteChildRelations_m1239162713_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4158421234;
extern String_t* _stringLiteral1639258570;
extern String_t* _stringLiteral228995225;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral1700774236;
extern String_t* _stringLiteral1046445807;
extern const uint32_t XmlSchemaWriter_WriteTableAttributes_m1460086314_MetadataUsageId;
extern String_t* _stringLiteral1113390247;
extern String_t* _stringLiteral1564059052;
extern String_t* _stringLiteral1329154644;
extern String_t* _stringLiteral3493618073;
extern const uint32_t XmlSchemaWriter_WriteSimpleType_m2878921502_MetadataUsageId;
extern const uint32_t XmlSchemaWriter_CheckNamespace_m2715501895_MetadataUsageId;
extern String_t* _stringLiteral883985965;
extern const uint32_t XmlSchemaWriter_HandleExternalNamespace_m2773657577_MetadataUsageId;
extern const RuntimeType* TimeSpan_t881159249_0_0_0_var;
extern const RuntimeType* Uri_t100236324_0_0_0_var;
extern const RuntimeType* ByteU5BU5D_t4116647657_0_0_0_var;
extern const RuntimeType* XmlQualifiedName_t2760654312_0_0_0_var;
extern const uint32_t XmlSchemaWriter_MapType_m282308051_MetadataUsageId;
extern const uint32_t XmlHelper__cctor_m730103126_MetadataUsageId;
extern const uint32_t XmlHelper_Decode_m2896529598_MetadataUsageId;
extern const uint32_t XmlHelper_Encode_m327266007_MetadataUsageId;
extern RuntimeClass* Enumerator_t800837808_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3206561227_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1089387472_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m938926476_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1588245369_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3759751087_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3747673379_RuntimeMethod_var;
extern const RuntimeMethod* List_1_CopyTo_m1073910440_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3576787496_RuntimeMethod_var;
extern const RuntimeMethod* List_1_CopyTo_m984258531_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2004762968_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2716001358_RuntimeMethod_var;
extern String_t* _stringLiteral978279152;
extern String_t* _stringLiteral3930844835;
extern String_t* _stringLiteral3098799694;
extern const uint32_t XmlTableWriter_WriteTables_m1699440807_MetadataUsageId;
extern const uint32_t XmlTableWriter_WriteTableList_m2696637544_MetadataUsageId;

struct DataTableU5BU5D_t3044315960;
struct DataRelationU5BU5D_t2648313166;
struct DataColumnU5BU5D_t3317819609;
struct CharU5BU5D_t3528271667;


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
#ifndef INTERNALDATACOLLECTIONBASE_T224885569_H
#define INTERNALDATACOLLECTIONBASE_T224885569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InternalDataCollectionBase
struct  InternalDataCollectionBase_t224885569  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Data.InternalDataCollectionBase::list
	ArrayList_t2718874744 * ___list_0;
	// System.Boolean System.Data.InternalDataCollectionBase::synchronized
	bool ___synchronized_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t224885569, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_synchronized_1() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t224885569, ___synchronized_1)); }
	inline bool get_synchronized_1() const { return ___synchronized_1; }
	inline bool* get_address_of_synchronized_1() { return &___synchronized_1; }
	inline void set_synchronized_1(bool value)
	{
		___synchronized_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALDATACOLLECTIONBASE_T224885569_H
#ifndef LIST_1_T3729299693_H
#define LIST_1_T3729299693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Data.DataRelation>
struct  List_1_t3729299693  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DataRelationU5BU5D_t2648313166* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3729299693, ____items_1)); }
	inline DataRelationU5BU5D_t2648313166* get__items_1() const { return ____items_1; }
	inline DataRelationU5BU5D_t2648313166** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DataRelationU5BU5D_t2648313166* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3729299693, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3729299693, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3729299693_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DataRelationU5BU5D_t2648313166* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3729299693_StaticFields, ___EmptyArray_4)); }
	inline DataRelationU5BU5D_t2648313166* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DataRelationU5BU5D_t2648313166** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DataRelationU5BU5D_t2648313166* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3729299693_H
#ifndef DATARELATION_T2257224951_H
#define DATARELATION_T2257224951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelation
struct  DataRelation_t2257224951  : public RuntimeObject
{
public:
	// System.Data.DataSet System.Data.DataRelation::dataSet
	DataSet_t3773542243 * ___dataSet_0;
	// System.String System.Data.DataRelation::relationName
	String_t* ___relationName_1;
	// System.Data.UniqueConstraint System.Data.DataRelation::parentKeyConstraint
	UniqueConstraint_t841719017 * ___parentKeyConstraint_2;
	// System.Data.ForeignKeyConstraint System.Data.DataRelation::childKeyConstraint
	ForeignKeyConstraint_t3489911826 * ___childKeyConstraint_3;
	// System.Data.DataColumn[] System.Data.DataRelation::parentColumns
	DataColumnU5BU5D_t3317819609* ___parentColumns_4;
	// System.Data.DataColumn[] System.Data.DataRelation::childColumns
	DataColumnU5BU5D_t3317819609* ___childColumns_5;
	// System.Boolean System.Data.DataRelation::nested
	bool ___nested_6;
	// System.Boolean System.Data.DataRelation::createConstraints
	bool ___createConstraints_7;
	// System.Boolean System.Data.DataRelation::initFinished
	bool ___initFinished_8;
	// System.Data.PropertyCollection System.Data.DataRelation::extendedProperties
	PropertyCollection_t3446977085 * ___extendedProperties_9;
	// System.String System.Data.DataRelation::_parentTableNameSpace
	String_t* ____parentTableNameSpace_10;
	// System.String System.Data.DataRelation::_childTableNameSpace
	String_t* ____childTableNameSpace_11;

public:
	inline static int32_t get_offset_of_dataSet_0() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___dataSet_0)); }
	inline DataSet_t3773542243 * get_dataSet_0() const { return ___dataSet_0; }
	inline DataSet_t3773542243 ** get_address_of_dataSet_0() { return &___dataSet_0; }
	inline void set_dataSet_0(DataSet_t3773542243 * value)
	{
		___dataSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_0), value);
	}

	inline static int32_t get_offset_of_relationName_1() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___relationName_1)); }
	inline String_t* get_relationName_1() const { return ___relationName_1; }
	inline String_t** get_address_of_relationName_1() { return &___relationName_1; }
	inline void set_relationName_1(String_t* value)
	{
		___relationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___relationName_1), value);
	}

	inline static int32_t get_offset_of_parentKeyConstraint_2() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___parentKeyConstraint_2)); }
	inline UniqueConstraint_t841719017 * get_parentKeyConstraint_2() const { return ___parentKeyConstraint_2; }
	inline UniqueConstraint_t841719017 ** get_address_of_parentKeyConstraint_2() { return &___parentKeyConstraint_2; }
	inline void set_parentKeyConstraint_2(UniqueConstraint_t841719017 * value)
	{
		___parentKeyConstraint_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentKeyConstraint_2), value);
	}

	inline static int32_t get_offset_of_childKeyConstraint_3() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___childKeyConstraint_3)); }
	inline ForeignKeyConstraint_t3489911826 * get_childKeyConstraint_3() const { return ___childKeyConstraint_3; }
	inline ForeignKeyConstraint_t3489911826 ** get_address_of_childKeyConstraint_3() { return &___childKeyConstraint_3; }
	inline void set_childKeyConstraint_3(ForeignKeyConstraint_t3489911826 * value)
	{
		___childKeyConstraint_3 = value;
		Il2CppCodeGenWriteBarrier((&___childKeyConstraint_3), value);
	}

	inline static int32_t get_offset_of_parentColumns_4() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___parentColumns_4)); }
	inline DataColumnU5BU5D_t3317819609* get_parentColumns_4() const { return ___parentColumns_4; }
	inline DataColumnU5BU5D_t3317819609** get_address_of_parentColumns_4() { return &___parentColumns_4; }
	inline void set_parentColumns_4(DataColumnU5BU5D_t3317819609* value)
	{
		___parentColumns_4 = value;
		Il2CppCodeGenWriteBarrier((&___parentColumns_4), value);
	}

	inline static int32_t get_offset_of_childColumns_5() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___childColumns_5)); }
	inline DataColumnU5BU5D_t3317819609* get_childColumns_5() const { return ___childColumns_5; }
	inline DataColumnU5BU5D_t3317819609** get_address_of_childColumns_5() { return &___childColumns_5; }
	inline void set_childColumns_5(DataColumnU5BU5D_t3317819609* value)
	{
		___childColumns_5 = value;
		Il2CppCodeGenWriteBarrier((&___childColumns_5), value);
	}

	inline static int32_t get_offset_of_nested_6() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___nested_6)); }
	inline bool get_nested_6() const { return ___nested_6; }
	inline bool* get_address_of_nested_6() { return &___nested_6; }
	inline void set_nested_6(bool value)
	{
		___nested_6 = value;
	}

	inline static int32_t get_offset_of_createConstraints_7() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___createConstraints_7)); }
	inline bool get_createConstraints_7() const { return ___createConstraints_7; }
	inline bool* get_address_of_createConstraints_7() { return &___createConstraints_7; }
	inline void set_createConstraints_7(bool value)
	{
		___createConstraints_7 = value;
	}

	inline static int32_t get_offset_of_initFinished_8() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___initFinished_8)); }
	inline bool get_initFinished_8() const { return ___initFinished_8; }
	inline bool* get_address_of_initFinished_8() { return &___initFinished_8; }
	inline void set_initFinished_8(bool value)
	{
		___initFinished_8 = value;
	}

	inline static int32_t get_offset_of_extendedProperties_9() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___extendedProperties_9)); }
	inline PropertyCollection_t3446977085 * get_extendedProperties_9() const { return ___extendedProperties_9; }
	inline PropertyCollection_t3446977085 ** get_address_of_extendedProperties_9() { return &___extendedProperties_9; }
	inline void set_extendedProperties_9(PropertyCollection_t3446977085 * value)
	{
		___extendedProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___extendedProperties_9), value);
	}

	inline static int32_t get_offset_of__parentTableNameSpace_10() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ____parentTableNameSpace_10)); }
	inline String_t* get__parentTableNameSpace_10() const { return ____parentTableNameSpace_10; }
	inline String_t** get_address_of__parentTableNameSpace_10() { return &____parentTableNameSpace_10; }
	inline void set__parentTableNameSpace_10(String_t* value)
	{
		____parentTableNameSpace_10 = value;
		Il2CppCodeGenWriteBarrier((&____parentTableNameSpace_10), value);
	}

	inline static int32_t get_offset_of__childTableNameSpace_11() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ____childTableNameSpace_11)); }
	inline String_t* get__childTableNameSpace_11() const { return ____childTableNameSpace_11; }
	inline String_t** get_address_of__childTableNameSpace_11() { return &____childTableNameSpace_11; }
	inline void set__childTableNameSpace_11(String_t* value)
	{
		____childTableNameSpace_11 = value;
		Il2CppCodeGenWriteBarrier((&____childTableNameSpace_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATION_T2257224951_H
#ifndef LIST_1_T3206561227_H
#define LIST_1_T3206561227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Data.DataTable>
struct  List_1_t3206561227  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DataTableU5BU5D_t3044315960* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3206561227, ____items_1)); }
	inline DataTableU5BU5D_t3044315960* get__items_1() const { return ____items_1; }
	inline DataTableU5BU5D_t3044315960** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DataTableU5BU5D_t3044315960* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3206561227, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3206561227, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3206561227_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DataTableU5BU5D_t3044315960* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3206561227_StaticFields, ___EmptyArray_4)); }
	inline DataTableU5BU5D_t3044315960* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DataTableU5BU5D_t3044315960** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DataTableU5BU5D_t3044315960* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3206561227_H
#ifndef LISTDICTIONARY_T1624492310_H
#define LISTDICTIONARY_T1624492310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1624492310  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t417719465 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___head_2)); }
	inline DictionaryNode_t417719465 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t417719465 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t417719465 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T1624492310_H
#ifndef XMLTABLEWRITER_T2048085353_H
#define XMLTABLEWRITER_T2048085353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XmlTableWriter
struct  XmlTableWriter_t2048085353  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTABLEWRITER_T2048085353_H
#ifndef XMLHELPER_T906262798_H
#define XMLHELPER_T906262798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XmlHelper
struct  XmlHelper_t906262798  : public RuntimeObject
{
public:

public:
};

struct XmlHelper_t906262798_StaticFields
{
public:
	// System.Collections.Hashtable XmlHelper::localSchemaNameCache
	Hashtable_t1853889766 * ___localSchemaNameCache_0;
	// System.Collections.Hashtable XmlHelper::localXmlNameCache
	Hashtable_t1853889766 * ___localXmlNameCache_1;

public:
	inline static int32_t get_offset_of_localSchemaNameCache_0() { return static_cast<int32_t>(offsetof(XmlHelper_t906262798_StaticFields, ___localSchemaNameCache_0)); }
	inline Hashtable_t1853889766 * get_localSchemaNameCache_0() const { return ___localSchemaNameCache_0; }
	inline Hashtable_t1853889766 ** get_address_of_localSchemaNameCache_0() { return &___localSchemaNameCache_0; }
	inline void set_localSchemaNameCache_0(Hashtable_t1853889766 * value)
	{
		___localSchemaNameCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___localSchemaNameCache_0), value);
	}

	inline static int32_t get_offset_of_localXmlNameCache_1() { return static_cast<int32_t>(offsetof(XmlHelper_t906262798_StaticFields, ___localXmlNameCache_1)); }
	inline Hashtable_t1853889766 * get_localXmlNameCache_1() const { return ___localXmlNameCache_1; }
	inline Hashtable_t1853889766 ** get_address_of_localXmlNameCache_1() { return &___localXmlNameCache_1; }
	inline void set_localXmlNameCache_1(Hashtable_t1853889766 * value)
	{
		___localXmlNameCache_1 = value;
		Il2CppCodeGenWriteBarrier((&___localXmlNameCache_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLHELPER_T906262798_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef XMLCONSTANTS_T798939411_H
#define XMLCONSTANTS_T798939411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlConstants
struct  XmlConstants_t798939411  : public RuntimeObject
{
public:

public:
};

struct XmlConstants_t798939411_StaticFields
{
public:
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnString
	XmlQualifiedName_t2760654312 * ___QnString_0;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnShort
	XmlQualifiedName_t2760654312 * ___QnShort_1;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnInt
	XmlQualifiedName_t2760654312 * ___QnInt_2;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnLong
	XmlQualifiedName_t2760654312 * ___QnLong_3;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnBoolean
	XmlQualifiedName_t2760654312 * ___QnBoolean_4;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnUnsignedByte
	XmlQualifiedName_t2760654312 * ___QnUnsignedByte_5;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnChar
	XmlQualifiedName_t2760654312 * ___QnChar_6;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnDateTime
	XmlQualifiedName_t2760654312 * ___QnDateTime_7;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnDecimal
	XmlQualifiedName_t2760654312 * ___QnDecimal_8;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnDouble
	XmlQualifiedName_t2760654312 * ___QnDouble_9;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnSbyte
	XmlQualifiedName_t2760654312 * ___QnSbyte_10;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnFloat
	XmlQualifiedName_t2760654312 * ___QnFloat_11;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnDuration
	XmlQualifiedName_t2760654312 * ___QnDuration_12;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnUnsignedShort
	XmlQualifiedName_t2760654312 * ___QnUnsignedShort_13;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnUnsignedInt
	XmlQualifiedName_t2760654312 * ___QnUnsignedInt_14;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnUnsignedLong
	XmlQualifiedName_t2760654312 * ___QnUnsignedLong_15;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnUri
	XmlQualifiedName_t2760654312 * ___QnUri_16;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnBase64Binary
	XmlQualifiedName_t2760654312 * ___QnBase64Binary_17;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnXmlQualifiedName
	XmlQualifiedName_t2760654312 * ___QnXmlQualifiedName_18;

public:
	inline static int32_t get_offset_of_QnString_0() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnString_0)); }
	inline XmlQualifiedName_t2760654312 * get_QnString_0() const { return ___QnString_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnString_0() { return &___QnString_0; }
	inline void set_QnString_0(XmlQualifiedName_t2760654312 * value)
	{
		___QnString_0 = value;
		Il2CppCodeGenWriteBarrier((&___QnString_0), value);
	}

	inline static int32_t get_offset_of_QnShort_1() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnShort_1)); }
	inline XmlQualifiedName_t2760654312 * get_QnShort_1() const { return ___QnShort_1; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnShort_1() { return &___QnShort_1; }
	inline void set_QnShort_1(XmlQualifiedName_t2760654312 * value)
	{
		___QnShort_1 = value;
		Il2CppCodeGenWriteBarrier((&___QnShort_1), value);
	}

	inline static int32_t get_offset_of_QnInt_2() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnInt_2)); }
	inline XmlQualifiedName_t2760654312 * get_QnInt_2() const { return ___QnInt_2; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnInt_2() { return &___QnInt_2; }
	inline void set_QnInt_2(XmlQualifiedName_t2760654312 * value)
	{
		___QnInt_2 = value;
		Il2CppCodeGenWriteBarrier((&___QnInt_2), value);
	}

	inline static int32_t get_offset_of_QnLong_3() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnLong_3)); }
	inline XmlQualifiedName_t2760654312 * get_QnLong_3() const { return ___QnLong_3; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnLong_3() { return &___QnLong_3; }
	inline void set_QnLong_3(XmlQualifiedName_t2760654312 * value)
	{
		___QnLong_3 = value;
		Il2CppCodeGenWriteBarrier((&___QnLong_3), value);
	}

	inline static int32_t get_offset_of_QnBoolean_4() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnBoolean_4)); }
	inline XmlQualifiedName_t2760654312 * get_QnBoolean_4() const { return ___QnBoolean_4; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnBoolean_4() { return &___QnBoolean_4; }
	inline void set_QnBoolean_4(XmlQualifiedName_t2760654312 * value)
	{
		___QnBoolean_4 = value;
		Il2CppCodeGenWriteBarrier((&___QnBoolean_4), value);
	}

	inline static int32_t get_offset_of_QnUnsignedByte_5() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnUnsignedByte_5)); }
	inline XmlQualifiedName_t2760654312 * get_QnUnsignedByte_5() const { return ___QnUnsignedByte_5; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnUnsignedByte_5() { return &___QnUnsignedByte_5; }
	inline void set_QnUnsignedByte_5(XmlQualifiedName_t2760654312 * value)
	{
		___QnUnsignedByte_5 = value;
		Il2CppCodeGenWriteBarrier((&___QnUnsignedByte_5), value);
	}

	inline static int32_t get_offset_of_QnChar_6() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnChar_6)); }
	inline XmlQualifiedName_t2760654312 * get_QnChar_6() const { return ___QnChar_6; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnChar_6() { return &___QnChar_6; }
	inline void set_QnChar_6(XmlQualifiedName_t2760654312 * value)
	{
		___QnChar_6 = value;
		Il2CppCodeGenWriteBarrier((&___QnChar_6), value);
	}

	inline static int32_t get_offset_of_QnDateTime_7() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnDateTime_7)); }
	inline XmlQualifiedName_t2760654312 * get_QnDateTime_7() const { return ___QnDateTime_7; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDateTime_7() { return &___QnDateTime_7; }
	inline void set_QnDateTime_7(XmlQualifiedName_t2760654312 * value)
	{
		___QnDateTime_7 = value;
		Il2CppCodeGenWriteBarrier((&___QnDateTime_7), value);
	}

	inline static int32_t get_offset_of_QnDecimal_8() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnDecimal_8)); }
	inline XmlQualifiedName_t2760654312 * get_QnDecimal_8() const { return ___QnDecimal_8; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDecimal_8() { return &___QnDecimal_8; }
	inline void set_QnDecimal_8(XmlQualifiedName_t2760654312 * value)
	{
		___QnDecimal_8 = value;
		Il2CppCodeGenWriteBarrier((&___QnDecimal_8), value);
	}

	inline static int32_t get_offset_of_QnDouble_9() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnDouble_9)); }
	inline XmlQualifiedName_t2760654312 * get_QnDouble_9() const { return ___QnDouble_9; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDouble_9() { return &___QnDouble_9; }
	inline void set_QnDouble_9(XmlQualifiedName_t2760654312 * value)
	{
		___QnDouble_9 = value;
		Il2CppCodeGenWriteBarrier((&___QnDouble_9), value);
	}

	inline static int32_t get_offset_of_QnSbyte_10() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnSbyte_10)); }
	inline XmlQualifiedName_t2760654312 * get_QnSbyte_10() const { return ___QnSbyte_10; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnSbyte_10() { return &___QnSbyte_10; }
	inline void set_QnSbyte_10(XmlQualifiedName_t2760654312 * value)
	{
		___QnSbyte_10 = value;
		Il2CppCodeGenWriteBarrier((&___QnSbyte_10), value);
	}

	inline static int32_t get_offset_of_QnFloat_11() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnFloat_11)); }
	inline XmlQualifiedName_t2760654312 * get_QnFloat_11() const { return ___QnFloat_11; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnFloat_11() { return &___QnFloat_11; }
	inline void set_QnFloat_11(XmlQualifiedName_t2760654312 * value)
	{
		___QnFloat_11 = value;
		Il2CppCodeGenWriteBarrier((&___QnFloat_11), value);
	}

	inline static int32_t get_offset_of_QnDuration_12() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnDuration_12)); }
	inline XmlQualifiedName_t2760654312 * get_QnDuration_12() const { return ___QnDuration_12; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDuration_12() { return &___QnDuration_12; }
	inline void set_QnDuration_12(XmlQualifiedName_t2760654312 * value)
	{
		___QnDuration_12 = value;
		Il2CppCodeGenWriteBarrier((&___QnDuration_12), value);
	}

	inline static int32_t get_offset_of_QnUnsignedShort_13() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnUnsignedShort_13)); }
	inline XmlQualifiedName_t2760654312 * get_QnUnsignedShort_13() const { return ___QnUnsignedShort_13; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnUnsignedShort_13() { return &___QnUnsignedShort_13; }
	inline void set_QnUnsignedShort_13(XmlQualifiedName_t2760654312 * value)
	{
		___QnUnsignedShort_13 = value;
		Il2CppCodeGenWriteBarrier((&___QnUnsignedShort_13), value);
	}

	inline static int32_t get_offset_of_QnUnsignedInt_14() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnUnsignedInt_14)); }
	inline XmlQualifiedName_t2760654312 * get_QnUnsignedInt_14() const { return ___QnUnsignedInt_14; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnUnsignedInt_14() { return &___QnUnsignedInt_14; }
	inline void set_QnUnsignedInt_14(XmlQualifiedName_t2760654312 * value)
	{
		___QnUnsignedInt_14 = value;
		Il2CppCodeGenWriteBarrier((&___QnUnsignedInt_14), value);
	}

	inline static int32_t get_offset_of_QnUnsignedLong_15() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnUnsignedLong_15)); }
	inline XmlQualifiedName_t2760654312 * get_QnUnsignedLong_15() const { return ___QnUnsignedLong_15; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnUnsignedLong_15() { return &___QnUnsignedLong_15; }
	inline void set_QnUnsignedLong_15(XmlQualifiedName_t2760654312 * value)
	{
		___QnUnsignedLong_15 = value;
		Il2CppCodeGenWriteBarrier((&___QnUnsignedLong_15), value);
	}

	inline static int32_t get_offset_of_QnUri_16() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnUri_16)); }
	inline XmlQualifiedName_t2760654312 * get_QnUri_16() const { return ___QnUri_16; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnUri_16() { return &___QnUri_16; }
	inline void set_QnUri_16(XmlQualifiedName_t2760654312 * value)
	{
		___QnUri_16 = value;
		Il2CppCodeGenWriteBarrier((&___QnUri_16), value);
	}

	inline static int32_t get_offset_of_QnBase64Binary_17() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnBase64Binary_17)); }
	inline XmlQualifiedName_t2760654312 * get_QnBase64Binary_17() const { return ___QnBase64Binary_17; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnBase64Binary_17() { return &___QnBase64Binary_17; }
	inline void set_QnBase64Binary_17(XmlQualifiedName_t2760654312 * value)
	{
		___QnBase64Binary_17 = value;
		Il2CppCodeGenWriteBarrier((&___QnBase64Binary_17), value);
	}

	inline static int32_t get_offset_of_QnXmlQualifiedName_18() { return static_cast<int32_t>(offsetof(XmlConstants_t798939411_StaticFields, ___QnXmlQualifiedName_18)); }
	inline XmlQualifiedName_t2760654312 * get_QnXmlQualifiedName_18() const { return ___QnXmlQualifiedName_18; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXmlQualifiedName_18() { return &___QnXmlQualifiedName_18; }
	inline void set_QnXmlQualifiedName_18(XmlQualifiedName_t2760654312 * value)
	{
		___QnXmlQualifiedName_18 = value;
		Il2CppCodeGenWriteBarrier((&___QnXmlQualifiedName_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLCONSTANTS_T798939411_H
#ifndef XMLSCHEMAWRITER_T4200114175_H
#define XMLSCHEMAWRITER_T4200114175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlSchemaWriter
struct  XmlSchemaWriter_t4200114175  : public RuntimeObject
{
public:
	// System.Xml.XmlWriter System.Data.XmlSchemaWriter::w
	XmlWriter_t127905479 * ___w_0;
	// System.Data.DataTable[] System.Data.XmlSchemaWriter::tables
	DataTableU5BU5D_t3044315960* ___tables_1;
	// System.Data.DataRelation[] System.Data.XmlSchemaWriter::relations
	DataRelationU5BU5D_t2648313166* ___relations_2;
	// System.String System.Data.XmlSchemaWriter::mainDataTable
	String_t* ___mainDataTable_3;
	// System.String System.Data.XmlSchemaWriter::dataSetName
	String_t* ___dataSetName_4;
	// System.String System.Data.XmlSchemaWriter::dataSetNamespace
	String_t* ___dataSetNamespace_5;
	// System.Data.PropertyCollection System.Data.XmlSchemaWriter::dataSetProperties
	PropertyCollection_t3446977085 * ___dataSetProperties_6;
	// System.Globalization.CultureInfo System.Data.XmlSchemaWriter::dataSetLocale
	CultureInfo_t4157843068 * ___dataSetLocale_7;
	// System.Collections.ArrayList System.Data.XmlSchemaWriter::globalTypeTables
	ArrayList_t2718874744 * ___globalTypeTables_8;
	// System.Collections.Hashtable System.Data.XmlSchemaWriter::additionalNamespaces
	Hashtable_t1853889766 * ___additionalNamespaces_9;
	// System.Collections.ArrayList System.Data.XmlSchemaWriter::annotation
	ArrayList_t2718874744 * ___annotation_10;

public:
	inline static int32_t get_offset_of_w_0() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t4200114175, ___w_0)); }
	inline XmlWriter_t127905479 * get_w_0() const { return ___w_0; }
	inline XmlWriter_t127905479 ** get_address_of_w_0() { return &___w_0; }
	inline void set_w_0(XmlWriter_t127905479 * value)
	{
		___w_0 = value;
		Il2CppCodeGenWriteBarrier((&___w_0), value);
	}

	inline static int32_t get_offset_of_tables_1() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t4200114175, ___tables_1)); }
	inline DataTableU5BU5D_t3044315960* get_tables_1() const { return ___tables_1; }
	inline DataTableU5BU5D_t3044315960** get_address_of_tables_1() { return &___tables_1; }
	inline void set_tables_1(DataTableU5BU5D_t3044315960* value)
	{
		___tables_1 = value;
		Il2CppCodeGenWriteBarrier((&___tables_1), value);
	}

	inline static int32_t get_offset_of_relations_2() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t4200114175, ___relations_2)); }
	inline DataRelationU5BU5D_t2648313166* get_relations_2() const { return ___relations_2; }
	inline DataRelationU5BU5D_t2648313166** get_address_of_relations_2() { return &___relations_2; }
	inline void set_relations_2(DataRelationU5BU5D_t2648313166* value)
	{
		___relations_2 = value;
		Il2CppCodeGenWriteBarrier((&___relations_2), value);
	}

	inline static int32_t get_offset_of_mainDataTable_3() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t4200114175, ___mainDataTable_3)); }
	inline String_t* get_mainDataTable_3() const { return ___mainDataTable_3; }
	inline String_t** get_address_of_mainDataTable_3() { return &___mainDataTable_3; }
	inline void set_mainDataTable_3(String_t* value)
	{
		___mainDataTable_3 = value;
		Il2CppCodeGenWriteBarrier((&___mainDataTable_3), value);
	}

	inline static int32_t get_offset_of_dataSetName_4() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t4200114175, ___dataSetName_4)); }
	inline String_t* get_dataSetName_4() const { return ___dataSetName_4; }
	inline String_t** get_address_of_dataSetName_4() { return &___dataSetName_4; }
	inline void set_dataSetName_4(String_t* value)
	{
		___dataSetName_4 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetName_4), value);
	}

	inline static int32_t get_offset_of_dataSetNamespace_5() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t4200114175, ___dataSetNamespace_5)); }
	inline String_t* get_dataSetNamespace_5() const { return ___dataSetNamespace_5; }
	inline String_t** get_address_of_dataSetNamespace_5() { return &___dataSetNamespace_5; }
	inline void set_dataSetNamespace_5(String_t* value)
	{
		___dataSetNamespace_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetNamespace_5), value);
	}

	inline static int32_t get_offset_of_dataSetProperties_6() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t4200114175, ___dataSetProperties_6)); }
	inline PropertyCollection_t3446977085 * get_dataSetProperties_6() const { return ___dataSetProperties_6; }
	inline PropertyCollection_t3446977085 ** get_address_of_dataSetProperties_6() { return &___dataSetProperties_6; }
	inline void set_dataSetProperties_6(PropertyCollection_t3446977085 * value)
	{
		___dataSetProperties_6 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetProperties_6), value);
	}

	inline static int32_t get_offset_of_dataSetLocale_7() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t4200114175, ___dataSetLocale_7)); }
	inline CultureInfo_t4157843068 * get_dataSetLocale_7() const { return ___dataSetLocale_7; }
	inline CultureInfo_t4157843068 ** get_address_of_dataSetLocale_7() { return &___dataSetLocale_7; }
	inline void set_dataSetLocale_7(CultureInfo_t4157843068 * value)
	{
		___dataSetLocale_7 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetLocale_7), value);
	}

	inline static int32_t get_offset_of_globalTypeTables_8() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t4200114175, ___globalTypeTables_8)); }
	inline ArrayList_t2718874744 * get_globalTypeTables_8() const { return ___globalTypeTables_8; }
	inline ArrayList_t2718874744 ** get_address_of_globalTypeTables_8() { return &___globalTypeTables_8; }
	inline void set_globalTypeTables_8(ArrayList_t2718874744 * value)
	{
		___globalTypeTables_8 = value;
		Il2CppCodeGenWriteBarrier((&___globalTypeTables_8), value);
	}

	inline static int32_t get_offset_of_additionalNamespaces_9() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t4200114175, ___additionalNamespaces_9)); }
	inline Hashtable_t1853889766 * get_additionalNamespaces_9() const { return ___additionalNamespaces_9; }
	inline Hashtable_t1853889766 ** get_address_of_additionalNamespaces_9() { return &___additionalNamespaces_9; }
	inline void set_additionalNamespaces_9(Hashtable_t1853889766 * value)
	{
		___additionalNamespaces_9 = value;
		Il2CppCodeGenWriteBarrier((&___additionalNamespaces_9), value);
	}

	inline static int32_t get_offset_of_annotation_10() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t4200114175, ___annotation_10)); }
	inline ArrayList_t2718874744 * get_annotation_10() const { return ___annotation_10; }
	inline ArrayList_t2718874744 ** get_address_of_annotation_10() { return &___annotation_10; }
	inline void set_annotation_10(ArrayList_t2718874744 * value)
	{
		___annotation_10 = value;
		Il2CppCodeGenWriteBarrier((&___annotation_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAWRITER_T4200114175_H
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
#ifndef XMLWRITER_T127905479_H
#define XMLWRITER_T127905479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriter
struct  XmlWriter_t127905479  : public RuntimeObject
{
public:
	// System.Xml.XmlWriterSettings System.Xml.XmlWriter::settings
	XmlWriterSettings_t3314986516 * ___settings_0;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(XmlWriter_t127905479, ___settings_0)); }
	inline XmlWriterSettings_t3314986516 * get_settings_0() const { return ___settings_0; }
	inline XmlWriterSettings_t3314986516 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(XmlWriterSettings_t3314986516 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((&___settings_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITER_T127905479_H
#ifndef XMLQUALIFIEDNAME_T2760654312_H
#define XMLQUALIFIEDNAME_T2760654312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlQualifiedName
struct  XmlQualifiedName_t2760654312  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlQualifiedName::name
	String_t* ___name_1;
	// System.String System.Xml.XmlQualifiedName::ns
	String_t* ___ns_2;
	// System.Int32 System.Xml.XmlQualifiedName::hash
	int32_t ___hash_3;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_ns_2() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312, ___ns_2)); }
	inline String_t* get_ns_2() const { return ___ns_2; }
	inline String_t** get_address_of_ns_2() { return &___ns_2; }
	inline void set_ns_2(String_t* value)
	{
		___ns_2 = value;
		Il2CppCodeGenWriteBarrier((&___ns_2), value);
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312, ___hash_3)); }
	inline int32_t get_hash_3() const { return ___hash_3; }
	inline int32_t* get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(int32_t value)
	{
		___hash_3 = value;
	}
};

struct XmlQualifiedName_t2760654312_StaticFields
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Empty
	XmlQualifiedName_t2760654312 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312_StaticFields, ___Empty_0)); }
	inline XmlQualifiedName_t2760654312 * get_Empty_0() const { return ___Empty_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(XmlQualifiedName_t2760654312 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLQUALIFIEDNAME_T2760654312_H
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
#ifndef MARSHALBYVALUECOMPONENT_T828052580_H
#define MARSHALBYVALUECOMPONENT_T828052580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t828052580  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t1108123056 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___eventList_0)); }
	inline EventHandlerList_t1108123056 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t1108123056 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t1108123056 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___disposedEvent_2)); }
	inline RuntimeObject * get_disposedEvent_2() const { return ___disposedEvent_2; }
	inline RuntimeObject ** get_address_of_disposedEvent_2() { return &___disposedEvent_2; }
	inline void set_disposedEvent_2(RuntimeObject * value)
	{
		___disposedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYVALUECOMPONENT_T828052580_H
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_2)); }
	inline ObjectU5BU5D_t2843939325* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t2843939325* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T2718874744_H
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
#ifndef CONSTRAINT_T2778807214_H
#define CONSTRAINT_T2778807214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Constraint
struct  Constraint_t2778807214  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.Data.Constraint::events
	EventHandlerList_t1108123056 * ___events_1;
	// System.String System.Data.Constraint::_constraintName
	String_t* ____constraintName_2;
	// System.Data.PropertyCollection System.Data.Constraint::_properties
	PropertyCollection_t3446977085 * ____properties_3;
	// System.Data.Common.Index System.Data.Constraint::_index
	Index_t4155063583 * ____index_4;
	// System.Data.ConstraintCollection System.Data.Constraint::_constraintCollection
	ConstraintCollection_t259828334 * ____constraintCollection_5;
	// System.Data.DataSet System.Data.Constraint::dataSet
	DataSet_t3773542243 * ___dataSet_6;
	// System.Boolean System.Data.Constraint::initInProgress
	bool ___initInProgress_7;

public:
	inline static int32_t get_offset_of_events_1() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ___events_1)); }
	inline EventHandlerList_t1108123056 * get_events_1() const { return ___events_1; }
	inline EventHandlerList_t1108123056 ** get_address_of_events_1() { return &___events_1; }
	inline void set_events_1(EventHandlerList_t1108123056 * value)
	{
		___events_1 = value;
		Il2CppCodeGenWriteBarrier((&___events_1), value);
	}

	inline static int32_t get_offset_of__constraintName_2() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ____constraintName_2)); }
	inline String_t* get__constraintName_2() const { return ____constraintName_2; }
	inline String_t** get_address_of__constraintName_2() { return &____constraintName_2; }
	inline void set__constraintName_2(String_t* value)
	{
		____constraintName_2 = value;
		Il2CppCodeGenWriteBarrier((&____constraintName_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ____properties_3)); }
	inline PropertyCollection_t3446977085 * get__properties_3() const { return ____properties_3; }
	inline PropertyCollection_t3446977085 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyCollection_t3446977085 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ____index_4)); }
	inline Index_t4155063583 * get__index_4() const { return ____index_4; }
	inline Index_t4155063583 ** get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(Index_t4155063583 * value)
	{
		____index_4 = value;
		Il2CppCodeGenWriteBarrier((&____index_4), value);
	}

	inline static int32_t get_offset_of__constraintCollection_5() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ____constraintCollection_5)); }
	inline ConstraintCollection_t259828334 * get__constraintCollection_5() const { return ____constraintCollection_5; }
	inline ConstraintCollection_t259828334 ** get_address_of__constraintCollection_5() { return &____constraintCollection_5; }
	inline void set__constraintCollection_5(ConstraintCollection_t259828334 * value)
	{
		____constraintCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_5), value);
	}

	inline static int32_t get_offset_of_dataSet_6() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ___dataSet_6)); }
	inline DataSet_t3773542243 * get_dataSet_6() const { return ___dataSet_6; }
	inline DataSet_t3773542243 ** get_address_of_dataSet_6() { return &___dataSet_6; }
	inline void set_dataSet_6(DataSet_t3773542243 * value)
	{
		___dataSet_6 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_6), value);
	}

	inline static int32_t get_offset_of_initInProgress_7() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ___initInProgress_7)); }
	inline bool get_initInProgress_7() const { return ___initInProgress_7; }
	inline bool* get_address_of_initInProgress_7() { return &___initInProgress_7; }
	inline void set_initInProgress_7(bool value)
	{
		___initInProgress_7 = value;
	}
};

struct Constraint_t2778807214_StaticFields
{
public:
	// System.Object System.Data.Constraint::beforeConstraintNameChange
	RuntimeObject * ___beforeConstraintNameChange_0;

public:
	inline static int32_t get_offset_of_beforeConstraintNameChange_0() { return static_cast<int32_t>(offsetof(Constraint_t2778807214_StaticFields, ___beforeConstraintNameChange_0)); }
	inline RuntimeObject * get_beforeConstraintNameChange_0() const { return ___beforeConstraintNameChange_0; }
	inline RuntimeObject ** get_address_of_beforeConstraintNameChange_0() { return &___beforeConstraintNameChange_0; }
	inline void set_beforeConstraintNameChange_0(RuntimeObject * value)
	{
		___beforeConstraintNameChange_0 = value;
		Il2CppCodeGenWriteBarrier((&___beforeConstraintNameChange_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINT_T2778807214_H
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
#ifndef MONOTODOATTRIBUTE_T4131080587_H
#define MONOTODOATTRIBUTE_T4131080587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t4131080587  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T4131080587_H
#ifndef ENUMERATOR_T800837808_H
#define ENUMERATOR_T800837808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Data.DataTable>
struct  Enumerator_t800837808 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3206561227 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DataTable_t1734486485 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t800837808, ___l_0)); }
	inline List_1_t3206561227 * get_l_0() const { return ___l_0; }
	inline List_1_t3206561227 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3206561227 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t800837808, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t800837808, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t800837808, ___current_3)); }
	inline DataTable_t1734486485 * get_current_3() const { return ___current_3; }
	inline DataTable_t1734486485 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DataTable_t1734486485 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T800837808_H
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
#ifndef DATAROWCOLLECTION_T3217300826_H
#define DATAROWCOLLECTION_T3217300826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowCollection
struct  DataRowCollection_t3217300826  : public InternalDataCollectionBase_t224885569
{
public:
	// System.Data.DataTable System.Data.DataRowCollection::table
	DataTable_t1734486485 * ___table_2;
	// System.ComponentModel.ListChangedEventHandler System.Data.DataRowCollection::ListChanged
	ListChangedEventHandler_t1703970447 * ___ListChanged_3;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(DataRowCollection_t3217300826, ___table_2)); }
	inline DataTable_t1734486485 * get_table_2() const { return ___table_2; }
	inline DataTable_t1734486485 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t1734486485 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}

	inline static int32_t get_offset_of_ListChanged_3() { return static_cast<int32_t>(offsetof(DataRowCollection_t3217300826, ___ListChanged_3)); }
	inline ListChangedEventHandler_t1703970447 * get_ListChanged_3() const { return ___ListChanged_3; }
	inline ListChangedEventHandler_t1703970447 ** get_address_of_ListChanged_3() { return &___ListChanged_3; }
	inline void set_ListChanged_3(ListChangedEventHandler_t1703970447 * value)
	{
		___ListChanged_3 = value;
		Il2CppCodeGenWriteBarrier((&___ListChanged_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWCOLLECTION_T3217300826_H
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
#ifndef PROPERTYCOLLECTION_T3446977085_H
#define PROPERTYCOLLECTION_T3446977085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.PropertyCollection
struct  PropertyCollection_t3446977085  : public Hashtable_t1853889766
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCOLLECTION_T3446977085_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
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
#ifndef DATARELATIONCOLLECTION_T3198980347_H
#define DATARELATIONCOLLECTION_T3198980347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection
struct  DataRelationCollection_t3198980347  : public InternalDataCollectionBase_t224885569
{
public:
	// System.Data.DataRelation System.Data.DataRelationCollection::inTransition
	DataRelation_t2257224951 * ___inTransition_2;
	// System.Int32 System.Data.DataRelationCollection::index
	int32_t ___index_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::CollectionChanged
	CollectionChangeEventHandler_t2526189854 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_inTransition_2() { return static_cast<int32_t>(offsetof(DataRelationCollection_t3198980347, ___inTransition_2)); }
	inline DataRelation_t2257224951 * get_inTransition_2() const { return ___inTransition_2; }
	inline DataRelation_t2257224951 ** get_address_of_inTransition_2() { return &___inTransition_2; }
	inline void set_inTransition_2(DataRelation_t2257224951 * value)
	{
		___inTransition_2 = value;
		Il2CppCodeGenWriteBarrier((&___inTransition_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(DataRelationCollection_t3198980347, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(DataRelationCollection_t3198980347, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t2526189854 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t2526189854 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t2526189854 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATIONCOLLECTION_T3198980347_H
#ifndef DATATABLECOLLECTION_T2837452619_H
#define DATATABLECOLLECTION_T2837452619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableCollection
struct  DataTableCollection_t2837452619  : public InternalDataCollectionBase_t224885569
{
public:
	// System.Data.DataSet System.Data.DataTableCollection::dataSet
	DataSet_t3773542243 * ___dataSet_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanged
	CollectionChangeEventHandler_t2526189854 * ___CollectionChanged_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanging
	CollectionChangeEventHandler_t2526189854 * ___CollectionChanging_4;

public:
	inline static int32_t get_offset_of_dataSet_2() { return static_cast<int32_t>(offsetof(DataTableCollection_t2837452619, ___dataSet_2)); }
	inline DataSet_t3773542243 * get_dataSet_2() const { return ___dataSet_2; }
	inline DataSet_t3773542243 ** get_address_of_dataSet_2() { return &___dataSet_2; }
	inline void set_dataSet_2(DataSet_t3773542243 * value)
	{
		___dataSet_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_2), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(DataTableCollection_t2837452619, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t2526189854 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t2526189854 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t2526189854 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_3), value);
	}

	inline static int32_t get_offset_of_CollectionChanging_4() { return static_cast<int32_t>(offsetof(DataTableCollection_t2837452619, ___CollectionChanging_4)); }
	inline CollectionChangeEventHandler_t2526189854 * get_CollectionChanging_4() const { return ___CollectionChanging_4; }
	inline CollectionChangeEventHandler_t2526189854 ** get_address_of_CollectionChanging_4() { return &___CollectionChanging_4; }
	inline void set_CollectionChanging_4(CollectionChangeEventHandler_t2526189854 * value)
	{
		___CollectionChanging_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanging_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLECOLLECTION_T2837452619_H
#ifndef DATACOLUMNCOLLECTION_T479471535_H
#define DATACOLUMNCOLLECTION_T479471535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnCollection
struct  DataColumnCollection_t479471535  : public InternalDataCollectionBase_t224885569
{
public:
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnNameCount
	Hashtable_t1853889766 * ___columnNameCount_2;
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnFromName
	Hashtable_t1853889766 * ___columnFromName_3;
	// System.Collections.ArrayList System.Data.DataColumnCollection::autoIncrement
	ArrayList_t2718874744 * ___autoIncrement_4;
	// System.Int32 System.Data.DataColumnCollection::defaultColumnIndex
	int32_t ___defaultColumnIndex_5;
	// System.Data.DataTable System.Data.DataColumnCollection::parentTable
	DataTable_t1734486485 * ___parentTable_6;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t2526189854 * ___CollectionChanged_9;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionMetaDataChanged
	CollectionChangeEventHandler_t2526189854 * ___CollectionMetaDataChanged_10;

public:
	inline static int32_t get_offset_of_columnNameCount_2() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___columnNameCount_2)); }
	inline Hashtable_t1853889766 * get_columnNameCount_2() const { return ___columnNameCount_2; }
	inline Hashtable_t1853889766 ** get_address_of_columnNameCount_2() { return &___columnNameCount_2; }
	inline void set_columnNameCount_2(Hashtable_t1853889766 * value)
	{
		___columnNameCount_2 = value;
		Il2CppCodeGenWriteBarrier((&___columnNameCount_2), value);
	}

	inline static int32_t get_offset_of_columnFromName_3() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___columnFromName_3)); }
	inline Hashtable_t1853889766 * get_columnFromName_3() const { return ___columnFromName_3; }
	inline Hashtable_t1853889766 ** get_address_of_columnFromName_3() { return &___columnFromName_3; }
	inline void set_columnFromName_3(Hashtable_t1853889766 * value)
	{
		___columnFromName_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnFromName_3), value);
	}

	inline static int32_t get_offset_of_autoIncrement_4() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___autoIncrement_4)); }
	inline ArrayList_t2718874744 * get_autoIncrement_4() const { return ___autoIncrement_4; }
	inline ArrayList_t2718874744 ** get_address_of_autoIncrement_4() { return &___autoIncrement_4; }
	inline void set_autoIncrement_4(ArrayList_t2718874744 * value)
	{
		___autoIncrement_4 = value;
		Il2CppCodeGenWriteBarrier((&___autoIncrement_4), value);
	}

	inline static int32_t get_offset_of_defaultColumnIndex_5() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___defaultColumnIndex_5)); }
	inline int32_t get_defaultColumnIndex_5() const { return ___defaultColumnIndex_5; }
	inline int32_t* get_address_of_defaultColumnIndex_5() { return &___defaultColumnIndex_5; }
	inline void set_defaultColumnIndex_5(int32_t value)
	{
		___defaultColumnIndex_5 = value;
	}

	inline static int32_t get_offset_of_parentTable_6() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___parentTable_6)); }
	inline DataTable_t1734486485 * get_parentTable_6() const { return ___parentTable_6; }
	inline DataTable_t1734486485 ** get_address_of_parentTable_6() { return &___parentTable_6; }
	inline void set_parentTable_6(DataTable_t1734486485 * value)
	{
		___parentTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___parentTable_6), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_9() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___CollectionChanged_9)); }
	inline CollectionChangeEventHandler_t2526189854 * get_CollectionChanged_9() const { return ___CollectionChanged_9; }
	inline CollectionChangeEventHandler_t2526189854 ** get_address_of_CollectionChanged_9() { return &___CollectionChanged_9; }
	inline void set_CollectionChanged_9(CollectionChangeEventHandler_t2526189854 * value)
	{
		___CollectionChanged_9 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_9), value);
	}

	inline static int32_t get_offset_of_CollectionMetaDataChanged_10() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___CollectionMetaDataChanged_10)); }
	inline CollectionChangeEventHandler_t2526189854 * get_CollectionMetaDataChanged_10() const { return ___CollectionMetaDataChanged_10; }
	inline CollectionChangeEventHandler_t2526189854 ** get_address_of_CollectionMetaDataChanged_10() { return &___CollectionMetaDataChanged_10; }
	inline void set_CollectionMetaDataChanged_10(CollectionChangeEventHandler_t2526189854 * value)
	{
		___CollectionMetaDataChanged_10 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionMetaDataChanged_10), value);
	}
};

struct DataColumnCollection_t479471535_StaticFields
{
public:
	// System.String System.Data.DataColumnCollection::ColumnPrefix
	String_t* ___ColumnPrefix_7;
	// System.String[] System.Data.DataColumnCollection::TenColumns
	StringU5BU5D_t1281789340* ___TenColumns_8;

public:
	inline static int32_t get_offset_of_ColumnPrefix_7() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535_StaticFields, ___ColumnPrefix_7)); }
	inline String_t* get_ColumnPrefix_7() const { return ___ColumnPrefix_7; }
	inline String_t** get_address_of_ColumnPrefix_7() { return &___ColumnPrefix_7; }
	inline void set_ColumnPrefix_7(String_t* value)
	{
		___ColumnPrefix_7 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnPrefix_7), value);
	}

	inline static int32_t get_offset_of_TenColumns_8() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535_StaticFields, ___TenColumns_8)); }
	inline StringU5BU5D_t1281789340* get_TenColumns_8() const { return ___TenColumns_8; }
	inline StringU5BU5D_t1281789340** get_address_of_TenColumns_8() { return &___TenColumns_8; }
	inline void set_TenColumns_8(StringU5BU5D_t1281789340* value)
	{
		___TenColumns_8 = value;
		Il2CppCodeGenWriteBarrier((&___TenColumns_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNCOLLECTION_T479471535_H
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
#ifndef CONSTRAINTCOLLECTION_T259828334_H
#define CONSTRAINTCOLLECTION_T259828334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintCollection
struct  ConstraintCollection_t259828334  : public InternalDataCollectionBase_t224885569
{
public:
	// System.Data.DataTable System.Data.ConstraintCollection::table
	DataTable_t1734486485 * ___table_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.ConstraintCollection::CollectionChanged
	CollectionChangeEventHandler_t2526189854 * ___CollectionChanged_3;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(ConstraintCollection_t259828334, ___table_2)); }
	inline DataTable_t1734486485 * get_table_2() const { return ___table_2; }
	inline DataTable_t1734486485 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t1734486485 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(ConstraintCollection_t259828334, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t2526189854 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t2526189854 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t2526189854 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCOLLECTION_T259828334_H
#ifndef UNIQUECONSTRAINT_T841719017_H
#define UNIQUECONSTRAINT_T841719017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.UniqueConstraint
struct  UniqueConstraint_t841719017  : public Constraint_t2778807214
{
public:
	// System.Boolean System.Data.UniqueConstraint::_isPrimaryKey
	bool ____isPrimaryKey_8;
	// System.Boolean System.Data.UniqueConstraint::_belongsToCollection
	bool ____belongsToCollection_9;
	// System.Data.DataTable System.Data.UniqueConstraint::_dataTable
	DataTable_t1734486485 * ____dataTable_10;
	// System.Data.DataColumn[] System.Data.UniqueConstraint::_dataColumns
	DataColumnU5BU5D_t3317819609* ____dataColumns_11;
	// System.Data.ForeignKeyConstraint System.Data.UniqueConstraint::_childConstraint
	ForeignKeyConstraint_t3489911826 * ____childConstraint_12;

public:
	inline static int32_t get_offset_of__isPrimaryKey_8() { return static_cast<int32_t>(offsetof(UniqueConstraint_t841719017, ____isPrimaryKey_8)); }
	inline bool get__isPrimaryKey_8() const { return ____isPrimaryKey_8; }
	inline bool* get_address_of__isPrimaryKey_8() { return &____isPrimaryKey_8; }
	inline void set__isPrimaryKey_8(bool value)
	{
		____isPrimaryKey_8 = value;
	}

	inline static int32_t get_offset_of__belongsToCollection_9() { return static_cast<int32_t>(offsetof(UniqueConstraint_t841719017, ____belongsToCollection_9)); }
	inline bool get__belongsToCollection_9() const { return ____belongsToCollection_9; }
	inline bool* get_address_of__belongsToCollection_9() { return &____belongsToCollection_9; }
	inline void set__belongsToCollection_9(bool value)
	{
		____belongsToCollection_9 = value;
	}

	inline static int32_t get_offset_of__dataTable_10() { return static_cast<int32_t>(offsetof(UniqueConstraint_t841719017, ____dataTable_10)); }
	inline DataTable_t1734486485 * get__dataTable_10() const { return ____dataTable_10; }
	inline DataTable_t1734486485 ** get_address_of__dataTable_10() { return &____dataTable_10; }
	inline void set__dataTable_10(DataTable_t1734486485 * value)
	{
		____dataTable_10 = value;
		Il2CppCodeGenWriteBarrier((&____dataTable_10), value);
	}

	inline static int32_t get_offset_of__dataColumns_11() { return static_cast<int32_t>(offsetof(UniqueConstraint_t841719017, ____dataColumns_11)); }
	inline DataColumnU5BU5D_t3317819609* get__dataColumns_11() const { return ____dataColumns_11; }
	inline DataColumnU5BU5D_t3317819609** get_address_of__dataColumns_11() { return &____dataColumns_11; }
	inline void set__dataColumns_11(DataColumnU5BU5D_t3317819609* value)
	{
		____dataColumns_11 = value;
		Il2CppCodeGenWriteBarrier((&____dataColumns_11), value);
	}

	inline static int32_t get_offset_of__childConstraint_12() { return static_cast<int32_t>(offsetof(UniqueConstraint_t841719017, ____childConstraint_12)); }
	inline ForeignKeyConstraint_t3489911826 * get__childConstraint_12() const { return ____childConstraint_12; }
	inline ForeignKeyConstraint_t3489911826 ** get_address_of__childConstraint_12() { return &____childConstraint_12; }
	inline void set__childConstraint_12(ForeignKeyConstraint_t3489911826 * value)
	{
		____childConstraint_12 = value;
		Il2CppCodeGenWriteBarrier((&____childConstraint_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIQUECONSTRAINT_T841719017_H
#ifndef SERIALIZATIONFORMAT_T3115973676_H
#define SERIALIZATIONFORMAT_T3115973676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SerializationFormat
struct  SerializationFormat_t3115973676 
{
public:
	// System.Int32 System.Data.SerializationFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SerializationFormat_t3115973676, ___value___1)); }
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
#endif // SERIALIZATIONFORMAT_T3115973676_H
#ifndef RULE_T2627824861_H
#define RULE_T2627824861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Rule
struct  Rule_t2627824861 
{
public:
	// System.Int32 System.Data.Rule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Rule_t2627824861, ___value___1)); }
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
#endif // RULE_T2627824861_H
#ifndef DATASETDATETIME_T3321856641_H
#define DATASETDATETIME_T3321856641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSetDateTime
struct  DataSetDateTime_t3321856641 
{
public:
	// System.Int32 System.Data.DataSetDateTime::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataSetDateTime_t3321856641, ___value___1)); }
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
#endif // DATASETDATETIME_T3321856641_H
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
#ifndef MAPPINGTYPE_T4061812973_H
#define MAPPINGTYPE_T4061812973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MappingType
struct  MappingType_t4061812973 
{
public:
	// System.Int32 System.Data.MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t4061812973, ___value___1)); }
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
#endif // MAPPINGTYPE_T4061812973_H
#ifndef ACCEPTREJECTRULE_T2136770941_H
#define ACCEPTREJECTRULE_T2136770941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.AcceptRejectRule
struct  AcceptRejectRule_t2136770941 
{
public:
	// System.Int32 System.Data.AcceptRejectRule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AcceptRejectRule_t2136770941, ___value___1)); }
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
#endif // ACCEPTREJECTRULE_T2136770941_H
#ifndef DATAROWSTATE_T3360857979_H
#define DATAROWSTATE_T3360857979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowState
struct  DataRowState_t3360857979 
{
public:
	// System.Int32 System.Data.DataRowState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowState_t3360857979, ___value___1)); }
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
#endif // DATAROWSTATE_T3360857979_H
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
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___1)); }
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
#endif // TYPECODE_T2987224087_H
#ifndef XMLWRITEMODE_T421248975_H
#define XMLWRITEMODE_T421248975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlWriteMode
struct  XmlWriteMode_t421248975 
{
public:
	// System.Int32 System.Data.XmlWriteMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlWriteMode_t421248975, ___value___1)); }
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
#endif // XMLWRITEMODE_T421248975_H
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
#ifndef DATASET_T3773542243_H
#define DATASET_T3773542243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSet
struct  DataSet_t3773542243  : public MarshalByValueComponent_t828052580
{
public:
	// System.String System.Data.DataSet::dataSetName
	String_t* ___dataSetName_3;
	// System.String System.Data.DataSet::_namespace
	String_t* ____namespace_4;
	// System.String System.Data.DataSet::prefix
	String_t* ___prefix_5;
	// System.Boolean System.Data.DataSet::caseSensitive
	bool ___caseSensitive_6;
	// System.Boolean System.Data.DataSet::enforceConstraints
	bool ___enforceConstraints_7;
	// System.Data.DataTableCollection System.Data.DataSet::tableCollection
	DataTableCollection_t2837452619 * ___tableCollection_8;
	// System.Data.DataRelationCollection System.Data.DataSet::relationCollection
	DataRelationCollection_t3198980347 * ___relationCollection_9;
	// System.Data.PropertyCollection System.Data.DataSet::properties
	PropertyCollection_t3446977085 * ___properties_10;
	// System.Globalization.CultureInfo System.Data.DataSet::locale
	CultureInfo_t4157843068 * ___locale_11;
	// System.Data.TableAdapterSchemaInfo System.Data.DataSet::tableAdapterSchemaInfo
	TableAdapterSchemaInfo_t1445784527 * ___tableAdapterSchemaInfo_12;
	// System.Boolean System.Data.DataSet::dataSetInitialized
	bool ___dataSetInitialized_13;
	// System.Data.SerializationFormat System.Data.DataSet::remotingFormat
	int32_t ___remotingFormat_14;
	// System.Data.MergeFailedEventHandler System.Data.DataSet::MergeFailed
	MergeFailedEventHandler_t645599195 * ___MergeFailed_15;

public:
	inline static int32_t get_offset_of_dataSetName_3() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___dataSetName_3)); }
	inline String_t* get_dataSetName_3() const { return ___dataSetName_3; }
	inline String_t** get_address_of_dataSetName_3() { return &___dataSetName_3; }
	inline void set_dataSetName_3(String_t* value)
	{
		___dataSetName_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetName_3), value);
	}

	inline static int32_t get_offset_of__namespace_4() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ____namespace_4)); }
	inline String_t* get__namespace_4() const { return ____namespace_4; }
	inline String_t** get_address_of__namespace_4() { return &____namespace_4; }
	inline void set__namespace_4(String_t* value)
	{
		____namespace_4 = value;
		Il2CppCodeGenWriteBarrier((&____namespace_4), value);
	}

	inline static int32_t get_offset_of_prefix_5() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___prefix_5)); }
	inline String_t* get_prefix_5() const { return ___prefix_5; }
	inline String_t** get_address_of_prefix_5() { return &___prefix_5; }
	inline void set_prefix_5(String_t* value)
	{
		___prefix_5 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_5), value);
	}

	inline static int32_t get_offset_of_caseSensitive_6() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___caseSensitive_6)); }
	inline bool get_caseSensitive_6() const { return ___caseSensitive_6; }
	inline bool* get_address_of_caseSensitive_6() { return &___caseSensitive_6; }
	inline void set_caseSensitive_6(bool value)
	{
		___caseSensitive_6 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_7() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___enforceConstraints_7)); }
	inline bool get_enforceConstraints_7() const { return ___enforceConstraints_7; }
	inline bool* get_address_of_enforceConstraints_7() { return &___enforceConstraints_7; }
	inline void set_enforceConstraints_7(bool value)
	{
		___enforceConstraints_7 = value;
	}

	inline static int32_t get_offset_of_tableCollection_8() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___tableCollection_8)); }
	inline DataTableCollection_t2837452619 * get_tableCollection_8() const { return ___tableCollection_8; }
	inline DataTableCollection_t2837452619 ** get_address_of_tableCollection_8() { return &___tableCollection_8; }
	inline void set_tableCollection_8(DataTableCollection_t2837452619 * value)
	{
		___tableCollection_8 = value;
		Il2CppCodeGenWriteBarrier((&___tableCollection_8), value);
	}

	inline static int32_t get_offset_of_relationCollection_9() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___relationCollection_9)); }
	inline DataRelationCollection_t3198980347 * get_relationCollection_9() const { return ___relationCollection_9; }
	inline DataRelationCollection_t3198980347 ** get_address_of_relationCollection_9() { return &___relationCollection_9; }
	inline void set_relationCollection_9(DataRelationCollection_t3198980347 * value)
	{
		___relationCollection_9 = value;
		Il2CppCodeGenWriteBarrier((&___relationCollection_9), value);
	}

	inline static int32_t get_offset_of_properties_10() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___properties_10)); }
	inline PropertyCollection_t3446977085 * get_properties_10() const { return ___properties_10; }
	inline PropertyCollection_t3446977085 ** get_address_of_properties_10() { return &___properties_10; }
	inline void set_properties_10(PropertyCollection_t3446977085 * value)
	{
		___properties_10 = value;
		Il2CppCodeGenWriteBarrier((&___properties_10), value);
	}

	inline static int32_t get_offset_of_locale_11() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___locale_11)); }
	inline CultureInfo_t4157843068 * get_locale_11() const { return ___locale_11; }
	inline CultureInfo_t4157843068 ** get_address_of_locale_11() { return &___locale_11; }
	inline void set_locale_11(CultureInfo_t4157843068 * value)
	{
		___locale_11 = value;
		Il2CppCodeGenWriteBarrier((&___locale_11), value);
	}

	inline static int32_t get_offset_of_tableAdapterSchemaInfo_12() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___tableAdapterSchemaInfo_12)); }
	inline TableAdapterSchemaInfo_t1445784527 * get_tableAdapterSchemaInfo_12() const { return ___tableAdapterSchemaInfo_12; }
	inline TableAdapterSchemaInfo_t1445784527 ** get_address_of_tableAdapterSchemaInfo_12() { return &___tableAdapterSchemaInfo_12; }
	inline void set_tableAdapterSchemaInfo_12(TableAdapterSchemaInfo_t1445784527 * value)
	{
		___tableAdapterSchemaInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___tableAdapterSchemaInfo_12), value);
	}

	inline static int32_t get_offset_of_dataSetInitialized_13() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___dataSetInitialized_13)); }
	inline bool get_dataSetInitialized_13() const { return ___dataSetInitialized_13; }
	inline bool* get_address_of_dataSetInitialized_13() { return &___dataSetInitialized_13; }
	inline void set_dataSetInitialized_13(bool value)
	{
		___dataSetInitialized_13 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_14() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___remotingFormat_14)); }
	inline int32_t get_remotingFormat_14() const { return ___remotingFormat_14; }
	inline int32_t* get_address_of_remotingFormat_14() { return &___remotingFormat_14; }
	inline void set_remotingFormat_14(int32_t value)
	{
		___remotingFormat_14 = value;
	}

	inline static int32_t get_offset_of_MergeFailed_15() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___MergeFailed_15)); }
	inline MergeFailedEventHandler_t645599195 * get_MergeFailed_15() const { return ___MergeFailed_15; }
	inline MergeFailedEventHandler_t645599195 ** get_address_of_MergeFailed_15() { return &___MergeFailed_15; }
	inline void set_MergeFailed_15(MergeFailedEventHandler_t645599195 * value)
	{
		___MergeFailed_15 = value;
		Il2CppCodeGenWriteBarrier((&___MergeFailed_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASET_T3773542243_H
#ifndef FOREIGNKEYCONSTRAINT_T3489911826_H
#define FOREIGNKEYCONSTRAINT_T3489911826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ForeignKeyConstraint
struct  ForeignKeyConstraint_t3489911826  : public Constraint_t2778807214
{
public:
	// System.Data.UniqueConstraint System.Data.ForeignKeyConstraint::_parentUniqueConstraint
	UniqueConstraint_t841719017 * ____parentUniqueConstraint_8;
	// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::_parentColumns
	DataColumnU5BU5D_t3317819609* ____parentColumns_9;
	// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::_childColumns
	DataColumnU5BU5D_t3317819609* ____childColumns_10;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_deleteRule
	int32_t ____deleteRule_11;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_updateRule
	int32_t ____updateRule_12;
	// System.Data.AcceptRejectRule System.Data.ForeignKeyConstraint::_acceptRejectRule
	int32_t ____acceptRejectRule_13;

public:
	inline static int32_t get_offset_of__parentUniqueConstraint_8() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3489911826, ____parentUniqueConstraint_8)); }
	inline UniqueConstraint_t841719017 * get__parentUniqueConstraint_8() const { return ____parentUniqueConstraint_8; }
	inline UniqueConstraint_t841719017 ** get_address_of__parentUniqueConstraint_8() { return &____parentUniqueConstraint_8; }
	inline void set__parentUniqueConstraint_8(UniqueConstraint_t841719017 * value)
	{
		____parentUniqueConstraint_8 = value;
		Il2CppCodeGenWriteBarrier((&____parentUniqueConstraint_8), value);
	}

	inline static int32_t get_offset_of__parentColumns_9() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3489911826, ____parentColumns_9)); }
	inline DataColumnU5BU5D_t3317819609* get__parentColumns_9() const { return ____parentColumns_9; }
	inline DataColumnU5BU5D_t3317819609** get_address_of__parentColumns_9() { return &____parentColumns_9; }
	inline void set__parentColumns_9(DataColumnU5BU5D_t3317819609* value)
	{
		____parentColumns_9 = value;
		Il2CppCodeGenWriteBarrier((&____parentColumns_9), value);
	}

	inline static int32_t get_offset_of__childColumns_10() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3489911826, ____childColumns_10)); }
	inline DataColumnU5BU5D_t3317819609* get__childColumns_10() const { return ____childColumns_10; }
	inline DataColumnU5BU5D_t3317819609** get_address_of__childColumns_10() { return &____childColumns_10; }
	inline void set__childColumns_10(DataColumnU5BU5D_t3317819609* value)
	{
		____childColumns_10 = value;
		Il2CppCodeGenWriteBarrier((&____childColumns_10), value);
	}

	inline static int32_t get_offset_of__deleteRule_11() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3489911826, ____deleteRule_11)); }
	inline int32_t get__deleteRule_11() const { return ____deleteRule_11; }
	inline int32_t* get_address_of__deleteRule_11() { return &____deleteRule_11; }
	inline void set__deleteRule_11(int32_t value)
	{
		____deleteRule_11 = value;
	}

	inline static int32_t get_offset_of__updateRule_12() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3489911826, ____updateRule_12)); }
	inline int32_t get__updateRule_12() const { return ____updateRule_12; }
	inline int32_t* get_address_of__updateRule_12() { return &____updateRule_12; }
	inline void set__updateRule_12(int32_t value)
	{
		____updateRule_12 = value;
	}

	inline static int32_t get_offset_of__acceptRejectRule_13() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3489911826, ____acceptRejectRule_13)); }
	inline int32_t get__acceptRejectRule_13() const { return ____acceptRejectRule_13; }
	inline int32_t* get_address_of__acceptRejectRule_13() { return &____acceptRejectRule_13; }
	inline void set__acceptRejectRule_13(int32_t value)
	{
		____acceptRejectRule_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOREIGNKEYCONSTRAINT_T3489911826_H
#ifndef DATACOLUMN_T2485786120_H
#define DATACOLUMN_T2485786120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumn
struct  DataColumn_t2485786120  : public MarshalByValueComponent_t828052580
{
public:
	// System.ComponentModel.EventHandlerList System.Data.DataColumn::_eventHandlers
	EventHandlerList_t1108123056 * ____eventHandlers_3;
	// System.Boolean System.Data.DataColumn::_allowDBNull
	bool ____allowDBNull_5;
	// System.Boolean System.Data.DataColumn::_autoIncrement
	bool ____autoIncrement_6;
	// System.Int64 System.Data.DataColumn::_autoIncrementSeed
	int64_t ____autoIncrementSeed_7;
	// System.Int64 System.Data.DataColumn::_autoIncrementStep
	int64_t ____autoIncrementStep_8;
	// System.Int64 System.Data.DataColumn::_nextAutoIncrementValue
	int64_t ____nextAutoIncrementValue_9;
	// System.String System.Data.DataColumn::_caption
	String_t* ____caption_10;
	// System.Data.MappingType System.Data.DataColumn::_columnMapping
	int32_t ____columnMapping_11;
	// System.String System.Data.DataColumn::_columnName
	String_t* ____columnName_12;
	// System.Object System.Data.DataColumn::_defaultValue
	RuntimeObject * ____defaultValue_13;
	// System.String System.Data.DataColumn::_expression
	String_t* ____expression_14;
	// Mono.Data.SqlExpressions.IExpression System.Data.DataColumn::_compiledExpression
	RuntimeObject* ____compiledExpression_15;
	// System.Data.PropertyCollection System.Data.DataColumn::_extendedProperties
	PropertyCollection_t3446977085 * ____extendedProperties_16;
	// System.Int32 System.Data.DataColumn::_maxLength
	int32_t ____maxLength_17;
	// System.String System.Data.DataColumn::_nameSpace
	String_t* ____nameSpace_18;
	// System.Int32 System.Data.DataColumn::_ordinal
	int32_t ____ordinal_19;
	// System.String System.Data.DataColumn::_prefix
	String_t* ____prefix_20;
	// System.Boolean System.Data.DataColumn::_readOnly
	bool ____readOnly_21;
	// System.Data.DataTable System.Data.DataColumn::_table
	DataTable_t1734486485 * ____table_22;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_23;
	// System.Data.Common.DataContainer System.Data.DataColumn::_dataContainer
	DataContainer_t2712869782 * ____dataContainer_24;
	// System.Data.DataSetDateTime System.Data.DataColumn::_datetimeMode
	int32_t ____datetimeMode_25;

public:
	inline static int32_t get_offset_of__eventHandlers_3() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____eventHandlers_3)); }
	inline EventHandlerList_t1108123056 * get__eventHandlers_3() const { return ____eventHandlers_3; }
	inline EventHandlerList_t1108123056 ** get_address_of__eventHandlers_3() { return &____eventHandlers_3; }
	inline void set__eventHandlers_3(EventHandlerList_t1108123056 * value)
	{
		____eventHandlers_3 = value;
		Il2CppCodeGenWriteBarrier((&____eventHandlers_3), value);
	}

	inline static int32_t get_offset_of__allowDBNull_5() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____allowDBNull_5)); }
	inline bool get__allowDBNull_5() const { return ____allowDBNull_5; }
	inline bool* get_address_of__allowDBNull_5() { return &____allowDBNull_5; }
	inline void set__allowDBNull_5(bool value)
	{
		____allowDBNull_5 = value;
	}

	inline static int32_t get_offset_of__autoIncrement_6() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____autoIncrement_6)); }
	inline bool get__autoIncrement_6() const { return ____autoIncrement_6; }
	inline bool* get_address_of__autoIncrement_6() { return &____autoIncrement_6; }
	inline void set__autoIncrement_6(bool value)
	{
		____autoIncrement_6 = value;
	}

	inline static int32_t get_offset_of__autoIncrementSeed_7() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____autoIncrementSeed_7)); }
	inline int64_t get__autoIncrementSeed_7() const { return ____autoIncrementSeed_7; }
	inline int64_t* get_address_of__autoIncrementSeed_7() { return &____autoIncrementSeed_7; }
	inline void set__autoIncrementSeed_7(int64_t value)
	{
		____autoIncrementSeed_7 = value;
	}

	inline static int32_t get_offset_of__autoIncrementStep_8() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____autoIncrementStep_8)); }
	inline int64_t get__autoIncrementStep_8() const { return ____autoIncrementStep_8; }
	inline int64_t* get_address_of__autoIncrementStep_8() { return &____autoIncrementStep_8; }
	inline void set__autoIncrementStep_8(int64_t value)
	{
		____autoIncrementStep_8 = value;
	}

	inline static int32_t get_offset_of__nextAutoIncrementValue_9() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____nextAutoIncrementValue_9)); }
	inline int64_t get__nextAutoIncrementValue_9() const { return ____nextAutoIncrementValue_9; }
	inline int64_t* get_address_of__nextAutoIncrementValue_9() { return &____nextAutoIncrementValue_9; }
	inline void set__nextAutoIncrementValue_9(int64_t value)
	{
		____nextAutoIncrementValue_9 = value;
	}

	inline static int32_t get_offset_of__caption_10() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____caption_10)); }
	inline String_t* get__caption_10() const { return ____caption_10; }
	inline String_t** get_address_of__caption_10() { return &____caption_10; }
	inline void set__caption_10(String_t* value)
	{
		____caption_10 = value;
		Il2CppCodeGenWriteBarrier((&____caption_10), value);
	}

	inline static int32_t get_offset_of__columnMapping_11() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____columnMapping_11)); }
	inline int32_t get__columnMapping_11() const { return ____columnMapping_11; }
	inline int32_t* get_address_of__columnMapping_11() { return &____columnMapping_11; }
	inline void set__columnMapping_11(int32_t value)
	{
		____columnMapping_11 = value;
	}

	inline static int32_t get_offset_of__columnName_12() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____columnName_12)); }
	inline String_t* get__columnName_12() const { return ____columnName_12; }
	inline String_t** get_address_of__columnName_12() { return &____columnName_12; }
	inline void set__columnName_12(String_t* value)
	{
		____columnName_12 = value;
		Il2CppCodeGenWriteBarrier((&____columnName_12), value);
	}

	inline static int32_t get_offset_of__defaultValue_13() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____defaultValue_13)); }
	inline RuntimeObject * get__defaultValue_13() const { return ____defaultValue_13; }
	inline RuntimeObject ** get_address_of__defaultValue_13() { return &____defaultValue_13; }
	inline void set__defaultValue_13(RuntimeObject * value)
	{
		____defaultValue_13 = value;
		Il2CppCodeGenWriteBarrier((&____defaultValue_13), value);
	}

	inline static int32_t get_offset_of__expression_14() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____expression_14)); }
	inline String_t* get__expression_14() const { return ____expression_14; }
	inline String_t** get_address_of__expression_14() { return &____expression_14; }
	inline void set__expression_14(String_t* value)
	{
		____expression_14 = value;
		Il2CppCodeGenWriteBarrier((&____expression_14), value);
	}

	inline static int32_t get_offset_of__compiledExpression_15() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____compiledExpression_15)); }
	inline RuntimeObject* get__compiledExpression_15() const { return ____compiledExpression_15; }
	inline RuntimeObject** get_address_of__compiledExpression_15() { return &____compiledExpression_15; }
	inline void set__compiledExpression_15(RuntimeObject* value)
	{
		____compiledExpression_15 = value;
		Il2CppCodeGenWriteBarrier((&____compiledExpression_15), value);
	}

	inline static int32_t get_offset_of__extendedProperties_16() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____extendedProperties_16)); }
	inline PropertyCollection_t3446977085 * get__extendedProperties_16() const { return ____extendedProperties_16; }
	inline PropertyCollection_t3446977085 ** get_address_of__extendedProperties_16() { return &____extendedProperties_16; }
	inline void set__extendedProperties_16(PropertyCollection_t3446977085 * value)
	{
		____extendedProperties_16 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_16), value);
	}

	inline static int32_t get_offset_of__maxLength_17() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____maxLength_17)); }
	inline int32_t get__maxLength_17() const { return ____maxLength_17; }
	inline int32_t* get_address_of__maxLength_17() { return &____maxLength_17; }
	inline void set__maxLength_17(int32_t value)
	{
		____maxLength_17 = value;
	}

	inline static int32_t get_offset_of__nameSpace_18() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____nameSpace_18)); }
	inline String_t* get__nameSpace_18() const { return ____nameSpace_18; }
	inline String_t** get_address_of__nameSpace_18() { return &____nameSpace_18; }
	inline void set__nameSpace_18(String_t* value)
	{
		____nameSpace_18 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_18), value);
	}

	inline static int32_t get_offset_of__ordinal_19() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____ordinal_19)); }
	inline int32_t get__ordinal_19() const { return ____ordinal_19; }
	inline int32_t* get_address_of__ordinal_19() { return &____ordinal_19; }
	inline void set__ordinal_19(int32_t value)
	{
		____ordinal_19 = value;
	}

	inline static int32_t get_offset_of__prefix_20() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____prefix_20)); }
	inline String_t* get__prefix_20() const { return ____prefix_20; }
	inline String_t** get_address_of__prefix_20() { return &____prefix_20; }
	inline void set__prefix_20(String_t* value)
	{
		____prefix_20 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_20), value);
	}

	inline static int32_t get_offset_of__readOnly_21() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____readOnly_21)); }
	inline bool get__readOnly_21() const { return ____readOnly_21; }
	inline bool* get_address_of__readOnly_21() { return &____readOnly_21; }
	inline void set__readOnly_21(bool value)
	{
		____readOnly_21 = value;
	}

	inline static int32_t get_offset_of__table_22() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____table_22)); }
	inline DataTable_t1734486485 * get__table_22() const { return ____table_22; }
	inline DataTable_t1734486485 ** get_address_of__table_22() { return &____table_22; }
	inline void set__table_22(DataTable_t1734486485 * value)
	{
		____table_22 = value;
		Il2CppCodeGenWriteBarrier((&____table_22), value);
	}

	inline static int32_t get_offset_of__unique_23() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____unique_23)); }
	inline bool get__unique_23() const { return ____unique_23; }
	inline bool* get_address_of__unique_23() { return &____unique_23; }
	inline void set__unique_23(bool value)
	{
		____unique_23 = value;
	}

	inline static int32_t get_offset_of__dataContainer_24() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____dataContainer_24)); }
	inline DataContainer_t2712869782 * get__dataContainer_24() const { return ____dataContainer_24; }
	inline DataContainer_t2712869782 ** get_address_of__dataContainer_24() { return &____dataContainer_24; }
	inline void set__dataContainer_24(DataContainer_t2712869782 * value)
	{
		____dataContainer_24 = value;
		Il2CppCodeGenWriteBarrier((&____dataContainer_24), value);
	}

	inline static int32_t get_offset_of__datetimeMode_25() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____datetimeMode_25)); }
	inline int32_t get__datetimeMode_25() const { return ____datetimeMode_25; }
	inline int32_t* get_address_of__datetimeMode_25() { return &____datetimeMode_25; }
	inline void set__datetimeMode_25(int32_t value)
	{
		____datetimeMode_25 = value;
	}
};

struct DataColumn_t2485786120_StaticFields
{
public:
	// System.Object System.Data.DataColumn::_propertyChangedKey
	RuntimeObject * ____propertyChangedKey_4;

public:
	inline static int32_t get_offset_of__propertyChangedKey_4() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120_StaticFields, ____propertyChangedKey_4)); }
	inline RuntimeObject * get__propertyChangedKey_4() const { return ____propertyChangedKey_4; }
	inline RuntimeObject ** get_address_of__propertyChangedKey_4() { return &____propertyChangedKey_4; }
	inline void set__propertyChangedKey_4(RuntimeObject * value)
	{
		____propertyChangedKey_4 = value;
		Il2CppCodeGenWriteBarrier((&____propertyChangedKey_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMN_T2485786120_H
#ifndef DATATABLE_T1734486485_H
#define DATATABLE_T1734486485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTable
struct  DataTable_t1734486485  : public MarshalByValueComponent_t828052580
{
public:
	// System.Data.DataSet System.Data.DataTable::dataSet
	DataSet_t3773542243 * ___dataSet_3;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_4;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t479471535 * ____columnCollection_5;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_t259828334 * ____constraintCollection_6;
	// System.String System.Data.DataTable::_displayExpression
	String_t* ____displayExpression_7;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t3446977085 * ____extendedProperties_8;
	// System.Globalization.CultureInfo System.Data.DataTable::_locale
	CultureInfo_t4157843068 * ____locale_9;
	// System.Int32 System.Data.DataTable::_minimumCapacity
	int32_t ____minimumCapacity_10;
	// System.String System.Data.DataTable::_nameSpace
	String_t* ____nameSpace_11;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelations
	DataRelationCollection_t3198980347 * ____childRelations_12;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelations
	DataRelationCollection_t3198980347 * ____parentRelations_13;
	// System.String System.Data.DataTable::_prefix
	String_t* ____prefix_14;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKeyConstraint
	UniqueConstraint_t841719017 * ____primaryKeyConstraint_15;
	// System.Data.DataRowCollection System.Data.DataTable::_rows
	DataRowCollection_t3217300826 * ____rows_16;
	// System.ComponentModel.ISite System.Data.DataTable::_site
	RuntimeObject* ____site_17;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_18;
	// System.Boolean System.Data.DataTable::_duringDataLoad
	bool ____duringDataLoad_19;
	// System.Boolean System.Data.DataTable::_nullConstraintViolationDuringDataLoad
	bool ____nullConstraintViolationDuringDataLoad_20;
	// System.Boolean System.Data.DataTable::dataSetPrevEnforceConstraints
	bool ___dataSetPrevEnforceConstraints_21;
	// System.Boolean System.Data.DataTable::enforceConstraints
	bool ___enforceConstraints_22;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t3193098686 * ____rowBuilder_23;
	// System.Collections.ArrayList System.Data.DataTable::_indexes
	ArrayList_t2718874744 * ____indexes_24;
	// System.Data.Common.RecordCache System.Data.DataTable::_recordCache
	RecordCache_t2814565283 * ____recordCache_25;
	// System.Int32 System.Data.DataTable::_defaultValuesRowIndex
	int32_t ____defaultValuesRowIndex_26;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_27;
	// System.Boolean System.Data.DataTable::_virginCaseSensitive
	bool ____virginCaseSensitive_28;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorsCache
	PropertyDescriptorCollection_t4164928659 * ____propertyDescriptorsCache_29;
	// System.Data.DataColumn[] System.Data.DataTable::_latestPrimaryKeyCols
	DataColumnU5BU5D_t3317819609* ____latestPrimaryKeyCols_32;
	// System.Data.DataRow[] System.Data.DataTable::empty_rows
	DataRowU5BU5D_t3122106530* ___empty_rows_33;
	// System.Boolean System.Data.DataTable::tableInitialized
	bool ___tableInitialized_34;
	// System.Data.SerializationFormat System.Data.DataTable::remotingFormat
	int32_t ___remotingFormat_35;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanged
	DataColumnChangeEventHandler_t1943750078 * ___ColumnChanged_36;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanging
	DataColumnChangeEventHandler_t1943750078 * ___ColumnChanging_37;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanged
	DataRowChangeEventHandler_t1758895939 * ___RowChanged_38;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanging
	DataRowChangeEventHandler_t1758895939 * ___RowChanging_39;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleted
	DataRowChangeEventHandler_t1758895939 * ___RowDeleted_40;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleting
	DataRowChangeEventHandler_t1758895939 * ___RowDeleting_41;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::TableNewRow
	DataTableNewRowEventHandler_t4233335338 * ___TableNewRow_42;

public:
	inline static int32_t get_offset_of_dataSet_3() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___dataSet_3)); }
	inline DataSet_t3773542243 * get_dataSet_3() const { return ___dataSet_3; }
	inline DataSet_t3773542243 ** get_address_of_dataSet_3() { return &___dataSet_3; }
	inline void set_dataSet_3(DataSet_t3773542243 * value)
	{
		___dataSet_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_3), value);
	}

	inline static int32_t get_offset_of__caseSensitive_4() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____caseSensitive_4)); }
	inline bool get__caseSensitive_4() const { return ____caseSensitive_4; }
	inline bool* get_address_of__caseSensitive_4() { return &____caseSensitive_4; }
	inline void set__caseSensitive_4(bool value)
	{
		____caseSensitive_4 = value;
	}

	inline static int32_t get_offset_of__columnCollection_5() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____columnCollection_5)); }
	inline DataColumnCollection_t479471535 * get__columnCollection_5() const { return ____columnCollection_5; }
	inline DataColumnCollection_t479471535 ** get_address_of__columnCollection_5() { return &____columnCollection_5; }
	inline void set__columnCollection_5(DataColumnCollection_t479471535 * value)
	{
		____columnCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____columnCollection_5), value);
	}

	inline static int32_t get_offset_of__constraintCollection_6() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____constraintCollection_6)); }
	inline ConstraintCollection_t259828334 * get__constraintCollection_6() const { return ____constraintCollection_6; }
	inline ConstraintCollection_t259828334 ** get_address_of__constraintCollection_6() { return &____constraintCollection_6; }
	inline void set__constraintCollection_6(ConstraintCollection_t259828334 * value)
	{
		____constraintCollection_6 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_6), value);
	}

	inline static int32_t get_offset_of__displayExpression_7() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____displayExpression_7)); }
	inline String_t* get__displayExpression_7() const { return ____displayExpression_7; }
	inline String_t** get_address_of__displayExpression_7() { return &____displayExpression_7; }
	inline void set__displayExpression_7(String_t* value)
	{
		____displayExpression_7 = value;
		Il2CppCodeGenWriteBarrier((&____displayExpression_7), value);
	}

	inline static int32_t get_offset_of__extendedProperties_8() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____extendedProperties_8)); }
	inline PropertyCollection_t3446977085 * get__extendedProperties_8() const { return ____extendedProperties_8; }
	inline PropertyCollection_t3446977085 ** get_address_of__extendedProperties_8() { return &____extendedProperties_8; }
	inline void set__extendedProperties_8(PropertyCollection_t3446977085 * value)
	{
		____extendedProperties_8 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_8), value);
	}

	inline static int32_t get_offset_of__locale_9() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____locale_9)); }
	inline CultureInfo_t4157843068 * get__locale_9() const { return ____locale_9; }
	inline CultureInfo_t4157843068 ** get_address_of__locale_9() { return &____locale_9; }
	inline void set__locale_9(CultureInfo_t4157843068 * value)
	{
		____locale_9 = value;
		Il2CppCodeGenWriteBarrier((&____locale_9), value);
	}

	inline static int32_t get_offset_of__minimumCapacity_10() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____minimumCapacity_10)); }
	inline int32_t get__minimumCapacity_10() const { return ____minimumCapacity_10; }
	inline int32_t* get_address_of__minimumCapacity_10() { return &____minimumCapacity_10; }
	inline void set__minimumCapacity_10(int32_t value)
	{
		____minimumCapacity_10 = value;
	}

	inline static int32_t get_offset_of__nameSpace_11() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____nameSpace_11)); }
	inline String_t* get__nameSpace_11() const { return ____nameSpace_11; }
	inline String_t** get_address_of__nameSpace_11() { return &____nameSpace_11; }
	inline void set__nameSpace_11(String_t* value)
	{
		____nameSpace_11 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_11), value);
	}

	inline static int32_t get_offset_of__childRelations_12() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____childRelations_12)); }
	inline DataRelationCollection_t3198980347 * get__childRelations_12() const { return ____childRelations_12; }
	inline DataRelationCollection_t3198980347 ** get_address_of__childRelations_12() { return &____childRelations_12; }
	inline void set__childRelations_12(DataRelationCollection_t3198980347 * value)
	{
		____childRelations_12 = value;
		Il2CppCodeGenWriteBarrier((&____childRelations_12), value);
	}

	inline static int32_t get_offset_of__parentRelations_13() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____parentRelations_13)); }
	inline DataRelationCollection_t3198980347 * get__parentRelations_13() const { return ____parentRelations_13; }
	inline DataRelationCollection_t3198980347 ** get_address_of__parentRelations_13() { return &____parentRelations_13; }
	inline void set__parentRelations_13(DataRelationCollection_t3198980347 * value)
	{
		____parentRelations_13 = value;
		Il2CppCodeGenWriteBarrier((&____parentRelations_13), value);
	}

	inline static int32_t get_offset_of__prefix_14() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____prefix_14)); }
	inline String_t* get__prefix_14() const { return ____prefix_14; }
	inline String_t** get_address_of__prefix_14() { return &____prefix_14; }
	inline void set__prefix_14(String_t* value)
	{
		____prefix_14 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_14), value);
	}

	inline static int32_t get_offset_of__primaryKeyConstraint_15() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____primaryKeyConstraint_15)); }
	inline UniqueConstraint_t841719017 * get__primaryKeyConstraint_15() const { return ____primaryKeyConstraint_15; }
	inline UniqueConstraint_t841719017 ** get_address_of__primaryKeyConstraint_15() { return &____primaryKeyConstraint_15; }
	inline void set__primaryKeyConstraint_15(UniqueConstraint_t841719017 * value)
	{
		____primaryKeyConstraint_15 = value;
		Il2CppCodeGenWriteBarrier((&____primaryKeyConstraint_15), value);
	}

	inline static int32_t get_offset_of__rows_16() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____rows_16)); }
	inline DataRowCollection_t3217300826 * get__rows_16() const { return ____rows_16; }
	inline DataRowCollection_t3217300826 ** get_address_of__rows_16() { return &____rows_16; }
	inline void set__rows_16(DataRowCollection_t3217300826 * value)
	{
		____rows_16 = value;
		Il2CppCodeGenWriteBarrier((&____rows_16), value);
	}

	inline static int32_t get_offset_of__site_17() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____site_17)); }
	inline RuntimeObject* get__site_17() const { return ____site_17; }
	inline RuntimeObject** get_address_of__site_17() { return &____site_17; }
	inline void set__site_17(RuntimeObject* value)
	{
		____site_17 = value;
		Il2CppCodeGenWriteBarrier((&____site_17), value);
	}

	inline static int32_t get_offset_of__tableName_18() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____tableName_18)); }
	inline String_t* get__tableName_18() const { return ____tableName_18; }
	inline String_t** get_address_of__tableName_18() { return &____tableName_18; }
	inline void set__tableName_18(String_t* value)
	{
		____tableName_18 = value;
		Il2CppCodeGenWriteBarrier((&____tableName_18), value);
	}

	inline static int32_t get_offset_of__duringDataLoad_19() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____duringDataLoad_19)); }
	inline bool get__duringDataLoad_19() const { return ____duringDataLoad_19; }
	inline bool* get_address_of__duringDataLoad_19() { return &____duringDataLoad_19; }
	inline void set__duringDataLoad_19(bool value)
	{
		____duringDataLoad_19 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolationDuringDataLoad_20() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____nullConstraintViolationDuringDataLoad_20)); }
	inline bool get__nullConstraintViolationDuringDataLoad_20() const { return ____nullConstraintViolationDuringDataLoad_20; }
	inline bool* get_address_of__nullConstraintViolationDuringDataLoad_20() { return &____nullConstraintViolationDuringDataLoad_20; }
	inline void set__nullConstraintViolationDuringDataLoad_20(bool value)
	{
		____nullConstraintViolationDuringDataLoad_20 = value;
	}

	inline static int32_t get_offset_of_dataSetPrevEnforceConstraints_21() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___dataSetPrevEnforceConstraints_21)); }
	inline bool get_dataSetPrevEnforceConstraints_21() const { return ___dataSetPrevEnforceConstraints_21; }
	inline bool* get_address_of_dataSetPrevEnforceConstraints_21() { return &___dataSetPrevEnforceConstraints_21; }
	inline void set_dataSetPrevEnforceConstraints_21(bool value)
	{
		___dataSetPrevEnforceConstraints_21 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_22() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___enforceConstraints_22)); }
	inline bool get_enforceConstraints_22() const { return ___enforceConstraints_22; }
	inline bool* get_address_of_enforceConstraints_22() { return &___enforceConstraints_22; }
	inline void set_enforceConstraints_22(bool value)
	{
		___enforceConstraints_22 = value;
	}

	inline static int32_t get_offset_of__rowBuilder_23() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____rowBuilder_23)); }
	inline DataRowBuilder_t3193098686 * get__rowBuilder_23() const { return ____rowBuilder_23; }
	inline DataRowBuilder_t3193098686 ** get_address_of__rowBuilder_23() { return &____rowBuilder_23; }
	inline void set__rowBuilder_23(DataRowBuilder_t3193098686 * value)
	{
		____rowBuilder_23 = value;
		Il2CppCodeGenWriteBarrier((&____rowBuilder_23), value);
	}

	inline static int32_t get_offset_of__indexes_24() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____indexes_24)); }
	inline ArrayList_t2718874744 * get__indexes_24() const { return ____indexes_24; }
	inline ArrayList_t2718874744 ** get_address_of__indexes_24() { return &____indexes_24; }
	inline void set__indexes_24(ArrayList_t2718874744 * value)
	{
		____indexes_24 = value;
		Il2CppCodeGenWriteBarrier((&____indexes_24), value);
	}

	inline static int32_t get_offset_of__recordCache_25() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____recordCache_25)); }
	inline RecordCache_t2814565283 * get__recordCache_25() const { return ____recordCache_25; }
	inline RecordCache_t2814565283 ** get_address_of__recordCache_25() { return &____recordCache_25; }
	inline void set__recordCache_25(RecordCache_t2814565283 * value)
	{
		____recordCache_25 = value;
		Il2CppCodeGenWriteBarrier((&____recordCache_25), value);
	}

	inline static int32_t get_offset_of__defaultValuesRowIndex_26() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____defaultValuesRowIndex_26)); }
	inline int32_t get__defaultValuesRowIndex_26() const { return ____defaultValuesRowIndex_26; }
	inline int32_t* get_address_of__defaultValuesRowIndex_26() { return &____defaultValuesRowIndex_26; }
	inline void set__defaultValuesRowIndex_26(int32_t value)
	{
		____defaultValuesRowIndex_26 = value;
	}

	inline static int32_t get_offset_of_fInitInProgress_27() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___fInitInProgress_27)); }
	inline bool get_fInitInProgress_27() const { return ___fInitInProgress_27; }
	inline bool* get_address_of_fInitInProgress_27() { return &___fInitInProgress_27; }
	inline void set_fInitInProgress_27(bool value)
	{
		___fInitInProgress_27 = value;
	}

	inline static int32_t get_offset_of__virginCaseSensitive_28() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____virginCaseSensitive_28)); }
	inline bool get__virginCaseSensitive_28() const { return ____virginCaseSensitive_28; }
	inline bool* get_address_of__virginCaseSensitive_28() { return &____virginCaseSensitive_28; }
	inline void set__virginCaseSensitive_28(bool value)
	{
		____virginCaseSensitive_28 = value;
	}

	inline static int32_t get_offset_of__propertyDescriptorsCache_29() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____propertyDescriptorsCache_29)); }
	inline PropertyDescriptorCollection_t4164928659 * get__propertyDescriptorsCache_29() const { return ____propertyDescriptorsCache_29; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of__propertyDescriptorsCache_29() { return &____propertyDescriptorsCache_29; }
	inline void set__propertyDescriptorsCache_29(PropertyDescriptorCollection_t4164928659 * value)
	{
		____propertyDescriptorsCache_29 = value;
		Il2CppCodeGenWriteBarrier((&____propertyDescriptorsCache_29), value);
	}

	inline static int32_t get_offset_of__latestPrimaryKeyCols_32() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____latestPrimaryKeyCols_32)); }
	inline DataColumnU5BU5D_t3317819609* get__latestPrimaryKeyCols_32() const { return ____latestPrimaryKeyCols_32; }
	inline DataColumnU5BU5D_t3317819609** get_address_of__latestPrimaryKeyCols_32() { return &____latestPrimaryKeyCols_32; }
	inline void set__latestPrimaryKeyCols_32(DataColumnU5BU5D_t3317819609* value)
	{
		____latestPrimaryKeyCols_32 = value;
		Il2CppCodeGenWriteBarrier((&____latestPrimaryKeyCols_32), value);
	}

	inline static int32_t get_offset_of_empty_rows_33() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___empty_rows_33)); }
	inline DataRowU5BU5D_t3122106530* get_empty_rows_33() const { return ___empty_rows_33; }
	inline DataRowU5BU5D_t3122106530** get_address_of_empty_rows_33() { return &___empty_rows_33; }
	inline void set_empty_rows_33(DataRowU5BU5D_t3122106530* value)
	{
		___empty_rows_33 = value;
		Il2CppCodeGenWriteBarrier((&___empty_rows_33), value);
	}

	inline static int32_t get_offset_of_tableInitialized_34() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___tableInitialized_34)); }
	inline bool get_tableInitialized_34() const { return ___tableInitialized_34; }
	inline bool* get_address_of_tableInitialized_34() { return &___tableInitialized_34; }
	inline void set_tableInitialized_34(bool value)
	{
		___tableInitialized_34 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_35() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___remotingFormat_35)); }
	inline int32_t get_remotingFormat_35() const { return ___remotingFormat_35; }
	inline int32_t* get_address_of_remotingFormat_35() { return &___remotingFormat_35; }
	inline void set_remotingFormat_35(int32_t value)
	{
		___remotingFormat_35 = value;
	}

	inline static int32_t get_offset_of_ColumnChanged_36() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___ColumnChanged_36)); }
	inline DataColumnChangeEventHandler_t1943750078 * get_ColumnChanged_36() const { return ___ColumnChanged_36; }
	inline DataColumnChangeEventHandler_t1943750078 ** get_address_of_ColumnChanged_36() { return &___ColumnChanged_36; }
	inline void set_ColumnChanged_36(DataColumnChangeEventHandler_t1943750078 * value)
	{
		___ColumnChanged_36 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnChanged_36), value);
	}

	inline static int32_t get_offset_of_ColumnChanging_37() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___ColumnChanging_37)); }
	inline DataColumnChangeEventHandler_t1943750078 * get_ColumnChanging_37() const { return ___ColumnChanging_37; }
	inline DataColumnChangeEventHandler_t1943750078 ** get_address_of_ColumnChanging_37() { return &___ColumnChanging_37; }
	inline void set_ColumnChanging_37(DataColumnChangeEventHandler_t1943750078 * value)
	{
		___ColumnChanging_37 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnChanging_37), value);
	}

	inline static int32_t get_offset_of_RowChanged_38() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___RowChanged_38)); }
	inline DataRowChangeEventHandler_t1758895939 * get_RowChanged_38() const { return ___RowChanged_38; }
	inline DataRowChangeEventHandler_t1758895939 ** get_address_of_RowChanged_38() { return &___RowChanged_38; }
	inline void set_RowChanged_38(DataRowChangeEventHandler_t1758895939 * value)
	{
		___RowChanged_38 = value;
		Il2CppCodeGenWriteBarrier((&___RowChanged_38), value);
	}

	inline static int32_t get_offset_of_RowChanging_39() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___RowChanging_39)); }
	inline DataRowChangeEventHandler_t1758895939 * get_RowChanging_39() const { return ___RowChanging_39; }
	inline DataRowChangeEventHandler_t1758895939 ** get_address_of_RowChanging_39() { return &___RowChanging_39; }
	inline void set_RowChanging_39(DataRowChangeEventHandler_t1758895939 * value)
	{
		___RowChanging_39 = value;
		Il2CppCodeGenWriteBarrier((&___RowChanging_39), value);
	}

	inline static int32_t get_offset_of_RowDeleted_40() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___RowDeleted_40)); }
	inline DataRowChangeEventHandler_t1758895939 * get_RowDeleted_40() const { return ___RowDeleted_40; }
	inline DataRowChangeEventHandler_t1758895939 ** get_address_of_RowDeleted_40() { return &___RowDeleted_40; }
	inline void set_RowDeleted_40(DataRowChangeEventHandler_t1758895939 * value)
	{
		___RowDeleted_40 = value;
		Il2CppCodeGenWriteBarrier((&___RowDeleted_40), value);
	}

	inline static int32_t get_offset_of_RowDeleting_41() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___RowDeleting_41)); }
	inline DataRowChangeEventHandler_t1758895939 * get_RowDeleting_41() const { return ___RowDeleting_41; }
	inline DataRowChangeEventHandler_t1758895939 ** get_address_of_RowDeleting_41() { return &___RowDeleting_41; }
	inline void set_RowDeleting_41(DataRowChangeEventHandler_t1758895939 * value)
	{
		___RowDeleting_41 = value;
		Il2CppCodeGenWriteBarrier((&___RowDeleting_41), value);
	}

	inline static int32_t get_offset_of_TableNewRow_42() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___TableNewRow_42)); }
	inline DataTableNewRowEventHandler_t4233335338 * get_TableNewRow_42() const { return ___TableNewRow_42; }
	inline DataTableNewRowEventHandler_t4233335338 ** get_address_of_TableNewRow_42() { return &___TableNewRow_42; }
	inline void set_TableNewRow_42(DataTableNewRowEventHandler_t4233335338 * value)
	{
		___TableNewRow_42 = value;
		Il2CppCodeGenWriteBarrier((&___TableNewRow_42), value);
	}
};

struct DataTable_t1734486485_StaticFields
{
public:
	// System.Data.DataColumn[] System.Data.DataTable::_emptyColumnArray
	DataColumnU5BU5D_t3317819609* ____emptyColumnArray_30;
	// System.Text.RegularExpressions.Regex System.Data.DataTable::SortRegex
	Regex_t3657309853 * ___SortRegex_31;

public:
	inline static int32_t get_offset_of__emptyColumnArray_30() { return static_cast<int32_t>(offsetof(DataTable_t1734486485_StaticFields, ____emptyColumnArray_30)); }
	inline DataColumnU5BU5D_t3317819609* get__emptyColumnArray_30() const { return ____emptyColumnArray_30; }
	inline DataColumnU5BU5D_t3317819609** get_address_of__emptyColumnArray_30() { return &____emptyColumnArray_30; }
	inline void set__emptyColumnArray_30(DataColumnU5BU5D_t3317819609* value)
	{
		____emptyColumnArray_30 = value;
		Il2CppCodeGenWriteBarrier((&____emptyColumnArray_30), value);
	}

	inline static int32_t get_offset_of_SortRegex_31() { return static_cast<int32_t>(offsetof(DataTable_t1734486485_StaticFields, ___SortRegex_31)); }
	inline Regex_t3657309853 * get_SortRegex_31() const { return ___SortRegex_31; }
	inline Regex_t3657309853 ** get_address_of_SortRegex_31() { return &___SortRegex_31; }
	inline void set_SortRegex_31(Regex_t3657309853 * value)
	{
		___SortRegex_31 = value;
		Il2CppCodeGenWriteBarrier((&___SortRegex_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLE_T1734486485_H
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
// System.Data.DataTable[]
struct DataTableU5BU5D_t3044315960  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DataTable_t1734486485 * m_Items[1];

public:
	inline DataTable_t1734486485 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataTable_t1734486485 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataTable_t1734486485 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DataTable_t1734486485 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataTable_t1734486485 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataTable_t1734486485 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t2648313166  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DataRelation_t2257224951 * m_Items[1];

public:
	inline DataRelation_t2257224951 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataRelation_t2257224951 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataRelation_t2257224951 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DataRelation_t2257224951 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataRelation_t2257224951 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataRelation_t2257224951 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3317819609  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DataColumn_t2485786120 * m_Items[1];

public:
	inline DataColumn_t2485786120 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataColumn_t2485786120 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataColumn_t2485786120 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DataColumn_t2485786120 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataColumn_t2485786120 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataColumn_t2485786120 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[])
extern "C"  void List_1_CopyTo_m133310179_gshared (List_1_t257213610 * __this, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void System.Collections.ArrayList::.ctor()
extern "C"  void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor()
extern "C"  void Hashtable__ctor_m1815022027 (Hashtable_t1853889766 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_DataSetName()
extern "C"  String_t* DataSet_get_DataSetName_m3968983494 (DataSet_t3773542243 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_Namespace()
extern "C"  String_t* DataSet_get_Namespace_m1551756382 (DataSet_t3773542243 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_LocaleSpecified()
extern "C"  bool DataSet_get_LocaleSpecified_m828803452 (DataSet_t3773542243 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.DataSet::get_Locale()
extern "C"  CultureInfo_t4157843068 * DataSet_get_Locale_m960157960 (DataSet_t3773542243 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataSet::get_ExtendedProperties()
extern "C"  PropertyCollection_t3446977085 * DataSet_get_ExtendedProperties_m3369523222 (DataSet_t3773542243 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTableCollection::get_Item(System.Int32)
extern "C"  DataTable_t1734486485 * DataTableCollection_get_Item_m109440273 (DataTableCollection_t2837452619 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.PropertyCollection::.ctor()
extern "C"  void PropertyCollection__ctor_m1303034423 (PropertyCollection_t3446977085 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataTable::get_DataSet()
extern "C"  DataSet_t3773542243 * DataTable_get_DataSet_m3061061576 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_Namespace()
extern "C"  String_t* DataTable_get_Namespace_m2107009138 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTableCollection System.Data.DataSet::get_Tables()
extern "C"  DataTableCollection_t2837452619 * DataSet_get_Tables_m3898741783 (DataSet_t3773542243 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataSet::get_Relations()
extern "C"  DataRelationCollection_t3198980347 * DataSet_get_Relations_m1797014571 (DataSet_t3773542243 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Data.DataSet,System.Xml.XmlWriter,System.Data.DataTableCollection,System.Data.DataRelationCollection)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m1728258581 (RuntimeObject * __this /* static, unused */, DataSet_t3773542243 * ___dataset0, XmlWriter_t127905479 * ___writer1, DataTableCollection_t2837452619 * ___tables2, DataRelationCollection_t3198980347 * ___relations3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::.ctor(System.Data.DataSet,System.Xml.XmlWriter,System.Data.DataTableCollection,System.Data.DataRelationCollection)
extern "C"  void XmlSchemaWriter__ctor_m80241102 (XmlSchemaWriter_t4200114175 * __this, DataSet_t3773542243 * ___dataset0, XmlWriter_t127905479 * ___writer1, DataTableCollection_t2837452619 * ___tables2, DataRelationCollection_t3198980347 * ___relations3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteSchema()
extern "C"  void XmlSchemaWriter_WriteSchema_m4254253614 (XmlSchemaWriter_t4200114175 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::.ctor(System.Xml.XmlWriter,System.Data.DataTable[],System.Data.DataRelation[],System.String,System.String,System.Globalization.CultureInfo)
extern "C"  void XmlSchemaWriter__ctor_m3899701125 (XmlSchemaWriter_t4200114175 * __this, XmlWriter_t127905479 * ___writer0, DataTableU5BU5D_t3044315960* ___tables1, DataRelationU5BU5D_t2648313166* ___relations2, String_t* ___mainDataTable3, String_t* ___dataSetName4, CultureInfo_t4157843068 * ___locale5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern "C"  void ListDictionary__ctor_m1767915711 (ListDictionary_t1624492310 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumnCollection System.Data.DataTable::get_Columns()
extern "C"  DataColumnCollection_t479471535 * DataTable_get_Columns_m2964617921 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Prefix()
extern "C"  String_t* DataColumn_get_Prefix_m3565204521 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Namespace()
extern "C"  String_t* DataColumn_get_Namespace_m354885530 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::CheckNamespace(System.String,System.String,System.Collections.Specialized.ListDictionary,System.Collections.Specialized.ListDictionary)
extern "C"  void XmlSchemaWriter_CheckNamespace_m2715501895 (XmlSchemaWriter_t4200114175 * __this, String_t* ___prefix0, String_t* ___ns1, ListDictionary_t1624492310 * ___names2, ListDictionary_t1624492310 * ___includes3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_Prefix()
extern "C"  String_t* DataTable_get_Prefix_m574798994 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String XmlHelper::Encode(System.String)
extern "C"  String_t* XmlHelper_Encode_m327266007 (RuntimeObject * __this /* static, unused */, String_t* ___schemaName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m400667381 (XmlWriter_t127905479 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m2341773285 (XmlWriter_t127905479 * __this, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaWriter::CheckExtendedPropertyExists(System.Data.DataTable[],System.Data.DataRelation[])
extern "C"  bool XmlSchemaWriter_CheckExtendedPropertyExists_m3325967644 (XmlSchemaWriter_t4200114175 * __this, DataTableU5BU5D_t3044315960* ___tables0, DataRelationU5BU5D_t2648313166* ___relations1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Keys()
extern "C"  RuntimeObject* ListDictionary_get_Keys_m3758196857 (ListDictionary_t1624492310 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern "C"  RuntimeObject * ListDictionary_get_Item_m1272472363 (ListDictionary_t1624492310 * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern "C"  int32_t ListDictionary_get_Count_m139246936 (ListDictionary_t1624492310 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataTable::get_ParentRelations()
extern "C"  DataRelationCollection_t3198980347 * DataTable_get_ParentRelations_m2382938702 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableElement(System.Data.DataTable)
extern "C"  void XmlSchemaWriter_WriteTableElement_m4190275309 (XmlSchemaWriter_t4200114175 * __this, DataTable_t1734486485 * ___table0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteDataSetElement()
extern "C"  void XmlSchemaWriter_WriteDataSetElement_m1619178635 (XmlSchemaWriter_t4200114175 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddExtendedPropertyAttributes(System.Data.PropertyCollection)
extern "C"  void XmlSchemaWriter_AddExtendedPropertyAttributes_m1125702825 (XmlSchemaWriter_t4200114175 * __this, PropertyCollection_t3446977085 * ___props0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String)
extern "C"  void XmlWriter_WriteStartAttribute_m2509241395 (XmlWriter_t127905479 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_TableName()
extern "C"  String_t* DataTable_get_TableName_m4002648469 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteConstraints()
extern "C"  void XmlSchemaWriter_WriteConstraints_m3401741529 (XmlSchemaWriter_t4200114175 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteDataRelationAnnotation(System.Data.DataRelation)
extern "C"  void XmlSchemaWriter_WriteDataRelationAnnotation_m3718815923 (XmlSchemaWriter_t4200114175 * __this, DataRelation_t2257224951 * ___rel0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_ColumnName()
extern "C"  String_t* DataColumn_get_ColumnName_m263138074 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimEnd(System.Char[])
extern "C"  String_t* String_TrimEnd_m3824727301 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.ConstraintCollection System.Data.DataTable::get_Constraints()
extern "C"  ConstraintCollection_t259828334 * DataTable_get_Constraints_m710934963 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddUniqueConstraints(System.Data.UniqueConstraint,System.Collections.ArrayList)
extern "C"  void XmlSchemaWriter_AddUniqueConstraints_m2284359376 (XmlSchemaWriter_t4200114175 * __this, UniqueConstraint_t841719017 * ___uniq0, ArrayList_t2718874744 * ___names1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::.ctor(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  void DataRelation__ctor_m1533491764 (DataRelation_t2257224951 * __this, String_t* ___relationName0, DataColumnU5BU5D_t3317819609* ___parentColumns1, DataColumnU5BU5D_t3317819609* ___childColumns2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddForeignKeys(System.Data.DataRelation,System.Collections.ArrayList,System.Boolean)
extern "C"  void XmlSchemaWriter_AddForeignKeys_m3748968575 (XmlSchemaWriter_t4200114175 * __this, DataRelation_t2257224951 * ___rel0, ArrayList_t2718874744 * ___names1, bool ___isConstraintOnly2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::get_IsPrimaryKey()
extern "C"  bool UniqueConstraint_get_IsPrimaryKey_m4092052387 (UniqueConstraint_t841719017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.Constraint::get_ExtendedProperties()
extern "C"  PropertyCollection_t3446977085 * Constraint_get_ExtendedProperties_m3040885957 (Constraint_t2778807214 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.XmlSchemaWriter::get_ConstraintPrefix()
extern "C"  String_t* XmlSchemaWriter_get_ConstraintPrefix_m2906567781 (XmlSchemaWriter_t4200114175 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataTable::get_ExtendedProperties()
extern "C"  PropertyCollection_t3446977085 * DataTable_get_ExtendedProperties_m2477982009 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataColumn::get_ExtendedProperties()
extern "C"  PropertyCollection_t3446977085 * DataColumn_get_ExtendedProperties_m3438260329 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataRelation::get_ExtendedProperties()
extern "C"  PropertyCollection_t3446977085 * DataRelation_get_ExtendedProperties_m4145221577 (DataRelation_t2257224951 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Key()
extern "C"  RuntimeObject * DictionaryEntry_get_Key_m3117378551 (DictionaryEntry_t3123975638 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String)
extern "C"  String_t* XmlConvert_EncodeName_m3491219899 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Value()
extern "C"  RuntimeObject * DictionaryEntry_get_Value_m618120527 (DictionaryEntry_t3123975638 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::WriteObjectXml(System.Object)
extern "C"  String_t* DataSet_WriteObjectXml_m1116058119 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableType(System.Data.DataTable)
extern "C"  void XmlSchemaWriter_WriteTableType_m1855352219 (XmlSchemaWriter_t4200114175 * __this, DataTable_t1734486485 * ___table0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::SplitColumns(System.Data.DataTable,System.Collections.ArrayList&,System.Collections.ArrayList&,System.Data.DataColumn&)
extern "C"  void DataSet_SplitColumns_m3411001580 (RuntimeObject * __this /* static, unused */, DataTable_t1734486485 * ___table0, ArrayList_t2718874744 ** ___atts1, ArrayList_t2718874744 ** ___elements2, DataColumn_t2485786120 ** ___simple3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumn::get_Ordinal()
extern "C"  int32_t DataColumn_get_Ordinal_m3564377713 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int32)
extern "C"  String_t* XmlConvert_ToString_m4082948798 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.DataColumn::get_DataType()
extern "C"  Type_t * DataColumn_get_DataType_m2526332912 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.XmlSchemaWriter::MapType(System.Type)
extern "C"  XmlQualifiedName_t2760654312 * XmlSchemaWriter_MapType_m282308051 (XmlSchemaWriter_t4200114175 * __this, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteQName(System.Xml.XmlQualifiedName)
extern "C"  void XmlSchemaWriter_WriteQName_m1066297384 (XmlSchemaWriter_t4200114175 * __this, XmlQualifiedName_t2760654312 * ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableAttributes(System.Collections.ArrayList)
extern "C"  void XmlSchemaWriter_WriteTableAttributes_m1460086314 (XmlSchemaWriter_t4200114175 * __this, ArrayList_t2718874744 * ___atts0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableTypeParticles(System.Data.DataColumn)
extern "C"  void XmlSchemaWriter_WriteTableTypeParticles_m3120939737 (XmlSchemaWriter_t4200114175 * __this, DataColumn_t2485786120 * ___col0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataTable::get_ChildRelations()
extern "C"  DataRelationCollection_t3198980347 * DataTable_get_ChildRelations_m2244802966 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteChildRelations(System.Data.DataRelation)
extern "C"  void XmlSchemaWriter_WriteChildRelations_m1239162713 (XmlSchemaWriter_t4200114175 * __this, DataRelation_t2257224951 * ___rel0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Caption()
extern "C"  String_t* DataColumn_get_Caption_m2730331524 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_AutoIncrement()
extern "C"  bool DataColumn_get_AutoIncrement_m1410144329 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.DataColumn::get_AutoIncrementSeed()
extern "C"  int64_t DataColumn_get_AutoIncrementSeed_m549745072 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int64)
extern "C"  String_t* XmlConvert_ToString_m2891307708 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.DataColumn::get_AutoIncrementStep()
extern "C"  int64_t DataColumn_get_AutoIncrementStep_m2454811056 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataColumn::GetDefaultValueForType(System.Type)
extern "C"  RuntimeObject * DataColumn_GetDefaultValueForType_m843602835 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataColumn::get_DefaultValue()
extern "C"  RuntimeObject * DataColumn_get_DefaultValue_m805130148 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_ReadOnly()
extern "C"  bool DataColumn_get_ReadOnly_m1255397757 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumn::get_MaxLength()
extern "C"  int32_t DataColumn_get_MaxLength_m902165773 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Equality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C"  bool XmlQualifiedName_op_Equality_m1684199236 (RuntimeObject * __this /* static, unused */, XmlQualifiedName_t2760654312 * p0, XmlQualifiedName_t2760654312 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_AllowDBNull()
extern "C"  bool DataColumn_get_AllowDBNull_m4236132641 (DataColumn_t2485786120 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteSimpleType(System.Data.DataColumn)
extern "C"  void XmlSchemaWriter_WriteSimpleType_m2878921502 (XmlSchemaWriter_t4200114175 * __this, DataColumn_t2485786120 * ___col0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Name()
extern "C"  String_t* XmlQualifiedName_get_Name_m815040483 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Namespace()
extern "C"  String_t* XmlQualifiedName_get_Namespace_m3957593392 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern "C"  void ListDictionary_Add_m3918308031 (ListDictionary_t1624492310 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::HandleExternalNamespace(System.String,System.String,System.Collections.Specialized.ListDictionary)
extern "C"  void XmlSchemaWriter_HandleExternalNamespace_m2773657577 (XmlSchemaWriter_t4200114175 * __this, String_t* ___prefix0, String_t* ___ns1, ListDictionary_t1624492310 * ___includes2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern "C"  bool ListDictionary_Contains_m3951721842 (ListDictionary_t1624492310 * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C"  int32_t Type_GetTypeCode_m480753082 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::DecodeName(System.String)
extern "C"  String_t* XmlConvert_DecodeName_m2953738773 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeLocalName(System.String)
extern "C"  String_t* XmlConvert_EncodeLocalName_m2931600124 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Data.DataTable>::GetEnumerator()
#define List_1_GetEnumerator_m1089387472(__this, method) ((  Enumerator_t800837808  (*) (List_1_t3206561227 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.Data.DataTable>::get_Current()
#define Enumerator_get_Current_m938926476(__this, method) ((  DataTable_t1734486485 * (*) (Enumerator_t800837808 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void System.Data.DataTable::SetRowsID()
extern "C"  void DataTable_SetRowsID_m352324641 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Data.DataTable>::MoveNext()
#define Enumerator_MoveNext_m1588245369(__this, method) ((  bool (*) (Enumerator_t800837808 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Data.DataSet::WriteDiffGramElement(System.Xml.XmlWriter)
extern "C"  void DataSet_WriteDiffGramElement_m966319114 (RuntimeObject * __this /* static, unused */, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<System.Data.DataTable>::get_Item(System.Int32)
#define List_1_get_Item_m3759751087(__this, p0, method) ((  DataTable_t1734486485 * (*) (List_1_t3206561227 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Data.DataRowCollection System.Data.DataTable::get_Rows()
extern "C"  DataRowCollection_t3217300826 * DataTable_get_Rows_m4254623630 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRowCollection::get_Count()
extern "C"  int32_t DataRowCollection_get_Count_m2865227289 (DataRowCollection_t3217300826 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Data.DataTable>::get_Count()
#define List_1_get_Count_m3747673379(__this, method) ((  int32_t (*) (List_1_t3206561227 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void System.Data.DataSet::WriteStartElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.String,System.String,System.String)
extern "C"  void DataSet_WriteStartElement_m2002839902 (RuntimeObject * __this /* static, unused */, XmlWriter_t127905479 * ___writer0, int32_t ___mode1, String_t* ___nspc2, String_t* ___prefix3, String_t* ___name4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Data.DataTable>::CopyTo(!0[])
#define List_1_CopyTo_m1073910440(__this, p0, method) ((  void (*) (List_1_t3206561227 *, DataTableU5BU5D_t3044315960*, const RuntimeMethod*))List_1_CopyTo_m133310179_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<System.Data.DataRelation>::get_Count()
#define List_1_get_Count_m3576787496(__this, method) ((  int32_t (*) (List_1_t3729299693 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Data.DataRelation>::CopyTo(!0[])
#define List_1_CopyTo_m984258531(__this, p0, method) ((  void (*) (List_1_t3729299693 *, DataRelationU5BU5D_t2648313166*, const RuntimeMethod*))List_1_CopyTo_m133310179_gshared)(__this, p0, method)
// System.Boolean System.Data.DataTable::get_LocaleSpecified()
extern "C"  bool DataTable_get_LocaleSpecified_m1631050900 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.DataTable::get_Locale()
extern "C"  CultureInfo_t4157843068 * DataTable_get_Locale_m3093807342 (DataTable_t1734486485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void XmlTableWriter::WriteTableList(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Collections.Generic.List`1<System.Data.DataTable>,System.Data.DataRowVersion)
extern "C"  void XmlTableWriter_WriteTableList_m2696637544 (RuntimeObject * __this /* static, unused */, XmlWriter_t127905479 * ___writer0, int32_t ___mode1, List_1_t3206561227 * ___tables2, int32_t ___version3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Data.DataTable>::.ctor()
#define List_1__ctor_m2004762968(__this, method) ((  void (*) (List_1_t3206561227 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Data.DataTable System.Data.DataTable::GetChanges(System.Data.DataRowState)
extern "C"  DataTable_t1734486485 * DataTable_GetChanges_m3129966972 (DataTable_t1734486485 * __this, int32_t ___rowStates0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Data.DataTable>::Add(!0)
#define List_1_Add_m2716001358(__this, p0, method) ((  void (*) (List_1_t3206561227 *, DataTable_t1734486485 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Data.DataSet::WriteTable(System.Xml.XmlWriter,System.Data.DataTable,System.Data.XmlWriteMode,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteTable_m4184185411 (RuntimeObject * __this /* static, unused */, XmlWriter_t127905479 * ___writer0, DataTable_t1734486485 * ___table1, int32_t ___mode2, int32_t ___version3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Data.XmlSchemaWriter::.ctor(System.Data.DataSet,System.Xml.XmlWriter,System.Data.DataTableCollection,System.Data.DataRelationCollection)
extern "C"  void XmlSchemaWriter__ctor_m80241102 (XmlSchemaWriter_t4200114175 * __this, DataSet_t3773542243 * ___dataset0, XmlWriter_t127905479 * ___writer1, DataTableCollection_t2837452619 * ___tables2, DataRelationCollection_t3198980347 * ___relations3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter__ctor_m80241102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XmlSchemaWriter_t4200114175 * G_B2_0 = NULL;
	XmlSchemaWriter_t4200114175 * G_B1_0 = NULL;
	CultureInfo_t4157843068 * G_B3_0 = NULL;
	XmlSchemaWriter_t4200114175 * G_B3_1 = NULL;
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		__this->set_globalTypeTables_8(L_0);
		Hashtable_t1853889766 * L_1 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_1, /*hidden argument*/NULL);
		__this->set_additionalNamespaces_9(L_1);
		ArrayList_t2718874744 * L_2 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_2, /*hidden argument*/NULL);
		__this->set_annotation_10(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		DataSet_t3773542243 * L_3 = ___dataset0;
		NullCheck(L_3);
		String_t* L_4 = DataSet_get_DataSetName_m3968983494(L_3, /*hidden argument*/NULL);
		__this->set_dataSetName_4(L_4);
		DataSet_t3773542243 * L_5 = ___dataset0;
		NullCheck(L_5);
		String_t* L_6 = DataSet_get_Namespace_m1551756382(L_5, /*hidden argument*/NULL);
		__this->set_dataSetNamespace_5(L_6);
		DataSet_t3773542243 * L_7 = ___dataset0;
		NullCheck(L_7);
		bool L_8 = DataSet_get_LocaleSpecified_m828803452(L_7, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_8)
		{
			G_B2_0 = __this;
			goto IL_0056;
		}
	}
	{
		DataSet_t3773542243 * L_9 = ___dataset0;
		NullCheck(L_9);
		CultureInfo_t4157843068 * L_10 = DataSet_get_Locale_m960157960(L_9, /*hidden argument*/NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		goto IL_0057;
	}

IL_0056:
	{
		G_B3_0 = ((CultureInfo_t4157843068 *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0057:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_dataSetLocale_7(G_B3_0);
		DataSet_t3773542243 * L_11 = ___dataset0;
		NullCheck(L_11);
		PropertyCollection_t3446977085 * L_12 = DataSet_get_ExtendedProperties_m3369523222(L_11, /*hidden argument*/NULL);
		__this->set_dataSetProperties_6(L_12);
		XmlWriter_t127905479 * L_13 = ___writer1;
		__this->set_w_0(L_13);
		DataTableCollection_t2837452619 * L_14 = ___tables2;
		if (!L_14)
		{
			goto IL_00ac;
		}
	}
	{
		DataTableCollection_t2837452619 * L_15 = ___tables2;
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_15);
		__this->set_tables_1(((DataTableU5BU5D_t3044315960*)SZArrayNew(DataTableU5BU5D_t3044315960_il2cpp_TypeInfo_var, (uint32_t)L_16)));
		V_0 = 0;
		goto IL_00a0;
	}

IL_008d:
	{
		DataTableU5BU5D_t3044315960* L_17 = __this->get_tables_1();
		int32_t L_18 = V_0;
		DataTableCollection_t2837452619 * L_19 = ___tables2;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		DataTable_t1734486485 * L_21 = DataTableCollection_get_Item_m109440273(L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (DataTable_t1734486485 *)L_21);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_00a0:
	{
		int32_t L_23 = V_0;
		DataTableCollection_t2837452619 * L_24 = ___tables2;
		NullCheck(L_24);
		int32_t L_25 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_24);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_008d;
		}
	}

IL_00ac:
	{
		DataRelationCollection_t3198980347 * L_26 = ___relations3;
		if (!L_26)
		{
			goto IL_00ed;
		}
	}
	{
		DataRelationCollection_t3198980347 * L_27 = ___relations3;
		NullCheck(L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_27);
		__this->set_relations_2(((DataRelationU5BU5D_t2648313166*)SZArrayNew(DataRelationU5BU5D_t2648313166_il2cpp_TypeInfo_var, (uint32_t)L_28)));
		V_1 = 0;
		goto IL_00e0;
	}

IL_00cc:
	{
		DataRelationU5BU5D_t2648313166* L_29 = __this->get_relations_2();
		int32_t L_30 = V_1;
		DataRelationCollection_t3198980347 * L_31 = ___relations3;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		DataRelation_t2257224951 * L_33 = VirtFuncInvoker1< DataRelation_t2257224951 *, int32_t >::Invoke(14 /* System.Data.DataRelation System.Data.DataRelationCollection::get_Item(System.Int32) */, L_31, L_32);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_33);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (DataRelation_t2257224951 *)L_33);
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00e0:
	{
		int32_t L_35 = V_1;
		DataRelationCollection_t3198980347 * L_36 = ___relations3;
		NullCheck(L_36);
		int32_t L_37 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_36);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_00cc;
		}
	}

IL_00ed:
	{
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::.ctor(System.Xml.XmlWriter,System.Data.DataTable[],System.Data.DataRelation[],System.String,System.String,System.Globalization.CultureInfo)
extern "C"  void XmlSchemaWriter__ctor_m3899701125 (XmlSchemaWriter_t4200114175 * __this, XmlWriter_t127905479 * ___writer0, DataTableU5BU5D_t3044315960* ___tables1, DataRelationU5BU5D_t2648313166* ___relations2, String_t* ___mainDataTable3, String_t* ___dataSetName4, CultureInfo_t4157843068 * ___locale5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter__ctor_m3899701125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		__this->set_globalTypeTables_8(L_0);
		Hashtable_t1853889766 * L_1 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_1, /*hidden argument*/NULL);
		__this->set_additionalNamespaces_9(L_1);
		ArrayList_t2718874744 * L_2 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_2, /*hidden argument*/NULL);
		__this->set_annotation_10(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_3 = ___writer0;
		__this->set_w_0(L_3);
		DataTableU5BU5D_t3044315960* L_4 = ___tables1;
		__this->set_tables_1(L_4);
		DataRelationU5BU5D_t2648313166* L_5 = ___relations2;
		__this->set_relations_2(L_5);
		String_t* L_6 = ___mainDataTable3;
		__this->set_mainDataTable_3(L_6);
		String_t* L_7 = ___dataSetName4;
		__this->set_dataSetName_4(L_7);
		CultureInfo_t4157843068 * L_8 = ___locale5;
		__this->set_dataSetLocale_7(L_8);
		PropertyCollection_t3446977085 * L_9 = (PropertyCollection_t3446977085 *)il2cpp_codegen_object_new(PropertyCollection_t3446977085_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_m1303034423(L_9, /*hidden argument*/NULL);
		__this->set_dataSetProperties_6(L_9);
		DataTableU5BU5D_t3044315960* L_10 = ___tables1;
		NullCheck(L_10);
		int32_t L_11 = 0;
		DataTable_t1734486485 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		DataSet_t3773542243 * L_13 = DataTable_get_DataSet_m3061061576(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0084;
		}
	}
	{
		DataTableU5BU5D_t3044315960* L_14 = ___tables1;
		NullCheck(L_14);
		int32_t L_15 = 0;
		DataTable_t1734486485 * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		DataSet_t3773542243 * L_17 = DataTable_get_DataSet_m3061061576(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18 = DataSet_get_Namespace_m1551756382(L_17, /*hidden argument*/NULL);
		__this->set_dataSetNamespace_5(L_18);
		goto IL_0092;
	}

IL_0084:
	{
		DataTableU5BU5D_t3044315960* L_19 = ___tables1;
		NullCheck(L_19);
		int32_t L_20 = 0;
		DataTable_t1734486485 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		String_t* L_22 = DataTable_get_Namespace_m2107009138(L_21, /*hidden argument*/NULL);
		__this->set_dataSetNamespace_5(L_22);
	}

IL_0092:
	{
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Data.DataSet,System.Xml.XmlWriter)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m3123278331 (RuntimeObject * __this /* static, unused */, DataSet_t3773542243 * ___dataset0, XmlWriter_t127905479 * ___writer1, const RuntimeMethod* method)
{
	{
		DataSet_t3773542243 * L_0 = ___dataset0;
		XmlWriter_t127905479 * L_1 = ___writer1;
		DataSet_t3773542243 * L_2 = ___dataset0;
		NullCheck(L_2);
		DataTableCollection_t2837452619 * L_3 = DataSet_get_Tables_m3898741783(L_2, /*hidden argument*/NULL);
		DataSet_t3773542243 * L_4 = ___dataset0;
		NullCheck(L_4);
		DataRelationCollection_t3198980347 * L_5 = DataSet_get_Relations_m1797014571(L_4, /*hidden argument*/NULL);
		XmlSchemaWriter_WriteXmlSchema_m1728258581(NULL /*static, unused*/, L_0, L_1, L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Data.DataSet,System.Xml.XmlWriter,System.Data.DataTableCollection,System.Data.DataRelationCollection)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m1728258581 (RuntimeObject * __this /* static, unused */, DataSet_t3773542243 * ___dataset0, XmlWriter_t127905479 * ___writer1, DataTableCollection_t2837452619 * ___tables2, DataRelationCollection_t3198980347 * ___relations3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_WriteXmlSchema_m1728258581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataSet_t3773542243 * L_0 = ___dataset0;
		XmlWriter_t127905479 * L_1 = ___writer1;
		DataTableCollection_t2837452619 * L_2 = ___tables2;
		DataRelationCollection_t3198980347 * L_3 = ___relations3;
		XmlSchemaWriter_t4200114175 * L_4 = (XmlSchemaWriter_t4200114175 *)il2cpp_codegen_object_new(XmlSchemaWriter_t4200114175_il2cpp_TypeInfo_var);
		XmlSchemaWriter__ctor_m80241102(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		XmlSchemaWriter_WriteSchema_m4254253614(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Xml.XmlWriter,System.Data.DataTable[],System.Data.DataRelation[],System.String,System.String,System.Globalization.CultureInfo)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m2398581613 (RuntimeObject * __this /* static, unused */, XmlWriter_t127905479 * ___writer0, DataTableU5BU5D_t3044315960* ___tables1, DataRelationU5BU5D_t2648313166* ___relations2, String_t* ___mainDataTable3, String_t* ___dataSetName4, CultureInfo_t4157843068 * ___locale5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_WriteXmlSchema_m2398581613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlWriter_t127905479 * L_0 = ___writer0;
		DataTableU5BU5D_t3044315960* L_1 = ___tables1;
		DataRelationU5BU5D_t2648313166* L_2 = ___relations2;
		String_t* L_3 = ___mainDataTable3;
		String_t* L_4 = ___dataSetName4;
		CultureInfo_t4157843068 * L_5 = ___locale5;
		XmlSchemaWriter_t4200114175 * L_6 = (XmlSchemaWriter_t4200114175 *)il2cpp_codegen_object_new(XmlSchemaWriter_t4200114175_il2cpp_TypeInfo_var);
		XmlSchemaWriter__ctor_m3899701125(L_6, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		XmlSchemaWriter_WriteSchema_m4254253614(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Data.XmlSchemaWriter::get_ConstraintPrefix()
extern "C"  String_t* XmlSchemaWriter_get_ConstraintPrefix_m2906567781 (XmlSchemaWriter_t4200114175 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_get_ConstraintPrefix_m2906567781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		String_t* L_0 = __this->get_dataSetNamespace_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_2 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		Il2CppChar L_3 = ((Il2CppChar)((int32_t)58));
		RuntimeObject * L_4 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3594632370, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_0030;
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_6;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteSchema()
extern "C"  void XmlSchemaWriter_WriteSchema_m4254253614 (XmlSchemaWriter_t4200114175 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_WriteSchema_m4254253614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ListDictionary_t1624492310 * V_0 = NULL;
	ListDictionary_t1624492310 * V_1 = NULL;
	DataTable_t1734486485 * V_2 = NULL;
	DataTableU5BU5D_t3044315960* V_3 = NULL;
	int32_t V_4 = 0;
	DataColumn_t2485786120 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	String_t* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	String_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	DataTable_t1734486485 * V_11 = NULL;
	DataTableU5BU5D_t3044315960* V_12 = NULL;
	int32_t V_13 = 0;
	bool V_14 = false;
	DataRelation_t2257224951 * V_15 = NULL;
	RuntimeObject* V_16 = NULL;
	RuntimeObject* V_17 = NULL;
	RuntimeObject* V_18 = NULL;
	RuntimeObject* V_19 = NULL;
	RuntimeObject* V_20 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ListDictionary_t1624492310 * L_0 = (ListDictionary_t1624492310 *)il2cpp_codegen_object_new(ListDictionary_t1624492310_il2cpp_TypeInfo_var);
		ListDictionary__ctor_m1767915711(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ListDictionary_t1624492310 * L_1 = (ListDictionary_t1624492310 *)il2cpp_codegen_object_new(ListDictionary_t1624492310_il2cpp_TypeInfo_var);
		ListDictionary__ctor_m1767915711(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		DataTableU5BU5D_t3044315960* L_2 = __this->get_tables_1();
		V_3 = L_2;
		V_4 = 0;
		goto IL_0097;
	}

IL_001b:
	{
		DataTableU5BU5D_t3044315960* L_3 = V_3;
		int32_t L_4 = V_4;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		DataTable_t1734486485 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		DataTable_t1734486485 * L_7 = V_2;
		NullCheck(L_7);
		DataColumnCollection_t479471535 * L_8 = DataTable_get_Columns_m2964617921(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject* L_9 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_8);
		V_6 = L_9;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0056;
		}

IL_0032:
		{
			RuntimeObject* L_10 = V_6;
			NullCheck(L_10);
			RuntimeObject * L_11 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_10);
			V_5 = ((DataColumn_t2485786120 *)CastclassClass((RuntimeObject*)L_11, DataColumn_t2485786120_il2cpp_TypeInfo_var));
			DataColumn_t2485786120 * L_12 = V_5;
			NullCheck(L_12);
			String_t* L_13 = DataColumn_get_Prefix_m3565204521(L_12, /*hidden argument*/NULL);
			DataColumn_t2485786120 * L_14 = V_5;
			NullCheck(L_14);
			String_t* L_15 = DataColumn_get_Namespace_m354885530(L_14, /*hidden argument*/NULL);
			ListDictionary_t1624492310 * L_16 = V_0;
			ListDictionary_t1624492310 * L_17 = V_1;
			XmlSchemaWriter_CheckNamespace_m2715501895(__this, L_13, L_15, L_16, L_17, /*hidden argument*/NULL);
		}

IL_0056:
		{
			RuntimeObject* L_18 = V_6;
			NullCheck(L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0032;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x7D, FINALLY_0067);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0067;
	}

FINALLY_0067:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_6;
			V_17 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_21 = V_17;
			if (L_21)
			{
				goto IL_0075;
			}
		}

IL_0074:
		{
			IL2CPP_END_FINALLY(103)
		}

IL_0075:
		{
			RuntimeObject* L_22 = V_17;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(103)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(103)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007d:
	{
		DataTable_t1734486485 * L_23 = V_2;
		NullCheck(L_23);
		String_t* L_24 = DataTable_get_Prefix_m574798994(L_23, /*hidden argument*/NULL);
		DataTable_t1734486485 * L_25 = V_2;
		NullCheck(L_25);
		String_t* L_26 = DataTable_get_Namespace_m2107009138(L_25, /*hidden argument*/NULL);
		ListDictionary_t1624492310 * L_27 = V_0;
		ListDictionary_t1624492310 * L_28 = V_1;
		XmlSchemaWriter_CheckNamespace_m2715501895(__this, L_24, L_26, L_27, L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0097:
	{
		int32_t L_30 = V_4;
		DataTableU5BU5D_t3044315960* L_31 = V_3;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		XmlWriter_t127905479 * L_32 = __this->get_w_0();
		NullCheck(L_32);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_32, _stringLiteral3455563736, _stringLiteral2397802450, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_33 = __this->get_w_0();
		String_t* L_34 = __this->get_dataSetName_4();
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_35 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		XmlWriter_WriteAttributeString_m400667381(L_33, _stringLiteral3454449607, L_35, /*hidden argument*/NULL);
		String_t* L_36 = __this->get_dataSetNamespace_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_38 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0121;
		}
	}
	{
		XmlWriter_t127905479 * L_39 = __this->get_w_0();
		String_t* L_40 = __this->get_dataSetNamespace_5();
		NullCheck(L_39);
		XmlWriter_WriteAttributeString_m400667381(L_39, _stringLiteral973338492, L_40, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_41 = __this->get_w_0();
		String_t* L_42 = __this->get_dataSetNamespace_5();
		NullCheck(L_41);
		XmlWriter_WriteAttributeString_m2341773285(L_41, _stringLiteral3929236445, _stringLiteral3594632370, _stringLiteral2829469855, L_42, /*hidden argument*/NULL);
	}

IL_0121:
	{
		XmlWriter_t127905479 * L_43 = __this->get_w_0();
		String_t* L_44 = __this->get_dataSetNamespace_5();
		NullCheck(L_43);
		XmlWriter_WriteAttributeString_m400667381(L_43, _stringLiteral3929236445, L_44, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_45 = __this->get_w_0();
		NullCheck(L_45);
		XmlWriter_WriteAttributeString_m2341773285(L_45, _stringLiteral3929236445, _stringLiteral3455563736, _stringLiteral2829469855, _stringLiteral1569427300, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_46 = __this->get_w_0();
		NullCheck(L_46);
		XmlWriter_WriteAttributeString_m2341773285(L_46, _stringLiteral3929236445, _stringLiteral1579746915, _stringLiteral2829469855, _stringLiteral832805569, /*hidden argument*/NULL);
		DataTableU5BU5D_t3044315960* L_47 = __this->get_tables_1();
		DataRelationU5BU5D_t2648313166* L_48 = __this->get_relations_2();
		bool L_49 = XmlSchemaWriter_CheckExtendedPropertyExists_m3325967644(__this, L_47, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_01ab;
		}
	}
	{
		XmlWriter_t127905479 * L_50 = __this->get_w_0();
		NullCheck(L_50);
		XmlWriter_WriteAttributeString_m2341773285(L_50, _stringLiteral3929236445, _stringLiteral3557812802, _stringLiteral2829469855, _stringLiteral1176523726, /*hidden argument*/NULL);
	}

IL_01ab:
	{
		String_t* L_51 = __this->get_dataSetNamespace_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_52 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_53 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_01ea;
		}
	}
	{
		XmlWriter_t127905479 * L_54 = __this->get_w_0();
		NullCheck(L_54);
		XmlWriter_WriteAttributeString_m400667381(L_54, _stringLiteral2706799785, _stringLiteral902390592, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_55 = __this->get_w_0();
		NullCheck(L_55);
		XmlWriter_WriteAttributeString_m400667381(L_55, _stringLiteral763438049, _stringLiteral902390592, /*hidden argument*/NULL);
	}

IL_01ea:
	{
		ListDictionary_t1624492310 * L_56 = V_0;
		NullCheck(L_56);
		RuntimeObject* L_57 = ListDictionary_get_Keys_m3758196857(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		RuntimeObject* L_58 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_57);
		V_8 = L_58;
	}

IL_01f7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_022e;
		}

IL_01fc:
		{
			RuntimeObject* L_59 = V_8;
			NullCheck(L_59);
			RuntimeObject * L_60 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_59);
			V_7 = ((String_t*)CastclassSealed((RuntimeObject*)L_60, String_t_il2cpp_TypeInfo_var));
			XmlWriter_t127905479 * L_61 = __this->get_w_0();
			String_t* L_62 = V_7;
			ListDictionary_t1624492310 * L_63 = V_0;
			String_t* L_64 = V_7;
			NullCheck(L_63);
			RuntimeObject * L_65 = ListDictionary_get_Item_m1272472363(L_63, L_64, /*hidden argument*/NULL);
			NullCheck(L_61);
			XmlWriter_WriteAttributeString_m2341773285(L_61, _stringLiteral3929236445, L_62, _stringLiteral2829469855, ((String_t*)IsInstSealed((RuntimeObject*)L_65, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_022e:
		{
			RuntimeObject* L_66 = V_8;
			NullCheck(L_66);
			bool L_67 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_66);
			if (L_67)
			{
				goto IL_01fc;
			}
		}

IL_023a:
		{
			IL2CPP_LEAVE(0x255, FINALLY_023f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_023f;
	}

FINALLY_023f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_68 = V_8;
			V_18 = ((RuntimeObject*)IsInst((RuntimeObject*)L_68, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_69 = V_18;
			if (L_69)
			{
				goto IL_024d;
			}
		}

IL_024c:
		{
			IL2CPP_END_FINALLY(575)
		}

IL_024d:
		{
			RuntimeObject* L_70 = V_18;
			NullCheck(L_70);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_70);
			IL2CPP_END_FINALLY(575)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(575)
	{
		IL2CPP_JUMP_TBL(0x255, IL_0255)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0255:
	{
		ListDictionary_t1624492310 * L_71 = V_1;
		NullCheck(L_71);
		int32_t L_72 = ListDictionary_get_Count_m139246936(L_71, /*hidden argument*/NULL);
		if ((((int32_t)L_72) <= ((int32_t)0)))
		{
			goto IL_0271;
		}
	}
	{
		XmlWriter_t127905479 * L_73 = __this->get_w_0();
		NullCheck(L_73);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, L_73, _stringLiteral2392128703);
	}

IL_0271:
	{
		ListDictionary_t1624492310 * L_74 = V_1;
		NullCheck(L_74);
		RuntimeObject* L_75 = ListDictionary_get_Keys_m3758196857(L_74, /*hidden argument*/NULL);
		NullCheck(L_75);
		RuntimeObject* L_76 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_75);
		V_10 = L_76;
	}

IL_027e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02e5;
		}

IL_0283:
		{
			RuntimeObject* L_77 = V_10;
			NullCheck(L_77);
			RuntimeObject * L_78 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_77);
			V_9 = ((String_t*)CastclassSealed((RuntimeObject*)L_78, String_t_il2cpp_TypeInfo_var));
			XmlWriter_t127905479 * L_79 = __this->get_w_0();
			NullCheck(L_79);
			VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_79, _stringLiteral3455563736, _stringLiteral3207129801, _stringLiteral1569427300);
			XmlWriter_t127905479 * L_80 = __this->get_w_0();
			String_t* L_81 = V_9;
			NullCheck(L_80);
			XmlWriter_WriteAttributeString_m400667381(L_80, _stringLiteral3820675233, L_81, /*hidden argument*/NULL);
			XmlWriter_t127905479 * L_82 = __this->get_w_0();
			ListDictionary_t1624492310 * L_83 = V_1;
			String_t* L_84 = V_9;
			NullCheck(L_83);
			RuntimeObject * L_85 = ListDictionary_get_Item_m1272472363(L_83, L_84, /*hidden argument*/NULL);
			NullCheck(L_82);
			XmlWriter_WriteAttributeString_m400667381(L_82, _stringLiteral4101407196, ((String_t*)IsInstSealed((RuntimeObject*)L_85, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			XmlWriter_t127905479 * L_86 = __this->get_w_0();
			NullCheck(L_86);
			VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_86);
		}

IL_02e5:
		{
			RuntimeObject* L_87 = V_10;
			NullCheck(L_87);
			bool L_88 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_87);
			if (L_88)
			{
				goto IL_0283;
			}
		}

IL_02f1:
		{
			IL2CPP_LEAVE(0x30C, FINALLY_02f6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02f6;
	}

FINALLY_02f6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_89 = V_10;
			V_19 = ((RuntimeObject*)IsInst((RuntimeObject*)L_89, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_90 = V_19;
			if (L_90)
			{
				goto IL_0304;
			}
		}

IL_0303:
		{
			IL2CPP_END_FINALLY(758)
		}

IL_0304:
		{
			RuntimeObject* L_91 = V_19;
			NullCheck(L_91);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_91);
			IL2CPP_END_FINALLY(758)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(758)
	{
		IL2CPP_JUMP_TBL(0x30C, IL_030c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_030c:
	{
		DataTableU5BU5D_t3044315960* L_92 = __this->get_tables_1();
		V_12 = L_92;
		V_13 = 0;
		goto IL_03a5;
	}

IL_031c:
	{
		DataTableU5BU5D_t3044315960* L_93 = V_12;
		int32_t L_94 = V_13;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		DataTable_t1734486485 * L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_11 = L_96;
		V_14 = (bool)1;
		DataTable_t1734486485 * L_97 = V_11;
		NullCheck(L_97);
		DataRelationCollection_t3198980347 * L_98 = DataTable_get_ParentRelations_m2382938702(L_97, /*hidden argument*/NULL);
		NullCheck(L_98);
		RuntimeObject* L_99 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_98);
		V_16 = L_99;
	}

IL_0334:
	try
	{ // begin try (depth: 1)
		{
			goto IL_035b;
		}

IL_0339:
		{
			RuntimeObject* L_100 = V_16;
			NullCheck(L_100);
			RuntimeObject * L_101 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_100);
			V_15 = ((DataRelation_t2257224951 *)CastclassClass((RuntimeObject*)L_101, DataRelation_t2257224951_il2cpp_TypeInfo_var));
			DataRelation_t2257224951 * L_102 = V_15;
			NullCheck(L_102);
			bool L_103 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Data.DataRelation::get_Nested() */, L_102);
			if (!L_103)
			{
				goto IL_035b;
			}
		}

IL_0353:
		{
			V_14 = (bool)0;
			goto IL_0367;
		}

IL_035b:
		{
			RuntimeObject* L_104 = V_16;
			NullCheck(L_104);
			bool L_105 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_104);
			if (L_105)
			{
				goto IL_0339;
			}
		}

IL_0367:
		{
			IL2CPP_LEAVE(0x382, FINALLY_036c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_036c;
	}

FINALLY_036c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_106 = V_16;
			V_20 = ((RuntimeObject*)IsInst((RuntimeObject*)L_106, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_107 = V_20;
			if (L_107)
			{
				goto IL_037a;
			}
		}

IL_0379:
		{
			IL2CPP_END_FINALLY(876)
		}

IL_037a:
		{
			RuntimeObject* L_108 = V_20;
			NullCheck(L_108);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_108);
			IL2CPP_END_FINALLY(876)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(876)
	{
		IL2CPP_JUMP_TBL(0x382, IL_0382)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0382:
	{
		bool L_109 = V_14;
		if (L_109)
		{
			goto IL_039f;
		}
	}
	{
		DataTableU5BU5D_t3044315960* L_110 = __this->get_tables_1();
		NullCheck(L_110);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_110)->max_length))))) >= ((int32_t)2)))
		{
			goto IL_039f;
		}
	}
	{
		DataTable_t1734486485 * L_111 = V_11;
		XmlSchemaWriter_WriteTableElement_m4190275309(__this, L_111, /*hidden argument*/NULL);
	}

IL_039f:
	{
		int32_t L_112 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
	}

IL_03a5:
	{
		int32_t L_113 = V_13;
		DataTableU5BU5D_t3044315960* L_114 = V_12;
		NullCheck(L_114);
		if ((((int32_t)L_113) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_114)->max_length)))))))
		{
			goto IL_031c;
		}
	}
	{
		XmlSchemaWriter_WriteDataSetElement_m1619178635(__this, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_115 = __this->get_w_0();
		NullCheck(L_115);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_115);
		XmlWriter_t127905479 * L_116 = __this->get_w_0();
		NullCheck(L_116);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlWriter::Flush() */, L_116);
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteDataSetElement()
extern "C"  void XmlSchemaWriter_WriteDataSetElement_m1619178635 (XmlSchemaWriter_t4200114175 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_WriteDataSetElement_m1619178635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DataTable_t1734486485 * V_1 = NULL;
	DataTableU5BU5D_t3044315960* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	DataRelation_t2257224951 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject * V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlWriter_t127905479 * L_0 = __this->get_w_0();
		NullCheck(L_0);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_0, _stringLiteral3455563736, _stringLiteral4059539929, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_1 = __this->get_w_0();
		String_t* L_2 = __this->get_dataSetName_4();
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_3 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		XmlWriter_WriteAttributeString_m400667381(L_1, _stringLiteral62725243, L_3, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_4 = __this->get_w_0();
		NullCheck(L_4);
		XmlWriter_WriteAttributeString_m2341773285(L_4, _stringLiteral1579746915, _stringLiteral4125990780, _stringLiteral832805569, _stringLiteral4002445229, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_5 = __this->get_dataSetLocale_7();
		V_0 = (bool)((((RuntimeObject*)(CultureInfo_t4157843068 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_0089;
		}
	}
	{
		XmlWriter_t127905479 * L_7 = __this->get_w_0();
		CultureInfo_t4157843068 * L_8 = __this->get_dataSetLocale_7();
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Globalization.CultureInfo::get_Name() */, L_8);
		NullCheck(L_7);
		XmlWriter_WriteAttributeString_m2341773285(L_7, _stringLiteral1579746915, _stringLiteral3123811713, _stringLiteral832805569, L_9, /*hidden argument*/NULL);
	}

IL_0089:
	{
		String_t* L_10 = __this->get_mainDataTable_3();
		if (!L_10)
		{
			goto IL_00c9;
		}
	}
	{
		String_t* L_11 = __this->get_mainDataTable_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_13 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		XmlWriter_t127905479 * L_14 = __this->get_w_0();
		String_t* L_15 = __this->get_mainDataTable_3();
		NullCheck(L_14);
		XmlWriter_WriteAttributeString_m2341773285(L_14, _stringLiteral1579746915, _stringLiteral1531930854, _stringLiteral832805569, L_15, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_00ee;
		}
	}
	{
		XmlWriter_t127905479 * L_17 = __this->get_w_0();
		NullCheck(L_17);
		XmlWriter_WriteAttributeString_m2341773285(L_17, _stringLiteral1579746915, _stringLiteral2500701358, _stringLiteral832805569, _stringLiteral4002445229, /*hidden argument*/NULL);
	}

IL_00ee:
	{
		PropertyCollection_t3446977085 * L_18 = __this->get_dataSetProperties_6();
		XmlSchemaWriter_AddExtendedPropertyAttributes_m1125702825(__this, L_18, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_19 = __this->get_w_0();
		NullCheck(L_19);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_19, _stringLiteral3455563736, _stringLiteral2444421609, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_20 = __this->get_w_0();
		NullCheck(L_20);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_20, _stringLiteral3455563736, _stringLiteral2342829633, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_21 = __this->get_w_0();
		NullCheck(L_21);
		XmlWriter_WriteAttributeString_m400667381(L_21, _stringLiteral837243573, _stringLiteral3452614544, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_22 = __this->get_w_0();
		NullCheck(L_22);
		XmlWriter_WriteAttributeString_m400667381(L_22, _stringLiteral660438115, _stringLiteral256783401, /*hidden argument*/NULL);
		DataTableU5BU5D_t3044315960* L_23 = __this->get_tables_1();
		V_2 = L_23;
		V_3 = 0;
		goto IL_027b;
	}

IL_0166:
	{
		DataTableU5BU5D_t3044315960* L_24 = V_2;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		DataTable_t1734486485 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_1 = L_27;
		V_4 = (bool)1;
		DataTable_t1734486485 * L_28 = V_1;
		NullCheck(L_28);
		DataRelationCollection_t3198980347 * L_29 = DataTable_get_ParentRelations_m2382938702(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		RuntimeObject* L_30 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_29);
		V_6 = L_30;
	}

IL_017a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01a1;
		}

IL_017f:
		{
			RuntimeObject* L_31 = V_6;
			NullCheck(L_31);
			RuntimeObject * L_32 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_31);
			V_5 = ((DataRelation_t2257224951 *)CastclassClass((RuntimeObject*)L_32, DataRelation_t2257224951_il2cpp_TypeInfo_var));
			DataRelation_t2257224951 * L_33 = V_5;
			NullCheck(L_33);
			bool L_34 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Data.DataRelation::get_Nested() */, L_33);
			if (!L_34)
			{
				goto IL_01a1;
			}
		}

IL_0199:
		{
			V_4 = (bool)0;
			goto IL_01ad;
		}

IL_01a1:
		{
			RuntimeObject* L_35 = V_6;
			NullCheck(L_35);
			bool L_36 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_35);
			if (L_36)
			{
				goto IL_017f;
			}
		}

IL_01ad:
		{
			IL2CPP_LEAVE(0x1C8, FINALLY_01b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b2;
	}

FINALLY_01b2:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_37 = V_6;
			V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_38 = V_10;
			if (L_38)
			{
				goto IL_01c0;
			}
		}

IL_01bf:
		{
			IL2CPP_END_FINALLY(434)
		}

IL_01c0:
		{
			RuntimeObject* L_39 = V_10;
			NullCheck(L_39);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_39);
			IL2CPP_END_FINALLY(434)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(434)
	{
		IL2CPP_JUMP_TBL(0x1C8, IL_01c8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01c8:
	{
		V_7 = (bool)0;
		bool L_40 = V_4;
		if (L_40)
		{
			goto IL_01e6;
		}
	}
	{
		DataTableU5BU5D_t3044315960* L_41 = __this->get_tables_1();
		NullCheck(L_41);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length))))) >= ((int32_t)2)))
		{
			goto IL_01e6;
		}
	}
	{
		V_4 = (bool)1;
		V_7 = (bool)1;
	}

IL_01e6:
	{
		bool L_42 = V_4;
		if (!L_42)
		{
			goto IL_0277;
		}
	}
	{
		String_t* L_43 = __this->get_dataSetNamespace_5();
		DataTable_t1734486485 * L_44 = V_1;
		NullCheck(L_44);
		String_t* L_45 = DataTable_get_Namespace_m2107009138(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_46 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_43, L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_020a;
		}
	}
	{
		bool L_47 = V_7;
		if (!L_47)
		{
			goto IL_0270;
		}
	}

IL_020a:
	{
		XmlWriter_t127905479 * L_48 = __this->get_w_0();
		NullCheck(L_48);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_48, _stringLiteral3455563736, _stringLiteral4059539929, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_49 = __this->get_w_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_49);
		XmlWriter_WriteStartAttribute_m2509241395(L_49, _stringLiteral133510650, L_50, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_51 = __this->get_w_0();
		DataTable_t1734486485 * L_52 = V_1;
		NullCheck(L_52);
		String_t* L_53 = DataTable_get_TableName_m4002648469(L_52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_54 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		DataTable_t1734486485 * L_55 = V_1;
		NullCheck(L_55);
		String_t* L_56 = DataTable_get_Namespace_m2107009138(L_55, /*hidden argument*/NULL);
		NullCheck(L_51);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteQualifiedName(System.String,System.String) */, L_51, L_54, L_56);
		XmlWriter_t127905479 * L_57 = __this->get_w_0();
		NullCheck(L_57);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_57);
		XmlWriter_t127905479 * L_58 = __this->get_w_0();
		NullCheck(L_58);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_58);
		goto IL_0277;
	}

IL_0270:
	{
		DataTable_t1734486485 * L_59 = V_1;
		XmlSchemaWriter_WriteTableElement_m4190275309(__this, L_59, /*hidden argument*/NULL);
	}

IL_0277:
	{
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_027b:
	{
		int32_t L_61 = V_3;
		DataTableU5BU5D_t3044315960* L_62 = V_2;
		NullCheck(L_62);
		if ((((int32_t)L_61) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_62)->max_length)))))))
		{
			goto IL_0166;
		}
	}
	{
		XmlWriter_t127905479 * L_63 = __this->get_w_0();
		NullCheck(L_63);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_63);
		XmlWriter_t127905479 * L_64 = __this->get_w_0();
		NullCheck(L_64);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_64);
		XmlSchemaWriter_WriteConstraints_m3401741529(__this, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_65 = __this->get_w_0();
		NullCheck(L_65);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_65);
		ArrayList_t2718874744 * L_66 = __this->get_annotation_10();
		NullCheck(L_66);
		int32_t L_67 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_66);
		if ((((int32_t)L_67) <= ((int32_t)0)))
		{
			goto IL_0366;
		}
	}
	{
		XmlWriter_t127905479 * L_68 = __this->get_w_0();
		NullCheck(L_68);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_68, _stringLiteral3455563736, _stringLiteral1102688753, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_69 = __this->get_w_0();
		NullCheck(L_69);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_69, _stringLiteral3455563736, _stringLiteral2379694236, _stringLiteral1569427300);
		ArrayList_t2718874744 * L_70 = __this->get_annotation_10();
		NullCheck(L_70);
		RuntimeObject* L_71 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_70);
		V_9 = L_71;
	}

IL_02fd:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0329;
		}

IL_0302:
		{
			RuntimeObject* L_72 = V_9;
			NullCheck(L_72);
			RuntimeObject * L_73 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_72);
			V_8 = L_73;
			RuntimeObject * L_74 = V_8;
			if (((DataRelation_t2257224951 *)IsInstClass((RuntimeObject*)L_74, DataRelation_t2257224951_il2cpp_TypeInfo_var)))
			{
				goto IL_031c;
			}
		}

IL_0317:
		{
			goto IL_0329;
		}

IL_031c:
		{
			RuntimeObject * L_75 = V_8;
			XmlSchemaWriter_WriteDataRelationAnnotation_m3718815923(__this, ((DataRelation_t2257224951 *)CastclassClass((RuntimeObject*)L_75, DataRelation_t2257224951_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_0329:
		{
			RuntimeObject* L_76 = V_9;
			NullCheck(L_76);
			bool L_77 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_76);
			if (L_77)
			{
				goto IL_0302;
			}
		}

IL_0335:
		{
			IL2CPP_LEAVE(0x350, FINALLY_033a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_033a;
	}

FINALLY_033a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_78 = V_9;
			V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_78, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_79 = V_11;
			if (L_79)
			{
				goto IL_0348;
			}
		}

IL_0347:
		{
			IL2CPP_END_FINALLY(826)
		}

IL_0348:
		{
			RuntimeObject* L_80 = V_11;
			NullCheck(L_80);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_80);
			IL2CPP_END_FINALLY(826)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(826)
	{
		IL2CPP_JUMP_TBL(0x350, IL_0350)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0350:
	{
		XmlWriter_t127905479 * L_81 = __this->get_w_0();
		NullCheck(L_81);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_81);
		XmlWriter_t127905479 * L_82 = __this->get_w_0();
		NullCheck(L_82);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_82);
	}

IL_0366:
	{
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteDataRelationAnnotation(System.Data.DataRelation)
extern "C"  void XmlSchemaWriter_WriteDataRelationAnnotation_m3718815923 (XmlSchemaWriter_t4200114175 * __this, DataRelation_t2257224951 * ___rel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_WriteDataRelationAnnotation_m3718815923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DataColumn_t2485786120 * V_1 = NULL;
	DataColumnU5BU5D_t3317819609* V_2 = NULL;
	int32_t V_3 = 0;
	DataColumn_t2485786120 * V_4 = NULL;
	DataColumnU5BU5D_t3317819609* V_5 = NULL;
	int32_t V_6 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		XmlWriter_t127905479 * L_1 = __this->get_w_0();
		NullCheck(L_1);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_1, _stringLiteral1579746915, _stringLiteral951075993, _stringLiteral832805569);
		XmlWriter_t127905479 * L_2 = __this->get_w_0();
		DataRelation_t2257224951 * L_3 = ___rel0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Data.DataRelation::get_RelationName() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_5 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		XmlWriter_WriteAttributeString_m400667381(L_2, _stringLiteral62725243, L_5, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_6 = __this->get_w_0();
		DataRelation_t2257224951 * L_7 = ___rel0;
		NullCheck(L_7);
		DataTable_t1734486485 * L_8 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(12 /* System.Data.DataTable System.Data.DataRelation::get_ParentTable() */, L_7);
		NullCheck(L_8);
		String_t* L_9 = DataTable_get_TableName_m4002648469(L_8, /*hidden argument*/NULL);
		String_t* L_10 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		XmlWriter_WriteAttributeString_m2341773285(L_6, _stringLiteral1579746915, _stringLiteral3215840460, _stringLiteral832805569, L_10, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_11 = __this->get_w_0();
		DataRelation_t2257224951 * L_12 = ___rel0;
		NullCheck(L_12);
		DataTable_t1734486485 * L_13 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(6 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_12);
		NullCheck(L_13);
		String_t* L_14 = DataTable_get_TableName_m4002648469(L_13, /*hidden argument*/NULL);
		String_t* L_15 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		XmlWriter_WriteAttributeString_m2341773285(L_11, _stringLiteral1579746915, _stringLiteral430703268, _stringLiteral832805569, L_15, /*hidden argument*/NULL);
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_16;
		DataRelation_t2257224951 * L_17 = ___rel0;
		NullCheck(L_17);
		DataColumnU5BU5D_t3317819609* L_18 = VirtFuncInvoker0< DataColumnU5BU5D_t3317819609* >::Invoke(10 /* System.Data.DataColumn[] System.Data.DataRelation::get_ParentColumns() */, L_17);
		V_2 = L_18;
		V_3 = 0;
		goto IL_00c2;
	}

IL_00a3:
	{
		DataColumnU5BU5D_t3317819609* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		DataColumn_t2485786120 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_1 = L_22;
		String_t* L_23 = V_0;
		DataColumn_t2485786120 * L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25 = DataColumn_get_ColumnName_m263138074(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_26 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m3755062657(NULL /*static, unused*/, L_23, L_26, _stringLiteral3452614528, /*hidden argument*/NULL);
		V_0 = L_27;
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00c2:
	{
		int32_t L_29 = V_3;
		DataColumnU5BU5D_t3317819609* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_00a3;
		}
	}
	{
		XmlWriter_t127905479 * L_31 = __this->get_w_0();
		String_t* L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33 = String_TrimEnd_m3824727301(L_32, ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		NullCheck(L_31);
		XmlWriter_WriteAttributeString_m2341773285(L_31, _stringLiteral1579746915, _stringLiteral4093622601, _stringLiteral832805569, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_34;
		DataRelation_t2257224951 * L_35 = ___rel0;
		NullCheck(L_35);
		DataColumnU5BU5D_t3317819609* L_36 = VirtFuncInvoker0< DataColumnU5BU5D_t3317819609* >::Invoke(4 /* System.Data.DataColumn[] System.Data.DataRelation::get_ChildColumns() */, L_35);
		V_5 = L_36;
		V_6 = 0;
		goto IL_012c;
	}

IL_0107:
	{
		DataColumnU5BU5D_t3317819609* L_37 = V_5;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		DataColumn_t2485786120 * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_4 = L_40;
		String_t* L_41 = V_0;
		DataColumn_t2485786120 * L_42 = V_4;
		NullCheck(L_42);
		String_t* L_43 = DataColumn_get_ColumnName_m263138074(L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_44 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_45 = String_Concat_m3755062657(NULL /*static, unused*/, L_41, L_44, _stringLiteral3452614528, /*hidden argument*/NULL);
		V_0 = L_45;
		int32_t L_46 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_012c:
	{
		int32_t L_47 = V_6;
		DataColumnU5BU5D_t3317819609* L_48 = V_5;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_48)->max_length)))))))
		{
			goto IL_0107;
		}
	}
	{
		XmlWriter_t127905479 * L_49 = __this->get_w_0();
		String_t* L_50 = V_0;
		NullCheck(L_50);
		String_t* L_51 = String_TrimEnd_m3824727301(L_50, ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		NullCheck(L_49);
		XmlWriter_WriteAttributeString_m2341773285(L_49, _stringLiteral1579746915, _stringLiteral3392650531, _stringLiteral832805569, L_51, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_52 = __this->get_w_0();
		NullCheck(L_52);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_52);
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteConstraints()
extern "C"  void XmlSchemaWriter_WriteConstraints_m3401741529 (XmlSchemaWriter_t4200114175 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_WriteConstraints_m3401741529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t2718874744 * V_0 = NULL;
	DataTable_t1734486485 * V_1 = NULL;
	DataTableU5BU5D_t3044315960* V_2 = NULL;
	int32_t V_3 = 0;
	Constraint_t2778807214 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	UniqueConstraint_t841719017 * V_6 = NULL;
	ForeignKeyConstraint_t3489911826 * V_7 = NULL;
	bool V_8 = false;
	DataRelation_t2257224951 * V_9 = NULL;
	DataRelationU5BU5D_t2648313166* V_10 = NULL;
	int32_t V_11 = 0;
	DataRelation_t2257224951 * V_12 = NULL;
	DataRelation_t2257224951 * V_13 = NULL;
	DataRelationU5BU5D_t2648313166* V_14 = NULL;
	int32_t V_15 = 0;
	RuntimeObject* V_16 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DataTableU5BU5D_t3044315960* L_1 = __this->get_tables_1();
		V_2 = L_1;
		V_3 = 0;
		goto IL_0122;
	}

IL_0014:
	{
		DataTableU5BU5D_t3044315960* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DataTable_t1734486485 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		DataTable_t1734486485 * L_6 = V_1;
		NullCheck(L_6);
		ConstraintCollection_t259828334 * L_7 = DataTable_get_Constraints_m710934963(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_7);
		V_5 = L_8;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f7;
		}

IL_002a:
		{
			RuntimeObject* L_9 = V_5;
			NullCheck(L_9);
			RuntimeObject * L_10 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_9);
			V_4 = ((Constraint_t2778807214 *)CastclassClass((RuntimeObject*)L_10, Constraint_t2778807214_il2cpp_TypeInfo_var));
			Constraint_t2778807214 * L_11 = V_4;
			V_6 = ((UniqueConstraint_t841719017 *)IsInstClass((RuntimeObject*)L_11, UniqueConstraint_t841719017_il2cpp_TypeInfo_var));
			UniqueConstraint_t841719017 * L_12 = V_6;
			if (!L_12)
			{
				goto IL_0056;
			}
		}

IL_0048:
		{
			UniqueConstraint_t841719017 * L_13 = V_6;
			ArrayList_t2718874744 * L_14 = V_0;
			XmlSchemaWriter_AddUniqueConstraints_m2284359376(__this, L_13, L_14, /*hidden argument*/NULL);
			goto IL_00f7;
		}

IL_0056:
		{
			Constraint_t2778807214 * L_15 = V_4;
			V_7 = ((ForeignKeyConstraint_t3489911826 *)IsInstClass((RuntimeObject*)L_15, ForeignKeyConstraint_t3489911826_il2cpp_TypeInfo_var));
			V_8 = (bool)0;
			DataRelationU5BU5D_t2648313166* L_16 = __this->get_relations_2();
			if (!L_16)
			{
				goto IL_00b0;
			}
		}

IL_006d:
		{
			DataRelationU5BU5D_t2648313166* L_17 = __this->get_relations_2();
			V_10 = L_17;
			V_11 = 0;
			goto IL_00a5;
		}

IL_007d:
		{
			DataRelationU5BU5D_t2648313166* L_18 = V_10;
			int32_t L_19 = V_11;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			DataRelation_t2257224951 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			V_9 = L_21;
			DataRelation_t2257224951 * L_22 = V_9;
			NullCheck(L_22);
			String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Data.DataRelation::get_RelationName() */, L_22);
			ForeignKeyConstraint_t3489911826 * L_24 = V_7;
			NullCheck(L_24);
			String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Data.Constraint::get_ConstraintName() */, L_24);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_26 = String_op_Equality_m920492651(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
			if (!L_26)
			{
				goto IL_009f;
			}
		}

IL_009c:
		{
			V_8 = (bool)1;
		}

IL_009f:
		{
			int32_t L_27 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		}

IL_00a5:
		{
			int32_t L_28 = V_11;
			DataRelationU5BU5D_t2648313166* L_29 = V_10;
			NullCheck(L_29);
			if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
			{
				goto IL_007d;
			}
		}

IL_00b0:
		{
			DataTableU5BU5D_t3044315960* L_30 = __this->get_tables_1();
			NullCheck(L_30);
			if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length))))) <= ((int32_t)1)))
			{
				goto IL_00f7;
			}
		}

IL_00be:
		{
			ForeignKeyConstraint_t3489911826 * L_31 = V_7;
			if (!L_31)
			{
				goto IL_00f7;
			}
		}

IL_00c5:
		{
			bool L_32 = V_8;
			if (L_32)
			{
				goto IL_00f7;
			}
		}

IL_00cc:
		{
			ForeignKeyConstraint_t3489911826 * L_33 = V_7;
			NullCheck(L_33);
			String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Data.Constraint::get_ConstraintName() */, L_33);
			ForeignKeyConstraint_t3489911826 * L_35 = V_7;
			NullCheck(L_35);
			DataColumnU5BU5D_t3317819609* L_36 = VirtFuncInvoker0< DataColumnU5BU5D_t3317819609* >::Invoke(21 /* System.Data.DataColumn[] System.Data.ForeignKeyConstraint::get_RelatedColumns() */, L_35);
			ForeignKeyConstraint_t3489911826 * L_37 = V_7;
			NullCheck(L_37);
			DataColumnU5BU5D_t3317819609* L_38 = VirtFuncInvoker0< DataColumnU5BU5D_t3317819609* >::Invoke(16 /* System.Data.DataColumn[] System.Data.ForeignKeyConstraint::get_Columns() */, L_37);
			DataRelation_t2257224951 * L_39 = (DataRelation_t2257224951 *)il2cpp_codegen_object_new(DataRelation_t2257224951_il2cpp_TypeInfo_var);
			DataRelation__ctor_m1533491764(L_39, L_34, L_36, L_38, /*hidden argument*/NULL);
			V_12 = L_39;
			DataRelation_t2257224951 * L_40 = V_12;
			ArrayList_t2718874744 * L_41 = V_0;
			XmlSchemaWriter_AddForeignKeys_m3748968575(__this, L_40, L_41, (bool)1, /*hidden argument*/NULL);
			goto IL_00f7;
		}

IL_00f7:
		{
			RuntimeObject* L_42 = V_5;
			NullCheck(L_42);
			bool L_43 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_42);
			if (L_43)
			{
				goto IL_002a;
			}
		}

IL_0103:
		{
			IL2CPP_LEAVE(0x11E, FINALLY_0108);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0108;
	}

FINALLY_0108:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_44 = V_5;
			V_16 = ((RuntimeObject*)IsInst((RuntimeObject*)L_44, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_45 = V_16;
			if (L_45)
			{
				goto IL_0116;
			}
		}

IL_0115:
		{
			IL2CPP_END_FINALLY(264)
		}

IL_0116:
		{
			RuntimeObject* L_46 = V_16;
			NullCheck(L_46);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_46);
			IL2CPP_END_FINALLY(264)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(264)
	{
		IL2CPP_JUMP_TBL(0x11E, IL_011e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_011e:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_0122:
	{
		int32_t L_48 = V_3;
		DataTableU5BU5D_t3044315960* L_49 = V_2;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_49)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		DataRelationU5BU5D_t2648313166* L_50 = __this->get_relations_2();
		if (!L_50)
		{
			goto IL_0193;
		}
	}
	{
		DataRelationU5BU5D_t2648313166* L_51 = __this->get_relations_2();
		V_14 = L_51;
		V_15 = 0;
		goto IL_0188;
	}

IL_0146:
	{
		DataRelationU5BU5D_t2648313166* L_52 = V_14;
		int32_t L_53 = V_15;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		DataRelation_t2257224951 * L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_13 = L_55;
		DataRelation_t2257224951 * L_56 = V_13;
		NullCheck(L_56);
		UniqueConstraint_t841719017 * L_57 = VirtFuncInvoker0< UniqueConstraint_t841719017 * >::Invoke(11 /* System.Data.UniqueConstraint System.Data.DataRelation::get_ParentKeyConstraint() */, L_56);
		if (!L_57)
		{
			goto IL_0165;
		}
	}
	{
		DataRelation_t2257224951 * L_58 = V_13;
		NullCheck(L_58);
		ForeignKeyConstraint_t3489911826 * L_59 = VirtFuncInvoker0< ForeignKeyConstraint_t3489911826 * >::Invoke(5 /* System.Data.ForeignKeyConstraint System.Data.DataRelation::get_ChildKeyConstraint() */, L_58);
		if (L_59)
		{
			goto IL_0178;
		}
	}

IL_0165:
	{
		ArrayList_t2718874744 * L_60 = __this->get_annotation_10();
		DataRelation_t2257224951 * L_61 = V_13;
		NullCheck(L_60);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_60, L_61);
		goto IL_0182;
	}

IL_0178:
	{
		DataRelation_t2257224951 * L_62 = V_13;
		ArrayList_t2718874744 * L_63 = V_0;
		XmlSchemaWriter_AddForeignKeys_m3748968575(__this, L_62, L_63, (bool)0, /*hidden argument*/NULL);
	}

IL_0182:
	{
		int32_t L_64 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_0188:
	{
		int32_t L_65 = V_15;
		DataRelationU5BU5D_t2648313166* L_66 = V_14;
		NullCheck(L_66);
		if ((((int32_t)L_65) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_66)->max_length)))))))
		{
			goto IL_0146;
		}
	}

IL_0193:
	{
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::AddUniqueConstraints(System.Data.UniqueConstraint,System.Collections.ArrayList)
extern "C"  void XmlSchemaWriter_AddUniqueConstraints_m2284359376 (XmlSchemaWriter_t4200114175 * __this, UniqueConstraint_t841719017 * ___uniq0, ArrayList_t2718874744 * ___names1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_AddUniqueConstraints_m2284359376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataColumn_t2485786120 * V_0 = NULL;
	DataColumnU5BU5D_t3317819609* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	DataColumn_t2485786120 * V_4 = NULL;
	DataColumnU5BU5D_t3317819609* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UniqueConstraint_t841719017 * L_0 = ___uniq0;
		NullCheck(L_0);
		DataColumnU5BU5D_t3317819609* L_1 = VirtFuncInvoker0< DataColumnU5BU5D_t3317819609* >::Invoke(14 /* System.Data.DataColumn[] System.Data.UniqueConstraint::get_Columns() */, L_0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0023;
	}

IL_000e:
	{
		DataColumnU5BU5D_t3317819609* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DataColumn_t2485786120 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		DataColumn_t2485786120 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Data.MappingType System.Data.DataColumn::get_ColumnMapping() */, L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)4))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_9 = V_2;
		DataColumnU5BU5D_t3317819609* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		XmlWriter_t127905479 * L_11 = __this->get_w_0();
		NullCheck(L_11);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_11, _stringLiteral3455563736, _stringLiteral379716803, _stringLiteral1569427300);
		ArrayList_t2718874744 * L_12 = ___names1;
		UniqueConstraint_t841719017 * L_13 = ___uniq0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Data.Constraint::get_ConstraintName() */, L_13);
		NullCheck(L_12);
		bool L_15 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_12, L_14);
		if (L_15)
		{
			goto IL_0079;
		}
	}
	{
		UniqueConstraint_t841719017 * L_16 = ___uniq0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Data.Constraint::get_ConstraintName() */, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_18 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		XmlWriter_t127905479 * L_19 = __this->get_w_0();
		String_t* L_20 = V_3;
		NullCheck(L_19);
		XmlWriter_WriteAttributeString_m400667381(L_19, _stringLiteral62725243, L_20, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_0079:
	{
		UniqueConstraint_t841719017 * L_21 = ___uniq0;
		NullCheck(L_21);
		DataTable_t1734486485 * L_22 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(6 /* System.Data.DataTable System.Data.UniqueConstraint::get_Table() */, L_21);
		NullCheck(L_22);
		String_t* L_23 = DataTable_get_TableName_m4002648469(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_24 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		UniqueConstraint_t841719017 * L_25 = ___uniq0;
		NullCheck(L_25);
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Data.Constraint::get_ConstraintName() */, L_25);
		String_t* L_27 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3755062657(NULL /*static, unused*/, L_24, _stringLiteral3452614641, L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		XmlWriter_t127905479 * L_29 = __this->get_w_0();
		String_t* L_30 = V_3;
		NullCheck(L_29);
		XmlWriter_WriteAttributeString_m400667381(L_29, _stringLiteral62725243, L_30, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_31 = __this->get_w_0();
		UniqueConstraint_t841719017 * L_32 = ___uniq0;
		NullCheck(L_32);
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Data.Constraint::get_ConstraintName() */, L_32);
		String_t* L_34 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		NullCheck(L_31);
		XmlWriter_WriteAttributeString_m2341773285(L_31, _stringLiteral1579746915, _stringLiteral2614094554, _stringLiteral832805569, L_34, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		ArrayList_t2718874744 * L_35 = ___names1;
		String_t* L_36 = V_3;
		NullCheck(L_35);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_35, L_36);
		UniqueConstraint_t841719017 * L_37 = ___uniq0;
		NullCheck(L_37);
		bool L_38 = UniqueConstraint_get_IsPrimaryKey_m4092052387(L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0107;
		}
	}
	{
		XmlWriter_t127905479 * L_39 = __this->get_w_0();
		NullCheck(L_39);
		XmlWriter_WriteAttributeString_m2341773285(L_39, _stringLiteral1579746915, _stringLiteral3094911024, _stringLiteral832805569, _stringLiteral4002445229, /*hidden argument*/NULL);
	}

IL_0107:
	{
		UniqueConstraint_t841719017 * L_40 = ___uniq0;
		NullCheck(L_40);
		PropertyCollection_t3446977085 * L_41 = Constraint_get_ExtendedProperties_m3040885957(L_40, /*hidden argument*/NULL);
		XmlSchemaWriter_AddExtendedPropertyAttributes_m1125702825(__this, L_41, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_42 = __this->get_w_0();
		NullCheck(L_42);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_42, _stringLiteral3455563736, _stringLiteral3977229295, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_43 = __this->get_w_0();
		String_t* L_44 = XmlSchemaWriter_get_ConstraintPrefix_m2906567781(__this, /*hidden argument*/NULL);
		UniqueConstraint_t841719017 * L_45 = ___uniq0;
		NullCheck(L_45);
		DataTable_t1734486485 * L_46 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(6 /* System.Data.DataTable System.Data.UniqueConstraint::get_Table() */, L_45);
		NullCheck(L_46);
		String_t* L_47 = DataTable_get_TableName_m4002648469(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_48 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_49 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1057238065, L_44, L_48, /*hidden argument*/NULL);
		NullCheck(L_43);
		XmlWriter_WriteAttributeString_m400667381(L_43, _stringLiteral2333584123, L_49, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_50 = __this->get_w_0();
		NullCheck(L_50);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_50);
		UniqueConstraint_t841719017 * L_51 = ___uniq0;
		NullCheck(L_51);
		DataColumnU5BU5D_t3317819609* L_52 = VirtFuncInvoker0< DataColumnU5BU5D_t3317819609* >::Invoke(14 /* System.Data.DataColumn[] System.Data.UniqueConstraint::get_Columns() */, L_51);
		V_5 = L_52;
		V_6 = 0;
		goto IL_020f;
	}

IL_0178:
	{
		DataColumnU5BU5D_t3317819609* L_53 = V_5;
		int32_t L_54 = V_6;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		DataColumn_t2485786120 * L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_4 = L_56;
		XmlWriter_t127905479 * L_57 = __this->get_w_0();
		NullCheck(L_57);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_57, _stringLiteral3455563736, _stringLiteral3110369597, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_58 = __this->get_w_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_58);
		XmlWriter_WriteStartAttribute_m2509241395(L_58, _stringLiteral2333584123, L_59, /*hidden argument*/NULL);
		DataColumn_t2485786120 * L_60 = V_4;
		NullCheck(L_60);
		int32_t L_61 = VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Data.MappingType System.Data.DataColumn::get_ColumnMapping() */, L_60);
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_01cb;
		}
	}
	{
		XmlWriter_t127905479 * L_62 = __this->get_w_0();
		NullCheck(L_62);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_62, _stringLiteral3452614624);
	}

IL_01cb:
	{
		XmlWriter_t127905479 * L_63 = __this->get_w_0();
		String_t* L_64 = XmlSchemaWriter_get_ConstraintPrefix_m2906567781(__this, /*hidden argument*/NULL);
		NullCheck(L_63);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_63, L_64);
		XmlWriter_t127905479 * L_65 = __this->get_w_0();
		DataColumn_t2485786120 * L_66 = V_4;
		NullCheck(L_66);
		String_t* L_67 = DataColumn_get_ColumnName_m263138074(L_66, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_68 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
		NullCheck(L_65);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_65, L_68);
		XmlWriter_t127905479 * L_69 = __this->get_w_0();
		NullCheck(L_69);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_69);
		XmlWriter_t127905479 * L_70 = __this->get_w_0();
		NullCheck(L_70);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_70);
		int32_t L_71 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
	}

IL_020f:
	{
		int32_t L_72 = V_6;
		DataColumnU5BU5D_t3317819609* L_73 = V_5;
		NullCheck(L_73);
		if ((((int32_t)L_72) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_73)->max_length)))))))
		{
			goto IL_0178;
		}
	}
	{
		XmlWriter_t127905479 * L_74 = __this->get_w_0();
		NullCheck(L_74);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_74);
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::AddForeignKeys(System.Data.DataRelation,System.Collections.ArrayList,System.Boolean)
extern "C"  void XmlSchemaWriter_AddForeignKeys_m3748968575 (XmlSchemaWriter_t4200114175 * __this, DataRelation_t2257224951 * ___rel0, ArrayList_t2718874744 * ___names1, bool ___isConstraintOnly2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_AddForeignKeys_m3748968575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataColumn_t2485786120 * V_0 = NULL;
	DataColumnU5BU5D_t3317819609* V_1 = NULL;
	int32_t V_2 = 0;
	DataColumn_t2485786120 * V_3 = NULL;
	DataColumnU5BU5D_t3317819609* V_4 = NULL;
	int32_t V_5 = 0;
	UniqueConstraint_t841719017 * V_6 = NULL;
	Constraint_t2778807214 * V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	String_t* V_9 = NULL;
	DataColumn_t2485786120 * V_10 = NULL;
	DataColumnU5BU5D_t3317819609* V_11 = NULL;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		DataRelation_t2257224951 * L_0 = ___rel0;
		NullCheck(L_0);
		DataColumnU5BU5D_t3317819609* L_1 = VirtFuncInvoker0< DataColumnU5BU5D_t3317819609* >::Invoke(10 /* System.Data.DataColumn[] System.Data.DataRelation::get_ParentColumns() */, L_0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0023;
	}

IL_000e:
	{
		DataColumnU5BU5D_t3317819609* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DataColumn_t2485786120 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		DataColumn_t2485786120 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Data.MappingType System.Data.DataColumn::get_ColumnMapping() */, L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)4))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_9 = V_2;
		DataColumnU5BU5D_t3317819609* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		DataRelation_t2257224951 * L_11 = ___rel0;
		NullCheck(L_11);
		DataColumnU5BU5D_t3317819609* L_12 = VirtFuncInvoker0< DataColumnU5BU5D_t3317819609* >::Invoke(4 /* System.Data.DataColumn[] System.Data.DataRelation::get_ChildColumns() */, L_11);
		V_4 = L_12;
		V_5 = 0;
		goto IL_0055;
	}

IL_003c:
	{
		DataColumnU5BU5D_t3317819609* L_13 = V_4;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		DataColumn_t2485786120 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		DataColumn_t2485786120 * L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Data.MappingType System.Data.DataColumn::get_ColumnMapping() */, L_17);
		if ((!(((uint32_t)L_18) == ((uint32_t)4))))
		{
			goto IL_004f;
		}
	}
	{
		return;
	}

IL_004f:
	{
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_20 = V_5;
		DataColumnU5BU5D_t3317819609* L_21 = V_4;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_003c;
		}
	}
	{
		XmlWriter_t127905479 * L_22 = __this->get_w_0();
		NullCheck(L_22);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_22, _stringLiteral3455563736, _stringLiteral1608497597, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_23 = __this->get_w_0();
		DataRelation_t2257224951 * L_24 = ___rel0;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Data.DataRelation::get_RelationName() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_26 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		XmlWriter_WriteAttributeString_m400667381(L_23, _stringLiteral62725243, L_26, /*hidden argument*/NULL);
		V_6 = (UniqueConstraint_t841719017 *)NULL;
		bool L_27 = ___isConstraintOnly2;
		if (!L_27)
		{
			goto IL_011b;
		}
	}
	{
		DataRelation_t2257224951 * L_28 = ___rel0;
		NullCheck(L_28);
		DataTable_t1734486485 * L_29 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(12 /* System.Data.DataTable System.Data.DataRelation::get_ParentTable() */, L_28);
		NullCheck(L_29);
		ConstraintCollection_t259828334 * L_30 = DataTable_get_Constraints_m710934963(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		RuntimeObject* L_31 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_30);
		V_8 = L_31;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ef;
		}

IL_00b5:
		{
			RuntimeObject* L_32 = V_8;
			NullCheck(L_32);
			RuntimeObject * L_33 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_32);
			V_7 = ((Constraint_t2778807214 *)CastclassClass((RuntimeObject*)L_33, Constraint_t2778807214_il2cpp_TypeInfo_var));
			Constraint_t2778807214 * L_34 = V_7;
			V_6 = ((UniqueConstraint_t841719017 *)IsInstClass((RuntimeObject*)L_34, UniqueConstraint_t841719017_il2cpp_TypeInfo_var));
			UniqueConstraint_t841719017 * L_35 = V_6;
			if (L_35)
			{
				goto IL_00d8;
			}
		}

IL_00d3:
		{
			goto IL_00ef;
		}

IL_00d8:
		{
			UniqueConstraint_t841719017 * L_36 = V_6;
			NullCheck(L_36);
			DataColumnU5BU5D_t3317819609* L_37 = VirtFuncInvoker0< DataColumnU5BU5D_t3317819609* >::Invoke(14 /* System.Data.DataColumn[] System.Data.UniqueConstraint::get_Columns() */, L_36);
			DataRelation_t2257224951 * L_38 = ___rel0;
			NullCheck(L_38);
			DataColumnU5BU5D_t3317819609* L_39 = VirtFuncInvoker0< DataColumnU5BU5D_t3317819609* >::Invoke(10 /* System.Data.DataColumn[] System.Data.DataRelation::get_ParentColumns() */, L_38);
			if ((!(((RuntimeObject*)(DataColumnU5BU5D_t3317819609*)L_37) == ((RuntimeObject*)(DataColumnU5BU5D_t3317819609*)L_39))))
			{
				goto IL_00ef;
			}
		}

IL_00ea:
		{
			goto IL_00fb;
		}

IL_00ef:
		{
			RuntimeObject* L_40 = V_8;
			NullCheck(L_40);
			bool L_41 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_40);
			if (L_41)
			{
				goto IL_00b5;
			}
		}

IL_00fb:
		{
			IL2CPP_LEAVE(0x116, FINALLY_0100);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0100;
	}

FINALLY_0100:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_42 = V_8;
			V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_42, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_43 = V_13;
			if (L_43)
			{
				goto IL_010e;
			}
		}

IL_010d:
		{
			IL2CPP_END_FINALLY(256)
		}

IL_010e:
		{
			RuntimeObject* L_44 = V_13;
			NullCheck(L_44);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_44);
			IL2CPP_END_FINALLY(256)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(256)
	{
		IL2CPP_JUMP_TBL(0x116, IL_0116)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0116:
	{
		goto IL_0123;
	}

IL_011b:
	{
		DataRelation_t2257224951 * L_45 = ___rel0;
		NullCheck(L_45);
		UniqueConstraint_t841719017 * L_46 = VirtFuncInvoker0< UniqueConstraint_t841719017 * >::Invoke(11 /* System.Data.UniqueConstraint System.Data.DataRelation::get_ParentKeyConstraint() */, L_45);
		V_6 = L_46;
	}

IL_0123:
	{
		DataRelation_t2257224951 * L_47 = ___rel0;
		NullCheck(L_47);
		DataTable_t1734486485 * L_48 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(12 /* System.Data.DataTable System.Data.DataRelation::get_ParentTable() */, L_47);
		NullCheck(L_48);
		String_t* L_49 = DataTable_get_TableName_m4002648469(L_48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_50 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		UniqueConstraint_t841719017 * L_51 = V_6;
		NullCheck(L_51);
		String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Data.Constraint::get_ConstraintName() */, L_51);
		String_t* L_53 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_54 = String_Concat_m3755062657(NULL /*static, unused*/, L_50, _stringLiteral3452614641, L_53, /*hidden argument*/NULL);
		V_9 = L_54;
		ArrayList_t2718874744 * L_55 = ___names1;
		String_t* L_56 = V_9;
		NullCheck(L_55);
		bool L_57 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_55, L_56);
		if (!L_57)
		{
			goto IL_0190;
		}
	}
	{
		XmlWriter_t127905479 * L_58 = __this->get_w_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_58);
		XmlWriter_WriteStartAttribute_m2509241395(L_58, _stringLiteral1945301054, L_59, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_60 = __this->get_w_0();
		String_t* L_61 = V_9;
		String_t* L_62 = __this->get_dataSetNamespace_5();
		NullCheck(L_60);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteQualifiedName(System.String,System.String) */, L_60, L_61, L_62);
		XmlWriter_t127905479 * L_63 = __this->get_w_0();
		NullCheck(L_63);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_63);
		goto IL_01cd;
	}

IL_0190:
	{
		XmlWriter_t127905479 * L_64 = __this->get_w_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_65 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_64);
		XmlWriter_WriteStartAttribute_m2509241395(L_64, _stringLiteral1945301054, L_65, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_66 = __this->get_w_0();
		UniqueConstraint_t841719017 * L_67 = V_6;
		NullCheck(L_67);
		String_t* L_68 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Data.Constraint::get_ConstraintName() */, L_67);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_69 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		String_t* L_70 = __this->get_dataSetNamespace_5();
		NullCheck(L_66);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteQualifiedName(System.String,System.String) */, L_66, L_69, L_70);
		XmlWriter_t127905479 * L_71 = __this->get_w_0();
		NullCheck(L_71);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_71);
	}

IL_01cd:
	{
		bool L_72 = ___isConstraintOnly2;
		if (!L_72)
		{
			goto IL_01f7;
		}
	}
	{
		XmlWriter_t127905479 * L_73 = __this->get_w_0();
		NullCheck(L_73);
		XmlWriter_WriteAttributeString_m2341773285(L_73, _stringLiteral1579746915, _stringLiteral224753216, _stringLiteral832805569, _stringLiteral4002445229, /*hidden argument*/NULL);
		goto IL_0221;
	}

IL_01f7:
	{
		DataRelation_t2257224951 * L_74 = ___rel0;
		NullCheck(L_74);
		bool L_75 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Data.DataRelation::get_Nested() */, L_74);
		if (!L_75)
		{
			goto IL_0221;
		}
	}
	{
		XmlWriter_t127905479 * L_76 = __this->get_w_0();
		NullCheck(L_76);
		XmlWriter_WriteAttributeString_m2341773285(L_76, _stringLiteral1579746915, _stringLiteral2076657817, _stringLiteral832805569, _stringLiteral4002445229, /*hidden argument*/NULL);
	}

IL_0221:
	{
		UniqueConstraint_t841719017 * L_77 = V_6;
		NullCheck(L_77);
		PropertyCollection_t3446977085 * L_78 = Constraint_get_ExtendedProperties_m3040885957(L_77, /*hidden argument*/NULL);
		XmlSchemaWriter_AddExtendedPropertyAttributes_m1125702825(__this, L_78, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_79 = __this->get_w_0();
		NullCheck(L_79);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_79, _stringLiteral3455563736, _stringLiteral3977229295, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_80 = __this->get_w_0();
		String_t* L_81 = XmlSchemaWriter_get_ConstraintPrefix_m2906567781(__this, /*hidden argument*/NULL);
		DataRelation_t2257224951 * L_82 = ___rel0;
		NullCheck(L_82);
		DataTable_t1734486485 * L_83 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(6 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_82);
		NullCheck(L_83);
		String_t* L_84 = DataTable_get_TableName_m4002648469(L_83, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_85 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_86 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1057238065, L_81, L_85, /*hidden argument*/NULL);
		NullCheck(L_80);
		XmlWriter_WriteAttributeString_m400667381(L_80, _stringLiteral2333584123, L_86, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_87 = __this->get_w_0();
		NullCheck(L_87);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_87);
		DataRelation_t2257224951 * L_88 = ___rel0;
		NullCheck(L_88);
		DataColumnU5BU5D_t3317819609* L_89 = VirtFuncInvoker0< DataColumnU5BU5D_t3317819609* >::Invoke(4 /* System.Data.DataColumn[] System.Data.DataRelation::get_ChildColumns() */, L_88);
		V_11 = L_89;
		V_12 = 0;
		goto IL_032a;
	}

IL_0293:
	{
		DataColumnU5BU5D_t3317819609* L_90 = V_11;
		int32_t L_91 = V_12;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		DataColumn_t2485786120 * L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_10 = L_93;
		XmlWriter_t127905479 * L_94 = __this->get_w_0();
		NullCheck(L_94);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_94, _stringLiteral3455563736, _stringLiteral3110369597, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_95 = __this->get_w_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_96 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_95);
		XmlWriter_WriteStartAttribute_m2509241395(L_95, _stringLiteral2333584123, L_96, /*hidden argument*/NULL);
		DataColumn_t2485786120 * L_97 = V_10;
		NullCheck(L_97);
		int32_t L_98 = VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Data.MappingType System.Data.DataColumn::get_ColumnMapping() */, L_97);
		if ((!(((uint32_t)L_98) == ((uint32_t)2))))
		{
			goto IL_02e6;
		}
	}
	{
		XmlWriter_t127905479 * L_99 = __this->get_w_0();
		NullCheck(L_99);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_99, _stringLiteral3452614624);
	}

IL_02e6:
	{
		XmlWriter_t127905479 * L_100 = __this->get_w_0();
		String_t* L_101 = XmlSchemaWriter_get_ConstraintPrefix_m2906567781(__this, /*hidden argument*/NULL);
		NullCheck(L_100);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_100, L_101);
		XmlWriter_t127905479 * L_102 = __this->get_w_0();
		DataColumn_t2485786120 * L_103 = V_10;
		NullCheck(L_103);
		String_t* L_104 = DataColumn_get_ColumnName_m263138074(L_103, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_105 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_104, /*hidden argument*/NULL);
		NullCheck(L_102);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_102, L_105);
		XmlWriter_t127905479 * L_106 = __this->get_w_0();
		NullCheck(L_106);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_106);
		XmlWriter_t127905479 * L_107 = __this->get_w_0();
		NullCheck(L_107);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_107);
		int32_t L_108 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
	}

IL_032a:
	{
		int32_t L_109 = V_12;
		DataColumnU5BU5D_t3317819609* L_110 = V_11;
		NullCheck(L_110);
		if ((((int32_t)L_109) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_110)->max_length)))))))
		{
			goto IL_0293;
		}
	}
	{
		XmlWriter_t127905479 * L_111 = __this->get_w_0();
		NullCheck(L_111);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_111);
		return;
	}
}
// System.Boolean System.Data.XmlSchemaWriter::CheckExtendedPropertyExists(System.Data.DataTable[],System.Data.DataRelation[])
extern "C"  bool XmlSchemaWriter_CheckExtendedPropertyExists_m3325967644 (XmlSchemaWriter_t4200114175 * __this, DataTableU5BU5D_t3044315960* ___tables0, DataRelationU5BU5D_t2648313166* ___relations1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_CheckExtendedPropertyExists_m3325967644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataTable_t1734486485 * V_0 = NULL;
	DataTableU5BU5D_t3044315960* V_1 = NULL;
	int32_t V_2 = 0;
	DataColumn_t2485786120 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Constraint_t2778807214 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	DataRelation_t2257224951 * V_7 = NULL;
	DataRelationU5BU5D_t2648313166* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	RuntimeObject* V_11 = NULL;
	RuntimeObject* V_12 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		PropertyCollection_t3446977085 * L_0 = __this->get_dataSetProperties_6();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0013:
	{
		DataTableU5BU5D_t3044315960* L_2 = ___tables0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_00f7;
	}

IL_001c:
	{
		DataTableU5BU5D_t3044315960* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		DataTable_t1734486485 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		DataTable_t1734486485 * L_7 = V_0;
		NullCheck(L_7);
		PropertyCollection_t3446977085 * L_8 = DataTable_get_ExtendedProperties_m2477982009(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_8);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)1;
	}

IL_0033:
	{
		DataTable_t1734486485 * L_10 = V_0;
		NullCheck(L_10);
		DataColumnCollection_t479471535 * L_11 = DataTable_get_Columns_m2964617921(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		RuntimeObject* L_12 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_11);
		V_4 = L_12;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006b;
		}

IL_0045:
		{
			RuntimeObject* L_13 = V_4;
			NullCheck(L_13);
			RuntimeObject * L_14 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_13);
			V_3 = ((DataColumn_t2485786120 *)CastclassClass((RuntimeObject*)L_14, DataColumn_t2485786120_il2cpp_TypeInfo_var));
			DataColumn_t2485786120 * L_15 = V_3;
			NullCheck(L_15);
			PropertyCollection_t3446977085 * L_16 = DataColumn_get_ExtendedProperties_m3438260329(L_15, /*hidden argument*/NULL);
			NullCheck(L_16);
			int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_16);
			if ((((int32_t)L_17) <= ((int32_t)0)))
			{
				goto IL_006b;
			}
		}

IL_0063:
		{
			V_10 = (bool)1;
			IL2CPP_LEAVE(0x141, FINALLY_007c);
		}

IL_006b:
		{
			RuntimeObject* L_18 = V_4;
			NullCheck(L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0045;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x92, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_4;
			V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_21 = V_11;
			if (L_21)
			{
				goto IL_008a;
			}
		}

IL_0089:
		{
			IL2CPP_END_FINALLY(124)
		}

IL_008a:
		{
			RuntimeObject* L_22 = V_11;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(124)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x141, IL_0141)
		IL2CPP_JUMP_TBL(0x92, IL_0092)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0092:
	{
		DataTable_t1734486485 * L_23 = V_0;
		NullCheck(L_23);
		ConstraintCollection_t259828334 * L_24 = DataTable_get_Constraints_m710934963(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		RuntimeObject* L_25 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_24);
		V_6 = L_25;
	}

IL_009f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00cc;
		}

IL_00a4:
		{
			RuntimeObject* L_26 = V_6;
			NullCheck(L_26);
			RuntimeObject * L_27 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_26);
			V_5 = ((Constraint_t2778807214 *)CastclassClass((RuntimeObject*)L_27, Constraint_t2778807214_il2cpp_TypeInfo_var));
			Constraint_t2778807214 * L_28 = V_5;
			NullCheck(L_28);
			PropertyCollection_t3446977085 * L_29 = Constraint_get_ExtendedProperties_m3040885957(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			int32_t L_30 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_29);
			if ((((int32_t)L_30) <= ((int32_t)0)))
			{
				goto IL_00cc;
			}
		}

IL_00c4:
		{
			V_10 = (bool)1;
			IL2CPP_LEAVE(0x141, FINALLY_00dd);
		}

IL_00cc:
		{
			RuntimeObject* L_31 = V_6;
			NullCheck(L_31);
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_31);
			if (L_32)
			{
				goto IL_00a4;
			}
		}

IL_00d8:
		{
			IL2CPP_LEAVE(0xF3, FINALLY_00dd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00dd;
	}

FINALLY_00dd:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_6;
			V_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_12;
			if (L_34)
			{
				goto IL_00eb;
			}
		}

IL_00ea:
		{
			IL2CPP_END_FINALLY(221)
		}

IL_00eb:
		{
			RuntimeObject* L_35 = V_12;
			NullCheck(L_35);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_35);
			IL2CPP_END_FINALLY(221)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(221)
	{
		IL2CPP_JUMP_TBL(0x141, IL_0141)
		IL2CPP_JUMP_TBL(0xF3, IL_00f3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f3:
	{
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00f7:
	{
		int32_t L_37 = V_2;
		DataTableU5BU5D_t3044315960* L_38 = V_1;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_38)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		DataRelationU5BU5D_t2648313166* L_39 = ___relations1;
		if (L_39)
		{
			goto IL_0108;
		}
	}
	{
		return (bool)0;
	}

IL_0108:
	{
		DataRelationU5BU5D_t2648313166* L_40 = ___relations1;
		V_8 = L_40;
		V_9 = 0;
		goto IL_0134;
	}

IL_0113:
	{
		DataRelationU5BU5D_t2648313166* L_41 = V_8;
		int32_t L_42 = V_9;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		DataRelation_t2257224951 * L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_7 = L_44;
		DataRelation_t2257224951 * L_45 = V_7;
		NullCheck(L_45);
		PropertyCollection_t3446977085 * L_46 = DataRelation_get_ExtendedProperties_m4145221577(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		int32_t L_47 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_46);
		if ((((int32_t)L_47) <= ((int32_t)0)))
		{
			goto IL_012e;
		}
	}
	{
		return (bool)1;
	}

IL_012e:
	{
		int32_t L_48 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_0134:
	{
		int32_t L_49 = V_9;
		DataRelationU5BU5D_t2648313166* L_50 = V_8;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_50)->max_length)))))))
		{
			goto IL_0113;
		}
	}
	{
		return (bool)0;
	}

IL_0141:
	{
		bool L_51 = V_10;
		return L_51;
	}
}
// System.Void System.Data.XmlSchemaWriter::AddExtendedPropertyAttributes(System.Data.PropertyCollection)
extern "C"  void XmlSchemaWriter_AddExtendedPropertyAttributes_m1125702825 (XmlSchemaWriter_t4200114175 * __this, PropertyCollection_t3446977085 * ___props0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_AddExtendedPropertyAttributes_m1125702825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t3123975638  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		PropertyCollection_t3446977085 * L_0 = ___props0;
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(32 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_000c:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((*(DictionaryEntry_t3123975638 *)((DictionaryEntry_t3123975638 *)UnBox(L_3, DictionaryEntry_t3123975638_il2cpp_TypeInfo_var))));
			XmlWriter_t127905479 * L_4 = __this->get_w_0();
			RuntimeObject * L_5 = DictionaryEntry_get_Key_m3117378551((&V_0), /*hidden argument*/NULL);
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
			IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
			String_t* L_7 = XmlConvert_EncodeName_m3491219899(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			NullCheck(L_4);
			VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(23 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, L_4, _stringLiteral3557812802, L_7, _stringLiteral1176523726);
			RuntimeObject * L_8 = DictionaryEntry_get_Value_m618120527((&V_0), /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0061;
			}
		}

IL_004a:
		{
			XmlWriter_t127905479 * L_9 = __this->get_w_0();
			RuntimeObject * L_10 = DictionaryEntry_get_Value_m618120527((&V_0), /*hidden argument*/NULL);
			String_t* L_11 = DataSet_WriteObjectXml_m1116058119(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			NullCheck(L_9);
			VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_9, L_11);
		}

IL_0061:
		{
			XmlWriter_t127905479 * L_12 = __this->get_w_0();
			NullCheck(L_12);
			VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_12);
		}

IL_006c:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_000c;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x8E, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_1;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_16 = V_2;
			if (L_16)
			{
				goto IL_0087;
			}
		}

IL_0086:
		{
			IL2CPP_END_FINALLY(124)
		}

IL_0087:
		{
			RuntimeObject* L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_17);
			IL2CPP_END_FINALLY(124)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x8E, IL_008e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008e:
	{
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteTableElement(System.Data.DataTable)
extern "C"  void XmlSchemaWriter_WriteTableElement_m4190275309 (XmlSchemaWriter_t4200114175 * __this, DataTable_t1734486485 * ___table0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_WriteTableElement_m4190275309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlWriter_t127905479 * L_0 = __this->get_w_0();
		NullCheck(L_0);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_0, _stringLiteral3455563736, _stringLiteral4059539929, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_1 = __this->get_w_0();
		DataTable_t1734486485 * L_2 = ___table0;
		NullCheck(L_2);
		String_t* L_3 = DataTable_get_TableName_m4002648469(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_4 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		XmlWriter_WriteAttributeString_m400667381(L_1, _stringLiteral62725243, L_4, /*hidden argument*/NULL);
		DataTable_t1734486485 * L_5 = ___table0;
		NullCheck(L_5);
		PropertyCollection_t3446977085 * L_6 = DataTable_get_ExtendedProperties_m2477982009(L_5, /*hidden argument*/NULL);
		XmlSchemaWriter_AddExtendedPropertyAttributes_m1125702825(__this, L_6, /*hidden argument*/NULL);
		DataTable_t1734486485 * L_7 = ___table0;
		XmlSchemaWriter_WriteTableType_m1855352219(__this, L_7, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_8 = __this->get_w_0();
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_8);
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteTableType(System.Data.DataTable)
extern "C"  void XmlSchemaWriter_WriteTableType_m1855352219 (XmlSchemaWriter_t4200114175 * __this, DataTable_t1734486485 * ___table0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_WriteTableType_m1855352219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t2718874744 * V_0 = NULL;
	ArrayList_t2718874744 * V_1 = NULL;
	DataColumn_t2485786120 * V_2 = NULL;
	bool V_3 = false;
	DataRelation_t2257224951 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	DataColumn_t2485786120 * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	DataRelation_t2257224951 * V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	RuntimeObject* V_12 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		DataTable_t1734486485 * L_0 = ___table0;
		DataSet_SplitColumns_m3411001580(NULL /*static, unused*/, L_0, (&V_1), (&V_0), (&V_2), /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_1 = __this->get_w_0();
		NullCheck(L_1);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_1, _stringLiteral3455563736, _stringLiteral2444421609, _stringLiteral1569427300);
		DataColumn_t2485786120 * L_2 = V_2;
		if (!L_2)
		{
			goto IL_00f3;
		}
	}
	{
		XmlWriter_t127905479 * L_3 = __this->get_w_0();
		NullCheck(L_3);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_3, _stringLiteral3455563736, _stringLiteral2185284321, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_4 = __this->get_w_0();
		DataColumn_t2485786120 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = DataColumn_get_ColumnName_m263138074(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_7 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		XmlWriter_WriteAttributeString_m2341773285(L_4, _stringLiteral1579746915, _stringLiteral2264397076, _stringLiteral832805569, L_7, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_8 = __this->get_w_0();
		DataColumn_t2485786120 * L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = DataColumn_get_Ordinal_m3564377713(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_11 = XmlConvert_ToString_m4082948798(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		XmlWriter_WriteAttributeString_m2341773285(L_8, _stringLiteral1579746915, _stringLiteral3378744793, _stringLiteral832805569, L_11, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_12 = __this->get_w_0();
		NullCheck(L_12);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_12, _stringLiteral3455563736, _stringLiteral1610623306, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_13 = __this->get_w_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_13);
		XmlWriter_WriteStartAttribute_m2509241395(L_13, _stringLiteral2838662761, L_14, /*hidden argument*/NULL);
		DataColumn_t2485786120 * L_15 = V_2;
		NullCheck(L_15);
		Type_t * L_16 = DataColumn_get_DataType_m2526332912(L_15, /*hidden argument*/NULL);
		XmlQualifiedName_t2760654312 * L_17 = XmlSchemaWriter_MapType_m282308051(__this, L_16, /*hidden argument*/NULL);
		XmlSchemaWriter_WriteQName_m1066297384(__this, L_17, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_18 = __this->get_w_0();
		NullCheck(L_18);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_18);
		ArrayList_t2718874744 * L_19 = V_1;
		XmlSchemaWriter_WriteTableAttributes_m1460086314(__this, L_19, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_20 = __this->get_w_0();
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_20);
		goto IL_0240;
	}

IL_00f3:
	{
		ArrayList_t2718874744 * L_21 = V_1;
		XmlSchemaWriter_WriteTableAttributes_m1460086314(__this, L_21, /*hidden argument*/NULL);
		V_3 = (bool)0;
		DataTable_t1734486485 * L_22 = ___table0;
		NullCheck(L_22);
		DataRelationCollection_t3198980347 * L_23 = DataTable_get_ParentRelations_m2382938702(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		RuntimeObject* L_24 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_23);
		V_5 = L_24;
	}

IL_0109:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012f;
		}

IL_010e:
		{
			RuntimeObject* L_25 = V_5;
			NullCheck(L_25);
			RuntimeObject * L_26 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_25);
			V_4 = ((DataRelation_t2257224951 *)CastclassClass((RuntimeObject*)L_26, DataRelation_t2257224951_il2cpp_TypeInfo_var));
			DataRelation_t2257224951 * L_27 = V_4;
			NullCheck(L_27);
			bool L_28 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Data.DataRelation::get_Nested() */, L_27);
			if (!L_28)
			{
				goto IL_012f;
			}
		}

IL_0128:
		{
			V_3 = (bool)1;
			goto IL_013b;
		}

IL_012f:
		{
			RuntimeObject* L_29 = V_5;
			NullCheck(L_29);
			bool L_30 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_010e;
			}
		}

IL_013b:
		{
			IL2CPP_LEAVE(0x156, FINALLY_0140);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0140;
	}

FINALLY_0140:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_31 = V_5;
			V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_31, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_32 = V_10;
			if (L_32)
			{
				goto IL_014e;
			}
		}

IL_014d:
		{
			IL2CPP_END_FINALLY(320)
		}

IL_014e:
		{
			RuntimeObject* L_33 = V_10;
			NullCheck(L_33);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_33);
			IL2CPP_END_FINALLY(320)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(320)
	{
		IL2CPP_JUMP_TBL(0x156, IL_0156)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0156:
	{
		ArrayList_t2718874744 * L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_34);
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		bool L_36 = V_3;
		if (!L_36)
		{
			goto IL_0240;
		}
	}
	{
		DataTableU5BU5D_t3044315960* L_37 = __this->get_tables_1();
		NullCheck(L_37);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_37)->max_length))))) >= ((int32_t)2)))
		{
			goto IL_0240;
		}
	}

IL_0176:
	{
		XmlWriter_t127905479 * L_38 = __this->get_w_0();
		NullCheck(L_38);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_38, _stringLiteral3455563736, _stringLiteral3810116474, _stringLiteral1569427300);
		ArrayList_t2718874744 * L_39 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_40 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_39);
		V_7 = L_40;
	}

IL_0198:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01b3;
		}

IL_019d:
		{
			RuntimeObject* L_41 = V_7;
			NullCheck(L_41);
			RuntimeObject * L_42 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_41);
			V_6 = ((DataColumn_t2485786120 *)CastclassClass((RuntimeObject*)L_42, DataColumn_t2485786120_il2cpp_TypeInfo_var));
			DataColumn_t2485786120 * L_43 = V_6;
			XmlSchemaWriter_WriteTableTypeParticles_m3120939737(__this, L_43, /*hidden argument*/NULL);
		}

IL_01b3:
		{
			RuntimeObject* L_44 = V_7;
			NullCheck(L_44);
			bool L_45 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_44);
			if (L_45)
			{
				goto IL_019d;
			}
		}

IL_01bf:
		{
			IL2CPP_LEAVE(0x1DA, FINALLY_01c4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01c4;
	}

FINALLY_01c4:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_46 = V_7;
			V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_46, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_47 = V_11;
			if (L_47)
			{
				goto IL_01d2;
			}
		}

IL_01d1:
		{
			IL2CPP_END_FINALLY(452)
		}

IL_01d2:
		{
			RuntimeObject* L_48 = V_11;
			NullCheck(L_48);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_48);
			IL2CPP_END_FINALLY(452)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(452)
	{
		IL2CPP_JUMP_TBL(0x1DA, IL_01da)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01da:
	{
		DataTable_t1734486485 * L_49 = ___table0;
		NullCheck(L_49);
		DataRelationCollection_t3198980347 * L_50 = DataTable_get_ChildRelations_m2244802966(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		RuntimeObject* L_51 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_50);
		V_9 = L_51;
	}

IL_01e7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020e;
		}

IL_01ec:
		{
			RuntimeObject* L_52 = V_9;
			NullCheck(L_52);
			RuntimeObject * L_53 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_52);
			V_8 = ((DataRelation_t2257224951 *)CastclassClass((RuntimeObject*)L_53, DataRelation_t2257224951_il2cpp_TypeInfo_var));
			DataRelation_t2257224951 * L_54 = V_8;
			NullCheck(L_54);
			bool L_55 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Data.DataRelation::get_Nested() */, L_54);
			if (!L_55)
			{
				goto IL_020e;
			}
		}

IL_0206:
		{
			DataRelation_t2257224951 * L_56 = V_8;
			XmlSchemaWriter_WriteChildRelations_m1239162713(__this, L_56, /*hidden argument*/NULL);
		}

IL_020e:
		{
			RuntimeObject* L_57 = V_9;
			NullCheck(L_57);
			bool L_58 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_57);
			if (L_58)
			{
				goto IL_01ec;
			}
		}

IL_021a:
		{
			IL2CPP_LEAVE(0x235, FINALLY_021f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_021f;
	}

FINALLY_021f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_59 = V_9;
			V_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_59, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_60 = V_12;
			if (L_60)
			{
				goto IL_022d;
			}
		}

IL_022c:
		{
			IL2CPP_END_FINALLY(543)
		}

IL_022d:
		{
			RuntimeObject* L_61 = V_12;
			NullCheck(L_61);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_61);
			IL2CPP_END_FINALLY(543)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(543)
	{
		IL2CPP_JUMP_TBL(0x235, IL_0235)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0235:
	{
		XmlWriter_t127905479 * L_62 = __this->get_w_0();
		NullCheck(L_62);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_62);
	}

IL_0240:
	{
		XmlWriter_t127905479 * L_63 = __this->get_w_0();
		NullCheck(L_63);
		VirtActionInvoker0::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, L_63);
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteTableTypeParticles(System.Data.DataColumn)
extern "C"  void XmlSchemaWriter_WriteTableTypeParticles_m3120939737 (XmlSchemaWriter_t4200114175 * __this, DataColumn_t2485786120 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_WriteTableTypeParticles_m3120939737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlQualifiedName_t2760654312 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		XmlWriter_t127905479 * L_0 = __this->get_w_0();
		NullCheck(L_0);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_0, _stringLiteral3455563736, _stringLiteral4059539929, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_1 = __this->get_w_0();
		DataColumn_t2485786120 * L_2 = ___col0;
		NullCheck(L_2);
		String_t* L_3 = DataColumn_get_ColumnName_m263138074(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_4 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		XmlWriter_WriteAttributeString_m400667381(L_1, _stringLiteral62725243, L_4, /*hidden argument*/NULL);
		DataColumn_t2485786120 * L_5 = ___col0;
		NullCheck(L_5);
		String_t* L_6 = DataColumn_get_ColumnName_m263138074(L_5, /*hidden argument*/NULL);
		DataColumn_t2485786120 * L_7 = ___col0;
		NullCheck(L_7);
		String_t* L_8 = DataColumn_get_Caption_m2730331524(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		DataColumn_t2485786120 * L_10 = ___col0;
		NullCheck(L_10);
		String_t* L_11 = DataColumn_get_Caption_m2730331524(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_13 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		XmlWriter_t127905479 * L_14 = __this->get_w_0();
		DataColumn_t2485786120 * L_15 = ___col0;
		NullCheck(L_15);
		String_t* L_16 = DataColumn_get_Caption_m2730331524(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		XmlWriter_WriteAttributeString_m2341773285(L_14, _stringLiteral1579746915, _stringLiteral3247624226, _stringLiteral832805569, L_16, /*hidden argument*/NULL);
	}

IL_0080:
	{
		DataColumn_t2485786120 * L_17 = ___col0;
		NullCheck(L_17);
		bool L_18 = DataColumn_get_AutoIncrement_m1410144329(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		XmlWriter_t127905479 * L_19 = __this->get_w_0();
		NullCheck(L_19);
		XmlWriter_WriteAttributeString_m2341773285(L_19, _stringLiteral1579746915, _stringLiteral1811025211, _stringLiteral832805569, _stringLiteral4002445229, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		DataColumn_t2485786120 * L_20 = ___col0;
		NullCheck(L_20);
		int64_t L_21 = DataColumn_get_AutoIncrementSeed_m549745072(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00da;
		}
	}
	{
		XmlWriter_t127905479 * L_22 = __this->get_w_0();
		DataColumn_t2485786120 * L_23 = ___col0;
		NullCheck(L_23);
		int64_t L_24 = DataColumn_get_AutoIncrementSeed_m549745072(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_25 = XmlConvert_ToString_m2891307708(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		XmlWriter_WriteAttributeString_m2341773285(L_22, _stringLiteral1579746915, _stringLiteral1615082796, _stringLiteral832805569, L_25, /*hidden argument*/NULL);
	}

IL_00da:
	{
		DataColumn_t2485786120 * L_26 = ___col0;
		NullCheck(L_26);
		int64_t L_27 = DataColumn_get_AutoIncrementStep_m2454811056(L_26, /*hidden argument*/NULL);
		if ((((int64_t)L_27) == ((int64_t)(((int64_t)((int64_t)1))))))
		{
			goto IL_010c;
		}
	}
	{
		XmlWriter_t127905479 * L_28 = __this->get_w_0();
		DataColumn_t2485786120 * L_29 = ___col0;
		NullCheck(L_29);
		int64_t L_30 = DataColumn_get_AutoIncrementStep_m2454811056(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_31 = XmlConvert_ToString_m2891307708(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		XmlWriter_WriteAttributeString_m2341773285(L_28, _stringLiteral1579746915, _stringLiteral761459563, _stringLiteral832805569, L_31, /*hidden argument*/NULL);
	}

IL_010c:
	{
		DataColumn_t2485786120 * L_32 = ___col0;
		NullCheck(L_32);
		Type_t * L_33 = DataColumn_get_DataType_m2526332912(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DataColumn_t2485786120_il2cpp_TypeInfo_var);
		RuntimeObject * L_34 = DataColumn_GetDefaultValueForType_m843602835(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		DataColumn_t2485786120 * L_35 = ___col0;
		NullCheck(L_35);
		RuntimeObject * L_36 = DataColumn_get_DefaultValue_m805130148(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		bool L_37 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_34, L_36);
		if (L_37)
		{
			goto IL_0142;
		}
	}
	{
		XmlWriter_t127905479 * L_38 = __this->get_w_0();
		DataColumn_t2485786120 * L_39 = ___col0;
		NullCheck(L_39);
		RuntimeObject * L_40 = DataColumn_get_DefaultValue_m805130148(L_39, /*hidden argument*/NULL);
		String_t* L_41 = DataSet_WriteObjectXml_m1116058119(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		NullCheck(L_38);
		XmlWriter_WriteAttributeString_m400667381(L_38, _stringLiteral1948332219, L_41, /*hidden argument*/NULL);
	}

IL_0142:
	{
		DataColumn_t2485786120 * L_42 = ___col0;
		NullCheck(L_42);
		bool L_43 = DataColumn_get_ReadOnly_m1255397757(L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_016c;
		}
	}
	{
		XmlWriter_t127905479 * L_44 = __this->get_w_0();
		NullCheck(L_44);
		XmlWriter_WriteAttributeString_m2341773285(L_44, _stringLiteral1579746915, _stringLiteral827625748, _stringLiteral832805569, _stringLiteral4002445229, /*hidden argument*/NULL);
	}

IL_016c:
	{
		V_0 = (XmlQualifiedName_t2760654312 *)NULL;
		DataColumn_t2485786120 * L_45 = ___col0;
		NullCheck(L_45);
		int32_t L_46 = DataColumn_get_MaxLength_m902165773(L_45, /*hidden argument*/NULL);
		if ((((int32_t)L_46) >= ((int32_t)0)))
		{
			goto IL_01ae;
		}
	}
	{
		XmlWriter_t127905479 * L_47 = __this->get_w_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_47);
		XmlWriter_WriteStartAttribute_m2509241395(L_47, _stringLiteral3243520166, L_48, /*hidden argument*/NULL);
		DataColumn_t2485786120 * L_49 = ___col0;
		NullCheck(L_49);
		Type_t * L_50 = DataColumn_get_DataType_m2526332912(L_49, /*hidden argument*/NULL);
		XmlQualifiedName_t2760654312 * L_51 = XmlSchemaWriter_MapType_m282308051(__this, L_50, /*hidden argument*/NULL);
		V_0 = L_51;
		XmlQualifiedName_t2760654312 * L_52 = V_0;
		XmlSchemaWriter_WriteQName_m1066297384(__this, L_52, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_53 = __this->get_w_0();
		NullCheck(L_53);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_53);
	}

IL_01ae:
	{
		XmlQualifiedName_t2760654312 * L_54 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_55 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnString_0();
		IL2CPP_RUNTIME_CLASS_INIT(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var);
		bool L_56 = XmlQualifiedName_op_Equality_m1684199236(NULL /*static, unused*/, L_54, L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0225;
		}
	}
	{
		DataColumn_t2485786120 * L_57 = ___col0;
		NullCheck(L_57);
		Type_t * L_58 = DataColumn_get_DataType_m2526332912(L_57, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_59 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_60 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_58) == ((RuntimeObject*)(Type_t *)L_60)))
		{
			goto IL_0225;
		}
	}
	{
		DataColumn_t2485786120 * L_61 = ___col0;
		NullCheck(L_61);
		Type_t * L_62 = DataColumn_get_DataType_m2526332912(L_61, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_63 = { reinterpret_cast<intptr_t> (Char_t3634460470_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_64 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_62) == ((RuntimeObject*)(Type_t *)L_64)))
		{
			goto IL_0225;
		}
	}
	{
		XmlWriter_t127905479 * L_65 = __this->get_w_0();
		NullCheck(L_65);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(23 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, L_65, _stringLiteral1579746915, _stringLiteral260118666, _stringLiteral832805569);
		DataColumn_t2485786120 * L_66 = ___col0;
		NullCheck(L_66);
		Type_t * L_67 = DataColumn_get_DataType_m2526332912(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		String_t* L_68 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_67);
		V_1 = L_68;
		XmlWriter_t127905479 * L_69 = __this->get_w_0();
		String_t* L_70 = V_1;
		NullCheck(L_69);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_69, L_70);
		XmlWriter_t127905479 * L_71 = __this->get_w_0();
		NullCheck(L_71);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_71);
	}

IL_0225:
	{
		DataColumn_t2485786120 * L_72 = ___col0;
		NullCheck(L_72);
		bool L_73 = DataColumn_get_AllowDBNull_m4236132641(L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0245;
		}
	}
	{
		XmlWriter_t127905479 * L_74 = __this->get_w_0();
		NullCheck(L_74);
		XmlWriter_WriteAttributeString_m400667381(L_74, _stringLiteral837243573, _stringLiteral3452614544, /*hidden argument*/NULL);
	}

IL_0245:
	{
		DataColumn_t2485786120 * L_75 = ___col0;
		NullCheck(L_75);
		int32_t L_76 = DataColumn_get_MaxLength_m902165773(L_75, /*hidden argument*/NULL);
		if ((((int32_t)L_76) <= ((int32_t)(-1))))
		{
			goto IL_0258;
		}
	}
	{
		DataColumn_t2485786120 * L_77 = ___col0;
		XmlSchemaWriter_WriteSimpleType_m2878921502(__this, L_77, /*hidden argument*/NULL);
	}

IL_0258:
	{
		DataColumn_t2485786120 * L_78 = ___col0;
		NullCheck(L_78);
		PropertyCollection_t3446977085 * L_79 = DataColumn_get_ExtendedProperties_m3438260329(L_78, /*hidden argument*/NULL);
		XmlSchemaWriter_AddExtendedPropertyAttributes_m1125702825(__this, L_79, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_80 = __this->get_w_0();
		NullCheck(L_80);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_80);
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteChildRelations(System.Data.DataRelation)
extern "C"  void XmlSchemaWriter_WriteChildRelations_m1239162713 (XmlSchemaWriter_t4200114175 * __this, DataRelation_t2257224951 * ___rel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_WriteChildRelations_m1239162713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataRelation_t2257224951 * L_0 = ___rel0;
		NullCheck(L_0);
		DataTable_t1734486485 * L_1 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(6 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_0);
		NullCheck(L_1);
		String_t* L_2 = DataTable_get_Namespace_m2107009138(L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_dataSetNamespace_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		DataTableU5BU5D_t3044315960* L_5 = __this->get_tables_1();
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))))) >= ((int32_t)2)))
		{
			goto IL_008e;
		}
	}

IL_0029:
	{
		XmlWriter_t127905479 * L_6 = __this->get_w_0();
		NullCheck(L_6);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_6, _stringLiteral3455563736, _stringLiteral4059539929, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_7 = __this->get_w_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_7);
		XmlWriter_WriteStartAttribute_m2509241395(L_7, _stringLiteral133510650, L_8, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_9 = __this->get_w_0();
		DataRelation_t2257224951 * L_10 = ___rel0;
		NullCheck(L_10);
		DataTable_t1734486485 * L_11 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(6 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_10);
		NullCheck(L_11);
		String_t* L_12 = DataTable_get_TableName_m4002648469(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_13 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		DataRelation_t2257224951 * L_14 = ___rel0;
		NullCheck(L_14);
		DataTable_t1734486485 * L_15 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(6 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_14);
		NullCheck(L_15);
		String_t* L_16 = DataTable_get_Namespace_m2107009138(L_15, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteQualifiedName(System.String,System.String) */, L_9, L_13, L_16);
		XmlWriter_t127905479 * L_17 = __this->get_w_0();
		NullCheck(L_17);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_17);
		goto IL_012a;
	}

IL_008e:
	{
		XmlWriter_t127905479 * L_18 = __this->get_w_0();
		NullCheck(L_18);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_18, _stringLiteral3455563736, _stringLiteral4059539929, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_19 = __this->get_w_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_19);
		XmlWriter_WriteStartAttribute_m2509241395(L_19, _stringLiteral62725243, L_20, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_21 = __this->get_w_0();
		DataRelation_t2257224951 * L_22 = ___rel0;
		NullCheck(L_22);
		DataTable_t1734486485 * L_23 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(6 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = DataTable_get_TableName_m4002648469(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_25 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		DataRelation_t2257224951 * L_26 = ___rel0;
		NullCheck(L_26);
		DataTable_t1734486485 * L_27 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(6 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_26);
		NullCheck(L_27);
		String_t* L_28 = DataTable_get_Namespace_m2107009138(L_27, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteQualifiedName(System.String,System.String) */, L_21, L_25, L_28);
		XmlWriter_t127905479 * L_29 = __this->get_w_0();
		NullCheck(L_29);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_29);
		XmlWriter_t127905479 * L_30 = __this->get_w_0();
		NullCheck(L_30);
		XmlWriter_WriteAttributeString_m400667381(L_30, _stringLiteral837243573, _stringLiteral3452614544, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_31 = __this->get_w_0();
		NullCheck(L_31);
		XmlWriter_WriteAttributeString_m400667381(L_31, _stringLiteral660438115, _stringLiteral256783401, /*hidden argument*/NULL);
		ArrayList_t2718874744 * L_32 = __this->get_globalTypeTables_8();
		DataRelation_t2257224951 * L_33 = ___rel0;
		NullCheck(L_33);
		DataTable_t1734486485 * L_34 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(6 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_33);
		NullCheck(L_32);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_32, L_34);
	}

IL_012a:
	{
		DataTableU5BU5D_t3044315960* L_35 = __this->get_tables_1();
		NullCheck(L_35);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_0144;
		}
	}
	{
		DataRelation_t2257224951 * L_36 = ___rel0;
		NullCheck(L_36);
		DataTable_t1734486485 * L_37 = VirtFuncInvoker0< DataTable_t1734486485 * >::Invoke(6 /* System.Data.DataTable System.Data.DataRelation::get_ChildTable() */, L_36);
		XmlSchemaWriter_WriteTableType_m1855352219(__this, L_37, /*hidden argument*/NULL);
	}

IL_0144:
	{
		XmlWriter_t127905479 * L_38 = __this->get_w_0();
		NullCheck(L_38);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_38);
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteTableAttributes(System.Collections.ArrayList)
extern "C"  void XmlSchemaWriter_WriteTableAttributes_m1460086314 (XmlSchemaWriter_t4200114175 * __this, ArrayList_t2718874744 * ___atts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_WriteTableAttributes_m1460086314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataColumn_t2485786120 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B6_0 = NULL;
	{
		ArrayList_t2718874744 * L_0 = ___atts0;
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01b6;
		}

IL_000c:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((DataColumn_t2485786120 *)CastclassClass((RuntimeObject*)L_3, DataColumn_t2485786120_il2cpp_TypeInfo_var));
			XmlWriter_t127905479 * L_4 = __this->get_w_0();
			NullCheck(L_4);
			VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_4, _stringLiteral3455563736, _stringLiteral4158421234, _stringLiteral1569427300);
			DataColumn_t2485786120 * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = DataColumn_get_ColumnName_m263138074(L_5, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
			String_t* L_7 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			DataColumn_t2485786120 * L_8 = V_0;
			NullCheck(L_8);
			String_t* L_9 = DataColumn_get_Namespace_m354885530(L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
			bool L_11 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_00c2;
			}
		}

IL_0053:
		{
			XmlWriter_t127905479 * L_12 = __this->get_w_0();
			NullCheck(L_12);
			XmlWriter_WriteAttributeString_m400667381(L_12, _stringLiteral1639258570, _stringLiteral902390592, /*hidden argument*/NULL);
			DataColumn_t2485786120 * L_13 = V_0;
			NullCheck(L_13);
			String_t* L_14 = DataColumn_get_Prefix_m3565204521(L_13, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
			bool L_16 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_009c;
			}
		}

IL_007d:
		{
			Hashtable_t1853889766 * L_17 = __this->get_additionalNamespaces_9();
			NullCheck(L_17);
			int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_17);
			int32_t L_19 = L_18;
			RuntimeObject * L_20 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_19);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_21 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral228995225, L_20, /*hidden argument*/NULL);
			G_B6_0 = L_21;
			goto IL_00a2;
		}

IL_009c:
		{
			DataColumn_t2485786120 * L_22 = V_0;
			NullCheck(L_22);
			String_t* L_23 = DataColumn_get_Prefix_m3565204521(L_22, /*hidden argument*/NULL);
			G_B6_0 = L_23;
		}

IL_00a2:
		{
			V_3 = G_B6_0;
			String_t* L_24 = V_3;
			String_t* L_25 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_26 = String_Concat_m3755062657(NULL /*static, unused*/, L_24, _stringLiteral3452614550, L_25, /*hidden argument*/NULL);
			V_2 = L_26;
			Hashtable_t1853889766 * L_27 = __this->get_additionalNamespaces_9();
			String_t* L_28 = V_3;
			DataColumn_t2485786120 * L_29 = V_0;
			NullCheck(L_29);
			String_t* L_30 = DataColumn_get_Namespace_m354885530(L_29, /*hidden argument*/NULL);
			NullCheck(L_27);
			VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_27, L_28, L_30);
		}

IL_00c2:
		{
			XmlWriter_t127905479 * L_31 = __this->get_w_0();
			String_t* L_32 = V_2;
			NullCheck(L_31);
			XmlWriter_WriteAttributeString_m400667381(L_31, _stringLiteral62725243, L_32, /*hidden argument*/NULL);
			DataColumn_t2485786120 * L_33 = V_0;
			NullCheck(L_33);
			PropertyCollection_t3446977085 * L_34 = DataColumn_get_ExtendedProperties_m3438260329(L_33, /*hidden argument*/NULL);
			XmlSchemaWriter_AddExtendedPropertyAttributes_m1125702825(__this, L_34, /*hidden argument*/NULL);
			DataColumn_t2485786120 * L_35 = V_0;
			NullCheck(L_35);
			bool L_36 = DataColumn_get_ReadOnly_m1255397757(L_35, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_0109;
			}
		}

IL_00ea:
		{
			XmlWriter_t127905479 * L_37 = __this->get_w_0();
			NullCheck(L_37);
			XmlWriter_WriteAttributeString_m2341773285(L_37, _stringLiteral1579746915, _stringLiteral827625748, _stringLiteral832805569, _stringLiteral4002445229, /*hidden argument*/NULL);
		}

IL_0109:
		{
			DataColumn_t2485786120 * L_38 = V_0;
			NullCheck(L_38);
			int32_t L_39 = DataColumn_get_MaxLength_m902165773(L_38, /*hidden argument*/NULL);
			if ((((int32_t)L_39) >= ((int32_t)0)))
			{
				goto IL_0147;
			}
		}

IL_0115:
		{
			XmlWriter_t127905479 * L_40 = __this->get_w_0();
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_41 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
			NullCheck(L_40);
			XmlWriter_WriteStartAttribute_m2509241395(L_40, _stringLiteral3243520166, L_41, /*hidden argument*/NULL);
			DataColumn_t2485786120 * L_42 = V_0;
			NullCheck(L_42);
			Type_t * L_43 = DataColumn_get_DataType_m2526332912(L_42, /*hidden argument*/NULL);
			XmlQualifiedName_t2760654312 * L_44 = XmlSchemaWriter_MapType_m282308051(__this, L_43, /*hidden argument*/NULL);
			XmlSchemaWriter_WriteQName_m1066297384(__this, L_44, /*hidden argument*/NULL);
			XmlWriter_t127905479 * L_45 = __this->get_w_0();
			NullCheck(L_45);
			VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_45);
		}

IL_0147:
		{
			DataColumn_t2485786120 * L_46 = V_0;
			NullCheck(L_46);
			bool L_47 = DataColumn_get_AllowDBNull_m4236132641(L_46, /*hidden argument*/NULL);
			if (L_47)
			{
				goto IL_0167;
			}
		}

IL_0152:
		{
			XmlWriter_t127905479 * L_48 = __this->get_w_0();
			NullCheck(L_48);
			XmlWriter_WriteAttributeString_m400667381(L_48, _stringLiteral1700774236, _stringLiteral1046445807, /*hidden argument*/NULL);
		}

IL_0167:
		{
			DataColumn_t2485786120 * L_49 = V_0;
			NullCheck(L_49);
			RuntimeObject * L_50 = DataColumn_get_DefaultValue_m805130148(L_49, /*hidden argument*/NULL);
			DataColumn_t2485786120 * L_51 = V_0;
			NullCheck(L_51);
			Type_t * L_52 = DataColumn_get_DataType_m2526332912(L_51, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DataColumn_t2485786120_il2cpp_TypeInfo_var);
			RuntimeObject * L_53 = DataColumn_GetDefaultValueForType_m843602835(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
			if ((((RuntimeObject*)(RuntimeObject *)L_50) == ((RuntimeObject*)(RuntimeObject *)L_53)))
			{
				goto IL_0198;
			}
		}

IL_017d:
		{
			XmlWriter_t127905479 * L_54 = __this->get_w_0();
			DataColumn_t2485786120 * L_55 = V_0;
			NullCheck(L_55);
			RuntimeObject * L_56 = DataColumn_get_DefaultValue_m805130148(L_55, /*hidden argument*/NULL);
			String_t* L_57 = DataSet_WriteObjectXml_m1116058119(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
			NullCheck(L_54);
			XmlWriter_WriteAttributeString_m400667381(L_54, _stringLiteral1948332219, L_57, /*hidden argument*/NULL);
		}

IL_0198:
		{
			DataColumn_t2485786120 * L_58 = V_0;
			NullCheck(L_58);
			int32_t L_59 = DataColumn_get_MaxLength_m902165773(L_58, /*hidden argument*/NULL);
			if ((((int32_t)L_59) <= ((int32_t)(-1))))
			{
				goto IL_01ab;
			}
		}

IL_01a4:
		{
			DataColumn_t2485786120 * L_60 = V_0;
			XmlSchemaWriter_WriteSimpleType_m2878921502(__this, L_60, /*hidden argument*/NULL);
		}

IL_01ab:
		{
			XmlWriter_t127905479 * L_61 = __this->get_w_0();
			NullCheck(L_61);
			VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_61);
		}

IL_01b6:
		{
			RuntimeObject* L_62 = V_1;
			NullCheck(L_62);
			bool L_63 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_62);
			if (L_63)
			{
				goto IL_000c;
			}
		}

IL_01c1:
		{
			IL2CPP_LEAVE(0x1DB, FINALLY_01c6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01c6;
	}

FINALLY_01c6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_64 = V_1;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_64, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_65 = V_4;
			if (L_65)
			{
				goto IL_01d3;
			}
		}

IL_01d2:
		{
			IL2CPP_END_FINALLY(454)
		}

IL_01d3:
		{
			RuntimeObject* L_66 = V_4;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_66);
			IL2CPP_END_FINALLY(454)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(454)
	{
		IL2CPP_JUMP_TBL(0x1DB, IL_01db)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01db:
	{
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteSimpleType(System.Data.DataColumn)
extern "C"  void XmlSchemaWriter_WriteSimpleType_m2878921502 (XmlSchemaWriter_t4200114175 * __this, DataColumn_t2485786120 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_WriteSimpleType_m2878921502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlWriter_t127905479 * L_0 = __this->get_w_0();
		NullCheck(L_0);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_0, _stringLiteral3455563736, _stringLiteral1113390247, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_1 = __this->get_w_0();
		NullCheck(L_1);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_1, _stringLiteral3455563736, _stringLiteral1564059052, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_2 = __this->get_w_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_2);
		XmlWriter_WriteStartAttribute_m2509241395(L_2, _stringLiteral2838662761, L_3, /*hidden argument*/NULL);
		DataColumn_t2485786120 * L_4 = ___col0;
		NullCheck(L_4);
		Type_t * L_5 = DataColumn_get_DataType_m2526332912(L_4, /*hidden argument*/NULL);
		XmlQualifiedName_t2760654312 * L_6 = XmlSchemaWriter_MapType_m282308051(__this, L_5, /*hidden argument*/NULL);
		XmlSchemaWriter_WriteQName_m1066297384(__this, L_6, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_7 = __this->get_w_0();
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_7);
		XmlWriter_t127905479 * L_8 = __this->get_w_0();
		NullCheck(L_8);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_8, _stringLiteral3455563736, _stringLiteral1329154644, _stringLiteral1569427300);
		XmlWriter_t127905479 * L_9 = __this->get_w_0();
		DataColumn_t2485786120 * L_10 = ___col0;
		NullCheck(L_10);
		int32_t L_11 = DataColumn_get_MaxLength_m902165773(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_12 = XmlConvert_ToString_m4082948798(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		XmlWriter_WriteAttributeString_m400667381(L_9, _stringLiteral3493618073, L_12, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_13 = __this->get_w_0();
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_13);
		XmlWriter_t127905479 * L_14 = __this->get_w_0();
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_14);
		XmlWriter_t127905479 * L_15 = __this->get_w_0();
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_15);
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::WriteQName(System.Xml.XmlQualifiedName)
extern "C"  void XmlSchemaWriter_WriteQName_m1066297384 (XmlSchemaWriter_t4200114175 * __this, XmlQualifiedName_t2760654312 * ___name0, const RuntimeMethod* method)
{
	{
		XmlWriter_t127905479 * L_0 = __this->get_w_0();
		XmlQualifiedName_t2760654312 * L_1 = ___name0;
		NullCheck(L_1);
		String_t* L_2 = XmlQualifiedName_get_Name_m815040483(L_1, /*hidden argument*/NULL);
		XmlQualifiedName_t2760654312 * L_3 = ___name0;
		NullCheck(L_3);
		String_t* L_4 = XmlQualifiedName_get_Namespace_m3957593392(L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteQualifiedName(System.String,System.String) */, L_0, L_2, L_4);
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::CheckNamespace(System.String,System.String,System.Collections.Specialized.ListDictionary,System.Collections.Specialized.ListDictionary)
extern "C"  void XmlSchemaWriter_CheckNamespace_m2715501895 (XmlSchemaWriter_t4200114175 * __this, String_t* ___prefix0, String_t* ___ns1, ListDictionary_t1624492310 * ___names2, ListDictionary_t1624492310 * ___includes3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_CheckNamespace_m2715501895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___ns1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_3 = __this->get_dataSetNamespace_5();
		String_t* L_4 = ___ns1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0083;
		}
	}
	{
		ListDictionary_t1624492310 * L_6 = ___names2;
		String_t* L_7 = ___prefix0;
		NullCheck(L_6);
		RuntimeObject * L_8 = ListDictionary_get_Item_m1272472363(L_6, L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___ns1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Inequality_m215368492(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		V_0 = 1;
		goto IL_0078;
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral228995225, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		ListDictionary_t1624492310 * L_15 = ___names2;
		String_t* L_16 = V_1;
		NullCheck(L_15);
		RuntimeObject * L_17 = ListDictionary_get_Item_m1272472363(L_15, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0074;
		}
	}
	{
		ListDictionary_t1624492310 * L_18 = ___names2;
		String_t* L_19 = V_1;
		String_t* L_20 = ___ns1;
		NullCheck(L_18);
		ListDictionary_Add_m3918308031(L_18, L_19, L_20, /*hidden argument*/NULL);
		String_t* L_21 = V_1;
		String_t* L_22 = ___ns1;
		ListDictionary_t1624492310 * L_23 = ___includes3;
		XmlSchemaWriter_HandleExternalNamespace_m2773657577(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		goto IL_0083;
	}

IL_0074:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_0040;
		}
	}

IL_0083:
	{
		return;
	}
}
// System.Void System.Data.XmlSchemaWriter::HandleExternalNamespace(System.String,System.String,System.Collections.Specialized.ListDictionary)
extern "C"  void XmlSchemaWriter_HandleExternalNamespace_m2773657577 (XmlSchemaWriter_t4200114175 * __this, String_t* ___prefix0, String_t* ___ns1, ListDictionary_t1624492310 * ___includes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_HandleExternalNamespace_m2773657577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ListDictionary_t1624492310 * L_0 = ___includes2;
		String_t* L_1 = ___ns1;
		NullCheck(L_0);
		bool L_2 = ListDictionary_Contains_m3951721842(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		ListDictionary_t1624492310 * L_3 = ___includes2;
		String_t* L_4 = ___ns1;
		String_t* L_5 = ___prefix0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3452614641, L_5, _stringLiteral883985965, /*hidden argument*/NULL);
		NullCheck(L_3);
		ListDictionary_Add_m3918308031(L_3, L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlQualifiedName System.Data.XmlSchemaWriter::MapType(System.Type)
extern "C"  XmlQualifiedName_t2760654312 * XmlSchemaWriter_MapType_m282308051 (XmlSchemaWriter_t4200114175 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSchemaWriter_MapType_m282308051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_1 = Type_GetTypeCode_m480753082(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)3)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_00a8;
			}
			case 2:
			{
				goto IL_008a;
			}
			case 3:
			{
				goto IL_0072;
			}
			case 4:
			{
				goto IL_005a;
			}
			case 5:
			{
				goto IL_0096;
			}
			case 6:
			{
				goto IL_0060;
			}
			case 7:
			{
				goto IL_009c;
			}
			case 8:
			{
				goto IL_0066;
			}
			case 9:
			{
				goto IL_00a2;
			}
			case 10:
			{
				goto IL_0090;
			}
			case 11:
			{
				goto IL_0084;
			}
			case 12:
			{
				goto IL_007e;
			}
			case 13:
			{
				goto IL_0078;
			}
			case 14:
			{
				goto IL_00a8;
			}
			case 15:
			{
				goto IL_0054;
			}
		}
	}
	{
		goto IL_00a8;
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_3 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnString_0();
		return L_3;
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_4 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnShort_1();
		return L_4;
	}

IL_0060:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_5 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnInt_2();
		return L_5;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_6 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnLong_3();
		return L_6;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_7 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnBoolean_4();
		return L_7;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_8 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnUnsignedByte_5();
		return L_8;
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_9 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnDateTime_7();
		return L_9;
	}

IL_007e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_10 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnDecimal_8();
		return L_10;
	}

IL_0084:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_11 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnDouble_9();
		return L_11;
	}

IL_008a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_12 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnSbyte_10();
		return L_12;
	}

IL_0090:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_13 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnFloat_11();
		return L_13;
	}

IL_0096:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_14 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnUnsignedShort_13();
		return L_14;
	}

IL_009c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_15 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnUnsignedInt_14();
		return L_15;
	}

IL_00a2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_16 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnUnsignedLong_15();
		return L_16;
	}

IL_00a8:
	{
		RuntimeTypeHandle_t3027515415  L_17 = { reinterpret_cast<intptr_t> (TimeSpan_t881159249_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		Type_t * L_19 = ___type0;
		if ((!(((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_19))))
		{
			goto IL_00be;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_20 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnDuration_12();
		return L_20;
	}

IL_00be:
	{
		RuntimeTypeHandle_t3027515415  L_21 = { reinterpret_cast<intptr_t> (Uri_t100236324_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		Type_t * L_23 = ___type0;
		if ((!(((RuntimeObject*)(Type_t *)L_22) == ((RuntimeObject*)(Type_t *)L_23))))
		{
			goto IL_00d4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_24 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnUri_16();
		return L_24;
	}

IL_00d4:
	{
		RuntimeTypeHandle_t3027515415  L_25 = { reinterpret_cast<intptr_t> (ByteU5BU5D_t4116647657_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		Type_t * L_27 = ___type0;
		if ((!(((RuntimeObject*)(Type_t *)L_26) == ((RuntimeObject*)(Type_t *)L_27))))
		{
			goto IL_00ea;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_28 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnBase64Binary_17();
		return L_28;
	}

IL_00ea:
	{
		RuntimeTypeHandle_t3027515415  L_29 = { reinterpret_cast<intptr_t> (XmlQualifiedName_t2760654312_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		Type_t * L_31 = ___type0;
		if ((!(((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_31))))
		{
			goto IL_0100;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_32 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnXmlQualifiedName_18();
		return L_32;
	}

IL_0100:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConstants_t798939411_il2cpp_TypeInfo_var);
		XmlQualifiedName_t2760654312 * L_33 = ((XmlConstants_t798939411_StaticFields*)il2cpp_codegen_static_fields_for(XmlConstants_t798939411_il2cpp_TypeInfo_var))->get_QnString_0();
		return L_33;
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
// System.Void System.MonoTODOAttribute::.ctor()
extern "C"  void MonoTODOAttribute__ctor_m2609711699 (MonoTODOAttribute_t4131080587 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void XmlHelper::.cctor()
extern "C"  void XmlHelper__cctor_m730103126 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlHelper__cctor_m730103126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_t1853889766 * L_0 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_0, /*hidden argument*/NULL);
		((XmlHelper_t906262798_StaticFields*)il2cpp_codegen_static_fields_for(XmlHelper_t906262798_il2cpp_TypeInfo_var))->set_localSchemaNameCache_0(L_0);
		Hashtable_t1853889766 * L_1 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_1, /*hidden argument*/NULL);
		((XmlHelper_t906262798_StaticFields*)il2cpp_codegen_static_fields_for(XmlHelper_t906262798_il2cpp_TypeInfo_var))->set_localXmlNameCache_1(L_1);
		return;
	}
}
// System.String XmlHelper::Decode(System.String)
extern "C"  String_t* XmlHelper_Decode_m2896529598 (RuntimeObject * __this /* static, unused */, String_t* ___xmlName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlHelper_Decode_m2896529598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		Hashtable_t1853889766 * L_0 = ((XmlHelper_t906262798_StaticFields*)il2cpp_codegen_static_fields_for(XmlHelper_t906262798_il2cpp_TypeInfo_var))->get_localSchemaNameCache_0();
		String_t* L_1 = ___xmlName0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4 = ___xmlName0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_5 = XmlConvert_DecodeName_m2953738773(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		Hashtable_t1853889766 * L_6 = ((XmlHelper_t906262798_StaticFields*)il2cpp_codegen_static_fields_for(XmlHelper_t906262798_il2cpp_TypeInfo_var))->get_localSchemaNameCache_0();
		String_t* L_7 = ___xmlName0;
		String_t* L_8 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_6, L_7, L_8);
	}

IL_002a:
	{
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.String XmlHelper::Encode(System.String)
extern "C"  String_t* XmlHelper_Encode_m327266007 (RuntimeObject * __this /* static, unused */, String_t* ___schemaName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlHelper_Encode_m327266007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		Hashtable_t1853889766 * L_0 = ((XmlHelper_t906262798_StaticFields*)il2cpp_codegen_static_fields_for(XmlHelper_t906262798_il2cpp_TypeInfo_var))->get_localXmlNameCache_1();
		String_t* L_1 = ___schemaName0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4 = ___schemaName0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_5 = XmlConvert_EncodeLocalName_m2931600124(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		Hashtable_t1853889766 * L_6 = ((XmlHelper_t906262798_StaticFields*)il2cpp_codegen_static_fields_for(XmlHelper_t906262798_il2cpp_TypeInfo_var))->get_localXmlNameCache_1();
		String_t* L_7 = ___schemaName0;
		String_t* L_8 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_6, L_7, L_8);
	}

IL_002a:
	{
		String_t* L_9 = V_0;
		return L_9;
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
// System.Void XmlTableWriter::WriteTables(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Collections.Generic.List`1<System.Data.DataTable>,System.Collections.Generic.List`1<System.Data.DataRelation>,System.String,System.String)
extern "C"  void XmlTableWriter_WriteTables_m1699440807 (RuntimeObject * __this /* static, unused */, XmlWriter_t127905479 * ___writer0, int32_t ___mode1, List_1_t3206561227 * ___tables2, List_1_t3729299693 * ___relations3, String_t* ___mainDataTable4, String_t* ___dataSetName5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTableWriter_WriteTables_m1699440807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataTable_t1734486485 * V_0 = NULL;
	Enumerator_t800837808  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	DataTableU5BU5D_t3044315960* V_4 = NULL;
	DataRelationU5BU5D_t2648313166* V_5 = NULL;
	DataTable_t1734486485 * V_6 = NULL;
	List_1_t3206561227 * V_7 = NULL;
	DataTable_t1734486485 * V_8 = NULL;
	Enumerator_t800837808  V_9;
	memset(&V_9, 0, sizeof(V_9));
	DataTable_t1734486485 * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	DataRelationU5BU5D_t2648313166* G_B16_2 = NULL;
	DataTableU5BU5D_t3044315960* G_B16_3 = NULL;
	XmlWriter_t127905479 * G_B16_4 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	DataRelationU5BU5D_t2648313166* G_B15_2 = NULL;
	DataTableU5BU5D_t3044315960* G_B15_3 = NULL;
	XmlWriter_t127905479 * G_B15_4 = NULL;
	CultureInfo_t4157843068 * G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	String_t* G_B17_2 = NULL;
	DataRelationU5BU5D_t2648313166* G_B17_3 = NULL;
	DataTableU5BU5D_t3044315960* G_B17_4 = NULL;
	XmlWriter_t127905479 * G_B17_5 = NULL;
	{
		int32_t L_0 = ___mode1;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0044;
		}
	}
	{
		List_1_t3206561227 * L_1 = ___tables2;
		NullCheck(L_1);
		Enumerator_t800837808  L_2 = List_1_GetEnumerator_m1089387472(L_1, /*hidden argument*/List_1_GetEnumerator_m1089387472_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_0013:
		{
			DataTable_t1734486485 * L_3 = Enumerator_get_Current_m938926476((&V_1), /*hidden argument*/Enumerator_get_Current_m938926476_RuntimeMethod_var);
			V_0 = L_3;
			DataTable_t1734486485 * L_4 = V_0;
			NullCheck(L_4);
			DataTable_SetRowsID_m352324641(L_4, /*hidden argument*/NULL);
		}

IL_0021:
		{
			bool L_5 = Enumerator_MoveNext_m1588245369((&V_1), /*hidden argument*/Enumerator_MoveNext_m1588245369_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0013;
			}
		}

IL_002d:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		Enumerator_t800837808  L_6 = V_1;
		Enumerator_t800837808  L_7 = L_6;
		RuntimeObject * L_8 = Box(Enumerator_t800837808_il2cpp_TypeInfo_var, &L_7);
		NullCheck((RuntimeObject*)L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003e:
	{
		XmlWriter_t127905479 * L_9 = ___writer0;
		DataSet_WriteDiffGramElement_m966319114(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_0044:
	{
		int32_t L_10 = ___mode1;
		V_2 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_3 = 0;
		goto IL_006c;
	}

IL_0053:
	{
		List_1_t3206561227 * L_11 = ___tables2;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		DataTable_t1734486485 * L_13 = List_1_get_Item_m3759751087(L_11, L_12, /*hidden argument*/List_1_get_Item_m3759751087_RuntimeMethod_var);
		NullCheck(L_13);
		DataRowCollection_t3217300826 * L_14 = DataTable_get_Rows_m4254623630(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = DataRowCollection_get_Count_m2865227289(L_14, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_006c:
	{
		int32_t L_17 = V_3;
		List_1_t3206561227 * L_18 = ___tables2;
		NullCheck(L_18);
		int32_t L_19 = List_1_get_Count_m3747673379(L_18, /*hidden argument*/List_1_get_Count_m3747673379_RuntimeMethod_var);
		if ((((int32_t)L_17) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_0053;
		}
	}

IL_007e:
	{
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_011f;
		}
	}
	{
		XmlWriter_t127905479 * L_22 = ___writer0;
		int32_t L_23 = ___mode1;
		List_1_t3206561227 * L_24 = ___tables2;
		NullCheck(L_24);
		DataTable_t1734486485 * L_25 = List_1_get_Item_m3759751087(L_24, 0, /*hidden argument*/List_1_get_Item_m3759751087_RuntimeMethod_var);
		NullCheck(L_25);
		String_t* L_26 = DataTable_get_Namespace_m2107009138(L_25, /*hidden argument*/NULL);
		List_1_t3206561227 * L_27 = ___tables2;
		NullCheck(L_27);
		DataTable_t1734486485 * L_28 = List_1_get_Item_m3759751087(L_27, 0, /*hidden argument*/List_1_get_Item_m3759751087_RuntimeMethod_var);
		NullCheck(L_28);
		String_t* L_29 = DataTable_get_Prefix_m574798994(L_28, /*hidden argument*/NULL);
		String_t* L_30 = ___dataSetName5;
		IL2CPP_RUNTIME_CLASS_INIT(XmlHelper_t906262798_il2cpp_TypeInfo_var);
		String_t* L_31 = XmlHelper_Encode_m327266007(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		DataSet_WriteStartElement_m2002839902(NULL /*static, unused*/, L_22, L_23, L_26, L_29, L_31, /*hidden argument*/NULL);
		int32_t L_32 = ___mode1;
		if (L_32)
		{
			goto IL_010c;
		}
	}
	{
		List_1_t3206561227 * L_33 = ___tables2;
		NullCheck(L_33);
		int32_t L_34 = List_1_get_Count_m3747673379(L_33, /*hidden argument*/List_1_get_Count_m3747673379_RuntimeMethod_var);
		V_4 = ((DataTableU5BU5D_t3044315960*)SZArrayNew(DataTableU5BU5D_t3044315960_il2cpp_TypeInfo_var, (uint32_t)L_34));
		List_1_t3206561227 * L_35 = ___tables2;
		DataTableU5BU5D_t3044315960* L_36 = V_4;
		NullCheck(L_35);
		List_1_CopyTo_m1073910440(L_35, L_36, /*hidden argument*/List_1_CopyTo_m1073910440_RuntimeMethod_var);
		List_1_t3729299693 * L_37 = ___relations3;
		NullCheck(L_37);
		int32_t L_38 = List_1_get_Count_m3576787496(L_37, /*hidden argument*/List_1_get_Count_m3576787496_RuntimeMethod_var);
		V_5 = ((DataRelationU5BU5D_t2648313166*)SZArrayNew(DataRelationU5BU5D_t2648313166_il2cpp_TypeInfo_var, (uint32_t)L_38));
		List_1_t3729299693 * L_39 = ___relations3;
		DataRelationU5BU5D_t2648313166* L_40 = V_5;
		NullCheck(L_39);
		List_1_CopyTo_m984258531(L_39, L_40, /*hidden argument*/List_1_CopyTo_m984258531_RuntimeMethod_var);
		DataTableU5BU5D_t3044315960* L_41 = V_4;
		NullCheck(L_41);
		int32_t L_42 = 0;
		DataTable_t1734486485 * L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_6 = L_43;
		XmlWriter_t127905479 * L_44 = ___writer0;
		DataTableU5BU5D_t3044315960* L_45 = V_4;
		DataRelationU5BU5D_t2648313166* L_46 = V_5;
		String_t* L_47 = ___mainDataTable4;
		String_t* L_48 = ___dataSetName5;
		DataTable_t1734486485 * L_49 = V_6;
		NullCheck(L_49);
		bool L_50 = DataTable_get_LocaleSpecified_m1631050900(L_49, /*hidden argument*/NULL);
		G_B15_0 = L_48;
		G_B15_1 = L_47;
		G_B15_2 = L_46;
		G_B15_3 = L_45;
		G_B15_4 = L_44;
		if (!L_50)
		{
			G_B16_0 = L_48;
			G_B16_1 = L_47;
			G_B16_2 = L_46;
			G_B16_3 = L_45;
			G_B16_4 = L_44;
			goto IL_0101;
		}
	}
	{
		DataTable_t1734486485 * L_51 = V_6;
		NullCheck(L_51);
		CultureInfo_t4157843068 * L_52 = DataTable_get_Locale_m3093807342(L_51, /*hidden argument*/NULL);
		G_B17_0 = L_52;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		G_B17_4 = G_B15_3;
		G_B17_5 = G_B15_4;
		goto IL_0102;
	}

IL_0101:
	{
		G_B17_0 = ((CultureInfo_t4157843068 *)(NULL));
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		G_B17_5 = G_B16_4;
	}

IL_0102:
	{
		XmlSchemaWriter_t4200114175 * L_53 = (XmlSchemaWriter_t4200114175 *)il2cpp_codegen_object_new(XmlSchemaWriter_t4200114175_il2cpp_TypeInfo_var);
		XmlSchemaWriter__ctor_m3899701125(L_53, G_B17_5, G_B17_4, G_B17_3, G_B17_2, G_B17_1, G_B17_0, /*hidden argument*/NULL);
		NullCheck(L_53);
		XmlSchemaWriter_WriteSchema_m4254253614(L_53, /*hidden argument*/NULL);
	}

IL_010c:
	{
		XmlWriter_t127905479 * L_54 = ___writer0;
		int32_t L_55 = ___mode1;
		List_1_t3206561227 * L_56 = ___tables2;
		XmlTableWriter_WriteTableList_m2696637544(NULL /*static, unused*/, L_54, L_55, L_56, ((int32_t)1536), /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_57 = ___writer0;
		NullCheck(L_57);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_57);
	}

IL_011f:
	{
		int32_t L_58 = ___mode1;
		if ((!(((uint32_t)L_58) == ((uint32_t)2))))
		{
			goto IL_01cb;
		}
	}
	{
		List_1_t3206561227 * L_59 = (List_1_t3206561227 *)il2cpp_codegen_object_new(List_1_t3206561227_il2cpp_TypeInfo_var);
		List_1__ctor_m2004762968(L_59, /*hidden argument*/List_1__ctor_m2004762968_RuntimeMethod_var);
		V_7 = L_59;
		List_1_t3206561227 * L_60 = ___tables2;
		NullCheck(L_60);
		Enumerator_t800837808  L_61 = List_1_GetEnumerator_m1089387472(L_60, /*hidden argument*/List_1_GetEnumerator_m1089387472_RuntimeMethod_var);
		V_9 = L_61;
	}

IL_0135:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0170;
		}

IL_013a:
		{
			DataTable_t1734486485 * L_62 = Enumerator_get_Current_m938926476((&V_9), /*hidden argument*/Enumerator_get_Current_m938926476_RuntimeMethod_var);
			V_8 = L_62;
			DataTable_t1734486485 * L_63 = V_8;
			NullCheck(L_63);
			DataTable_t1734486485 * L_64 = DataTable_GetChanges_m3129966972(L_63, ((int32_t)24), /*hidden argument*/NULL);
			V_10 = L_64;
			DataTable_t1734486485 * L_65 = V_10;
			if (!L_65)
			{
				goto IL_0170;
			}
		}

IL_0155:
		{
			DataTable_t1734486485 * L_66 = V_10;
			NullCheck(L_66);
			DataRowCollection_t3217300826 * L_67 = DataTable_get_Rows_m4254623630(L_66, /*hidden argument*/NULL);
			NullCheck(L_67);
			int32_t L_68 = DataRowCollection_get_Count_m2865227289(L_67, /*hidden argument*/NULL);
			if ((((int32_t)L_68) <= ((int32_t)0)))
			{
				goto IL_0170;
			}
		}

IL_0167:
		{
			List_1_t3206561227 * L_69 = V_7;
			DataTable_t1734486485 * L_70 = V_10;
			NullCheck(L_69);
			List_1_Add_m2716001358(L_69, L_70, /*hidden argument*/List_1_Add_m2716001358_RuntimeMethod_var);
		}

IL_0170:
		{
			bool L_71 = Enumerator_MoveNext_m1588245369((&V_9), /*hidden argument*/Enumerator_MoveNext_m1588245369_RuntimeMethod_var);
			if (L_71)
			{
				goto IL_013a;
			}
		}

IL_017c:
		{
			IL2CPP_LEAVE(0x18E, FINALLY_0181);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0181;
	}

FINALLY_0181:
	{ // begin finally (depth: 1)
		Enumerator_t800837808  L_72 = V_9;
		Enumerator_t800837808  L_73 = L_72;
		RuntimeObject * L_74 = Box(Enumerator_t800837808_il2cpp_TypeInfo_var, &L_73);
		NullCheck((RuntimeObject*)L_74);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_74);
		IL2CPP_END_FINALLY(385)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(385)
	{
		IL2CPP_JUMP_TBL(0x18E, IL_018e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_018e:
	{
		List_1_t3206561227 * L_75 = V_7;
		NullCheck(L_75);
		int32_t L_76 = List_1_get_Count_m3747673379(L_75, /*hidden argument*/List_1_get_Count_m3747673379_RuntimeMethod_var);
		if ((((int32_t)L_76) <= ((int32_t)0)))
		{
			goto IL_01c5;
		}
	}
	{
		XmlWriter_t127905479 * L_77 = ___writer0;
		DataSet_WriteStartElement_m2002839902(NULL /*static, unused*/, L_77, 2, _stringLiteral978279152, _stringLiteral3930844835, _stringLiteral3098799694, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_78 = ___writer0;
		int32_t L_79 = ___mode1;
		List_1_t3206561227 * L_80 = V_7;
		XmlTableWriter_WriteTableList_m2696637544(NULL /*static, unused*/, L_78, L_79, L_80, ((int32_t)256), /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_81 = ___writer0;
		NullCheck(L_81);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_81);
	}

IL_01c5:
	{
		XmlWriter_t127905479 * L_82 = ___writer0;
		NullCheck(L_82);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_82);
	}

IL_01cb:
	{
		XmlWriter_t127905479 * L_83 = ___writer0;
		NullCheck(L_83);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlWriter::Flush() */, L_83);
		return;
	}
}
// System.Void XmlTableWriter::WriteTableList(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Collections.Generic.List`1<System.Data.DataTable>,System.Data.DataRowVersion)
extern "C"  void XmlTableWriter_WriteTableList_m2696637544 (RuntimeObject * __this /* static, unused */, XmlWriter_t127905479 * ___writer0, int32_t ___mode1, List_1_t3206561227 * ___tables2, int32_t ___version3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTableWriter_WriteTableList_m2696637544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataTable_t1734486485 * V_0 = NULL;
	Enumerator_t800837808  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3206561227 * L_0 = ___tables2;
		NullCheck(L_0);
		Enumerator_t800837808  L_1 = List_1_GetEnumerator_m1089387472(L_0, /*hidden argument*/List_1_GetEnumerator_m1089387472_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001d;
		}

IL_000c:
		{
			DataTable_t1734486485 * L_2 = Enumerator_get_Current_m938926476((&V_1), /*hidden argument*/Enumerator_get_Current_m938926476_RuntimeMethod_var);
			V_0 = L_2;
			XmlWriter_t127905479 * L_3 = ___writer0;
			DataTable_t1734486485 * L_4 = V_0;
			int32_t L_5 = ___mode1;
			int32_t L_6 = ___version3;
			DataSet_WriteTable_m4184185411(NULL /*static, unused*/, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		}

IL_001d:
		{
			bool L_7 = Enumerator_MoveNext_m1588245369((&V_1), /*hidden argument*/Enumerator_MoveNext_m1588245369_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_000c;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Enumerator_t800837808  L_8 = V_1;
		Enumerator_t800837808  L_9 = L_8;
		RuntimeObject * L_10 = Box(Enumerator_t800837808_il2cpp_TypeInfo_var, &L_9);
		NullCheck((RuntimeObject*)L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
