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


// Mono.Security.StrongName
struct StrongName_t4093849377;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2103185493;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t243502644;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.EventHandler
struct EventHandler_t1348719766;
// System.Exception
struct Exception_t;
// System.Exception[]
struct ExceptionU5BU5D_t2535001212;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.TextReader
struct TextReader_t283511965;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Reflection.Emit.CustomAttributeBuilder[]
struct CustomAttributeBuilderU5BU5D_t2951373564;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t731887691;
// System.Reflection.Emit.ModuleBuilder[]
struct ModuleBuilderU5BU5D_t2441092650;
// System.Reflection.Emit.MonoResource[]
struct MonoResourceU5BU5D_t979189380;
// System.Reflection.Emit.MonoWin32Resource[]
struct MonoWin32ResourceU5BU5D_t4084032906;
// System.Reflection.Emit.RefEmitPermissionSet[]
struct RefEmitPermissionSetU5BU5D_t567451178;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1787725097;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361;
// System.Reflection.Module
struct Module_t2987026101;
// System.Reflection.Module[]
struct ModuleU5BU5D_t4238763736;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t2155025054;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t3411219591;
// System.Reflection.TypeFilter
struct TypeFilter_t2356120900;
// System.Resources.Win32VersionResource
struct Win32VersionResource_t1367628464;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.String
struct String_t;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Version
struct Version_t3456873960;
// System.Void
struct Void_t1185182177;




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
#ifndef PATH_T1605229823_H
#define PATH_T1605229823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Path
struct  Path_t1605229823  : public RuntimeObject
{
public:

public:
};

struct Path_t1605229823_StaticFields
{
public:
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t3528271667* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t3528271667* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;

public:
	inline static int32_t get_offset_of_InvalidPathChars_0() { return static_cast<int32_t>(offsetof(Path_t1605229823_StaticFields, ___InvalidPathChars_0)); }
	inline CharU5BU5D_t3528271667* get_InvalidPathChars_0() const { return ___InvalidPathChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_InvalidPathChars_0() { return &___InvalidPathChars_0; }
	inline void set_InvalidPathChars_0(CharU5BU5D_t3528271667* value)
	{
		___InvalidPathChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___InvalidPathChars_0), value);
	}

	inline static int32_t get_offset_of_AltDirectorySeparatorChar_1() { return static_cast<int32_t>(offsetof(Path_t1605229823_StaticFields, ___AltDirectorySeparatorChar_1)); }
	inline Il2CppChar get_AltDirectorySeparatorChar_1() const { return ___AltDirectorySeparatorChar_1; }
	inline Il2CppChar* get_address_of_AltDirectorySeparatorChar_1() { return &___AltDirectorySeparatorChar_1; }
	inline void set_AltDirectorySeparatorChar_1(Il2CppChar value)
	{
		___AltDirectorySeparatorChar_1 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorChar_2() { return static_cast<int32_t>(offsetof(Path_t1605229823_StaticFields, ___DirectorySeparatorChar_2)); }
	inline Il2CppChar get_DirectorySeparatorChar_2() const { return ___DirectorySeparatorChar_2; }
	inline Il2CppChar* get_address_of_DirectorySeparatorChar_2() { return &___DirectorySeparatorChar_2; }
	inline void set_DirectorySeparatorChar_2(Il2CppChar value)
	{
		___DirectorySeparatorChar_2 = value;
	}

	inline static int32_t get_offset_of_PathSeparator_3() { return static_cast<int32_t>(offsetof(Path_t1605229823_StaticFields, ___PathSeparator_3)); }
	inline Il2CppChar get_PathSeparator_3() const { return ___PathSeparator_3; }
	inline Il2CppChar* get_address_of_PathSeparator_3() { return &___PathSeparator_3; }
	inline void set_PathSeparator_3(Il2CppChar value)
	{
		___PathSeparator_3 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorStr_4() { return static_cast<int32_t>(offsetof(Path_t1605229823_StaticFields, ___DirectorySeparatorStr_4)); }
	inline String_t* get_DirectorySeparatorStr_4() const { return ___DirectorySeparatorStr_4; }
	inline String_t** get_address_of_DirectorySeparatorStr_4() { return &___DirectorySeparatorStr_4; }
	inline void set_DirectorySeparatorStr_4(String_t* value)
	{
		___DirectorySeparatorStr_4 = value;
		Il2CppCodeGenWriteBarrier((&___DirectorySeparatorStr_4), value);
	}

	inline static int32_t get_offset_of_VolumeSeparatorChar_5() { return static_cast<int32_t>(offsetof(Path_t1605229823_StaticFields, ___VolumeSeparatorChar_5)); }
	inline Il2CppChar get_VolumeSeparatorChar_5() const { return ___VolumeSeparatorChar_5; }
	inline Il2CppChar* get_address_of_VolumeSeparatorChar_5() { return &___VolumeSeparatorChar_5; }
	inline void set_VolumeSeparatorChar_5(Il2CppChar value)
	{
		___VolumeSeparatorChar_5 = value;
	}

	inline static int32_t get_offset_of_PathSeparatorChars_6() { return static_cast<int32_t>(offsetof(Path_t1605229823_StaticFields, ___PathSeparatorChars_6)); }
	inline CharU5BU5D_t3528271667* get_PathSeparatorChars_6() const { return ___PathSeparatorChars_6; }
	inline CharU5BU5D_t3528271667** get_address_of_PathSeparatorChars_6() { return &___PathSeparatorChars_6; }
	inline void set_PathSeparatorChars_6(CharU5BU5D_t3528271667* value)
	{
		___PathSeparatorChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___PathSeparatorChars_6), value);
	}

	inline static int32_t get_offset_of_dirEqualsVolume_7() { return static_cast<int32_t>(offsetof(Path_t1605229823_StaticFields, ___dirEqualsVolume_7)); }
	inline bool get_dirEqualsVolume_7() const { return ___dirEqualsVolume_7; }
	inline bool* get_address_of_dirEqualsVolume_7() { return &___dirEqualsVolume_7; }
	inline void set_dirEqualsVolume_7(bool value)
	{
		___dirEqualsVolume_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATH_T1605229823_H
#ifndef SEARCHPATTERN_T3793128359_H
#define SEARCHPATTERN_T3793128359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SearchPattern
struct  SearchPattern_t3793128359  : public RuntimeObject
{
public:

public:
};

struct SearchPattern_t3793128359_StaticFields
{
public:
	// System.Char[] System.IO.SearchPattern::WildcardChars
	CharU5BU5D_t3528271667* ___WildcardChars_0;
	// System.Char[] System.IO.SearchPattern::InvalidChars
	CharU5BU5D_t3528271667* ___InvalidChars_1;

public:
	inline static int32_t get_offset_of_WildcardChars_0() { return static_cast<int32_t>(offsetof(SearchPattern_t3793128359_StaticFields, ___WildcardChars_0)); }
	inline CharU5BU5D_t3528271667* get_WildcardChars_0() const { return ___WildcardChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_WildcardChars_0() { return &___WildcardChars_0; }
	inline void set_WildcardChars_0(CharU5BU5D_t3528271667* value)
	{
		___WildcardChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___WildcardChars_0), value);
	}

	inline static int32_t get_offset_of_InvalidChars_1() { return static_cast<int32_t>(offsetof(SearchPattern_t3793128359_StaticFields, ___InvalidChars_1)); }
	inline CharU5BU5D_t3528271667* get_InvalidChars_1() const { return ___InvalidChars_1; }
	inline CharU5BU5D_t3528271667** get_address_of_InvalidChars_1() { return &___InvalidChars_1; }
	inline void set_InvalidChars_1(CharU5BU5D_t3528271667* value)
	{
		___InvalidChars_1 = value;
		Il2CppCodeGenWriteBarrier((&___InvalidChars_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEARCHPATTERN_T3793128359_H
#ifndef STREAMASYNCRESULT_T780248512_H
#define STREAMASYNCRESULT_T780248512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamAsyncResult
struct  StreamAsyncResult_t780248512  : public RuntimeObject
{
public:
	// System.Object System.IO.StreamAsyncResult::state
	RuntimeObject * ___state_0;
	// System.Boolean System.IO.StreamAsyncResult::completed
	bool ___completed_1;
	// System.Boolean System.IO.StreamAsyncResult::done
	bool ___done_2;
	// System.Exception System.IO.StreamAsyncResult::exc
	Exception_t * ___exc_3;
	// System.Int32 System.IO.StreamAsyncResult::nbytes
	int32_t ___nbytes_4;
	// System.Threading.ManualResetEvent System.IO.StreamAsyncResult::wh
	ManualResetEvent_t451242010 * ___wh_5;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t780248512, ___state_0)); }
	inline RuntimeObject * get_state_0() const { return ___state_0; }
	inline RuntimeObject ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(RuntimeObject * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((&___state_0), value);
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t780248512, ___completed_1)); }
	inline bool get_completed_1() const { return ___completed_1; }
	inline bool* get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(bool value)
	{
		___completed_1 = value;
	}

	inline static int32_t get_offset_of_done_2() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t780248512, ___done_2)); }
	inline bool get_done_2() const { return ___done_2; }
	inline bool* get_address_of_done_2() { return &___done_2; }
	inline void set_done_2(bool value)
	{
		___done_2 = value;
	}

	inline static int32_t get_offset_of_exc_3() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t780248512, ___exc_3)); }
	inline Exception_t * get_exc_3() const { return ___exc_3; }
	inline Exception_t ** get_address_of_exc_3() { return &___exc_3; }
	inline void set_exc_3(Exception_t * value)
	{
		___exc_3 = value;
		Il2CppCodeGenWriteBarrier((&___exc_3), value);
	}

	inline static int32_t get_offset_of_nbytes_4() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t780248512, ___nbytes_4)); }
	inline int32_t get_nbytes_4() const { return ___nbytes_4; }
	inline int32_t* get_address_of_nbytes_4() { return &___nbytes_4; }
	inline void set_nbytes_4(int32_t value)
	{
		___nbytes_4 = value;
	}

	inline static int32_t get_offset_of_wh_5() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t780248512, ___wh_5)); }
	inline ManualResetEvent_t451242010 * get_wh_5() const { return ___wh_5; }
	inline ManualResetEvent_t451242010 ** get_address_of_wh_5() { return &___wh_5; }
	inline void set_wh_5(ManualResetEvent_t451242010 * value)
	{
		___wh_5 = value;
		Il2CppCodeGenWriteBarrier((&___wh_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMASYNCRESULT_T780248512_H
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
#ifndef RESOLVEEVENTHOLDER_T2120639521_H
#define RESOLVEEVENTHOLDER_T2120639521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t2120639521  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHOLDER_T2120639521_H
#ifndef RESOURCECLOSEHANDLER_T3610144673_H
#define RESOURCECLOSEHANDLER_T3610144673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResourceCloseHandler
struct  ResourceCloseHandler_t3610144673  : public RuntimeObject
{
public:
	// System.Reflection.Module System.Reflection.Assembly/ResourceCloseHandler::module
	Module_t2987026101 * ___module_0;

public:
	inline static int32_t get_offset_of_module_0() { return static_cast<int32_t>(offsetof(ResourceCloseHandler_t3610144673, ___module_0)); }
	inline Module_t2987026101 * get_module_0() const { return ___module_0; }
	inline Module_t2987026101 ** get_address_of_module_0() { return &___module_0; }
	inline void set_module_0(Module_t2987026101 * value)
	{
		___module_0 = value;
		Il2CppCodeGenWriteBarrier((&___module_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCECLOSEHANDLER_T3610144673_H
#ifndef BINDER_T2999457153_H
#define BINDER_T2999457153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t2999457153  : public RuntimeObject
{
public:

public:
};

struct Binder_t2999457153_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t2999457153 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t2999457153_StaticFields, ___default_binder_0)); }
	inline Binder_t2999457153 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t2999457153 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t2999457153 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T2999457153_H
#ifndef CUSTOMATTRIBUTEDATA_T1084486650_H
#define CUSTOMATTRIBUTEDATA_T1084486650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t1084486650  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t5769829 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorInfo_0)); }
	inline ConstructorInfo_t5769829 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t5769829 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t5769829 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T1084486650_H
#ifndef LOCALVARIABLEINFO_T2426779395_H
#define LOCALVARIABLEINFO_T2426779395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.LocalVariableInfo
struct  LocalVariableInfo_t2426779395  : public RuntimeObject
{
public:
	// System.Type System.Reflection.LocalVariableInfo::type
	Type_t * ___type_0;
	// System.Boolean System.Reflection.LocalVariableInfo::is_pinned
	bool ___is_pinned_1;
	// System.UInt16 System.Reflection.LocalVariableInfo::position
	uint16_t ___position_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t2426779395, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_is_pinned_1() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t2426779395, ___is_pinned_1)); }
	inline bool get_is_pinned_1() const { return ___is_pinned_1; }
	inline bool* get_address_of_is_pinned_1() { return &___is_pinned_1; }
	inline void set_is_pinned_1(bool value)
	{
		___is_pinned_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t2426779395, ___position_2)); }
	inline uint16_t get_position_2() const { return ___position_2; }
	inline uint16_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(uint16_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALVARIABLEINFO_T2426779395_H
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
#ifndef MISSING_T508514592_H
#define MISSING_T508514592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t508514592  : public RuntimeObject
{
public:

public:
};

struct Missing_t508514592_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t508514592 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t508514592_StaticFields, ___Value_0)); }
	inline Missing_t508514592 * get_Value_0() const { return ___Value_0; }
	inline Missing_t508514592 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t508514592 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T508514592_H
#ifndef POINTER_T2088917139_H
#define POINTER_T2088917139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Pointer
struct  Pointer_t2088917139  : public RuntimeObject
{
public:
	// System.Void* System.Reflection.Pointer::data
	void* ___data_0;
	// System.Type System.Reflection.Pointer::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Pointer_t2088917139, ___data_0)); }
	inline void* get_data_0() const { return ___data_0; }
	inline void** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(void* value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Pointer_t2088917139, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTER_T2088917139_H
#ifndef STRONGNAMEKEYPAIR_T3411219591_H
#define STRONGNAMEKEYPAIR_T3411219591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t3411219591  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t4116647657* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t4116647657* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t2385438082 * ____rsa_4;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____publicKey_0)); }
	inline ByteU5BU5D_t4116647657* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t4116647657** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t4116647657* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____keyPairArray_3)); }
	inline ByteU5BU5D_t4116647657* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t4116647657* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}

	inline static int32_t get_offset_of__rsa_4() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____rsa_4)); }
	inline RSA_t2385438082 * get__rsa_4() const { return ____rsa_4; }
	inline RSA_t2385438082 ** get_address_of__rsa_4() { return &____rsa_4; }
	inline void set__rsa_4(RSA_t2385438082 * value)
	{
		____rsa_4 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T3411219591_H
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
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
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
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public MarshalByRefObject_t2760389100
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_1)); }
	inline TextReader_t283511965 * get_Null_1() const { return ___Null_1; }
	inline TextReader_t283511965 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextReader_t283511965 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public MarshalByRefObject_t2760389100
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_1;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_2;

public:
	inline static int32_t get_offset_of_CoreNewLine_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_1)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_1() const { return ___CoreNewLine_1; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_1() { return &___CoreNewLine_1; }
	inline void set_CoreNewLine_1(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_1 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_1), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___internalFormatProvider_2)); }
	inline RuntimeObject* get_internalFormatProvider_2() const { return ___internalFormatProvider_2; }
	inline RuntimeObject** get_address_of_internalFormatProvider_2() { return &___internalFormatProvider_2; }
	inline void set_internalFormatProvider_2(RuntimeObject* value)
	{
		___internalFormatProvider_2 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_2), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_3;

public:
	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_3)); }
	inline TextWriter_t3478189236 * get_Null_3() const { return ___Null_3; }
	inline TextWriter_t3478189236 ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextWriter_t3478189236 * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((&___Null_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
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
#ifndef ASSEMBLYCOMPANYATTRIBUTE_T909257512_H
#define ASSEMBLYCOMPANYATTRIBUTE_T909257512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCompanyAttribute
struct  AssemblyCompanyAttribute_t909257512  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t909257512, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOMPANYATTRIBUTE_T909257512_H
#ifndef ASSEMBLYCONFIGURATIONATTRIBUTE_T2167450097_H
#define ASSEMBLYCONFIGURATIONATTRIBUTE_T2167450097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyConfigurationAttribute
struct  AssemblyConfigurationAttribute_t2167450097  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t2167450097, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCONFIGURATIONATTRIBUTE_T2167450097_H
#ifndef ASSEMBLYCOPYRIGHTATTRIBUTE_T836190902_H
#define ASSEMBLYCOPYRIGHTATTRIBUTE_T836190902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCopyrightAttribute
struct  AssemblyCopyrightAttribute_t836190902  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_t836190902, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOPYRIGHTATTRIBUTE_T836190902_H
#ifndef ASSEMBLYDEFAULTALIASATTRIBUTE_T2176720766_H
#define ASSEMBLYDEFAULTALIASATTRIBUTE_T2176720766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDefaultAliasAttribute
struct  AssemblyDefaultAliasAttribute_t2176720766  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyDefaultAliasAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDefaultAliasAttribute_t2176720766, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDEFAULTALIASATTRIBUTE_T2176720766_H
#ifndef ASSEMBLYDELAYSIGNATTRIBUTE_T176441654_H
#define ASSEMBLYDELAYSIGNATTRIBUTE_T176441654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDelaySignAttribute
struct  AssemblyDelaySignAttribute_t176441654  : public Attribute_t861562559
{
public:
	// System.Boolean System.Reflection.AssemblyDelaySignAttribute::delay
	bool ___delay_0;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(AssemblyDelaySignAttribute_t176441654, ___delay_0)); }
	inline bool get_delay_0() const { return ___delay_0; }
	inline bool* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(bool value)
	{
		___delay_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDELAYSIGNATTRIBUTE_T176441654_H
#ifndef ASSEMBLYDESCRIPTIONATTRIBUTE_T1046996844_H
#define ASSEMBLYDESCRIPTIONATTRIBUTE_T1046996844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDescriptionAttribute
struct  AssemblyDescriptionAttribute_t1046996844  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_t1046996844, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDESCRIPTIONATTRIBUTE_T1046996844_H
#ifndef ASSEMBLYFILEVERSIONATTRIBUTE_T14927972_H
#define ASSEMBLYFILEVERSIONATTRIBUTE_T14927972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyFileVersionAttribute
struct  AssemblyFileVersionAttribute_t14927972  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_t14927972, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYFILEVERSIONATTRIBUTE_T14927972_H
#ifndef ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3037764991_H
#define ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3037764991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyInformationalVersionAttribute
struct  AssemblyInformationalVersionAttribute_t3037764991  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t3037764991, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3037764991_H
#ifndef ASSEMBLYKEYFILEATTRIBUTE_T2825689142_H
#define ASSEMBLYKEYFILEATTRIBUTE_T2825689142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyKeyFileAttribute
struct  AssemblyKeyFileAttribute_t2825689142  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyKeyFileAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyKeyFileAttribute_t2825689142, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYKEYFILEATTRIBUTE_T2825689142_H
#ifndef ASSEMBLYPRODUCTATTRIBUTE_T1000945320_H
#define ASSEMBLYPRODUCTATTRIBUTE_T1000945320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyProductAttribute
struct  AssemblyProductAttribute_t1000945320  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t1000945320, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYPRODUCTATTRIBUTE_T1000945320_H
#ifndef ASSEMBLYTITLEATTRIBUTE_T1901133402_H
#define ASSEMBLYTITLEATTRIBUTE_T1901133402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTitleAttribute
struct  AssemblyTitleAttribute_t1901133402  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_t1901133402, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTITLEATTRIBUTE_T1901133402_H
#ifndef ASSEMBLYTRADEMARKATTRIBUTE_T3598190473_H
#define ASSEMBLYTRADEMARKATTRIBUTE_T3598190473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTrademarkAttribute
struct  AssemblyTrademarkAttribute_t3598190473  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyTrademarkAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTrademarkAttribute_t3598190473, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTRADEMARKATTRIBUTE_T3598190473_H
#ifndef DEFAULT_T2456596213_H
#define DEFAULT_T2456596213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder/Default
struct  Default_t2456596213  : public Binder_t2999457153
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULT_T2456596213_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t2723150157 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifndef MONOWIN32RESOURCE_T1904229483_H
#define MONOWIN32RESOURCE_T1904229483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoWin32Resource
struct  MonoWin32Resource_t1904229483 
{
public:
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::res_type
	int32_t ___res_type_0;
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::res_id
	int32_t ___res_id_1;
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::lang_id
	int32_t ___lang_id_2;
	// System.Byte[] System.Reflection.Emit.MonoWin32Resource::data
	ByteU5BU5D_t4116647657* ___data_3;

public:
	inline static int32_t get_offset_of_res_type_0() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___res_type_0)); }
	inline int32_t get_res_type_0() const { return ___res_type_0; }
	inline int32_t* get_address_of_res_type_0() { return &___res_type_0; }
	inline void set_res_type_0(int32_t value)
	{
		___res_type_0 = value;
	}

	inline static int32_t get_offset_of_res_id_1() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___res_id_1)); }
	inline int32_t get_res_id_1() const { return ___res_id_1; }
	inline int32_t* get_address_of_res_id_1() { return &___res_id_1; }
	inline void set_res_id_1(int32_t value)
	{
		___res_id_1 = value;
	}

	inline static int32_t get_offset_of_lang_id_2() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___lang_id_2)); }
	inline int32_t get_lang_id_2() const { return ___lang_id_2; }
	inline int32_t* get_address_of_lang_id_2() { return &___lang_id_2; }
	inline void set_lang_id_2(int32_t value)
	{
		___lang_id_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___data_3)); }
	inline ByteU5BU5D_t4116647657* get_data_3() const { return ___data_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(ByteU5BU5D_t4116647657* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((&___data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoWin32Resource
struct MonoWin32Resource_t1904229483_marshaled_pinvoke
{
	int32_t ___res_type_0;
	int32_t ___res_id_1;
	int32_t ___lang_id_2;
	uint8_t* ___data_3;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoWin32Resource
struct MonoWin32Resource_t1904229483_marshaled_com
{
	int32_t ___res_type_0;
	int32_t ___res_id_1;
	int32_t ___lang_id_2;
	uint8_t* ___data_3;
};
#endif // MONOWIN32RESOURCE_T1904229483_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t1787725097 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t1787725097 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t1787725097 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t1787725097 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef PARAMETERMODIFIER_T1461694466_H
#define PARAMETERMODIFIER_T1461694466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1461694466 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t2897418192* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1461694466, ____byref_0)); }
	inline BooleanU5BU5D_t2897418192* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t2897418192* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T1461694466_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
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
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
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
#ifndef ASSEMBLYHASHALGORITHM_T1216504064_H
#define ASSEMBLYHASHALGORITHM_T1216504064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t1216504064 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t1216504064, ___value___1)); }
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
#endif // ASSEMBLYHASHALGORITHM_T1216504064_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t766556580 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t766556580, ___value___1)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
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
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
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
#endif // FILEACCESS_T1659085276_H
#ifndef FILEATTRIBUTES_T3417205536_H
#define FILEATTRIBUTES_T3417205536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t3417205536 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAttributes_t3417205536, ___value___1)); }
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
#endif // FILEATTRIBUTES_T3417205536_H
#ifndef IOEXCEPTION_T4088381929_H
#define IOEXCEPTION_T4088381929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t4088381929  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T4088381929_H
#ifndef NULLSTREAM_T1684893697_H
#define NULLSTREAM_T1684893697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.NullStream
struct  NullStream_t1684893697  : public Stream_t1273022909
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLSTREAM_T1684893697_H
#ifndef SEEKORIGIN_T1441174344_H
#define SEEKORIGIN_T1441174344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SeekOrigin
struct  SeekOrigin_t1441174344 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SeekOrigin_t1441174344, ___value___1)); }
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
#endif // SEEKORIGIN_T1441174344_H
#ifndef STREAMREADER_T4009935899_H
#define STREAMREADER_T4009935899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t4009935899  : public TextReader_t283511965
{
public:
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t4116647657* ___input_buffer_2;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t3528271667* ___decoded_buffer_3;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_4;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_5;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_6;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_7;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1523322056 * ___encoding_8;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t2204182725 * ___decoder_9;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t1273022909 * ___base_stream_10;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_11;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t * ___line_builder_12;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_14;

public:
	inline static int32_t get_offset_of_input_buffer_2() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___input_buffer_2)); }
	inline ByteU5BU5D_t4116647657* get_input_buffer_2() const { return ___input_buffer_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_input_buffer_2() { return &___input_buffer_2; }
	inline void set_input_buffer_2(ByteU5BU5D_t4116647657* value)
	{
		___input_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___input_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoded_buffer_3() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_buffer_3)); }
	inline CharU5BU5D_t3528271667* get_decoded_buffer_3() const { return ___decoded_buffer_3; }
	inline CharU5BU5D_t3528271667** get_address_of_decoded_buffer_3() { return &___decoded_buffer_3; }
	inline void set_decoded_buffer_3(CharU5BU5D_t3528271667* value)
	{
		___decoded_buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoded_buffer_3), value);
	}

	inline static int32_t get_offset_of_decoded_count_4() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_count_4)); }
	inline int32_t get_decoded_count_4() const { return ___decoded_count_4; }
	inline int32_t* get_address_of_decoded_count_4() { return &___decoded_count_4; }
	inline void set_decoded_count_4(int32_t value)
	{
		___decoded_count_4 = value;
	}

	inline static int32_t get_offset_of_pos_5() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___pos_5)); }
	inline int32_t get_pos_5() const { return ___pos_5; }
	inline int32_t* get_address_of_pos_5() { return &___pos_5; }
	inline void set_pos_5(int32_t value)
	{
		___pos_5 = value;
	}

	inline static int32_t get_offset_of_buffer_size_6() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___buffer_size_6)); }
	inline int32_t get_buffer_size_6() const { return ___buffer_size_6; }
	inline int32_t* get_address_of_buffer_size_6() { return &___buffer_size_6; }
	inline void set_buffer_size_6(int32_t value)
	{
		___buffer_size_6 = value;
	}

	inline static int32_t get_offset_of_do_checks_7() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___do_checks_7)); }
	inline int32_t get_do_checks_7() const { return ___do_checks_7; }
	inline int32_t* get_address_of_do_checks_7() { return &___do_checks_7; }
	inline void set_do_checks_7(int32_t value)
	{
		___do_checks_7 = value;
	}

	inline static int32_t get_offset_of_encoding_8() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___encoding_8)); }
	inline Encoding_t1523322056 * get_encoding_8() const { return ___encoding_8; }
	inline Encoding_t1523322056 ** get_address_of_encoding_8() { return &___encoding_8; }
	inline void set_encoding_8(Encoding_t1523322056 * value)
	{
		___encoding_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_8), value);
	}

	inline static int32_t get_offset_of_decoder_9() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoder_9)); }
	inline Decoder_t2204182725 * get_decoder_9() const { return ___decoder_9; }
	inline Decoder_t2204182725 ** get_address_of_decoder_9() { return &___decoder_9; }
	inline void set_decoder_9(Decoder_t2204182725 * value)
	{
		___decoder_9 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_9), value);
	}

	inline static int32_t get_offset_of_base_stream_10() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___base_stream_10)); }
	inline Stream_t1273022909 * get_base_stream_10() const { return ___base_stream_10; }
	inline Stream_t1273022909 ** get_address_of_base_stream_10() { return &___base_stream_10; }
	inline void set_base_stream_10(Stream_t1273022909 * value)
	{
		___base_stream_10 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_10), value);
	}

	inline static int32_t get_offset_of_mayBlock_11() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___mayBlock_11)); }
	inline bool get_mayBlock_11() const { return ___mayBlock_11; }
	inline bool* get_address_of_mayBlock_11() { return &___mayBlock_11; }
	inline void set_mayBlock_11(bool value)
	{
		___mayBlock_11 = value;
	}

	inline static int32_t get_offset_of_line_builder_12() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___line_builder_12)); }
	inline StringBuilder_t * get_line_builder_12() const { return ___line_builder_12; }
	inline StringBuilder_t ** get_address_of_line_builder_12() { return &___line_builder_12; }
	inline void set_line_builder_12(StringBuilder_t * value)
	{
		___line_builder_12 = value;
		Il2CppCodeGenWriteBarrier((&___line_builder_12), value);
	}

	inline static int32_t get_offset_of_foundCR_14() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___foundCR_14)); }
	inline bool get_foundCR_14() const { return ___foundCR_14; }
	inline bool* get_address_of_foundCR_14() { return &___foundCR_14; }
	inline void set_foundCR_14(bool value)
	{
		___foundCR_14 = value;
	}
};

struct StreamReader_t4009935899_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t4009935899 * ___Null_13;

public:
	inline static int32_t get_offset_of_Null_13() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899_StaticFields, ___Null_13)); }
	inline StreamReader_t4009935899 * get_Null_13() const { return ___Null_13; }
	inline StreamReader_t4009935899 ** get_address_of_Null_13() { return &___Null_13; }
	inline void set_Null_13(StreamReader_t4009935899 * value)
	{
		___Null_13 = value;
		Il2CppCodeGenWriteBarrier((&___Null_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T4009935899_H
#ifndef STREAMWRITER_T1266378904_H
#define STREAMWRITER_T1266378904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t1266378904  : public TextWriter_t3478189236
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t1523322056 * ___internalEncoding_4;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t1273022909 * ___internalStream_5;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_6;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t4116647657* ___byte_buf_7;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_8;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t3528271667* ___decode_buf_9;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_10;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_11;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_12;

public:
	inline static int32_t get_offset_of_internalEncoding_4() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalEncoding_4)); }
	inline Encoding_t1523322056 * get_internalEncoding_4() const { return ___internalEncoding_4; }
	inline Encoding_t1523322056 ** get_address_of_internalEncoding_4() { return &___internalEncoding_4; }
	inline void set_internalEncoding_4(Encoding_t1523322056 * value)
	{
		___internalEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___internalEncoding_4), value);
	}

	inline static int32_t get_offset_of_internalStream_5() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalStream_5)); }
	inline Stream_t1273022909 * get_internalStream_5() const { return ___internalStream_5; }
	inline Stream_t1273022909 ** get_address_of_internalStream_5() { return &___internalStream_5; }
	inline void set_internalStream_5(Stream_t1273022909 * value)
	{
		___internalStream_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalStream_5), value);
	}

	inline static int32_t get_offset_of_iflush_6() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___iflush_6)); }
	inline bool get_iflush_6() const { return ___iflush_6; }
	inline bool* get_address_of_iflush_6() { return &___iflush_6; }
	inline void set_iflush_6(bool value)
	{
		___iflush_6 = value;
	}

	inline static int32_t get_offset_of_byte_buf_7() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_buf_7)); }
	inline ByteU5BU5D_t4116647657* get_byte_buf_7() const { return ___byte_buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_byte_buf_7() { return &___byte_buf_7; }
	inline void set_byte_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___byte_buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___byte_buf_7), value);
	}

	inline static int32_t get_offset_of_byte_pos_8() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_pos_8)); }
	inline int32_t get_byte_pos_8() const { return ___byte_pos_8; }
	inline int32_t* get_address_of_byte_pos_8() { return &___byte_pos_8; }
	inline void set_byte_pos_8(int32_t value)
	{
		___byte_pos_8 = value;
	}

	inline static int32_t get_offset_of_decode_buf_9() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_buf_9)); }
	inline CharU5BU5D_t3528271667* get_decode_buf_9() const { return ___decode_buf_9; }
	inline CharU5BU5D_t3528271667** get_address_of_decode_buf_9() { return &___decode_buf_9; }
	inline void set_decode_buf_9(CharU5BU5D_t3528271667* value)
	{
		___decode_buf_9 = value;
		Il2CppCodeGenWriteBarrier((&___decode_buf_9), value);
	}

	inline static int32_t get_offset_of_decode_pos_10() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_pos_10)); }
	inline int32_t get_decode_pos_10() const { return ___decode_pos_10; }
	inline int32_t* get_address_of_decode_pos_10() { return &___decode_pos_10; }
	inline void set_decode_pos_10(int32_t value)
	{
		___decode_pos_10 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_11() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___DisposedAlready_11)); }
	inline bool get_DisposedAlready_11() const { return ___DisposedAlready_11; }
	inline bool* get_address_of_DisposedAlready_11() { return &___DisposedAlready_11; }
	inline void set_DisposedAlready_11(bool value)
	{
		___DisposedAlready_11 = value;
	}

	inline static int32_t get_offset_of_preamble_done_12() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___preamble_done_12)); }
	inline bool get_preamble_done_12() const { return ___preamble_done_12; }
	inline bool* get_address_of_preamble_done_12() { return &___preamble_done_12; }
	inline void set_preamble_done_12(bool value)
	{
		___preamble_done_12 = value;
	}
};

struct StreamWriter_t1266378904_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1266378904 * ___Null_13;

public:
	inline static int32_t get_offset_of_Null_13() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904_StaticFields, ___Null_13)); }
	inline StreamWriter_t1266378904 * get_Null_13() const { return ___Null_13; }
	inline StreamWriter_t1266378904 ** get_address_of_Null_13() { return &___Null_13; }
	inline void set_Null_13(StreamWriter_t1266378904 * value)
	{
		___Null_13 = value;
		Il2CppCodeGenWriteBarrier((&___Null_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMWRITER_T1266378904_H
#ifndef STRINGREADER_T3465604688_H
#define STRINGREADER_T3465604688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t3465604688  : public TextReader_t283511965
{
public:
	// System.String System.IO.StringReader::source
	String_t* ___source_2;
	// System.Int32 System.IO.StringReader::nextChar
	int32_t ___nextChar_3;
	// System.Int32 System.IO.StringReader::sourceLength
	int32_t ___sourceLength_4;

public:
	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___source_2)); }
	inline String_t* get_source_2() const { return ___source_2; }
	inline String_t** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(String_t* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((&___source_2), value);
	}

	inline static int32_t get_offset_of_nextChar_3() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___nextChar_3)); }
	inline int32_t get_nextChar_3() const { return ___nextChar_3; }
	inline int32_t* get_address_of_nextChar_3() { return &___nextChar_3; }
	inline void set_nextChar_3(int32_t value)
	{
		___nextChar_3 = value;
	}

	inline static int32_t get_offset_of_sourceLength_4() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___sourceLength_4)); }
	inline int32_t get_sourceLength_4() const { return ___sourceLength_4; }
	inline int32_t* get_address_of_sourceLength_4() { return &___sourceLength_4; }
	inline void set_sourceLength_4(int32_t value)
	{
		___sourceLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T3465604688_H
#ifndef STRINGWRITER_T802263757_H
#define STRINGWRITER_T802263757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t802263757  : public TextWriter_t3478189236
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t * ___internalString_4;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_5;

public:
	inline static int32_t get_offset_of_internalString_4() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___internalString_4)); }
	inline StringBuilder_t * get_internalString_4() const { return ___internalString_4; }
	inline StringBuilder_t ** get_address_of_internalString_4() { return &___internalString_4; }
	inline void set_internalString_4(StringBuilder_t * value)
	{
		___internalString_4 = value;
		Il2CppCodeGenWriteBarrier((&___internalString_4), value);
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T802263757_H
#ifndef SYNCHRONIZEDREADER_T1163115775_H
#define SYNCHRONIZEDREADER_T1163115775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SynchronizedReader
struct  SynchronizedReader_t1163115775  : public TextReader_t283511965
{
public:
	// System.IO.TextReader System.IO.SynchronizedReader::reader
	TextReader_t283511965 * ___reader_2;

public:
	inline static int32_t get_offset_of_reader_2() { return static_cast<int32_t>(offsetof(SynchronizedReader_t1163115775, ___reader_2)); }
	inline TextReader_t283511965 * get_reader_2() const { return ___reader_2; }
	inline TextReader_t283511965 ** get_address_of_reader_2() { return &___reader_2; }
	inline void set_reader_2(TextReader_t283511965 * value)
	{
		___reader_2 = value;
		Il2CppCodeGenWriteBarrier((&___reader_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDREADER_T1163115775_H
#ifndef SYNCHRONIZEDWRITER_T1722853220_H
#define SYNCHRONIZEDWRITER_T1722853220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SynchronizedWriter
struct  SynchronizedWriter_t1722853220  : public TextWriter_t3478189236
{
public:
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t3478189236 * ___writer_4;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_5;

public:
	inline static int32_t get_offset_of_writer_4() { return static_cast<int32_t>(offsetof(SynchronizedWriter_t1722853220, ___writer_4)); }
	inline TextWriter_t3478189236 * get_writer_4() const { return ___writer_4; }
	inline TextWriter_t3478189236 ** get_address_of_writer_4() { return &___writer_4; }
	inline void set_writer_4(TextWriter_t3478189236 * value)
	{
		___writer_4 = value;
		Il2CppCodeGenWriteBarrier((&___writer_4), value);
	}

	inline static int32_t get_offset_of_neverClose_5() { return static_cast<int32_t>(offsetof(SynchronizedWriter_t1722853220, ___neverClose_5)); }
	inline bool get_neverClose_5() const { return ___neverClose_5; }
	inline bool* get_address_of_neverClose_5() { return &___neverClose_5; }
	inline void set_neverClose_5(bool value)
	{
		___neverClose_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDWRITER_T1722853220_H
#ifndef NULLTEXTREADER_T763622204_H
#define NULLTEXTREADER_T763622204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader/NullTextReader
struct  NullTextReader_t763622204  : public TextReader_t283511965
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLTEXTREADER_T763622204_H
#ifndef NULLTEXTWRITER_T1377692031_H
#define NULLTEXTWRITER_T1377692031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter/NullTextWriter
struct  NullTextWriter_t1377692031  : public TextWriter_t3478189236
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLTEXTWRITER_T1377692031_H
#ifndef AMBIGUOUSMATCHEXCEPTION_T566690781_H
#define AMBIGUOUSMATCHEXCEPTION_T566690781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AmbiguousMatchException
struct  AmbiguousMatchException_t566690781  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIGUOUSMATCHEXCEPTION_T566690781_H
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
#ifndef ASSEMBLYNAMEFLAGS_T3675421470_H
#define ASSEMBLYNAMEFLAGS_T3675421470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t3675421470 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t3675421470, ___value___1)); }
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
#endif // ASSEMBLYNAMEFLAGS_T3675421470_H
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
#ifndef CALLINGCONVENTIONS_T2253234531_H
#define CALLINGCONVENTIONS_T2253234531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t2253234531 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConventions_t2253234531, ___value___1)); }
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
#endif // CALLINGCONVENTIONS_T2253234531_H
#ifndef CONSTRUCTORINFO_T5769829_H
#define CONSTRUCTORINFO_T5769829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t5769829  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t5769829_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T5769829_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t287865710 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t2723150157  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t2723150157  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t2723150157 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t2723150157  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_com
{
	CustomAttributeTypedArgument_t2723150157_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifndef NATIVERESOURCETYPE_T2573963468_H
#define NATIVERESOURCETYPE_T2573963468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.NativeResourceType
struct  NativeResourceType_t2573963468 
{
public:
	// System.Int32 System.Reflection.Emit.NativeResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NativeResourceType_t2573963468, ___value___1)); }
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
#endif // NATIVERESOURCETYPE_T2573963468_H
#ifndef PEFILEKINDS_T3631470751_H
#define PEFILEKINDS_T3631470751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PEFileKinds
struct  PEFileKinds_t3631470751 
{
public:
	// System.Int32 System.Reflection.Emit.PEFileKinds::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PEFileKinds_t3631470751, ___value___1)); }
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
#endif // PEFILEKINDS_T3631470751_H
#ifndef EVENTATTRIBUTES_T1153671773_H
#define EVENTATTRIBUTES_T1153671773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t1153671773 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventAttributes_t1153671773, ___value___1)); }
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
#endif // EVENTATTRIBUTES_T1153671773_H
#ifndef FIELDATTRIBUTES_T400321159_H
#define FIELDATTRIBUTES_T400321159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t400321159 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FieldAttributes_t400321159, ___value___1)); }
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
#endif // FIELDATTRIBUTES_T400321159_H
#ifndef IMAGEFILEMACHINE_T799743225_H
#define IMAGEFILEMACHINE_T799743225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ImageFileMachine
struct  ImageFileMachine_t799743225 
{
public:
	// System.Int32 System.Reflection.ImageFileMachine::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ImageFileMachine_t799743225, ___value___1)); }
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
#endif // IMAGEFILEMACHINE_T799743225_H
#ifndef MEMBERTYPES_T3790569052_H
#define MEMBERTYPES_T3790569052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t3790569052 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t3790569052, ___value___1)); }
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
#endif // MEMBERTYPES_T3790569052_H
#ifndef METHODATTRIBUTES_T2366443849_H
#define METHODATTRIBUTES_T2366443849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t2366443849 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodAttributes_t2366443849, ___value___1)); }
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
#endif // METHODATTRIBUTES_T2366443849_H
#ifndef METHODIMPLATTRIBUTES_T3646023817_H
#define METHODIMPLATTRIBUTES_T3646023817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t3646023817 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t3646023817, ___value___1)); }
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
#endif // METHODIMPLATTRIBUTES_T3646023817_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public EventInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoEvent::klass
	intptr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	intptr_t ___handle_2;

public:
	inline static int32_t get_offset_of_klass_1() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___klass_1)); }
	inline intptr_t get_klass_1() const { return ___klass_1; }
	inline intptr_t* get_address_of_klass_1() { return &___klass_1; }
	inline void set_klass_1(intptr_t value)
	{
		___klass_1 = value;
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___handle_2)); }
	inline intptr_t get_handle_2() const { return ___handle_2; }
	inline intptr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(intptr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEVENT_T_H
#ifndef PINFO_T446749821_H
#define PINFO_T446749821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t446749821 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PInfo_t446749821, ___value___1)); }
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
#endif // PINFO_T446749821_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___1)); }
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
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef PORTABLEEXECUTABLEKINDS_T1191923110_H
#define PORTABLEEXECUTABLEKINDS_T1191923110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PortableExecutableKinds
struct  PortableExecutableKinds_t1191923110 
{
public:
	// System.Int32 System.Reflection.PortableExecutableKinds::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PortableExecutableKinds_t1191923110, ___value___1)); }
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
#endif // PORTABLEEXECUTABLEKINDS_T1191923110_H
#ifndef PROCESSORARCHITECTURE_T305929193_H
#define PROCESSORARCHITECTURE_T305929193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t305929193 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t305929193, ___value___1)); }
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
#endif // PROCESSORARCHITECTURE_T305929193_H
#ifndef PROPERTYATTRIBUTES_T3388002996_H
#define PROPERTYATTRIBUTES_T3388002996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t3388002996 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyAttributes_t3388002996, ___value___1)); }
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
#endif // PROPERTYATTRIBUTES_T3388002996_H
#ifndef REFLECTIONTYPELOADEXCEPTION_T440884068_H
#define REFLECTIONTYPELOADEXCEPTION_T440884068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ReflectionTypeLoadException
struct  ReflectionTypeLoadException_t440884068  : public SystemException_t176217640
{
public:
	// System.Exception[] System.Reflection.ReflectionTypeLoadException::loaderExceptions
	ExceptionU5BU5D_t2535001212* ___loaderExceptions_11;
	// System.Type[] System.Reflection.ReflectionTypeLoadException::types
	TypeU5BU5D_t3940880105* ___types_12;

public:
	inline static int32_t get_offset_of_loaderExceptions_11() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t440884068, ___loaderExceptions_11)); }
	inline ExceptionU5BU5D_t2535001212* get_loaderExceptions_11() const { return ___loaderExceptions_11; }
	inline ExceptionU5BU5D_t2535001212** get_address_of_loaderExceptions_11() { return &___loaderExceptions_11; }
	inline void set_loaderExceptions_11(ExceptionU5BU5D_t2535001212* value)
	{
		___loaderExceptions_11 = value;
		Il2CppCodeGenWriteBarrier((&___loaderExceptions_11), value);
	}

	inline static int32_t get_offset_of_types_12() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t440884068, ___types_12)); }
	inline TypeU5BU5D_t3940880105* get_types_12() const { return ___types_12; }
	inline TypeU5BU5D_t3940880105** get_address_of_types_12() { return &___types_12; }
	inline void set_types_12(TypeU5BU5D_t3940880105* value)
	{
		___types_12 = value;
		Il2CppCodeGenWriteBarrier((&___types_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONTYPELOADEXCEPTION_T440884068_H
#ifndef RESOURCEATTRIBUTES_T3997964906_H
#define RESOURCEATTRIBUTES_T3997964906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t3997964906 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t3997964906, ___value___1)); }
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
#endif // RESOURCEATTRIBUTES_T3997964906_H
#ifndef RESOURCELOCATION_T1891396988_H
#define RESOURCELOCATION_T1891396988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceLocation
struct  ResourceLocation_t1891396988 
{
public:
	// System.Int32 System.Reflection.ResourceLocation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceLocation_t1891396988, ___value___1)); }
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
#endif // RESOURCELOCATION_T1891396988_H
#ifndef TARGETEXCEPTION_T3386045725_H
#define TARGETEXCEPTION_T3386045725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetException
struct  TargetException_t3386045725  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETEXCEPTION_T3386045725_H
#ifndef TARGETINVOCATIONEXCEPTION_T4266643902_H
#define TARGETINVOCATIONEXCEPTION_T4266643902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t4266643902  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T4266643902_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T1216617239_H
#define TARGETPARAMETERCOUNTEXCEPTION_T1216617239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t1216617239  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T1216617239_H
#ifndef TYPEATTRIBUTES_T113483779_H
#define TYPEATTRIBUTES_T113483779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t113483779 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t113483779, ___value___1)); }
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
#endif // TYPEATTRIBUTES_T113483779_H
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
#ifndef SECURITYACTION_T569814076_H
#define SECURITYACTION_T569814076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t569814076 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t569814076, ___value___1)); }
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
#endif // SECURITYACTION_T569814076_H
#ifndef MONOIOSTAT_T592533987_H
#define MONOIOSTAT_T592533987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t592533987 
{
public:
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name_0;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes_1;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_2;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_3;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_4;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Length_2)); }
	inline int64_t get_Length_2() const { return ___Length_2; }
	inline int64_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int64_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___CreationTime_3)); }
	inline int64_t get_CreationTime_3() const { return ___CreationTime_3; }
	inline int64_t* get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(int64_t value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastAccessTime_4)); }
	inline int64_t get_LastAccessTime_4() const { return ___LastAccessTime_4; }
	inline int64_t* get_address_of_LastAccessTime_4() { return &___LastAccessTime_4; }
	inline void set_LastAccessTime_4(int64_t value)
	{
		___LastAccessTime_4 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_5() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastWriteTime_5)); }
	inline int64_t get_LastWriteTime_5() const { return ___LastWriteTime_5; }
	inline int64_t* get_address_of_LastWriteTime_5() { return &___LastWriteTime_5; }
	inline void set_LastWriteTime_5(int64_t value)
	{
		___LastWriteTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
// Native definition for COM marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
#endif // MONOIOSTAT_T592533987_H
#ifndef PATHTOOLONGEXCEPTION_T2919094560_H
#define PATHTOOLONGEXCEPTION_T2919094560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.PathTooLongException
struct  PathTooLongException_t2919094560  : public IOException_t4088381929
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATHTOOLONGEXCEPTION_T2919094560_H
#ifndef NULLSTREAMREADER_T3364671800_H
#define NULLSTREAMREADER_T3364671800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader/NullStreamReader
struct  NullStreamReader_t3364671800  : public StreamReader_t4009935899
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLSTREAMREADER_T3364671800_H
#ifndef UNEXCEPTIONALSTREAMREADER_T2154476246_H
#define UNEXCEPTIONALSTREAMREADER_T2154476246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnexceptionalStreamReader
struct  UnexceptionalStreamReader_t2154476246  : public StreamReader_t4009935899
{
public:

public:
};

struct UnexceptionalStreamReader_t2154476246_StaticFields
{
public:
	// System.Boolean[] System.IO.UnexceptionalStreamReader::newline
	BooleanU5BU5D_t2897418192* ___newline_15;
	// System.Char System.IO.UnexceptionalStreamReader::newlineChar
	Il2CppChar ___newlineChar_16;

public:
	inline static int32_t get_offset_of_newline_15() { return static_cast<int32_t>(offsetof(UnexceptionalStreamReader_t2154476246_StaticFields, ___newline_15)); }
	inline BooleanU5BU5D_t2897418192* get_newline_15() const { return ___newline_15; }
	inline BooleanU5BU5D_t2897418192** get_address_of_newline_15() { return &___newline_15; }
	inline void set_newline_15(BooleanU5BU5D_t2897418192* value)
	{
		___newline_15 = value;
		Il2CppCodeGenWriteBarrier((&___newline_15), value);
	}

	inline static int32_t get_offset_of_newlineChar_16() { return static_cast<int32_t>(offsetof(UnexceptionalStreamReader_t2154476246_StaticFields, ___newlineChar_16)); }
	inline Il2CppChar get_newlineChar_16() const { return ___newlineChar_16; }
	inline Il2CppChar* get_address_of_newlineChar_16() { return &___newlineChar_16; }
	inline void set_newlineChar_16(Il2CppChar value)
	{
		___newlineChar_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNEXCEPTIONALSTREAMREADER_T2154476246_H
#ifndef UNEXCEPTIONALSTREAMWRITER_T2539306459_H
#define UNEXCEPTIONALSTREAMWRITER_T2539306459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnexceptionalStreamWriter
struct  UnexceptionalStreamWriter_t2539306459  : public StreamWriter_t1266378904
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNEXCEPTIONALSTREAMWRITER_T2539306459_H
#ifndef UNMANAGEDMEMORYSTREAM_T4234117669_H
#define UNMANAGEDMEMORYSTREAM_T4234117669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnmanagedMemoryStream
struct  UnmanagedMemoryStream_t4234117669  : public Stream_t1273022909
{
public:
	// System.Int64 System.IO.UnmanagedMemoryStream::length
	int64_t ___length_2;
	// System.Boolean System.IO.UnmanagedMemoryStream::closed
	bool ___closed_3;
	// System.Int64 System.IO.UnmanagedMemoryStream::capacity
	int64_t ___capacity_4;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::fileaccess
	int32_t ___fileaccess_5;
	// System.IntPtr System.IO.UnmanagedMemoryStream::initial_pointer
	intptr_t ___initial_pointer_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::initial_position
	int64_t ___initial_position_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::current_position
	int64_t ___current_position_8;
	// System.EventHandler System.IO.UnmanagedMemoryStream::Closed
	EventHandler_t1348719766 * ___Closed_9;

public:
	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ___length_2)); }
	inline int64_t get_length_2() const { return ___length_2; }
	inline int64_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int64_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_closed_3() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ___closed_3)); }
	inline bool get_closed_3() const { return ___closed_3; }
	inline bool* get_address_of_closed_3() { return &___closed_3; }
	inline void set_closed_3(bool value)
	{
		___closed_3 = value;
	}

	inline static int32_t get_offset_of_capacity_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ___capacity_4)); }
	inline int64_t get_capacity_4() const { return ___capacity_4; }
	inline int64_t* get_address_of_capacity_4() { return &___capacity_4; }
	inline void set_capacity_4(int64_t value)
	{
		___capacity_4 = value;
	}

	inline static int32_t get_offset_of_fileaccess_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ___fileaccess_5)); }
	inline int32_t get_fileaccess_5() const { return ___fileaccess_5; }
	inline int32_t* get_address_of_fileaccess_5() { return &___fileaccess_5; }
	inline void set_fileaccess_5(int32_t value)
	{
		___fileaccess_5 = value;
	}

	inline static int32_t get_offset_of_initial_pointer_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ___initial_pointer_6)); }
	inline intptr_t get_initial_pointer_6() const { return ___initial_pointer_6; }
	inline intptr_t* get_address_of_initial_pointer_6() { return &___initial_pointer_6; }
	inline void set_initial_pointer_6(intptr_t value)
	{
		___initial_pointer_6 = value;
	}

	inline static int32_t get_offset_of_initial_position_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ___initial_position_7)); }
	inline int64_t get_initial_position_7() const { return ___initial_position_7; }
	inline int64_t* get_address_of_initial_position_7() { return &___initial_position_7; }
	inline void set_initial_position_7(int64_t value)
	{
		___initial_position_7 = value;
	}

	inline static int32_t get_offset_of_current_position_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ___current_position_8)); }
	inline int64_t get_current_position_8() const { return ___current_position_8; }
	inline int64_t* get_address_of_current_position_8() { return &___current_position_8; }
	inline void set_current_position_8(int64_t value)
	{
		___current_position_8 = value;
	}

	inline static int32_t get_offset_of_Closed_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ___Closed_9)); }
	inline EventHandler_t1348719766 * get_Closed_9() const { return ___Closed_9; }
	inline EventHandler_t1348719766 ** get_address_of_Closed_9() { return &___Closed_9; }
	inline void set_Closed_9(EventHandler_t1348719766 * value)
	{
		___Closed_9 = value;
		Il2CppCodeGenWriteBarrier((&___Closed_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMEMORYSTREAM_T4234117669_H
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
#ifndef ASSEMBLYNAME_T270931938_H
#define ASSEMBLYNAME_T270931938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t270931938  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t4157843068 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t3411219591 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t4116647657* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t4116647657* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t3456873960 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___cultureinfo_6)); }
	inline CultureInfo_t4157843068 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t4157843068 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t4157843068 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___keypair_9)); }
	inline StrongNameKeyPair_t3411219591 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t3411219591 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t3411219591 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___publicKey_10)); }
	inline ByteU5BU5D_t4116647657* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t4116647657* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___keyToken_11)); }
	inline ByteU5BU5D_t4116647657* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t4116647657* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___version_13)); }
	inline Version_t3456873960 * get_version_13() const { return ___version_13; }
	inline Version_t3456873960 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t3456873960 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAME_T270931938_H
#ifndef ASSEMBLYBUILDER_T359885250_H
#define ASSEMBLYBUILDER_T359885250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.AssemblyBuilder
struct  AssemblyBuilder_t359885250  : public Assembly_t
{
public:
	// System.UIntPtr System.Reflection.Emit.AssemblyBuilder::dynamic_assembly
	uintptr_t ___dynamic_assembly_10;
	// System.Reflection.MethodInfo System.Reflection.Emit.AssemblyBuilder::entry_point
	MethodInfo_t * ___entry_point_11;
	// System.Reflection.Emit.ModuleBuilder[] System.Reflection.Emit.AssemblyBuilder::modules
	ModuleBuilderU5BU5D_t2441092650* ___modules_12;
	// System.String System.Reflection.Emit.AssemblyBuilder::name
	String_t* ___name_13;
	// System.String System.Reflection.Emit.AssemblyBuilder::dir
	String_t* ___dir_14;
	// System.Reflection.Emit.CustomAttributeBuilder[] System.Reflection.Emit.AssemblyBuilder::cattrs
	CustomAttributeBuilderU5BU5D_t2951373564* ___cattrs_15;
	// System.Reflection.Emit.MonoResource[] System.Reflection.Emit.AssemblyBuilder::resources
	MonoResourceU5BU5D_t979189380* ___resources_16;
	// System.Byte[] System.Reflection.Emit.AssemblyBuilder::public_key
	ByteU5BU5D_t4116647657* ___public_key_17;
	// System.String System.Reflection.Emit.AssemblyBuilder::version
	String_t* ___version_18;
	// System.String System.Reflection.Emit.AssemblyBuilder::culture
	String_t* ___culture_19;
	// System.UInt32 System.Reflection.Emit.AssemblyBuilder::algid
	uint32_t ___algid_20;
	// System.UInt32 System.Reflection.Emit.AssemblyBuilder::flags
	uint32_t ___flags_21;
	// System.Reflection.Emit.PEFileKinds System.Reflection.Emit.AssemblyBuilder::pekind
	int32_t ___pekind_22;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::delay_sign
	bool ___delay_sign_23;
	// System.UInt32 System.Reflection.Emit.AssemblyBuilder::access
	uint32_t ___access_24;
	// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::loaded_modules
	ModuleU5BU5D_t4238763736* ___loaded_modules_25;
	// System.Reflection.Emit.MonoWin32Resource[] System.Reflection.Emit.AssemblyBuilder::win32_resources
	MonoWin32ResourceU5BU5D_t4084032906* ___win32_resources_26;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.AssemblyBuilder::permissions_minimum
	RefEmitPermissionSetU5BU5D_t567451178* ___permissions_minimum_27;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.AssemblyBuilder::permissions_optional
	RefEmitPermissionSetU5BU5D_t567451178* ___permissions_optional_28;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.AssemblyBuilder::permissions_refused
	RefEmitPermissionSetU5BU5D_t567451178* ___permissions_refused_29;
	// System.Reflection.PortableExecutableKinds System.Reflection.Emit.AssemblyBuilder::peKind
	int32_t ___peKind_30;
	// System.Reflection.ImageFileMachine System.Reflection.Emit.AssemblyBuilder::machine
	int32_t ___machine_31;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::corlib_internal
	bool ___corlib_internal_32;
	// System.Type[] System.Reflection.Emit.AssemblyBuilder::type_forwarders
	TypeU5BU5D_t3940880105* ___type_forwarders_33;
	// System.Byte[] System.Reflection.Emit.AssemblyBuilder::pktoken
	ByteU5BU5D_t4116647657* ___pktoken_34;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_object_type
	Type_t * ___corlib_object_type_35;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_value_type
	Type_t * ___corlib_value_type_36;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_enum_type
	Type_t * ___corlib_enum_type_37;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_void_type
	Type_t * ___corlib_void_type_38;
	// System.Collections.ArrayList System.Reflection.Emit.AssemblyBuilder::resource_writers
	ArrayList_t2718874744 * ___resource_writers_39;
	// System.Resources.Win32VersionResource System.Reflection.Emit.AssemblyBuilder::version_res
	Win32VersionResource_t1367628464 * ___version_res_40;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::created
	bool ___created_41;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_module_only
	bool ___is_module_only_42;
	// Mono.Security.StrongName System.Reflection.Emit.AssemblyBuilder::sn
	StrongName_t4093849377 * ___sn_43;
	// System.Reflection.Emit.NativeResourceType System.Reflection.Emit.AssemblyBuilder::native_resource
	int32_t ___native_resource_44;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_compiler_context
	bool ___is_compiler_context_45;
	// System.String System.Reflection.Emit.AssemblyBuilder::versioninfo_culture
	String_t* ___versioninfo_culture_46;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::manifest_module
	ModuleBuilder_t731887691 * ___manifest_module_47;

public:
	inline static int32_t get_offset_of_dynamic_assembly_10() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___dynamic_assembly_10)); }
	inline uintptr_t get_dynamic_assembly_10() const { return ___dynamic_assembly_10; }
	inline uintptr_t* get_address_of_dynamic_assembly_10() { return &___dynamic_assembly_10; }
	inline void set_dynamic_assembly_10(uintptr_t value)
	{
		___dynamic_assembly_10 = value;
	}

	inline static int32_t get_offset_of_entry_point_11() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___entry_point_11)); }
	inline MethodInfo_t * get_entry_point_11() const { return ___entry_point_11; }
	inline MethodInfo_t ** get_address_of_entry_point_11() { return &___entry_point_11; }
	inline void set_entry_point_11(MethodInfo_t * value)
	{
		___entry_point_11 = value;
		Il2CppCodeGenWriteBarrier((&___entry_point_11), value);
	}

	inline static int32_t get_offset_of_modules_12() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___modules_12)); }
	inline ModuleBuilderU5BU5D_t2441092650* get_modules_12() const { return ___modules_12; }
	inline ModuleBuilderU5BU5D_t2441092650** get_address_of_modules_12() { return &___modules_12; }
	inline void set_modules_12(ModuleBuilderU5BU5D_t2441092650* value)
	{
		___modules_12 = value;
		Il2CppCodeGenWriteBarrier((&___modules_12), value);
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_dir_14() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___dir_14)); }
	inline String_t* get_dir_14() const { return ___dir_14; }
	inline String_t** get_address_of_dir_14() { return &___dir_14; }
	inline void set_dir_14(String_t* value)
	{
		___dir_14 = value;
		Il2CppCodeGenWriteBarrier((&___dir_14), value);
	}

	inline static int32_t get_offset_of_cattrs_15() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___cattrs_15)); }
	inline CustomAttributeBuilderU5BU5D_t2951373564* get_cattrs_15() const { return ___cattrs_15; }
	inline CustomAttributeBuilderU5BU5D_t2951373564** get_address_of_cattrs_15() { return &___cattrs_15; }
	inline void set_cattrs_15(CustomAttributeBuilderU5BU5D_t2951373564* value)
	{
		___cattrs_15 = value;
		Il2CppCodeGenWriteBarrier((&___cattrs_15), value);
	}

	inline static int32_t get_offset_of_resources_16() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___resources_16)); }
	inline MonoResourceU5BU5D_t979189380* get_resources_16() const { return ___resources_16; }
	inline MonoResourceU5BU5D_t979189380** get_address_of_resources_16() { return &___resources_16; }
	inline void set_resources_16(MonoResourceU5BU5D_t979189380* value)
	{
		___resources_16 = value;
		Il2CppCodeGenWriteBarrier((&___resources_16), value);
	}

	inline static int32_t get_offset_of_public_key_17() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___public_key_17)); }
	inline ByteU5BU5D_t4116647657* get_public_key_17() const { return ___public_key_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_public_key_17() { return &___public_key_17; }
	inline void set_public_key_17(ByteU5BU5D_t4116647657* value)
	{
		___public_key_17 = value;
		Il2CppCodeGenWriteBarrier((&___public_key_17), value);
	}

	inline static int32_t get_offset_of_version_18() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___version_18)); }
	inline String_t* get_version_18() const { return ___version_18; }
	inline String_t** get_address_of_version_18() { return &___version_18; }
	inline void set_version_18(String_t* value)
	{
		___version_18 = value;
		Il2CppCodeGenWriteBarrier((&___version_18), value);
	}

	inline static int32_t get_offset_of_culture_19() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___culture_19)); }
	inline String_t* get_culture_19() const { return ___culture_19; }
	inline String_t** get_address_of_culture_19() { return &___culture_19; }
	inline void set_culture_19(String_t* value)
	{
		___culture_19 = value;
		Il2CppCodeGenWriteBarrier((&___culture_19), value);
	}

	inline static int32_t get_offset_of_algid_20() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___algid_20)); }
	inline uint32_t get_algid_20() const { return ___algid_20; }
	inline uint32_t* get_address_of_algid_20() { return &___algid_20; }
	inline void set_algid_20(uint32_t value)
	{
		___algid_20 = value;
	}

	inline static int32_t get_offset_of_flags_21() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___flags_21)); }
	inline uint32_t get_flags_21() const { return ___flags_21; }
	inline uint32_t* get_address_of_flags_21() { return &___flags_21; }
	inline void set_flags_21(uint32_t value)
	{
		___flags_21 = value;
	}

	inline static int32_t get_offset_of_pekind_22() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___pekind_22)); }
	inline int32_t get_pekind_22() const { return ___pekind_22; }
	inline int32_t* get_address_of_pekind_22() { return &___pekind_22; }
	inline void set_pekind_22(int32_t value)
	{
		___pekind_22 = value;
	}

	inline static int32_t get_offset_of_delay_sign_23() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___delay_sign_23)); }
	inline bool get_delay_sign_23() const { return ___delay_sign_23; }
	inline bool* get_address_of_delay_sign_23() { return &___delay_sign_23; }
	inline void set_delay_sign_23(bool value)
	{
		___delay_sign_23 = value;
	}

	inline static int32_t get_offset_of_access_24() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___access_24)); }
	inline uint32_t get_access_24() const { return ___access_24; }
	inline uint32_t* get_address_of_access_24() { return &___access_24; }
	inline void set_access_24(uint32_t value)
	{
		___access_24 = value;
	}

	inline static int32_t get_offset_of_loaded_modules_25() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___loaded_modules_25)); }
	inline ModuleU5BU5D_t4238763736* get_loaded_modules_25() const { return ___loaded_modules_25; }
	inline ModuleU5BU5D_t4238763736** get_address_of_loaded_modules_25() { return &___loaded_modules_25; }
	inline void set_loaded_modules_25(ModuleU5BU5D_t4238763736* value)
	{
		___loaded_modules_25 = value;
		Il2CppCodeGenWriteBarrier((&___loaded_modules_25), value);
	}

	inline static int32_t get_offset_of_win32_resources_26() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___win32_resources_26)); }
	inline MonoWin32ResourceU5BU5D_t4084032906* get_win32_resources_26() const { return ___win32_resources_26; }
	inline MonoWin32ResourceU5BU5D_t4084032906** get_address_of_win32_resources_26() { return &___win32_resources_26; }
	inline void set_win32_resources_26(MonoWin32ResourceU5BU5D_t4084032906* value)
	{
		___win32_resources_26 = value;
		Il2CppCodeGenWriteBarrier((&___win32_resources_26), value);
	}

	inline static int32_t get_offset_of_permissions_minimum_27() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___permissions_minimum_27)); }
	inline RefEmitPermissionSetU5BU5D_t567451178* get_permissions_minimum_27() const { return ___permissions_minimum_27; }
	inline RefEmitPermissionSetU5BU5D_t567451178** get_address_of_permissions_minimum_27() { return &___permissions_minimum_27; }
	inline void set_permissions_minimum_27(RefEmitPermissionSetU5BU5D_t567451178* value)
	{
		___permissions_minimum_27 = value;
		Il2CppCodeGenWriteBarrier((&___permissions_minimum_27), value);
	}

	inline static int32_t get_offset_of_permissions_optional_28() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___permissions_optional_28)); }
	inline RefEmitPermissionSetU5BU5D_t567451178* get_permissions_optional_28() const { return ___permissions_optional_28; }
	inline RefEmitPermissionSetU5BU5D_t567451178** get_address_of_permissions_optional_28() { return &___permissions_optional_28; }
	inline void set_permissions_optional_28(RefEmitPermissionSetU5BU5D_t567451178* value)
	{
		___permissions_optional_28 = value;
		Il2CppCodeGenWriteBarrier((&___permissions_optional_28), value);
	}

	inline static int32_t get_offset_of_permissions_refused_29() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___permissions_refused_29)); }
	inline RefEmitPermissionSetU5BU5D_t567451178* get_permissions_refused_29() const { return ___permissions_refused_29; }
	inline RefEmitPermissionSetU5BU5D_t567451178** get_address_of_permissions_refused_29() { return &___permissions_refused_29; }
	inline void set_permissions_refused_29(RefEmitPermissionSetU5BU5D_t567451178* value)
	{
		___permissions_refused_29 = value;
		Il2CppCodeGenWriteBarrier((&___permissions_refused_29), value);
	}

	inline static int32_t get_offset_of_peKind_30() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___peKind_30)); }
	inline int32_t get_peKind_30() const { return ___peKind_30; }
	inline int32_t* get_address_of_peKind_30() { return &___peKind_30; }
	inline void set_peKind_30(int32_t value)
	{
		___peKind_30 = value;
	}

	inline static int32_t get_offset_of_machine_31() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___machine_31)); }
	inline int32_t get_machine_31() const { return ___machine_31; }
	inline int32_t* get_address_of_machine_31() { return &___machine_31; }
	inline void set_machine_31(int32_t value)
	{
		___machine_31 = value;
	}

	inline static int32_t get_offset_of_corlib_internal_32() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___corlib_internal_32)); }
	inline bool get_corlib_internal_32() const { return ___corlib_internal_32; }
	inline bool* get_address_of_corlib_internal_32() { return &___corlib_internal_32; }
	inline void set_corlib_internal_32(bool value)
	{
		___corlib_internal_32 = value;
	}

	inline static int32_t get_offset_of_type_forwarders_33() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___type_forwarders_33)); }
	inline TypeU5BU5D_t3940880105* get_type_forwarders_33() const { return ___type_forwarders_33; }
	inline TypeU5BU5D_t3940880105** get_address_of_type_forwarders_33() { return &___type_forwarders_33; }
	inline void set_type_forwarders_33(TypeU5BU5D_t3940880105* value)
	{
		___type_forwarders_33 = value;
		Il2CppCodeGenWriteBarrier((&___type_forwarders_33), value);
	}

	inline static int32_t get_offset_of_pktoken_34() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___pktoken_34)); }
	inline ByteU5BU5D_t4116647657* get_pktoken_34() const { return ___pktoken_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_pktoken_34() { return &___pktoken_34; }
	inline void set_pktoken_34(ByteU5BU5D_t4116647657* value)
	{
		___pktoken_34 = value;
		Il2CppCodeGenWriteBarrier((&___pktoken_34), value);
	}

	inline static int32_t get_offset_of_corlib_object_type_35() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___corlib_object_type_35)); }
	inline Type_t * get_corlib_object_type_35() const { return ___corlib_object_type_35; }
	inline Type_t ** get_address_of_corlib_object_type_35() { return &___corlib_object_type_35; }
	inline void set_corlib_object_type_35(Type_t * value)
	{
		___corlib_object_type_35 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_object_type_35), value);
	}

	inline static int32_t get_offset_of_corlib_value_type_36() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___corlib_value_type_36)); }
	inline Type_t * get_corlib_value_type_36() const { return ___corlib_value_type_36; }
	inline Type_t ** get_address_of_corlib_value_type_36() { return &___corlib_value_type_36; }
	inline void set_corlib_value_type_36(Type_t * value)
	{
		___corlib_value_type_36 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_value_type_36), value);
	}

	inline static int32_t get_offset_of_corlib_enum_type_37() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___corlib_enum_type_37)); }
	inline Type_t * get_corlib_enum_type_37() const { return ___corlib_enum_type_37; }
	inline Type_t ** get_address_of_corlib_enum_type_37() { return &___corlib_enum_type_37; }
	inline void set_corlib_enum_type_37(Type_t * value)
	{
		___corlib_enum_type_37 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_enum_type_37), value);
	}

	inline static int32_t get_offset_of_corlib_void_type_38() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___corlib_void_type_38)); }
	inline Type_t * get_corlib_void_type_38() const { return ___corlib_void_type_38; }
	inline Type_t ** get_address_of_corlib_void_type_38() { return &___corlib_void_type_38; }
	inline void set_corlib_void_type_38(Type_t * value)
	{
		___corlib_void_type_38 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_void_type_38), value);
	}

	inline static int32_t get_offset_of_resource_writers_39() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___resource_writers_39)); }
	inline ArrayList_t2718874744 * get_resource_writers_39() const { return ___resource_writers_39; }
	inline ArrayList_t2718874744 ** get_address_of_resource_writers_39() { return &___resource_writers_39; }
	inline void set_resource_writers_39(ArrayList_t2718874744 * value)
	{
		___resource_writers_39 = value;
		Il2CppCodeGenWriteBarrier((&___resource_writers_39), value);
	}

	inline static int32_t get_offset_of_version_res_40() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___version_res_40)); }
	inline Win32VersionResource_t1367628464 * get_version_res_40() const { return ___version_res_40; }
	inline Win32VersionResource_t1367628464 ** get_address_of_version_res_40() { return &___version_res_40; }
	inline void set_version_res_40(Win32VersionResource_t1367628464 * value)
	{
		___version_res_40 = value;
		Il2CppCodeGenWriteBarrier((&___version_res_40), value);
	}

	inline static int32_t get_offset_of_created_41() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___created_41)); }
	inline bool get_created_41() const { return ___created_41; }
	inline bool* get_address_of_created_41() { return &___created_41; }
	inline void set_created_41(bool value)
	{
		___created_41 = value;
	}

	inline static int32_t get_offset_of_is_module_only_42() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___is_module_only_42)); }
	inline bool get_is_module_only_42() const { return ___is_module_only_42; }
	inline bool* get_address_of_is_module_only_42() { return &___is_module_only_42; }
	inline void set_is_module_only_42(bool value)
	{
		___is_module_only_42 = value;
	}

	inline static int32_t get_offset_of_sn_43() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___sn_43)); }
	inline StrongName_t4093849377 * get_sn_43() const { return ___sn_43; }
	inline StrongName_t4093849377 ** get_address_of_sn_43() { return &___sn_43; }
	inline void set_sn_43(StrongName_t4093849377 * value)
	{
		___sn_43 = value;
		Il2CppCodeGenWriteBarrier((&___sn_43), value);
	}

	inline static int32_t get_offset_of_native_resource_44() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___native_resource_44)); }
	inline int32_t get_native_resource_44() const { return ___native_resource_44; }
	inline int32_t* get_address_of_native_resource_44() { return &___native_resource_44; }
	inline void set_native_resource_44(int32_t value)
	{
		___native_resource_44 = value;
	}

	inline static int32_t get_offset_of_is_compiler_context_45() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___is_compiler_context_45)); }
	inline bool get_is_compiler_context_45() const { return ___is_compiler_context_45; }
	inline bool* get_address_of_is_compiler_context_45() { return &___is_compiler_context_45; }
	inline void set_is_compiler_context_45(bool value)
	{
		___is_compiler_context_45 = value;
	}

	inline static int32_t get_offset_of_versioninfo_culture_46() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___versioninfo_culture_46)); }
	inline String_t* get_versioninfo_culture_46() const { return ___versioninfo_culture_46; }
	inline String_t** get_address_of_versioninfo_culture_46() { return &___versioninfo_culture_46; }
	inline void set_versioninfo_culture_46(String_t* value)
	{
		___versioninfo_culture_46 = value;
		Il2CppCodeGenWriteBarrier((&___versioninfo_culture_46), value);
	}

	inline static int32_t get_offset_of_manifest_module_47() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___manifest_module_47)); }
	inline ModuleBuilder_t731887691 * get_manifest_module_47() const { return ___manifest_module_47; }
	inline ModuleBuilder_t731887691 ** get_address_of_manifest_module_47() { return &___manifest_module_47; }
	inline void set_manifest_module_47(ModuleBuilder_t731887691 * value)
	{
		___manifest_module_47 = value;
		Il2CppCodeGenWriteBarrier((&___manifest_module_47), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYBUILDER_T359885250_H
#ifndef MONORESOURCE_T4103430009_H
#define MONORESOURCE_T4103430009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoResource
struct  MonoResource_t4103430009 
{
public:
	// System.Byte[] System.Reflection.Emit.MonoResource::data
	ByteU5BU5D_t4116647657* ___data_0;
	// System.String System.Reflection.Emit.MonoResource::name
	String_t* ___name_1;
	// System.String System.Reflection.Emit.MonoResource::filename
	String_t* ___filename_2;
	// System.Reflection.ResourceAttributes System.Reflection.Emit.MonoResource::attrs
	int32_t ___attrs_3;
	// System.Int32 System.Reflection.Emit.MonoResource::offset
	int32_t ___offset_4;
	// System.IO.Stream System.Reflection.Emit.MonoResource::stream
	Stream_t1273022909 * ___stream_5;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___data_0)); }
	inline ByteU5BU5D_t4116647657* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_t4116647657* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier((&___filename_2), value);
	}

	inline static int32_t get_offset_of_attrs_3() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___attrs_3)); }
	inline int32_t get_attrs_3() const { return ___attrs_3; }
	inline int32_t* get_address_of_attrs_3() { return &___attrs_3; }
	inline void set_attrs_3(int32_t value)
	{
		___attrs_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___stream_5)); }
	inline Stream_t1273022909 * get_stream_5() const { return ___stream_5; }
	inline Stream_t1273022909 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t1273022909 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t4103430009_marshaled_pinvoke
{
	uint8_t* ___data_0;
	char* ___name_1;
	char* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t1273022909 * ___stream_5;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t4103430009_marshaled_com
{
	uint8_t* ___data_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t1273022909 * ___stream_5;
};
#endif // MONORESOURCE_T4103430009_H
#ifndef REFEMITPERMISSIONSET_T484390987_H
#define REFEMITPERMISSIONSET_T484390987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.RefEmitPermissionSet
struct  RefEmitPermissionSet_t484390987 
{
public:
	// System.Security.Permissions.SecurityAction System.Reflection.Emit.RefEmitPermissionSet::action
	int32_t ___action_0;
	// System.String System.Reflection.Emit.RefEmitPermissionSet::pset
	String_t* ___pset_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t484390987, ___action_0)); }
	inline int32_t get_action_0() const { return ___action_0; }
	inline int32_t* get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(int32_t value)
	{
		___action_0 = value;
	}

	inline static int32_t get_offset_of_pset_1() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t484390987, ___pset_1)); }
	inline String_t* get_pset_1() const { return ___pset_1; }
	inline String_t** get_address_of_pset_1() { return &___pset_1; }
	inline void set_pset_1(String_t* value)
	{
		___pset_1 = value;
		Il2CppCodeGenWriteBarrier((&___pset_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t484390987_marshaled_pinvoke
{
	int32_t ___action_0;
	char* ___pset_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t484390987_marshaled_com
{
	int32_t ___action_0;
	Il2CppChar* ___pset_1;
};
#endif // REFEMITPERMISSIONSET_T484390987_H
#ifndef MANIFESTRESOURCEINFO_T2263214446_H
#define MANIFESTRESOURCEINFO_T2263214446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ManifestResourceInfo
struct  ManifestResourceInfo_t2263214446  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Reflection.ManifestResourceInfo::_assembly
	Assembly_t * ____assembly_0;
	// System.String System.Reflection.ManifestResourceInfo::_filename
	String_t* ____filename_1;
	// System.Reflection.ResourceLocation System.Reflection.ManifestResourceInfo::_location
	int32_t ____location_2;

public:
	inline static int32_t get_offset_of__assembly_0() { return static_cast<int32_t>(offsetof(ManifestResourceInfo_t2263214446, ____assembly_0)); }
	inline Assembly_t * get__assembly_0() const { return ____assembly_0; }
	inline Assembly_t ** get_address_of__assembly_0() { return &____assembly_0; }
	inline void set__assembly_0(Assembly_t * value)
	{
		____assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&____assembly_0), value);
	}

	inline static int32_t get_offset_of__filename_1() { return static_cast<int32_t>(offsetof(ManifestResourceInfo_t2263214446, ____filename_1)); }
	inline String_t* get__filename_1() const { return ____filename_1; }
	inline String_t** get_address_of__filename_1() { return &____filename_1; }
	inline void set__filename_1(String_t* value)
	{
		____filename_1 = value;
		Il2CppCodeGenWriteBarrier((&____filename_1), value);
	}

	inline static int32_t get_offset_of__location_2() { return static_cast<int32_t>(offsetof(ManifestResourceInfo_t2263214446, ____location_2)); }
	inline int32_t get__location_2() const { return ____location_2; }
	inline int32_t* get_address_of__location_2() { return &____location_2; }
	inline void set__location_2(int32_t value)
	{
		____location_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIFESTRESOURCEINFO_T2263214446_H
#ifndef MEMBERINFOSERIALIZATIONHOLDER_T1943730831_H
#define MEMBERINFOSERIALIZATIONHOLDER_T1943730831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfoSerializationHolder
struct  MemberInfoSerializationHolder_t1943730831  : public RuntimeObject
{
public:
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberName
	String_t* ____memberName_0;
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberSignature
	String_t* ____memberSignature_1;
	// System.Reflection.MemberTypes System.Reflection.MemberInfoSerializationHolder::_memberType
	int32_t ____memberType_2;
	// System.Type System.Reflection.MemberInfoSerializationHolder::_reflectedType
	Type_t * ____reflectedType_3;
	// System.Type[] System.Reflection.MemberInfoSerializationHolder::_genericArguments
	TypeU5BU5D_t3940880105* ____genericArguments_4;

public:
	inline static int32_t get_offset_of__memberName_0() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ____memberName_0)); }
	inline String_t* get__memberName_0() const { return ____memberName_0; }
	inline String_t** get_address_of__memberName_0() { return &____memberName_0; }
	inline void set__memberName_0(String_t* value)
	{
		____memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_0), value);
	}

	inline static int32_t get_offset_of__memberSignature_1() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ____memberSignature_1)); }
	inline String_t* get__memberSignature_1() const { return ____memberSignature_1; }
	inline String_t** get_address_of__memberSignature_1() { return &____memberSignature_1; }
	inline void set__memberSignature_1(String_t* value)
	{
		____memberSignature_1 = value;
		Il2CppCodeGenWriteBarrier((&____memberSignature_1), value);
	}

	inline static int32_t get_offset_of__memberType_2() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ____memberType_2)); }
	inline int32_t get__memberType_2() const { return ____memberType_2; }
	inline int32_t* get_address_of__memberType_2() { return &____memberType_2; }
	inline void set__memberType_2(int32_t value)
	{
		____memberType_2 = value;
	}

	inline static int32_t get_offset_of__reflectedType_3() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ____reflectedType_3)); }
	inline Type_t * get__reflectedType_3() const { return ____reflectedType_3; }
	inline Type_t ** get_address_of__reflectedType_3() { return &____reflectedType_3; }
	inline void set__reflectedType_3(Type_t * value)
	{
		____reflectedType_3 = value;
		Il2CppCodeGenWriteBarrier((&____reflectedType_3), value);
	}

	inline static int32_t get_offset_of__genericArguments_4() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ____genericArguments_4)); }
	inline TypeU5BU5D_t3940880105* get__genericArguments_4() const { return ____genericArguments_4; }
	inline TypeU5BU5D_t3940880105** get_address_of__genericArguments_4() { return &____genericArguments_4; }
	inline void set__genericArguments_4(TypeU5BU5D_t3940880105* value)
	{
		____genericArguments_4 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFOSERIALIZATIONHOLDER_T1943730831_H
#ifndef MODULE_T2987026101_H
#define MODULE_T2987026101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t2987026101  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t2987026101, ____impl_3)); }
	inline intptr_t get__impl_3() const { return ____impl_3; }
	inline intptr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(intptr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___assembly_4)); }
	inline Assembly_t * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t2987026101_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t2356120900 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t2356120900 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t2356120900 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t2356120900 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t2356120900 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t2356120900 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T2987026101_H
#ifndef MONOCMETHOD_T3191134373_H
#define MONOCMETHOD_T3191134373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t3191134373  : public ConstructorInfo_t5769829
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	intptr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t3191134373, ___mhandle_2)); }
	inline intptr_t get_mhandle_2() const { return ___mhandle_2; }
	inline intptr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(intptr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t3191134373, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t3191134373, ___reftype_4)); }
	inline Type_t * get_reftype_4() const { return ___reftype_4; }
	inline Type_t ** get_address_of_reftype_4() { return &___reftype_4; }
	inline void set_reftype_4(Type_t * value)
	{
		___reftype_4 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCMETHOD_T3191134373_H
#ifndef MONOEVENTINFO_T346866618_H
#define MONOEVENTINFO_T346866618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t346866618 
{
public:
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type_0;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type_1;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t * ___add_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t * ___remove_method_4;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t * ___raise_method_5;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs_6;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t2572182361* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t2572182361* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t2572182361** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t2572182361* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t346866618_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2572182361* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t346866618_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2572182361* ___other_methods_7;
};
#endif // MONOEVENTINFO_T346866618_H
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public FieldInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	intptr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t1871169219  ___fhandle_1;
	// System.String System.Reflection.MonoField::name
	String_t* ___name_2;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type_3;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoField_t, ___klass_0)); }
	inline intptr_t get_klass_0() const { return ___klass_0; }
	inline intptr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(intptr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_fhandle_1() { return static_cast<int32_t>(offsetof(MonoField_t, ___fhandle_1)); }
	inline RuntimeFieldHandle_t1871169219  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t1871169219 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t1871169219  value)
	{
		___fhandle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoField_t, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MonoField_t, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoField_t, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFIELD_T_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public MethodInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	intptr_t ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___mhandle_0)); }
	inline intptr_t get_mhandle_0() const { return ___mhandle_0; }
	inline intptr_t* get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(intptr_t value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_reftype_2() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___reftype_2)); }
	inline Type_t * get_reftype_2() const { return ___reftype_2; }
	inline Type_t ** get_address_of_reftype_2() { return &___reftype_2; }
	inline void set_reftype_2(Type_t * value)
	{
		___reftype_2 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHOD_T_H
#ifndef MONOMETHODINFO_T1248819020_H
#define MONOMETHODINFO_T1248819020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t1248819020 
{
public:
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret_1;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs_3;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___callconv_4)); }
	inline int32_t get_callconv_4() const { return ___callconv_4; }
	inline int32_t* get_address_of_callconv_4() { return &___callconv_4; }
	inline void set_callconv_4(int32_t value)
	{
		___callconv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1248819020_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1248819020_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T1248819020_H
#ifndef MONOPROPERTYINFO_T3087356066_H
#define MONOPROPERTYINFO_T3087356066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t3087356066 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_1;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_3;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_get_method_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___get_method_2)); }
	inline MethodInfo_t * get_get_method_2() const { return ___get_method_2; }
	inline MethodInfo_t ** get_address_of_get_method_2() { return &___get_method_2; }
	inline void set_get_method_2(MethodInfo_t * value)
	{
		___get_method_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_2), value);
	}

	inline static int32_t get_offset_of_set_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___set_method_3)); }
	inline MethodInfo_t * get_set_method_3() const { return ___set_method_3; }
	inline MethodInfo_t ** get_address_of_set_method_3() { return &___set_method_3; }
	inline void set_set_method_3(MethodInfo_t * value)
	{
		___set_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3087356066_marshaled_pinvoke
{
	Type_t * ___parent_0;
	char* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3087356066_marshaled_com
{
	Type_t * ___parent_0;
	Il2CppChar* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
#endif // MONOPROPERTYINFO_T3087356066_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t984015687 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline UnmanagedMarshal_t984015687 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t984015687 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t984015687 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T1861056598_H
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
#ifndef ADDEVENTADAPTER_T1787725097_H
#define ADDEVENTADAPTER_T1787725097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo/AddEventAdapter
struct  AddEventAdapter_t1787725097  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDEVENTADAPTER_T1787725097_H
#ifndef MONOGENERICCMETHOD_T4239028627_H
#define MONOGENERICCMETHOD_T4239028627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericCMethod
struct  MonoGenericCMethod_t4239028627  : public MonoCMethod_t3191134373
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICCMETHOD_T4239028627_H
#ifndef MONOGENERICMETHOD_T_H
#define MONOGENERICMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericMethod
struct  MonoGenericMethod_t  : public MonoMethod_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICMETHOD_T_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public PropertyInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t3087356066  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t2155025054 * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline intptr_t get_klass_0() const { return ___klass_0; }
	inline intptr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(intptr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline intptr_t get_prop_1() const { return ___prop_1; }
	inline intptr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(intptr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_t3087356066  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t3087356066 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t3087356066  value)
	{
		___info_2 = value;
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t2155025054 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t2155025054 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t2155025054 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef GETTERADAPTER_T2155025054_H
#define GETTERADAPTER_T2155025054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t2155025054  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T2155025054_H
#ifndef TYPEDELEGATOR_T3617470028_H
#define TYPEDELEGATOR_T3617470028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeDelegator
struct  TypeDelegator_t3617470028  : public Type_t
{
public:
	// System.Type System.Reflection.TypeDelegator::typeImpl
	Type_t * ___typeImpl_8;

public:
	inline static int32_t get_offset_of_typeImpl_8() { return static_cast<int32_t>(offsetof(TypeDelegator_t3617470028, ___typeImpl_8)); }
	inline Type_t * get_typeImpl_8() const { return ___typeImpl_8; }
	inline Type_t ** get_address_of_typeImpl_8() { return &___typeImpl_8; }
	inline void set_typeImpl_8(Type_t * value)
	{
		___typeImpl_8 = value;
		Il2CppCodeGenWriteBarrier((&___typeImpl_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDELEGATOR_T3617470028_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (MonoIOStat_t592533987)+ sizeof (RuntimeObject), sizeof(MonoIOStat_t592533987_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable400[6] = 
{
	MonoIOStat_t592533987::get_offset_of_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t592533987::get_offset_of_Attributes_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t592533987::get_offset_of_Length_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t592533987::get_offset_of_CreationTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t592533987::get_offset_of_LastAccessTime_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t592533987::get_offset_of_LastWriteTime_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (Path_t1605229823), -1, sizeof(Path_t1605229823_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable401[8] = 
{
	Path_t1605229823_StaticFields::get_offset_of_InvalidPathChars_0(),
	Path_t1605229823_StaticFields::get_offset_of_AltDirectorySeparatorChar_1(),
	Path_t1605229823_StaticFields::get_offset_of_DirectorySeparatorChar_2(),
	Path_t1605229823_StaticFields::get_offset_of_PathSeparator_3(),
	Path_t1605229823_StaticFields::get_offset_of_DirectorySeparatorStr_4(),
	Path_t1605229823_StaticFields::get_offset_of_VolumeSeparatorChar_5(),
	Path_t1605229823_StaticFields::get_offset_of_PathSeparatorChars_6(),
	Path_t1605229823_StaticFields::get_offset_of_dirEqualsVolume_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (PathTooLongException_t2919094560), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (SearchPattern_t3793128359), -1, sizeof(SearchPattern_t3793128359_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable403[2] = 
{
	SearchPattern_t3793128359_StaticFields::get_offset_of_WildcardChars_0(),
	SearchPattern_t3793128359_StaticFields::get_offset_of_InvalidChars_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (SeekOrigin_t1441174344)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable404[4] = 
{
	SeekOrigin_t1441174344::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (Stream_t1273022909), -1, sizeof(Stream_t1273022909_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable405[1] = 
{
	Stream_t1273022909_StaticFields::get_offset_of_Null_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (NullStream_t1684893697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { sizeof (StreamAsyncResult_t780248512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable407[6] = 
{
	StreamAsyncResult_t780248512::get_offset_of_state_0(),
	StreamAsyncResult_t780248512::get_offset_of_completed_1(),
	StreamAsyncResult_t780248512::get_offset_of_done_2(),
	StreamAsyncResult_t780248512::get_offset_of_exc_3(),
	StreamAsyncResult_t780248512::get_offset_of_nbytes_4(),
	StreamAsyncResult_t780248512::get_offset_of_wh_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (StreamReader_t4009935899), -1, sizeof(StreamReader_t4009935899_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable408[13] = 
{
	StreamReader_t4009935899::get_offset_of_input_buffer_2(),
	StreamReader_t4009935899::get_offset_of_decoded_buffer_3(),
	StreamReader_t4009935899::get_offset_of_decoded_count_4(),
	StreamReader_t4009935899::get_offset_of_pos_5(),
	StreamReader_t4009935899::get_offset_of_buffer_size_6(),
	StreamReader_t4009935899::get_offset_of_do_checks_7(),
	StreamReader_t4009935899::get_offset_of_encoding_8(),
	StreamReader_t4009935899::get_offset_of_decoder_9(),
	StreamReader_t4009935899::get_offset_of_base_stream_10(),
	StreamReader_t4009935899::get_offset_of_mayBlock_11(),
	StreamReader_t4009935899::get_offset_of_line_builder_12(),
	StreamReader_t4009935899_StaticFields::get_offset_of_Null_13(),
	StreamReader_t4009935899::get_offset_of_foundCR_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (NullStreamReader_t3364671800), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (StreamWriter_t1266378904), -1, sizeof(StreamWriter_t1266378904_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable410[10] = 
{
	StreamWriter_t1266378904::get_offset_of_internalEncoding_4(),
	StreamWriter_t1266378904::get_offset_of_internalStream_5(),
	StreamWriter_t1266378904::get_offset_of_iflush_6(),
	StreamWriter_t1266378904::get_offset_of_byte_buf_7(),
	StreamWriter_t1266378904::get_offset_of_byte_pos_8(),
	StreamWriter_t1266378904::get_offset_of_decode_buf_9(),
	StreamWriter_t1266378904::get_offset_of_decode_pos_10(),
	StreamWriter_t1266378904::get_offset_of_DisposedAlready_11(),
	StreamWriter_t1266378904::get_offset_of_preamble_done_12(),
	StreamWriter_t1266378904_StaticFields::get_offset_of_Null_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (StringReader_t3465604688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable411[3] = 
{
	StringReader_t3465604688::get_offset_of_source_2(),
	StringReader_t3465604688::get_offset_of_nextChar_3(),
	StringReader_t3465604688::get_offset_of_sourceLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (StringWriter_t802263757), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable412[2] = 
{
	StringWriter_t802263757::get_offset_of_internalString_4(),
	StringWriter_t802263757::get_offset_of_disposed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (TextReader_t283511965), -1, sizeof(TextReader_t283511965_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable413[1] = 
{
	TextReader_t283511965_StaticFields::get_offset_of_Null_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { sizeof (NullTextReader_t763622204), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { sizeof (SynchronizedReader_t1163115775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable415[1] = 
{
	SynchronizedReader_t1163115775::get_offset_of_reader_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { sizeof (TextWriter_t3478189236), -1, sizeof(TextWriter_t3478189236_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable416[3] = 
{
	TextWriter_t3478189236::get_offset_of_CoreNewLine_1(),
	TextWriter_t3478189236::get_offset_of_internalFormatProvider_2(),
	TextWriter_t3478189236_StaticFields::get_offset_of_Null_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { sizeof (NullTextWriter_t1377692031), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { sizeof (SynchronizedWriter_t1722853220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable418[2] = 
{
	SynchronizedWriter_t1722853220::get_offset_of_writer_4(),
	SynchronizedWriter_t1722853220::get_offset_of_neverClose_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { sizeof (UnexceptionalStreamReader_t2154476246), -1, sizeof(UnexceptionalStreamReader_t2154476246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable419[2] = 
{
	UnexceptionalStreamReader_t2154476246_StaticFields::get_offset_of_newline_15(),
	UnexceptionalStreamReader_t2154476246_StaticFields::get_offset_of_newlineChar_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { sizeof (UnexceptionalStreamWriter_t2539306459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { sizeof (UnmanagedMemoryStream_t4234117669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable421[8] = 
{
	UnmanagedMemoryStream_t4234117669::get_offset_of_length_2(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_closed_3(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_capacity_4(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_fileaccess_5(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_initial_pointer_6(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_initial_position_7(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_current_position_8(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_Closed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { sizeof (AmbiguousMatchException_t566690781), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { sizeof (Assembly_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable423[10] = 
{
	Assembly_t::get_offset_of__mono_assembly_0(),
	Assembly_t::get_offset_of_resolve_event_holder_1(),
	Assembly_t::get_offset_of__evidence_2(),
	Assembly_t::get_offset_of__minimum_3(),
	Assembly_t::get_offset_of__optional_4(),
	Assembly_t::get_offset_of__refuse_5(),
	Assembly_t::get_offset_of__granted_6(),
	Assembly_t::get_offset_of__denied_7(),
	Assembly_t::get_offset_of_fromByteArray_8(),
	Assembly_t::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { sizeof (ResolveEventHolder_t2120639521), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { sizeof (ResourceCloseHandler_t3610144673), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable425[1] = 
{
	ResourceCloseHandler_t3610144673::get_offset_of_module_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { sizeof (AssemblyCompanyAttribute_t909257512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable426[1] = 
{
	AssemblyCompanyAttribute_t909257512::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { sizeof (AssemblyConfigurationAttribute_t2167450097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable427[1] = 
{
	AssemblyConfigurationAttribute_t2167450097::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { sizeof (AssemblyCopyrightAttribute_t836190902), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable428[1] = 
{
	AssemblyCopyrightAttribute_t836190902::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { sizeof (AssemblyDefaultAliasAttribute_t2176720766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable429[1] = 
{
	AssemblyDefaultAliasAttribute_t2176720766::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { sizeof (AssemblyDelaySignAttribute_t176441654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable430[1] = 
{
	AssemblyDelaySignAttribute_t176441654::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { sizeof (AssemblyDescriptionAttribute_t1046996844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable431[1] = 
{
	AssemblyDescriptionAttribute_t1046996844::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { sizeof (AssemblyFileVersionAttribute_t14927972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable432[1] = 
{
	AssemblyFileVersionAttribute_t14927972::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { sizeof (AssemblyInformationalVersionAttribute_t3037764991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable433[1] = 
{
	AssemblyInformationalVersionAttribute_t3037764991::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { sizeof (AssemblyKeyFileAttribute_t2825689142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable434[1] = 
{
	AssemblyKeyFileAttribute_t2825689142::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { sizeof (AssemblyName_t270931938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable435[15] = 
{
	AssemblyName_t270931938::get_offset_of_name_0(),
	AssemblyName_t270931938::get_offset_of_codebase_1(),
	AssemblyName_t270931938::get_offset_of_major_2(),
	AssemblyName_t270931938::get_offset_of_minor_3(),
	AssemblyName_t270931938::get_offset_of_build_4(),
	AssemblyName_t270931938::get_offset_of_revision_5(),
	AssemblyName_t270931938::get_offset_of_cultureinfo_6(),
	AssemblyName_t270931938::get_offset_of_flags_7(),
	AssemblyName_t270931938::get_offset_of_hashalg_8(),
	AssemblyName_t270931938::get_offset_of_keypair_9(),
	AssemblyName_t270931938::get_offset_of_publicKey_10(),
	AssemblyName_t270931938::get_offset_of_keyToken_11(),
	AssemblyName_t270931938::get_offset_of_versioncompat_12(),
	AssemblyName_t270931938::get_offset_of_version_13(),
	AssemblyName_t270931938::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (AssemblyNameFlags_t3675421470)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable436[6] = 
{
	AssemblyNameFlags_t3675421470::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (AssemblyProductAttribute_t1000945320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable437[1] = 
{
	AssemblyProductAttribute_t1000945320::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (AssemblyTitleAttribute_t1901133402), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable438[1] = 
{
	AssemblyTitleAttribute_t1901133402::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { sizeof (AssemblyTrademarkAttribute_t3598190473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable439[1] = 
{
	AssemblyTrademarkAttribute_t3598190473::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { sizeof (Binder_t2999457153), -1, sizeof(Binder_t2999457153_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable440[1] = 
{
	Binder_t2999457153_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { sizeof (Default_t2456596213), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { sizeof (BindingFlags_t2721792723)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable442[21] = 
{
	BindingFlags_t2721792723::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { sizeof (CallingConventions_t2253234531)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable443[6] = 
{
	CallingConventions_t2253234531::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { sizeof (ConstructorInfo_t5769829), -1, sizeof(ConstructorInfo_t5769829_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable444[2] = 
{
	ConstructorInfo_t5769829_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t5769829_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { sizeof (CustomAttributeData_t1084486650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable445[3] = 
{
	CustomAttributeData_t1084486650::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t1084486650::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t1084486650::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { sizeof (CustomAttributeNamedArgument_t287865710)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable446[2] = 
{
	CustomAttributeNamedArgument_t287865710::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeNamedArgument_t287865710::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { sizeof (CustomAttributeTypedArgument_t2723150157)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable447[2] = 
{
	CustomAttributeTypedArgument_t2723150157::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeTypedArgument_t2723150157::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { sizeof (EventAttributes_t1153671773)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable448[5] = 
{
	EventAttributes_t1153671773::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable449[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { sizeof (AddEventAdapter_t1787725097), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { sizeof (FieldAttributes_t400321159)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable451[20] = 
{
	FieldAttributes_t400321159::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { sizeof (ImageFileMachine_t799743225)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable453[4] = 
{
	ImageFileMachine_t799743225::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { sizeof (LocalVariableInfo_t2426779395), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable454[3] = 
{
	LocalVariableInfo_t2426779395::get_offset_of_type_0(),
	LocalVariableInfo_t2426779395::get_offset_of_is_pinned_1(),
	LocalVariableInfo_t2426779395::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { sizeof (ManifestResourceInfo_t2263214446), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable455[3] = 
{
	ManifestResourceInfo_t2263214446::get_offset_of__assembly_0(),
	ManifestResourceInfo_t2263214446::get_offset_of__filename_1(),
	ManifestResourceInfo_t2263214446::get_offset_of__location_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize456 = { sizeof (MemberInfoSerializationHolder_t1943730831), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable456[5] = 
{
	MemberInfoSerializationHolder_t1943730831::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize457 = { sizeof (MemberTypes_t3790569052)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable457[10] = 
{
	MemberTypes_t3790569052::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize458 = { sizeof (MethodAttributes_t2366443849)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable458[25] = 
{
	MethodAttributes_t2366443849::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize459 = { sizeof (MethodBase_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize460 = { sizeof (MethodImplAttributes_t3646023817)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable460[15] = 
{
	MethodImplAttributes_t3646023817::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize461 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize462 = { sizeof (Missing_t508514592), -1, sizeof(Missing_t508514592_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable462[1] = 
{
	Missing_t508514592_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize463 = { sizeof (Module_t2987026101), -1, sizeof(Module_t2987026101_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable463[10] = 
{
	0,
	Module_t2987026101_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t2987026101_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t2987026101::get_offset_of__impl_3(),
	Module_t2987026101::get_offset_of_assembly_4(),
	Module_t2987026101::get_offset_of_fqname_5(),
	Module_t2987026101::get_offset_of_name_6(),
	Module_t2987026101::get_offset_of_scopename_7(),
	Module_t2987026101::get_offset_of_is_resource_8(),
	Module_t2987026101::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize464 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize465 = { sizeof (MonoGenericCMethod_t4239028627), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize466 = { sizeof (MonoEventInfo_t346866618)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable466[8] = 
{
	MonoEventInfo_t346866618::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize467 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable467[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize468 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable468[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize469 = { sizeof (MonoMethodInfo_t1248819020)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable469[5] = 
{
	MonoMethodInfo_t1248819020::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1248819020::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1248819020::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1248819020::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1248819020::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize470 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable470[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize471 = { sizeof (MonoCMethod_t3191134373), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable471[3] = 
{
	MonoCMethod_t3191134373::get_offset_of_mhandle_2(),
	MonoCMethod_t3191134373::get_offset_of_name_3(),
	MonoCMethod_t3191134373::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize472 = { sizeof (MonoPropertyInfo_t3087356066)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable472[5] = 
{
	MonoPropertyInfo_t3087356066::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize473 = { sizeof (PInfo_t446749821)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable473[7] = 
{
	PInfo_t446749821::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize474 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable474[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize475 = { sizeof (GetterAdapter_t2155025054), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize476 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize477 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize478 = { sizeof (ParameterAttributes_t1826424051)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable478[12] = 
{
	ParameterAttributes_t1826424051::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize479 = { sizeof (ParameterInfo_t1861056598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable479[7] = 
{
	ParameterInfo_t1861056598::get_offset_of_ClassImpl_0(),
	ParameterInfo_t1861056598::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t1861056598::get_offset_of_MemberImpl_2(),
	ParameterInfo_t1861056598::get_offset_of_NameImpl_3(),
	ParameterInfo_t1861056598::get_offset_of_PositionImpl_4(),
	ParameterInfo_t1861056598::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t1861056598::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize480 = { sizeof (ParameterModifier_t1461694466)+ sizeof (RuntimeObject), sizeof(ParameterModifier_t1461694466_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable480[1] = 
{
	ParameterModifier_t1461694466::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { sizeof (Pointer_t2088917139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable481[2] = 
{
	Pointer_t2088917139::get_offset_of_data_0(),
	Pointer_t2088917139::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { sizeof (PortableExecutableKinds_t1191923110)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable482[6] = 
{
	PortableExecutableKinds_t1191923110::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { sizeof (ProcessorArchitecture_t305929193)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable483[6] = 
{
	ProcessorArchitecture_t305929193::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { sizeof (PropertyAttributes_t3388002996)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable484[9] = 
{
	PropertyAttributes_t3388002996::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { sizeof (ReflectionTypeLoadException_t440884068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable486[2] = 
{
	ReflectionTypeLoadException_t440884068::get_offset_of_loaderExceptions_11(),
	ReflectionTypeLoadException_t440884068::get_offset_of_types_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { sizeof (ResourceAttributes_t3997964906)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable487[3] = 
{
	ResourceAttributes_t3997964906::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { sizeof (ResourceLocation_t1891396988)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable488[4] = 
{
	ResourceLocation_t1891396988::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { sizeof (StrongNameKeyPair_t3411219591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable489[5] = 
{
	StrongNameKeyPair_t3411219591::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t3411219591::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t3411219591::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t3411219591::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t3411219591::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { sizeof (TargetException_t3386045725), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { sizeof (TargetInvocationException_t4266643902), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { sizeof (TargetParameterCountException_t1216617239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { sizeof (TypeAttributes_t113483779)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable493[32] = 
{
	TypeAttributes_t113483779::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize494 = { sizeof (TypeDelegator_t3617470028), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable494[1] = 
{
	TypeDelegator_t3617470028::get_offset_of_typeImpl_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize495 = { sizeof (NativeResourceType_t2573963468)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable495[5] = 
{
	NativeResourceType_t2573963468::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize496 = { sizeof (RefEmitPermissionSet_t484390987)+ sizeof (RuntimeObject), sizeof(RefEmitPermissionSet_t484390987_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable496[2] = 
{
	RefEmitPermissionSet_t484390987::get_offset_of_action_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RefEmitPermissionSet_t484390987::get_offset_of_pset_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize497 = { sizeof (MonoResource_t4103430009)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable497[6] = 
{
	MonoResource_t4103430009::get_offset_of_data_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t4103430009::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t4103430009::get_offset_of_filename_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t4103430009::get_offset_of_attrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t4103430009::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t4103430009::get_offset_of_stream_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize498 = { sizeof (MonoWin32Resource_t1904229483)+ sizeof (RuntimeObject), sizeof(MonoWin32Resource_t1904229483_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable498[4] = 
{
	MonoWin32Resource_t1904229483::get_offset_of_res_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoWin32Resource_t1904229483::get_offset_of_res_id_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoWin32Resource_t1904229483::get_offset_of_lang_id_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoWin32Resource_t1904229483::get_offset_of_data_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize499 = { sizeof (AssemblyBuilder_t359885250), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable499[38] = 
{
	AssemblyBuilder_t359885250::get_offset_of_dynamic_assembly_10(),
	AssemblyBuilder_t359885250::get_offset_of_entry_point_11(),
	AssemblyBuilder_t359885250::get_offset_of_modules_12(),
	AssemblyBuilder_t359885250::get_offset_of_name_13(),
	AssemblyBuilder_t359885250::get_offset_of_dir_14(),
	AssemblyBuilder_t359885250::get_offset_of_cattrs_15(),
	AssemblyBuilder_t359885250::get_offset_of_resources_16(),
	AssemblyBuilder_t359885250::get_offset_of_public_key_17(),
	AssemblyBuilder_t359885250::get_offset_of_version_18(),
	AssemblyBuilder_t359885250::get_offset_of_culture_19(),
	AssemblyBuilder_t359885250::get_offset_of_algid_20(),
	AssemblyBuilder_t359885250::get_offset_of_flags_21(),
	AssemblyBuilder_t359885250::get_offset_of_pekind_22(),
	AssemblyBuilder_t359885250::get_offset_of_delay_sign_23(),
	AssemblyBuilder_t359885250::get_offset_of_access_24(),
	AssemblyBuilder_t359885250::get_offset_of_loaded_modules_25(),
	AssemblyBuilder_t359885250::get_offset_of_win32_resources_26(),
	AssemblyBuilder_t359885250::get_offset_of_permissions_minimum_27(),
	AssemblyBuilder_t359885250::get_offset_of_permissions_optional_28(),
	AssemblyBuilder_t359885250::get_offset_of_permissions_refused_29(),
	AssemblyBuilder_t359885250::get_offset_of_peKind_30(),
	AssemblyBuilder_t359885250::get_offset_of_machine_31(),
	AssemblyBuilder_t359885250::get_offset_of_corlib_internal_32(),
	AssemblyBuilder_t359885250::get_offset_of_type_forwarders_33(),
	AssemblyBuilder_t359885250::get_offset_of_pktoken_34(),
	AssemblyBuilder_t359885250::get_offset_of_corlib_object_type_35(),
	AssemblyBuilder_t359885250::get_offset_of_corlib_value_type_36(),
	AssemblyBuilder_t359885250::get_offset_of_corlib_enum_type_37(),
	AssemblyBuilder_t359885250::get_offset_of_corlib_void_type_38(),
	AssemblyBuilder_t359885250::get_offset_of_resource_writers_39(),
	AssemblyBuilder_t359885250::get_offset_of_version_res_40(),
	AssemblyBuilder_t359885250::get_offset_of_created_41(),
	AssemblyBuilder_t359885250::get_offset_of_is_module_only_42(),
	AssemblyBuilder_t359885250::get_offset_of_sn_43(),
	AssemblyBuilder_t359885250::get_offset_of_native_resource_44(),
	AssemblyBuilder_t359885250::get_offset_of_is_compiler_context_45(),
	AssemblyBuilder_t359885250::get_offset_of_versioninfo_culture_46(),
	AssemblyBuilder_t359885250::get_offset_of_manifest_module_47(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
