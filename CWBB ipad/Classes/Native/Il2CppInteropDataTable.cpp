#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Ionic.Zlib.DeflateManager
struct DeflateManager_t740995428;
// Ionic.Zlib.InflateManager
struct InflateManager_t3407211616;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.String
struct String_t;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;




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
#ifndef CRC32_T2128839853_H
#define CRC32_T2128839853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Crc.CRC32
struct  CRC32_t2128839853  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.UInt32 Ionic.Crc.CRC32::dwPolynomial
	uint32_t ___dwPolynomial_0;
	// System.Int64 Ionic.Crc.CRC32::_TotalBytesRead
	int64_t ____TotalBytesRead_1;
	// System.Boolean Ionic.Crc.CRC32::reverseBits
	bool ___reverseBits_2;
	// System.UInt32[] Ionic.Crc.CRC32::crc32Table
	UInt32U5BU5D_t2770800703* ___crc32Table_3;
	// System.UInt32 Ionic.Crc.CRC32::_register
	uint32_t ____register_5;

public:
	inline static int32_t get_offset_of_dwPolynomial_0() { return static_cast<int32_t>(offsetof(CRC32_t2128839853, ___dwPolynomial_0)); }
	inline uint32_t get_dwPolynomial_0() const { return ___dwPolynomial_0; }
	inline uint32_t* get_address_of_dwPolynomial_0() { return &___dwPolynomial_0; }
	inline void set_dwPolynomial_0(uint32_t value)
	{
		___dwPolynomial_0 = value;
	}

	inline static int32_t get_offset_of__TotalBytesRead_1() { return static_cast<int32_t>(offsetof(CRC32_t2128839853, ____TotalBytesRead_1)); }
	inline int64_t get__TotalBytesRead_1() const { return ____TotalBytesRead_1; }
	inline int64_t* get_address_of__TotalBytesRead_1() { return &____TotalBytesRead_1; }
	inline void set__TotalBytesRead_1(int64_t value)
	{
		____TotalBytesRead_1 = value;
	}

	inline static int32_t get_offset_of_reverseBits_2() { return static_cast<int32_t>(offsetof(CRC32_t2128839853, ___reverseBits_2)); }
	inline bool get_reverseBits_2() const { return ___reverseBits_2; }
	inline bool* get_address_of_reverseBits_2() { return &___reverseBits_2; }
	inline void set_reverseBits_2(bool value)
	{
		___reverseBits_2 = value;
	}

	inline static int32_t get_offset_of_crc32Table_3() { return static_cast<int32_t>(offsetof(CRC32_t2128839853, ___crc32Table_3)); }
	inline UInt32U5BU5D_t2770800703* get_crc32Table_3() const { return ___crc32Table_3; }
	inline UInt32U5BU5D_t2770800703** get_address_of_crc32Table_3() { return &___crc32Table_3; }
	inline void set_crc32Table_3(UInt32U5BU5D_t2770800703* value)
	{
		___crc32Table_3 = value;
		Il2CppCodeGenWriteBarrier((&___crc32Table_3), value);
	}

	inline static int32_t get_offset_of__register_5() { return static_cast<int32_t>(offsetof(CRC32_t2128839853, ____register_5)); }
	inline uint32_t get__register_5() const { return ____register_5; }
	inline uint32_t* get_address_of__register_5() { return &____register_5; }
	inline void set__register_5(uint32_t value)
	{
		____register_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRC32_T2128839853_H
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
#ifndef ZLIBEXCEPTION_T2135990123_H
#define ZLIBEXCEPTION_T2135990123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.ZlibException
struct  ZlibException_t2135990123  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBEXCEPTION_T2135990123_H
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
#ifndef COMPRESSIONLEVEL_T957220238_H
#define COMPRESSIONLEVEL_T957220238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.CompressionLevel
struct  CompressionLevel_t957220238 
{
public:
	// System.Int32 Ionic.Zlib.CompressionLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionLevel_t957220238, ___value___1)); }
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
#endif // COMPRESSIONLEVEL_T957220238_H
#ifndef COMPRESSIONSTRATEGY_T2822174634_H
#define COMPRESSIONSTRATEGY_T2822174634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.CompressionStrategy
struct  CompressionStrategy_t2822174634 
{
public:
	// System.Int32 Ionic.Zlib.CompressionStrategy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionStrategy_t2822174634, ___value___1)); }
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
#endif // COMPRESSIONSTRATEGY_T2822174634_H
#ifndef ZLIBCODEC_T3653667923_H
#define ZLIBCODEC_T3653667923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.ZlibCodec
struct  ZlibCodec_t3653667923  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Byte[] Ionic.Zlib.ZlibCodec::InputBuffer
	ByteU5BU5D_t4116647657* ___InputBuffer_0;
	// System.Int32 Ionic.Zlib.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 Ionic.Zlib.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 Ionic.Zlib.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] Ionic.Zlib.ZlibCodec::OutputBuffer
	ByteU5BU5D_t4116647657* ___OutputBuffer_4;
	// System.Int32 Ionic.Zlib.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 Ionic.Zlib.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 Ionic.Zlib.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String Ionic.Zlib.ZlibCodec::Message
	String_t* ___Message_8;
	// Ionic.Zlib.DeflateManager Ionic.Zlib.ZlibCodec::dstate
	DeflateManager_t740995428 * ___dstate_9;
	// Ionic.Zlib.InflateManager Ionic.Zlib.ZlibCodec::istate
	InflateManager_t3407211616 * ___istate_10;
	// System.UInt32 Ionic.Zlib.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// Ionic.Zlib.CompressionLevel Ionic.Zlib.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 Ionic.Zlib.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ZlibCodec::Strategy
	int32_t ___Strategy_14;

public:
	inline static int32_t get_offset_of_InputBuffer_0() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___InputBuffer_0)); }
	inline ByteU5BU5D_t4116647657* get_InputBuffer_0() const { return ___InputBuffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_InputBuffer_0() { return &___InputBuffer_0; }
	inline void set_InputBuffer_0(ByteU5BU5D_t4116647657* value)
	{
		___InputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___InputBuffer_0), value);
	}

	inline static int32_t get_offset_of_NextIn_1() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___NextIn_1)); }
	inline int32_t get_NextIn_1() const { return ___NextIn_1; }
	inline int32_t* get_address_of_NextIn_1() { return &___NextIn_1; }
	inline void set_NextIn_1(int32_t value)
	{
		___NextIn_1 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesIn_2() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___AvailableBytesIn_2)); }
	inline int32_t get_AvailableBytesIn_2() const { return ___AvailableBytesIn_2; }
	inline int32_t* get_address_of_AvailableBytesIn_2() { return &___AvailableBytesIn_2; }
	inline void set_AvailableBytesIn_2(int32_t value)
	{
		___AvailableBytesIn_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytesIn_3() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___TotalBytesIn_3)); }
	inline int64_t get_TotalBytesIn_3() const { return ___TotalBytesIn_3; }
	inline int64_t* get_address_of_TotalBytesIn_3() { return &___TotalBytesIn_3; }
	inline void set_TotalBytesIn_3(int64_t value)
	{
		___TotalBytesIn_3 = value;
	}

	inline static int32_t get_offset_of_OutputBuffer_4() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___OutputBuffer_4)); }
	inline ByteU5BU5D_t4116647657* get_OutputBuffer_4() const { return ___OutputBuffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_OutputBuffer_4() { return &___OutputBuffer_4; }
	inline void set_OutputBuffer_4(ByteU5BU5D_t4116647657* value)
	{
		___OutputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___OutputBuffer_4), value);
	}

	inline static int32_t get_offset_of_NextOut_5() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___NextOut_5)); }
	inline int32_t get_NextOut_5() const { return ___NextOut_5; }
	inline int32_t* get_address_of_NextOut_5() { return &___NextOut_5; }
	inline void set_NextOut_5(int32_t value)
	{
		___NextOut_5 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesOut_6() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___AvailableBytesOut_6)); }
	inline int32_t get_AvailableBytesOut_6() const { return ___AvailableBytesOut_6; }
	inline int32_t* get_address_of_AvailableBytesOut_6() { return &___AvailableBytesOut_6; }
	inline void set_AvailableBytesOut_6(int32_t value)
	{
		___AvailableBytesOut_6 = value;
	}

	inline static int32_t get_offset_of_TotalBytesOut_7() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___TotalBytesOut_7)); }
	inline int64_t get_TotalBytesOut_7() const { return ___TotalBytesOut_7; }
	inline int64_t* get_address_of_TotalBytesOut_7() { return &___TotalBytesOut_7; }
	inline void set_TotalBytesOut_7(int64_t value)
	{
		___TotalBytesOut_7 = value;
	}

	inline static int32_t get_offset_of_Message_8() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___Message_8)); }
	inline String_t* get_Message_8() const { return ___Message_8; }
	inline String_t** get_address_of_Message_8() { return &___Message_8; }
	inline void set_Message_8(String_t* value)
	{
		___Message_8 = value;
		Il2CppCodeGenWriteBarrier((&___Message_8), value);
	}

	inline static int32_t get_offset_of_dstate_9() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___dstate_9)); }
	inline DeflateManager_t740995428 * get_dstate_9() const { return ___dstate_9; }
	inline DeflateManager_t740995428 ** get_address_of_dstate_9() { return &___dstate_9; }
	inline void set_dstate_9(DeflateManager_t740995428 * value)
	{
		___dstate_9 = value;
		Il2CppCodeGenWriteBarrier((&___dstate_9), value);
	}

	inline static int32_t get_offset_of_istate_10() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___istate_10)); }
	inline InflateManager_t3407211616 * get_istate_10() const { return ___istate_10; }
	inline InflateManager_t3407211616 ** get_address_of_istate_10() { return &___istate_10; }
	inline void set_istate_10(InflateManager_t3407211616 * value)
	{
		___istate_10 = value;
		Il2CppCodeGenWriteBarrier((&___istate_10), value);
	}

	inline static int32_t get_offset_of__Adler32_11() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ____Adler32_11)); }
	inline uint32_t get__Adler32_11() const { return ____Adler32_11; }
	inline uint32_t* get_address_of__Adler32_11() { return &____Adler32_11; }
	inline void set__Adler32_11(uint32_t value)
	{
		____Adler32_11 = value;
	}

	inline static int32_t get_offset_of_CompressLevel_12() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___CompressLevel_12)); }
	inline int32_t get_CompressLevel_12() const { return ___CompressLevel_12; }
	inline int32_t* get_address_of_CompressLevel_12() { return &___CompressLevel_12; }
	inline void set_CompressLevel_12(int32_t value)
	{
		___CompressLevel_12 = value;
	}

	inline static int32_t get_offset_of_WindowBits_13() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___WindowBits_13)); }
	inline int32_t get_WindowBits_13() const { return ___WindowBits_13; }
	inline int32_t* get_address_of_WindowBits_13() { return &___WindowBits_13; }
	inline void set_WindowBits_13(int32_t value)
	{
		___WindowBits_13 = value;
	}

	inline static int32_t get_offset_of_Strategy_14() { return static_cast<int32_t>(offsetof(ZlibCodec_t3653667923, ___Strategy_14)); }
	inline int32_t get_Strategy_14() const { return ___Strategy_14; }
	inline int32_t* get_address_of_Strategy_14() { return &___Strategy_14; }
	inline void set_Strategy_14(int32_t value)
	{
		___Strategy_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBCODEC_T3653667923_H



extern "C" void Context_t1744531130_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Context_t1744531130_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Context_t1744531130_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Context_t1744531130_0_0_0;
extern "C" void Escape_t3294788190_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Escape_t3294788190_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Escape_t3294788190_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Escape_t3294788190_0_0_0;
extern "C" void PreviousInfo_t2148130204_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PreviousInfo_t2148130204_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PreviousInfo_t2148130204_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PreviousInfo_t2148130204_0_0_0;
extern "C" void UriScheme_t2867806342_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UriScheme_t2867806342_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UriScheme_t2867806342_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UriScheme_t2867806342_0_0_0;
extern "C" void DelegatePInvokeWrapper_AppDomainInitializer_t682969308();
extern const RuntimeType AppDomainInitializer_t682969308_0_0_0;
extern "C" void DelegatePInvokeWrapper_Swapper_t2822380397();
extern const RuntimeType Swapper_t2822380397_0_0_0;
extern "C" void DictionaryEntry_t3123975638_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DictionaryEntry_t3123975638_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DictionaryEntry_t3123975638_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DictionaryEntry_t3123975638_0_0_0;
extern "C" void Slot_t3975888750_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Slot_t3975888750_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Slot_t3975888750_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Slot_t3975888750_0_0_0;
extern "C" void Slot_t384495010_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Slot_t384495010_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Slot_t384495010_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Slot_t384495010_0_0_0;
extern "C" void DelegatePInvokeWrapper_InternalCancelHandler_t872516951();
extern const RuntimeType InternalCancelHandler_t872516951_0_0_0;
extern "C" void ConsoleKeyInfo_t1802691652_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ConsoleKeyInfo_t1802691652_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ConsoleKeyInfo_t1802691652_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ConsoleKeyInfo_t1802691652_0_0_0;
extern "C" void Enum_t4135868527_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Enum_t4135868527_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Enum_t4135868527_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Enum_t4135868527_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadDelegate_t714865915();
extern const RuntimeType ReadDelegate_t714865915_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteDelegate_t4270993571();
extern const RuntimeType WriteDelegate_t4270993571_0_0_0;
extern "C" void MonoIOStat_t592533987_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoIOStat_t592533987_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoIOStat_t592533987_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoIOStat_t592533987_0_0_0;
extern "C" void InputRecord_t2660212290_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputRecord_t2660212290_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputRecord_t2660212290_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputRecord_t2660212290_0_0_0;
extern "C" void MonoEnumInfo_t3694469084_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoEnumInfo_t3694469084_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoEnumInfo_t3694469084_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoEnumInfo_t3694469084_0_0_0;
extern "C" void CustomAttributeNamedArgument_t287865710_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeNamedArgument_t287865710_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeNamedArgument_t287865710_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeNamedArgument_t287865710_0_0_0;
extern "C" void CustomAttributeTypedArgument_t2723150157_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeTypedArgument_t2723150157_0_0_0;
extern "C" void ILTokenInfo_t2325775114_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ILTokenInfo_t2325775114_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ILTokenInfo_t2325775114_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ILTokenInfo_t2325775114_0_0_0;
extern "C" void MonoResource_t4103430009_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoResource_t4103430009_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoResource_t4103430009_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoResource_t4103430009_0_0_0;
extern "C" void MonoWin32Resource_t1904229483_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoWin32Resource_t1904229483_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoWin32Resource_t1904229483_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoWin32Resource_t1904229483_0_0_0;
extern "C" void RefEmitPermissionSet_t484390987_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RefEmitPermissionSet_t484390987_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RefEmitPermissionSet_t484390987_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RefEmitPermissionSet_t484390987_0_0_0;
extern "C" void MonoEventInfo_t346866618_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoEventInfo_t346866618_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoEventInfo_t346866618_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoEventInfo_t346866618_0_0_0;
extern "C" void MonoMethodInfo_t1248819020_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoMethodInfo_t1248819020_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoMethodInfo_t1248819020_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoMethodInfo_t1248819020_0_0_0;
extern "C" void MonoPropertyInfo_t3087356066_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoPropertyInfo_t3087356066_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoPropertyInfo_t3087356066_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoPropertyInfo_t3087356066_0_0_0;
extern "C" void ParameterModifier_t1461694466_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParameterModifier_t1461694466_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParameterModifier_t1461694466_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParameterModifier_t1461694466_0_0_0;
extern "C" void ResourceCacheItem_t51292791_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceCacheItem_t51292791_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceCacheItem_t51292791_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceCacheItem_t51292791_0_0_0;
extern "C" void ResourceInfo_t2872965302_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceInfo_t2872965302_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceInfo_t2872965302_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceInfo_t2872965302_0_0_0;
extern "C" void ProcessMessageRes_t3710547145_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ProcessMessageRes_t3710547145_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ProcessMessageRes_t3710547145_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ProcessMessageRes_t3710547145_0_0_0;
extern "C" void DelegatePInvokeWrapper_CrossContextDelegate_t387175271();
extern const RuntimeType CrossContextDelegate_t387175271_0_0_0;
extern "C" void DelegatePInvokeWrapper_CallbackHandler_t3280319253();
extern const RuntimeType CallbackHandler_t3280319253_0_0_0;
extern "C" void SerializationEntry_t648286436_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SerializationEntry_t648286436_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SerializationEntry_t648286436_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SerializationEntry_t648286436_0_0_0;
extern "C" void StreamingContext_t3711869237_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StreamingContext_t3711869237_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StreamingContext_t3711869237_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StreamingContext_t3711869237_0_0_0;
extern "C" void DSAParameters_t1885824122_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DSAParameters_t1885824122_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DSAParameters_t1885824122_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DSAParameters_t1885824122_0_0_0;
extern "C" void RSAParameters_t1728406613_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RSAParameters_t1728406613_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RSAParameters_t1728406613_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RSAParameters_t1728406613_0_0_0;
extern "C" void SNIP_t4156255223_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SNIP_t4156255223_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SNIP_t4156255223_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SNIP_t4156255223_0_0_0;
extern "C" void SecurityFrame_t1422462475_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SecurityFrame_t1422462475_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SecurityFrame_t1422462475_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SecurityFrame_t1422462475_0_0_0;
extern "C" void DelegatePInvokeWrapper_ThreadStart_t1006689297();
extern const RuntimeType ThreadStart_t1006689297_0_0_0;
extern "C" void ValueType_t3640485471_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ValueType_t3640485471_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ValueType_t3640485471_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ValueType_t3640485471_0_0_0;
extern "C" void DelegatePInvokeWrapper_AsyncReadHandler_t1188682440();
extern const RuntimeType AsyncReadHandler_t1188682440_0_0_0;
extern "C" void ProcInfo_t2917059746_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ProcInfo_t2917059746_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ProcInfo_t2917059746_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ProcInfo_t2917059746_0_0_0;
extern "C" void ProcessAsyncReader_t337580163_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ProcessAsyncReader_t337580163_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ProcessAsyncReader_t337580163_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ProcessAsyncReader_t337580163_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadMethod_t893206259();
extern const RuntimeType ReadMethod_t893206259_0_0_0;
extern "C" void DelegatePInvokeWrapper_UnmanagedReadOrWrite_t876388624();
extern const RuntimeType UnmanagedReadOrWrite_t876388624_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteMethod_t2538911768();
extern const RuntimeType WriteMethod_t2538911768_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadDelegate_t2469437439();
extern const RuntimeType ReadDelegate_t2469437439_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteDelegate_t1613340939();
extern const RuntimeType WriteDelegate_t1613340939_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadDelegate_t4266946825();
extern const RuntimeType ReadDelegate_t4266946825_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteDelegate_t2016697242();
extern const RuntimeType WriteDelegate_t2016697242_0_0_0;
extern "C" void DelegatePInvokeWrapper_SocketAsyncCall_t1521370843();
extern const RuntimeType SocketAsyncCall_t1521370843_0_0_0;
extern "C" void SocketAsyncResult_t2080034863_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SocketAsyncResult_t2080034863_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SocketAsyncResult_t2080034863_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SocketAsyncResult_t2080034863_0_0_0;
extern "C" void X509ChainStatus_t133602714_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void X509ChainStatus_t133602714_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void X509ChainStatus_t133602714_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType X509ChainStatus_t133602714_0_0_0;
extern "C" void IntStack_t2189327687_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IntStack_t2189327687_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IntStack_t2189327687_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IntStack_t2189327687_0_0_0;
extern "C" void Interval_t1802865632_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Interval_t1802865632_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Interval_t1802865632_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Interval_t1802865632_0_0_0;
extern "C" void DelegatePInvokeWrapper_CostDelegate_t1722821004();
extern const RuntimeType CostDelegate_t1722821004_0_0_0;
extern "C" void IntStack_t561212167_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IntStack_t561212167_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IntStack_t561212167_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IntStack_t561212167_0_0_0;
extern "C" void UriScheme_t722425697_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UriScheme_t722425697_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UriScheme_t722425697_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UriScheme_t722425697_0_0_0;
extern "C" void TagName_t2891256255_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TagName_t2891256255_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TagName_t2891256255_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TagName_t2891256255_0_0_0;
extern "C" void QNameValueType_t615604793_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void QNameValueType_t615604793_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void QNameValueType_t615604793_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType QNameValueType_t615604793_0_0_0;
extern "C" void StringArrayValueType_t3147326440_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StringArrayValueType_t3147326440_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StringArrayValueType_t3147326440_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StringArrayValueType_t3147326440_0_0_0;
extern "C" void StringValueType_t261329552_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StringValueType_t261329552_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StringValueType_t261329552_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StringValueType_t261329552_0_0_0;
extern "C" void UriValueType_t2866347695_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UriValueType_t2866347695_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UriValueType_t2866347695_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UriValueType_t2866347695_0_0_0;
extern "C" void NsDecl_t3938094415_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NsDecl_t3938094415_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NsDecl_t3938094415_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NsDecl_t3938094415_0_0_0;
extern "C" void NsScope_t3958624705_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NsScope_t3958624705_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NsScope_t3958624705_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NsScope_t3958624705_0_0_0;
extern "C" void DelegatePInvokeWrapper_CharGetter_t1703763694();
extern const RuntimeType CharGetter_t1703763694_0_0_0;
extern "C" void DelegatePInvokeWrapper_Action_t1264377477();
extern const RuntimeType Action_t1264377477_0_0_0;
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationCurve_t3046754366_0_0_0;
extern "C" void DelegatePInvokeWrapper_AdvertisingIdentifierCallback_t586914420();
extern const RuntimeType AdvertisingIdentifierCallback_t586914420_0_0_0;
extern "C" void DelegatePInvokeWrapper_LogCallback_t3588208630();
extern const RuntimeType LogCallback_t3588208630_0_0_0;
extern "C" void DelegatePInvokeWrapper_LowMemoryCallback_t4104246196();
extern const RuntimeType LowMemoryCallback_t4104246196_0_0_0;
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncOperation_t1445031843_0_0_0;
extern "C" void OrderBlock_t1585977831_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void OrderBlock_t1585977831_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void OrderBlock_t1585977831_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType OrderBlock_t1585977831_0_0_0;
extern "C" void Coroutine_t3829159415_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Coroutine_t3829159415_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Coroutine_t3829159415_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Coroutine_t3829159415_0_0_0;
extern "C" void CullingGroup_t2096318768_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CullingGroup_t2096318768_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CullingGroup_t2096318768_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CullingGroup_t2096318768_0_0_0;
extern "C" void DelegatePInvokeWrapper_StateChanged_t2136737110();
extern const RuntimeType StateChanged_t2136737110_0_0_0;
extern "C" void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t51287044();
extern const RuntimeType DisplaysUpdatedDelegate_t51287044_0_0_0;
extern "C" void DelegatePInvokeWrapper_UnityAction_t3245792599();
extern const RuntimeType UnityAction_t3245792599_0_0_0;
extern "C" void PlayerLoopSystem_t105772105_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayerLoopSystem_t105772105_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayerLoopSystem_t105772105_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayerLoopSystem_t105772105_0_0_0;
extern "C" void DelegatePInvokeWrapper_UpdateFunction_t377278577();
extern const RuntimeType UpdateFunction_t377278577_0_0_0;
extern "C" void PlayerLoopSystemInternal_t2185485283_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayerLoopSystemInternal_t2185485283_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayerLoopSystemInternal_t2185485283_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayerLoopSystemInternal_t2185485283_0_0_0;
extern "C" void SpriteBone_t303320096_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SpriteBone_t303320096_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SpriteBone_t303320096_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SpriteBone_t303320096_0_0_0;
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FailedToLoadScriptObject_t547604379_0_0_0;
extern "C" void Gradient_t3067099924_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Gradient_t3067099924_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Gradient_t3067099924_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Gradient_t3067099924_0_0_0;
extern "C" void Object_t631007953_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Object_t631007953_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Object_t631007953_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Object_t631007953_0_0_0;
extern "C" void PlayableBinding_t354260709_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayableBinding_t354260709_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayableBinding_t354260709_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayableBinding_t354260709_0_0_0;
extern "C" void DelegatePInvokeWrapper_CreateOutputMethod_t2301811773();
extern const RuntimeType CreateOutputMethod_t2301811773_0_0_0;
extern "C" void RectOffset_t1369453676_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RectOffset_t1369453676_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RectOffset_t1369453676_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RectOffset_t1369453676_0_0_0;
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceRequest_t3109103591_0_0_0;
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ScriptableObject_t2528358522_0_0_0;
extern "C" void HitInfo_t3229609740_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HitInfo_t3229609740_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HitInfo_t3229609740_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HitInfo_t3229609740_0_0_0;
extern "C" void TrackedReference_t1199777556_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TrackedReference_t1199777556_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TrackedReference_t1199777556_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TrackedReference_t1199777556_0_0_0;
extern "C" void DelegatePInvokeWrapper_RequestAtlasCallback_t3100554279();
extern const RuntimeType RequestAtlasCallback_t3100554279_0_0_0;
extern "C" void WorkRequest_t1354518612_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WorkRequest_t1354518612_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WorkRequest_t1354518612_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WorkRequest_t1354518612_0_0_0;
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WaitForSeconds_t1699091251_0_0_0;
extern "C" void YieldInstruction_t403091072_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void YieldInstruction_t403091072_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void YieldInstruction_t403091072_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType YieldInstruction_t403091072_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMReaderCallback_t1677636661();
extern const RuntimeType PCMReaderCallback_t1677636661_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMSetPositionCallback_t1059417452();
extern const RuntimeType PCMSetPositionCallback_t1059417452_0_0_0;
extern "C" void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t2089929874();
extern const RuntimeType AudioConfigurationChangeHandler_t2089929874_0_0_0;
extern "C" void DelegatePInvokeWrapper_ConsumeSampleFramesNativeFunction_t1497769677();
extern const RuntimeType ConsumeSampleFramesNativeFunction_t1497769677_0_0_0;
extern "C" void Collision2D_t2842956331_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision2D_t2842956331_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision2D_t2842956331_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision2D_t2842956331_0_0_0;
extern "C" void ContactFilter2D_t3805203441_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ContactFilter2D_t3805203441_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ContactFilter2D_t3805203441_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ContactFilter2D_t3805203441_0_0_0;
extern "C" void DelegatePInvokeWrapper_FontTextureRebuildCallback_t2467502454();
extern const RuntimeType FontTextureRebuildCallback_t2467502454_0_0_0;
extern "C" void TextGenerationSettings_t1351628751_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextGenerationSettings_t1351628751_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextGenerationSettings_t1351628751_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextGenerationSettings_t1351628751_0_0_0;
extern "C" void TextGenerator_t3211863866_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextGenerator_t3211863866_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextGenerator_t3211863866_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextGenerator_t3211863866_0_0_0;
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CertificateHandler_t2739891000_0_0_0;
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DownloadHandler_t2937767557_0_0_0;
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DownloadHandlerBuffer_t2928496527_0_0_0;
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UnityWebRequest_t463507806_0_0_0;
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UnityWebRequestAsyncOperation_t3852015985_0_0_0;
extern "C" void UploadHandler_t2993558019_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UploadHandler_t2993558019_0_0_0;
extern "C" void UploadHandlerRaw_t25761545_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UploadHandlerRaw_t25761545_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UploadHandlerRaw_t25761545_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UploadHandlerRaw_t25761545_0_0_0;
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationEvent_t1536042487_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t1307045488();
extern const RuntimeType OnOverrideControllerDirtyCallback_t1307045488_0_0_0;
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimatorTransitionInfo_t2534804151_0_0_0;
extern "C" void HumanBone_t2465339518_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HumanBone_t2465339518_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HumanBone_t2465339518_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HumanBone_t2465339518_0_0_0;
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SkeletonBone_t4134054672_0_0_0;
extern "C" void GcAchievementData_t675222246_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcAchievementData_t675222246_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcAchievementData_t675222246_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcAchievementData_t675222246_0_0_0;
extern "C" void GcAchievementDescriptionData_t643925653_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcAchievementDescriptionData_t643925653_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcAchievementDescriptionData_t643925653_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcAchievementDescriptionData_t643925653_0_0_0;
extern "C" void GcLeaderboard_t4132273028_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcLeaderboard_t4132273028_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcLeaderboard_t4132273028_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcLeaderboard_t4132273028_0_0_0;
extern "C" void GcScoreData_t2125309831_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcScoreData_t2125309831_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcScoreData_t2125309831_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcScoreData_t2125309831_0_0_0;
extern "C" void GcUserProfileData_t2719720026_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcUserProfileData_t2719720026_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcUserProfileData_t2719720026_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcUserProfileData_t2719720026_0_0_0;
extern "C" void Event_t2956885303_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Event_t2956885303_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Event_t2956885303_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Event_t2956885303_0_0_0;
extern "C" void DelegatePInvokeWrapper_WindowFunction_t3146511083();
extern const RuntimeType WindowFunction_t3146511083_0_0_0;
extern "C" void GUIContent_t3050628031_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIContent_t3050628031_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIContent_t3050628031_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIContent_t3050628031_0_0_0;
extern "C" void DelegatePInvokeWrapper_SkinChangedDelegate_t1143955295();
extern const RuntimeType SkinChangedDelegate_t1143955295_0_0_0;
extern "C" void GUIStyle_t3956901511_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyle_t3956901511_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyle_t3956901511_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyle_t3956901511_0_0_0;
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyleState_t1397964415_0_0_0;
extern "C" void TileAnimationData_t649120048_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TileAnimationData_t649120048_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TileAnimationData_t649120048_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TileAnimationData_t649120048_0_0_0;
extern "C" void TileData_t2042394239_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TileData_t2042394239_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TileData_t2042394239_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TileData_t2042394239_0_0_0;
extern "C" void DelegatePInvokeWrapper_WillRenderCanvases_t3309123499();
extern const RuntimeType WillRenderCanvases_t3309123499_0_0_0;
extern "C" void DelegatePInvokeWrapper_SessionStateChanged_t3163629820();
extern const RuntimeType SessionStateChanged_t3163629820_0_0_0;
extern "C" void RemoteConfigSettings_t1247263429_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RemoteConfigSettings_t1247263429_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RemoteConfigSettings_t1247263429_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RemoteConfigSettings_t1247263429_0_0_0;
extern "C" void DelegatePInvokeWrapper_UpdatedEventHandler_t1027848393();
extern const RuntimeType UpdatedEventHandler_t1027848393_0_0_0;
extern "C" void ColumnInfo_t2218992045_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ColumnInfo_t2218992045_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ColumnInfo_t2218992045_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ColumnInfo_t2218992045_0_0_0;
extern "C" void SqlBinary_t4132310562_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlBinary_t4132310562_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlBinary_t4132310562_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlBinary_t4132310562_0_0_0;
extern "C" void SqlBoolean_t2781748253_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlBoolean_t2781748253_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlBoolean_t2781748253_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlBoolean_t2781748253_0_0_0;
extern "C" void SqlByte_t2260568341_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlByte_t2260568341_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlByte_t2260568341_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlByte_t2260568341_0_0_0;
extern "C" void SqlDateTime_t2414066866_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlDateTime_t2414066866_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlDateTime_t2414066866_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlDateTime_t2414066866_0_0_0;
extern "C" void SqlDecimal_t1096635589_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlDecimal_t1096635589_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlDecimal_t1096635589_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlDecimal_t1096635589_0_0_0;
extern "C" void SqlDouble_t1075477787_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlDouble_t1075477787_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlDouble_t1075477787_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlDouble_t1075477787_0_0_0;
extern "C" void SqlGuid_t1775442377_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlGuid_t1775442377_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlGuid_t1775442377_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlGuid_t1775442377_0_0_0;
extern "C" void SqlInt16_t1815218091_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlInt16_t1815218091_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlInt16_t1815218091_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlInt16_t1815218091_0_0_0;
extern "C" void SqlInt32_t2197555111_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlInt32_t2197555111_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlInt32_t2197555111_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlInt32_t2197555111_0_0_0;
extern "C" void SqlInt64_t3771533229_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlInt64_t3771533229_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlInt64_t3771533229_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlInt64_t3771533229_0_0_0;
extern "C" void SqlMoney_t3362852048_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlMoney_t3362852048_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlMoney_t3362852048_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlMoney_t3362852048_0_0_0;
extern "C" void SqlSingle_t3751283737_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlSingle_t3751283737_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlSingle_t3751283737_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlSingle_t3751283737_0_0_0;
extern "C" void SqlString_t3442887463_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SqlString_t3442887463_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SqlString_t3442887463_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SqlString_t3442887463_0_0_0;
extern "C" void DelegatePInvokeWrapper_SQLiteCallback_t1634814860();
extern const RuntimeType SQLiteCallback_t1634814860_0_0_0;
extern "C" void DelegatePInvokeWrapper_SQLiteCollation_t2922389035();
extern const RuntimeType SQLiteCollation_t2922389035_0_0_0;
extern "C" void DelegatePInvokeWrapper_SQLiteCommitCallback_t583925460();
extern const RuntimeType SQLiteCommitCallback_t583925460_0_0_0;
extern "C" void DelegatePInvokeWrapper_SQLiteFinalCallback_t3927043577();
extern const RuntimeType SQLiteFinalCallback_t3927043577_0_0_0;
extern "C" void DelegatePInvokeWrapper_SQLiteRollbackCallback_t3445264418();
extern const RuntimeType SQLiteRollbackCallback_t3445264418_0_0_0;
extern "C" void SQLiteTypeNames_t2304190112_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SQLiteTypeNames_t2304190112_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SQLiteTypeNames_t2304190112_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SQLiteTypeNames_t2304190112_0_0_0;
extern "C" void DelegatePInvokeWrapper_SQLiteUpdateCallback_t3929343441();
extern const RuntimeType SQLiteUpdateCallback_t3929343441_0_0_0;
extern "C" void KeyInfo_t3680340371_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void KeyInfo_t3680340371_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void KeyInfo_t3680340371_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType KeyInfo_t3680340371_0_0_0;
extern "C" void RaycastResult_t3360306849_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastResult_t3360306849_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastResult_t3360306849_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastResult_t3360306849_0_0_0;
extern "C" void ColorTween_t809614380_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ColorTween_t809614380_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ColorTween_t809614380_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ColorTween_t809614380_0_0_0;
extern "C" void FloatTween_t1274330004_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FloatTween_t1274330004_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FloatTween_t1274330004_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FloatTween_t1274330004_0_0_0;
extern "C" void Resources_t1597885468_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Resources_t1597885468_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Resources_t1597885468_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Resources_t1597885468_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnValidateInput_t2355412304();
extern const RuntimeType OnValidateInput_t2355412304_0_0_0;
extern "C" void Navigation_t3049316579_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Navigation_t3049316579_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Navigation_t3049316579_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Navigation_t3049316579_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t3913627115();
extern const RuntimeType GetRayIntersectionAllCallback_t3913627115_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t2311174851();
extern const RuntimeType GetRayIntersectionAllNonAllocCallback_t2311174851_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetRaycastNonAllocCallback_t3841783507();
extern const RuntimeType GetRaycastNonAllocCallback_t3841783507_0_0_0;
extern "C" void DelegatePInvokeWrapper_Raycast2DCallback_t768590915();
extern const RuntimeType Raycast2DCallback_t768590915_0_0_0;
extern "C" void DelegatePInvokeWrapper_Raycast3DCallback_t701940803();
extern const RuntimeType Raycast3DCallback_t701940803_0_0_0;
extern "C" void DelegatePInvokeWrapper_RaycastAllCallback_t1884415901();
extern const RuntimeType RaycastAllCallback_t1884415901_0_0_0;
extern "C" void SpriteState_t1362986479_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SpriteState_t1362986479_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SpriteState_t1362986479_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SpriteState_t1362986479_0_0_0;
extern "C" void DelegatePInvokeWrapper_CompressFunc_t3594827279();
extern const RuntimeType CompressFunc_t3594827279_0_0_0;
extern "C" void DelegatePInvokeWrapper_DisplayAuthenticationEvent_t945238739();
extern const RuntimeType DisplayAuthenticationEvent_t945238739_0_0_0;
extern const RuntimeType CRC32_t2128839853_0_0_0;
extern const RuntimeType ZlibCodec_t3653667923_0_0_0;
extern const RuntimeType ZlibException_t2135990123_0_0_0;
extern Il2CppInteropData g_Il2CppInteropData[175] = 
{
	{ NULL, Context_t1744531130_marshal_pinvoke, Context_t1744531130_marshal_pinvoke_back, Context_t1744531130_marshal_pinvoke_cleanup, NULL, NULL, &Context_t1744531130_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Context */,
	{ NULL, Escape_t3294788190_marshal_pinvoke, Escape_t3294788190_marshal_pinvoke_back, Escape_t3294788190_marshal_pinvoke_cleanup, NULL, NULL, &Escape_t3294788190_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, PreviousInfo_t2148130204_marshal_pinvoke, PreviousInfo_t2148130204_marshal_pinvoke_back, PreviousInfo_t2148130204_marshal_pinvoke_cleanup, NULL, NULL, &PreviousInfo_t2148130204_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/PreviousInfo */,
	{ NULL, UriScheme_t2867806342_marshal_pinvoke, UriScheme_t2867806342_marshal_pinvoke_back, UriScheme_t2867806342_marshal_pinvoke_cleanup, NULL, NULL, &UriScheme_t2867806342_0_0_0 } /* Mono.Security.Uri/UriScheme */,
	{ DelegatePInvokeWrapper_AppDomainInitializer_t682969308, NULL, NULL, NULL, NULL, NULL, &AppDomainInitializer_t682969308_0_0_0 } /* System.AppDomainInitializer */,
	{ DelegatePInvokeWrapper_Swapper_t2822380397, NULL, NULL, NULL, NULL, NULL, &Swapper_t2822380397_0_0_0 } /* System.Array/Swapper */,
	{ NULL, DictionaryEntry_t3123975638_marshal_pinvoke, DictionaryEntry_t3123975638_marshal_pinvoke_back, DictionaryEntry_t3123975638_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_t3123975638_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, Slot_t3975888750_marshal_pinvoke, Slot_t3975888750_marshal_pinvoke_back, Slot_t3975888750_marshal_pinvoke_cleanup, NULL, NULL, &Slot_t3975888750_0_0_0 } /* System.Collections.Hashtable/Slot */,
	{ NULL, Slot_t384495010_marshal_pinvoke, Slot_t384495010_marshal_pinvoke_back, Slot_t384495010_marshal_pinvoke_cleanup, NULL, NULL, &Slot_t384495010_0_0_0 } /* System.Collections.SortedList/Slot */,
	{ DelegatePInvokeWrapper_InternalCancelHandler_t872516951, NULL, NULL, NULL, NULL, NULL, &InternalCancelHandler_t872516951_0_0_0 } /* System.Console/InternalCancelHandler */,
	{ NULL, ConsoleKeyInfo_t1802691652_marshal_pinvoke, ConsoleKeyInfo_t1802691652_marshal_pinvoke_back, ConsoleKeyInfo_t1802691652_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleKeyInfo_t1802691652_0_0_0 } /* System.ConsoleKeyInfo */,
	{ NULL, Enum_t4135868527_marshal_pinvoke, Enum_t4135868527_marshal_pinvoke_back, Enum_t4135868527_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t4135868527_0_0_0 } /* System.Enum */,
	{ DelegatePInvokeWrapper_ReadDelegate_t714865915, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_t714865915_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t4270993571, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t4270993571_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ NULL, MonoIOStat_t592533987_marshal_pinvoke, MonoIOStat_t592533987_marshal_pinvoke_back, MonoIOStat_t592533987_marshal_pinvoke_cleanup, NULL, NULL, &MonoIOStat_t592533987_0_0_0 } /* System.IO.MonoIOStat */,
	{ NULL, InputRecord_t2660212290_marshal_pinvoke, InputRecord_t2660212290_marshal_pinvoke_back, InputRecord_t2660212290_marshal_pinvoke_cleanup, NULL, NULL, &InputRecord_t2660212290_0_0_0 } /* System.InputRecord */,
	{ NULL, MonoEnumInfo_t3694469084_marshal_pinvoke, MonoEnumInfo_t3694469084_marshal_pinvoke_back, MonoEnumInfo_t3694469084_marshal_pinvoke_cleanup, NULL, NULL, &MonoEnumInfo_t3694469084_0_0_0 } /* System.MonoEnumInfo */,
	{ NULL, CustomAttributeNamedArgument_t287865710_marshal_pinvoke, CustomAttributeNamedArgument_t287865710_marshal_pinvoke_back, CustomAttributeNamedArgument_t287865710_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t287865710_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_t2723150157_marshal_pinvoke, CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_back, CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_t2723150157_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, ILTokenInfo_t2325775114_marshal_pinvoke, ILTokenInfo_t2325775114_marshal_pinvoke_back, ILTokenInfo_t2325775114_marshal_pinvoke_cleanup, NULL, NULL, &ILTokenInfo_t2325775114_0_0_0 } /* System.Reflection.Emit.ILTokenInfo */,
	{ NULL, MonoResource_t4103430009_marshal_pinvoke, MonoResource_t4103430009_marshal_pinvoke_back, MonoResource_t4103430009_marshal_pinvoke_cleanup, NULL, NULL, &MonoResource_t4103430009_0_0_0 } /* System.Reflection.Emit.MonoResource */,
	{ NULL, MonoWin32Resource_t1904229483_marshal_pinvoke, MonoWin32Resource_t1904229483_marshal_pinvoke_back, MonoWin32Resource_t1904229483_marshal_pinvoke_cleanup, NULL, NULL, &MonoWin32Resource_t1904229483_0_0_0 } /* System.Reflection.Emit.MonoWin32Resource */,
	{ NULL, RefEmitPermissionSet_t484390987_marshal_pinvoke, RefEmitPermissionSet_t484390987_marshal_pinvoke_back, RefEmitPermissionSet_t484390987_marshal_pinvoke_cleanup, NULL, NULL, &RefEmitPermissionSet_t484390987_0_0_0 } /* System.Reflection.Emit.RefEmitPermissionSet */,
	{ NULL, MonoEventInfo_t346866618_marshal_pinvoke, MonoEventInfo_t346866618_marshal_pinvoke_back, MonoEventInfo_t346866618_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_t346866618_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_t1248819020_marshal_pinvoke, MonoMethodInfo_t1248819020_marshal_pinvoke_back, MonoMethodInfo_t1248819020_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t1248819020_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoPropertyInfo_t3087356066_marshal_pinvoke, MonoPropertyInfo_t3087356066_marshal_pinvoke_back, MonoPropertyInfo_t3087356066_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_t3087356066_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, ParameterModifier_t1461694466_marshal_pinvoke, ParameterModifier_t1461694466_marshal_pinvoke_back, ParameterModifier_t1461694466_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t1461694466_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ResourceCacheItem_t51292791_marshal_pinvoke, ResourceCacheItem_t51292791_marshal_pinvoke_back, ResourceCacheItem_t51292791_marshal_pinvoke_cleanup, NULL, NULL, &ResourceCacheItem_t51292791_0_0_0 } /* System.Resources.ResourceReader/ResourceCacheItem */,
	{ NULL, ResourceInfo_t2872965302_marshal_pinvoke, ResourceInfo_t2872965302_marshal_pinvoke_back, ResourceInfo_t2872965302_marshal_pinvoke_cleanup, NULL, NULL, &ResourceInfo_t2872965302_0_0_0 } /* System.Resources.ResourceReader/ResourceInfo */,
	{ NULL, ProcessMessageRes_t3710547145_marshal_pinvoke, ProcessMessageRes_t3710547145_marshal_pinvoke_back, ProcessMessageRes_t3710547145_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_t3710547145_0_0_0 } /* System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_t387175271, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_t387175271_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ DelegatePInvokeWrapper_CallbackHandler_t3280319253, NULL, NULL, NULL, NULL, NULL, &CallbackHandler_t3280319253_0_0_0 } /* System.Runtime.Serialization.SerializationCallbacks/CallbackHandler */,
	{ NULL, SerializationEntry_t648286436_marshal_pinvoke, SerializationEntry_t648286436_marshal_pinvoke_back, SerializationEntry_t648286436_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_t648286436_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ NULL, StreamingContext_t3711869237_marshal_pinvoke, StreamingContext_t3711869237_marshal_pinvoke_back, StreamingContext_t3711869237_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t3711869237_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, DSAParameters_t1885824122_marshal_pinvoke, DSAParameters_t1885824122_marshal_pinvoke_back, DSAParameters_t1885824122_marshal_pinvoke_cleanup, NULL, NULL, &DSAParameters_t1885824122_0_0_0 } /* System.Security.Cryptography.DSAParameters */,
	{ NULL, RSAParameters_t1728406613_marshal_pinvoke, RSAParameters_t1728406613_marshal_pinvoke_back, RSAParameters_t1728406613_marshal_pinvoke_cleanup, NULL, NULL, &RSAParameters_t1728406613_0_0_0 } /* System.Security.Cryptography.RSAParameters */,
	{ NULL, SNIP_t4156255223_marshal_pinvoke, SNIP_t4156255223_marshal_pinvoke_back, SNIP_t4156255223_marshal_pinvoke_cleanup, NULL, NULL, &SNIP_t4156255223_0_0_0 } /* System.Security.Permissions.StrongNameIdentityPermission/SNIP */,
	{ NULL, SecurityFrame_t1422462475_marshal_pinvoke, SecurityFrame_t1422462475_marshal_pinvoke_back, SecurityFrame_t1422462475_marshal_pinvoke_cleanup, NULL, NULL, &SecurityFrame_t1422462475_0_0_0 } /* System.Security.SecurityFrame */,
	{ DelegatePInvokeWrapper_ThreadStart_t1006689297, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t1006689297_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, ValueType_t3640485471_marshal_pinvoke, ValueType_t3640485471_marshal_pinvoke_back, ValueType_t3640485471_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t3640485471_0_0_0 } /* System.ValueType */,
	{ DelegatePInvokeWrapper_AsyncReadHandler_t1188682440, NULL, NULL, NULL, NULL, NULL, &AsyncReadHandler_t1188682440_0_0_0 } /* System.Diagnostics.Process/AsyncReadHandler */,
	{ NULL, ProcInfo_t2917059746_marshal_pinvoke, ProcInfo_t2917059746_marshal_pinvoke_back, ProcInfo_t2917059746_marshal_pinvoke_cleanup, NULL, NULL, &ProcInfo_t2917059746_0_0_0 } /* System.Diagnostics.Process/ProcInfo */,
	{ NULL, ProcessAsyncReader_t337580163_marshal_pinvoke, ProcessAsyncReader_t337580163_marshal_pinvoke_back, ProcessAsyncReader_t337580163_marshal_pinvoke_cleanup, NULL, NULL, &ProcessAsyncReader_t337580163_0_0_0 } /* System.Diagnostics.Process/ProcessAsyncReader */,
	{ DelegatePInvokeWrapper_ReadMethod_t893206259, NULL, NULL, NULL, NULL, NULL, &ReadMethod_t893206259_0_0_0 } /* System.IO.Compression.DeflateStream/ReadMethod */,
	{ DelegatePInvokeWrapper_UnmanagedReadOrWrite_t876388624, NULL, NULL, NULL, NULL, NULL, &UnmanagedReadOrWrite_t876388624_0_0_0 } /* System.IO.Compression.DeflateStream/UnmanagedReadOrWrite */,
	{ DelegatePInvokeWrapper_WriteMethod_t2538911768, NULL, NULL, NULL, NULL, NULL, &WriteMethod_t2538911768_0_0_0 } /* System.IO.Compression.DeflateStream/WriteMethod */,
	{ DelegatePInvokeWrapper_ReadDelegate_t2469437439, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_t2469437439_0_0_0 } /* System.IO.MonoSyncFileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t1613340939, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t1613340939_0_0_0 } /* System.IO.MonoSyncFileStream/WriteDelegate */,
	{ DelegatePInvokeWrapper_ReadDelegate_t4266946825, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_t4266946825_0_0_0 } /* System.Net.FtpDataStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t2016697242, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t2016697242_0_0_0 } /* System.Net.FtpDataStream/WriteDelegate */,
	{ DelegatePInvokeWrapper_SocketAsyncCall_t1521370843, NULL, NULL, NULL, NULL, NULL, &SocketAsyncCall_t1521370843_0_0_0 } /* System.Net.Sockets.Socket/SocketAsyncCall */,
	{ NULL, SocketAsyncResult_t2080034863_marshal_pinvoke, SocketAsyncResult_t2080034863_marshal_pinvoke_back, SocketAsyncResult_t2080034863_marshal_pinvoke_cleanup, NULL, NULL, &SocketAsyncResult_t2080034863_0_0_0 } /* System.Net.Sockets.Socket/SocketAsyncResult */,
	{ NULL, X509ChainStatus_t133602714_marshal_pinvoke, X509ChainStatus_t133602714_marshal_pinvoke_back, X509ChainStatus_t133602714_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_t133602714_0_0_0 } /* System.Security.Cryptography.X509Certificates.X509ChainStatus */,
	{ NULL, IntStack_t2189327687_marshal_pinvoke, IntStack_t2189327687_marshal_pinvoke_back, IntStack_t2189327687_marshal_pinvoke_cleanup, NULL, NULL, &IntStack_t2189327687_0_0_0 } /* System.Text.RegularExpressions.Interpreter/IntStack */,
	{ NULL, Interval_t1802865632_marshal_pinvoke, Interval_t1802865632_marshal_pinvoke_back, Interval_t1802865632_marshal_pinvoke_cleanup, NULL, NULL, &Interval_t1802865632_0_0_0 } /* System.Text.RegularExpressions.Interval */,
	{ DelegatePInvokeWrapper_CostDelegate_t1722821004, NULL, NULL, NULL, NULL, NULL, &CostDelegate_t1722821004_0_0_0 } /* System.Text.RegularExpressions.IntervalCollection/CostDelegate */,
	{ NULL, IntStack_t561212167_marshal_pinvoke, IntStack_t561212167_marshal_pinvoke_back, IntStack_t561212167_marshal_pinvoke_cleanup, NULL, NULL, &IntStack_t561212167_0_0_0 } /* System.Text.RegularExpressions.RxInterpreter/IntStack */,
	{ NULL, UriScheme_t722425697_marshal_pinvoke, UriScheme_t722425697_marshal_pinvoke_back, UriScheme_t722425697_marshal_pinvoke_cleanup, NULL, NULL, &UriScheme_t722425697_0_0_0 } /* System.Uri/UriScheme */,
	{ NULL, TagName_t2891256255_marshal_pinvoke, TagName_t2891256255_marshal_pinvoke_back, TagName_t2891256255_marshal_pinvoke_cleanup, NULL, NULL, &TagName_t2891256255_0_0_0 } /* Mono.Xml2.XmlTextReader/TagName */,
	{ NULL, QNameValueType_t615604793_marshal_pinvoke, QNameValueType_t615604793_marshal_pinvoke_back, QNameValueType_t615604793_marshal_pinvoke_cleanup, NULL, NULL, &QNameValueType_t615604793_0_0_0 } /* System.Xml.Schema.QNameValueType */,
	{ NULL, StringArrayValueType_t3147326440_marshal_pinvoke, StringArrayValueType_t3147326440_marshal_pinvoke_back, StringArrayValueType_t3147326440_marshal_pinvoke_cleanup, NULL, NULL, &StringArrayValueType_t3147326440_0_0_0 } /* System.Xml.Schema.StringArrayValueType */,
	{ NULL, StringValueType_t261329552_marshal_pinvoke, StringValueType_t261329552_marshal_pinvoke_back, StringValueType_t261329552_marshal_pinvoke_cleanup, NULL, NULL, &StringValueType_t261329552_0_0_0 } /* System.Xml.Schema.StringValueType */,
	{ NULL, UriValueType_t2866347695_marshal_pinvoke, UriValueType_t2866347695_marshal_pinvoke_back, UriValueType_t2866347695_marshal_pinvoke_cleanup, NULL, NULL, &UriValueType_t2866347695_0_0_0 } /* System.Xml.Schema.UriValueType */,
	{ NULL, NsDecl_t3938094415_marshal_pinvoke, NsDecl_t3938094415_marshal_pinvoke_back, NsDecl_t3938094415_marshal_pinvoke_cleanup, NULL, NULL, &NsDecl_t3938094415_0_0_0 } /* System.Xml.XmlNamespaceManager/NsDecl */,
	{ NULL, NsScope_t3958624705_marshal_pinvoke, NsScope_t3958624705_marshal_pinvoke_back, NsScope_t3958624705_marshal_pinvoke_cleanup, NULL, NULL, &NsScope_t3958624705_0_0_0 } /* System.Xml.XmlNamespaceManager/NsScope */,
	{ DelegatePInvokeWrapper_CharGetter_t1703763694, NULL, NULL, NULL, NULL, NULL, &CharGetter_t1703763694_0_0_0 } /* System.Xml.XmlReaderBinarySupport/CharGetter */,
	{ DelegatePInvokeWrapper_Action_t1264377477, NULL, NULL, NULL, NULL, NULL, &Action_t1264377477_0_0_0 } /* System.Action */,
	{ NULL, AnimationCurve_t3046754366_marshal_pinvoke, AnimationCurve_t3046754366_marshal_pinvoke_back, AnimationCurve_t3046754366_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_t3046754366_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ DelegatePInvokeWrapper_AdvertisingIdentifierCallback_t586914420, NULL, NULL, NULL, NULL, NULL, &AdvertisingIdentifierCallback_t586914420_0_0_0 } /* UnityEngine.Application/AdvertisingIdentifierCallback */,
	{ DelegatePInvokeWrapper_LogCallback_t3588208630, NULL, NULL, NULL, NULL, NULL, &LogCallback_t3588208630_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_t4104246196, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_t4104246196_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, AsyncOperation_t1445031843_marshal_pinvoke, AsyncOperation_t1445031843_marshal_pinvoke_back, AsyncOperation_t1445031843_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_t1445031843_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, OrderBlock_t1585977831_marshal_pinvoke, OrderBlock_t1585977831_marshal_pinvoke_back, OrderBlock_t1585977831_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t1585977831_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ NULL, Coroutine_t3829159415_marshal_pinvoke, Coroutine_t3829159415_marshal_pinvoke_back, Coroutine_t3829159415_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_t3829159415_0_0_0 } /* UnityEngine.Coroutine */,
	{ NULL, CullingGroup_t2096318768_marshal_pinvoke, CullingGroup_t2096318768_marshal_pinvoke_back, CullingGroup_t2096318768_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t2096318768_0_0_0 } /* UnityEngine.CullingGroup */,
	{ DelegatePInvokeWrapper_StateChanged_t2136737110, NULL, NULL, NULL, NULL, NULL, &StateChanged_t2136737110_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t51287044, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t51287044_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ DelegatePInvokeWrapper_UnityAction_t3245792599, NULL, NULL, NULL, NULL, NULL, &UnityAction_t3245792599_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, PlayerLoopSystem_t105772105_marshal_pinvoke, PlayerLoopSystem_t105772105_marshal_pinvoke_back, PlayerLoopSystem_t105772105_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystem_t105772105_0_0_0 } /* UnityEngine.Experimental.LowLevel.PlayerLoopSystem */,
	{ DelegatePInvokeWrapper_UpdateFunction_t377278577, NULL, NULL, NULL, NULL, NULL, &UpdateFunction_t377278577_0_0_0 } /* UnityEngine.Experimental.LowLevel.PlayerLoopSystem/UpdateFunction */,
	{ NULL, PlayerLoopSystemInternal_t2185485283_marshal_pinvoke, PlayerLoopSystemInternal_t2185485283_marshal_pinvoke_back, PlayerLoopSystemInternal_t2185485283_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystemInternal_t2185485283_0_0_0 } /* UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal */,
	{ NULL, SpriteBone_t303320096_marshal_pinvoke, SpriteBone_t303320096_marshal_pinvoke_back, SpriteBone_t303320096_marshal_pinvoke_cleanup, NULL, NULL, &SpriteBone_t303320096_0_0_0 } /* UnityEngine.Experimental.U2D.SpriteBone */,
	{ NULL, FailedToLoadScriptObject_t547604379_marshal_pinvoke, FailedToLoadScriptObject_t547604379_marshal_pinvoke_back, FailedToLoadScriptObject_t547604379_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_t547604379_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, Gradient_t3067099924_marshal_pinvoke, Gradient_t3067099924_marshal_pinvoke_back, Gradient_t3067099924_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_t3067099924_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, Object_t631007953_marshal_pinvoke, Object_t631007953_marshal_pinvoke_back, Object_t631007953_marshal_pinvoke_cleanup, NULL, NULL, &Object_t631007953_0_0_0 } /* UnityEngine.Object */,
	{ NULL, PlayableBinding_t354260709_marshal_pinvoke, PlayableBinding_t354260709_marshal_pinvoke_back, PlayableBinding_t354260709_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_t354260709_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ DelegatePInvokeWrapper_CreateOutputMethod_t2301811773, NULL, NULL, NULL, NULL, NULL, &CreateOutputMethod_t2301811773_0_0_0 } /* UnityEngine.Playables.PlayableBinding/CreateOutputMethod */,
	{ NULL, RectOffset_t1369453676_marshal_pinvoke, RectOffset_t1369453676_marshal_pinvoke_back, RectOffset_t1369453676_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_t1369453676_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, ResourceRequest_t3109103591_marshal_pinvoke, ResourceRequest_t3109103591_marshal_pinvoke_back, ResourceRequest_t3109103591_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_t3109103591_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, ScriptableObject_t2528358522_marshal_pinvoke, ScriptableObject_t2528358522_marshal_pinvoke_back, ScriptableObject_t2528358522_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_t2528358522_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, HitInfo_t3229609740_marshal_pinvoke, HitInfo_t3229609740_marshal_pinvoke_back, HitInfo_t3229609740_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t3229609740_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, TrackedReference_t1199777556_marshal_pinvoke, TrackedReference_t1199777556_marshal_pinvoke_back, TrackedReference_t1199777556_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_t1199777556_0_0_0 } /* UnityEngine.TrackedReference */,
	{ DelegatePInvokeWrapper_RequestAtlasCallback_t3100554279, NULL, NULL, NULL, NULL, NULL, &RequestAtlasCallback_t3100554279_0_0_0 } /* UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback */,
	{ NULL, WorkRequest_t1354518612_marshal_pinvoke, WorkRequest_t1354518612_marshal_pinvoke_back, WorkRequest_t1354518612_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t1354518612_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, WaitForSeconds_t1699091251_marshal_pinvoke, WaitForSeconds_t1699091251_marshal_pinvoke_back, WaitForSeconds_t1699091251_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_t1699091251_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, YieldInstruction_t403091072_marshal_pinvoke, YieldInstruction_t403091072_marshal_pinvoke_back, YieldInstruction_t403091072_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_t403091072_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t1677636661, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t1677636661_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t1059417452, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t1059417452_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t2089929874, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_t2089929874_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ DelegatePInvokeWrapper_ConsumeSampleFramesNativeFunction_t1497769677, NULL, NULL, NULL, NULL, NULL, &ConsumeSampleFramesNativeFunction_t1497769677_0_0_0 } /* UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction */,
	{ NULL, Collision2D_t2842956331_marshal_pinvoke, Collision2D_t2842956331_marshal_pinvoke_back, Collision2D_t2842956331_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t2842956331_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ContactFilter2D_t3805203441_marshal_pinvoke, ContactFilter2D_t3805203441_marshal_pinvoke_back, ContactFilter2D_t3805203441_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t3805203441_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_t2467502454, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_t2467502454_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ NULL, TextGenerationSettings_t1351628751_marshal_pinvoke, TextGenerationSettings_t1351628751_marshal_pinvoke_back, TextGenerationSettings_t1351628751_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_t1351628751_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_t3211863866_marshal_pinvoke, TextGenerator_t3211863866_marshal_pinvoke_back, TextGenerator_t3211863866_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_t3211863866_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, CertificateHandler_t2739891000_marshal_pinvoke, CertificateHandler_t2739891000_marshal_pinvoke_back, CertificateHandler_t2739891000_marshal_pinvoke_cleanup, NULL, NULL, &CertificateHandler_t2739891000_0_0_0 } /* UnityEngine.Networking.CertificateHandler */,
	{ NULL, DownloadHandler_t2937767557_marshal_pinvoke, DownloadHandler_t2937767557_marshal_pinvoke_back, DownloadHandler_t2937767557_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandler_t2937767557_0_0_0 } /* UnityEngine.Networking.DownloadHandler */,
	{ NULL, DownloadHandlerBuffer_t2928496527_marshal_pinvoke, DownloadHandlerBuffer_t2928496527_marshal_pinvoke_back, DownloadHandlerBuffer_t2928496527_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerBuffer_t2928496527_0_0_0 } /* UnityEngine.Networking.DownloadHandlerBuffer */,
	{ NULL, UnityWebRequest_t463507806_marshal_pinvoke, UnityWebRequest_t463507806_marshal_pinvoke_back, UnityWebRequest_t463507806_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequest_t463507806_0_0_0 } /* UnityEngine.Networking.UnityWebRequest */,
	{ NULL, UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke, UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke_back, UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequestAsyncOperation_t3852015985_0_0_0 } /* UnityEngine.Networking.UnityWebRequestAsyncOperation */,
	{ NULL, UploadHandler_t2993558019_marshal_pinvoke, UploadHandler_t2993558019_marshal_pinvoke_back, UploadHandler_t2993558019_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandler_t2993558019_0_0_0 } /* UnityEngine.Networking.UploadHandler */,
	{ NULL, UploadHandlerRaw_t25761545_marshal_pinvoke, UploadHandlerRaw_t25761545_marshal_pinvoke_back, UploadHandlerRaw_t25761545_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandlerRaw_t25761545_0_0_0 } /* UnityEngine.Networking.UploadHandlerRaw */,
	{ NULL, AnimationEvent_t1536042487_marshal_pinvoke, AnimationEvent_t1536042487_marshal_pinvoke_back, AnimationEvent_t1536042487_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_t1536042487_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t1307045488, NULL, NULL, NULL, NULL, NULL, &OnOverrideControllerDirtyCallback_t1307045488_0_0_0 } /* UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback */,
	{ NULL, AnimatorTransitionInfo_t2534804151_marshal_pinvoke, AnimatorTransitionInfo_t2534804151_marshal_pinvoke_back, AnimatorTransitionInfo_t2534804151_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t2534804151_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, HumanBone_t2465339518_marshal_pinvoke, HumanBone_t2465339518_marshal_pinvoke_back, HumanBone_t2465339518_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t2465339518_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, SkeletonBone_t4134054672_marshal_pinvoke, SkeletonBone_t4134054672_marshal_pinvoke_back, SkeletonBone_t4134054672_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_t4134054672_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, GcAchievementData_t675222246_marshal_pinvoke, GcAchievementData_t675222246_marshal_pinvoke_back, GcAchievementData_t675222246_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementData_t675222246_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementData */,
	{ NULL, GcAchievementDescriptionData_t643925653_marshal_pinvoke, GcAchievementDescriptionData_t643925653_marshal_pinvoke_back, GcAchievementDescriptionData_t643925653_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementDescriptionData_t643925653_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData */,
	{ NULL, GcLeaderboard_t4132273028_marshal_pinvoke, GcLeaderboard_t4132273028_marshal_pinvoke_back, GcLeaderboard_t4132273028_marshal_pinvoke_cleanup, NULL, NULL, &GcLeaderboard_t4132273028_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard */,
	{ NULL, GcScoreData_t2125309831_marshal_pinvoke, GcScoreData_t2125309831_marshal_pinvoke_back, GcScoreData_t2125309831_marshal_pinvoke_cleanup, NULL, NULL, &GcScoreData_t2125309831_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcScoreData */,
	{ NULL, GcUserProfileData_t2719720026_marshal_pinvoke, GcUserProfileData_t2719720026_marshal_pinvoke_back, GcUserProfileData_t2719720026_marshal_pinvoke_cleanup, NULL, NULL, &GcUserProfileData_t2719720026_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData */,
	{ NULL, Event_t2956885303_marshal_pinvoke, Event_t2956885303_marshal_pinvoke_back, Event_t2956885303_marshal_pinvoke_cleanup, NULL, NULL, &Event_t2956885303_0_0_0 } /* UnityEngine.Event */,
	{ DelegatePInvokeWrapper_WindowFunction_t3146511083, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t3146511083_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ NULL, GUIContent_t3050628031_marshal_pinvoke, GUIContent_t3050628031_marshal_pinvoke_back, GUIContent_t3050628031_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t3050628031_0_0_0 } /* UnityEngine.GUIContent */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_t1143955295, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_t1143955295_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, GUIStyle_t3956901511_marshal_pinvoke, GUIStyle_t3956901511_marshal_pinvoke_back, GUIStyle_t3956901511_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t3956901511_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_t1397964415_marshal_pinvoke, GUIStyleState_t1397964415_marshal_pinvoke_back, GUIStyleState_t1397964415_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t1397964415_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, TileAnimationData_t649120048_marshal_pinvoke, TileAnimationData_t649120048_marshal_pinvoke_back, TileAnimationData_t649120048_marshal_pinvoke_cleanup, NULL, NULL, &TileAnimationData_t649120048_0_0_0 } /* UnityEngine.Tilemaps.TileAnimationData */,
	{ NULL, TileData_t2042394239_marshal_pinvoke, TileData_t2042394239_marshal_pinvoke_back, TileData_t2042394239_marshal_pinvoke_cleanup, NULL, NULL, &TileData_t2042394239_0_0_0 } /* UnityEngine.Tilemaps.TileData */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_t3309123499, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_t3309123499_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ DelegatePInvokeWrapper_SessionStateChanged_t3163629820, NULL, NULL, NULL, NULL, NULL, &SessionStateChanged_t3163629820_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged */,
	{ NULL, RemoteConfigSettings_t1247263429_marshal_pinvoke, RemoteConfigSettings_t1247263429_marshal_pinvoke_back, RemoteConfigSettings_t1247263429_marshal_pinvoke_cleanup, NULL, NULL, &RemoteConfigSettings_t1247263429_0_0_0 } /* UnityEngine.RemoteConfigSettings */,
	{ DelegatePInvokeWrapper_UpdatedEventHandler_t1027848393, NULL, NULL, NULL, NULL, NULL, &UpdatedEventHandler_t1027848393_0_0_0 } /* UnityEngine.RemoteSettings/UpdatedEventHandler */,
	{ NULL, ColumnInfo_t2218992045_marshal_pinvoke, ColumnInfo_t2218992045_marshal_pinvoke_back, ColumnInfo_t2218992045_marshal_pinvoke_cleanup, NULL, NULL, &ColumnInfo_t2218992045_0_0_0 } /* System.Data.Common.DbConnection/ColumnInfo */,
	{ NULL, SqlBinary_t4132310562_marshal_pinvoke, SqlBinary_t4132310562_marshal_pinvoke_back, SqlBinary_t4132310562_marshal_pinvoke_cleanup, NULL, NULL, &SqlBinary_t4132310562_0_0_0 } /* System.Data.SqlTypes.SqlBinary */,
	{ NULL, SqlBoolean_t2781748253_marshal_pinvoke, SqlBoolean_t2781748253_marshal_pinvoke_back, SqlBoolean_t2781748253_marshal_pinvoke_cleanup, NULL, NULL, &SqlBoolean_t2781748253_0_0_0 } /* System.Data.SqlTypes.SqlBoolean */,
	{ NULL, SqlByte_t2260568341_marshal_pinvoke, SqlByte_t2260568341_marshal_pinvoke_back, SqlByte_t2260568341_marshal_pinvoke_cleanup, NULL, NULL, &SqlByte_t2260568341_0_0_0 } /* System.Data.SqlTypes.SqlByte */,
	{ NULL, SqlDateTime_t2414066866_marshal_pinvoke, SqlDateTime_t2414066866_marshal_pinvoke_back, SqlDateTime_t2414066866_marshal_pinvoke_cleanup, NULL, NULL, &SqlDateTime_t2414066866_0_0_0 } /* System.Data.SqlTypes.SqlDateTime */,
	{ NULL, SqlDecimal_t1096635589_marshal_pinvoke, SqlDecimal_t1096635589_marshal_pinvoke_back, SqlDecimal_t1096635589_marshal_pinvoke_cleanup, NULL, NULL, &SqlDecimal_t1096635589_0_0_0 } /* System.Data.SqlTypes.SqlDecimal */,
	{ NULL, SqlDouble_t1075477787_marshal_pinvoke, SqlDouble_t1075477787_marshal_pinvoke_back, SqlDouble_t1075477787_marshal_pinvoke_cleanup, NULL, NULL, &SqlDouble_t1075477787_0_0_0 } /* System.Data.SqlTypes.SqlDouble */,
	{ NULL, SqlGuid_t1775442377_marshal_pinvoke, SqlGuid_t1775442377_marshal_pinvoke_back, SqlGuid_t1775442377_marshal_pinvoke_cleanup, NULL, NULL, &SqlGuid_t1775442377_0_0_0 } /* System.Data.SqlTypes.SqlGuid */,
	{ NULL, SqlInt16_t1815218091_marshal_pinvoke, SqlInt16_t1815218091_marshal_pinvoke_back, SqlInt16_t1815218091_marshal_pinvoke_cleanup, NULL, NULL, &SqlInt16_t1815218091_0_0_0 } /* System.Data.SqlTypes.SqlInt16 */,
	{ NULL, SqlInt32_t2197555111_marshal_pinvoke, SqlInt32_t2197555111_marshal_pinvoke_back, SqlInt32_t2197555111_marshal_pinvoke_cleanup, NULL, NULL, &SqlInt32_t2197555111_0_0_0 } /* System.Data.SqlTypes.SqlInt32 */,
	{ NULL, SqlInt64_t3771533229_marshal_pinvoke, SqlInt64_t3771533229_marshal_pinvoke_back, SqlInt64_t3771533229_marshal_pinvoke_cleanup, NULL, NULL, &SqlInt64_t3771533229_0_0_0 } /* System.Data.SqlTypes.SqlInt64 */,
	{ NULL, SqlMoney_t3362852048_marshal_pinvoke, SqlMoney_t3362852048_marshal_pinvoke_back, SqlMoney_t3362852048_marshal_pinvoke_cleanup, NULL, NULL, &SqlMoney_t3362852048_0_0_0 } /* System.Data.SqlTypes.SqlMoney */,
	{ NULL, SqlSingle_t3751283737_marshal_pinvoke, SqlSingle_t3751283737_marshal_pinvoke_back, SqlSingle_t3751283737_marshal_pinvoke_cleanup, NULL, NULL, &SqlSingle_t3751283737_0_0_0 } /* System.Data.SqlTypes.SqlSingle */,
	{ NULL, SqlString_t3442887463_marshal_pinvoke, SqlString_t3442887463_marshal_pinvoke_back, SqlString_t3442887463_marshal_pinvoke_cleanup, NULL, NULL, &SqlString_t3442887463_0_0_0 } /* System.Data.SqlTypes.SqlString */,
	{ DelegatePInvokeWrapper_SQLiteCallback_t1634814860, NULL, NULL, NULL, NULL, NULL, &SQLiteCallback_t1634814860_0_0_0 } /* Mono.Data.Sqlite.SQLiteCallback */,
	{ DelegatePInvokeWrapper_SQLiteCollation_t2922389035, NULL, NULL, NULL, NULL, NULL, &SQLiteCollation_t2922389035_0_0_0 } /* Mono.Data.Sqlite.SQLiteCollation */,
	{ DelegatePInvokeWrapper_SQLiteCommitCallback_t583925460, NULL, NULL, NULL, NULL, NULL, &SQLiteCommitCallback_t583925460_0_0_0 } /* Mono.Data.Sqlite.SQLiteCommitCallback */,
	{ DelegatePInvokeWrapper_SQLiteFinalCallback_t3927043577, NULL, NULL, NULL, NULL, NULL, &SQLiteFinalCallback_t3927043577_0_0_0 } /* Mono.Data.Sqlite.SQLiteFinalCallback */,
	{ DelegatePInvokeWrapper_SQLiteRollbackCallback_t3445264418, NULL, NULL, NULL, NULL, NULL, &SQLiteRollbackCallback_t3445264418_0_0_0 } /* Mono.Data.Sqlite.SQLiteRollbackCallback */,
	{ NULL, SQLiteTypeNames_t2304190112_marshal_pinvoke, SQLiteTypeNames_t2304190112_marshal_pinvoke_back, SQLiteTypeNames_t2304190112_marshal_pinvoke_cleanup, NULL, NULL, &SQLiteTypeNames_t2304190112_0_0_0 } /* Mono.Data.Sqlite.SQLiteTypeNames */,
	{ DelegatePInvokeWrapper_SQLiteUpdateCallback_t3929343441, NULL, NULL, NULL, NULL, NULL, &SQLiteUpdateCallback_t3929343441_0_0_0 } /* Mono.Data.Sqlite.SQLiteUpdateCallback */,
	{ NULL, KeyInfo_t3680340371_marshal_pinvoke, KeyInfo_t3680340371_marshal_pinvoke_back, KeyInfo_t3680340371_marshal_pinvoke_cleanup, NULL, NULL, &KeyInfo_t3680340371_0_0_0 } /* Mono.Data.Sqlite.SqliteKeyReader/KeyInfo */,
	{ NULL, RaycastResult_t3360306849_marshal_pinvoke, RaycastResult_t3360306849_marshal_pinvoke_back, RaycastResult_t3360306849_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_t3360306849_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, ColorTween_t809614380_marshal_pinvoke, ColorTween_t809614380_marshal_pinvoke_back, ColorTween_t809614380_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t809614380_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, FloatTween_t1274330004_marshal_pinvoke, FloatTween_t1274330004_marshal_pinvoke_back, FloatTween_t1274330004_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t1274330004_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ NULL, Resources_t1597885468_marshal_pinvoke, Resources_t1597885468_marshal_pinvoke_back, Resources_t1597885468_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t1597885468_0_0_0 } /* UnityEngine.UI.DefaultControls/Resources */,
	{ DelegatePInvokeWrapper_OnValidateInput_t2355412304, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t2355412304_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, Navigation_t3049316579_marshal_pinvoke, Navigation_t3049316579_marshal_pinvoke_back, Navigation_t3049316579_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t3049316579_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t3913627115, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllCallback_t3913627115_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t2311174851, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllNonAllocCallback_t2311174851_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback */,
	{ DelegatePInvokeWrapper_GetRaycastNonAllocCallback_t3841783507, NULL, NULL, NULL, NULL, NULL, &GetRaycastNonAllocCallback_t3841783507_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback */,
	{ DelegatePInvokeWrapper_Raycast2DCallback_t768590915, NULL, NULL, NULL, NULL, NULL, &Raycast2DCallback_t768590915_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback */,
	{ DelegatePInvokeWrapper_Raycast3DCallback_t701940803, NULL, NULL, NULL, NULL, NULL, &Raycast3DCallback_t701940803_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback */,
	{ DelegatePInvokeWrapper_RaycastAllCallback_t1884415901, NULL, NULL, NULL, NULL, NULL, &RaycastAllCallback_t1884415901_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback */,
	{ NULL, SpriteState_t1362986479_marshal_pinvoke, SpriteState_t1362986479_marshal_pinvoke_back, SpriteState_t1362986479_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_t1362986479_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ DelegatePInvokeWrapper_CompressFunc_t3594827279, NULL, NULL, NULL, NULL, NULL, &CompressFunc_t3594827279_0_0_0 } /* Ionic.Zlib.DeflateManager/CompressFunc */,
	{ DelegatePInvokeWrapper_DisplayAuthenticationEvent_t945238739, NULL, NULL, NULL, NULL, NULL, &DisplayAuthenticationEvent_t945238739_0_0_0 } /* PlayFabAuthService/DisplayAuthenticationEvent */,
	{ NULL, NULL, NULL, NULL, NULL, &CRC32_t2128839853::CLSID, &CRC32_t2128839853_0_0_0 } /* Ionic.Crc.CRC32 */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibCodec_t3653667923::CLSID, &ZlibCodec_t3653667923_0_0_0 } /* Ionic.Zlib.ZlibCodec */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibException_t2135990123::CLSID, &ZlibException_t2135990123_0_0_0 } /* Ionic.Zlib.ZlibException */,
	NULL,
};
