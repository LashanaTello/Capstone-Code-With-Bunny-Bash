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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Attribute
struct Attribute_t861562559;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>
struct List_1_t1748158447;
// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>
struct List_1_t446791853;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Exception
struct Exception_t;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.MonoTODOAttribute
struct MonoTODOAttribute_t4131080586;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.SystemException
struct SystemException_t176217640;
// System.Transactions.Enlistment
struct Enlistment_t1988529039;
// System.Transactions.IEnlistmentNotification
struct IEnlistmentNotification_t276083705;
// System.Transactions.IEnlistmentNotification[]
struct IEnlistmentNotificationU5BU5D_t3940780036;
// System.Transactions.ISinglePhaseNotification
struct ISinglePhaseNotification_t3269684407;
// System.Transactions.ISinglePhaseNotification[]
struct ISinglePhaseNotificationU5BU5D_t3524251278;
// System.Transactions.PreparingEnlistment
struct PreparingEnlistment_t4199633836;
// System.Transactions.SinglePhaseEnlistment
struct SinglePhaseEnlistment_t2412016327;
// System.Transactions.Transaction
struct Transaction_t3472000926;
// System.Transactions.TransactionAbortedException
struct TransactionAbortedException_t2116885608;
// System.Transactions.TransactionException
struct TransactionException_t1281392668;
// System.Transactions.TransactionInformation
struct TransactionInformation_t2459298917;
// System.Transactions.TransactionScope
struct TransactionScope_t3249669472;

extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Enlistment_t1988529039_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t3637402324_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnlistmentNotification_t276083705_il2cpp_TypeInfo_var;
extern RuntimeClass* ISinglePhaseNotification_t3269684407_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1748158447_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t446791853_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern RuntimeClass* PreparingEnlistment_t4199633836_il2cpp_TypeInfo_var;
extern RuntimeClass* SinglePhaseEnlistment_t2412016327_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionAbortedException_t2116885608_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionException_t1281392668_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionInformation_t2459298917_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionManager_t2760750674_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionOptions_t2865697824_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionScope_t3249669472_il2cpp_TypeInfo_var;
extern RuntimeClass* Transaction_t3472000926_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1447952811;
extern String_t* _stringLiteral2911134571;
extern String_t* _stringLiteral3179484437;
extern String_t* _stringLiteral3451500438;
extern String_t* _stringLiteral3658361563;
extern String_t* _stringLiteral4289221870;
extern String_t* _stringLiteral955001179;
extern const RuntimeMethod* Enumerator_MoveNext_m2553881418_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2109621835_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3259134144_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m197419245_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2157780702_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m367584120_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2597957279_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3966086873_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1029352870_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m673984641_RuntimeMethod_var;
extern const RuntimeMethod* TransactionScope_Dispose_m1851654666_RuntimeMethod_var;
extern const RuntimeMethod* Transaction_CheckAborted_m2334107562_RuntimeMethod_var;
extern const RuntimeMethod* Transaction_CommitInternal_m3300735138_RuntimeMethod_var;
extern const RuntimeMethod* Transaction_EnsureIncompleteCurrentScope_m977027993_RuntimeMethod_var;
extern const RuntimeMethod* Transaction_Rollback_m3410269003_RuntimeMethod_var;
extern const RuntimeMethod* Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_m1788113767_RuntimeMethod_var;
extern const uint32_t TransactionInformation__ctor_m903375629_MetadataUsageId;
extern const uint32_t TransactionManager__cctor_m2466764276_MetadataUsageId;
extern const uint32_t TransactionManager_get_DefaultTimeout_m708447596_MetadataUsageId;
extern const uint32_t TransactionOptions_Equals_m3142779001_MetadataUsageId;
extern const uint32_t TransactionOptions_op_Equality_m3173535161_MetadataUsageId;
extern const uint32_t TransactionScope_Dispose_m1851654666_MetadataUsageId;
extern const uint32_t TransactionScope__cctor_m3418824945_MetadataUsageId;
extern const uint32_t Transaction_CheckAborted_m2334107562_MetadataUsageId;
extern const uint32_t Transaction_CommitInternal_m3300735138_MetadataUsageId;
extern const uint32_t Transaction_DoCommitPhase_m3733774821_MetadataUsageId;
extern const uint32_t Transaction_DoCommit_m4142857842_MetadataUsageId;
extern const uint32_t Transaction_DoPreparePhase_m3654094297_MetadataUsageId;
extern const uint32_t Transaction_DoSingleCommit_m37203013_MetadataUsageId;
extern const uint32_t Transaction_EnlistVolatileInternal_m1707882442_MetadataUsageId;
extern const uint32_t Transaction_EnsureIncompleteCurrentScope_m977027993_MetadataUsageId;
extern const uint32_t Transaction_Equals_m3288205670_MetadataUsageId;
extern const uint32_t Transaction_Rollback_m3410269003_MetadataUsageId;
extern const uint32_t Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_m1788113767_MetadataUsageId;
extern const uint32_t Transaction__ctor_m1487238460_MetadataUsageId;
extern const uint32_t Transaction_get_CurrentInternal_m2539383803_MetadataUsageId;
extern const uint32_t Transaction_set_CurrentInternal_m3438268600_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745538_H
#define U3CMODULEU3E_T692745538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745538 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745538_H
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
#ifndef LIST_1_T1748158447_H
#define LIST_1_T1748158447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>
struct  List_1_t1748158447  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IEnlistmentNotificationU5BU5D_t3940780036* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1748158447, ____items_1)); }
	inline IEnlistmentNotificationU5BU5D_t3940780036* get__items_1() const { return ____items_1; }
	inline IEnlistmentNotificationU5BU5D_t3940780036** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IEnlistmentNotificationU5BU5D_t3940780036* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1748158447, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1748158447, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1748158447_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	IEnlistmentNotificationU5BU5D_t3940780036* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1748158447_StaticFields, ___EmptyArray_4)); }
	inline IEnlistmentNotificationU5BU5D_t3940780036* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline IEnlistmentNotificationU5BU5D_t3940780036** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(IEnlistmentNotificationU5BU5D_t3940780036* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1748158447_H
#ifndef LIST_1_T446791853_H
#define LIST_1_T446791853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>
struct  List_1_t446791853  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISinglePhaseNotificationU5BU5D_t3524251278* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t446791853, ____items_1)); }
	inline ISinglePhaseNotificationU5BU5D_t3524251278* get__items_1() const { return ____items_1; }
	inline ISinglePhaseNotificationU5BU5D_t3524251278** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISinglePhaseNotificationU5BU5D_t3524251278* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t446791853, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t446791853, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t446791853_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ISinglePhaseNotificationU5BU5D_t3524251278* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t446791853_StaticFields, ___EmptyArray_4)); }
	inline ISinglePhaseNotificationU5BU5D_t3524251278* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ISinglePhaseNotificationU5BU5D_t3524251278** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ISinglePhaseNotificationU5BU5D_t3524251278* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T446791853_H
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
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t1853889766 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t2718874744 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___serialized_0)); }
	inline Hashtable_t1853889766 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t1853889766 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t1853889766 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___values_1)); }
	inline ArrayList_t2718874744 * get_values_1() const { return ___values_1; }
	inline ArrayList_t2718874744 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t2718874744 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
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
#ifndef ENLISTMENT_T1988529039_H
#define ENLISTMENT_T1988529039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.Enlistment
struct  Enlistment_t1988529039  : public RuntimeObject
{
public:
	// System.Boolean System.Transactions.Enlistment::done
	bool ___done_0;

public:
	inline static int32_t get_offset_of_done_0() { return static_cast<int32_t>(offsetof(Enlistment_t1988529039, ___done_0)); }
	inline bool get_done_0() const { return ___done_0; }
	inline bool* get_address_of_done_0() { return &___done_0; }
	inline void set_done_0(bool value)
	{
		___done_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENLISTMENT_T1988529039_H
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
#ifndef ENUMERATOR_T3637402324_H
#define ENUMERATOR_T3637402324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>
struct  Enumerator_t3637402324 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1748158447 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3637402324, ___l_0)); }
	inline List_1_t1748158447 * get_l_0() const { return ___l_0; }
	inline List_1_t1748158447 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1748158447 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3637402324, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3637402324, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3637402324, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3637402324_H
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
#ifndef MONOTODOATTRIBUTE_T4131080586_H
#define MONOTODOATTRIBUTE_T4131080586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t4131080586  : public Attribute_t861562559
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t4131080586, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T4131080586_H
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
#ifndef PREPARINGENLISTMENT_T4199633836_H
#define PREPARINGENLISTMENT_T4199633836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.PreparingEnlistment
struct  PreparingEnlistment_t4199633836  : public Enlistment_t1988529039
{
public:
	// System.Boolean System.Transactions.PreparingEnlistment::prepared
	bool ___prepared_1;
	// System.Transactions.Transaction System.Transactions.PreparingEnlistment::tx
	Transaction_t3472000926 * ___tx_2;
	// System.Transactions.IEnlistmentNotification System.Transactions.PreparingEnlistment::enlisted
	RuntimeObject* ___enlisted_3;

public:
	inline static int32_t get_offset_of_prepared_1() { return static_cast<int32_t>(offsetof(PreparingEnlistment_t4199633836, ___prepared_1)); }
	inline bool get_prepared_1() const { return ___prepared_1; }
	inline bool* get_address_of_prepared_1() { return &___prepared_1; }
	inline void set_prepared_1(bool value)
	{
		___prepared_1 = value;
	}

	inline static int32_t get_offset_of_tx_2() { return static_cast<int32_t>(offsetof(PreparingEnlistment_t4199633836, ___tx_2)); }
	inline Transaction_t3472000926 * get_tx_2() const { return ___tx_2; }
	inline Transaction_t3472000926 ** get_address_of_tx_2() { return &___tx_2; }
	inline void set_tx_2(Transaction_t3472000926 * value)
	{
		___tx_2 = value;
		Il2CppCodeGenWriteBarrier((&___tx_2), value);
	}

	inline static int32_t get_offset_of_enlisted_3() { return static_cast<int32_t>(offsetof(PreparingEnlistment_t4199633836, ___enlisted_3)); }
	inline RuntimeObject* get_enlisted_3() const { return ___enlisted_3; }
	inline RuntimeObject** get_address_of_enlisted_3() { return &___enlisted_3; }
	inline void set_enlisted_3(RuntimeObject* value)
	{
		___enlisted_3 = value;
		Il2CppCodeGenWriteBarrier((&___enlisted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREPARINGENLISTMENT_T4199633836_H
#ifndef SINGLEPHASEENLISTMENT_T2412016327_H
#define SINGLEPHASEENLISTMENT_T2412016327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.SinglePhaseEnlistment
struct  SinglePhaseEnlistment_t2412016327  : public Enlistment_t1988529039
{
public:
	// System.Transactions.Transaction System.Transactions.SinglePhaseEnlistment::tx
	Transaction_t3472000926 * ___tx_1;
	// System.Transactions.ISinglePhaseNotification System.Transactions.SinglePhaseEnlistment::enlisted
	RuntimeObject* ___enlisted_2;

public:
	inline static int32_t get_offset_of_tx_1() { return static_cast<int32_t>(offsetof(SinglePhaseEnlistment_t2412016327, ___tx_1)); }
	inline Transaction_t3472000926 * get_tx_1() const { return ___tx_1; }
	inline Transaction_t3472000926 ** get_address_of_tx_1() { return &___tx_1; }
	inline void set_tx_1(Transaction_t3472000926 * value)
	{
		___tx_1 = value;
		Il2CppCodeGenWriteBarrier((&___tx_1), value);
	}

	inline static int32_t get_offset_of_enlisted_2() { return static_cast<int32_t>(offsetof(SinglePhaseEnlistment_t2412016327, ___enlisted_2)); }
	inline RuntimeObject* get_enlisted_2() const { return ___enlisted_2; }
	inline RuntimeObject** get_address_of_enlisted_2() { return &___enlisted_2; }
	inline void set_enlisted_2(RuntimeObject* value)
	{
		___enlisted_2 = value;
		Il2CppCodeGenWriteBarrier((&___enlisted_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLEPHASEENLISTMENT_T2412016327_H
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
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
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
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef ENLISTMENTOPTIONS_T1967621800_H
#define ENLISTMENTOPTIONS_T1967621800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.EnlistmentOptions
struct  EnlistmentOptions_t1967621800 
{
public:
	// System.Int32 System.Transactions.EnlistmentOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EnlistmentOptions_t1967621800, ___value___1)); }
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
#endif // ENLISTMENTOPTIONS_T1967621800_H
#ifndef ISOLATIONLEVEL_T4247150849_H
#define ISOLATIONLEVEL_T4247150849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.IsolationLevel
struct  IsolationLevel_t4247150849 
{
public:
	// System.Int32 System.Transactions.IsolationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IsolationLevel_t4247150849, ___value___1)); }
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
#endif // ISOLATIONLEVEL_T4247150849_H
#ifndef TRANSACTIONEXCEPTION_T1281392668_H
#define TRANSACTIONEXCEPTION_T1281392668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionException
struct  TransactionException_t1281392668  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONEXCEPTION_T1281392668_H
#ifndef TRANSACTIONMANAGER_T2760750674_H
#define TRANSACTIONMANAGER_T2760750674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionManager
struct  TransactionManager_t2760750674  : public RuntimeObject
{
public:

public:
};

struct TransactionManager_t2760750674_StaticFields
{
public:
	// System.TimeSpan System.Transactions.TransactionManager::defaultTimeout
	TimeSpan_t881159249  ___defaultTimeout_0;
	// System.TimeSpan System.Transactions.TransactionManager::maxTimeout
	TimeSpan_t881159249  ___maxTimeout_1;

public:
	inline static int32_t get_offset_of_defaultTimeout_0() { return static_cast<int32_t>(offsetof(TransactionManager_t2760750674_StaticFields, ___defaultTimeout_0)); }
	inline TimeSpan_t881159249  get_defaultTimeout_0() const { return ___defaultTimeout_0; }
	inline TimeSpan_t881159249 * get_address_of_defaultTimeout_0() { return &___defaultTimeout_0; }
	inline void set_defaultTimeout_0(TimeSpan_t881159249  value)
	{
		___defaultTimeout_0 = value;
	}

	inline static int32_t get_offset_of_maxTimeout_1() { return static_cast<int32_t>(offsetof(TransactionManager_t2760750674_StaticFields, ___maxTimeout_1)); }
	inline TimeSpan_t881159249  get_maxTimeout_1() const { return ___maxTimeout_1; }
	inline TimeSpan_t881159249 * get_address_of_maxTimeout_1() { return &___maxTimeout_1; }
	inline void set_maxTimeout_1(TimeSpan_t881159249  value)
	{
		___maxTimeout_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONMANAGER_T2760750674_H
#ifndef TRANSACTIONSTATUS_T192984806_H
#define TRANSACTIONSTATUS_T192984806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionStatus
struct  TransactionStatus_t192984806 
{
public:
	// System.Int32 System.Transactions.TransactionStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TransactionStatus_t192984806, ___value___1)); }
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
#endif // TRANSACTIONSTATUS_T192984806_H
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
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef TRANSACTION_T3472000926_H
#define TRANSACTION_T3472000926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.Transaction
struct  Transaction_t3472000926  : public RuntimeObject
{
public:
	// System.Transactions.IsolationLevel System.Transactions.Transaction::level
	int32_t ___level_1;
	// System.Transactions.TransactionInformation System.Transactions.Transaction::info
	TransactionInformation_t2459298917 * ___info_2;
	// System.Collections.ArrayList System.Transactions.Transaction::dependents
	ArrayList_t2718874744 * ___dependents_3;
	// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification> System.Transactions.Transaction::volatiles
	List_1_t1748158447 * ___volatiles_4;
	// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification> System.Transactions.Transaction::durables
	List_1_t446791853 * ___durables_5;
	// System.Boolean System.Transactions.Transaction::committing
	bool ___committing_6;
	// System.Boolean System.Transactions.Transaction::committed
	bool ___committed_7;
	// System.Boolean System.Transactions.Transaction::aborted
	bool ___aborted_8;
	// System.Transactions.TransactionScope System.Transactions.Transaction::scope
	TransactionScope_t3249669472 * ___scope_9;
	// System.Exception System.Transactions.Transaction::innerException
	Exception_t * ___innerException_10;

public:
	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___info_2)); }
	inline TransactionInformation_t2459298917 * get_info_2() const { return ___info_2; }
	inline TransactionInformation_t2459298917 ** get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(TransactionInformation_t2459298917 * value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier((&___info_2), value);
	}

	inline static int32_t get_offset_of_dependents_3() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___dependents_3)); }
	inline ArrayList_t2718874744 * get_dependents_3() const { return ___dependents_3; }
	inline ArrayList_t2718874744 ** get_address_of_dependents_3() { return &___dependents_3; }
	inline void set_dependents_3(ArrayList_t2718874744 * value)
	{
		___dependents_3 = value;
		Il2CppCodeGenWriteBarrier((&___dependents_3), value);
	}

	inline static int32_t get_offset_of_volatiles_4() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___volatiles_4)); }
	inline List_1_t1748158447 * get_volatiles_4() const { return ___volatiles_4; }
	inline List_1_t1748158447 ** get_address_of_volatiles_4() { return &___volatiles_4; }
	inline void set_volatiles_4(List_1_t1748158447 * value)
	{
		___volatiles_4 = value;
		Il2CppCodeGenWriteBarrier((&___volatiles_4), value);
	}

	inline static int32_t get_offset_of_durables_5() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___durables_5)); }
	inline List_1_t446791853 * get_durables_5() const { return ___durables_5; }
	inline List_1_t446791853 ** get_address_of_durables_5() { return &___durables_5; }
	inline void set_durables_5(List_1_t446791853 * value)
	{
		___durables_5 = value;
		Il2CppCodeGenWriteBarrier((&___durables_5), value);
	}

	inline static int32_t get_offset_of_committing_6() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___committing_6)); }
	inline bool get_committing_6() const { return ___committing_6; }
	inline bool* get_address_of_committing_6() { return &___committing_6; }
	inline void set_committing_6(bool value)
	{
		___committing_6 = value;
	}

	inline static int32_t get_offset_of_committed_7() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___committed_7)); }
	inline bool get_committed_7() const { return ___committed_7; }
	inline bool* get_address_of_committed_7() { return &___committed_7; }
	inline void set_committed_7(bool value)
	{
		___committed_7 = value;
	}

	inline static int32_t get_offset_of_aborted_8() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___aborted_8)); }
	inline bool get_aborted_8() const { return ___aborted_8; }
	inline bool* get_address_of_aborted_8() { return &___aborted_8; }
	inline void set_aborted_8(bool value)
	{
		___aborted_8 = value;
	}

	inline static int32_t get_offset_of_scope_9() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___scope_9)); }
	inline TransactionScope_t3249669472 * get_scope_9() const { return ___scope_9; }
	inline TransactionScope_t3249669472 ** get_address_of_scope_9() { return &___scope_9; }
	inline void set_scope_9(TransactionScope_t3249669472 * value)
	{
		___scope_9 = value;
		Il2CppCodeGenWriteBarrier((&___scope_9), value);
	}

	inline static int32_t get_offset_of_innerException_10() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___innerException_10)); }
	inline Exception_t * get_innerException_10() const { return ___innerException_10; }
	inline Exception_t ** get_address_of_innerException_10() { return &___innerException_10; }
	inline void set_innerException_10(Exception_t * value)
	{
		___innerException_10 = value;
		Il2CppCodeGenWriteBarrier((&___innerException_10), value);
	}
};

struct Transaction_t3472000926_ThreadStaticFields
{
public:
	// System.Transactions.Transaction System.Transactions.Transaction::ambient
	Transaction_t3472000926 * ___ambient_0;

public:
	inline static int32_t get_offset_of_ambient_0() { return static_cast<int32_t>(offsetof(Transaction_t3472000926_ThreadStaticFields, ___ambient_0)); }
	inline Transaction_t3472000926 * get_ambient_0() const { return ___ambient_0; }
	inline Transaction_t3472000926 ** get_address_of_ambient_0() { return &___ambient_0; }
	inline void set_ambient_0(Transaction_t3472000926 * value)
	{
		___ambient_0 = value;
		Il2CppCodeGenWriteBarrier((&___ambient_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTION_T3472000926_H
#ifndef TRANSACTIONABORTEDEXCEPTION_T2116885608_H
#define TRANSACTIONABORTEDEXCEPTION_T2116885608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionAbortedException
struct  TransactionAbortedException_t2116885608  : public TransactionException_t1281392668
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONABORTEDEXCEPTION_T2116885608_H
#ifndef TRANSACTIONOPTIONS_T2865697824_H
#define TRANSACTIONOPTIONS_T2865697824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionOptions
struct  TransactionOptions_t2865697824 
{
public:
	// System.Transactions.IsolationLevel System.Transactions.TransactionOptions::level
	int32_t ___level_0;
	// System.TimeSpan System.Transactions.TransactionOptions::timeout
	TimeSpan_t881159249  ___timeout_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(TransactionOptions_t2865697824, ___level_0)); }
	inline int32_t get_level_0() const { return ___level_0; }
	inline int32_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(int32_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_timeout_1() { return static_cast<int32_t>(offsetof(TransactionOptions_t2865697824, ___timeout_1)); }
	inline TimeSpan_t881159249  get_timeout_1() const { return ___timeout_1; }
	inline TimeSpan_t881159249 * get_address_of_timeout_1() { return &___timeout_1; }
	inline void set_timeout_1(TimeSpan_t881159249  value)
	{
		___timeout_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONOPTIONS_T2865697824_H
#ifndef TRANSACTIONINFORMATION_T2459298917_H
#define TRANSACTIONINFORMATION_T2459298917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionInformation
struct  TransactionInformation_t2459298917  : public RuntimeObject
{
public:
	// System.String System.Transactions.TransactionInformation::local_id
	String_t* ___local_id_0;
	// System.Guid System.Transactions.TransactionInformation::dtcId
	Guid_t  ___dtcId_1;
	// System.DateTime System.Transactions.TransactionInformation::creation_time
	DateTime_t3738529785  ___creation_time_2;
	// System.Transactions.TransactionStatus System.Transactions.TransactionInformation::status
	int32_t ___status_3;

public:
	inline static int32_t get_offset_of_local_id_0() { return static_cast<int32_t>(offsetof(TransactionInformation_t2459298917, ___local_id_0)); }
	inline String_t* get_local_id_0() const { return ___local_id_0; }
	inline String_t** get_address_of_local_id_0() { return &___local_id_0; }
	inline void set_local_id_0(String_t* value)
	{
		___local_id_0 = value;
		Il2CppCodeGenWriteBarrier((&___local_id_0), value);
	}

	inline static int32_t get_offset_of_dtcId_1() { return static_cast<int32_t>(offsetof(TransactionInformation_t2459298917, ___dtcId_1)); }
	inline Guid_t  get_dtcId_1() const { return ___dtcId_1; }
	inline Guid_t * get_address_of_dtcId_1() { return &___dtcId_1; }
	inline void set_dtcId_1(Guid_t  value)
	{
		___dtcId_1 = value;
	}

	inline static int32_t get_offset_of_creation_time_2() { return static_cast<int32_t>(offsetof(TransactionInformation_t2459298917, ___creation_time_2)); }
	inline DateTime_t3738529785  get_creation_time_2() const { return ___creation_time_2; }
	inline DateTime_t3738529785 * get_address_of_creation_time_2() { return &___creation_time_2; }
	inline void set_creation_time_2(DateTime_t3738529785  value)
	{
		___creation_time_2 = value;
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(TransactionInformation_t2459298917, ___status_3)); }
	inline int32_t get_status_3() const { return ___status_3; }
	inline int32_t* get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(int32_t value)
	{
		___status_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONINFORMATION_T2459298917_H
#ifndef TRANSACTIONSCOPE_T3249669472_H
#define TRANSACTIONSCOPE_T3249669472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionScope
struct  TransactionScope_t3249669472  : public RuntimeObject
{
public:
	// System.Transactions.Transaction System.Transactions.TransactionScope::transaction
	Transaction_t3472000926 * ___transaction_1;
	// System.Transactions.Transaction System.Transactions.TransactionScope::oldTransaction
	Transaction_t3472000926 * ___oldTransaction_2;
	// System.Transactions.TransactionScope System.Transactions.TransactionScope::parentScope
	TransactionScope_t3249669472 * ___parentScope_3;
	// System.Int32 System.Transactions.TransactionScope::nested
	int32_t ___nested_4;
	// System.Boolean System.Transactions.TransactionScope::disposed
	bool ___disposed_5;
	// System.Boolean System.Transactions.TransactionScope::completed
	bool ___completed_6;
	// System.Boolean System.Transactions.TransactionScope::isRoot
	bool ___isRoot_7;

public:
	inline static int32_t get_offset_of_transaction_1() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___transaction_1)); }
	inline Transaction_t3472000926 * get_transaction_1() const { return ___transaction_1; }
	inline Transaction_t3472000926 ** get_address_of_transaction_1() { return &___transaction_1; }
	inline void set_transaction_1(Transaction_t3472000926 * value)
	{
		___transaction_1 = value;
		Il2CppCodeGenWriteBarrier((&___transaction_1), value);
	}

	inline static int32_t get_offset_of_oldTransaction_2() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___oldTransaction_2)); }
	inline Transaction_t3472000926 * get_oldTransaction_2() const { return ___oldTransaction_2; }
	inline Transaction_t3472000926 ** get_address_of_oldTransaction_2() { return &___oldTransaction_2; }
	inline void set_oldTransaction_2(Transaction_t3472000926 * value)
	{
		___oldTransaction_2 = value;
		Il2CppCodeGenWriteBarrier((&___oldTransaction_2), value);
	}

	inline static int32_t get_offset_of_parentScope_3() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___parentScope_3)); }
	inline TransactionScope_t3249669472 * get_parentScope_3() const { return ___parentScope_3; }
	inline TransactionScope_t3249669472 ** get_address_of_parentScope_3() { return &___parentScope_3; }
	inline void set_parentScope_3(TransactionScope_t3249669472 * value)
	{
		___parentScope_3 = value;
		Il2CppCodeGenWriteBarrier((&___parentScope_3), value);
	}

	inline static int32_t get_offset_of_nested_4() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___nested_4)); }
	inline int32_t get_nested_4() const { return ___nested_4; }
	inline int32_t* get_address_of_nested_4() { return &___nested_4; }
	inline void set_nested_4(int32_t value)
	{
		___nested_4 = value;
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}

	inline static int32_t get_offset_of_isRoot_7() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___isRoot_7)); }
	inline bool get_isRoot_7() const { return ___isRoot_7; }
	inline bool* get_address_of_isRoot_7() { return &___isRoot_7; }
	inline void set_isRoot_7(bool value)
	{
		___isRoot_7 = value;
	}
};

struct TransactionScope_t3249669472_StaticFields
{
public:
	// System.Transactions.TransactionOptions System.Transactions.TransactionScope::defaultOptions
	TransactionOptions_t2865697824  ___defaultOptions_0;

public:
	inline static int32_t get_offset_of_defaultOptions_0() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472_StaticFields, ___defaultOptions_0)); }
	inline TransactionOptions_t2865697824  get_defaultOptions_0() const { return ___defaultOptions_0; }
	inline TransactionOptions_t2865697824 * get_address_of_defaultOptions_0() { return &___defaultOptions_0; }
	inline void set_defaultOptions_0(TransactionOptions_t2865697824  value)
	{
		___defaultOptions_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONSCOPE_T3249669472_H


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Enlistment::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Enlistment__ctor_m1844752968 (Enlistment_t1988529039 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.PreparingEnlistment::ForceRollback(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment_ForceRollback_m276594954 (PreparingEnlistment_t4199633836 * __this, Exception_t * ___ex0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::Rollback(System.Exception,System.Transactions.IEnlistmentNotification)
extern "C" IL2CPP_METHOD_ATTR void Transaction_Rollback_m3410269003 (Transaction_t3472000926 * __this, Exception_t * ___ex0, RuntimeObject* ___enlisted1, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::.ctor()
inline void List_1__ctor_m367584120 (List_1_t1748158447 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1748158447 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>::.ctor()
inline void List_1__ctor_m2157780702 (List_1_t446791853 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t446791853 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Transactions.TransactionInformation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionInformation__ctor_m903375629 (TransactionInformation_t2459298917 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::EnsureIncompleteCurrentScope()
extern "C" IL2CPP_METHOD_ATTR void Transaction_EnsureIncompleteCurrentScope_m977027993 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Transactions.Transaction System.Transactions.Transaction::get_CurrentInternal()
extern "C" IL2CPP_METHOD_ATTR Transaction_t3472000926 * Transaction_get_CurrentInternal_m2539383803 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Transactions.TransactionInformation System.Transactions.Transaction::get_TransactionInformation()
extern "C" IL2CPP_METHOD_ATTR TransactionInformation_t2459298917 * Transaction_get_TransactionInformation_m1885024619 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Transactions.TransactionStatus System.Transactions.TransactionInformation::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t TransactionInformation_get_Status_m1160921797 (TransactionInformation_t2459298917 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::Rollback()
extern "C" IL2CPP_METHOD_ATTR void Transaction_Rollback_m2307478764 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Transactions.Enlistment System.Transactions.Transaction::EnlistVolatileInternal(System.Transactions.IEnlistmentNotification,System.Transactions.EnlistmentOptions)
extern "C" IL2CPP_METHOD_ATTR Enlistment_t1988529039 * Transaction_EnlistVolatileInternal_m1707882442 (Transaction_t3472000926 * __this, RuntimeObject* ___notification0, int32_t ___options1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::Add(!0)
inline void List_1_Add_m3259134144 (List_1_t1748158447 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1748158447 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Transactions.Transaction::Equals(System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_Equals_m4051287636 (Transaction_t3472000926 * __this, Transaction_t3472000926 * ___t0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::Rollback(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Transaction_Rollback_m3533416245 (Transaction_t3472000926 * __this, Exception_t * ___ex0, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m2213981865 (TransactionException_t1281392668 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::GetEnumerator()
inline Enumerator_t3637402324  List_1_GetEnumerator_m197419245 (List_1_t1748158447 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3637402324  (*) (List_1_t1748158447 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m2109621835 (Enumerator_t3637402324 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t3637402324 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>::MoveNext()
inline bool Enumerator_MoveNext_m2553881418 (Enumerator_t3637402324 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3637402324 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>::get_Count()
inline int32_t List_1_get_Count_m3966086873 (List_1_t446791853 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t446791853 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m673984641 (List_1_t446791853 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t446791853 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void System.Transactions.Transaction::set_Aborted(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transaction_set_Aborted_m541403278 (Transaction_t3472000926 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionInformation::set_Status(System.Transactions.TransactionStatus)
extern "C" IL2CPP_METHOD_ATTR void TransactionInformation_set_Status_m1910598492 (TransactionInformation_t2459298917 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::DoCommit()
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoCommit_m4142857842 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Transactions.TransactionScope System.Transactions.Transaction::get_Scope()
extern "C" IL2CPP_METHOD_ATTR TransactionScope_t3249669472 * Transaction_get_Scope_m2234757998 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::CheckAborted()
extern "C" IL2CPP_METHOD_ATTR void Transaction_CheckAborted_m2334107562 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::get_Count()
inline int32_t List_1_get_Count_m2597957279 (List_1_t1748158447 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1748158447 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m1029352870 (List_1_t1748158447 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t1748158447 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void System.Transactions.Transaction::DoSingleCommit(System.Transactions.ISinglePhaseNotification)
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoSingleCommit_m37203013 (Transaction_t3472000926 * __this, RuntimeObject* ___single0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::Complete()
extern "C" IL2CPP_METHOD_ATTR void Transaction_Complete_m1999140662 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::DoPreparePhase()
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoPreparePhase_m3654094297 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::DoCommitPhase()
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoCommitPhase_m3733774821 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.PreparingEnlistment::.ctor(System.Transactions.Transaction,System.Transactions.IEnlistmentNotification)
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment__ctor_m3964674037 (PreparingEnlistment_t4199633836 * __this, Transaction_t3472000926 * ___tx0, RuntimeObject* ___enlisted1, const RuntimeMethod* method);
// System.Boolean System.Transactions.PreparingEnlistment::get_IsPrepared()
extern "C" IL2CPP_METHOD_ATTR bool PreparingEnlistment_get_IsPrepared_m428429483 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.SinglePhaseEnlistment::.ctor(System.Transactions.Transaction,System.Transactions.ISinglePhaseNotification)
extern "C" IL2CPP_METHOD_ATTR void SinglePhaseEnlistment__ctor_m943583346 (SinglePhaseEnlistment_t2412016327 * __this, Transaction_t3472000926 * ___tx0, RuntimeObject* ___enlisted1, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionAbortedException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void TransactionAbortedException__ctor_m2107813208 (TransactionAbortedException_t2116885608 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Boolean System.Transactions.Transaction::op_Equality(System.Transactions.Transaction,System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_op_Equality_m567471953 (RuntimeObject * __this /* static, unused */, Transaction_t3472000926 * ___x0, Transaction_t3472000926 * ___y1, const RuntimeMethod* method);
// System.Boolean System.Transactions.TransactionScope::get_IsComplete()
extern "C" IL2CPP_METHOD_ATTR bool TransactionScope_get_IsComplete_m171974465 (TransactionScope_t3249669472 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m1338117290 (TransactionException_t1281392668 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m2285503530 (TransactionException_t1281392668 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m96674906 (TransactionException_t1281392668 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m4274309232 (SystemException_t176217640 * __this, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m3298527747 (SystemException_t176217640 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m4132668650 (SystemException_t176217640 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m1515048899 (SystemException_t176217640 * __this, SerializationInfo_t950877179 * p0, StreamingContext_t3711869237  p1, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_ToUniversalTime_m1945318289 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
extern "C" IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m923091018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.Guid::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Guid_ToString_m3279186591 (Guid_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TimeSpan__ctor_m3689759052 (TimeSpan_t881159249 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionOptions::.ctor(System.Transactions.IsolationLevel,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR void TransactionOptions__ctor_m175069428 (TransactionOptions_t2865697824 * __this, int32_t ___level0, TimeSpan_t881159249  ___timeout1, const RuntimeMethod* method);
// System.Boolean System.Transactions.TransactionOptions::op_Equality(System.Transactions.TransactionOptions,System.Transactions.TransactionOptions)
extern "C" IL2CPP_METHOD_ATTR bool TransactionOptions_op_Equality_m3173535161 (RuntimeObject * __this /* static, unused */, TransactionOptions_t2865697824  ___o10, TransactionOptions_t2865697824  ___o21, const RuntimeMethod* method);
// System.Boolean System.Transactions.TransactionOptions::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TransactionOptions_Equals_m3142779001 (TransactionOptions_t2865697824 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TimeSpan_GetHashCode_m1939414618 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.Int32 System.Transactions.TransactionOptions::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TransactionOptions_GetHashCode_m1806108975 (TransactionOptions_t2865697824 * __this, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR bool TimeSpan_op_Equality_m1999885032 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method);
// System.TimeSpan System.Transactions.TransactionManager::get_DefaultTimeout()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TransactionManager_get_DefaultTimeout_m708447596 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Transactions.Transaction::op_Inequality(System.Transactions.Transaction,System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_op_Inequality_m2626562296 (RuntimeObject * __this /* static, unused */, Transaction_t3472000926 * ___x0, Transaction_t3472000926 * ___y1, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::set_Scope(System.Transactions.TransactionScope)
extern "C" IL2CPP_METHOD_ATTR void Transaction_set_Scope_m3616494776 (Transaction_t3472000926 * __this, TransactionScope_t3249669472 * ___value0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::set_CurrentInternal(System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR void Transaction_set_CurrentInternal_m3438268600 (RuntimeObject * __this /* static, unused */, Transaction_t3472000926 * ___value0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::CommitInternal()
extern "C" IL2CPP_METHOD_ATTR void Transaction_CommitInternal_m3300735138 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
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
extern "C" IL2CPP_METHOD_ATTR void MonoTODOAttribute__ctor_m2076838029 (MonoTODOAttribute_t4131080586 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MonoTODOAttribute::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void MonoTODOAttribute__ctor_m3846736629 (MonoTODOAttribute_t4131080586 * __this, String_t* ___comment0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___comment0;
		__this->set_comment_0(L_0);
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
// System.Void System.Transactions.Enlistment::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Enlistment__ctor_m1844752968 (Enlistment_t1988529039 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_done_0((bool)0);
		return;
	}
}
// System.Void System.Transactions.Enlistment::Done()
extern "C" IL2CPP_METHOD_ATTR void Enlistment_Done_m261170135 (Enlistment_t1988529039 * __this, const RuntimeMethod* method)
{
	{
		__this->set_done_0((bool)1);
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
// System.Void System.Transactions.PreparingEnlistment::.ctor(System.Transactions.Transaction,System.Transactions.IEnlistmentNotification)
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment__ctor_m3964674037 (PreparingEnlistment_t4199633836 * __this, Transaction_t3472000926 * ___tx0, RuntimeObject* ___enlisted1, const RuntimeMethod* method)
{
	{
		Enlistment__ctor_m1844752968(__this, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_0 = ___tx0;
		__this->set_tx_2(L_0);
		RuntimeObject* L_1 = ___enlisted1;
		__this->set_enlisted_3(L_1);
		return;
	}
}
// System.Void System.Transactions.PreparingEnlistment::ForceRollback()
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment_ForceRollback_m1425842536 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method)
{
	{
		PreparingEnlistment_ForceRollback_m276594954(__this, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.PreparingEnlistment::ForceRollback(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment_ForceRollback_m276594954 (PreparingEnlistment_t4199633836 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	{
		Transaction_t3472000926 * L_0 = __this->get_tx_2();
		Exception_t * L_1 = ___ex0;
		RuntimeObject* L_2 = __this->get_enlisted_3();
		NullCheck(L_0);
		Transaction_Rollback_m3410269003(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.PreparingEnlistment::Prepared()
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment_Prepared_m3120034887 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method)
{
	{
		__this->set_prepared_1((bool)1);
		return;
	}
}
// System.Boolean System.Transactions.PreparingEnlistment::get_IsPrepared()
extern "C" IL2CPP_METHOD_ATTR bool PreparingEnlistment_get_IsPrepared_m428429483 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_prepared_1();
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
// System.Void System.Transactions.SinglePhaseEnlistment::.ctor(System.Transactions.Transaction,System.Transactions.ISinglePhaseNotification)
extern "C" IL2CPP_METHOD_ATTR void SinglePhaseEnlistment__ctor_m943583346 (SinglePhaseEnlistment_t2412016327 * __this, Transaction_t3472000926 * ___tx0, RuntimeObject* ___enlisted1, const RuntimeMethod* method)
{
	{
		Enlistment__ctor_m1844752968(__this, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_0 = ___tx0;
		__this->set_tx_1(L_0);
		RuntimeObject* L_1 = ___enlisted1;
		__this->set_enlisted_2(L_1);
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
// System.Void System.Transactions.Transaction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Transaction__ctor_m1487238460 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction__ctor_m1487238460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		__this->set_dependents_3(L_0);
		List_1_t1748158447 * L_1 = (List_1_t1748158447 *)il2cpp_codegen_object_new(List_1_t1748158447_il2cpp_TypeInfo_var);
		List_1__ctor_m367584120(L_1, /*hidden argument*/List_1__ctor_m367584120_RuntimeMethod_var);
		__this->set_volatiles_4(L_1);
		List_1_t446791853 * L_2 = (List_1_t446791853 *)il2cpp_codegen_object_new(List_1_t446791853_il2cpp_TypeInfo_var);
		List_1__ctor_m2157780702(L_2, /*hidden argument*/List_1__ctor_m2157780702_RuntimeMethod_var);
		__this->set_durables_5(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		TransactionInformation_t2459298917 * L_3 = (TransactionInformation_t2459298917 *)il2cpp_codegen_object_new(TransactionInformation_t2459298917_il2cpp_TypeInfo_var);
		TransactionInformation__ctor_m903375629(L_3, /*hidden argument*/NULL);
		__this->set_info_2(L_3);
		__this->set_level_1(0);
		return;
	}
}
// System.Void System.Transactions.Transaction::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_m1788113767 (Transaction_t3472000926 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_m1788113767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_m1788113767_RuntimeMethod_var);
	}
}
// System.Transactions.Transaction System.Transactions.Transaction::get_Current()
extern "C" IL2CPP_METHOD_ATTR Transaction_t3472000926 * Transaction_get_Current_m1772484047 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Transaction_EnsureIncompleteCurrentScope_m977027993(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_0 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Transactions.Transaction System.Transactions.Transaction::get_CurrentInternal()
extern "C" IL2CPP_METHOD_ATTR Transaction_t3472000926 * Transaction_get_CurrentInternal_m2539383803 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_get_CurrentInternal_m2539383803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_t3472000926 * L_0 = ((Transaction_t3472000926_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Transaction_t3472000926_il2cpp_TypeInfo_var))->get_ambient_0();
		return L_0;
	}
}
// System.Void System.Transactions.Transaction::set_CurrentInternal(System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR void Transaction_set_CurrentInternal_m3438268600 (RuntimeObject * __this /* static, unused */, Transaction_t3472000926 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_set_CurrentInternal_m3438268600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_t3472000926 * L_0 = ___value0;
		((Transaction_t3472000926_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Transaction_t3472000926_il2cpp_TypeInfo_var))->set_ambient_0(L_0);
		return;
	}
}
// System.Transactions.TransactionInformation System.Transactions.Transaction::get_TransactionInformation()
extern "C" IL2CPP_METHOD_ATTR TransactionInformation_t2459298917 * Transaction_get_TransactionInformation_m1885024619 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	{
		Transaction_EnsureIncompleteCurrentScope_m977027993(NULL /*static, unused*/, /*hidden argument*/NULL);
		TransactionInformation_t2459298917 * L_0 = __this->get_info_2();
		return L_0;
	}
}
// System.Void System.Transactions.Transaction::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Transaction_Dispose_m2395642011 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	{
		TransactionInformation_t2459298917 * L_0 = Transaction_get_TransactionInformation_m1885024619(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = TransactionInformation_get_Status_m1160921797(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Transaction_Rollback_m2307478764(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Transactions.Enlistment System.Transactions.Transaction::EnlistVolatile(System.Transactions.IEnlistmentNotification,System.Transactions.EnlistmentOptions)
extern "C" IL2CPP_METHOD_ATTR Enlistment_t1988529039 * Transaction_EnlistVolatile_m3889326812 (Transaction_t3472000926 * __this, RuntimeObject* ___notification0, int32_t ___options1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___notification0;
		int32_t L_1 = ___options1;
		Enlistment_t1988529039 * L_2 = Transaction_EnlistVolatileInternal_m1707882442(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Transactions.Enlistment System.Transactions.Transaction::EnlistVolatileInternal(System.Transactions.IEnlistmentNotification,System.Transactions.EnlistmentOptions)
extern "C" IL2CPP_METHOD_ATTR Enlistment_t1988529039 * Transaction_EnlistVolatileInternal_m1707882442 (Transaction_t3472000926 * __this, RuntimeObject* ___notification0, int32_t ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_EnlistVolatileInternal_m1707882442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_EnsureIncompleteCurrentScope_m977027993(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t1748158447 * L_0 = __this->get_volatiles_4();
		RuntimeObject* L_1 = ___notification0;
		NullCheck(L_0);
		List_1_Add_m3259134144(L_0, L_1, /*hidden argument*/List_1_Add_m3259134144_RuntimeMethod_var);
		Enlistment_t1988529039 * L_2 = (Enlistment_t1988529039 *)il2cpp_codegen_object_new(Enlistment_t1988529039_il2cpp_TypeInfo_var);
		Enlistment__ctor_m1844752968(L_2, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Transactions.Transaction::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_Equals_m3288205670 (Transaction_t3472000926 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_Equals_m3288205670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = Transaction_Equals_m4051287636(__this, ((Transaction_t3472000926 *)IsInstClass((RuntimeObject*)L_0, Transaction_t3472000926_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Transactions.Transaction::Equals(System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_Equals_m4051287636 (Transaction_t3472000926 * __this, Transaction_t3472000926 * ___t0, const RuntimeMethod* method)
{
	int32_t G_B7_0 = 0;
	{
		Transaction_t3472000926 * L_0 = ___t0;
		bool L_1 = il2cpp_codegen_object_reference_equals(L_0, __this);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		Transaction_t3472000926 * L_2 = ___t0;
		bool L_3 = il2cpp_codegen_object_reference_equals(L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		int32_t L_4 = __this->get_level_1();
		Transaction_t3472000926 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_level_1();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_003d;
		}
	}
	{
		TransactionInformation_t2459298917 * L_7 = __this->get_info_2();
		Transaction_t3472000926 * L_8 = ___t0;
		NullCheck(L_8);
		TransactionInformation_t2459298917 * L_9 = L_8->get_info_2();
		G_B7_0 = ((((RuntimeObject*)(TransactionInformation_t2459298917 *)L_7) == ((RuntimeObject*)(TransactionInformation_t2459298917 *)L_9))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B7_0 = 0;
	}

IL_003e:
	{
		return (bool)G_B7_0;
	}
}
// System.Int32 System.Transactions.Transaction::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Transaction_GetHashCode_m2622560793 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_level_1();
		TransactionInformation_t2459298917 * L_1 = __this->get_info_2();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		ArrayList_t2718874744 * L_3 = __this->get_dependents_3();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_0^(int32_t)L_2))^(int32_t)L_4));
	}
}
// System.Void System.Transactions.Transaction::Rollback()
extern "C" IL2CPP_METHOD_ATTR void Transaction_Rollback_m2307478764 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	{
		Transaction_Rollback_m3533416245(__this, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::Rollback(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Transaction_Rollback_m3533416245 (Transaction_t3472000926 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	{
		Transaction_EnsureIncompleteCurrentScope_m977027993(NULL /*static, unused*/, /*hidden argument*/NULL);
		Exception_t * L_0 = ___ex0;
		Transaction_Rollback_m3410269003(__this, L_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::Rollback(System.Exception,System.Transactions.IEnlistmentNotification)
extern "C" IL2CPP_METHOD_ATTR void Transaction_Rollback_m3410269003 (Transaction_t3472000926 * __this, Exception_t * ___ex0, RuntimeObject* ___enlisted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_Rollback_m3410269003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enlistment_t1988529039 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Enumerator_t3637402324  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_aborted_8();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		TransactionInformation_t2459298917 * L_1 = __this->get_info_2();
		NullCheck(L_1);
		int32_t L_2 = TransactionInformation_get_Status_m1160921797(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		TransactionException_t1281392668 * L_3 = (TransactionException_t1281392668 *)il2cpp_codegen_object_new(TransactionException_t1281392668_il2cpp_TypeInfo_var);
		TransactionException__ctor_m2213981865(L_3, _stringLiteral3658361563, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Transaction_Rollback_m3410269003_RuntimeMethod_var);
	}

IL_0028:
	{
		Exception_t * L_4 = ___ex0;
		__this->set_innerException_10(L_4);
		Enlistment_t1988529039 * L_5 = (Enlistment_t1988529039 *)il2cpp_codegen_object_new(Enlistment_t1988529039_il2cpp_TypeInfo_var);
		Enlistment__ctor_m1844752968(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		List_1_t1748158447 * L_6 = __this->get_volatiles_4();
		NullCheck(L_6);
		Enumerator_t3637402324  L_7 = List_1_GetEnumerator_m197419245(L_6, /*hidden argument*/List_1_GetEnumerator_m197419245_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_0046:
		{
			RuntimeObject* L_8 = Enumerator_get_Current_m2109621835((Enumerator_t3637402324 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2109621835_RuntimeMethod_var);
			V_1 = L_8;
			RuntimeObject* L_9 = V_1;
			RuntimeObject* L_10 = ___enlisted1;
			if ((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)L_10)))
			{
				goto IL_005c;
			}
		}

IL_0055:
		{
			RuntimeObject* L_11 = V_1;
			Enlistment_t1988529039 * L_12 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker1< Enlistment_t1988529039 * >::Invoke(2 /* System.Void System.Transactions.IEnlistmentNotification::Rollback(System.Transactions.Enlistment) */, IEnlistmentNotification_t276083705_il2cpp_TypeInfo_var, L_11, L_12);
		}

IL_005c:
		{
			bool L_13 = Enumerator_MoveNext_m2553881418((Enumerator_t3637402324 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2553881418_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0046;
			}
		}

IL_0068:
		{
			IL2CPP_LEAVE(0x79, FINALLY_006d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006d;
	}

FINALLY_006d:
	{ // begin finally (depth: 1)
		Enumerator_t3637402324  L_14 = V_2;
		Enumerator_t3637402324  L_15 = L_14;
		RuntimeObject * L_16 = Box(Enumerator_t3637402324_il2cpp_TypeInfo_var, &L_15);
		NullCheck((RuntimeObject*)L_16);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		IL2CPP_END_FINALLY(109)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(109)
	{
		IL2CPP_JUMP_TBL(0x79, IL_0079)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0079:
	{
		List_1_t446791853 * L_17 = __this->get_durables_5();
		NullCheck(L_17);
		int32_t L_18 = List_1_get_Count_m3966086873(L_17, /*hidden argument*/List_1_get_Count_m3966086873_RuntimeMethod_var);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		List_1_t446791853 * L_19 = __this->get_durables_5();
		NullCheck(L_19);
		RuntimeObject* L_20 = List_1_get_Item_m673984641(L_19, 0, /*hidden argument*/List_1_get_Item_m673984641_RuntimeMethod_var);
		RuntimeObject* L_21 = ___enlisted1;
		if ((((RuntimeObject*)(RuntimeObject*)L_20) == ((RuntimeObject*)(RuntimeObject*)L_21)))
		{
			goto IL_00ae;
		}
	}
	{
		List_1_t446791853 * L_22 = __this->get_durables_5();
		NullCheck(L_22);
		RuntimeObject* L_23 = List_1_get_Item_m673984641(L_22, 0, /*hidden argument*/List_1_get_Item_m673984641_RuntimeMethod_var);
		Enlistment_t1988529039 * L_24 = V_0;
		NullCheck(L_23);
		InterfaceActionInvoker1< Enlistment_t1988529039 * >::Invoke(2 /* System.Void System.Transactions.IEnlistmentNotification::Rollback(System.Transactions.Enlistment) */, IEnlistmentNotification_t276083705_il2cpp_TypeInfo_var, L_23, L_24);
	}

IL_00ae:
	{
		Transaction_set_Aborted_m541403278(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::set_Aborted(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transaction_set_Aborted_m541403278 (Transaction_t3472000926 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_aborted_8(L_0);
		bool L_1 = __this->get_aborted_8();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		TransactionInformation_t2459298917 * L_2 = __this->get_info_2();
		NullCheck(L_2);
		TransactionInformation_set_Status_m1910598492(L_2, 2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Transactions.TransactionScope System.Transactions.Transaction::get_Scope()
extern "C" IL2CPP_METHOD_ATTR TransactionScope_t3249669472 * Transaction_get_Scope_m2234757998 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	{
		TransactionScope_t3249669472 * L_0 = __this->get_scope_9();
		return L_0;
	}
}
// System.Void System.Transactions.Transaction::set_Scope(System.Transactions.TransactionScope)
extern "C" IL2CPP_METHOD_ATTR void Transaction_set_Scope_m3616494776 (Transaction_t3472000926 * __this, TransactionScope_t3249669472 * ___value0, const RuntimeMethod* method)
{
	{
		TransactionScope_t3249669472 * L_0 = ___value0;
		__this->set_scope_9(L_0);
		return;
	}
}
// System.Void System.Transactions.Transaction::CommitInternal()
extern "C" IL2CPP_METHOD_ATTR void Transaction_CommitInternal_m3300735138 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_CommitInternal_m3300735138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_committed_7();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = __this->get_committing_6();
		if (!L_1)
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_2, _stringLiteral4289221870, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Transaction_CommitInternal_m3300735138_RuntimeMethod_var);
	}

IL_0021:
	{
		__this->set_committing_6((bool)1);
		Transaction_DoCommit_m4142857842(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::DoCommit()
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoCommit_m4142857842 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_DoCommit_m4142857842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		TransactionScope_t3249669472 * L_0 = Transaction_get_Scope_m2234757998(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Transaction_Rollback_m3410269003(__this, (Exception_t *)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		Transaction_CheckAborted_m2334107562(__this, /*hidden argument*/NULL);
	}

IL_0019:
	{
		List_1_t1748158447 * L_1 = __this->get_volatiles_4();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m2597957279(L_1, /*hidden argument*/List_1_get_Count_m2597957279_RuntimeMethod_var);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0060;
		}
	}
	{
		List_1_t446791853 * L_3 = __this->get_durables_5();
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m3966086873(L_3, /*hidden argument*/List_1_get_Count_m3966086873_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0060;
		}
	}
	{
		List_1_t1748158447 * L_5 = __this->get_volatiles_4();
		NullCheck(L_5);
		RuntimeObject* L_6 = List_1_get_Item_m1029352870(L_5, 0, /*hidden argument*/List_1_get_Item_m1029352870_RuntimeMethod_var);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, ISinglePhaseNotification_t3269684407_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		Transaction_DoSingleCommit_m37203013(__this, L_8, /*hidden argument*/NULL);
		Transaction_Complete_m1999140662(__this, /*hidden argument*/NULL);
		return;
	}

IL_0060:
	{
		List_1_t1748158447 * L_9 = __this->get_volatiles_4();
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Count_m2597957279(L_9, /*hidden argument*/List_1_get_Count_m2597957279_RuntimeMethod_var);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		Transaction_DoPreparePhase_m3654094297(__this, /*hidden argument*/NULL);
	}

IL_0077:
	{
		List_1_t446791853 * L_11 = __this->get_durables_5();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m3966086873(L_11, /*hidden argument*/List_1_get_Count_m3966086873_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_009a;
		}
	}
	{
		List_1_t446791853 * L_13 = __this->get_durables_5();
		NullCheck(L_13);
		RuntimeObject* L_14 = List_1_get_Item_m673984641(L_13, 0, /*hidden argument*/List_1_get_Item_m673984641_RuntimeMethod_var);
		Transaction_DoSingleCommit_m37203013(__this, L_14, /*hidden argument*/NULL);
	}

IL_009a:
	{
		List_1_t1748158447 * L_15 = __this->get_volatiles_4();
		NullCheck(L_15);
		int32_t L_16 = List_1_get_Count_m2597957279(L_15, /*hidden argument*/List_1_get_Count_m2597957279_RuntimeMethod_var);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		Transaction_DoCommitPhase_m3733774821(__this, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		Transaction_Complete_m1999140662(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::Complete()
extern "C" IL2CPP_METHOD_ATTR void Transaction_Complete_m1999140662 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	{
		__this->set_committing_6((bool)0);
		__this->set_committed_7((bool)1);
		bool L_0 = __this->get_aborted_8();
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		TransactionInformation_t2459298917 * L_1 = __this->get_info_2();
		NullCheck(L_1);
		TransactionInformation_set_Status_m1910598492(L_1, 1, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void System.Transactions.Transaction::DoPreparePhase()
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoPreparePhase_m3654094297 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_DoPreparePhase_m3654094297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PreparingEnlistment_t4199633836 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Enumerator_t3637402324  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1748158447 * L_0 = __this->get_volatiles_4();
		NullCheck(L_0);
		Enumerator_t3637402324  L_1 = List_1_GetEnumerator_m197419245(L_0, /*hidden argument*/List_1_GetEnumerator_m197419245_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_0011:
		{
			RuntimeObject* L_2 = Enumerator_get_Current_m2109621835((Enumerator_t3637402324 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2109621835_RuntimeMethod_var);
			V_1 = L_2;
			RuntimeObject* L_3 = V_1;
			PreparingEnlistment_t4199633836 * L_4 = (PreparingEnlistment_t4199633836 *)il2cpp_codegen_object_new(PreparingEnlistment_t4199633836_il2cpp_TypeInfo_var);
			PreparingEnlistment__ctor_m3964674037(L_4, __this, L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			RuntimeObject* L_5 = V_1;
			PreparingEnlistment_t4199633836 * L_6 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker1< PreparingEnlistment_t4199633836 * >::Invoke(1 /* System.Void System.Transactions.IEnlistmentNotification::Prepare(System.Transactions.PreparingEnlistment) */, IEnlistmentNotification_t276083705_il2cpp_TypeInfo_var, L_5, L_6);
			PreparingEnlistment_t4199633836 * L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = PreparingEnlistment_get_IsPrepared_m428429483(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_003f;
			}
		}

IL_0033:
		{
			Transaction_set_Aborted_m541403278(__this, (bool)1, /*hidden argument*/NULL);
			goto IL_004b;
		}

IL_003f:
		{
			bool L_9 = Enumerator_MoveNext_m2553881418((Enumerator_t3637402324 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2553881418_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0011;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		Enumerator_t3637402324  L_10 = V_2;
		Enumerator_t3637402324  L_11 = L_10;
		RuntimeObject * L_12 = Box(Enumerator_t3637402324_il2cpp_TypeInfo_var, &L_11);
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		Transaction_CheckAborted_m2334107562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::DoCommitPhase()
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoCommitPhase_m3733774821 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_DoCommitPhase_m3733774821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Enumerator_t3637402324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enlistment_t1988529039 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1748158447 * L_0 = __this->get_volatiles_4();
		NullCheck(L_0);
		Enumerator_t3637402324  L_1 = List_1_GetEnumerator_m197419245(L_0, /*hidden argument*/List_1_GetEnumerator_m197419245_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_0011:
		{
			RuntimeObject* L_2 = Enumerator_get_Current_m2109621835((Enumerator_t3637402324 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2109621835_RuntimeMethod_var);
			V_0 = L_2;
			Enlistment_t1988529039 * L_3 = (Enlistment_t1988529039 *)il2cpp_codegen_object_new(Enlistment_t1988529039_il2cpp_TypeInfo_var);
			Enlistment__ctor_m1844752968(L_3, /*hidden argument*/NULL);
			V_2 = L_3;
			RuntimeObject* L_4 = V_0;
			Enlistment_t1988529039 * L_5 = V_2;
			NullCheck(L_4);
			InterfaceActionInvoker1< Enlistment_t1988529039 * >::Invoke(0 /* System.Void System.Transactions.IEnlistmentNotification::Commit(System.Transactions.Enlistment) */, IEnlistmentNotification_t276083705_il2cpp_TypeInfo_var, L_4, L_5);
		}

IL_0026:
		{
			bool L_6 = Enumerator_MoveNext_m2553881418((Enumerator_t3637402324 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2553881418_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0011;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_t3637402324  L_7 = V_1;
		Enumerator_t3637402324  L_8 = L_7;
		RuntimeObject * L_9 = Box(Enumerator_t3637402324_il2cpp_TypeInfo_var, &L_8);
		NullCheck((RuntimeObject*)L_9);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Transactions.Transaction::DoSingleCommit(System.Transactions.ISinglePhaseNotification)
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoSingleCommit_m37203013 (Transaction_t3472000926 * __this, RuntimeObject* ___single0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_DoSingleCommit_m37203013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SinglePhaseEnlistment_t2412016327 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___single0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___single0;
		SinglePhaseEnlistment_t2412016327 * L_2 = (SinglePhaseEnlistment_t2412016327 *)il2cpp_codegen_object_new(SinglePhaseEnlistment_t2412016327_il2cpp_TypeInfo_var);
		SinglePhaseEnlistment__ctor_m943583346(L_2, __this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___single0;
		SinglePhaseEnlistment_t2412016327 * L_4 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker1< SinglePhaseEnlistment_t2412016327 * >::Invoke(0 /* System.Void System.Transactions.ISinglePhaseNotification::SinglePhaseCommit(System.Transactions.SinglePhaseEnlistment) */, ISinglePhaseNotification_t3269684407_il2cpp_TypeInfo_var, L_3, L_4);
		Transaction_CheckAborted_m2334107562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::CheckAborted()
extern "C" IL2CPP_METHOD_ATTR void Transaction_CheckAborted_m2334107562 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_CheckAborted_m2334107562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_aborted_8();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_1 = __this->get_innerException_10();
		TransactionAbortedException_t2116885608 * L_2 = (TransactionAbortedException_t2116885608 *)il2cpp_codegen_object_new(TransactionAbortedException_t2116885608_il2cpp_TypeInfo_var);
		TransactionAbortedException__ctor_m2107813208(L_2, _stringLiteral3179484437, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Transaction_CheckAborted_m2334107562_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
// System.Void System.Transactions.Transaction::EnsureIncompleteCurrentScope()
extern "C" IL2CPP_METHOD_ATTR void Transaction_EnsureIncompleteCurrentScope_m977027993 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_EnsureIncompleteCurrentScope_m977027993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_t3472000926 * L_0 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = Transaction_op_Equality_m567471953(NULL /*static, unused*/, L_0, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		Transaction_t3472000926 * L_2 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		TransactionScope_t3249669472 * L_3 = Transaction_get_Scope_m2234757998(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		Transaction_t3472000926 * L_4 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		TransactionScope_t3249669472 * L_5 = Transaction_get_Scope_m2234757998(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = TransactionScope_get_IsComplete_m171974465(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, _stringLiteral2911134571, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, Transaction_EnsureIncompleteCurrentScope_m977027993_RuntimeMethod_var);
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean System.Transactions.Transaction::op_Equality(System.Transactions.Transaction,System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_op_Equality_m567471953 (RuntimeObject * __this /* static, unused */, Transaction_t3472000926 * ___x0, Transaction_t3472000926 * ___y1, const RuntimeMethod* method)
{
	{
		Transaction_t3472000926 * L_0 = ___x0;
		bool L_1 = il2cpp_codegen_object_reference_equals(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Transaction_t3472000926 * L_2 = ___y1;
		bool L_3 = il2cpp_codegen_object_reference_equals(L_2, NULL);
		return L_3;
	}

IL_0014:
	{
		Transaction_t3472000926 * L_4 = ___x0;
		Transaction_t3472000926 * L_5 = ___y1;
		NullCheck(L_4);
		bool L_6 = Transaction_Equals_m4051287636(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean System.Transactions.Transaction::op_Inequality(System.Transactions.Transaction,System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_op_Inequality_m2626562296 (RuntimeObject * __this /* static, unused */, Transaction_t3472000926 * ___x0, Transaction_t3472000926 * ___y1, const RuntimeMethod* method)
{
	{
		Transaction_t3472000926 * L_0 = ___x0;
		Transaction_t3472000926 * L_1 = ___y1;
		bool L_2 = Transaction_op_Equality_m567471953(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Void System.Transactions.TransactionAbortedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionAbortedException__ctor_m2820384312 (TransactionAbortedException_t2116885608 * __this, const RuntimeMethod* method)
{
	{
		TransactionException__ctor_m1338117290(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionAbortedException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void TransactionAbortedException__ctor_m2107813208 (TransactionAbortedException_t2116885608 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		TransactionException__ctor_m2285503530(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionAbortedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TransactionAbortedException__ctor_m1248569569 (TransactionAbortedException_t2116885608 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		TransactionException__ctor_m96674906(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Transactions.TransactionException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m1338117290 (TransactionException_t1281392668 * __this, const RuntimeMethod* method)
{
	{
		SystemException__ctor_m4274309232(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m2213981865 (TransactionException_t1281392668 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m2285503530 (TransactionException_t1281392668 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		SystemException__ctor_m4132668650(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m96674906 (TransactionException_t1281392668 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		SystemException__ctor_m1515048899(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Transactions.TransactionInformation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionInformation__ctor_m903375629 (TransactionInformation_t2459298917 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionInformation__ctor_m903375629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_11();
		__this->set_dtcId_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_status_3(0);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		DateTime_t3738529785  L_2 = DateTime_ToUniversalTime_m1945318289((DateTime_t3738529785 *)(&V_0), /*hidden argument*/NULL);
		__this->set_creation_time_2(L_2);
		Guid_t  L_3 = Guid_NewGuid_m923091018(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = Guid_ToString_m3279186591((Guid_t *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, L_4, _stringLiteral3451500438, /*hidden argument*/NULL);
		__this->set_local_id_0(L_5);
		return;
	}
}
// System.Transactions.TransactionStatus System.Transactions.TransactionInformation::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t TransactionInformation_get_Status_m1160921797 (TransactionInformation_t2459298917 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_status_3();
		return L_0;
	}
}
// System.Void System.Transactions.TransactionInformation::set_Status(System.Transactions.TransactionStatus)
extern "C" IL2CPP_METHOD_ATTR void TransactionInformation_set_Status_m1910598492 (TransactionInformation_t2459298917 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_status_3(L_0);
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
// System.Void System.Transactions.TransactionManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionManager__cctor_m2466764276 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionManager__cctor_m2466764276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_t881159249  L_0;
		memset(&L_0, 0, sizeof(L_0));
		TimeSpan__ctor_m3689759052((&L_0), 0, 1, 0, /*hidden argument*/NULL);
		((TransactionManager_t2760750674_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t2760750674_il2cpp_TypeInfo_var))->set_defaultTimeout_0(L_0);
		TimeSpan_t881159249  L_1;
		memset(&L_1, 0, sizeof(L_1));
		TimeSpan__ctor_m3689759052((&L_1), 0, ((int32_t)10), 0, /*hidden argument*/NULL);
		((TransactionManager_t2760750674_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t2760750674_il2cpp_TypeInfo_var))->set_maxTimeout_1(L_1);
		return;
	}
}
// System.TimeSpan System.Transactions.TransactionManager::get_DefaultTimeout()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TransactionManager_get_DefaultTimeout_m708447596 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionManager_get_DefaultTimeout_m708447596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TransactionManager_t2760750674_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_0 = ((TransactionManager_t2760750674_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t2760750674_il2cpp_TypeInfo_var))->get_defaultTimeout_0();
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
// System.Void System.Transactions.TransactionOptions::.ctor(System.Transactions.IsolationLevel,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR void TransactionOptions__ctor_m175069428 (TransactionOptions_t2865697824 * __this, int32_t ___level0, TimeSpan_t881159249  ___timeout1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___level0;
		__this->set_level_0(L_0);
		TimeSpan_t881159249  L_1 = ___timeout1;
		__this->set_timeout_1(L_1);
		return;
	}
}
extern "C"  void TransactionOptions__ctor_m175069428_AdjustorThunk (RuntimeObject * __this, int32_t ___level0, TimeSpan_t881159249  ___timeout1, const RuntimeMethod* method)
{
	TransactionOptions_t2865697824 * _thisAdjusted = reinterpret_cast<TransactionOptions_t2865697824 *>(__this + 1);
	TransactionOptions__ctor_m175069428(_thisAdjusted, ___level0, ___timeout1, method);
}
// System.Boolean System.Transactions.TransactionOptions::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TransactionOptions_Equals_m3142779001 (TransactionOptions_t2865697824 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionOptions_Equals_m3142779001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TransactionOptions_t2865697824_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = TransactionOptions_op_Equality_m3173535161(NULL /*static, unused*/, (*(TransactionOptions_t2865697824 *)__this), ((*(TransactionOptions_t2865697824 *)((TransactionOptions_t2865697824 *)UnBox(L_1, TransactionOptions_t2865697824_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool TransactionOptions_Equals_m3142779001_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	TransactionOptions_t2865697824 * _thisAdjusted = reinterpret_cast<TransactionOptions_t2865697824 *>(__this + 1);
	return TransactionOptions_Equals_m3142779001(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.Transactions.TransactionOptions::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TransactionOptions_GetHashCode_m1806108975 (TransactionOptions_t2865697824 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_level_0();
		TimeSpan_t881159249 * L_1 = __this->get_address_of_timeout_1();
		int32_t L_2 = TimeSpan_GetHashCode_m1939414618((TimeSpan_t881159249 *)L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0^(int32_t)L_2));
	}
}
extern "C"  int32_t TransactionOptions_GetHashCode_m1806108975_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransactionOptions_t2865697824 * _thisAdjusted = reinterpret_cast<TransactionOptions_t2865697824 *>(__this + 1);
	return TransactionOptions_GetHashCode_m1806108975(_thisAdjusted, method);
}
// System.Boolean System.Transactions.TransactionOptions::op_Equality(System.Transactions.TransactionOptions,System.Transactions.TransactionOptions)
extern "C" IL2CPP_METHOD_ATTR bool TransactionOptions_op_Equality_m3173535161 (RuntimeObject * __this /* static, unused */, TransactionOptions_t2865697824  ___o10, TransactionOptions_t2865697824  ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionOptions_op_Equality_m3173535161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (&___o10)->get_level_0();
		int32_t L_1 = (&___o21)->get_level_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0028;
		}
	}
	{
		TimeSpan_t881159249  L_2 = (&___o10)->get_timeout_1();
		TimeSpan_t881159249  L_3 = (&___o21)->get_timeout_1();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_4 = TimeSpan_op_Equality_m1999885032(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		return (bool)G_B3_0;
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
// System.Void System.Transactions.TransactionScope::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionScope__cctor_m3418824945 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionScope__cctor_m3418824945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TransactionManager_t2760750674_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_0 = TransactionManager_get_DefaultTimeout_m708447596(NULL /*static, unused*/, /*hidden argument*/NULL);
		TransactionOptions_t2865697824  L_1;
		memset(&L_1, 0, sizeof(L_1));
		TransactionOptions__ctor_m175069428((&L_1), 0, L_0, /*hidden argument*/NULL);
		((TransactionScope_t3249669472_StaticFields*)il2cpp_codegen_static_fields_for(TransactionScope_t3249669472_il2cpp_TypeInfo_var))->set_defaultOptions_0(L_1);
		return;
	}
}
// System.Boolean System.Transactions.TransactionScope::get_IsComplete()
extern "C" IL2CPP_METHOD_ATTR bool TransactionScope_get_IsComplete_m171974465 (TransactionScope_t3249669472 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_completed_6();
		return L_0;
	}
}
// System.Void System.Transactions.TransactionScope::Dispose()
extern "C" IL2CPP_METHOD_ATTR void TransactionScope_Dispose_m1851654666 (TransactionScope_t3249669472 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionScope_Dispose_m1851654666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_disposed_5();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->set_disposed_5((bool)1);
		TransactionScope_t3249669472 * L_1 = __this->get_parentScope_3();
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		TransactionScope_t3249669472 * L_2 = __this->get_parentScope_3();
		TransactionScope_t3249669472 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_nested_4();
		NullCheck(L_3);
		L_3->set_nested_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
	}

IL_0031:
	{
		int32_t L_5 = __this->get_nested_4();
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		Transaction_t3472000926 * L_6 = __this->get_transaction_1();
		NullCheck(L_6);
		Transaction_Rollback_m2307478764(L_6, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, _stringLiteral955001179, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, TransactionScope_Dispose_m1851654666_RuntimeMethod_var);
	}

IL_0053:
	{
		Transaction_t3472000926 * L_8 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_9 = __this->get_transaction_1();
		bool L_10 = Transaction_op_Inequality_m2626562296(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00a9;
		}
	}
	{
		Transaction_t3472000926 * L_11 = __this->get_transaction_1();
		bool L_12 = Transaction_op_Inequality_m2626562296(NULL /*static, unused*/, L_11, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		Transaction_t3472000926 * L_13 = __this->get_transaction_1();
		NullCheck(L_13);
		Transaction_Rollback_m2307478764(L_13, /*hidden argument*/NULL);
	}

IL_0084:
	{
		Transaction_t3472000926 * L_14 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_15 = Transaction_op_Inequality_m2626562296(NULL /*static, unused*/, L_14, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009e;
		}
	}
	{
		Transaction_t3472000926 * L_16 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transaction_Rollback_m2307478764(L_16, /*hidden argument*/NULL);
	}

IL_009e:
	{
		InvalidOperationException_t56020091 * L_17 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_17, _stringLiteral1447952811, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, TransactionScope_Dispose_m1851654666_RuntimeMethod_var);
	}

IL_00a9:
	{
		Transaction_t3472000926 * L_18 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_19 = __this->get_oldTransaction_2();
		bool L_20 = Transaction_op_Equality_m567471953(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e0;
		}
	}
	{
		Transaction_t3472000926 * L_21 = __this->get_oldTransaction_2();
		bool L_22 = Transaction_op_Inequality_m2626562296(NULL /*static, unused*/, L_21, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00e0;
		}
	}
	{
		Transaction_t3472000926 * L_23 = __this->get_oldTransaction_2();
		TransactionScope_t3249669472 * L_24 = __this->get_parentScope_3();
		NullCheck(L_23);
		Transaction_set_Scope_m3616494776(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00e0:
	{
		Transaction_t3472000926 * L_25 = __this->get_oldTransaction_2();
		Transaction_set_CurrentInternal_m3438268600(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_26 = __this->get_transaction_1();
		bool L_27 = Transaction_op_Equality_m567471953(NULL /*static, unused*/, L_26, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fd;
		}
	}
	{
		return;
	}

IL_00fd:
	{
		Transaction_t3472000926 * L_28 = __this->get_transaction_1();
		NullCheck(L_28);
		Transaction_set_Scope_m3616494776(L_28, (TransactionScope_t3249669472 *)NULL, /*hidden argument*/NULL);
		bool L_29 = TransactionScope_get_IsComplete_m171974465(__this, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0120;
		}
	}
	{
		Transaction_t3472000926 * L_30 = __this->get_transaction_1();
		NullCheck(L_30);
		Transaction_Rollback_m2307478764(L_30, /*hidden argument*/NULL);
		return;
	}

IL_0120:
	{
		bool L_31 = __this->get_isRoot_7();
		if (L_31)
		{
			goto IL_012c;
		}
	}
	{
		return;
	}

IL_012c:
	{
		Transaction_t3472000926 * L_32 = __this->get_transaction_1();
		NullCheck(L_32);
		Transaction_CommitInternal_m3300735138(L_32, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
