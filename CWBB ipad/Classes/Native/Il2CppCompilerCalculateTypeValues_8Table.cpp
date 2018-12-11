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


// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1851031225;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t2800260182;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t2094547461;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t2441219148;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t1757093819;
// System.AppDomain
struct AppDomain_t1571427825;
// System.Byte[,]
struct ByteU5BU2CU5D_t4116647658;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Queue
struct Queue_t3637523393;
// System.IO.Stream
struct Stream_t1273022909;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1302094432;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t2187352167;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3040401154;
// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t1260826161;
// System.Runtime.Serialization.SerializationObjectManager
struct SerializationObjectManager_t4107654543;
// System.Security.Cryptography.CspParameters
struct CspParameters_t239852639;
// System.Security.Cryptography.DSA
struct DSA_t2386879874;
// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t1952596188;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2733259762;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t631222241;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.Security.Cryptography.TripleDES
struct TripleDES_t92303514;
// System.Security.IPermission
struct IPermission_t4015543450;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t2954997752;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2891196107;
// System.Security.SecureString
struct SecureString_t3041467854;
// System.String
struct String_t;
// System.Threading.CompressedStack
struct CompressedStack_t1202932761;
// System.Type
struct Type_t;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
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
#ifndef MESSAGEFORMATTER_T457758949_H
#define MESSAGEFORMATTER_T457758949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct  MessageFormatter_t457758949  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEFORMATTER_T457758949_H
#ifndef METADATAREFERENCE_T4077873660_H
#define METADATAREFERENCE_T4077873660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference
struct  MetadataReference_t4077873660  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference::Metadata
	TypeMetadata_t2187352167 * ___Metadata_0;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference::ObjectID
	int64_t ___ObjectID_1;

public:
	inline static int32_t get_offset_of_Metadata_0() { return static_cast<int32_t>(offsetof(MetadataReference_t4077873660, ___Metadata_0)); }
	inline TypeMetadata_t2187352167 * get_Metadata_0() const { return ___Metadata_0; }
	inline TypeMetadata_t2187352167 ** get_address_of_Metadata_0() { return &___Metadata_0; }
	inline void set_Metadata_0(TypeMetadata_t2187352167 * value)
	{
		___Metadata_0 = value;
		Il2CppCodeGenWriteBarrier((&___Metadata_0), value);
	}

	inline static int32_t get_offset_of_ObjectID_1() { return static_cast<int32_t>(offsetof(MetadataReference_t4077873660, ___ObjectID_1)); }
	inline int64_t get_ObjectID_1() const { return ___ObjectID_1; }
	inline int64_t* get_address_of_ObjectID_1() { return &___ObjectID_1; }
	inline void set_ObjectID_1(int64_t value)
	{
		___ObjectID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METADATAREFERENCE_T4077873660_H
#ifndef TYPEMETADATA_T2187352167_H
#define TYPEMETADATA_T2187352167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct  TypeMetadata_t2187352167  : public RuntimeObject
{
public:
	// System.String System.Runtime.Serialization.Formatters.Binary.TypeMetadata::TypeAssemblyName
	String_t* ___TypeAssemblyName_0;
	// System.String System.Runtime.Serialization.Formatters.Binary.TypeMetadata::InstanceTypeName
	String_t* ___InstanceTypeName_1;

public:
	inline static int32_t get_offset_of_TypeAssemblyName_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t2187352167, ___TypeAssemblyName_0)); }
	inline String_t* get_TypeAssemblyName_0() const { return ___TypeAssemblyName_0; }
	inline String_t** get_address_of_TypeAssemblyName_0() { return &___TypeAssemblyName_0; }
	inline void set_TypeAssemblyName_0(String_t* value)
	{
		___TypeAssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___TypeAssemblyName_0), value);
	}

	inline static int32_t get_offset_of_InstanceTypeName_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t2187352167, ___InstanceTypeName_1)); }
	inline String_t* get_InstanceTypeName_1() const { return ___InstanceTypeName_1; }
	inline String_t** get_address_of_InstanceTypeName_1() { return &___InstanceTypeName_1; }
	inline void set_InstanceTypeName_1(String_t* value)
	{
		___InstanceTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceTypeName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEMETADATA_T2187352167_H
#ifndef OBJECTSECURITY_T3035716992_H
#define OBJECTSECURITY_T3035716992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.ObjectSecurity
struct  ObjectSecurity_t3035716992  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSECURITY_T3035716992_H
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
#ifndef ASYMMETRICALGORITHM_T932037087_H
#define ASYMMETRICALGORITHM_T932037087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t932037087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T932037087_H
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
#ifndef BASE64CONSTANTS_T4102031153_H
#define BASE64CONSTANTS_T4102031153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Base64Constants
struct  Base64Constants_t4102031153  : public RuntimeObject
{
public:

public:
};

struct Base64Constants_t4102031153_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.Base64Constants::EncodeTable
	ByteU5BU5D_t4116647657* ___EncodeTable_0;
	// System.Byte[] System.Security.Cryptography.Base64Constants::DecodeTable
	ByteU5BU5D_t4116647657* ___DecodeTable_1;

public:
	inline static int32_t get_offset_of_EncodeTable_0() { return static_cast<int32_t>(offsetof(Base64Constants_t4102031153_StaticFields, ___EncodeTable_0)); }
	inline ByteU5BU5D_t4116647657* get_EncodeTable_0() const { return ___EncodeTable_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_EncodeTable_0() { return &___EncodeTable_0; }
	inline void set_EncodeTable_0(ByteU5BU5D_t4116647657* value)
	{
		___EncodeTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___EncodeTable_0), value);
	}

	inline static int32_t get_offset_of_DecodeTable_1() { return static_cast<int32_t>(offsetof(Base64Constants_t4102031153_StaticFields, ___DecodeTable_1)); }
	inline ByteU5BU5D_t4116647657* get_DecodeTable_1() const { return ___DecodeTable_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_DecodeTable_1() { return &___DecodeTable_1; }
	inline void set_DecodeTable_1(ByteU5BU5D_t4116647657* value)
	{
		___DecodeTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___DecodeTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE64CONSTANTS_T4102031153_H
#ifndef CRYPTOAPITRANSFORM_T1695680317_H
#define CRYPTOAPITRANSFORM_T1695680317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoAPITransform
struct  CryptoAPITransform_t1695680317  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.CryptoAPITransform::m_disposed
	bool ___m_disposed_0;

public:
	inline static int32_t get_offset_of_m_disposed_0() { return static_cast<int32_t>(offsetof(CryptoAPITransform_t1695680317, ___m_disposed_0)); }
	inline bool get_m_disposed_0() const { return ___m_disposed_0; }
	inline bool* get_address_of_m_disposed_0() { return &___m_disposed_0; }
	inline void set_m_disposed_0(bool value)
	{
		___m_disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOAPITRANSFORM_T1695680317_H
#ifndef CRYPTOCONFIG_T4201145714_H
#define CRYPTOCONFIG_T4201145714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t4201145714  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t4201145714_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_136;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t1853889766 * ___algorithms_137;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t1853889766 * ___oid_138;

public:
	inline static int32_t get_offset_of_lockObject_136() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___lockObject_136)); }
	inline RuntimeObject * get_lockObject_136() const { return ___lockObject_136; }
	inline RuntimeObject ** get_address_of_lockObject_136() { return &___lockObject_136; }
	inline void set_lockObject_136(RuntimeObject * value)
	{
		___lockObject_136 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_136), value);
	}

	inline static int32_t get_offset_of_algorithms_137() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___algorithms_137)); }
	inline Hashtable_t1853889766 * get_algorithms_137() const { return ___algorithms_137; }
	inline Hashtable_t1853889766 ** get_address_of_algorithms_137() { return &___algorithms_137; }
	inline void set_algorithms_137(Hashtable_t1853889766 * value)
	{
		___algorithms_137 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_137), value);
	}

	inline static int32_t get_offset_of_oid_138() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___oid_138)); }
	inline Hashtable_t1853889766 * get_oid_138() const { return ___oid_138; }
	inline Hashtable_t1853889766 ** get_address_of_oid_138() { return &___oid_138; }
	inline void set_oid_138(Hashtable_t1853889766 * value)
	{
		___oid_138 = value;
		Il2CppCodeGenWriteBarrier((&___oid_138), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T4201145714_H
#ifndef CRYPTOHANDLER_T2779508855_H
#define CRYPTOHANDLER_T2779508855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig/CryptoHandler
struct  CryptoHandler_t2779508855  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig/CryptoHandler::algorithms
	Hashtable_t1853889766 * ___algorithms_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig/CryptoHandler::oid
	Hashtable_t1853889766 * ___oid_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig/CryptoHandler::names
	Hashtable_t1853889766 * ___names_2;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig/CryptoHandler::classnames
	Hashtable_t1853889766 * ___classnames_3;
	// System.Int32 System.Security.Cryptography.CryptoConfig/CryptoHandler::level
	int32_t ___level_4;

public:
	inline static int32_t get_offset_of_algorithms_0() { return static_cast<int32_t>(offsetof(CryptoHandler_t2779508855, ___algorithms_0)); }
	inline Hashtable_t1853889766 * get_algorithms_0() const { return ___algorithms_0; }
	inline Hashtable_t1853889766 ** get_address_of_algorithms_0() { return &___algorithms_0; }
	inline void set_algorithms_0(Hashtable_t1853889766 * value)
	{
		___algorithms_0 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_0), value);
	}

	inline static int32_t get_offset_of_oid_1() { return static_cast<int32_t>(offsetof(CryptoHandler_t2779508855, ___oid_1)); }
	inline Hashtable_t1853889766 * get_oid_1() const { return ___oid_1; }
	inline Hashtable_t1853889766 ** get_address_of_oid_1() { return &___oid_1; }
	inline void set_oid_1(Hashtable_t1853889766 * value)
	{
		___oid_1 = value;
		Il2CppCodeGenWriteBarrier((&___oid_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(CryptoHandler_t2779508855, ___names_2)); }
	inline Hashtable_t1853889766 * get_names_2() const { return ___names_2; }
	inline Hashtable_t1853889766 ** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(Hashtable_t1853889766 * value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_classnames_3() { return static_cast<int32_t>(offsetof(CryptoHandler_t2779508855, ___classnames_3)); }
	inline Hashtable_t1853889766 * get_classnames_3() const { return ___classnames_3; }
	inline Hashtable_t1853889766 ** get_address_of_classnames_3() { return &___classnames_3; }
	inline void set_classnames_3(Hashtable_t1853889766 * value)
	{
		___classnames_3 = value;
		Il2CppCodeGenWriteBarrier((&___classnames_3), value);
	}

	inline static int32_t get_offset_of_level_4() { return static_cast<int32_t>(offsetof(CryptoHandler_t2779508855, ___level_4)); }
	inline int32_t get_level_4() const { return ___level_4; }
	inline int32_t* get_address_of_level_4() { return &___level_4; }
	inline void set_level_4(int32_t value)
	{
		___level_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOHANDLER_T2779508855_H
#ifndef CSPKEYCONTAINERINFO_T3833902945_H
#define CSPKEYCONTAINERINFO_T3833902945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspKeyContainerInfo
struct  CspKeyContainerInfo_t3833902945  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspParameters System.Security.Cryptography.CspKeyContainerInfo::_params
	CspParameters_t239852639 * ____params_0;
	// System.Boolean System.Security.Cryptography.CspKeyContainerInfo::_random
	bool ____random_1;

public:
	inline static int32_t get_offset_of__params_0() { return static_cast<int32_t>(offsetof(CspKeyContainerInfo_t3833902945, ____params_0)); }
	inline CspParameters_t239852639 * get__params_0() const { return ____params_0; }
	inline CspParameters_t239852639 ** get_address_of__params_0() { return &____params_0; }
	inline void set__params_0(CspParameters_t239852639 * value)
	{
		____params_0 = value;
		Il2CppCodeGenWriteBarrier((&____params_0), value);
	}

	inline static int32_t get_offset_of__random_1() { return static_cast<int32_t>(offsetof(CspKeyContainerInfo_t3833902945, ____random_1)); }
	inline bool get__random_1() const { return ____random_1; }
	inline bool* get_address_of__random_1() { return &____random_1; }
	inline void set__random_1(bool value)
	{
		____random_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPKEYCONTAINERINFO_T3833902945_H
#ifndef DERIVEBYTES_T2246965020_H
#define DERIVEBYTES_T2246965020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DeriveBytes
struct  DeriveBytes_t2246965020  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T2246965020_H
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
#ifndef KEYSIZES_T85027896_H
#define KEYSIZES_T85027896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t85027896  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::_maxSize
	int32_t ____maxSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::_minSize
	int32_t ____minSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::_skipSize
	int32_t ____skipSize_2;

public:
	inline static int32_t get_offset_of__maxSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t85027896, ____maxSize_0)); }
	inline int32_t get__maxSize_0() const { return ____maxSize_0; }
	inline int32_t* get_address_of__maxSize_0() { return &____maxSize_0; }
	inline void set__maxSize_0(int32_t value)
	{
		____maxSize_0 = value;
	}

	inline static int32_t get_offset_of__minSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t85027896, ____minSize_1)); }
	inline int32_t get__minSize_1() const { return ____minSize_1; }
	inline int32_t* get_address_of__minSize_1() { return &____minSize_1; }
	inline void set__minSize_1(int32_t value)
	{
		____minSize_1 = value;
	}

	inline static int32_t get_offset_of__skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t85027896, ____skipSize_2)); }
	inline int32_t get__skipSize_2() const { return ____skipSize_2; }
	inline int32_t* get_address_of__skipSize_2() { return &____skipSize_2; }
	inline void set__skipSize_2(int32_t value)
	{
		____skipSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSIZES_T85027896_H
#ifndef MASKGENERATIONMETHOD_T2116484826_H
#define MASKGENERATIONMETHOD_T2116484826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MaskGenerationMethod
struct  MaskGenerationMethod_t2116484826  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKGENERATIONMETHOD_T2116484826_H
#ifndef RANDOMNUMBERGENERATOR_T386037858_H
#define RANDOMNUMBERGENERATOR_T386037858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t386037858  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T386037858_H
#ifndef RIJNDAELMANAGEDTRANSFORM_T4102601014_H
#define RIJNDAELMANAGEDTRANSFORM_T4102601014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransform
struct  RijndaelManagedTransform_t4102601014  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RijndaelTransform System.Security.Cryptography.RijndaelManagedTransform::_st
	RijndaelTransform_t631222241 * ____st_0;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::_bs
	int32_t ____bs_1;

public:
	inline static int32_t get_offset_of__st_0() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ____st_0)); }
	inline RijndaelTransform_t631222241 * get__st_0() const { return ____st_0; }
	inline RijndaelTransform_t631222241 ** get_address_of__st_0() { return &____st_0; }
	inline void set__st_0(RijndaelTransform_t631222241 * value)
	{
		____st_0 = value;
		Il2CppCodeGenWriteBarrier((&____st_0), value);
	}

	inline static int32_t get_offset_of__bs_1() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ____bs_1)); }
	inline int32_t get__bs_1() const { return ____bs_1; }
	inline int32_t* get_address_of__bs_1() { return &____bs_1; }
	inline void set__bs_1(int32_t value)
	{
		____bs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGEDTRANSFORM_T4102601014_H
#ifndef HOSTSECURITYMANAGER_T1435734729_H
#define HOSTSECURITYMANAGER_T1435734729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.HostSecurityManager
struct  HostSecurityManager_t1435734729  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTSECURITYMANAGER_T1435734729_H
#ifndef PERMISSIONBUILDER_T1403083973_H
#define PERMISSIONBUILDER_T1403083973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionBuilder
struct  PermissionBuilder_t1403083973  : public RuntimeObject
{
public:

public:
};

struct PermissionBuilder_t1403083973_StaticFields
{
public:
	// System.Object[] System.Security.PermissionBuilder::psNone
	ObjectU5BU5D_t2843939325* ___psNone_0;

public:
	inline static int32_t get_offset_of_psNone_0() { return static_cast<int32_t>(offsetof(PermissionBuilder_t1403083973_StaticFields, ___psNone_0)); }
	inline ObjectU5BU5D_t2843939325* get_psNone_0() const { return ___psNone_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_psNone_0() { return &___psNone_0; }
	inline void set_psNone_0(ObjectU5BU5D_t2843939325* value)
	{
		___psNone_0 = value;
		Il2CppCodeGenWriteBarrier((&___psNone_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONBUILDER_T1403083973_H
#ifndef SECURITYELEMENT_T1046076091_H
#define SECURITYELEMENT_T1046076091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement
struct  SecurityElement_t1046076091  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t2718874744 * ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t2718874744 * ___children_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___attributes_2)); }
	inline ArrayList_t2718874744 * get_attributes_2() const { return ___attributes_2; }
	inline ArrayList_t2718874744 ** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(ArrayList_t2718874744 * value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_2), value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___children_3)); }
	inline ArrayList_t2718874744 * get_children_3() const { return ___children_3; }
	inline ArrayList_t2718874744 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(ArrayList_t2718874744 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((&___children_3), value);
	}
};

struct SecurityElement_t1046076091_StaticFields
{
public:
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t3528271667* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t3528271667* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t3528271667* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t3528271667* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t3528271667* ___invalid_chars_8;

public:
	inline static int32_t get_offset_of_invalid_tag_chars_4() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_tag_chars_4)); }
	inline CharU5BU5D_t3528271667* get_invalid_tag_chars_4() const { return ___invalid_tag_chars_4; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_tag_chars_4() { return &___invalid_tag_chars_4; }
	inline void set_invalid_tag_chars_4(CharU5BU5D_t3528271667* value)
	{
		___invalid_tag_chars_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_tag_chars_4), value);
	}

	inline static int32_t get_offset_of_invalid_text_chars_5() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_text_chars_5)); }
	inline CharU5BU5D_t3528271667* get_invalid_text_chars_5() const { return ___invalid_text_chars_5; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_text_chars_5() { return &___invalid_text_chars_5; }
	inline void set_invalid_text_chars_5(CharU5BU5D_t3528271667* value)
	{
		___invalid_text_chars_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_text_chars_5), value);
	}

	inline static int32_t get_offset_of_invalid_attr_name_chars_6() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_attr_name_chars_6)); }
	inline CharU5BU5D_t3528271667* get_invalid_attr_name_chars_6() const { return ___invalid_attr_name_chars_6; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_attr_name_chars_6() { return &___invalid_attr_name_chars_6; }
	inline void set_invalid_attr_name_chars_6(CharU5BU5D_t3528271667* value)
	{
		___invalid_attr_name_chars_6 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_name_chars_6), value);
	}

	inline static int32_t get_offset_of_invalid_attr_value_chars_7() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_attr_value_chars_7)); }
	inline CharU5BU5D_t3528271667* get_invalid_attr_value_chars_7() const { return ___invalid_attr_value_chars_7; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_attr_value_chars_7() { return &___invalid_attr_value_chars_7; }
	inline void set_invalid_attr_value_chars_7(CharU5BU5D_t3528271667* value)
	{
		___invalid_attr_value_chars_7 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_value_chars_7), value);
	}

	inline static int32_t get_offset_of_invalid_chars_8() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_chars_8)); }
	inline CharU5BU5D_t3528271667* get_invalid_chars_8() const { return ___invalid_chars_8; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_chars_8() { return &___invalid_chars_8; }
	inline void set_invalid_chars_8(CharU5BU5D_t3528271667* value)
	{
		___invalid_chars_8 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_chars_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYELEMENT_T1046076091_H
#ifndef SECURITYATTRIBUTE_T3566489056_H
#define SECURITYATTRIBUTE_T3566489056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement/SecurityAttribute
struct  SecurityAttribute_t3566489056  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement/SecurityAttribute::_name
	String_t* ____name_0;
	// System.String System.Security.SecurityElement/SecurityAttribute::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t3566489056, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t3566489056, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T3566489056_H
#ifndef SECURITYMANAGER_T3383402582_H
#define SECURITYMANAGER_T3383402582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t3383402582  : public RuntimeObject
{
public:

public:
};

struct SecurityManager_t3383402582_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	RuntimeObject * ____lockObject_0;
	// System.Collections.ArrayList System.Security.SecurityManager::_hierarchy
	ArrayList_t2718874744 * ____hierarchy_1;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t1853889766 * ____declsecCache_2;
	// System.Security.Policy.PolicyLevel System.Security.SecurityManager::_level
	PolicyLevel_t2891196107 * ____level_3;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t2954997752 * ____execution_4;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____lockObject_0)); }
	inline RuntimeObject * get__lockObject_0() const { return ____lockObject_0; }
	inline RuntimeObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(RuntimeObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&____lockObject_0), value);
	}

	inline static int32_t get_offset_of__hierarchy_1() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____hierarchy_1)); }
	inline ArrayList_t2718874744 * get__hierarchy_1() const { return ____hierarchy_1; }
	inline ArrayList_t2718874744 ** get_address_of__hierarchy_1() { return &____hierarchy_1; }
	inline void set__hierarchy_1(ArrayList_t2718874744 * value)
	{
		____hierarchy_1 = value;
		Il2CppCodeGenWriteBarrier((&____hierarchy_1), value);
	}

	inline static int32_t get_offset_of__declsecCache_2() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____declsecCache_2)); }
	inline Hashtable_t1853889766 * get__declsecCache_2() const { return ____declsecCache_2; }
	inline Hashtable_t1853889766 ** get_address_of__declsecCache_2() { return &____declsecCache_2; }
	inline void set__declsecCache_2(Hashtable_t1853889766 * value)
	{
		____declsecCache_2 = value;
		Il2CppCodeGenWriteBarrier((&____declsecCache_2), value);
	}

	inline static int32_t get_offset_of__level_3() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____level_3)); }
	inline PolicyLevel_t2891196107 * get__level_3() const { return ____level_3; }
	inline PolicyLevel_t2891196107 ** get_address_of__level_3() { return &____level_3; }
	inline void set__level_3(PolicyLevel_t2891196107 * value)
	{
		____level_3 = value;
		Il2CppCodeGenWriteBarrier((&____level_3), value);
	}

	inline static int32_t get_offset_of__execution_4() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____execution_4)); }
	inline SecurityPermission_t2954997752 * get__execution_4() const { return ____execution_4; }
	inline SecurityPermission_t2954997752 ** get_address_of__execution_4() { return &____execution_4; }
	inline void set__execution_4(SecurityPermission_t2954997752 * value)
	{
		____execution_4 = value;
		Il2CppCodeGenWriteBarrier((&____execution_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYMANAGER_T3383402582_H
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
#ifndef CLRTYPEMETADATA_T3885853035_H
#define CLRTYPEMETADATA_T3885853035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata
struct  ClrTypeMetadata_t3885853035  : public TypeMetadata_t2187352167
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata::InstanceType
	Type_t * ___InstanceType_2;

public:
	inline static int32_t get_offset_of_InstanceType_2() { return static_cast<int32_t>(offsetof(ClrTypeMetadata_t3885853035, ___InstanceType_2)); }
	inline Type_t * get_InstanceType_2() const { return ___InstanceType_2; }
	inline Type_t ** get_address_of_InstanceType_2() { return &___InstanceType_2; }
	inline void set_InstanceType_2(Type_t * value)
	{
		___InstanceType_2 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceType_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLRTYPEMETADATA_T3885853035_H
#ifndef COMMONOBJECTSECURITY_T1466880084_H
#define COMMONOBJECTSECURITY_T1466880084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.CommonObjectSecurity
struct  CommonObjectSecurity_t1466880084  : public ObjectSecurity_t3035716992
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONOBJECTSECURITY_T1466880084_H
#ifndef ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T1828959166_H
#define ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T1828959166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AllowPartiallyTrustedCallersAttribute
struct  AllowPartiallyTrustedCallersAttribute_t1828959166  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T1828959166_H
#ifndef DESTRANSFORM_T4088905499_H
#define DESTRANSFORM_T4088905499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t4088905499  : public SymmetricTransform_t3802591842
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t4116647657* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t4116647657* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t2770800703* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499, ___keySchedule_16)); }
	inline ByteU5BU5D_t4116647657* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t4116647657* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499, ___byteBuff_17)); }
	inline ByteU5BU5D_t4116647657* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t4116647657* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t2770800703* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t2770800703** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t2770800703* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t4088905499_StaticFields
{
public:
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BIT_SIZE
	int32_t ___KEY_BIT_SIZE_12;
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BYTE_SIZE
	int32_t ___KEY_BYTE_SIZE_13;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BIT_SIZE
	int32_t ___BLOCK_BIT_SIZE_14;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BYTE_SIZE
	int32_t ___BLOCK_BYTE_SIZE_15;
	// System.UInt32[] System.Security.Cryptography.DESTransform::spBoxes
	UInt32U5BU5D_t2770800703* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t4116647657* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t4116647657* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t4116647657* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t2770800703* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t2770800703* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t2770800703* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t2770800703** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t2770800703* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t4116647657* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t4116647657** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t4116647657* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t4116647657* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t4116647657** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t4116647657* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t4116647657* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t4116647657** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t4116647657* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t2770800703* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t2770800703** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t2770800703* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t2770800703* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t2770800703** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t2770800703* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T4088905499_H
#ifndef DSA_T2386879874_H
#define DSA_T2386879874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t2386879874  : public AsymmetricAlgorithm_t932037087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T2386879874_H
#ifndef DSAPARAMETERS_T1885824122_H
#define DSAPARAMETERS_T1885824122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t1885824122 
{
public:
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t4116647657* ___G_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t4116647657* ___J_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t4116647657* ___P_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t4116647657* ___Q_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t4116647657* ___Seed_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t4116647657* ___X_6;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t4116647657* ___Y_7;

public:
	inline static int32_t get_offset_of_Counter_0() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___Counter_0)); }
	inline int32_t get_Counter_0() const { return ___Counter_0; }
	inline int32_t* get_address_of_Counter_0() { return &___Counter_0; }
	inline void set_Counter_0(int32_t value)
	{
		___Counter_0 = value;
	}

	inline static int32_t get_offset_of_G_1() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___G_1)); }
	inline ByteU5BU5D_t4116647657* get_G_1() const { return ___G_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_G_1() { return &___G_1; }
	inline void set_G_1(ByteU5BU5D_t4116647657* value)
	{
		___G_1 = value;
		Il2CppCodeGenWriteBarrier((&___G_1), value);
	}

	inline static int32_t get_offset_of_J_2() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___J_2)); }
	inline ByteU5BU5D_t4116647657* get_J_2() const { return ___J_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_J_2() { return &___J_2; }
	inline void set_J_2(ByteU5BU5D_t4116647657* value)
	{
		___J_2 = value;
		Il2CppCodeGenWriteBarrier((&___J_2), value);
	}

	inline static int32_t get_offset_of_P_3() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___P_3)); }
	inline ByteU5BU5D_t4116647657* get_P_3() const { return ___P_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_P_3() { return &___P_3; }
	inline void set_P_3(ByteU5BU5D_t4116647657* value)
	{
		___P_3 = value;
		Il2CppCodeGenWriteBarrier((&___P_3), value);
	}

	inline static int32_t get_offset_of_Q_4() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___Q_4)); }
	inline ByteU5BU5D_t4116647657* get_Q_4() const { return ___Q_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_Q_4() { return &___Q_4; }
	inline void set_Q_4(ByteU5BU5D_t4116647657* value)
	{
		___Q_4 = value;
		Il2CppCodeGenWriteBarrier((&___Q_4), value);
	}

	inline static int32_t get_offset_of_Seed_5() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___Seed_5)); }
	inline ByteU5BU5D_t4116647657* get_Seed_5() const { return ___Seed_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_Seed_5() { return &___Seed_5; }
	inline void set_Seed_5(ByteU5BU5D_t4116647657* value)
	{
		___Seed_5 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_5), value);
	}

	inline static int32_t get_offset_of_X_6() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___X_6)); }
	inline ByteU5BU5D_t4116647657* get_X_6() const { return ___X_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_X_6() { return &___X_6; }
	inline void set_X_6(ByteU5BU5D_t4116647657* value)
	{
		___X_6 = value;
		Il2CppCodeGenWriteBarrier((&___X_6), value);
	}

	inline static int32_t get_offset_of_Y_7() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___Y_7)); }
	inline ByteU5BU5D_t4116647657* get_Y_7() const { return ___Y_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_Y_7() { return &___Y_7; }
	inline void set_Y_7(ByteU5BU5D_t4116647657* value)
	{
		___Y_7 = value;
		Il2CppCodeGenWriteBarrier((&___Y_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1885824122_marshaled_pinvoke
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1885824122_marshaled_com
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
#endif // DSAPARAMETERS_T1885824122_H
#ifndef DSASIGNATUREDEFORMATTER_T3677955172_H
#define DSASIGNATUREDEFORMATTER_T3677955172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t3677955172  : public AsymmetricSignatureDeformatter_t2681190756
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t2386879874 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t3677955172, ___dsa_0)); }
	inline DSA_t2386879874 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t2386879874 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t2386879874 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDEFORMATTER_T3677955172_H
#ifndef DSASIGNATUREFORMATTER_T2007981259_H
#define DSASIGNATUREFORMATTER_T2007981259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t2007981259  : public AsymmetricSignatureFormatter_t3486936014
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::dsa
	DSA_t2386879874 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t2007981259, ___dsa_0)); }
	inline DSA_t2386879874 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t2386879874 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t2386879874 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREFORMATTER_T2007981259_H
#ifndef KEYEDHASHALGORITHM_T112861511_H
#define KEYEDHASHALGORITHM_T112861511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t112861511  : public HashAlgorithm_t1432317219
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t112861511, ___KeyValue_4)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T112861511_H
#ifndef MD5_T3177620429_H
#define MD5_T3177620429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t3177620429  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T3177620429_H
#ifndef PKCS1MASKGENERATIONMETHOD_T1129351447_H
#define PKCS1MASKGENERATIONMETHOD_T1129351447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PKCS1MaskGenerationMethod
struct  PKCS1MaskGenerationMethod_t1129351447  : public MaskGenerationMethod_t2116484826
{
public:
	// System.String System.Security.Cryptography.PKCS1MaskGenerationMethod::hashName
	String_t* ___hashName_0;

public:
	inline static int32_t get_offset_of_hashName_0() { return static_cast<int32_t>(offsetof(PKCS1MaskGenerationMethod_t1129351447, ___hashName_0)); }
	inline String_t* get_hashName_0() const { return ___hashName_0; }
	inline String_t** get_address_of_hashName_0() { return &___hashName_0; }
	inline void set_hashName_0(String_t* value)
	{
		___hashName_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1MASKGENERATIONMETHOD_T1129351447_H
#ifndef PASSWORDDERIVEBYTES_T2836652680_H
#define PASSWORDDERIVEBYTES_T2836652680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PasswordDeriveBytes
struct  PasswordDeriveBytes_t2836652680  : public DeriveBytes_t2246965020
{
public:
	// System.String System.Security.Cryptography.PasswordDeriveBytes::HashNameValue
	String_t* ___HashNameValue_0;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::SaltValue
	ByteU5BU5D_t4116647657* ___SaltValue_1;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::IterationsValue
	int32_t ___IterationsValue_2;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.PasswordDeriveBytes::hash
	HashAlgorithm_t1432317219 * ___hash_3;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::state
	int32_t ___state_4;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::password
	ByteU5BU5D_t4116647657* ___password_5;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::initial
	ByteU5BU5D_t4116647657* ___initial_6;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::output
	ByteU5BU5D_t4116647657* ___output_7;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::position
	int32_t ___position_8;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::hashnumber
	int32_t ___hashnumber_9;

public:
	inline static int32_t get_offset_of_HashNameValue_0() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ___HashNameValue_0)); }
	inline String_t* get_HashNameValue_0() const { return ___HashNameValue_0; }
	inline String_t** get_address_of_HashNameValue_0() { return &___HashNameValue_0; }
	inline void set_HashNameValue_0(String_t* value)
	{
		___HashNameValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashNameValue_0), value);
	}

	inline static int32_t get_offset_of_SaltValue_1() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ___SaltValue_1)); }
	inline ByteU5BU5D_t4116647657* get_SaltValue_1() const { return ___SaltValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_SaltValue_1() { return &___SaltValue_1; }
	inline void set_SaltValue_1(ByteU5BU5D_t4116647657* value)
	{
		___SaltValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___SaltValue_1), value);
	}

	inline static int32_t get_offset_of_IterationsValue_2() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ___IterationsValue_2)); }
	inline int32_t get_IterationsValue_2() const { return ___IterationsValue_2; }
	inline int32_t* get_address_of_IterationsValue_2() { return &___IterationsValue_2; }
	inline void set_IterationsValue_2(int32_t value)
	{
		___IterationsValue_2 = value;
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ___hash_3)); }
	inline HashAlgorithm_t1432317219 * get_hash_3() const { return ___hash_3; }
	inline HashAlgorithm_t1432317219 ** get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(HashAlgorithm_t1432317219 * value)
	{
		___hash_3 = value;
		Il2CppCodeGenWriteBarrier((&___hash_3), value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_password_5() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ___password_5)); }
	inline ByteU5BU5D_t4116647657* get_password_5() const { return ___password_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_password_5() { return &___password_5; }
	inline void set_password_5(ByteU5BU5D_t4116647657* value)
	{
		___password_5 = value;
		Il2CppCodeGenWriteBarrier((&___password_5), value);
	}

	inline static int32_t get_offset_of_initial_6() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ___initial_6)); }
	inline ByteU5BU5D_t4116647657* get_initial_6() const { return ___initial_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_initial_6() { return &___initial_6; }
	inline void set_initial_6(ByteU5BU5D_t4116647657* value)
	{
		___initial_6 = value;
		Il2CppCodeGenWriteBarrier((&___initial_6), value);
	}

	inline static int32_t get_offset_of_output_7() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ___output_7)); }
	inline ByteU5BU5D_t4116647657* get_output_7() const { return ___output_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_output_7() { return &___output_7; }
	inline void set_output_7(ByteU5BU5D_t4116647657* value)
	{
		___output_7 = value;
		Il2CppCodeGenWriteBarrier((&___output_7), value);
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ___position_8)); }
	inline int32_t get_position_8() const { return ___position_8; }
	inline int32_t* get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(int32_t value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_hashnumber_9() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ___hashnumber_9)); }
	inline int32_t get_hashnumber_9() const { return ___hashnumber_9; }
	inline int32_t* get_address_of_hashnumber_9() { return &___hashnumber_9; }
	inline void set_hashnumber_9(int32_t value)
	{
		___hashnumber_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSWORDDERIVEBYTES_T2836652680_H
#ifndef RC2TRANSFORM_T458321487_H
#define RC2TRANSFORM_T458321487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2Transform
struct  RC2Transform_t458321487  : public SymmetricTransform_t3802591842
{
public:
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0_12;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1_13;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2_14;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3_15;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t3326319531* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t458321487, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t458321487, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t458321487, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t458321487, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t458321487, ___K_16)); }
	inline UInt16U5BU5D_t3326319531* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t3326319531** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t3326319531* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((&___K_16), value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t458321487, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t458321487_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t4116647657* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t458321487_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_t4116647657* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_t4116647657* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((&___pitable_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2TRANSFORM_T458321487_H
#ifndef RIPEMD160_T268675434_H
#define RIPEMD160_T268675434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160
struct  RIPEMD160_t268675434  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160_T268675434_H
#ifndef RSA_T2385438082_H
#define RSA_T2385438082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t2385438082  : public AsymmetricAlgorithm_t932037087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T2385438082_H
#ifndef RFC2898DERIVEBYTES_T546674159_H
#define RFC2898DERIVEBYTES_T546674159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rfc2898DeriveBytes
struct  Rfc2898DeriveBytes_t546674159  : public DeriveBytes_t2246965020
{
public:
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_iteration
	int32_t ____iteration_1;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_salt
	ByteU5BU5D_t4116647657* ____salt_2;
	// System.Security.Cryptography.HMACSHA1 System.Security.Cryptography.Rfc2898DeriveBytes::_hmac
	HMACSHA1_t1952596188 * ____hmac_3;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_buffer
	ByteU5BU5D_t4116647657* ____buffer_4;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_pos
	int32_t ____pos_5;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_f
	int32_t ____f_6;

public:
	inline static int32_t get_offset_of__iteration_1() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ____iteration_1)); }
	inline int32_t get__iteration_1() const { return ____iteration_1; }
	inline int32_t* get_address_of__iteration_1() { return &____iteration_1; }
	inline void set__iteration_1(int32_t value)
	{
		____iteration_1 = value;
	}

	inline static int32_t get_offset_of__salt_2() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ____salt_2)); }
	inline ByteU5BU5D_t4116647657* get__salt_2() const { return ____salt_2; }
	inline ByteU5BU5D_t4116647657** get_address_of__salt_2() { return &____salt_2; }
	inline void set__salt_2(ByteU5BU5D_t4116647657* value)
	{
		____salt_2 = value;
		Il2CppCodeGenWriteBarrier((&____salt_2), value);
	}

	inline static int32_t get_offset_of__hmac_3() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ____hmac_3)); }
	inline HMACSHA1_t1952596188 * get__hmac_3() const { return ____hmac_3; }
	inline HMACSHA1_t1952596188 ** get_address_of__hmac_3() { return &____hmac_3; }
	inline void set__hmac_3(HMACSHA1_t1952596188 * value)
	{
		____hmac_3 = value;
		Il2CppCodeGenWriteBarrier((&____hmac_3), value);
	}

	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ____buffer_4)); }
	inline ByteU5BU5D_t4116647657* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t4116647657* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ____f_6)); }
	inline int32_t get__f_6() const { return ____f_6; }
	inline int32_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(int32_t value)
	{
		____f_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RFC2898DERIVEBYTES_T546674159_H
#ifndef RIJNDAELTRANSFORM_T631222241_H
#define RIJNDAELTRANSFORM_T631222241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelTransform
struct  RijndaelTransform_t631222241  : public SymmetricTransform_t3802591842
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::expandedKey
	UInt32U5BU5D_t2770800703* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nb
	int32_t ___Nb_13;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nk
	int32_t ___Nk_14;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nr
	int32_t ___Nr_15;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241, ___expandedKey_12)); }
	inline UInt32U5BU5D_t2770800703* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t2770800703** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t2770800703* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nb_13() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241, ___Nb_13)); }
	inline int32_t get_Nb_13() const { return ___Nb_13; }
	inline int32_t* get_address_of_Nb_13() { return &___Nb_13; }
	inline void set_Nb_13(int32_t value)
	{
		___Nb_13 = value;
	}

	inline static int32_t get_offset_of_Nk_14() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241, ___Nk_14)); }
	inline int32_t get_Nk_14() const { return ___Nk_14; }
	inline int32_t* get_address_of_Nk_14() { return &___Nk_14; }
	inline void set_Nk_14(int32_t value)
	{
		___Nk_14 = value;
	}

	inline static int32_t get_offset_of_Nr_15() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241, ___Nr_15)); }
	inline int32_t get_Nr_15() const { return ___Nr_15; }
	inline int32_t* get_address_of_Nr_15() { return &___Nr_15; }
	inline void set_Nr_15(int32_t value)
	{
		___Nr_15 = value;
	}
};

struct RijndaelTransform_t631222241_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::Rcon
	UInt32U5BU5D_t2770800703* ___Rcon_16;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::SBox
	ByteU5BU5D_t4116647657* ___SBox_17;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::iSBox
	ByteU5BU5D_t4116647657* ___iSBox_18;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T0
	UInt32U5BU5D_t2770800703* ___T0_19;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T1
	UInt32U5BU5D_t2770800703* ___T1_20;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T2
	UInt32U5BU5D_t2770800703* ___T2_21;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T3
	UInt32U5BU5D_t2770800703* ___T3_22;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT0
	UInt32U5BU5D_t2770800703* ___iT0_23;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT1
	UInt32U5BU5D_t2770800703* ___iT1_24;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT2
	UInt32U5BU5D_t2770800703* ___iT2_25;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT3
	UInt32U5BU5D_t2770800703* ___iT3_26;

public:
	inline static int32_t get_offset_of_Rcon_16() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241_StaticFields, ___Rcon_16)); }
	inline UInt32U5BU5D_t2770800703* get_Rcon_16() const { return ___Rcon_16; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Rcon_16() { return &___Rcon_16; }
	inline void set_Rcon_16(UInt32U5BU5D_t2770800703* value)
	{
		___Rcon_16 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_16), value);
	}

	inline static int32_t get_offset_of_SBox_17() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241_StaticFields, ___SBox_17)); }
	inline ByteU5BU5D_t4116647657* get_SBox_17() const { return ___SBox_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_SBox_17() { return &___SBox_17; }
	inline void set_SBox_17(ByteU5BU5D_t4116647657* value)
	{
		___SBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_17), value);
	}

	inline static int32_t get_offset_of_iSBox_18() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241_StaticFields, ___iSBox_18)); }
	inline ByteU5BU5D_t4116647657* get_iSBox_18() const { return ___iSBox_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_iSBox_18() { return &___iSBox_18; }
	inline void set_iSBox_18(ByteU5BU5D_t4116647657* value)
	{
		___iSBox_18 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_18), value);
	}

	inline static int32_t get_offset_of_T0_19() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241_StaticFields, ___T0_19)); }
	inline UInt32U5BU5D_t2770800703* get_T0_19() const { return ___T0_19; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T0_19() { return &___T0_19; }
	inline void set_T0_19(UInt32U5BU5D_t2770800703* value)
	{
		___T0_19 = value;
		Il2CppCodeGenWriteBarrier((&___T0_19), value);
	}

	inline static int32_t get_offset_of_T1_20() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241_StaticFields, ___T1_20)); }
	inline UInt32U5BU5D_t2770800703* get_T1_20() const { return ___T1_20; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T1_20() { return &___T1_20; }
	inline void set_T1_20(UInt32U5BU5D_t2770800703* value)
	{
		___T1_20 = value;
		Il2CppCodeGenWriteBarrier((&___T1_20), value);
	}

	inline static int32_t get_offset_of_T2_21() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241_StaticFields, ___T2_21)); }
	inline UInt32U5BU5D_t2770800703* get_T2_21() const { return ___T2_21; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T2_21() { return &___T2_21; }
	inline void set_T2_21(UInt32U5BU5D_t2770800703* value)
	{
		___T2_21 = value;
		Il2CppCodeGenWriteBarrier((&___T2_21), value);
	}

	inline static int32_t get_offset_of_T3_22() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241_StaticFields, ___T3_22)); }
	inline UInt32U5BU5D_t2770800703* get_T3_22() const { return ___T3_22; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T3_22() { return &___T3_22; }
	inline void set_T3_22(UInt32U5BU5D_t2770800703* value)
	{
		___T3_22 = value;
		Il2CppCodeGenWriteBarrier((&___T3_22), value);
	}

	inline static int32_t get_offset_of_iT0_23() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241_StaticFields, ___iT0_23)); }
	inline UInt32U5BU5D_t2770800703* get_iT0_23() const { return ___iT0_23; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT0_23() { return &___iT0_23; }
	inline void set_iT0_23(UInt32U5BU5D_t2770800703* value)
	{
		___iT0_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_23), value);
	}

	inline static int32_t get_offset_of_iT1_24() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241_StaticFields, ___iT1_24)); }
	inline UInt32U5BU5D_t2770800703* get_iT1_24() const { return ___iT1_24; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT1_24() { return &___iT1_24; }
	inline void set_iT1_24(UInt32U5BU5D_t2770800703* value)
	{
		___iT1_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_24), value);
	}

	inline static int32_t get_offset_of_iT2_25() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241_StaticFields, ___iT2_25)); }
	inline UInt32U5BU5D_t2770800703* get_iT2_25() const { return ___iT2_25; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT2_25() { return &___iT2_25; }
	inline void set_iT2_25(UInt32U5BU5D_t2770800703* value)
	{
		___iT2_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_25), value);
	}

	inline static int32_t get_offset_of_iT3_26() { return static_cast<int32_t>(offsetof(RijndaelTransform_t631222241_StaticFields, ___iT3_26)); }
	inline UInt32U5BU5D_t2770800703* get_iT3_26() const { return ___iT3_26; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT3_26() { return &___iT3_26; }
	inline void set_iT3_26(UInt32U5BU5D_t2770800703* value)
	{
		___iT3_26 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELTRANSFORM_T631222241_H
#ifndef SECURESTRING_T3041467854_H
#define SECURESTRING_T3041467854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecureString
struct  SecureString_t3041467854  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Security.SecureString::length
	int32_t ___length_0;
	// System.Boolean System.Security.SecureString::disposed
	bool ___disposed_1;
	// System.Byte[] System.Security.SecureString::data
	ByteU5BU5D_t4116647657* ___data_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___data_2)); }
	inline ByteU5BU5D_t4116647657* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_t4116647657* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURESTRING_T3041467854_H
#ifndef SECURITYFRAME_T1422462475_H
#define SECURITYFRAME_T1422462475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityFrame
struct  SecurityFrame_t1422462475 
{
public:
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t1571427825 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t223948603 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t223948603 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t223948603 * ____permitonly_4;

public:
	inline static int32_t get_offset_of__domain_0() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____domain_0)); }
	inline AppDomain_t1571427825 * get__domain_0() const { return ____domain_0; }
	inline AppDomain_t1571427825 ** get_address_of__domain_0() { return &____domain_0; }
	inline void set__domain_0(AppDomain_t1571427825 * value)
	{
		____domain_0 = value;
		Il2CppCodeGenWriteBarrier((&____domain_0), value);
	}

	inline static int32_t get_offset_of__method_1() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____method_1)); }
	inline MethodInfo_t * get__method_1() const { return ____method_1; }
	inline MethodInfo_t ** get_address_of__method_1() { return &____method_1; }
	inline void set__method_1(MethodInfo_t * value)
	{
		____method_1 = value;
		Il2CppCodeGenWriteBarrier((&____method_1), value);
	}

	inline static int32_t get_offset_of__assert_2() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____assert_2)); }
	inline PermissionSet_t223948603 * get__assert_2() const { return ____assert_2; }
	inline PermissionSet_t223948603 ** get_address_of__assert_2() { return &____assert_2; }
	inline void set__assert_2(PermissionSet_t223948603 * value)
	{
		____assert_2 = value;
		Il2CppCodeGenWriteBarrier((&____assert_2), value);
	}

	inline static int32_t get_offset_of__deny_3() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____deny_3)); }
	inline PermissionSet_t223948603 * get__deny_3() const { return ____deny_3; }
	inline PermissionSet_t223948603 ** get_address_of__deny_3() { return &____deny_3; }
	inline void set__deny_3(PermissionSet_t223948603 * value)
	{
		____deny_3 = value;
		Il2CppCodeGenWriteBarrier((&____deny_3), value);
	}

	inline static int32_t get_offset_of__permitonly_4() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____permitonly_4)); }
	inline PermissionSet_t223948603 * get__permitonly_4() const { return ____permitonly_4; }
	inline PermissionSet_t223948603 ** get_address_of__permitonly_4() { return &____permitonly_4; }
	inline void set__permitonly_4(PermissionSet_t223948603 * value)
	{
		____permitonly_4 = value;
		Il2CppCodeGenWriteBarrier((&____permitonly_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.SecurityFrame
struct SecurityFrame_t1422462475_marshaled_pinvoke
{
	AppDomain_t1571427825 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t223948603 * ____assert_2;
	PermissionSet_t223948603 * ____deny_3;
	PermissionSet_t223948603 * ____permitonly_4;
};
// Native definition for COM marshalling of System.Security.SecurityFrame
struct SecurityFrame_t1422462475_marshaled_com
{
	AppDomain_t1571427825 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t223948603 * ____assert_2;
	PermissionSet_t223948603 * ____deny_3;
	PermissionSet_t223948603 * ____permitonly_4;
};
#endif // SECURITYFRAME_T1422462475_H
#ifndef SECURITYSAFECRITICALATTRIBUTE_T3505979402_H
#define SECURITYSAFECRITICALATTRIBUTE_T3505979402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecuritySafeCriticalAttribute
struct  SecuritySafeCriticalAttribute_t3505979402  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYSAFECRITICALATTRIBUTE_T3505979402_H
#ifndef SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T744305558_H
#define SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T744305558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SuppressUnmanagedCodeSecurityAttribute
struct  SuppressUnmanagedCodeSecurityAttribute_t744305558  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T744305558_H
#ifndef UNVERIFIABLECODEATTRIBUTE_T3228760399_H
#define UNVERIFIABLECODEATTRIBUTE_T3228760399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.UnverifiableCodeAttribute
struct  UnverifiableCodeAttribute_t3228760399  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNVERIFIABLECODEATTRIBUTE_T3228760399_H
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
#ifndef MEMBERTYPEMETADATA_T976220688_H
#define MEMBERTYPEMETADATA_T976220688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct  MemberTypeMetadata_t976220688  : public ClrTypeMetadata_t3885853035
{
public:
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::members
	MemberInfoU5BU5D_t1302094432* ___members_3;

public:
	inline static int32_t get_offset_of_members_3() { return static_cast<int32_t>(offsetof(MemberTypeMetadata_t976220688, ___members_3)); }
	inline MemberInfoU5BU5D_t1302094432* get_members_3() const { return ___members_3; }
	inline MemberInfoU5BU5D_t1302094432** get_address_of_members_3() { return &___members_3; }
	inline void set_members_3(MemberInfoU5BU5D_t1302094432* value)
	{
		___members_3 = value;
		Il2CppCodeGenWriteBarrier((&___members_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERTYPEMETADATA_T976220688_H
#ifndef FORMATTERASSEMBLYSTYLE_T868039825_H
#define FORMATTERASSEMBLYSTYLE_T868039825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t868039825 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t868039825, ___value___1)); }
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
#endif // FORMATTERASSEMBLYSTYLE_T868039825_H
#ifndef FORMATTERTYPESTYLE_T3400733584_H
#define FORMATTERTYPESTYLE_T3400733584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t3400733584 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t3400733584, ___value___1)); }
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
#endif // FORMATTERTYPESTYLE_T3400733584_H
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
#ifndef NATIVEOBJECTSECURITY_T3028773534_H
#define NATIVEOBJECTSECURITY_T3028773534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.NativeObjectSecurity
struct  NativeObjectSecurity_t3028773534  : public CommonObjectSecurity_t1466880084
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEOBJECTSECURITY_T3028773534_H
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
#ifndef CRYPTOSTREAMMODE_T3639658227_H
#define CRYPTOSTREAMMODE_T3639658227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStreamMode
struct  CryptoStreamMode_t3639658227 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStreamMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CryptoStreamMode_t3639658227, ___value___1)); }
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
#endif // CRYPTOSTREAMMODE_T3639658227_H
#ifndef CRYPTOGRAPHICEXCEPTION_T248831461_H
#define CRYPTOGRAPHICEXCEPTION_T248831461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t248831461  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T248831461_H
#ifndef CSPPROVIDERFLAGS_T4094439141_H
#define CSPPROVIDERFLAGS_T4094439141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t4094439141 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CspProviderFlags_t4094439141, ___value___1)); }
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
#endif // CSPPROVIDERFLAGS_T4094439141_H
#ifndef DSACRYPTOSERVICEPROVIDER_T3992668923_H
#define DSACRYPTOSERVICEPROVIDER_T3992668923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t3992668923  : public DSA_t2386879874
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t2094547461 * ___store_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t2800260182 * ___dsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923, ___store_3)); }
	inline KeyPairPersistence_t2094547461 * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t2094547461 ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t2094547461 * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((&___store_3), value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_dsa_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923, ___dsa_8)); }
	inline DSAManaged_t2800260182 * get_dsa_8() const { return ___dsa_8; }
	inline DSAManaged_t2800260182 ** get_address_of_dsa_8() { return &___dsa_8; }
	inline void set_dsa_8(DSAManaged_t2800260182 * value)
	{
		___dsa_8 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_8), value);
	}
};

struct DSACryptoServiceProvider_t3992668923_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_9;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_9() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923_StaticFields, ___useMachineKeyStore_9)); }
	inline bool get_useMachineKeyStore_9() const { return ___useMachineKeyStore_9; }
	inline bool* get_address_of_useMachineKeyStore_9() { return &___useMachineKeyStore_9; }
	inline void set_useMachineKeyStore_9(bool value)
	{
		___useMachineKeyStore_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSACRYPTOSERVICEPROVIDER_T3992668923_H
#ifndef FROMBASE64TRANSFORMMODE_T2018065788_H
#define FROMBASE64TRANSFORMMODE_T2018065788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64TransformMode
struct  FromBase64TransformMode_t2018065788 
{
public:
	// System.Int32 System.Security.Cryptography.FromBase64TransformMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FromBase64TransformMode_t2018065788, ___value___1)); }
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
#endif // FROMBASE64TRANSFORMMODE_T2018065788_H
#ifndef HMAC_T2621101144_H
#define HMAC_T2621101144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMAC
struct  HMAC_t2621101144  : public KeyedHashAlgorithm_t112861511
{
public:
	// System.Boolean System.Security.Cryptography.HMAC::_disposed
	bool ____disposed_5;
	// System.String System.Security.Cryptography.HMAC::_hashName
	String_t* ____hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::_algo
	HashAlgorithm_t1432317219 * ____algo_7;
	// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::_block
	BlockProcessor_t1851031225 * ____block_8;
	// System.Int32 System.Security.Cryptography.HMAC::_blockSizeValue
	int32_t ____blockSizeValue_9;

public:
	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(HMAC_t2621101144, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t2621101144, ____hashName_6)); }
	inline String_t* get__hashName_6() const { return ____hashName_6; }
	inline String_t** get_address_of__hashName_6() { return &____hashName_6; }
	inline void set__hashName_6(String_t* value)
	{
		____hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_6), value);
	}

	inline static int32_t get_offset_of__algo_7() { return static_cast<int32_t>(offsetof(HMAC_t2621101144, ____algo_7)); }
	inline HashAlgorithm_t1432317219 * get__algo_7() const { return ____algo_7; }
	inline HashAlgorithm_t1432317219 ** get_address_of__algo_7() { return &____algo_7; }
	inline void set__algo_7(HashAlgorithm_t1432317219 * value)
	{
		____algo_7 = value;
		Il2CppCodeGenWriteBarrier((&____algo_7), value);
	}

	inline static int32_t get_offset_of__block_8() { return static_cast<int32_t>(offsetof(HMAC_t2621101144, ____block_8)); }
	inline BlockProcessor_t1851031225 * get__block_8() const { return ____block_8; }
	inline BlockProcessor_t1851031225 ** get_address_of__block_8() { return &____block_8; }
	inline void set__block_8(BlockProcessor_t1851031225 * value)
	{
		____block_8 = value;
		Il2CppCodeGenWriteBarrier((&____block_8), value);
	}

	inline static int32_t get_offset_of__blockSizeValue_9() { return static_cast<int32_t>(offsetof(HMAC_t2621101144, ____blockSizeValue_9)); }
	inline int32_t get__blockSizeValue_9() const { return ____blockSizeValue_9; }
	inline int32_t* get_address_of__blockSizeValue_9() { return &____blockSizeValue_9; }
	inline void set__blockSizeValue_9(int32_t value)
	{
		____blockSizeValue_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T2621101144_H
#ifndef KEYNUMBER_T1560809490_H
#define KEYNUMBER_T1560809490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyNumber
struct  KeyNumber_t1560809490 
{
public:
	// System.Int32 System.Security.Cryptography.KeyNumber::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyNumber_t1560809490, ___value___1)); }
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
#endif // KEYNUMBER_T1560809490_H
#ifndef MACTRIPLEDES_T1631262397_H
#define MACTRIPLEDES_T1631262397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t1631262397  : public KeyedHashAlgorithm_t112861511
{
public:
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t92303514 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t2441219148 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;

public:
	inline static int32_t get_offset_of_tdes_5() { return static_cast<int32_t>(offsetof(MACTripleDES_t1631262397, ___tdes_5)); }
	inline TripleDES_t92303514 * get_tdes_5() const { return ___tdes_5; }
	inline TripleDES_t92303514 ** get_address_of_tdes_5() { return &___tdes_5; }
	inline void set_tdes_5(TripleDES_t92303514 * value)
	{
		___tdes_5 = value;
		Il2CppCodeGenWriteBarrier((&___tdes_5), value);
	}

	inline static int32_t get_offset_of_mac_6() { return static_cast<int32_t>(offsetof(MACTripleDES_t1631262397, ___mac_6)); }
	inline MACAlgorithm_t2441219148 * get_mac_6() const { return ___mac_6; }
	inline MACAlgorithm_t2441219148 ** get_address_of_mac_6() { return &___mac_6; }
	inline void set_mac_6(MACAlgorithm_t2441219148 * value)
	{
		___mac_6 = value;
		Il2CppCodeGenWriteBarrier((&___mac_6), value);
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(MACTripleDES_t1631262397, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACTRIPLEDES_T1631262397_H
#ifndef MD5CRYPTOSERVICEPROVIDER_T3005586042_H
#define MD5CRYPTOSERVICEPROVIDER_T3005586042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t3005586042  : public MD5_t3177620429
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t2770800703* ____H_6;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t2770800703* ___buff_7;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_8;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t4116647657* ____ProcessingBuffer_9;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_10;

public:
	inline static int32_t get_offset_of__H_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3005586042, ____H_6)); }
	inline UInt32U5BU5D_t2770800703* get__H_6() const { return ____H_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of__H_6() { return &____H_6; }
	inline void set__H_6(UInt32U5BU5D_t2770800703* value)
	{
		____H_6 = value;
		Il2CppCodeGenWriteBarrier((&____H_6), value);
	}

	inline static int32_t get_offset_of_buff_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3005586042, ___buff_7)); }
	inline UInt32U5BU5D_t2770800703* get_buff_7() const { return ___buff_7; }
	inline UInt32U5BU5D_t2770800703** get_address_of_buff_7() { return &___buff_7; }
	inline void set_buff_7(UInt32U5BU5D_t2770800703* value)
	{
		___buff_7 = value;
		Il2CppCodeGenWriteBarrier((&___buff_7), value);
	}

	inline static int32_t get_offset_of_count_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3005586042, ___count_8)); }
	inline uint64_t get_count_8() const { return ___count_8; }
	inline uint64_t* get_address_of_count_8() { return &___count_8; }
	inline void set_count_8(uint64_t value)
	{
		___count_8 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3005586042, ____ProcessingBuffer_9)); }
	inline ByteU5BU5D_t4116647657* get__ProcessingBuffer_9() const { return ____ProcessingBuffer_9; }
	inline ByteU5BU5D_t4116647657** get_address_of__ProcessingBuffer_9() { return &____ProcessingBuffer_9; }
	inline void set__ProcessingBuffer_9(ByteU5BU5D_t4116647657* value)
	{
		____ProcessingBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_9), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_10() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3005586042, ____ProcessingBufferCount_10)); }
	inline int32_t get__ProcessingBufferCount_10() const { return ____ProcessingBufferCount_10; }
	inline int32_t* get_address_of__ProcessingBufferCount_10() { return &____ProcessingBufferCount_10; }
	inline void set__ProcessingBufferCount_10(int32_t value)
	{
		____ProcessingBufferCount_10 = value;
	}
};

struct MD5CryptoServiceProvider_t3005586042_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t2770800703* ___K_11;

public:
	inline static int32_t get_offset_of_K_11() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3005586042_StaticFields, ___K_11)); }
	inline UInt32U5BU5D_t2770800703* get_K_11() const { return ___K_11; }
	inline UInt32U5BU5D_t2770800703** get_address_of_K_11() { return &___K_11; }
	inline void set_K_11(UInt32U5BU5D_t2770800703* value)
	{
		___K_11 = value;
		Il2CppCodeGenWriteBarrier((&___K_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CRYPTOSERVICEPROVIDER_T3005586042_H
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
#ifndef RIPEMD160MANAGED_T2491561941_H
#define RIPEMD160MANAGED_T2491561941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160Managed
struct  RIPEMD160Managed_t2491561941  : public RIPEMD160_t268675434
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_ProcessingBuffer
	ByteU5BU5D_t4116647657* ____ProcessingBuffer_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_X
	UInt32U5BU5D_t2770800703* ____X_6;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_HashValue
	UInt32U5BU5D_t2770800703* ____HashValue_7;
	// System.UInt64 System.Security.Cryptography.RIPEMD160Managed::_Length
	uint64_t ____Length_8;
	// System.Int32 System.Security.Cryptography.RIPEMD160Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_9;

public:
	inline static int32_t get_offset_of__ProcessingBuffer_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2491561941, ____ProcessingBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get__ProcessingBuffer_5() const { return ____ProcessingBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__ProcessingBuffer_5() { return &____ProcessingBuffer_5; }
	inline void set__ProcessingBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		____ProcessingBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_5), value);
	}

	inline static int32_t get_offset_of__X_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2491561941, ____X_6)); }
	inline UInt32U5BU5D_t2770800703* get__X_6() const { return ____X_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of__X_6() { return &____X_6; }
	inline void set__X_6(UInt32U5BU5D_t2770800703* value)
	{
		____X_6 = value;
		Il2CppCodeGenWriteBarrier((&____X_6), value);
	}

	inline static int32_t get_offset_of__HashValue_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2491561941, ____HashValue_7)); }
	inline UInt32U5BU5D_t2770800703* get__HashValue_7() const { return ____HashValue_7; }
	inline UInt32U5BU5D_t2770800703** get_address_of__HashValue_7() { return &____HashValue_7; }
	inline void set__HashValue_7(UInt32U5BU5D_t2770800703* value)
	{
		____HashValue_7 = value;
		Il2CppCodeGenWriteBarrier((&____HashValue_7), value);
	}

	inline static int32_t get_offset_of__Length_8() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2491561941, ____Length_8)); }
	inline uint64_t get__Length_8() const { return ____Length_8; }
	inline uint64_t* get_address_of__Length_8() { return &____Length_8; }
	inline void set__Length_8(uint64_t value)
	{
		____Length_8 = value;
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_9() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2491561941, ____ProcessingBufferCount_9)); }
	inline int32_t get__ProcessingBufferCount_9() const { return ____ProcessingBufferCount_9; }
	inline int32_t* get_address_of__ProcessingBufferCount_9() { return &____ProcessingBufferCount_9; }
	inline void set__ProcessingBufferCount_9(int32_t value)
	{
		____ProcessingBufferCount_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160MANAGED_T2491561941_H
#ifndef RNGCRYPTOSERVICEPROVIDER_T3397414743_H
#define RNGCRYPTOSERVICEPROVIDER_T3397414743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t3397414743  : public RandomNumberGenerator_t386037858
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t3397414743, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t3397414743_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t3397414743_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RNGCRYPTOSERVICEPROVIDER_T3397414743_H
#ifndef RSACRYPTOSERVICEPROVIDER_T2683512874_H
#define RSACRYPTOSERVICEPROVIDER_T2683512874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t2683512874  : public RSA_t2385438082
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t2094547461 * ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t1757093819 * ___rsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874, ___store_3)); }
	inline KeyPairPersistence_t2094547461 * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t2094547461 ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t2094547461 * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((&___store_3), value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_rsa_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874, ___rsa_8)); }
	inline RSAManaged_t1757093819 * get_rsa_8() const { return ___rsa_8; }
	inline RSAManaged_t1757093819 ** get_address_of_rsa_8() { return &___rsa_8; }
	inline void set_rsa_8(RSAManaged_t1757093819 * value)
	{
		___rsa_8 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_8), value);
	}
};

struct RSACryptoServiceProvider_t2683512874_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.RSACryptoServiceProvider::<>f__switch$map2D
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2D_10;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_9() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874_StaticFields, ___useMachineKeyStore_9)); }
	inline bool get_useMachineKeyStore_9() const { return ___useMachineKeyStore_9; }
	inline bool* get_address_of_useMachineKeyStore_9() { return &___useMachineKeyStore_9; }
	inline void set_useMachineKeyStore_9(bool value)
	{
		___useMachineKeyStore_9 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2D_10() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874_StaticFields, ___U3CU3Ef__switchU24map2D_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2D_10() const { return ___U3CU3Ef__switchU24map2D_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2D_10() { return &___U3CU3Ef__switchU24map2D_10; }
	inline void set_U3CU3Ef__switchU24map2D_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2D_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2D_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSACRYPTOSERVICEPROVIDER_T2683512874_H
#ifndef HOSTSECURITYMANAGEROPTIONS_T756318624_H
#define HOSTSECURITYMANAGEROPTIONS_T756318624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.HostSecurityManagerOptions
struct  HostSecurityManagerOptions_t756318624 
{
public:
	// System.Int32 System.Security.HostSecurityManagerOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HostSecurityManagerOptions_t756318624, ___value___1)); }
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
#endif // HOSTSECURITYMANAGEROPTIONS_T756318624_H
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
#ifndef RUNTIMEDECLSECURITYENTRY_T3144469156_H
#define RUNTIMEDECLSECURITYENTRY_T3144469156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityEntry
struct  RuntimeDeclSecurityEntry_t3144469156 
{
public:
	// System.IntPtr System.Security.RuntimeDeclSecurityEntry::blob
	intptr_t ___blob_0;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::size
	int32_t ___size_1;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::index
	int32_t ___index_2;

public:
	inline static int32_t get_offset_of_blob_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t3144469156, ___blob_0)); }
	inline intptr_t get_blob_0() const { return ___blob_0; }
	inline intptr_t* get_address_of_blob_0() { return &___blob_0; }
	inline void set_blob_0(intptr_t value)
	{
		___blob_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t3144469156, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t3144469156, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYENTRY_T3144469156_H
#ifndef SECURITYCONTEXT_T2435442044_H
#define SECURITYCONTEXT_T2435442044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityContext
struct  SecurityContext_t2435442044  : public RuntimeObject
{
public:
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture_0;
	// System.IntPtr System.Security.SecurityContext::_winid
	intptr_t ____winid_1;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t1202932761 * ____stack_2;
	// System.Boolean System.Security.SecurityContext::_suppressFlowWindowsIdentity
	bool ____suppressFlowWindowsIdentity_3;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow_4;

public:
	inline static int32_t get_offset_of__capture_0() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____capture_0)); }
	inline bool get__capture_0() const { return ____capture_0; }
	inline bool* get_address_of__capture_0() { return &____capture_0; }
	inline void set__capture_0(bool value)
	{
		____capture_0 = value;
	}

	inline static int32_t get_offset_of__winid_1() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____winid_1)); }
	inline intptr_t get__winid_1() const { return ____winid_1; }
	inline intptr_t* get_address_of__winid_1() { return &____winid_1; }
	inline void set__winid_1(intptr_t value)
	{
		____winid_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____stack_2)); }
	inline CompressedStack_t1202932761 * get__stack_2() const { return ____stack_2; }
	inline CompressedStack_t1202932761 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(CompressedStack_t1202932761 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((&____stack_2), value);
	}

	inline static int32_t get_offset_of__suppressFlowWindowsIdentity_3() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____suppressFlowWindowsIdentity_3)); }
	inline bool get__suppressFlowWindowsIdentity_3() const { return ____suppressFlowWindowsIdentity_3; }
	inline bool* get_address_of__suppressFlowWindowsIdentity_3() { return &____suppressFlowWindowsIdentity_3; }
	inline void set__suppressFlowWindowsIdentity_3(bool value)
	{
		____suppressFlowWindowsIdentity_3 = value;
	}

	inline static int32_t get_offset_of__suppressFlow_4() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____suppressFlow_4)); }
	inline bool get__suppressFlow_4() const { return ____suppressFlow_4; }
	inline bool* get_address_of__suppressFlow_4() { return &____suppressFlow_4; }
	inline void set__suppressFlow_4(bool value)
	{
		____suppressFlow_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCONTEXT_T2435442044_H
#ifndef SECURITYCRITICALSCOPE_T606020417_H
#define SECURITYCRITICALSCOPE_T606020417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalScope
struct  SecurityCriticalScope_t606020417 
{
public:
	// System.Int32 System.Security.SecurityCriticalScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCriticalScope_t606020417, ___value___1)); }
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
#endif // SECURITYCRITICALSCOPE_T606020417_H
#ifndef SECURITYEXCEPTION_T975544473_H
#define SECURITYEXCEPTION_T975544473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t975544473  : public SystemException_t176217640
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_11;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_12;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_13;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_14;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_15;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_16;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_17;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t2008144148 * ____evidence_18;

public:
	inline static int32_t get_offset_of_permissionState_11() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ___permissionState_11)); }
	inline String_t* get_permissionState_11() const { return ___permissionState_11; }
	inline String_t** get_address_of_permissionState_11() { return &___permissionState_11; }
	inline void set_permissionState_11(String_t* value)
	{
		___permissionState_11 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_11), value);
	}

	inline static int32_t get_offset_of_permissionType_12() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ___permissionType_12)); }
	inline Type_t * get_permissionType_12() const { return ___permissionType_12; }
	inline Type_t ** get_address_of_permissionType_12() { return &___permissionType_12; }
	inline void set_permissionType_12(Type_t * value)
	{
		___permissionType_12 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_12), value);
	}

	inline static int32_t get_offset_of__granted_13() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____granted_13)); }
	inline String_t* get__granted_13() const { return ____granted_13; }
	inline String_t** get_address_of__granted_13() { return &____granted_13; }
	inline void set__granted_13(String_t* value)
	{
		____granted_13 = value;
		Il2CppCodeGenWriteBarrier((&____granted_13), value);
	}

	inline static int32_t get_offset_of__refused_14() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____refused_14)); }
	inline String_t* get__refused_14() const { return ____refused_14; }
	inline String_t** get_address_of__refused_14() { return &____refused_14; }
	inline void set__refused_14(String_t* value)
	{
		____refused_14 = value;
		Il2CppCodeGenWriteBarrier((&____refused_14), value);
	}

	inline static int32_t get_offset_of__demanded_15() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____demanded_15)); }
	inline RuntimeObject * get__demanded_15() const { return ____demanded_15; }
	inline RuntimeObject ** get_address_of__demanded_15() { return &____demanded_15; }
	inline void set__demanded_15(RuntimeObject * value)
	{
		____demanded_15 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_15), value);
	}

	inline static int32_t get_offset_of__firstperm_16() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____firstperm_16)); }
	inline RuntimeObject* get__firstperm_16() const { return ____firstperm_16; }
	inline RuntimeObject** get_address_of__firstperm_16() { return &____firstperm_16; }
	inline void set__firstperm_16(RuntimeObject* value)
	{
		____firstperm_16 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_16), value);
	}

	inline static int32_t get_offset_of__method_17() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____method_17)); }
	inline MethodInfo_t * get__method_17() const { return ____method_17; }
	inline MethodInfo_t ** get_address_of__method_17() { return &____method_17; }
	inline void set__method_17(MethodInfo_t * value)
	{
		____method_17 = value;
		Il2CppCodeGenWriteBarrier((&____method_17), value);
	}

	inline static int32_t get_offset_of__evidence_18() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____evidence_18)); }
	inline Evidence_t2008144148 * get__evidence_18() const { return ____evidence_18; }
	inline Evidence_t2008144148 ** get_address_of__evidence_18() { return &____evidence_18; }
	inline void set__evidence_18(Evidence_t2008144148 * value)
	{
		____evidence_18 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T975544473_H
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
#ifndef XMLSYNTAXEXCEPTION_T2973594484_H
#define XMLSYNTAXEXCEPTION_T2973594484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.XmlSyntaxException
struct  XmlSyntaxException_t2973594484  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSYNTAXEXCEPTION_T2973594484_H
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
#ifndef CRYPTOKEYSECURITY_T1177725497_H
#define CRYPTOKEYSECURITY_T1177725497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.CryptoKeySecurity
struct  CryptoKeySecurity_t1177725497  : public NativeObjectSecurity_t3028773534
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOKEYSECURITY_T1177725497_H
#ifndef CRYPTOSTREAM_T2702504504_H
#define CRYPTOSTREAM_T2702504504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream
struct  CryptoStream_t2702504504  : public Stream_t1273022909
{
public:
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_t1273022909 * ____stream_2;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	RuntimeObject* ____transform_3;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_mode
	int32_t ____mode_4;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_currentBlock
	ByteU5BU5D_t4116647657* ____currentBlock_5;
	// System.Boolean System.Security.Cryptography.CryptoStream::_disposed
	bool ____disposed_6;
	// System.Boolean System.Security.Cryptography.CryptoStream::_flushedFinalBlock
	bool ____flushedFinalBlock_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_partialCount
	int32_t ____partialCount_8;
	// System.Boolean System.Security.Cryptography.CryptoStream::_endOfStream
	bool ____endOfStream_9;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_waitingBlock
	ByteU5BU5D_t4116647657* ____waitingBlock_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_waitingCount
	int32_t ____waitingCount_11;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_transformedBlock
	ByteU5BU5D_t4116647657* ____transformedBlock_12;
	// System.Int32 System.Security.Cryptography.CryptoStream::_transformedPos
	int32_t ____transformedPos_13;
	// System.Int32 System.Security.Cryptography.CryptoStream::_transformedCount
	int32_t ____transformedCount_14;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_workingBlock
	ByteU5BU5D_t4116647657* ____workingBlock_15;
	// System.Int32 System.Security.Cryptography.CryptoStream::_workingCount
	int32_t ____workingCount_16;

public:
	inline static int32_t get_offset_of__stream_2() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____stream_2)); }
	inline Stream_t1273022909 * get__stream_2() const { return ____stream_2; }
	inline Stream_t1273022909 ** get_address_of__stream_2() { return &____stream_2; }
	inline void set__stream_2(Stream_t1273022909 * value)
	{
		____stream_2 = value;
		Il2CppCodeGenWriteBarrier((&____stream_2), value);
	}

	inline static int32_t get_offset_of__transform_3() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____transform_3)); }
	inline RuntimeObject* get__transform_3() const { return ____transform_3; }
	inline RuntimeObject** get_address_of__transform_3() { return &____transform_3; }
	inline void set__transform_3(RuntimeObject* value)
	{
		____transform_3 = value;
		Il2CppCodeGenWriteBarrier((&____transform_3), value);
	}

	inline static int32_t get_offset_of__mode_4() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____mode_4)); }
	inline int32_t get__mode_4() const { return ____mode_4; }
	inline int32_t* get_address_of__mode_4() { return &____mode_4; }
	inline void set__mode_4(int32_t value)
	{
		____mode_4 = value;
	}

	inline static int32_t get_offset_of__currentBlock_5() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____currentBlock_5)); }
	inline ByteU5BU5D_t4116647657* get__currentBlock_5() const { return ____currentBlock_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__currentBlock_5() { return &____currentBlock_5; }
	inline void set__currentBlock_5(ByteU5BU5D_t4116647657* value)
	{
		____currentBlock_5 = value;
		Il2CppCodeGenWriteBarrier((&____currentBlock_5), value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}

	inline static int32_t get_offset_of__flushedFinalBlock_7() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____flushedFinalBlock_7)); }
	inline bool get__flushedFinalBlock_7() const { return ____flushedFinalBlock_7; }
	inline bool* get_address_of__flushedFinalBlock_7() { return &____flushedFinalBlock_7; }
	inline void set__flushedFinalBlock_7(bool value)
	{
		____flushedFinalBlock_7 = value;
	}

	inline static int32_t get_offset_of__partialCount_8() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____partialCount_8)); }
	inline int32_t get__partialCount_8() const { return ____partialCount_8; }
	inline int32_t* get_address_of__partialCount_8() { return &____partialCount_8; }
	inline void set__partialCount_8(int32_t value)
	{
		____partialCount_8 = value;
	}

	inline static int32_t get_offset_of__endOfStream_9() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____endOfStream_9)); }
	inline bool get__endOfStream_9() const { return ____endOfStream_9; }
	inline bool* get_address_of__endOfStream_9() { return &____endOfStream_9; }
	inline void set__endOfStream_9(bool value)
	{
		____endOfStream_9 = value;
	}

	inline static int32_t get_offset_of__waitingBlock_10() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____waitingBlock_10)); }
	inline ByteU5BU5D_t4116647657* get__waitingBlock_10() const { return ____waitingBlock_10; }
	inline ByteU5BU5D_t4116647657** get_address_of__waitingBlock_10() { return &____waitingBlock_10; }
	inline void set__waitingBlock_10(ByteU5BU5D_t4116647657* value)
	{
		____waitingBlock_10 = value;
		Il2CppCodeGenWriteBarrier((&____waitingBlock_10), value);
	}

	inline static int32_t get_offset_of__waitingCount_11() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____waitingCount_11)); }
	inline int32_t get__waitingCount_11() const { return ____waitingCount_11; }
	inline int32_t* get_address_of__waitingCount_11() { return &____waitingCount_11; }
	inline void set__waitingCount_11(int32_t value)
	{
		____waitingCount_11 = value;
	}

	inline static int32_t get_offset_of__transformedBlock_12() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____transformedBlock_12)); }
	inline ByteU5BU5D_t4116647657* get__transformedBlock_12() const { return ____transformedBlock_12; }
	inline ByteU5BU5D_t4116647657** get_address_of__transformedBlock_12() { return &____transformedBlock_12; }
	inline void set__transformedBlock_12(ByteU5BU5D_t4116647657* value)
	{
		____transformedBlock_12 = value;
		Il2CppCodeGenWriteBarrier((&____transformedBlock_12), value);
	}

	inline static int32_t get_offset_of__transformedPos_13() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____transformedPos_13)); }
	inline int32_t get__transformedPos_13() const { return ____transformedPos_13; }
	inline int32_t* get_address_of__transformedPos_13() { return &____transformedPos_13; }
	inline void set__transformedPos_13(int32_t value)
	{
		____transformedPos_13 = value;
	}

	inline static int32_t get_offset_of__transformedCount_14() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____transformedCount_14)); }
	inline int32_t get__transformedCount_14() const { return ____transformedCount_14; }
	inline int32_t* get_address_of__transformedCount_14() { return &____transformedCount_14; }
	inline void set__transformedCount_14(int32_t value)
	{
		____transformedCount_14 = value;
	}

	inline static int32_t get_offset_of__workingBlock_15() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____workingBlock_15)); }
	inline ByteU5BU5D_t4116647657* get__workingBlock_15() const { return ____workingBlock_15; }
	inline ByteU5BU5D_t4116647657** get_address_of__workingBlock_15() { return &____workingBlock_15; }
	inline void set__workingBlock_15(ByteU5BU5D_t4116647657* value)
	{
		____workingBlock_15 = value;
		Il2CppCodeGenWriteBarrier((&____workingBlock_15), value);
	}

	inline static int32_t get_offset_of__workingCount_16() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____workingCount_16)); }
	inline int32_t get__workingCount_16() const { return ____workingCount_16; }
	inline int32_t* get_address_of__workingCount_16() { return &____workingCount_16; }
	inline void set__workingCount_16(int32_t value)
	{
		____workingCount_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOSTREAM_T2702504504_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T2790575154_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T2790575154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t2790575154  : public CryptographicException_t248831461
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T2790575154_H
#ifndef CSPPARAMETERS_T239852639_H
#define CSPPARAMETERS_T239852639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t239852639  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::_Flags
	int32_t ____Flags_0;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_1;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_2;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_3;
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_4;
	// System.Security.SecureString System.Security.Cryptography.CspParameters::_password
	SecureString_t3041467854 * ____password_5;
	// System.IntPtr System.Security.Cryptography.CspParameters::_windowHandle
	intptr_t ____windowHandle_6;

public:
	inline static int32_t get_offset_of__Flags_0() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ____Flags_0)); }
	inline int32_t get__Flags_0() const { return ____Flags_0; }
	inline int32_t* get_address_of__Flags_0() { return &____Flags_0; }
	inline void set__Flags_0(int32_t value)
	{
		____Flags_0 = value;
	}

	inline static int32_t get_offset_of_KeyContainerName_1() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ___KeyContainerName_1)); }
	inline String_t* get_KeyContainerName_1() const { return ___KeyContainerName_1; }
	inline String_t** get_address_of_KeyContainerName_1() { return &___KeyContainerName_1; }
	inline void set_KeyContainerName_1(String_t* value)
	{
		___KeyContainerName_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_1), value);
	}

	inline static int32_t get_offset_of_KeyNumber_2() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ___KeyNumber_2)); }
	inline int32_t get_KeyNumber_2() const { return ___KeyNumber_2; }
	inline int32_t* get_address_of_KeyNumber_2() { return &___KeyNumber_2; }
	inline void set_KeyNumber_2(int32_t value)
	{
		___KeyNumber_2 = value;
	}

	inline static int32_t get_offset_of_ProviderName_3() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ___ProviderName_3)); }
	inline String_t* get_ProviderName_3() const { return ___ProviderName_3; }
	inline String_t** get_address_of_ProviderName_3() { return &___ProviderName_3; }
	inline void set_ProviderName_3(String_t* value)
	{
		___ProviderName_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_3), value);
	}

	inline static int32_t get_offset_of_ProviderType_4() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ___ProviderType_4)); }
	inline int32_t get_ProviderType_4() const { return ___ProviderType_4; }
	inline int32_t* get_address_of_ProviderType_4() { return &___ProviderType_4; }
	inline void set_ProviderType_4(int32_t value)
	{
		___ProviderType_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ____password_5)); }
	inline SecureString_t3041467854 * get__password_5() const { return ____password_5; }
	inline SecureString_t3041467854 ** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(SecureString_t3041467854 * value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__windowHandle_6() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ____windowHandle_6)); }
	inline intptr_t get__windowHandle_6() const { return ____windowHandle_6; }
	inline intptr_t* get_address_of__windowHandle_6() { return &____windowHandle_6; }
	inline void set__windowHandle_6(intptr_t value)
	{
		____windowHandle_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPARAMETERS_T239852639_H
#ifndef FROMBASE64TRANSFORM_T2896579788_H
#define FROMBASE64TRANSFORM_T2896579788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64Transform
struct  FromBase64Transform_t2896579788  : public RuntimeObject
{
public:
	// System.Security.Cryptography.FromBase64TransformMode System.Security.Cryptography.FromBase64Transform::mode
	int32_t ___mode_1;
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::accumulator
	ByteU5BU5D_t4116647657* ___accumulator_2;
	// System.Int32 System.Security.Cryptography.FromBase64Transform::accPtr
	int32_t ___accPtr_3;
	// System.Boolean System.Security.Cryptography.FromBase64Transform::m_disposed
	bool ___m_disposed_4;
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::lookupTable
	ByteU5BU5D_t4116647657* ___lookupTable_5;

public:
	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(FromBase64Transform_t2896579788, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_accumulator_2() { return static_cast<int32_t>(offsetof(FromBase64Transform_t2896579788, ___accumulator_2)); }
	inline ByteU5BU5D_t4116647657* get_accumulator_2() const { return ___accumulator_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_accumulator_2() { return &___accumulator_2; }
	inline void set_accumulator_2(ByteU5BU5D_t4116647657* value)
	{
		___accumulator_2 = value;
		Il2CppCodeGenWriteBarrier((&___accumulator_2), value);
	}

	inline static int32_t get_offset_of_accPtr_3() { return static_cast<int32_t>(offsetof(FromBase64Transform_t2896579788, ___accPtr_3)); }
	inline int32_t get_accPtr_3() const { return ___accPtr_3; }
	inline int32_t* get_address_of_accPtr_3() { return &___accPtr_3; }
	inline void set_accPtr_3(int32_t value)
	{
		___accPtr_3 = value;
	}

	inline static int32_t get_offset_of_m_disposed_4() { return static_cast<int32_t>(offsetof(FromBase64Transform_t2896579788, ___m_disposed_4)); }
	inline bool get_m_disposed_4() const { return ___m_disposed_4; }
	inline bool* get_address_of_m_disposed_4() { return &___m_disposed_4; }
	inline void set_m_disposed_4(bool value)
	{
		___m_disposed_4 = value;
	}

	inline static int32_t get_offset_of_lookupTable_5() { return static_cast<int32_t>(offsetof(FromBase64Transform_t2896579788, ___lookupTable_5)); }
	inline ByteU5BU5D_t4116647657* get_lookupTable_5() const { return ___lookupTable_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_lookupTable_5() { return &___lookupTable_5; }
	inline void set_lookupTable_5(ByteU5BU5D_t4116647657* value)
	{
		___lookupTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___lookupTable_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FROMBASE64TRANSFORM_T2896579788_H
#ifndef HMACMD5_T2742219965_H
#define HMACMD5_T2742219965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACMD5
struct  HMACMD5_t2742219965  : public HMAC_t2621101144
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACMD5_T2742219965_H
#ifndef HMACRIPEMD160_T3724196729_H
#define HMACRIPEMD160_T3724196729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACRIPEMD160
struct  HMACRIPEMD160_t3724196729  : public HMAC_t2621101144
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACRIPEMD160_T3724196729_H
#ifndef HMACSHA1_T1952596188_H
#define HMACSHA1_T1952596188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA1
struct  HMACSHA1_t1952596188  : public HMAC_t2621101144
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA1_T1952596188_H
#ifndef HMACSHA256_T3249253224_H
#define HMACSHA256_T3249253224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256
struct  HMACSHA256_t3249253224  : public HMAC_t2621101144
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA256_T3249253224_H
#ifndef HMACSHA384_T117937311_H
#define HMACSHA384_T117937311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA384
struct  HMACSHA384_t117937311  : public HMAC_t2621101144
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA384_t117937311, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA384_t117937311_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA384_t117937311_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA384_T117937311_H
#ifndef HMACSHA512_T923916539_H
#define HMACSHA512_T923916539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA512
struct  HMACSHA512_t923916539  : public HMAC_t2621101144
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA512_t923916539, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA512_t923916539_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA512_t923916539_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA512_T923916539_H
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
#ifndef PERMISSIONSET_T223948603_H
#define PERMISSIONSET_T223948603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t223948603  : public RuntimeObject
{
public:
	// System.Security.Permissions.PermissionState System.Security.PermissionSet::state
	int32_t ___state_1;
	// System.Collections.ArrayList System.Security.PermissionSet::list
	ArrayList_t2718874744 * ___list_2;
	// System.Security.Policy.PolicyLevel System.Security.PermissionSet::_policyLevel
	PolicyLevel_t2891196107 * ____policyLevel_3;
	// System.Boolean System.Security.PermissionSet::_declsec
	bool ____declsec_4;
	// System.Boolean System.Security.PermissionSet::_readOnly
	bool ____readOnly_5;

public:
	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ___list_2)); }
	inline ArrayList_t2718874744 * get_list_2() const { return ___list_2; }
	inline ArrayList_t2718874744 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ArrayList_t2718874744 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}

	inline static int32_t get_offset_of__policyLevel_3() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ____policyLevel_3)); }
	inline PolicyLevel_t2891196107 * get__policyLevel_3() const { return ____policyLevel_3; }
	inline PolicyLevel_t2891196107 ** get_address_of__policyLevel_3() { return &____policyLevel_3; }
	inline void set__policyLevel_3(PolicyLevel_t2891196107 * value)
	{
		____policyLevel_3 = value;
		Il2CppCodeGenWriteBarrier((&____policyLevel_3), value);
	}

	inline static int32_t get_offset_of__declsec_4() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ____declsec_4)); }
	inline bool get__declsec_4() const { return ____declsec_4; }
	inline bool* get_address_of__declsec_4() { return &____declsec_4; }
	inline void set__declsec_4(bool value)
	{
		____declsec_4 = value;
	}

	inline static int32_t get_offset_of__readOnly_5() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ____readOnly_5)); }
	inline bool get__readOnly_5() const { return ____readOnly_5; }
	inline bool* get_address_of__readOnly_5() { return &____readOnly_5; }
	inline void set__readOnly_5(bool value)
	{
		____readOnly_5 = value;
	}
};

struct PermissionSet_t223948603_StaticFields
{
public:
	// System.Object[] System.Security.PermissionSet::psUnrestricted
	ObjectU5BU5D_t2843939325* ___psUnrestricted_0;
	// System.Object[] System.Security.PermissionSet::action
	ObjectU5BU5D_t2843939325* ___action_6;

public:
	inline static int32_t get_offset_of_psUnrestricted_0() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603_StaticFields, ___psUnrestricted_0)); }
	inline ObjectU5BU5D_t2843939325* get_psUnrestricted_0() const { return ___psUnrestricted_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_psUnrestricted_0() { return &___psUnrestricted_0; }
	inline void set_psUnrestricted_0(ObjectU5BU5D_t2843939325* value)
	{
		___psUnrestricted_0 = value;
		Il2CppCodeGenWriteBarrier((&___psUnrestricted_0), value);
	}

	inline static int32_t get_offset_of_action_6() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603_StaticFields, ___action_6)); }
	inline ObjectU5BU5D_t2843939325* get_action_6() const { return ___action_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_action_6() { return &___action_6; }
	inline void set_action_6(ObjectU5BU5D_t2843939325* value)
	{
		___action_6 = value;
		Il2CppCodeGenWriteBarrier((&___action_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSET_T223948603_H
#ifndef RUNTIMEDECLSECURITYACTIONS_T582952764_H
#define RUNTIMEDECLSECURITYACTIONS_T582952764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityActions
struct  RuntimeDeclSecurityActions_t582952764 
{
public:
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::cas
	RuntimeDeclSecurityEntry_t3144469156  ___cas_0;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::noncas
	RuntimeDeclSecurityEntry_t3144469156  ___noncas_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::choice
	RuntimeDeclSecurityEntry_t3144469156  ___choice_2;

public:
	inline static int32_t get_offset_of_cas_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t582952764, ___cas_0)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_cas_0() const { return ___cas_0; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_cas_0() { return &___cas_0; }
	inline void set_cas_0(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___cas_0 = value;
	}

	inline static int32_t get_offset_of_noncas_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t582952764, ___noncas_1)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_noncas_1() const { return ___noncas_1; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_noncas_1() { return &___noncas_1; }
	inline void set_noncas_1(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___noncas_1 = value;
	}

	inline static int32_t get_offset_of_choice_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t582952764, ___choice_2)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_choice_2() const { return ___choice_2; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_choice_2() { return &___choice_2; }
	inline void set_choice_2(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___choice_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYACTIONS_T582952764_H
#ifndef RUNTIMESECURITYFRAME_T536173748_H
#define RUNTIMESECURITYFRAME_T536173748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t536173748  : public RuntimeObject
{
public:
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t1571427825 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t3144469156  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t3144469156  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t3144469156  ___permitonly_4;

public:
	inline static int32_t get_offset_of_domain_0() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___domain_0)); }
	inline AppDomain_t1571427825 * get_domain_0() const { return ___domain_0; }
	inline AppDomain_t1571427825 ** get_address_of_domain_0() { return &___domain_0; }
	inline void set_domain_0(AppDomain_t1571427825 * value)
	{
		___domain_0 = value;
		Il2CppCodeGenWriteBarrier((&___domain_0), value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_1), value);
	}

	inline static int32_t get_offset_of_assert_2() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___assert_2)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_assert_2() const { return ___assert_2; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_assert_2() { return &___assert_2; }
	inline void set_assert_2(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___assert_2 = value;
	}

	inline static int32_t get_offset_of_deny_3() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___deny_3)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_deny_3() const { return ___deny_3; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_deny_3() { return &___deny_3; }
	inline void set_deny_3(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___deny_3 = value;
	}

	inline static int32_t get_offset_of_permitonly_4() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___permitonly_4)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_permitonly_4() const { return ___permitonly_4; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_permitonly_4() { return &___permitonly_4; }
	inline void set_permitonly_4(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___permitonly_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESECURITYFRAME_T536173748_H
#ifndef SECURITYCRITICALATTRIBUTE_T2279322844_H
#define SECURITYCRITICALATTRIBUTE_T2279322844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalAttribute
struct  SecurityCriticalAttribute_t2279322844  : public Attribute_t861562559
{
public:
	// System.Security.SecurityCriticalScope System.Security.SecurityCriticalAttribute::_scope
	int32_t ____scope_0;

public:
	inline static int32_t get_offset_of__scope_0() { return static_cast<int32_t>(offsetof(SecurityCriticalAttribute_t2279322844, ____scope_0)); }
	inline int32_t get__scope_0() const { return ____scope_0; }
	inline int32_t* get_address_of__scope_0() { return &____scope_0; }
	inline void set__scope_0(int32_t value)
	{
		____scope_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALATTRIBUTE_T2279322844_H
#ifndef OBJECTWRITER_T2968406231_H
#define OBJECTWRITER_T2968406231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct  ObjectWriter_t2968406231  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_idGenerator
	ObjectIDGenerator_t1260826161 * ____idGenerator_0;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedMetadata
	Hashtable_t1853889766 * ____cachedMetadata_1;
	// System.Collections.Queue System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_pendingObjects
	Queue_t3637523393 * ____pendingObjects_2;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyCache
	Hashtable_t1853889766 * ____assemblyCache_3;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_surrogateSelector
	RuntimeObject* ____surrogateSelector_7;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_context
	StreamingContext_t3711869237  ____context_8;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyFormat
	int32_t ____assemblyFormat_9;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_typeFormat
	int32_t ____typeFormat_10;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectWriter::arrayBuffer
	ByteU5BU5D_t4116647657* ___arrayBuffer_11;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::ArrayBufferLength
	int32_t ___ArrayBufferLength_12;
	// System.Runtime.Serialization.SerializationObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_manager
	SerializationObjectManager_t4107654543 * ____manager_13;

public:
	inline static int32_t get_offset_of__idGenerator_0() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231, ____idGenerator_0)); }
	inline ObjectIDGenerator_t1260826161 * get__idGenerator_0() const { return ____idGenerator_0; }
	inline ObjectIDGenerator_t1260826161 ** get_address_of__idGenerator_0() { return &____idGenerator_0; }
	inline void set__idGenerator_0(ObjectIDGenerator_t1260826161 * value)
	{
		____idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier((&____idGenerator_0), value);
	}

	inline static int32_t get_offset_of__cachedMetadata_1() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231, ____cachedMetadata_1)); }
	inline Hashtable_t1853889766 * get__cachedMetadata_1() const { return ____cachedMetadata_1; }
	inline Hashtable_t1853889766 ** get_address_of__cachedMetadata_1() { return &____cachedMetadata_1; }
	inline void set__cachedMetadata_1(Hashtable_t1853889766 * value)
	{
		____cachedMetadata_1 = value;
		Il2CppCodeGenWriteBarrier((&____cachedMetadata_1), value);
	}

	inline static int32_t get_offset_of__pendingObjects_2() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231, ____pendingObjects_2)); }
	inline Queue_t3637523393 * get__pendingObjects_2() const { return ____pendingObjects_2; }
	inline Queue_t3637523393 ** get_address_of__pendingObjects_2() { return &____pendingObjects_2; }
	inline void set__pendingObjects_2(Queue_t3637523393 * value)
	{
		____pendingObjects_2 = value;
		Il2CppCodeGenWriteBarrier((&____pendingObjects_2), value);
	}

	inline static int32_t get_offset_of__assemblyCache_3() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231, ____assemblyCache_3)); }
	inline Hashtable_t1853889766 * get__assemblyCache_3() const { return ____assemblyCache_3; }
	inline Hashtable_t1853889766 ** get_address_of__assemblyCache_3() { return &____assemblyCache_3; }
	inline void set__assemblyCache_3(Hashtable_t1853889766 * value)
	{
		____assemblyCache_3 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyCache_3), value);
	}

	inline static int32_t get_offset_of__surrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231, ____surrogateSelector_7)); }
	inline RuntimeObject* get__surrogateSelector_7() const { return ____surrogateSelector_7; }
	inline RuntimeObject** get_address_of__surrogateSelector_7() { return &____surrogateSelector_7; }
	inline void set__surrogateSelector_7(RuntimeObject* value)
	{
		____surrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_7), value);
	}

	inline static int32_t get_offset_of__context_8() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231, ____context_8)); }
	inline StreamingContext_t3711869237  get__context_8() const { return ____context_8; }
	inline StreamingContext_t3711869237 * get_address_of__context_8() { return &____context_8; }
	inline void set__context_8(StreamingContext_t3711869237  value)
	{
		____context_8 = value;
	}

	inline static int32_t get_offset_of__assemblyFormat_9() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231, ____assemblyFormat_9)); }
	inline int32_t get__assemblyFormat_9() const { return ____assemblyFormat_9; }
	inline int32_t* get_address_of__assemblyFormat_9() { return &____assemblyFormat_9; }
	inline void set__assemblyFormat_9(int32_t value)
	{
		____assemblyFormat_9 = value;
	}

	inline static int32_t get_offset_of__typeFormat_10() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231, ____typeFormat_10)); }
	inline int32_t get__typeFormat_10() const { return ____typeFormat_10; }
	inline int32_t* get_address_of__typeFormat_10() { return &____typeFormat_10; }
	inline void set__typeFormat_10(int32_t value)
	{
		____typeFormat_10 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_11() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231, ___arrayBuffer_11)); }
	inline ByteU5BU5D_t4116647657* get_arrayBuffer_11() const { return ___arrayBuffer_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_arrayBuffer_11() { return &___arrayBuffer_11; }
	inline void set_arrayBuffer_11(ByteU5BU5D_t4116647657* value)
	{
		___arrayBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_11), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_12() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231, ___ArrayBufferLength_12)); }
	inline int32_t get_ArrayBufferLength_12() const { return ___ArrayBufferLength_12; }
	inline int32_t* get_address_of_ArrayBufferLength_12() { return &___ArrayBufferLength_12; }
	inline void set_ArrayBufferLength_12(int32_t value)
	{
		___ArrayBufferLength_12 = value;
	}

	inline static int32_t get_offset_of__manager_13() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231, ____manager_13)); }
	inline SerializationObjectManager_t4107654543 * get__manager_13() const { return ____manager_13; }
	inline SerializationObjectManager_t4107654543 ** get_address_of__manager_13() { return &____manager_13; }
	inline void set__manager_13(SerializationObjectManager_t4107654543 * value)
	{
		____manager_13 = value;
		Il2CppCodeGenWriteBarrier((&____manager_13), value);
	}
};

struct ObjectWriter_t2968406231_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedTypes
	Hashtable_t1853889766 * ____cachedTypes_4;
	// System.Reflection.Assembly System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssembly
	Assembly_t * ___CorlibAssembly_5;
	// System.String System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssemblyName
	String_t* ___CorlibAssemblyName_6;

public:
	inline static int32_t get_offset_of__cachedTypes_4() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231_StaticFields, ____cachedTypes_4)); }
	inline Hashtable_t1853889766 * get__cachedTypes_4() const { return ____cachedTypes_4; }
	inline Hashtable_t1853889766 ** get_address_of__cachedTypes_4() { return &____cachedTypes_4; }
	inline void set__cachedTypes_4(Hashtable_t1853889766 * value)
	{
		____cachedTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&____cachedTypes_4), value);
	}

	inline static int32_t get_offset_of_CorlibAssembly_5() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231_StaticFields, ___CorlibAssembly_5)); }
	inline Assembly_t * get_CorlibAssembly_5() const { return ___CorlibAssembly_5; }
	inline Assembly_t ** get_address_of_CorlibAssembly_5() { return &___CorlibAssembly_5; }
	inline void set_CorlibAssembly_5(Assembly_t * value)
	{
		___CorlibAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___CorlibAssembly_5), value);
	}

	inline static int32_t get_offset_of_CorlibAssemblyName_6() { return static_cast<int32_t>(offsetof(ObjectWriter_t2968406231_StaticFields, ___CorlibAssemblyName_6)); }
	inline String_t* get_CorlibAssemblyName_6() const { return ___CorlibAssemblyName_6; }
	inline String_t** get_address_of_CorlibAssemblyName_6() { return &___CorlibAssemblyName_6; }
	inline void set_CorlibAssemblyName_6(String_t* value)
	{
		___CorlibAssemblyName_6 = value;
		Il2CppCodeGenWriteBarrier((&___CorlibAssemblyName_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTWRITER_T2968406231_H
#ifndef DES_T821106792_H
#define DES_T821106792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t821106792  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

struct DES_t821106792_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t4116647658* ___weakKeys_11;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t4116647658* ___semiWeakKeys_12;

public:
	inline static int32_t get_offset_of_weakKeys_11() { return static_cast<int32_t>(offsetof(DES_t821106792_StaticFields, ___weakKeys_11)); }
	inline ByteU5BU2CU5D_t4116647658* get_weakKeys_11() const { return ___weakKeys_11; }
	inline ByteU5BU2CU5D_t4116647658** get_address_of_weakKeys_11() { return &___weakKeys_11; }
	inline void set_weakKeys_11(ByteU5BU2CU5D_t4116647658* value)
	{
		___weakKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&___weakKeys_11), value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_12() { return static_cast<int32_t>(offsetof(DES_t821106792_StaticFields, ___semiWeakKeys_12)); }
	inline ByteU5BU2CU5D_t4116647658* get_semiWeakKeys_12() const { return ___semiWeakKeys_12; }
	inline ByteU5BU2CU5D_t4116647658** get_address_of_semiWeakKeys_12() { return &___semiWeakKeys_12; }
	inline void set_semiWeakKeys_12(ByteU5BU2CU5D_t4116647658* value)
	{
		___semiWeakKeys_12 = value;
		Il2CppCodeGenWriteBarrier((&___semiWeakKeys_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T821106792_H
#ifndef RC2_T3167825714_H
#define RC2_T3167825714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2
struct  RC2_t3167825714  : public SymmetricAlgorithm_t4254223087
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_10;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_10() { return static_cast<int32_t>(offsetof(RC2_t3167825714, ___EffectiveKeySizeValue_10)); }
	inline int32_t get_EffectiveKeySizeValue_10() const { return ___EffectiveKeySizeValue_10; }
	inline int32_t* get_address_of_EffectiveKeySizeValue_10() { return &___EffectiveKeySizeValue_10; }
	inline void set_EffectiveKeySizeValue_10(int32_t value)
	{
		___EffectiveKeySizeValue_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2_T3167825714_H
#ifndef RIJNDAEL_T2986313634_H
#define RIJNDAEL_T2986313634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t2986313634  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T2986313634_H
#ifndef NAMEDPERMISSIONSET_T2915669112_H
#define NAMEDPERMISSIONSET_T2915669112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.NamedPermissionSet
struct  NamedPermissionSet_t2915669112  : public PermissionSet_t223948603
{
public:
	// System.String System.Security.NamedPermissionSet::name
	String_t* ___name_7;
	// System.String System.Security.NamedPermissionSet::description
	String_t* ___description_8;

public:
	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t2915669112, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}

	inline static int32_t get_offset_of_description_8() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t2915669112, ___description_8)); }
	inline String_t* get_description_8() const { return ___description_8; }
	inline String_t** get_address_of_description_8() { return &___description_8; }
	inline void set_description_8(String_t* value)
	{
		___description_8 = value;
		Il2CppCodeGenWriteBarrier((&___description_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEDPERMISSIONSET_T2915669112_H
#ifndef DESCRYPTOSERVICEPROVIDER_T1519490285_H
#define DESCRYPTOSERVICEPROVIDER_T1519490285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESCryptoServiceProvider
struct  DESCryptoServiceProvider_t1519490285  : public DES_t821106792
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRYPTOSERVICEPROVIDER_T1519490285_H
#ifndef RC2CRYPTOSERVICEPROVIDER_T662919463_H
#define RC2CRYPTOSERVICEPROVIDER_T662919463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2CryptoServiceProvider
struct  RC2CryptoServiceProvider_t662919463  : public RC2_t3167825714
{
public:
	// System.Boolean System.Security.Cryptography.RC2CryptoServiceProvider::_useSalt
	bool ____useSalt_11;

public:
	inline static int32_t get_offset_of__useSalt_11() { return static_cast<int32_t>(offsetof(RC2CryptoServiceProvider_t662919463, ____useSalt_11)); }
	inline bool get__useSalt_11() const { return ____useSalt_11; }
	inline bool* get_address_of__useSalt_11() { return &____useSalt_11; }
	inline void set__useSalt_11(bool value)
	{
		____useSalt_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2CRYPTOSERVICEPROVIDER_T662919463_H
#ifndef RIJNDAELMANAGED_T3586970409_H
#define RIJNDAELMANAGED_T3586970409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t3586970409  : public Rijndael_t2986313634
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T3586970409_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize800 = { sizeof (MemberTypeMetadata_t976220688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable800[1] = 
{
	MemberTypeMetadata_t976220688::get_offset_of_members_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize801 = { sizeof (ObjectWriter_t2968406231), -1, sizeof(ObjectWriter_t2968406231_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable801[14] = 
{
	ObjectWriter_t2968406231::get_offset_of__idGenerator_0(),
	ObjectWriter_t2968406231::get_offset_of__cachedMetadata_1(),
	ObjectWriter_t2968406231::get_offset_of__pendingObjects_2(),
	ObjectWriter_t2968406231::get_offset_of__assemblyCache_3(),
	ObjectWriter_t2968406231_StaticFields::get_offset_of__cachedTypes_4(),
	ObjectWriter_t2968406231_StaticFields::get_offset_of_CorlibAssembly_5(),
	ObjectWriter_t2968406231_StaticFields::get_offset_of_CorlibAssemblyName_6(),
	ObjectWriter_t2968406231::get_offset_of__surrogateSelector_7(),
	ObjectWriter_t2968406231::get_offset_of__context_8(),
	ObjectWriter_t2968406231::get_offset_of__assemblyFormat_9(),
	ObjectWriter_t2968406231::get_offset_of__typeFormat_10(),
	ObjectWriter_t2968406231::get_offset_of_arrayBuffer_11(),
	ObjectWriter_t2968406231::get_offset_of_ArrayBufferLength_12(),
	ObjectWriter_t2968406231::get_offset_of__manager_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize802 = { sizeof (MetadataReference_t4077873660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable802[2] = 
{
	MetadataReference_t4077873660::get_offset_of_Metadata_0(),
	MetadataReference_t4077873660::get_offset_of_ObjectID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize803 = { sizeof (MessageFormatter_t457758949), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize804 = { sizeof (AllowPartiallyTrustedCallersAttribute_t1828959166), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize805 = { sizeof (CodeAccessPermission_t2681295399), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize806 = { sizeof (HostSecurityManager_t1435734729), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize807 = { sizeof (HostSecurityManagerOptions_t756318624)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable807[8] = 
{
	HostSecurityManagerOptions_t756318624::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize808 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize809 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize810 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize811 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize812 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize813 = { sizeof (NamedPermissionSet_t2915669112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable813[2] = 
{
	NamedPermissionSet_t2915669112::get_offset_of_name_7(),
	NamedPermissionSet_t2915669112::get_offset_of_description_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize814 = { sizeof (PermissionBuilder_t1403083973), -1, sizeof(PermissionBuilder_t1403083973_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable814[1] = 
{
	PermissionBuilder_t1403083973_StaticFields::get_offset_of_psNone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize815 = { sizeof (PermissionSet_t223948603), -1, sizeof(PermissionSet_t223948603_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable815[7] = 
{
	PermissionSet_t223948603_StaticFields::get_offset_of_psUnrestricted_0(),
	PermissionSet_t223948603::get_offset_of_state_1(),
	PermissionSet_t223948603::get_offset_of_list_2(),
	PermissionSet_t223948603::get_offset_of__policyLevel_3(),
	PermissionSet_t223948603::get_offset_of__declsec_4(),
	PermissionSet_t223948603::get_offset_of__readOnly_5(),
	PermissionSet_t223948603_StaticFields::get_offset_of_action_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize816 = { sizeof (PolicyLevelType_t244468749)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable816[5] = 
{
	PolicyLevelType_t244468749::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize817 = { sizeof (SecureString_t3041467854), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable817[3] = 
{
	SecureString_t3041467854::get_offset_of_length_0(),
	SecureString_t3041467854::get_offset_of_disposed_1(),
	SecureString_t3041467854::get_offset_of_data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize818 = { sizeof (SecurityContext_t2435442044), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable818[5] = 
{
	SecurityContext_t2435442044::get_offset_of__capture_0(),
	SecurityContext_t2435442044::get_offset_of__winid_1(),
	SecurityContext_t2435442044::get_offset_of__stack_2(),
	SecurityContext_t2435442044::get_offset_of__suppressFlowWindowsIdentity_3(),
	SecurityContext_t2435442044::get_offset_of__suppressFlow_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize819 = { sizeof (SecurityCriticalAttribute_t2279322844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable819[1] = 
{
	SecurityCriticalAttribute_t2279322844::get_offset_of__scope_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize820 = { sizeof (SecurityCriticalScope_t606020417)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable820[3] = 
{
	SecurityCriticalScope_t606020417::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize821 = { sizeof (SecurityElement_t1046076091), -1, sizeof(SecurityElement_t1046076091_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable821[9] = 
{
	SecurityElement_t1046076091::get_offset_of_text_0(),
	SecurityElement_t1046076091::get_offset_of_tag_1(),
	SecurityElement_t1046076091::get_offset_of_attributes_2(),
	SecurityElement_t1046076091::get_offset_of_children_3(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_tag_chars_4(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_text_chars_5(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_attr_name_chars_6(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_attr_value_chars_7(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_chars_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize822 = { sizeof (SecurityAttribute_t3566489056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable822[2] = 
{
	SecurityAttribute_t3566489056::get_offset_of__name_0(),
	SecurityAttribute_t3566489056::get_offset_of__value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize823 = { sizeof (RuntimeDeclSecurityEntry_t3144469156)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityEntry_t3144469156 ), 0, 0 };
extern const int32_t g_FieldOffsetTable823[3] = 
{
	RuntimeDeclSecurityEntry_t3144469156::get_offset_of_blob_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t3144469156::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t3144469156::get_offset_of_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize824 = { sizeof (RuntimeSecurityFrame_t536173748), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable824[5] = 
{
	RuntimeSecurityFrame_t536173748::get_offset_of_domain_0(),
	RuntimeSecurityFrame_t536173748::get_offset_of_method_1(),
	RuntimeSecurityFrame_t536173748::get_offset_of_assert_2(),
	RuntimeSecurityFrame_t536173748::get_offset_of_deny_3(),
	RuntimeSecurityFrame_t536173748::get_offset_of_permitonly_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize825 = { sizeof (SecurityFrame_t1422462475)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable825[5] = 
{
	SecurityFrame_t1422462475::get_offset_of__domain_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1422462475::get_offset_of__method_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1422462475::get_offset_of__assert_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1422462475::get_offset_of__deny_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1422462475::get_offset_of__permitonly_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize826 = { sizeof (SecurityException_t975544473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable826[8] = 
{
	SecurityException_t975544473::get_offset_of_permissionState_11(),
	SecurityException_t975544473::get_offset_of_permissionType_12(),
	SecurityException_t975544473::get_offset_of__granted_13(),
	SecurityException_t975544473::get_offset_of__refused_14(),
	SecurityException_t975544473::get_offset_of__demanded_15(),
	SecurityException_t975544473::get_offset_of__firstperm_16(),
	SecurityException_t975544473::get_offset_of__method_17(),
	SecurityException_t975544473::get_offset_of__evidence_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize827 = { sizeof (RuntimeDeclSecurityActions_t582952764)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityActions_t582952764 ), 0, 0 };
extern const int32_t g_FieldOffsetTable827[3] = 
{
	RuntimeDeclSecurityActions_t582952764::get_offset_of_cas_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityActions_t582952764::get_offset_of_noncas_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityActions_t582952764::get_offset_of_choice_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize828 = { sizeof (SecurityManager_t3383402582), -1, sizeof(SecurityManager_t3383402582_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable828[5] = 
{
	SecurityManager_t3383402582_StaticFields::get_offset_of__lockObject_0(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__hierarchy_1(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__declsecCache_2(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__level_3(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__execution_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize829 = { sizeof (SecuritySafeCriticalAttribute_t3505979402), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize830 = { sizeof (SecurityZone_t1272287263)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable830[7] = 
{
	SecurityZone_t1272287263::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize831 = { sizeof (SuppressUnmanagedCodeSecurityAttribute_t744305558), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize832 = { sizeof (UnverifiableCodeAttribute_t3228760399), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize833 = { sizeof (XmlSyntaxException_t2973594484), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize834 = { sizeof (CommonObjectSecurity_t1466880084), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize835 = { sizeof (CryptoKeySecurity_t1177725497), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize836 = { sizeof (NativeObjectSecurity_t3028773534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize837 = { sizeof (ObjectSecurity_t3035716992), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize838 = { sizeof (AsymmetricAlgorithm_t932037087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable838[2] = 
{
	AsymmetricAlgorithm_t932037087::get_offset_of_KeySizeValue_0(),
	AsymmetricAlgorithm_t932037087::get_offset_of_LegalKeySizesValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize839 = { sizeof (AsymmetricKeyExchangeDeformatter_t3370779160), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize840 = { sizeof (AsymmetricKeyExchangeFormatter_t937192061), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize841 = { sizeof (AsymmetricSignatureDeformatter_t2681190756), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize842 = { sizeof (AsymmetricSignatureFormatter_t3486936014), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize843 = { sizeof (Base64Constants_t4102031153), -1, sizeof(Base64Constants_t4102031153_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable843[2] = 
{
	Base64Constants_t4102031153_StaticFields::get_offset_of_EncodeTable_0(),
	Base64Constants_t4102031153_StaticFields::get_offset_of_DecodeTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize844 = { sizeof (CipherMode_t84635067)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable844[6] = 
{
	CipherMode_t84635067::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize845 = { sizeof (CryptoAPITransform_t1695680317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable845[1] = 
{
	CryptoAPITransform_t1695680317::get_offset_of_m_disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize846 = { sizeof (CryptoConfig_t4201145714), -1, sizeof(CryptoConfig_t4201145714_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable846[139] = 
{
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
	CryptoConfig_t4201145714_StaticFields::get_offset_of_lockObject_136(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_algorithms_137(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_oid_138(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize847 = { sizeof (CryptoHandler_t2779508855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable847[5] = 
{
	CryptoHandler_t2779508855::get_offset_of_algorithms_0(),
	CryptoHandler_t2779508855::get_offset_of_oid_1(),
	CryptoHandler_t2779508855::get_offset_of_names_2(),
	CryptoHandler_t2779508855::get_offset_of_classnames_3(),
	CryptoHandler_t2779508855::get_offset_of_level_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize848 = { sizeof (CryptographicException_t248831461), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize849 = { sizeof (CryptographicUnexpectedOperationException_t2790575154), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize850 = { sizeof (CryptoStream_t2702504504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable850[15] = 
{
	CryptoStream_t2702504504::get_offset_of__stream_2(),
	CryptoStream_t2702504504::get_offset_of__transform_3(),
	CryptoStream_t2702504504::get_offset_of__mode_4(),
	CryptoStream_t2702504504::get_offset_of__currentBlock_5(),
	CryptoStream_t2702504504::get_offset_of__disposed_6(),
	CryptoStream_t2702504504::get_offset_of__flushedFinalBlock_7(),
	CryptoStream_t2702504504::get_offset_of__partialCount_8(),
	CryptoStream_t2702504504::get_offset_of__endOfStream_9(),
	CryptoStream_t2702504504::get_offset_of__waitingBlock_10(),
	CryptoStream_t2702504504::get_offset_of__waitingCount_11(),
	CryptoStream_t2702504504::get_offset_of__transformedBlock_12(),
	CryptoStream_t2702504504::get_offset_of__transformedPos_13(),
	CryptoStream_t2702504504::get_offset_of__transformedCount_14(),
	CryptoStream_t2702504504::get_offset_of__workingBlock_15(),
	CryptoStream_t2702504504::get_offset_of__workingCount_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize851 = { sizeof (CryptoStreamMode_t3639658227)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable851[3] = 
{
	CryptoStreamMode_t3639658227::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize852 = { sizeof (CspKeyContainerInfo_t3833902945), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable852[2] = 
{
	CspKeyContainerInfo_t3833902945::get_offset_of__params_0(),
	CspKeyContainerInfo_t3833902945::get_offset_of__random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize853 = { sizeof (CspParameters_t239852639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable853[7] = 
{
	CspParameters_t239852639::get_offset_of__Flags_0(),
	CspParameters_t239852639::get_offset_of_KeyContainerName_1(),
	CspParameters_t239852639::get_offset_of_KeyNumber_2(),
	CspParameters_t239852639::get_offset_of_ProviderName_3(),
	CspParameters_t239852639::get_offset_of_ProviderType_4(),
	CspParameters_t239852639::get_offset_of__password_5(),
	CspParameters_t239852639::get_offset_of__windowHandle_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize854 = { sizeof (CspProviderFlags_t4094439141)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable854[9] = 
{
	CspProviderFlags_t4094439141::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize855 = { sizeof (DeriveBytes_t2246965020), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize856 = { sizeof (DES_t821106792), -1, sizeof(DES_t821106792_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable856[3] = 
{
	0,
	DES_t821106792_StaticFields::get_offset_of_weakKeys_11(),
	DES_t821106792_StaticFields::get_offset_of_semiWeakKeys_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize857 = { sizeof (DESTransform_t4088905499), -1, sizeof(DESTransform_t4088905499_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable857[13] = 
{
	DESTransform_t4088905499_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t4088905499_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t4088905499_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t4088905499_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t4088905499::get_offset_of_keySchedule_16(),
	DESTransform_t4088905499::get_offset_of_byteBuff_17(),
	DESTransform_t4088905499::get_offset_of_dwordBuff_18(),
	DESTransform_t4088905499_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t4088905499_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t4088905499_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t4088905499_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t4088905499_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t4088905499_StaticFields::get_offset_of_fpTab_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize858 = { sizeof (DESCryptoServiceProvider_t1519490285), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize859 = { sizeof (DSA_t2386879874), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize860 = { sizeof (DSACryptoServiceProvider_t3992668923), -1, sizeof(DSACryptoServiceProvider_t3992668923_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable860[8] = 
{
	0,
	DSACryptoServiceProvider_t3992668923::get_offset_of_store_3(),
	DSACryptoServiceProvider_t3992668923::get_offset_of_persistKey_4(),
	DSACryptoServiceProvider_t3992668923::get_offset_of_persisted_5(),
	DSACryptoServiceProvider_t3992668923::get_offset_of_privateKeyExportable_6(),
	DSACryptoServiceProvider_t3992668923::get_offset_of_m_disposed_7(),
	DSACryptoServiceProvider_t3992668923::get_offset_of_dsa_8(),
	DSACryptoServiceProvider_t3992668923_StaticFields::get_offset_of_useMachineKeyStore_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize861 = { sizeof (DSAParameters_t1885824122)+ sizeof (RuntimeObject), sizeof(DSAParameters_t1885824122_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable861[8] = 
{
	DSAParameters_t1885824122::get_offset_of_Counter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_G_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_J_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_P_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_Q_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_Seed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_X_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_Y_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize862 = { sizeof (DSASignatureDeformatter_t3677955172), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable862[1] = 
{
	DSASignatureDeformatter_t3677955172::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize863 = { sizeof (DSASignatureFormatter_t2007981259), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable863[1] = 
{
	DSASignatureFormatter_t2007981259::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize864 = { sizeof (FromBase64TransformMode_t2018065788)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable864[3] = 
{
	FromBase64TransformMode_t2018065788::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize865 = { sizeof (FromBase64Transform_t2896579788), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable865[6] = 
{
	0,
	FromBase64Transform_t2896579788::get_offset_of_mode_1(),
	FromBase64Transform_t2896579788::get_offset_of_accumulator_2(),
	FromBase64Transform_t2896579788::get_offset_of_accPtr_3(),
	FromBase64Transform_t2896579788::get_offset_of_m_disposed_4(),
	FromBase64Transform_t2896579788::get_offset_of_lookupTable_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize866 = { sizeof (HashAlgorithm_t1432317219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable866[4] = 
{
	HashAlgorithm_t1432317219::get_offset_of_HashValue_0(),
	HashAlgorithm_t1432317219::get_offset_of_HashSizeValue_1(),
	HashAlgorithm_t1432317219::get_offset_of_State_2(),
	HashAlgorithm_t1432317219::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize867 = { sizeof (HMAC_t2621101144), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable867[5] = 
{
	HMAC_t2621101144::get_offset_of__disposed_5(),
	HMAC_t2621101144::get_offset_of__hashName_6(),
	HMAC_t2621101144::get_offset_of__algo_7(),
	HMAC_t2621101144::get_offset_of__block_8(),
	HMAC_t2621101144::get_offset_of__blockSizeValue_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize868 = { sizeof (HMACMD5_t2742219965), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize869 = { sizeof (HMACRIPEMD160_t3724196729), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize870 = { sizeof (HMACSHA1_t1952596188), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize871 = { sizeof (HMACSHA256_t3249253224), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize872 = { sizeof (HMACSHA384_t117937311), -1, sizeof(HMACSHA384_t117937311_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable872[2] = 
{
	HMACSHA384_t117937311_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA384_t117937311::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize873 = { sizeof (HMACSHA512_t923916539), -1, sizeof(HMACSHA512_t923916539_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable873[2] = 
{
	HMACSHA512_t923916539_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA512_t923916539::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize874 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize875 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize876 = { sizeof (KeyedHashAlgorithm_t112861511), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable876[1] = 
{
	KeyedHashAlgorithm_t112861511::get_offset_of_KeyValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize877 = { sizeof (KeyNumber_t1560809490)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable877[3] = 
{
	KeyNumber_t1560809490::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize878 = { sizeof (KeySizes_t85027896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable878[3] = 
{
	KeySizes_t85027896::get_offset_of__maxSize_0(),
	KeySizes_t85027896::get_offset_of__minSize_1(),
	KeySizes_t85027896::get_offset_of__skipSize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize879 = { sizeof (MACTripleDES_t1631262397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable879[3] = 
{
	MACTripleDES_t1631262397::get_offset_of_tdes_5(),
	MACTripleDES_t1631262397::get_offset_of_mac_6(),
	MACTripleDES_t1631262397::get_offset_of_m_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize880 = { sizeof (MaskGenerationMethod_t2116484826), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize881 = { sizeof (MD5_t3177620429), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize882 = { sizeof (MD5CryptoServiceProvider_t3005586042), -1, sizeof(MD5CryptoServiceProvider_t3005586042_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable882[8] = 
{
	0,
	0,
	MD5CryptoServiceProvider_t3005586042::get_offset_of__H_6(),
	MD5CryptoServiceProvider_t3005586042::get_offset_of_buff_7(),
	MD5CryptoServiceProvider_t3005586042::get_offset_of_count_8(),
	MD5CryptoServiceProvider_t3005586042::get_offset_of__ProcessingBuffer_9(),
	MD5CryptoServiceProvider_t3005586042::get_offset_of__ProcessingBufferCount_10(),
	MD5CryptoServiceProvider_t3005586042_StaticFields::get_offset_of_K_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize883 = { sizeof (PaddingMode_t2546806710)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable883[6] = 
{
	PaddingMode_t2546806710::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize884 = { sizeof (PasswordDeriveBytes_t2836652680), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable884[10] = 
{
	PasswordDeriveBytes_t2836652680::get_offset_of_HashNameValue_0(),
	PasswordDeriveBytes_t2836652680::get_offset_of_SaltValue_1(),
	PasswordDeriveBytes_t2836652680::get_offset_of_IterationsValue_2(),
	PasswordDeriveBytes_t2836652680::get_offset_of_hash_3(),
	PasswordDeriveBytes_t2836652680::get_offset_of_state_4(),
	PasswordDeriveBytes_t2836652680::get_offset_of_password_5(),
	PasswordDeriveBytes_t2836652680::get_offset_of_initial_6(),
	PasswordDeriveBytes_t2836652680::get_offset_of_output_7(),
	PasswordDeriveBytes_t2836652680::get_offset_of_position_8(),
	PasswordDeriveBytes_t2836652680::get_offset_of_hashnumber_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize885 = { sizeof (PKCS1MaskGenerationMethod_t1129351447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable885[1] = 
{
	PKCS1MaskGenerationMethod_t1129351447::get_offset_of_hashName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize886 = { sizeof (RandomNumberGenerator_t386037858), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize887 = { sizeof (RC2_t3167825714), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable887[1] = 
{
	RC2_t3167825714::get_offset_of_EffectiveKeySizeValue_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize888 = { sizeof (RC2CryptoServiceProvider_t662919463), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable888[1] = 
{
	RC2CryptoServiceProvider_t662919463::get_offset_of__useSalt_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize889 = { sizeof (RC2Transform_t458321487), -1, sizeof(RC2Transform_t458321487_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable889[7] = 
{
	RC2Transform_t458321487::get_offset_of_R0_12(),
	RC2Transform_t458321487::get_offset_of_R1_13(),
	RC2Transform_t458321487::get_offset_of_R2_14(),
	RC2Transform_t458321487::get_offset_of_R3_15(),
	RC2Transform_t458321487::get_offset_of_K_16(),
	RC2Transform_t458321487::get_offset_of_j_17(),
	RC2Transform_t458321487_StaticFields::get_offset_of_pitable_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize890 = { sizeof (Rfc2898DeriveBytes_t546674159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable890[7] = 
{
	0,
	Rfc2898DeriveBytes_t546674159::get_offset_of__iteration_1(),
	Rfc2898DeriveBytes_t546674159::get_offset_of__salt_2(),
	Rfc2898DeriveBytes_t546674159::get_offset_of__hmac_3(),
	Rfc2898DeriveBytes_t546674159::get_offset_of__buffer_4(),
	Rfc2898DeriveBytes_t546674159::get_offset_of__pos_5(),
	Rfc2898DeriveBytes_t546674159::get_offset_of__f_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize891 = { sizeof (Rijndael_t2986313634), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize892 = { sizeof (RijndaelManaged_t3586970409), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize893 = { sizeof (RijndaelTransform_t631222241), -1, sizeof(RijndaelTransform_t631222241_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable893[15] = 
{
	RijndaelTransform_t631222241::get_offset_of_expandedKey_12(),
	RijndaelTransform_t631222241::get_offset_of_Nb_13(),
	RijndaelTransform_t631222241::get_offset_of_Nk_14(),
	RijndaelTransform_t631222241::get_offset_of_Nr_15(),
	RijndaelTransform_t631222241_StaticFields::get_offset_of_Rcon_16(),
	RijndaelTransform_t631222241_StaticFields::get_offset_of_SBox_17(),
	RijndaelTransform_t631222241_StaticFields::get_offset_of_iSBox_18(),
	RijndaelTransform_t631222241_StaticFields::get_offset_of_T0_19(),
	RijndaelTransform_t631222241_StaticFields::get_offset_of_T1_20(),
	RijndaelTransform_t631222241_StaticFields::get_offset_of_T2_21(),
	RijndaelTransform_t631222241_StaticFields::get_offset_of_T3_22(),
	RijndaelTransform_t631222241_StaticFields::get_offset_of_iT0_23(),
	RijndaelTransform_t631222241_StaticFields::get_offset_of_iT1_24(),
	RijndaelTransform_t631222241_StaticFields::get_offset_of_iT2_25(),
	RijndaelTransform_t631222241_StaticFields::get_offset_of_iT3_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize894 = { sizeof (RijndaelManagedTransform_t4102601014), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable894[2] = 
{
	RijndaelManagedTransform_t4102601014::get_offset_of__st_0(),
	RijndaelManagedTransform_t4102601014::get_offset_of__bs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize895 = { sizeof (RIPEMD160_t268675434), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize896 = { sizeof (RIPEMD160Managed_t2491561941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable896[6] = 
{
	0,
	RIPEMD160Managed_t2491561941::get_offset_of__ProcessingBuffer_5(),
	RIPEMD160Managed_t2491561941::get_offset_of__X_6(),
	RIPEMD160Managed_t2491561941::get_offset_of__HashValue_7(),
	RIPEMD160Managed_t2491561941::get_offset_of__Length_8(),
	RIPEMD160Managed_t2491561941::get_offset_of__ProcessingBufferCount_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize897 = { sizeof (RNGCryptoServiceProvider_t3397414743), -1, sizeof(RNGCryptoServiceProvider_t3397414743_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable897[2] = 
{
	RNGCryptoServiceProvider_t3397414743_StaticFields::get_offset_of__lock_0(),
	RNGCryptoServiceProvider_t3397414743::get_offset_of__handle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize898 = { sizeof (RSA_t2385438082), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize899 = { sizeof (RSACryptoServiceProvider_t2683512874), -1, sizeof(RSACryptoServiceProvider_t2683512874_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable899[9] = 
{
	0,
	RSACryptoServiceProvider_t2683512874::get_offset_of_store_3(),
	RSACryptoServiceProvider_t2683512874::get_offset_of_persistKey_4(),
	RSACryptoServiceProvider_t2683512874::get_offset_of_persisted_5(),
	RSACryptoServiceProvider_t2683512874::get_offset_of_privateKeyExportable_6(),
	RSACryptoServiceProvider_t2683512874::get_offset_of_m_disposed_7(),
	RSACryptoServiceProvider_t2683512874::get_offset_of_rsa_8(),
	RSACryptoServiceProvider_t2683512874_StaticFields::get_offset_of_useMachineKeyStore_9(),
	RSACryptoServiceProvider_t2683512874_StaticFields::get_offset_of_U3CU3Ef__switchU24map2D_10(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
