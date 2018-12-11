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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// Mono.Security.ASN1
struct ASN1_t2114160833;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t2800260182;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t2094547461;
// Mono.Security.Cryptography.MD2
struct MD2_t1561046427;
// Mono.Security.Cryptography.MD4
struct MD4_t1560915355;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t1757093819;
// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct BasicConstraintsExtension_t2462195279;
// Mono.Security.X509.Extensions.KeyUsageExtension
struct KeyUsageExtension_t1795615912;
// Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension
struct SubjectKeyIdentifierExtension_t2404375272;
// Mono.Security.X509.X509Builder
struct X509Builder_t1341539432;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243025;
// Mono.Security.X509.X509CertificateBuilder
struct X509CertificateBuilder_t3506341729;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1542168550;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t3515934698;
// Mono.Security.X509.X509Certificate[]
struct X509CertificateU5BU5D_t3563599409;
// Mono.Security.X509.X509Chain
struct X509Chain_t863783601;
// Mono.Security.X509.X509Crl
struct X509Crl_t1148767388;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t645568789;
// Mono.Security.X509.X509Extension
struct X509Extension_t3173393653;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t609554709;
// Mono.Security.X509.X509Extension[]
struct X509ExtensionU5BU5D_t3108766909;
// Mono.Security.X509.X509Store
struct X509Store_t2777415284;
// Mono.Security.X509.X509StoreManager
struct X509StoreManager_t1046782376;
// Mono.Security.X509.X509Stores
struct X509Stores_t1373936238;
// Mono.Security.X509.X509Stores/Names
struct Names_t1325641082;
// Mono.Security.X509.X520
struct X520_t3325039438;
// Mono.Security.X509.X520/AttributeTypeAndValue
struct AttributeTypeAndValue_t3245693428;
// Mono.Security.X509.X520/CommonName
struct CommonName_t2882805359;
// Mono.Security.X509.X520/CountryName
struct CountryName_t4165042092;
// Mono.Security.X509.X520/DnQualifier
struct DnQualifier_t2746394302;
// Mono.Security.X509.X520/DomainComponent
struct DomainComponent_t1597975113;
// Mono.Security.X509.X520/EmailAddress
struct EmailAddress_t484866411;
// Mono.Security.X509.X520/GivenName
struct GivenName_t3114888956;
// Mono.Security.X509.X520/Initial
struct Initial_t2745963796;
// Mono.Security.X509.X520/LocalityName
struct LocalityName_t1511149830;
// Mono.Security.X509.X520/Name
struct Name_t3626842933;
// Mono.Security.X509.X520/Oid
struct Oid_t2014794921;
// Mono.Security.X509.X520/OrganizationName
struct OrganizationName_t857038441;
// Mono.Security.X509.X520/OrganizationalUnitName
struct OrganizationalUnitName_t1968218587;
// Mono.Security.X509.X520/SerialNumber
struct SerialNumber_t3812427306;
// Mono.Security.X509.X520/StateOrProvinceName
struct StateOrProvinceName_t1916702996;
// Mono.Security.X509.X520/Surname
struct Surname_t4221813936;
// Mono.Security.X509.X520/Title
struct Title_t2026585634;
// Mono.Security.X509.X520/UserId
struct UserId_t70549454;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.CollectionBase
struct CollectionBase_t2727926298;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t3530625384;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Double
struct Double_t594665363;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_t154580423;
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
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IO.DirectoryInfo
struct DirectoryInfo_t35957480;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.Int32
struct Int32_t2950945753;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t932037087;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_t248831461;
// System.Security.Cryptography.DSA
struct DSA_t2386879874;
// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t3992668923;
// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t3677955172;
// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t2007981259;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Security.Cryptography.MD5
struct MD5_t3177620429;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t2683512874;
// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t3767223008;
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct RSAPKCS1SignatureFormatter_t1514197062;
// System.Security.Cryptography.SHA1
struct SHA1_t1803193667;
// System.Security.Cryptography.SHA256
struct SHA256_t3672283617;
// System.Security.Cryptography.SHA384
struct SHA384_t540967702;
// System.Security.Cryptography.SHA512
struct SHA512_t1346946930;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* ASN1_t2114160833_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern RuntimeClass* BasicConstraintsExtension_t2462195279_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* CryptographicException_t248831461_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* DSACryptoServiceProvider_t3992668923_il2cpp_TypeInfo_var;
extern RuntimeClass* DSASignatureDeformatter_t3677955172_il2cpp_TypeInfo_var;
extern RuntimeClass* DSASignatureFormatter_t2007981259_il2cpp_TypeInfo_var;
extern RuntimeClass* DSA_t2386879874_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2736202052_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FormatException_t154580423_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyUsageExtension_t1795615912_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* RSACryptoServiceProvider_t2683512874_il2cpp_TypeInfo_var;
extern RuntimeClass* RSAPKCS1SignatureDeformatter_t3767223008_il2cpp_TypeInfo_var;
extern RuntimeClass* RSAPKCS1SignatureFormatter_t1514197062_il2cpp_TypeInfo_var;
extern RuntimeClass* RSA_t2385438082_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SHA1_t1803193667_il2cpp_TypeInfo_var;
extern RuntimeClass* ServicePointManager_t170559685_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SubjectKeyIdentifierExtension_t2404375272_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* X501_t1758824426_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Builder_t1341539432_il2cpp_TypeInfo_var;
extern RuntimeClass* X509CertificateCollection_t1542168550_il2cpp_TypeInfo_var;
extern RuntimeClass* X509CertificateEnumerator_t3515934698_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Certificate_t489243025_il2cpp_TypeInfo_var;
extern RuntimeClass* X509CrlEntry_t645568789_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Crl_t1148767388_il2cpp_TypeInfo_var;
extern RuntimeClass* X509ExtensionCollection_t609554709_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Extension_t3173393653_il2cpp_TypeInfo_var;
extern RuntimeClass* X509StoreManager_t1046782376_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Store_t2777415284_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Stores_t1373936238_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1002544076;
extern String_t* _stringLiteral1004423982;
extern String_t* _stringLiteral1004423983;
extern String_t* _stringLiteral1004423994;
extern String_t* _stringLiteral1012967824;
extern String_t* _stringLiteral1108158921;
extern String_t* _stringLiteral1110256105;
extern String_t* _stringLiteral1144609714;
extern String_t* _stringLiteral1185035339;
extern String_t* _stringLiteral1243364763;
extern String_t* _stringLiteral1245225052;
extern String_t* _stringLiteral1384881100;
extern String_t* _stringLiteral1405532623;
extern String_t* _stringLiteral1452586790;
extern String_t* _stringLiteral1590810976;
extern String_t* _stringLiteral1607280970;
extern String_t* _stringLiteral1609817887;
extern String_t* _stringLiteral1610623306;
extern String_t* _stringLiteral1648509579;
extern String_t* _stringLiteral1735138889;
extern String_t* _stringLiteral1752854249;
extern String_t* _stringLiteral1783758854;
extern String_t* _stringLiteral1783758855;
extern String_t* _stringLiteral1783758856;
extern String_t* _stringLiteral1855871317;
extern String_t* _stringLiteral1903542547;
extern String_t* _stringLiteral1926373733;
extern String_t* _stringLiteral1929716066;
extern String_t* _stringLiteral1940787968;
extern String_t* _stringLiteral1986082327;
extern String_t* _stringLiteral1991580189;
extern String_t* _stringLiteral2030846603;
extern String_t* _stringLiteral2150195429;
extern String_t* _stringLiteral2153662835;
extern String_t* _stringLiteral2225310117;
extern String_t* _stringLiteral227815590;
extern String_t* _stringLiteral2350063128;
extern String_t* _stringLiteral2511804911;
extern String_t* _stringLiteral254300464;
extern String_t* _stringLiteral254300466;
extern String_t* _stringLiteral2567433970;
extern String_t* _stringLiteral2649751261;
extern String_t* _stringLiteral2710142936;
extern String_t* _stringLiteral2836975190;
extern String_t* _stringLiteral289787376;
extern String_t* _stringLiteral2910693339;
extern String_t* _stringLiteral2958859212;
extern String_t* _stringLiteral3018670731;
extern String_t* _stringLiteral3201540188;
extern String_t* _stringLiteral3253201438;
extern String_t* _stringLiteral3266464951;
extern String_t* _stringLiteral3313388058;
extern String_t* _stringLiteral3341196236;
extern String_t* _stringLiteral3351488925;
extern String_t* _stringLiteral3421955258;
extern String_t* _stringLiteral3450517376;
extern String_t* _stringLiteral3451435000;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3454646207;
extern String_t* _stringLiteral3456219107;
extern String_t* _stringLiteral3456743389;
extern String_t* _stringLiteral3493618073;
extern String_t* _stringLiteral3501283186;
extern String_t* _stringLiteral3525949144;
extern String_t* _stringLiteral3539017004;
extern String_t* _stringLiteral3565820441;
extern String_t* _stringLiteral3583877212;
extern String_t* _stringLiteral3710028195;
extern String_t* _stringLiteral3723533260;
extern String_t* _stringLiteral3723644332;
extern String_t* _stringLiteral3724057548;
extern String_t* _stringLiteral3761512114;
extern String_t* _stringLiteral3786055882;
extern String_t* _stringLiteral3837042276;
extern String_t* _stringLiteral3839139460;
extern String_t* _stringLiteral3948026384;
extern String_t* _stringLiteral3977648530;
extern String_t* _stringLiteral3987161739;
extern String_t* _stringLiteral4072668552;
extern String_t* _stringLiteral418672143;
extern String_t* _stringLiteral4240326803;
extern String_t* _stringLiteral4242423987;
extern String_t* _stringLiteral456868491;
extern String_t* _stringLiteral630761881;
extern String_t* _stringLiteral632220839;
extern String_t* _stringLiteral683764801;
extern String_t* _stringLiteral731045672;
extern String_t* _stringLiteral9622098;
extern const RuntimeMethod* AttributeTypeAndValue_set_Value_m3270529695_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m282647386_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2392909825_RuntimeMethod_var;
extern const RuntimeMethod* X509Builder_GetOid_m1390202877_RuntimeMethod_var;
extern const RuntimeMethod* X509Builder_Sign_m1690293593_RuntimeMethod_var;
extern const RuntimeMethod* X509Builder_Sign_m4085265359_RuntimeMethod_var;
extern const RuntimeMethod* X509CertificateBuilder_SubjectPublicKeyInfo_m1113035165_RuntimeMethod_var;
extern const RuntimeMethod* X509CertificateBuilder__ctor_m3636041184_RuntimeMethod_var;
extern const RuntimeMethod* X509CertificateCollection_AddRange_m2165814476_RuntimeMethod_var;
extern const RuntimeMethod* X509CertificateCollection_AddRange_m3166932337_RuntimeMethod_var;
extern const RuntimeMethod* X509CertificateCollection_Add_m2277657976_RuntimeMethod_var;
extern const RuntimeMethod* X509CertificateCollection_IndexOf_m2003755268_RuntimeMethod_var;
extern const RuntimeMethod* X509Certificate_Parse_m54358579_RuntimeMethod_var;
extern const RuntimeMethod* X509Certificate_VerifySignature_m2813642028_RuntimeMethod_var;
extern const RuntimeMethod* X509Certificate_VerifySignature_m3538124832_RuntimeMethod_var;
extern const RuntimeMethod* X509Certificate__ctor_m2595927506_RuntimeMethod_var;
extern const RuntimeMethod* X509Certificate_get_DSA_m565099499_RuntimeMethod_var;
extern const RuntimeMethod* X509Certificate_get_Signature_m2498854864_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_CreateFromFile_m1507150054_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_GetCrlEntry_m5954460_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_GetCrlEntry_m641501875_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_GetHashName_m4214678741_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_Parse_m3164013387_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_VerifySignature_m1377612461_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_VerifySignature_m1902456590_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_VerifySignature_m757547902_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl__ctor_m1817187405_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection_AddRange_m1104225129_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection_AddRange_m3305410105_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection_Add_m2251235768_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection_CopyTo_m3181643769_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection_IndexOf_m2606992261_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection_IndexOf_m2996504451_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection_Insert_m873879632_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection_Remove_m2342091090_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection_Remove_m2521723919_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection__ctor_m551870633_RuntimeMethod_var;
extern const RuntimeMethod* X509Extension__ctor_m1474351312_RuntimeMethod_var;
extern const RuntimeMethod* X509Extension__ctor_m710637961_RuntimeMethod_var;
extern const RuntimeMethod* X509Store_CheckStore_m2045435685_RuntimeMethod_var;
extern const RuntimeMethod* X509Store_Load_m2048139132_RuntimeMethod_var;
extern const RuntimeMethod* X509Stores_Open_m1553467177_RuntimeMethod_var;
extern const RuntimeType* ByteU5BU5D_t4116647657_0_0_0_var;
extern const uint32_t AttributeTypeAndValue_GetASN1_m735511441_MetadataUsageId;
extern const uint32_t AttributeTypeAndValue_set_Value_m3270529695_MetadataUsageId;
extern const uint32_t CommonName__ctor_m4066435887_MetadataUsageId;
extern const uint32_t CountryName__ctor_m1759248525_MetadataUsageId;
extern const uint32_t DnQualifier__ctor_m2304537709_MetadataUsageId;
extern const uint32_t DomainComponent__ctor_m2984562191_MetadataUsageId;
extern const uint32_t EmailAddress__ctor_m1682437348_MetadataUsageId;
extern const uint32_t GivenName__ctor_m2285954234_MetadataUsageId;
extern const uint32_t Initial__ctor_m1539622106_MetadataUsageId;
extern const uint32_t LocalityName__ctor_m816181155_MetadataUsageId;
extern const uint32_t Name__ctor_m2961952406_MetadataUsageId;
extern const uint32_t OrganizationName__ctor_m3237996566_MetadataUsageId;
extern const uint32_t OrganizationalUnitName__ctor_m4279817838_MetadataUsageId;
extern const uint32_t SerialNumber__ctor_m2630741392_MetadataUsageId;
extern const uint32_t StateOrProvinceName__ctor_m3786137020_MetadataUsageId;
extern const uint32_t Surname__ctor_m4076845856_MetadataUsageId;
extern const uint32_t Title__ctor_m3468619135_MetadataUsageId;
extern const uint32_t UserId__ctor_m730120360_MetadataUsageId;
extern const uint32_t X509Builder_Build_m1052728567_MetadataUsageId;
extern const uint32_t X509Builder_GetOid_m1390202877_MetadataUsageId;
extern const uint32_t X509Builder_Sign_m1690293593_MetadataUsageId;
extern const uint32_t X509Builder_Sign_m1784401927_MetadataUsageId;
extern const uint32_t X509Builder_Sign_m4085265359_MetadataUsageId;
extern const uint32_t X509Builder__ctor_m2301186440_MetadataUsageId;
extern const uint32_t X509Builder_set_Hash_m2321189384_MetadataUsageId;
extern const uint32_t X509CertificateBuilder_SubjectPublicKeyInfo_m1113035165_MetadataUsageId;
extern const uint32_t X509CertificateBuilder_ToBeSigned_m2641120764_MetadataUsageId;
extern const uint32_t X509CertificateBuilder_UniqueIdentifier_m3699558432_MetadataUsageId;
extern const uint32_t X509CertificateBuilder__ctor_m3636041184_MetadataUsageId;
extern const uint32_t X509CertificateCollection_AddRange_m2165814476_MetadataUsageId;
extern const uint32_t X509CertificateCollection_AddRange_m3166932337_MetadataUsageId;
extern const uint32_t X509CertificateCollection_Add_m2277657976_MetadataUsageId;
extern const uint32_t X509CertificateCollection_GetEnumerator_m92169144_MetadataUsageId;
extern const uint32_t X509CertificateCollection_IndexOf_m2003755268_MetadataUsageId;
extern const uint32_t X509CertificateCollection_get_Item_m1033426577_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_MoveNext_m1342258196_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_Reset_m1825523691_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m2626270621_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m2039524926_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m1846030361_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator__ctor_m85694331_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_get_Current_m3079314562_MetadataUsageId;
extern const uint32_t X509Certificate_CheckSignature_m1407226766_MetadataUsageId;
extern const uint32_t X509Certificate_GetObjectData_m2952009451_MetadataUsageId;
extern const uint32_t X509Certificate_GetUnsignedBigInteger_m877462855_MetadataUsageId;
extern const uint32_t X509Certificate_PEM_m2020851166_MetadataUsageId;
extern const uint32_t X509Certificate_Parse_m54358579_MetadataUsageId;
extern const uint32_t X509Certificate_VerifySignature_m2813642028_MetadataUsageId;
extern const uint32_t X509Certificate_VerifySignature_m3538124832_MetadataUsageId;
extern const uint32_t X509Certificate_VerifySignature_m3988463526_MetadataUsageId;
extern const uint32_t X509Certificate_WasCurrent_m1146083014_MetadataUsageId;
extern const uint32_t X509Certificate__cctor_m1746020738_MetadataUsageId;
extern const uint32_t X509Certificate__ctor_m2595927506_MetadataUsageId;
extern const uint32_t X509Certificate__ctor_m4026853346_MetadataUsageId;
extern const uint32_t X509Certificate_get_DSA_m565099499_MetadataUsageId;
extern const uint32_t X509Certificate_get_Hash_m410033711_MetadataUsageId;
extern const uint32_t X509Certificate_get_IsCurrent_m469817010_MetadataUsageId;
extern const uint32_t X509Certificate_get_IsSelfSigned_m4064195693_MetadataUsageId;
extern const uint32_t X509Certificate_get_IssuerUniqueIdentifier_m1604429114_MetadataUsageId;
extern const uint32_t X509Certificate_get_KeyAlgorithmParameters_m3698130868_MetadataUsageId;
extern const uint32_t X509Certificate_get_PublicKey_m950835056_MetadataUsageId;
extern const uint32_t X509Certificate_get_RSA_m1755006809_MetadataUsageId;
extern const uint32_t X509Certificate_get_RawData_m2626675988_MetadataUsageId;
extern const uint32_t X509Certificate_get_SerialNumber_m3924188880_MetadataUsageId;
extern const uint32_t X509Certificate_get_SignatureAlgorithmParameters_m1282866228_MetadataUsageId;
extern const uint32_t X509Certificate_get_Signature_m2498854864_MetadataUsageId;
extern const uint32_t X509Certificate_get_SubjectUniqueIdentifier_m1655979669_MetadataUsageId;
extern const uint32_t X509Chain_Build_m2469702749_MetadataUsageId;
extern const uint32_t X509Chain_FindByIssuerName_m2280432457_MetadataUsageId;
extern const uint32_t X509Chain_FindCertificateParent_m2809823532_MetadataUsageId;
extern const uint32_t X509Chain_FindCertificateRoot_m1937726457_MetadataUsageId;
extern const uint32_t X509Chain_IsParent_m2689546349_MetadataUsageId;
extern const uint32_t X509Chain_IsValid_m3670863655_MetadataUsageId;
extern const uint32_t X509Chain__ctor_m1084071882_MetadataUsageId;
extern const uint32_t X509Chain__ctor_m3563800449_MetadataUsageId;
extern const uint32_t X509Chain_get_TrustAnchors_m2434696767_MetadataUsageId;
extern const uint32_t X509CrlEntry_GetBytes_m2980586034_MetadataUsageId;
extern const uint32_t X509CrlEntry__ctor_m4013514048_MetadataUsageId;
extern const uint32_t X509CrlEntry__ctor_m783552701_MetadataUsageId;
extern const uint32_t X509CrlEntry_get_SerialNumber_m3627212772_MetadataUsageId;
extern const uint32_t X509Crl_CreateFromFile_m1507150054_MetadataUsageId;
extern const uint32_t X509Crl_GetBytes_m326324156_MetadataUsageId;
extern const uint32_t X509Crl_GetCrlEntry_m5954460_MetadataUsageId;
extern const uint32_t X509Crl_GetCrlEntry_m641501875_MetadataUsageId;
extern const uint32_t X509Crl_GetHashName_m4214678741_MetadataUsageId;
extern const uint32_t X509Crl_Parse_m3164013387_MetadataUsageId;
extern const uint32_t X509Crl_VerifySignature_m1377612461_MetadataUsageId;
extern const uint32_t X509Crl_VerifySignature_m1808348256_MetadataUsageId;
extern const uint32_t X509Crl_VerifySignature_m1902456590_MetadataUsageId;
extern const uint32_t X509Crl_VerifySignature_m757547902_MetadataUsageId;
extern const uint32_t X509Crl_WasCurrent_m662015296_MetadataUsageId;
extern const uint32_t X509Crl__ctor_m1817187405_MetadataUsageId;
extern const uint32_t X509Crl_get_Entries_m4032389711_MetadataUsageId;
extern const uint32_t X509Crl_get_Hash_m464217067_MetadataUsageId;
extern const uint32_t X509Crl_get_IsCurrent_m298812277_MetadataUsageId;
extern const uint32_t X509Crl_get_Item_m2105052623_MetadataUsageId;
extern const uint32_t X509Crl_get_RawData_m3623997699_MetadataUsageId;
extern const uint32_t X509Crl_get_Signature_m1378549588_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_AddRange_m1104225129_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_AddRange_m3305410105_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_Add_m2251235768_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_CopyTo_m3181643769_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_GetBytes_m1622025118_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_IndexOf_m2606992261_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_IndexOf_m2996504451_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_Insert_m873879632_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_Remove_m2342091090_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_Remove_m2521723919_MetadataUsageId;
extern const uint32_t X509ExtensionCollection__ctor_m551870633_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_get_Item_m2761897938_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_get_Item_m2771335836_MetadataUsageId;
extern const uint32_t X509Extension_Equals_m1779194186_MetadataUsageId;
extern const uint32_t X509Extension_ToString_m3727002866_MetadataUsageId;
extern const uint32_t X509Extension_WriteLine_m1662885247_MetadataUsageId;
extern const uint32_t X509Extension__ctor_m1474351312_MetadataUsageId;
extern const uint32_t X509Extension__ctor_m710637961_MetadataUsageId;
extern const uint32_t X509Extension_get_ASN1_m1064344075_MetadataUsageId;
extern const uint32_t X509StoreManager_get_CurrentUser_m4040993045_MetadataUsageId;
extern const uint32_t X509StoreManager_get_IntermediateCACertificates_m1576610804_MetadataUsageId;
extern const uint32_t X509StoreManager_get_IntermediateCACrls_m3919824182_MetadataUsageId;
extern const uint32_t X509StoreManager_get_LocalMachine_m3994689999_MetadataUsageId;
extern const uint32_t X509StoreManager_get_TrustedRootCACrls_m2267763919_MetadataUsageId;
extern const uint32_t X509StoreManager_get_TrustedRootCertificates_m2180997293_MetadataUsageId;
extern const uint32_t X509StoreManager_get_UntrustedCertificates_m829127408_MetadataUsageId;
extern const uint32_t X509Store_BuildCertificatesCollection_m3030935583_MetadataUsageId;
extern const uint32_t X509Store_BuildCrlsCollection_m1991312527_MetadataUsageId;
extern const uint32_t X509Store_CheckStore_m2045435685_MetadataUsageId;
extern const uint32_t X509Store_GetUniqueName_m132964055_MetadataUsageId;
extern const uint32_t X509Store_GetUniqueName_m3285060726_MetadataUsageId;
extern const uint32_t X509Store_GetUniqueName_m4271638378_MetadataUsageId;
extern const uint32_t X509Store_GetUniqueName_m915074968_MetadataUsageId;
extern const uint32_t X509Store_Import_m1052667485_MetadataUsageId;
extern const uint32_t X509Store_Import_m319598108_MetadataUsageId;
extern const uint32_t X509Store_LoadCertificate_m1587806288_MetadataUsageId;
extern const uint32_t X509Store_LoadCrl_m1881903843_MetadataUsageId;
extern const uint32_t X509Store_Load_m2048139132_MetadataUsageId;
extern const uint32_t X509Store_Remove_m1800501587_MetadataUsageId;
extern const uint32_t X509Store_Remove_m2429424682_MetadataUsageId;
extern const uint32_t X509Store_get_Crls_m4075976598_MetadataUsageId;
extern const uint32_t X509Store_get_Name_m597920689_MetadataUsageId;
extern const uint32_t X509Stores_Open_m1553467177_MetadataUsageId;
extern const uint32_t X509Stores_get_IntermediateCA_m1350619599_MetadataUsageId;
extern const uint32_t X509Stores_get_OtherPeople_m2341174106_MetadataUsageId;
extern const uint32_t X509Stores_get_Personal_m1313610043_MetadataUsageId;
extern const uint32_t X509Stores_get_TrustedRoot_m1736182879_MetadataUsageId;
extern const uint32_t X509Stores_get_Untrusted_m1029989579_MetadataUsageId;

struct X509CertificateU5BU5D_t3563599409;
struct X509ExtensionU5BU5D_t3108766909;
struct ByteU5BU5D_t4116647657;
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
#ifndef ASN1_T2114160833_H
#define ASN1_T2114160833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t2114160833  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t4116647657* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t2718874744 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t2114160833, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t2114160833, ___m_aValue_1)); }
	inline ByteU5BU5D_t4116647657* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t4116647657* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t2114160833, ___elist_2)); }
	inline ArrayList_t2718874744 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t2718874744 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t2718874744 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T2114160833_H
#ifndef X509BUILDER_T1341539432_H
#define X509BUILDER_T1341539432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Builder
struct  X509Builder_t1341539432  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Builder::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(X509Builder_t1341539432, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

struct X509Builder_t1341539432_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Builder::<>f__switch$mapE
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapE_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_2() { return static_cast<int32_t>(offsetof(X509Builder_t1341539432_StaticFields, ___U3CU3Ef__switchU24mapE_2)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapE_2() const { return ___U3CU3Ef__switchU24mapE_2; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapE_2() { return &___U3CU3Ef__switchU24mapE_2; }
	inline void set_U3CU3Ef__switchU24mapE_2(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapE_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapE_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509BUILDER_T1341539432_H
#ifndef X509CERTIFICATEENUMERATOR_T3515934698_H
#define X509CERTIFICATEENUMERATOR_T3515934698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t3515934698  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t3515934698, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T3515934698_H
#ifndef X509EXTENSION_T3173393653_H
#define X509EXTENSION_T3173393653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t3173393653  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t2114160833 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t3173393653, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t3173393653, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t3173393653, ___extnValue_2)); }
	inline ASN1_t2114160833 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t2114160833 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t2114160833 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T3173393653_H
#ifndef X509STORE_T2777415284_H
#define X509STORE_T2777415284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Store
struct  X509Store_t2777415284  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t1542168550 * ____certificates_1;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t2718874744 * ____crls_2;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_3;
	// System.String Mono.Security.X509.X509Store::_name
	String_t* ____name_4;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_t2777415284, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_t2777415284, ____certificates_1)); }
	inline X509CertificateCollection_t1542168550 * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t1542168550 ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t1542168550 * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((&____certificates_1), value);
	}

	inline static int32_t get_offset_of__crls_2() { return static_cast<int32_t>(offsetof(X509Store_t2777415284, ____crls_2)); }
	inline ArrayList_t2718874744 * get__crls_2() const { return ____crls_2; }
	inline ArrayList_t2718874744 ** get_address_of__crls_2() { return &____crls_2; }
	inline void set__crls_2(ArrayList_t2718874744 * value)
	{
		____crls_2 = value;
		Il2CppCodeGenWriteBarrier((&____crls_2), value);
	}

	inline static int32_t get_offset_of__crl_3() { return static_cast<int32_t>(offsetof(X509Store_t2777415284, ____crl_3)); }
	inline bool get__crl_3() const { return ____crl_3; }
	inline bool* get_address_of__crl_3() { return &____crl_3; }
	inline void set__crl_3(bool value)
	{
		____crl_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(X509Store_t2777415284, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T2777415284_H
#ifndef X509STOREMANAGER_T1046782376_H
#define X509STOREMANAGER_T1046782376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t1046782376  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_t1046782376_StaticFields
{
public:
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t1373936238 * ____userStore_0;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t1373936238 * ____machineStore_1;

public:
	inline static int32_t get_offset_of__userStore_0() { return static_cast<int32_t>(offsetof(X509StoreManager_t1046782376_StaticFields, ____userStore_0)); }
	inline X509Stores_t1373936238 * get__userStore_0() const { return ____userStore_0; }
	inline X509Stores_t1373936238 ** get_address_of__userStore_0() { return &____userStore_0; }
	inline void set__userStore_0(X509Stores_t1373936238 * value)
	{
		____userStore_0 = value;
		Il2CppCodeGenWriteBarrier((&____userStore_0), value);
	}

	inline static int32_t get_offset_of__machineStore_1() { return static_cast<int32_t>(offsetof(X509StoreManager_t1046782376_StaticFields, ____machineStore_1)); }
	inline X509Stores_t1373936238 * get__machineStore_1() const { return ____machineStore_1; }
	inline X509Stores_t1373936238 ** get_address_of__machineStore_1() { return &____machineStore_1; }
	inline void set__machineStore_1(X509Stores_t1373936238 * value)
	{
		____machineStore_1 = value;
		Il2CppCodeGenWriteBarrier((&____machineStore_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STOREMANAGER_T1046782376_H
#ifndef X509STORES_T1373936238_H
#define X509STORES_T1373936238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t1373936238  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_personal
	X509Store_t2777415284 * ____personal_1;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_other
	X509Store_t2777415284 * ____other_2;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_intermediate
	X509Store_t2777415284 * ____intermediate_3;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t2777415284 * ____trusted_4;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_untrusted
	X509Store_t2777415284 * ____untrusted_5;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t1373936238, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__personal_1() { return static_cast<int32_t>(offsetof(X509Stores_t1373936238, ____personal_1)); }
	inline X509Store_t2777415284 * get__personal_1() const { return ____personal_1; }
	inline X509Store_t2777415284 ** get_address_of__personal_1() { return &____personal_1; }
	inline void set__personal_1(X509Store_t2777415284 * value)
	{
		____personal_1 = value;
		Il2CppCodeGenWriteBarrier((&____personal_1), value);
	}

	inline static int32_t get_offset_of__other_2() { return static_cast<int32_t>(offsetof(X509Stores_t1373936238, ____other_2)); }
	inline X509Store_t2777415284 * get__other_2() const { return ____other_2; }
	inline X509Store_t2777415284 ** get_address_of__other_2() { return &____other_2; }
	inline void set__other_2(X509Store_t2777415284 * value)
	{
		____other_2 = value;
		Il2CppCodeGenWriteBarrier((&____other_2), value);
	}

	inline static int32_t get_offset_of__intermediate_3() { return static_cast<int32_t>(offsetof(X509Stores_t1373936238, ____intermediate_3)); }
	inline X509Store_t2777415284 * get__intermediate_3() const { return ____intermediate_3; }
	inline X509Store_t2777415284 ** get_address_of__intermediate_3() { return &____intermediate_3; }
	inline void set__intermediate_3(X509Store_t2777415284 * value)
	{
		____intermediate_3 = value;
		Il2CppCodeGenWriteBarrier((&____intermediate_3), value);
	}

	inline static int32_t get_offset_of__trusted_4() { return static_cast<int32_t>(offsetof(X509Stores_t1373936238, ____trusted_4)); }
	inline X509Store_t2777415284 * get__trusted_4() const { return ____trusted_4; }
	inline X509Store_t2777415284 ** get_address_of__trusted_4() { return &____trusted_4; }
	inline void set__trusted_4(X509Store_t2777415284 * value)
	{
		____trusted_4 = value;
		Il2CppCodeGenWriteBarrier((&____trusted_4), value);
	}

	inline static int32_t get_offset_of__untrusted_5() { return static_cast<int32_t>(offsetof(X509Stores_t1373936238, ____untrusted_5)); }
	inline X509Store_t2777415284 * get__untrusted_5() const { return ____untrusted_5; }
	inline X509Store_t2777415284 ** get_address_of__untrusted_5() { return &____untrusted_5; }
	inline void set__untrusted_5(X509Store_t2777415284 * value)
	{
		____untrusted_5 = value;
		Il2CppCodeGenWriteBarrier((&____untrusted_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORES_T1373936238_H
#ifndef NAMES_T1325641082_H
#define NAMES_T1325641082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores/Names
struct  Names_t1325641082  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMES_T1325641082_H
#ifndef X520_T3325039438_H
#define X520_T3325039438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520
struct  X520_t3325039438  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X520_T3325039438_H
#ifndef ATTRIBUTETYPEANDVALUE_T3245693428_H
#define ATTRIBUTETYPEANDVALUE_T3245693428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/AttributeTypeAndValue
struct  AttributeTypeAndValue_t3245693428  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::oid
	String_t* ___oid_0;
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::attrValue
	String_t* ___attrValue_1;
	// System.Int32 Mono.Security.X509.X520/AttributeTypeAndValue::upperBound
	int32_t ___upperBound_2;
	// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::encoding
	uint8_t ___encoding_3;

public:
	inline static int32_t get_offset_of_oid_0() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___oid_0)); }
	inline String_t* get_oid_0() const { return ___oid_0; }
	inline String_t** get_address_of_oid_0() { return &___oid_0; }
	inline void set_oid_0(String_t* value)
	{
		___oid_0 = value;
		Il2CppCodeGenWriteBarrier((&___oid_0), value);
	}

	inline static int32_t get_offset_of_attrValue_1() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___attrValue_1)); }
	inline String_t* get_attrValue_1() const { return ___attrValue_1; }
	inline String_t** get_address_of_attrValue_1() { return &___attrValue_1; }
	inline void set_attrValue_1(String_t* value)
	{
		___attrValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrValue_1), value);
	}

	inline static int32_t get_offset_of_upperBound_2() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___upperBound_2)); }
	inline int32_t get_upperBound_2() const { return ___upperBound_2; }
	inline int32_t* get_address_of_upperBound_2() { return &___upperBound_2; }
	inline void set_upperBound_2(int32_t value)
	{
		___upperBound_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___encoding_3)); }
	inline uint8_t get_encoding_3() const { return ___encoding_3; }
	inline uint8_t* get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(uint8_t value)
	{
		___encoding_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETYPEANDVALUE_T3245693428_H
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
#ifndef DICTIONARY_2_T2736202052_H
#define DICTIONARY_2_T2736202052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_t2736202052  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2736202052_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3530625384 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3530625384 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3530625384 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3530625384 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2736202052_H
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
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
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
#ifndef MD2_T1561046427_H
#define MD2_T1561046427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2
struct  MD2_t1561046427  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2_T1561046427_H
#ifndef MD4_T1560915355_H
#define MD4_T1560915355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4
struct  MD4_t1560915355  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4_T1560915355_H
#ifndef BASICCONSTRAINTSEXTENSION_T2462195279_H
#define BASICCONSTRAINTSEXTENSION_T2462195279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct  BasicConstraintsExtension_t2462195279  : public X509Extension_t3173393653
{
public:
	// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::cA
	bool ___cA_3;
	// System.Int32 Mono.Security.X509.Extensions.BasicConstraintsExtension::pathLenConstraint
	int32_t ___pathLenConstraint_4;

public:
	inline static int32_t get_offset_of_cA_3() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t2462195279, ___cA_3)); }
	inline bool get_cA_3() const { return ___cA_3; }
	inline bool* get_address_of_cA_3() { return &___cA_3; }
	inline void set_cA_3(bool value)
	{
		___cA_3 = value;
	}

	inline static int32_t get_offset_of_pathLenConstraint_4() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t2462195279, ___pathLenConstraint_4)); }
	inline int32_t get_pathLenConstraint_4() const { return ___pathLenConstraint_4; }
	inline int32_t* get_address_of_pathLenConstraint_4() { return &___pathLenConstraint_4; }
	inline void set_pathLenConstraint_4(int32_t value)
	{
		___pathLenConstraint_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICCONSTRAINTSEXTENSION_T2462195279_H
#ifndef KEYUSAGEEXTENSION_T1795615912_H
#define KEYUSAGEEXTENSION_T1795615912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.KeyUsageExtension
struct  KeyUsageExtension_t1795615912  : public X509Extension_t3173393653
{
public:
	// System.Int32 Mono.Security.X509.Extensions.KeyUsageExtension::kubits
	int32_t ___kubits_3;

public:
	inline static int32_t get_offset_of_kubits_3() { return static_cast<int32_t>(offsetof(KeyUsageExtension_t1795615912, ___kubits_3)); }
	inline int32_t get_kubits_3() const { return ___kubits_3; }
	inline int32_t* get_address_of_kubits_3() { return &___kubits_3; }
	inline void set_kubits_3(int32_t value)
	{
		___kubits_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYUSAGEEXTENSION_T1795615912_H
#ifndef SUBJECTKEYIDENTIFIEREXTENSION_T2404375272_H
#define SUBJECTKEYIDENTIFIEREXTENSION_T2404375272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension
struct  SubjectKeyIdentifierExtension_t2404375272  : public X509Extension_t3173393653
{
public:
	// System.Byte[] Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::ski
	ByteU5BU5D_t4116647657* ___ski_3;

public:
	inline static int32_t get_offset_of_ski_3() { return static_cast<int32_t>(offsetof(SubjectKeyIdentifierExtension_t2404375272, ___ski_3)); }
	inline ByteU5BU5D_t4116647657* get_ski_3() const { return ___ski_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_ski_3() { return &___ski_3; }
	inline void set_ski_3(ByteU5BU5D_t4116647657* value)
	{
		___ski_3 = value;
		Il2CppCodeGenWriteBarrier((&___ski_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBJECTKEYIDENTIFIEREXTENSION_T2404375272_H
#ifndef X509CERTIFICATECOLLECTION_T1542168550_H
#define X509CERTIFICATECOLLECTION_T1542168550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t1542168550  : public CollectionBase_t2727926298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T1542168550_H
#ifndef X509EXTENSIONCOLLECTION_T609554709_H
#define X509EXTENSIONCOLLECTION_T609554709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t609554709  : public CollectionBase_t2727926298
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t609554709, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T609554709_H
#ifndef COMMONNAME_T2882805359_H
#define COMMONNAME_T2882805359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/CommonName
struct  CommonName_t2882805359  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONNAME_T2882805359_H
#ifndef COUNTRYNAME_T4165042092_H
#define COUNTRYNAME_T4165042092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/CountryName
struct  CountryName_t4165042092  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COUNTRYNAME_T4165042092_H
#ifndef DNQUALIFIER_T2746394302_H
#define DNQUALIFIER_T2746394302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/DnQualifier
struct  DnQualifier_t2746394302  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DNQUALIFIER_T2746394302_H
#ifndef DOMAINCOMPONENT_T1597975113_H
#define DOMAINCOMPONENT_T1597975113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/DomainComponent
struct  DomainComponent_t1597975113  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOMAINCOMPONENT_T1597975113_H
#ifndef EMAILADDRESS_T484866411_H
#define EMAILADDRESS_T484866411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/EmailAddress
struct  EmailAddress_t484866411  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMAILADDRESS_T484866411_H
#ifndef GIVENNAME_T3114888956_H
#define GIVENNAME_T3114888956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/GivenName
struct  GivenName_t3114888956  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GIVENNAME_T3114888956_H
#ifndef INITIAL_T2745963796_H
#define INITIAL_T2745963796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Initial
struct  Initial_t2745963796  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIAL_T2745963796_H
#ifndef LOCALITYNAME_T1511149830_H
#define LOCALITYNAME_T1511149830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/LocalityName
struct  LocalityName_t1511149830  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALITYNAME_T1511149830_H
#ifndef NAME_T3626842933_H
#define NAME_T3626842933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Name
struct  Name_t3626842933  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAME_T3626842933_H
#ifndef OID_T2014794921_H
#define OID_T2014794921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Oid
struct  Oid_t2014794921  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OID_T2014794921_H
#ifndef ORGANIZATIONNAME_T857038441_H
#define ORGANIZATIONNAME_T857038441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/OrganizationName
struct  OrganizationName_t857038441  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORGANIZATIONNAME_T857038441_H
#ifndef ORGANIZATIONALUNITNAME_T1968218587_H
#define ORGANIZATIONALUNITNAME_T1968218587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/OrganizationalUnitName
struct  OrganizationalUnitName_t1968218587  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORGANIZATIONALUNITNAME_T1968218587_H
#ifndef SERIALNUMBER_T3812427306_H
#define SERIALNUMBER_T3812427306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/SerialNumber
struct  SerialNumber_t3812427306  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALNUMBER_T3812427306_H
#ifndef STATEORPROVINCENAME_T1916702996_H
#define STATEORPROVINCENAME_T1916702996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/StateOrProvinceName
struct  StateOrProvinceName_t1916702996  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEORPROVINCENAME_T1916702996_H
#ifndef SURNAME_T4221813936_H
#define SURNAME_T4221813936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Surname
struct  Surname_t4221813936  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURNAME_T4221813936_H
#ifndef TITLE_T2026585634_H
#define TITLE_T2026585634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Title
struct  Title_t2026585634  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLE_T2026585634_H
#ifndef USERID_T70549454_H
#define USERID_T70549454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/UserId
struct  UserId_t70549454  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERID_T70549454_H
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
#ifndef KEYUSAGES_T820456313_H
#define KEYUSAGES_T820456313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.KeyUsages
struct  KeyUsages_t820456313 
{
public:
	// System.Int32 Mono.Security.X509.Extensions.KeyUsages::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyUsages_t820456313, ___value___1)); }
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
#endif // KEYUSAGES_T820456313_H
#ifndef X509CHAINSTATUSFLAGS_T1831553603_H
#define X509CHAINSTATUSFLAGS_T1831553603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1831553603 
{
public:
	// System.Int32 Mono.Security.X509.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1831553603, ___value___1)); }
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
#endif // X509CHAINSTATUSFLAGS_T1831553603_H
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
#ifndef SPECIALFOLDER_T3871784040_H
#define SPECIALFOLDER_T3871784040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment/SpecialFolder
struct  SpecialFolder_t3871784040 
{
public:
	// System.Int32 System.Environment/SpecialFolder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SpecialFolder_t3871784040, ___value___1)); }
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
#endif // SPECIALFOLDER_T3871784040_H
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
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
#ifndef FILEMODE_T1183438340_H
#define FILEMODE_T1183438340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_t1183438340 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileMode_t1183438340, ___value___1)); }
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
#endif // FILEMODE_T1183438340_H
#ifndef FILESHARE_T3553318550_H
#define FILESHARE_T3553318550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileShare
struct  FileShare_t3553318550 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileShare_t3553318550, ___value___1)); }
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
#endif // FILESHARE_T3553318550_H
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
#ifndef X509CHAIN_T863783601_H
#define X509CHAIN_T863783601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t863783601  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t1542168550 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t1542168550 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t489243025 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t1542168550 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t863783601, ___roots_0)); }
	inline X509CertificateCollection_t1542168550 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t1542168550 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t1542168550 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier((&___roots_0), value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t863783601, ___certs_1)); }
	inline X509CertificateCollection_t1542168550 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t1542168550 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t1542168550 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier((&___certs_1), value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t863783601, ____root_2)); }
	inline X509Certificate_t489243025 * get__root_2() const { return ____root_2; }
	inline X509Certificate_t489243025 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_t489243025 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier((&____root_2), value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t863783601, ____chain_3)); }
	inline X509CertificateCollection_t1542168550 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t1542168550 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t1542168550 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier((&____chain_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t863783601, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T863783601_H
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
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_2;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_3;
	// System.Boolean System.IO.FileStream::async
	bool ___async_4;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_5;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_6;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_7;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_8;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_9;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_10;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_11;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_12;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_13;
	// System.String System.IO.FileStream::name
	String_t* ___name_14;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_15;

public:
	inline static int32_t get_offset_of_access_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_2)); }
	inline int32_t get_access_2() const { return ___access_2; }
	inline int32_t* get_address_of_access_2() { return &___access_2; }
	inline void set_access_2(int32_t value)
	{
		___access_2 = value;
	}

	inline static int32_t get_offset_of_owner_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_3)); }
	inline bool get_owner_3() const { return ___owner_3; }
	inline bool* get_address_of_owner_3() { return &___owner_3; }
	inline void set_owner_3(bool value)
	{
		___owner_3 = value;
	}

	inline static int32_t get_offset_of_async_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_4)); }
	inline bool get_async_4() const { return ___async_4; }
	inline bool* get_address_of_async_4() { return &___async_4; }
	inline void set_async_4(bool value)
	{
		___async_4 = value;
	}

	inline static int32_t get_offset_of_canseek_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_5)); }
	inline bool get_canseek_5() const { return ___canseek_5; }
	inline bool* get_address_of_canseek_5() { return &___canseek_5; }
	inline void set_canseek_5(bool value)
	{
		___canseek_5 = value;
	}

	inline static int32_t get_offset_of_append_startpos_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_6)); }
	inline int64_t get_append_startpos_6() const { return ___append_startpos_6; }
	inline int64_t* get_address_of_append_startpos_6() { return &___append_startpos_6; }
	inline void set_append_startpos_6(int64_t value)
	{
		___append_startpos_6 = value;
	}

	inline static int32_t get_offset_of_anonymous_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_7)); }
	inline bool get_anonymous_7() const { return ___anonymous_7; }
	inline bool* get_address_of_anonymous_7() { return &___anonymous_7; }
	inline void set_anonymous_7(bool value)
	{
		___anonymous_7 = value;
	}

	inline static int32_t get_offset_of_buf_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_8)); }
	inline ByteU5BU5D_t4116647657* get_buf_8() const { return ___buf_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_8() { return &___buf_8; }
	inline void set_buf_8(ByteU5BU5D_t4116647657* value)
	{
		___buf_8 = value;
		Il2CppCodeGenWriteBarrier((&___buf_8), value);
	}

	inline static int32_t get_offset_of_buf_size_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_9)); }
	inline int32_t get_buf_size_9() const { return ___buf_size_9; }
	inline int32_t* get_address_of_buf_size_9() { return &___buf_size_9; }
	inline void set_buf_size_9(int32_t value)
	{
		___buf_size_9 = value;
	}

	inline static int32_t get_offset_of_buf_length_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_10)); }
	inline int32_t get_buf_length_10() const { return ___buf_length_10; }
	inline int32_t* get_address_of_buf_length_10() { return &___buf_length_10; }
	inline void set_buf_length_10(int32_t value)
	{
		___buf_length_10 = value;
	}

	inline static int32_t get_offset_of_buf_offset_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_11)); }
	inline int32_t get_buf_offset_11() const { return ___buf_offset_11; }
	inline int32_t* get_address_of_buf_offset_11() { return &___buf_offset_11; }
	inline void set_buf_offset_11(int32_t value)
	{
		___buf_offset_11 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_12)); }
	inline bool get_buf_dirty_12() const { return ___buf_dirty_12; }
	inline bool* get_address_of_buf_dirty_12() { return &___buf_dirty_12; }
	inline void set_buf_dirty_12(bool value)
	{
		___buf_dirty_12 = value;
	}

	inline static int32_t get_offset_of_buf_start_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_13)); }
	inline int64_t get_buf_start_13() const { return ___buf_start_13; }
	inline int64_t* get_address_of_buf_start_13() { return &___buf_start_13; }
	inline void set_buf_start_13(int64_t value)
	{
		___buf_start_13 = value;
	}

	inline static int32_t get_offset_of_name_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_14)); }
	inline String_t* get_name_14() const { return ___name_14; }
	inline String_t** get_address_of_name_14() { return &___name_14; }
	inline void set_name_14(String_t* value)
	{
		___name_14 = value;
		Il2CppCodeGenWriteBarrier((&___name_14), value);
	}

	inline static int32_t get_offset_of_handle_15() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_15)); }
	inline intptr_t get_handle_15() const { return ___handle_15; }
	inline intptr_t* get_address_of_handle_15() { return &___handle_15; }
	inline void set_handle_15(intptr_t value)
	{
		___handle_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
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
#ifndef X509CERTIFICATE_T489243025_H
#define X509CERTIFICATE_T489243025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t489243025  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t2114160833 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t4116647657* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t3738529785  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t3738529785  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t2114160833 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t4116647657* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t2114160833 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t4116647657* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t4116647657* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t4116647657* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t4116647657* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t2385438082 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t2386879874 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t4116647657* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t4116647657* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t4116647657* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t609554709 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___decoder_0)); }
	inline ASN1_t2114160833 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t2114160833 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t2114160833 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t4116647657* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t4116647657* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_from_2)); }
	inline DateTime_t3738529785  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t3738529785 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t3738529785  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_until_3)); }
	inline DateTime_t3738529785  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t3738529785 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t3738529785  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___issuer_4)); }
	inline ASN1_t2114160833 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t2114160833 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t2114160833 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t4116647657* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t4116647657* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___subject_8)); }
	inline ASN1_t2114160833 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t2114160833 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t2114160833 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_publickey_10)); }
	inline ByteU5BU5D_t4116647657* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t4116647657* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___signature_11)); }
	inline ByteU5BU5D_t4116647657* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t4116647657* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t4116647657* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t4116647657* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___certhash_14)); }
	inline ByteU5BU5D_t4116647657* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t4116647657** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t4116647657* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ____rsa_15)); }
	inline RSA_t2385438082 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t2385438082 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t2385438082 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ____dsa_16)); }
	inline DSA_t2386879874 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t2386879874 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t2386879874 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___serialnumber_18)); }
	inline ByteU5BU5D_t4116647657* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t4116647657* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t4116647657* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t4116647657** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t4116647657* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t4116647657* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t4116647657** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t4116647657* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___extensions_21)); }
	inline X509ExtensionCollection_t609554709 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t609554709 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t609554709 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_t489243025_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$mapF
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapF_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map10
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map10_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map11
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map11_25;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_23() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025_StaticFields, ___U3CU3Ef__switchU24mapF_23)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapF_23() const { return ___U3CU3Ef__switchU24mapF_23; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapF_23() { return &___U3CU3Ef__switchU24mapF_23; }
	inline void set_U3CU3Ef__switchU24mapF_23(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapF_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_24() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025_StaticFields, ___U3CU3Ef__switchU24map10_24)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map10_24() const { return ___U3CU3Ef__switchU24map10_24; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map10_24() { return &___U3CU3Ef__switchU24map10_24; }
	inline void set_U3CU3Ef__switchU24map10_24(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map10_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map11_25() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025_StaticFields, ___U3CU3Ef__switchU24map11_25)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map11_25() const { return ___U3CU3Ef__switchU24map11_25; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map11_25() { return &___U3CU3Ef__switchU24map11_25; }
	inline void set_U3CU3Ef__switchU24map11_25(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map11_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map11_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T489243025_H
#ifndef X509CERTIFICATEBUILDER_T3506341729_H
#define X509CERTIFICATEBUILDER_T3506341729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateBuilder
struct  X509CertificateBuilder_t3506341729  : public X509Builder_t1341539432
{
public:
	// System.Byte Mono.Security.X509.X509CertificateBuilder::version
	uint8_t ___version_3;
	// System.Byte[] Mono.Security.X509.X509CertificateBuilder::sn
	ByteU5BU5D_t4116647657* ___sn_4;
	// System.String Mono.Security.X509.X509CertificateBuilder::issuer
	String_t* ___issuer_5;
	// System.DateTime Mono.Security.X509.X509CertificateBuilder::notBefore
	DateTime_t3738529785  ___notBefore_6;
	// System.DateTime Mono.Security.X509.X509CertificateBuilder::notAfter
	DateTime_t3738529785  ___notAfter_7;
	// System.String Mono.Security.X509.X509CertificateBuilder::subject
	String_t* ___subject_8;
	// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.X509.X509CertificateBuilder::aa
	AsymmetricAlgorithm_t932037087 * ___aa_9;
	// System.Byte[] Mono.Security.X509.X509CertificateBuilder::issuerUniqueID
	ByteU5BU5D_t4116647657* ___issuerUniqueID_10;
	// System.Byte[] Mono.Security.X509.X509CertificateBuilder::subjectUniqueID
	ByteU5BU5D_t4116647657* ___subjectUniqueID_11;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509CertificateBuilder::extensions
	X509ExtensionCollection_t609554709 * ___extensions_12;

public:
	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___version_3)); }
	inline uint8_t get_version_3() const { return ___version_3; }
	inline uint8_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(uint8_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_sn_4() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___sn_4)); }
	inline ByteU5BU5D_t4116647657* get_sn_4() const { return ___sn_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_sn_4() { return &___sn_4; }
	inline void set_sn_4(ByteU5BU5D_t4116647657* value)
	{
		___sn_4 = value;
		Il2CppCodeGenWriteBarrier((&___sn_4), value);
	}

	inline static int32_t get_offset_of_issuer_5() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___issuer_5)); }
	inline String_t* get_issuer_5() const { return ___issuer_5; }
	inline String_t** get_address_of_issuer_5() { return &___issuer_5; }
	inline void set_issuer_5(String_t* value)
	{
		___issuer_5 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_5), value);
	}

	inline static int32_t get_offset_of_notBefore_6() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___notBefore_6)); }
	inline DateTime_t3738529785  get_notBefore_6() const { return ___notBefore_6; }
	inline DateTime_t3738529785 * get_address_of_notBefore_6() { return &___notBefore_6; }
	inline void set_notBefore_6(DateTime_t3738529785  value)
	{
		___notBefore_6 = value;
	}

	inline static int32_t get_offset_of_notAfter_7() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___notAfter_7)); }
	inline DateTime_t3738529785  get_notAfter_7() const { return ___notAfter_7; }
	inline DateTime_t3738529785 * get_address_of_notAfter_7() { return &___notAfter_7; }
	inline void set_notAfter_7(DateTime_t3738529785  value)
	{
		___notAfter_7 = value;
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___subject_8)); }
	inline String_t* get_subject_8() const { return ___subject_8; }
	inline String_t** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(String_t* value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_aa_9() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___aa_9)); }
	inline AsymmetricAlgorithm_t932037087 * get_aa_9() const { return ___aa_9; }
	inline AsymmetricAlgorithm_t932037087 ** get_address_of_aa_9() { return &___aa_9; }
	inline void set_aa_9(AsymmetricAlgorithm_t932037087 * value)
	{
		___aa_9 = value;
		Il2CppCodeGenWriteBarrier((&___aa_9), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_10() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___issuerUniqueID_10)); }
	inline ByteU5BU5D_t4116647657* get_issuerUniqueID_10() const { return ___issuerUniqueID_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_issuerUniqueID_10() { return &___issuerUniqueID_10; }
	inline void set_issuerUniqueID_10(ByteU5BU5D_t4116647657* value)
	{
		___issuerUniqueID_10 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_10), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_11() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___subjectUniqueID_11)); }
	inline ByteU5BU5D_t4116647657* get_subjectUniqueID_11() const { return ___subjectUniqueID_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_subjectUniqueID_11() { return &___subjectUniqueID_11; }
	inline void set_subjectUniqueID_11(ByteU5BU5D_t4116647657* value)
	{
		___subjectUniqueID_11 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_11), value);
	}

	inline static int32_t get_offset_of_extensions_12() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___extensions_12)); }
	inline X509ExtensionCollection_t609554709 * get_extensions_12() const { return ___extensions_12; }
	inline X509ExtensionCollection_t609554709 ** get_address_of_extensions_12() { return &___extensions_12; }
	inline void set_extensions_12(X509ExtensionCollection_t609554709 * value)
	{
		___extensions_12 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEBUILDER_T3506341729_H
#ifndef X509CRL_T1148767388_H
#define X509CRL_T1148767388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl
struct  X509Crl_t1148767388  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer_0;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version_1;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t3738529785  ___thisUpdate_2;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t3738529785  ___nextUpdate_3;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t2718874744 * ___entries_4;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID_5;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_t4116647657* ___signature_6;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t609554709 * ___extensions_7;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_t4116647657* ___encoded_8;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_t4116647657* ___hash_value_9;

public:
	inline static int32_t get_offset_of_issuer_0() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___issuer_0)); }
	inline String_t* get_issuer_0() const { return ___issuer_0; }
	inline String_t** get_address_of_issuer_0() { return &___issuer_0; }
	inline void set_issuer_0(String_t* value)
	{
		___issuer_0 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___version_1)); }
	inline uint8_t get_version_1() const { return ___version_1; }
	inline uint8_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint8_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_thisUpdate_2() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___thisUpdate_2)); }
	inline DateTime_t3738529785  get_thisUpdate_2() const { return ___thisUpdate_2; }
	inline DateTime_t3738529785 * get_address_of_thisUpdate_2() { return &___thisUpdate_2; }
	inline void set_thisUpdate_2(DateTime_t3738529785  value)
	{
		___thisUpdate_2 = value;
	}

	inline static int32_t get_offset_of_nextUpdate_3() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___nextUpdate_3)); }
	inline DateTime_t3738529785  get_nextUpdate_3() const { return ___nextUpdate_3; }
	inline DateTime_t3738529785 * get_address_of_nextUpdate_3() { return &___nextUpdate_3; }
	inline void set_nextUpdate_3(DateTime_t3738529785  value)
	{
		___nextUpdate_3 = value;
	}

	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___entries_4)); }
	inline ArrayList_t2718874744 * get_entries_4() const { return ___entries_4; }
	inline ArrayList_t2718874744 ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(ArrayList_t2718874744 * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier((&___entries_4), value);
	}

	inline static int32_t get_offset_of_signatureOID_5() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___signatureOID_5)); }
	inline String_t* get_signatureOID_5() const { return ___signatureOID_5; }
	inline String_t** get_address_of_signatureOID_5() { return &___signatureOID_5; }
	inline void set_signatureOID_5(String_t* value)
	{
		___signatureOID_5 = value;
		Il2CppCodeGenWriteBarrier((&___signatureOID_5), value);
	}

	inline static int32_t get_offset_of_signature_6() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___signature_6)); }
	inline ByteU5BU5D_t4116647657* get_signature_6() const { return ___signature_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_signature_6() { return &___signature_6; }
	inline void set_signature_6(ByteU5BU5D_t4116647657* value)
	{
		___signature_6 = value;
		Il2CppCodeGenWriteBarrier((&___signature_6), value);
	}

	inline static int32_t get_offset_of_extensions_7() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___extensions_7)); }
	inline X509ExtensionCollection_t609554709 * get_extensions_7() const { return ___extensions_7; }
	inline X509ExtensionCollection_t609554709 ** get_address_of_extensions_7() { return &___extensions_7; }
	inline void set_extensions_7(X509ExtensionCollection_t609554709 * value)
	{
		___extensions_7 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_7), value);
	}

	inline static int32_t get_offset_of_encoded_8() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___encoded_8)); }
	inline ByteU5BU5D_t4116647657* get_encoded_8() const { return ___encoded_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_encoded_8() { return &___encoded_8; }
	inline void set_encoded_8(ByteU5BU5D_t4116647657* value)
	{
		___encoded_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoded_8), value);
	}

	inline static int32_t get_offset_of_hash_value_9() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___hash_value_9)); }
	inline ByteU5BU5D_t4116647657* get_hash_value_9() const { return ___hash_value_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_hash_value_9() { return &___hash_value_9; }
	inline void set_hash_value_9(ByteU5BU5D_t4116647657* value)
	{
		___hash_value_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_value_9), value);
	}
};

struct X509Crl_t1148767388_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_10() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388_StaticFields, ___U3CU3Ef__switchU24map12_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_10() const { return ___U3CU3Ef__switchU24map12_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_10() { return &___U3CU3Ef__switchU24map12_10; }
	inline void set_U3CU3Ef__switchU24map12_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_11() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388_StaticFields, ___U3CU3Ef__switchU24map13_11)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_11() const { return ___U3CU3Ef__switchU24map13_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_11() { return &___U3CU3Ef__switchU24map13_11; }
	inline void set_U3CU3Ef__switchU24map13_11(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRL_T1148767388_H
#ifndef X509CRLENTRY_T645568789_H
#define X509CRLENTRY_T645568789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t645568789  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t4116647657* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t3738529785  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t609554709 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_t645568789, ___sn_0)); }
	inline ByteU5BU5D_t4116647657* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_t4116647657* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier((&___sn_0), value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_t645568789, ___revocationDate_1)); }
	inline DateTime_t3738529785  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_t3738529785 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_t3738529785  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_t645568789, ___extensions_2)); }
	inline X509ExtensionCollection_t609554709 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t609554709 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t609554709 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRLENTRY_T645568789_H
#ifndef FILESYSTEMINFO_T3745885336_H
#define FILESYSTEMINFO_T3745885336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t3745885336  : public MarshalByRefObject_t2760389100
{
public:
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t592533987  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;

public:
	inline static int32_t get_offset_of_FullPath_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___FullPath_1)); }
	inline String_t* get_FullPath_1() const { return ___FullPath_1; }
	inline String_t** get_address_of_FullPath_1() { return &___FullPath_1; }
	inline void set_FullPath_1(String_t* value)
	{
		___FullPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_1), value);
	}

	inline static int32_t get_offset_of_OriginalPath_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___OriginalPath_2)); }
	inline String_t* get_OriginalPath_2() const { return ___OriginalPath_2; }
	inline String_t** get_address_of_OriginalPath_2() { return &___OriginalPath_2; }
	inline void set_OriginalPath_2(String_t* value)
	{
		___OriginalPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_2), value);
	}

	inline static int32_t get_offset_of_stat_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___stat_3)); }
	inline MonoIOStat_t592533987  get_stat_3() const { return ___stat_3; }
	inline MonoIOStat_t592533987 * get_address_of_stat_3() { return &___stat_3; }
	inline void set_stat_3(MonoIOStat_t592533987  value)
	{
		___stat_3 = value;
	}

	inline static int32_t get_offset_of_valid_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___valid_4)); }
	inline bool get_valid_4() const { return ___valid_4; }
	inline bool* get_address_of_valid_4() { return &___valid_4; }
	inline void set_valid_4(bool value)
	{
		___valid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T3745885336_H
#ifndef DIRECTORYINFO_T35957480_H
#define DIRECTORYINFO_T35957480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t35957480  : public FileSystemInfo_t3745885336
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_5;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_6;

public:
	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___current_5)); }
	inline String_t* get_current_5() const { return ___current_5; }
	inline String_t** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(String_t* value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___parent_6)); }
	inline String_t* get_parent_6() const { return ___parent_6; }
	inline String_t** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(String_t* value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___parent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T35957480_H
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
// Mono.Security.X509.X509Certificate[]
struct X509CertificateU5BU5D_t3563599409  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) X509Certificate_t489243025 * m_Items[1];

public:
	inline X509Certificate_t489243025 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509Certificate_t489243025 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509Certificate_t489243025 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline X509Certificate_t489243025 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509Certificate_t489243025 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509Certificate_t489243025 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Mono.Security.X509.X509Extension[]
struct X509ExtensionU5BU5D_t3108766909  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) X509Extension_t3173393653 * m_Items[1];

public:
	inline X509Extension_t3173393653 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509Extension_t3173393653 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509Extension_t3173393653 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline X509Extension_t3173393653 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509Extension_t3173393653 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509Extension_t3173393653 * value)
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m182537451_gshared (Dictionary_2_t3384741 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1279427033_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3959998165_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t* p1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::ToLower(System.Globalization.CultureInfo)
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m3490221821 (String_t* __this, CultureInfo_t4157843068 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m2392909825 (Dictionary_2_t2736202052 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2736202052 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m182537451_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m282647386 (Dictionary_2_t2736202052 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2736202052 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m1279427033_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1013208020 (Dictionary_2_t2736202052 * __this, String_t* p0, int32_t* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2736202052 *, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m3959998165_gshared)(__this, p0, p1, method);
}
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ASN1__ctor_m4216617981 (ASN1_t2114160833 * __this, uint8_t ___tag0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * ASN1_Add_m3262603624 (ASN1_t2114160833 * __this, ASN1_t2114160833 * ___asn10, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.PKCS7::AlgorithmIdentifier(System.String)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * PKCS7_AlgorithmIdentifier_m2045970514 (RuntimeObject * __this /* static, unused */, String_t* ___oid0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ASN1__ctor_m3517592395 (ASN1_t2114160833 * __this, uint8_t ___tag0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Builder::GetOid(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* X509Builder_GetOid_m1390202877 (X509Builder_t1341539432 * __this, String_t* ___hashName0, const RuntimeMethod* method);
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create(System.String)
extern "C" IL2CPP_METHOD_ATTR HashAlgorithm_t1432317219 * HashAlgorithm_Create_m644612360 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* HashAlgorithm_ComputeHash_m2825542963 (HashAlgorithm_t1432317219 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" IL2CPP_METHOD_ATTR void RSAPKCS1SignatureFormatter__ctor_m4180799161 (RSAPKCS1SignatureFormatter_t1514197062 * __this, AsymmetricAlgorithm_t932037087 * p0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Builder::Build(Mono.Security.ASN1,System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Builder_Build_m1052728567 (X509Builder_t1341539432 * __this, ASN1_t2114160833 * ___tbs0, String_t* ___hashoid1, ByteU5BU5D_t4116647657* ___signature2, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" IL2CPP_METHOD_ATTR void DSASignatureFormatter__ctor_m3897353665 (DSASignatureFormatter_t2007981259 * __this, AsymmetricAlgorithm_t932037087 * p0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_PEM_m2020851166 (RuntimeObject * __this /* static, unused */, String_t* ___type0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void CryptographicException__ctor_m1422015889 (CryptographicException_t248831461 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Certificate_Parse_m54358579 (X509Certificate_t489243025 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_m42271953 (SerializationInfo_t950877179 * __this, String_t* p0, Type_t * p1, const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Locale_GetText_m3520169047 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ASN1__ctor_m1219137533 (ASN1_t2114160833 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method);
// System.Byte Mono.Security.ASN1::get_Tag()
extern "C" IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1863840805 (ASN1_t2114160833 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void CryptographicException__ctor_m503735289 (CryptographicException_t248831461 * __this, String_t* p0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * ASN1_get_Item_m315148275 (ASN1_t2114160833 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_m3039939183 (ASN1_t2114160833 * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.ASN1::get_Value()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ASN1_get_Value_m3619295991 (ASN1_t2114160833 * __this, const RuntimeMethod* method);
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Reverse_m816310962 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::Element(System.Int32,System.Byte)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * ASN1_Element_m4088315026 (ASN1_t2114160833 * __this, int32_t ___index0, uint8_t ___anTag1, const RuntimeMethod* method);
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR String_t* X501_ToString_m2260475203 (RuntimeObject * __this /* static, unused */, ASN1_t2114160833 * ___seq0, const RuntimeMethod* method);
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  ASN1Convert_ToDateTime_m1246060840 (RuntimeObject * __this /* static, unused */, ASN1_t2114160833 * ___time0, const RuntimeMethod* method);
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_m4290825381 (RuntimeObject * __this /* static, unused */, ASN1_t2114160833 * ___asn10, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t ASN1_get_Length_m3581645253 (ASN1_t2114160833 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_m551870633 (X509ExtensionCollection_t609554709 * __this, ASN1_t2114160833 * ___asn10, const RuntimeMethod* method);
// System.Object System.Array::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_m2672907798 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_GetUnsignedBigInteger_m877462855 (X509Certificate_t489243025 * __this, ByteU5BU5D_t4116647657* ___integer0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DSACryptoServiceProvider__ctor_m1139102382 (DSACryptoServiceProvider_t3992668923 * __this, int32_t p0, const RuntimeMethod* method);
// Mono.Security.Cryptography.MD2 Mono.Security.Cryptography.MD2::Create()
extern "C" IL2CPP_METHOD_ATTR MD2_t1561046427 * MD2_Create_m3511476020 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Mono.Security.Cryptography.MD4 Mono.Security.Cryptography.MD4::Create()
extern "C" IL2CPP_METHOD_ATTR MD4_t1560915355 * MD4_Create_m1588482044 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Security.Cryptography.MD5 System.Security.Cryptography.MD5::Create()
extern "C" IL2CPP_METHOD_ATTR MD5_t3177620429 * MD5_Create_m3522414168 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1::Create()
extern "C" IL2CPP_METHOD_ATTR SHA1_t1803193667 * SHA1_Create_m1390871308 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create()
extern "C" IL2CPP_METHOD_ATTR SHA256_t3672283617 * SHA256_Create_m610202894 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Security.Cryptography.SHA384 System.Security.Cryptography.SHA384::Create()
extern "C" IL2CPP_METHOD_ATTR SHA384_t540967702 * SHA384_Create_m3237405884 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Security.Cryptography.SHA512 System.Security.Cryptography.SHA512::Create()
extern "C" IL2CPP_METHOD_ATTR SHA512_t1346946930 * SHA512_Create_m3934606971 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* HashAlgorithm_ComputeHash_m2044824070 (HashAlgorithm_t1432317219 * __this, ByteU5BU5D_t4116647657* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_m2378475222 (RSACryptoServiceProvider_t2683512874 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Max_m1873195862 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_UtcNow_m1393945741 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_WasCurrent_m1146083014 (X509Certificate_t489243025 * __this, DateTime_t3738529785  ___instant0, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool DateTime_op_GreaterThan_m3768590082 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool DateTime_op_LessThanOrEqual_m2360948759 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" IL2CPP_METHOD_ATTR void DSASignatureDeformatter__ctor_m2889130126 (DSASignatureDeformatter_t3677955172 * __this, AsymmetricAlgorithm_t932037087 * p0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_get_Hash_m410033711 (X509Certificate_t489243025 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" IL2CPP_METHOD_ATTR void RSAPKCS1SignatureDeformatter__ctor_m3706544163 (RSAPKCS1SignatureDeformatter_t3767223008 * __this, AsymmetricAlgorithm_t932037087 * p0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_VerifySignature_m3538124832 (X509Certificate_t489243025 * __this, RSA_t2385438082 * ___rsa0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_VerifySignature_m3988463526 (X509Certificate_t489243025 * __this, DSA_t2386879874 * ___dsa0, const RuntimeMethod* method);
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::VerifyHash(System.Byte[],System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool RSACryptoServiceProvider_VerifyHash_m54573565 (RSACryptoServiceProvider_t2683512874 * __this, ByteU5BU5D_t4116647657* p0, String_t* p1, ByteU5BU5D_t4116647657* p2, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m2872281893 (SerializationInfo_t950877179 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_ASCII_m3595602635 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m1977622757 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m3406607758 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Convert_FromBase64String_m3685135396 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509CertificateBuilder::.ctor(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateBuilder__ctor_m3636041184 (X509CertificateBuilder_t3506341729 * __this, uint8_t ___version0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Builder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509Builder__ctor_m2301186440 (X509Builder_t1341539432 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_m2474799343 (X509ExtensionCollection_t609554709 * __this, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromUnsignedBigInteger(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * ASN1Convert_FromUnsignedBigInteger_m1312950810 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___big0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509CertificateBuilder::UniqueIdentifier(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509CertificateBuilder_UniqueIdentifier_m3699558432 (X509CertificateBuilder_t3506341729 * __this, ByteU5BU5D_t4116647657* ___id0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.PKCS7::AlgorithmIdentifier(System.String,Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * PKCS7_AlgorithmIdentifier_m1963676069 (RuntimeObject * __this /* static, unused */, String_t* ___oid0, ASN1_t2114160833 * ___parameters1, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ASN1_set_Value_m647861841 (ASN1_t2114160833 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X501::FromString(System.String)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * X501_FromString_m1880408052 (RuntimeObject * __this /* static, unused */, String_t* ___rdn0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromDateTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * ASN1Convert_FromDateTime_m1024852799 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dt0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X509CertificateBuilder::SubjectPublicKeyInfo()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * X509CertificateBuilder_SubjectPublicKeyInfo_m1113035165 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t CollectionBase_get_Count_m1708965601 (CollectionBase_t2727926298 * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509ExtensionCollection::GetBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509ExtensionCollection_GetBytes_m1622025118 (X509ExtensionCollection_t609554709 * __this, const RuntimeMethod* method);
// System.Void System.Collections.CollectionBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CollectionBase__ctor_m3343513710 (CollectionBase_t2727926298 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509Certificate[])
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection_AddRange_m3166932337 (X509CertificateCollection_t1542168550 * __this, X509CertificateU5BU5D_t3563599409* ___value0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection_AddRange_m2165814476 (X509CertificateCollection_t1542168550 * __this, X509CertificateCollection_t1542168550 * ___value0, const RuntimeMethod* method);
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * CollectionBase_get_InnerList_m132195395 (CollectionBase_t2727926298 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t489243025 * X509CertificateCollection_get_Item_m1033426577 (X509CertificateCollection_t1542168550 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_IndexOf_m2003755268 (X509CertificateCollection_t1542168550 * __this, X509Certificate_t489243025 * ___value0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m85694331 (X509CertificateEnumerator_t3515934698 * __this, X509CertificateCollection_t1542168550 * ___mappings0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateCollection_Compare_m3676635762 (X509CertificateCollection_t1542168550 * __this, ByteU5BU5D_t4116647657* ___array10, ByteU5BU5D_t4116647657* ___array21, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m2066277891 (X509CertificateCollection_t1542168550 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509Chain__ctor_m3563800449 (X509Chain_t863783601 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t1542168550 * X509StoreManager_get_TrustedRootCertificates_m2180997293 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_Add_m2277657976 (X509CertificateCollection_t1542168550 * __this, X509Certificate_t489243025 * ___value0, const RuntimeMethod* method);
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR X509CertificateEnumerator_t3515934698 * X509CertificateCollection_GetEnumerator_m92169144 (X509CertificateCollection_t1542168550 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t489243025 * X509CertificateEnumerator_get_Current_m3079314562 (X509CertificateEnumerator_t3515934698 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_m1342258196 (X509CertificateEnumerator_t3515934698 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t489243025 * X509Chain_FindCertificateParent_m2809823532 (X509Chain_t863783601 * __this, X509Certificate_t489243025 * ___child0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_get_IsSelfSigned_m4064195693 (X509Certificate_t489243025 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t489243025 * X509Chain_FindCertificateRoot_m1937726457 (X509Chain_t863783601 * __this, X509Certificate_t489243025 * ___potentialRoot0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_IsParent_m2689546349 (X509Chain_t863783601 * __this, X509Certificate_t489243025 * ___child0, X509Certificate_t489243025 * ___parent1, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_IsValid_m3670863655 (X509Chain_t863783601 * __this, X509Certificate_t489243025 * ___cert0, const RuntimeMethod* method);
// System.Void System.Collections.CollectionBase::Clear()
extern "C" IL2CPP_METHOD_ATTR void CollectionBase_Clear_m1509125218 (CollectionBase_t2727926298 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_get_IsCurrent_m469817010 (X509Certificate_t489243025 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern "C" IL2CPP_METHOD_ATTR bool ServicePointManager_get_CheckCertificateRevocationList_m1645465614 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_IsTrusted_m1243554942 (X509Chain_t863783601 * __this, X509Certificate_t489243025 * ___potentialTrusted0, const RuntimeMethod* method);
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t1542168550 * X509Chain_get_TrustAnchors_m2434696767 (X509Chain_t863783601 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateCollection_Contains_m743657353 (X509CertificateCollection_t1542168550 * __this, X509Certificate_t489243025 * ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C" IL2CPP_METHOD_ATTR int32_t X509Certificate_get_Version_m2908311682 (X509Certificate_t489243025 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C" IL2CPP_METHOD_ATTR X509ExtensionCollection_t609554709 * X509Certificate_get_Extensions_m1217872579 (X509Certificate_t489243025 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Extension_t3173393653 * X509ExtensionCollection_get_Item_m2761897938 (X509ExtensionCollection_t609554709 * __this, String_t* ___oid0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" IL2CPP_METHOD_ATTR void BasicConstraintsExtension__ctor_m3191645544 (BasicConstraintsExtension_t2462195279 * __this, X509Extension_t3173393653 * ___extension0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::get_CertificateAuthority()
extern "C" IL2CPP_METHOD_ATTR bool BasicConstraintsExtension_get_CertificateAuthority_m391198292 (BasicConstraintsExtension_t2462195279 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Crl_Parse_m3164013387 (X509Crl_t1148767388 * __this, ByteU5BU5D_t4116647657* ___crl0, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509CrlEntry__ctor_m4013514048 (X509CrlEntry_t645568789 * __this, ASN1_t2114160833 * ___entry0, const RuntimeMethod* method);
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * ArrayList_ReadOnly_m1905796817 (RuntimeObject * __this /* static, unused */, ArrayList_t2718874744 * p0, const RuntimeMethod* method);
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR X509CrlEntry_t645568789 * X509Crl_GetCrlEntry_m641501875 (X509Crl_t1148767388 * __this, ByteU5BU5D_t4116647657* ___serialNumber0, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Crl_GetHashName_m4214678741 (X509Crl_t1148767388 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Crl::WasCurrent(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_WasCurrent_m662015296 (X509Crl_t1148767388 * __this, DateTime_t3738529785  ___instant0, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool DateTime_op_Equality_m1022058599 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool DateTime_op_GreaterThanOrEqual_m674703316 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509CrlEntry_get_SerialNumber_m3627212772 (X509CrlEntry_t645568789 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_Compare_m3418726913 (X509Crl_t1148767388 * __this, ByteU5BU5D_t4116647657* ___array10, ByteU5BU5D_t4116647657* ___array21, const RuntimeMethod* method);
// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" IL2CPP_METHOD_ATTR void KeyUsageExtension__ctor_m3414452076 (KeyUsageExtension_t1795615912 * __this, X509Extension_t3173393653 * ___extension0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.Extensions.KeyUsageExtension::Support(Mono.Security.X509.Extensions.KeyUsages)
extern "C" IL2CPP_METHOD_ATTR bool KeyUsageExtension_Support_m3508856672 (KeyUsageExtension_t1795615912 * __this, int32_t ___usage0, const RuntimeMethod* method);
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" IL2CPP_METHOD_ATTR DSA_t2386879874 * X509Certificate_get_DSA_m565099499 (X509Certificate_t489243025 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_VerifySignature_m1902456590 (X509Crl_t1148767388 * __this, DSA_t2386879874 * ___dsa0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_VerifySignature_m1808348256 (X509Crl_t1148767388 * __this, RSA_t2385438082 * ___rsa0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Crl_get_Hash_m464217067 (X509Crl_t1148767388 * __this, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" IL2CPP_METHOD_ATTR FileStream_t4292183065 * File_Open_m3218582222 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Crl__ctor_m1817187405 (X509Crl_t1148767388 * __this, ByteU5BU5D_t4116647657* ___crl0, const RuntimeMethod* method);
// System.Void System.Array::Reverse(System.Array)
extern "C" IL2CPP_METHOD_ATTR void Array_Reverse_m3714848183 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * X509Extension_get_Value_m896831716 (X509Extension_t3173393653 * __this, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Extension::get_Oid()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Extension_get_Oid_m4107042796 (X509Extension_t3173393653 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
extern "C" IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_m171054662 (X509Extension_t3173393653 * __this, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * ASN1Convert_FromOid_m3844102704 (RuntimeObject * __this /* static, unused */, String_t* ___oid0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_ASN1()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * X509Extension_get_ASN1_m1064344075 (X509Extension_t3173393653 * __this, const RuntimeMethod* method);
// System.Int32 System.String::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t String_GetHashCode_m1906374149 (String_t* __this, const RuntimeMethod* method);
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Byte_ToString_m4063101981 (uint8_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Byte)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m2532412511 (RuntimeObject * __this /* static, unused */, uint8_t p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m3211016485 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void X509Extension_WriteLine_m1662885247 (X509Extension_t3173393653 * __this, StringBuilder_t * ___sb0, int32_t ___n1, int32_t ___pos2, const RuntimeMethod* method);
// System.String System.Text.StringBuilder::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* StringBuilder_ToString_m3317489284 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509Extension__ctor_m710637961 (X509Extension_t3173393653 * __this, ASN1_t2114160833 * ___asn10, const RuntimeMethod* method);
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR X509Extension_t3173393653 * X509ExtensionCollection_get_Item_m2771335836 (X509ExtensionCollection_t609554709 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(Mono.Security.X509.X509Extension)
extern "C" IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_IndexOf_m2606992261 (X509ExtensionCollection_t609554709 * __this, X509Extension_t3173393653 * ___extension0, const RuntimeMethod* method);
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_IndexOf_m2996504451 (X509ExtensionCollection_t609554709 * __this, String_t* ___oid0, const RuntimeMethod* method);
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t1542168550 * X509Store_BuildCertificatesCollection_m3030935583 (X509Store_t2777415284 * __this, String_t* ___storeName0, const RuntimeMethod* method);
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * X509Store_BuildCrlsCollection_m1991312527 (X509Store_t2777415284 * __this, String_t* ___storeName0, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m3451222878 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool X509Store_CheckStore_m2045435685 (X509Store_t2777415284 * __this, String_t* ___path0, bool ___throwException1, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueName_m4271638378 (X509Store_t2777415284 * __this, X509Certificate_t489243025 * ___certificate0, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool File_Exists_m3943585060 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Create(System.String)
extern "C" IL2CPP_METHOD_ATTR FileStream_t4292183065 * File_Create_m2207667142 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509Crl)
extern "C" IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueName_m3285060726 (X509Store_t2777415284 * __this, X509Crl_t1148767388 * ___crl0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Crl::get_RawData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Crl_get_RawData_m3623997699 (X509Crl_t1148767388 * __this, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
extern "C" IL2CPP_METHOD_ATTR void File_Delete_m321251800 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509ExtensionCollection)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Store_GetUniqueName_m132964055 (X509Store_t2777415284 * __this, X509ExtensionCollection_t609554709 * ___extensions0, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Store::GetUniqueName(System.String,System.Byte[],System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueName_m915074968 (X509Store_t2777415284 * __this, String_t* ___method0, ByteU5BU5D_t4116647657* ___name1, String_t* ___fileExtension2, const RuntimeMethod* method);
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" IL2CPP_METHOD_ATTR X509ExtensionCollection_t609554709 * X509Crl_get_Extensions_m2708052985 (X509Crl_t1148767388 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" IL2CPP_METHOD_ATTR void SubjectKeyIdentifierExtension__ctor_m2055470965 (SubjectKeyIdentifierExtension_t2404375272 * __this, X509Extension_t3173393653 * ___extension0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::get_Identifier()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* SubjectKeyIdentifierExtension_get_Identifier_m3780825379 (SubjectKeyIdentifierExtension_t2404375272 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2989139009 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" IL2CPP_METHOD_ATTR FileStream_t4292183065 * File_OpenRead_m2936789020 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Store_Load_m2048139132 (X509Store_t2777415284 * __this, String_t* ___filename0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Certificate__ctor_m2595927506 (X509Certificate_t489243025 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Directory_Exists_m1484791558 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C" IL2CPP_METHOD_ATTR DirectoryInfo_t35957480 * Directory_CreateDirectory_m751642867 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* Directory_GetFiles_m2624572368 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t489243025 * X509Store_LoadCertificate_m1587806288 (X509Store_t2777415284 * __this, String_t* ___filename0, const RuntimeMethod* method);
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Crl_t1148767388 * X509Store_LoadCrl_m1881903843 (X509Store_t2777415284 * __this, String_t* ___filename0, const RuntimeMethod* method);
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_GetFolderPath_m327623990 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void X509Stores__ctor_m1786355972 (X509Stores_t1373936238 * __this, String_t* ___path0, const RuntimeMethod* method);
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
extern "C" IL2CPP_METHOD_ATTR X509Stores_t1373936238 * X509StoreManager_get_CurrentUser_m4040993045 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_IntermediateCA()
extern "C" IL2CPP_METHOD_ATTR X509Store_t2777415284 * X509Stores_get_IntermediateCA_m1350619599 (X509Stores_t1373936238 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t1542168550 * X509Store_get_Certificates_m56224934 (X509Store_t2777415284 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
extern "C" IL2CPP_METHOD_ATTR X509Stores_t1373936238 * X509StoreManager_get_LocalMachine_m3994689999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * X509Store_get_Crls_m4075976598 (X509Store_t2777415284 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern "C" IL2CPP_METHOD_ATTR X509Store_t2777415284 * X509Stores_get_TrustedRoot_m1736182879 (X509Stores_t1373936238 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_Untrusted()
extern "C" IL2CPP_METHOD_ATTR X509Store_t2777415284 * X509Stores_get_Untrusted_m1029989579 (X509Stores_t1373936238 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void X509Store__ctor_m2736551756 (X509Store_t2777415284 * __this, String_t* ___path0, bool ___crl1, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Store::Clear()
extern "C" IL2CPP_METHOD_ATTR void X509Store_Clear_m2126432876 (X509Store_t2777415284 * __this, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void FormatException__ctor_m4049685996 (FormatException_t154580423 * __this, String_t* p0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * AttributeTypeAndValue_GetASN1_m1976348179 (AttributeTypeAndValue_t3245693428 * __this, const RuntimeMethod* method);
// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::SelectBestEncoding()
extern "C" IL2CPP_METHOD_ATTR uint8_t AttributeTypeAndValue_SelectBestEncoding_m4133162804 (AttributeTypeAndValue_t3245693428 * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_BigEndianUnicode_m684646764 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1(System.Byte)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * AttributeTypeAndValue_GetASN1_m735511441 (AttributeTypeAndValue_t3245693428 * __this, uint8_t ___encoding0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_m682681796 (AttributeTypeAndValue_t3245693428 * __this, String_t* ___oid0, int32_t ___upperBound1, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_m3579516111 (AttributeTypeAndValue_t3245693428 * __this, String_t* ___oid0, int32_t ___upperBound1, uint8_t ___encoding2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509Builder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509Builder__ctor_m2301186440 (X509Builder_t1341539432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Builder__ctor_m2301186440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_hashName_1(_stringLiteral1144609714);
		return;
	}
}
// System.String Mono.Security.X509.X509Builder::GetOid(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* X509Builder_GetOid_m1390202877 (X509Builder_t1341539432 * __this, String_t* ___hashName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Builder_GetOid_m1390202877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t2736202052 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___hashName0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_2 = String_ToLower_m3490221821(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_00e0;
		}
	}
	{
		Dictionary_2_t2736202052 * L_4 = ((X509Builder_t1341539432_StaticFields*)il2cpp_codegen_static_fields_for(X509Builder_t1341539432_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24mapE_2();
		if (L_4)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t2736202052 * L_5 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_5, 7, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_1 = L_5;
		Dictionary_2_t2736202052 * L_6 = V_1;
		NullCheck(L_6);
		Dictionary_2_Add_m282647386(L_6, _stringLiteral4240326803, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_7 = V_1;
		NullCheck(L_7);
		Dictionary_2_Add_m282647386(L_7, _stringLiteral1108158921, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_8 = V_1;
		NullCheck(L_8);
		Dictionary_2_Add_m282647386(L_8, _stringLiteral3837042276, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_9 = V_1;
		NullCheck(L_9);
		Dictionary_2_Add_m282647386(L_9, _stringLiteral2567433970, 3, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_10 = V_1;
		NullCheck(L_10);
		Dictionary_2_Add_m282647386(L_10, _stringLiteral3351488925, 4, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_11 = V_1;
		NullCheck(L_11);
		Dictionary_2_Add_m282647386(L_11, _stringLiteral1012967824, 5, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_12 = V_1;
		NullCheck(L_12);
		Dictionary_2_Add_m282647386(L_12, _stringLiteral630761881, 6, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_13 = V_1;
		((X509Builder_t1341539432_StaticFields*)il2cpp_codegen_static_fields_for(X509Builder_t1341539432_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24mapE_2(L_13);
	}

IL_007d:
	{
		Dictionary_2_t2736202052 * L_14 = ((X509Builder_t1341539432_StaticFields*)il2cpp_codegen_static_fields_for(X509Builder_t1341539432_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24mapE_2();
		String_t* L_15 = V_0;
		NullCheck(L_14);
		bool L_16 = Dictionary_2_TryGetValue_m1013208020(L_14, L_15, (int32_t*)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_17 = V_2;
		switch (L_17)
		{
			case 0:
			{
				goto IL_00b6;
			}
			case 1:
			{
				goto IL_00bc;
			}
			case 2:
			{
				goto IL_00c2;
			}
			case 3:
			{
				goto IL_00c8;
			}
			case 4:
			{
				goto IL_00ce;
			}
			case 5:
			{
				goto IL_00d4;
			}
			case 6:
			{
				goto IL_00da;
			}
		}
	}
	{
		goto IL_00e0;
	}

IL_00b6:
	{
		return _stringLiteral1384881100;
	}

IL_00bc:
	{
		return _stringLiteral3341196236;
	}

IL_00c2:
	{
		return _stringLiteral1002544076;
	}

IL_00c8:
	{
		return _stringLiteral2958859212;
	}

IL_00ce:
	{
		return _stringLiteral1783758856;
	}

IL_00d4:
	{
		return _stringLiteral1783758855;
	}

IL_00da:
	{
		return _stringLiteral1783758854;
	}

IL_00e0:
	{
		String_t* L_18 = ___hashName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2836975190, L_18, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_20 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, X509Builder_GetOid_m1390202877_RuntimeMethod_var);
	}
}
// System.String Mono.Security.X509.X509Builder::get_Hash()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Builder_get_Hash_m2878236883 (X509Builder_t1341539432 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_hashName_1();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509Builder::set_Hash(System.String)
extern "C" IL2CPP_METHOD_ATTR void X509Builder_set_Hash_m2321189384 (X509Builder_t1341539432 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Builder_set_Hash_m2321189384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_hashName_1();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		__this->set_hashName_1(_stringLiteral1144609714);
		goto IL_0022;
	}

IL_001b:
	{
		String_t* L_1 = ___value0;
		__this->set_hashName_1(L_1);
	}

IL_0022:
	{
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Builder::Sign(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Builder_Sign_m4085265359 (X509Builder_t1341539432 * __this, AsymmetricAlgorithm_t932037087 * ___aa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Builder_Sign_m4085265359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsymmetricAlgorithm_t932037087 * L_0 = ___aa0;
		if (!((RSA_t2385438082 *)IsInstClass((RuntimeObject*)L_0, RSA_t2385438082_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		AsymmetricAlgorithm_t932037087 * L_1 = ___aa0;
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, RSA_t2385438082 * >::Invoke(6 /* System.Byte[] Mono.Security.X509.X509Builder::Sign(System.Security.Cryptography.RSA) */, __this, ((RSA_t2385438082 *)IsInstClass((RuntimeObject*)L_1, RSA_t2385438082_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0018:
	{
		AsymmetricAlgorithm_t932037087 * L_3 = ___aa0;
		if (!((DSA_t2386879874 *)IsInstClass((RuntimeObject*)L_3, DSA_t2386879874_il2cpp_TypeInfo_var)))
		{
			goto IL_0030;
		}
	}
	{
		AsymmetricAlgorithm_t932037087 * L_4 = ___aa0;
		ByteU5BU5D_t4116647657* L_5 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, DSA_t2386879874 * >::Invoke(7 /* System.Byte[] Mono.Security.X509.X509Builder::Sign(System.Security.Cryptography.DSA) */, __this, ((DSA_t2386879874 *)IsInstClass((RuntimeObject*)L_4, DSA_t2386879874_il2cpp_TypeInfo_var)));
		return L_5;
	}

IL_0030:
	{
		AsymmetricAlgorithm_t932037087 * L_6 = ___aa0;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1243364763, L_7, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_9 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, X509Builder_Sign_m4085265359_RuntimeMethod_var);
	}
}
// System.Byte[] Mono.Security.X509.X509Builder::Build(Mono.Security.ASN1,System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Builder_Build_m1052728567 (X509Builder_t1341539432 * __this, ASN1_t2114160833 * ___tbs0, String_t* ___hashoid1, ByteU5BU5D_t4116647657* ___signature2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Builder_Build_m1052728567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2114160833 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		ASN1_t2114160833 * L_0 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_t2114160833 * L_1 = V_0;
		ASN1_t2114160833 * L_2 = ___tbs0;
		NullCheck(L_1);
		ASN1_Add_m3262603624(L_1, L_2, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_3 = V_0;
		String_t* L_4 = ___hashoid1;
		ASN1_t2114160833 * L_5 = PKCS7_AlgorithmIdentifier_m2045970514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ASN1_Add_m3262603624(L_3, L_5, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_6 = ___signature2;
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)1)));
		V_1 = L_7;
		ByteU5BU5D_t4116647657* L_8 = ___signature2;
		ByteU5BU5D_t4116647657* L_9 = V_1;
		ByteU5BU5D_t4116647657* L_10 = ___signature2;
		NullCheck(L_10);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_8, 0, (RuntimeArray *)(RuntimeArray *)L_9, 1, (((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), /*hidden argument*/NULL);
		ASN1_t2114160833 * L_11 = V_0;
		ByteU5BU5D_t4116647657* L_12 = V_1;
		ASN1_t2114160833 * L_13 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_13, (uint8_t)3, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ASN1_Add_m3262603624(L_11, L_13, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_t4116647657* L_15 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_14);
		return L_15;
	}
}
// System.Byte[] Mono.Security.X509.X509Builder::Sign(System.Security.Cryptography.RSA)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Builder_Sign_m1784401927 (X509Builder_t1341539432 * __this, RSA_t2385438082 * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Builder_Sign_m1784401927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ASN1_t2114160833 * V_1 = NULL;
	HashAlgorithm_t1432317219 * V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	RSAPKCS1SignatureFormatter_t1514197062 * V_4 = NULL;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	{
		String_t* L_0 = __this->get_hashName_1();
		String_t* L_1 = X509Builder_GetOid_m1390202877(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		ASN1_t2114160833 * L_3 = VirtFuncInvoker1< ASN1_t2114160833 *, String_t* >::Invoke(4 /* Mono.Security.ASN1 Mono.Security.X509.X509Builder::ToBeSigned(System.String) */, __this, L_2);
		V_1 = L_3;
		String_t* L_4 = __this->get_hashName_1();
		HashAlgorithm_t1432317219 * L_5 = HashAlgorithm_Create_m644612360(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		HashAlgorithm_t1432317219 * L_6 = V_2;
		ASN1_t2114160833 * L_7 = V_1;
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_8 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_7);
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_9 = HashAlgorithm_ComputeHash_m2825542963(L_6, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		RSA_t2385438082 * L_10 = ___key0;
		RSAPKCS1SignatureFormatter_t1514197062 * L_11 = (RSAPKCS1SignatureFormatter_t1514197062 *)il2cpp_codegen_object_new(RSAPKCS1SignatureFormatter_t1514197062_il2cpp_TypeInfo_var);
		RSAPKCS1SignatureFormatter__ctor_m4180799161(L_11, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		RSAPKCS1SignatureFormatter_t1514197062 * L_12 = V_4;
		String_t* L_13 = __this->get_hashName_1();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetHashAlgorithm(System.String) */, L_12, L_13);
		RSAPKCS1SignatureFormatter_t1514197062 * L_14 = V_4;
		ByteU5BU5D_t4116647657* L_15 = V_3;
		NullCheck(L_14);
		ByteU5BU5D_t4116647657* L_16 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(6 /* System.Byte[] System.Security.Cryptography.RSAPKCS1SignatureFormatter::CreateSignature(System.Byte[]) */, L_14, L_15);
		V_5 = L_16;
		ASN1_t2114160833 * L_17 = V_1;
		String_t* L_18 = V_0;
		ByteU5BU5D_t4116647657* L_19 = V_5;
		ByteU5BU5D_t4116647657* L_20 = X509Builder_Build_m1052728567(__this, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Byte[] Mono.Security.X509.X509Builder::Sign(System.Security.Cryptography.DSA)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Builder_Sign_m1690293593 (X509Builder_t1341539432 * __this, DSA_t2386879874 * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Builder_Sign_m1690293593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ASN1_t2114160833 * V_1 = NULL;
	HashAlgorithm_t1432317219 * V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	DSASignatureFormatter_t2007981259 * V_4 = NULL;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	ByteU5BU5D_t4116647657* V_6 = NULL;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	ASN1_t2114160833 * V_8 = NULL;
	{
		V_0 = _stringLiteral254300466;
		String_t* L_0 = V_0;
		ASN1_t2114160833 * L_1 = VirtFuncInvoker1< ASN1_t2114160833 *, String_t* >::Invoke(4 /* Mono.Security.ASN1 Mono.Security.X509.X509Builder::ToBeSigned(System.String) */, __this, L_0);
		V_1 = L_1;
		String_t* L_2 = __this->get_hashName_1();
		HashAlgorithm_t1432317219 * L_3 = HashAlgorithm_Create_m644612360(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		HashAlgorithm_t1432317219 * L_4 = V_2;
		if (((SHA1_t1803193667 *)IsInstClass((RuntimeObject*)L_4, SHA1_t1803193667_il2cpp_TypeInfo_var)))
		{
			goto IL_0030;
		}
	}
	{
		NotSupportedException_t1314879016 * L_5 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_5, _stringLiteral2350063128, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, X509Builder_Sign_m1690293593_RuntimeMethod_var);
	}

IL_0030:
	{
		HashAlgorithm_t1432317219 * L_6 = V_2;
		ASN1_t2114160833 * L_7 = V_1;
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_8 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_7);
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_9 = HashAlgorithm_ComputeHash_m2825542963(L_6, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		DSA_t2386879874 * L_10 = ___key0;
		DSASignatureFormatter_t2007981259 * L_11 = (DSASignatureFormatter_t2007981259 *)il2cpp_codegen_object_new(DSASignatureFormatter_t2007981259_il2cpp_TypeInfo_var);
		DSASignatureFormatter__ctor_m3897353665(L_11, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		DSASignatureFormatter_t2007981259 * L_12 = V_4;
		String_t* L_13 = __this->get_hashName_1();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String) */, L_12, L_13);
		DSASignatureFormatter_t2007981259 * L_14 = V_4;
		ByteU5BU5D_t4116647657* L_15 = V_3;
		NullCheck(L_14);
		ByteU5BU5D_t4116647657* L_16 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(6 /* System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[]) */, L_14, L_15);
		V_5 = L_16;
		ByteU5BU5D_t4116647657* L_17 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		V_6 = L_17;
		ByteU5BU5D_t4116647657* L_18 = V_5;
		ByteU5BU5D_t4116647657* L_19 = V_6;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_18, 0, (RuntimeArray *)(RuntimeArray *)L_19, 0, ((int32_t)20), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_20 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		V_7 = L_20;
		ByteU5BU5D_t4116647657* L_21 = V_5;
		ByteU5BU5D_t4116647657* L_22 = V_7;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_21, ((int32_t)20), (RuntimeArray *)(RuntimeArray *)L_22, 0, ((int32_t)20), /*hidden argument*/NULL);
		ASN1_t2114160833 * L_23 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_23, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_8 = L_23;
		ASN1_t2114160833 * L_24 = V_8;
		ByteU5BU5D_t4116647657* L_25 = V_6;
		ASN1_t2114160833 * L_26 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_26, (uint8_t)2, L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		ASN1_Add_m3262603624(L_24, L_26, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_27 = V_8;
		ByteU5BU5D_t4116647657* L_28 = V_7;
		ASN1_t2114160833 * L_29 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_29, (uint8_t)2, L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		ASN1_Add_m3262603624(L_27, L_29, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_30 = V_1;
		String_t* L_31 = V_0;
		ASN1_t2114160833 * L_32 = V_8;
		NullCheck(L_32);
		ByteU5BU5D_t4116647657* L_33 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_32);
		ByteU5BU5D_t4116647657* L_34 = X509Builder_Build_m1052728567(__this, L_30, L_31, L_33, /*hidden argument*/NULL);
		return L_34;
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
// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Certificate__ctor_m2595927506 (X509Certificate_t489243025 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate__ctor_m2595927506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___data0;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = ___data0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_0043;
		}
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t4116647657* L_5 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_6 = X509Certificate_PEM_m2020851166(NULL /*static, unused*/, _stringLiteral1735138889, L_5, /*hidden argument*/NULL);
		___data0 = L_6;
		goto IL_0043;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0031;
		throw e;
	}

CATCH_0031:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t *)__exception_local);
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
			String_t* L_7 = ((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->get_encoding_error_22();
			Exception_t * L_8 = V_0;
			CryptographicException_t248831461 * L_9 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m1422015889(L_9, L_7, L_8, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, X509Certificate__ctor_m2595927506_RuntimeMethod_var);
		}

IL_003e:
		{
			goto IL_0043;
		}
	} // end catch (depth: 1)

IL_0043:
	{
		ByteU5BU5D_t4116647657* L_10 = ___data0;
		X509Certificate_Parse_m54358579(__this, L_10, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void X509Certificate__ctor_m4026853346 (X509Certificate_t489243025 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate__ctor_m4026853346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (ByteU5BU5D_t4116647657_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject * L_3 = SerializationInfo_GetValue_m42271953(L_0, _stringLiteral2150195429, L_2, /*hidden argument*/NULL);
		X509Certificate_Parse_m54358579(__this, ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_3, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" IL2CPP_METHOD_ATTR void X509Certificate__cctor_m1746020738 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate__cctor_m1746020738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m3520169047(NULL /*static, unused*/, _stringLiteral1185035339, /*hidden argument*/NULL);
		((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->set_encoding_error_22(L_0);
		return;
	}
}
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Certificate_Parse_m54358579 (X509Certificate_t489243025 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_Parse_m54358579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2114160833 * V_0 = NULL;
	int32_t V_1 = 0;
	ASN1_t2114160833 * V_2 = NULL;
	ASN1_t2114160833 * V_3 = NULL;
	ASN1_t2114160833 * V_4 = NULL;
	ASN1_t2114160833 * V_5 = NULL;
	ASN1_t2114160833 * V_6 = NULL;
	ASN1_t2114160833 * V_7 = NULL;
	ASN1_t2114160833 * V_8 = NULL;
	ASN1_t2114160833 * V_9 = NULL;
	ASN1_t2114160833 * V_10 = NULL;
	ASN1_t2114160833 * V_11 = NULL;
	int32_t V_12 = 0;
	ByteU5BU5D_t4116647657* V_13 = NULL;
	ASN1_t2114160833 * V_14 = NULL;
	ASN1_t2114160833 * V_15 = NULL;
	ASN1_t2114160833 * V_16 = NULL;
	Exception_t * V_17 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	X509Certificate_t489243025 * G_B11_0 = NULL;
	X509Certificate_t489243025 * G_B10_0 = NULL;
	ByteU5BU5D_t4116647657* G_B12_0 = NULL;
	X509Certificate_t489243025 * G_B12_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t4116647657* L_0 = ___data0;
			ASN1_t2114160833 * L_1 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
			ASN1__ctor_m1219137533(L_1, L_0, /*hidden argument*/NULL);
			__this->set_decoder_0(L_1);
			ASN1_t2114160833 * L_2 = __this->get_decoder_0();
			NullCheck(L_2);
			uint8_t L_3 = ASN1_get_Tag_m1863840805(L_2, /*hidden argument*/NULL);
			if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
			{
				goto IL_0029;
			}
		}

IL_001e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
			String_t* L_4 = ((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->get_encoding_error_22();
			CryptographicException_t248831461 * L_5 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m503735289(L_5, L_4, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, X509Certificate_Parse_m54358579_RuntimeMethod_var);
		}

IL_0029:
		{
			ASN1_t2114160833 * L_6 = __this->get_decoder_0();
			NullCheck(L_6);
			ASN1_t2114160833 * L_7 = ASN1_get_Item_m315148275(L_6, 0, /*hidden argument*/NULL);
			NullCheck(L_7);
			uint8_t L_8 = ASN1_get_Tag_m1863840805(L_7, /*hidden argument*/NULL);
			if ((((int32_t)L_8) == ((int32_t)((int32_t)48))))
			{
				goto IL_004c;
			}
		}

IL_0041:
		{
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
			String_t* L_9 = ((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->get_encoding_error_22();
			CryptographicException_t248831461 * L_10 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m503735289(L_10, L_9, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, X509Certificate_Parse_m54358579_RuntimeMethod_var);
		}

IL_004c:
		{
			ASN1_t2114160833 * L_11 = __this->get_decoder_0();
			NullCheck(L_11);
			ASN1_t2114160833 * L_12 = ASN1_get_Item_m315148275(L_11, 0, /*hidden argument*/NULL);
			V_0 = L_12;
			V_1 = 0;
			ASN1_t2114160833 * L_13 = __this->get_decoder_0();
			NullCheck(L_13);
			ASN1_t2114160833 * L_14 = ASN1_get_Item_m315148275(L_13, 0, /*hidden argument*/NULL);
			int32_t L_15 = V_1;
			NullCheck(L_14);
			ASN1_t2114160833 * L_16 = ASN1_get_Item_m315148275(L_14, L_15, /*hidden argument*/NULL);
			V_2 = L_16;
			__this->set_version_17(1);
			ASN1_t2114160833 * L_17 = V_2;
			NullCheck(L_17);
			uint8_t L_18 = ASN1_get_Tag_m1863840805(L_17, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)160)))))
			{
				goto IL_00b0;
			}
		}

IL_0085:
		{
			ASN1_t2114160833 * L_19 = V_2;
			NullCheck(L_19);
			int32_t L_20 = ASN1_get_Count_m3039939183(L_19, /*hidden argument*/NULL);
			if ((((int32_t)L_20) <= ((int32_t)0)))
			{
				goto IL_00b0;
			}
		}

IL_0091:
		{
			int32_t L_21 = __this->get_version_17();
			ASN1_t2114160833 * L_22 = V_2;
			NullCheck(L_22);
			ASN1_t2114160833 * L_23 = ASN1_get_Item_m315148275(L_22, 0, /*hidden argument*/NULL);
			NullCheck(L_23);
			ByteU5BU5D_t4116647657* L_24 = ASN1_get_Value_m3619295991(L_23, /*hidden argument*/NULL);
			NullCheck(L_24);
			int32_t L_25 = 0;
			uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
			__this->set_version_17(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_26)));
			int32_t L_27 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		}

IL_00b0:
		{
			ASN1_t2114160833 * L_28 = __this->get_decoder_0();
			NullCheck(L_28);
			ASN1_t2114160833 * L_29 = ASN1_get_Item_m315148275(L_28, 0, /*hidden argument*/NULL);
			int32_t L_30 = V_1;
			int32_t L_31 = L_30;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
			NullCheck(L_29);
			ASN1_t2114160833 * L_32 = ASN1_get_Item_m315148275(L_29, L_31, /*hidden argument*/NULL);
			V_3 = L_32;
			ASN1_t2114160833 * L_33 = V_3;
			NullCheck(L_33);
			uint8_t L_34 = ASN1_get_Tag_m1863840805(L_33, /*hidden argument*/NULL);
			if ((((int32_t)L_34) == ((int32_t)2)))
			{
				goto IL_00de;
			}
		}

IL_00d3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
			String_t* L_35 = ((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->get_encoding_error_22();
			CryptographicException_t248831461 * L_36 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m503735289(L_36, L_35, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, NULL, X509Certificate_Parse_m54358579_RuntimeMethod_var);
		}

IL_00de:
		{
			ASN1_t2114160833 * L_37 = V_3;
			NullCheck(L_37);
			ByteU5BU5D_t4116647657* L_38 = ASN1_get_Value_m3619295991(L_37, /*hidden argument*/NULL);
			__this->set_serialnumber_18(L_38);
			ByteU5BU5D_t4116647657* L_39 = __this->get_serialnumber_18();
			ByteU5BU5D_t4116647657* L_40 = __this->get_serialnumber_18();
			NullCheck(L_40);
			Array_Reverse_m816310962(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_39, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_40)->max_length)))), /*hidden argument*/NULL);
			int32_t L_41 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
			ASN1_t2114160833 * L_42 = V_0;
			int32_t L_43 = V_1;
			int32_t L_44 = L_43;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
			NullCheck(L_42);
			ASN1_t2114160833 * L_45 = ASN1_Element_m4088315026(L_42, L_44, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
			__this->set_issuer_4(L_45);
			ASN1_t2114160833 * L_46 = __this->get_issuer_4();
			IL2CPP_RUNTIME_CLASS_INIT(X501_t1758824426_il2cpp_TypeInfo_var);
			String_t* L_47 = X501_ToString_m2260475203(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
			__this->set_m_issuername_5(L_47);
			ASN1_t2114160833 * L_48 = V_0;
			int32_t L_49 = V_1;
			int32_t L_50 = L_49;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
			NullCheck(L_48);
			ASN1_t2114160833 * L_51 = ASN1_Element_m4088315026(L_48, L_50, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
			V_4 = L_51;
			ASN1_t2114160833 * L_52 = V_4;
			NullCheck(L_52);
			ASN1_t2114160833 * L_53 = ASN1_get_Item_m315148275(L_52, 0, /*hidden argument*/NULL);
			V_5 = L_53;
			ASN1_t2114160833 * L_54 = V_5;
			DateTime_t3738529785  L_55 = ASN1Convert_ToDateTime_m1246060840(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
			__this->set_m_from_2(L_55);
			ASN1_t2114160833 * L_56 = V_4;
			NullCheck(L_56);
			ASN1_t2114160833 * L_57 = ASN1_get_Item_m315148275(L_56, 1, /*hidden argument*/NULL);
			V_6 = L_57;
			ASN1_t2114160833 * L_58 = V_6;
			DateTime_t3738529785  L_59 = ASN1Convert_ToDateTime_m1246060840(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
			__this->set_m_until_3(L_59);
			ASN1_t2114160833 * L_60 = V_0;
			int32_t L_61 = V_1;
			int32_t L_62 = L_61;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
			NullCheck(L_60);
			ASN1_t2114160833 * L_63 = ASN1_Element_m4088315026(L_60, L_62, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
			__this->set_subject_8(L_63);
			ASN1_t2114160833 * L_64 = __this->get_subject_8();
			String_t* L_65 = X501_ToString_m2260475203(NULL /*static, unused*/, L_64, /*hidden argument*/NULL);
			__this->set_m_subject_9(L_65);
			ASN1_t2114160833 * L_66 = V_0;
			int32_t L_67 = V_1;
			int32_t L_68 = L_67;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
			NullCheck(L_66);
			ASN1_t2114160833 * L_69 = ASN1_Element_m4088315026(L_66, L_68, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
			V_7 = L_69;
			ASN1_t2114160833 * L_70 = V_7;
			NullCheck(L_70);
			ASN1_t2114160833 * L_71 = ASN1_Element_m4088315026(L_70, 0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
			V_8 = L_71;
			ASN1_t2114160833 * L_72 = V_8;
			NullCheck(L_72);
			ASN1_t2114160833 * L_73 = ASN1_Element_m4088315026(L_72, 0, (uint8_t)6, /*hidden argument*/NULL);
			V_9 = L_73;
			ASN1_t2114160833 * L_74 = V_9;
			String_t* L_75 = ASN1Convert_ToOid_m4290825381(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
			__this->set_m_keyalgo_6(L_75);
			ASN1_t2114160833 * L_76 = V_8;
			NullCheck(L_76);
			ASN1_t2114160833 * L_77 = ASN1_get_Item_m315148275(L_76, 1, /*hidden argument*/NULL);
			V_10 = L_77;
			ASN1_t2114160833 * L_78 = V_8;
			NullCheck(L_78);
			int32_t L_79 = ASN1_get_Count_m3039939183(L_78, /*hidden argument*/NULL);
			G_B10_0 = __this;
			if ((((int32_t)L_79) <= ((int32_t)1)))
			{
				G_B11_0 = __this;
				goto IL_01de;
			}
		}

IL_01d2:
		{
			ASN1_t2114160833 * L_80 = V_10;
			NullCheck(L_80);
			ByteU5BU5D_t4116647657* L_81 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_80);
			G_B12_0 = L_81;
			G_B12_1 = G_B10_0;
			goto IL_01df;
		}

IL_01de:
		{
			G_B12_0 = ((ByteU5BU5D_t4116647657*)(NULL));
			G_B12_1 = G_B11_0;
		}

IL_01df:
		{
			NullCheck(G_B12_1);
			G_B12_1->set_m_keyalgoparams_7(G_B12_0);
			ASN1_t2114160833 * L_82 = V_7;
			NullCheck(L_82);
			ASN1_t2114160833 * L_83 = ASN1_Element_m4088315026(L_82, 1, (uint8_t)3, /*hidden argument*/NULL);
			V_11 = L_83;
			ASN1_t2114160833 * L_84 = V_11;
			NullCheck(L_84);
			int32_t L_85 = ASN1_get_Length_m3581645253(L_84, /*hidden argument*/NULL);
			V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)1));
			int32_t L_86 = V_12;
			ByteU5BU5D_t4116647657* L_87 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_86);
			__this->set_m_publickey_10(L_87);
			ASN1_t2114160833 * L_88 = V_11;
			NullCheck(L_88);
			ByteU5BU5D_t4116647657* L_89 = ASN1_get_Value_m3619295991(L_88, /*hidden argument*/NULL);
			ByteU5BU5D_t4116647657* L_90 = __this->get_m_publickey_10();
			int32_t L_91 = V_12;
			Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_89, 1, (RuntimeArray *)(RuntimeArray *)L_90, 0, L_91, /*hidden argument*/NULL);
			ASN1_t2114160833 * L_92 = __this->get_decoder_0();
			NullCheck(L_92);
			ASN1_t2114160833 * L_93 = ASN1_get_Item_m315148275(L_92, 2, /*hidden argument*/NULL);
			NullCheck(L_93);
			ByteU5BU5D_t4116647657* L_94 = ASN1_get_Value_m3619295991(L_93, /*hidden argument*/NULL);
			V_13 = L_94;
			ByteU5BU5D_t4116647657* L_95 = V_13;
			NullCheck(L_95);
			ByteU5BU5D_t4116647657* L_96 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_95)->max_length)))), (int32_t)1)));
			__this->set_signature_11(L_96);
			ByteU5BU5D_t4116647657* L_97 = V_13;
			ByteU5BU5D_t4116647657* L_98 = __this->get_signature_11();
			ByteU5BU5D_t4116647657* L_99 = __this->get_signature_11();
			NullCheck(L_99);
			Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_97, 1, (RuntimeArray *)(RuntimeArray *)L_98, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_99)->max_length)))), /*hidden argument*/NULL);
			ASN1_t2114160833 * L_100 = __this->get_decoder_0();
			NullCheck(L_100);
			ASN1_t2114160833 * L_101 = ASN1_get_Item_m315148275(L_100, 1, /*hidden argument*/NULL);
			V_8 = L_101;
			ASN1_t2114160833 * L_102 = V_8;
			NullCheck(L_102);
			ASN1_t2114160833 * L_103 = ASN1_Element_m4088315026(L_102, 0, (uint8_t)6, /*hidden argument*/NULL);
			V_9 = L_103;
			ASN1_t2114160833 * L_104 = V_9;
			String_t* L_105 = ASN1Convert_ToOid_m4290825381(NULL /*static, unused*/, L_104, /*hidden argument*/NULL);
			__this->set_m_signaturealgo_12(L_105);
			ASN1_t2114160833 * L_106 = V_8;
			NullCheck(L_106);
			ASN1_t2114160833 * L_107 = ASN1_get_Item_m315148275(L_106, 1, /*hidden argument*/NULL);
			V_10 = L_107;
			ASN1_t2114160833 * L_108 = V_10;
			if (!L_108)
			{
				goto IL_02a1;
			}
		}

IL_028f:
		{
			ASN1_t2114160833 * L_109 = V_10;
			NullCheck(L_109);
			ByteU5BU5D_t4116647657* L_110 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_109);
			__this->set_m_signaturealgoparams_13(L_110);
			goto IL_02a8;
		}

IL_02a1:
		{
			__this->set_m_signaturealgoparams_13((ByteU5BU5D_t4116647657*)NULL);
		}

IL_02a8:
		{
			ASN1_t2114160833 * L_111 = V_0;
			int32_t L_112 = V_1;
			NullCheck(L_111);
			ASN1_t2114160833 * L_113 = ASN1_Element_m4088315026(L_111, L_112, (uint8_t)((int32_t)129), /*hidden argument*/NULL);
			V_14 = L_113;
			ASN1_t2114160833 * L_114 = V_14;
			if (!L_114)
			{
				goto IL_02ce;
			}
		}

IL_02bd:
		{
			int32_t L_115 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)1));
			ASN1_t2114160833 * L_116 = V_14;
			NullCheck(L_116);
			ByteU5BU5D_t4116647657* L_117 = ASN1_get_Value_m3619295991(L_116, /*hidden argument*/NULL);
			__this->set_issuerUniqueID_19(L_117);
		}

IL_02ce:
		{
			ASN1_t2114160833 * L_118 = V_0;
			int32_t L_119 = V_1;
			NullCheck(L_118);
			ASN1_t2114160833 * L_120 = ASN1_Element_m4088315026(L_118, L_119, (uint8_t)((int32_t)130), /*hidden argument*/NULL);
			V_15 = L_120;
			ASN1_t2114160833 * L_121 = V_15;
			if (!L_121)
			{
				goto IL_02f4;
			}
		}

IL_02e3:
		{
			int32_t L_122 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1));
			ASN1_t2114160833 * L_123 = V_15;
			NullCheck(L_123);
			ByteU5BU5D_t4116647657* L_124 = ASN1_get_Value_m3619295991(L_123, /*hidden argument*/NULL);
			__this->set_subjectUniqueID_20(L_124);
		}

IL_02f4:
		{
			ASN1_t2114160833 * L_125 = V_0;
			int32_t L_126 = V_1;
			NullCheck(L_125);
			ASN1_t2114160833 * L_127 = ASN1_Element_m4088315026(L_125, L_126, (uint8_t)((int32_t)163), /*hidden argument*/NULL);
			V_16 = L_127;
			ASN1_t2114160833 * L_128 = V_16;
			if (!L_128)
			{
				goto IL_032e;
			}
		}

IL_0309:
		{
			ASN1_t2114160833 * L_129 = V_16;
			NullCheck(L_129);
			int32_t L_130 = ASN1_get_Count_m3039939183(L_129, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_130) == ((uint32_t)1))))
			{
				goto IL_032e;
			}
		}

IL_0316:
		{
			ASN1_t2114160833 * L_131 = V_16;
			NullCheck(L_131);
			ASN1_t2114160833 * L_132 = ASN1_get_Item_m315148275(L_131, 0, /*hidden argument*/NULL);
			X509ExtensionCollection_t609554709 * L_133 = (X509ExtensionCollection_t609554709 *)il2cpp_codegen_object_new(X509ExtensionCollection_t609554709_il2cpp_TypeInfo_var);
			X509ExtensionCollection__ctor_m551870633(L_133, L_132, /*hidden argument*/NULL);
			__this->set_extensions_21(L_133);
			goto IL_033a;
		}

IL_032e:
		{
			X509ExtensionCollection_t609554709 * L_134 = (X509ExtensionCollection_t609554709 *)il2cpp_codegen_object_new(X509ExtensionCollection_t609554709_il2cpp_TypeInfo_var);
			X509ExtensionCollection__ctor_m551870633(L_134, (ASN1_t2114160833 *)NULL, /*hidden argument*/NULL);
			__this->set_extensions_21(L_134);
		}

IL_033a:
		{
			ByteU5BU5D_t4116647657* L_135 = ___data0;
			NullCheck((RuntimeArray *)(RuntimeArray *)L_135);
			RuntimeObject * L_136 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_135, /*hidden argument*/NULL);
			__this->set_m_encodedcert_1(((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_136, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var)));
			goto IL_0364;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0350;
		throw e;
	}

CATCH_0350:
	{ // begin catch(System.Exception)
		{
			V_17 = ((Exception_t *)__exception_local);
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
			String_t* L_137 = ((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->get_encoding_error_22();
			Exception_t * L_138 = V_17;
			CryptographicException_t248831461 * L_139 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m1422015889(L_139, L_137, L_138, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_139, NULL, X509Certificate_Parse_m54358579_RuntimeMethod_var);
		}

IL_035f:
		{
			goto IL_0364;
		}
	} // end catch (depth: 1)

IL_0364:
	{
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_GetUnsignedBigInteger_m877462855 (X509Certificate_t489243025 * __this, ByteU5BU5D_t4116647657* ___integer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_GetUnsignedBigInteger_m877462855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___integer0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_3 = ___integer0;
		NullCheck(L_3);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))), (int32_t)1));
		int32_t L_4 = V_0;
		ByteU5BU5D_t4116647657* L_5 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		ByteU5BU5D_t4116647657* L_6 = ___integer0;
		ByteU5BU5D_t4116647657* L_7 = V_1;
		int32_t L_8 = V_0;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_6, 1, (RuntimeArray *)(RuntimeArray *)L_7, 0, L_8, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_9 = V_1;
		return L_9;
	}

IL_0021:
	{
		ByteU5BU5D_t4116647657* L_10 = ___integer0;
		return L_10;
	}
}
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" IL2CPP_METHOD_ATTR DSA_t2386879874 * X509Certificate_get_DSA_m565099499 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_DSA_m565099499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DSAParameters_t1885824122  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ASN1_t2114160833 * V_1 = NULL;
	ASN1_t2114160833 * V_2 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_m_keyalgoparams_7();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		CryptographicException_t248831461 * L_1 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_1, _stringLiteral683764801, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Certificate_get_DSA_m565099499_RuntimeMethod_var);
	}

IL_0016:
	{
		DSA_t2386879874 * L_2 = __this->get__dsa_16();
		if (L_2)
		{
			goto IL_012e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DSAParameters_t1885824122 ));
		ByteU5BU5D_t4116647657* L_3 = __this->get_m_publickey_10();
		ASN1_t2114160833 * L_4 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m1219137533(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		ASN1_t2114160833 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		ASN1_t2114160833 * L_6 = V_1;
		NullCheck(L_6);
		uint8_t L_7 = ASN1_get_Tag_m1863840805(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0049;
		}
	}

IL_0047:
	{
		return (DSA_t2386879874 *)NULL;
	}

IL_0049:
	{
		ASN1_t2114160833 * L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_9 = ASN1_get_Value_m3619295991(L_8, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_10 = X509Certificate_GetUnsignedBigInteger_m877462855(__this, L_9, /*hidden argument*/NULL);
		(&V_0)->set_Y_7(L_10);
		ByteU5BU5D_t4116647657* L_11 = __this->get_m_keyalgoparams_7();
		ASN1_t2114160833 * L_12 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m1219137533(L_12, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		ASN1_t2114160833 * L_13 = V_2;
		if (!L_13)
		{
			goto IL_0087;
		}
	}
	{
		ASN1_t2114160833 * L_14 = V_2;
		NullCheck(L_14);
		uint8_t L_15 = ASN1_get_Tag_m1863840805(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0087;
		}
	}
	{
		ASN1_t2114160833 * L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17 = ASN1_get_Count_m3039939183(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) >= ((int32_t)3)))
		{
			goto IL_0089;
		}
	}

IL_0087:
	{
		return (DSA_t2386879874 *)NULL;
	}

IL_0089:
	{
		ASN1_t2114160833 * L_18 = V_2;
		NullCheck(L_18);
		ASN1_t2114160833 * L_19 = ASN1_get_Item_m315148275(L_18, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		uint8_t L_20 = ASN1_get_Tag_m1863840805(L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_00bf;
		}
	}
	{
		ASN1_t2114160833 * L_21 = V_2;
		NullCheck(L_21);
		ASN1_t2114160833 * L_22 = ASN1_get_Item_m315148275(L_21, 1, /*hidden argument*/NULL);
		NullCheck(L_22);
		uint8_t L_23 = ASN1_get_Tag_m1863840805(L_22, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)2))))
		{
			goto IL_00bf;
		}
	}
	{
		ASN1_t2114160833 * L_24 = V_2;
		NullCheck(L_24);
		ASN1_t2114160833 * L_25 = ASN1_get_Item_m315148275(L_24, 2, /*hidden argument*/NULL);
		NullCheck(L_25);
		uint8_t L_26 = ASN1_get_Tag_m1863840805(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) == ((int32_t)2)))
		{
			goto IL_00c1;
		}
	}

IL_00bf:
	{
		return (DSA_t2386879874 *)NULL;
	}

IL_00c1:
	{
		ASN1_t2114160833 * L_27 = V_2;
		NullCheck(L_27);
		ASN1_t2114160833 * L_28 = ASN1_get_Item_m315148275(L_27, 0, /*hidden argument*/NULL);
		NullCheck(L_28);
		ByteU5BU5D_t4116647657* L_29 = ASN1_get_Value_m3619295991(L_28, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_30 = X509Certificate_GetUnsignedBigInteger_m877462855(__this, L_29, /*hidden argument*/NULL);
		(&V_0)->set_P_3(L_30);
		ASN1_t2114160833 * L_31 = V_2;
		NullCheck(L_31);
		ASN1_t2114160833 * L_32 = ASN1_get_Item_m315148275(L_31, 1, /*hidden argument*/NULL);
		NullCheck(L_32);
		ByteU5BU5D_t4116647657* L_33 = ASN1_get_Value_m3619295991(L_32, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_34 = X509Certificate_GetUnsignedBigInteger_m877462855(__this, L_33, /*hidden argument*/NULL);
		(&V_0)->set_Q_4(L_34);
		ASN1_t2114160833 * L_35 = V_2;
		NullCheck(L_35);
		ASN1_t2114160833 * L_36 = ASN1_get_Item_m315148275(L_35, 2, /*hidden argument*/NULL);
		NullCheck(L_36);
		ByteU5BU5D_t4116647657* L_37 = ASN1_get_Value_m3619295991(L_36, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_38 = X509Certificate_GetUnsignedBigInteger_m877462855(__this, L_37, /*hidden argument*/NULL);
		(&V_0)->set_G_1(L_38);
		ByteU5BU5D_t4116647657* L_39 = (&V_0)->get_Y_7();
		NullCheck(L_39);
		DSACryptoServiceProvider_t3992668923 * L_40 = (DSACryptoServiceProvider_t3992668923 *)il2cpp_codegen_object_new(DSACryptoServiceProvider_t3992668923_il2cpp_TypeInfo_var);
		DSACryptoServiceProvider__ctor_m1139102382(L_40, ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length))))<<(int32_t)3)), /*hidden argument*/NULL);
		__this->set__dsa_16(L_40);
		DSA_t2386879874 * L_41 = __this->get__dsa_16();
		DSAParameters_t1885824122  L_42 = V_0;
		NullCheck(L_41);
		VirtActionInvoker1< DSAParameters_t1885824122  >::Invoke(15 /* System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters) */, L_41, L_42);
	}

IL_012e:
	{
		DSA_t2386879874 * L_43 = __this->get__dsa_16();
		return L_43;
	}
}
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
extern "C" IL2CPP_METHOD_ATTR void X509Certificate_set_DSA_m1073880156 (X509Certificate_t489243025 * __this, DSA_t2386879874 * ___value0, const RuntimeMethod* method)
{
	{
		DSA_t2386879874 * L_0 = ___value0;
		__this->set__dsa_16(L_0);
		DSA_t2386879874 * L_1 = ___value0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		__this->set__rsa_15((RSA_t2385438082 *)NULL);
	}

IL_0014:
	{
		return;
	}
}
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C" IL2CPP_METHOD_ATTR X509ExtensionCollection_t609554709 * X509Certificate_get_Extensions_m1217872579 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	{
		X509ExtensionCollection_t609554709 * L_0 = __this->get_extensions_21();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_get_Hash_m410033711 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_Hash_m410033711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashAlgorithm_t1432317219 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_t2736202052 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_certhash_14();
		if (L_0)
		{
			goto IL_0168;
		}
	}
	{
		V_0 = (HashAlgorithm_t1432317219 *)NULL;
		String_t* L_1 = __this->get_m_signaturealgo_12();
		V_2 = L_1;
		String_t* L_2 = V_2;
		if (!L_2)
		{
			goto IL_0125;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_3 = ((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24mapF_23();
		if (L_3)
		{
			goto IL_009e;
		}
	}
	{
		Dictionary_2_t2736202052 * L_4 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_4, ((int32_t)9), /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_3 = L_4;
		Dictionary_2_t2736202052 * L_5 = V_3;
		NullCheck(L_5);
		Dictionary_2_Add_m282647386(L_5, _stringLiteral1384881100, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_6 = V_3;
		NullCheck(L_6);
		Dictionary_2_Add_m282647386(L_6, _stringLiteral3341196236, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_7 = V_3;
		NullCheck(L_7);
		Dictionary_2_Add_m282647386(L_7, _stringLiteral1002544076, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_8 = V_3;
		NullCheck(L_8);
		Dictionary_2_Add_m282647386(L_8, _stringLiteral2958859212, 3, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_9 = V_3;
		NullCheck(L_9);
		Dictionary_2_Add_m282647386(L_9, _stringLiteral3539017004, 3, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_10 = V_3;
		NullCheck(L_10);
		Dictionary_2_Add_m282647386(L_10, _stringLiteral254300466, 3, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_11 = V_3;
		NullCheck(L_11);
		Dictionary_2_Add_m282647386(L_11, _stringLiteral1783758856, 4, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_12 = V_3;
		NullCheck(L_12);
		Dictionary_2_Add_m282647386(L_12, _stringLiteral1783758855, 5, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_13 = V_3;
		NullCheck(L_13);
		Dictionary_2_Add_m282647386(L_13, _stringLiteral1783758854, 6, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_14 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
		((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24mapF_23(L_14);
	}

IL_009e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_15 = ((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24mapF_23();
		String_t* L_16 = V_2;
		NullCheck(L_15);
		bool L_17 = Dictionary_2_TryGetValue_m1013208020(L_15, L_16, (int32_t*)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_18 = V_4;
		switch (L_18)
		{
			case 0:
			{
				goto IL_00d8;
			}
			case 1:
			{
				goto IL_00e3;
			}
			case 2:
			{
				goto IL_00ee;
			}
			case 3:
			{
				goto IL_00f9;
			}
			case 4:
			{
				goto IL_0104;
			}
			case 5:
			{
				goto IL_010f;
			}
			case 6:
			{
				goto IL_011a;
			}
		}
	}
	{
		goto IL_0125;
	}

IL_00d8:
	{
		MD2_t1561046427 * L_19 = MD2_Create_m3511476020(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_0127;
	}

IL_00e3:
	{
		MD4_t1560915355 * L_20 = MD4_Create_m1588482044(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_0127;
	}

IL_00ee:
	{
		MD5_t3177620429 * L_21 = MD5_Create_m3522414168(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_0127;
	}

IL_00f9:
	{
		SHA1_t1803193667 * L_22 = SHA1_Create_m1390871308(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0127;
	}

IL_0104:
	{
		SHA256_t3672283617 * L_23 = SHA256_Create_m610202894(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0127;
	}

IL_010f:
	{
		SHA384_t540967702 * L_24 = SHA384_Create_m3237405884(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_0127;
	}

IL_011a:
	{
		SHA512_t1346946930 * L_25 = SHA512_Create_m3934606971(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_0127;
	}

IL_0125:
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0127:
	{
		ASN1_t2114160833 * L_26 = __this->get_decoder_0();
		if (!L_26)
		{
			goto IL_0143;
		}
	}
	{
		ASN1_t2114160833 * L_27 = __this->get_decoder_0();
		NullCheck(L_27);
		int32_t L_28 = ASN1_get_Count_m3039939183(L_27, /*hidden argument*/NULL);
		if ((((int32_t)L_28) >= ((int32_t)1)))
		{
			goto IL_0145;
		}
	}

IL_0143:
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0145:
	{
		ASN1_t2114160833 * L_29 = __this->get_decoder_0();
		NullCheck(L_29);
		ASN1_t2114160833 * L_30 = ASN1_get_Item_m315148275(L_29, 0, /*hidden argument*/NULL);
		NullCheck(L_30);
		ByteU5BU5D_t4116647657* L_31 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_30);
		V_1 = L_31;
		HashAlgorithm_t1432317219 * L_32 = V_0;
		ByteU5BU5D_t4116647657* L_33 = V_1;
		ByteU5BU5D_t4116647657* L_34 = V_1;
		NullCheck(L_34);
		NullCheck(L_32);
		ByteU5BU5D_t4116647657* L_35 = HashAlgorithm_ComputeHash_m2044824070(L_32, L_33, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))), /*hidden argument*/NULL);
		__this->set_certhash_14(L_35);
	}

IL_0168:
	{
		ByteU5BU5D_t4116647657* L_36 = __this->get_certhash_14();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_36);
		RuntimeObject * L_37 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_36, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_37, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Certificate_get_IssuerName_m47554030 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_issuername_5();
		return L_0;
	}
}
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Certificate_get_KeyAlgorithm_m3935660380 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_keyalgo_6();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_get_KeyAlgorithmParameters_m3698130868 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_KeyAlgorithmParameters_m3698130868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_m_keyalgoparams_7();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_m_keyalgoparams_7();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Certificate_set_KeyAlgorithmParameters_m2010117999 (X509Certificate_t489243025 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_m_keyalgoparams_7(L_0);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_get_PublicKey_m950835056 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_PublicKey_m950835056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_m_publickey_10();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_m_publickey_10();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C" IL2CPP_METHOD_ATTR RSA_t2385438082 * X509Certificate_get_RSA_m1755006809 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_RSA_m1755006809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RSAParameters_t1728406613  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ASN1_t2114160833 * V_1 = NULL;
	ASN1_t2114160833 * V_2 = NULL;
	ASN1_t2114160833 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		RSA_t2385438082 * L_0 = __this->get__rsa_15();
		if (L_0)
		{
			goto IL_0097;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RSAParameters_t1728406613 ));
		ByteU5BU5D_t4116647657* L_1 = __this->get_m_publickey_10();
		ASN1_t2114160833 * L_2 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m1219137533(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		ASN1_t2114160833 * L_3 = V_1;
		NullCheck(L_3);
		ASN1_t2114160833 * L_4 = ASN1_get_Item_m315148275(L_3, 0, /*hidden argument*/NULL);
		V_2 = L_4;
		ASN1_t2114160833 * L_5 = V_2;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		ASN1_t2114160833 * L_6 = V_2;
		NullCheck(L_6);
		uint8_t L_7 = ASN1_get_Tag_m1863840805(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_003b;
		}
	}

IL_0039:
	{
		return (RSA_t2385438082 *)NULL;
	}

IL_003b:
	{
		ASN1_t2114160833 * L_8 = V_1;
		NullCheck(L_8);
		ASN1_t2114160833 * L_9 = ASN1_get_Item_m315148275(L_8, 1, /*hidden argument*/NULL);
		V_3 = L_9;
		ASN1_t2114160833 * L_10 = V_3;
		NullCheck(L_10);
		uint8_t L_11 = ASN1_get_Tag_m1863840805(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)2)))
		{
			goto IL_0051;
		}
	}
	{
		return (RSA_t2385438082 *)NULL;
	}

IL_0051:
	{
		ASN1_t2114160833 * L_12 = V_2;
		NullCheck(L_12);
		ByteU5BU5D_t4116647657* L_13 = ASN1_get_Value_m3619295991(L_12, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_14 = X509Certificate_GetUnsignedBigInteger_m877462855(__this, L_13, /*hidden argument*/NULL);
		(&V_0)->set_Modulus_6(L_14);
		ASN1_t2114160833 * L_15 = V_3;
		NullCheck(L_15);
		ByteU5BU5D_t4116647657* L_16 = ASN1_get_Value_m3619295991(L_15, /*hidden argument*/NULL);
		(&V_0)->set_Exponent_7(L_16);
		ByteU5BU5D_t4116647657* L_17 = (&V_0)->get_Modulus_6();
		NullCheck(L_17);
		V_4 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))))<<(int32_t)3));
		int32_t L_18 = V_4;
		RSACryptoServiceProvider_t2683512874 * L_19 = (RSACryptoServiceProvider_t2683512874 *)il2cpp_codegen_object_new(RSACryptoServiceProvider_t2683512874_il2cpp_TypeInfo_var);
		RSACryptoServiceProvider__ctor_m2378475222(L_19, L_18, /*hidden argument*/NULL);
		__this->set__rsa_15(L_19);
		RSA_t2385438082 * L_20 = __this->get__rsa_15();
		RSAParameters_t1728406613  L_21 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< RSAParameters_t1728406613  >::Invoke(16 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_20, L_21);
	}

IL_0097:
	{
		RSA_t2385438082 * L_22 = __this->get__rsa_15();
		return L_22;
	}
}
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
extern "C" IL2CPP_METHOD_ATTR void X509Certificate_set_RSA_m3534515075 (X509Certificate_t489243025 * __this, RSA_t2385438082 * ___value0, const RuntimeMethod* method)
{
	{
		RSA_t2385438082 * L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		__this->set__dsa_16((DSA_t2386879874 *)NULL);
	}

IL_000d:
	{
		RSA_t2385438082 * L_1 = ___value0;
		__this->set__rsa_15(L_1);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_get_RawData_m2626675988 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_RawData_m2626675988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_m_encodedcert_1();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_m_encodedcert_1();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_get_SerialNumber_m3924188880 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_SerialNumber_m3924188880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_serialnumber_18();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_serialnumber_18();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_get_Signature_m2498854864 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_Signature_m2498854864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2114160833 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	Dictionary_2_t2736202052 * V_9 = NULL;
	int32_t V_10 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_signature_11();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_000d:
	{
		String_t* L_1 = __this->get_m_signaturealgo_12();
		V_8 = L_1;
		String_t* L_2 = V_8;
		if (!L_2)
		{
			goto IL_0182;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_3 = ((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map10_24();
		if (L_3)
		{
			goto IL_00ab;
		}
	}
	{
		Dictionary_2_t2736202052 * L_4 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_4, ((int32_t)9), /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_9 = L_4;
		Dictionary_2_t2736202052 * L_5 = V_9;
		NullCheck(L_5);
		Dictionary_2_Add_m282647386(L_5, _stringLiteral1384881100, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_6 = V_9;
		NullCheck(L_6);
		Dictionary_2_Add_m282647386(L_6, _stringLiteral3341196236, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_7 = V_9;
		NullCheck(L_7);
		Dictionary_2_Add_m282647386(L_7, _stringLiteral1002544076, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_8 = V_9;
		NullCheck(L_8);
		Dictionary_2_Add_m282647386(L_8, _stringLiteral2958859212, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_9 = V_9;
		NullCheck(L_9);
		Dictionary_2_Add_m282647386(L_9, _stringLiteral3539017004, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_10 = V_9;
		NullCheck(L_10);
		Dictionary_2_Add_m282647386(L_10, _stringLiteral1783758856, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_11 = V_9;
		NullCheck(L_11);
		Dictionary_2_Add_m282647386(L_11, _stringLiteral1783758855, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_12 = V_9;
		NullCheck(L_12);
		Dictionary_2_Add_m282647386(L_12, _stringLiteral1783758854, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_13 = V_9;
		NullCheck(L_13);
		Dictionary_2_Add_m282647386(L_13, _stringLiteral254300466, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_14 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
		((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map10_24(L_14);
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_15 = ((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map10_24();
		String_t* L_16 = V_8;
		NullCheck(L_15);
		bool L_17 = Dictionary_2_TryGetValue_m1013208020(L_15, L_16, (int32_t*)(&V_10), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_18 = V_10;
		if (!L_18)
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_19 = V_10;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			goto IL_00e3;
		}
	}
	{
		goto IL_0182;
	}

IL_00d2:
	{
		ByteU5BU5D_t4116647657* L_20 = __this->get_signature_11();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_20);
		RuntimeObject * L_21 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_20, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_21, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}

IL_00e3:
	{
		ByteU5BU5D_t4116647657* L_22 = __this->get_signature_11();
		ASN1_t2114160833 * L_23 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m1219137533(L_23, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		ASN1_t2114160833 * L_24 = V_0;
		if (!L_24)
		{
			goto IL_0101;
		}
	}
	{
		ASN1_t2114160833 * L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = ASN1_get_Count_m3039939183(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) == ((int32_t)2)))
		{
			goto IL_0103;
		}
	}

IL_0101:
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0103:
	{
		ASN1_t2114160833 * L_27 = V_0;
		NullCheck(L_27);
		ASN1_t2114160833 * L_28 = ASN1_get_Item_m315148275(L_27, 0, /*hidden argument*/NULL);
		NullCheck(L_28);
		ByteU5BU5D_t4116647657* L_29 = ASN1_get_Value_m3619295991(L_28, /*hidden argument*/NULL);
		V_1 = L_29;
		ASN1_t2114160833 * L_30 = V_0;
		NullCheck(L_30);
		ASN1_t2114160833 * L_31 = ASN1_get_Item_m315148275(L_30, 1, /*hidden argument*/NULL);
		NullCheck(L_31);
		ByteU5BU5D_t4116647657* L_32 = ASN1_get_Value_m3619295991(L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		ByteU5BU5D_t4116647657* L_33 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		V_3 = L_33;
		ByteU5BU5D_t4116647657* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = Math_Max_m1873195862(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))), (int32_t)((int32_t)20))), /*hidden argument*/NULL);
		V_4 = L_35;
		ByteU5BU5D_t4116647657* L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37 = Math_Max_m1873195862(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)20), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))))), /*hidden argument*/NULL);
		V_5 = L_37;
		ByteU5BU5D_t4116647657* L_38 = V_1;
		int32_t L_39 = V_4;
		ByteU5BU5D_t4116647657* L_40 = V_3;
		int32_t L_41 = V_5;
		ByteU5BU5D_t4116647657* L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43 = V_4;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_38, L_39, (RuntimeArray *)(RuntimeArray *)L_40, L_41, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_42)->max_length)))), (int32_t)L_43)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = Math_Max_m1873195862(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_44)->max_length)))), (int32_t)((int32_t)20))), /*hidden argument*/NULL);
		V_6 = L_45;
		ByteU5BU5D_t4116647657* L_46 = V_2;
		NullCheck(L_46);
		int32_t L_47 = Math_Max_m1873195862(NULL /*static, unused*/, ((int32_t)20), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)40), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_46)->max_length)))))), /*hidden argument*/NULL);
		V_7 = L_47;
		ByteU5BU5D_t4116647657* L_48 = V_2;
		int32_t L_49 = V_6;
		ByteU5BU5D_t4116647657* L_50 = V_3;
		int32_t L_51 = V_7;
		ByteU5BU5D_t4116647657* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53 = V_6;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_48, L_49, (RuntimeArray *)(RuntimeArray *)L_50, L_51, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_52)->max_length)))), (int32_t)L_53)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_54 = V_3;
		return L_54;
	}

IL_0182:
	{
		String_t* L_55 = __this->get_m_signaturealgo_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_56 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2511804911, L_55, /*hidden argument*/NULL);
		CryptographicException_t248831461 * L_57 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_57, L_56, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, NULL, X509Certificate_get_Signature_m2498854864_RuntimeMethod_var);
	}
}
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Certificate_get_SignatureAlgorithm_m122054440 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_signaturealgo_12();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_SignatureAlgorithmParameters()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_get_SignatureAlgorithmParameters_m1282866228 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_SignatureAlgorithmParameters_m1282866228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_m_signaturealgoparams_13();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_m_signaturealgoparams_13();
		return L_1;
	}

IL_0012:
	{
		ByteU5BU5D_t4116647657* L_2 = __this->get_m_signaturealgoparams_13();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		RuntimeObject * L_3 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_2, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_3, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Certificate_get_SubjectName_m3871411396 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_subject_9();
		return L_0;
	}
}
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  X509Certificate_get_ValidFrom_m845748800 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_m_from_2();
		return L_0;
	}
}
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  X509Certificate_get_ValidUntil_m1838041919 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_m_until_3();
		return L_0;
	}
}
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C" IL2CPP_METHOD_ATTR int32_t X509Certificate_get_Version_m2908311682 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_version_17();
		return L_0;
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_get_IsCurrent_m469817010 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_IsCurrent_m469817010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_0 = DateTime_get_UtcNow_m1393945741(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = X509Certificate_WasCurrent_m1146083014(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_WasCurrent_m1146083014 (X509Certificate_t489243025 * __this, DateTime_t3738529785  ___instant0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_WasCurrent_m1146083014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		DateTime_t3738529785  L_0 = ___instant0;
		DateTime_t3738529785  L_1 = VirtFuncInvoker0< DateTime_t3738529785  >::Invoke(18 /* System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_2 = DateTime_op_GreaterThan_m3768590082(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		DateTime_t3738529785  L_3 = ___instant0;
		DateTime_t3738529785  L_4 = VirtFuncInvoker0< DateTime_t3738529785  >::Invoke(19 /* System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_5 = DateTime_op_LessThanOrEqual_m2360948759(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		return (bool)G_B3_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_IssuerUniqueIdentifier()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_get_IssuerUniqueIdentifier_m1604429114 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_IssuerUniqueIdentifier_m1604429114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_issuerUniqueID_19();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_issuerUniqueID_19();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_SubjectUniqueIdentifier()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_get_SubjectUniqueIdentifier_m1655979669 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_SubjectUniqueIdentifier_m1655979669_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_subjectUniqueID_20();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_subjectUniqueID_20();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_VerifySignature_m3988463526 (X509Certificate_t489243025 * __this, DSA_t2386879874 * ___dsa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_VerifySignature_m3988463526_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DSASignatureDeformatter_t3677955172 * V_0 = NULL;
	{
		DSA_t2386879874 * L_0 = ___dsa0;
		DSASignatureDeformatter_t3677955172 * L_1 = (DSASignatureDeformatter_t3677955172 *)il2cpp_codegen_object_new(DSASignatureDeformatter_t3677955172_il2cpp_TypeInfo_var);
		DSASignatureDeformatter__ctor_m2889130126(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		DSASignatureDeformatter_t3677955172 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String) */, L_2, _stringLiteral1144609714);
		DSASignatureDeformatter_t3677955172 * L_3 = V_0;
		ByteU5BU5D_t4116647657* L_4 = X509Certificate_get_Hash_m410033711(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_5 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(14 /* System.Byte[] Mono.Security.X509.X509Certificate::get_Signature() */, __this);
		NullCheck(L_3);
		bool L_6 = VirtFuncInvoker2< bool, ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(6 /* System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_VerifySignature_m3538124832 (X509Certificate_t489243025 * __this, RSA_t2385438082 * ___rsa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_VerifySignature_m3538124832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RSAPKCS1SignatureDeformatter_t3767223008 * V_0 = NULL;
	String_t* V_1 = NULL;
	Dictionary_2_t2736202052 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		RSA_t2385438082 * L_0 = ___rsa0;
		RSAPKCS1SignatureDeformatter_t3767223008 * L_1 = (RSAPKCS1SignatureDeformatter_t3767223008 *)il2cpp_codegen_object_new(RSAPKCS1SignatureDeformatter_t3767223008_il2cpp_TypeInfo_var);
		RSAPKCS1SignatureDeformatter__ctor_m3706544163(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = __this->get_m_signaturealgo_12();
		V_1 = L_2;
		String_t* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0147;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_4 = ((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map11_25();
		if (L_4)
		{
			goto IL_0098;
		}
	}
	{
		Dictionary_2_t2736202052 * L_5 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_5, ((int32_t)9), /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_2 = L_5;
		Dictionary_2_t2736202052 * L_6 = V_2;
		NullCheck(L_6);
		Dictionary_2_Add_m282647386(L_6, _stringLiteral1384881100, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_7 = V_2;
		NullCheck(L_7);
		Dictionary_2_Add_m282647386(L_7, _stringLiteral3341196236, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_8 = V_2;
		NullCheck(L_8);
		Dictionary_2_Add_m282647386(L_8, _stringLiteral1002544076, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_9 = V_2;
		NullCheck(L_9);
		Dictionary_2_Add_m282647386(L_9, _stringLiteral2958859212, 3, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_10 = V_2;
		NullCheck(L_10);
		Dictionary_2_Add_m282647386(L_10, _stringLiteral3539017004, 3, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_11 = V_2;
		NullCheck(L_11);
		Dictionary_2_Add_m282647386(L_11, _stringLiteral1783758856, 4, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_12 = V_2;
		NullCheck(L_12);
		Dictionary_2_Add_m282647386(L_12, _stringLiteral1783758855, 5, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_13 = V_2;
		NullCheck(L_13);
		Dictionary_2_Add_m282647386(L_13, _stringLiteral1783758854, 6, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_14 = V_2;
		NullCheck(L_14);
		Dictionary_2_Add_m282647386(L_14, _stringLiteral254300466, 7, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_15 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
		((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map11_25(L_15);
	}

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t489243025_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_16 = ((X509Certificate_t489243025_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t489243025_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map11_25();
		String_t* L_17 = V_1;
		NullCheck(L_16);
		bool L_18 = Dictionary_2_TryGetValue_m1013208020(L_16, L_17, (int32_t*)(&V_3), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_19 = V_3;
		switch (L_19)
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00e5;
			}
			case 2:
			{
				goto IL_00f5;
			}
			case 3:
			{
				goto IL_0105;
			}
			case 4:
			{
				goto IL_0115;
			}
			case 5:
			{
				goto IL_0125;
			}
			case 6:
			{
				goto IL_0135;
			}
			case 7:
			{
				goto IL_0145;
			}
		}
	}
	{
		goto IL_0147;
	}

IL_00d5:
	{
		RSAPKCS1SignatureDeformatter_t3767223008 * L_20 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_20, _stringLiteral4242423987);
		goto IL_015d;
	}

IL_00e5:
	{
		RSAPKCS1SignatureDeformatter_t3767223008 * L_21 = V_0;
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_21, _stringLiteral1110256105);
		goto IL_015d;
	}

IL_00f5:
	{
		RSAPKCS1SignatureDeformatter_t3767223008 * L_22 = V_0;
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_22, _stringLiteral3839139460);
		goto IL_015d;
	}

IL_0105:
	{
		RSAPKCS1SignatureDeformatter_t3767223008 * L_23 = V_0;
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_23, _stringLiteral1144609714);
		goto IL_015d;
	}

IL_0115:
	{
		RSAPKCS1SignatureDeformatter_t3767223008 * L_24 = V_0;
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_24, _stringLiteral1991580189);
		goto IL_015d;
	}

IL_0125:
	{
		RSAPKCS1SignatureDeformatter_t3767223008 * L_25 = V_0;
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_25, _stringLiteral3948026384);
		goto IL_015d;
	}

IL_0135:
	{
		RSAPKCS1SignatureDeformatter_t3767223008 * L_26 = V_0;
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_26, _stringLiteral3565820441);
		goto IL_015d;
	}

IL_0145:
	{
		return (bool)0;
	}

IL_0147:
	{
		String_t* L_27 = __this->get_m_signaturealgo_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2511804911, L_27, /*hidden argument*/NULL);
		CryptographicException_t248831461 * L_29 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, NULL, X509Certificate_VerifySignature_m3538124832_RuntimeMethod_var);
	}

IL_015d:
	{
		RSAPKCS1SignatureDeformatter_t3767223008 * L_30 = V_0;
		ByteU5BU5D_t4116647657* L_31 = X509Certificate_get_Hash_m410033711(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_32 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(14 /* System.Byte[] Mono.Security.X509.X509Certificate::get_Signature() */, __this);
		NullCheck(L_30);
		bool L_33 = VirtFuncInvoker2< bool, ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(6 /* System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_30, L_31, L_32);
		return L_33;
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_VerifySignature_m2813642028 (X509Certificate_t489243025 * __this, AsymmetricAlgorithm_t932037087 * ___aa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_VerifySignature_m2813642028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsymmetricAlgorithm_t932037087 * L_0 = ___aa0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3454646207, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Certificate_VerifySignature_m2813642028_RuntimeMethod_var);
	}

IL_0011:
	{
		AsymmetricAlgorithm_t932037087 * L_2 = ___aa0;
		if (!((RSA_t2385438082 *)IsInstClass((RuntimeObject*)L_2, RSA_t2385438082_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		AsymmetricAlgorithm_t932037087 * L_3 = ___aa0;
		bool L_4 = X509Certificate_VerifySignature_m3538124832(__this, ((RSA_t2385438082 *)IsInstClass((RuntimeObject*)L_3, RSA_t2385438082_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_4;
	}

IL_0029:
	{
		AsymmetricAlgorithm_t932037087 * L_5 = ___aa0;
		if (!((DSA_t2386879874 *)IsInstClass((RuntimeObject*)L_5, DSA_t2386879874_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		AsymmetricAlgorithm_t932037087 * L_6 = ___aa0;
		bool L_7 = X509Certificate_VerifySignature_m3988463526(__this, ((DSA_t2386879874 *)IsInstClass((RuntimeObject*)L_6, DSA_t2386879874_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0041:
	{
		AsymmetricAlgorithm_t932037087 * L_8 = ___aa0;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1243364763, L_9, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_11 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, X509Certificate_VerifySignature_m2813642028_RuntimeMethod_var);
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::CheckSignature(System.Byte[],System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_CheckSignature_m1407226766 (X509Certificate_t489243025 * __this, ByteU5BU5D_t4116647657* ___hash0, String_t* ___hashAlgorithm1, ByteU5BU5D_t4116647657* ___signature2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_CheckSignature_m1407226766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RSACryptoServiceProvider_t2683512874 * V_0 = NULL;
	{
		RSA_t2385438082 * L_0 = VirtFuncInvoker0< RSA_t2385438082 * >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, __this);
		V_0 = ((RSACryptoServiceProvider_t2683512874 *)CastclassSealed((RuntimeObject*)L_0, RSACryptoServiceProvider_t2683512874_il2cpp_TypeInfo_var));
		RSACryptoServiceProvider_t2683512874 * L_1 = V_0;
		ByteU5BU5D_t4116647657* L_2 = ___hash0;
		String_t* L_3 = ___hashAlgorithm1;
		ByteU5BU5D_t4116647657* L_4 = ___signature2;
		NullCheck(L_1);
		bool L_5 = RSACryptoServiceProvider_VerifyHash_m54573565(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_get_IsSelfSigned_m4064195693 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_IsSelfSigned_m4064195693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_m_issuername_5();
		String_t* L_1 = __this->get_m_subject_9();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		RSA_t2385438082 * L_3 = VirtFuncInvoker0< RSA_t2385438082 * >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, __this);
		bool L_4 = X509Certificate_VerifySignature_m3538124832(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * X509Certificate_GetIssuerName_m1142198382 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2114160833 * L_0 = __this->get_issuer_4();
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * X509Certificate_GetSubjectName_m3513876536 (X509Certificate_t489243025 * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2114160833 * L_0 = __this->get_subject_8();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void X509Certificate_GetObjectData_m2952009451 (X509Certificate_t489243025 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_GetObjectData_m2952009451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		ByteU5BU5D_t4116647657* L_1 = __this->get_m_encodedcert_1();
		NullCheck(L_0);
		SerializationInfo_AddValue_m2872281893(L_0, _stringLiteral2150195429, (RuntimeObject *)(RuntimeObject *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Certificate_PEM_m2020851166 (RuntimeObject * __this /* static, unused */, String_t* ___type0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_PEM_m2020851166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_0 = Encoding_get_ASCII_m3595602635(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = ___data1;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral418672143, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = ___type0;
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2710142936, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7 = V_0;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = String_IndexOf_m1977622757(L_7, L_8, /*hidden argument*/NULL);
		String_t* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m3847582255(L_10, /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11));
		String_t* L_12 = V_0;
		String_t* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_12);
		int32_t L_15 = String_IndexOf_m3406607758(L_12, L_13, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		String_t* L_16 = V_0;
		int32_t L_17 = V_3;
		int32_t L_18 = V_4;
		int32_t L_19 = V_3;
		NullCheck(L_16);
		String_t* L_20 = String_Substring_m1610150815(L_16, L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), /*hidden argument*/NULL);
		V_5 = L_20;
		String_t* L_21 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_22 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		return L_22;
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
// System.Void Mono.Security.X509.X509CertificateBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509CertificateBuilder__ctor_m1180403495 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method)
{
	{
		X509CertificateBuilder__ctor_m3636041184(__this, (uint8_t)3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509CertificateBuilder::.ctor(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateBuilder__ctor_m3636041184 (X509CertificateBuilder_t3506341729 * __this, uint8_t ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateBuilder__ctor_m3636041184_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Builder__ctor_m2301186440(__this, /*hidden argument*/NULL);
		uint8_t L_0 = ___version0;
		if ((((int32_t)L_0) <= ((int32_t)3)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral3253201438, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509CertificateBuilder__ctor_m3636041184_RuntimeMethod_var);
	}

IL_0018:
	{
		uint8_t L_2 = ___version0;
		__this->set_version_3(L_2);
		X509ExtensionCollection_t609554709 * L_3 = (X509ExtensionCollection_t609554709 *)il2cpp_codegen_object_new(X509ExtensionCollection_t609554709_il2cpp_TypeInfo_var);
		X509ExtensionCollection__ctor_m2474799343(L_3, /*hidden argument*/NULL);
		__this->set_extensions_12(L_3);
		return;
	}
}
// System.Byte Mono.Security.X509.X509CertificateBuilder::get_Version()
extern "C" IL2CPP_METHOD_ATTR uint8_t X509CertificateBuilder_get_Version_m4069695800 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_version_3();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509CertificateBuilder::set_Version(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateBuilder_set_Version_m3678190370 (X509CertificateBuilder_t3506341729 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_version_3(L_0);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509CertificateBuilder::get_SerialNumber()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509CertificateBuilder_get_SerialNumber_m250157711 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_sn_4();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509CertificateBuilder::set_SerialNumber(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509CertificateBuilder_set_SerialNumber_m779245453 (X509CertificateBuilder_t3506341729 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_sn_4(L_0);
		return;
	}
}
// System.String Mono.Security.X509.X509CertificateBuilder::get_IssuerName()
extern "C" IL2CPP_METHOD_ATTR String_t* X509CertificateBuilder_get_IssuerName_m575651662 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_issuer_5();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509CertificateBuilder::set_IssuerName(System.String)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateBuilder_set_IssuerName_m5122442 (X509CertificateBuilder_t3506341729 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_issuer_5(L_0);
		return;
	}
}
// System.DateTime Mono.Security.X509.X509CertificateBuilder::get_NotBefore()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  X509CertificateBuilder_get_NotBefore_m3953484053 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_notBefore_6();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509CertificateBuilder::set_NotBefore(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateBuilder_set_NotBefore_m264162969 (X509CertificateBuilder_t3506341729 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		__this->set_notBefore_6(L_0);
		return;
	}
}
// System.DateTime Mono.Security.X509.X509CertificateBuilder::get_NotAfter()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  X509CertificateBuilder_get_NotAfter_m2216451505 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_notAfter_7();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509CertificateBuilder::set_NotAfter(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateBuilder_set_NotAfter_m3409066785 (X509CertificateBuilder_t3506341729 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		__this->set_notAfter_7(L_0);
		return;
	}
}
// System.String Mono.Security.X509.X509CertificateBuilder::get_SubjectName()
extern "C" IL2CPP_METHOD_ATTR String_t* X509CertificateBuilder_get_SubjectName_m3896882639 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_subject_8();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509CertificateBuilder::set_SubjectName(System.String)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateBuilder_set_SubjectName_m3049682275 (X509CertificateBuilder_t3506341729 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_subject_8(L_0);
		return;
	}
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.X509.X509CertificateBuilder::get_SubjectPublicKey()
extern "C" IL2CPP_METHOD_ATTR AsymmetricAlgorithm_t932037087 * X509CertificateBuilder_get_SubjectPublicKey_m3057725235 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method)
{
	{
		AsymmetricAlgorithm_t932037087 * L_0 = __this->get_aa_9();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509CertificateBuilder::set_SubjectPublicKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateBuilder_set_SubjectPublicKey_m1376403840 (X509CertificateBuilder_t3506341729 * __this, AsymmetricAlgorithm_t932037087 * ___value0, const RuntimeMethod* method)
{
	{
		AsymmetricAlgorithm_t932037087 * L_0 = ___value0;
		__this->set_aa_9(L_0);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509CertificateBuilder::get_IssuerUniqueId()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509CertificateBuilder_get_IssuerUniqueId_m741530620 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_issuerUniqueID_10();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509CertificateBuilder::set_IssuerUniqueId(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509CertificateBuilder_set_IssuerUniqueId_m35607048 (X509CertificateBuilder_t3506341729 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_issuerUniqueID_10(L_0);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509CertificateBuilder::get_SubjectUniqueId()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509CertificateBuilder_get_SubjectUniqueId_m1554669847 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_subjectUniqueID_11();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509CertificateBuilder::set_SubjectUniqueId(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509CertificateBuilder_set_SubjectUniqueId_m4214697953 (X509CertificateBuilder_t3506341729 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_subjectUniqueID_11(L_0);
		return;
	}
}
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509CertificateBuilder::get_Extensions()
extern "C" IL2CPP_METHOD_ATTR X509ExtensionCollection_t609554709 * X509CertificateBuilder_get_Extensions_m2072374611 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method)
{
	{
		X509ExtensionCollection_t609554709 * L_0 = __this->get_extensions_12();
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509CertificateBuilder::SubjectPublicKeyInfo()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * X509CertificateBuilder_SubjectPublicKeyInfo_m1113035165 (X509CertificateBuilder_t3506341729 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateBuilder_SubjectPublicKeyInfo_m1113035165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2114160833 * V_0 = NULL;
	RSAParameters_t1728406613  V_1;
	memset(&V_1, 0, sizeof(V_1));
	ASN1_t2114160833 * V_2 = NULL;
	DSAParameters_t1885824122  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ASN1_t2114160833 * V_4 = NULL;
	ASN1_t2114160833 * V_5 = NULL;
	{
		ASN1_t2114160833 * L_0 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_0;
		AsymmetricAlgorithm_t932037087 * L_1 = __this->get_aa_9();
		if (!((RSA_t2385438082 *)IsInstClass((RuntimeObject*)L_1, RSA_t2385438082_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		ASN1_t2114160833 * L_2 = V_0;
		ASN1_t2114160833 * L_3 = PKCS7_AlgorithmIdentifier_m2045970514(NULL /*static, unused*/, _stringLiteral3723533260, /*hidden argument*/NULL);
		NullCheck(L_2);
		ASN1_Add_m3262603624(L_2, L_3, /*hidden argument*/NULL);
		AsymmetricAlgorithm_t932037087 * L_4 = __this->get_aa_9();
		NullCheck(((RSA_t2385438082 *)IsInstClass((RuntimeObject*)L_4, RSA_t2385438082_il2cpp_TypeInfo_var)));
		RSAParameters_t1728406613  L_5 = VirtFuncInvoker1< RSAParameters_t1728406613 , bool >::Invoke(15 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, ((RSA_t2385438082 *)IsInstClass((RuntimeObject*)L_4, RSA_t2385438082_il2cpp_TypeInfo_var)), (bool)0);
		V_1 = L_5;
		ASN1_t2114160833 * L_6 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_6, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_2 = L_6;
		ASN1_t2114160833 * L_7 = V_2;
		ByteU5BU5D_t4116647657* L_8 = (&V_1)->get_Modulus_6();
		ASN1_t2114160833 * L_9 = ASN1Convert_FromUnsignedBigInteger_m1312950810(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ASN1_Add_m3262603624(L_7, L_9, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_10 = V_2;
		ByteU5BU5D_t4116647657* L_11 = (&V_1)->get_Exponent_7();
		ASN1_t2114160833 * L_12 = ASN1Convert_FromUnsignedBigInteger_m1312950810(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		ASN1_Add_m3262603624(L_10, L_12, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_13 = V_0;
		ASN1_t2114160833 * L_14 = V_2;
		NullCheck(L_14);
		ByteU5BU5D_t4116647657* L_15 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_14);
		ByteU5BU5D_t4116647657* L_16 = X509CertificateBuilder_UniqueIdentifier_m3699558432(__this, L_15, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_17 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m1219137533(L_17, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		ASN1_Add_m3262603624(L_13, L_17, /*hidden argument*/NULL);
		goto IL_0142;
	}

IL_0086:
	{
		AsymmetricAlgorithm_t932037087 * L_18 = __this->get_aa_9();
		if (!((DSA_t2386879874 *)IsInstClass((RuntimeObject*)L_18, DSA_t2386879874_il2cpp_TypeInfo_var)))
		{
			goto IL_0127;
		}
	}
	{
		AsymmetricAlgorithm_t932037087 * L_19 = __this->get_aa_9();
		NullCheck(((DSA_t2386879874 *)IsInstClass((RuntimeObject*)L_19, DSA_t2386879874_il2cpp_TypeInfo_var)));
		DSAParameters_t1885824122  L_20 = VirtFuncInvoker1< DSAParameters_t1885824122 , bool >::Invoke(14 /* System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSA::ExportParameters(System.Boolean) */, ((DSA_t2386879874 *)IsInstClass((RuntimeObject*)L_19, DSA_t2386879874_il2cpp_TypeInfo_var)), (bool)0);
		V_3 = L_20;
		ASN1_t2114160833 * L_21 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_21, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_4 = L_21;
		ASN1_t2114160833 * L_22 = V_4;
		ByteU5BU5D_t4116647657* L_23 = (&V_3)->get_P_3();
		ASN1_t2114160833 * L_24 = ASN1Convert_FromUnsignedBigInteger_m1312950810(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		ASN1_Add_m3262603624(L_22, L_24, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_25 = V_4;
		ByteU5BU5D_t4116647657* L_26 = (&V_3)->get_Q_4();
		ASN1_t2114160833 * L_27 = ASN1Convert_FromUnsignedBigInteger_m1312950810(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		ASN1_Add_m3262603624(L_25, L_27, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_28 = V_4;
		ByteU5BU5D_t4116647657* L_29 = (&V_3)->get_G_1();
		ASN1_t2114160833 * L_30 = ASN1Convert_FromUnsignedBigInteger_m1312950810(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		ASN1_Add_m3262603624(L_28, L_30, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_31 = V_0;
		ASN1_t2114160833 * L_32 = V_4;
		ASN1_t2114160833 * L_33 = PKCS7_AlgorithmIdentifier_m1963676069(NULL /*static, unused*/, _stringLiteral254300464, L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		ASN1_Add_m3262603624(L_31, L_33, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_34 = V_0;
		ASN1_t2114160833 * L_35 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_35, (uint8_t)3, /*hidden argument*/NULL);
		NullCheck(L_34);
		ASN1_t2114160833 * L_36 = ASN1_Add_m3262603624(L_34, L_35, /*hidden argument*/NULL);
		V_5 = L_36;
		ASN1_t2114160833 * L_37 = V_5;
		ByteU5BU5D_t4116647657* L_38 = (&V_3)->get_Y_7();
		ASN1_t2114160833 * L_39 = ASN1Convert_FromUnsignedBigInteger_m1312950810(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		ASN1_Add_m3262603624(L_37, L_39, /*hidden argument*/NULL);
		goto IL_0142;
	}

IL_0127:
	{
		AsymmetricAlgorithm_t932037087 * L_40 = __this->get_aa_9();
		NullCheck(L_40);
		String_t* L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_42 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1243364763, L_41, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_43 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_43, L_42, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, NULL, X509CertificateBuilder_SubjectPublicKeyInfo_m1113035165_RuntimeMethod_var);
	}

IL_0142:
	{
		ASN1_t2114160833 * L_44 = V_0;
		return L_44;
	}
}
// System.Byte[] Mono.Security.X509.X509CertificateBuilder::UniqueIdentifier(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509CertificateBuilder_UniqueIdentifier_m3699558432 (X509CertificateBuilder_t3506341729 * __this, ByteU5BU5D_t4116647657* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateBuilder_UniqueIdentifier_m3699558432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2114160833 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		ASN1_t2114160833 * L_0 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_0, (uint8_t)3, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_t4116647657* L_1 = ___id0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)1)));
		V_1 = L_2;
		ByteU5BU5D_t4116647657* L_3 = ___id0;
		ByteU5BU5D_t4116647657* L_4 = V_1;
		ByteU5BU5D_t4116647657* L_5 = ___id0;
		NullCheck(L_5);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 1, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), /*hidden argument*/NULL);
		ASN1_t2114160833 * L_6 = V_0;
		ByteU5BU5D_t4116647657* L_7 = V_1;
		NullCheck(L_6);
		ASN1_set_Value_m647861841(L_6, L_7, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_9 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_8);
		return L_9;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509CertificateBuilder::ToBeSigned(System.String)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * X509CertificateBuilder_ToBeSigned_m2641120764 (X509CertificateBuilder_t3506341729 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateBuilder_ToBeSigned_m2641120764_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2114160833 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	ASN1_t2114160833 * V_2 = NULL;
	ASN1_t2114160833 * V_3 = NULL;
	{
		ASN1_t2114160833 * L_0 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_0;
		uint8_t L_1 = __this->get_version_3();
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0046;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_t4116647657* L_3 = L_2;
		uint8_t L_4 = __this->get_version_3();
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1))))));
		V_1 = L_3;
		ASN1_t2114160833 * L_5 = V_0;
		ASN1_t2114160833 * L_6 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_6, (uint8_t)((int32_t)160), /*hidden argument*/NULL);
		NullCheck(L_5);
		ASN1_t2114160833 * L_7 = ASN1_Add_m3262603624(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		ASN1_t2114160833 * L_8 = V_2;
		ByteU5BU5D_t4116647657* L_9 = V_1;
		ASN1_t2114160833 * L_10 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_10, (uint8_t)2, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ASN1_Add_m3262603624(L_8, L_10, /*hidden argument*/NULL);
	}

IL_0046:
	{
		ASN1_t2114160833 * L_11 = V_0;
		ByteU5BU5D_t4116647657* L_12 = __this->get_sn_4();
		ASN1_t2114160833 * L_13 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_13, (uint8_t)2, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ASN1_Add_m3262603624(L_11, L_13, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_14 = V_0;
		String_t* L_15 = ___oid0;
		ASN1_t2114160833 * L_16 = PKCS7_AlgorithmIdentifier_m2045970514(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		ASN1_Add_m3262603624(L_14, L_16, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_17 = V_0;
		String_t* L_18 = __this->get_issuer_5();
		IL2CPP_RUNTIME_CLASS_INIT(X501_t1758824426_il2cpp_TypeInfo_var);
		ASN1_t2114160833 * L_19 = X501_FromString_m1880408052(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		ASN1_Add_m3262603624(L_17, L_19, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_20 = V_0;
		ASN1_t2114160833 * L_21 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_21, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		NullCheck(L_20);
		ASN1_t2114160833 * L_22 = ASN1_Add_m3262603624(L_20, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		ASN1_t2114160833 * L_23 = V_3;
		DateTime_t3738529785  L_24 = __this->get_notBefore_6();
		ASN1_t2114160833 * L_25 = ASN1Convert_FromDateTime_m1024852799(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		ASN1_Add_m3262603624(L_23, L_25, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_26 = V_3;
		DateTime_t3738529785  L_27 = __this->get_notAfter_7();
		ASN1_t2114160833 * L_28 = ASN1Convert_FromDateTime_m1024852799(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		ASN1_Add_m3262603624(L_26, L_28, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_29 = V_0;
		String_t* L_30 = __this->get_subject_8();
		ASN1_t2114160833 * L_31 = X501_FromString_m1880408052(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		ASN1_Add_m3262603624(L_29, L_31, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_32 = V_0;
		ASN1_t2114160833 * L_33 = X509CertificateBuilder_SubjectPublicKeyInfo_m1113035165(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		ASN1_Add_m3262603624(L_32, L_33, /*hidden argument*/NULL);
		uint8_t L_34 = __this->get_version_3();
		if ((((int32_t)L_34) <= ((int32_t)1)))
		{
			goto IL_015e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_35 = __this->get_issuerUniqueID_10();
		if (!L_35)
		{
			goto IL_00fd;
		}
	}
	{
		ASN1_t2114160833 * L_36 = V_0;
		ByteU5BU5D_t4116647657* L_37 = __this->get_issuerUniqueID_10();
		ByteU5BU5D_t4116647657* L_38 = X509CertificateBuilder_UniqueIdentifier_m3699558432(__this, L_37, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_39 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_39, (uint8_t)((int32_t)161), L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		ASN1_Add_m3262603624(L_36, L_39, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		ByteU5BU5D_t4116647657* L_40 = __this->get_subjectUniqueID_11();
		if (!L_40)
		{
			goto IL_0125;
		}
	}
	{
		ASN1_t2114160833 * L_41 = V_0;
		ByteU5BU5D_t4116647657* L_42 = __this->get_subjectUniqueID_11();
		ByteU5BU5D_t4116647657* L_43 = X509CertificateBuilder_UniqueIdentifier_m3699558432(__this, L_42, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_44 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_44, (uint8_t)((int32_t)161), L_43, /*hidden argument*/NULL);
		NullCheck(L_41);
		ASN1_Add_m3262603624(L_41, L_44, /*hidden argument*/NULL);
	}

IL_0125:
	{
		uint8_t L_45 = __this->get_version_3();
		if ((((int32_t)L_45) <= ((int32_t)2)))
		{
			goto IL_015e;
		}
	}
	{
		X509ExtensionCollection_t609554709 * L_46 = __this->get_extensions_12();
		NullCheck(L_46);
		int32_t L_47 = CollectionBase_get_Count_m1708965601(L_46, /*hidden argument*/NULL);
		if ((((int32_t)L_47) <= ((int32_t)0)))
		{
			goto IL_015e;
		}
	}
	{
		ASN1_t2114160833 * L_48 = V_0;
		X509ExtensionCollection_t609554709 * L_49 = __this->get_extensions_12();
		NullCheck(L_49);
		ByteU5BU5D_t4116647657* L_50 = X509ExtensionCollection_GetBytes_m1622025118(L_49, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_51 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_51, (uint8_t)((int32_t)163), L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		ASN1_Add_m3262603624(L_48, L_51, /*hidden argument*/NULL);
	}

IL_015e:
	{
		ASN1_t2114160833 * L_52 = V_0;
		return L_52;
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
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m2066277891 (X509CertificateCollection_t1542168550 * __this, const RuntimeMethod* method)
{
	{
		CollectionBase__ctor_m3343513710(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor(Mono.Security.X509.X509Certificate[])
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m2730993783 (X509CertificateCollection_t1542168550 * __this, X509CertificateU5BU5D_t3563599409* ___value0, const RuntimeMethod* method)
{
	{
		CollectionBase__ctor_m3343513710(__this, /*hidden argument*/NULL);
		X509CertificateU5BU5D_t3563599409* L_0 = ___value0;
		X509CertificateCollection_AddRange_m3166932337(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m3467061452 (X509CertificateCollection_t1542168550 * __this, X509CertificateCollection_t1542168550 * ___value0, const RuntimeMethod* method)
{
	{
		CollectionBase__ctor_m3343513710(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_0 = ___value0;
		X509CertificateCollection_AddRange_m2165814476(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m647852366 (X509CertificateCollection_t1542168550 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t489243025 * X509CertificateCollection_get_Item_m1033426577 (X509CertificateCollection_t1542168550 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_get_Item_m1033426577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((X509Certificate_t489243025 *)CastclassClass((RuntimeObject*)L_2, X509Certificate_t489243025_il2cpp_TypeInfo_var));
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::set_Item(System.Int32,Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection_set_Item_m3570595948 (X509CertificateCollection_t1542168550 * __this, int32_t ___index0, X509Certificate_t489243025 * ___value1, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		X509Certificate_t489243025 * L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(22 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_Add_m2277657976 (X509CertificateCollection_t1542168550 * __this, X509Certificate_t489243025 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_Add_m2277657976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Certificate_t489243025 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509CertificateCollection_Add_m2277657976_RuntimeMethod_var);
	}

IL_0011:
	{
		ArrayList_t2718874744 * L_2 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		X509Certificate_t489243025 * L_3 = ___value0;
		NullCheck(L_2);
		int32_t L_4 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_3);
		return L_4;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509Certificate[])
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection_AddRange_m3166932337 (X509CertificateCollection_t1542168550 * __this, X509CertificateU5BU5D_t3563599409* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_AddRange_m3166932337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		X509CertificateU5BU5D_t3563599409* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509CertificateCollection_AddRange_m3166932337_RuntimeMethod_var);
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_002b;
	}

IL_0018:
	{
		ArrayList_t2718874744 * L_2 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		X509CertificateU5BU5D_t3563599409* L_3 = ___value0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		X509Certificate_t489243025 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		X509CertificateU5BU5D_t3563599409* L_9 = ___value0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection_AddRange_m2165814476 (X509CertificateCollection_t1542168550 * __this, X509CertificateCollection_t1542168550 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_AddRange_m2165814476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		X509CertificateCollection_t1542168550 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509CertificateCollection_AddRange_m2165814476_RuntimeMethod_var);
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0018:
	{
		ArrayList_t2718874744 * L_2 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_3 = ___value0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		X509Certificate_t489243025 * L_5 = X509CertificateCollection_get_Item_m1033426577(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		X509CertificateCollection_t1542168550 * L_8 = ___value0;
		NullCheck(L_8);
		ArrayList_t2718874744 * L_9 = CollectionBase_get_InnerList_m132195395(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_9);
		if ((((int32_t)L_7) < ((int32_t)L_10)))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateCollection_Contains_m743657353 (X509CertificateCollection_t1542168550 * __this, X509Certificate_t489243025 * ___value0, const RuntimeMethod* method)
{
	{
		X509Certificate_t489243025 * L_0 = ___value0;
		int32_t L_1 = X509CertificateCollection_IndexOf_m2003755268(__this, L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::CopyTo(Mono.Security.X509.X509Certificate[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection_CopyTo_m676315810 (X509CertificateCollection_t1542168550 * __this, X509CertificateU5BU5D_t3563599409* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		X509CertificateU5BU5D_t3563599409* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		VirtActionInvoker2< RuntimeArray *, int32_t >::Invoke(41 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, (RuntimeArray *)(RuntimeArray *)L_1, L_2);
		return;
	}
}
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR X509CertificateEnumerator_t3515934698 * X509CertificateCollection_GetEnumerator_m92169144 (X509CertificateCollection_t1542168550 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_GetEnumerator_m92169144_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509CertificateEnumerator_t3515934698 * L_0 = (X509CertificateEnumerator_t3515934698 *)il2cpp_codegen_object_new(X509CertificateEnumerator_t3515934698_il2cpp_TypeInfo_var);
		X509CertificateEnumerator__ctor_m85694331(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_GetHashCode_m2303492950 (X509CertificateCollection_t1542168550 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_IndexOf_m2003755268 (X509CertificateCollection_t1542168550 * __this, X509Certificate_t489243025 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_IndexOf_m2003755268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	X509Certificate_t489243025 * V_2 = NULL;
	{
		X509Certificate_t489243025 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509CertificateCollection_IndexOf_m2003755268_RuntimeMethod_var);
	}

IL_0011:
	{
		X509Certificate_t489243025 * L_2 = ___value0;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = X509Certificate_get_Hash_m410033711(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0049;
	}

IL_001f:
	{
		ArrayList_t2718874744 * L_4 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		V_2 = ((X509Certificate_t489243025 *)CastclassClass((RuntimeObject*)L_6, X509Certificate_t489243025_il2cpp_TypeInfo_var));
		X509Certificate_t489243025 * L_7 = V_2;
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_8 = X509Certificate_get_Hash_m410033711(L_7, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_9 = V_0;
		bool L_10 = X509CertificateCollection_Compare_m3676635762(__this, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}

IL_0045:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_13 = V_1;
		ArrayList_t2718874744 * L_14 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001f;
		}
	}
	{
		return (-1);
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::Insert(System.Int32,Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection_Insert_m2671048322 (X509CertificateCollection_t1542168550 * __this, int32_t ___index0, X509Certificate_t489243025 * ___value1, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		X509Certificate_t489243025 * L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(36 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::Remove(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection_Remove_m2199606504 (X509CertificateCollection_t1542168550 * __this, X509Certificate_t489243025 * ___value0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		X509Certificate_t489243025 * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject * >::Invoke(38 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateCollection_Compare_m3676635762 (X509CertificateCollection_t1542168550 * __this, ByteU5BU5D_t4116647657* ___array10, ByteU5BU5D_t4116647657* ___array21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___array10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___array21;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___array10;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_3 = ___array21;
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		ByteU5BU5D_t4116647657* L_4 = ___array10;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = ___array21;
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0030:
	{
		ByteU5BU5D_t4116647657* L_6 = ___array10;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_t4116647657* L_10 = ___array21;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_9) == ((int32_t)L_13)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_0;
		ByteU5BU5D_t4116647657* L_16 = ___array10;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0030;
		}
	}
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
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m85694331 (X509CertificateEnumerator_t3515934698 * __this, X509CertificateCollection_t1542168550 * ___mappings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator__ctor_m85694331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_0 = ___mappings0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_0);
		__this->set_enumerator_0(L_1);
		return;
	}
}
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m1846030361 (X509CertificateEnumerator_t3515934698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m1846030361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m2626270621 (X509CertificateEnumerator_t3515934698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m2626270621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m2039524926 (X509CertificateEnumerator_t3515934698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m2039524926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t489243025 * X509CertificateEnumerator_get_Current_m3079314562 (X509CertificateEnumerator_t3515934698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_get_Current_m3079314562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_0);
		return ((X509Certificate_t489243025 *)CastclassClass((RuntimeObject*)L_1, X509Certificate_t489243025_il2cpp_TypeInfo_var));
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_m1342258196 (X509CertificateEnumerator_t3515934698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_MoveNext_m1342258196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::Reset()
extern "C" IL2CPP_METHOD_ATTR void X509CertificateEnumerator_Reset_m1825523691 (X509CertificateEnumerator_t3515934698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_Reset_m1825523691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_0);
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
// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509Chain__ctor_m3563800449 (X509Chain_t863783601 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain__ctor_m3563800449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_0 = (X509CertificateCollection_t1542168550 *)il2cpp_codegen_object_new(X509CertificateCollection_t1542168550_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2066277891(L_0, /*hidden argument*/NULL);
		__this->set_certs_1(L_0);
		return;
	}
}
// System.Void Mono.Security.X509.X509Chain::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509Chain__ctor_m1084071882 (X509Chain_t863783601 * __this, X509CertificateCollection_t1542168550 * ___chain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain__ctor_m1084071882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Chain__ctor_m3563800449(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_0 = (X509CertificateCollection_t1542168550 *)il2cpp_codegen_object_new(X509CertificateCollection_t1542168550_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2066277891(L_0, /*hidden argument*/NULL);
		__this->set__chain_3(L_0);
		X509CertificateCollection_t1542168550 * L_1 = __this->get__chain_3();
		X509CertificateCollection_t1542168550 * L_2 = ___chain0;
		NullCheck(L_1);
		X509CertificateCollection_AddRange_m2165814476(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_Chain()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t1542168550 * X509Chain_get_Chain_m2770029413 (X509Chain_t863783601 * __this, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t1542168550 * L_0 = __this->get__chain_3();
		return L_0;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::get_Root()
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t489243025 * X509Chain_get_Root_m549030582 (X509Chain_t863783601 * __this, const RuntimeMethod* method)
{
	{
		X509Certificate_t489243025 * L_0 = __this->get__root_2();
		return L_0;
	}
}
// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t X509Chain_get_Status_m348797749 (X509Chain_t863783601 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__status_4();
		return L_0;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t1542168550 * X509Chain_get_TrustAnchors_m2434696767 (X509Chain_t863783601 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_get_TrustAnchors_m2434696767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509CertificateCollection_t1542168550 * L_0 = __this->get_roots_0();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		X509CertificateCollection_t1542168550 * L_1 = (X509CertificateCollection_t1542168550 *)il2cpp_codegen_object_new(X509CertificateCollection_t1542168550_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2066277891(L_1, /*hidden argument*/NULL);
		__this->set_roots_0(L_1);
		X509CertificateCollection_t1542168550 * L_2 = __this->get_roots_0();
		X509CertificateCollection_t1542168550 * L_3 = X509StoreManager_get_TrustedRootCertificates_m2180997293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		X509CertificateCollection_AddRange_m2165814476(L_2, L_3, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_4 = __this->get_roots_0();
		return L_4;
	}

IL_002d:
	{
		X509CertificateCollection_t1542168550 * L_5 = __this->get_roots_0();
		return L_5;
	}
}
// System.Void Mono.Security.X509.X509Chain::set_TrustAnchors(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509Chain_set_TrustAnchors_m2894876452 (X509Chain_t863783601 * __this, X509CertificateCollection_t1542168550 * ___value0, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t1542168550 * L_0 = ___value0;
		__this->set_roots_0(L_0);
		return;
	}
}
// System.Void Mono.Security.X509.X509Chain::LoadCertificate(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR void X509Chain_LoadCertificate_m4250821044 (X509Chain_t863783601 * __this, X509Certificate_t489243025 * ___x5090, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t1542168550 * L_0 = __this->get_certs_1();
		X509Certificate_t489243025 * L_1 = ___x5090;
		NullCheck(L_0);
		X509CertificateCollection_Add_m2277657976(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509Chain::LoadCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509Chain_LoadCertificates_m749246668 (X509Chain_t863783601 * __this, X509CertificateCollection_t1542168550 * ___collection0, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t1542168550 * L_0 = __this->get_certs_1();
		X509CertificateCollection_t1542168550 * L_1 = ___collection0;
		NullCheck(L_0);
		X509CertificateCollection_AddRange_m2165814476(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindByIssuerName(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t489243025 * X509Chain_FindByIssuerName_m2280432457 (X509Chain_t863783601 * __this, String_t* ___issuerName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_FindByIssuerName_m2280432457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Certificate_t489243025 * V_0 = NULL;
	X509CertificateEnumerator_t3515934698 * V_1 = NULL;
	X509Certificate_t489243025 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509CertificateCollection_t1542168550 * L_0 = __this->get_certs_1();
		NullCheck(L_0);
		X509CertificateEnumerator_t3515934698 * L_1 = X509CertificateCollection_GetEnumerator_m92169144(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0011:
		{
			X509CertificateEnumerator_t3515934698 * L_2 = V_1;
			NullCheck(L_2);
			X509Certificate_t489243025 * L_3 = X509CertificateEnumerator_get_Current_m3079314562(L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			X509Certificate_t489243025 * L_4 = V_0;
			NullCheck(L_4);
			String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Mono.Security.X509.X509Certificate::get_IssuerName() */, L_4);
			String_t* L_6 = ___issuerName0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			X509Certificate_t489243025 * L_8 = V_0;
			V_2 = L_8;
			IL2CPP_LEAVE(0x54, FINALLY_0040);
		}

IL_0030:
		{
			X509CertificateEnumerator_t3515934698 * L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = X509CertificateEnumerator_MoveNext_m1342258196(L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0011;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t3515934698 * L_11 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_3;
			if (L_12)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_004b:
		{
			RuntimeObject* L_13 = V_3;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0052:
	{
		return (X509Certificate_t489243025 *)NULL;
	}

IL_0054:
	{
		X509Certificate_t489243025 * L_14 = V_2;
		return L_14;
	}
}
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_Build_m2469702749 (X509Chain_t863783601 * __this, X509Certificate_t489243025 * ___leaf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_Build_m2469702749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Certificate_t489243025 * V_0 = NULL;
	X509Certificate_t489243025 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	X509Certificate_t489243025 * V_4 = NULL;
	X509CertificateEnumerator_t3515934698 * V_5 = NULL;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->set__status_4(0);
		X509CertificateCollection_t1542168550 * L_0 = __this->get__chain_3();
		if (L_0)
		{
			goto IL_0060;
		}
	}
	{
		X509CertificateCollection_t1542168550 * L_1 = (X509CertificateCollection_t1542168550 *)il2cpp_codegen_object_new(X509CertificateCollection_t1542168550_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2066277891(L_1, /*hidden argument*/NULL);
		__this->set__chain_3(L_1);
		X509Certificate_t489243025 * L_2 = ___leaf0;
		V_0 = L_2;
		X509Certificate_t489243025 * L_3 = V_0;
		V_1 = L_3;
		goto IL_003d;
	}

IL_0026:
	{
		X509Certificate_t489243025 * L_4 = V_0;
		V_1 = L_4;
		X509CertificateCollection_t1542168550 * L_5 = __this->get__chain_3();
		X509Certificate_t489243025 * L_6 = V_0;
		NullCheck(L_5);
		X509CertificateCollection_Add_m2277657976(L_5, L_6, /*hidden argument*/NULL);
		X509Certificate_t489243025 * L_7 = V_0;
		X509Certificate_t489243025 * L_8 = X509Chain_FindCertificateParent_m2809823532(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_003d:
	{
		X509Certificate_t489243025 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		X509Certificate_t489243025 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = X509Certificate_get_IsSelfSigned_m4064195693(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0026;
		}
	}

IL_004e:
	{
		X509Certificate_t489243025 * L_12 = V_1;
		X509Certificate_t489243025 * L_13 = X509Chain_FindCertificateRoot_m1937726457(__this, L_12, /*hidden argument*/NULL);
		__this->set__root_2(L_13);
		goto IL_00fa;
	}

IL_0060:
	{
		X509CertificateCollection_t1542168550 * L_14 = __this->get__chain_3();
		NullCheck(L_14);
		int32_t L_15 = CollectionBase_get_Count_m1708965601(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00ed;
		}
	}
	{
		X509Certificate_t489243025 * L_17 = ___leaf0;
		X509CertificateCollection_t1542168550 * L_18 = __this->get__chain_3();
		NullCheck(L_18);
		X509Certificate_t489243025 * L_19 = X509CertificateCollection_get_Item_m1033426577(L_18, 0, /*hidden argument*/NULL);
		bool L_20 = X509Chain_IsParent_m2689546349(__this, L_17, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e8;
		}
	}
	{
		V_3 = 1;
		goto IL_00c0;
	}

IL_0092:
	{
		X509CertificateCollection_t1542168550 * L_21 = __this->get__chain_3();
		int32_t L_22 = V_3;
		NullCheck(L_21);
		X509Certificate_t489243025 * L_23 = X509CertificateCollection_get_Item_m1033426577(L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)), /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_24 = __this->get__chain_3();
		int32_t L_25 = V_3;
		NullCheck(L_24);
		X509Certificate_t489243025 * L_26 = X509CertificateCollection_get_Item_m1033426577(L_24, L_25, /*hidden argument*/NULL);
		bool L_27 = X509Chain_IsParent_m2689546349(__this, L_23, L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_00c7;
	}

IL_00bc:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00c0:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0092;
		}
	}

IL_00c7:
	{
		int32_t L_31 = V_3;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_00e8;
		}
	}
	{
		X509CertificateCollection_t1542168550 * L_33 = __this->get__chain_3();
		int32_t L_34 = V_2;
		NullCheck(L_33);
		X509Certificate_t489243025 * L_35 = X509CertificateCollection_get_Item_m1033426577(L_33, ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1)), /*hidden argument*/NULL);
		X509Certificate_t489243025 * L_36 = X509Chain_FindCertificateRoot_m1937726457(__this, L_35, /*hidden argument*/NULL);
		__this->set__root_2(L_36);
	}

IL_00e8:
	{
		goto IL_00fa;
	}

IL_00ed:
	{
		X509Certificate_t489243025 * L_37 = ___leaf0;
		X509Certificate_t489243025 * L_38 = X509Chain_FindCertificateRoot_m1937726457(__this, L_37, /*hidden argument*/NULL);
		__this->set__root_2(L_38);
	}

IL_00fa:
	{
		X509CertificateCollection_t1542168550 * L_39 = __this->get__chain_3();
		if (!L_39)
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_40 = __this->get__status_4();
		if (L_40)
		{
			goto IL_01a6;
		}
	}
	{
		X509CertificateCollection_t1542168550 * L_41 = __this->get__chain_3();
		NullCheck(L_41);
		X509CertificateEnumerator_t3515934698 * L_42 = X509CertificateCollection_GetEnumerator_m92169144(L_41, /*hidden argument*/NULL);
		V_5 = L_42;
	}

IL_011d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0140;
		}

IL_0122:
		{
			X509CertificateEnumerator_t3515934698 * L_43 = V_5;
			NullCheck(L_43);
			X509Certificate_t489243025 * L_44 = X509CertificateEnumerator_get_Current_m3079314562(L_43, /*hidden argument*/NULL);
			V_4 = L_44;
			X509Certificate_t489243025 * L_45 = V_4;
			bool L_46 = X509Chain_IsValid_m3670863655(__this, L_45, /*hidden argument*/NULL);
			if (L_46)
			{
				goto IL_0140;
			}
		}

IL_0138:
		{
			V_6 = (bool)0;
			IL2CPP_LEAVE(0x1B0, FINALLY_0151);
		}

IL_0140:
		{
			X509CertificateEnumerator_t3515934698 * L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = X509CertificateEnumerator_MoveNext_m1342258196(L_47, /*hidden argument*/NULL);
			if (L_48)
			{
				goto IL_0122;
			}
		}

IL_014c:
		{
			IL2CPP_LEAVE(0x167, FINALLY_0151);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0151;
	}

FINALLY_0151:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t3515934698 * L_49 = V_5;
			V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_49, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_50 = V_7;
			if (L_50)
			{
				goto IL_015f;
			}
		}

IL_015e:
		{
			IL2CPP_END_FINALLY(337)
		}

IL_015f:
		{
			RuntimeObject* L_51 = V_7;
			NullCheck(L_51);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_51);
			IL2CPP_END_FINALLY(337)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(337)
	{
		IL2CPP_JUMP_TBL(0x1B0, IL_01b0)
		IL2CPP_JUMP_TBL(0x167, IL_0167)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0167:
	{
		X509Certificate_t489243025 * L_52 = ___leaf0;
		bool L_53 = X509Chain_IsValid_m3670863655(__this, L_52, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0188;
		}
	}
	{
		int32_t L_54 = __this->get__status_4();
		if ((!(((uint32_t)L_54) == ((uint32_t)2))))
		{
			goto IL_0186;
		}
	}
	{
		__this->set__status_4(1);
	}

IL_0186:
	{
		return (bool)0;
	}

IL_0188:
	{
		X509Certificate_t489243025 * L_55 = __this->get__root_2();
		if (!L_55)
		{
			goto IL_01a6;
		}
	}
	{
		X509Certificate_t489243025 * L_56 = __this->get__root_2();
		bool L_57 = X509Chain_IsValid_m3670863655(__this, L_56, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_01a6;
		}
	}
	{
		return (bool)0;
	}

IL_01a6:
	{
		int32_t L_58 = __this->get__status_4();
		return (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
	}

IL_01b0:
	{
		bool L_59 = V_6;
		return L_59;
	}
}
// System.Void Mono.Security.X509.X509Chain::Reset()
extern "C" IL2CPP_METHOD_ATTR void X509Chain_Reset_m2222574256 (X509Chain_t863783601 * __this, const RuntimeMethod* method)
{
	{
		__this->set__status_4(0);
		__this->set_roots_0((X509CertificateCollection_t1542168550 *)NULL);
		X509CertificateCollection_t1542168550 * L_0 = __this->get_certs_1();
		NullCheck(L_0);
		CollectionBase_Clear_m1509125218(L_0, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_1 = __this->get__chain_3();
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		X509CertificateCollection_t1542168550 * L_2 = __this->get__chain_3();
		NullCheck(L_2);
		CollectionBase_Clear_m1509125218(L_2, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_IsValid_m3670863655 (X509Chain_t863783601 * __this, X509Certificate_t489243025 * ___cert0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_IsValid_m3670863655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Certificate_t489243025 * L_0 = ___cert0;
		NullCheck(L_0);
		bool L_1 = X509Certificate_get_IsCurrent_m469817010(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		__this->set__status_4(2);
		return (bool)0;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ServicePointManager_t170559685_il2cpp_TypeInfo_var);
		bool L_2 = ServicePointManager_get_CheckCertificateRevocationList_m1645465614(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}

IL_001e:
	{
		return (bool)1;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t489243025 * X509Chain_FindCertificateParent_m2809823532 (X509Chain_t863783601 * __this, X509Certificate_t489243025 * ___child0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_FindCertificateParent_m2809823532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Certificate_t489243025 * V_0 = NULL;
	X509CertificateEnumerator_t3515934698 * V_1 = NULL;
	X509Certificate_t489243025 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509CertificateCollection_t1542168550 * L_0 = __this->get_certs_1();
		NullCheck(L_0);
		X509CertificateEnumerator_t3515934698 * L_1 = X509CertificateCollection_GetEnumerator_m92169144(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0011:
		{
			X509CertificateEnumerator_t3515934698 * L_2 = V_1;
			NullCheck(L_2);
			X509Certificate_t489243025 * L_3 = X509CertificateEnumerator_get_Current_m3079314562(L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			X509Certificate_t489243025 * L_4 = ___child0;
			X509Certificate_t489243025 * L_5 = V_0;
			bool L_6 = X509Chain_IsParent_m2689546349(__this, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_002c;
			}
		}

IL_0025:
		{
			X509Certificate_t489243025 * L_7 = V_0;
			V_2 = L_7;
			IL2CPP_LEAVE(0x50, FINALLY_003c);
		}

IL_002c:
		{
			X509CertificateEnumerator_t3515934698 * L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = X509CertificateEnumerator_MoveNext_m1342258196(L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0011;
			}
		}

IL_0037:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t3515934698 * L_10 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_3;
			if (L_11)
			{
				goto IL_0047;
			}
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(60)
		}

IL_0047:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
			IL2CPP_END_FINALLY(60)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004e:
	{
		return (X509Certificate_t489243025 *)NULL;
	}

IL_0050:
	{
		X509Certificate_t489243025 * L_13 = V_2;
		return L_13;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t489243025 * X509Chain_FindCertificateRoot_m1937726457 (X509Chain_t863783601 * __this, X509Certificate_t489243025 * ___potentialRoot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_FindCertificateRoot_m1937726457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Certificate_t489243025 * V_0 = NULL;
	X509CertificateEnumerator_t3515934698 * V_1 = NULL;
	X509Certificate_t489243025 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509Certificate_t489243025 * L_0 = ___potentialRoot0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->set__status_4(((int32_t)65536));
		return (X509Certificate_t489243025 *)NULL;
	}

IL_0013:
	{
		X509Certificate_t489243025 * L_1 = ___potentialRoot0;
		bool L_2 = X509Chain_IsTrusted_m1243554942(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		X509Certificate_t489243025 * L_3 = ___potentialRoot0;
		return L_3;
	}

IL_0021:
	{
		X509CertificateCollection_t1542168550 * L_4 = X509Chain_get_TrustAnchors_m2434696767(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		X509CertificateEnumerator_t3515934698 * L_5 = X509CertificateCollection_GetEnumerator_m92169144(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0032:
		{
			X509CertificateEnumerator_t3515934698 * L_6 = V_1;
			NullCheck(L_6);
			X509Certificate_t489243025 * L_7 = X509CertificateEnumerator_get_Current_m3079314562(L_6, /*hidden argument*/NULL);
			V_0 = L_7;
			X509Certificate_t489243025 * L_8 = ___potentialRoot0;
			X509Certificate_t489243025 * L_9 = V_0;
			bool L_10 = X509Chain_IsParent_m2689546349(__this, L_8, L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_004d;
			}
		}

IL_0046:
		{
			X509Certificate_t489243025 * L_11 = V_0;
			V_2 = L_11;
			IL2CPP_LEAVE(0x91, FINALLY_005d);
		}

IL_004d:
		{
			X509CertificateEnumerator_t3515934698 * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = X509CertificateEnumerator_MoveNext_m1342258196(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0032;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t3515934698 * L_14 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_15 = V_3;
			if (L_15)
			{
				goto IL_0068;
			}
		}

IL_0067:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0068:
		{
			RuntimeObject* L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006f:
	{
		X509Certificate_t489243025 * L_17 = ___potentialRoot0;
		NullCheck(L_17);
		bool L_18 = X509Certificate_get_IsSelfSigned_m4064195693(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0084;
		}
	}
	{
		__this->set__status_4(((int32_t)32));
		X509Certificate_t489243025 * L_19 = ___potentialRoot0;
		return L_19;
	}

IL_0084:
	{
		__this->set__status_4(((int32_t)65536));
		return (X509Certificate_t489243025 *)NULL;
	}

IL_0091:
	{
		X509Certificate_t489243025 * L_20 = V_2;
		return L_20;
	}
}
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_IsTrusted_m1243554942 (X509Chain_t863783601 * __this, X509Certificate_t489243025 * ___potentialTrusted0, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t1542168550 * L_0 = X509Chain_get_TrustAnchors_m2434696767(__this, /*hidden argument*/NULL);
		X509Certificate_t489243025 * L_1 = ___potentialTrusted0;
		NullCheck(L_0);
		bool L_2 = X509CertificateCollection_Contains_m743657353(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_IsParent_m2689546349 (X509Chain_t863783601 * __this, X509Certificate_t489243025 * ___child0, X509Certificate_t489243025 * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_IsParent_m2689546349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_t3173393653 * V_0 = NULL;
	BasicConstraintsExtension_t2462195279 * V_1 = NULL;
	{
		X509Certificate_t489243025 * L_0 = ___child0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Mono.Security.X509.X509Certificate::get_IssuerName() */, L_0);
		X509Certificate_t489243025 * L_2 = ___parent1;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String Mono.Security.X509.X509Certificate::get_SubjectName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		X509Certificate_t489243025 * L_5 = ___parent1;
		NullCheck(L_5);
		int32_t L_6 = X509Certificate_get_Version_m2908311682(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		X509Certificate_t489243025 * L_7 = ___parent1;
		bool L_8 = X509Chain_IsTrusted_m1243554942(__this, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0074;
		}
	}
	{
		X509Certificate_t489243025 * L_9 = ___parent1;
		NullCheck(L_9);
		X509ExtensionCollection_t609554709 * L_10 = X509Certificate_get_Extensions_m1217872579(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		X509Extension_t3173393653 * L_11 = X509ExtensionCollection_get_Item_m2761897938(L_10, _stringLiteral1004423994, /*hidden argument*/NULL);
		V_0 = L_11;
		X509Extension_t3173393653 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		X509Extension_t3173393653 * L_13 = V_0;
		BasicConstraintsExtension_t2462195279 * L_14 = (BasicConstraintsExtension_t2462195279 *)il2cpp_codegen_object_new(BasicConstraintsExtension_t2462195279_il2cpp_TypeInfo_var);
		BasicConstraintsExtension__ctor_m3191645544(L_14, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		BasicConstraintsExtension_t2462195279 * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = BasicConstraintsExtension_get_CertificateAuthority_m391198292(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0064;
		}
	}
	{
		__this->set__status_4(((int32_t)1024));
	}

IL_0064:
	{
		goto IL_0074;
	}

IL_0069:
	{
		__this->set__status_4(((int32_t)1024));
	}

IL_0074:
	{
		X509Certificate_t489243025 * L_17 = ___child0;
		X509Certificate_t489243025 * L_18 = ___parent1;
		NullCheck(L_18);
		RSA_t2385438082 * L_19 = VirtFuncInvoker0< RSA_t2385438082 * >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_18);
		NullCheck(L_17);
		bool L_20 = X509Certificate_VerifySignature_m3538124832(L_17, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		__this->set__status_4(8);
		return (bool)0;
	}

IL_008e:
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
// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Crl__ctor_m1817187405 (X509Crl_t1148767388 * __this, ByteU5BU5D_t4116647657* ___crl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl__ctor_m1817187405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___crl0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2910693339, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Crl__ctor_m1817187405_RuntimeMethod_var);
	}

IL_0017:
	{
		ByteU5BU5D_t4116647657* L_2 = ___crl0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		RuntimeObject * L_3 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_2, /*hidden argument*/NULL);
		__this->set_encoded_8(((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_3, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var)));
		ByteU5BU5D_t4116647657* L_4 = __this->get_encoded_8();
		X509Crl_Parse_m3164013387(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Crl_Parse_m3164013387 (X509Crl_t1148767388 * __this, ByteU5BU5D_t4116647657* ___crl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_Parse_m3164013387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ASN1_t2114160833 * V_1 = NULL;
	ASN1_t2114160833 * V_2 = NULL;
	int32_t V_3 = 0;
	ASN1_t2114160833 * V_4 = NULL;
	ASN1_t2114160833 * V_5 = NULL;
	int32_t V_6 = 0;
	ASN1_t2114160833 * V_7 = NULL;
	String_t* V_8 = NULL;
	ByteU5BU5D_t4116647657* V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = _stringLiteral1752854249;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t4116647657* L_0 = __this->get_encoded_8();
			ASN1_t2114160833 * L_1 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
			ASN1__ctor_m1219137533(L_1, L_0, /*hidden argument*/NULL);
			V_1 = L_1;
			ASN1_t2114160833 * L_2 = V_1;
			NullCheck(L_2);
			uint8_t L_3 = ASN1_get_Tag_m1863840805(L_2, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)48)))))
			{
				goto IL_002b;
			}
		}

IL_001f:
		{
			ASN1_t2114160833 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = ASN1_get_Count_m3039939183(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) == ((int32_t)3)))
			{
				goto IL_0032;
			}
		}

IL_002b:
		{
			String_t* L_6 = V_0;
			CryptographicException_t248831461 * L_7 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m503735289(L_7, L_6, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, X509Crl_Parse_m3164013387_RuntimeMethod_var);
		}

IL_0032:
		{
			ASN1_t2114160833 * L_8 = V_1;
			NullCheck(L_8);
			ASN1_t2114160833 * L_9 = ASN1_get_Item_m315148275(L_8, 0, /*hidden argument*/NULL);
			V_2 = L_9;
			ASN1_t2114160833 * L_10 = V_2;
			NullCheck(L_10);
			uint8_t L_11 = ASN1_get_Tag_m1863840805(L_10, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)48)))))
			{
				goto IL_0053;
			}
		}

IL_0047:
		{
			ASN1_t2114160833 * L_12 = V_2;
			NullCheck(L_12);
			int32_t L_13 = ASN1_get_Count_m3039939183(L_12, /*hidden argument*/NULL);
			if ((((int32_t)L_13) >= ((int32_t)3)))
			{
				goto IL_005a;
			}
		}

IL_0053:
		{
			String_t* L_14 = V_0;
			CryptographicException_t248831461 * L_15 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m503735289(L_15, L_14, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, X509Crl_Parse_m3164013387_RuntimeMethod_var);
		}

IL_005a:
		{
			V_3 = 0;
			ASN1_t2114160833 * L_16 = V_2;
			int32_t L_17 = V_3;
			NullCheck(L_16);
			ASN1_t2114160833 * L_18 = ASN1_get_Item_m315148275(L_16, L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			uint8_t L_19 = ASN1_get_Tag_m1863840805(L_18, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_19) == ((uint32_t)2))))
			{
				goto IL_008e;
			}
		}

IL_006e:
		{
			ASN1_t2114160833 * L_20 = V_2;
			int32_t L_21 = V_3;
			int32_t L_22 = L_21;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
			NullCheck(L_20);
			ASN1_t2114160833 * L_23 = ASN1_get_Item_m315148275(L_20, L_22, /*hidden argument*/NULL);
			NullCheck(L_23);
			ByteU5BU5D_t4116647657* L_24 = ASN1_get_Value_m3619295991(L_23, /*hidden argument*/NULL);
			NullCheck(L_24);
			int32_t L_25 = 0;
			uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
			__this->set_version_1((uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1))))));
			goto IL_0095;
		}

IL_008e:
		{
			__this->set_version_1((uint8_t)1);
		}

IL_0095:
		{
			ASN1_t2114160833 * L_27 = V_2;
			int32_t L_28 = V_3;
			int32_t L_29 = L_28;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
			NullCheck(L_27);
			ASN1_t2114160833 * L_30 = ASN1_get_Item_m315148275(L_27, L_29, /*hidden argument*/NULL);
			NullCheck(L_30);
			ASN1_t2114160833 * L_31 = ASN1_get_Item_m315148275(L_30, 0, /*hidden argument*/NULL);
			String_t* L_32 = ASN1Convert_ToOid_m4290825381(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
			__this->set_signatureOID_5(L_32);
			ASN1_t2114160833 * L_33 = V_2;
			int32_t L_34 = V_3;
			int32_t L_35 = L_34;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
			NullCheck(L_33);
			ASN1_t2114160833 * L_36 = ASN1_get_Item_m315148275(L_33, L_35, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(X501_t1758824426_il2cpp_TypeInfo_var);
			String_t* L_37 = X501_ToString_m2260475203(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
			__this->set_issuer_0(L_37);
			ASN1_t2114160833 * L_38 = V_2;
			int32_t L_39 = V_3;
			int32_t L_40 = L_39;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
			NullCheck(L_38);
			ASN1_t2114160833 * L_41 = ASN1_get_Item_m315148275(L_38, L_40, /*hidden argument*/NULL);
			DateTime_t3738529785  L_42 = ASN1Convert_ToDateTime_m1246060840(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
			__this->set_thisUpdate_2(L_42);
			ASN1_t2114160833 * L_43 = V_2;
			int32_t L_44 = V_3;
			int32_t L_45 = L_44;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
			NullCheck(L_43);
			ASN1_t2114160833 * L_46 = ASN1_get_Item_m315148275(L_43, L_45, /*hidden argument*/NULL);
			V_4 = L_46;
			ASN1_t2114160833 * L_47 = V_4;
			NullCheck(L_47);
			uint8_t L_48 = ASN1_get_Tag_m1863840805(L_47, /*hidden argument*/NULL);
			if ((((int32_t)L_48) == ((int32_t)((int32_t)23))))
			{
				goto IL_0106;
			}
		}

IL_00f8:
		{
			ASN1_t2114160833 * L_49 = V_4;
			NullCheck(L_49);
			uint8_t L_50 = ASN1_get_Tag_m1863840805(L_49, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)24)))))
			{
				goto IL_0120;
			}
		}

IL_0106:
		{
			ASN1_t2114160833 * L_51 = V_4;
			DateTime_t3738529785  L_52 = ASN1Convert_ToDateTime_m1246060840(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
			__this->set_nextUpdate_3(L_52);
			ASN1_t2114160833 * L_53 = V_2;
			int32_t L_54 = V_3;
			int32_t L_55 = L_54;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
			NullCheck(L_53);
			ASN1_t2114160833 * L_56 = ASN1_get_Item_m315148275(L_53, L_55, /*hidden argument*/NULL);
			V_4 = L_56;
		}

IL_0120:
		{
			ArrayList_t2718874744 * L_57 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
			ArrayList__ctor_m4254721275(L_57, /*hidden argument*/NULL);
			__this->set_entries_4(L_57);
			ASN1_t2114160833 * L_58 = V_4;
			if (!L_58)
			{
				goto IL_017f;
			}
		}

IL_0132:
		{
			ASN1_t2114160833 * L_59 = V_4;
			NullCheck(L_59);
			uint8_t L_60 = ASN1_get_Tag_m1863840805(L_59, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_60) == ((uint32_t)((int32_t)48)))))
			{
				goto IL_017f;
			}
		}

IL_0140:
		{
			ASN1_t2114160833 * L_61 = V_4;
			V_5 = L_61;
			V_6 = 0;
			goto IL_016c;
		}

IL_014c:
		{
			ArrayList_t2718874744 * L_62 = __this->get_entries_4();
			ASN1_t2114160833 * L_63 = V_5;
			int32_t L_64 = V_6;
			NullCheck(L_63);
			ASN1_t2114160833 * L_65 = ASN1_get_Item_m315148275(L_63, L_64, /*hidden argument*/NULL);
			X509CrlEntry_t645568789 * L_66 = (X509CrlEntry_t645568789 *)il2cpp_codegen_object_new(X509CrlEntry_t645568789_il2cpp_TypeInfo_var);
			X509CrlEntry__ctor_m4013514048(L_66, L_65, /*hidden argument*/NULL);
			NullCheck(L_62);
			VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_62, L_66);
			int32_t L_67 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		}

IL_016c:
		{
			int32_t L_68 = V_6;
			ASN1_t2114160833 * L_69 = V_5;
			NullCheck(L_69);
			int32_t L_70 = ASN1_get_Count_m3039939183(L_69, /*hidden argument*/NULL);
			if ((((int32_t)L_68) < ((int32_t)L_70)))
			{
				goto IL_014c;
			}
		}

IL_017a:
		{
			goto IL_0183;
		}

IL_017f:
		{
			int32_t L_71 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)1));
		}

IL_0183:
		{
			ASN1_t2114160833 * L_72 = V_2;
			int32_t L_73 = V_3;
			NullCheck(L_72);
			ASN1_t2114160833 * L_74 = ASN1_get_Item_m315148275(L_72, L_73, /*hidden argument*/NULL);
			V_7 = L_74;
			ASN1_t2114160833 * L_75 = V_7;
			if (!L_75)
			{
				goto IL_01c9;
			}
		}

IL_0193:
		{
			ASN1_t2114160833 * L_76 = V_7;
			NullCheck(L_76);
			uint8_t L_77 = ASN1_get_Tag_m1863840805(L_76, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_77) == ((uint32_t)((int32_t)160)))))
			{
				goto IL_01c9;
			}
		}

IL_01a4:
		{
			ASN1_t2114160833 * L_78 = V_7;
			NullCheck(L_78);
			int32_t L_79 = ASN1_get_Count_m3039939183(L_78, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_79) == ((uint32_t)1))))
			{
				goto IL_01c9;
			}
		}

IL_01b1:
		{
			ASN1_t2114160833 * L_80 = V_7;
			NullCheck(L_80);
			ASN1_t2114160833 * L_81 = ASN1_get_Item_m315148275(L_80, 0, /*hidden argument*/NULL);
			X509ExtensionCollection_t609554709 * L_82 = (X509ExtensionCollection_t609554709 *)il2cpp_codegen_object_new(X509ExtensionCollection_t609554709_il2cpp_TypeInfo_var);
			X509ExtensionCollection__ctor_m551870633(L_82, L_81, /*hidden argument*/NULL);
			__this->set_extensions_7(L_82);
			goto IL_01d5;
		}

IL_01c9:
		{
			X509ExtensionCollection_t609554709 * L_83 = (X509ExtensionCollection_t609554709 *)il2cpp_codegen_object_new(X509ExtensionCollection_t609554709_il2cpp_TypeInfo_var);
			X509ExtensionCollection__ctor_m551870633(L_83, (ASN1_t2114160833 *)NULL, /*hidden argument*/NULL);
			__this->set_extensions_7(L_83);
		}

IL_01d5:
		{
			ASN1_t2114160833 * L_84 = V_1;
			NullCheck(L_84);
			ASN1_t2114160833 * L_85 = ASN1_get_Item_m315148275(L_84, 1, /*hidden argument*/NULL);
			NullCheck(L_85);
			ASN1_t2114160833 * L_86 = ASN1_get_Item_m315148275(L_85, 0, /*hidden argument*/NULL);
			String_t* L_87 = ASN1Convert_ToOid_m4290825381(NULL /*static, unused*/, L_86, /*hidden argument*/NULL);
			V_8 = L_87;
			String_t* L_88 = __this->get_signatureOID_5();
			String_t* L_89 = V_8;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_90 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_88, L_89, /*hidden argument*/NULL);
			if (!L_90)
			{
				goto IL_020c;
			}
		}

IL_01fb:
		{
			String_t* L_91 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_92 = String_Concat_m3937257545(NULL /*static, unused*/, L_91, _stringLiteral3761512114, /*hidden argument*/NULL);
			CryptographicException_t248831461 * L_93 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m503735289(L_93, L_92, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_93, NULL, X509Crl_Parse_m3164013387_RuntimeMethod_var);
		}

IL_020c:
		{
			ASN1_t2114160833 * L_94 = V_1;
			NullCheck(L_94);
			ASN1_t2114160833 * L_95 = ASN1_get_Item_m315148275(L_94, 2, /*hidden argument*/NULL);
			NullCheck(L_95);
			ByteU5BU5D_t4116647657* L_96 = ASN1_get_Value_m3619295991(L_95, /*hidden argument*/NULL);
			V_9 = L_96;
			ByteU5BU5D_t4116647657* L_97 = V_9;
			NullCheck(L_97);
			ByteU5BU5D_t4116647657* L_98 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_97)->max_length)))), (int32_t)1)));
			__this->set_signature_6(L_98);
			ByteU5BU5D_t4116647657* L_99 = V_9;
			ByteU5BU5D_t4116647657* L_100 = __this->get_signature_6();
			ByteU5BU5D_t4116647657* L_101 = __this->get_signature_6();
			NullCheck(L_101);
			Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_99, 1, (RuntimeArray *)(RuntimeArray *)L_100, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_101)->max_length)))), /*hidden argument*/NULL);
			goto IL_0254;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0247;
		throw e;
	}

CATCH_0247:
	{ // begin catch(System.Object)
		{
			String_t* L_102 = V_0;
			CryptographicException_t248831461 * L_103 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m503735289(L_103, L_102, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_103, NULL, X509Crl_Parse_m3164013387_RuntimeMethod_var);
		}

IL_024f:
		{
			goto IL_0254;
		}
	} // end catch (depth: 1)

IL_0254:
	{
		return;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509Crl::get_Entries()
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * X509Crl_get_Entries_m4032389711 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_get_Entries_m4032389711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = __this->get_entries_4();
		IL2CPP_RUNTIME_CLASS_INIT(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList_t2718874744 * L_1 = ArrayList_ReadOnly_m1905796817(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR X509CrlEntry_t645568789 * X509Crl_get_Item_m2105052623 (X509Crl_t1148767388 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_get_Item_m2105052623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = __this->get_entries_4();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((X509CrlEntry_t645568789 *)CastclassClass((RuntimeObject*)L_2, X509CrlEntry_t645568789_il2cpp_TypeInfo_var));
	}
}
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::get_Item(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR X509CrlEntry_t645568789 * X509Crl_get_Item_m2795983057 (X509Crl_t1148767388 * __this, ByteU5BU5D_t4116647657* ___serialNumber0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___serialNumber0;
		X509CrlEntry_t645568789 * L_1 = X509Crl_GetCrlEntry_m641501875(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" IL2CPP_METHOD_ATTR X509ExtensionCollection_t609554709 * X509Crl_get_Extensions_m2708052985 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	{
		X509ExtensionCollection_t609554709 * L_0 = __this->get_extensions_7();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Crl_get_Hash_m464217067 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_get_Hash_m464217067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2114160833 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	HashAlgorithm_t1432317219 * V_2 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_hash_value_9();
		if (L_0)
		{
			goto IL_003d;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_encoded_8();
		ASN1_t2114160833 * L_2 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m1219137533(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ASN1_t2114160833 * L_3 = V_0;
		NullCheck(L_3);
		ASN1_t2114160833 * L_4 = ASN1_get_Item_m315148275(L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_4);
		V_1 = L_5;
		String_t* L_6 = X509Crl_GetHashName_m4214678741(__this, /*hidden argument*/NULL);
		HashAlgorithm_t1432317219 * L_7 = HashAlgorithm_Create_m644612360(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		HashAlgorithm_t1432317219 * L_8 = V_2;
		ByteU5BU5D_t4116647657* L_9 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_10 = HashAlgorithm_ComputeHash_m2825542963(L_8, L_9, /*hidden argument*/NULL);
		__this->set_hash_value_9(L_10);
	}

IL_003d:
	{
		ByteU5BU5D_t4116647657* L_11 = __this->get_hash_value_9();
		return L_11;
	}
}
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Crl_get_IssuerName_m1792797338 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_issuer_0();
		return L_0;
	}
}
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  X509Crl_get_NextUpdate_m1760667768 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_nextUpdate_3();
		return L_0;
	}
}
// System.DateTime Mono.Security.X509.X509Crl::get_ThisUpdate()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  X509Crl_get_ThisUpdate_m1179888977 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_thisUpdate_2();
		return L_0;
	}
}
// System.String Mono.Security.X509.X509Crl::get_SignatureAlgorithm()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Crl_get_SignatureAlgorithm_m3994908724 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_signatureOID_5();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl::get_Signature()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Crl_get_Signature_m1378549588 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_get_Signature_m1378549588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_signature_6();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_signature_6();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.Byte[] Mono.Security.X509.X509Crl::get_RawData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Crl_get_RawData_m3623997699 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_get_RawData_m3623997699_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_encoded_8();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		RuntimeObject * L_1 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_1, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.Byte Mono.Security.X509.X509Crl::get_Version()
extern "C" IL2CPP_METHOD_ATTR uint8_t X509Crl_get_Version_m2322061776 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_version_1();
		return L_0;
	}
}
// System.Boolean Mono.Security.X509.X509Crl::get_IsCurrent()
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_get_IsCurrent_m298812277 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_get_IsCurrent_m298812277_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_0 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = X509Crl_WasCurrent_m662015296(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509Crl::WasCurrent(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_WasCurrent_m662015296 (X509Crl_t1148767388 * __this, DateTime_t3738529785  ___instant0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_WasCurrent_m662015296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		DateTime_t3738529785  L_0 = __this->get_nextUpdate_3();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_13();
		bool L_2 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DateTime_t3738529785  L_3 = ___instant0;
		DateTime_t3738529785  L_4 = __this->get_thisUpdate_2();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_5 = DateTime_op_GreaterThanOrEqual_m674703316(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0022:
	{
		DateTime_t3738529785  L_6 = ___instant0;
		DateTime_t3738529785  L_7 = __this->get_thisUpdate_2();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_8 = DateTime_op_GreaterThanOrEqual_m674703316(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		DateTime_t3738529785  L_9 = ___instant0;
		DateTime_t3738529785  L_10 = __this->get_nextUpdate_3();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_11 = DateTime_op_LessThanOrEqual_m2360948759(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = 0;
	}

IL_0042:
	{
		return (bool)G_B5_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl::GetBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Crl_GetBytes_m326324156 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_GetBytes_m326324156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_encoded_8();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		RuntimeObject * L_1 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_1, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_Compare_m3418726913 (X509Crl_t1148767388 * __this, ByteU5BU5D_t4116647657* ___array10, ByteU5BU5D_t4116647657* ___array21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___array10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___array21;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___array10;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_3 = ___array21;
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		ByteU5BU5D_t4116647657* L_4 = ___array10;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = ___array21;
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0030:
	{
		ByteU5BU5D_t4116647657* L_6 = ___array10;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_t4116647657* L_10 = ___array21;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_9) == ((int32_t)L_13)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_0;
		ByteU5BU5D_t4116647657* L_16 = ___array10;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)1;
	}
}
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR X509CrlEntry_t645568789 * X509Crl_GetCrlEntry_m5954460 (X509Crl_t1148767388 * __this, X509Certificate_t489243025 * ___x5090, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_GetCrlEntry_m5954460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Certificate_t489243025 * L_0 = ___x5090;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3501283186, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Crl_GetCrlEntry_m5954460_RuntimeMethod_var);
	}

IL_0011:
	{
		X509Certificate_t489243025 * L_2 = ___x5090;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(13 /* System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber() */, L_2);
		X509CrlEntry_t645568789 * L_4 = X509Crl_GetCrlEntry_m641501875(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR X509CrlEntry_t645568789 * X509Crl_GetCrlEntry_m641501875 (X509Crl_t1148767388 * __this, ByteU5BU5D_t4116647657* ___serialNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_GetCrlEntry_m641501875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	X509CrlEntry_t645568789 * V_1 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___serialNumber0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral731045672, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Crl_GetCrlEntry_m641501875_RuntimeMethod_var);
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0042;
	}

IL_0018:
	{
		ArrayList_t2718874744 * L_2 = __this->get_entries_4();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_4 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_1 = ((X509CrlEntry_t645568789 *)CastclassClass((RuntimeObject*)L_4, X509CrlEntry_t645568789_il2cpp_TypeInfo_var));
		ByteU5BU5D_t4116647657* L_5 = ___serialNumber0;
		X509CrlEntry_t645568789 * L_6 = V_1;
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = X509CrlEntry_get_SerialNumber_m3627212772(L_6, /*hidden argument*/NULL);
		bool L_8 = X509Crl_Compare_m3418726913(__this, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		X509CrlEntry_t645568789 * L_9 = V_1;
		return L_9;
	}

IL_003e:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_11 = V_0;
		ArrayList_t2718874744 * L_12 = __this->get_entries_4();
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		return (X509CrlEntry_t645568789 *)NULL;
	}
}
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_VerifySignature_m757547902 (X509Crl_t1148767388 * __this, X509Certificate_t489243025 * ___x5090, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_VerifySignature_m757547902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_t3173393653 * V_0 = NULL;
	KeyUsageExtension_t1795615912 * V_1 = NULL;
	BasicConstraintsExtension_t2462195279 * V_2 = NULL;
	String_t* V_3 = NULL;
	Dictionary_2_t2736202052 * V_4 = NULL;
	int32_t V_5 = 0;
	{
		X509Certificate_t489243025 * L_0 = ___x5090;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3501283186, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Crl_VerifySignature_m757547902_RuntimeMethod_var);
	}

IL_0011:
	{
		X509Certificate_t489243025 * L_2 = ___x5090;
		NullCheck(L_2);
		int32_t L_3 = X509Certificate_get_Version_m2908311682(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		X509Certificate_t489243025 * L_4 = ___x5090;
		NullCheck(L_4);
		X509ExtensionCollection_t609554709 * L_5 = X509Certificate_get_Extensions_m1217872579(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509Extension_t3173393653 * L_6 = X509ExtensionCollection_get_Item_m2761897938(L_5, _stringLiteral1004423982, /*hidden argument*/NULL);
		V_0 = L_6;
		X509Extension_t3173393653 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		X509Extension_t3173393653 * L_8 = V_0;
		KeyUsageExtension_t1795615912 * L_9 = (KeyUsageExtension_t1795615912 *)il2cpp_codegen_object_new(KeyUsageExtension_t1795615912_il2cpp_TypeInfo_var);
		KeyUsageExtension__ctor_m3414452076(L_9, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		KeyUsageExtension_t1795615912 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = KeyUsageExtension_Support_m3508856672(L_10, 2, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0049:
	{
		X509Certificate_t489243025 * L_12 = ___x5090;
		NullCheck(L_12);
		X509ExtensionCollection_t609554709 * L_13 = X509Certificate_get_Extensions_m1217872579(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		X509Extension_t3173393653 * L_14 = X509ExtensionCollection_get_Item_m2761897938(L_13, _stringLiteral1004423994, /*hidden argument*/NULL);
		V_0 = L_14;
		X509Extension_t3173393653 * L_15 = V_0;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		X509Extension_t3173393653 * L_16 = V_0;
		BasicConstraintsExtension_t2462195279 * L_17 = (BasicConstraintsExtension_t2462195279 *)il2cpp_codegen_object_new(BasicConstraintsExtension_t2462195279_il2cpp_TypeInfo_var);
		BasicConstraintsExtension__ctor_m3191645544(L_17, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		BasicConstraintsExtension_t2462195279 * L_18 = V_2;
		NullCheck(L_18);
		bool L_19 = BasicConstraintsExtension_get_CertificateAuthority_m391198292(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0074;
		}
	}
	{
		return (bool)0;
	}

IL_0074:
	{
		String_t* L_20 = __this->get_issuer_0();
		X509Certificate_t489243025 * L_21 = ___x5090;
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String Mono.Security.X509.X509Certificate::get_SubjectName() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_008c;
		}
	}
	{
		return (bool)0;
	}

IL_008c:
	{
		String_t* L_24 = __this->get_signatureOID_5();
		V_3 = L_24;
		String_t* L_25 = V_3;
		if (!L_25)
		{
			goto IL_00ea;
		}
	}
	{
		Dictionary_2_t2736202052 * L_26 = ((X509Crl_t1148767388_StaticFields*)il2cpp_codegen_static_fields_for(X509Crl_t1148767388_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map12_10();
		if (L_26)
		{
			goto IL_00bf;
		}
	}
	{
		Dictionary_2_t2736202052 * L_27 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_27, 1, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_4 = L_27;
		Dictionary_2_t2736202052 * L_28 = V_4;
		NullCheck(L_28);
		Dictionary_2_Add_m282647386(L_28, _stringLiteral254300466, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_29 = V_4;
		((X509Crl_t1148767388_StaticFields*)il2cpp_codegen_static_fields_for(X509Crl_t1148767388_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map12_10(L_29);
	}

IL_00bf:
	{
		Dictionary_2_t2736202052 * L_30 = ((X509Crl_t1148767388_StaticFields*)il2cpp_codegen_static_fields_for(X509Crl_t1148767388_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map12_10();
		String_t* L_31 = V_3;
		NullCheck(L_30);
		bool L_32 = Dictionary_2_TryGetValue_m1013208020(L_30, L_31, (int32_t*)(&V_5), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_32)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_33 = V_5;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_00ea;
	}

IL_00dd:
	{
		X509Certificate_t489243025 * L_34 = ___x5090;
		NullCheck(L_34);
		DSA_t2386879874 * L_35 = X509Certificate_get_DSA_m565099499(L_34, /*hidden argument*/NULL);
		bool L_36 = X509Crl_VerifySignature_m1902456590(__this, L_35, /*hidden argument*/NULL);
		return L_36;
	}

IL_00ea:
	{
		X509Certificate_t489243025 * L_37 = ___x5090;
		NullCheck(L_37);
		RSA_t2385438082 * L_38 = VirtFuncInvoker0< RSA_t2385438082 * >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_37);
		bool L_39 = X509Crl_VerifySignature_m1808348256(__this, L_38, /*hidden argument*/NULL);
		return L_39;
	}
}
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Crl_GetHashName_m4214678741 (X509Crl_t1148767388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_GetHashName_m4214678741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t2736202052 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = __this->get_signatureOID_5();
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_008f;
		}
	}
	{
		Dictionary_2_t2736202052 * L_2 = ((X509Crl_t1148767388_StaticFields*)il2cpp_codegen_static_fields_for(X509Crl_t1148767388_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map13_11();
		if (L_2)
		{
			goto IL_0054;
		}
	}
	{
		Dictionary_2_t2736202052 * L_3 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_3, 4, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_1 = L_3;
		Dictionary_2_t2736202052 * L_4 = V_1;
		NullCheck(L_4);
		Dictionary_2_Add_m282647386(L_4, _stringLiteral1384881100, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_5 = V_1;
		NullCheck(L_5);
		Dictionary_2_Add_m282647386(L_5, _stringLiteral1002544076, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_6 = V_1;
		NullCheck(L_6);
		Dictionary_2_Add_m282647386(L_6, _stringLiteral254300466, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_7 = V_1;
		NullCheck(L_7);
		Dictionary_2_Add_m282647386(L_7, _stringLiteral2958859212, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_8 = V_1;
		((X509Crl_t1148767388_StaticFields*)il2cpp_codegen_static_fields_for(X509Crl_t1148767388_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map13_11(L_8);
	}

IL_0054:
	{
		Dictionary_2_t2736202052 * L_9 = ((X509Crl_t1148767388_StaticFields*)il2cpp_codegen_static_fields_for(X509Crl_t1148767388_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map13_11();
		String_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = Dictionary_2_TryGetValue_m1013208020(L_9, L_10, (int32_t*)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_12 = V_2;
		switch (L_12)
		{
			case 0:
			{
				goto IL_007d;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_0089;
			}
		}
	}
	{
		goto IL_008f;
	}

IL_007d:
	{
		return _stringLiteral4242423987;
	}

IL_0083:
	{
		return _stringLiteral3839139460;
	}

IL_0089:
	{
		return _stringLiteral1144609714;
	}

IL_008f:
	{
		String_t* L_13 = __this->get_signatureOID_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2511804911, L_13, /*hidden argument*/NULL);
		CryptographicException_t248831461 * L_15 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, X509Crl_GetHashName_m4214678741_RuntimeMethod_var);
	}
}
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_VerifySignature_m1902456590 (X509Crl_t1148767388 * __this, DSA_t2386879874 * ___dsa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_VerifySignature_m1902456590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DSASignatureDeformatter_t3677955172 * V_0 = NULL;
	ASN1_t2114160833 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = __this->get_signatureOID_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_0, _stringLiteral254300466, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_2 = __this->get_signatureOID_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2511804911, L_2, /*hidden argument*/NULL);
		CryptographicException_t248831461 * L_4 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, X509Crl_VerifySignature_m1902456590_RuntimeMethod_var);
	}

IL_002b:
	{
		DSA_t2386879874 * L_5 = ___dsa0;
		DSASignatureDeformatter_t3677955172 * L_6 = (DSASignatureDeformatter_t3677955172 *)il2cpp_codegen_object_new(DSASignatureDeformatter_t3677955172_il2cpp_TypeInfo_var);
		DSASignatureDeformatter__ctor_m2889130126(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		DSASignatureDeformatter_t3677955172 * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String) */, L_7, _stringLiteral1144609714);
		ByteU5BU5D_t4116647657* L_8 = __this->get_signature_6();
		ASN1_t2114160833 * L_9 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m1219137533(L_9, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		ASN1_t2114160833 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		ASN1_t2114160833 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = ASN1_get_Count_m3039939183(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_005d;
		}
	}

IL_005b:
	{
		return (bool)0;
	}

IL_005d:
	{
		ASN1_t2114160833 * L_13 = V_1;
		NullCheck(L_13);
		ASN1_t2114160833 * L_14 = ASN1_get_Item_m315148275(L_13, 0, /*hidden argument*/NULL);
		NullCheck(L_14);
		ByteU5BU5D_t4116647657* L_15 = ASN1_get_Value_m3619295991(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		ASN1_t2114160833 * L_16 = V_1;
		NullCheck(L_16);
		ASN1_t2114160833 * L_17 = ASN1_get_Item_m315148275(L_16, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_t4116647657* L_18 = ASN1_get_Value_m3619295991(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		ByteU5BU5D_t4116647657* L_19 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		V_4 = L_19;
		ByteU5BU5D_t4116647657* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = Math_Max_m1873195862(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))), (int32_t)((int32_t)20))), /*hidden argument*/NULL);
		V_5 = L_21;
		ByteU5BU5D_t4116647657* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = Math_Max_m1873195862(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)20), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))), /*hidden argument*/NULL);
		V_6 = L_23;
		ByteU5BU5D_t4116647657* L_24 = V_2;
		int32_t L_25 = V_5;
		ByteU5BU5D_t4116647657* L_26 = V_4;
		int32_t L_27 = V_6;
		ByteU5BU5D_t4116647657* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = V_5;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_24, L_25, (RuntimeArray *)(RuntimeArray *)L_26, L_27, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))), (int32_t)L_29)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = Math_Max_m1873195862(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))), (int32_t)((int32_t)20))), /*hidden argument*/NULL);
		V_7 = L_31;
		ByteU5BU5D_t4116647657* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33 = Math_Max_m1873195862(NULL /*static, unused*/, ((int32_t)20), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)40), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))), /*hidden argument*/NULL);
		V_8 = L_33;
		ByteU5BU5D_t4116647657* L_34 = V_3;
		int32_t L_35 = V_7;
		ByteU5BU5D_t4116647657* L_36 = V_4;
		int32_t L_37 = V_8;
		ByteU5BU5D_t4116647657* L_38 = V_3;
		NullCheck(L_38);
		int32_t L_39 = V_7;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_34, L_35, (RuntimeArray *)(RuntimeArray *)L_36, L_37, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_38)->max_length)))), (int32_t)L_39)), /*hidden argument*/NULL);
		DSASignatureDeformatter_t3677955172 * L_40 = V_0;
		ByteU5BU5D_t4116647657* L_41 = X509Crl_get_Hash_m464217067(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_42 = V_4;
		NullCheck(L_40);
		bool L_43 = VirtFuncInvoker2< bool, ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(6 /* System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_40, L_41, L_42);
		return L_43;
	}
}
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_VerifySignature_m1808348256 (X509Crl_t1148767388 * __this, RSA_t2385438082 * ___rsa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_VerifySignature_m1808348256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RSAPKCS1SignatureDeformatter_t3767223008 * V_0 = NULL;
	{
		RSA_t2385438082 * L_0 = ___rsa0;
		RSAPKCS1SignatureDeformatter_t3767223008 * L_1 = (RSAPKCS1SignatureDeformatter_t3767223008 *)il2cpp_codegen_object_new(RSAPKCS1SignatureDeformatter_t3767223008_il2cpp_TypeInfo_var);
		RSAPKCS1SignatureDeformatter__ctor_m3706544163(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RSAPKCS1SignatureDeformatter_t3767223008 * L_2 = V_0;
		String_t* L_3 = X509Crl_GetHashName_m4214678741(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_2, L_3);
		RSAPKCS1SignatureDeformatter_t3767223008 * L_4 = V_0;
		ByteU5BU5D_t4116647657* L_5 = X509Crl_get_Hash_m464217067(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_6 = __this->get_signature_6();
		NullCheck(L_4);
		bool L_7 = VirtFuncInvoker2< bool, ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(6 /* System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_VerifySignature_m1377612461 (X509Crl_t1148767388 * __this, AsymmetricAlgorithm_t932037087 * ___aa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_VerifySignature_m1377612461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsymmetricAlgorithm_t932037087 * L_0 = ___aa0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3454646207, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Crl_VerifySignature_m1377612461_RuntimeMethod_var);
	}

IL_0011:
	{
		AsymmetricAlgorithm_t932037087 * L_2 = ___aa0;
		if (!((RSA_t2385438082 *)IsInstClass((RuntimeObject*)L_2, RSA_t2385438082_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		AsymmetricAlgorithm_t932037087 * L_3 = ___aa0;
		bool L_4 = X509Crl_VerifySignature_m1808348256(__this, ((RSA_t2385438082 *)IsInstClass((RuntimeObject*)L_3, RSA_t2385438082_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_4;
	}

IL_0029:
	{
		AsymmetricAlgorithm_t932037087 * L_5 = ___aa0;
		if (!((DSA_t2386879874 *)IsInstClass((RuntimeObject*)L_5, DSA_t2386879874_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		AsymmetricAlgorithm_t932037087 * L_6 = ___aa0;
		bool L_7 = X509Crl_VerifySignature_m1902456590(__this, ((DSA_t2386879874 *)IsInstClass((RuntimeObject*)L_6, DSA_t2386879874_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0041:
	{
		AsymmetricAlgorithm_t932037087 * L_8 = ___aa0;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1243364763, L_9, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_11 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, X509Crl_VerifySignature_m1377612461_RuntimeMethod_var);
	}
}
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Crl::CreateFromFile(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Crl_t1148767388 * X509Crl_CreateFromFile_m1507150054 (RuntimeObject * __this /* static, unused */, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_CreateFromFile_m1507150054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	FileStream_t4292183065 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (ByteU5BU5D_t4116647657*)NULL;
		String_t* L_0 = ___filename0;
		FileStream_t4292183065 * L_1 = File_Open_m3218582222(NULL /*static, unused*/, L_0, 3, 1, 1, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		FileStream_t4292183065 * L_2 = V_1;
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.FileStream::get_Length() */, L_2);
		if ((int64_t)(L_3) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, X509Crl_CreateFromFile_m1507150054_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_3)));
		V_0 = L_4;
		FileStream_t4292183065 * L_5 = V_1;
		ByteU5BU5D_t4116647657* L_6 = V_0;
		ByteU5BU5D_t4116647657* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))));
		FileStream_t4292183065 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_8);
		IL2CPP_LEAVE(0x3D, FINALLY_0030);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			FileStream_t4292183065 * L_9 = V_1;
			if (!L_9)
			{
				goto IL_003c;
			}
		}

IL_0036:
		{
			FileStream_t4292183065 * L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_10);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003d:
	{
		ByteU5BU5D_t4116647657* L_11 = V_0;
		X509Crl_t1148767388 * L_12 = (X509Crl_t1148767388 *)il2cpp_codegen_object_new(X509Crl_t1148767388_il2cpp_TypeInfo_var);
		X509Crl__ctor_m1817187405(L_12, L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(System.Byte[],System.DateTime,Mono.Security.X509.X509ExtensionCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CrlEntry__ctor_m783552701 (X509CrlEntry_t645568789 * __this, ByteU5BU5D_t4116647657* ___serialNumber0, DateTime_t3738529785  ___revocationDate1, X509ExtensionCollection_t609554709 * ___extensions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CrlEntry__ctor_m783552701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___serialNumber0;
		__this->set_sn_0(L_0);
		DateTime_t3738529785  L_1 = ___revocationDate1;
		__this->set_revocationDate_1(L_1);
		X509ExtensionCollection_t609554709 * L_2 = ___extensions2;
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		X509ExtensionCollection_t609554709 * L_3 = (X509ExtensionCollection_t609554709 *)il2cpp_codegen_object_new(X509ExtensionCollection_t609554709_il2cpp_TypeInfo_var);
		X509ExtensionCollection__ctor_m2474799343(L_3, /*hidden argument*/NULL);
		__this->set_extensions_2(L_3);
		goto IL_0031;
	}

IL_002a:
	{
		X509ExtensionCollection_t609554709 * L_4 = ___extensions2;
		__this->set_extensions_2(L_4);
	}

IL_0031:
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509CrlEntry__ctor_m4013514048 (X509CrlEntry_t645568789 * __this, ASN1_t2114160833 * ___entry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CrlEntry__ctor_m4013514048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_0 = ___entry0;
		NullCheck(L_0);
		ASN1_t2114160833 * L_1 = ASN1_get_Item_m315148275(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = ASN1_get_Value_m3619295991(L_1, /*hidden argument*/NULL);
		__this->set_sn_0(L_2);
		ByteU5BU5D_t4116647657* L_3 = __this->get_sn_0();
		Array_Reverse_m3714848183(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_3, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_4 = ___entry0;
		NullCheck(L_4);
		ASN1_t2114160833 * L_5 = ASN1_get_Item_m315148275(L_4, 1, /*hidden argument*/NULL);
		DateTime_t3738529785  L_6 = ASN1Convert_ToDateTime_m1246060840(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_revocationDate_1(L_6);
		ASN1_t2114160833 * L_7 = ___entry0;
		NullCheck(L_7);
		ASN1_t2114160833 * L_8 = ASN1_get_Item_m315148275(L_7, 2, /*hidden argument*/NULL);
		X509ExtensionCollection_t609554709 * L_9 = (X509ExtensionCollection_t609554709 *)il2cpp_codegen_object_new(X509ExtensionCollection_t609554709_il2cpp_TypeInfo_var);
		X509ExtensionCollection__ctor_m551870633(L_9, L_8, /*hidden argument*/NULL);
		__this->set_extensions_2(L_9);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509CrlEntry_get_SerialNumber_m3627212772 (X509CrlEntry_t645568789 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CrlEntry_get_SerialNumber_m3627212772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_sn_0();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		RuntimeObject * L_1 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_1, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  X509CrlEntry_get_RevocationDate_m606796547 (X509CrlEntry_t645568789 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_revocationDate_1();
		return L_0;
	}
}
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" IL2CPP_METHOD_ATTR X509ExtensionCollection_t609554709 * X509CrlEntry_get_Extensions_m3943658385 (X509CrlEntry_t645568789 * __this, const RuntimeMethod* method)
{
	{
		X509ExtensionCollection_t609554709 * L_0 = __this->get_extensions_2();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::GetBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509CrlEntry_GetBytes_m2980586034 (X509CrlEntry_t645568789 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CrlEntry_GetBytes_m2980586034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2114160833 * V_0 = NULL;
	{
		ASN1_t2114160833 * L_0 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_t2114160833 * L_1 = V_0;
		ByteU5BU5D_t4116647657* L_2 = __this->get_sn_0();
		ASN1_t2114160833 * L_3 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_3, (uint8_t)2, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ASN1_Add_m3262603624(L_1, L_3, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_4 = V_0;
		DateTime_t3738529785  L_5 = __this->get_revocationDate_1();
		ASN1_t2114160833 * L_6 = ASN1Convert_FromDateTime_m1024852799(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ASN1_Add_m3262603624(L_4, L_6, /*hidden argument*/NULL);
		X509ExtensionCollection_t609554709 * L_7 = __this->get_extensions_2();
		NullCheck(L_7);
		int32_t L_8 = CollectionBase_get_Count_m1708965601(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		ASN1_t2114160833 * L_9 = V_0;
		X509ExtensionCollection_t609554709 * L_10 = __this->get_extensions_2();
		NullCheck(L_10);
		ByteU5BU5D_t4116647657* L_11 = X509ExtensionCollection_GetBytes_m1622025118(L_10, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_12 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m1219137533(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		ASN1_Add_m3262603624(L_9, L_12, /*hidden argument*/NULL);
	}

IL_0055:
	{
		ASN1_t2114160833 * L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_t4116647657* L_14 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_13);
		return L_14;
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
// System.Void Mono.Security.X509.X509Extension::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509Extension__ctor_m1812210650 (X509Extension_t3173393653 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_extnCritical_1((bool)0);
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509Extension__ctor_m710637961 (X509Extension_t3173393653 * __this, ASN1_t2114160833 * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension__ctor_m710637961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2114160833 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	X509Extension_t3173393653 * G_B7_0 = NULL;
	X509Extension_t3173393653 * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	X509Extension_t3173393653 * G_B8_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_0 = ___asn10;
		NullCheck(L_0);
		uint8_t L_1 = ASN1_get_Tag_m1863840805(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_001f;
		}
	}
	{
		ASN1_t2114160833 * L_2 = ___asn10;
		NullCheck(L_2);
		int32_t L_3 = ASN1_get_Count_m3039939183(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_002f;
		}
	}

IL_001f:
	{
		String_t* L_4 = Locale_GetText_m3520169047(NULL /*static, unused*/, _stringLiteral1590810976, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, X509Extension__ctor_m710637961_RuntimeMethod_var);
	}

IL_002f:
	{
		ASN1_t2114160833 * L_6 = ___asn10;
		NullCheck(L_6);
		ASN1_t2114160833 * L_7 = ASN1_get_Item_m315148275(L_6, 0, /*hidden argument*/NULL);
		NullCheck(L_7);
		uint8_t L_8 = ASN1_get_Tag_m1863840805(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_9 = Locale_GetText_m3520169047(NULL /*static, unused*/, _stringLiteral1590810976, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, X509Extension__ctor_m710637961_RuntimeMethod_var);
	}

IL_0051:
	{
		ASN1_t2114160833 * L_11 = ___asn10;
		NullCheck(L_11);
		ASN1_t2114160833 * L_12 = ASN1_get_Item_m315148275(L_11, 0, /*hidden argument*/NULL);
		String_t* L_13 = ASN1Convert_ToOid_m4290825381(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		__this->set_extnOid_0(L_13);
		ASN1_t2114160833 * L_14 = ___asn10;
		NullCheck(L_14);
		ASN1_t2114160833 * L_15 = ASN1_get_Item_m315148275(L_14, 1, /*hidden argument*/NULL);
		NullCheck(L_15);
		uint8_t L_16 = ASN1_get_Tag_m1863840805(L_15, /*hidden argument*/NULL);
		G_B6_0 = __this;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			G_B7_0 = __this;
			goto IL_008d;
		}
	}
	{
		ASN1_t2114160833 * L_17 = ___asn10;
		NullCheck(L_17);
		ASN1_t2114160833 * L_18 = ASN1_get_Item_m315148275(L_17, 1, /*hidden argument*/NULL);
		NullCheck(L_18);
		ByteU5BU5D_t4116647657* L_19 = ASN1_get_Value_m3619295991(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = 0;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B8_0 = ((((int32_t)L_21) == ((int32_t)((int32_t)255)))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_008e;
	}

IL_008d:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_008e:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_extnCritical_1((bool)G_B8_0);
		ASN1_t2114160833 * L_22 = ___asn10;
		ASN1_t2114160833 * L_23 = ___asn10;
		NullCheck(L_23);
		int32_t L_24 = ASN1_get_Count_m3039939183(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		ASN1_t2114160833 * L_25 = ASN1_get_Item_m315148275(L_22, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_extnValue_2(L_25);
		ASN1_t2114160833 * L_26 = __this->get_extnValue_2();
		NullCheck(L_26);
		uint8_t L_27 = ASN1_get_Tag_m1863840805(L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_010e;
		}
	}
	{
		ASN1_t2114160833 * L_28 = __this->get_extnValue_2();
		NullCheck(L_28);
		int32_t L_29 = ASN1_get_Length_m3581645253(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		ASN1_t2114160833 * L_30 = __this->get_extnValue_2();
		NullCheck(L_30);
		int32_t L_31 = ASN1_get_Count_m3039939183(L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_010e;
		}
	}

IL_00d9:
	try
	{ // begin try (depth: 1)
		ASN1_t2114160833 * L_32 = __this->get_extnValue_2();
		NullCheck(L_32);
		ByteU5BU5D_t4116647657* L_33 = ASN1_get_Value_m3619295991(L_32, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_34 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m1219137533(L_34, L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		ASN1_t2114160833 * L_35 = __this->get_extnValue_2();
		NullCheck(L_35);
		ASN1_set_Value_m647861841(L_35, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_36 = __this->get_extnValue_2();
		ASN1_t2114160833 * L_37 = V_0;
		NullCheck(L_36);
		ASN1_Add_m3262603624(L_36, L_37, /*hidden argument*/NULL);
		goto IL_010e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0108;
		throw e;
	}

CATCH_0108:
	{ // begin catch(System.Object)
		goto IL_010e;
	} // end catch (depth: 1)

IL_010e:
	{
		VirtActionInvoker0::Invoke(4 /* System.Void Mono.Security.X509.X509Extension::Decode() */, __this);
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.X509.X509Extension)
extern "C" IL2CPP_METHOD_ATTR void X509Extension__ctor_m1474351312 (X509Extension_t3173393653 * __this, X509Extension_t3173393653 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension__ctor_m1474351312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		X509Extension_t3173393653 * L_0 = ___extension0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1610623306, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Extension__ctor_m1474351312_RuntimeMethod_var);
	}

IL_0017:
	{
		X509Extension_t3173393653 * L_2 = ___extension0;
		NullCheck(L_2);
		ASN1_t2114160833 * L_3 = X509Extension_get_Value_m896831716(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		X509Extension_t3173393653 * L_4 = ___extension0;
		NullCheck(L_4);
		ASN1_t2114160833 * L_5 = X509Extension_get_Value_m896831716(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		uint8_t L_6 = ASN1_get_Tag_m1863840805(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0044;
		}
	}
	{
		X509Extension_t3173393653 * L_7 = ___extension0;
		NullCheck(L_7);
		ASN1_t2114160833 * L_8 = X509Extension_get_Value_m896831716(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = ASN1_get_Count_m3039939183(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}

IL_0044:
	{
		String_t* L_10 = Locale_GetText_m3520169047(NULL /*static, unused*/, _stringLiteral1590810976, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_11 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, X509Extension__ctor_m1474351312_RuntimeMethod_var);
	}

IL_0054:
	{
		X509Extension_t3173393653 * L_12 = ___extension0;
		NullCheck(L_12);
		String_t* L_13 = X509Extension_get_Oid_m4107042796(L_12, /*hidden argument*/NULL);
		__this->set_extnOid_0(L_13);
		X509Extension_t3173393653 * L_14 = ___extension0;
		NullCheck(L_14);
		bool L_15 = X509Extension_get_Critical_m171054662(L_14, /*hidden argument*/NULL);
		__this->set_extnCritical_1(L_15);
		X509Extension_t3173393653 * L_16 = ___extension0;
		NullCheck(L_16);
		ASN1_t2114160833 * L_17 = X509Extension_get_Value_m896831716(L_16, /*hidden argument*/NULL);
		__this->set_extnValue_2(L_17);
		VirtActionInvoker0::Invoke(4 /* System.Void Mono.Security.X509.X509Extension::Decode() */, __this);
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C" IL2CPP_METHOD_ATTR void X509Extension_Decode_m3172373814 (X509Extension_t3173393653 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::Encode()
extern "C" IL2CPP_METHOD_ATTR void X509Extension_Encode_m3152909591 (X509Extension_t3173393653 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_ASN1()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * X509Extension_get_ASN1_m1064344075 (X509Extension_t3173393653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_get_ASN1_m1064344075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2114160833 * V_0 = NULL;
	{
		ASN1_t2114160833 * L_0 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_t2114160833 * L_1 = V_0;
		String_t* L_2 = __this->get_extnOid_0();
		ASN1_t2114160833 * L_3 = ASN1Convert_FromOid_m3844102704(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ASN1_Add_m3262603624(L_1, L_3, /*hidden argument*/NULL);
		bool L_4 = __this->get_extnCritical_1();
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		ASN1_t2114160833 * L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_t4116647657* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)255));
		ASN1_t2114160833 * L_8 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_8, (uint8_t)1, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		ASN1_Add_m3262603624(L_5, L_8, /*hidden argument*/NULL);
	}

IL_0040:
	{
		VirtActionInvoker0::Invoke(5 /* System.Void Mono.Security.X509.X509Extension::Encode() */, __this);
		ASN1_t2114160833 * L_9 = V_0;
		ASN1_t2114160833 * L_10 = __this->get_extnValue_2();
		NullCheck(L_9);
		ASN1_Add_m3262603624(L_9, L_10, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_11 = V_0;
		return L_11;
	}
}
// System.String Mono.Security.X509.X509Extension::get_Oid()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Extension_get_Oid_m4107042796 (X509Extension_t3173393653 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_extnOid_0();
		return L_0;
	}
}
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
extern "C" IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_m171054662 (X509Extension_t3173393653 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_extnCritical_1();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509Extension::set_Critical(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void X509Extension_set_Critical_m1057755976 (X509Extension_t3173393653 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_extnCritical_1(L_0);
		return;
	}
}
// System.String Mono.Security.X509.X509Extension::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Extension_get_Name_m4129189097 (X509Extension_t3173393653 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_extnOid_0();
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * X509Extension_get_Value_m896831716 (X509Extension_t3173393653 * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2114160833 * L_0 = __this->get_extnValue_2();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void Mono.Security.X509.X509Extension::Encode() */, __this);
	}

IL_0011:
	{
		ASN1_t2114160833 * L_1 = __this->get_extnValue_2();
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool X509Extension_Equals_m1779194186 (X509Extension_t3173393653 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_Equals_m1779194186_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_t3173393653 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((X509Extension_t3173393653 *)IsInstClass((RuntimeObject*)L_1, X509Extension_t3173393653_il2cpp_TypeInfo_var));
		X509Extension_t3173393653 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		bool L_3 = __this->get_extnCritical_1();
		X509Extension_t3173393653 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = L_4->get_extnCritical_1();
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		String_t* L_6 = __this->get_extnOid_0();
		X509Extension_t3173393653 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_extnOid_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0042:
	{
		ASN1_t2114160833 * L_10 = __this->get_extnValue_2();
		NullCheck(L_10);
		int32_t L_11 = ASN1_get_Length_m3581645253(L_10, /*hidden argument*/NULL);
		X509Extension_t3173393653 * L_12 = V_0;
		NullCheck(L_12);
		ASN1_t2114160833 * L_13 = L_12->get_extnValue_2();
		NullCheck(L_13);
		int32_t L_14 = ASN1_get_Length_m3581645253(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)L_14)))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_005f:
	{
		V_1 = 0;
		goto IL_0089;
	}

IL_0066:
	{
		ASN1_t2114160833 * L_15 = __this->get_extnValue_2();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		ASN1_t2114160833 * L_17 = ASN1_get_Item_m315148275(L_15, L_16, /*hidden argument*/NULL);
		X509Extension_t3173393653 * L_18 = V_0;
		NullCheck(L_18);
		ASN1_t2114160833 * L_19 = L_18->get_extnValue_2();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		ASN1_t2114160833 * L_21 = ASN1_get_Item_m315148275(L_19, L_20, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(ASN1_t2114160833 *)L_17) == ((RuntimeObject*)(ASN1_t2114160833 *)L_21)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0085:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_23 = V_1;
		ASN1_t2114160833 * L_24 = __this->get_extnValue_2();
		NullCheck(L_24);
		int32_t L_25 = ASN1_get_Length_m3581645253(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0066;
		}
	}
	{
		return (bool)1;
	}
}
// System.Byte[] Mono.Security.X509.X509Extension::GetBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Extension_GetBytes_m3083683821 (X509Extension_t3173393653 * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2114160833 * L_0 = X509Extension_get_ASN1_m1064344075(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_0);
		return L_1;
	}
}
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t X509Extension_GetHashCode_m1797796679 (X509Extension_t3173393653 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_extnOid_0();
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m1906374149(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void X509Extension_WriteLine_m1662885247 (X509Extension_t3173393653 * __this, StringBuilder_t * ___sb0, int32_t ___n1, int32_t ___pos2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_WriteLine_m1662885247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		ASN1_t2114160833 * L_0 = __this->get_extnValue_2();
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = ASN1_get_Value_m3619295991(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___pos2;
		V_1 = L_2;
		V_2 = 0;
		goto IL_005e;
	}

IL_0015:
	{
		int32_t L_3 = V_2;
		int32_t L_4 = ___n1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_004e;
		}
	}
	{
		StringBuilder_t * L_5 = ___sb0;
		ByteU5BU5D_t4116647657* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		NullCheck(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_9 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_10 = Byte_ToString_m4063101981((uint8_t*)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), _stringLiteral3451435000, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_Append_m1965104174(L_5, L_10, /*hidden argument*/NULL);
		StringBuilder_t * L_11 = ___sb0;
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, _stringLiteral3452614528, /*hidden argument*/NULL);
		goto IL_005a;
	}

IL_004e:
	{
		StringBuilder_t * L_12 = ___sb0;
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3786055882, /*hidden argument*/NULL);
	}

IL_005a:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)8)))
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t * L_15 = ___sb0;
		NullCheck(L_15);
		StringBuilder_Append_m1965104174(L_15, _stringLiteral3450517376, /*hidden argument*/NULL);
		int32_t L_16 = ___pos2;
		V_1 = L_16;
		V_3 = 0;
		goto IL_00af;
	}

IL_007a:
	{
		ByteU5BU5D_t4116647657* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		NullCheck(L_17);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = L_21;
		uint8_t L_22 = V_4;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)32))))
		{
			goto IL_009d;
		}
	}
	{
		StringBuilder_t * L_23 = ___sb0;
		NullCheck(L_23);
		StringBuilder_Append_m1965104174(L_23, _stringLiteral3452614530, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_009d:
	{
		StringBuilder_t * L_24 = ___sb0;
		uint8_t L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_26 = Convert_ToChar_m2532412511(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_m2383614642(L_24, L_26, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00af:
	{
		int32_t L_28 = V_3;
		int32_t L_29 = ___n1;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_007a;
		}
	}
	{
		StringBuilder_t * L_30 = ___sb0;
		String_t* L_31 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m1965104174(L_30, L_31, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Extension_ToString_m3727002866 (X509Extension_t3173393653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_ToString_m3727002866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_t2114160833 * L_1 = __this->get_extnValue_2();
		NullCheck(L_1);
		int32_t L_2 = ASN1_get_Length_m3581645253(L_1, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_2>>(int32_t)3));
		ASN1_t2114160833 * L_3 = __this->get_extnValue_2();
		NullCheck(L_3);
		int32_t L_4 = ASN1_get_Length_m3581645253(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)((int32_t)L_5<<(int32_t)3))));
		V_3 = 0;
		V_4 = 0;
		goto IL_0041;
	}

IL_002e:
	{
		StringBuilder_t * L_6 = V_0;
		int32_t L_7 = V_3;
		X509Extension_WriteLine_m1662885247(__this, L_6, 8, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)8));
		int32_t L_9 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_10 = V_4;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_002e;
		}
	}
	{
		StringBuilder_t * L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		X509Extension_WriteLine_m1662885247(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = StringBuilder_ToString_m3317489284(L_15, /*hidden argument*/NULL);
		return L_16;
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
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_m2474799343 (X509ExtensionCollection_t609554709 * __this, const RuntimeMethod* method)
{
	{
		CollectionBase__ctor_m3343513710(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_m551870633 (X509ExtensionCollection_t609554709 * __this, ASN1_t2114160833 * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection__ctor_m551870633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	X509Extension_t3173393653 * V_1 = NULL;
	{
		X509ExtensionCollection__ctor_m2474799343(__this, /*hidden argument*/NULL);
		__this->set_readOnly_1((bool)1);
		ASN1_t2114160833 * L_0 = ___asn10;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		ASN1_t2114160833 * L_1 = ___asn10;
		NullCheck(L_1);
		uint8_t L_2 = ASN1_get_Tag_m1863840805(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)48))))
		{
			goto IL_002c;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_3, _stringLiteral632220839, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, X509ExtensionCollection__ctor_m551870633_RuntimeMethod_var);
	}

IL_002c:
	{
		V_0 = 0;
		goto IL_0051;
	}

IL_0033:
	{
		ASN1_t2114160833 * L_4 = ___asn10;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ASN1_t2114160833 * L_6 = ASN1_get_Item_m315148275(L_4, L_5, /*hidden argument*/NULL);
		X509Extension_t3173393653 * L_7 = (X509Extension_t3173393653 *)il2cpp_codegen_object_new(X509Extension_t3173393653_il2cpp_TypeInfo_var);
		X509Extension__ctor_m710637961(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		ArrayList_t2718874744 * L_8 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		X509Extension_t3173393653 * L_9 = V_1;
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_0;
		ASN1_t2114160833 * L_12 = ___asn10;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m3039939183(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m1475785462 (X509ExtensionCollection_t609554709 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Int32 Mono.Security.X509.X509ExtensionCollection::Add(Mono.Security.X509.X509Extension)
extern "C" IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_Add_m2251235768 (X509ExtensionCollection_t609554709 * __this, X509Extension_t3173393653 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_Add_m2251235768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension_t3173393653 * L_0 = ___extension0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1610623306, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509ExtensionCollection_Add_m2251235768_RuntimeMethod_var);
	}

IL_0011:
	{
		bool L_2 = __this->get_readOnly_1();
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		NotSupportedException_t1314879016 * L_3 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_3, _stringLiteral1609817887, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, X509ExtensionCollection_Add_m2251235768_RuntimeMethod_var);
	}

IL_0027:
	{
		ArrayList_t2718874744 * L_4 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		X509Extension_t3173393653 * L_5 = ___extension0;
		NullCheck(L_4);
		int32_t L_6 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_5);
		return L_6;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::AddRange(Mono.Security.X509.X509Extension[])
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection_AddRange_m3305410105 (X509ExtensionCollection_t609554709 * __this, X509ExtensionU5BU5D_t3108766909* ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_AddRange_m3305410105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		X509ExtensionU5BU5D_t3108766909* L_0 = ___extension0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1610623306, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509ExtensionCollection_AddRange_m3305410105_RuntimeMethod_var);
	}

IL_0011:
	{
		bool L_2 = __this->get_readOnly_1();
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		NotSupportedException_t1314879016 * L_3 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_3, _stringLiteral1609817887, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, X509ExtensionCollection_AddRange_m3305410105_RuntimeMethod_var);
	}

IL_0027:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_002e:
	{
		ArrayList_t2718874744 * L_4 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		X509ExtensionU5BU5D_t3108766909* L_5 = ___extension0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		X509Extension_t3173393653 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_10 = V_0;
		X509ExtensionU5BU5D_t3108766909* L_11 = ___extension0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::AddRange(Mono.Security.X509.X509ExtensionCollection)
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection_AddRange_m1104225129 (X509ExtensionCollection_t609554709 * __this, X509ExtensionCollection_t609554709 * ___collection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_AddRange_m1104225129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		X509ExtensionCollection_t609554709 * L_0 = ___collection0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3723644332, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509ExtensionCollection_AddRange_m1104225129_RuntimeMethod_var);
	}

IL_0011:
	{
		bool L_2 = __this->get_readOnly_1();
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		NotSupportedException_t1314879016 * L_3 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_3, _stringLiteral1609817887, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, X509ExtensionCollection_AddRange_m1104225129_RuntimeMethod_var);
	}

IL_0027:
	{
		V_0 = 0;
		goto IL_0045;
	}

IL_002e:
	{
		ArrayList_t2718874744 * L_4 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		X509ExtensionCollection_t609554709 * L_5 = ___collection0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		X509Extension_t3173393653 * L_7 = X509ExtensionCollection_get_Item_m2771335836(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_9 = V_0;
		X509ExtensionCollection_t609554709 * L_10 = ___collection0;
		NullCheck(L_10);
		ArrayList_t2718874744 * L_11 = CollectionBase_get_InnerList_m132195395(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		if ((((int32_t)L_9) < ((int32_t)L_12)))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}
}
// System.Boolean Mono.Security.X509.X509ExtensionCollection::Contains(Mono.Security.X509.X509Extension)
extern "C" IL2CPP_METHOD_ATTR bool X509ExtensionCollection_Contains_m2820978563 (X509ExtensionCollection_t609554709 * __this, X509Extension_t3173393653 * ___extension0, const RuntimeMethod* method)
{
	{
		X509Extension_t3173393653 * L_0 = ___extension0;
		int32_t L_1 = X509ExtensionCollection_IndexOf_m2606992261(__this, L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mono.Security.X509.X509ExtensionCollection::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool X509ExtensionCollection_Contains_m922133374 (X509ExtensionCollection_t609554709 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___oid0;
		int32_t L_1 = X509ExtensionCollection_IndexOf_m2996504451(__this, L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::CopyTo(Mono.Security.X509.X509Extension[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection_CopyTo_m3181643769 (X509ExtensionCollection_t609554709 * __this, X509ExtensionU5BU5D_t3108766909* ___extensions0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_CopyTo_m3181643769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509ExtensionU5BU5D_t3108766909* L_0 = ___extensions0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1607280970, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509ExtensionCollection_CopyTo_m3181643769_RuntimeMethod_var);
	}

IL_0011:
	{
		ArrayList_t2718874744 * L_2 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		X509ExtensionU5BU5D_t3108766909* L_3 = ___extensions0;
		int32_t L_4 = ___index1;
		NullCheck(L_2);
		VirtActionInvoker2< RuntimeArray *, int32_t >::Invoke(41 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_2, (RuntimeArray *)(RuntimeArray *)L_3, L_4);
		return;
	}
}
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(Mono.Security.X509.X509Extension)
extern "C" IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_IndexOf_m2606992261 (X509ExtensionCollection_t609554709 * __this, X509Extension_t3173393653 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_IndexOf_m2606992261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	X509Extension_t3173393653 * V_1 = NULL;
	{
		X509Extension_t3173393653 * L_0 = ___extension0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1610623306, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509ExtensionCollection_IndexOf_m2606992261_RuntimeMethod_var);
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0018:
	{
		ArrayList_t2718874744 * L_2 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_4 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_1 = ((X509Extension_t3173393653 *)CastclassClass((RuntimeObject*)L_4, X509Extension_t3173393653_il2cpp_TypeInfo_var));
		X509Extension_t3173393653 * L_5 = V_1;
		X509Extension_t3173393653 * L_6 = ___extension0;
		NullCheck(L_5);
		bool L_7 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object) */, L_5, L_6);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_0038:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		ArrayList_t2718874744 * L_11 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0018;
		}
	}
	{
		return (-1);
	}
}
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_IndexOf_m2996504451 (X509ExtensionCollection_t609554709 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_IndexOf_m2996504451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	X509Extension_t3173393653 * V_1 = NULL;
	{
		String_t* L_0 = ___oid0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3266464951, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509ExtensionCollection_IndexOf_m2996504451_RuntimeMethod_var);
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0018:
	{
		ArrayList_t2718874744 * L_2 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_4 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_1 = ((X509Extension_t3173393653 *)CastclassClass((RuntimeObject*)L_4, X509Extension_t3173393653_il2cpp_TypeInfo_var));
		X509Extension_t3173393653 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = X509Extension_get_Oid_m4107042796(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___oid0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_003d:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		ArrayList_t2718874744 * L_12 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		return (-1);
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::Insert(System.Int32,Mono.Security.X509.X509Extension)
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection_Insert_m873879632 (X509ExtensionCollection_t609554709 * __this, int32_t ___index0, X509Extension_t3173393653 * ___extension1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_Insert_m873879632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension_t3173393653 * L_0 = ___extension1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1610623306, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509ExtensionCollection_Insert_m873879632_RuntimeMethod_var);
	}

IL_0011:
	{
		ArrayList_t2718874744 * L_2 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___index0;
		X509Extension_t3173393653 * L_4 = ___extension1;
		NullCheck(L_2);
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(36 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::Remove(Mono.Security.X509.X509Extension)
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection_Remove_m2342091090 (X509ExtensionCollection_t609554709 * __this, X509Extension_t3173393653 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_Remove_m2342091090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension_t3173393653 * L_0 = ___extension0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1610623306, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509ExtensionCollection_Remove_m2342091090_RuntimeMethod_var);
	}

IL_0011:
	{
		ArrayList_t2718874744 * L_2 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		X509Extension_t3173393653 * L_3 = ___extension0;
		NullCheck(L_2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(38 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_2, L_3);
		return;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::Remove(System.String)
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection_Remove_m2521723919 (X509ExtensionCollection_t609554709 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_Remove_m2521723919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___oid0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3266464951, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509ExtensionCollection_Remove_m2521723919_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___oid0;
		int32_t L_3 = X509ExtensionCollection_IndexOf_m2996504451(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002c;
		}
	}
	{
		ArrayList_t2718874744 * L_5 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_5, L_6);
	}

IL_002c:
	{
		return;
	}
}
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR X509Extension_t3173393653 * X509ExtensionCollection_get_Item_m2771335836 (X509ExtensionCollection_t609554709 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_get_Item_m2771335836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((X509Extension_t3173393653 *)CastclassClass((RuntimeObject*)L_2, X509Extension_t3173393653_il2cpp_TypeInfo_var));
	}
}
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Extension_t3173393653 * X509ExtensionCollection_get_Item_m2761897938 (X509ExtensionCollection_t609554709 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_get_Item_m2761897938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___oid0;
		int32_t L_1 = X509ExtensionCollection_IndexOf_m2996504451(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return (X509Extension_t3173393653 *)NULL;
	}

IL_0011:
	{
		ArrayList_t2718874744 * L_3 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		return ((X509Extension_t3173393653 *)CastclassClass((RuntimeObject*)L_5, X509Extension_t3173393653_il2cpp_TypeInfo_var));
	}
}
// System.Byte[] Mono.Security.X509.X509ExtensionCollection::GetBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509ExtensionCollection_GetBytes_m1622025118 (X509ExtensionCollection_t609554709 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_GetBytes_m1622025118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2114160833 * V_0 = NULL;
	int32_t V_1 = 0;
	X509Extension_t3173393653 * V_2 = NULL;
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		if ((((int32_t)L_1) >= ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0013:
	{
		ASN1_t2114160833 * L_2 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_2, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0045;
	}

IL_0022:
	{
		ArrayList_t2718874744 * L_3 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_2 = ((X509Extension_t3173393653 *)CastclassClass((RuntimeObject*)L_5, X509Extension_t3173393653_il2cpp_TypeInfo_var));
		ASN1_t2114160833 * L_6 = V_0;
		X509Extension_t3173393653 * L_7 = V_2;
		NullCheck(L_7);
		ASN1_t2114160833 * L_8 = X509Extension_get_ASN1_m1064344075(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ASN1_Add_m3262603624(L_6, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_10 = V_1;
		ArrayList_t2718874744 * L_11 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0022;
		}
	}
	{
		ASN1_t2114160833 * L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_t4116647657* L_14 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_13);
		return L_14;
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
// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void X509Store__ctor_m2736551756 (X509Store_t2777415284 * __this, String_t* ___path0, bool ___crl1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path0;
		__this->set__storePath_0(L_0);
		bool L_1 = ___crl1;
		__this->set__crl_3(L_1);
		return;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t1542168550 * X509Store_get_Certificates_m56224934 (X509Store_t2777415284 * __this, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t1542168550 * L_0 = __this->get__certificates_1();
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		X509CertificateCollection_t1542168550 * L_2 = X509Store_BuildCertificatesCollection_m3030935583(__this, L_1, /*hidden argument*/NULL);
		__this->set__certificates_1(L_2);
	}

IL_001d:
	{
		X509CertificateCollection_t1542168550 * L_3 = __this->get__certificates_1();
		return L_3;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * X509Store_get_Crls_m4075976598 (X509Store_t2777415284 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_get_Crls_m4075976598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__crl_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t2718874744 * L_1 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_1, /*hidden argument*/NULL);
		__this->set__crls_2(L_1);
	}

IL_0016:
	{
		ArrayList_t2718874744 * L_2 = __this->get__crls_2();
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_3 = __this->get__storePath_0();
		ArrayList_t2718874744 * L_4 = X509Store_BuildCrlsCollection_m1991312527(__this, L_3, /*hidden argument*/NULL);
		__this->set__crls_2(L_4);
	}

IL_0033:
	{
		ArrayList_t2718874744 * L_5 = __this->get__crls_2();
		return L_5;
	}
}
// System.String Mono.Security.X509.X509Store::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Store_get_Name_m597920689 (X509Store_t2777415284 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_get_Name_m597920689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = __this->get__name_4();
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = ((Path_t1605229823_StaticFields*)il2cpp_codegen_static_fields_for(Path_t1605229823_il2cpp_TypeInfo_var))->get_DirectorySeparatorChar_2();
		NullCheck(L_1);
		int32_t L_3 = String_LastIndexOf_m3451222878(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = __this->get__storePath_0();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6 = String_Substring_m2848979100(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		__this->set__name_4(L_6);
	}

IL_0030:
	{
		String_t* L_7 = __this->get__name_4();
		return L_7;
	}
}
// System.Void Mono.Security.X509.X509Store::Clear()
extern "C" IL2CPP_METHOD_ATTR void X509Store_Clear_m2126432876 (X509Store_t2777415284 * __this, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t1542168550 * L_0 = __this->get__certificates_1();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		X509CertificateCollection_t1542168550 * L_1 = __this->get__certificates_1();
		NullCheck(L_1);
		CollectionBase_Clear_m1509125218(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		__this->set__certificates_1((X509CertificateCollection_t1542168550 *)NULL);
		ArrayList_t2718874744 * L_2 = __this->get__crls_2();
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		ArrayList_t2718874744 * L_3 = __this->get__crls_2();
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_3);
	}

IL_0033:
	{
		__this->set__crls_2((ArrayList_t2718874744 *)NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509Store::Import(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR void X509Store_Import_m319598108 (X509Store_t2777415284 * __this, X509Certificate_t489243025 * ___certificate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_Import_m319598108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	FileStream_t4292183065 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get__storePath_0();
		X509Store_CheckStore_m2045435685(__this, L_0, (bool)1, /*hidden argument*/NULL);
		String_t* L_1 = __this->get__storePath_0();
		X509Certificate_t489243025 * L_2 = ___certificate0;
		String_t* L_3 = X509Store_GetUniqueName_m4271638378(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		bool L_6 = File_Exists_m3943585060(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_7 = V_0;
		FileStream_t4292183065 * L_8 = File_Create_m2207667142(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		X509Certificate_t489243025 * L_9 = ___certificate0;
		NullCheck(L_9);
		ByteU5BU5D_t4116647657* L_10 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_9);
		V_2 = L_10;
		FileStream_t4292183065 * L_11 = V_1;
		ByteU5BU5D_t4116647657* L_12 = V_2;
		ByteU5BU5D_t4116647657* L_13 = V_2;
		NullCheck(L_13);
		NullCheck(L_11);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.FileStream::Write(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))));
		FileStream_t4292183065 * L_14 = V_1;
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_14);
		IL2CPP_LEAVE(0x5D, FINALLY_0050);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			FileStream_t4292183065 * L_15 = V_1;
			if (!L_15)
			{
				goto IL_005c;
			}
		}

IL_0056:
		{
			FileStream_t4292183065 * L_16 = V_1;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_16);
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Store::Import(Mono.Security.X509.X509Crl)
extern "C" IL2CPP_METHOD_ATTR void X509Store_Import_m1052667485 (X509Store_t2777415284 * __this, X509Crl_t1148767388 * ___crl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_Import_m1052667485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	FileStream_t4292183065 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get__storePath_0();
		X509Store_CheckStore_m2045435685(__this, L_0, (bool)1, /*hidden argument*/NULL);
		String_t* L_1 = __this->get__storePath_0();
		X509Crl_t1148767388 * L_2 = ___crl0;
		String_t* L_3 = X509Store_GetUniqueName_m3285060726(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		bool L_6 = File_Exists_m3943585060(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_7 = V_0;
		FileStream_t4292183065 * L_8 = File_Create_m2207667142(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		X509Crl_t1148767388 * L_9 = ___crl0;
		NullCheck(L_9);
		ByteU5BU5D_t4116647657* L_10 = X509Crl_get_RawData_m3623997699(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		FileStream_t4292183065 * L_11 = V_1;
		ByteU5BU5D_t4116647657* L_12 = V_2;
		ByteU5BU5D_t4116647657* L_13 = V_2;
		NullCheck(L_13);
		NullCheck(L_11);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.FileStream::Write(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))));
		IL2CPP_LEAVE(0x57, FINALLY_004a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		{
			FileStream_t4292183065 * L_14 = V_1;
			if (!L_14)
			{
				goto IL_0056;
			}
		}

IL_0050:
		{
			FileStream_t4292183065 * L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_15);
		}

IL_0056:
		{
			IL2CPP_END_FINALLY(74)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Store::Remove(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR void X509Store_Remove_m2429424682 (X509Store_t2777415284 * __this, X509Certificate_t489243025 * ___certificate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_Remove_m2429424682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get__storePath_0();
		X509Certificate_t489243025 * L_1 = ___certificate0;
		String_t* L_2 = X509Store_GetUniqueName_m4271638378(__this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m3389272516(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		bool L_5 = File_Exists_m3943585060(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_6 = V_0;
		File_Delete_m321251800(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Store::Remove(Mono.Security.X509.X509Crl)
extern "C" IL2CPP_METHOD_ATTR void X509Store_Remove_m1800501587 (X509Store_t2777415284 * __this, X509Crl_t1148767388 * ___crl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_Remove_m1800501587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get__storePath_0();
		X509Crl_t1148767388 * L_1 = ___crl0;
		String_t* L_2 = X509Store_GetUniqueName_m3285060726(__this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m3389272516(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		bool L_5 = File_Exists_m3943585060(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_6 = V_0;
		File_Delete_m321251800(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.String Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueName_m4271638378 (X509Store_t2777415284 * __this, X509Certificate_t489243025 * ___certificate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_GetUniqueName_m4271638378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		X509Certificate_t489243025 * L_0 = ___certificate0;
		NullCheck(L_0);
		X509ExtensionCollection_t609554709 * L_1 = X509Certificate_get_Extensions_m1217872579(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = X509Store_GetUniqueName_m132964055(__this, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		ByteU5BU5D_t4116647657* L_3 = V_1;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_0 = _stringLiteral227815590;
		X509Certificate_t489243025 * L_4 = ___certificate0;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = X509Certificate_get_Hash_m410033711(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_002b;
	}

IL_0025:
	{
		V_0 = _stringLiteral3313388058;
	}

IL_002b:
	{
		String_t* L_6 = V_0;
		ByteU5BU5D_t4116647657* L_7 = V_1;
		String_t* L_8 = X509Store_GetUniqueName_m915074968(__this, L_6, L_7, _stringLiteral1903542547, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509Crl)
extern "C" IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueName_m3285060726 (X509Store_t2777415284 * __this, X509Crl_t1148767388 * ___crl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_GetUniqueName_m3285060726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		X509Crl_t1148767388 * L_0 = ___crl0;
		NullCheck(L_0);
		X509ExtensionCollection_t609554709 * L_1 = X509Crl_get_Extensions_m2708052985(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = X509Store_GetUniqueName_m132964055(__this, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		ByteU5BU5D_t4116647657* L_3 = V_1;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_0 = _stringLiteral227815590;
		X509Crl_t1148767388 * L_4 = ___crl0;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = X509Crl_get_Hash_m464217067(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_002b;
	}

IL_0025:
	{
		V_0 = _stringLiteral3313388058;
	}

IL_002b:
	{
		String_t* L_6 = V_0;
		ByteU5BU5D_t4116647657* L_7 = V_1;
		String_t* L_8 = X509Store_GetUniqueName_m915074968(__this, L_6, L_7, _stringLiteral3977648530, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Byte[] Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509ExtensionCollection)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Store_GetUniqueName_m132964055 (X509Store_t2777415284 * __this, X509ExtensionCollection_t609554709 * ___extensions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_GetUniqueName_m132964055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_t3173393653 * V_0 = NULL;
	SubjectKeyIdentifierExtension_t2404375272 * V_1 = NULL;
	{
		X509ExtensionCollection_t609554709 * L_0 = ___extensions0;
		NullCheck(L_0);
		X509Extension_t3173393653 * L_1 = X509ExtensionCollection_get_Item_m2761897938(L_0, _stringLiteral1004423983, /*hidden argument*/NULL);
		V_0 = L_1;
		X509Extension_t3173393653 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0014:
	{
		X509Extension_t3173393653 * L_3 = V_0;
		SubjectKeyIdentifierExtension_t2404375272 * L_4 = (SubjectKeyIdentifierExtension_t2404375272 *)il2cpp_codegen_object_new(SubjectKeyIdentifierExtension_t2404375272_il2cpp_TypeInfo_var);
		SubjectKeyIdentifierExtension__ctor_m2055470965(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		SubjectKeyIdentifierExtension_t2404375272 * L_5 = V_1;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_6 = SubjectKeyIdentifierExtension_get_Identifier_m3780825379(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String Mono.Security.X509.X509Store::GetUniqueName(System.String,System.Byte[],System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueName_m915074968 (X509Store_t2777415284 * __this, String_t* ___method0, ByteU5BU5D_t4116647657* ___name1, String_t* ___fileExtension2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_GetUniqueName_m915074968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___method0;
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringBuilder_t * L_2 = V_0;
		NullCheck(L_2);
		StringBuilder_Append_m1965104174(L_2, _stringLiteral3452614531, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_3 = ___name1;
		V_2 = L_3;
		V_3 = 0;
		goto IL_003c;
	}

IL_001c:
	{
		ByteU5BU5D_t4116647657* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		StringBuilder_t * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_9 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_10 = Byte_ToString_m4063101981((uint8_t*)(&V_1), _stringLiteral3451435000, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_Append_m1965104174(L_8, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_12 = V_3;
		ByteU5BU5D_t4116647657* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_14 = V_0;
		String_t* L_15 = ___fileExtension2;
		NullCheck(L_14);
		StringBuilder_Append_m1965104174(L_14, L_15, /*hidden argument*/NULL);
		StringBuilder_t * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = StringBuilder_ToString_m3317489284(L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* X509Store_Load_m2048139132 (X509Store_t2777415284 * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_Load_m2048139132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	FileStream_t4292183065 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (ByteU5BU5D_t4116647657*)NULL;
		String_t* L_0 = ___filename0;
		FileStream_t4292183065 * L_1 = File_OpenRead_m2936789020(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		FileStream_t4292183065 * L_2 = V_1;
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.FileStream::get_Length() */, L_2);
		if ((int64_t)(L_3) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, X509Store_Load_m2048139132_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_3)));
		V_0 = L_4;
		FileStream_t4292183065 * L_5 = V_1;
		ByteU5BU5D_t4116647657* L_6 = V_0;
		ByteU5BU5D_t4116647657* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))));
		FileStream_t4292183065 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_8);
		IL2CPP_LEAVE(0x3A, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			FileStream_t4292183065 * L_9 = V_1;
			if (!L_9)
			{
				goto IL_0039;
			}
		}

IL_0033:
		{
			FileStream_t4292183065 * L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_10);
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003a:
	{
		ByteU5BU5D_t4116647657* L_11 = V_0;
		return L_11;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t489243025 * X509Store_LoadCertificate_m1587806288 (X509Store_t2777415284 * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_LoadCertificate_m1587806288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	X509Certificate_t489243025 * V_1 = NULL;
	{
		String_t* L_0 = ___filename0;
		ByteU5BU5D_t4116647657* L_1 = X509Store_Load_m2048139132(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t4116647657* L_2 = V_0;
		X509Certificate_t489243025 * L_3 = (X509Certificate_t489243025 *)il2cpp_codegen_object_new(X509Certificate_t489243025_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m2595927506(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		X509Certificate_t489243025 * L_4 = V_1;
		return L_4;
	}
}
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Crl_t1148767388 * X509Store_LoadCrl_m1881903843 (X509Store_t2777415284 * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_LoadCrl_m1881903843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	X509Crl_t1148767388 * V_1 = NULL;
	{
		String_t* L_0 = ___filename0;
		ByteU5BU5D_t4116647657* L_1 = X509Store_Load_m2048139132(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t4116647657* L_2 = V_0;
		X509Crl_t1148767388 * L_3 = (X509Crl_t1148767388 *)il2cpp_codegen_object_new(X509Crl_t1148767388_il2cpp_TypeInfo_var);
		X509Crl__ctor_m1817187405(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		X509Crl_t1148767388 * L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool X509Store_CheckStore_m2045435685 (X509Store_t2777415284 * __this, String_t* ___path0, bool ___throwException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_CheckStore_m2045435685_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___path0;
			bool L_1 = Directory_Exists_m1484791558(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000b:
		{
			V_0 = (bool)1;
			goto IL_003f;
		}

IL_0012:
		{
			String_t* L_2 = ___path0;
			Directory_CreateDirectory_m751642867(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			String_t* L_3 = ___path0;
			bool L_4 = Directory_Exists_m1484791558(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			goto IL_003f;
		}

IL_0025:
		{
			; // IL_0025: leave IL_003f
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Object)
		{
			bool L_5 = ___throwException1;
			if (!L_5)
			{
				goto IL_0033;
			}
		}

IL_0031:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, X509Store_CheckStore_m2045435685_RuntimeMethod_var);
		}

IL_0033:
		{
			V_0 = (bool)0;
			goto IL_003f;
		}

IL_003a:
		{
			; // IL_003a: leave IL_003f
		}
	} // end catch (depth: 1)

IL_003f:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t1542168550 * X509Store_BuildCertificatesCollection_m3030935583 (X509Store_t2777415284 * __this, String_t* ___storeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_BuildCertificatesCollection_m3030935583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509CertificateCollection_t1542168550 * V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t1281789340* V_2 = NULL;
	String_t* V_3 = NULL;
	StringU5BU5D_t1281789340* V_4 = NULL;
	int32_t V_5 = 0;
	X509Certificate_t489243025 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509CertificateCollection_t1542168550 * L_0 = (X509CertificateCollection_t1542168550 *)il2cpp_codegen_object_new(X509CertificateCollection_t1542168550_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2066277891(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = __this->get__storePath_0();
		String_t* L_2 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		bool L_5 = X509Store_CheckStore_m2045435685(__this, L_4, (bool)0, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		X509CertificateCollection_t1542168550 * L_6 = V_0;
		return L_6;
	}

IL_0022:
	{
		String_t* L_7 = V_1;
		StringU5BU5D_t1281789340* L_8 = Directory_GetFiles_m2624572368(NULL /*static, unused*/, L_7, _stringLiteral2225310117, /*hidden argument*/NULL);
		V_2 = L_8;
		StringU5BU5D_t1281789340* L_9 = V_2;
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t1281789340* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t1281789340* L_11 = V_2;
		V_4 = L_11;
		V_5 = 0;
		goto IL_0071;
	}

IL_0048:
	{
		StringU5BU5D_t1281789340* L_12 = V_4;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		String_t* L_16 = V_3;
		X509Certificate_t489243025 * L_17 = X509Store_LoadCertificate_m1587806288(__this, L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		X509CertificateCollection_t1542168550 * L_18 = V_0;
		X509Certificate_t489243025 * L_19 = V_6;
		NullCheck(L_18);
		X509CertificateCollection_Add_m2277657976(L_18, L_19, /*hidden argument*/NULL);
		goto IL_006b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Object)
		goto IL_006b;
	} // end catch (depth: 1)

IL_006b:
	{
		int32_t L_20 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0071:
	{
		int32_t L_21 = V_5;
		StringU5BU5D_t1281789340* L_22 = V_4;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0048;
		}
	}

IL_007c:
	{
		X509CertificateCollection_t1542168550 * L_23 = V_0;
		return L_23;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * X509Store_BuildCrlsCollection_m1991312527 (X509Store_t2777415284 * __this, String_t* ___storeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_BuildCrlsCollection_m1991312527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t2718874744 * V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t1281789340* V_2 = NULL;
	String_t* V_3 = NULL;
	StringU5BU5D_t1281789340* V_4 = NULL;
	int32_t V_5 = 0;
	X509Crl_t1148767388 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = __this->get__storePath_0();
		String_t* L_2 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		bool L_5 = X509Store_CheckStore_m2045435685(__this, L_4, (bool)0, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArrayList_t2718874744 * L_6 = V_0;
		return L_6;
	}

IL_0022:
	{
		String_t* L_7 = V_1;
		StringU5BU5D_t1281789340* L_8 = Directory_GetFiles_m2624572368(NULL /*static, unused*/, L_7, _stringLiteral3710028195, /*hidden argument*/NULL);
		V_2 = L_8;
		StringU5BU5D_t1281789340* L_9 = V_2;
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t1281789340* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t1281789340* L_11 = V_2;
		V_4 = L_11;
		V_5 = 0;
		goto IL_0071;
	}

IL_0048:
	{
		StringU5BU5D_t1281789340* L_12 = V_4;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		String_t* L_16 = V_3;
		X509Crl_t1148767388 * L_17 = X509Store_LoadCrl_m1881903843(__this, L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		ArrayList_t2718874744 * L_18 = V_0;
		X509Crl_t1148767388 * L_19 = V_6;
		NullCheck(L_18);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_18, L_19);
		goto IL_006b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Object)
		goto IL_006b;
	} // end catch (depth: 1)

IL_006b:
	{
		int32_t L_20 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0071:
	{
		int32_t L_21 = V_5;
		StringU5BU5D_t1281789340* L_22 = V_4;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0048;
		}
	}

IL_007c:
	{
		ArrayList_t2718874744 * L_23 = V_0;
		return L_23;
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
// System.Void Mono.Security.X509.X509StoreManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509StoreManager__ctor_m58959084 (X509StoreManager_t1046782376 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
extern "C" IL2CPP_METHOD_ATTR X509Stores_t1373936238 * X509StoreManager_get_CurrentUser_m4040993045 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_CurrentUser_m4040993045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Stores_t1373936238 * L_0 = ((X509StoreManager_t1046782376_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_t1046782376_il2cpp_TypeInfo_var))->get__userStore_0();
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_1 = Environment_GetFolderPath_m327623990(NULL /*static, unused*/, ((int32_t)26), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, _stringLiteral3525949144, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		String_t* L_4 = Path_Combine_m3389272516(NULL /*static, unused*/, L_3, _stringLiteral9622098, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		X509Stores_t1373936238 * L_6 = (X509Stores_t1373936238 *)il2cpp_codegen_object_new(X509Stores_t1373936238_il2cpp_TypeInfo_var);
		X509Stores__ctor_m1786355972(L_6, L_5, /*hidden argument*/NULL);
		((X509StoreManager_t1046782376_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_t1046782376_il2cpp_TypeInfo_var))->set__userStore_0(L_6);
	}

IL_0033:
	{
		X509Stores_t1373936238 * L_7 = ((X509StoreManager_t1046782376_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_t1046782376_il2cpp_TypeInfo_var))->get__userStore_0();
		return L_7;
	}
}
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
extern "C" IL2CPP_METHOD_ATTR X509Stores_t1373936238 * X509StoreManager_get_LocalMachine_m3994689999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_LocalMachine_m3994689999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Stores_t1373936238 * L_0 = ((X509StoreManager_t1046782376_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_t1046782376_il2cpp_TypeInfo_var))->get__machineStore_1();
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_1 = Environment_GetFolderPath_m327623990(NULL /*static, unused*/, ((int32_t)35), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, _stringLiteral3525949144, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		String_t* L_4 = Path_Combine_m3389272516(NULL /*static, unused*/, L_3, _stringLiteral9622098, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		X509Stores_t1373936238 * L_6 = (X509Stores_t1373936238 *)il2cpp_codegen_object_new(X509Stores_t1373936238_il2cpp_TypeInfo_var);
		X509Stores__ctor_m1786355972(L_6, L_5, /*hidden argument*/NULL);
		((X509StoreManager_t1046782376_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_t1046782376_il2cpp_TypeInfo_var))->set__machineStore_1(L_6);
	}

IL_0033:
	{
		X509Stores_t1373936238 * L_7 = ((X509StoreManager_t1046782376_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_t1046782376_il2cpp_TypeInfo_var))->get__machineStore_1();
		return L_7;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_IntermediateCACertificates()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t1542168550 * X509StoreManager_get_IntermediateCACertificates_m1576610804 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_IntermediateCACertificates_m1576610804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509CertificateCollection_t1542168550 * V_0 = NULL;
	{
		X509CertificateCollection_t1542168550 * L_0 = (X509CertificateCollection_t1542168550 *)il2cpp_codegen_object_new(X509CertificateCollection_t1542168550_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2066277891(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		X509CertificateCollection_t1542168550 * L_1 = V_0;
		X509Stores_t1373936238 * L_2 = X509StoreManager_get_CurrentUser_m4040993045(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		X509Store_t2777415284 * L_3 = X509Stores_get_IntermediateCA_m1350619599(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509CertificateCollection_t1542168550 * L_4 = X509Store_get_Certificates_m56224934(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		X509CertificateCollection_AddRange_m2165814476(L_1, L_4, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_5 = V_0;
		X509Stores_t1373936238 * L_6 = X509StoreManager_get_LocalMachine_m3994689999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		X509Store_t2777415284 * L_7 = X509Stores_get_IntermediateCA_m1350619599(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		X509CertificateCollection_t1542168550 * L_8 = X509Store_get_Certificates_m56224934(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509CertificateCollection_AddRange_m2165814476(L_5, L_8, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509StoreManager::get_IntermediateCACrls()
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * X509StoreManager_get_IntermediateCACrls_m3919824182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_IntermediateCACrls_m3919824182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t2718874744 * V_0 = NULL;
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ArrayList_t2718874744 * L_1 = V_0;
		X509Stores_t1373936238 * L_2 = X509StoreManager_get_CurrentUser_m4040993045(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		X509Store_t2777415284 * L_3 = X509Stores_get_IntermediateCA_m1350619599(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayList_t2718874744 * L_4 = X509Store_get_Crls_m4075976598(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< RuntimeObject* >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_1, L_4);
		ArrayList_t2718874744 * L_5 = V_0;
		X509Stores_t1373936238 * L_6 = X509StoreManager_get_LocalMachine_m3994689999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		X509Store_t2777415284 * L_7 = X509Stores_get_IntermediateCA_m1350619599(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayList_t2718874744 * L_8 = X509Store_get_Crls_m4075976598(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< RuntimeObject* >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_5, L_8);
		ArrayList_t2718874744 * L_9 = V_0;
		return L_9;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t1542168550 * X509StoreManager_get_TrustedRootCertificates_m2180997293 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_TrustedRootCertificates_m2180997293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509CertificateCollection_t1542168550 * V_0 = NULL;
	{
		X509CertificateCollection_t1542168550 * L_0 = (X509CertificateCollection_t1542168550 *)il2cpp_codegen_object_new(X509CertificateCollection_t1542168550_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2066277891(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		X509CertificateCollection_t1542168550 * L_1 = V_0;
		X509Stores_t1373936238 * L_2 = X509StoreManager_get_CurrentUser_m4040993045(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		X509Store_t2777415284 * L_3 = X509Stores_get_TrustedRoot_m1736182879(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509CertificateCollection_t1542168550 * L_4 = X509Store_get_Certificates_m56224934(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		X509CertificateCollection_AddRange_m2165814476(L_1, L_4, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_5 = V_0;
		X509Stores_t1373936238 * L_6 = X509StoreManager_get_LocalMachine_m3994689999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		X509Store_t2777415284 * L_7 = X509Stores_get_TrustedRoot_m1736182879(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		X509CertificateCollection_t1542168550 * L_8 = X509Store_get_Certificates_m56224934(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509CertificateCollection_AddRange_m2165814476(L_5, L_8, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509StoreManager::get_TrustedRootCACrls()
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * X509StoreManager_get_TrustedRootCACrls_m2267763919 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_TrustedRootCACrls_m2267763919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t2718874744 * V_0 = NULL;
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ArrayList_t2718874744 * L_1 = V_0;
		X509Stores_t1373936238 * L_2 = X509StoreManager_get_CurrentUser_m4040993045(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		X509Store_t2777415284 * L_3 = X509Stores_get_TrustedRoot_m1736182879(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayList_t2718874744 * L_4 = X509Store_get_Crls_m4075976598(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< RuntimeObject* >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_1, L_4);
		ArrayList_t2718874744 * L_5 = V_0;
		X509Stores_t1373936238 * L_6 = X509StoreManager_get_LocalMachine_m3994689999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		X509Store_t2777415284 * L_7 = X509Stores_get_TrustedRoot_m1736182879(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayList_t2718874744 * L_8 = X509Store_get_Crls_m4075976598(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< RuntimeObject* >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_5, L_8);
		ArrayList_t2718874744 * L_9 = V_0;
		return L_9;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_UntrustedCertificates()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t1542168550 * X509StoreManager_get_UntrustedCertificates_m829127408 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_UntrustedCertificates_m829127408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509CertificateCollection_t1542168550 * V_0 = NULL;
	{
		X509CertificateCollection_t1542168550 * L_0 = (X509CertificateCollection_t1542168550 *)il2cpp_codegen_object_new(X509CertificateCollection_t1542168550_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2066277891(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		X509CertificateCollection_t1542168550 * L_1 = V_0;
		X509Stores_t1373936238 * L_2 = X509StoreManager_get_CurrentUser_m4040993045(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		X509Store_t2777415284 * L_3 = X509Stores_get_Untrusted_m1029989579(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509CertificateCollection_t1542168550 * L_4 = X509Store_get_Certificates_m56224934(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		X509CertificateCollection_AddRange_m2165814476(L_1, L_4, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_5 = V_0;
		X509Stores_t1373936238 * L_6 = X509StoreManager_get_LocalMachine_m3994689999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		X509Store_t2777415284 * L_7 = X509Stores_get_Untrusted_m1029989579(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		X509CertificateCollection_t1542168550 * L_8 = X509Store_get_Certificates_m56224934(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509CertificateCollection_AddRange_m2165814476(L_5, L_8, /*hidden argument*/NULL);
		X509CertificateCollection_t1542168550 * L_9 = V_0;
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
// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void X509Stores__ctor_m1786355972 (X509Stores_t1373936238 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path0;
		__this->set__storePath_0(L_0);
		return;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_Personal()
extern "C" IL2CPP_METHOD_ATTR X509Store_t2777415284 * X509Stores_get_Personal_m1313610043 (X509Stores_t1373936238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_get_Personal_m1313610043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Store_t2777415284 * L_0 = __this->get__personal_1();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, _stringLiteral3456219107, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		X509Store_t2777415284 * L_4 = (X509Store_t2777415284 *)il2cpp_codegen_object_new(X509Store_t2777415284_il2cpp_TypeInfo_var);
		X509Store__ctor_m2736551756(L_4, L_3, (bool)0, /*hidden argument*/NULL);
		__this->set__personal_1(L_4);
	}

IL_0029:
	{
		X509Store_t2777415284 * L_5 = __this->get__personal_1();
		return L_5;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_OtherPeople()
extern "C" IL2CPP_METHOD_ATTR X509Store_t2777415284 * X509Stores_get_OtherPeople_m2341174106 (X509Stores_t1373936238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_get_OtherPeople_m2341174106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Store_t2777415284 * L_0 = __this->get__other_2();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, _stringLiteral4072668552, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		X509Store_t2777415284 * L_4 = (X509Store_t2777415284 *)il2cpp_codegen_object_new(X509Store_t2777415284_il2cpp_TypeInfo_var);
		X509Store__ctor_m2736551756(L_4, L_3, (bool)0, /*hidden argument*/NULL);
		__this->set__other_2(L_4);
	}

IL_0029:
	{
		X509Store_t2777415284 * L_5 = __this->get__other_2();
		return L_5;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_IntermediateCA()
extern "C" IL2CPP_METHOD_ATTR X509Store_t2777415284 * X509Stores_get_IntermediateCA_m1350619599 (X509Stores_t1373936238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_get_IntermediateCA_m1350619599_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Store_t2777415284 * L_0 = __this->get__intermediate_3();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, _stringLiteral3456743389, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		X509Store_t2777415284 * L_4 = (X509Store_t2777415284 *)il2cpp_codegen_object_new(X509Store_t2777415284_il2cpp_TypeInfo_var);
		X509Store__ctor_m2736551756(L_4, L_3, (bool)1, /*hidden argument*/NULL);
		__this->set__intermediate_3(L_4);
	}

IL_0029:
	{
		X509Store_t2777415284 * L_5 = __this->get__intermediate_3();
		return L_5;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern "C" IL2CPP_METHOD_ATTR X509Store_t2777415284 * X509Stores_get_TrustedRoot_m1736182879 (X509Stores_t1373936238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_get_TrustedRoot_m1736182879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Store_t2777415284 * L_0 = __this->get__trusted_4();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, _stringLiteral1986082327, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		X509Store_t2777415284 * L_4 = (X509Store_t2777415284 *)il2cpp_codegen_object_new(X509Store_t2777415284_il2cpp_TypeInfo_var);
		X509Store__ctor_m2736551756(L_4, L_3, (bool)1, /*hidden argument*/NULL);
		__this->set__trusted_4(L_4);
	}

IL_0029:
	{
		X509Store_t2777415284 * L_5 = __this->get__trusted_4();
		return L_5;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_Untrusted()
extern "C" IL2CPP_METHOD_ATTR X509Store_t2777415284 * X509Stores_get_Untrusted_m1029989579 (X509Stores_t1373936238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_get_Untrusted_m1029989579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Store_t2777415284 * L_0 = __this->get__untrusted_5();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, _stringLiteral1940787968, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		X509Store_t2777415284 * L_4 = (X509Store_t2777415284 *)il2cpp_codegen_object_new(X509Store_t2777415284_il2cpp_TypeInfo_var);
		X509Store__ctor_m2736551756(L_4, L_3, (bool)0, /*hidden argument*/NULL);
		__this->set__untrusted_5(L_4);
	}

IL_0029:
	{
		X509Store_t2777415284 * L_5 = __this->get__untrusted_5();
		return L_5;
	}
}
// System.Void Mono.Security.X509.X509Stores::Clear()
extern "C" IL2CPP_METHOD_ATTR void X509Stores_Clear_m2582079463 (X509Stores_t1373936238 * __this, const RuntimeMethod* method)
{
	{
		X509Store_t2777415284 * L_0 = __this->get__personal_1();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		X509Store_t2777415284 * L_1 = __this->get__personal_1();
		NullCheck(L_1);
		X509Store_Clear_m2126432876(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		__this->set__personal_1((X509Store_t2777415284 *)NULL);
		X509Store_t2777415284 * L_2 = __this->get__other_2();
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		X509Store_t2777415284 * L_3 = __this->get__other_2();
		NullCheck(L_3);
		X509Store_Clear_m2126432876(L_3, /*hidden argument*/NULL);
	}

IL_0033:
	{
		__this->set__other_2((X509Store_t2777415284 *)NULL);
		X509Store_t2777415284 * L_4 = __this->get__intermediate_3();
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		X509Store_t2777415284 * L_5 = __this->get__intermediate_3();
		NullCheck(L_5);
		X509Store_Clear_m2126432876(L_5, /*hidden argument*/NULL);
	}

IL_0050:
	{
		__this->set__intermediate_3((X509Store_t2777415284 *)NULL);
		X509Store_t2777415284 * L_6 = __this->get__trusted_4();
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		X509Store_t2777415284 * L_7 = __this->get__trusted_4();
		NullCheck(L_7);
		X509Store_Clear_m2126432876(L_7, /*hidden argument*/NULL);
	}

IL_006d:
	{
		__this->set__trusted_4((X509Store_t2777415284 *)NULL);
		X509Store_t2777415284 * L_8 = __this->get__untrusted_5();
		if (!L_8)
		{
			goto IL_008a;
		}
	}
	{
		X509Store_t2777415284 * L_9 = __this->get__untrusted_5();
		NullCheck(L_9);
		X509Store_Clear_m2126432876(L_9, /*hidden argument*/NULL);
	}

IL_008a:
	{
		__this->set__untrusted_5((X509Store_t2777415284 *)NULL);
		return;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::Open(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR X509Store_t2777415284 * X509Stores_Open_m1553467177 (X509Stores_t1373936238 * __this, String_t* ___storeName0, bool ___create1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_Open_m1553467177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___storeName0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2153662835, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Stores_Open_m1553467177_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = __this->get__storePath_0();
		String_t* L_3 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_Combine_m3389272516(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = ___create1;
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7 = Directory_Exists_m1484791558(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		return (X509Store_t2777415284 *)NULL;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
		X509Store_t2777415284 * L_9 = (X509Store_t2777415284 *)il2cpp_codegen_object_new(X509Store_t2777415284_il2cpp_TypeInfo_var);
		X509Store__ctor_m2736551756(L_9, L_8, (bool)1, /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X509Stores/Names::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Names__ctor_m3130886097 (Names_t1325641082 * __this, const RuntimeMethod* method)
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
// System.Void Mono.Security.X509.X520::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X520__ctor_m1236427049 (X520_t3325039438 * __this, const RuntimeMethod* method)
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
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_m682681796 (AttributeTypeAndValue_t3245693428 * __this, String_t* ___oid0, int32_t ___upperBound1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oid0;
		__this->set_oid_0(L_0);
		int32_t L_1 = ___upperBound1;
		__this->set_upperBound_2(L_1);
		__this->set_encoding_3((uint8_t)((int32_t)255));
		return;
	}
}
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_m3579516111 (AttributeTypeAndValue_t3245693428 * __this, String_t* ___oid0, int32_t ___upperBound1, uint8_t ___encoding2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oid0;
		__this->set_oid_0(L_0);
		int32_t L_1 = ___upperBound1;
		__this->set_upperBound_2(L_1);
		uint8_t L_2 = ___encoding2;
		__this->set_encoding_3(L_2);
		return;
	}
}
// System.String Mono.Security.X509.X520/AttributeTypeAndValue::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* AttributeTypeAndValue_get_Value_m2499865396 (AttributeTypeAndValue_t3245693428 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_attrValue_1();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::set_Value(System.String)
extern "C" IL2CPP_METHOD_ATTR void AttributeTypeAndValue_set_Value_m3270529695 (AttributeTypeAndValue_t3245693428 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeTypeAndValue_set_Value_m3270529695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_attrValue_1();
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_1 = __this->get_attrValue_1();
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_upperBound_2();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_4 = Locale_GetText_m3520169047(NULL /*static, unused*/, _stringLiteral2649751261, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		int32_t L_6 = __this->get_upperBound_2();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/NULL);
		FormatException_t154580423 * L_10 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, AttributeTypeAndValue_set_Value_m3270529695_RuntimeMethod_var);
	}

IL_0043:
	{
		String_t* L_11 = ___value0;
		__this->set_attrValue_1(L_11);
		return;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::get_ASN1()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * AttributeTypeAndValue_get_ASN1_m896112831 (AttributeTypeAndValue_t3245693428 * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2114160833 * L_0 = AttributeTypeAndValue_GetASN1_m1976348179(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1(System.Byte)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * AttributeTypeAndValue_GetASN1_m735511441 (AttributeTypeAndValue_t3245693428 * __this, uint8_t ___encoding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeTypeAndValue_GetASN1_m735511441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ASN1_t2114160833 * V_1 = NULL;
	uint8_t V_2 = 0x0;
	{
		uint8_t L_0 = ___encoding0;
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0014;
		}
	}
	{
		uint8_t L_2 = AttributeTypeAndValue_SelectBestEncoding_m4133162804(__this, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0014:
	{
		ASN1_t2114160833 * L_3 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_3, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_1 = L_3;
		ASN1_t2114160833 * L_4 = V_1;
		String_t* L_5 = __this->get_oid_0();
		ASN1_t2114160833 * L_6 = ASN1Convert_FromOid_m3844102704(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ASN1_Add_m3262603624(L_4, L_6, /*hidden argument*/NULL);
		uint8_t L_7 = V_0;
		V_2 = L_7;
		uint8_t L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)19))))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0049;
			}
			case 3:
			{
				goto IL_0079;
			}
		}
	}

IL_0049:
	{
		uint8_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)30))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00bf;
	}

IL_0056:
	{
		ASN1_t2114160833 * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_11 = Encoding_get_ASCII_m3595602635(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_attrValue_1();
		NullCheck(L_11);
		ByteU5BU5D_t4116647657* L_13 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, L_12);
		ASN1_t2114160833 * L_14 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_14, (uint8_t)((int32_t)19), L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		ASN1_Add_m3262603624(L_10, L_14, /*hidden argument*/NULL);
		goto IL_00bf;
	}

IL_0079:
	{
		ASN1_t2114160833 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_16 = Encoding_get_ASCII_m3595602635(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_17 = __this->get_attrValue_1();
		NullCheck(L_16);
		ByteU5BU5D_t4116647657* L_18 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		ASN1_t2114160833 * L_19 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_19, (uint8_t)((int32_t)22), L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		ASN1_Add_m3262603624(L_15, L_19, /*hidden argument*/NULL);
		goto IL_00bf;
	}

IL_009c:
	{
		ASN1_t2114160833 * L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_21 = Encoding_get_BigEndianUnicode_m684646764(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_22 = __this->get_attrValue_1();
		NullCheck(L_21);
		ByteU5BU5D_t4116647657* L_23 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_21, L_22);
		ASN1_t2114160833 * L_24 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_24, (uint8_t)((int32_t)30), L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		ASN1_Add_m3262603624(L_20, L_24, /*hidden argument*/NULL);
		goto IL_00bf;
	}

IL_00bf:
	{
		ASN1_t2114160833 * L_25 = V_1;
		return L_25;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * AttributeTypeAndValue_GetASN1_m1976348179 (AttributeTypeAndValue_t3245693428 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_encoding_3();
		ASN1_t2114160833 * L_1 = AttributeTypeAndValue_GetASN1_m735511441(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte[] Mono.Security.X509.X520/AttributeTypeAndValue::GetBytes(System.Byte)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* AttributeTypeAndValue_GetBytes_m3105335722 (AttributeTypeAndValue_t3245693428 * __this, uint8_t ___encoding0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___encoding0;
		ASN1_t2114160833 * L_1 = AttributeTypeAndValue_GetASN1_m735511441(__this, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_1);
		return L_2;
	}
}
// System.Byte[] Mono.Security.X509.X520/AttributeTypeAndValue::GetBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* AttributeTypeAndValue_GetBytes_m2023713905 (AttributeTypeAndValue_t3245693428 * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2114160833 * L_0 = AttributeTypeAndValue_GetASN1_m1976348179(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_0);
		return L_1;
	}
}
// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::SelectBestEncoding()
extern "C" IL2CPP_METHOD_ATTR uint8_t AttributeTypeAndValue_SelectBestEncoding_m4133162804 (AttributeTypeAndValue_t3245693428 * __this, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		String_t* L_0 = __this->get_attrValue_1();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0044;
	}

IL_000e:
	{
		String_t* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		V_3 = L_4;
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)64))))
		{
			goto IL_002d;
		}
	}
	{
		Il2CppChar L_6 = V_3;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)95))))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0030;
	}

IL_002d:
	{
		return (uint8_t)((int32_t)30);
	}

IL_0030:
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)127))))
		{
			goto IL_003b;
		}
	}
	{
		return (uint8_t)((int32_t)30);
	}

IL_003b:
	{
		goto IL_0040;
	}

IL_0040:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_9 = V_2;
		String_t* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m3847582255(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_000e;
		}
	}
	{
		return (uint8_t)((int32_t)19);
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
// System.Void Mono.Security.X509.X520/CommonName::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CommonName__ctor_m4066435887 (CommonName_t2882805359 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommonName__ctor_m4066435887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral1452586790, ((int32_t)64), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/CountryName::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CountryName__ctor_m1759248525 (CountryName_t4165042092 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CountryName__ctor_m1759248525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m3579516111(__this, _stringLiteral1855871317, 2, (uint8_t)((int32_t)19), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/DnQualifier::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DnQualifier__ctor_m2304537709 (DnQualifier_t2746394302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DnQualifier__ctor_m2304537709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m3579516111(__this, _stringLiteral456868491, 2, (uint8_t)((int32_t)19), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/DomainComponent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DomainComponent__ctor_m2984562191 (DomainComponent_t1597975113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DomainComponent__ctor_m2984562191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m3579516111(__this, _stringLiteral1926373733, ((int32_t)2147483647LL), (uint8_t)((int32_t)22), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/EmailAddress::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EmailAddress__ctor_m1682437348 (EmailAddress_t484866411 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EmailAddress__ctor_m1682437348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m3579516111(__this, _stringLiteral3724057548, ((int32_t)128), (uint8_t)((int32_t)22), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/GivenName::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GivenName__ctor_m2285954234 (GivenName_t3114888956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GivenName__ctor_m2285954234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral3987161739, ((int32_t)16), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/Initial::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Initial__ctor_m1539622106 (Initial_t2745963796 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Initial__ctor_m1539622106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral2030846603, 5, /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/LocalityName::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LocalityName__ctor_m816181155 (LocalityName_t1511149830 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalityName__ctor_m816181155_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral3421955258, ((int32_t)128), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/Name::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Name__ctor_m2961952406 (Name_t3626842933 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Name__ctor_m2961952406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral1648509579, ((int32_t)32768), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/Oid::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Oid__ctor_m1603120831 (Oid_t2014794921 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___oid0;
		AttributeTypeAndValue__ctor_m682681796(__this, L_0, ((int32_t)2147483647LL), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/OrganizationName::.ctor()
extern "C" IL2CPP_METHOD_ATTR void OrganizationName__ctor_m3237996566 (OrganizationName_t857038441 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrganizationName__ctor_m3237996566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral3201540188, ((int32_t)64), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/OrganizationalUnitName::.ctor()
extern "C" IL2CPP_METHOD_ATTR void OrganizationalUnitName__ctor_m4279817838 (OrganizationalUnitName_t1968218587 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrganizationalUnitName__ctor_m4279817838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral1245225052, ((int32_t)64), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/SerialNumber::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SerialNumber__ctor_m2630741392 (SerialNumber_t3812427306 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerialNumber__ctor_m2630741392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m3579516111(__this, _stringLiteral289787376, ((int32_t)64), (uint8_t)((int32_t)19), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/StateOrProvinceName::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StateOrProvinceName__ctor_m3786137020 (StateOrProvinceName_t1916702996 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StateOrProvinceName__ctor_m3786137020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral1405532623, ((int32_t)128), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/Surname::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Surname__ctor_m4076845856 (Surname_t4221813936 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Surname__ctor_m4076845856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral3018670731, ((int32_t)32768), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/Title::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Title__ctor_m3468619135 (Title_t2026585634 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Title__ctor_m3468619135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral3583877212, ((int32_t)64), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/UserId::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UserId__ctor_m730120360 (UserId_t70549454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserId__ctor_m730120360_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral1929716066, ((int32_t)256), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
