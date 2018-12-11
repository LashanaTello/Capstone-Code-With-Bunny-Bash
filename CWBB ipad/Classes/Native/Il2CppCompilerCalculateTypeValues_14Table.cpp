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


// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute[]
struct AttributeU5BU5D_t1575011174;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.CodeDom.Compiler.CodeGenerator
struct CodeGenerator_t1606279797;
// System.CodeDom.Compiler.CodeGenerator/Visitor
struct Visitor_t4039484693;
// System.CodeDom.Compiler.CompilerErrorCollection
struct CompilerErrorCollection_t2383307460;
// System.CodeDom.Compiler.TempFileCollection
struct TempFileCollection_t2060973068;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.List`1<System.ComponentModel.IComponent>
struct List_1_t3792292994;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1693217257;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1624492310;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t417719465;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2091847364;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1318642398;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t2272350267;
// System.Collections.Specialized.StringCollection
struct StringCollection_t167406615;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t2743648699;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4221220734;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t39585132;
// System.ComponentModel.Container
struct Container_t1808277744;
// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t3704776641;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.ComponentModel.IComponent
struct IComponent_t2320218252;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t1654759486;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t1213062803;
// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t2386199656;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2249118273;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2184948248;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Exception
struct Exception_t;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Random
struct Random_t108471755;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
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
#ifndef CODEGENERATOR_T1606279797_H
#define CODEGENERATOR_T1606279797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CodeGenerator
struct  CodeGenerator_t1606279797  : public RuntimeObject
{
public:
	// System.CodeDom.Compiler.CodeGenerator/Visitor System.CodeDom.Compiler.CodeGenerator::visitor
	Visitor_t4039484693 * ___visitor_0;

public:
	inline static int32_t get_offset_of_visitor_0() { return static_cast<int32_t>(offsetof(CodeGenerator_t1606279797, ___visitor_0)); }
	inline Visitor_t4039484693 * get_visitor_0() const { return ___visitor_0; }
	inline Visitor_t4039484693 ** get_address_of_visitor_0() { return &___visitor_0; }
	inline void set_visitor_0(Visitor_t4039484693 * value)
	{
		___visitor_0 = value;
		Il2CppCodeGenWriteBarrier((&___visitor_0), value);
	}
};

struct CodeGenerator_t1606279797_StaticFields
{
public:
	// System.Type[] System.CodeDom.Compiler.CodeGenerator::memberTypes
	TypeU5BU5D_t3940880105* ___memberTypes_1;

public:
	inline static int32_t get_offset_of_memberTypes_1() { return static_cast<int32_t>(offsetof(CodeGenerator_t1606279797_StaticFields, ___memberTypes_1)); }
	inline TypeU5BU5D_t3940880105* get_memberTypes_1() const { return ___memberTypes_1; }
	inline TypeU5BU5D_t3940880105** get_address_of_memberTypes_1() { return &___memberTypes_1; }
	inline void set_memberTypes_1(TypeU5BU5D_t3940880105* value)
	{
		___memberTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberTypes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGENERATOR_T1606279797_H
#ifndef VISITOR_T4039484693_H
#define VISITOR_T4039484693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CodeGenerator/Visitor
struct  Visitor_t4039484693  : public RuntimeObject
{
public:
	// System.CodeDom.Compiler.CodeGenerator System.CodeDom.Compiler.CodeGenerator/Visitor::g
	CodeGenerator_t1606279797 * ___g_0;

public:
	inline static int32_t get_offset_of_g_0() { return static_cast<int32_t>(offsetof(Visitor_t4039484693, ___g_0)); }
	inline CodeGenerator_t1606279797 * get_g_0() const { return ___g_0; }
	inline CodeGenerator_t1606279797 ** get_address_of_g_0() { return &___g_0; }
	inline void set_g_0(CodeGenerator_t1606279797 * value)
	{
		___g_0 = value;
		Il2CppCodeGenWriteBarrier((&___g_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VISITOR_T4039484693_H
#ifndef COMPILERERROR_T2283741458_H
#define COMPILERERROR_T2283741458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CompilerError
struct  CompilerError_t2283741458  : public RuntimeObject
{
public:
	// System.String System.CodeDom.Compiler.CompilerError::fileName
	String_t* ___fileName_0;
	// System.Int32 System.CodeDom.Compiler.CompilerError::line
	int32_t ___line_1;
	// System.Int32 System.CodeDom.Compiler.CompilerError::column
	int32_t ___column_2;
	// System.String System.CodeDom.Compiler.CompilerError::errorNumber
	String_t* ___errorNumber_3;
	// System.String System.CodeDom.Compiler.CompilerError::errorText
	String_t* ___errorText_4;
	// System.Boolean System.CodeDom.Compiler.CompilerError::isWarning
	bool ___isWarning_5;

public:
	inline static int32_t get_offset_of_fileName_0() { return static_cast<int32_t>(offsetof(CompilerError_t2283741458, ___fileName_0)); }
	inline String_t* get_fileName_0() const { return ___fileName_0; }
	inline String_t** get_address_of_fileName_0() { return &___fileName_0; }
	inline void set_fileName_0(String_t* value)
	{
		___fileName_0 = value;
		Il2CppCodeGenWriteBarrier((&___fileName_0), value);
	}

	inline static int32_t get_offset_of_line_1() { return static_cast<int32_t>(offsetof(CompilerError_t2283741458, ___line_1)); }
	inline int32_t get_line_1() const { return ___line_1; }
	inline int32_t* get_address_of_line_1() { return &___line_1; }
	inline void set_line_1(int32_t value)
	{
		___line_1 = value;
	}

	inline static int32_t get_offset_of_column_2() { return static_cast<int32_t>(offsetof(CompilerError_t2283741458, ___column_2)); }
	inline int32_t get_column_2() const { return ___column_2; }
	inline int32_t* get_address_of_column_2() { return &___column_2; }
	inline void set_column_2(int32_t value)
	{
		___column_2 = value;
	}

	inline static int32_t get_offset_of_errorNumber_3() { return static_cast<int32_t>(offsetof(CompilerError_t2283741458, ___errorNumber_3)); }
	inline String_t* get_errorNumber_3() const { return ___errorNumber_3; }
	inline String_t** get_address_of_errorNumber_3() { return &___errorNumber_3; }
	inline void set_errorNumber_3(String_t* value)
	{
		___errorNumber_3 = value;
		Il2CppCodeGenWriteBarrier((&___errorNumber_3), value);
	}

	inline static int32_t get_offset_of_errorText_4() { return static_cast<int32_t>(offsetof(CompilerError_t2283741458, ___errorText_4)); }
	inline String_t* get_errorText_4() const { return ___errorText_4; }
	inline String_t** get_address_of_errorText_4() { return &___errorText_4; }
	inline void set_errorText_4(String_t* value)
	{
		___errorText_4 = value;
		Il2CppCodeGenWriteBarrier((&___errorText_4), value);
	}

	inline static int32_t get_offset_of_isWarning_5() { return static_cast<int32_t>(offsetof(CompilerError_t2283741458, ___isWarning_5)); }
	inline bool get_isWarning_5() const { return ___isWarning_5; }
	inline bool* get_address_of_isWarning_5() { return &___isWarning_5; }
	inline void set_isWarning_5(bool value)
	{
		___isWarning_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERERROR_T2283741458_H
#ifndef COMPILERRESULTS_T1736487784_H
#define COMPILERRESULTS_T1736487784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CompilerResults
struct  CompilerResults_t1736487784  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.CodeDom.Compiler.CompilerResults::compiledAssembly
	Assembly_t * ___compiledAssembly_0;
	// System.CodeDom.Compiler.CompilerErrorCollection System.CodeDom.Compiler.CompilerResults::errors
	CompilerErrorCollection_t2383307460 * ___errors_1;
	// System.Int32 System.CodeDom.Compiler.CompilerResults::nativeCompilerReturnValue
	int32_t ___nativeCompilerReturnValue_2;
	// System.Collections.Specialized.StringCollection System.CodeDom.Compiler.CompilerResults::output
	StringCollection_t167406615 * ___output_3;
	// System.String System.CodeDom.Compiler.CompilerResults::pathToAssembly
	String_t* ___pathToAssembly_4;
	// System.CodeDom.Compiler.TempFileCollection System.CodeDom.Compiler.CompilerResults::tempFiles
	TempFileCollection_t2060973068 * ___tempFiles_5;

public:
	inline static int32_t get_offset_of_compiledAssembly_0() { return static_cast<int32_t>(offsetof(CompilerResults_t1736487784, ___compiledAssembly_0)); }
	inline Assembly_t * get_compiledAssembly_0() const { return ___compiledAssembly_0; }
	inline Assembly_t ** get_address_of_compiledAssembly_0() { return &___compiledAssembly_0; }
	inline void set_compiledAssembly_0(Assembly_t * value)
	{
		___compiledAssembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___compiledAssembly_0), value);
	}

	inline static int32_t get_offset_of_errors_1() { return static_cast<int32_t>(offsetof(CompilerResults_t1736487784, ___errors_1)); }
	inline CompilerErrorCollection_t2383307460 * get_errors_1() const { return ___errors_1; }
	inline CompilerErrorCollection_t2383307460 ** get_address_of_errors_1() { return &___errors_1; }
	inline void set_errors_1(CompilerErrorCollection_t2383307460 * value)
	{
		___errors_1 = value;
		Il2CppCodeGenWriteBarrier((&___errors_1), value);
	}

	inline static int32_t get_offset_of_nativeCompilerReturnValue_2() { return static_cast<int32_t>(offsetof(CompilerResults_t1736487784, ___nativeCompilerReturnValue_2)); }
	inline int32_t get_nativeCompilerReturnValue_2() const { return ___nativeCompilerReturnValue_2; }
	inline int32_t* get_address_of_nativeCompilerReturnValue_2() { return &___nativeCompilerReturnValue_2; }
	inline void set_nativeCompilerReturnValue_2(int32_t value)
	{
		___nativeCompilerReturnValue_2 = value;
	}

	inline static int32_t get_offset_of_output_3() { return static_cast<int32_t>(offsetof(CompilerResults_t1736487784, ___output_3)); }
	inline StringCollection_t167406615 * get_output_3() const { return ___output_3; }
	inline StringCollection_t167406615 ** get_address_of_output_3() { return &___output_3; }
	inline void set_output_3(StringCollection_t167406615 * value)
	{
		___output_3 = value;
		Il2CppCodeGenWriteBarrier((&___output_3), value);
	}

	inline static int32_t get_offset_of_pathToAssembly_4() { return static_cast<int32_t>(offsetof(CompilerResults_t1736487784, ___pathToAssembly_4)); }
	inline String_t* get_pathToAssembly_4() const { return ___pathToAssembly_4; }
	inline String_t** get_address_of_pathToAssembly_4() { return &___pathToAssembly_4; }
	inline void set_pathToAssembly_4(String_t* value)
	{
		___pathToAssembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___pathToAssembly_4), value);
	}

	inline static int32_t get_offset_of_tempFiles_5() { return static_cast<int32_t>(offsetof(CompilerResults_t1736487784, ___tempFiles_5)); }
	inline TempFileCollection_t2060973068 * get_tempFiles_5() const { return ___tempFiles_5; }
	inline TempFileCollection_t2060973068 ** get_address_of_tempFiles_5() { return &___tempFiles_5; }
	inline void set_tempFiles_5(TempFileCollection_t2060973068 * value)
	{
		___tempFiles_5 = value;
		Il2CppCodeGenWriteBarrier((&___tempFiles_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERRESULTS_T1736487784_H
#ifndef TEMPFILECOLLECTION_T2060973068_H
#define TEMPFILECOLLECTION_T2060973068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.TempFileCollection
struct  TempFileCollection_t2060973068  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.CodeDom.Compiler.TempFileCollection::filehash
	Hashtable_t1853889766 * ___filehash_0;
	// System.String System.CodeDom.Compiler.TempFileCollection::tempdir
	String_t* ___tempdir_1;
	// System.Boolean System.CodeDom.Compiler.TempFileCollection::keepfiles
	bool ___keepfiles_2;
	// System.String System.CodeDom.Compiler.TempFileCollection::basepath
	String_t* ___basepath_3;
	// System.Random System.CodeDom.Compiler.TempFileCollection::rnd
	Random_t108471755 * ___rnd_4;
	// System.String System.CodeDom.Compiler.TempFileCollection::ownTempDir
	String_t* ___ownTempDir_5;

public:
	inline static int32_t get_offset_of_filehash_0() { return static_cast<int32_t>(offsetof(TempFileCollection_t2060973068, ___filehash_0)); }
	inline Hashtable_t1853889766 * get_filehash_0() const { return ___filehash_0; }
	inline Hashtable_t1853889766 ** get_address_of_filehash_0() { return &___filehash_0; }
	inline void set_filehash_0(Hashtable_t1853889766 * value)
	{
		___filehash_0 = value;
		Il2CppCodeGenWriteBarrier((&___filehash_0), value);
	}

	inline static int32_t get_offset_of_tempdir_1() { return static_cast<int32_t>(offsetof(TempFileCollection_t2060973068, ___tempdir_1)); }
	inline String_t* get_tempdir_1() const { return ___tempdir_1; }
	inline String_t** get_address_of_tempdir_1() { return &___tempdir_1; }
	inline void set_tempdir_1(String_t* value)
	{
		___tempdir_1 = value;
		Il2CppCodeGenWriteBarrier((&___tempdir_1), value);
	}

	inline static int32_t get_offset_of_keepfiles_2() { return static_cast<int32_t>(offsetof(TempFileCollection_t2060973068, ___keepfiles_2)); }
	inline bool get_keepfiles_2() const { return ___keepfiles_2; }
	inline bool* get_address_of_keepfiles_2() { return &___keepfiles_2; }
	inline void set_keepfiles_2(bool value)
	{
		___keepfiles_2 = value;
	}

	inline static int32_t get_offset_of_basepath_3() { return static_cast<int32_t>(offsetof(TempFileCollection_t2060973068, ___basepath_3)); }
	inline String_t* get_basepath_3() const { return ___basepath_3; }
	inline String_t** get_address_of_basepath_3() { return &___basepath_3; }
	inline void set_basepath_3(String_t* value)
	{
		___basepath_3 = value;
		Il2CppCodeGenWriteBarrier((&___basepath_3), value);
	}

	inline static int32_t get_offset_of_rnd_4() { return static_cast<int32_t>(offsetof(TempFileCollection_t2060973068, ___rnd_4)); }
	inline Random_t108471755 * get_rnd_4() const { return ___rnd_4; }
	inline Random_t108471755 ** get_address_of_rnd_4() { return &___rnd_4; }
	inline void set_rnd_4(Random_t108471755 * value)
	{
		___rnd_4 = value;
		Il2CppCodeGenWriteBarrier((&___rnd_4), value);
	}

	inline static int32_t get_offset_of_ownTempDir_5() { return static_cast<int32_t>(offsetof(TempFileCollection_t2060973068, ___ownTempDir_5)); }
	inline String_t* get_ownTempDir_5() const { return ___ownTempDir_5; }
	inline String_t** get_address_of_ownTempDir_5() { return &___ownTempDir_5; }
	inline void set_ownTempDir_5(String_t* value)
	{
		___ownTempDir_5 = value;
		Il2CppCodeGenWriteBarrier((&___ownTempDir_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEMPFILECOLLECTION_T2060973068_H
#ifndef COLLECTIONBASE_T2727926298_H
#define COLLECTIONBASE_T2727926298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2727926298  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2727926298, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2727926298_H
#ifndef READONLYCOLLECTIONBASE_T1836743899_H
#define READONLYCOLLECTIONBASE_T1836743899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t1836743899  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t1836743899, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T1836743899_H
#ifndef COLLECTIONSUTIL_T1944789458_H
#define COLLECTIONSUTIL_T1944789458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.CollectionsUtil
struct  CollectionsUtil_t1944789458  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONSUTIL_T1944789458_H
#ifndef HYBRIDDICTIONARY_T4070033136_H
#define HYBRIDDICTIONARY_T4070033136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t4070033136  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_1;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t1853889766 * ___hashtable_2;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t1624492310 * ___list_3;

public:
	inline static int32_t get_offset_of_caseInsensitive_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___caseInsensitive_1)); }
	inline bool get_caseInsensitive_1() const { return ___caseInsensitive_1; }
	inline bool* get_address_of_caseInsensitive_1() { return &___caseInsensitive_1; }
	inline void set_caseInsensitive_1(bool value)
	{
		___caseInsensitive_1 = value;
	}

	inline static int32_t get_offset_of_hashtable_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___hashtable_2)); }
	inline Hashtable_t1853889766 * get_hashtable_2() const { return ___hashtable_2; }
	inline Hashtable_t1853889766 ** get_address_of_hashtable_2() { return &___hashtable_2; }
	inline void set_hashtable_2(Hashtable_t1853889766 * value)
	{
		___hashtable_2 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_2), value);
	}

	inline static int32_t get_offset_of_list_3() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___list_3)); }
	inline ListDictionary_t1624492310 * get_list_3() const { return ___list_3; }
	inline ListDictionary_t1624492310 ** get_address_of_list_3() { return &___list_3; }
	inline void set_list_3(ListDictionary_t1624492310 * value)
	{
		___list_3 = value;
		Il2CppCodeGenWriteBarrier((&___list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T4070033136_H
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
#ifndef DICTIONARYNODE_T417719465_H
#define DICTIONARYNODE_T417719465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t417719465  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t417719465 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___next_2)); }
	inline DictionaryNode_t417719465 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t417719465 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t417719465 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T417719465_H
#ifndef DICTIONARYNODECOLLECTION_T819283804_H
#define DICTIONARYNODECOLLECTION_T819283804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
struct  DictionaryNodeCollection_t819283804  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::dict
	ListDictionary_t1624492310 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t819283804, ___dict_0)); }
	inline ListDictionary_t1624492310 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1624492310 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1624492310 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t819283804, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODECOLLECTION_T819283804_H
#ifndef DICTIONARYNODECOLLECTIONENUMERATOR_T2863182637_H
#define DICTIONARYNODECOLLECTIONENUMERATOR_T2863182637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator
struct  DictionaryNodeCollectionEnumerator_t2863182637  : public RuntimeObject
{
public:
	// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::inner
	RuntimeObject* ___inner_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_inner_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t2863182637, ___inner_0)); }
	inline RuntimeObject* get_inner_0() const { return ___inner_0; }
	inline RuntimeObject** get_address_of_inner_0() { return &___inner_0; }
	inline void set_inner_0(RuntimeObject* value)
	{
		___inner_0 = value;
		Il2CppCodeGenWriteBarrier((&___inner_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t2863182637, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODECOLLECTIONENUMERATOR_T2863182637_H
#ifndef DICTIONARYNODEENUMERATOR_T1673829610_H
#define DICTIONARYNODEENUMERATOR_T1673829610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t1673829610  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t1624492310 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t417719465 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1673829610, ___dict_0)); }
	inline ListDictionary_t1624492310 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1624492310 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1624492310 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1673829610, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1673829610, ___current_2)); }
	inline DictionaryNode_t417719465 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t417719465 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t417719465 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1673829610, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODEENUMERATOR_T1673829610_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#define NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t2091847364  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t1853889766 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t2272350267 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t2718874744 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t950877179 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t1318642398 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_ItemsContainer_0)); }
	inline Hashtable_t1853889766 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t1853889766 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t1853889766 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_NullKeyItem_1)); }
	inline _Item_t2272350267 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t2272350267 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t2272350267 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_ItemsArray_2)); }
	inline ArrayList_t2718874744 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t2718874744 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t2718874744 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___infoCopy_7)); }
	inline SerializationInfo_t950877179 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t950877179 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t950877179 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___keyscoll_8)); }
	inline KeysCollection_t1318642398 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t1318642398 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t1318642398 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___equality_comparer_9)); }
	inline RuntimeObject* get_equality_comparer_9() const { return ___equality_comparer_9; }
	inline RuntimeObject** get_address_of_equality_comparer_9() { return &___equality_comparer_9; }
	inline void set_equality_comparer_9(RuntimeObject* value)
	{
		___equality_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___equality_comparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifndef KEYSCOLLECTION_T1318642398_H
#define KEYSCOLLECTION_T1318642398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t1318642398  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t2091847364 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t1318642398, ___m_collection_0)); }
	inline NameObjectCollectionBase_t2091847364 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t2091847364 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t2091847364 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T1318642398_H
#ifndef _ITEM_T2272350267_H
#define _ITEM_T2272350267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t2272350267  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t2272350267, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t2272350267, ___value_1)); }
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
#endif // _ITEM_T2272350267_H
#ifndef _KEYSENUMERATOR_T4246666432_H
#define _KEYSENUMERATOR_T4246666432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t4246666432  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t2091847364 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t4246666432, ___m_collection_0)); }
	inline NameObjectCollectionBase_t2091847364 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t2091847364 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t2091847364 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t4246666432, ___m_position_1)); }
	inline int32_t get_m_position_1() const { return ___m_position_1; }
	inline int32_t* get_address_of_m_position_1() { return &___m_position_1; }
	inline void set_m_position_1(int32_t value)
	{
		___m_position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _KEYSENUMERATOR_T4246666432_H
#ifndef STRINGCOLLECTION_T167406615_H
#define STRINGCOLLECTION_T167406615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t167406615  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t2718874744 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t167406615, ___data_0)); }
	inline ArrayList_t2718874744 * get_data_0() const { return ___data_0; }
	inline ArrayList_t2718874744 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t2718874744 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T167406615_H
#ifndef STRINGDICTIONARY_T120437468_H
#define STRINGDICTIONARY_T120437468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t120437468  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t1853889766 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t120437468, ___contents_0)); }
	inline Hashtable_t1853889766 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t1853889766 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t1853889766 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T120437468_H
#ifndef STRINGENUMERATOR_T3934291441_H
#define STRINGENUMERATOR_T3934291441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringEnumerator
struct  StringEnumerator_t3934291441  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Collections.Specialized.StringEnumerator::enumerable
	RuntimeObject* ___enumerable_0;

public:
	inline static int32_t get_offset_of_enumerable_0() { return static_cast<int32_t>(offsetof(StringEnumerator_t3934291441, ___enumerable_0)); }
	inline RuntimeObject* get_enumerable_0() const { return ___enumerable_0; }
	inline RuntimeObject** get_address_of_enumerable_0() { return &___enumerable_0; }
	inline void set_enumerable_0(RuntimeObject* value)
	{
		___enumerable_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGENUMERATOR_T3934291441_H
#ifndef ASYNCOPERATION_T2743648699_H
#define ASYNCOPERATION_T2743648699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperation
struct  AsyncOperation_t2743648699  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperation::ctx
	SynchronizationContext_t2326897723 * ___ctx_0;
	// System.Object System.ComponentModel.AsyncOperation::state
	RuntimeObject * ___state_1;
	// System.Boolean System.ComponentModel.AsyncOperation::done
	bool ___done_2;

public:
	inline static int32_t get_offset_of_ctx_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t2743648699, ___ctx_0)); }
	inline SynchronizationContext_t2326897723 * get_ctx_0() const { return ___ctx_0; }
	inline SynchronizationContext_t2326897723 ** get_address_of_ctx_0() { return &___ctx_0; }
	inline void set_ctx_0(SynchronizationContext_t2326897723 * value)
	{
		___ctx_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_0), value);
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t2743648699, ___state_1)); }
	inline RuntimeObject * get_state_1() const { return ___state_1; }
	inline RuntimeObject ** get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(RuntimeObject * value)
	{
		___state_1 = value;
		Il2CppCodeGenWriteBarrier((&___state_1), value);
	}

	inline static int32_t get_offset_of_done_2() { return static_cast<int32_t>(offsetof(AsyncOperation_t2743648699, ___done_2)); }
	inline bool get_done_2() const { return ___done_2; }
	inline bool* get_address_of_done_2() { return &___done_2; }
	inline void set_done_2(bool value)
	{
		___done_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCOPERATION_T2743648699_H
#ifndef ASYNCOPERATIONMANAGER_T1665670643_H
#define ASYNCOPERATIONMANAGER_T1665670643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperationManager
struct  AsyncOperationManager_t1665670643  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCOPERATIONMANAGER_T1665670643_H
#ifndef ATTRIBUTECOLLECTION_T4221220734_H
#define ATTRIBUTECOLLECTION_T4221220734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t4221220734  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t2718874744 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t4221220734, ___attrList_0)); }
	inline ArrayList_t2718874744 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t2718874744 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t2718874744 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t4221220734_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t4221220734 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t4221220734_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t4221220734 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t4221220734 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t4221220734 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T4221220734_H
#ifndef COMPONENTEDITOR_T3175114376_H
#define COMPONENTEDITOR_T3175114376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentEditor
struct  ComponentEditor_t3175114376  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTEDITOR_T3175114376_H
#ifndef CONTAINER_T1808277744_H
#define CONTAINER_T1808277744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Container
struct  Container_t1808277744  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.ComponentModel.IComponent> System.ComponentModel.Container::c
	List_1_t3792292994 * ___c_0;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___c_0)); }
	inline List_1_t3792292994 * get_c_0() const { return ___c_0; }
	inline List_1_t3792292994 ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(List_1_t3792292994 * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((&___c_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTAINER_T1808277744_H
#ifndef DEFAULTSITE_T2855633836_H
#define DEFAULTSITE_T2855633836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Container/DefaultSite
struct  DefaultSite_t2855633836  : public RuntimeObject
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.Container/DefaultSite::component
	RuntimeObject* ___component_0;
	// System.ComponentModel.Container System.ComponentModel.Container/DefaultSite::container
	Container_t1808277744 * ___container_1;
	// System.String System.ComponentModel.Container/DefaultSite::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_component_0() { return static_cast<int32_t>(offsetof(DefaultSite_t2855633836, ___component_0)); }
	inline RuntimeObject* get_component_0() const { return ___component_0; }
	inline RuntimeObject** get_address_of_component_0() { return &___component_0; }
	inline void set_component_0(RuntimeObject* value)
	{
		___component_0 = value;
		Il2CppCodeGenWriteBarrier((&___component_0), value);
	}

	inline static int32_t get_offset_of_container_1() { return static_cast<int32_t>(offsetof(DefaultSite_t2855633836, ___container_1)); }
	inline Container_t1808277744 * get_container_1() const { return ___container_1; }
	inline Container_t1808277744 ** get_address_of_container_1() { return &___container_1; }
	inline void set_container_1(Container_t1808277744 * value)
	{
		___container_1 = value;
		Il2CppCodeGenWriteBarrier((&___container_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DefaultSite_t2855633836, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTSITE_T2855633836_H
#ifndef CONTAINERFILTERSERVICE_T3995528664_H
#define CONTAINERFILTERSERVICE_T3995528664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ContainerFilterService
struct  ContainerFilterService_t3995528664  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTAINERFILTERSERVICE_T3995528664_H
#ifndef CULTUREINFOCOMPARER_T1184699714_H
#define CULTUREINFOCOMPARER_T1184699714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t1184699714  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T1184699714_H
#ifndef CUSTOMTYPEDESCRIPTOR_T3093649079_H
#define CUSTOMTYPEDESCRIPTOR_T3093649079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t3093649079  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t3093649079, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTYPEDESCRIPTOR_T3093649079_H
#ifndef DESIGNERTRANSACTION_T2710857822_H
#define DESIGNERTRANSACTION_T2710857822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.DesignerTransaction
struct  DesignerTransaction_t2710857822  : public RuntimeObject
{
public:
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::committed
	bool ___committed_0;
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::canceled
	bool ___canceled_1;

public:
	inline static int32_t get_offset_of_committed_0() { return static_cast<int32_t>(offsetof(DesignerTransaction_t2710857822, ___committed_0)); }
	inline bool get_committed_0() const { return ___committed_0; }
	inline bool* get_address_of_committed_0() { return &___committed_0; }
	inline void set_committed_0(bool value)
	{
		___committed_0 = value;
	}

	inline static int32_t get_offset_of_canceled_1() { return static_cast<int32_t>(offsetof(DesignerTransaction_t2710857822, ___canceled_1)); }
	inline bool get_canceled_1() const { return ___canceled_1; }
	inline bool* get_address_of_canceled_1() { return &___canceled_1; }
	inline void set_canceled_1(bool value)
	{
		___canceled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERTRANSACTION_T2710857822_H
#ifndef MEMBERDESCRIPTOR_T3815403747_H
#define MEMBERDESCRIPTOR_T3815403747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3815403747  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t1575011174* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t4221220734 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attrs_1)); }
	inline AttributeU5BU5D_t1575011174* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t1575011174** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t1575011174* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attrCollection_2)); }
	inline AttributeCollection_t4221220734 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t4221220734 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t4221220734 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t3815403747_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747_StaticFields, ___default_comparer_3)); }
	inline RuntimeObject* get_default_comparer_3() const { return ___default_comparer_3; }
	inline RuntimeObject** get_address_of_default_comparer_3() { return &___default_comparer_3; }
	inline void set_default_comparer_3(RuntimeObject* value)
	{
		___default_comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T3815403747_H
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
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
#ifndef COMPILERERRORCOLLECTION_T2383307460_H
#define COMPILERERRORCOLLECTION_T2383307460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CompilerErrorCollection
struct  CompilerErrorCollection_t2383307460  : public CollectionBase_t2727926298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERERRORCOLLECTION_T2383307460_H
#ifndef GENERATEDCODEATTRIBUTE_T1133842240_H
#define GENERATEDCODEATTRIBUTE_T1133842240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.GeneratedCodeAttribute
struct  GeneratedCodeAttribute_t1133842240  : public Attribute_t861562559
{
public:
	// System.String System.CodeDom.Compiler.GeneratedCodeAttribute::tool
	String_t* ___tool_0;
	// System.String System.CodeDom.Compiler.GeneratedCodeAttribute::version
	String_t* ___version_1;

public:
	inline static int32_t get_offset_of_tool_0() { return static_cast<int32_t>(offsetof(GeneratedCodeAttribute_t1133842240, ___tool_0)); }
	inline String_t* get_tool_0() const { return ___tool_0; }
	inline String_t** get_address_of_tool_0() { return &___tool_0; }
	inline void set_tool_0(String_t* value)
	{
		___tool_0 = value;
		Il2CppCodeGenWriteBarrier((&___tool_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(GeneratedCodeAttribute_t1133842240, ___version_1)); }
	inline String_t* get_version_1() const { return ___version_1; }
	inline String_t** get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(String_t* value)
	{
		___version_1 = value;
		Il2CppCodeGenWriteBarrier((&___version_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDCODEATTRIBUTE_T1133842240_H
#ifndef NAMEVALUECOLLECTION_T407452768_H
#define NAMEVALUECOLLECTION_T407452768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t407452768  : public NameObjectCollectionBase_t2091847364
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t1281789340* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t1281789340* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t1281789340* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t1281789340** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t1281789340* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ___cachedAll_11)); }
	inline StringU5BU5D_t1281789340* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t1281789340** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t1281789340* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T407452768_H
#ifndef PROCESSSTRINGDICTIONARY_T2107791454_H
#define PROCESSSTRINGDICTIONARY_T2107791454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ProcessStringDictionary
struct  ProcessStringDictionary_t2107791454  : public StringDictionary_t120437468
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.ProcessStringDictionary::table
	Hashtable_t1853889766 * ___table_1;

public:
	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(ProcessStringDictionary_t2107791454, ___table_1)); }
	inline Hashtable_t1853889766 * get_table_1() const { return ___table_1; }
	inline Hashtable_t1853889766 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t1853889766 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier((&___table_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSSTRINGDICTIONARY_T2107791454_H
#ifndef ADDINGNEWEVENTARGS_T2974299087_H
#define ADDINGNEWEVENTARGS_T2974299087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AddingNewEventArgs
struct  AddingNewEventArgs_t2974299087  : public EventArgs_t3591816995
{
public:
	// System.Object System.ComponentModel.AddingNewEventArgs::obj
	RuntimeObject * ___obj_1;

public:
	inline static int32_t get_offset_of_obj_1() { return static_cast<int32_t>(offsetof(AddingNewEventArgs_t2974299087, ___obj_1)); }
	inline RuntimeObject * get_obj_1() const { return ___obj_1; }
	inline RuntimeObject ** get_address_of_obj_1() { return &___obj_1; }
	inline void set_obj_1(RuntimeObject * value)
	{
		___obj_1 = value;
		Il2CppCodeGenWriteBarrier((&___obj_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDINGNEWEVENTARGS_T2974299087_H
#ifndef AMBIENTVALUEATTRIBUTE_T2400237513_H
#define AMBIENTVALUEATTRIBUTE_T2400237513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AmbientValueAttribute
struct  AmbientValueAttribute_t2400237513  : public Attribute_t861562559
{
public:
	// System.Object System.ComponentModel.AmbientValueAttribute::AmbientValue
	RuntimeObject * ___AmbientValue_0;

public:
	inline static int32_t get_offset_of_AmbientValue_0() { return static_cast<int32_t>(offsetof(AmbientValueAttribute_t2400237513, ___AmbientValue_0)); }
	inline RuntimeObject * get_AmbientValue_0() const { return ___AmbientValue_0; }
	inline RuntimeObject ** get_address_of_AmbientValue_0() { return &___AmbientValue_0; }
	inline void set_AmbientValue_0(RuntimeObject * value)
	{
		___AmbientValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___AmbientValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIENTVALUEATTRIBUTE_T2400237513_H
#ifndef ASYNCCOMPLETEDEVENTARGS_T1863481821_H
#define ASYNCCOMPLETEDEVENTARGS_T1863481821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncCompletedEventArgs
struct  AsyncCompletedEventArgs_t1863481821  : public EventArgs_t3591816995
{
public:
	// System.Exception System.ComponentModel.AsyncCompletedEventArgs::_error
	Exception_t * ____error_1;
	// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::_cancelled
	bool ____cancelled_2;
	// System.Object System.ComponentModel.AsyncCompletedEventArgs::_userState
	RuntimeObject * ____userState_3;

public:
	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t1863481821, ____error_1)); }
	inline Exception_t * get__error_1() const { return ____error_1; }
	inline Exception_t ** get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(Exception_t * value)
	{
		____error_1 = value;
		Il2CppCodeGenWriteBarrier((&____error_1), value);
	}

	inline static int32_t get_offset_of__cancelled_2() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t1863481821, ____cancelled_2)); }
	inline bool get__cancelled_2() const { return ____cancelled_2; }
	inline bool* get_address_of__cancelled_2() { return &____cancelled_2; }
	inline void set__cancelled_2(bool value)
	{
		____cancelled_2 = value;
	}

	inline static int32_t get_offset_of__userState_3() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t1863481821, ____userState_3)); }
	inline RuntimeObject * get__userState_3() const { return ____userState_3; }
	inline RuntimeObject ** get_address_of__userState_3() { return &____userState_3; }
	inline void set__userState_3(RuntimeObject * value)
	{
		____userState_3 = value;
		Il2CppCodeGenWriteBarrier((&____userState_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCOMPLETEDEVENTARGS_T1863481821_H
#ifndef ATTRIBUTEPROVIDERATTRIBUTE_T3532483438_H
#define ATTRIBUTEPROVIDERATTRIBUTE_T3532483438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeProviderAttribute
struct  AttributeProviderAttribute_t3532483438  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.AttributeProviderAttribute::type_name
	String_t* ___type_name_0;
	// System.String System.ComponentModel.AttributeProviderAttribute::property_name
	String_t* ___property_name_1;

public:
	inline static int32_t get_offset_of_type_name_0() { return static_cast<int32_t>(offsetof(AttributeProviderAttribute_t3532483438, ___type_name_0)); }
	inline String_t* get_type_name_0() const { return ___type_name_0; }
	inline String_t** get_address_of_type_name_0() { return &___type_name_0; }
	inline void set_type_name_0(String_t* value)
	{
		___type_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_0), value);
	}

	inline static int32_t get_offset_of_property_name_1() { return static_cast<int32_t>(offsetof(AttributeProviderAttribute_t3532483438, ___property_name_1)); }
	inline String_t* get_property_name_1() const { return ___property_name_1; }
	inline String_t** get_address_of_property_name_1() { return &___property_name_1; }
	inline void set_property_name_1(String_t* value)
	{
		___property_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEPROVIDERATTRIBUTE_T3532483438_H
#ifndef BASENUMBERCONVERTER_T312147029_H
#define BASENUMBERCONVERTER_T312147029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t312147029  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t312147029, ___InnerType_0)); }
	inline Type_t * get_InnerType_0() const { return ___InnerType_0; }
	inline Type_t ** get_address_of_InnerType_0() { return &___InnerType_0; }
	inline void set_InnerType_0(Type_t * value)
	{
		___InnerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___InnerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T312147029_H
#ifndef BOOLEANCONVERTER_T941538927_H
#define BOOLEANCONVERTER_T941538927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t941538927  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T941538927_H
#ifndef BROWSABLEATTRIBUTE_T3407396667_H
#define BROWSABLEATTRIBUTE_T3407396667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t3407396667  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t3407396667_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t3407396667 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t3407396667 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t3407396667 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t3407396667 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t3407396667 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t3407396667 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t3407396667 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t3407396667 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t3407396667 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t3407396667 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t3407396667 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t3407396667 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T3407396667_H
#ifndef CANCELEVENTARGS_T1846056344_H
#define CANCELEVENTARGS_T1846056344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CancelEventArgs
struct  CancelEventArgs_t1846056344  : public EventArgs_t3591816995
{
public:
	// System.Boolean System.ComponentModel.CancelEventArgs::cancel
	bool ___cancel_1;

public:
	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(CancelEventArgs_t1846056344, ___cancel_1)); }
	inline bool get_cancel_1() const { return ___cancel_1; }
	inline bool* get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(bool value)
	{
		___cancel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELEVENTARGS_T1846056344_H
#ifndef CATEGORYATTRIBUTE_T39585132_H
#define CATEGORYATTRIBUTE_T39585132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t39585132  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t39585132_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::action
	CategoryAttribute_t39585132 * ___action_2;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::appearance
	CategoryAttribute_t39585132 * ___appearance_3;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::behaviour
	CategoryAttribute_t39585132 * ___behaviour_4;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::data
	CategoryAttribute_t39585132 * ___data_5;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t39585132 * ___def_6;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::design
	CategoryAttribute_t39585132 * ___design_7;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::drag_drop
	CategoryAttribute_t39585132 * ___drag_drop_8;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::focus
	CategoryAttribute_t39585132 * ___focus_9;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::format
	CategoryAttribute_t39585132 * ___format_10;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::key
	CategoryAttribute_t39585132 * ___key_11;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::layout
	CategoryAttribute_t39585132 * ___layout_12;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::mouse
	CategoryAttribute_t39585132 * ___mouse_13;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::window_style
	CategoryAttribute_t39585132 * ___window_style_14;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::async
	CategoryAttribute_t39585132 * ___async_15;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_16;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___action_2)); }
	inline CategoryAttribute_t39585132 * get_action_2() const { return ___action_2; }
	inline CategoryAttribute_t39585132 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(CategoryAttribute_t39585132 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_appearance_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___appearance_3)); }
	inline CategoryAttribute_t39585132 * get_appearance_3() const { return ___appearance_3; }
	inline CategoryAttribute_t39585132 ** get_address_of_appearance_3() { return &___appearance_3; }
	inline void set_appearance_3(CategoryAttribute_t39585132 * value)
	{
		___appearance_3 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_3), value);
	}

	inline static int32_t get_offset_of_behaviour_4() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___behaviour_4)); }
	inline CategoryAttribute_t39585132 * get_behaviour_4() const { return ___behaviour_4; }
	inline CategoryAttribute_t39585132 ** get_address_of_behaviour_4() { return &___behaviour_4; }
	inline void set_behaviour_4(CategoryAttribute_t39585132 * value)
	{
		___behaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___behaviour_4), value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___data_5)); }
	inline CategoryAttribute_t39585132 * get_data_5() const { return ___data_5; }
	inline CategoryAttribute_t39585132 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(CategoryAttribute_t39585132 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}

	inline static int32_t get_offset_of_def_6() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___def_6)); }
	inline CategoryAttribute_t39585132 * get_def_6() const { return ___def_6; }
	inline CategoryAttribute_t39585132 ** get_address_of_def_6() { return &___def_6; }
	inline void set_def_6(CategoryAttribute_t39585132 * value)
	{
		___def_6 = value;
		Il2CppCodeGenWriteBarrier((&___def_6), value);
	}

	inline static int32_t get_offset_of_design_7() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___design_7)); }
	inline CategoryAttribute_t39585132 * get_design_7() const { return ___design_7; }
	inline CategoryAttribute_t39585132 ** get_address_of_design_7() { return &___design_7; }
	inline void set_design_7(CategoryAttribute_t39585132 * value)
	{
		___design_7 = value;
		Il2CppCodeGenWriteBarrier((&___design_7), value);
	}

	inline static int32_t get_offset_of_drag_drop_8() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___drag_drop_8)); }
	inline CategoryAttribute_t39585132 * get_drag_drop_8() const { return ___drag_drop_8; }
	inline CategoryAttribute_t39585132 ** get_address_of_drag_drop_8() { return &___drag_drop_8; }
	inline void set_drag_drop_8(CategoryAttribute_t39585132 * value)
	{
		___drag_drop_8 = value;
		Il2CppCodeGenWriteBarrier((&___drag_drop_8), value);
	}

	inline static int32_t get_offset_of_focus_9() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___focus_9)); }
	inline CategoryAttribute_t39585132 * get_focus_9() const { return ___focus_9; }
	inline CategoryAttribute_t39585132 ** get_address_of_focus_9() { return &___focus_9; }
	inline void set_focus_9(CategoryAttribute_t39585132 * value)
	{
		___focus_9 = value;
		Il2CppCodeGenWriteBarrier((&___focus_9), value);
	}

	inline static int32_t get_offset_of_format_10() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___format_10)); }
	inline CategoryAttribute_t39585132 * get_format_10() const { return ___format_10; }
	inline CategoryAttribute_t39585132 ** get_address_of_format_10() { return &___format_10; }
	inline void set_format_10(CategoryAttribute_t39585132 * value)
	{
		___format_10 = value;
		Il2CppCodeGenWriteBarrier((&___format_10), value);
	}

	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___key_11)); }
	inline CategoryAttribute_t39585132 * get_key_11() const { return ___key_11; }
	inline CategoryAttribute_t39585132 ** get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(CategoryAttribute_t39585132 * value)
	{
		___key_11 = value;
		Il2CppCodeGenWriteBarrier((&___key_11), value);
	}

	inline static int32_t get_offset_of_layout_12() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___layout_12)); }
	inline CategoryAttribute_t39585132 * get_layout_12() const { return ___layout_12; }
	inline CategoryAttribute_t39585132 ** get_address_of_layout_12() { return &___layout_12; }
	inline void set_layout_12(CategoryAttribute_t39585132 * value)
	{
		___layout_12 = value;
		Il2CppCodeGenWriteBarrier((&___layout_12), value);
	}

	inline static int32_t get_offset_of_mouse_13() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___mouse_13)); }
	inline CategoryAttribute_t39585132 * get_mouse_13() const { return ___mouse_13; }
	inline CategoryAttribute_t39585132 ** get_address_of_mouse_13() { return &___mouse_13; }
	inline void set_mouse_13(CategoryAttribute_t39585132 * value)
	{
		___mouse_13 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_13), value);
	}

	inline static int32_t get_offset_of_window_style_14() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___window_style_14)); }
	inline CategoryAttribute_t39585132 * get_window_style_14() const { return ___window_style_14; }
	inline CategoryAttribute_t39585132 ** get_address_of_window_style_14() { return &___window_style_14; }
	inline void set_window_style_14(CategoryAttribute_t39585132 * value)
	{
		___window_style_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_style_14), value);
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___async_15)); }
	inline CategoryAttribute_t39585132 * get_async_15() const { return ___async_15; }
	inline CategoryAttribute_t39585132 ** get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(CategoryAttribute_t39585132 * value)
	{
		___async_15 = value;
		Il2CppCodeGenWriteBarrier((&___async_15), value);
	}

	inline static int32_t get_offset_of_lockobj_16() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___lockobj_16)); }
	inline RuntimeObject * get_lockobj_16() const { return ___lockobj_16; }
	inline RuntimeObject ** get_address_of_lockobj_16() { return &___lockobj_16; }
	inline void set_lockobj_16(RuntimeObject * value)
	{
		___lockobj_16 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYATTRIBUTE_T39585132_H
#ifndef CHARCONVERTER_T747842913_H
#define CHARCONVERTER_T747842913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t747842913  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T747842913_H
#ifndef COLLECTIONCONVERTER_T3078846443_H
#define COLLECTIONCONVERTER_T3078846443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t3078846443  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T3078846443_H
#ifndef COMPLEXBINDINGPROPERTIESATTRIBUTE_T270984817_H
#define COMPLEXBINDINGPROPERTIESATTRIBUTE_T270984817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComplexBindingPropertiesAttribute
struct  ComplexBindingPropertiesAttribute_t270984817  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.ComplexBindingPropertiesAttribute::data_source
	String_t* ___data_source_0;
	// System.String System.ComponentModel.ComplexBindingPropertiesAttribute::data_member
	String_t* ___data_member_1;

public:
	inline static int32_t get_offset_of_data_source_0() { return static_cast<int32_t>(offsetof(ComplexBindingPropertiesAttribute_t270984817, ___data_source_0)); }
	inline String_t* get_data_source_0() const { return ___data_source_0; }
	inline String_t** get_address_of_data_source_0() { return &___data_source_0; }
	inline void set_data_source_0(String_t* value)
	{
		___data_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_source_0), value);
	}

	inline static int32_t get_offset_of_data_member_1() { return static_cast<int32_t>(offsetof(ComplexBindingPropertiesAttribute_t270984817, ___data_member_1)); }
	inline String_t* get_data_member_1() const { return ___data_member_1; }
	inline String_t** get_address_of_data_member_1() { return &___data_member_1; }
	inline void set_data_member_1(String_t* value)
	{
		___data_member_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_member_1), value);
	}
};

struct ComplexBindingPropertiesAttribute_t270984817_StaticFields
{
public:
	// System.ComponentModel.ComplexBindingPropertiesAttribute System.ComponentModel.ComplexBindingPropertiesAttribute::Default
	ComplexBindingPropertiesAttribute_t270984817 * ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(ComplexBindingPropertiesAttribute_t270984817_StaticFields, ___Default_2)); }
	inline ComplexBindingPropertiesAttribute_t270984817 * get_Default_2() const { return ___Default_2; }
	inline ComplexBindingPropertiesAttribute_t270984817 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(ComplexBindingPropertiesAttribute_t270984817 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPLEXBINDINGPROPERTIESATTRIBUTE_T270984817_H
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
#ifndef COMPONENTCOLLECTION_T1445440302_H
#define COMPONENTCOLLECTION_T1445440302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t1445440302  : public ReadOnlyCollectionBase_t1836743899
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T1445440302_H
#ifndef COMPONENTRESOURCEMANAGER_T580139915_H
#define COMPONENTRESOURCEMANAGER_T580139915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentResourceManager
struct  ComponentResourceManager_t580139915  : public ResourceManager_t4037989559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTRESOURCEMANAGER_T580139915_H
#ifndef CULTUREINFOCONVERTER_T81550636_H
#define CULTUREINFOCONVERTER_T81550636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t81550636  : public TypeConverter_t2249118273
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t2184948248 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t81550636, ____standardValues_0)); }
	inline StandardValuesCollection_t2184948248 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t2184948248 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t2184948248 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T81550636_H
#ifndef DATAOBJECTATTRIBUTE_T2230598060_H
#define DATAOBJECTATTRIBUTE_T2230598060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DataObjectAttribute
struct  DataObjectAttribute_t2230598060  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.DataObjectAttribute::_isDataObject
	bool ____isDataObject_3;

public:
	inline static int32_t get_offset_of__isDataObject_3() { return static_cast<int32_t>(offsetof(DataObjectAttribute_t2230598060, ____isDataObject_3)); }
	inline bool get__isDataObject_3() const { return ____isDataObject_3; }
	inline bool* get_address_of__isDataObject_3() { return &____isDataObject_3; }
	inline void set__isDataObject_3(bool value)
	{
		____isDataObject_3 = value;
	}
};

struct DataObjectAttribute_t2230598060_StaticFields
{
public:
	// System.ComponentModel.DataObjectAttribute System.ComponentModel.DataObjectAttribute::DataObject
	DataObjectAttribute_t2230598060 * ___DataObject_0;
	// System.ComponentModel.DataObjectAttribute System.ComponentModel.DataObjectAttribute::Default
	DataObjectAttribute_t2230598060 * ___Default_1;
	// System.ComponentModel.DataObjectAttribute System.ComponentModel.DataObjectAttribute::NonDataObject
	DataObjectAttribute_t2230598060 * ___NonDataObject_2;

public:
	inline static int32_t get_offset_of_DataObject_0() { return static_cast<int32_t>(offsetof(DataObjectAttribute_t2230598060_StaticFields, ___DataObject_0)); }
	inline DataObjectAttribute_t2230598060 * get_DataObject_0() const { return ___DataObject_0; }
	inline DataObjectAttribute_t2230598060 ** get_address_of_DataObject_0() { return &___DataObject_0; }
	inline void set_DataObject_0(DataObjectAttribute_t2230598060 * value)
	{
		___DataObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___DataObject_0), value);
	}

	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DataObjectAttribute_t2230598060_StaticFields, ___Default_1)); }
	inline DataObjectAttribute_t2230598060 * get_Default_1() const { return ___Default_1; }
	inline DataObjectAttribute_t2230598060 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DataObjectAttribute_t2230598060 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_NonDataObject_2() { return static_cast<int32_t>(offsetof(DataObjectAttribute_t2230598060_StaticFields, ___NonDataObject_2)); }
	inline DataObjectAttribute_t2230598060 * get_NonDataObject_2() const { return ___NonDataObject_2; }
	inline DataObjectAttribute_t2230598060 ** get_address_of_NonDataObject_2() { return &___NonDataObject_2; }
	inline void set_NonDataObject_2(DataObjectAttribute_t2230598060 * value)
	{
		___NonDataObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___NonDataObject_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAOBJECTATTRIBUTE_T2230598060_H
#ifndef DATAOBJECTFIELDATTRIBUTE_T1968002332_H
#define DATAOBJECTFIELDATTRIBUTE_T1968002332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DataObjectFieldAttribute
struct  DataObjectFieldAttribute_t1968002332  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.DataObjectFieldAttribute::primary_key
	bool ___primary_key_0;
	// System.Boolean System.ComponentModel.DataObjectFieldAttribute::is_identity
	bool ___is_identity_1;
	// System.Boolean System.ComponentModel.DataObjectFieldAttribute::is_nullable
	bool ___is_nullable_2;
	// System.Int32 System.ComponentModel.DataObjectFieldAttribute::length
	int32_t ___length_3;

public:
	inline static int32_t get_offset_of_primary_key_0() { return static_cast<int32_t>(offsetof(DataObjectFieldAttribute_t1968002332, ___primary_key_0)); }
	inline bool get_primary_key_0() const { return ___primary_key_0; }
	inline bool* get_address_of_primary_key_0() { return &___primary_key_0; }
	inline void set_primary_key_0(bool value)
	{
		___primary_key_0 = value;
	}

	inline static int32_t get_offset_of_is_identity_1() { return static_cast<int32_t>(offsetof(DataObjectFieldAttribute_t1968002332, ___is_identity_1)); }
	inline bool get_is_identity_1() const { return ___is_identity_1; }
	inline bool* get_address_of_is_identity_1() { return &___is_identity_1; }
	inline void set_is_identity_1(bool value)
	{
		___is_identity_1 = value;
	}

	inline static int32_t get_offset_of_is_nullable_2() { return static_cast<int32_t>(offsetof(DataObjectFieldAttribute_t1968002332, ___is_nullable_2)); }
	inline bool get_is_nullable_2() const { return ___is_nullable_2; }
	inline bool* get_address_of_is_nullable_2() { return &___is_nullable_2; }
	inline void set_is_nullable_2(bool value)
	{
		___is_nullable_2 = value;
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(DataObjectFieldAttribute_t1968002332, ___length_3)); }
	inline int32_t get_length_3() const { return ___length_3; }
	inline int32_t* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(int32_t value)
	{
		___length_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAOBJECTFIELDATTRIBUTE_T1968002332_H
#ifndef DATETIMECONVERTER_T2298802450_H
#define DATETIMECONVERTER_T2298802450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t2298802450  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T2298802450_H
#ifndef DEFAULTBINDINGPROPERTYATTRIBUTE_T2784669275_H
#define DEFAULTBINDINGPROPERTYATTRIBUTE_T2784669275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultBindingPropertyAttribute
struct  DefaultBindingPropertyAttribute_t2784669275  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DefaultBindingPropertyAttribute::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(DefaultBindingPropertyAttribute_t2784669275, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}
};

struct DefaultBindingPropertyAttribute_t2784669275_StaticFields
{
public:
	// System.ComponentModel.DefaultBindingPropertyAttribute System.ComponentModel.DefaultBindingPropertyAttribute::Default
	DefaultBindingPropertyAttribute_t2784669275 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DefaultBindingPropertyAttribute_t2784669275_StaticFields, ___Default_0)); }
	inline DefaultBindingPropertyAttribute_t2784669275 * get_Default_0() const { return ___Default_0; }
	inline DefaultBindingPropertyAttribute_t2784669275 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DefaultBindingPropertyAttribute_t2784669275 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTBINDINGPROPERTYATTRIBUTE_T2784669275_H
#ifndef DEFAULTEVENTATTRIBUTE_T3124666540_H
#define DEFAULTEVENTATTRIBUTE_T3124666540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t3124666540  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3124666540, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t3124666540_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t3124666540 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3124666540_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t3124666540 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t3124666540 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t3124666540 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T3124666540_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T1952442862_H
#define DEFAULTPROPERTYATTRIBUTE_T1952442862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t1952442862  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1952442862, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t1952442862_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t1952442862 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1952442862_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t1952442862 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t1952442862 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t1952442862 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T1952442862_H
#ifndef DEFAULTVALUEATTRIBUTE_T587583663_H
#define DEFAULTVALUEATTRIBUTE_T587583663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t587583663  : public Attribute_t861562559
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t587583663, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T587583663_H
#ifndef DESCRIPTIONATTRIBUTE_T874390736_H
#define DESCRIPTIONATTRIBUTE_T874390736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t874390736  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t874390736_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t874390736 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t874390736 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t874390736 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t874390736 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T874390736_H
#ifndef DESIGNERATTRIBUTE_T2079716647_H
#define DESIGNERATTRIBUTE_T2079716647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t2079716647  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2079716647, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2079716647, ___basetypename_1)); }
	inline String_t* get_basetypename_1() const { return ___basetypename_1; }
	inline String_t** get_address_of_basetypename_1() { return &___basetypename_1; }
	inline void set_basetypename_1(String_t* value)
	{
		___basetypename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basetypename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T2079716647_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T2912925731_H
#define DESIGNERCATEGORYATTRIBUTE_T2912925731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t2912925731  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t2912925731_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t2912925731 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t2912925731 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t2912925731 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t2912925731 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T2912925731_H
#ifndef PROPERTYDESCRIPTOR_T3244362832_H
#define PROPERTYDESCRIPTOR_T3244362832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3244362832  : public MemberDescriptor_t3815403747
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t2249118273 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t1853889766 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___converter_4)); }
	inline TypeConverter_t2249118273 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t2249118273 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t2249118273 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___notifiers_5)); }
	inline Hashtable_t1853889766 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t1853889766 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t1853889766 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T3244362832_H
#ifndef REFERENCECONVERTER_T1811933861_H
#define REFERENCECONVERTER_T1811933861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1811933861  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1811933861, ___reference_type_0)); }
	inline Type_t * get_reference_type_0() const { return ___reference_type_0; }
	inline Type_t ** get_address_of_reference_type_0() { return &___reference_type_0; }
	inline void set_reference_type_0(Type_t * value)
	{
		___reference_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___reference_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T1811933861_H
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
#ifndef CODEDOMPROVIDER_T110349836_H
#define CODEDOMPROVIDER_T110349836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CodeDomProvider
struct  CodeDomProvider_t110349836  : public Component_t3620823400
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEDOMPROVIDER_T110349836_H
#ifndef COMPILERPARAMETERS_T2325000967_H
#define COMPILERPARAMETERS_T2325000967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CompilerParameters
struct  CompilerParameters_t2325000967  : public RuntimeObject
{
public:
	// System.String System.CodeDom.Compiler.CompilerParameters::compilerOptions
	String_t* ___compilerOptions_0;
	// System.Security.Policy.Evidence System.CodeDom.Compiler.CompilerParameters::evidence
	Evidence_t2008144148 * ___evidence_1;
	// System.Boolean System.CodeDom.Compiler.CompilerParameters::generateExecutable
	bool ___generateExecutable_2;
	// System.Boolean System.CodeDom.Compiler.CompilerParameters::generateInMemory
	bool ___generateInMemory_3;
	// System.Boolean System.CodeDom.Compiler.CompilerParameters::includeDebugInformation
	bool ___includeDebugInformation_4;
	// System.String System.CodeDom.Compiler.CompilerParameters::outputAssembly
	String_t* ___outputAssembly_5;
	// System.Collections.Specialized.StringCollection System.CodeDom.Compiler.CompilerParameters::referencedAssemblies
	StringCollection_t167406615 * ___referencedAssemblies_6;
	// System.CodeDom.Compiler.TempFileCollection System.CodeDom.Compiler.CompilerParameters::tempFiles
	TempFileCollection_t2060973068 * ___tempFiles_7;
	// System.Boolean System.CodeDom.Compiler.CompilerParameters::treatWarningsAsErrors
	bool ___treatWarningsAsErrors_8;
	// System.IntPtr System.CodeDom.Compiler.CompilerParameters::userToken
	intptr_t ___userToken_9;
	// System.Int32 System.CodeDom.Compiler.CompilerParameters::warningLevel
	int32_t ___warningLevel_10;
	// System.String System.CodeDom.Compiler.CompilerParameters::win32Resource
	String_t* ___win32Resource_11;
	// System.Collections.Specialized.StringCollection System.CodeDom.Compiler.CompilerParameters::embedded_resources
	StringCollection_t167406615 * ___embedded_resources_12;
	// System.Collections.Specialized.StringCollection System.CodeDom.Compiler.CompilerParameters::linked_resources
	StringCollection_t167406615 * ___linked_resources_13;

public:
	inline static int32_t get_offset_of_compilerOptions_0() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___compilerOptions_0)); }
	inline String_t* get_compilerOptions_0() const { return ___compilerOptions_0; }
	inline String_t** get_address_of_compilerOptions_0() { return &___compilerOptions_0; }
	inline void set_compilerOptions_0(String_t* value)
	{
		___compilerOptions_0 = value;
		Il2CppCodeGenWriteBarrier((&___compilerOptions_0), value);
	}

	inline static int32_t get_offset_of_evidence_1() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___evidence_1)); }
	inline Evidence_t2008144148 * get_evidence_1() const { return ___evidence_1; }
	inline Evidence_t2008144148 ** get_address_of_evidence_1() { return &___evidence_1; }
	inline void set_evidence_1(Evidence_t2008144148 * value)
	{
		___evidence_1 = value;
		Il2CppCodeGenWriteBarrier((&___evidence_1), value);
	}

	inline static int32_t get_offset_of_generateExecutable_2() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___generateExecutable_2)); }
	inline bool get_generateExecutable_2() const { return ___generateExecutable_2; }
	inline bool* get_address_of_generateExecutable_2() { return &___generateExecutable_2; }
	inline void set_generateExecutable_2(bool value)
	{
		___generateExecutable_2 = value;
	}

	inline static int32_t get_offset_of_generateInMemory_3() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___generateInMemory_3)); }
	inline bool get_generateInMemory_3() const { return ___generateInMemory_3; }
	inline bool* get_address_of_generateInMemory_3() { return &___generateInMemory_3; }
	inline void set_generateInMemory_3(bool value)
	{
		___generateInMemory_3 = value;
	}

	inline static int32_t get_offset_of_includeDebugInformation_4() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___includeDebugInformation_4)); }
	inline bool get_includeDebugInformation_4() const { return ___includeDebugInformation_4; }
	inline bool* get_address_of_includeDebugInformation_4() { return &___includeDebugInformation_4; }
	inline void set_includeDebugInformation_4(bool value)
	{
		___includeDebugInformation_4 = value;
	}

	inline static int32_t get_offset_of_outputAssembly_5() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___outputAssembly_5)); }
	inline String_t* get_outputAssembly_5() const { return ___outputAssembly_5; }
	inline String_t** get_address_of_outputAssembly_5() { return &___outputAssembly_5; }
	inline void set_outputAssembly_5(String_t* value)
	{
		___outputAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___outputAssembly_5), value);
	}

	inline static int32_t get_offset_of_referencedAssemblies_6() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___referencedAssemblies_6)); }
	inline StringCollection_t167406615 * get_referencedAssemblies_6() const { return ___referencedAssemblies_6; }
	inline StringCollection_t167406615 ** get_address_of_referencedAssemblies_6() { return &___referencedAssemblies_6; }
	inline void set_referencedAssemblies_6(StringCollection_t167406615 * value)
	{
		___referencedAssemblies_6 = value;
		Il2CppCodeGenWriteBarrier((&___referencedAssemblies_6), value);
	}

	inline static int32_t get_offset_of_tempFiles_7() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___tempFiles_7)); }
	inline TempFileCollection_t2060973068 * get_tempFiles_7() const { return ___tempFiles_7; }
	inline TempFileCollection_t2060973068 ** get_address_of_tempFiles_7() { return &___tempFiles_7; }
	inline void set_tempFiles_7(TempFileCollection_t2060973068 * value)
	{
		___tempFiles_7 = value;
		Il2CppCodeGenWriteBarrier((&___tempFiles_7), value);
	}

	inline static int32_t get_offset_of_treatWarningsAsErrors_8() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___treatWarningsAsErrors_8)); }
	inline bool get_treatWarningsAsErrors_8() const { return ___treatWarningsAsErrors_8; }
	inline bool* get_address_of_treatWarningsAsErrors_8() { return &___treatWarningsAsErrors_8; }
	inline void set_treatWarningsAsErrors_8(bool value)
	{
		___treatWarningsAsErrors_8 = value;
	}

	inline static int32_t get_offset_of_userToken_9() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___userToken_9)); }
	inline intptr_t get_userToken_9() const { return ___userToken_9; }
	inline intptr_t* get_address_of_userToken_9() { return &___userToken_9; }
	inline void set_userToken_9(intptr_t value)
	{
		___userToken_9 = value;
	}

	inline static int32_t get_offset_of_warningLevel_10() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___warningLevel_10)); }
	inline int32_t get_warningLevel_10() const { return ___warningLevel_10; }
	inline int32_t* get_address_of_warningLevel_10() { return &___warningLevel_10; }
	inline void set_warningLevel_10(int32_t value)
	{
		___warningLevel_10 = value;
	}

	inline static int32_t get_offset_of_win32Resource_11() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___win32Resource_11)); }
	inline String_t* get_win32Resource_11() const { return ___win32Resource_11; }
	inline String_t** get_address_of_win32Resource_11() { return &___win32Resource_11; }
	inline void set_win32Resource_11(String_t* value)
	{
		___win32Resource_11 = value;
		Il2CppCodeGenWriteBarrier((&___win32Resource_11), value);
	}

	inline static int32_t get_offset_of_embedded_resources_12() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___embedded_resources_12)); }
	inline StringCollection_t167406615 * get_embedded_resources_12() const { return ___embedded_resources_12; }
	inline StringCollection_t167406615 ** get_address_of_embedded_resources_12() { return &___embedded_resources_12; }
	inline void set_embedded_resources_12(StringCollection_t167406615 * value)
	{
		___embedded_resources_12 = value;
		Il2CppCodeGenWriteBarrier((&___embedded_resources_12), value);
	}

	inline static int32_t get_offset_of_linked_resources_13() { return static_cast<int32_t>(offsetof(CompilerParameters_t2325000967, ___linked_resources_13)); }
	inline StringCollection_t167406615 * get_linked_resources_13() const { return ___linked_resources_13; }
	inline StringCollection_t167406615 ** get_address_of_linked_resources_13() { return &___linked_resources_13; }
	inline void set_linked_resources_13(StringCollection_t167406615 * value)
	{
		___linked_resources_13 = value;
		Il2CppCodeGenWriteBarrier((&___linked_resources_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERPARAMETERS_T2325000967_H
#ifndef MEMBERATTRIBUTES_T1258384723_H
#define MEMBERATTRIBUTES_T1258384723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.MemberAttributes
struct  MemberAttributes_t1258384723 
{
public:
	// System.Int32 System.CodeDom.MemberAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberAttributes_t1258384723, ___value___1)); }
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
#endif // MEMBERATTRIBUTES_T1258384723_H
#ifndef ARRAYCONVERTER_T1750795769_H
#define ARRAYCONVERTER_T1750795769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t1750795769  : public CollectionConverter_t3078846443
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T1750795769_H
#ifndef ARRAYPROPERTYDESCRIPTOR_T157990669_H
#define ARRAYPROPERTYDESCRIPTOR_T157990669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct  ArrayPropertyDescriptor_t157990669  : public PropertyDescriptor_t3244362832
{
public:
	// System.Int32 System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::index
	int32_t ___index_6;
	// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::array_type
	Type_t * ___array_type_7;

public:
	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t157990669, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}

	inline static int32_t get_offset_of_array_type_7() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t157990669, ___array_type_7)); }
	inline Type_t * get_array_type_7() const { return ___array_type_7; }
	inline Type_t ** get_address_of_array_type_7() { return &___array_type_7; }
	inline void set_array_type_7(Type_t * value)
	{
		___array_type_7 = value;
		Il2CppCodeGenWriteBarrier((&___array_type_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYPROPERTYDESCRIPTOR_T157990669_H
#ifndef BACKGROUNDWORKER_T3811013447_H
#define BACKGROUNDWORKER_T3811013447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker
struct  BackgroundWorker_t3811013447  : public Component_t3620823400
{
public:
	// System.ComponentModel.AsyncOperation System.ComponentModel.BackgroundWorker::async
	AsyncOperation_t2743648699 * ___async_4;
	// System.Boolean System.ComponentModel.BackgroundWorker::cancel_pending
	bool ___cancel_pending_5;
	// System.Boolean System.ComponentModel.BackgroundWorker::report_progress
	bool ___report_progress_6;
	// System.Boolean System.ComponentModel.BackgroundWorker::support_cancel
	bool ___support_cancel_7;
	// System.ComponentModel.DoWorkEventHandler System.ComponentModel.BackgroundWorker::DoWork
	DoWorkEventHandler_t3704776641 * ___DoWork_8;
	// System.ComponentModel.ProgressChangedEventHandler System.ComponentModel.BackgroundWorker::ProgressChanged
	ProgressChangedEventHandler_t1213062803 * ___ProgressChanged_9;
	// System.ComponentModel.RunWorkerCompletedEventHandler System.ComponentModel.BackgroundWorker::RunWorkerCompleted
	RunWorkerCompletedEventHandler_t2386199656 * ___RunWorkerCompleted_10;

public:
	inline static int32_t get_offset_of_async_4() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___async_4)); }
	inline AsyncOperation_t2743648699 * get_async_4() const { return ___async_4; }
	inline AsyncOperation_t2743648699 ** get_address_of_async_4() { return &___async_4; }
	inline void set_async_4(AsyncOperation_t2743648699 * value)
	{
		___async_4 = value;
		Il2CppCodeGenWriteBarrier((&___async_4), value);
	}

	inline static int32_t get_offset_of_cancel_pending_5() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___cancel_pending_5)); }
	inline bool get_cancel_pending_5() const { return ___cancel_pending_5; }
	inline bool* get_address_of_cancel_pending_5() { return &___cancel_pending_5; }
	inline void set_cancel_pending_5(bool value)
	{
		___cancel_pending_5 = value;
	}

	inline static int32_t get_offset_of_report_progress_6() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___report_progress_6)); }
	inline bool get_report_progress_6() const { return ___report_progress_6; }
	inline bool* get_address_of_report_progress_6() { return &___report_progress_6; }
	inline void set_report_progress_6(bool value)
	{
		___report_progress_6 = value;
	}

	inline static int32_t get_offset_of_support_cancel_7() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___support_cancel_7)); }
	inline bool get_support_cancel_7() const { return ___support_cancel_7; }
	inline bool* get_address_of_support_cancel_7() { return &___support_cancel_7; }
	inline void set_support_cancel_7(bool value)
	{
		___support_cancel_7 = value;
	}

	inline static int32_t get_offset_of_DoWork_8() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___DoWork_8)); }
	inline DoWorkEventHandler_t3704776641 * get_DoWork_8() const { return ___DoWork_8; }
	inline DoWorkEventHandler_t3704776641 ** get_address_of_DoWork_8() { return &___DoWork_8; }
	inline void set_DoWork_8(DoWorkEventHandler_t3704776641 * value)
	{
		___DoWork_8 = value;
		Il2CppCodeGenWriteBarrier((&___DoWork_8), value);
	}

	inline static int32_t get_offset_of_ProgressChanged_9() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___ProgressChanged_9)); }
	inline ProgressChangedEventHandler_t1213062803 * get_ProgressChanged_9() const { return ___ProgressChanged_9; }
	inline ProgressChangedEventHandler_t1213062803 ** get_address_of_ProgressChanged_9() { return &___ProgressChanged_9; }
	inline void set_ProgressChanged_9(ProgressChangedEventHandler_t1213062803 * value)
	{
		___ProgressChanged_9 = value;
		Il2CppCodeGenWriteBarrier((&___ProgressChanged_9), value);
	}

	inline static int32_t get_offset_of_RunWorkerCompleted_10() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___RunWorkerCompleted_10)); }
	inline RunWorkerCompletedEventHandler_t2386199656 * get_RunWorkerCompleted_10() const { return ___RunWorkerCompleted_10; }
	inline RunWorkerCompletedEventHandler_t2386199656 ** get_address_of_RunWorkerCompleted_10() { return &___RunWorkerCompleted_10; }
	inline void set_RunWorkerCompleted_10(RunWorkerCompletedEventHandler_t2386199656 * value)
	{
		___RunWorkerCompleted_10 = value;
		Il2CppCodeGenWriteBarrier((&___RunWorkerCompleted_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDWORKER_T3811013447_H
#ifndef BINDABLESUPPORT_T3743993600_H
#define BINDABLESUPPORT_T3743993600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BindableSupport
struct  BindableSupport_t3743993600 
{
public:
	// System.Int32 System.ComponentModel.BindableSupport::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindableSupport_t3743993600, ___value___1)); }
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
#endif // BINDABLESUPPORT_T3743993600_H
#ifndef BINDINGDIRECTION_T2741897897_H
#define BINDINGDIRECTION_T2741897897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BindingDirection
struct  BindingDirection_t2741897897 
{
public:
	// System.Int32 System.ComponentModel.BindingDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingDirection_t2741897897, ___value___1)); }
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
#endif // BINDINGDIRECTION_T2741897897_H
#ifndef BYTECONVERTER_T1408362843_H
#define BYTECONVERTER_T1408362843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t1408362843  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T1408362843_H
#ifndef COLLECTIONCHANGEACTION_T1145968582_H
#define COLLECTIONCHANGEACTION_T1145968582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t1145968582 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t1145968582, ___value___1)); }
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
#endif // COLLECTIONCHANGEACTION_T1145968582_H
#ifndef COMPONENTCONVERTER_T118941221_H
#define COMPONENTCONVERTER_T118941221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t118941221  : public ReferenceConverter_t1811933861
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T118941221_H
#ifndef DATAOBJECTMETHODTYPE_T1401893077_H
#define DATAOBJECTMETHODTYPE_T1401893077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DataObjectMethodType
struct  DataObjectMethodType_t1401893077 
{
public:
	// System.Int32 System.ComponentModel.DataObjectMethodType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataObjectMethodType_t1401893077, ___value___1)); }
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
#endif // DATAOBJECTMETHODTYPE_T1401893077_H
#ifndef DECIMALCONVERTER_T3574141665_H
#define DECIMALCONVERTER_T3574141665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t3574141665  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T3574141665_H
#ifndef DERIVEDPROPERTYDESCRIPTOR_T1535669269_H
#define DERIVEDPROPERTYDESCRIPTOR_T1535669269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DerivedPropertyDescriptor
struct  DerivedPropertyDescriptor_t1535669269  : public PropertyDescriptor_t3244362832
{
public:
	// System.Boolean System.ComponentModel.DerivedPropertyDescriptor::readOnly
	bool ___readOnly_6;
	// System.Type System.ComponentModel.DerivedPropertyDescriptor::componentType
	Type_t * ___componentType_7;
	// System.Type System.ComponentModel.DerivedPropertyDescriptor::propertyType
	Type_t * ___propertyType_8;
	// System.Reflection.PropertyInfo System.ComponentModel.DerivedPropertyDescriptor::prop
	PropertyInfo_t * ___prop_9;

public:
	inline static int32_t get_offset_of_readOnly_6() { return static_cast<int32_t>(offsetof(DerivedPropertyDescriptor_t1535669269, ___readOnly_6)); }
	inline bool get_readOnly_6() const { return ___readOnly_6; }
	inline bool* get_address_of_readOnly_6() { return &___readOnly_6; }
	inline void set_readOnly_6(bool value)
	{
		___readOnly_6 = value;
	}

	inline static int32_t get_offset_of_componentType_7() { return static_cast<int32_t>(offsetof(DerivedPropertyDescriptor_t1535669269, ___componentType_7)); }
	inline Type_t * get_componentType_7() const { return ___componentType_7; }
	inline Type_t ** get_address_of_componentType_7() { return &___componentType_7; }
	inline void set_componentType_7(Type_t * value)
	{
		___componentType_7 = value;
		Il2CppCodeGenWriteBarrier((&___componentType_7), value);
	}

	inline static int32_t get_offset_of_propertyType_8() { return static_cast<int32_t>(offsetof(DerivedPropertyDescriptor_t1535669269, ___propertyType_8)); }
	inline Type_t * get_propertyType_8() const { return ___propertyType_8; }
	inline Type_t ** get_address_of_propertyType_8() { return &___propertyType_8; }
	inline void set_propertyType_8(Type_t * value)
	{
		___propertyType_8 = value;
		Il2CppCodeGenWriteBarrier((&___propertyType_8), value);
	}

	inline static int32_t get_offset_of_prop_9() { return static_cast<int32_t>(offsetof(DerivedPropertyDescriptor_t1535669269, ___prop_9)); }
	inline PropertyInfo_t * get_prop_9() const { return ___prop_9; }
	inline PropertyInfo_t ** get_address_of_prop_9() { return &___prop_9; }
	inline void set_prop_9(PropertyInfo_t * value)
	{
		___prop_9 = value;
		Il2CppCodeGenWriteBarrier((&___prop_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEDPROPERTYDESCRIPTOR_T1535669269_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T3481291396_H
#define DESIGNERSERIALIZATIONVISIBILITY_T3481291396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t3481291396 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t3481291396, ___value___1)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T3481291396_H
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
#ifndef BINDABLEATTRIBUTE_T3255577478_H
#define BINDABLEATTRIBUTE_T3255577478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BindableAttribute
struct  BindableAttribute_t3255577478  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.BindableAttribute::bindable
	bool ___bindable_0;
	// System.ComponentModel.BindingDirection System.ComponentModel.BindableAttribute::direction
	int32_t ___direction_1;

public:
	inline static int32_t get_offset_of_bindable_0() { return static_cast<int32_t>(offsetof(BindableAttribute_t3255577478, ___bindable_0)); }
	inline bool get_bindable_0() const { return ___bindable_0; }
	inline bool* get_address_of_bindable_0() { return &___bindable_0; }
	inline void set_bindable_0(bool value)
	{
		___bindable_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(BindableAttribute_t3255577478, ___direction_1)); }
	inline int32_t get_direction_1() const { return ___direction_1; }
	inline int32_t* get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(int32_t value)
	{
		___direction_1 = value;
	}
};

struct BindableAttribute_t3255577478_StaticFields
{
public:
	// System.ComponentModel.BindableAttribute System.ComponentModel.BindableAttribute::No
	BindableAttribute_t3255577478 * ___No_2;
	// System.ComponentModel.BindableAttribute System.ComponentModel.BindableAttribute::Yes
	BindableAttribute_t3255577478 * ___Yes_3;
	// System.ComponentModel.BindableAttribute System.ComponentModel.BindableAttribute::Default
	BindableAttribute_t3255577478 * ___Default_4;

public:
	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BindableAttribute_t3255577478_StaticFields, ___No_2)); }
	inline BindableAttribute_t3255577478 * get_No_2() const { return ___No_2; }
	inline BindableAttribute_t3255577478 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BindableAttribute_t3255577478 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BindableAttribute_t3255577478_StaticFields, ___Yes_3)); }
	inline BindableAttribute_t3255577478 * get_Yes_3() const { return ___Yes_3; }
	inline BindableAttribute_t3255577478 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BindableAttribute_t3255577478 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(BindableAttribute_t3255577478_StaticFields, ___Default_4)); }
	inline BindableAttribute_t3255577478 * get_Default_4() const { return ___Default_4; }
	inline BindableAttribute_t3255577478 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(BindableAttribute_t3255577478 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDABLEATTRIBUTE_T3255577478_H
#ifndef COLLECTIONCHANGEEVENTARGS_T1870286136_H
#define COLLECTIONCHANGEEVENTARGS_T1870286136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t1870286136  : public EventArgs_t3591816995
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1870286136, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1870286136, ___theElement_2)); }
	inline RuntimeObject * get_theElement_2() const { return ___theElement_2; }
	inline RuntimeObject ** get_address_of_theElement_2() { return &___theElement_2; }
	inline void set_theElement_2(RuntimeObject * value)
	{
		___theElement_2 = value;
		Il2CppCodeGenWriteBarrier((&___theElement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTARGS_T1870286136_H
#ifndef DATAOBJECTMETHODATTRIBUTE_T1051675261_H
#define DATAOBJECTMETHODATTRIBUTE_T1051675261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DataObjectMethodAttribute
struct  DataObjectMethodAttribute_t1051675261  : public Attribute_t861562559
{
public:
	// System.ComponentModel.DataObjectMethodType System.ComponentModel.DataObjectMethodAttribute::_methodType
	int32_t ____methodType_0;
	// System.Boolean System.ComponentModel.DataObjectMethodAttribute::_isDefault
	bool ____isDefault_1;

public:
	inline static int32_t get_offset_of__methodType_0() { return static_cast<int32_t>(offsetof(DataObjectMethodAttribute_t1051675261, ____methodType_0)); }
	inline int32_t get__methodType_0() const { return ____methodType_0; }
	inline int32_t* get_address_of__methodType_0() { return &____methodType_0; }
	inline void set__methodType_0(int32_t value)
	{
		____methodType_0 = value;
	}

	inline static int32_t get_offset_of__isDefault_1() { return static_cast<int32_t>(offsetof(DataObjectMethodAttribute_t1051675261, ____isDefault_1)); }
	inline bool get__isDefault_1() const { return ____isDefault_1; }
	inline bool* get_address_of__isDefault_1() { return &____isDefault_1; }
	inline void set__isDefault_1(bool value)
	{
		____isDefault_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAOBJECTMETHODATTRIBUTE_T1051675261_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T4084246596_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T4084246596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t4084246596  : public Attribute_t861562559
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t4084246596_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T4084246596_H
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
#ifndef PROCESSWORKEREVENTHANDLER_T952431846_H
#define PROCESSWORKEREVENTHANDLER_T952431846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler
struct  ProcessWorkerEventHandler_t952431846  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSWORKEREVENTHANDLER_T952431846_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (CodeDomProvider_t110349836), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (CodeGenerator_t1606279797), -1, sizeof(CodeGenerator_t1606279797_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1401[2] = 
{
	CodeGenerator_t1606279797::get_offset_of_visitor_0(),
	CodeGenerator_t1606279797_StaticFields::get_offset_of_memberTypes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (Visitor_t4039484693), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1402[1] = 
{
	Visitor_t4039484693::get_offset_of_g_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (CompilerErrorCollection_t2383307460), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (CompilerError_t2283741458), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1404[6] = 
{
	CompilerError_t2283741458::get_offset_of_fileName_0(),
	CompilerError_t2283741458::get_offset_of_line_1(),
	CompilerError_t2283741458::get_offset_of_column_2(),
	CompilerError_t2283741458::get_offset_of_errorNumber_3(),
	CompilerError_t2283741458::get_offset_of_errorText_4(),
	CompilerError_t2283741458::get_offset_of_isWarning_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (CompilerParameters_t2325000967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1405[14] = 
{
	CompilerParameters_t2325000967::get_offset_of_compilerOptions_0(),
	CompilerParameters_t2325000967::get_offset_of_evidence_1(),
	CompilerParameters_t2325000967::get_offset_of_generateExecutable_2(),
	CompilerParameters_t2325000967::get_offset_of_generateInMemory_3(),
	CompilerParameters_t2325000967::get_offset_of_includeDebugInformation_4(),
	CompilerParameters_t2325000967::get_offset_of_outputAssembly_5(),
	CompilerParameters_t2325000967::get_offset_of_referencedAssemblies_6(),
	CompilerParameters_t2325000967::get_offset_of_tempFiles_7(),
	CompilerParameters_t2325000967::get_offset_of_treatWarningsAsErrors_8(),
	CompilerParameters_t2325000967::get_offset_of_userToken_9(),
	CompilerParameters_t2325000967::get_offset_of_warningLevel_10(),
	CompilerParameters_t2325000967::get_offset_of_win32Resource_11(),
	CompilerParameters_t2325000967::get_offset_of_embedded_resources_12(),
	CompilerParameters_t2325000967::get_offset_of_linked_resources_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (CompilerResults_t1736487784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1406[6] = 
{
	CompilerResults_t1736487784::get_offset_of_compiledAssembly_0(),
	CompilerResults_t1736487784::get_offset_of_errors_1(),
	CompilerResults_t1736487784::get_offset_of_nativeCompilerReturnValue_2(),
	CompilerResults_t1736487784::get_offset_of_output_3(),
	CompilerResults_t1736487784::get_offset_of_pathToAssembly_4(),
	CompilerResults_t1736487784::get_offset_of_tempFiles_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (GeneratedCodeAttribute_t1133842240), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1407[2] = 
{
	GeneratedCodeAttribute_t1133842240::get_offset_of_tool_0(),
	GeneratedCodeAttribute_t1133842240::get_offset_of_version_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (TempFileCollection_t2060973068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1410[6] = 
{
	TempFileCollection_t2060973068::get_offset_of_filehash_0(),
	TempFileCollection_t2060973068::get_offset_of_tempdir_1(),
	TempFileCollection_t2060973068::get_offset_of_keepfiles_2(),
	TempFileCollection_t2060973068::get_offset_of_basepath_3(),
	TempFileCollection_t2060973068::get_offset_of_rnd_4(),
	TempFileCollection_t2060973068::get_offset_of_ownTempDir_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (MemberAttributes_t1258384723)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1411[17] = 
{
	MemberAttributes_t1258384723::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1412[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1413[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1414[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1415[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1416[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1417[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1418[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1419[9] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1420[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1421[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1422[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1423[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1424[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1425[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1426[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1427[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1428[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1429[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (CollectionsUtil_t1944789458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (HybridDictionary_t4070033136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1431[4] = 
{
	0,
	HybridDictionary_t4070033136::get_offset_of_caseInsensitive_1(),
	HybridDictionary_t4070033136::get_offset_of_hashtable_2(),
	HybridDictionary_t4070033136::get_offset_of_list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (ListDictionary_t1624492310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1432[4] = 
{
	ListDictionary_t1624492310::get_offset_of_count_0(),
	ListDictionary_t1624492310::get_offset_of_version_1(),
	ListDictionary_t1624492310::get_offset_of_head_2(),
	ListDictionary_t1624492310::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (DictionaryNode_t417719465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1433[3] = 
{
	DictionaryNode_t417719465::get_offset_of_key_0(),
	DictionaryNode_t417719465::get_offset_of_value_1(),
	DictionaryNode_t417719465::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (DictionaryNodeEnumerator_t1673829610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1434[4] = 
{
	DictionaryNodeEnumerator_t1673829610::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t1673829610::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t1673829610::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t1673829610::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (DictionaryNodeCollection_t819283804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1435[2] = 
{
	DictionaryNodeCollection_t819283804::get_offset_of_dict_0(),
	DictionaryNodeCollection_t819283804::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (DictionaryNodeCollectionEnumerator_t2863182637), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1436[2] = 
{
	DictionaryNodeCollectionEnumerator_t2863182637::get_offset_of_inner_0(),
	DictionaryNodeCollectionEnumerator_t2863182637::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (NameObjectCollectionBase_t2091847364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1437[10] = 
{
	NameObjectCollectionBase_t2091847364::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t2091847364::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t2091847364::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t2091847364::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (_Item_t2272350267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1438[2] = 
{
	_Item_t2272350267::get_offset_of_key_0(),
	_Item_t2272350267::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (_KeysEnumerator_t4246666432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1439[2] = 
{
	_KeysEnumerator_t4246666432::get_offset_of_m_collection_0(),
	_KeysEnumerator_t4246666432::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (KeysCollection_t1318642398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1440[1] = 
{
	KeysCollection_t1318642398::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (NameValueCollection_t407452768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1441[2] = 
{
	NameValueCollection_t407452768::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t407452768::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (ProcessStringDictionary_t2107791454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1442[1] = 
{
	ProcessStringDictionary_t2107791454::get_offset_of_table_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (StringCollection_t167406615), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1443[1] = 
{
	StringCollection_t167406615::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (StringDictionary_t120437468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1444[1] = 
{
	StringDictionary_t120437468::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (StringEnumerator_t3934291441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1445[1] = 
{
	StringEnumerator_t3934291441::get_offset_of_enumerable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (AddingNewEventArgs_t2974299087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1446[1] = 
{
	AddingNewEventArgs_t2974299087::get_offset_of_obj_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (AmbientValueAttribute_t2400237513), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1447[1] = 
{
	AmbientValueAttribute_t2400237513::get_offset_of_AmbientValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (ArrayConverter_t1750795769), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (ArrayPropertyDescriptor_t157990669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1449[2] = 
{
	ArrayPropertyDescriptor_t157990669::get_offset_of_index_6(),
	ArrayPropertyDescriptor_t157990669::get_offset_of_array_type_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (AsyncCompletedEventArgs_t1863481821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1450[3] = 
{
	AsyncCompletedEventArgs_t1863481821::get_offset_of__error_1(),
	AsyncCompletedEventArgs_t1863481821::get_offset_of__cancelled_2(),
	AsyncCompletedEventArgs_t1863481821::get_offset_of__userState_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (AsyncOperation_t2743648699), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1451[3] = 
{
	AsyncOperation_t2743648699::get_offset_of_ctx_0(),
	AsyncOperation_t2743648699::get_offset_of_state_1(),
	AsyncOperation_t2743648699::get_offset_of_done_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (AsyncOperationManager_t1665670643), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (AttributeProviderAttribute_t3532483438), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1453[2] = 
{
	AttributeProviderAttribute_t3532483438::get_offset_of_type_name_0(),
	AttributeProviderAttribute_t3532483438::get_offset_of_property_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (AttributeCollection_t4221220734), -1, sizeof(AttributeCollection_t4221220734_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1454[2] = 
{
	AttributeCollection_t4221220734::get_offset_of_attrList_0(),
	AttributeCollection_t4221220734_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (BackgroundWorker_t3811013447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1455[7] = 
{
	BackgroundWorker_t3811013447::get_offset_of_async_4(),
	BackgroundWorker_t3811013447::get_offset_of_cancel_pending_5(),
	BackgroundWorker_t3811013447::get_offset_of_report_progress_6(),
	BackgroundWorker_t3811013447::get_offset_of_support_cancel_7(),
	BackgroundWorker_t3811013447::get_offset_of_DoWork_8(),
	BackgroundWorker_t3811013447::get_offset_of_ProgressChanged_9(),
	BackgroundWorker_t3811013447::get_offset_of_RunWorkerCompleted_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (ProcessWorkerEventHandler_t952431846), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (BaseNumberConverter_t312147029), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1457[1] = 
{
	BaseNumberConverter_t312147029::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (BindableAttribute_t3255577478), -1, sizeof(BindableAttribute_t3255577478_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1458[5] = 
{
	BindableAttribute_t3255577478::get_offset_of_bindable_0(),
	BindableAttribute_t3255577478::get_offset_of_direction_1(),
	BindableAttribute_t3255577478_StaticFields::get_offset_of_No_2(),
	BindableAttribute_t3255577478_StaticFields::get_offset_of_Yes_3(),
	BindableAttribute_t3255577478_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (BindableSupport_t3743993600)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1459[4] = 
{
	BindableSupport_t3743993600::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (BindingDirection_t2741897897)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1460[3] = 
{
	BindingDirection_t2741897897::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1461[11] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { sizeof (BooleanConverter_t941538927), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { sizeof (BrowsableAttribute_t3407396667), -1, sizeof(BrowsableAttribute_t3407396667_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1463[4] = 
{
	BrowsableAttribute_t3407396667::get_offset_of_browsable_0(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { sizeof (ByteConverter_t1408362843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (CancelEventArgs_t1846056344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1465[1] = 
{
	CancelEventArgs_t1846056344::get_offset_of_cancel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (CategoryAttribute_t39585132), -1, sizeof(CategoryAttribute_t39585132_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1466[17] = 
{
	CategoryAttribute_t39585132::get_offset_of_category_0(),
	CategoryAttribute_t39585132::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_action_2(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_appearance_3(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_behaviour_4(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_data_5(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_def_6(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_design_7(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_drag_drop_8(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_focus_9(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_format_10(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_key_11(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_layout_12(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_mouse_13(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_window_style_14(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_async_15(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_lockobj_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { sizeof (CharConverter_t747842913), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { sizeof (CollectionChangeAction_t1145968582)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1468[4] = 
{
	CollectionChangeAction_t1145968582::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (CollectionChangeEventArgs_t1870286136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1469[2] = 
{
	CollectionChangeEventArgs_t1870286136::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t1870286136::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (CollectionConverter_t3078846443), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (ComplexBindingPropertiesAttribute_t270984817), -1, sizeof(ComplexBindingPropertiesAttribute_t270984817_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1471[3] = 
{
	ComplexBindingPropertiesAttribute_t270984817::get_offset_of_data_source_0(),
	ComplexBindingPropertiesAttribute_t270984817::get_offset_of_data_member_1(),
	ComplexBindingPropertiesAttribute_t270984817_StaticFields::get_offset_of_Default_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (ComponentCollection_t1445440302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { sizeof (ComponentConverter_t118941221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (Component_t3620823400), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1474[3] = 
{
	Component_t3620823400::get_offset_of_event_handlers_1(),
	Component_t3620823400::get_offset_of_mySite_2(),
	Component_t3620823400::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { sizeof (ComponentEditor_t3175114376), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { sizeof (ComponentResourceManager_t580139915), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { sizeof (Container_t1808277744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1477[1] = 
{
	Container_t1808277744::get_offset_of_c_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { sizeof (DefaultSite_t2855633836), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1478[3] = 
{
	DefaultSite_t2855633836::get_offset_of_component_0(),
	DefaultSite_t2855633836::get_offset_of_container_1(),
	DefaultSite_t2855633836::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { sizeof (ContainerFilterService_t3995528664), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { sizeof (CultureInfoConverter_t81550636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1480[1] = 
{
	CultureInfoConverter_t81550636::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (CultureInfoComparer_t1184699714), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { sizeof (CustomTypeDescriptor_t3093649079), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1482[1] = 
{
	CustomTypeDescriptor_t3093649079::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (DataObjectAttribute_t2230598060), -1, sizeof(DataObjectAttribute_t2230598060_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1483[4] = 
{
	DataObjectAttribute_t2230598060_StaticFields::get_offset_of_DataObject_0(),
	DataObjectAttribute_t2230598060_StaticFields::get_offset_of_Default_1(),
	DataObjectAttribute_t2230598060_StaticFields::get_offset_of_NonDataObject_2(),
	DataObjectAttribute_t2230598060::get_offset_of__isDataObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (DataObjectFieldAttribute_t1968002332), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1484[4] = 
{
	DataObjectFieldAttribute_t1968002332::get_offset_of_primary_key_0(),
	DataObjectFieldAttribute_t1968002332::get_offset_of_is_identity_1(),
	DataObjectFieldAttribute_t1968002332::get_offset_of_is_nullable_2(),
	DataObjectFieldAttribute_t1968002332::get_offset_of_length_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (DataObjectMethodAttribute_t1051675261), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1485[2] = 
{
	DataObjectMethodAttribute_t1051675261::get_offset_of__methodType_0(),
	DataObjectMethodAttribute_t1051675261::get_offset_of__isDefault_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { sizeof (DataObjectMethodType_t1401893077)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1486[6] = 
{
	DataObjectMethodType_t1401893077::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { sizeof (DateTimeConverter_t2298802450), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { sizeof (DecimalConverter_t3574141665), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { sizeof (DefaultBindingPropertyAttribute_t2784669275), -1, sizeof(DefaultBindingPropertyAttribute_t2784669275_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1489[2] = 
{
	DefaultBindingPropertyAttribute_t2784669275_StaticFields::get_offset_of_Default_0(),
	DefaultBindingPropertyAttribute_t2784669275::get_offset_of_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { sizeof (DefaultEventAttribute_t3124666540), -1, sizeof(DefaultEventAttribute_t3124666540_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1490[2] = 
{
	DefaultEventAttribute_t3124666540::get_offset_of_eventName_0(),
	DefaultEventAttribute_t3124666540_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { sizeof (DefaultPropertyAttribute_t1952442862), -1, sizeof(DefaultPropertyAttribute_t1952442862_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1491[2] = 
{
	DefaultPropertyAttribute_t1952442862::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t1952442862_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { sizeof (DefaultValueAttribute_t587583663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1492[1] = 
{
	DefaultValueAttribute_t587583663::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { sizeof (DerivedPropertyDescriptor_t1535669269), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1493[4] = 
{
	DerivedPropertyDescriptor_t1535669269::get_offset_of_readOnly_6(),
	DerivedPropertyDescriptor_t1535669269::get_offset_of_componentType_7(),
	DerivedPropertyDescriptor_t1535669269::get_offset_of_propertyType_8(),
	DerivedPropertyDescriptor_t1535669269::get_offset_of_prop_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { sizeof (DescriptionAttribute_t874390736), -1, sizeof(DescriptionAttribute_t874390736_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1494[2] = 
{
	DescriptionAttribute_t874390736::get_offset_of_desc_0(),
	DescriptionAttribute_t874390736_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { sizeof (DesignerTransaction_t2710857822), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1495[2] = 
{
	DesignerTransaction_t2710857822::get_offset_of_committed_0(),
	DesignerTransaction_t2710857822::get_offset_of_canceled_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { sizeof (DesignerAttribute_t2079716647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1496[2] = 
{
	DesignerAttribute_t2079716647::get_offset_of_name_0(),
	DesignerAttribute_t2079716647::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { sizeof (DesignerCategoryAttribute_t2912925731), -1, sizeof(DesignerCategoryAttribute_t2912925731_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1497[5] = 
{
	DesignerCategoryAttribute_t2912925731::get_offset_of_category_0(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { sizeof (DesignerSerializationVisibilityAttribute_t4084246596), -1, sizeof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1498[5] = 
{
	DesignerSerializationVisibilityAttribute_t4084246596::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { sizeof (DesignerSerializationVisibility_t3481291396)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1499[4] = 
{
	DesignerSerializationVisibility_t3481291396::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
