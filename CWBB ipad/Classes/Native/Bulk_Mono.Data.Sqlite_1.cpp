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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t1448580847;
// Mono.Data.Sqlite.SQLiteCallback
struct SQLiteCallback_t1634814860;
// Mono.Data.Sqlite.SQLiteCollation
struct SQLiteCollation_t2922389035;
// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_t583925460;
// Mono.Data.Sqlite.SQLiteCommitHandler
struct SQLiteCommitHandler_t4261451224;
// Mono.Data.Sqlite.SQLiteEnlistment
struct SQLiteEnlistment_t238178236;
// Mono.Data.Sqlite.SQLiteFinalCallback
struct SQLiteFinalCallback_t3927043577;
// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t3445264418;
// Mono.Data.Sqlite.SQLiteTypeNames[]
struct SQLiteTypeNamesU5BU5D_t3695135457;
// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_t3929343441;
// Mono.Data.Sqlite.SQLiteUpdateEventHandler
struct SQLiteUpdateEventHandler_t65030829;
// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_t3916884476;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t3870565407;
// Mono.Data.Sqlite.SqliteException
struct SqliteException_t1654350877;
// Mono.Data.Sqlite.SqliteParameter
struct SqliteParameter_t314071523;
// Mono.Data.Sqlite.SqliteParameterCollection
struct SqliteParameterCollection_t2576174450;
// Mono.Data.Sqlite.SqliteParameter[]
struct SqliteParameterU5BU5D_t1212451634;
// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t1470694543;
// Mono.Data.Sqlite.SqliteStatementHandle
struct SqliteStatementHandle_t2894995162;
// Mono.Data.Sqlite.SqliteStatement[]
struct SqliteStatementU5BU5D_t169829462;
// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_t2018962351;
// Mono.Data.Sqlite.TypeAffinity[]
struct TypeAffinityU5BU5D_t3245185252;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>
struct List_1_t1786146265;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>
struct List_1_t2942769285;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.Data.Common.DbParameter
struct DbParameter_t3789779732;
// System.Data.Common.DbParameterCollection
struct DbParameterCollection_t2951779354;
// System.Data.Common.DbTransaction
struct DbTransaction_t2989397904;
// System.Data.DbType[]
struct DbTypeU5BU5D_t2821814235;
// System.Data.StateChangeEventHandler
struct StateChangeEventHandler_t3645615602;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.EventHandler
struct EventHandler_t1348719766;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Int32
struct Int32_t2950945753;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.InteropServices.CriticalHandle
struct CriticalHandle_t2719507733;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// System.WeakReference
struct WeakReference_t1334886716;

extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* DBNull_t3725197148_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t3675390142_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1786146265_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* SQLiteBase_t1448580847_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteConvert_t3923026649_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteException_t1654350877_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteParameterU5BU5D_t1212451634_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteParameter_t314071523_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteStatementHandle_t2894995162_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255367____U24U24fieldU2D1_1_FieldInfo_var;
extern String_t* _stringLiteral1262539702;
extern String_t* _stringLiteral1898132772;
extern String_t* _stringLiteral2091341615;
extern String_t* _stringLiteral2566675341;
extern String_t* _stringLiteral2788878995;
extern String_t* _stringLiteral3139949461;
extern String_t* _stringLiteral3302423820;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614549;
extern String_t* _stringLiteral3452614592;
extern String_t* _stringLiteral3452614643;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3850626752;
extern String_t* _stringLiteral3879940289;
extern String_t* _stringLiteral4164993244;
extern String_t* _stringLiteral523764549;
extern String_t* _stringLiteral863716709;
extern const RuntimeMethod* Enumerator_MoveNext_m1590337042_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m652505233_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3654925716_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3268591710_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m3531036492_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2439629714_RuntimeMethod_var;
extern const RuntimeMethod* List_1_IndexOf_m2070012886_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Insert_m1138204345_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m3550022813_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m984012428_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m378953738_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2034367342_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3346882080_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3470793231_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m675635581_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m986523310_RuntimeMethod_var;
extern const RuntimeMethod* SqliteParameterCollection_CopyTo_m1994387237_RuntimeMethod_var;
extern const RuntimeMethod* SqliteParameter_set_Direction_m965025500_RuntimeMethod_var;
extern const RuntimeMethod* SqliteStatement_BindParameter_m1687872649_RuntimeMethod_var;
extern const RuntimeMethod* SqliteStatement_SetTypes_m2516179202_RuntimeMethod_var;
extern const RuntimeMethod* SqliteTransaction_IsValid_m881367657_RuntimeMethod_var;
extern const RuntimeMethod* SqliteTransaction__ctor_m4125206649_RuntimeMethod_var;
extern const uint32_t SqliteParameterCollection_AddRange_m2327194941_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_AddWithValue_m3095018979_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_Add_m3760761682_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_Add_m649006753_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_Clear_m1497813106_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_Contains_m4089231290_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_CopyTo_m1994387237_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_GetEnumerator_m2240995518_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_GetParameter_m1309237779_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_IndexOf_m239548196_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_IndexOf_m4186905031_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_Insert_m2525214579_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_MapParameters_m2981467632_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_RemoveAt_m3422590783_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_Remove_m176345982_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_SetParameter_m1126912920_MetadataUsageId;
extern const uint32_t SqliteParameterCollection__ctor_m711734823_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_get_Count_m3687734005_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_get_Item_m1901816134_MetadataUsageId;
extern const uint32_t SqliteParameter_Clone_m3827036997_MetadataUsageId;
extern const uint32_t SqliteParameter_get_DbType_m2001601458_MetadataUsageId;
extern const uint32_t SqliteParameter_set_Direction_m965025500_MetadataUsageId;
extern const uint32_t SqliteParameter_set_Value_m4143515341_MetadataUsageId;
extern const uint32_t SqliteStatementHandle_ReleaseHandle_m3069235056_MetadataUsageId;
extern const uint32_t SqliteStatementHandle__ctor_m3041060064_MetadataUsageId;
extern const uint32_t SqliteStatementHandle_get_IsInvalid_m882893773_MetadataUsageId;
extern const uint32_t SqliteStatementHandle_op_Implicit_m3583322638_MetadataUsageId;
extern const uint32_t SqliteStatement_BindParameter_m1687872649_MetadataUsageId;
extern const uint32_t SqliteStatement_MapParameter_m3024728063_MetadataUsageId;
extern const uint32_t SqliteStatement_SetTypes_m2516179202_MetadataUsageId;
extern const uint32_t SqliteStatement__ctor_m3733929500_MetadataUsageId;
extern const uint32_t SqliteTransaction_Commit_m1892628780_MetadataUsageId;
extern const uint32_t SqliteTransaction_IsValid_m881367657_MetadataUsageId;
extern const uint32_t SqliteTransaction_IssueRollback_m2494991181_MetadataUsageId;
extern const uint32_t SqliteTransaction__ctor_m4125206649_MetadataUsageId;

struct SqliteParameterU5BU5D_t1212451634;
struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;


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
#ifndef SQLITESTATEMENT_T1470694543_H
#define SQLITESTATEMENT_T1470694543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteStatement
struct  SqliteStatement_t1470694543  : public RuntimeObject
{
public:
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteStatement::_sql
	SQLiteBase_t1448580847 * ____sql_0;
	// System.String Mono.Data.Sqlite.SqliteStatement::_sqlStatement
	String_t* ____sqlStatement_1;
	// Mono.Data.Sqlite.SqliteStatementHandle Mono.Data.Sqlite.SqliteStatement::_sqlite_stmt
	SqliteStatementHandle_t2894995162 * ____sqlite_stmt_2;
	// System.Int32 Mono.Data.Sqlite.SqliteStatement::_unnamedParameters
	int32_t ____unnamedParameters_3;
	// System.String[] Mono.Data.Sqlite.SqliteStatement::_paramNames
	StringU5BU5D_t1281789340* ____paramNames_4;
	// Mono.Data.Sqlite.SqliteParameter[] Mono.Data.Sqlite.SqliteStatement::_paramValues
	SqliteParameterU5BU5D_t1212451634* ____paramValues_5;
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteStatement::_command
	SqliteCommand_t3916884476 * ____command_6;
	// System.String[] Mono.Data.Sqlite.SqliteStatement::_types
	StringU5BU5D_t1281789340* ____types_7;

public:
	inline static int32_t get_offset_of__sql_0() { return static_cast<int32_t>(offsetof(SqliteStatement_t1470694543, ____sql_0)); }
	inline SQLiteBase_t1448580847 * get__sql_0() const { return ____sql_0; }
	inline SQLiteBase_t1448580847 ** get_address_of__sql_0() { return &____sql_0; }
	inline void set__sql_0(SQLiteBase_t1448580847 * value)
	{
		____sql_0 = value;
		Il2CppCodeGenWriteBarrier((&____sql_0), value);
	}

	inline static int32_t get_offset_of__sqlStatement_1() { return static_cast<int32_t>(offsetof(SqliteStatement_t1470694543, ____sqlStatement_1)); }
	inline String_t* get__sqlStatement_1() const { return ____sqlStatement_1; }
	inline String_t** get_address_of__sqlStatement_1() { return &____sqlStatement_1; }
	inline void set__sqlStatement_1(String_t* value)
	{
		____sqlStatement_1 = value;
		Il2CppCodeGenWriteBarrier((&____sqlStatement_1), value);
	}

	inline static int32_t get_offset_of__sqlite_stmt_2() { return static_cast<int32_t>(offsetof(SqliteStatement_t1470694543, ____sqlite_stmt_2)); }
	inline SqliteStatementHandle_t2894995162 * get__sqlite_stmt_2() const { return ____sqlite_stmt_2; }
	inline SqliteStatementHandle_t2894995162 ** get_address_of__sqlite_stmt_2() { return &____sqlite_stmt_2; }
	inline void set__sqlite_stmt_2(SqliteStatementHandle_t2894995162 * value)
	{
		____sqlite_stmt_2 = value;
		Il2CppCodeGenWriteBarrier((&____sqlite_stmt_2), value);
	}

	inline static int32_t get_offset_of__unnamedParameters_3() { return static_cast<int32_t>(offsetof(SqliteStatement_t1470694543, ____unnamedParameters_3)); }
	inline int32_t get__unnamedParameters_3() const { return ____unnamedParameters_3; }
	inline int32_t* get_address_of__unnamedParameters_3() { return &____unnamedParameters_3; }
	inline void set__unnamedParameters_3(int32_t value)
	{
		____unnamedParameters_3 = value;
	}

	inline static int32_t get_offset_of__paramNames_4() { return static_cast<int32_t>(offsetof(SqliteStatement_t1470694543, ____paramNames_4)); }
	inline StringU5BU5D_t1281789340* get__paramNames_4() const { return ____paramNames_4; }
	inline StringU5BU5D_t1281789340** get_address_of__paramNames_4() { return &____paramNames_4; }
	inline void set__paramNames_4(StringU5BU5D_t1281789340* value)
	{
		____paramNames_4 = value;
		Il2CppCodeGenWriteBarrier((&____paramNames_4), value);
	}

	inline static int32_t get_offset_of__paramValues_5() { return static_cast<int32_t>(offsetof(SqliteStatement_t1470694543, ____paramValues_5)); }
	inline SqliteParameterU5BU5D_t1212451634* get__paramValues_5() const { return ____paramValues_5; }
	inline SqliteParameterU5BU5D_t1212451634** get_address_of__paramValues_5() { return &____paramValues_5; }
	inline void set__paramValues_5(SqliteParameterU5BU5D_t1212451634* value)
	{
		____paramValues_5 = value;
		Il2CppCodeGenWriteBarrier((&____paramValues_5), value);
	}

	inline static int32_t get_offset_of__command_6() { return static_cast<int32_t>(offsetof(SqliteStatement_t1470694543, ____command_6)); }
	inline SqliteCommand_t3916884476 * get__command_6() const { return ____command_6; }
	inline SqliteCommand_t3916884476 ** get_address_of__command_6() { return &____command_6; }
	inline void set__command_6(SqliteCommand_t3916884476 * value)
	{
		____command_6 = value;
		Il2CppCodeGenWriteBarrier((&____command_6), value);
	}

	inline static int32_t get_offset_of__types_7() { return static_cast<int32_t>(offsetof(SqliteStatement_t1470694543, ____types_7)); }
	inline StringU5BU5D_t1281789340* get__types_7() const { return ____types_7; }
	inline StringU5BU5D_t1281789340** get_address_of__types_7() { return &____types_7; }
	inline void set__types_7(StringU5BU5D_t1281789340* value)
	{
		____types_7 = value;
		Il2CppCodeGenWriteBarrier((&____types_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITESTATEMENT_T1470694543_H
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
#ifndef LIST_1_T1786146265_H
#define LIST_1_T1786146265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>
struct  List_1_t1786146265  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SqliteParameterU5BU5D_t1212451634* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1786146265, ____items_1)); }
	inline SqliteParameterU5BU5D_t1212451634* get__items_1() const { return ____items_1; }
	inline SqliteParameterU5BU5D_t1212451634** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SqliteParameterU5BU5D_t1212451634* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1786146265, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1786146265, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1786146265_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	SqliteParameterU5BU5D_t1212451634* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1786146265_StaticFields, ___EmptyArray_4)); }
	inline SqliteParameterU5BU5D_t1212451634* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline SqliteParameterU5BU5D_t1212451634** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(SqliteParameterU5BU5D_t1212451634* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1786146265_H
#ifndef LIST_1_T2942769285_H
#define LIST_1_T2942769285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>
struct  List_1_t2942769285  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SqliteStatementU5BU5D_t169829462* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2942769285, ____items_1)); }
	inline SqliteStatementU5BU5D_t169829462* get__items_1() const { return ____items_1; }
	inline SqliteStatementU5BU5D_t169829462** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SqliteStatementU5BU5D_t169829462* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2942769285, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2942769285, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2942769285_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	SqliteStatementU5BU5D_t169829462* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2942769285_StaticFields, ___EmptyArray_4)); }
	inline SqliteStatementU5BU5D_t169829462* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline SqliteStatementU5BU5D_t169829462** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(SqliteStatementU5BU5D_t169829462* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2942769285_H
#ifndef DBNULL_T3725197148_H
#define DBNULL_T3725197148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t3725197148  : public RuntimeObject
{
public:

public:
};

struct DBNull_t3725197148_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t3725197148 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t3725197148_StaticFields, ___Value_0)); }
	inline DBNull_t3725197148 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t3725197148 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t3725197148 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T3725197148_H
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
#ifndef U24ARRAYTYPEU24104_T3906744623_H
#define U24ARRAYTYPEU24104_T3906744623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$104
struct  U24ArrayTypeU24104_t3906744623 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24104_t3906744623__padding[104];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24104_T3906744623_H
#ifndef U24ARRAYTYPEU248_T3244137466_H
#define U24ARRAYTYPEU248_T3244137466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t3244137466 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t3244137466__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T3244137466_H
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
#ifndef ENUMERATOR_T3675390142_H
#define ENUMERATOR_T3675390142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteParameter>
struct  Enumerator_t3675390142 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1786146265 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SqliteParameter_t314071523 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3675390142, ___l_0)); }
	inline List_1_t1786146265 * get_l_0() const { return ___l_0; }
	inline List_1_t1786146265 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1786146265 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3675390142, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3675390142, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3675390142, ___current_3)); }
	inline SqliteParameter_t314071523 * get_current_3() const { return ___current_3; }
	inline SqliteParameter_t314071523 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SqliteParameter_t314071523 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3675390142_H
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
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
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
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255367  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$104 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24104_t3906744623  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU248_t3244137466  ___U24U24fieldU2D1_1;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU24104_t3906744623  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU24104_t3906744623 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU24104_t3906744623  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU248_t3244137466  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU248_t3244137466 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU248_t3244137466  value)
	{
		___U24U24fieldU2D1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifndef SQLITEDATEFORMATS_T3434063553_H
#define SQLITEDATEFORMATS_T3434063553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteDateFormats
struct  SQLiteDateFormats_t3434063553 
{
public:
	// System.Int32 Mono.Data.Sqlite.SQLiteDateFormats::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SQLiteDateFormats_t3434063553, ___value___1)); }
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
#endif // SQLITEDATEFORMATS_T3434063553_H
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
#ifndef PARAMETERDIRECTION_T533932466_H
#define PARAMETERDIRECTION_T533932466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ParameterDirection
struct  ParameterDirection_t533932466 
{
public:
	// System.Int32 System.Data.ParameterDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterDirection_t533932466, ___value___1)); }
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
#endif // PARAMETERDIRECTION_T533932466_H
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
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
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
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
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
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___1)); }
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
#endif // STRINGCOMPARISON_T3657712135_H
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
#ifndef SQLITECONVERT_T3923026649_H
#define SQLITECONVERT_T3923026649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteConvert
struct  SqliteConvert_t3923026649  : public RuntimeObject
{
public:
	// Mono.Data.Sqlite.SQLiteDateFormats Mono.Data.Sqlite.SqliteConvert::_datetimeFormat
	int32_t ____datetimeFormat_2;

public:
	inline static int32_t get_offset_of__datetimeFormat_2() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649, ____datetimeFormat_2)); }
	inline int32_t get__datetimeFormat_2() const { return ____datetimeFormat_2; }
	inline int32_t* get_address_of__datetimeFormat_2() { return &____datetimeFormat_2; }
	inline void set__datetimeFormat_2(int32_t value)
	{
		____datetimeFormat_2 = value;
	}
};

struct SqliteConvert_t3923026649_StaticFields
{
public:
	// System.String[] Mono.Data.Sqlite.SqliteConvert::_datetimeFormats
	StringU5BU5D_t1281789340* ____datetimeFormats_0;
	// System.Text.Encoding Mono.Data.Sqlite.SqliteConvert::_utf8
	Encoding_t1523322056 * ____utf8_1;
	// System.Type[] Mono.Data.Sqlite.SqliteConvert::_affinitytotype
	TypeU5BU5D_t3940880105* ____affinitytotype_3;
	// System.Data.DbType[] Mono.Data.Sqlite.SqliteConvert::_typetodbtype
	DbTypeU5BU5D_t2821814235* ____typetodbtype_4;
	// System.Int32[] Mono.Data.Sqlite.SqliteConvert::_dbtypetocolumnsize
	Int32U5BU5D_t385246372* ____dbtypetocolumnsize_5;
	// System.Object[] Mono.Data.Sqlite.SqliteConvert::_dbtypetonumericprecision
	ObjectU5BU5D_t2843939325* ____dbtypetonumericprecision_6;
	// System.Object[] Mono.Data.Sqlite.SqliteConvert::_dbtypetonumericscale
	ObjectU5BU5D_t2843939325* ____dbtypetonumericscale_7;
	// Mono.Data.Sqlite.SQLiteTypeNames[] Mono.Data.Sqlite.SqliteConvert::_dbtypeNames
	SQLiteTypeNamesU5BU5D_t3695135457* ____dbtypeNames_8;
	// System.Type[] Mono.Data.Sqlite.SqliteConvert::_dbtypeToType
	TypeU5BU5D_t3940880105* ____dbtypeToType_9;
	// Mono.Data.Sqlite.TypeAffinity[] Mono.Data.Sqlite.SqliteConvert::_typecodeAffinities
	TypeAffinityU5BU5D_t3245185252* ____typecodeAffinities_10;
	// Mono.Data.Sqlite.SQLiteTypeNames[] Mono.Data.Sqlite.SqliteConvert::_typeNames
	SQLiteTypeNamesU5BU5D_t3695135457* ____typeNames_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConvert::<>f__switch$map0
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map0_12;

public:
	inline static int32_t get_offset_of__datetimeFormats_0() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649_StaticFields, ____datetimeFormats_0)); }
	inline StringU5BU5D_t1281789340* get__datetimeFormats_0() const { return ____datetimeFormats_0; }
	inline StringU5BU5D_t1281789340** get_address_of__datetimeFormats_0() { return &____datetimeFormats_0; }
	inline void set__datetimeFormats_0(StringU5BU5D_t1281789340* value)
	{
		____datetimeFormats_0 = value;
		Il2CppCodeGenWriteBarrier((&____datetimeFormats_0), value);
	}

	inline static int32_t get_offset_of__utf8_1() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649_StaticFields, ____utf8_1)); }
	inline Encoding_t1523322056 * get__utf8_1() const { return ____utf8_1; }
	inline Encoding_t1523322056 ** get_address_of__utf8_1() { return &____utf8_1; }
	inline void set__utf8_1(Encoding_t1523322056 * value)
	{
		____utf8_1 = value;
		Il2CppCodeGenWriteBarrier((&____utf8_1), value);
	}

	inline static int32_t get_offset_of__affinitytotype_3() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649_StaticFields, ____affinitytotype_3)); }
	inline TypeU5BU5D_t3940880105* get__affinitytotype_3() const { return ____affinitytotype_3; }
	inline TypeU5BU5D_t3940880105** get_address_of__affinitytotype_3() { return &____affinitytotype_3; }
	inline void set__affinitytotype_3(TypeU5BU5D_t3940880105* value)
	{
		____affinitytotype_3 = value;
		Il2CppCodeGenWriteBarrier((&____affinitytotype_3), value);
	}

	inline static int32_t get_offset_of__typetodbtype_4() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649_StaticFields, ____typetodbtype_4)); }
	inline DbTypeU5BU5D_t2821814235* get__typetodbtype_4() const { return ____typetodbtype_4; }
	inline DbTypeU5BU5D_t2821814235** get_address_of__typetodbtype_4() { return &____typetodbtype_4; }
	inline void set__typetodbtype_4(DbTypeU5BU5D_t2821814235* value)
	{
		____typetodbtype_4 = value;
		Il2CppCodeGenWriteBarrier((&____typetodbtype_4), value);
	}

	inline static int32_t get_offset_of__dbtypetocolumnsize_5() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649_StaticFields, ____dbtypetocolumnsize_5)); }
	inline Int32U5BU5D_t385246372* get__dbtypetocolumnsize_5() const { return ____dbtypetocolumnsize_5; }
	inline Int32U5BU5D_t385246372** get_address_of__dbtypetocolumnsize_5() { return &____dbtypetocolumnsize_5; }
	inline void set__dbtypetocolumnsize_5(Int32U5BU5D_t385246372* value)
	{
		____dbtypetocolumnsize_5 = value;
		Il2CppCodeGenWriteBarrier((&____dbtypetocolumnsize_5), value);
	}

	inline static int32_t get_offset_of__dbtypetonumericprecision_6() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649_StaticFields, ____dbtypetonumericprecision_6)); }
	inline ObjectU5BU5D_t2843939325* get__dbtypetonumericprecision_6() const { return ____dbtypetonumericprecision_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of__dbtypetonumericprecision_6() { return &____dbtypetonumericprecision_6; }
	inline void set__dbtypetonumericprecision_6(ObjectU5BU5D_t2843939325* value)
	{
		____dbtypetonumericprecision_6 = value;
		Il2CppCodeGenWriteBarrier((&____dbtypetonumericprecision_6), value);
	}

	inline static int32_t get_offset_of__dbtypetonumericscale_7() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649_StaticFields, ____dbtypetonumericscale_7)); }
	inline ObjectU5BU5D_t2843939325* get__dbtypetonumericscale_7() const { return ____dbtypetonumericscale_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of__dbtypetonumericscale_7() { return &____dbtypetonumericscale_7; }
	inline void set__dbtypetonumericscale_7(ObjectU5BU5D_t2843939325* value)
	{
		____dbtypetonumericscale_7 = value;
		Il2CppCodeGenWriteBarrier((&____dbtypetonumericscale_7), value);
	}

	inline static int32_t get_offset_of__dbtypeNames_8() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649_StaticFields, ____dbtypeNames_8)); }
	inline SQLiteTypeNamesU5BU5D_t3695135457* get__dbtypeNames_8() const { return ____dbtypeNames_8; }
	inline SQLiteTypeNamesU5BU5D_t3695135457** get_address_of__dbtypeNames_8() { return &____dbtypeNames_8; }
	inline void set__dbtypeNames_8(SQLiteTypeNamesU5BU5D_t3695135457* value)
	{
		____dbtypeNames_8 = value;
		Il2CppCodeGenWriteBarrier((&____dbtypeNames_8), value);
	}

	inline static int32_t get_offset_of__dbtypeToType_9() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649_StaticFields, ____dbtypeToType_9)); }
	inline TypeU5BU5D_t3940880105* get__dbtypeToType_9() const { return ____dbtypeToType_9; }
	inline TypeU5BU5D_t3940880105** get_address_of__dbtypeToType_9() { return &____dbtypeToType_9; }
	inline void set__dbtypeToType_9(TypeU5BU5D_t3940880105* value)
	{
		____dbtypeToType_9 = value;
		Il2CppCodeGenWriteBarrier((&____dbtypeToType_9), value);
	}

	inline static int32_t get_offset_of__typecodeAffinities_10() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649_StaticFields, ____typecodeAffinities_10)); }
	inline TypeAffinityU5BU5D_t3245185252* get__typecodeAffinities_10() const { return ____typecodeAffinities_10; }
	inline TypeAffinityU5BU5D_t3245185252** get_address_of__typecodeAffinities_10() { return &____typecodeAffinities_10; }
	inline void set__typecodeAffinities_10(TypeAffinityU5BU5D_t3245185252* value)
	{
		____typecodeAffinities_10 = value;
		Il2CppCodeGenWriteBarrier((&____typecodeAffinities_10), value);
	}

	inline static int32_t get_offset_of__typeNames_11() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649_StaticFields, ____typeNames_11)); }
	inline SQLiteTypeNamesU5BU5D_t3695135457* get__typeNames_11() const { return ____typeNames_11; }
	inline SQLiteTypeNamesU5BU5D_t3695135457** get_address_of__typeNames_11() { return &____typeNames_11; }
	inline void set__typeNames_11(SQLiteTypeNamesU5BU5D_t3695135457* value)
	{
		____typeNames_11 = value;
		Il2CppCodeGenWriteBarrier((&____typeNames_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_12() { return static_cast<int32_t>(offsetof(SqliteConvert_t3923026649_StaticFields, ___U3CU3Ef__switchU24map0_12)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map0_12() const { return ___U3CU3Ef__switchU24map0_12; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map0_12() { return &___U3CU3Ef__switchU24map0_12; }
	inline void set_U3CU3Ef__switchU24map0_12(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map0_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map0_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECONVERT_T3923026649_H
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
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
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
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
#ifndef SQLITEBASE_T1448580847_H
#define SQLITEBASE_T1448580847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteBase
struct  SQLiteBase_t1448580847  : public SqliteConvert_t3923026649
{
public:

public:
};

struct SQLiteBase_t1448580847_StaticFields
{
public:
	// System.Object Mono.Data.Sqlite.SQLiteBase::_lock
	RuntimeObject * ____lock_13;

public:
	inline static int32_t get_offset_of__lock_13() { return static_cast<int32_t>(offsetof(SQLiteBase_t1448580847_StaticFields, ____lock_13)); }
	inline RuntimeObject * get__lock_13() const { return ____lock_13; }
	inline RuntimeObject ** get_address_of__lock_13() { return &____lock_13; }
	inline void set__lock_13(RuntimeObject * value)
	{
		____lock_13 = value;
		Il2CppCodeGenWriteBarrier((&____lock_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEBASE_T1448580847_H
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
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Mono.Data.Sqlite.SqliteParameter[]
struct SqliteParameterU5BU5D_t1212451634  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqliteParameter_t314071523 * m_Items[1];

public:
	inline SqliteParameter_t314071523 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqliteParameter_t314071523 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqliteParameter_t314071523 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SqliteParameter_t314071523 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqliteParameter_t314071523 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqliteParameter_t314071523 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m2662756272_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Insert_m3748206754_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m1979164443_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);

// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.String,System.Data.DataRowVersion)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m1941818683 (SqliteParameter_t314071523 * __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, String_t* ___sourceColumn3, int32_t ___rowVersion4, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Value(System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_Value_m4143515341 (SqliteParameter_t314071523 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DbParameter__ctor_m3943448221 (DbParameter_t3789779732 * __this, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteParameter::get_ParameterName()
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_ParameterName_m608645520 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method);
// System.Data.ParameterDirection Mono.Data.Sqlite.SqliteParameter::get_Direction()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_Direction_m1522110307 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Data.Sqlite.SqliteParameter::get_IsNullable()
extern "C" IL2CPP_METHOD_ATTR bool SqliteParameter_get_IsNullable_m1715878715 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteParameter::get_SourceColumn()
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_SourceColumn_m451559328 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method);
// System.Data.DataRowVersion Mono.Data.Sqlite.SqliteParameter::get_SourceVersion()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_SourceVersion_m3295797824 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method);
// System.Object Mono.Data.Sqlite.SqliteParameter::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteParameter_get_Value_m2727307014 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.Data.ParameterDirection,System.Boolean,System.Byte,System.Byte,System.String,System.Data.DataRowVersion,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m457815538 (SqliteParameter_t314071523 * __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, int32_t ___direction3, bool ___isNullable4, uint8_t ___precision5, uint8_t ___scale6, String_t* ___sourceColumn7, int32_t ___rowVersion8, RuntimeObject * ___value9, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Direction(System.Data.ParameterDirection)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_Direction_m965025500 (SqliteParameter_t314071523 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::set_IsNullable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_IsNullable_m3269246668 (SqliteParameter_t314071523 * __this, bool ___value0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Data.DbType Mono.Data.Sqlite.SqliteConvert::TypeToDbType(System.Type)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteConvert_TypeToDbType_m447124154 (RuntimeObject * __this /* static, unused */, Type_t * ___typ0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m2018940148 (SqliteParameter_t314071523 * __this, SqliteParameter_t314071523 * ___source0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbParameterCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DbParameterCollection__ctor_m1071468118 (DbParameterCollection_t2951779354 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::.ctor()
inline void List_1__ctor_m378953738 (List_1_t1786146265 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1786146265 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::GetEnumerator()
inline Enumerator_t3675390142  List_1_GetEnumerator_m2439629714 (List_1_t1786146265 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3675390142  (*) (List_1_t1786146265 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_IndexOf_m4186905031 (SqliteParameterCollection_t2576174450 * __this, String_t* ___parameterName0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::get_Count()
inline int32_t List_1_get_Count_m2034367342 (List_1_t1786146265 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1786146265 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Add(!0)
inline void List_1_Add_m3654925716 (List_1_t1786146265 * __this, SqliteParameter_t314071523 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1786146265 *, SqliteParameter_t314071523 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::SetParameter(System.Int32,System.Data.Common.DbParameter)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_SetParameter_m1126912920 (SqliteParameterCollection_t2576174450 * __this, int32_t ___index0, DbParameter_t3789779732 * ___value1, const RuntimeMethod* method);
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_Add_m649006753 (SqliteParameterCollection_t2576174450 * __this, SqliteParameter_t314071523 * ___parameter0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m2833016540 (SqliteParameter_t314071523 * __this, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t Array_get_Length_m21610649 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Object System.Array::GetValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_GetValue_m2528546681 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Clear()
inline void List_1_Clear_m3268591710 (List_1_t1786146265 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1786146265 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Contains(!0)
inline bool List_1_Contains_m3531036492 (List_1_t1786146265 * __this, SqliteParameter_t314071523 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1786146265 *, SqliteParameter_t314071523 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method);
}
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method);
// System.Data.Common.DbParameter Mono.Data.Sqlite.SqliteParameterCollection::GetParameter(System.Int32)
extern "C" IL2CPP_METHOD_ATTR DbParameter_t3789779732 * SqliteParameterCollection_GetParameter_m1309237779 (SqliteParameterCollection_t2576174450 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::get_Item(System.Int32)
inline SqliteParameter_t314071523 * List_1_get_Item_m675635581 (List_1_t1786146265 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  SqliteParameter_t314071523 * (*) (List_1_t1786146265 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
extern "C" IL2CPP_METHOD_ATTR int32_t String_Compare_m1293271421 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, bool p2, CultureInfo_t4157843068 * p3, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::IndexOf(!0)
inline int32_t List_1_IndexOf_m2070012886 (List_1_t1786146265 * __this, SqliteParameter_t314071523 * p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1786146265 *, SqliteParameter_t314071523 *, const RuntimeMethod*))List_1_IndexOf_m2662756272_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Insert(System.Int32,!0)
inline void List_1_Insert_m1138204345 (List_1_t1786146265 * __this, int32_t p0, SqliteParameter_t314071523 * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1786146265 *, int32_t, SqliteParameter_t314071523 *, const RuntimeMethod*))List_1_Insert_m3748206754_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Remove(!0)
inline bool List_1_Remove_m984012428 (List_1_t1786146265 * __this, SqliteParameter_t314071523 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1786146265 *, SqliteParameter_t314071523 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3550022813 (List_1_t1786146265 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1786146265 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m986523310 (List_1_t1786146265 * __this, int32_t p0, SqliteParameter_t314071523 * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1786146265 *, int32_t, SqliteParameter_t314071523 *, const RuntimeMethod*))List_1_set_Item_m1979164443_gshared)(__this, p0, p1, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteParameter>::get_Current()
inline SqliteParameter_t314071523 * Enumerator_get_Current_m652505233 (Enumerator_t3675390142 * __this, const RuntimeMethod* method)
{
	return ((  SqliteParameter_t314071523 * (*) (Enumerator_t3675390142 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m1881875187 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>::get_Count()
inline int32_t List_1_get_Count_m3346882080 (List_1_t2942769285 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2942769285 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>::get_Item(System.Int32)
inline SqliteStatement_t1470694543 * List_1_get_Item_m3470793231 (List_1_t2942769285 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  SqliteStatement_t1470694543 * (*) (List_1_t2942769285 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Boolean Mono.Data.Sqlite.SqliteStatement::MapParameter(System.String,Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR bool SqliteStatement_MapParameter_m3024728063 (SqliteStatement_t1470694543 * __this, String_t* ___s0, SqliteParameter_t314071523 * ___p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteParameter>::MoveNext()
inline bool Enumerator_MoveNext_m1590337042 (Enumerator_t3675390142 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3675390142 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Max_m1873195862 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
extern "C" IL2CPP_METHOD_ATTR int32_t String_Compare_m945110377 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, String_t* p2, int32_t p3, int32_t p4, bool p5, CultureInfo_t4157843068 * p6, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.CriticalHandle::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CriticalHandle_Dispose_m1475961491 (CriticalHandle_t2719507733 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameter(System.Int32,Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR void SqliteStatement_BindParameter_m1687872649 (SqliteStatement_t1470694543 * __this, int32_t ___index0, SqliteParameter_t314071523 * ___param1, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void SqliteException__ctor_m1183710838 (SqliteException_t1654350877 * __this, int32_t ___errorCode0, String_t* ___extendedInformation1, const RuntimeMethod* method);
// System.Data.DbType Mono.Data.Sqlite.SqliteParameter::get_DbType()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_DbType_m2001601458 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method);
// System.Boolean System.Convert::IsDBNull(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Convert_IsDBNull_m1175282580 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_CurrentCulture_m1632690660 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  Convert_ToDateTime_m1567637286 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m2643251823 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m3211312035 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m4017511472 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteCommand::get_Connection()
extern "C" IL2CPP_METHOD_ATTR SqliteConnection_t3870565407 * SqliteCommand_get_Connection_m1985721621 (SqliteCommand_t3916884476 * __this, const RuntimeMethod* method);
// System.Byte[] System.Guid::ToByteArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Guid_ToByteArray_m1059098555 (Guid_t * __this, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Convert_ToDecimal_m3815908452 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Decimal_ToString_m3653216873 (Decimal_t2948259380 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m3385789296 (String_t* __this, String_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m2047740448 (ArgumentOutOfRangeException_t777629997 * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m3041060064 (SqliteStatementHandle_t2894995162 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.CriticalHandle::SetHandle(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CriticalHandle_SetHandle_m393101319 (CriticalHandle_t2719507733 * __this, intptr_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.CriticalHandle::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CriticalHandle__ctor_m1948407678 (CriticalHandle_t2719507733 * __this, intptr_t p0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SQLiteBase::FinalizeStatement(Mono.Data.Sqlite.SqliteStatementHandle)
extern "C" IL2CPP_METHOD_ATTR void SQLiteBase_FinalizeStatement_m2940168490 (RuntimeObject * __this /* static, unused */, SqliteStatementHandle_t2894995162 * ___stmt0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m2554088766 (SqliteStatementHandle_t2894995162 * __this, intptr_t ___stmt0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbTransaction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DbTransaction__ctor_m897502483 (DbTransaction_t2989397904 * __this, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteConnection::CreateCommand()
extern "C" IL2CPP_METHOD_ATTR SqliteCommand_t3916884476 * SqliteConnection_CreateCommand_m1680859346 (SqliteConnection_t3870565407 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteCommand::set_CommandText(System.String)
extern "C" IL2CPP_METHOD_ATTR void SqliteCommand_set_CommandText_m781537148 (SqliteCommand_t3916884476 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Mono.Data.Sqlite.SqliteCommand::ExecuteNonQuery()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteCommand_ExecuteNonQuery_m1623908333 (SqliteCommand_t3916884476 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Data.Sqlite.SqliteTransaction::IsValid(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool SqliteTransaction_IsValid_m881367657 (SqliteTransaction_t2018962351 * __this, bool ___throwError0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteTransaction::Rollback()
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction_Rollback_m2625955415 (SqliteTransaction_t2018962351 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbTransaction::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DbTransaction_Dispose_m3839529911 (DbTransaction_t2989397904 * __this, bool p0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteTransaction::IssueRollback(Mono.Data.Sqlite.SqliteConnection)
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction_IssueRollback_m2494991181 (RuntimeObject * __this /* static, unused */, SqliteConnection_t3870565407 * ___cnn0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Data.ConnectionState Mono.Data.Sqlite.SqliteConnection::get_State()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteConnection_get_State_m722659400 (SqliteConnection_t3870565407 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m3178908702 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method)
{
	{
		SqliteParameter__ctor_m1941818683(__this, (String_t*)NULL, (-1), 0, (String_t*)NULL, ((int32_t)512), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m2833016540 (SqliteParameter_t314071523 * __this, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___parameterName0;
		SqliteParameter__ctor_m1941818683(__this, L_0, (-1), 0, (String_t*)NULL, ((int32_t)512), /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value1;
		SqliteParameter_set_Value_m4143515341(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.String,System.Data.DataRowVersion)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m1941818683 (SqliteParameter_t314071523 * __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, String_t* ___sourceColumn3, int32_t ___rowVersion4, const RuntimeMethod* method)
{
	{
		DbParameter__ctor_m3943448221(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___parameterName0;
		__this->set__parameterName_5(L_0);
		int32_t L_1 = ___parameterType1;
		__this->set__dbType_1(L_1);
		String_t* L_2 = ___sourceColumn3;
		__this->set__sourceColumn_4(L_2);
		int32_t L_3 = ___rowVersion4;
		__this->set__rowVersion_2(L_3);
		__this->set__objValue_3(NULL);
		int32_t L_4 = ___parameterSize2;
		__this->set__dataSize_6(L_4);
		__this->set__nullMapping_8((bool)0);
		__this->set__nullable_7((bool)1);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m2018940148 (SqliteParameter_t314071523 * __this, SqliteParameter_t314071523 * ___source0, const RuntimeMethod* method)
{
	{
		SqliteParameter_t314071523 * L_0 = ___source0;
		NullCheck(L_0);
		String_t* L_1 = SqliteParameter_get_ParameterName_m608645520(L_0, /*hidden argument*/NULL);
		SqliteParameter_t314071523 * L_2 = ___source0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get__dbType_1();
		SqliteParameter_t314071523 * L_4 = ___source0;
		NullCheck(L_4);
		int32_t L_5 = SqliteParameter_get_Direction_m1522110307(L_4, /*hidden argument*/NULL);
		SqliteParameter_t314071523 * L_6 = ___source0;
		NullCheck(L_6);
		bool L_7 = SqliteParameter_get_IsNullable_m1715878715(L_6, /*hidden argument*/NULL);
		SqliteParameter_t314071523 * L_8 = ___source0;
		NullCheck(L_8);
		String_t* L_9 = SqliteParameter_get_SourceColumn_m451559328(L_8, /*hidden argument*/NULL);
		SqliteParameter_t314071523 * L_10 = ___source0;
		NullCheck(L_10);
		int32_t L_11 = SqliteParameter_get_SourceVersion_m3295797824(L_10, /*hidden argument*/NULL);
		SqliteParameter_t314071523 * L_12 = ___source0;
		NullCheck(L_12);
		RuntimeObject * L_13 = SqliteParameter_get_Value_m2727307014(L_12, /*hidden argument*/NULL);
		SqliteParameter__ctor_m457815538(__this, L_1, L_3, 0, L_5, L_7, (uint8_t)0, (uint8_t)0, L_9, L_11, L_13, /*hidden argument*/NULL);
		SqliteParameter_t314071523 * L_14 = ___source0;
		NullCheck(L_14);
		bool L_15 = L_14->get__nullMapping_8();
		__this->set__nullMapping_8(L_15);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.Data.ParameterDirection,System.Boolean,System.Byte,System.Byte,System.String,System.Data.DataRowVersion,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m457815538 (SqliteParameter_t314071523 * __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, int32_t ___direction3, bool ___isNullable4, uint8_t ___precision5, uint8_t ___scale6, String_t* ___sourceColumn7, int32_t ___rowVersion8, RuntimeObject * ___value9, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___parameterName0;
		int32_t L_1 = ___parameterType1;
		int32_t L_2 = ___parameterSize2;
		String_t* L_3 = ___sourceColumn7;
		int32_t L_4 = ___rowVersion8;
		SqliteParameter__ctor_m1941818683(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___direction3;
		SqliteParameter_set_Direction_m965025500(__this, L_5, /*hidden argument*/NULL);
		bool L_6 = ___isNullable4;
		SqliteParameter_set_IsNullable_m3269246668(__this, L_6, /*hidden argument*/NULL);
		RuntimeObject * L_7 = ___value9;
		SqliteParameter_set_Value_m4143515341(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameter::get_IsNullable()
extern "C" IL2CPP_METHOD_ATTR bool SqliteParameter_get_IsNullable_m1715878715 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__nullable_7();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_IsNullable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_IsNullable_m3269246668 (SqliteParameter_t314071523 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__nullable_7(L_0);
		return;
	}
}
// System.Data.DbType Mono.Data.Sqlite.SqliteParameter::get_DbType()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_DbType_m2001601458 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameter_get_DbType_m2001601458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__dbType_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__objValue_3();
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_2 = __this->get__objValue_3();
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t3725197148_il2cpp_TypeInfo_var);
		DBNull_t3725197148 * L_3 = ((DBNull_t3725197148_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t3725197148_il2cpp_TypeInfo_var))->get_Value_0();
		if ((((RuntimeObject*)(RuntimeObject *)L_2) == ((RuntimeObject*)(DBNull_t3725197148 *)L_3)))
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_4 = __this->get__objValue_3();
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m88164663(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_t3923026649_il2cpp_TypeInfo_var);
		int32_t L_6 = SqliteConvert_TypeToDbType_m447124154(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0038:
	{
		return (int32_t)(((int32_t)16));
	}

IL_003b:
	{
		int32_t L_7 = __this->get__dbType_1();
		return (int32_t)(L_7);
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_DbType(System.Data.DbType)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_DbType_m2112084032 (SqliteParameter_t314071523 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__dbType_1(L_0);
		return;
	}
}
// System.Data.ParameterDirection Mono.Data.Sqlite.SqliteParameter::get_Direction()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_Direction_m1522110307 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Direction(System.Data.ParameterDirection)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_Direction_m965025500 (SqliteParameter_t314071523 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameter_set_Direction_m965025500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, SqliteParameter_set_Direction_m965025500_RuntimeMethod_var);
	}

IL_000d:
	{
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteParameter::get_ParameterName()
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_ParameterName_m608645520 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__parameterName_5();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_ParameterName(System.String)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_ParameterName_m776898305 (SqliteParameter_t314071523 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__parameterName_5(L_0);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Size(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_Size_m3081331029 (SqliteParameter_t314071523 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__dataSize_6(L_0);
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteParameter::get_SourceColumn()
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_SourceColumn_m451559328 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__sourceColumn_4();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceColumn(System.String)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_SourceColumn_m3322196289 (SqliteParameter_t314071523 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__sourceColumn_4(L_0);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceColumnNullMapping(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_SourceColumnNullMapping_m897364090 (SqliteParameter_t314071523 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__nullMapping_8(L_0);
		return;
	}
}
// System.Data.DataRowVersion Mono.Data.Sqlite.SqliteParameter::get_SourceVersion()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_SourceVersion_m3295797824 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__rowVersion_2();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceVersion(System.Data.DataRowVersion)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_SourceVersion_m780689848 (SqliteParameter_t314071523 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__rowVersion_2(L_0);
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteParameter::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteParameter_get_Value_m2727307014 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__objValue_3();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Value(System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_Value_m4143515341 (SqliteParameter_t314071523 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameter_set_Value_m4143515341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		__this->set__objValue_3(L_0);
		int32_t L_1 = __this->get__dbType_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject * L_2 = __this->get__objValue_3();
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject * L_3 = __this->get__objValue_3();
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t3725197148_il2cpp_TypeInfo_var);
		DBNull_t3725197148 * L_4 = ((DBNull_t3725197148_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t3725197148_il2cpp_TypeInfo_var))->get_Value_0();
		if ((((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(DBNull_t3725197148 *)L_4)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject * L_5 = __this->get__objValue_3();
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m88164663(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_t3923026649_il2cpp_TypeInfo_var);
		int32_t L_7 = SqliteConvert_TypeToDbType_m447124154(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->set__dbType_1(L_7);
	}

IL_0044:
	{
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteParameter::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteParameter_Clone_m3827036997 (SqliteParameter_t314071523 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameter_Clone_m3827036997_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteParameter_t314071523 * V_0 = NULL;
	{
		SqliteParameter_t314071523 * L_0 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
		SqliteParameter__ctor_m2018940148(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		SqliteParameter_t314071523 * L_1 = V_0;
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
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::.ctor(Mono.Data.Sqlite.SqliteCommand)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection__ctor_m711734823 (SqliteParameterCollection_t2576174450 * __this, SqliteCommand_t3916884476 * ___cmd0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection__ctor_m711734823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DbParameterCollection__ctor_m1071468118(__this, /*hidden argument*/NULL);
		SqliteCommand_t3916884476 * L_0 = ___cmd0;
		__this->set__command_1(L_0);
		List_1_t1786146265 * L_1 = (List_1_t1786146265 *)il2cpp_codegen_object_new(List_1_t1786146265_il2cpp_TypeInfo_var);
		List_1__ctor_m378953738(L_1, /*hidden argument*/List_1__ctor_m378953738_RuntimeMethod_var);
		__this->set__parameterList_2(L_1);
		__this->set__unboundFlag_3((bool)1);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsSynchronized()
extern "C" IL2CPP_METHOD_ATTR bool SqliteParameterCollection_get_IsSynchronized_m2373901691 (SqliteParameterCollection_t2576174450 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsFixedSize()
extern "C" IL2CPP_METHOD_ATTR bool SqliteParameterCollection_get_IsFixedSize_m926404728 (SqliteParameterCollection_t2576174450 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool SqliteParameterCollection_get_IsReadOnly_m456598322 (SqliteParameterCollection_t2576174450 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Object Mono.Data.Sqlite.SqliteParameterCollection::get_SyncRoot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteParameterCollection_get_SyncRoot_m2172398813 (SqliteParameterCollection_t2576174450 * __this, const RuntimeMethod* method)
{
	{
		return NULL;
	}
}
// System.Collections.IEnumerator Mono.Data.Sqlite.SqliteParameterCollection::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SqliteParameterCollection_GetEnumerator_m2240995518 (SqliteParameterCollection_t2576174450 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_GetEnumerator_m2240995518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1786146265 * L_0 = __this->get__parameterList_2();
		NullCheck(L_0);
		Enumerator_t3675390142  L_1 = List_1_GetEnumerator_m2439629714(L_0, /*hidden argument*/List_1_GetEnumerator_m2439629714_RuntimeMethod_var);
		Enumerator_t3675390142  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_t3675390142_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_Add_m649006753 (SqliteParameterCollection_t2576174450 * __this, SqliteParameter_t314071523 * ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Add_m649006753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		SqliteParameter_t314071523 * L_0 = ___parameter0;
		NullCheck(L_0);
		String_t* L_1 = SqliteParameter_get_ParameterName_m608645520(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		SqliteParameter_t314071523 * L_3 = ___parameter0;
		NullCheck(L_3);
		String_t* L_4 = SqliteParameter_get_ParameterName_m608645520(L_3, /*hidden argument*/NULL);
		int32_t L_5 = SqliteParameterCollection_IndexOf_m4186905031(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_003e;
		}
	}
	{
		List_1_t1786146265 * L_7 = __this->get__parameterList_2();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m2034367342(L_7, /*hidden argument*/List_1_get_Count_m2034367342_RuntimeMethod_var);
		V_0 = L_8;
		List_1_t1786146265 * L_9 = __this->get__parameterList_2();
		SqliteParameter_t314071523 * L_10 = ___parameter0;
		NullCheck(L_9);
		List_1_Add_m3654925716(L_9, L_10, /*hidden argument*/List_1_Add_m3654925716_RuntimeMethod_var);
	}

IL_003e:
	{
		int32_t L_11 = V_0;
		SqliteParameter_t314071523 * L_12 = ___parameter0;
		SqliteParameterCollection_SetParameter_m1126912920(__this, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_Add_m3760761682 (SqliteParameterCollection_t2576174450 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Add_m3760761682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1 = SqliteParameterCollection_Add_m649006753(__this, ((SqliteParameter_t314071523 *)CastclassSealed((RuntimeObject*)L_0, SqliteParameter_t314071523_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::AddWithValue(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR SqliteParameter_t314071523 * SqliteParameterCollection_AddWithValue_m3095018979 (SqliteParameterCollection_t2576174450 * __this, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_AddWithValue_m3095018979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteParameter_t314071523 * V_0 = NULL;
	{
		String_t* L_0 = ___parameterName0;
		RuntimeObject * L_1 = ___value1;
		SqliteParameter_t314071523 * L_2 = (SqliteParameter_t314071523 *)il2cpp_codegen_object_new(SqliteParameter_t314071523_il2cpp_TypeInfo_var);
		SqliteParameter__ctor_m2833016540(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		SqliteParameter_t314071523 * L_3 = V_0;
		SqliteParameterCollection_Add_m649006753(__this, L_3, /*hidden argument*/NULL);
		SqliteParameter_t314071523 * L_4 = V_0;
		return L_4;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::AddRange(System.Array)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_AddRange_m2327194941 (SqliteParameterCollection_t2576174450 * __this, RuntimeArray * ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_AddRange_m2327194941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeArray * L_0 = ___values0;
		NullCheck(L_0);
		int32_t L_1 = Array_get_Length_m21610649(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0025;
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___values0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject * L_4 = Array_GetValue_m2528546681(L_2, L_3, /*hidden argument*/NULL);
		SqliteParameterCollection_Add_m649006753(__this, ((SqliteParameter_t314071523 *)CastclassSealed((RuntimeObject*)L_4, SqliteParameter_t314071523_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0025:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Clear()
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_Clear_m1497813106 (SqliteParameterCollection_t2576174450 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Clear_m1497813106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_t1786146265 * L_0 = __this->get__parameterList_2();
		NullCheck(L_0);
		List_1_Clear_m3268591710(L_0, /*hidden argument*/List_1_Clear_m3268591710_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::Contains(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool SqliteParameterCollection_Contains_m4089231290 (SqliteParameterCollection_t2576174450 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Contains_m4089231290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1786146265 * L_0 = __this->get__parameterList_2();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m3531036492(L_0, ((SqliteParameter_t314071523 *)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_t314071523_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Contains_m3531036492_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_CopyTo_m1994387237 (SqliteParameterCollection_t2576174450 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_CopyTo_m1994387237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, SqliteParameterCollection_CopyTo_m1994387237_RuntimeMethod_var);
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_get_Count_m3687734005 (SqliteParameterCollection_t2576174450 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_get_Count_m3687734005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1786146265 * L_0 = __this->get__parameterList_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m2034367342(L_0, /*hidden argument*/List_1_get_Count_m2034367342_RuntimeMethod_var);
		return L_1;
	}
}
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR SqliteParameter_t314071523 * SqliteParameterCollection_get_Item_m1901816134 (SqliteParameterCollection_t2576174450 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_get_Item_m1901816134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		DbParameter_t3789779732 * L_1 = SqliteParameterCollection_GetParameter_m1309237779(__this, L_0, /*hidden argument*/NULL);
		return ((SqliteParameter_t314071523 *)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_t314071523_il2cpp_TypeInfo_var));
	}
}
// System.Data.Common.DbParameter Mono.Data.Sqlite.SqliteParameterCollection::GetParameter(System.Int32)
extern "C" IL2CPP_METHOD_ATTR DbParameter_t3789779732 * SqliteParameterCollection_GetParameter_m1309237779 (SqliteParameterCollection_t2576174450 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_GetParameter_m1309237779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1786146265 * L_0 = __this->get__parameterList_2();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		SqliteParameter_t314071523 * L_2 = List_1_get_Item_m675635581(L_0, L_1, /*hidden argument*/List_1_get_Item_m675635581_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_IndexOf_m4186905031 (SqliteParameterCollection_t2576174450 * __this, String_t* ___parameterName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_IndexOf_m4186905031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_t1786146265 * L_0 = __this->get__parameterList_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m2034367342(L_0, /*hidden argument*/List_1_get_Count_m2034367342_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		String_t* L_2 = ___parameterName0;
		List_1_t1786146265 * L_3 = __this->get__parameterList_2();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		SqliteParameter_t314071523 * L_5 = List_1_get_Item_m675635581(L_3, L_4, /*hidden argument*/List_1_get_Item_m675635581_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6 = SqliteParameter_get_ParameterName_m608645520(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_8 = String_Compare_m1293271421(NULL /*static, unused*/, L_2, L_6, (bool)1, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_9 = V_1;
		return L_9;
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		return (-1);
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_IndexOf_m239548196 (SqliteParameterCollection_t2576174450 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_IndexOf_m239548196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1786146265 * L_0 = __this->get__parameterList_2();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2 = List_1_IndexOf_m2070012886(L_0, ((SqliteParameter_t314071523 *)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_t314071523_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_IndexOf_m2070012886_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Insert(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_Insert_m2525214579 (SqliteParameterCollection_t2576174450 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Insert_m2525214579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_t1786146265 * L_0 = __this->get__parameterList_2();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		List_1_Insert_m1138204345(L_0, L_1, ((SqliteParameter_t314071523 *)CastclassSealed((RuntimeObject*)L_2, SqliteParameter_t314071523_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Insert_m1138204345_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Remove(System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_Remove_m176345982 (SqliteParameterCollection_t2576174450 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Remove_m176345982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_t1786146265 * L_0 = __this->get__parameterList_2();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		List_1_Remove_m984012428(L_0, ((SqliteParameter_t314071523 *)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_t314071523_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Remove_m984012428_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_RemoveAt_m3422590783 (SqliteParameterCollection_t2576174450 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_RemoveAt_m3422590783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_t1786146265 * L_0 = __this->get__parameterList_2();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		List_1_RemoveAt_m3550022813(L_0, L_1, /*hidden argument*/List_1_RemoveAt_m3550022813_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::SetParameter(System.Int32,System.Data.Common.DbParameter)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_SetParameter_m1126912920 (SqliteParameterCollection_t2576174450 * __this, int32_t ___index0, DbParameter_t3789779732 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_SetParameter_m1126912920_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_t1786146265 * L_0 = __this->get__parameterList_2();
		int32_t L_1 = ___index0;
		DbParameter_t3789779732 * L_2 = ___value1;
		NullCheck(L_0);
		List_1_set_Item_m986523310(L_0, L_1, ((SqliteParameter_t314071523 *)CastclassSealed((RuntimeObject*)L_2, SqliteParameter_t314071523_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_set_Item_m986523310_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Unbind()
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_Unbind_m1569947667 (SqliteParameterCollection_t2576174450 * __this, const RuntimeMethod* method)
{
	{
		__this->set__unboundFlag_3((bool)1);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::MapParameters(Mono.Data.Sqlite.SqliteStatement)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_MapParameters_m2981467632 (SqliteParameterCollection_t2576174450 * __this, SqliteStatement_t1470694543 * ___activeStatement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_MapParameters_m2981467632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SqliteStatement_t1470694543 * V_4 = NULL;
	SqliteParameter_t314071523 * V_5 = NULL;
	Enumerator_t3675390142  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int32_t V_7 = 0;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get__unboundFlag_3();
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		List_1_t1786146265 * L_1 = __this->get__parameterList_2();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m2034367342(L_1, /*hidden argument*/List_1_get_Count_m2034367342_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqliteCommand_t3916884476 * L_3 = __this->get__command_1();
		NullCheck(L_3);
		List_1_t2942769285 * L_4 = L_3->get__statementList_12();
		if (L_4)
		{
			goto IL_002c;
		}
	}

IL_002b:
	{
		return;
	}

IL_002c:
	{
		V_0 = 0;
		V_3 = (-1);
		List_1_t1786146265 * L_5 = __this->get__parameterList_2();
		NullCheck(L_5);
		Enumerator_t3675390142  L_6 = List_1_GetEnumerator_m2439629714(L_5, /*hidden argument*/List_1_GetEnumerator_m2439629714_RuntimeMethod_var);
		V_6 = L_6;
	}

IL_003d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_016e;
		}

IL_0042:
		{
			SqliteParameter_t314071523 * L_7 = Enumerator_get_Current_m652505233((Enumerator_t3675390142 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m652505233_RuntimeMethod_var);
			V_5 = L_7;
			int32_t L_8 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			SqliteParameter_t314071523 * L_9 = V_5;
			NullCheck(L_9);
			String_t* L_10 = SqliteParameter_get_ParameterName_m608645520(L_9, /*hidden argument*/NULL);
			V_1 = L_10;
			String_t* L_11 = V_1;
			if (L_11)
			{
				goto IL_0080;
			}
		}

IL_005d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
			CultureInfo_t4157843068 * L_12 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
			ObjectU5BU5D_t2843939325* L_13 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t2843939325* L_14 = L_13;
			int32_t L_15 = V_0;
			int32_t L_16 = L_15;
			RuntimeObject * L_17 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_16);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_18 = String_Format_m1881875187(NULL /*static, unused*/, L_12, _stringLiteral2091341615, L_14, /*hidden argument*/NULL);
			V_1 = L_18;
			int32_t L_19 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		}

IL_0080:
		{
			V_8 = (bool)0;
			SqliteStatement_t1470694543 * L_20 = ___activeStatement0;
			if (L_20)
			{
				goto IL_00a0;
			}
		}

IL_0089:
		{
			SqliteCommand_t3916884476 * L_21 = __this->get__command_1();
			NullCheck(L_21);
			List_1_t2942769285 * L_22 = L_21->get__statementList_12();
			NullCheck(L_22);
			int32_t L_23 = List_1_get_Count_m3346882080(L_22, /*hidden argument*/List_1_get_Count_m3346882080_RuntimeMethod_var);
			V_7 = L_23;
			goto IL_00a3;
		}

IL_00a0:
		{
			V_7 = 1;
		}

IL_00a3:
		{
			SqliteStatement_t1470694543 * L_24 = ___activeStatement0;
			V_4 = L_24;
			V_2 = 0;
			goto IL_00ef;
		}

IL_00ad:
		{
			V_8 = (bool)0;
			SqliteStatement_t1470694543 * L_25 = V_4;
			if (L_25)
			{
				goto IL_00ca;
			}
		}

IL_00b7:
		{
			SqliteCommand_t3916884476 * L_26 = __this->get__command_1();
			NullCheck(L_26);
			List_1_t2942769285 * L_27 = L_26->get__statementList_12();
			int32_t L_28 = V_2;
			NullCheck(L_27);
			SqliteStatement_t1470694543 * L_29 = List_1_get_Item_m3470793231(L_27, L_28, /*hidden argument*/List_1_get_Item_m3470793231_RuntimeMethod_var);
			V_4 = L_29;
		}

IL_00ca:
		{
			SqliteStatement_t1470694543 * L_30 = V_4;
			NullCheck(L_30);
			StringU5BU5D_t1281789340* L_31 = L_30->get__paramNames_4();
			if (!L_31)
			{
				goto IL_00e8;
			}
		}

IL_00d6:
		{
			SqliteStatement_t1470694543 * L_32 = V_4;
			String_t* L_33 = V_1;
			SqliteParameter_t314071523 * L_34 = V_5;
			NullCheck(L_32);
			bool L_35 = SqliteStatement_MapParameter_m3024728063(L_32, L_33, L_34, /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_00e8;
			}
		}

IL_00e5:
		{
			V_8 = (bool)1;
		}

IL_00e8:
		{
			V_4 = (SqliteStatement_t1470694543 *)NULL;
			int32_t L_36 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		}

IL_00ef:
		{
			int32_t L_37 = V_2;
			int32_t L_38 = V_7;
			if ((((int32_t)L_37) < ((int32_t)L_38)))
			{
				goto IL_00ad;
			}
		}

IL_00f7:
		{
			bool L_39 = V_8;
			if (L_39)
			{
				goto IL_016e;
			}
		}

IL_00fe:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
			CultureInfo_t4157843068 * L_40 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
			ObjectU5BU5D_t2843939325* L_41 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t2843939325* L_42 = L_41;
			int32_t L_43 = V_3;
			int32_t L_44 = L_43;
			RuntimeObject * L_45 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_44);
			NullCheck(L_42);
			ArrayElementTypeCheck (L_42, L_45);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_45);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_46 = String_Format_m1881875187(NULL /*static, unused*/, L_40, _stringLiteral2091341615, L_42, /*hidden argument*/NULL);
			V_1 = L_46;
			SqliteStatement_t1470694543 * L_47 = ___activeStatement0;
			V_4 = L_47;
			V_2 = 0;
			goto IL_0166;
		}

IL_0127:
		{
			SqliteStatement_t1470694543 * L_48 = V_4;
			if (L_48)
			{
				goto IL_0141;
			}
		}

IL_012e:
		{
			SqliteCommand_t3916884476 * L_49 = __this->get__command_1();
			NullCheck(L_49);
			List_1_t2942769285 * L_50 = L_49->get__statementList_12();
			int32_t L_51 = V_2;
			NullCheck(L_50);
			SqliteStatement_t1470694543 * L_52 = List_1_get_Item_m3470793231(L_50, L_51, /*hidden argument*/List_1_get_Item_m3470793231_RuntimeMethod_var);
			V_4 = L_52;
		}

IL_0141:
		{
			SqliteStatement_t1470694543 * L_53 = V_4;
			NullCheck(L_53);
			StringU5BU5D_t1281789340* L_54 = L_53->get__paramNames_4();
			if (!L_54)
			{
				goto IL_015f;
			}
		}

IL_014d:
		{
			SqliteStatement_t1470694543 * L_55 = V_4;
			String_t* L_56 = V_1;
			SqliteParameter_t314071523 * L_57 = V_5;
			NullCheck(L_55);
			bool L_58 = SqliteStatement_MapParameter_m3024728063(L_55, L_56, L_57, /*hidden argument*/NULL);
			if (!L_58)
			{
				goto IL_015f;
			}
		}

IL_015c:
		{
			V_8 = (bool)1;
		}

IL_015f:
		{
			V_4 = (SqliteStatement_t1470694543 *)NULL;
			int32_t L_59 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		}

IL_0166:
		{
			int32_t L_60 = V_2;
			int32_t L_61 = V_7;
			if ((((int32_t)L_60) < ((int32_t)L_61)))
			{
				goto IL_0127;
			}
		}

IL_016e:
		{
			bool L_62 = Enumerator_MoveNext_m1590337042((Enumerator_t3675390142 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m1590337042_RuntimeMethod_var);
			if (L_62)
			{
				goto IL_0042;
			}
		}

IL_017a:
		{
			IL2CPP_LEAVE(0x18C, FINALLY_017f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_017f;
	}

FINALLY_017f:
	{ // begin finally (depth: 1)
		Enumerator_t3675390142  L_63 = V_6;
		Enumerator_t3675390142  L_64 = L_63;
		RuntimeObject * L_65 = Box(Enumerator_t3675390142_il2cpp_TypeInfo_var, &L_64);
		NullCheck((RuntimeObject*)L_65);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_65);
		IL2CPP_END_FINALLY(383)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(383)
	{
		IL2CPP_JUMP_TBL(0x18C, IL_018c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_018c:
	{
		SqliteStatement_t1470694543 * L_66 = ___activeStatement0;
		if (L_66)
		{
			goto IL_0199;
		}
	}
	{
		__this->set__unboundFlag_3((bool)0);
	}

IL_0199:
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
// System.Void Mono.Data.Sqlite.SqliteStatement::.ctor(Mono.Data.Sqlite.SQLiteBase,Mono.Data.Sqlite.SqliteStatementHandle,System.String,Mono.Data.Sqlite.SqliteStatement)
extern "C" IL2CPP_METHOD_ATTR void SqliteStatement__ctor_m3733929500 (SqliteStatement_t1470694543 * __this, SQLiteBase_t1448580847 * ___sqlbase0, SqliteStatementHandle_t2894995162 * ___stmt1, String_t* ___strCommand2, SqliteStatement_t1470694543 * ___previous3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatement__ctor_m3733929500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SQLiteBase_t1448580847 * L_0 = ___sqlbase0;
		__this->set__sql_0(L_0);
		SqliteStatementHandle_t2894995162 * L_1 = ___stmt1;
		__this->set__sqlite_stmt_2(L_1);
		String_t* L_2 = ___strCommand2;
		__this->set__sqlStatement_1(L_2);
		V_0 = 0;
		SQLiteBase_t1448580847 * L_3 = __this->get__sql_0();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker1< int32_t, SqliteStatement_t1470694543 * >::Invoke(22 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::Bind_ParamCount(Mono.Data.Sqlite.SqliteStatement) */, L_3, __this);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		SqliteStatement_t1470694543 * L_6 = ___previous3;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		SqliteStatement_t1470694543 * L_7 = ___previous3;
		NullCheck(L_7);
		int32_t L_8 = L_7->get__unnamedParameters_3();
		V_0 = L_8;
	}

IL_0040:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t1281789340* L_10 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->set__paramNames_4(L_10);
		int32_t L_11 = V_1;
		SqliteParameterU5BU5D_t1212451634* L_12 = (SqliteParameterU5BU5D_t1212451634*)SZArrayNew(SqliteParameterU5BU5D_t1212451634_il2cpp_TypeInfo_var, (uint32_t)L_11);
		__this->set__paramValues_5(L_12);
		V_2 = 0;
		goto IL_00c1;
	}

IL_005f:
	{
		SQLiteBase_t1448580847 * L_13 = __this->get__sql_0();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		String_t* L_15 = VirtFuncInvoker2< String_t*, SqliteStatement_t1470694543 *, int32_t >::Invoke(23 /* System.String Mono.Data.Sqlite.SQLiteBase::Bind_ParamName(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_13, __this, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		V_3 = L_15;
		String_t* L_16 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_18 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_19 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		int32_t L_21 = V_0;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Format_m1881875187(NULL /*static, unused*/, L_18, _stringLiteral2091341615, L_20, /*hidden argument*/NULL);
		V_3 = L_24;
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = __this->get__unnamedParameters_3();
		__this->set__unnamedParameters_3(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
	}

IL_00ab:
	{
		StringU5BU5D_t1281789340* L_27 = __this->get__paramNames_4();
		int32_t L_28 = V_2;
		String_t* L_29 = V_3;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (String_t*)L_29);
		SqliteParameterU5BU5D_t1212451634* L_30 = __this->get__paramValues_5();
		int32_t L_31 = V_2;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, NULL);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (SqliteParameter_t314071523 *)NULL);
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00c1:
	{
		int32_t L_33 = V_2;
		int32_t L_34 = V_1;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_005f;
		}
	}

IL_00c8:
	{
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteStatement::MapParameter(System.String,Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR bool SqliteStatement_MapParameter_m3024728063 (SqliteStatement_t1470694543 * __this, String_t* ___s0, SqliteParameter_t314071523 * ___p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatement_MapParameter_m3024728063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringU5BU5D_t1281789340* L_0 = __this->get__paramNames_4();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		V_0 = 0;
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3 = ___s0;
		NullCheck(L_3);
		Il2CppChar L_4 = String_get_Chars_m2986988803(L_3, 0, /*hidden argument*/NULL);
		NullCheck(_stringLiteral3850626752);
		int32_t L_5 = String_IndexOf_m363431711(_stringLiteral3850626752, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0034;
		}
	}
	{
		V_0 = 1;
	}

IL_0034:
	{
		StringU5BU5D_t1281789340* L_6 = __this->get__paramNames_4();
		NullCheck(L_6);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))));
		V_2 = 0;
		goto IL_0088;
	}

IL_0044:
	{
		StringU5BU5D_t1281789340* L_7 = __this->get__paramNames_4();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = V_0;
		String_t* L_12 = ___s0;
		StringU5BU5D_t1281789340* L_13 = __this->get__paramNames_4();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m3847582255(L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		String_t* L_19 = ___s0;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m3847582255(L_19, /*hidden argument*/NULL);
		int32_t L_21 = Math_Max_m1873195862(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)), L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_22 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_23 = String_Compare_m945110377(NULL /*static, unused*/, L_10, L_11, L_12, 0, L_21, (bool)1, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0084;
		}
	}
	{
		SqliteParameterU5BU5D_t1212451634* L_24 = __this->get__paramValues_5();
		int32_t L_25 = V_2;
		SqliteParameter_t314071523 * L_26 = ___p1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (SqliteParameter_t314071523 *)L_26);
		return (bool)1;
	}

IL_0084:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0088:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SqliteStatement_Dispose_m1420015737 (SqliteStatement_t1470694543 * __this, const RuntimeMethod* method)
{
	{
		SqliteStatementHandle_t2894995162 * L_0 = __this->get__sqlite_stmt_2();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		SqliteStatementHandle_t2894995162 * L_1 = __this->get__sqlite_stmt_2();
		NullCheck(L_1);
		CriticalHandle_Dispose_m1475961491(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		__this->set__sqlite_stmt_2((SqliteStatementHandle_t2894995162 *)NULL);
		__this->set__paramNames_4((StringU5BU5D_t1281789340*)NULL);
		__this->set__paramValues_5((SqliteParameterU5BU5D_t1212451634*)NULL);
		__this->set__sql_0((SQLiteBase_t1448580847 *)NULL);
		__this->set__sqlStatement_1((String_t*)NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameters()
extern "C" IL2CPP_METHOD_ATTR void SqliteStatement_BindParameters_m2568036222 (SqliteStatement_t1470694543 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringU5BU5D_t1281789340* L_0 = __this->get__paramNames_4();
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
		StringU5BU5D_t1281789340* L_1 = __this->get__paramNames_4();
		NullCheck(L_1);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		V_1 = 0;
		goto IL_0031;
	}

IL_001c:
	{
		int32_t L_2 = V_1;
		SqliteParameterU5BU5D_t1212451634* L_3 = __this->get__paramValues_5();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SqliteParameter_t314071523 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SqliteStatement_BindParameter_m1687872649(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameter(System.Int32,Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR void SqliteStatement_BindParameter_m1687872649 (SqliteStatement_t1470694543 * __this, int32_t ___index0, SqliteParameter_t314071523 * ___param1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatement_BindParameter_m1687872649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Guid_t  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Decimal_t2948259380  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		SqliteParameter_t314071523 * L_0 = ___param1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		SqliteException_t1654350877 * L_1 = (SqliteException_t1654350877 *)il2cpp_codegen_object_new(SqliteException_t1654350877_il2cpp_TypeInfo_var);
		SqliteException__ctor_m1183710838(L_1, 1, _stringLiteral1262539702, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, SqliteStatement_BindParameter_m1687872649_RuntimeMethod_var);
	}

IL_0012:
	{
		SqliteParameter_t314071523 * L_2 = ___param1;
		NullCheck(L_2);
		RuntimeObject * L_3 = SqliteParameter_get_Value_m2727307014(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		SqliteParameter_t314071523 * L_4 = ___param1;
		NullCheck(L_4);
		int32_t L_5 = SqliteParameter_get_DbType_m2001601458(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		RuntimeObject * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		bool L_7 = Convert_IsDBNull_m1175282580(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject * L_8 = V_0;
		if (L_8)
		{
			goto IL_003f;
		}
	}

IL_0031:
	{
		SQLiteBase_t1448580847 * L_9 = __this->get__sql_0();
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		VirtActionInvoker2< SqliteStatement_t1470694543 *, int32_t >::Invoke(21 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Null(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_9, __this, L_10);
		return;
	}

IL_003f:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject * L_12 = V_0;
		NullCheck(L_12);
		Type_t * L_13 = Object_GetType_m88164663(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_t3923026649_il2cpp_TypeInfo_var);
		int32_t L_14 = SqliteConvert_TypeToDbType_m447124154(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
	}

IL_0053:
	{
		int32_t L_15 = V_1;
		V_2 = L_15;
		int32_t L_16 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0126;
			}
			case 1:
			{
				goto IL_00ec;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_0109;
			}
			case 4:
			{
				goto IL_00b2;
			}
			case 5:
			{
				goto IL_00b2;
			}
			case 6:
			{
				goto IL_018b;
			}
			case 7:
			{
				goto IL_0109;
			}
			case 8:
			{
				goto IL_013e;
			}
			case 9:
			{
				goto IL_00ec;
			}
			case 10:
			{
				goto IL_00ec;
			}
			case 11:
			{
				goto IL_00cf;
			}
			case 12:
			{
				goto IL_01b6;
			}
			case 13:
			{
				goto IL_00ec;
			}
			case 14:
			{
				goto IL_0109;
			}
			case 15:
			{
				goto IL_01b6;
			}
			case 16:
			{
				goto IL_00b2;
			}
			case 17:
			{
				goto IL_00ec;
			}
			case 18:
			{
				goto IL_00ec;
			}
			case 19:
			{
				goto IL_00cf;
			}
		}
	}
	{
		goto IL_01b6;
	}

IL_00b2:
	{
		SQLiteBase_t1448580847 * L_17 = __this->get__sql_0();
		int32_t L_18 = ___index0;
		RuntimeObject * L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_20 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_21 = Convert_ToDateTime_m1567637286(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker3< SqliteStatement_t1470694543 *, int32_t, DateTime_t3738529785  >::Invoke(20 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_DateTime(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.DateTime) */, L_17, __this, L_18, L_21);
		goto IL_01ce;
	}

IL_00cf:
	{
		SQLiteBase_t1448580847 * L_22 = __this->get__sql_0();
		int32_t L_23 = ___index0;
		RuntimeObject * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_25 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_26 = Convert_ToInt64_m2643251823(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker3< SqliteStatement_t1470694543 *, int32_t, int64_t >::Invoke(17 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Int64(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int64) */, L_22, __this, L_23, L_26);
		goto IL_01ce;
	}

IL_00ec:
	{
		SQLiteBase_t1448580847 * L_27 = __this->get__sql_0();
		int32_t L_28 = ___index0;
		RuntimeObject * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_30 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_31 = Convert_ToInt32_m3211312035(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker3< SqliteStatement_t1470694543 *, int32_t, int32_t >::Invoke(16 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Int32(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int32) */, L_27, __this, L_28, L_31);
		goto IL_01ce;
	}

IL_0109:
	{
		SQLiteBase_t1448580847 * L_32 = __this->get__sql_0();
		int32_t L_33 = ___index0;
		RuntimeObject * L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_35 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_36 = Convert_ToDouble_m4017511472(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtActionInvoker3< SqliteStatement_t1470694543 *, int32_t, double >::Invoke(15 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Double(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Double) */, L_32, __this, L_33, L_36);
		goto IL_01ce;
	}

IL_0126:
	{
		SQLiteBase_t1448580847 * L_37 = __this->get__sql_0();
		int32_t L_38 = ___index0;
		RuntimeObject * L_39 = V_0;
		NullCheck(L_37);
		VirtActionInvoker3< SqliteStatement_t1470694543 *, int32_t, ByteU5BU5D_t4116647657* >::Invoke(19 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Blob(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Byte[]) */, L_37, __this, L_38, ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_39, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var)));
		goto IL_01ce;
	}

IL_013e:
	{
		SqliteCommand_t3916884476 * L_40 = __this->get__command_6();
		NullCheck(L_40);
		SqliteConnection_t3870565407 * L_41 = SqliteCommand_get_Connection_m1985721621(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		bool L_42 = L_41->get__binaryGuid_14();
		if (!L_42)
		{
			goto IL_0173;
		}
	}
	{
		SQLiteBase_t1448580847 * L_43 = __this->get__sql_0();
		int32_t L_44 = ___index0;
		RuntimeObject * L_45 = V_0;
		V_3 = ((*(Guid_t *)((Guid_t *)UnBox(L_45, Guid_t_il2cpp_TypeInfo_var))));
		ByteU5BU5D_t4116647657* L_46 = Guid_ToByteArray_m1059098555((Guid_t *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_43);
		VirtActionInvoker3< SqliteStatement_t1470694543 *, int32_t, ByteU5BU5D_t4116647657* >::Invoke(19 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Blob(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Byte[]) */, L_43, __this, L_44, L_46);
		goto IL_0186;
	}

IL_0173:
	{
		SQLiteBase_t1448580847 * L_47 = __this->get__sql_0();
		int32_t L_48 = ___index0;
		RuntimeObject * L_49 = V_0;
		NullCheck(L_49);
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		NullCheck(L_47);
		VirtActionInvoker3< SqliteStatement_t1470694543 *, int32_t, String_t* >::Invoke(18 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String) */, L_47, __this, L_48, L_50);
	}

IL_0186:
	{
		goto IL_01ce;
	}

IL_018b:
	{
		SQLiteBase_t1448580847 * L_51 = __this->get__sql_0();
		int32_t L_52 = ___index0;
		RuntimeObject * L_53 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_54 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_55 = Convert_ToDecimal_m3815908452(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/NULL);
		V_4 = L_55;
		CultureInfo_t4157843068 * L_56 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_57 = Decimal_ToString_m3653216873((Decimal_t2948259380 *)(&V_4), L_56, /*hidden argument*/NULL);
		NullCheck(L_51);
		VirtActionInvoker3< SqliteStatement_t1470694543 *, int32_t, String_t* >::Invoke(18 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String) */, L_51, __this, L_52, L_57);
		goto IL_01ce;
	}

IL_01b6:
	{
		SQLiteBase_t1448580847 * L_58 = __this->get__sql_0();
		int32_t L_59 = ___index0;
		RuntimeObject * L_60 = V_0;
		NullCheck(L_60);
		String_t* L_61 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
		NullCheck(L_58);
		VirtActionInvoker3< SqliteStatement_t1470694543 *, int32_t, String_t* >::Invoke(18 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String) */, L_58, __this, L_59, L_61);
		goto IL_01ce;
	}

IL_01ce:
	{
		return;
	}
}
// System.String[] Mono.Data.Sqlite.SqliteStatement::get_TypeDefinitions()
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* SqliteStatement_get_TypeDefinitions_m1520814193 (SqliteStatement_t1470694543 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = __this->get__types_7();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::SetTypes(System.String)
extern "C" IL2CPP_METHOD_ATTR void SqliteStatement_SetTypes_m2516179202 (SqliteStatement_t1470694543 * __this, String_t* ___typedefs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatement_SetTypes_m2516179202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___typedefs0;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m3385789296(L_0, _stringLiteral2566675341, 0, 5, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2047740448(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, SqliteStatement_SetTypes_m2516179202_RuntimeMethod_var);
	}

IL_001b:
	{
		String_t* L_4 = ___typedefs0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6 = String_Substring_m2848979100(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)6)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_6);
		String_t* L_8 = String_Replace_m1273907647(L_6, _stringLiteral3452614528, L_7, /*hidden argument*/NULL);
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_8);
		String_t* L_10 = String_Replace_m1273907647(L_8, _stringLiteral3452614549, L_9, /*hidden argument*/NULL);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_10);
		String_t* L_12 = String_Replace_m1273907647(L_10, _stringLiteral3452614526, L_11, /*hidden argument*/NULL);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_12);
		String_t* L_14 = String_Replace_m1273907647(L_12, _stringLiteral3452614645, L_13, /*hidden argument*/NULL);
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_14);
		String_t* L_16 = String_Replace_m1273907647(L_14, _stringLiteral3452614643, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_16);
		String_t* L_18 = String_Replace_m1273907647(L_16, _stringLiteral3452614592, L_17, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_19 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)4);
		CharU5BU5D_t3528271667* L_20 = L_19;
		RuntimeFieldHandle_t1871169219  L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255367____U24U24fieldU2D1_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		StringU5BU5D_t1281789340* L_22 = String_Split_m3646115398(L_18, L_20, /*hidden argument*/NULL);
		V_1 = L_22;
		V_2 = 0;
		goto IL_00b1;
	}

IL_009c:
	{
		StringU5BU5D_t1281789340* L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		String_t* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00ad;
		}
	}
	{
		StringU5BU5D_t1281789340* L_28 = V_1;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, NULL);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (String_t*)NULL);
	}

IL_00ad:
	{
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00b1:
	{
		int32_t L_31 = V_2;
		StringU5BU5D_t1281789340* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_009c;
		}
	}
	{
		StringU5BU5D_t1281789340* L_33 = V_1;
		__this->set__types_7(L_33);
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
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m2554088766 (SqliteStatementHandle_t2894995162 * __this, intptr_t ___stmt0, const RuntimeMethod* method)
{
	{
		SqliteStatementHandle__ctor_m3041060064(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___stmt0;
		CriticalHandle_SetHandle_m393101319(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m3041060064 (SqliteStatementHandle_t2894995162 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR bool SqliteStatementHandle_ReleaseHandle_m3069235056 (SqliteStatementHandle_t2894995162 * __this, const RuntimeMethod* method)
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
	int32_t __leave_target = -1;
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
extern "C" IL2CPP_METHOD_ATTR bool SqliteStatementHandle_get_IsInvalid_m882893773 (SqliteStatementHandle_t2894995162 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle_get_IsInvalid_m882893773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((CriticalHandle_t2719507733 *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr Mono.Data.Sqlite.SqliteStatementHandle::op_Implicit(Mono.Data.Sqlite.SqliteStatementHandle)
extern "C" IL2CPP_METHOD_ATTR intptr_t SqliteStatementHandle_op_Implicit_m3090031945 (RuntimeObject * __this /* static, unused */, SqliteStatementHandle_t2894995162 * ___stmt0, const RuntimeMethod* method)
{
	{
		SqliteStatementHandle_t2894995162 * L_0 = ___stmt0;
		NullCheck(L_0);
		intptr_t L_1 = ((CriticalHandle_t2719507733 *)L_0)->get_handle_0();
		return (intptr_t)L_1;
	}
}
// Mono.Data.Sqlite.SqliteStatementHandle Mono.Data.Sqlite.SqliteStatementHandle::op_Implicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR SqliteStatementHandle_t2894995162 * SqliteStatementHandle_op_Implicit_m3583322638 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, const RuntimeMethod* method)
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
		SqliteStatementHandle__ctor_m2554088766(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
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
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction__ctor_m4125206649 (SqliteTransaction_t2018962351 * __this, SqliteConnection_t3870565407 * ___connection0, bool ___deferredLock1, const RuntimeMethod* method)
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
	int32_t __leave_target = -1;
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
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, SqliteTransaction__ctor_m4125206649_RuntimeMethod_var);
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
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction_Commit_m1892628780 (SqliteTransaction_t2018962351 * __this, const RuntimeMethod* method)
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
	int32_t __leave_target = -1;
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
extern "C" IL2CPP_METHOD_ATTR SqliteConnection_t3870565407 * SqliteTransaction_get_Connection_m2064979124 (SqliteTransaction_t2018962351 * __this, const RuntimeMethod* method)
{
	{
		SqliteConnection_t3870565407 * L_0 = __this->get__cnn_1();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction_Dispose_m3770840239 (SqliteTransaction_t2018962351 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	SqliteTransaction_t2018962351 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
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
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction_Rollback_m2625955415 (SqliteTransaction_t2018962351 * __this, const RuntimeMethod* method)
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
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction_IssueRollback_m2494991181 (RuntimeObject * __this /* static, unused */, SqliteConnection_t3870565407 * ___cnn0, const RuntimeMethod* method)
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
	int32_t __leave_target = -1;
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
extern "C" IL2CPP_METHOD_ATTR bool SqliteTransaction_IsValid_m881367657 (SqliteTransaction_t2018962351 * __this, bool ___throwError0, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, SqliteTransaction_IsValid_m881367657_RuntimeMethod_var);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, SqliteTransaction_IsValid_m881367657_RuntimeMethod_var);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, SqliteTransaction_IsValid_m881367657_RuntimeMethod_var);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, SqliteTransaction_IsValid_m881367657_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_close(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_close_m2998066677 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_close", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_close'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_create_function(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IntPtr,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteFinalCallback)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_create_function_m2862226744 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, ByteU5BU5D_t4116647657* ___strName1, int32_t ___nArgs2, int32_t ___nType3, intptr_t ___pvUser4, SQLiteCallback_t1634814860 * ___func5, SQLiteCallback_t1634814860 * ___fstep6, SQLiteFinalCallback_t3927043577 * ___ffinal7, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_create_function", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_create_function'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_finalize_m2558891839 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_finalize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_finalize'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open_v2(System.Byte[],System.IntPtr&,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_open_v2_m2368480615 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___utf8Filename0, intptr_t* ___db1, int32_t ___flags2, intptr_t ___vfs3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_open_v2'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___utf8Filename0' to native representation
	uint8_t* ____utf8Filename0_marshaled = NULL;
	if (___utf8Filename0 != NULL)
	{
		____utf8Filename0_marshaled = reinterpret_cast<uint8_t*>((___utf8Filename0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____utf8Filename0_marshaled, ___db1, ___flags2, ___vfs3);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open(System.Byte[],System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_open_m232265129 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___utf8Filename0, intptr_t* ___db1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_open'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___utf8Filename0' to native representation
	uint8_t* ____utf8Filename0_marshaled = NULL;
	if (___utf8Filename0 != NULL)
	{
		____utf8Filename0_marshaled = reinterpret_cast<uint8_t*>((___utf8Filename0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____utf8Filename0_marshaled, ___db1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open16(System.String,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_open16_m1481624615 (RuntimeObject * __this /* static, unused */, String_t* ___fileName0, intptr_t* ___db1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (Il2CppChar*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_open16'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___fileName0' to native representation
	Il2CppChar* ____fileName0_marshaled = NULL;
	if (___fileName0 != NULL)
	{
		____fileName0_marshaled = ___fileName0->get_address_of_start_char_1();
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____fileName0_marshaled, ___db1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_reset(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_reset_m3498500024 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_reset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_reset'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_parameter_name(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_bind_parameter_name_m892068349 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_parameter_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_parameter_name'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_database_name(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_database_name_m3506908552 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_database_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_database_name'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_database_name16(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_database_name16_m972576669 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_database_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_database_name16'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_decltype(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_decltype_m3961130600 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_decltype", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_decltype'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_name(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_name_m437882687 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_name'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_name16(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_name16_m2001030568 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_name16'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_origin_name(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_origin_name_m1070613838 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_origin_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_origin_name'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_origin_name16(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_origin_name16_m2948039724 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_origin_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_origin_name16'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_table_name(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_table_name_m3744640887 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_table_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_table_name'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_table_name16(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_table_name16_m530206799 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_table_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_table_name16'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_text(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_text_m3883882684 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_text'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_text16(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_text16_m222241133 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_text16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_text16'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_errmsg(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_errmsg_m3176165033 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_errmsg", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_errmsg'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___db0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_prepare(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_prepare_m1561901234 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, intptr_t ___pSql1, int32_t ___nBytes2, intptr_t* ___stmt3, intptr_t* ___ptrRemain4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_prepare", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_prepare'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ___pSql1, ___nBytes2, ___stmt3, ___ptrRemain4);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_table_column_metadata(System.IntPtr,System.Byte[],System.Byte[],System.Byte[],System.IntPtr&,System.IntPtr&,System.Int32&,System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_table_column_metadata_m3850868766 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, ByteU5BU5D_t4116647657* ___dbName1, ByteU5BU5D_t4116647657* ___tblName2, ByteU5BU5D_t4116647657* ___colName3, intptr_t* ___ptrDataType4, intptr_t* ___ptrCollSeq5, int32_t* ___notNull6, int32_t* ___primaryKey7, int32_t* ___autoInc8, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, uint8_t*, uint8_t*, intptr_t*, intptr_t*, int32_t*, int32_t*, int32_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(intptr_t*) + sizeof(intptr_t*) + sizeof(int32_t*) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_table_column_metadata", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_table_column_metadata'"), NULL, NULL);
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

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____dbName1_marshaled, ____tblName2_marshaled, ____colName3_marshaled, ___ptrDataType4, ___ptrCollSeq5, ___notNull6, ___primaryKey7, ___autoInc8);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_text(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_value_text_m3584550402 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_text'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_text16(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_value_text16_m734642400 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_text16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_text16'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_libversion()
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_libversion_m103677152 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_libversion", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_libversion'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_changes(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_changes_m2054051445 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_changes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_changes'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_busy_timeout(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_busy_timeout_m3830907368 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, int32_t ___ms1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_busy_timeout", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_busy_timeout'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ___ms1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_blob(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_blob_m3574368098 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, ByteU5BU5D_t4116647657* ___value2, int32_t ___nSize3, intptr_t ___nTransient4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_blob'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_double_m4092852149 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, double ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, double);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_double'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_int(System.IntPtr,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_int_m1714497249 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_int'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_int64(System.IntPtr,System.Int32,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_int64_m2953941672 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, int64_t ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int64_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_int64'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_null(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_null_m64291565 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_null", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_null'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_text(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_text_m3649328464 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, ByteU5BU5D_t4116647657* ___value2, int32_t ___nlen3, intptr_t ___pvReserved4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_text'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_parameter_count_m3425658776 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_parameter_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_parameter_count'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_count(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_count_m2076872247 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_count'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_step(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_step_m1516822508 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_step", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_step'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.Double Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_double(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR double UnsafeNativeMethods_sqlite3_column_double_m1042061917 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_double'"), NULL, NULL);
		}
	}

	// Native function invocation
	double returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_int(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_int_m3565378138 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_int'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int64 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_int64(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int64_t UnsafeNativeMethods_sqlite3_column_int64_m780049365 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_int64'"), NULL, NULL);
		}
	}

	// Native function invocation
	int64_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_blob(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_blob_m3178067971 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_blob'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_bytes(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_bytes_m4173770185 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_bytes'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_type(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_type_m3232121130 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_type", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_type'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_create_collation(System.IntPtr,System.Byte[],System.Int32,System.IntPtr,Mono.Data.Sqlite.SQLiteCollation)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_create_collation_m3660294722 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, ByteU5BU5D_t4116647657* ___strName1, int32_t ___nType2, intptr_t ___pvUser3, SQLiteCollation_t2922389035 * ___func4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_create_collation", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_create_collation'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_value_blob_m3125989879 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_blob'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_bytes(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_value_bytes_m4249983591 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_bytes'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Double Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_double(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR double UnsafeNativeMethods_sqlite3_value_double_m3767775324 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_double'"), NULL, NULL);
		}
	}

	// Native function invocation
	double returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Int64 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_int64(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int64_t UnsafeNativeMethods_sqlite3_value_int64_m568793785 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_int64'"), NULL, NULL);
		}
	}

	// Native function invocation
	int64_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_type(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_value_type_m392562512 (RuntimeObject * __this /* static, unused */, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_type", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_type'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_blob(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_blob_m3235775100 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, ByteU5BU5D_t4116647657* ___value1, int32_t ___nSize2, intptr_t ___pvReserved3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_blob'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_double_m3114459021 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, double ___value1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, double);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_double'"), NULL, NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ___value1);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_error(System.IntPtr,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_error_m1066557020 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, ByteU5BU5D_t4116647657* ___strErr1, int32_t ___nLen2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_error", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_error'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_int64_m1336636029 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, int64_t ___value1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int64_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_int64'"), NULL, NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ___value1);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_null(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_null_m3599232391 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_null", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_null'"), NULL, NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_text(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_text_m3737941061 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, ByteU5BU5D_t4116647657* ___value1, int32_t ___nLen2, intptr_t ___pvReserved3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_text'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_aggregate_context_m1257140450 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, int32_t ___nBytes1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_aggregate_context", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_aggregate_context'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___nBytes1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_text16(System.IntPtr,System.Int32,System.String,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_text16_m3032602632 (RuntimeObject * __this /* static, unused */, intptr_t ___stmt0, int32_t ___index1, String_t* ___value2, int32_t ___nlen3, intptr_t ___pvReserved4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, Il2CppChar*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_text16'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_error16_m18639957 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, String_t* ___strName1, int32_t ___nLen2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_error16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_error16'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_text16_m3270968340 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, String_t* ___strName1, int32_t ___nLen2, intptr_t ___pvReserved3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_text16'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_key_m889750284 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, ByteU5BU5D_t4116647657* ___key1, int32_t ___keylen2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_key", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_key'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_update_hook_m3994016578 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, SQLiteUpdateCallback_t3929343441 * ___func1, intptr_t ___pvUser2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_update_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_update_hook'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_commit_hook_m75929880 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, SQLiteCommitCallback_t583925460 * ___func1, intptr_t ___pvUser2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_commit_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_commit_hook'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_rollback_hook_m2390921629 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, SQLiteRollbackCallback_t3445264418 * ___func1, intptr_t ___pvUser2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_rollback_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_rollback_hook'"), NULL, NULL);
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
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_next_stmt_m1131400450 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, intptr_t ___stmt1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_next_stmt", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_next_stmt'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ___stmt1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_exec(System.IntPtr,System.Byte[],System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_exec_m1538089573 (RuntimeObject * __this /* static, unused */, intptr_t ___db0, ByteU5BU5D_t4116647657* ___strSql1, intptr_t ___pvCallback2, intptr_t ___pvParam3, intptr_t* ___errMsg4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, intptr_t, intptr_t, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_exec", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_exec'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___strSql1' to native representation
	uint8_t* ____strSql1_marshaled = NULL;
	if (___strSql1 != NULL)
	{
		____strSql1_marshaled = reinterpret_cast<uint8_t*>((___strSql1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strSql1_marshaled, ___pvCallback2, ___pvParam3, ___errMsg4);

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
