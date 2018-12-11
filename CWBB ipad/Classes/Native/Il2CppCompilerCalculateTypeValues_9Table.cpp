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


// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243024;
// System.ApplicationIdentity
struct ApplicationIdentity_t1917735356;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1196077101;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.Assembly
struct Assembly_t;
// System.Security.Cryptography.DESTransform
struct DESTransform_t4088905499;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t3251293021;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t2915669112;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct KeyContainerPermissionAccessEntryCollection_t4144114052;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t3355146440;
// System.Security.Policy.CodeGroup
struct CodeGroup_t3811807446;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t97388457;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t3052133691;
// System.Security.Principal.IIdentity
struct IIdentity_t2948385546;
// System.Security.SecurityElement
struct SecurityElement_t1046076091;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.UInt64[]
struct UInt64U5BU5D_t1659327989;
// System.Version
struct Version_t3456873960;




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
#ifndef SYMMETRICTRANSFORM_T3802591842_H
#define SYMMETRICTRANSFORM_T3802591842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3802591842  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4254223087 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t4116647657* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t4116647657* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t4116647657* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t4116647657* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t386037858 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___algo_0)); }
	inline SymmetricAlgorithm_t4254223087 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4254223087 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp_3)); }
	inline ByteU5BU5D_t4116647657* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t4116647657* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp2_4)); }
	inline ByteU5BU5D_t4116647657* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t4116647657* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workBuff_5)); }
	inline ByteU5BU5D_t4116647657* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t4116647657* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workout_6)); }
	inline ByteU5BU5D_t4116647657* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t4116647657* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ____rng_11)); }
	inline RandomNumberGenerator_t386037858 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t386037858 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3802591842_H
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
#ifndef CODEACCESSPERMISSION_T2681295399_H
#define CODEACCESSPERMISSION_T2681295399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t2681295399  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T2681295399_H
#ifndef ASYMMETRICKEYEXCHANGEDEFORMATTER_T3370779160_H
#define ASYMMETRICKEYEXCHANGEDEFORMATTER_T3370779160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
struct  AsymmetricKeyExchangeDeformatter_t3370779160  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEDEFORMATTER_T3370779160_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T937192061_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T937192061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t937192061  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T937192061_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T2681190756_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T2681190756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t2681190756  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T2681190756_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T3486936014_H
#define ASYMMETRICSIGNATUREFORMATTER_T3486936014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t3486936014  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T3486936014_H
#ifndef HASHALGORITHM_T1432317219_H
#define HASHALGORITHM_T1432317219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t1432317219  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t4116647657* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___HashValue_0)); }
	inline ByteU5BU5D_t4116647657* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t4116647657* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T1432317219_H
#ifndef SHA1INTERNAL_T3251293021_H
#define SHA1INTERNAL_T3251293021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Internal
struct  SHA1Internal_t3251293021  : public RuntimeObject
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t2770800703* ____H_2;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count_3;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t4116647657* ____ProcessingBuffer_4;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_5;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t2770800703* ___buff_6;

public:
	inline static int32_t get_offset_of__H_2() { return static_cast<int32_t>(offsetof(SHA1Internal_t3251293021, ____H_2)); }
	inline UInt32U5BU5D_t2770800703* get__H_2() const { return ____H_2; }
	inline UInt32U5BU5D_t2770800703** get_address_of__H_2() { return &____H_2; }
	inline void set__H_2(UInt32U5BU5D_t2770800703* value)
	{
		____H_2 = value;
		Il2CppCodeGenWriteBarrier((&____H_2), value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(SHA1Internal_t3251293021, ___count_3)); }
	inline uint64_t get_count_3() const { return ___count_3; }
	inline uint64_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(uint64_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_4() { return static_cast<int32_t>(offsetof(SHA1Internal_t3251293021, ____ProcessingBuffer_4)); }
	inline ByteU5BU5D_t4116647657* get__ProcessingBuffer_4() const { return ____ProcessingBuffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__ProcessingBuffer_4() { return &____ProcessingBuffer_4; }
	inline void set__ProcessingBuffer_4(ByteU5BU5D_t4116647657* value)
	{
		____ProcessingBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_4), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_5() { return static_cast<int32_t>(offsetof(SHA1Internal_t3251293021, ____ProcessingBufferCount_5)); }
	inline int32_t get__ProcessingBufferCount_5() const { return ____ProcessingBufferCount_5; }
	inline int32_t* get_address_of__ProcessingBufferCount_5() { return &____ProcessingBufferCount_5; }
	inline void set__ProcessingBufferCount_5(int32_t value)
	{
		____ProcessingBufferCount_5 = value;
	}

	inline static int32_t get_offset_of_buff_6() { return static_cast<int32_t>(offsetof(SHA1Internal_t3251293021, ___buff_6)); }
	inline UInt32U5BU5D_t2770800703* get_buff_6() const { return ___buff_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of_buff_6() { return &___buff_6; }
	inline void set_buff_6(UInt32U5BU5D_t2770800703* value)
	{
		___buff_6 = value;
		Il2CppCodeGenWriteBarrier((&___buff_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1INTERNAL_T3251293021_H
#ifndef SHACONSTANTS_T1360924992_H
#define SHACONSTANTS_T1360924992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHAConstants
struct  SHAConstants_t1360924992  : public RuntimeObject
{
public:

public:
};

struct SHAConstants_t1360924992_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHAConstants::K1
	UInt32U5BU5D_t2770800703* ___K1_0;
	// System.UInt64[] System.Security.Cryptography.SHAConstants::K2
	UInt64U5BU5D_t1659327989* ___K2_1;

public:
	inline static int32_t get_offset_of_K1_0() { return static_cast<int32_t>(offsetof(SHAConstants_t1360924992_StaticFields, ___K1_0)); }
	inline UInt32U5BU5D_t2770800703* get_K1_0() const { return ___K1_0; }
	inline UInt32U5BU5D_t2770800703** get_address_of_K1_0() { return &___K1_0; }
	inline void set_K1_0(UInt32U5BU5D_t2770800703* value)
	{
		___K1_0 = value;
		Il2CppCodeGenWriteBarrier((&___K1_0), value);
	}

	inline static int32_t get_offset_of_K2_1() { return static_cast<int32_t>(offsetof(SHAConstants_t1360924992_StaticFields, ___K2_1)); }
	inline UInt64U5BU5D_t1659327989* get_K2_1() const { return ___K2_1; }
	inline UInt64U5BU5D_t1659327989** get_address_of_K2_1() { return &___K2_1; }
	inline void set_K2_1(UInt64U5BU5D_t1659327989* value)
	{
		___K2_1 = value;
		Il2CppCodeGenWriteBarrier((&___K2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHACONSTANTS_T1360924992_H
#ifndef SIGNATUREDESCRIPTION_T1971889425_H
#define SIGNATUREDESCRIPTION_T1971889425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SignatureDescription
struct  SignatureDescription_t1971889425  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.SignatureDescription::_DeformatterAlgorithm
	String_t* ____DeformatterAlgorithm_0;
	// System.String System.Security.Cryptography.SignatureDescription::_DigestAlgorithm
	String_t* ____DigestAlgorithm_1;
	// System.String System.Security.Cryptography.SignatureDescription::_FormatterAlgorithm
	String_t* ____FormatterAlgorithm_2;
	// System.String System.Security.Cryptography.SignatureDescription::_KeyAlgorithm
	String_t* ____KeyAlgorithm_3;

public:
	inline static int32_t get_offset_of__DeformatterAlgorithm_0() { return static_cast<int32_t>(offsetof(SignatureDescription_t1971889425, ____DeformatterAlgorithm_0)); }
	inline String_t* get__DeformatterAlgorithm_0() const { return ____DeformatterAlgorithm_0; }
	inline String_t** get_address_of__DeformatterAlgorithm_0() { return &____DeformatterAlgorithm_0; }
	inline void set__DeformatterAlgorithm_0(String_t* value)
	{
		____DeformatterAlgorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____DeformatterAlgorithm_0), value);
	}

	inline static int32_t get_offset_of__DigestAlgorithm_1() { return static_cast<int32_t>(offsetof(SignatureDescription_t1971889425, ____DigestAlgorithm_1)); }
	inline String_t* get__DigestAlgorithm_1() const { return ____DigestAlgorithm_1; }
	inline String_t** get_address_of__DigestAlgorithm_1() { return &____DigestAlgorithm_1; }
	inline void set__DigestAlgorithm_1(String_t* value)
	{
		____DigestAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____DigestAlgorithm_1), value);
	}

	inline static int32_t get_offset_of__FormatterAlgorithm_2() { return static_cast<int32_t>(offsetof(SignatureDescription_t1971889425, ____FormatterAlgorithm_2)); }
	inline String_t* get__FormatterAlgorithm_2() const { return ____FormatterAlgorithm_2; }
	inline String_t** get_address_of__FormatterAlgorithm_2() { return &____FormatterAlgorithm_2; }
	inline void set__FormatterAlgorithm_2(String_t* value)
	{
		____FormatterAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____FormatterAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__KeyAlgorithm_3() { return static_cast<int32_t>(offsetof(SignatureDescription_t1971889425, ____KeyAlgorithm_3)); }
	inline String_t* get__KeyAlgorithm_3() const { return ____KeyAlgorithm_3; }
	inline String_t** get_address_of__KeyAlgorithm_3() { return &____KeyAlgorithm_3; }
	inline void set__KeyAlgorithm_3(String_t* value)
	{
		____KeyAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&____KeyAlgorithm_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNATUREDESCRIPTION_T1971889425_H
#ifndef TOBASE64TRANSFORM_T2551557057_H
#define TOBASE64TRANSFORM_T2551557057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t2551557057  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.ToBase64Transform::m_disposed
	bool ___m_disposed_2;

public:
	inline static int32_t get_offset_of_m_disposed_2() { return static_cast<int32_t>(offsetof(ToBase64Transform_t2551557057, ___m_disposed_2)); }
	inline bool get_m_disposed_2() const { return ___m_disposed_2; }
	inline bool* get_address_of_m_disposed_2() { return &___m_disposed_2; }
	inline void set_m_disposed_2(bool value)
	{
		___m_disposed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T2551557057_H
#ifndef X509CERTIFICATE_T713131622_H
#define X509CERTIFICATE_T713131622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t713131622  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t489243024 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t4116647657* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___x509_0)); }
	inline X509Certificate_t489243024 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t489243024 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t489243024 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t4116647657* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t4116647657* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T713131622_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T4144114052_H
#define KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T4144114052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct  KeyContainerPermissionAccessEntryCollection_t4144114052  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::_list
	ArrayList_t2718874744 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryCollection_t4144114052, ____list_0)); }
	inline ArrayList_t2718874744 * get__list_0() const { return ____list_0; }
	inline ArrayList_t2718874744 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t2718874744 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T4144114052_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3641947072_H
#define KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3641947072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator
struct  KeyContainerPermissionAccessEntryEnumerator_t3641947072  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::e
	RuntimeObject* ___e_0;

public:
	inline static int32_t get_offset_of_e_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryEnumerator_t3641947072, ___e_0)); }
	inline RuntimeObject* get_e_0() const { return ___e_0; }
	inline RuntimeObject** get_address_of_e_0() { return &___e_0; }
	inline void set_e_0(RuntimeObject* value)
	{
		___e_0 = value;
		Il2CppCodeGenWriteBarrier((&___e_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3641947072_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#define STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t3355146440  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t4116647657* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t3355146440, ___pubkey_0)); }
	inline ByteU5BU5D_t4116647657* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t4116647657* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#ifndef ALLMEMBERSHIPCONDITION_T198137363_H
#define ALLMEMBERSHIPCONDITION_T198137363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.AllMembershipCondition
struct  AllMembershipCondition_t198137363  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.AllMembershipCondition::version
	int32_t ___version_0;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(AllMembershipCondition_t198137363, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLMEMBERSHIPCONDITION_T198137363_H
#ifndef APPLICATIONTRUST_T3270368423_H
#define APPLICATIONTRUST_T3270368423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t3270368423  : public RuntimeObject
{
public:
	// System.ApplicationIdentity System.Security.Policy.ApplicationTrust::_appid
	ApplicationIdentity_t1917735356 * ____appid_0;
	// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::_defaultPolicy
	PolicyStatement_t3052133691 * ____defaultPolicy_1;
	// System.Object System.Security.Policy.ApplicationTrust::_xtranfo
	RuntimeObject * ____xtranfo_2;
	// System.Boolean System.Security.Policy.ApplicationTrust::_trustrun
	bool ____trustrun_3;
	// System.Boolean System.Security.Policy.ApplicationTrust::_persist
	bool ____persist_4;
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_5;

public:
	inline static int32_t get_offset_of__appid_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____appid_0)); }
	inline ApplicationIdentity_t1917735356 * get__appid_0() const { return ____appid_0; }
	inline ApplicationIdentity_t1917735356 ** get_address_of__appid_0() { return &____appid_0; }
	inline void set__appid_0(ApplicationIdentity_t1917735356 * value)
	{
		____appid_0 = value;
		Il2CppCodeGenWriteBarrier((&____appid_0), value);
	}

	inline static int32_t get_offset_of__defaultPolicy_1() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____defaultPolicy_1)); }
	inline PolicyStatement_t3052133691 * get__defaultPolicy_1() const { return ____defaultPolicy_1; }
	inline PolicyStatement_t3052133691 ** get_address_of__defaultPolicy_1() { return &____defaultPolicy_1; }
	inline void set__defaultPolicy_1(PolicyStatement_t3052133691 * value)
	{
		____defaultPolicy_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultPolicy_1), value);
	}

	inline static int32_t get_offset_of__xtranfo_2() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____xtranfo_2)); }
	inline RuntimeObject * get__xtranfo_2() const { return ____xtranfo_2; }
	inline RuntimeObject ** get_address_of__xtranfo_2() { return &____xtranfo_2; }
	inline void set__xtranfo_2(RuntimeObject * value)
	{
		____xtranfo_2 = value;
		Il2CppCodeGenWriteBarrier((&____xtranfo_2), value);
	}

	inline static int32_t get_offset_of__trustrun_3() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____trustrun_3)); }
	inline bool get__trustrun_3() const { return ____trustrun_3; }
	inline bool* get_address_of__trustrun_3() { return &____trustrun_3; }
	inline void set__trustrun_3(bool value)
	{
		____trustrun_3 = value;
	}

	inline static int32_t get_offset_of__persist_4() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____persist_4)); }
	inline bool get__persist_4() const { return ____persist_4; }
	inline bool* get_address_of__persist_4() { return &____persist_4; }
	inline void set__persist_4(bool value)
	{
		____persist_4 = value;
	}

	inline static int32_t get_offset_of_fullTrustAssemblies_5() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ___fullTrustAssemblies_5)); }
	inline RuntimeObject* get_fullTrustAssemblies_5() const { return ___fullTrustAssemblies_5; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_5() { return &___fullTrustAssemblies_5; }
	inline void set_fullTrustAssemblies_5(RuntimeObject* value)
	{
		___fullTrustAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T3270368423_H
#ifndef CODECONNECTACCESS_T1103527196_H
#define CODECONNECTACCESS_T1103527196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeConnectAccess
struct  CodeConnectAccess_t1103527196  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.CodeConnectAccess::_scheme
	String_t* ____scheme_4;
	// System.Int32 System.Security.Policy.CodeConnectAccess::_port
	int32_t ____port_5;

public:
	inline static int32_t get_offset_of__scheme_4() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196, ____scheme_4)); }
	inline String_t* get__scheme_4() const { return ____scheme_4; }
	inline String_t** get_address_of__scheme_4() { return &____scheme_4; }
	inline void set__scheme_4(String_t* value)
	{
		____scheme_4 = value;
		Il2CppCodeGenWriteBarrier((&____scheme_4), value);
	}

	inline static int32_t get_offset_of__port_5() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196, ____port_5)); }
	inline int32_t get__port_5() const { return ____port_5; }
	inline int32_t* get_address_of__port_5() { return &____port_5; }
	inline void set__port_5(int32_t value)
	{
		____port_5 = value;
	}
};

struct CodeConnectAccess_t1103527196_StaticFields
{
public:
	// System.String System.Security.Policy.CodeConnectAccess::AnyScheme
	String_t* ___AnyScheme_0;
	// System.Int32 System.Security.Policy.CodeConnectAccess::DefaultPort
	int32_t ___DefaultPort_1;
	// System.Int32 System.Security.Policy.CodeConnectAccess::OriginPort
	int32_t ___OriginPort_2;
	// System.String System.Security.Policy.CodeConnectAccess::OriginScheme
	String_t* ___OriginScheme_3;

public:
	inline static int32_t get_offset_of_AnyScheme_0() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___AnyScheme_0)); }
	inline String_t* get_AnyScheme_0() const { return ___AnyScheme_0; }
	inline String_t** get_address_of_AnyScheme_0() { return &___AnyScheme_0; }
	inline void set_AnyScheme_0(String_t* value)
	{
		___AnyScheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___AnyScheme_0), value);
	}

	inline static int32_t get_offset_of_DefaultPort_1() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___DefaultPort_1)); }
	inline int32_t get_DefaultPort_1() const { return ___DefaultPort_1; }
	inline int32_t* get_address_of_DefaultPort_1() { return &___DefaultPort_1; }
	inline void set_DefaultPort_1(int32_t value)
	{
		___DefaultPort_1 = value;
	}

	inline static int32_t get_offset_of_OriginPort_2() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___OriginPort_2)); }
	inline int32_t get_OriginPort_2() const { return ___OriginPort_2; }
	inline int32_t* get_address_of_OriginPort_2() { return &___OriginPort_2; }
	inline void set_OriginPort_2(int32_t value)
	{
		___OriginPort_2 = value;
	}

	inline static int32_t get_offset_of_OriginScheme_3() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___OriginScheme_3)); }
	inline String_t* get_OriginScheme_3() const { return ___OriginScheme_3; }
	inline String_t** get_address_of_OriginScheme_3() { return &___OriginScheme_3; }
	inline void set_OriginScheme_3(String_t* value)
	{
		___OriginScheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___OriginScheme_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODECONNECTACCESS_T1103527196_H
#ifndef CODEGROUP_T3811807446_H
#define CODEGROUP_T3811807446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeGroup
struct  CodeGroup_t3811807446  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::m_policy
	PolicyStatement_t3052133691 * ___m_policy_0;
	// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::m_membershipCondition
	RuntimeObject* ___m_membershipCondition_1;
	// System.String System.Security.Policy.CodeGroup::m_description
	String_t* ___m_description_2;
	// System.String System.Security.Policy.CodeGroup::m_name
	String_t* ___m_name_3;
	// System.Collections.ArrayList System.Security.Policy.CodeGroup::m_children
	ArrayList_t2718874744 * ___m_children_4;

public:
	inline static int32_t get_offset_of_m_policy_0() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_policy_0)); }
	inline PolicyStatement_t3052133691 * get_m_policy_0() const { return ___m_policy_0; }
	inline PolicyStatement_t3052133691 ** get_address_of_m_policy_0() { return &___m_policy_0; }
	inline void set_m_policy_0(PolicyStatement_t3052133691 * value)
	{
		___m_policy_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_policy_0), value);
	}

	inline static int32_t get_offset_of_m_membershipCondition_1() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_membershipCondition_1)); }
	inline RuntimeObject* get_m_membershipCondition_1() const { return ___m_membershipCondition_1; }
	inline RuntimeObject** get_address_of_m_membershipCondition_1() { return &___m_membershipCondition_1; }
	inline void set_m_membershipCondition_1(RuntimeObject* value)
	{
		___m_membershipCondition_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_membershipCondition_1), value);
	}

	inline static int32_t get_offset_of_m_description_2() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_description_2)); }
	inline String_t* get_m_description_2() const { return ___m_description_2; }
	inline String_t** get_address_of_m_description_2() { return &___m_description_2; }
	inline void set_m_description_2(String_t* value)
	{
		___m_description_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_description_2), value);
	}

	inline static int32_t get_offset_of_m_name_3() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_name_3)); }
	inline String_t* get_m_name_3() const { return ___m_name_3; }
	inline String_t** get_address_of_m_name_3() { return &___m_name_3; }
	inline void set_m_name_3(String_t* value)
	{
		___m_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_3), value);
	}

	inline static int32_t get_offset_of_m_children_4() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_children_4)); }
	inline ArrayList_t2718874744 * get_m_children_4() const { return ___m_children_4; }
	inline ArrayList_t2718874744 ** get_address_of_m_children_4() { return &___m_children_4; }
	inline void set_m_children_4(ArrayList_t2718874744 * value)
	{
		___m_children_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_children_4), value);
	}
};

struct CodeGroup_t3811807446_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Policy.CodeGroup::<>f__switch$map2E
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2E_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2E_5() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446_StaticFields, ___U3CU3Ef__switchU24map2E_5)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2E_5() const { return ___U3CU3Ef__switchU24map2E_5; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2E_5() { return &___U3CU3Ef__switchU24map2E_5; }
	inline void set_U3CU3Ef__switchU24map2E_5(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2E_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2E_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGROUP_T3811807446_H
#ifndef DEFAULTPOLICIES_T2520506789_H
#define DEFAULTPOLICIES_T2520506789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies
struct  DefaultPolicies_t2520506789  : public RuntimeObject
{
public:

public:
};

struct DefaultPolicies_t2520506789_StaticFields
{
public:
	// System.Version System.Security.Policy.DefaultPolicies::_fxVersion
	Version_t3456873960 * ____fxVersion_0;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_ecmaKey
	ByteU5BU5D_t4116647657* ____ecmaKey_1;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_ecma
	StrongNamePublicKeyBlob_t3355146440 * ____ecma_2;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_msFinalKey
	ByteU5BU5D_t4116647657* ____msFinalKey_3;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_msFinal
	StrongNamePublicKeyBlob_t3355146440 * ____msFinal_4;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_fullTrust
	NamedPermissionSet_t2915669112 * ____fullTrust_5;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_localIntranet
	NamedPermissionSet_t2915669112 * ____localIntranet_6;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_internet
	NamedPermissionSet_t2915669112 * ____internet_7;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_skipVerification
	NamedPermissionSet_t2915669112 * ____skipVerification_8;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_execution
	NamedPermissionSet_t2915669112 * ____execution_9;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_nothing
	NamedPermissionSet_t2915669112 * ____nothing_10;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_everything
	NamedPermissionSet_t2915669112 * ____everything_11;

public:
	inline static int32_t get_offset_of__fxVersion_0() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____fxVersion_0)); }
	inline Version_t3456873960 * get__fxVersion_0() const { return ____fxVersion_0; }
	inline Version_t3456873960 ** get_address_of__fxVersion_0() { return &____fxVersion_0; }
	inline void set__fxVersion_0(Version_t3456873960 * value)
	{
		____fxVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&____fxVersion_0), value);
	}

	inline static int32_t get_offset_of__ecmaKey_1() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____ecmaKey_1)); }
	inline ByteU5BU5D_t4116647657* get__ecmaKey_1() const { return ____ecmaKey_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__ecmaKey_1() { return &____ecmaKey_1; }
	inline void set__ecmaKey_1(ByteU5BU5D_t4116647657* value)
	{
		____ecmaKey_1 = value;
		Il2CppCodeGenWriteBarrier((&____ecmaKey_1), value);
	}

	inline static int32_t get_offset_of__ecma_2() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____ecma_2)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get__ecma_2() const { return ____ecma_2; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of__ecma_2() { return &____ecma_2; }
	inline void set__ecma_2(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		____ecma_2 = value;
		Il2CppCodeGenWriteBarrier((&____ecma_2), value);
	}

	inline static int32_t get_offset_of__msFinalKey_3() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____msFinalKey_3)); }
	inline ByteU5BU5D_t4116647657* get__msFinalKey_3() const { return ____msFinalKey_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__msFinalKey_3() { return &____msFinalKey_3; }
	inline void set__msFinalKey_3(ByteU5BU5D_t4116647657* value)
	{
		____msFinalKey_3 = value;
		Il2CppCodeGenWriteBarrier((&____msFinalKey_3), value);
	}

	inline static int32_t get_offset_of__msFinal_4() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____msFinal_4)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get__msFinal_4() const { return ____msFinal_4; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of__msFinal_4() { return &____msFinal_4; }
	inline void set__msFinal_4(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		____msFinal_4 = value;
		Il2CppCodeGenWriteBarrier((&____msFinal_4), value);
	}

	inline static int32_t get_offset_of__fullTrust_5() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____fullTrust_5)); }
	inline NamedPermissionSet_t2915669112 * get__fullTrust_5() const { return ____fullTrust_5; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__fullTrust_5() { return &____fullTrust_5; }
	inline void set__fullTrust_5(NamedPermissionSet_t2915669112 * value)
	{
		____fullTrust_5 = value;
		Il2CppCodeGenWriteBarrier((&____fullTrust_5), value);
	}

	inline static int32_t get_offset_of__localIntranet_6() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____localIntranet_6)); }
	inline NamedPermissionSet_t2915669112 * get__localIntranet_6() const { return ____localIntranet_6; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__localIntranet_6() { return &____localIntranet_6; }
	inline void set__localIntranet_6(NamedPermissionSet_t2915669112 * value)
	{
		____localIntranet_6 = value;
		Il2CppCodeGenWriteBarrier((&____localIntranet_6), value);
	}

	inline static int32_t get_offset_of__internet_7() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____internet_7)); }
	inline NamedPermissionSet_t2915669112 * get__internet_7() const { return ____internet_7; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__internet_7() { return &____internet_7; }
	inline void set__internet_7(NamedPermissionSet_t2915669112 * value)
	{
		____internet_7 = value;
		Il2CppCodeGenWriteBarrier((&____internet_7), value);
	}

	inline static int32_t get_offset_of__skipVerification_8() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____skipVerification_8)); }
	inline NamedPermissionSet_t2915669112 * get__skipVerification_8() const { return ____skipVerification_8; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__skipVerification_8() { return &____skipVerification_8; }
	inline void set__skipVerification_8(NamedPermissionSet_t2915669112 * value)
	{
		____skipVerification_8 = value;
		Il2CppCodeGenWriteBarrier((&____skipVerification_8), value);
	}

	inline static int32_t get_offset_of__execution_9() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____execution_9)); }
	inline NamedPermissionSet_t2915669112 * get__execution_9() const { return ____execution_9; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__execution_9() { return &____execution_9; }
	inline void set__execution_9(NamedPermissionSet_t2915669112 * value)
	{
		____execution_9 = value;
		Il2CppCodeGenWriteBarrier((&____execution_9), value);
	}

	inline static int32_t get_offset_of__nothing_10() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____nothing_10)); }
	inline NamedPermissionSet_t2915669112 * get__nothing_10() const { return ____nothing_10; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__nothing_10() { return &____nothing_10; }
	inline void set__nothing_10(NamedPermissionSet_t2915669112 * value)
	{
		____nothing_10 = value;
		Il2CppCodeGenWriteBarrier((&____nothing_10), value);
	}

	inline static int32_t get_offset_of__everything_11() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____everything_11)); }
	inline NamedPermissionSet_t2915669112 * get__everything_11() const { return ____everything_11; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__everything_11() { return &____everything_11; }
	inline void set__everything_11(NamedPermissionSet_t2915669112 * value)
	{
		____everything_11 = value;
		Il2CppCodeGenWriteBarrier((&____everything_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPOLICIES_T2520506789_H
#ifndef EVIDENCE_T2008144148_H
#define EVIDENCE_T2008144148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t2008144148  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t2718874744 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t2718874744 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___hostEvidenceList_1)); }
	inline ArrayList_t2718874744 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t2718874744 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t2718874744 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___assemblyEvidenceList_2)); }
	inline ArrayList_t2718874744 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t2718874744 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t2718874744 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T2008144148_H
#ifndef EVIDENCEENUMERATOR_T1708166667_H
#define EVIDENCEENUMERATOR_T1708166667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t1708166667  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T1708166667_H
#ifndef GACINSTALLED_T3565883570_H
#define GACINSTALLED_T3565883570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.GacInstalled
struct  GacInstalled_t3565883570  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GACINSTALLED_T3565883570_H
#ifndef HASH_T5925575_H
#define HASH_T5925575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t5925575  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t4116647657* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t5925575, ___assembly_0)); }
	inline Assembly_t * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t5925575, ___data_1)); }
	inline ByteU5BU5D_t4116647657* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t4116647657* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T5925575_H
#ifndef MEMBERSHIPCONDITIONHELPER_T2246572704_H
#define MEMBERSHIPCONDITIONHELPER_T2246572704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.MembershipConditionHelper
struct  MembershipConditionHelper_t2246572704  : public RuntimeObject
{
public:

public:
};

struct MembershipConditionHelper_t2246572704_StaticFields
{
public:
	// System.String System.Security.Policy.MembershipConditionHelper::XmlTag
	String_t* ___XmlTag_0;

public:
	inline static int32_t get_offset_of_XmlTag_0() { return static_cast<int32_t>(offsetof(MembershipConditionHelper_t2246572704_StaticFields, ___XmlTag_0)); }
	inline String_t* get_XmlTag_0() const { return ___XmlTag_0; }
	inline String_t** get_address_of_XmlTag_0() { return &___XmlTag_0; }
	inline void set_XmlTag_0(String_t* value)
	{
		___XmlTag_0 = value;
		Il2CppCodeGenWriteBarrier((&___XmlTag_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERSHIPCONDITIONHELPER_T2246572704_H
#ifndef PERMISSIONREQUESTEVIDENCE_T59447972_H
#define PERMISSIONREQUESTEVIDENCE_T59447972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PermissionRequestEvidence
struct  PermissionRequestEvidence_t59447972  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::requested
	PermissionSet_t223948603 * ___requested_0;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::optional
	PermissionSet_t223948603 * ___optional_1;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::denied
	PermissionSet_t223948603 * ___denied_2;

public:
	inline static int32_t get_offset_of_requested_0() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___requested_0)); }
	inline PermissionSet_t223948603 * get_requested_0() const { return ___requested_0; }
	inline PermissionSet_t223948603 ** get_address_of_requested_0() { return &___requested_0; }
	inline void set_requested_0(PermissionSet_t223948603 * value)
	{
		___requested_0 = value;
		Il2CppCodeGenWriteBarrier((&___requested_0), value);
	}

	inline static int32_t get_offset_of_optional_1() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___optional_1)); }
	inline PermissionSet_t223948603 * get_optional_1() const { return ___optional_1; }
	inline PermissionSet_t223948603 ** get_address_of_optional_1() { return &___optional_1; }
	inline void set_optional_1(PermissionSet_t223948603 * value)
	{
		___optional_1 = value;
		Il2CppCodeGenWriteBarrier((&___optional_1), value);
	}

	inline static int32_t get_offset_of_denied_2() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___denied_2)); }
	inline PermissionSet_t223948603 * get_denied_2() const { return ___denied_2; }
	inline PermissionSet_t223948603 ** get_address_of_denied_2() { return &___denied_2; }
	inline void set_denied_2(PermissionSet_t223948603 * value)
	{
		___denied_2 = value;
		Il2CppCodeGenWriteBarrier((&___denied_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONREQUESTEVIDENCE_T59447972_H
#ifndef PUBLISHER_T2758056332_H
#define PUBLISHER_T2758056332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Publisher
struct  Publisher_t2758056332  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Policy.Publisher::m_cert
	X509Certificate_t713131622 * ___m_cert_0;

public:
	inline static int32_t get_offset_of_m_cert_0() { return static_cast<int32_t>(offsetof(Publisher_t2758056332, ___m_cert_0)); }
	inline X509Certificate_t713131622 * get_m_cert_0() const { return ___m_cert_0; }
	inline X509Certificate_t713131622 ** get_address_of_m_cert_0() { return &___m_cert_0; }
	inline void set_m_cert_0(X509Certificate_t713131622 * value)
	{
		___m_cert_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_cert_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLISHER_T2758056332_H
#ifndef SITE_T1075497104_H
#define SITE_T1075497104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Site
struct  Site_t1075497104  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.Site::origin_site
	String_t* ___origin_site_0;

public:
	inline static int32_t get_offset_of_origin_site_0() { return static_cast<int32_t>(offsetof(Site_t1075497104, ___origin_site_0)); }
	inline String_t* get_origin_site_0() const { return ___origin_site_0; }
	inline String_t** get_address_of_origin_site_0() { return &___origin_site_0; }
	inline void set_origin_site_0(String_t* value)
	{
		___origin_site_0 = value;
		Il2CppCodeGenWriteBarrier((&___origin_site_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITE_T1075497104_H
#ifndef STRONGNAME_T3675724614_H
#define STRONGNAME_T3675724614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t3675724614  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t3355146440 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t3456873960 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___version_2)); }
	inline Version_t3456873960 * get_version_2() const { return ___version_2; }
	inline Version_t3456873960 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t3456873960 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T3675724614_H
#ifndef STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#define STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongNameMembershipCondition
struct  StrongNameMembershipCondition_t2614563360  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.StrongNameMembershipCondition::version
	int32_t ___version_0;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::blob
	StrongNamePublicKeyBlob_t3355146440 * ___blob_1;
	// System.String System.Security.Policy.StrongNameMembershipCondition::name
	String_t* ___name_2;
	// System.Version System.Security.Policy.StrongNameMembershipCondition::assemblyVersion
	Version_t3456873960 * ___assemblyVersion_3;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_blob_1() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___blob_1)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_blob_1() const { return ___blob_1; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_blob_1() { return &___blob_1; }
	inline void set_blob_1(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___blob_1 = value;
		Il2CppCodeGenWriteBarrier((&___blob_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_assemblyVersion_3() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___assemblyVersion_3)); }
	inline Version_t3456873960 * get_assemblyVersion_3() const { return ___assemblyVersion_3; }
	inline Version_t3456873960 ** get_address_of_assemblyVersion_3() { return &___assemblyVersion_3; }
	inline void set_assemblyVersion_3(Version_t3456873960 * value)
	{
		___assemblyVersion_3 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyVersion_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#ifndef URL_T207802215_H
#define URL_T207802215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Url
struct  Url_t207802215  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.Url::origin_url
	String_t* ___origin_url_0;

public:
	inline static int32_t get_offset_of_origin_url_0() { return static_cast<int32_t>(offsetof(Url_t207802215, ___origin_url_0)); }
	inline String_t* get_origin_url_0() const { return ___origin_url_0; }
	inline String_t** get_address_of_origin_url_0() { return &___origin_url_0; }
	inline void set_origin_url_0(String_t* value)
	{
		___origin_url_0 = value;
		Il2CppCodeGenWriteBarrier((&___origin_url_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URL_T207802215_H
#ifndef GENERICIDENTITY_T2319019448_H
#define GENERICIDENTITY_T2319019448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.GenericIdentity
struct  GenericIdentity_t2319019448  : public RuntimeObject
{
public:
	// System.String System.Security.Principal.GenericIdentity::m_name
	String_t* ___m_name_0;
	// System.String System.Security.Principal.GenericIdentity::m_type
	String_t* ___m_type_1;

public:
	inline static int32_t get_offset_of_m_name_0() { return static_cast<int32_t>(offsetof(GenericIdentity_t2319019448, ___m_name_0)); }
	inline String_t* get_m_name_0() const { return ___m_name_0; }
	inline String_t** get_address_of_m_name_0() { return &___m_name_0; }
	inline void set_m_name_0(String_t* value)
	{
		___m_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_0), value);
	}

	inline static int32_t get_offset_of_m_type_1() { return static_cast<int32_t>(offsetof(GenericIdentity_t2319019448, ___m_type_1)); }
	inline String_t* get_m_type_1() const { return ___m_type_1; }
	inline String_t** get_address_of_m_type_1() { return &___m_type_1; }
	inline void set_m_type_1(String_t* value)
	{
		___m_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICIDENTITY_T2319019448_H
#ifndef GENERICPRINCIPAL_T2520297622_H
#define GENERICPRINCIPAL_T2520297622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.GenericPrincipal
struct  GenericPrincipal_t2520297622  : public RuntimeObject
{
public:
	// System.Security.Principal.IIdentity System.Security.Principal.GenericPrincipal::m_identity
	RuntimeObject* ___m_identity_0;
	// System.String[] System.Security.Principal.GenericPrincipal::m_roles
	StringU5BU5D_t1281789340* ___m_roles_1;

public:
	inline static int32_t get_offset_of_m_identity_0() { return static_cast<int32_t>(offsetof(GenericPrincipal_t2520297622, ___m_identity_0)); }
	inline RuntimeObject* get_m_identity_0() const { return ___m_identity_0; }
	inline RuntimeObject** get_address_of_m_identity_0() { return &___m_identity_0; }
	inline void set_m_identity_0(RuntimeObject* value)
	{
		___m_identity_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_identity_0), value);
	}

	inline static int32_t get_offset_of_m_roles_1() { return static_cast<int32_t>(offsetof(GenericPrincipal_t2520297622, ___m_roles_1)); }
	inline StringU5BU5D_t1281789340* get_m_roles_1() const { return ___m_roles_1; }
	inline StringU5BU5D_t1281789340** get_address_of_m_roles_1() { return &___m_roles_1; }
	inline void set_m_roles_1(StringU5BU5D_t1281789340* value)
	{
		___m_roles_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_roles_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICPRINCIPAL_T2520297622_H
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
#ifndef DSASIGNATUREDESCRIPTION_T1163053634_H
#define DSASIGNATUREDESCRIPTION_T1163053634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDescription
struct  DSASignatureDescription_t1163053634  : public SignatureDescription_t1971889425
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDESCRIPTION_T1163053634_H
#ifndef RSAOAEPKEYEXCHANGEDEFORMATTER_T3344463048_H
#define RSAOAEPKEYEXCHANGEDEFORMATTER_T3344463048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter
struct  RSAOAEPKeyExchangeDeformatter_t3344463048  : public AsymmetricKeyExchangeDeformatter_t3370779160
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::rsa
	RSA_t2385438082 * ___rsa_0;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeDeformatter_t3344463048, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAOAEPKEYEXCHANGEDEFORMATTER_T3344463048_H
#ifndef RSAOAEPKEYEXCHANGEFORMATTER_T2041696538_H
#define RSAOAEPKEYEXCHANGEFORMATTER_T2041696538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
struct  RSAOAEPKeyExchangeFormatter_t2041696538  : public AsymmetricKeyExchangeFormatter_t937192061
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::rsa
	RSA_t2385438082 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::random
	RandomNumberGenerator_t386037858 * ___random_1;
	// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::param
	ByteU5BU5D_t4116647657* ___param_2;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2041696538, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2041696538, ___random_1)); }
	inline RandomNumberGenerator_t386037858 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t386037858 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}

	inline static int32_t get_offset_of_param_2() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2041696538, ___param_2)); }
	inline ByteU5BU5D_t4116647657* get_param_2() const { return ___param_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_param_2() { return &___param_2; }
	inline void set_param_2(ByteU5BU5D_t4116647657* value)
	{
		___param_2 = value;
		Il2CppCodeGenWriteBarrier((&___param_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAOAEPKEYEXCHANGEFORMATTER_T2041696538_H
#ifndef RSAPKCS1KEYEXCHANGEDEFORMATTER_T2578812791_H
#define RSAPKCS1KEYEXCHANGEDEFORMATTER_T2578812791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
struct  RSAPKCS1KeyExchangeDeformatter_t2578812791  : public AsymmetricKeyExchangeDeformatter_t3370779160
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::rsa
	RSA_t2385438082 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::random
	RandomNumberGenerator_t386037858 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t2578812791, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t2578812791, ___random_1)); }
	inline RandomNumberGenerator_t386037858 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t386037858 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEDEFORMATTER_T2578812791_H
#ifndef RSAPKCS1KEYEXCHANGEFORMATTER_T2761096101_H
#define RSAPKCS1KEYEXCHANGEFORMATTER_T2761096101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t2761096101  : public AsymmetricKeyExchangeFormatter_t937192061
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t2385438082 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t386037858 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2761096101, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2761096101, ___random_1)); }
	inline RandomNumberGenerator_t386037858 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t386037858 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEFORMATTER_T2761096101_H
#ifndef RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2887980541_H
#define RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2887980541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
struct  RSAPKCS1SHA1SignatureDescription_t2887980541  : public SignatureDescription_t1971889425
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2887980541_H
#ifndef RSAPKCS1SIGNATUREDEFORMATTER_T3767223008_H
#define RSAPKCS1SIGNATUREDEFORMATTER_T3767223008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t3767223008  : public AsymmetricSignatureDeformatter_t2681190756
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t2385438082 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3767223008, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3767223008, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDEFORMATTER_T3767223008_H
#ifndef RSAPKCS1SIGNATUREFORMATTER_T1514197062_H
#define RSAPKCS1SIGNATUREFORMATTER_T1514197062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t1514197062  : public AsymmetricSignatureFormatter_t3486936014
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t2385438082 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t1432317219 * ___hash_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t1514197062, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t1514197062, ___hash_1)); }
	inline HashAlgorithm_t1432317219 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t1432317219 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t1432317219 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREFORMATTER_T1514197062_H
#ifndef RSAPARAMETERS_T1728406613_H
#define RSAPARAMETERS_T1728406613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t1728406613 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t4116647657* ___P_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t4116647657* ___Q_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t4116647657* ___D_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t4116647657* ___DP_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t4116647657* ___DQ_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t4116647657* ___InverseQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t4116647657* ___Modulus_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t4116647657* ___Exponent_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___P_0)); }
	inline ByteU5BU5D_t4116647657* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t4116647657* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___Q_1)); }
	inline ByteU5BU5D_t4116647657* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t4116647657* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_D_2() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___D_2)); }
	inline ByteU5BU5D_t4116647657* get_D_2() const { return ___D_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_D_2() { return &___D_2; }
	inline void set_D_2(ByteU5BU5D_t4116647657* value)
	{
		___D_2 = value;
		Il2CppCodeGenWriteBarrier((&___D_2), value);
	}

	inline static int32_t get_offset_of_DP_3() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___DP_3)); }
	inline ByteU5BU5D_t4116647657* get_DP_3() const { return ___DP_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_DP_3() { return &___DP_3; }
	inline void set_DP_3(ByteU5BU5D_t4116647657* value)
	{
		___DP_3 = value;
		Il2CppCodeGenWriteBarrier((&___DP_3), value);
	}

	inline static int32_t get_offset_of_DQ_4() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___DQ_4)); }
	inline ByteU5BU5D_t4116647657* get_DQ_4() const { return ___DQ_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_DQ_4() { return &___DQ_4; }
	inline void set_DQ_4(ByteU5BU5D_t4116647657* value)
	{
		___DQ_4 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_4), value);
	}

	inline static int32_t get_offset_of_InverseQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___InverseQ_5)); }
	inline ByteU5BU5D_t4116647657* get_InverseQ_5() const { return ___InverseQ_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_InverseQ_5() { return &___InverseQ_5; }
	inline void set_InverseQ_5(ByteU5BU5D_t4116647657* value)
	{
		___InverseQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_5), value);
	}

	inline static int32_t get_offset_of_Modulus_6() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___Modulus_6)); }
	inline ByteU5BU5D_t4116647657* get_Modulus_6() const { return ___Modulus_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_Modulus_6() { return &___Modulus_6; }
	inline void set_Modulus_6(ByteU5BU5D_t4116647657* value)
	{
		___Modulus_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_6), value);
	}

	inline static int32_t get_offset_of_Exponent_7() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___Exponent_7)); }
	inline ByteU5BU5D_t4116647657* get_Exponent_7() const { return ___Exponent_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_Exponent_7() { return &___Exponent_7; }
	inline void set_Exponent_7(ByteU5BU5D_t4116647657* value)
	{
		___Exponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t1728406613_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t1728406613_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
#endif // RSAPARAMETERS_T1728406613_H
#ifndef SHA1_T1803193667_H
#define SHA1_T1803193667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t1803193667  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T1803193667_H
#ifndef SHA256_T3672283617_H
#define SHA256_T3672283617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t3672283617  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T3672283617_H
#ifndef SHA384_T540967702_H
#define SHA384_T540967702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t540967702  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T540967702_H
#ifndef SHA512_T1346946930_H
#define SHA512_T1346946930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t1346946930  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T1346946930_H
#ifndef TRIPLEDESTRANSFORM_T964169060_H
#define TRIPLEDESTRANSFORM_T964169060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESTransform
struct  TripleDESTransform_t964169060  : public SymmetricTransform_t3802591842
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t4088905499 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t4088905499 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t4088905499 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t4088905499 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t4088905499 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t4088905499 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_t964169060, ___E1_12)); }
	inline DESTransform_t4088905499 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t4088905499 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t4088905499 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((&___E1_12), value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_t964169060, ___D2_13)); }
	inline DESTransform_t4088905499 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t4088905499 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t4088905499 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((&___D2_13), value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_t964169060, ___E3_14)); }
	inline DESTransform_t4088905499 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t4088905499 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t4088905499 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((&___E3_14), value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_t964169060, ___D1_15)); }
	inline DESTransform_t4088905499 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t4088905499 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t4088905499 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((&___D1_15), value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_t964169060, ___E2_16)); }
	inline DESTransform_t4088905499 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t4088905499 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t4088905499 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((&___E2_16), value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_t964169060, ___D3_17)); }
	inline DESTransform_t4088905499 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t4088905499 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t4088905499 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((&___D3_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESTRANSFORM_T964169060_H
#ifndef GACIDENTITYPERMISSION_T2991335275_H
#define GACIDENTITYPERMISSION_T2991335275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.GacIdentityPermission
struct  GacIdentityPermission_t2991335275  : public CodeAccessPermission_t2681295399
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GACIDENTITYPERMISSION_T2991335275_H
#ifndef PUBLISHERIDENTITYPERMISSION_T594127488_H
#define PUBLISHERIDENTITYPERMISSION_T594127488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PublisherIdentityPermission
struct  PublisherIdentityPermission_t594127488  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Permissions.PublisherIdentityPermission::x509
	X509Certificate_t713131622 * ___x509_0;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(PublisherIdentityPermission_t594127488, ___x509_0)); }
	inline X509Certificate_t713131622 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t713131622 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t713131622 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLISHERIDENTITYPERMISSION_T594127488_H
#ifndef SITEIDENTITYPERMISSION_T4239769539_H
#define SITEIDENTITYPERMISSION_T4239769539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SiteIdentityPermission
struct  SiteIdentityPermission_t4239769539  : public CodeAccessPermission_t2681295399
{
public:
	// System.String System.Security.Permissions.SiteIdentityPermission::_site
	String_t* ____site_0;

public:
	inline static int32_t get_offset_of__site_0() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t4239769539, ____site_0)); }
	inline String_t* get__site_0() const { return ____site_0; }
	inline String_t** get_address_of__site_0() { return &____site_0; }
	inline void set__site_0(String_t* value)
	{
		____site_0 = value;
		Il2CppCodeGenWriteBarrier((&____site_0), value);
	}
};

struct SiteIdentityPermission_t4239769539_StaticFields
{
public:
	// System.Boolean[] System.Security.Permissions.SiteIdentityPermission::valid
	BooleanU5BU5D_t2897418192* ___valid_1;

public:
	inline static int32_t get_offset_of_valid_1() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t4239769539_StaticFields, ___valid_1)); }
	inline BooleanU5BU5D_t2897418192* get_valid_1() const { return ___valid_1; }
	inline BooleanU5BU5D_t2897418192** get_address_of_valid_1() { return &___valid_1; }
	inline void set_valid_1(BooleanU5BU5D_t2897418192* value)
	{
		___valid_1 = value;
		Il2CppCodeGenWriteBarrier((&___valid_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITEIDENTITYPERMISSION_T4239769539_H
#ifndef SNIP_T4156255223_H
#define SNIP_T4156255223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct  SNIP_t4156255223 
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission/SNIP::PublicKey
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	// System.String System.Security.Permissions.StrongNameIdentityPermission/SNIP::Name
	String_t* ___Name_1;
	// System.Version System.Security.Permissions.StrongNameIdentityPermission/SNIP::AssemblyVersion
	Version_t3456873960 * ___AssemblyVersion_2;

public:
	inline static int32_t get_offset_of_PublicKey_0() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___PublicKey_0)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_PublicKey_0() const { return ___PublicKey_0; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_PublicKey_0() { return &___PublicKey_0; }
	inline void set_PublicKey_0(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___PublicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKey_0), value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_AssemblyVersion_2() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___AssemblyVersion_2)); }
	inline Version_t3456873960 * get_AssemblyVersion_2() const { return ___AssemblyVersion_2; }
	inline Version_t3456873960 ** get_address_of_AssemblyVersion_2() { return &___AssemblyVersion_2; }
	inline void set_AssemblyVersion_2(Version_t3456873960 * value)
	{
		___AssemblyVersion_2 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyVersion_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t4156255223_marshaled_pinvoke
{
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	char* ___Name_1;
	Version_t3456873960 * ___AssemblyVersion_2;
};
// Native definition for COM marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t4156255223_marshaled_com
{
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	Il2CppChar* ___Name_1;
	Version_t3456873960 * ___AssemblyVersion_2;
};
#endif // SNIP_T4156255223_H
#ifndef URLIDENTITYPERMISSION_T48040392_H
#define URLIDENTITYPERMISSION_T48040392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UrlIdentityPermission
struct  UrlIdentityPermission_t48040392  : public CodeAccessPermission_t2681295399
{
public:
	// System.String System.Security.Permissions.UrlIdentityPermission::url
	String_t* ___url_0;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(UrlIdentityPermission_t48040392, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLIDENTITYPERMISSION_T48040392_H
#ifndef FIRSTMATCHCODEGROUP_T885469689_H
#define FIRSTMATCHCODEGROUP_T885469689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FirstMatchCodeGroup
struct  FirstMatchCodeGroup_t885469689  : public CodeGroup_t3811807446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIRSTMATCHCODEGROUP_T885469689_H
#ifndef NETCODEGROUP_T2217812384_H
#define NETCODEGROUP_T2217812384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.NetCodeGroup
struct  NetCodeGroup_t2217812384  : public CodeGroup_t3811807446
{
public:
	// System.Collections.Hashtable System.Security.Policy.NetCodeGroup::_rules
	Hashtable_t1853889766 * ____rules_8;
	// System.Int32 System.Security.Policy.NetCodeGroup::_hashcode
	int32_t ____hashcode_9;

public:
	inline static int32_t get_offset_of__rules_8() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384, ____rules_8)); }
	inline Hashtable_t1853889766 * get__rules_8() const { return ____rules_8; }
	inline Hashtable_t1853889766 ** get_address_of__rules_8() { return &____rules_8; }
	inline void set__rules_8(Hashtable_t1853889766 * value)
	{
		____rules_8 = value;
		Il2CppCodeGenWriteBarrier((&____rules_8), value);
	}

	inline static int32_t get_offset_of__hashcode_9() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384, ____hashcode_9)); }
	inline int32_t get__hashcode_9() const { return ____hashcode_9; }
	inline int32_t* get_address_of__hashcode_9() { return &____hashcode_9; }
	inline void set__hashcode_9(int32_t value)
	{
		____hashcode_9 = value;
	}
};

struct NetCodeGroup_t2217812384_StaticFields
{
public:
	// System.String System.Security.Policy.NetCodeGroup::AbsentOriginScheme
	String_t* ___AbsentOriginScheme_6;
	// System.String System.Security.Policy.NetCodeGroup::AnyOtherOriginScheme
	String_t* ___AnyOtherOriginScheme_7;

public:
	inline static int32_t get_offset_of_AbsentOriginScheme_6() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384_StaticFields, ___AbsentOriginScheme_6)); }
	inline String_t* get_AbsentOriginScheme_6() const { return ___AbsentOriginScheme_6; }
	inline String_t** get_address_of_AbsentOriginScheme_6() { return &___AbsentOriginScheme_6; }
	inline void set_AbsentOriginScheme_6(String_t* value)
	{
		___AbsentOriginScheme_6 = value;
		Il2CppCodeGenWriteBarrier((&___AbsentOriginScheme_6), value);
	}

	inline static int32_t get_offset_of_AnyOtherOriginScheme_7() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384_StaticFields, ___AnyOtherOriginScheme_7)); }
	inline String_t* get_AnyOtherOriginScheme_7() const { return ___AnyOtherOriginScheme_7; }
	inline String_t** get_address_of_AnyOtherOriginScheme_7() { return &___AnyOtherOriginScheme_7; }
	inline void set_AnyOtherOriginScheme_7(String_t* value)
	{
		___AnyOtherOriginScheme_7 = value;
		Il2CppCodeGenWriteBarrier((&___AnyOtherOriginScheme_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETCODEGROUP_T2217812384_H
#ifndef UNIONCODEGROUP_T3773268997_H
#define UNIONCODEGROUP_T3773268997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.UnionCodeGroup
struct  UnionCodeGroup_t3773268997  : public CodeGroup_t3811807446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIONCODEGROUP_T3773268997_H
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
#ifndef CIPHERMODE_T84635067_H
#define CIPHERMODE_T84635067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t84635067 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t84635067, ___value___1)); }
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
#endif // CIPHERMODE_T84635067_H
#ifndef PADDINGMODE_T2546806710_H
#define PADDINGMODE_T2546806710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2546806710 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2546806710, ___value___1)); }
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
#endif // PADDINGMODE_T2546806710_H
#ifndef SHA1CRYPTOSERVICEPROVIDER_T3661059764_H
#define SHA1CRYPTOSERVICEPROVIDER_T3661059764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t3661059764  : public SHA1_t1803193667
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t3251293021 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t3661059764, ___sha_4)); }
	inline SHA1Internal_t3251293021 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t3251293021 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t3251293021 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CRYPTOSERVICEPROVIDER_T3661059764_H
#ifndef SHA1MANAGED_T1754513891_H
#define SHA1MANAGED_T1754513891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t1754513891  : public SHA1_t1803193667
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1Managed::sha
	SHA1Internal_t3251293021 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t1754513891, ___sha_4)); }
	inline SHA1Internal_t3251293021 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t3251293021 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t3251293021 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1MANAGED_T1754513891_H
#ifndef SHA256MANAGED_T955042874_H
#define SHA256MANAGED_T955042874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t955042874  : public SHA256_t3672283617
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t2770800703* ____H_6;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_7;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t4116647657* ____ProcessingBuffer_8;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_9;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t2770800703* ___buff_10;

public:
	inline static int32_t get_offset_of__H_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____H_6)); }
	inline UInt32U5BU5D_t2770800703* get__H_6() const { return ____H_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of__H_6() { return &____H_6; }
	inline void set__H_6(UInt32U5BU5D_t2770800703* value)
	{
		____H_6 = value;
		Il2CppCodeGenWriteBarrier((&____H_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ___count_7)); }
	inline uint64_t get_count_7() const { return ___count_7; }
	inline uint64_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(uint64_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____ProcessingBuffer_8)); }
	inline ByteU5BU5D_t4116647657* get__ProcessingBuffer_8() const { return ____ProcessingBuffer_8; }
	inline ByteU5BU5D_t4116647657** get_address_of__ProcessingBuffer_8() { return &____ProcessingBuffer_8; }
	inline void set__ProcessingBuffer_8(ByteU5BU5D_t4116647657* value)
	{
		____ProcessingBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_8), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_9() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____ProcessingBufferCount_9)); }
	inline int32_t get__ProcessingBufferCount_9() const { return ____ProcessingBufferCount_9; }
	inline int32_t* get_address_of__ProcessingBufferCount_9() { return &____ProcessingBufferCount_9; }
	inline void set__ProcessingBufferCount_9(int32_t value)
	{
		____ProcessingBufferCount_9 = value;
	}

	inline static int32_t get_offset_of_buff_10() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ___buff_10)); }
	inline UInt32U5BU5D_t2770800703* get_buff_10() const { return ___buff_10; }
	inline UInt32U5BU5D_t2770800703** get_address_of_buff_10() { return &___buff_10; }
	inline void set_buff_10(UInt32U5BU5D_t2770800703* value)
	{
		___buff_10 = value;
		Il2CppCodeGenWriteBarrier((&___buff_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T955042874_H
#ifndef SHA384MANAGED_T74158575_H
#define SHA384MANAGED_T74158575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Managed
struct  SHA384Managed_t74158575  : public SHA384_t540967702
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::xBuf
	ByteU5BU5D_t4116647657* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA384Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::W
	UInt64U5BU5D_t1659327989* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA384Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___xBuf_4)); }
	inline ByteU5BU5D_t4116647657* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t4116647657* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___W_16)); }
	inline UInt64U5BU5D_t1659327989* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t1659327989** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t1659327989* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384MANAGED_T74158575_H
#ifndef SHA512MANAGED_T1787336339_H
#define SHA512MANAGED_T1787336339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Managed
struct  SHA512Managed_t1787336339  : public SHA512_t1346946930
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::xBuf
	ByteU5BU5D_t4116647657* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA512Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::W
	UInt64U5BU5D_t1659327989* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA512Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___xBuf_4)); }
	inline ByteU5BU5D_t4116647657* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t4116647657* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___W_16)); }
	inline UInt64U5BU5D_t1659327989* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t1659327989** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t1659327989* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512MANAGED_T1787336339_H
#ifndef X509KEYSTORAGEFLAGS_T441861693_H
#define X509KEYSTORAGEFLAGS_T441861693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
struct  X509KeyStorageFlags_t441861693 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyStorageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyStorageFlags_t441861693, ___value___1)); }
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
#endif // X509KEYSTORAGEFLAGS_T441861693_H
#ifndef ENVIRONMENTPERMISSIONACCESS_T1745565475_H
#define ENVIRONMENTPERMISSIONACCESS_T1745565475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermissionAccess
struct  EnvironmentPermissionAccess_t1745565475 
{
public:
	// System.Int32 System.Security.Permissions.EnvironmentPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EnvironmentPermissionAccess_t1745565475, ___value___1)); }
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
#endif // ENVIRONMENTPERMISSIONACCESS_T1745565475_H
#ifndef FILEDIALOGPERMISSIONACCESS_T4172829844_H
#define FILEDIALOGPERMISSIONACCESS_T4172829844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileDialogPermissionAccess
struct  FileDialogPermissionAccess_t4172829844 
{
public:
	// System.Int32 System.Security.Permissions.FileDialogPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileDialogPermissionAccess_t4172829844, ___value___1)); }
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
#endif // FILEDIALOGPERMISSIONACCESS_T4172829844_H
#ifndef FILEIOPERMISSIONACCESS_T1559273540_H
#define FILEIOPERMISSIONACCESS_T1559273540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermissionAccess
struct  FileIOPermissionAccess_t1559273540 
{
public:
	// System.Int32 System.Security.Permissions.FileIOPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileIOPermissionAccess_t1559273540, ___value___1)); }
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
#endif // FILEIOPERMISSIONACCESS_T1559273540_H
#ifndef ISOLATEDSTORAGECONTAINMENT_T3203638662_H
#define ISOLATEDSTORAGECONTAINMENT_T3203638662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStorageContainment
struct  IsolatedStorageContainment_t3203638662 
{
public:
	// System.Int32 System.Security.Permissions.IsolatedStorageContainment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IsolatedStorageContainment_t3203638662, ___value___1)); }
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
#endif // ISOLATEDSTORAGECONTAINMENT_T3203638662_H
#ifndef KEYCONTAINERPERMISSIONFLAGS_T3864969297_H
#define KEYCONTAINERPERMISSIONFLAGS_T3864969297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionFlags
struct  KeyContainerPermissionFlags_t3864969297 
{
public:
	// System.Int32 System.Security.Permissions.KeyContainerPermissionFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyContainerPermissionFlags_t3864969297, ___value___1)); }
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
#endif // KEYCONTAINERPERMISSIONFLAGS_T3864969297_H
#ifndef PERMISSIONSTATE_T1178999876_H
#define PERMISSIONSTATE_T1178999876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionState
struct  PermissionState_t1178999876 
{
public:
	// System.Int32 System.Security.Permissions.PermissionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PermissionState_t1178999876, ___value___1)); }
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
#endif // PERMISSIONSTATE_T1178999876_H
#ifndef REFLECTIONPERMISSIONFLAG_T4199904140_H
#define REFLECTIONPERMISSIONFLAG_T4199904140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermissionFlag
struct  ReflectionPermissionFlag_t4199904140 
{
public:
	// System.Int32 System.Security.Permissions.ReflectionPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReflectionPermissionFlag_t4199904140, ___value___1)); }
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
#endif // REFLECTIONPERMISSIONFLAG_T4199904140_H
#ifndef REGISTRYPERMISSIONACCESS_T307445458_H
#define REGISTRYPERMISSIONACCESS_T307445458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermissionAccess
struct  RegistryPermissionAccess_t307445458 
{
public:
	// System.Int32 System.Security.Permissions.RegistryPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistryPermissionAccess_t307445458, ___value___1)); }
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
#endif // REGISTRYPERMISSIONACCESS_T307445458_H
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
#ifndef SECURITYPERMISSIONFLAG_T3459270124_H
#define SECURITYPERMISSIONFLAG_T3459270124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t3459270124 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t3459270124, ___value___1)); }
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
#endif // SECURITYPERMISSIONFLAG_T3459270124_H
#ifndef UIPERMISSIONCLIPBOARD_T4002838840_H
#define UIPERMISSIONCLIPBOARD_T4002838840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionClipboard
struct  UIPermissionClipboard_t4002838840 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionClipboard::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UIPermissionClipboard_t4002838840, ___value___1)); }
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
#endif // UIPERMISSIONCLIPBOARD_T4002838840_H
#ifndef UIPERMISSIONWINDOW_T985109583_H
#define UIPERMISSIONWINDOW_T985109583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionWindow
struct  UIPermissionWindow_t985109583 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionWindow::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UIPermissionWindow_t985109583, ___value___1)); }
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
#endif // UIPERMISSIONWINDOW_T985109583_H
#ifndef KEY_T3006169375_H
#define KEY_T3006169375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies/Key
struct  Key_t3006169375 
{
public:
	// System.Int32 System.Security.Policy.DefaultPolicies/Key::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Key_t3006169375, ___value___1)); }
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
#endif // KEY_T3006169375_H
#ifndef POLICYEXCEPTION_T1520028310_H
#define POLICYEXCEPTION_T1520028310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyException
struct  PolicyException_t1520028310  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYEXCEPTION_T1520028310_H
#ifndef POLICYSTATEMENTATTRIBUTE_T1674167676_H
#define POLICYSTATEMENTATTRIBUTE_T1674167676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatementAttribute
struct  PolicyStatementAttribute_t1674167676 
{
public:
	// System.Int32 System.Security.Policy.PolicyStatementAttribute::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyStatementAttribute_t1674167676, ___value___1)); }
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
#endif // POLICYSTATEMENTATTRIBUTE_T1674167676_H
#ifndef POLICYLEVELTYPE_T244468749_H
#define POLICYLEVELTYPE_T244468749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PolicyLevelType
struct  PolicyLevelType_t244468749 
{
public:
	// System.Int32 System.Security.PolicyLevelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyLevelType_t244468749, ___value___1)); }
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
#endif // POLICYLEVELTYPE_T244468749_H
#ifndef SECURITYZONE_T1272287263_H
#define SECURITYZONE_T1272287263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityZone
struct  SecurityZone_t1272287263 
{
public:
	// System.Int32 System.Security.SecurityZone::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityZone_t1272287263, ___value___1)); }
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
#endif // SECURITYZONE_T1272287263_H
#ifndef SYMMETRICALGORITHM_T4254223087_H
#define SYMMETRICALGORITHM_T4254223087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4254223087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t4116647657* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t722666473* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___IVValue_1)); }
	inline ByteU5BU5D_t4116647657* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t4116647657* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeyValue_3)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t722666473* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t722666473* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T4254223087_H
#ifndef ENVIRONMENTPERMISSION_T1242010617_H
#define ENVIRONMENTPERMISSION_T1242010617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermission
struct  EnvironmentPermission_t1242010617  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.EnvironmentPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::readList
	ArrayList_t2718874744 * ___readList_1;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::writeList
	ArrayList_t2718874744 * ___writeList_2;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t1242010617, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_readList_1() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t1242010617, ___readList_1)); }
	inline ArrayList_t2718874744 * get_readList_1() const { return ___readList_1; }
	inline ArrayList_t2718874744 ** get_address_of_readList_1() { return &___readList_1; }
	inline void set_readList_1(ArrayList_t2718874744 * value)
	{
		___readList_1 = value;
		Il2CppCodeGenWriteBarrier((&___readList_1), value);
	}

	inline static int32_t get_offset_of_writeList_2() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t1242010617, ___writeList_2)); }
	inline ArrayList_t2718874744 * get_writeList_2() const { return ___writeList_2; }
	inline ArrayList_t2718874744 ** get_address_of_writeList_2() { return &___writeList_2; }
	inline void set_writeList_2(ArrayList_t2718874744 * value)
	{
		___writeList_2 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENTPERMISSION_T1242010617_H
#ifndef FILEDIALOGPERMISSION_T986095094_H
#define FILEDIALOGPERMISSION_T986095094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileDialogPermission
struct  FileDialogPermission_t986095094  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.FileDialogPermissionAccess System.Security.Permissions.FileDialogPermission::_access
	int32_t ____access_0;

public:
	inline static int32_t get_offset_of__access_0() { return static_cast<int32_t>(offsetof(FileDialogPermission_t986095094, ____access_0)); }
	inline int32_t get__access_0() const { return ____access_0; }
	inline int32_t* get_address_of__access_0() { return &____access_0; }
	inline void set__access_0(int32_t value)
	{
		____access_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEDIALOGPERMISSION_T986095094_H
#ifndef FILEIOPERMISSION_T3596906749_H
#define FILEIOPERMISSION_T3596906749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermission
struct  FileIOPermission_t3596906749  : public CodeAccessPermission_t2681295399
{
public:
	// System.Boolean System.Security.Permissions.FileIOPermission::m_Unrestricted
	bool ___m_Unrestricted_2;
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::m_AllFilesAccess
	int32_t ___m_AllFilesAccess_3;
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::m_AllLocalFilesAccess
	int32_t ___m_AllLocalFilesAccess_4;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::readList
	ArrayList_t2718874744 * ___readList_5;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::writeList
	ArrayList_t2718874744 * ___writeList_6;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::appendList
	ArrayList_t2718874744 * ___appendList_7;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::pathList
	ArrayList_t2718874744 * ___pathList_8;

public:
	inline static int32_t get_offset_of_m_Unrestricted_2() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___m_Unrestricted_2)); }
	inline bool get_m_Unrestricted_2() const { return ___m_Unrestricted_2; }
	inline bool* get_address_of_m_Unrestricted_2() { return &___m_Unrestricted_2; }
	inline void set_m_Unrestricted_2(bool value)
	{
		___m_Unrestricted_2 = value;
	}

	inline static int32_t get_offset_of_m_AllFilesAccess_3() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___m_AllFilesAccess_3)); }
	inline int32_t get_m_AllFilesAccess_3() const { return ___m_AllFilesAccess_3; }
	inline int32_t* get_address_of_m_AllFilesAccess_3() { return &___m_AllFilesAccess_3; }
	inline void set_m_AllFilesAccess_3(int32_t value)
	{
		___m_AllFilesAccess_3 = value;
	}

	inline static int32_t get_offset_of_m_AllLocalFilesAccess_4() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___m_AllLocalFilesAccess_4)); }
	inline int32_t get_m_AllLocalFilesAccess_4() const { return ___m_AllLocalFilesAccess_4; }
	inline int32_t* get_address_of_m_AllLocalFilesAccess_4() { return &___m_AllLocalFilesAccess_4; }
	inline void set_m_AllLocalFilesAccess_4(int32_t value)
	{
		___m_AllLocalFilesAccess_4 = value;
	}

	inline static int32_t get_offset_of_readList_5() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___readList_5)); }
	inline ArrayList_t2718874744 * get_readList_5() const { return ___readList_5; }
	inline ArrayList_t2718874744 ** get_address_of_readList_5() { return &___readList_5; }
	inline void set_readList_5(ArrayList_t2718874744 * value)
	{
		___readList_5 = value;
		Il2CppCodeGenWriteBarrier((&___readList_5), value);
	}

	inline static int32_t get_offset_of_writeList_6() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___writeList_6)); }
	inline ArrayList_t2718874744 * get_writeList_6() const { return ___writeList_6; }
	inline ArrayList_t2718874744 ** get_address_of_writeList_6() { return &___writeList_6; }
	inline void set_writeList_6(ArrayList_t2718874744 * value)
	{
		___writeList_6 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_6), value);
	}

	inline static int32_t get_offset_of_appendList_7() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___appendList_7)); }
	inline ArrayList_t2718874744 * get_appendList_7() const { return ___appendList_7; }
	inline ArrayList_t2718874744 ** get_address_of_appendList_7() { return &___appendList_7; }
	inline void set_appendList_7(ArrayList_t2718874744 * value)
	{
		___appendList_7 = value;
		Il2CppCodeGenWriteBarrier((&___appendList_7), value);
	}

	inline static int32_t get_offset_of_pathList_8() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___pathList_8)); }
	inline ArrayList_t2718874744 * get_pathList_8() const { return ___pathList_8; }
	inline ArrayList_t2718874744 ** get_address_of_pathList_8() { return &___pathList_8; }
	inline void set_pathList_8(ArrayList_t2718874744 * value)
	{
		___pathList_8 = value;
		Il2CppCodeGenWriteBarrier((&___pathList_8), value);
	}
};

struct FileIOPermission_t3596906749_StaticFields
{
public:
	// System.Char[] System.Security.Permissions.FileIOPermission::BadPathNameCharacters
	CharU5BU5D_t3528271667* ___BadPathNameCharacters_0;
	// System.Char[] System.Security.Permissions.FileIOPermission::BadFileNameCharacters
	CharU5BU5D_t3528271667* ___BadFileNameCharacters_1;

public:
	inline static int32_t get_offset_of_BadPathNameCharacters_0() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749_StaticFields, ___BadPathNameCharacters_0)); }
	inline CharU5BU5D_t3528271667* get_BadPathNameCharacters_0() const { return ___BadPathNameCharacters_0; }
	inline CharU5BU5D_t3528271667** get_address_of_BadPathNameCharacters_0() { return &___BadPathNameCharacters_0; }
	inline void set_BadPathNameCharacters_0(CharU5BU5D_t3528271667* value)
	{
		___BadPathNameCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((&___BadPathNameCharacters_0), value);
	}

	inline static int32_t get_offset_of_BadFileNameCharacters_1() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749_StaticFields, ___BadFileNameCharacters_1)); }
	inline CharU5BU5D_t3528271667* get_BadFileNameCharacters_1() const { return ___BadFileNameCharacters_1; }
	inline CharU5BU5D_t3528271667** get_address_of_BadFileNameCharacters_1() { return &___BadFileNameCharacters_1; }
	inline void set_BadFileNameCharacters_1(CharU5BU5D_t3528271667* value)
	{
		___BadFileNameCharacters_1 = value;
		Il2CppCodeGenWriteBarrier((&___BadFileNameCharacters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEIOPERMISSION_T3596906749_H
#ifndef ISOLATEDSTORAGEPERMISSION_T2996329588_H
#define ISOLATEDSTORAGEPERMISSION_T2996329588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStoragePermission
struct  IsolatedStoragePermission_t2996329588  : public CodeAccessPermission_t2681295399
{
public:
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_userQuota
	int64_t ___m_userQuota_0;
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_machineQuota
	int64_t ___m_machineQuota_1;
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_expirationDays
	int64_t ___m_expirationDays_2;
	// System.Boolean System.Security.Permissions.IsolatedStoragePermission::m_permanentData
	bool ___m_permanentData_3;
	// System.Security.Permissions.IsolatedStorageContainment System.Security.Permissions.IsolatedStoragePermission::m_allowed
	int32_t ___m_allowed_4;

public:
	inline static int32_t get_offset_of_m_userQuota_0() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_userQuota_0)); }
	inline int64_t get_m_userQuota_0() const { return ___m_userQuota_0; }
	inline int64_t* get_address_of_m_userQuota_0() { return &___m_userQuota_0; }
	inline void set_m_userQuota_0(int64_t value)
	{
		___m_userQuota_0 = value;
	}

	inline static int32_t get_offset_of_m_machineQuota_1() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_machineQuota_1)); }
	inline int64_t get_m_machineQuota_1() const { return ___m_machineQuota_1; }
	inline int64_t* get_address_of_m_machineQuota_1() { return &___m_machineQuota_1; }
	inline void set_m_machineQuota_1(int64_t value)
	{
		___m_machineQuota_1 = value;
	}

	inline static int32_t get_offset_of_m_expirationDays_2() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_expirationDays_2)); }
	inline int64_t get_m_expirationDays_2() const { return ___m_expirationDays_2; }
	inline int64_t* get_address_of_m_expirationDays_2() { return &___m_expirationDays_2; }
	inline void set_m_expirationDays_2(int64_t value)
	{
		___m_expirationDays_2 = value;
	}

	inline static int32_t get_offset_of_m_permanentData_3() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_permanentData_3)); }
	inline bool get_m_permanentData_3() const { return ___m_permanentData_3; }
	inline bool* get_address_of_m_permanentData_3() { return &___m_permanentData_3; }
	inline void set_m_permanentData_3(bool value)
	{
		___m_permanentData_3 = value;
	}

	inline static int32_t get_offset_of_m_allowed_4() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_allowed_4)); }
	inline int32_t get_m_allowed_4() const { return ___m_allowed_4; }
	inline int32_t* get_address_of_m_allowed_4() { return &___m_allowed_4; }
	inline void set_m_allowed_4(int32_t value)
	{
		___m_allowed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEPERMISSION_T2996329588_H
#ifndef KEYCONTAINERPERMISSION_T1460699488_H
#define KEYCONTAINERPERMISSION_T1460699488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermission
struct  KeyContainerPermission_t1460699488  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection System.Security.Permissions.KeyContainerPermission::_accessEntries
	KeyContainerPermissionAccessEntryCollection_t4144114052 * ____accessEntries_0;
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermission::_flags
	int32_t ____flags_1;

public:
	inline static int32_t get_offset_of__accessEntries_0() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1460699488, ____accessEntries_0)); }
	inline KeyContainerPermissionAccessEntryCollection_t4144114052 * get__accessEntries_0() const { return ____accessEntries_0; }
	inline KeyContainerPermissionAccessEntryCollection_t4144114052 ** get_address_of__accessEntries_0() { return &____accessEntries_0; }
	inline void set__accessEntries_0(KeyContainerPermissionAccessEntryCollection_t4144114052 * value)
	{
		____accessEntries_0 = value;
		Il2CppCodeGenWriteBarrier((&____accessEntries_0), value);
	}

	inline static int32_t get_offset_of__flags_1() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1460699488, ____flags_1)); }
	inline int32_t get__flags_1() const { return ____flags_1; }
	inline int32_t* get_address_of__flags_1() { return &____flags_1; }
	inline void set__flags_1(int32_t value)
	{
		____flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSION_T1460699488_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRY_T3026022710_H
#define KEYCONTAINERPERMISSIONACCESSENTRY_T3026022710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntry
struct  KeyContainerPermissionAccessEntry_t3026022710  : public RuntimeObject
{
public:
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermissionAccessEntry::_flags
	int32_t ____flags_0;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_containerName
	String_t* ____containerName_1;
	// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntry::_spec
	int32_t ____spec_2;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_store
	String_t* ____store_3;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_providerName
	String_t* ____providerName_4;
	// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntry::_type
	int32_t ____type_5;

public:
	inline static int32_t get_offset_of__flags_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____flags_0)); }
	inline int32_t get__flags_0() const { return ____flags_0; }
	inline int32_t* get_address_of__flags_0() { return &____flags_0; }
	inline void set__flags_0(int32_t value)
	{
		____flags_0 = value;
	}

	inline static int32_t get_offset_of__containerName_1() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____containerName_1)); }
	inline String_t* get__containerName_1() const { return ____containerName_1; }
	inline String_t** get_address_of__containerName_1() { return &____containerName_1; }
	inline void set__containerName_1(String_t* value)
	{
		____containerName_1 = value;
		Il2CppCodeGenWriteBarrier((&____containerName_1), value);
	}

	inline static int32_t get_offset_of__spec_2() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____spec_2)); }
	inline int32_t get__spec_2() const { return ____spec_2; }
	inline int32_t* get_address_of__spec_2() { return &____spec_2; }
	inline void set__spec_2(int32_t value)
	{
		____spec_2 = value;
	}

	inline static int32_t get_offset_of__store_3() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____store_3)); }
	inline String_t* get__store_3() const { return ____store_3; }
	inline String_t** get_address_of__store_3() { return &____store_3; }
	inline void set__store_3(String_t* value)
	{
		____store_3 = value;
		Il2CppCodeGenWriteBarrier((&____store_3), value);
	}

	inline static int32_t get_offset_of__providerName_4() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____providerName_4)); }
	inline String_t* get__providerName_4() const { return ____providerName_4; }
	inline String_t** get_address_of__providerName_4() { return &____providerName_4; }
	inline void set__providerName_4(String_t* value)
	{
		____providerName_4 = value;
		Il2CppCodeGenWriteBarrier((&____providerName_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRY_T3026022710_H
#ifndef REFLECTIONPERMISSION_T2208099681_H
#define REFLECTIONPERMISSION_T2208099681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermission
struct  ReflectionPermission_t2208099681  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(ReflectionPermission_t2208099681, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPERMISSION_T2208099681_H
#ifndef REGISTRYPERMISSION_T4244934776_H
#define REGISTRYPERMISSION_T4244934776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermission
struct  RegistryPermission_t4244934776  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.RegistryPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::createList
	ArrayList_t2718874744 * ___createList_1;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::readList
	ArrayList_t2718874744 * ___readList_2;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::writeList
	ArrayList_t2718874744 * ___writeList_3;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_createList_1() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___createList_1)); }
	inline ArrayList_t2718874744 * get_createList_1() const { return ___createList_1; }
	inline ArrayList_t2718874744 ** get_address_of_createList_1() { return &___createList_1; }
	inline void set_createList_1(ArrayList_t2718874744 * value)
	{
		___createList_1 = value;
		Il2CppCodeGenWriteBarrier((&___createList_1), value);
	}

	inline static int32_t get_offset_of_readList_2() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___readList_2)); }
	inline ArrayList_t2718874744 * get_readList_2() const { return ___readList_2; }
	inline ArrayList_t2718874744 ** get_address_of_readList_2() { return &___readList_2; }
	inline void set_readList_2(ArrayList_t2718874744 * value)
	{
		___readList_2 = value;
		Il2CppCodeGenWriteBarrier((&___readList_2), value);
	}

	inline static int32_t get_offset_of_writeList_3() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___writeList_3)); }
	inline ArrayList_t2718874744 * get_writeList_3() const { return ___writeList_3; }
	inline ArrayList_t2718874744 ** get_address_of_writeList_3() { return &___writeList_3; }
	inline void set_writeList_3(ArrayList_t2718874744 * value)
	{
		___writeList_3 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYPERMISSION_T4244934776_H
#ifndef SECURITYATTRIBUTE_T4008260079_H
#define SECURITYATTRIBUTE_T4008260079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t4008260079  : public Attribute_t861562559
{
public:
	// System.Security.Permissions.SecurityAction System.Security.Permissions.SecurityAttribute::m_Action
	int32_t ___m_Action_0;
	// System.Boolean System.Security.Permissions.SecurityAttribute::m_Unrestricted
	bool ___m_Unrestricted_1;

public:
	inline static int32_t get_offset_of_m_Action_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t4008260079, ___m_Action_0)); }
	inline int32_t get_m_Action_0() const { return ___m_Action_0; }
	inline int32_t* get_address_of_m_Action_0() { return &___m_Action_0; }
	inline void set_m_Action_0(int32_t value)
	{
		___m_Action_0 = value;
	}

	inline static int32_t get_offset_of_m_Unrestricted_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t4008260079, ___m_Unrestricted_1)); }
	inline bool get_m_Unrestricted_1() const { return ___m_Unrestricted_1; }
	inline bool* get_address_of_m_Unrestricted_1() { return &___m_Unrestricted_1; }
	inline void set_m_Unrestricted_1(bool value)
	{
		___m_Unrestricted_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T4008260079_H
#ifndef SECURITYPERMISSION_T2954997752_H
#define SECURITYPERMISSION_T2954997752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t2954997752  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t2954997752, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T2954997752_H
#ifndef STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#define STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t2780499738  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_1;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t2718874744 * ____list_2;

public:
	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738, ____list_2)); }
	inline ArrayList_t2718874744 * get__list_2() const { return ____list_2; }
	inline ArrayList_t2718874744 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(ArrayList_t2718874744 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((&____list_2), value);
	}
};

struct StrongNameIdentityPermission_t2780499738_StaticFields
{
public:
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t3456873960 * ___defaultVersion_0;

public:
	inline static int32_t get_offset_of_defaultVersion_0() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738_StaticFields, ___defaultVersion_0)); }
	inline Version_t3456873960 * get_defaultVersion_0() const { return ___defaultVersion_0; }
	inline Version_t3456873960 ** get_address_of_defaultVersion_0() { return &___defaultVersion_0; }
	inline void set_defaultVersion_0(Version_t3456873960 * value)
	{
		___defaultVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultVersion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#ifndef UIPERMISSION_T826475846_H
#define UIPERMISSION_T826475846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermission
struct  UIPermission_t826475846  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.UIPermissionWindow System.Security.Permissions.UIPermission::_window
	int32_t ____window_0;
	// System.Security.Permissions.UIPermissionClipboard System.Security.Permissions.UIPermission::_clipboard
	int32_t ____clipboard_1;

public:
	inline static int32_t get_offset_of__window_0() { return static_cast<int32_t>(offsetof(UIPermission_t826475846, ____window_0)); }
	inline int32_t get__window_0() const { return ____window_0; }
	inline int32_t* get_address_of__window_0() { return &____window_0; }
	inline void set__window_0(int32_t value)
	{
		____window_0 = value;
	}

	inline static int32_t get_offset_of__clipboard_1() { return static_cast<int32_t>(offsetof(UIPermission_t826475846, ____clipboard_1)); }
	inline int32_t get__clipboard_1() const { return ____clipboard_1; }
	inline int32_t* get_address_of__clipboard_1() { return &____clipboard_1; }
	inline void set__clipboard_1(int32_t value)
	{
		____clipboard_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPERMISSION_T826475846_H
#ifndef ZONEIDENTITYPERMISSION_T2250593031_H
#define ZONEIDENTITYPERMISSION_T2250593031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ZoneIdentityPermission
struct  ZoneIdentityPermission_t2250593031  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.SecurityZone System.Security.Permissions.ZoneIdentityPermission::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(ZoneIdentityPermission_t2250593031, ___zone_0)); }
	inline int32_t get_zone_0() const { return ___zone_0; }
	inline int32_t* get_address_of_zone_0() { return &___zone_0; }
	inline void set_zone_0(int32_t value)
	{
		___zone_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEIDENTITYPERMISSION_T2250593031_H
#ifndef FILECODEGROUP_T1720965944_H
#define FILECODEGROUP_T1720965944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FileCodeGroup
struct  FileCodeGroup_t1720965944  : public CodeGroup_t3811807446
{
public:
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Policy.FileCodeGroup::m_access
	int32_t ___m_access_6;

public:
	inline static int32_t get_offset_of_m_access_6() { return static_cast<int32_t>(offsetof(FileCodeGroup_t1720965944, ___m_access_6)); }
	inline int32_t get_m_access_6() const { return ___m_access_6; }
	inline int32_t* get_address_of_m_access_6() { return &___m_access_6; }
	inline void set_m_access_6(int32_t value)
	{
		___m_access_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILECODEGROUP_T1720965944_H
#ifndef POLICYLEVEL_T2891196107_H
#define POLICYLEVEL_T2891196107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t2891196107  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t3811807446 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t2718874744 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t2718874744 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t1853889766 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t1046076091 * ___xml_7;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___label_0)); }
	inline String_t* get_label_0() const { return ___label_0; }
	inline String_t** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(String_t* value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier((&___label_0), value);
	}

	inline static int32_t get_offset_of_root_code_group_1() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___root_code_group_1)); }
	inline CodeGroup_t3811807446 * get_root_code_group_1() const { return ___root_code_group_1; }
	inline CodeGroup_t3811807446 ** get_address_of_root_code_group_1() { return &___root_code_group_1; }
	inline void set_root_code_group_1(CodeGroup_t3811807446 * value)
	{
		___root_code_group_1 = value;
		Il2CppCodeGenWriteBarrier((&___root_code_group_1), value);
	}

	inline static int32_t get_offset_of_full_trust_assemblies_2() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___full_trust_assemblies_2)); }
	inline ArrayList_t2718874744 * get_full_trust_assemblies_2() const { return ___full_trust_assemblies_2; }
	inline ArrayList_t2718874744 ** get_address_of_full_trust_assemblies_2() { return &___full_trust_assemblies_2; }
	inline void set_full_trust_assemblies_2(ArrayList_t2718874744 * value)
	{
		___full_trust_assemblies_2 = value;
		Il2CppCodeGenWriteBarrier((&___full_trust_assemblies_2), value);
	}

	inline static int32_t get_offset_of_named_permission_sets_3() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___named_permission_sets_3)); }
	inline ArrayList_t2718874744 * get_named_permission_sets_3() const { return ___named_permission_sets_3; }
	inline ArrayList_t2718874744 ** get_address_of_named_permission_sets_3() { return &___named_permission_sets_3; }
	inline void set_named_permission_sets_3(ArrayList_t2718874744 * value)
	{
		___named_permission_sets_3 = value;
		Il2CppCodeGenWriteBarrier((&___named_permission_sets_3), value);
	}

	inline static int32_t get_offset_of__location_4() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ____location_4)); }
	inline String_t* get__location_4() const { return ____location_4; }
	inline String_t** get_address_of__location_4() { return &____location_4; }
	inline void set__location_4(String_t* value)
	{
		____location_4 = value;
		Il2CppCodeGenWriteBarrier((&____location_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}

	inline static int32_t get_offset_of_fullNames_6() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___fullNames_6)); }
	inline Hashtable_t1853889766 * get_fullNames_6() const { return ___fullNames_6; }
	inline Hashtable_t1853889766 ** get_address_of_fullNames_6() { return &___fullNames_6; }
	inline void set_fullNames_6(Hashtable_t1853889766 * value)
	{
		___fullNames_6 = value;
		Il2CppCodeGenWriteBarrier((&___fullNames_6), value);
	}

	inline static int32_t get_offset_of_xml_7() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___xml_7)); }
	inline SecurityElement_t1046076091 * get_xml_7() const { return ___xml_7; }
	inline SecurityElement_t1046076091 ** get_address_of_xml_7() { return &___xml_7; }
	inline void set_xml_7(SecurityElement_t1046076091 * value)
	{
		___xml_7 = value;
		Il2CppCodeGenWriteBarrier((&___xml_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYLEVEL_T2891196107_H
#ifndef POLICYSTATEMENT_T3052133691_H
#define POLICYSTATEMENT_T3052133691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatement
struct  PolicyStatement_t3052133691  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PolicyStatement::perms
	PermissionSet_t223948603 * ___perms_0;
	// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::attrs
	int32_t ___attrs_1;

public:
	inline static int32_t get_offset_of_perms_0() { return static_cast<int32_t>(offsetof(PolicyStatement_t3052133691, ___perms_0)); }
	inline PermissionSet_t223948603 * get_perms_0() const { return ___perms_0; }
	inline PermissionSet_t223948603 ** get_address_of_perms_0() { return &___perms_0; }
	inline void set_perms_0(PermissionSet_t223948603 * value)
	{
		___perms_0 = value;
		Il2CppCodeGenWriteBarrier((&___perms_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(PolicyStatement_t3052133691, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYSTATEMENT_T3052133691_H
#ifndef ZONE_T2011285646_H
#define ZONE_T2011285646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Zone
struct  Zone_t2011285646  : public RuntimeObject
{
public:
	// System.Security.SecurityZone System.Security.Policy.Zone::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(Zone_t2011285646, ___zone_0)); }
	inline int32_t get_zone_0() const { return ___zone_0; }
	inline int32_t* get_address_of_zone_0() { return &___zone_0; }
	inline void set_zone_0(int32_t value)
	{
		___zone_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONE_T2011285646_H
#ifndef ZONEMEMBERSHIPCONDITION_T3195636716_H
#define ZONEMEMBERSHIPCONDITION_T3195636716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ZoneMembershipCondition
struct  ZoneMembershipCondition_t3195636716  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.ZoneMembershipCondition::version
	int32_t ___version_0;
	// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::zone
	int32_t ___zone_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t3195636716, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_zone_1() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t3195636716, ___zone_1)); }
	inline int32_t get_zone_1() const { return ___zone_1; }
	inline int32_t* get_address_of_zone_1() { return &___zone_1; }
	inline void set_zone_1(int32_t value)
	{
		___zone_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEMEMBERSHIPCONDITION_T3195636716_H
#ifndef TRIPLEDES_T92303514_H
#define TRIPLEDES_T92303514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t92303514  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T92303514_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#define CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t3236455365  : public SecurityAttribute_t4008260079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#ifndef ISOLATEDSTORAGEFILEPERMISSION_T2861120981_H
#define ISOLATEDSTORAGEFILEPERMISSION_T2861120981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStorageFilePermission
struct  IsolatedStorageFilePermission_t2861120981  : public IsolatedStoragePermission_t2996329588
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEFILEPERMISSION_T2861120981_H
#ifndef TRIPLEDESCRYPTOSERVICEPROVIDER_T3595206342_H
#define TRIPLEDESCRYPTOSERVICEPROVIDER_T3595206342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct  TripleDESCryptoServiceProvider_t3595206342  : public TripleDES_t92303514
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESCRYPTOSERVICEPROVIDER_T3595206342_H
#ifndef PERMISSIONSETATTRIBUTE_T2779865727_H
#define PERMISSIONSETATTRIBUTE_T2779865727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionSetAttribute
struct  PermissionSetAttribute_t2779865727  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.String System.Security.Permissions.PermissionSetAttribute::xml
	String_t* ___xml_2;

public:
	inline static int32_t get_offset_of_xml_2() { return static_cast<int32_t>(offsetof(PermissionSetAttribute_t2779865727, ___xml_2)); }
	inline String_t* get_xml_2() const { return ___xml_2; }
	inline String_t** get_address_of_xml_2() { return &___xml_2; }
	inline void set_xml_2(String_t* value)
	{
		___xml_2 = value;
		Il2CppCodeGenWriteBarrier((&___xml_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSETATTRIBUTE_T2779865727_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#define SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t2256310021  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_2;

public:
	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t2256310021, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T2256310021_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (RSAOAEPKeyExchangeDeformatter_t3344463048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable900[1] = 
{
	RSAOAEPKeyExchangeDeformatter_t3344463048::get_offset_of_rsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (RSAOAEPKeyExchangeFormatter_t2041696538), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable901[3] = 
{
	RSAOAEPKeyExchangeFormatter_t2041696538::get_offset_of_rsa_0(),
	RSAOAEPKeyExchangeFormatter_t2041696538::get_offset_of_random_1(),
	RSAOAEPKeyExchangeFormatter_t2041696538::get_offset_of_param_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (RSAParameters_t1728406613)+ sizeof (RuntimeObject), sizeof(RSAParameters_t1728406613_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable902[8] = 
{
	RSAParameters_t1728406613::get_offset_of_P_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_Q_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_D_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_DP_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_DQ_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_InverseQ_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_Modulus_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_Exponent_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (RSAPKCS1KeyExchangeDeformatter_t2578812791), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable903[2] = 
{
	RSAPKCS1KeyExchangeDeformatter_t2578812791::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeDeformatter_t2578812791::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (RSAPKCS1KeyExchangeFormatter_t2761096101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable904[2] = 
{
	RSAPKCS1KeyExchangeFormatter_t2761096101::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeFormatter_t2761096101::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (RSAPKCS1SignatureDeformatter_t3767223008), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable905[2] = 
{
	RSAPKCS1SignatureDeformatter_t3767223008::get_offset_of_rsa_0(),
	RSAPKCS1SignatureDeformatter_t3767223008::get_offset_of_hashName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (RSAPKCS1SignatureFormatter_t1514197062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable906[2] = 
{
	RSAPKCS1SignatureFormatter_t1514197062::get_offset_of_rsa_0(),
	RSAPKCS1SignatureFormatter_t1514197062::get_offset_of_hash_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (SHA1_t1803193667), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (SHA1Internal_t3251293021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable908[7] = 
{
	0,
	0,
	SHA1Internal_t3251293021::get_offset_of__H_2(),
	SHA1Internal_t3251293021::get_offset_of_count_3(),
	SHA1Internal_t3251293021::get_offset_of__ProcessingBuffer_4(),
	SHA1Internal_t3251293021::get_offset_of__ProcessingBufferCount_5(),
	SHA1Internal_t3251293021::get_offset_of_buff_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (SHA1CryptoServiceProvider_t3661059764), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable909[1] = 
{
	SHA1CryptoServiceProvider_t3661059764::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (SHA1Managed_t1754513891), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable910[1] = 
{
	SHA1Managed_t1754513891::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (SHA256_t3672283617), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (SHA256Managed_t955042874), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable912[7] = 
{
	0,
	0,
	SHA256Managed_t955042874::get_offset_of__H_6(),
	SHA256Managed_t955042874::get_offset_of_count_7(),
	SHA256Managed_t955042874::get_offset_of__ProcessingBuffer_8(),
	SHA256Managed_t955042874::get_offset_of__ProcessingBufferCount_9(),
	SHA256Managed_t955042874::get_offset_of_buff_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (SHA384_t540967702), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (SHA384Managed_t74158575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable914[14] = 
{
	SHA384Managed_t74158575::get_offset_of_xBuf_4(),
	SHA384Managed_t74158575::get_offset_of_xBufOff_5(),
	SHA384Managed_t74158575::get_offset_of_byteCount1_6(),
	SHA384Managed_t74158575::get_offset_of_byteCount2_7(),
	SHA384Managed_t74158575::get_offset_of_H1_8(),
	SHA384Managed_t74158575::get_offset_of_H2_9(),
	SHA384Managed_t74158575::get_offset_of_H3_10(),
	SHA384Managed_t74158575::get_offset_of_H4_11(),
	SHA384Managed_t74158575::get_offset_of_H5_12(),
	SHA384Managed_t74158575::get_offset_of_H6_13(),
	SHA384Managed_t74158575::get_offset_of_H7_14(),
	SHA384Managed_t74158575::get_offset_of_H8_15(),
	SHA384Managed_t74158575::get_offset_of_W_16(),
	SHA384Managed_t74158575::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (SHA512_t1346946930), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (SHA512Managed_t1787336339), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable916[14] = 
{
	SHA512Managed_t1787336339::get_offset_of_xBuf_4(),
	SHA512Managed_t1787336339::get_offset_of_xBufOff_5(),
	SHA512Managed_t1787336339::get_offset_of_byteCount1_6(),
	SHA512Managed_t1787336339::get_offset_of_byteCount2_7(),
	SHA512Managed_t1787336339::get_offset_of_H1_8(),
	SHA512Managed_t1787336339::get_offset_of_H2_9(),
	SHA512Managed_t1787336339::get_offset_of_H3_10(),
	SHA512Managed_t1787336339::get_offset_of_H4_11(),
	SHA512Managed_t1787336339::get_offset_of_H5_12(),
	SHA512Managed_t1787336339::get_offset_of_H6_13(),
	SHA512Managed_t1787336339::get_offset_of_H7_14(),
	SHA512Managed_t1787336339::get_offset_of_H8_15(),
	SHA512Managed_t1787336339::get_offset_of_W_16(),
	SHA512Managed_t1787336339::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (SHAConstants_t1360924992), -1, sizeof(SHAConstants_t1360924992_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable917[2] = 
{
	SHAConstants_t1360924992_StaticFields::get_offset_of_K1_0(),
	SHAConstants_t1360924992_StaticFields::get_offset_of_K2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (SignatureDescription_t1971889425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable918[4] = 
{
	SignatureDescription_t1971889425::get_offset_of__DeformatterAlgorithm_0(),
	SignatureDescription_t1971889425::get_offset_of__DigestAlgorithm_1(),
	SignatureDescription_t1971889425::get_offset_of__FormatterAlgorithm_2(),
	SignatureDescription_t1971889425::get_offset_of__KeyAlgorithm_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (DSASignatureDescription_t1163053634), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (RSAPKCS1SHA1SignatureDescription_t2887980541), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (SymmetricAlgorithm_t4254223087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable921[10] = 
{
	SymmetricAlgorithm_t4254223087::get_offset_of_BlockSizeValue_0(),
	SymmetricAlgorithm_t4254223087::get_offset_of_IVValue_1(),
	SymmetricAlgorithm_t4254223087::get_offset_of_KeySizeValue_2(),
	SymmetricAlgorithm_t4254223087::get_offset_of_KeyValue_3(),
	SymmetricAlgorithm_t4254223087::get_offset_of_LegalBlockSizesValue_4(),
	SymmetricAlgorithm_t4254223087::get_offset_of_LegalKeySizesValue_5(),
	SymmetricAlgorithm_t4254223087::get_offset_of_FeedbackSizeValue_6(),
	SymmetricAlgorithm_t4254223087::get_offset_of_ModeValue_7(),
	SymmetricAlgorithm_t4254223087::get_offset_of_PaddingValue_8(),
	SymmetricAlgorithm_t4254223087::get_offset_of_m_disposed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (ToBase64Transform_t2551557057), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable922[3] = 
{
	0,
	0,
	ToBase64Transform_t2551557057::get_offset_of_m_disposed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (TripleDES_t92303514), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (TripleDESCryptoServiceProvider_t3595206342), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (TripleDESTransform_t964169060), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable925[6] = 
{
	TripleDESTransform_t964169060::get_offset_of_E1_12(),
	TripleDESTransform_t964169060::get_offset_of_D2_13(),
	TripleDESTransform_t964169060::get_offset_of_E3_14(),
	TripleDESTransform_t964169060::get_offset_of_D1_15(),
	TripleDESTransform_t964169060::get_offset_of_E2_16(),
	TripleDESTransform_t964169060::get_offset_of_D3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (X509Certificate_t713131622), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable926[5] = 
{
	X509Certificate_t713131622::get_offset_of_x509_0(),
	X509Certificate_t713131622::get_offset_of_hideDates_1(),
	X509Certificate_t713131622::get_offset_of_cachedCertificateHash_2(),
	X509Certificate_t713131622::get_offset_of_issuer_name_3(),
	X509Certificate_t713131622::get_offset_of_subject_name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (X509KeyStorageFlags_t441861693)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable927[7] = 
{
	X509KeyStorageFlags_t441861693::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (CodeAccessSecurityAttribute_t3236455365), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (EnvironmentPermission_t1242010617), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable929[3] = 
{
	EnvironmentPermission_t1242010617::get_offset_of__state_0(),
	EnvironmentPermission_t1242010617::get_offset_of_readList_1(),
	EnvironmentPermission_t1242010617::get_offset_of_writeList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (EnvironmentPermissionAccess_t1745565475)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable930[5] = 
{
	EnvironmentPermissionAccess_t1745565475::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (FileDialogPermission_t986095094), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable931[1] = 
{
	FileDialogPermission_t986095094::get_offset_of__access_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (FileDialogPermissionAccess_t4172829844)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable932[5] = 
{
	FileDialogPermissionAccess_t4172829844::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (FileIOPermission_t3596906749), -1, sizeof(FileIOPermission_t3596906749_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable933[9] = 
{
	FileIOPermission_t3596906749_StaticFields::get_offset_of_BadPathNameCharacters_0(),
	FileIOPermission_t3596906749_StaticFields::get_offset_of_BadFileNameCharacters_1(),
	FileIOPermission_t3596906749::get_offset_of_m_Unrestricted_2(),
	FileIOPermission_t3596906749::get_offset_of_m_AllFilesAccess_3(),
	FileIOPermission_t3596906749::get_offset_of_m_AllLocalFilesAccess_4(),
	FileIOPermission_t3596906749::get_offset_of_readList_5(),
	FileIOPermission_t3596906749::get_offset_of_writeList_6(),
	FileIOPermission_t3596906749::get_offset_of_appendList_7(),
	FileIOPermission_t3596906749::get_offset_of_pathList_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (FileIOPermissionAccess_t1559273540)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable934[7] = 
{
	FileIOPermissionAccess_t1559273540::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (GacIdentityPermission_t2991335275), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (IsolatedStorageContainment_t3203638662)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable937[13] = 
{
	IsolatedStorageContainment_t3203638662::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (IsolatedStorageFilePermission_t2861120981), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { sizeof (IsolatedStoragePermission_t2996329588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable939[5] = 
{
	IsolatedStoragePermission_t2996329588::get_offset_of_m_userQuota_0(),
	IsolatedStoragePermission_t2996329588::get_offset_of_m_machineQuota_1(),
	IsolatedStoragePermission_t2996329588::get_offset_of_m_expirationDays_2(),
	IsolatedStoragePermission_t2996329588::get_offset_of_m_permanentData_3(),
	IsolatedStoragePermission_t2996329588::get_offset_of_m_allowed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { sizeof (KeyContainerPermission_t1460699488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable941[2] = 
{
	KeyContainerPermission_t1460699488::get_offset_of__accessEntries_0(),
	KeyContainerPermission_t1460699488::get_offset_of__flags_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (KeyContainerPermissionAccessEntry_t3026022710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable942[6] = 
{
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__flags_0(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__containerName_1(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__spec_2(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__store_3(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__providerName_4(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__type_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (KeyContainerPermissionAccessEntryCollection_t4144114052), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable943[1] = 
{
	KeyContainerPermissionAccessEntryCollection_t4144114052::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { sizeof (KeyContainerPermissionAccessEntryEnumerator_t3641947072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable944[1] = 
{
	KeyContainerPermissionAccessEntryEnumerator_t3641947072::get_offset_of_e_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { sizeof (KeyContainerPermissionFlags_t3864969297)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable945[12] = 
{
	KeyContainerPermissionFlags_t3864969297::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { sizeof (PermissionSetAttribute_t2779865727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable946[1] = 
{
	PermissionSetAttribute_t2779865727::get_offset_of_xml_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (PermissionState_t1178999876)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable947[3] = 
{
	PermissionState_t1178999876::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (PublisherIdentityPermission_t594127488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable948[1] = 
{
	PublisherIdentityPermission_t594127488::get_offset_of_x509_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (ReflectionPermission_t2208099681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable949[1] = 
{
	ReflectionPermission_t2208099681::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (ReflectionPermissionFlag_t4199904140)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable950[7] = 
{
	ReflectionPermissionFlag_t4199904140::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (RegistryPermission_t4244934776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable951[4] = 
{
	RegistryPermission_t4244934776::get_offset_of__state_0(),
	RegistryPermission_t4244934776::get_offset_of_createList_1(),
	RegistryPermission_t4244934776::get_offset_of_readList_2(),
	RegistryPermission_t4244934776::get_offset_of_writeList_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (RegistryPermissionAccess_t307445458)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable952[6] = 
{
	RegistryPermissionAccess_t307445458::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (SecurityAction_t569814076)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable953[10] = 
{
	SecurityAction_t569814076::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (SecurityPermission_t2954997752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable954[1] = 
{
	SecurityPermission_t2954997752::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (SecurityPermissionAttribute_t2256310021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable955[1] = 
{
	SecurityPermissionAttribute_t2256310021::get_offset_of_m_Flags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (SecurityPermissionFlag_t3459270124)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable956[17] = 
{
	SecurityPermissionFlag_t3459270124::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { sizeof (SiteIdentityPermission_t4239769539), -1, sizeof(SiteIdentityPermission_t4239769539_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable957[2] = 
{
	SiteIdentityPermission_t4239769539::get_offset_of__site_0(),
	SiteIdentityPermission_t4239769539_StaticFields::get_offset_of_valid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (StrongNameIdentityPermission_t2780499738), -1, sizeof(StrongNameIdentityPermission_t2780499738_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable958[3] = 
{
	StrongNameIdentityPermission_t2780499738_StaticFields::get_offset_of_defaultVersion_0(),
	StrongNameIdentityPermission_t2780499738::get_offset_of__state_1(),
	StrongNameIdentityPermission_t2780499738::get_offset_of__list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (SNIP_t4156255223)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable959[3] = 
{
	SNIP_t4156255223::get_offset_of_PublicKey_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t4156255223::get_offset_of_Name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t4156255223::get_offset_of_AssemblyVersion_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (StrongNamePublicKeyBlob_t3355146440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable960[1] = 
{
	StrongNamePublicKeyBlob_t3355146440::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (UIPermission_t826475846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable961[2] = 
{
	UIPermission_t826475846::get_offset_of__window_0(),
	UIPermission_t826475846::get_offset_of__clipboard_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (UIPermissionClipboard_t4002838840)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable962[4] = 
{
	UIPermissionClipboard_t4002838840::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (UIPermissionWindow_t985109583)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable963[5] = 
{
	UIPermissionWindow_t985109583::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (UrlIdentityPermission_t48040392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable964[1] = 
{
	UrlIdentityPermission_t48040392::get_offset_of_url_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (ZoneIdentityPermission_t2250593031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable965[1] = 
{
	ZoneIdentityPermission_t2250593031::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (AllMembershipCondition_t198137363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable966[1] = 
{
	AllMembershipCondition_t198137363::get_offset_of_version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (ApplicationTrust_t3270368423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable967[6] = 
{
	ApplicationTrust_t3270368423::get_offset_of__appid_0(),
	ApplicationTrust_t3270368423::get_offset_of__defaultPolicy_1(),
	ApplicationTrust_t3270368423::get_offset_of__xtranfo_2(),
	ApplicationTrust_t3270368423::get_offset_of__trustrun_3(),
	ApplicationTrust_t3270368423::get_offset_of__persist_4(),
	ApplicationTrust_t3270368423::get_offset_of_fullTrustAssemblies_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (CodeConnectAccess_t1103527196), -1, sizeof(CodeConnectAccess_t1103527196_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable968[6] = 
{
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_AnyScheme_0(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_DefaultPort_1(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_OriginPort_2(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_OriginScheme_3(),
	CodeConnectAccess_t1103527196::get_offset_of__scheme_4(),
	CodeConnectAccess_t1103527196::get_offset_of__port_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (CodeGroup_t3811807446), -1, sizeof(CodeGroup_t3811807446_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable969[6] = 
{
	CodeGroup_t3811807446::get_offset_of_m_policy_0(),
	CodeGroup_t3811807446::get_offset_of_m_membershipCondition_1(),
	CodeGroup_t3811807446::get_offset_of_m_description_2(),
	CodeGroup_t3811807446::get_offset_of_m_name_3(),
	CodeGroup_t3811807446::get_offset_of_m_children_4(),
	CodeGroup_t3811807446_StaticFields::get_offset_of_U3CU3Ef__switchU24map2E_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (DefaultPolicies_t2520506789), -1, sizeof(DefaultPolicies_t2520506789_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable970[12] = 
{
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__fxVersion_0(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__ecmaKey_1(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__ecma_2(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__msFinalKey_3(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__msFinal_4(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__fullTrust_5(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__localIntranet_6(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__internet_7(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__skipVerification_8(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__execution_9(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__nothing_10(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__everything_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (Key_t3006169375)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable971[3] = 
{
	Key_t3006169375::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (Evidence_t2008144148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable972[4] = 
{
	Evidence_t2008144148::get_offset_of__locked_0(),
	Evidence_t2008144148::get_offset_of_hostEvidenceList_1(),
	Evidence_t2008144148::get_offset_of_assemblyEvidenceList_2(),
	Evidence_t2008144148::get_offset_of__hashCode_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (EvidenceEnumerator_t1708166667), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable973[3] = 
{
	EvidenceEnumerator_t1708166667::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t1708166667::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t1708166667::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (FileCodeGroup_t1720965944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable974[1] = 
{
	FileCodeGroup_t1720965944::get_offset_of_m_access_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (FirstMatchCodeGroup_t885469689), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (GacInstalled_t3565883570), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (Hash_t5925575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable977[2] = 
{
	Hash_t5925575::get_offset_of_assembly_0(),
	Hash_t5925575::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (MembershipConditionHelper_t2246572704), -1, sizeof(MembershipConditionHelper_t2246572704_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable982[1] = 
{
	MembershipConditionHelper_t2246572704_StaticFields::get_offset_of_XmlTag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (NetCodeGroup_t2217812384), -1, sizeof(NetCodeGroup_t2217812384_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable983[4] = 
{
	NetCodeGroup_t2217812384_StaticFields::get_offset_of_AbsentOriginScheme_6(),
	NetCodeGroup_t2217812384_StaticFields::get_offset_of_AnyOtherOriginScheme_7(),
	NetCodeGroup_t2217812384::get_offset_of__rules_8(),
	NetCodeGroup_t2217812384::get_offset_of__hashcode_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (PermissionRequestEvidence_t59447972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable984[3] = 
{
	PermissionRequestEvidence_t59447972::get_offset_of_requested_0(),
	PermissionRequestEvidence_t59447972::get_offset_of_optional_1(),
	PermissionRequestEvidence_t59447972::get_offset_of_denied_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (PolicyException_t1520028310), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (PolicyLevel_t2891196107), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable986[8] = 
{
	PolicyLevel_t2891196107::get_offset_of_label_0(),
	PolicyLevel_t2891196107::get_offset_of_root_code_group_1(),
	PolicyLevel_t2891196107::get_offset_of_full_trust_assemblies_2(),
	PolicyLevel_t2891196107::get_offset_of_named_permission_sets_3(),
	PolicyLevel_t2891196107::get_offset_of__location_4(),
	PolicyLevel_t2891196107::get_offset_of__type_5(),
	PolicyLevel_t2891196107::get_offset_of_fullNames_6(),
	PolicyLevel_t2891196107::get_offset_of_xml_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (PolicyStatement_t3052133691), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable987[2] = 
{
	PolicyStatement_t3052133691::get_offset_of_perms_0(),
	PolicyStatement_t3052133691::get_offset_of_attrs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (PolicyStatementAttribute_t1674167676)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable988[5] = 
{
	PolicyStatementAttribute_t1674167676::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (Publisher_t2758056332), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable989[1] = 
{
	Publisher_t2758056332::get_offset_of_m_cert_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (Site_t1075497104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable990[1] = 
{
	Site_t1075497104::get_offset_of_origin_site_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (StrongName_t3675724614), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable991[3] = 
{
	StrongName_t3675724614::get_offset_of_publickey_0(),
	StrongName_t3675724614::get_offset_of_name_1(),
	StrongName_t3675724614::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (StrongNameMembershipCondition_t2614563360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable992[4] = 
{
	StrongNameMembershipCondition_t2614563360::get_offset_of_version_0(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_blob_1(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_name_2(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_assemblyVersion_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (UnionCodeGroup_t3773268997), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (Url_t207802215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable994[1] = 
{
	Url_t207802215::get_offset_of_origin_url_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (Zone_t2011285646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable995[1] = 
{
	Zone_t2011285646::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (ZoneMembershipCondition_t3195636716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable996[2] = 
{
	ZoneMembershipCondition_t3195636716::get_offset_of_version_0(),
	ZoneMembershipCondition_t3195636716::get_offset_of_zone_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (GenericIdentity_t2319019448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable997[2] = 
{
	GenericIdentity_t2319019448::get_offset_of_m_name_0(),
	GenericIdentity_t2319019448::get_offset_of_m_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (GenericPrincipal_t2520297622), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable998[2] = 
{
	GenericPrincipal_t2520297622::get_offset_of_m_identity_0(),
	GenericPrincipal_t2520297622::get_offset_of_m_roles_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
