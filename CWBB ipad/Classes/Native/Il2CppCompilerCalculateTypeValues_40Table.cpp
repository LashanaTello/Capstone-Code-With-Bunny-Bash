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


// PlayFab.ClientModels.EntityKey
struct EntityKey_t1759282107;
// PlayFab.ClientModels.UserAndroidDeviceInfo
struct UserAndroidDeviceInfo_t3243313677;
// PlayFab.ClientModels.UserCustomIdInfo
struct UserCustomIdInfo_t2526912300;
// PlayFab.ClientModels.UserFacebookInfo
struct UserFacebookInfo_t1027919101;
// PlayFab.ClientModels.UserFacebookInstantGamesIdInfo
struct UserFacebookInstantGamesIdInfo_t975760407;
// PlayFab.ClientModels.UserGameCenterInfo
struct UserGameCenterInfo_t1831595825;
// PlayFab.ClientModels.UserGoogleInfo
struct UserGoogleInfo_t2549595312;
// PlayFab.ClientModels.UserIosDeviceInfo
struct UserIosDeviceInfo_t593505116;
// PlayFab.ClientModels.UserKongregateInfo
struct UserKongregateInfo_t82251820;
// PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo
struct UserNintendoSwitchDeviceIdInfo_t1115872661;
// PlayFab.ClientModels.UserPrivateAccountInfo
struct UserPrivateAccountInfo_t2844482441;
// PlayFab.ClientModels.UserPsnInfo
struct UserPsnInfo_t1437888010;
// PlayFab.ClientModels.UserSteamInfo
struct UserSteamInfo_t155181053;
// PlayFab.ClientModels.UserTitleInfo
struct UserTitleInfo_t663336695;
// PlayFab.ClientModels.UserTwitchInfo
struct UserTwitchInfo_t3900925054;
// PlayFab.ClientModels.UserWindowsHelloInfo
struct UserWindowsHelloInfo_t225950329;
// PlayFab.ClientModels.UserXboxInfo
struct UserXboxInfo_t1002111372;
// PlayFab.CloudScriptModels.EntityKey
struct EntityKey_t1335848462;
// PlayFab.CloudScriptModels.ScriptExecutionError
struct ScriptExecutionError_t2088752497;
// PlayFab.DataModels.EntityKey
struct EntityKey_t1066008332;
// PlayFab.EventsModels.EntityKey
struct EntityKey_t3724060727;
// PlayFab.GroupsModels.EntityKey
struct EntityKey_t3899277558;
// PlayFab.GroupsModels.EntityWithLineage
struct EntityWithLineage_t1029882210;
// PlayFab.SharedModels.PlayFabRequestCommon
struct PlayFabRequestCommon_t229319069;
// PlayFabSharedSettings
struct PlayFabSharedSettings_t2435647636;
// System.Action`1<PlayFab.ClientModels.AttributeInstallResult>
struct Action_1_t2872052430;
// System.Action`1<PlayFab.PlayFabError>
struct Action_1_t1647787308;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,PlayFab.DataModels.GetFileMetadata>
struct Dictionary_2_t2335562868;
// System.Collections.Generic.Dictionary`2<System.String,PlayFab.DataModels.ObjectResult>
struct Dictionary_2_t1510950927;
// System.Collections.Generic.Dictionary`2<System.String,PlayFab.GroupsModels.EntityKey>
struct Dictionary_2_t3684533857;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.List`1<PlayFab.ClientModels.UserOpenIdInfo>
struct List_1_t1620071493;
// System.Collections.Generic.List`1<PlayFab.CloudScriptModels.LogStatement>
struct List_1_t1575216995;
// System.Collections.Generic.List`1<PlayFab.DataModels.InitiateFileUploadMetadata>
struct List_1_t3601188822;
// System.Collections.Generic.List`1<PlayFab.DataModels.SetObject>
struct List_1_t577940872;
// System.Collections.Generic.List`1<PlayFab.DataModels.SetObjectInfo>
struct List_1_t2994187076;
// System.Collections.Generic.List`1<PlayFab.EventsModels.EventContents>
struct List_1_t1063687197;
// System.Collections.Generic.List`1<PlayFab.GroupsModels.EntityKey>
struct List_1_t1076385004;
// System.Collections.Generic.List`1<PlayFab.GroupsModels.EntityWithLineage>
struct List_1_t2501956952;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.Queue`1<PlayFab.EventsModels.EventContents>
struct Queue_1_t3732839245;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.Application/AdvertisingIdentifierCallback
struct AdvertisingIdentifierCallback_t586914420;




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
#ifndef USERANDROIDDEVICEINFO_T3243313677_H
#define USERANDROIDDEVICEINFO_T3243313677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserAndroidDeviceInfo
struct  UserAndroidDeviceInfo_t3243313677  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserAndroidDeviceInfo::AndroidDeviceId
	String_t* ___AndroidDeviceId_0;

public:
	inline static int32_t get_offset_of_AndroidDeviceId_0() { return static_cast<int32_t>(offsetof(UserAndroidDeviceInfo_t3243313677, ___AndroidDeviceId_0)); }
	inline String_t* get_AndroidDeviceId_0() const { return ___AndroidDeviceId_0; }
	inline String_t** get_address_of_AndroidDeviceId_0() { return &___AndroidDeviceId_0; }
	inline void set_AndroidDeviceId_0(String_t* value)
	{
		___AndroidDeviceId_0 = value;
		Il2CppCodeGenWriteBarrier((&___AndroidDeviceId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERANDROIDDEVICEINFO_T3243313677_H
#ifndef USERCUSTOMIDINFO_T2526912300_H
#define USERCUSTOMIDINFO_T2526912300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserCustomIdInfo
struct  UserCustomIdInfo_t2526912300  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserCustomIdInfo::CustomId
	String_t* ___CustomId_0;

public:
	inline static int32_t get_offset_of_CustomId_0() { return static_cast<int32_t>(offsetof(UserCustomIdInfo_t2526912300, ___CustomId_0)); }
	inline String_t* get_CustomId_0() const { return ___CustomId_0; }
	inline String_t** get_address_of_CustomId_0() { return &___CustomId_0; }
	inline void set_CustomId_0(String_t* value)
	{
		___CustomId_0 = value;
		Il2CppCodeGenWriteBarrier((&___CustomId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERCUSTOMIDINFO_T2526912300_H
#ifndef USERFACEBOOKINFO_T1027919101_H
#define USERFACEBOOKINFO_T1027919101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserFacebookInfo
struct  UserFacebookInfo_t1027919101  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserFacebookInfo::FacebookId
	String_t* ___FacebookId_0;
	// System.String PlayFab.ClientModels.UserFacebookInfo::FullName
	String_t* ___FullName_1;

public:
	inline static int32_t get_offset_of_FacebookId_0() { return static_cast<int32_t>(offsetof(UserFacebookInfo_t1027919101, ___FacebookId_0)); }
	inline String_t* get_FacebookId_0() const { return ___FacebookId_0; }
	inline String_t** get_address_of_FacebookId_0() { return &___FacebookId_0; }
	inline void set_FacebookId_0(String_t* value)
	{
		___FacebookId_0 = value;
		Il2CppCodeGenWriteBarrier((&___FacebookId_0), value);
	}

	inline static int32_t get_offset_of_FullName_1() { return static_cast<int32_t>(offsetof(UserFacebookInfo_t1027919101, ___FullName_1)); }
	inline String_t* get_FullName_1() const { return ___FullName_1; }
	inline String_t** get_address_of_FullName_1() { return &___FullName_1; }
	inline void set_FullName_1(String_t* value)
	{
		___FullName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERFACEBOOKINFO_T1027919101_H
#ifndef USERFACEBOOKINSTANTGAMESIDINFO_T975760407_H
#define USERFACEBOOKINSTANTGAMESIDINFO_T975760407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserFacebookInstantGamesIdInfo
struct  UserFacebookInstantGamesIdInfo_t975760407  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserFacebookInstantGamesIdInfo::FacebookInstantGamesId
	String_t* ___FacebookInstantGamesId_0;

public:
	inline static int32_t get_offset_of_FacebookInstantGamesId_0() { return static_cast<int32_t>(offsetof(UserFacebookInstantGamesIdInfo_t975760407, ___FacebookInstantGamesId_0)); }
	inline String_t* get_FacebookInstantGamesId_0() const { return ___FacebookInstantGamesId_0; }
	inline String_t** get_address_of_FacebookInstantGamesId_0() { return &___FacebookInstantGamesId_0; }
	inline void set_FacebookInstantGamesId_0(String_t* value)
	{
		___FacebookInstantGamesId_0 = value;
		Il2CppCodeGenWriteBarrier((&___FacebookInstantGamesId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERFACEBOOKINSTANTGAMESIDINFO_T975760407_H
#ifndef USERGAMECENTERINFO_T1831595825_H
#define USERGAMECENTERINFO_T1831595825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserGameCenterInfo
struct  UserGameCenterInfo_t1831595825  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserGameCenterInfo::GameCenterId
	String_t* ___GameCenterId_0;

public:
	inline static int32_t get_offset_of_GameCenterId_0() { return static_cast<int32_t>(offsetof(UserGameCenterInfo_t1831595825, ___GameCenterId_0)); }
	inline String_t* get_GameCenterId_0() const { return ___GameCenterId_0; }
	inline String_t** get_address_of_GameCenterId_0() { return &___GameCenterId_0; }
	inline void set_GameCenterId_0(String_t* value)
	{
		___GameCenterId_0 = value;
		Il2CppCodeGenWriteBarrier((&___GameCenterId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERGAMECENTERINFO_T1831595825_H
#ifndef USERGOOGLEINFO_T2549595312_H
#define USERGOOGLEINFO_T2549595312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserGoogleInfo
struct  UserGoogleInfo_t2549595312  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleEmail
	String_t* ___GoogleEmail_0;
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleGender
	String_t* ___GoogleGender_1;
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleId
	String_t* ___GoogleId_2;
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleLocale
	String_t* ___GoogleLocale_3;

public:
	inline static int32_t get_offset_of_GoogleEmail_0() { return static_cast<int32_t>(offsetof(UserGoogleInfo_t2549595312, ___GoogleEmail_0)); }
	inline String_t* get_GoogleEmail_0() const { return ___GoogleEmail_0; }
	inline String_t** get_address_of_GoogleEmail_0() { return &___GoogleEmail_0; }
	inline void set_GoogleEmail_0(String_t* value)
	{
		___GoogleEmail_0 = value;
		Il2CppCodeGenWriteBarrier((&___GoogleEmail_0), value);
	}

	inline static int32_t get_offset_of_GoogleGender_1() { return static_cast<int32_t>(offsetof(UserGoogleInfo_t2549595312, ___GoogleGender_1)); }
	inline String_t* get_GoogleGender_1() const { return ___GoogleGender_1; }
	inline String_t** get_address_of_GoogleGender_1() { return &___GoogleGender_1; }
	inline void set_GoogleGender_1(String_t* value)
	{
		___GoogleGender_1 = value;
		Il2CppCodeGenWriteBarrier((&___GoogleGender_1), value);
	}

	inline static int32_t get_offset_of_GoogleId_2() { return static_cast<int32_t>(offsetof(UserGoogleInfo_t2549595312, ___GoogleId_2)); }
	inline String_t* get_GoogleId_2() const { return ___GoogleId_2; }
	inline String_t** get_address_of_GoogleId_2() { return &___GoogleId_2; }
	inline void set_GoogleId_2(String_t* value)
	{
		___GoogleId_2 = value;
		Il2CppCodeGenWriteBarrier((&___GoogleId_2), value);
	}

	inline static int32_t get_offset_of_GoogleLocale_3() { return static_cast<int32_t>(offsetof(UserGoogleInfo_t2549595312, ___GoogleLocale_3)); }
	inline String_t* get_GoogleLocale_3() const { return ___GoogleLocale_3; }
	inline String_t** get_address_of_GoogleLocale_3() { return &___GoogleLocale_3; }
	inline void set_GoogleLocale_3(String_t* value)
	{
		___GoogleLocale_3 = value;
		Il2CppCodeGenWriteBarrier((&___GoogleLocale_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERGOOGLEINFO_T2549595312_H
#ifndef USERIOSDEVICEINFO_T593505116_H
#define USERIOSDEVICEINFO_T593505116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserIosDeviceInfo
struct  UserIosDeviceInfo_t593505116  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserIosDeviceInfo::IosDeviceId
	String_t* ___IosDeviceId_0;

public:
	inline static int32_t get_offset_of_IosDeviceId_0() { return static_cast<int32_t>(offsetof(UserIosDeviceInfo_t593505116, ___IosDeviceId_0)); }
	inline String_t* get_IosDeviceId_0() const { return ___IosDeviceId_0; }
	inline String_t** get_address_of_IosDeviceId_0() { return &___IosDeviceId_0; }
	inline void set_IosDeviceId_0(String_t* value)
	{
		___IosDeviceId_0 = value;
		Il2CppCodeGenWriteBarrier((&___IosDeviceId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERIOSDEVICEINFO_T593505116_H
#ifndef USERKONGREGATEINFO_T82251820_H
#define USERKONGREGATEINFO_T82251820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserKongregateInfo
struct  UserKongregateInfo_t82251820  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserKongregateInfo::KongregateId
	String_t* ___KongregateId_0;
	// System.String PlayFab.ClientModels.UserKongregateInfo::KongregateName
	String_t* ___KongregateName_1;

public:
	inline static int32_t get_offset_of_KongregateId_0() { return static_cast<int32_t>(offsetof(UserKongregateInfo_t82251820, ___KongregateId_0)); }
	inline String_t* get_KongregateId_0() const { return ___KongregateId_0; }
	inline String_t** get_address_of_KongregateId_0() { return &___KongregateId_0; }
	inline void set_KongregateId_0(String_t* value)
	{
		___KongregateId_0 = value;
		Il2CppCodeGenWriteBarrier((&___KongregateId_0), value);
	}

	inline static int32_t get_offset_of_KongregateName_1() { return static_cast<int32_t>(offsetof(UserKongregateInfo_t82251820, ___KongregateName_1)); }
	inline String_t* get_KongregateName_1() const { return ___KongregateName_1; }
	inline String_t** get_address_of_KongregateName_1() { return &___KongregateName_1; }
	inline void set_KongregateName_1(String_t* value)
	{
		___KongregateName_1 = value;
		Il2CppCodeGenWriteBarrier((&___KongregateName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERKONGREGATEINFO_T82251820_H
#ifndef USERNINTENDOSWITCHDEVICEIDINFO_T1115872661_H
#define USERNINTENDOSWITCHDEVICEIDINFO_T1115872661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo
struct  UserNintendoSwitchDeviceIdInfo_t1115872661  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo::NintendoSwitchDeviceId
	String_t* ___NintendoSwitchDeviceId_0;

public:
	inline static int32_t get_offset_of_NintendoSwitchDeviceId_0() { return static_cast<int32_t>(offsetof(UserNintendoSwitchDeviceIdInfo_t1115872661, ___NintendoSwitchDeviceId_0)); }
	inline String_t* get_NintendoSwitchDeviceId_0() const { return ___NintendoSwitchDeviceId_0; }
	inline String_t** get_address_of_NintendoSwitchDeviceId_0() { return &___NintendoSwitchDeviceId_0; }
	inline void set_NintendoSwitchDeviceId_0(String_t* value)
	{
		___NintendoSwitchDeviceId_0 = value;
		Il2CppCodeGenWriteBarrier((&___NintendoSwitchDeviceId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERNINTENDOSWITCHDEVICEIDINFO_T1115872661_H
#ifndef USEROPENIDINFO_T147996751_H
#define USEROPENIDINFO_T147996751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserOpenIdInfo
struct  UserOpenIdInfo_t147996751  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserOpenIdInfo::ConnectionId
	String_t* ___ConnectionId_0;
	// System.String PlayFab.ClientModels.UserOpenIdInfo::Issuer
	String_t* ___Issuer_1;
	// System.String PlayFab.ClientModels.UserOpenIdInfo::Subject
	String_t* ___Subject_2;

public:
	inline static int32_t get_offset_of_ConnectionId_0() { return static_cast<int32_t>(offsetof(UserOpenIdInfo_t147996751, ___ConnectionId_0)); }
	inline String_t* get_ConnectionId_0() const { return ___ConnectionId_0; }
	inline String_t** get_address_of_ConnectionId_0() { return &___ConnectionId_0; }
	inline void set_ConnectionId_0(String_t* value)
	{
		___ConnectionId_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConnectionId_0), value);
	}

	inline static int32_t get_offset_of_Issuer_1() { return static_cast<int32_t>(offsetof(UserOpenIdInfo_t147996751, ___Issuer_1)); }
	inline String_t* get_Issuer_1() const { return ___Issuer_1; }
	inline String_t** get_address_of_Issuer_1() { return &___Issuer_1; }
	inline void set_Issuer_1(String_t* value)
	{
		___Issuer_1 = value;
		Il2CppCodeGenWriteBarrier((&___Issuer_1), value);
	}

	inline static int32_t get_offset_of_Subject_2() { return static_cast<int32_t>(offsetof(UserOpenIdInfo_t147996751, ___Subject_2)); }
	inline String_t* get_Subject_2() const { return ___Subject_2; }
	inline String_t** get_address_of_Subject_2() { return &___Subject_2; }
	inline void set_Subject_2(String_t* value)
	{
		___Subject_2 = value;
		Il2CppCodeGenWriteBarrier((&___Subject_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USEROPENIDINFO_T147996751_H
#ifndef USERPRIVATEACCOUNTINFO_T2844482441_H
#define USERPRIVATEACCOUNTINFO_T2844482441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserPrivateAccountInfo
struct  UserPrivateAccountInfo_t2844482441  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserPrivateAccountInfo::Email
	String_t* ___Email_0;

public:
	inline static int32_t get_offset_of_Email_0() { return static_cast<int32_t>(offsetof(UserPrivateAccountInfo_t2844482441, ___Email_0)); }
	inline String_t* get_Email_0() const { return ___Email_0; }
	inline String_t** get_address_of_Email_0() { return &___Email_0; }
	inline void set_Email_0(String_t* value)
	{
		___Email_0 = value;
		Il2CppCodeGenWriteBarrier((&___Email_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERPRIVATEACCOUNTINFO_T2844482441_H
#ifndef USERPSNINFO_T1437888010_H
#define USERPSNINFO_T1437888010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserPsnInfo
struct  UserPsnInfo_t1437888010  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserPsnInfo::PsnAccountId
	String_t* ___PsnAccountId_0;
	// System.String PlayFab.ClientModels.UserPsnInfo::PsnOnlineId
	String_t* ___PsnOnlineId_1;

public:
	inline static int32_t get_offset_of_PsnAccountId_0() { return static_cast<int32_t>(offsetof(UserPsnInfo_t1437888010, ___PsnAccountId_0)); }
	inline String_t* get_PsnAccountId_0() const { return ___PsnAccountId_0; }
	inline String_t** get_address_of_PsnAccountId_0() { return &___PsnAccountId_0; }
	inline void set_PsnAccountId_0(String_t* value)
	{
		___PsnAccountId_0 = value;
		Il2CppCodeGenWriteBarrier((&___PsnAccountId_0), value);
	}

	inline static int32_t get_offset_of_PsnOnlineId_1() { return static_cast<int32_t>(offsetof(UserPsnInfo_t1437888010, ___PsnOnlineId_1)); }
	inline String_t* get_PsnOnlineId_1() const { return ___PsnOnlineId_1; }
	inline String_t** get_address_of_PsnOnlineId_1() { return &___PsnOnlineId_1; }
	inline void set_PsnOnlineId_1(String_t* value)
	{
		___PsnOnlineId_1 = value;
		Il2CppCodeGenWriteBarrier((&___PsnOnlineId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERPSNINFO_T1437888010_H
#ifndef USERSETTINGS_T3054366223_H
#define USERSETTINGS_T3054366223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserSettings
struct  UserSettings_t3054366223  : public RuntimeObject
{
public:
	// System.Boolean PlayFab.ClientModels.UserSettings::GatherDeviceInfo
	bool ___GatherDeviceInfo_0;
	// System.Boolean PlayFab.ClientModels.UserSettings::GatherFocusInfo
	bool ___GatherFocusInfo_1;
	// System.Boolean PlayFab.ClientModels.UserSettings::NeedsAttribution
	bool ___NeedsAttribution_2;

public:
	inline static int32_t get_offset_of_GatherDeviceInfo_0() { return static_cast<int32_t>(offsetof(UserSettings_t3054366223, ___GatherDeviceInfo_0)); }
	inline bool get_GatherDeviceInfo_0() const { return ___GatherDeviceInfo_0; }
	inline bool* get_address_of_GatherDeviceInfo_0() { return &___GatherDeviceInfo_0; }
	inline void set_GatherDeviceInfo_0(bool value)
	{
		___GatherDeviceInfo_0 = value;
	}

	inline static int32_t get_offset_of_GatherFocusInfo_1() { return static_cast<int32_t>(offsetof(UserSettings_t3054366223, ___GatherFocusInfo_1)); }
	inline bool get_GatherFocusInfo_1() const { return ___GatherFocusInfo_1; }
	inline bool* get_address_of_GatherFocusInfo_1() { return &___GatherFocusInfo_1; }
	inline void set_GatherFocusInfo_1(bool value)
	{
		___GatherFocusInfo_1 = value;
	}

	inline static int32_t get_offset_of_NeedsAttribution_2() { return static_cast<int32_t>(offsetof(UserSettings_t3054366223, ___NeedsAttribution_2)); }
	inline bool get_NeedsAttribution_2() const { return ___NeedsAttribution_2; }
	inline bool* get_address_of_NeedsAttribution_2() { return &___NeedsAttribution_2; }
	inline void set_NeedsAttribution_2(bool value)
	{
		___NeedsAttribution_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERSETTINGS_T3054366223_H
#ifndef USERTWITCHINFO_T3900925054_H
#define USERTWITCHINFO_T3900925054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserTwitchInfo
struct  UserTwitchInfo_t3900925054  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserTwitchInfo::TwitchId
	String_t* ___TwitchId_0;
	// System.String PlayFab.ClientModels.UserTwitchInfo::TwitchUserName
	String_t* ___TwitchUserName_1;

public:
	inline static int32_t get_offset_of_TwitchId_0() { return static_cast<int32_t>(offsetof(UserTwitchInfo_t3900925054, ___TwitchId_0)); }
	inline String_t* get_TwitchId_0() const { return ___TwitchId_0; }
	inline String_t** get_address_of_TwitchId_0() { return &___TwitchId_0; }
	inline void set_TwitchId_0(String_t* value)
	{
		___TwitchId_0 = value;
		Il2CppCodeGenWriteBarrier((&___TwitchId_0), value);
	}

	inline static int32_t get_offset_of_TwitchUserName_1() { return static_cast<int32_t>(offsetof(UserTwitchInfo_t3900925054, ___TwitchUserName_1)); }
	inline String_t* get_TwitchUserName_1() const { return ___TwitchUserName_1; }
	inline String_t** get_address_of_TwitchUserName_1() { return &___TwitchUserName_1; }
	inline void set_TwitchUserName_1(String_t* value)
	{
		___TwitchUserName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TwitchUserName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERTWITCHINFO_T3900925054_H
#ifndef USERWINDOWSHELLOINFO_T225950329_H
#define USERWINDOWSHELLOINFO_T225950329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserWindowsHelloInfo
struct  UserWindowsHelloInfo_t225950329  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserWindowsHelloInfo::WindowsHelloDeviceName
	String_t* ___WindowsHelloDeviceName_0;
	// System.String PlayFab.ClientModels.UserWindowsHelloInfo::WindowsHelloPublicKeyHash
	String_t* ___WindowsHelloPublicKeyHash_1;

public:
	inline static int32_t get_offset_of_WindowsHelloDeviceName_0() { return static_cast<int32_t>(offsetof(UserWindowsHelloInfo_t225950329, ___WindowsHelloDeviceName_0)); }
	inline String_t* get_WindowsHelloDeviceName_0() const { return ___WindowsHelloDeviceName_0; }
	inline String_t** get_address_of_WindowsHelloDeviceName_0() { return &___WindowsHelloDeviceName_0; }
	inline void set_WindowsHelloDeviceName_0(String_t* value)
	{
		___WindowsHelloDeviceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___WindowsHelloDeviceName_0), value);
	}

	inline static int32_t get_offset_of_WindowsHelloPublicKeyHash_1() { return static_cast<int32_t>(offsetof(UserWindowsHelloInfo_t225950329, ___WindowsHelloPublicKeyHash_1)); }
	inline String_t* get_WindowsHelloPublicKeyHash_1() const { return ___WindowsHelloPublicKeyHash_1; }
	inline String_t** get_address_of_WindowsHelloPublicKeyHash_1() { return &___WindowsHelloPublicKeyHash_1; }
	inline void set_WindowsHelloPublicKeyHash_1(String_t* value)
	{
		___WindowsHelloPublicKeyHash_1 = value;
		Il2CppCodeGenWriteBarrier((&___WindowsHelloPublicKeyHash_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERWINDOWSHELLOINFO_T225950329_H
#ifndef USERXBOXINFO_T1002111372_H
#define USERXBOXINFO_T1002111372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserXboxInfo
struct  UserXboxInfo_t1002111372  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserXboxInfo::XboxUserId
	String_t* ___XboxUserId_0;

public:
	inline static int32_t get_offset_of_XboxUserId_0() { return static_cast<int32_t>(offsetof(UserXboxInfo_t1002111372, ___XboxUserId_0)); }
	inline String_t* get_XboxUserId_0() const { return ___XboxUserId_0; }
	inline String_t** get_address_of_XboxUserId_0() { return &___XboxUserId_0; }
	inline void set_XboxUserId_0(String_t* value)
	{
		___XboxUserId_0 = value;
		Il2CppCodeGenWriteBarrier((&___XboxUserId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERXBOXINFO_T1002111372_H
#ifndef VALUETODATEMODEL_T3894608384_H
#define VALUETODATEMODEL_T3894608384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ValueToDateModel
struct  ValueToDateModel_t3894608384  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.ValueToDateModel::Currency
	String_t* ___Currency_0;
	// System.UInt32 PlayFab.ClientModels.ValueToDateModel::TotalValue
	uint32_t ___TotalValue_1;
	// System.String PlayFab.ClientModels.ValueToDateModel::TotalValueAsDecimal
	String_t* ___TotalValueAsDecimal_2;

public:
	inline static int32_t get_offset_of_Currency_0() { return static_cast<int32_t>(offsetof(ValueToDateModel_t3894608384, ___Currency_0)); }
	inline String_t* get_Currency_0() const { return ___Currency_0; }
	inline String_t** get_address_of_Currency_0() { return &___Currency_0; }
	inline void set_Currency_0(String_t* value)
	{
		___Currency_0 = value;
		Il2CppCodeGenWriteBarrier((&___Currency_0), value);
	}

	inline static int32_t get_offset_of_TotalValue_1() { return static_cast<int32_t>(offsetof(ValueToDateModel_t3894608384, ___TotalValue_1)); }
	inline uint32_t get_TotalValue_1() const { return ___TotalValue_1; }
	inline uint32_t* get_address_of_TotalValue_1() { return &___TotalValue_1; }
	inline void set_TotalValue_1(uint32_t value)
	{
		___TotalValue_1 = value;
	}

	inline static int32_t get_offset_of_TotalValueAsDecimal_2() { return static_cast<int32_t>(offsetof(ValueToDateModel_t3894608384, ___TotalValueAsDecimal_2)); }
	inline String_t* get_TotalValueAsDecimal_2() const { return ___TotalValueAsDecimal_2; }
	inline String_t** get_address_of_TotalValueAsDecimal_2() { return &___TotalValueAsDecimal_2; }
	inline void set_TotalValueAsDecimal_2(String_t* value)
	{
		___TotalValueAsDecimal_2 = value;
		Il2CppCodeGenWriteBarrier((&___TotalValueAsDecimal_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUETODATEMODEL_T3894608384_H
#ifndef ENTITYKEY_T1335848462_H
#define ENTITYKEY_T1335848462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.CloudScriptModels.EntityKey
struct  EntityKey_t1335848462  : public RuntimeObject
{
public:
	// System.String PlayFab.CloudScriptModels.EntityKey::Id
	String_t* ___Id_0;
	// System.String PlayFab.CloudScriptModels.EntityKey::Type
	String_t* ___Type_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(EntityKey_t1335848462, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier((&___Id_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(EntityKey_t1335848462, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTITYKEY_T1335848462_H
#ifndef LOGSTATEMENT_T103142253_H
#define LOGSTATEMENT_T103142253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.CloudScriptModels.LogStatement
struct  LogStatement_t103142253  : public RuntimeObject
{
public:
	// System.Object PlayFab.CloudScriptModels.LogStatement::Data
	RuntimeObject * ___Data_0;
	// System.String PlayFab.CloudScriptModels.LogStatement::Level
	String_t* ___Level_1;
	// System.String PlayFab.CloudScriptModels.LogStatement::Message
	String_t* ___Message_2;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(LogStatement_t103142253, ___Data_0)); }
	inline RuntimeObject * get_Data_0() const { return ___Data_0; }
	inline RuntimeObject ** get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(RuntimeObject * value)
	{
		___Data_0 = value;
		Il2CppCodeGenWriteBarrier((&___Data_0), value);
	}

	inline static int32_t get_offset_of_Level_1() { return static_cast<int32_t>(offsetof(LogStatement_t103142253, ___Level_1)); }
	inline String_t* get_Level_1() const { return ___Level_1; }
	inline String_t** get_address_of_Level_1() { return &___Level_1; }
	inline void set_Level_1(String_t* value)
	{
		___Level_1 = value;
		Il2CppCodeGenWriteBarrier((&___Level_1), value);
	}

	inline static int32_t get_offset_of_Message_2() { return static_cast<int32_t>(offsetof(LogStatement_t103142253, ___Message_2)); }
	inline String_t* get_Message_2() const { return ___Message_2; }
	inline String_t** get_address_of_Message_2() { return &___Message_2; }
	inline void set_Message_2(String_t* value)
	{
		___Message_2 = value;
		Il2CppCodeGenWriteBarrier((&___Message_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGSTATEMENT_T103142253_H
#ifndef SCRIPTEXECUTIONERROR_T2088752497_H
#define SCRIPTEXECUTIONERROR_T2088752497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.CloudScriptModels.ScriptExecutionError
struct  ScriptExecutionError_t2088752497  : public RuntimeObject
{
public:
	// System.String PlayFab.CloudScriptModels.ScriptExecutionError::Error
	String_t* ___Error_0;
	// System.String PlayFab.CloudScriptModels.ScriptExecutionError::Message
	String_t* ___Message_1;
	// System.String PlayFab.CloudScriptModels.ScriptExecutionError::StackTrace
	String_t* ___StackTrace_2;

public:
	inline static int32_t get_offset_of_Error_0() { return static_cast<int32_t>(offsetof(ScriptExecutionError_t2088752497, ___Error_0)); }
	inline String_t* get_Error_0() const { return ___Error_0; }
	inline String_t** get_address_of_Error_0() { return &___Error_0; }
	inline void set_Error_0(String_t* value)
	{
		___Error_0 = value;
		Il2CppCodeGenWriteBarrier((&___Error_0), value);
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(ScriptExecutionError_t2088752497, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((&___Message_1), value);
	}

	inline static int32_t get_offset_of_StackTrace_2() { return static_cast<int32_t>(offsetof(ScriptExecutionError_t2088752497, ___StackTrace_2)); }
	inline String_t* get_StackTrace_2() const { return ___StackTrace_2; }
	inline String_t** get_address_of_StackTrace_2() { return &___StackTrace_2; }
	inline void set_StackTrace_2(String_t* value)
	{
		___StackTrace_2 = value;
		Il2CppCodeGenWriteBarrier((&___StackTrace_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTEXECUTIONERROR_T2088752497_H
#ifndef ENTITYKEY_T1066008332_H
#define ENTITYKEY_T1066008332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.EntityKey
struct  EntityKey_t1066008332  : public RuntimeObject
{
public:
	// System.String PlayFab.DataModels.EntityKey::Id
	String_t* ___Id_0;
	// System.String PlayFab.DataModels.EntityKey::Type
	String_t* ___Type_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(EntityKey_t1066008332, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier((&___Id_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(EntityKey_t1066008332, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTITYKEY_T1066008332_H
#ifndef INITIATEFILEUPLOADMETADATA_T2129114080_H
#define INITIATEFILEUPLOADMETADATA_T2129114080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.InitiateFileUploadMetadata
struct  InitiateFileUploadMetadata_t2129114080  : public RuntimeObject
{
public:
	// System.String PlayFab.DataModels.InitiateFileUploadMetadata::FileName
	String_t* ___FileName_0;
	// System.String PlayFab.DataModels.InitiateFileUploadMetadata::UploadUrl
	String_t* ___UploadUrl_1;

public:
	inline static int32_t get_offset_of_FileName_0() { return static_cast<int32_t>(offsetof(InitiateFileUploadMetadata_t2129114080, ___FileName_0)); }
	inline String_t* get_FileName_0() const { return ___FileName_0; }
	inline String_t** get_address_of_FileName_0() { return &___FileName_0; }
	inline void set_FileName_0(String_t* value)
	{
		___FileName_0 = value;
		Il2CppCodeGenWriteBarrier((&___FileName_0), value);
	}

	inline static int32_t get_offset_of_UploadUrl_1() { return static_cast<int32_t>(offsetof(InitiateFileUploadMetadata_t2129114080, ___UploadUrl_1)); }
	inline String_t* get_UploadUrl_1() const { return ___UploadUrl_1; }
	inline String_t** get_address_of_UploadUrl_1() { return &___UploadUrl_1; }
	inline void set_UploadUrl_1(String_t* value)
	{
		___UploadUrl_1 = value;
		Il2CppCodeGenWriteBarrier((&___UploadUrl_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIATEFILEUPLOADMETADATA_T2129114080_H
#ifndef ENTITYKEY_T3724060727_H
#define ENTITYKEY_T3724060727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.EventsModels.EntityKey
struct  EntityKey_t3724060727  : public RuntimeObject
{
public:
	// System.String PlayFab.EventsModels.EntityKey::Id
	String_t* ___Id_0;
	// System.String PlayFab.EventsModels.EntityKey::Type
	String_t* ___Type_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(EntityKey_t3724060727, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier((&___Id_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(EntityKey_t3724060727, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTITYKEY_T3724060727_H
#ifndef ENTITYKEY_T3899277558_H
#define ENTITYKEY_T3899277558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.EntityKey
struct  EntityKey_t3899277558  : public RuntimeObject
{
public:
	// System.String PlayFab.GroupsModels.EntityKey::Id
	String_t* ___Id_0;
	// System.String PlayFab.GroupsModels.EntityKey::Type
	String_t* ___Type_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(EntityKey_t3899277558, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier((&___Id_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(EntityKey_t3899277558, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTITYKEY_T3899277558_H
#ifndef ENTITYMEMBERROLE_T1296979408_H
#define ENTITYMEMBERROLE_T1296979408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.EntityMemberRole
struct  EntityMemberRole_t1296979408  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<PlayFab.GroupsModels.EntityWithLineage> PlayFab.GroupsModels.EntityMemberRole::Members
	List_1_t2501956952 * ___Members_0;
	// System.String PlayFab.GroupsModels.EntityMemberRole::RoleId
	String_t* ___RoleId_1;
	// System.String PlayFab.GroupsModels.EntityMemberRole::RoleName
	String_t* ___RoleName_2;

public:
	inline static int32_t get_offset_of_Members_0() { return static_cast<int32_t>(offsetof(EntityMemberRole_t1296979408, ___Members_0)); }
	inline List_1_t2501956952 * get_Members_0() const { return ___Members_0; }
	inline List_1_t2501956952 ** get_address_of_Members_0() { return &___Members_0; }
	inline void set_Members_0(List_1_t2501956952 * value)
	{
		___Members_0 = value;
		Il2CppCodeGenWriteBarrier((&___Members_0), value);
	}

	inline static int32_t get_offset_of_RoleId_1() { return static_cast<int32_t>(offsetof(EntityMemberRole_t1296979408, ___RoleId_1)); }
	inline String_t* get_RoleId_1() const { return ___RoleId_1; }
	inline String_t** get_address_of_RoleId_1() { return &___RoleId_1; }
	inline void set_RoleId_1(String_t* value)
	{
		___RoleId_1 = value;
		Il2CppCodeGenWriteBarrier((&___RoleId_1), value);
	}

	inline static int32_t get_offset_of_RoleName_2() { return static_cast<int32_t>(offsetof(EntityMemberRole_t1296979408, ___RoleName_2)); }
	inline String_t* get_RoleName_2() const { return ___RoleName_2; }
	inline String_t** get_address_of_RoleName_2() { return &___RoleName_2; }
	inline void set_RoleName_2(String_t* value)
	{
		___RoleName_2 = value;
		Il2CppCodeGenWriteBarrier((&___RoleName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTITYMEMBERROLE_T1296979408_H
#ifndef ENTITYWITHLINEAGE_T1029882210_H
#define ENTITYWITHLINEAGE_T1029882210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.EntityWithLineage
struct  EntityWithLineage_t1029882210  : public RuntimeObject
{
public:
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.EntityWithLineage::Key
	EntityKey_t3899277558 * ___Key_0;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.GroupsModels.EntityKey> PlayFab.GroupsModels.EntityWithLineage::Lineage
	Dictionary_2_t3684533857 * ___Lineage_1;

public:
	inline static int32_t get_offset_of_Key_0() { return static_cast<int32_t>(offsetof(EntityWithLineage_t1029882210, ___Key_0)); }
	inline EntityKey_t3899277558 * get_Key_0() const { return ___Key_0; }
	inline EntityKey_t3899277558 ** get_address_of_Key_0() { return &___Key_0; }
	inline void set_Key_0(EntityKey_t3899277558 * value)
	{
		___Key_0 = value;
		Il2CppCodeGenWriteBarrier((&___Key_0), value);
	}

	inline static int32_t get_offset_of_Lineage_1() { return static_cast<int32_t>(offsetof(EntityWithLineage_t1029882210, ___Lineage_1)); }
	inline Dictionary_2_t3684533857 * get_Lineage_1() const { return ___Lineage_1; }
	inline Dictionary_2_t3684533857 ** get_address_of_Lineage_1() { return &___Lineage_1; }
	inline void set_Lineage_1(Dictionary_2_t3684533857 * value)
	{
		___Lineage_1 = value;
		Il2CppCodeGenWriteBarrier((&___Lineage_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTITYWITHLINEAGE_T1029882210_H
#ifndef PLAYFABDEVICEUTIL_T164370505_H
#define PLAYFABDEVICEUTIL_T164370505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.Internal.PlayFabDeviceUtil
struct  PlayFabDeviceUtil_t164370505  : public RuntimeObject
{
public:

public:
};

struct PlayFabDeviceUtil_t164370505_StaticFields
{
public:
	// System.Boolean PlayFab.Internal.PlayFabDeviceUtil::_needsAttribution
	bool ____needsAttribution_0;
	// System.Boolean PlayFab.Internal.PlayFabDeviceUtil::_gatherDeviceInfo
	bool ____gatherDeviceInfo_1;
	// System.Boolean PlayFab.Internal.PlayFabDeviceUtil::_gatherScreenTime
	bool ____gatherScreenTime_2;
	// System.Action`1<PlayFab.ClientModels.AttributeInstallResult> PlayFab.Internal.PlayFabDeviceUtil::<>f__mg$cache0
	Action_1_t2872052430 * ___U3CU3Ef__mgU24cache0_3;
	// System.Action`1<PlayFab.PlayFabError> PlayFab.Internal.PlayFabDeviceUtil::<>f__mg$cache1
	Action_1_t1647787308 * ___U3CU3Ef__mgU24cache1_4;
	// UnityEngine.Application/AdvertisingIdentifierCallback PlayFab.Internal.PlayFabDeviceUtil::<>f__am$cache0
	AdvertisingIdentifierCallback_t586914420 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of__needsAttribution_0() { return static_cast<int32_t>(offsetof(PlayFabDeviceUtil_t164370505_StaticFields, ____needsAttribution_0)); }
	inline bool get__needsAttribution_0() const { return ____needsAttribution_0; }
	inline bool* get_address_of__needsAttribution_0() { return &____needsAttribution_0; }
	inline void set__needsAttribution_0(bool value)
	{
		____needsAttribution_0 = value;
	}

	inline static int32_t get_offset_of__gatherDeviceInfo_1() { return static_cast<int32_t>(offsetof(PlayFabDeviceUtil_t164370505_StaticFields, ____gatherDeviceInfo_1)); }
	inline bool get__gatherDeviceInfo_1() const { return ____gatherDeviceInfo_1; }
	inline bool* get_address_of__gatherDeviceInfo_1() { return &____gatherDeviceInfo_1; }
	inline void set__gatherDeviceInfo_1(bool value)
	{
		____gatherDeviceInfo_1 = value;
	}

	inline static int32_t get_offset_of__gatherScreenTime_2() { return static_cast<int32_t>(offsetof(PlayFabDeviceUtil_t164370505_StaticFields, ____gatherScreenTime_2)); }
	inline bool get__gatherScreenTime_2() const { return ____gatherScreenTime_2; }
	inline bool* get_address_of__gatherScreenTime_2() { return &____gatherScreenTime_2; }
	inline void set__gatherScreenTime_2(bool value)
	{
		____gatherScreenTime_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(PlayFabDeviceUtil_t164370505_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline Action_1_t2872052430 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline Action_1_t2872052430 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(Action_1_t2872052430 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_4() { return static_cast<int32_t>(offsetof(PlayFabDeviceUtil_t164370505_StaticFields, ___U3CU3Ef__mgU24cache1_4)); }
	inline Action_1_t1647787308 * get_U3CU3Ef__mgU24cache1_4() const { return ___U3CU3Ef__mgU24cache1_4; }
	inline Action_1_t1647787308 ** get_address_of_U3CU3Ef__mgU24cache1_4() { return &___U3CU3Ef__mgU24cache1_4; }
	inline void set_U3CU3Ef__mgU24cache1_4(Action_1_t1647787308 * value)
	{
		___U3CU3Ef__mgU24cache1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(PlayFabDeviceUtil_t164370505_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline AdvertisingIdentifierCallback_t586914420 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline AdvertisingIdentifierCallback_t586914420 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(AdvertisingIdentifierCallback_t586914420 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYFABDEVICEUTIL_T164370505_H
#ifndef PLAYFABIDFA_T2430733542_H
#define PLAYFABIDFA_T2430733542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.Internal.PlayFabIdfa
struct  PlayFabIdfa_t2430733542  : public RuntimeObject
{
public:

public:
};

struct PlayFabIdfa_t2430733542_StaticFields
{
public:
	// System.Action`1<PlayFab.ClientModels.AttributeInstallResult> PlayFab.Internal.PlayFabIdfa::<>f__mg$cache0
	Action_1_t2872052430 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(PlayFabIdfa_t2430733542_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline Action_1_t2872052430 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline Action_1_t2872052430 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(Action_1_t2872052430 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYFABIDFA_T2430733542_H
#ifndef PLAYFABCLOUDSCRIPTAPI_T2283091135_H
#define PLAYFABCLOUDSCRIPTAPI_T2283091135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayFabCloudScriptAPI
struct  PlayFabCloudScriptAPI_t2283091135  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYFABCLOUDSCRIPTAPI_T2283091135_H
#ifndef PLAYFABDATAAPI_T862530335_H
#define PLAYFABDATAAPI_T862530335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayFabDataAPI
struct  PlayFabDataAPI_t862530335  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYFABDATAAPI_T862530335_H
#ifndef PLAYFABEVENTSAPI_T970334335_H
#define PLAYFABEVENTSAPI_T970334335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayFabEventsAPI
struct  PlayFabEventsAPI_t970334335  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYFABEVENTSAPI_T970334335_H
#ifndef PLAYFABGROUPSAPI_T3605214092_H
#define PLAYFABGROUPSAPI_T3605214092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayFabGroupsAPI
struct  PlayFabGroupsAPI_t3605214092  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYFABGROUPSAPI_T3605214092_H
#ifndef PLAYFABSETTINGS_T1718914721_H
#define PLAYFABSETTINGS_T1718914721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayFabSettings
struct  PlayFabSettings_t1718914721  : public RuntimeObject
{
public:

public:
};

struct PlayFabSettings_t1718914721_StaticFields
{
public:
	// System.String PlayFab.PlayFabSettings::AdvertisingIdType
	String_t* ___AdvertisingIdType_2;
	// System.String PlayFab.PlayFabSettings::AdvertisingIdValue
	String_t* ___AdvertisingIdValue_3;
	// System.Boolean PlayFab.PlayFabSettings::DisableAdvertising
	bool ___DisableAdvertising_4;
	// System.Boolean PlayFab.PlayFabSettings::DisableDeviceInfo
	bool ___DisableDeviceInfo_5;
	// System.Boolean PlayFab.PlayFabSettings::DisableFocusTimeCollection
	bool ___DisableFocusTimeCollection_6;
	// PlayFabSharedSettings PlayFab.PlayFabSettings::_playFabShared
	PlayFabSharedSettings_t2435647636 * ____playFabShared_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.PlayFabSettings::RequestGetParams
	Dictionary_2_t1632706988 * ___RequestGetParams_11;

public:
	inline static int32_t get_offset_of_AdvertisingIdType_2() { return static_cast<int32_t>(offsetof(PlayFabSettings_t1718914721_StaticFields, ___AdvertisingIdType_2)); }
	inline String_t* get_AdvertisingIdType_2() const { return ___AdvertisingIdType_2; }
	inline String_t** get_address_of_AdvertisingIdType_2() { return &___AdvertisingIdType_2; }
	inline void set_AdvertisingIdType_2(String_t* value)
	{
		___AdvertisingIdType_2 = value;
		Il2CppCodeGenWriteBarrier((&___AdvertisingIdType_2), value);
	}

	inline static int32_t get_offset_of_AdvertisingIdValue_3() { return static_cast<int32_t>(offsetof(PlayFabSettings_t1718914721_StaticFields, ___AdvertisingIdValue_3)); }
	inline String_t* get_AdvertisingIdValue_3() const { return ___AdvertisingIdValue_3; }
	inline String_t** get_address_of_AdvertisingIdValue_3() { return &___AdvertisingIdValue_3; }
	inline void set_AdvertisingIdValue_3(String_t* value)
	{
		___AdvertisingIdValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___AdvertisingIdValue_3), value);
	}

	inline static int32_t get_offset_of_DisableAdvertising_4() { return static_cast<int32_t>(offsetof(PlayFabSettings_t1718914721_StaticFields, ___DisableAdvertising_4)); }
	inline bool get_DisableAdvertising_4() const { return ___DisableAdvertising_4; }
	inline bool* get_address_of_DisableAdvertising_4() { return &___DisableAdvertising_4; }
	inline void set_DisableAdvertising_4(bool value)
	{
		___DisableAdvertising_4 = value;
	}

	inline static int32_t get_offset_of_DisableDeviceInfo_5() { return static_cast<int32_t>(offsetof(PlayFabSettings_t1718914721_StaticFields, ___DisableDeviceInfo_5)); }
	inline bool get_DisableDeviceInfo_5() const { return ___DisableDeviceInfo_5; }
	inline bool* get_address_of_DisableDeviceInfo_5() { return &___DisableDeviceInfo_5; }
	inline void set_DisableDeviceInfo_5(bool value)
	{
		___DisableDeviceInfo_5 = value;
	}

	inline static int32_t get_offset_of_DisableFocusTimeCollection_6() { return static_cast<int32_t>(offsetof(PlayFabSettings_t1718914721_StaticFields, ___DisableFocusTimeCollection_6)); }
	inline bool get_DisableFocusTimeCollection_6() const { return ___DisableFocusTimeCollection_6; }
	inline bool* get_address_of_DisableFocusTimeCollection_6() { return &___DisableFocusTimeCollection_6; }
	inline void set_DisableFocusTimeCollection_6(bool value)
	{
		___DisableFocusTimeCollection_6 = value;
	}

	inline static int32_t get_offset_of__playFabShared_7() { return static_cast<int32_t>(offsetof(PlayFabSettings_t1718914721_StaticFields, ____playFabShared_7)); }
	inline PlayFabSharedSettings_t2435647636 * get__playFabShared_7() const { return ____playFabShared_7; }
	inline PlayFabSharedSettings_t2435647636 ** get_address_of__playFabShared_7() { return &____playFabShared_7; }
	inline void set__playFabShared_7(PlayFabSharedSettings_t2435647636 * value)
	{
		____playFabShared_7 = value;
		Il2CppCodeGenWriteBarrier((&____playFabShared_7), value);
	}

	inline static int32_t get_offset_of_RequestGetParams_11() { return static_cast<int32_t>(offsetof(PlayFabSettings_t1718914721_StaticFields, ___RequestGetParams_11)); }
	inline Dictionary_2_t1632706988 * get_RequestGetParams_11() const { return ___RequestGetParams_11; }
	inline Dictionary_2_t1632706988 ** get_address_of_RequestGetParams_11() { return &___RequestGetParams_11; }
	inline void set_RequestGetParams_11(Dictionary_2_t1632706988 * value)
	{
		___RequestGetParams_11 = value;
		Il2CppCodeGenWriteBarrier((&___RequestGetParams_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYFABSETTINGS_T1718914721_H
#ifndef PLAYFABREQUESTCOMMON_T229319069_H
#define PLAYFABREQUESTCOMMON_T229319069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.SharedModels.PlayFabRequestCommon
struct  PlayFabRequestCommon_t229319069  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYFABREQUESTCOMMON_T229319069_H
#ifndef PLAYFABRESULTCOMMON_T3469603827_H
#define PLAYFABRESULTCOMMON_T3469603827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.SharedModels.PlayFabResultCommon
struct  PlayFabResultCommon_t3469603827  : public RuntimeObject
{
public:
	// PlayFab.SharedModels.PlayFabRequestCommon PlayFab.SharedModels.PlayFabResultCommon::Request
	PlayFabRequestCommon_t229319069 * ___Request_0;
	// System.Object PlayFab.SharedModels.PlayFabResultCommon::CustomData
	RuntimeObject * ___CustomData_1;

public:
	inline static int32_t get_offset_of_Request_0() { return static_cast<int32_t>(offsetof(PlayFabResultCommon_t3469603827, ___Request_0)); }
	inline PlayFabRequestCommon_t229319069 * get_Request_0() const { return ___Request_0; }
	inline PlayFabRequestCommon_t229319069 ** get_address_of_Request_0() { return &___Request_0; }
	inline void set_Request_0(PlayFabRequestCommon_t229319069 * value)
	{
		___Request_0 = value;
		Il2CppCodeGenWriteBarrier((&___Request_0), value);
	}

	inline static int32_t get_offset_of_CustomData_1() { return static_cast<int32_t>(offsetof(PlayFabResultCommon_t3469603827, ___CustomData_1)); }
	inline RuntimeObject * get_CustomData_1() const { return ___CustomData_1; }
	inline RuntimeObject ** get_address_of_CustomData_1() { return &___CustomData_1; }
	inline void set_CustomData_1(RuntimeObject * value)
	{
		___CustomData_1 = value;
		Il2CppCodeGenWriteBarrier((&___CustomData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYFABRESULTCOMMON_T3469603827_H
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
#ifndef UPDATEPLAYERSTATISTICSRESULT_T836197869_H
#define UPDATEPLAYERSTATISTICSRESULT_T836197869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdatePlayerStatisticsResult
struct  UpdatePlayerStatisticsResult_t836197869  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEPLAYERSTATISTICSRESULT_T836197869_H
#ifndef UPDATESHAREDGROUPDATARESULT_T3416968912_H
#define UPDATESHAREDGROUPDATARESULT_T3416968912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdateSharedGroupDataResult
struct  UpdateSharedGroupDataResult_t3416968912  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATESHAREDGROUPDATARESULT_T3416968912_H
#ifndef UPDATEUSERDATARESULT_T1013856270_H
#define UPDATEUSERDATARESULT_T1013856270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdateUserDataResult
struct  UpdateUserDataResult_t1013856270  : public PlayFabResultCommon_t3469603827
{
public:
	// System.UInt32 PlayFab.ClientModels.UpdateUserDataResult::DataVersion
	uint32_t ___DataVersion_2;

public:
	inline static int32_t get_offset_of_DataVersion_2() { return static_cast<int32_t>(offsetof(UpdateUserDataResult_t1013856270, ___DataVersion_2)); }
	inline uint32_t get_DataVersion_2() const { return ___DataVersion_2; }
	inline uint32_t* get_address_of_DataVersion_2() { return &___DataVersion_2; }
	inline void set_DataVersion_2(uint32_t value)
	{
		___DataVersion_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEUSERDATARESULT_T1013856270_H
#ifndef UPDATEUSERTITLEDISPLAYNAMEREQUEST_T1448654490_H
#define UPDATEUSERTITLEDISPLAYNAMEREQUEST_T1448654490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest
struct  UpdateUserTitleDisplayNameRequest_t1448654490  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest::DisplayName
	String_t* ___DisplayName_0;

public:
	inline static int32_t get_offset_of_DisplayName_0() { return static_cast<int32_t>(offsetof(UpdateUserTitleDisplayNameRequest_t1448654490, ___DisplayName_0)); }
	inline String_t* get_DisplayName_0() const { return ___DisplayName_0; }
	inline String_t** get_address_of_DisplayName_0() { return &___DisplayName_0; }
	inline void set_DisplayName_0(String_t* value)
	{
		___DisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEUSERTITLEDISPLAYNAMEREQUEST_T1448654490_H
#ifndef UPDATEUSERTITLEDISPLAYNAMERESULT_T651277979_H
#define UPDATEUSERTITLEDISPLAYNAMERESULT_T651277979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdateUserTitleDisplayNameResult
struct  UpdateUserTitleDisplayNameResult_t651277979  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.UpdateUserTitleDisplayNameResult::DisplayName
	String_t* ___DisplayName_2;

public:
	inline static int32_t get_offset_of_DisplayName_2() { return static_cast<int32_t>(offsetof(UpdateUserTitleDisplayNameResult_t651277979, ___DisplayName_2)); }
	inline String_t* get_DisplayName_2() const { return ___DisplayName_2; }
	inline String_t** get_address_of_DisplayName_2() { return &___DisplayName_2; }
	inline void set_DisplayName_2(String_t* value)
	{
		___DisplayName_2 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEUSERTITLEDISPLAYNAMERESULT_T651277979_H
#ifndef VALIDATEAMAZONRECEIPTREQUEST_T4084041820_H
#define VALIDATEAMAZONRECEIPTREQUEST_T4084041820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ValidateAmazonReceiptRequest
struct  ValidateAmazonReceiptRequest_t4084041820  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.ValidateAmazonReceiptRequest::CatalogVersion
	String_t* ___CatalogVersion_0;
	// System.String PlayFab.ClientModels.ValidateAmazonReceiptRequest::CurrencyCode
	String_t* ___CurrencyCode_1;
	// System.Int32 PlayFab.ClientModels.ValidateAmazonReceiptRequest::PurchasePrice
	int32_t ___PurchasePrice_2;
	// System.String PlayFab.ClientModels.ValidateAmazonReceiptRequest::ReceiptId
	String_t* ___ReceiptId_3;
	// System.String PlayFab.ClientModels.ValidateAmazonReceiptRequest::UserId
	String_t* ___UserId_4;

public:
	inline static int32_t get_offset_of_CatalogVersion_0() { return static_cast<int32_t>(offsetof(ValidateAmazonReceiptRequest_t4084041820, ___CatalogVersion_0)); }
	inline String_t* get_CatalogVersion_0() const { return ___CatalogVersion_0; }
	inline String_t** get_address_of_CatalogVersion_0() { return &___CatalogVersion_0; }
	inline void set_CatalogVersion_0(String_t* value)
	{
		___CatalogVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_0), value);
	}

	inline static int32_t get_offset_of_CurrencyCode_1() { return static_cast<int32_t>(offsetof(ValidateAmazonReceiptRequest_t4084041820, ___CurrencyCode_1)); }
	inline String_t* get_CurrencyCode_1() const { return ___CurrencyCode_1; }
	inline String_t** get_address_of_CurrencyCode_1() { return &___CurrencyCode_1; }
	inline void set_CurrencyCode_1(String_t* value)
	{
		___CurrencyCode_1 = value;
		Il2CppCodeGenWriteBarrier((&___CurrencyCode_1), value);
	}

	inline static int32_t get_offset_of_PurchasePrice_2() { return static_cast<int32_t>(offsetof(ValidateAmazonReceiptRequest_t4084041820, ___PurchasePrice_2)); }
	inline int32_t get_PurchasePrice_2() const { return ___PurchasePrice_2; }
	inline int32_t* get_address_of_PurchasePrice_2() { return &___PurchasePrice_2; }
	inline void set_PurchasePrice_2(int32_t value)
	{
		___PurchasePrice_2 = value;
	}

	inline static int32_t get_offset_of_ReceiptId_3() { return static_cast<int32_t>(offsetof(ValidateAmazonReceiptRequest_t4084041820, ___ReceiptId_3)); }
	inline String_t* get_ReceiptId_3() const { return ___ReceiptId_3; }
	inline String_t** get_address_of_ReceiptId_3() { return &___ReceiptId_3; }
	inline void set_ReceiptId_3(String_t* value)
	{
		___ReceiptId_3 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiptId_3), value);
	}

	inline static int32_t get_offset_of_UserId_4() { return static_cast<int32_t>(offsetof(ValidateAmazonReceiptRequest_t4084041820, ___UserId_4)); }
	inline String_t* get_UserId_4() const { return ___UserId_4; }
	inline String_t** get_address_of_UserId_4() { return &___UserId_4; }
	inline void set_UserId_4(String_t* value)
	{
		___UserId_4 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATEAMAZONRECEIPTREQUEST_T4084041820_H
#ifndef VALIDATEAMAZONRECEIPTRESULT_T815414974_H
#define VALIDATEAMAZONRECEIPTRESULT_T815414974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ValidateAmazonReceiptResult
struct  ValidateAmazonReceiptResult_t815414974  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATEAMAZONRECEIPTRESULT_T815414974_H
#ifndef VALIDATEGOOGLEPLAYPURCHASERESULT_T989710195_H
#define VALIDATEGOOGLEPLAYPURCHASERESULT_T989710195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ValidateGooglePlayPurchaseResult
struct  ValidateGooglePlayPurchaseResult_t989710195  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATEGOOGLEPLAYPURCHASERESULT_T989710195_H
#ifndef VALIDATEIOSRECEIPTREQUEST_T1731790168_H
#define VALIDATEIOSRECEIPTREQUEST_T1731790168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ValidateIOSReceiptRequest
struct  ValidateIOSReceiptRequest_t1731790168  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.ValidateIOSReceiptRequest::CurrencyCode
	String_t* ___CurrencyCode_0;
	// System.Int32 PlayFab.ClientModels.ValidateIOSReceiptRequest::PurchasePrice
	int32_t ___PurchasePrice_1;
	// System.String PlayFab.ClientModels.ValidateIOSReceiptRequest::ReceiptData
	String_t* ___ReceiptData_2;

public:
	inline static int32_t get_offset_of_CurrencyCode_0() { return static_cast<int32_t>(offsetof(ValidateIOSReceiptRequest_t1731790168, ___CurrencyCode_0)); }
	inline String_t* get_CurrencyCode_0() const { return ___CurrencyCode_0; }
	inline String_t** get_address_of_CurrencyCode_0() { return &___CurrencyCode_0; }
	inline void set_CurrencyCode_0(String_t* value)
	{
		___CurrencyCode_0 = value;
		Il2CppCodeGenWriteBarrier((&___CurrencyCode_0), value);
	}

	inline static int32_t get_offset_of_PurchasePrice_1() { return static_cast<int32_t>(offsetof(ValidateIOSReceiptRequest_t1731790168, ___PurchasePrice_1)); }
	inline int32_t get_PurchasePrice_1() const { return ___PurchasePrice_1; }
	inline int32_t* get_address_of_PurchasePrice_1() { return &___PurchasePrice_1; }
	inline void set_PurchasePrice_1(int32_t value)
	{
		___PurchasePrice_1 = value;
	}

	inline static int32_t get_offset_of_ReceiptData_2() { return static_cast<int32_t>(offsetof(ValidateIOSReceiptRequest_t1731790168, ___ReceiptData_2)); }
	inline String_t* get_ReceiptData_2() const { return ___ReceiptData_2; }
	inline String_t** get_address_of_ReceiptData_2() { return &___ReceiptData_2; }
	inline void set_ReceiptData_2(String_t* value)
	{
		___ReceiptData_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiptData_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATEIOSRECEIPTREQUEST_T1731790168_H
#ifndef VALIDATEIOSRECEIPTRESULT_T2155218257_H
#define VALIDATEIOSRECEIPTRESULT_T2155218257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ValidateIOSReceiptResult
struct  ValidateIOSReceiptResult_t2155218257  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATEIOSRECEIPTRESULT_T2155218257_H
#ifndef VALIDATEWINDOWSRECEIPTREQUEST_T3100880050_H
#define VALIDATEWINDOWSRECEIPTREQUEST_T3100880050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ValidateWindowsReceiptRequest
struct  ValidateWindowsReceiptRequest_t3100880050  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.ValidateWindowsReceiptRequest::CatalogVersion
	String_t* ___CatalogVersion_0;
	// System.String PlayFab.ClientModels.ValidateWindowsReceiptRequest::CurrencyCode
	String_t* ___CurrencyCode_1;
	// System.UInt32 PlayFab.ClientModels.ValidateWindowsReceiptRequest::PurchasePrice
	uint32_t ___PurchasePrice_2;
	// System.String PlayFab.ClientModels.ValidateWindowsReceiptRequest::Receipt
	String_t* ___Receipt_3;

public:
	inline static int32_t get_offset_of_CatalogVersion_0() { return static_cast<int32_t>(offsetof(ValidateWindowsReceiptRequest_t3100880050, ___CatalogVersion_0)); }
	inline String_t* get_CatalogVersion_0() const { return ___CatalogVersion_0; }
	inline String_t** get_address_of_CatalogVersion_0() { return &___CatalogVersion_0; }
	inline void set_CatalogVersion_0(String_t* value)
	{
		___CatalogVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_0), value);
	}

	inline static int32_t get_offset_of_CurrencyCode_1() { return static_cast<int32_t>(offsetof(ValidateWindowsReceiptRequest_t3100880050, ___CurrencyCode_1)); }
	inline String_t* get_CurrencyCode_1() const { return ___CurrencyCode_1; }
	inline String_t** get_address_of_CurrencyCode_1() { return &___CurrencyCode_1; }
	inline void set_CurrencyCode_1(String_t* value)
	{
		___CurrencyCode_1 = value;
		Il2CppCodeGenWriteBarrier((&___CurrencyCode_1), value);
	}

	inline static int32_t get_offset_of_PurchasePrice_2() { return static_cast<int32_t>(offsetof(ValidateWindowsReceiptRequest_t3100880050, ___PurchasePrice_2)); }
	inline uint32_t get_PurchasePrice_2() const { return ___PurchasePrice_2; }
	inline uint32_t* get_address_of_PurchasePrice_2() { return &___PurchasePrice_2; }
	inline void set_PurchasePrice_2(uint32_t value)
	{
		___PurchasePrice_2 = value;
	}

	inline static int32_t get_offset_of_Receipt_3() { return static_cast<int32_t>(offsetof(ValidateWindowsReceiptRequest_t3100880050, ___Receipt_3)); }
	inline String_t* get_Receipt_3() const { return ___Receipt_3; }
	inline String_t** get_address_of_Receipt_3() { return &___Receipt_3; }
	inline void set_Receipt_3(String_t* value)
	{
		___Receipt_3 = value;
		Il2CppCodeGenWriteBarrier((&___Receipt_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATEWINDOWSRECEIPTREQUEST_T3100880050_H
#ifndef VALIDATEWINDOWSRECEIPTRESULT_T3911625901_H
#define VALIDATEWINDOWSRECEIPTRESULT_T3911625901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ValidateWindowsReceiptResult
struct  ValidateWindowsReceiptResult_t3911625901  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATEWINDOWSRECEIPTRESULT_T3911625901_H
#ifndef WRITEEVENTRESPONSE_T368577847_H
#define WRITEEVENTRESPONSE_T368577847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.WriteEventResponse
struct  WriteEventResponse_t368577847  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.WriteEventResponse::EventId
	String_t* ___EventId_2;

public:
	inline static int32_t get_offset_of_EventId_2() { return static_cast<int32_t>(offsetof(WriteEventResponse_t368577847, ___EventId_2)); }
	inline String_t* get_EventId_2() const { return ___EventId_2; }
	inline String_t** get_address_of_EventId_2() { return &___EventId_2; }
	inline void set_EventId_2(String_t* value)
	{
		___EventId_2 = value;
		Il2CppCodeGenWriteBarrier((&___EventId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEEVENTRESPONSE_T368577847_H
#ifndef ABORTFILEUPLOADSRESPONSE_T394824386_H
#define ABORTFILEUPLOADSRESPONSE_T394824386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.AbortFileUploadsResponse
struct  AbortFileUploadsResponse_t394824386  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.AbortFileUploadsResponse::Entity
	EntityKey_t1066008332 * ___Entity_2;
	// System.Int32 PlayFab.DataModels.AbortFileUploadsResponse::ProfileVersion
	int32_t ___ProfileVersion_3;

public:
	inline static int32_t get_offset_of_Entity_2() { return static_cast<int32_t>(offsetof(AbortFileUploadsResponse_t394824386, ___Entity_2)); }
	inline EntityKey_t1066008332 * get_Entity_2() const { return ___Entity_2; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_2() { return &___Entity_2; }
	inline void set_Entity_2(EntityKey_t1066008332 * value)
	{
		___Entity_2 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_2), value);
	}

	inline static int32_t get_offset_of_ProfileVersion_3() { return static_cast<int32_t>(offsetof(AbortFileUploadsResponse_t394824386, ___ProfileVersion_3)); }
	inline int32_t get_ProfileVersion_3() const { return ___ProfileVersion_3; }
	inline int32_t* get_address_of_ProfileVersion_3() { return &___ProfileVersion_3; }
	inline void set_ProfileVersion_3(int32_t value)
	{
		___ProfileVersion_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABORTFILEUPLOADSRESPONSE_T394824386_H
#ifndef DELETEFILESRESPONSE_T1939054338_H
#define DELETEFILESRESPONSE_T1939054338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.DeleteFilesResponse
struct  DeleteFilesResponse_t1939054338  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.DeleteFilesResponse::Entity
	EntityKey_t1066008332 * ___Entity_2;
	// System.Int32 PlayFab.DataModels.DeleteFilesResponse::ProfileVersion
	int32_t ___ProfileVersion_3;

public:
	inline static int32_t get_offset_of_Entity_2() { return static_cast<int32_t>(offsetof(DeleteFilesResponse_t1939054338, ___Entity_2)); }
	inline EntityKey_t1066008332 * get_Entity_2() const { return ___Entity_2; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_2() { return &___Entity_2; }
	inline void set_Entity_2(EntityKey_t1066008332 * value)
	{
		___Entity_2 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_2), value);
	}

	inline static int32_t get_offset_of_ProfileVersion_3() { return static_cast<int32_t>(offsetof(DeleteFilesResponse_t1939054338, ___ProfileVersion_3)); }
	inline int32_t get_ProfileVersion_3() const { return ___ProfileVersion_3; }
	inline int32_t* get_address_of_ProfileVersion_3() { return &___ProfileVersion_3; }
	inline void set_ProfileVersion_3(int32_t value)
	{
		___ProfileVersion_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELETEFILESRESPONSE_T1939054338_H
#ifndef FINALIZEFILEUPLOADSREQUEST_T2794077293_H
#define FINALIZEFILEUPLOADSREQUEST_T2794077293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.FinalizeFileUploadsRequest
struct  FinalizeFileUploadsRequest_t2794077293  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.FinalizeFileUploadsRequest::Entity
	EntityKey_t1066008332 * ___Entity_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.DataModels.FinalizeFileUploadsRequest::FileNames
	List_1_t3319525431 * ___FileNames_1;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(FinalizeFileUploadsRequest_t2794077293, ___Entity_0)); }
	inline EntityKey_t1066008332 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t1066008332 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}

	inline static int32_t get_offset_of_FileNames_1() { return static_cast<int32_t>(offsetof(FinalizeFileUploadsRequest_t2794077293, ___FileNames_1)); }
	inline List_1_t3319525431 * get_FileNames_1() const { return ___FileNames_1; }
	inline List_1_t3319525431 ** get_address_of_FileNames_1() { return &___FileNames_1; }
	inline void set_FileNames_1(List_1_t3319525431 * value)
	{
		___FileNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___FileNames_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINALIZEFILEUPLOADSREQUEST_T2794077293_H
#ifndef FINALIZEFILEUPLOADSRESPONSE_T3548379214_H
#define FINALIZEFILEUPLOADSRESPONSE_T3548379214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.FinalizeFileUploadsResponse
struct  FinalizeFileUploadsResponse_t3548379214  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.FinalizeFileUploadsResponse::Entity
	EntityKey_t1066008332 * ___Entity_2;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.DataModels.GetFileMetadata> PlayFab.DataModels.FinalizeFileUploadsResponse::Metadata
	Dictionary_2_t2335562868 * ___Metadata_3;
	// System.Int32 PlayFab.DataModels.FinalizeFileUploadsResponse::ProfileVersion
	int32_t ___ProfileVersion_4;

public:
	inline static int32_t get_offset_of_Entity_2() { return static_cast<int32_t>(offsetof(FinalizeFileUploadsResponse_t3548379214, ___Entity_2)); }
	inline EntityKey_t1066008332 * get_Entity_2() const { return ___Entity_2; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_2() { return &___Entity_2; }
	inline void set_Entity_2(EntityKey_t1066008332 * value)
	{
		___Entity_2 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_2), value);
	}

	inline static int32_t get_offset_of_Metadata_3() { return static_cast<int32_t>(offsetof(FinalizeFileUploadsResponse_t3548379214, ___Metadata_3)); }
	inline Dictionary_2_t2335562868 * get_Metadata_3() const { return ___Metadata_3; }
	inline Dictionary_2_t2335562868 ** get_address_of_Metadata_3() { return &___Metadata_3; }
	inline void set_Metadata_3(Dictionary_2_t2335562868 * value)
	{
		___Metadata_3 = value;
		Il2CppCodeGenWriteBarrier((&___Metadata_3), value);
	}

	inline static int32_t get_offset_of_ProfileVersion_4() { return static_cast<int32_t>(offsetof(FinalizeFileUploadsResponse_t3548379214, ___ProfileVersion_4)); }
	inline int32_t get_ProfileVersion_4() const { return ___ProfileVersion_4; }
	inline int32_t* get_address_of_ProfileVersion_4() { return &___ProfileVersion_4; }
	inline void set_ProfileVersion_4(int32_t value)
	{
		___ProfileVersion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINALIZEFILEUPLOADSRESPONSE_T3548379214_H
#ifndef GETFILESREQUEST_T3180579864_H
#define GETFILESREQUEST_T3180579864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.GetFilesRequest
struct  GetFilesRequest_t3180579864  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.GetFilesRequest::Entity
	EntityKey_t1066008332 * ___Entity_0;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(GetFilesRequest_t3180579864, ___Entity_0)); }
	inline EntityKey_t1066008332 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t1066008332 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFILESREQUEST_T3180579864_H
#ifndef GETFILESRESPONSE_T3141948640_H
#define GETFILESRESPONSE_T3141948640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.GetFilesResponse
struct  GetFilesResponse_t3141948640  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.GetFilesResponse::Entity
	EntityKey_t1066008332 * ___Entity_2;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.DataModels.GetFileMetadata> PlayFab.DataModels.GetFilesResponse::Metadata
	Dictionary_2_t2335562868 * ___Metadata_3;
	// System.Int32 PlayFab.DataModels.GetFilesResponse::ProfileVersion
	int32_t ___ProfileVersion_4;

public:
	inline static int32_t get_offset_of_Entity_2() { return static_cast<int32_t>(offsetof(GetFilesResponse_t3141948640, ___Entity_2)); }
	inline EntityKey_t1066008332 * get_Entity_2() const { return ___Entity_2; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_2() { return &___Entity_2; }
	inline void set_Entity_2(EntityKey_t1066008332 * value)
	{
		___Entity_2 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_2), value);
	}

	inline static int32_t get_offset_of_Metadata_3() { return static_cast<int32_t>(offsetof(GetFilesResponse_t3141948640, ___Metadata_3)); }
	inline Dictionary_2_t2335562868 * get_Metadata_3() const { return ___Metadata_3; }
	inline Dictionary_2_t2335562868 ** get_address_of_Metadata_3() { return &___Metadata_3; }
	inline void set_Metadata_3(Dictionary_2_t2335562868 * value)
	{
		___Metadata_3 = value;
		Il2CppCodeGenWriteBarrier((&___Metadata_3), value);
	}

	inline static int32_t get_offset_of_ProfileVersion_4() { return static_cast<int32_t>(offsetof(GetFilesResponse_t3141948640, ___ProfileVersion_4)); }
	inline int32_t get_ProfileVersion_4() const { return ___ProfileVersion_4; }
	inline int32_t* get_address_of_ProfileVersion_4() { return &___ProfileVersion_4; }
	inline void set_ProfileVersion_4(int32_t value)
	{
		___ProfileVersion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFILESRESPONSE_T3141948640_H
#ifndef GETOBJECTSRESPONSE_T2737919070_H
#define GETOBJECTSRESPONSE_T2737919070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.GetObjectsResponse
struct  GetObjectsResponse_t2737919070  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.GetObjectsResponse::Entity
	EntityKey_t1066008332 * ___Entity_2;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.DataModels.ObjectResult> PlayFab.DataModels.GetObjectsResponse::Objects
	Dictionary_2_t1510950927 * ___Objects_3;
	// System.Int32 PlayFab.DataModels.GetObjectsResponse::ProfileVersion
	int32_t ___ProfileVersion_4;

public:
	inline static int32_t get_offset_of_Entity_2() { return static_cast<int32_t>(offsetof(GetObjectsResponse_t2737919070, ___Entity_2)); }
	inline EntityKey_t1066008332 * get_Entity_2() const { return ___Entity_2; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_2() { return &___Entity_2; }
	inline void set_Entity_2(EntityKey_t1066008332 * value)
	{
		___Entity_2 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_2), value);
	}

	inline static int32_t get_offset_of_Objects_3() { return static_cast<int32_t>(offsetof(GetObjectsResponse_t2737919070, ___Objects_3)); }
	inline Dictionary_2_t1510950927 * get_Objects_3() const { return ___Objects_3; }
	inline Dictionary_2_t1510950927 ** get_address_of_Objects_3() { return &___Objects_3; }
	inline void set_Objects_3(Dictionary_2_t1510950927 * value)
	{
		___Objects_3 = value;
		Il2CppCodeGenWriteBarrier((&___Objects_3), value);
	}

	inline static int32_t get_offset_of_ProfileVersion_4() { return static_cast<int32_t>(offsetof(GetObjectsResponse_t2737919070, ___ProfileVersion_4)); }
	inline int32_t get_ProfileVersion_4() const { return ___ProfileVersion_4; }
	inline int32_t* get_address_of_ProfileVersion_4() { return &___ProfileVersion_4; }
	inline void set_ProfileVersion_4(int32_t value)
	{
		___ProfileVersion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETOBJECTSRESPONSE_T2737919070_H
#ifndef INITIATEFILEUPLOADSRESPONSE_T551433165_H
#define INITIATEFILEUPLOADSRESPONSE_T551433165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.InitiateFileUploadsResponse
struct  InitiateFileUploadsResponse_t551433165  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.InitiateFileUploadsResponse::Entity
	EntityKey_t1066008332 * ___Entity_2;
	// System.Int32 PlayFab.DataModels.InitiateFileUploadsResponse::ProfileVersion
	int32_t ___ProfileVersion_3;
	// System.Collections.Generic.List`1<PlayFab.DataModels.InitiateFileUploadMetadata> PlayFab.DataModels.InitiateFileUploadsResponse::UploadDetails
	List_1_t3601188822 * ___UploadDetails_4;

public:
	inline static int32_t get_offset_of_Entity_2() { return static_cast<int32_t>(offsetof(InitiateFileUploadsResponse_t551433165, ___Entity_2)); }
	inline EntityKey_t1066008332 * get_Entity_2() const { return ___Entity_2; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_2() { return &___Entity_2; }
	inline void set_Entity_2(EntityKey_t1066008332 * value)
	{
		___Entity_2 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_2), value);
	}

	inline static int32_t get_offset_of_ProfileVersion_3() { return static_cast<int32_t>(offsetof(InitiateFileUploadsResponse_t551433165, ___ProfileVersion_3)); }
	inline int32_t get_ProfileVersion_3() const { return ___ProfileVersion_3; }
	inline int32_t* get_address_of_ProfileVersion_3() { return &___ProfileVersion_3; }
	inline void set_ProfileVersion_3(int32_t value)
	{
		___ProfileVersion_3 = value;
	}

	inline static int32_t get_offset_of_UploadDetails_4() { return static_cast<int32_t>(offsetof(InitiateFileUploadsResponse_t551433165, ___UploadDetails_4)); }
	inline List_1_t3601188822 * get_UploadDetails_4() const { return ___UploadDetails_4; }
	inline List_1_t3601188822 ** get_address_of_UploadDetails_4() { return &___UploadDetails_4; }
	inline void set_UploadDetails_4(List_1_t3601188822 * value)
	{
		___UploadDetails_4 = value;
		Il2CppCodeGenWriteBarrier((&___UploadDetails_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIATEFILEUPLOADSRESPONSE_T551433165_H
#ifndef OBJECTRESULT_T1725694628_H
#define OBJECTRESULT_T1725694628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.ObjectResult
struct  ObjectResult_t1725694628  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Object PlayFab.DataModels.ObjectResult::DataObject
	RuntimeObject * ___DataObject_2;
	// System.String PlayFab.DataModels.ObjectResult::EscapedDataObject
	String_t* ___EscapedDataObject_3;
	// System.String PlayFab.DataModels.ObjectResult::ObjectName
	String_t* ___ObjectName_4;

public:
	inline static int32_t get_offset_of_DataObject_2() { return static_cast<int32_t>(offsetof(ObjectResult_t1725694628, ___DataObject_2)); }
	inline RuntimeObject * get_DataObject_2() const { return ___DataObject_2; }
	inline RuntimeObject ** get_address_of_DataObject_2() { return &___DataObject_2; }
	inline void set_DataObject_2(RuntimeObject * value)
	{
		___DataObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___DataObject_2), value);
	}

	inline static int32_t get_offset_of_EscapedDataObject_3() { return static_cast<int32_t>(offsetof(ObjectResult_t1725694628, ___EscapedDataObject_3)); }
	inline String_t* get_EscapedDataObject_3() const { return ___EscapedDataObject_3; }
	inline String_t** get_address_of_EscapedDataObject_3() { return &___EscapedDataObject_3; }
	inline void set_EscapedDataObject_3(String_t* value)
	{
		___EscapedDataObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___EscapedDataObject_3), value);
	}

	inline static int32_t get_offset_of_ObjectName_4() { return static_cast<int32_t>(offsetof(ObjectResult_t1725694628, ___ObjectName_4)); }
	inline String_t* get_ObjectName_4() const { return ___ObjectName_4; }
	inline String_t** get_address_of_ObjectName_4() { return &___ObjectName_4; }
	inline void set_ObjectName_4(String_t* value)
	{
		___ObjectName_4 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRESULT_T1725694628_H
#ifndef SETOBJECTSRESPONSE_T1465709267_H
#define SETOBJECTSRESPONSE_T1465709267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.SetObjectsResponse
struct  SetObjectsResponse_t1465709267  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Int32 PlayFab.DataModels.SetObjectsResponse::ProfileVersion
	int32_t ___ProfileVersion_2;
	// System.Collections.Generic.List`1<PlayFab.DataModels.SetObjectInfo> PlayFab.DataModels.SetObjectsResponse::SetResults
	List_1_t2994187076 * ___SetResults_3;

public:
	inline static int32_t get_offset_of_ProfileVersion_2() { return static_cast<int32_t>(offsetof(SetObjectsResponse_t1465709267, ___ProfileVersion_2)); }
	inline int32_t get_ProfileVersion_2() const { return ___ProfileVersion_2; }
	inline int32_t* get_address_of_ProfileVersion_2() { return &___ProfileVersion_2; }
	inline void set_ProfileVersion_2(int32_t value)
	{
		___ProfileVersion_2 = value;
	}

	inline static int32_t get_offset_of_SetResults_3() { return static_cast<int32_t>(offsetof(SetObjectsResponse_t1465709267, ___SetResults_3)); }
	inline List_1_t2994187076 * get_SetResults_3() const { return ___SetResults_3; }
	inline List_1_t2994187076 ** get_address_of_SetResults_3() { return &___SetResults_3; }
	inline void set_SetResults_3(List_1_t2994187076 * value)
	{
		___SetResults_3 = value;
		Il2CppCodeGenWriteBarrier((&___SetResults_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETOBJECTSRESPONSE_T1465709267_H
#ifndef WRITEEVENTSREQUEST_T283160343_H
#define WRITEEVENTSREQUEST_T283160343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.EventsModels.WriteEventsRequest
struct  WriteEventsRequest_t283160343  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<PlayFab.EventsModels.EventContents> PlayFab.EventsModels.WriteEventsRequest::Events
	List_1_t1063687197 * ___Events_0;

public:
	inline static int32_t get_offset_of_Events_0() { return static_cast<int32_t>(offsetof(WriteEventsRequest_t283160343, ___Events_0)); }
	inline List_1_t1063687197 * get_Events_0() const { return ___Events_0; }
	inline List_1_t1063687197 ** get_address_of_Events_0() { return &___Events_0; }
	inline void set_Events_0(List_1_t1063687197 * value)
	{
		___Events_0 = value;
		Il2CppCodeGenWriteBarrier((&___Events_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEEVENTSREQUEST_T283160343_H
#ifndef WRITEEVENTSRESPONSE_T2232497070_H
#define WRITEEVENTSRESPONSE_T2232497070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.EventsModels.WriteEventsResponse
struct  WriteEventsResponse_t2232497070  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.EventsModels.WriteEventsResponse::AssignedEventIds
	List_1_t3319525431 * ___AssignedEventIds_2;

public:
	inline static int32_t get_offset_of_AssignedEventIds_2() { return static_cast<int32_t>(offsetof(WriteEventsResponse_t2232497070, ___AssignedEventIds_2)); }
	inline List_1_t3319525431 * get_AssignedEventIds_2() const { return ___AssignedEventIds_2; }
	inline List_1_t3319525431 ** get_address_of_AssignedEventIds_2() { return &___AssignedEventIds_2; }
	inline void set_AssignedEventIds_2(List_1_t3319525431 * value)
	{
		___AssignedEventIds_2 = value;
		Il2CppCodeGenWriteBarrier((&___AssignedEventIds_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEEVENTSRESPONSE_T2232497070_H
#ifndef ACCEPTGROUPAPPLICATIONREQUEST_T4103511345_H
#define ACCEPTGROUPAPPLICATIONREQUEST_T4103511345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.AcceptGroupApplicationRequest
struct  AcceptGroupApplicationRequest_t4103511345  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.AcceptGroupApplicationRequest::Entity
	EntityKey_t3899277558 * ___Entity_0;
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.AcceptGroupApplicationRequest::Group
	EntityKey_t3899277558 * ___Group_1;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(AcceptGroupApplicationRequest_t4103511345, ___Entity_0)); }
	inline EntityKey_t3899277558 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t3899277558 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t3899277558 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}

	inline static int32_t get_offset_of_Group_1() { return static_cast<int32_t>(offsetof(AcceptGroupApplicationRequest_t4103511345, ___Group_1)); }
	inline EntityKey_t3899277558 * get_Group_1() const { return ___Group_1; }
	inline EntityKey_t3899277558 ** get_address_of_Group_1() { return &___Group_1; }
	inline void set_Group_1(EntityKey_t3899277558 * value)
	{
		___Group_1 = value;
		Il2CppCodeGenWriteBarrier((&___Group_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACCEPTGROUPAPPLICATIONREQUEST_T4103511345_H
#ifndef ACCEPTGROUPINVITATIONREQUEST_T3293306536_H
#define ACCEPTGROUPINVITATIONREQUEST_T3293306536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.AcceptGroupInvitationRequest
struct  AcceptGroupInvitationRequest_t3293306536  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.AcceptGroupInvitationRequest::Entity
	EntityKey_t3899277558 * ___Entity_0;
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.AcceptGroupInvitationRequest::Group
	EntityKey_t3899277558 * ___Group_1;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(AcceptGroupInvitationRequest_t3293306536, ___Entity_0)); }
	inline EntityKey_t3899277558 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t3899277558 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t3899277558 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}

	inline static int32_t get_offset_of_Group_1() { return static_cast<int32_t>(offsetof(AcceptGroupInvitationRequest_t3293306536, ___Group_1)); }
	inline EntityKey_t3899277558 * get_Group_1() const { return ___Group_1; }
	inline EntityKey_t3899277558 ** get_address_of_Group_1() { return &___Group_1; }
	inline void set_Group_1(EntityKey_t3899277558 * value)
	{
		___Group_1 = value;
		Il2CppCodeGenWriteBarrier((&___Group_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACCEPTGROUPINVITATIONREQUEST_T3293306536_H
#ifndef ADDMEMBERSREQUEST_T1798597853_H
#define ADDMEMBERSREQUEST_T1798597853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.AddMembersRequest
struct  AddMembersRequest_t1798597853  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.AddMembersRequest::Group
	EntityKey_t3899277558 * ___Group_0;
	// System.Collections.Generic.List`1<PlayFab.GroupsModels.EntityKey> PlayFab.GroupsModels.AddMembersRequest::Members
	List_1_t1076385004 * ___Members_1;
	// System.String PlayFab.GroupsModels.AddMembersRequest::RoleId
	String_t* ___RoleId_2;

public:
	inline static int32_t get_offset_of_Group_0() { return static_cast<int32_t>(offsetof(AddMembersRequest_t1798597853, ___Group_0)); }
	inline EntityKey_t3899277558 * get_Group_0() const { return ___Group_0; }
	inline EntityKey_t3899277558 ** get_address_of_Group_0() { return &___Group_0; }
	inline void set_Group_0(EntityKey_t3899277558 * value)
	{
		___Group_0 = value;
		Il2CppCodeGenWriteBarrier((&___Group_0), value);
	}

	inline static int32_t get_offset_of_Members_1() { return static_cast<int32_t>(offsetof(AddMembersRequest_t1798597853, ___Members_1)); }
	inline List_1_t1076385004 * get_Members_1() const { return ___Members_1; }
	inline List_1_t1076385004 ** get_address_of_Members_1() { return &___Members_1; }
	inline void set_Members_1(List_1_t1076385004 * value)
	{
		___Members_1 = value;
		Il2CppCodeGenWriteBarrier((&___Members_1), value);
	}

	inline static int32_t get_offset_of_RoleId_2() { return static_cast<int32_t>(offsetof(AddMembersRequest_t1798597853, ___RoleId_2)); }
	inline String_t* get_RoleId_2() const { return ___RoleId_2; }
	inline String_t** get_address_of_RoleId_2() { return &___RoleId_2; }
	inline void set_RoleId_2(String_t* value)
	{
		___RoleId_2 = value;
		Il2CppCodeGenWriteBarrier((&___RoleId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDMEMBERSREQUEST_T1798597853_H
#ifndef BLOCKENTITYREQUEST_T3966213165_H
#define BLOCKENTITYREQUEST_T3966213165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.BlockEntityRequest
struct  BlockEntityRequest_t3966213165  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.BlockEntityRequest::Entity
	EntityKey_t3899277558 * ___Entity_0;
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.BlockEntityRequest::Group
	EntityKey_t3899277558 * ___Group_1;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(BlockEntityRequest_t3966213165, ___Entity_0)); }
	inline EntityKey_t3899277558 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t3899277558 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t3899277558 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}

	inline static int32_t get_offset_of_Group_1() { return static_cast<int32_t>(offsetof(BlockEntityRequest_t3966213165, ___Group_1)); }
	inline EntityKey_t3899277558 * get_Group_1() const { return ___Group_1; }
	inline EntityKey_t3899277558 ** get_address_of_Group_1() { return &___Group_1; }
	inline void set_Group_1(EntityKey_t3899277558 * value)
	{
		___Group_1 = value;
		Il2CppCodeGenWriteBarrier((&___Group_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKENTITYREQUEST_T3966213165_H
#ifndef CHANGEMEMBERROLEREQUEST_T4028690435_H
#define CHANGEMEMBERROLEREQUEST_T4028690435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.ChangeMemberRoleRequest
struct  ChangeMemberRoleRequest_t4028690435  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.GroupsModels.ChangeMemberRoleRequest::DestinationRoleId
	String_t* ___DestinationRoleId_0;
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.ChangeMemberRoleRequest::Group
	EntityKey_t3899277558 * ___Group_1;
	// System.Collections.Generic.List`1<PlayFab.GroupsModels.EntityKey> PlayFab.GroupsModels.ChangeMemberRoleRequest::Members
	List_1_t1076385004 * ___Members_2;
	// System.String PlayFab.GroupsModels.ChangeMemberRoleRequest::OriginRoleId
	String_t* ___OriginRoleId_3;

public:
	inline static int32_t get_offset_of_DestinationRoleId_0() { return static_cast<int32_t>(offsetof(ChangeMemberRoleRequest_t4028690435, ___DestinationRoleId_0)); }
	inline String_t* get_DestinationRoleId_0() const { return ___DestinationRoleId_0; }
	inline String_t** get_address_of_DestinationRoleId_0() { return &___DestinationRoleId_0; }
	inline void set_DestinationRoleId_0(String_t* value)
	{
		___DestinationRoleId_0 = value;
		Il2CppCodeGenWriteBarrier((&___DestinationRoleId_0), value);
	}

	inline static int32_t get_offset_of_Group_1() { return static_cast<int32_t>(offsetof(ChangeMemberRoleRequest_t4028690435, ___Group_1)); }
	inline EntityKey_t3899277558 * get_Group_1() const { return ___Group_1; }
	inline EntityKey_t3899277558 ** get_address_of_Group_1() { return &___Group_1; }
	inline void set_Group_1(EntityKey_t3899277558 * value)
	{
		___Group_1 = value;
		Il2CppCodeGenWriteBarrier((&___Group_1), value);
	}

	inline static int32_t get_offset_of_Members_2() { return static_cast<int32_t>(offsetof(ChangeMemberRoleRequest_t4028690435, ___Members_2)); }
	inline List_1_t1076385004 * get_Members_2() const { return ___Members_2; }
	inline List_1_t1076385004 ** get_address_of_Members_2() { return &___Members_2; }
	inline void set_Members_2(List_1_t1076385004 * value)
	{
		___Members_2 = value;
		Il2CppCodeGenWriteBarrier((&___Members_2), value);
	}

	inline static int32_t get_offset_of_OriginRoleId_3() { return static_cast<int32_t>(offsetof(ChangeMemberRoleRequest_t4028690435, ___OriginRoleId_3)); }
	inline String_t* get_OriginRoleId_3() const { return ___OriginRoleId_3; }
	inline String_t** get_address_of_OriginRoleId_3() { return &___OriginRoleId_3; }
	inline void set_OriginRoleId_3(String_t* value)
	{
		___OriginRoleId_3 = value;
		Il2CppCodeGenWriteBarrier((&___OriginRoleId_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANGEMEMBERROLEREQUEST_T4028690435_H
#ifndef CREATEGROUPREQUEST_T3166467504_H
#define CREATEGROUPREQUEST_T3166467504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.CreateGroupRequest
struct  CreateGroupRequest_t3166467504  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.CreateGroupRequest::Entity
	EntityKey_t3899277558 * ___Entity_0;
	// System.String PlayFab.GroupsModels.CreateGroupRequest::GroupName
	String_t* ___GroupName_1;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(CreateGroupRequest_t3166467504, ___Entity_0)); }
	inline EntityKey_t3899277558 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t3899277558 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t3899277558 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}

	inline static int32_t get_offset_of_GroupName_1() { return static_cast<int32_t>(offsetof(CreateGroupRequest_t3166467504, ___GroupName_1)); }
	inline String_t* get_GroupName_1() const { return ___GroupName_1; }
	inline String_t** get_address_of_GroupName_1() { return &___GroupName_1; }
	inline void set_GroupName_1(String_t* value)
	{
		___GroupName_1 = value;
		Il2CppCodeGenWriteBarrier((&___GroupName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEGROUPREQUEST_T3166467504_H
#ifndef CREATEGROUPROLEREQUEST_T217950697_H
#define CREATEGROUPROLEREQUEST_T217950697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.CreateGroupRoleRequest
struct  CreateGroupRoleRequest_t217950697  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.CreateGroupRoleRequest::Group
	EntityKey_t3899277558 * ___Group_0;
	// System.String PlayFab.GroupsModels.CreateGroupRoleRequest::RoleId
	String_t* ___RoleId_1;
	// System.String PlayFab.GroupsModels.CreateGroupRoleRequest::RoleName
	String_t* ___RoleName_2;

public:
	inline static int32_t get_offset_of_Group_0() { return static_cast<int32_t>(offsetof(CreateGroupRoleRequest_t217950697, ___Group_0)); }
	inline EntityKey_t3899277558 * get_Group_0() const { return ___Group_0; }
	inline EntityKey_t3899277558 ** get_address_of_Group_0() { return &___Group_0; }
	inline void set_Group_0(EntityKey_t3899277558 * value)
	{
		___Group_0 = value;
		Il2CppCodeGenWriteBarrier((&___Group_0), value);
	}

	inline static int32_t get_offset_of_RoleId_1() { return static_cast<int32_t>(offsetof(CreateGroupRoleRequest_t217950697, ___RoleId_1)); }
	inline String_t* get_RoleId_1() const { return ___RoleId_1; }
	inline String_t** get_address_of_RoleId_1() { return &___RoleId_1; }
	inline void set_RoleId_1(String_t* value)
	{
		___RoleId_1 = value;
		Il2CppCodeGenWriteBarrier((&___RoleId_1), value);
	}

	inline static int32_t get_offset_of_RoleName_2() { return static_cast<int32_t>(offsetof(CreateGroupRoleRequest_t217950697, ___RoleName_2)); }
	inline String_t* get_RoleName_2() const { return ___RoleName_2; }
	inline String_t** get_address_of_RoleName_2() { return &___RoleName_2; }
	inline void set_RoleName_2(String_t* value)
	{
		___RoleName_2 = value;
		Il2CppCodeGenWriteBarrier((&___RoleName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEGROUPROLEREQUEST_T217950697_H
#ifndef CREATEGROUPROLERESPONSE_T1003602002_H
#define CREATEGROUPROLERESPONSE_T1003602002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.CreateGroupRoleResponse
struct  CreateGroupRoleResponse_t1003602002  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Int32 PlayFab.GroupsModels.CreateGroupRoleResponse::ProfileVersion
	int32_t ___ProfileVersion_2;
	// System.String PlayFab.GroupsModels.CreateGroupRoleResponse::RoleId
	String_t* ___RoleId_3;
	// System.String PlayFab.GroupsModels.CreateGroupRoleResponse::RoleName
	String_t* ___RoleName_4;

public:
	inline static int32_t get_offset_of_ProfileVersion_2() { return static_cast<int32_t>(offsetof(CreateGroupRoleResponse_t1003602002, ___ProfileVersion_2)); }
	inline int32_t get_ProfileVersion_2() const { return ___ProfileVersion_2; }
	inline int32_t* get_address_of_ProfileVersion_2() { return &___ProfileVersion_2; }
	inline void set_ProfileVersion_2(int32_t value)
	{
		___ProfileVersion_2 = value;
	}

	inline static int32_t get_offset_of_RoleId_3() { return static_cast<int32_t>(offsetof(CreateGroupRoleResponse_t1003602002, ___RoleId_3)); }
	inline String_t* get_RoleId_3() const { return ___RoleId_3; }
	inline String_t** get_address_of_RoleId_3() { return &___RoleId_3; }
	inline void set_RoleId_3(String_t* value)
	{
		___RoleId_3 = value;
		Il2CppCodeGenWriteBarrier((&___RoleId_3), value);
	}

	inline static int32_t get_offset_of_RoleName_4() { return static_cast<int32_t>(offsetof(CreateGroupRoleResponse_t1003602002, ___RoleName_4)); }
	inline String_t* get_RoleName_4() const { return ___RoleName_4; }
	inline String_t** get_address_of_RoleName_4() { return &___RoleName_4; }
	inline void set_RoleName_4(String_t* value)
	{
		___RoleName_4 = value;
		Il2CppCodeGenWriteBarrier((&___RoleName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEGROUPROLERESPONSE_T1003602002_H
#ifndef DELETEGROUPREQUEST_T1041266137_H
#define DELETEGROUPREQUEST_T1041266137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.DeleteGroupRequest
struct  DeleteGroupRequest_t1041266137  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.DeleteGroupRequest::Group
	EntityKey_t3899277558 * ___Group_0;

public:
	inline static int32_t get_offset_of_Group_0() { return static_cast<int32_t>(offsetof(DeleteGroupRequest_t1041266137, ___Group_0)); }
	inline EntityKey_t3899277558 * get_Group_0() const { return ___Group_0; }
	inline EntityKey_t3899277558 ** get_address_of_Group_0() { return &___Group_0; }
	inline void set_Group_0(EntityKey_t3899277558 * value)
	{
		___Group_0 = value;
		Il2CppCodeGenWriteBarrier((&___Group_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELETEGROUPREQUEST_T1041266137_H
#ifndef DELETEROLEREQUEST_T2674433510_H
#define DELETEROLEREQUEST_T2674433510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.DeleteRoleRequest
struct  DeleteRoleRequest_t2674433510  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.DeleteRoleRequest::Group
	EntityKey_t3899277558 * ___Group_0;
	// System.String PlayFab.GroupsModels.DeleteRoleRequest::RoleId
	String_t* ___RoleId_1;

public:
	inline static int32_t get_offset_of_Group_0() { return static_cast<int32_t>(offsetof(DeleteRoleRequest_t2674433510, ___Group_0)); }
	inline EntityKey_t3899277558 * get_Group_0() const { return ___Group_0; }
	inline EntityKey_t3899277558 ** get_address_of_Group_0() { return &___Group_0; }
	inline void set_Group_0(EntityKey_t3899277558 * value)
	{
		___Group_0 = value;
		Il2CppCodeGenWriteBarrier((&___Group_0), value);
	}

	inline static int32_t get_offset_of_RoleId_1() { return static_cast<int32_t>(offsetof(DeleteRoleRequest_t2674433510, ___RoleId_1)); }
	inline String_t* get_RoleId_1() const { return ___RoleId_1; }
	inline String_t** get_address_of_RoleId_1() { return &___RoleId_1; }
	inline void set_RoleId_1(String_t* value)
	{
		___RoleId_1 = value;
		Il2CppCodeGenWriteBarrier((&___RoleId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELETEROLEREQUEST_T2674433510_H
#ifndef EMPTYRESPONSE_T1044150585_H
#define EMPTYRESPONSE_T1044150585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.EmptyResponse
struct  EmptyResponse_t1044150585  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYRESPONSE_T1044150585_H
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
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
#ifndef NULLABLE_1_T378540539_H
#define NULLABLE_1_T378540539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t378540539 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T378540539_H
#ifndef NULLABLE_1_T4282624060_H
#define NULLABLE_1_T4282624060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.UInt32>
struct  Nullable_1_t4282624060 
{
public:
	// T System.Nullable`1::value
	uint32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4282624060, ___value_0)); }
	inline uint32_t get_value_0() const { return ___value_0; }
	inline uint32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4282624060, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T4282624060_H
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
#ifndef CURRENCY_T3041833584_H
#define CURRENCY_T3041833584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.Currency
struct  Currency_t3041833584 
{
public:
	// System.Int32 PlayFab.ClientModels.Currency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Currency_t3041833584, ___value___1)); }
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
#endif // CURRENCY_T3041833584_H
#ifndef TITLEACTIVATIONSTATUS_T1551193330_H
#define TITLEACTIVATIONSTATUS_T1551193330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.TitleActivationStatus
struct  TitleActivationStatus_t1551193330 
{
public:
	// System.Int32 PlayFab.ClientModels.TitleActivationStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TitleActivationStatus_t1551193330, ___value___1)); }
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
#endif // TITLEACTIVATIONSTATUS_T1551193330_H
#ifndef USERDATAPERMISSION_T2025516611_H
#define USERDATAPERMISSION_T2025516611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserDataPermission
struct  UserDataPermission_t2025516611 
{
public:
	// System.Int32 PlayFab.ClientModels.UserDataPermission::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserDataPermission_t2025516611, ___value___1)); }
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
#endif // USERDATAPERMISSION_T2025516611_H
#ifndef USERORIGINATION_T3308350310_H
#define USERORIGINATION_T3308350310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserOrigination
struct  UserOrigination_t3308350310 
{
public:
	// System.Int32 PlayFab.ClientModels.UserOrigination::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserOrigination_t3308350310, ___value___1)); }
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
#endif // USERORIGINATION_T3308350310_H
#ifndef VALIDATEGOOGLEPLAYPURCHASEREQUEST_T572573556_H
#define VALIDATEGOOGLEPLAYPURCHASEREQUEST_T572573556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest
struct  ValidateGooglePlayPurchaseRequest_t572573556  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::CurrencyCode
	String_t* ___CurrencyCode_0;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::PurchasePrice
	Nullable_1_t4282624060  ___PurchasePrice_1;
	// System.String PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::ReceiptJson
	String_t* ___ReceiptJson_2;
	// System.String PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::Signature
	String_t* ___Signature_3;

public:
	inline static int32_t get_offset_of_CurrencyCode_0() { return static_cast<int32_t>(offsetof(ValidateGooglePlayPurchaseRequest_t572573556, ___CurrencyCode_0)); }
	inline String_t* get_CurrencyCode_0() const { return ___CurrencyCode_0; }
	inline String_t** get_address_of_CurrencyCode_0() { return &___CurrencyCode_0; }
	inline void set_CurrencyCode_0(String_t* value)
	{
		___CurrencyCode_0 = value;
		Il2CppCodeGenWriteBarrier((&___CurrencyCode_0), value);
	}

	inline static int32_t get_offset_of_PurchasePrice_1() { return static_cast<int32_t>(offsetof(ValidateGooglePlayPurchaseRequest_t572573556, ___PurchasePrice_1)); }
	inline Nullable_1_t4282624060  get_PurchasePrice_1() const { return ___PurchasePrice_1; }
	inline Nullable_1_t4282624060 * get_address_of_PurchasePrice_1() { return &___PurchasePrice_1; }
	inline void set_PurchasePrice_1(Nullable_1_t4282624060  value)
	{
		___PurchasePrice_1 = value;
	}

	inline static int32_t get_offset_of_ReceiptJson_2() { return static_cast<int32_t>(offsetof(ValidateGooglePlayPurchaseRequest_t572573556, ___ReceiptJson_2)); }
	inline String_t* get_ReceiptJson_2() const { return ___ReceiptJson_2; }
	inline String_t** get_address_of_ReceiptJson_2() { return &___ReceiptJson_2; }
	inline void set_ReceiptJson_2(String_t* value)
	{
		___ReceiptJson_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiptJson_2), value);
	}

	inline static int32_t get_offset_of_Signature_3() { return static_cast<int32_t>(offsetof(ValidateGooglePlayPurchaseRequest_t572573556, ___Signature_3)); }
	inline String_t* get_Signature_3() const { return ___Signature_3; }
	inline String_t** get_address_of_Signature_3() { return &___Signature_3; }
	inline void set_Signature_3(String_t* value)
	{
		___Signature_3 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATEGOOGLEPLAYPURCHASEREQUEST_T572573556_H
#ifndef CLOUDSCRIPTREVISIONOPTION_T2675076833_H
#define CLOUDSCRIPTREVISIONOPTION_T2675076833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.CloudScriptModels.CloudScriptRevisionOption
struct  CloudScriptRevisionOption_t2675076833 
{
public:
	// System.Int32 PlayFab.CloudScriptModels.CloudScriptRevisionOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CloudScriptRevisionOption_t2675076833, ___value___1)); }
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
#endif // CLOUDSCRIPTREVISIONOPTION_T2675076833_H
#ifndef EXECUTECLOUDSCRIPTRESULT_T1634170761_H
#define EXECUTECLOUDSCRIPTRESULT_T1634170761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.CloudScriptModels.ExecuteCloudScriptResult
struct  ExecuteCloudScriptResult_t1634170761  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Int32 PlayFab.CloudScriptModels.ExecuteCloudScriptResult::APIRequestsIssued
	int32_t ___APIRequestsIssued_2;
	// PlayFab.CloudScriptModels.ScriptExecutionError PlayFab.CloudScriptModels.ExecuteCloudScriptResult::Error
	ScriptExecutionError_t2088752497 * ___Error_3;
	// System.Double PlayFab.CloudScriptModels.ExecuteCloudScriptResult::ExecutionTimeSeconds
	double ___ExecutionTimeSeconds_4;
	// System.String PlayFab.CloudScriptModels.ExecuteCloudScriptResult::FunctionName
	String_t* ___FunctionName_5;
	// System.Object PlayFab.CloudScriptModels.ExecuteCloudScriptResult::FunctionResult
	RuntimeObject * ___FunctionResult_6;
	// System.Nullable`1<System.Boolean> PlayFab.CloudScriptModels.ExecuteCloudScriptResult::FunctionResultTooLarge
	Nullable_1_t1819850047  ___FunctionResultTooLarge_7;
	// System.Int32 PlayFab.CloudScriptModels.ExecuteCloudScriptResult::HttpRequestsIssued
	int32_t ___HttpRequestsIssued_8;
	// System.Collections.Generic.List`1<PlayFab.CloudScriptModels.LogStatement> PlayFab.CloudScriptModels.ExecuteCloudScriptResult::Logs
	List_1_t1575216995 * ___Logs_9;
	// System.Nullable`1<System.Boolean> PlayFab.CloudScriptModels.ExecuteCloudScriptResult::LogsTooLarge
	Nullable_1_t1819850047  ___LogsTooLarge_10;
	// System.UInt32 PlayFab.CloudScriptModels.ExecuteCloudScriptResult::MemoryConsumedBytes
	uint32_t ___MemoryConsumedBytes_11;
	// System.Double PlayFab.CloudScriptModels.ExecuteCloudScriptResult::ProcessorTimeSeconds
	double ___ProcessorTimeSeconds_12;
	// System.Int32 PlayFab.CloudScriptModels.ExecuteCloudScriptResult::Revision
	int32_t ___Revision_13;

public:
	inline static int32_t get_offset_of_APIRequestsIssued_2() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1634170761, ___APIRequestsIssued_2)); }
	inline int32_t get_APIRequestsIssued_2() const { return ___APIRequestsIssued_2; }
	inline int32_t* get_address_of_APIRequestsIssued_2() { return &___APIRequestsIssued_2; }
	inline void set_APIRequestsIssued_2(int32_t value)
	{
		___APIRequestsIssued_2 = value;
	}

	inline static int32_t get_offset_of_Error_3() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1634170761, ___Error_3)); }
	inline ScriptExecutionError_t2088752497 * get_Error_3() const { return ___Error_3; }
	inline ScriptExecutionError_t2088752497 ** get_address_of_Error_3() { return &___Error_3; }
	inline void set_Error_3(ScriptExecutionError_t2088752497 * value)
	{
		___Error_3 = value;
		Il2CppCodeGenWriteBarrier((&___Error_3), value);
	}

	inline static int32_t get_offset_of_ExecutionTimeSeconds_4() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1634170761, ___ExecutionTimeSeconds_4)); }
	inline double get_ExecutionTimeSeconds_4() const { return ___ExecutionTimeSeconds_4; }
	inline double* get_address_of_ExecutionTimeSeconds_4() { return &___ExecutionTimeSeconds_4; }
	inline void set_ExecutionTimeSeconds_4(double value)
	{
		___ExecutionTimeSeconds_4 = value;
	}

	inline static int32_t get_offset_of_FunctionName_5() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1634170761, ___FunctionName_5)); }
	inline String_t* get_FunctionName_5() const { return ___FunctionName_5; }
	inline String_t** get_address_of_FunctionName_5() { return &___FunctionName_5; }
	inline void set_FunctionName_5(String_t* value)
	{
		___FunctionName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionName_5), value);
	}

	inline static int32_t get_offset_of_FunctionResult_6() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1634170761, ___FunctionResult_6)); }
	inline RuntimeObject * get_FunctionResult_6() const { return ___FunctionResult_6; }
	inline RuntimeObject ** get_address_of_FunctionResult_6() { return &___FunctionResult_6; }
	inline void set_FunctionResult_6(RuntimeObject * value)
	{
		___FunctionResult_6 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionResult_6), value);
	}

	inline static int32_t get_offset_of_FunctionResultTooLarge_7() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1634170761, ___FunctionResultTooLarge_7)); }
	inline Nullable_1_t1819850047  get_FunctionResultTooLarge_7() const { return ___FunctionResultTooLarge_7; }
	inline Nullable_1_t1819850047 * get_address_of_FunctionResultTooLarge_7() { return &___FunctionResultTooLarge_7; }
	inline void set_FunctionResultTooLarge_7(Nullable_1_t1819850047  value)
	{
		___FunctionResultTooLarge_7 = value;
	}

	inline static int32_t get_offset_of_HttpRequestsIssued_8() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1634170761, ___HttpRequestsIssued_8)); }
	inline int32_t get_HttpRequestsIssued_8() const { return ___HttpRequestsIssued_8; }
	inline int32_t* get_address_of_HttpRequestsIssued_8() { return &___HttpRequestsIssued_8; }
	inline void set_HttpRequestsIssued_8(int32_t value)
	{
		___HttpRequestsIssued_8 = value;
	}

	inline static int32_t get_offset_of_Logs_9() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1634170761, ___Logs_9)); }
	inline List_1_t1575216995 * get_Logs_9() const { return ___Logs_9; }
	inline List_1_t1575216995 ** get_address_of_Logs_9() { return &___Logs_9; }
	inline void set_Logs_9(List_1_t1575216995 * value)
	{
		___Logs_9 = value;
		Il2CppCodeGenWriteBarrier((&___Logs_9), value);
	}

	inline static int32_t get_offset_of_LogsTooLarge_10() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1634170761, ___LogsTooLarge_10)); }
	inline Nullable_1_t1819850047  get_LogsTooLarge_10() const { return ___LogsTooLarge_10; }
	inline Nullable_1_t1819850047 * get_address_of_LogsTooLarge_10() { return &___LogsTooLarge_10; }
	inline void set_LogsTooLarge_10(Nullable_1_t1819850047  value)
	{
		___LogsTooLarge_10 = value;
	}

	inline static int32_t get_offset_of_MemoryConsumedBytes_11() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1634170761, ___MemoryConsumedBytes_11)); }
	inline uint32_t get_MemoryConsumedBytes_11() const { return ___MemoryConsumedBytes_11; }
	inline uint32_t* get_address_of_MemoryConsumedBytes_11() { return &___MemoryConsumedBytes_11; }
	inline void set_MemoryConsumedBytes_11(uint32_t value)
	{
		___MemoryConsumedBytes_11 = value;
	}

	inline static int32_t get_offset_of_ProcessorTimeSeconds_12() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1634170761, ___ProcessorTimeSeconds_12)); }
	inline double get_ProcessorTimeSeconds_12() const { return ___ProcessorTimeSeconds_12; }
	inline double* get_address_of_ProcessorTimeSeconds_12() { return &___ProcessorTimeSeconds_12; }
	inline void set_ProcessorTimeSeconds_12(double value)
	{
		___ProcessorTimeSeconds_12 = value;
	}

	inline static int32_t get_offset_of_Revision_13() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1634170761, ___Revision_13)); }
	inline int32_t get_Revision_13() const { return ___Revision_13; }
	inline int32_t* get_address_of_Revision_13() { return &___Revision_13; }
	inline void set_Revision_13(int32_t value)
	{
		___Revision_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTECLOUDSCRIPTRESULT_T1634170761_H
#ifndef ABORTFILEUPLOADSREQUEST_T1360817169_H
#define ABORTFILEUPLOADSREQUEST_T1360817169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.AbortFileUploadsRequest
struct  AbortFileUploadsRequest_t1360817169  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.AbortFileUploadsRequest::Entity
	EntityKey_t1066008332 * ___Entity_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.DataModels.AbortFileUploadsRequest::FileNames
	List_1_t3319525431 * ___FileNames_1;
	// System.Nullable`1<System.Int32> PlayFab.DataModels.AbortFileUploadsRequest::ProfileVersion
	Nullable_1_t378540539  ___ProfileVersion_2;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(AbortFileUploadsRequest_t1360817169, ___Entity_0)); }
	inline EntityKey_t1066008332 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t1066008332 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}

	inline static int32_t get_offset_of_FileNames_1() { return static_cast<int32_t>(offsetof(AbortFileUploadsRequest_t1360817169, ___FileNames_1)); }
	inline List_1_t3319525431 * get_FileNames_1() const { return ___FileNames_1; }
	inline List_1_t3319525431 ** get_address_of_FileNames_1() { return &___FileNames_1; }
	inline void set_FileNames_1(List_1_t3319525431 * value)
	{
		___FileNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___FileNames_1), value);
	}

	inline static int32_t get_offset_of_ProfileVersion_2() { return static_cast<int32_t>(offsetof(AbortFileUploadsRequest_t1360817169, ___ProfileVersion_2)); }
	inline Nullable_1_t378540539  get_ProfileVersion_2() const { return ___ProfileVersion_2; }
	inline Nullable_1_t378540539 * get_address_of_ProfileVersion_2() { return &___ProfileVersion_2; }
	inline void set_ProfileVersion_2(Nullable_1_t378540539  value)
	{
		___ProfileVersion_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABORTFILEUPLOADSREQUEST_T1360817169_H
#ifndef DELETEFILESREQUEST_T1464197789_H
#define DELETEFILESREQUEST_T1464197789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.DeleteFilesRequest
struct  DeleteFilesRequest_t1464197789  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.DeleteFilesRequest::Entity
	EntityKey_t1066008332 * ___Entity_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.DataModels.DeleteFilesRequest::FileNames
	List_1_t3319525431 * ___FileNames_1;
	// System.Nullable`1<System.Int32> PlayFab.DataModels.DeleteFilesRequest::ProfileVersion
	Nullable_1_t378540539  ___ProfileVersion_2;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(DeleteFilesRequest_t1464197789, ___Entity_0)); }
	inline EntityKey_t1066008332 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t1066008332 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}

	inline static int32_t get_offset_of_FileNames_1() { return static_cast<int32_t>(offsetof(DeleteFilesRequest_t1464197789, ___FileNames_1)); }
	inline List_1_t3319525431 * get_FileNames_1() const { return ___FileNames_1; }
	inline List_1_t3319525431 ** get_address_of_FileNames_1() { return &___FileNames_1; }
	inline void set_FileNames_1(List_1_t3319525431 * value)
	{
		___FileNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___FileNames_1), value);
	}

	inline static int32_t get_offset_of_ProfileVersion_2() { return static_cast<int32_t>(offsetof(DeleteFilesRequest_t1464197789, ___ProfileVersion_2)); }
	inline Nullable_1_t378540539  get_ProfileVersion_2() const { return ___ProfileVersion_2; }
	inline Nullable_1_t378540539 * get_address_of_ProfileVersion_2() { return &___ProfileVersion_2; }
	inline void set_ProfileVersion_2(Nullable_1_t378540539  value)
	{
		___ProfileVersion_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELETEFILESREQUEST_T1464197789_H
#ifndef GETOBJECTSREQUEST_T1605754222_H
#define GETOBJECTSREQUEST_T1605754222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.GetObjectsRequest
struct  GetObjectsRequest_t1605754222  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.GetObjectsRequest::Entity
	EntityKey_t1066008332 * ___Entity_0;
	// System.Nullable`1<System.Boolean> PlayFab.DataModels.GetObjectsRequest::EscapeObject
	Nullable_1_t1819850047  ___EscapeObject_1;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(GetObjectsRequest_t1605754222, ___Entity_0)); }
	inline EntityKey_t1066008332 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t1066008332 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}

	inline static int32_t get_offset_of_EscapeObject_1() { return static_cast<int32_t>(offsetof(GetObjectsRequest_t1605754222, ___EscapeObject_1)); }
	inline Nullable_1_t1819850047  get_EscapeObject_1() const { return ___EscapeObject_1; }
	inline Nullable_1_t1819850047 * get_address_of_EscapeObject_1() { return &___EscapeObject_1; }
	inline void set_EscapeObject_1(Nullable_1_t1819850047  value)
	{
		___EscapeObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETOBJECTSREQUEST_T1605754222_H
#ifndef INITIATEFILEUPLOADSREQUEST_T3669402982_H
#define INITIATEFILEUPLOADSREQUEST_T3669402982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.InitiateFileUploadsRequest
struct  InitiateFileUploadsRequest_t3669402982  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.InitiateFileUploadsRequest::Entity
	EntityKey_t1066008332 * ___Entity_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.DataModels.InitiateFileUploadsRequest::FileNames
	List_1_t3319525431 * ___FileNames_1;
	// System.Nullable`1<System.Int32> PlayFab.DataModels.InitiateFileUploadsRequest::ProfileVersion
	Nullable_1_t378540539  ___ProfileVersion_2;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(InitiateFileUploadsRequest_t3669402982, ___Entity_0)); }
	inline EntityKey_t1066008332 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t1066008332 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}

	inline static int32_t get_offset_of_FileNames_1() { return static_cast<int32_t>(offsetof(InitiateFileUploadsRequest_t3669402982, ___FileNames_1)); }
	inline List_1_t3319525431 * get_FileNames_1() const { return ___FileNames_1; }
	inline List_1_t3319525431 ** get_address_of_FileNames_1() { return &___FileNames_1; }
	inline void set_FileNames_1(List_1_t3319525431 * value)
	{
		___FileNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___FileNames_1), value);
	}

	inline static int32_t get_offset_of_ProfileVersion_2() { return static_cast<int32_t>(offsetof(InitiateFileUploadsRequest_t3669402982, ___ProfileVersion_2)); }
	inline Nullable_1_t378540539  get_ProfileVersion_2() const { return ___ProfileVersion_2; }
	inline Nullable_1_t378540539 * get_address_of_ProfileVersion_2() { return &___ProfileVersion_2; }
	inline void set_ProfileVersion_2(Nullable_1_t378540539  value)
	{
		___ProfileVersion_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIATEFILEUPLOADSREQUEST_T3669402982_H
#ifndef OPERATIONTYPES_T3559488056_H
#define OPERATIONTYPES_T3559488056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.OperationTypes
struct  OperationTypes_t3559488056 
{
public:
	// System.Int32 PlayFab.DataModels.OperationTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperationTypes_t3559488056, ___value___1)); }
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
#endif // OPERATIONTYPES_T3559488056_H
#ifndef SETOBJECT_T3400833426_H
#define SETOBJECT_T3400833426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.SetObject
struct  SetObject_t3400833426  : public RuntimeObject
{
public:
	// System.Object PlayFab.DataModels.SetObject::DataObject
	RuntimeObject * ___DataObject_0;
	// System.Nullable`1<System.Boolean> PlayFab.DataModels.SetObject::DeleteObject
	Nullable_1_t1819850047  ___DeleteObject_1;
	// System.String PlayFab.DataModels.SetObject::EscapedDataObject
	String_t* ___EscapedDataObject_2;
	// System.String PlayFab.DataModels.SetObject::ObjectName
	String_t* ___ObjectName_3;

public:
	inline static int32_t get_offset_of_DataObject_0() { return static_cast<int32_t>(offsetof(SetObject_t3400833426, ___DataObject_0)); }
	inline RuntimeObject * get_DataObject_0() const { return ___DataObject_0; }
	inline RuntimeObject ** get_address_of_DataObject_0() { return &___DataObject_0; }
	inline void set_DataObject_0(RuntimeObject * value)
	{
		___DataObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___DataObject_0), value);
	}

	inline static int32_t get_offset_of_DeleteObject_1() { return static_cast<int32_t>(offsetof(SetObject_t3400833426, ___DeleteObject_1)); }
	inline Nullable_1_t1819850047  get_DeleteObject_1() const { return ___DeleteObject_1; }
	inline Nullable_1_t1819850047 * get_address_of_DeleteObject_1() { return &___DeleteObject_1; }
	inline void set_DeleteObject_1(Nullable_1_t1819850047  value)
	{
		___DeleteObject_1 = value;
	}

	inline static int32_t get_offset_of_EscapedDataObject_2() { return static_cast<int32_t>(offsetof(SetObject_t3400833426, ___EscapedDataObject_2)); }
	inline String_t* get_EscapedDataObject_2() const { return ___EscapedDataObject_2; }
	inline String_t** get_address_of_EscapedDataObject_2() { return &___EscapedDataObject_2; }
	inline void set_EscapedDataObject_2(String_t* value)
	{
		___EscapedDataObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___EscapedDataObject_2), value);
	}

	inline static int32_t get_offset_of_ObjectName_3() { return static_cast<int32_t>(offsetof(SetObject_t3400833426, ___ObjectName_3)); }
	inline String_t* get_ObjectName_3() const { return ___ObjectName_3; }
	inline String_t** get_address_of_ObjectName_3() { return &___ObjectName_3; }
	inline void set_ObjectName_3(String_t* value)
	{
		___ObjectName_3 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectName_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETOBJECT_T3400833426_H
#ifndef SETOBJECTSREQUEST_T1997088269_H
#define SETOBJECTSREQUEST_T1997088269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.SetObjectsRequest
struct  SetObjectsRequest_t1997088269  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.DataModels.EntityKey PlayFab.DataModels.SetObjectsRequest::Entity
	EntityKey_t1066008332 * ___Entity_0;
	// System.Nullable`1<System.Int32> PlayFab.DataModels.SetObjectsRequest::ExpectedProfileVersion
	Nullable_1_t378540539  ___ExpectedProfileVersion_1;
	// System.Collections.Generic.List`1<PlayFab.DataModels.SetObject> PlayFab.DataModels.SetObjectsRequest::Objects
	List_1_t577940872 * ___Objects_2;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(SetObjectsRequest_t1997088269, ___Entity_0)); }
	inline EntityKey_t1066008332 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t1066008332 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t1066008332 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}

	inline static int32_t get_offset_of_ExpectedProfileVersion_1() { return static_cast<int32_t>(offsetof(SetObjectsRequest_t1997088269, ___ExpectedProfileVersion_1)); }
	inline Nullable_1_t378540539  get_ExpectedProfileVersion_1() const { return ___ExpectedProfileVersion_1; }
	inline Nullable_1_t378540539 * get_address_of_ExpectedProfileVersion_1() { return &___ExpectedProfileVersion_1; }
	inline void set_ExpectedProfileVersion_1(Nullable_1_t378540539  value)
	{
		___ExpectedProfileVersion_1 = value;
	}

	inline static int32_t get_offset_of_Objects_2() { return static_cast<int32_t>(offsetof(SetObjectsRequest_t1997088269, ___Objects_2)); }
	inline List_1_t577940872 * get_Objects_2() const { return ___Objects_2; }
	inline List_1_t577940872 ** get_address_of_Objects_2() { return &___Objects_2; }
	inline void set_Objects_2(List_1_t577940872 * value)
	{
		___Objects_2 = value;
		Il2CppCodeGenWriteBarrier((&___Objects_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETOBJECTSREQUEST_T1997088269_H
#ifndef APPLYTOGROUPREQUEST_T34617838_H
#define APPLYTOGROUPREQUEST_T34617838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.ApplyToGroupRequest
struct  ApplyToGroupRequest_t34617838  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.GroupsModels.ApplyToGroupRequest::AutoAcceptOutstandingInvite
	Nullable_1_t1819850047  ___AutoAcceptOutstandingInvite_0;
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.ApplyToGroupRequest::Entity
	EntityKey_t3899277558 * ___Entity_1;
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.ApplyToGroupRequest::Group
	EntityKey_t3899277558 * ___Group_2;

public:
	inline static int32_t get_offset_of_AutoAcceptOutstandingInvite_0() { return static_cast<int32_t>(offsetof(ApplyToGroupRequest_t34617838, ___AutoAcceptOutstandingInvite_0)); }
	inline Nullable_1_t1819850047  get_AutoAcceptOutstandingInvite_0() const { return ___AutoAcceptOutstandingInvite_0; }
	inline Nullable_1_t1819850047 * get_address_of_AutoAcceptOutstandingInvite_0() { return &___AutoAcceptOutstandingInvite_0; }
	inline void set_AutoAcceptOutstandingInvite_0(Nullable_1_t1819850047  value)
	{
		___AutoAcceptOutstandingInvite_0 = value;
	}

	inline static int32_t get_offset_of_Entity_1() { return static_cast<int32_t>(offsetof(ApplyToGroupRequest_t34617838, ___Entity_1)); }
	inline EntityKey_t3899277558 * get_Entity_1() const { return ___Entity_1; }
	inline EntityKey_t3899277558 ** get_address_of_Entity_1() { return &___Entity_1; }
	inline void set_Entity_1(EntityKey_t3899277558 * value)
	{
		___Entity_1 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_1), value);
	}

	inline static int32_t get_offset_of_Group_2() { return static_cast<int32_t>(offsetof(ApplyToGroupRequest_t34617838, ___Group_2)); }
	inline EntityKey_t3899277558 * get_Group_2() const { return ___Group_2; }
	inline EntityKey_t3899277558 ** get_address_of_Group_2() { return &___Group_2; }
	inline void set_Group_2(EntityKey_t3899277558 * value)
	{
		___Group_2 = value;
		Il2CppCodeGenWriteBarrier((&___Group_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLYTOGROUPREQUEST_T34617838_H
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
#ifndef NULLABLE_1_T469428370_H
#define NULLABLE_1_T469428370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.Currency>
struct  Nullable_1_t469428370 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t469428370, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t469428370, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T469428370_H
#ifndef NULLABLE_1_T3273755412_H
#define NULLABLE_1_T3273755412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.TitleActivationStatus>
struct  Nullable_1_t3273755412 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3273755412, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3273755412, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3273755412_H
#ifndef NULLABLE_1_T3748078693_H
#define NULLABLE_1_T3748078693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.UserDataPermission>
struct  Nullable_1_t3748078693 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3748078693, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3748078693, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3748078693_H
#ifndef NULLABLE_1_T735945096_H
#define NULLABLE_1_T735945096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.UserOrigination>
struct  Nullable_1_t735945096 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t735945096, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t735945096, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T735945096_H
#ifndef NULLABLE_1_T102671619_H
#define NULLABLE_1_T102671619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.CloudScriptModels.CloudScriptRevisionOption>
struct  Nullable_1_t102671619 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t102671619, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t102671619, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T102671619_H
#ifndef NULLABLE_1_T987082842_H
#define NULLABLE_1_T987082842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.DataModels.OperationTypes>
struct  Nullable_1_t987082842 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t987082842, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t987082842, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T987082842_H
#ifndef UPDATESHAREDGROUPDATAREQUEST_T1607840879_H
#define UPDATESHAREDGROUPDATAREQUEST_T1607840879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdateSharedGroupDataRequest
struct  UpdateSharedGroupDataRequest_t1607840879  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateSharedGroupDataRequest::Data
	Dictionary_2_t1632706988 * ___Data_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.UpdateSharedGroupDataRequest::KeysToRemove
	List_1_t3319525431 * ___KeysToRemove_1;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.UpdateSharedGroupDataRequest::Permission
	Nullable_1_t3748078693  ___Permission_2;
	// System.String PlayFab.ClientModels.UpdateSharedGroupDataRequest::SharedGroupId
	String_t* ___SharedGroupId_3;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(UpdateSharedGroupDataRequest_t1607840879, ___Data_0)); }
	inline Dictionary_2_t1632706988 * get_Data_0() const { return ___Data_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(Dictionary_2_t1632706988 * value)
	{
		___Data_0 = value;
		Il2CppCodeGenWriteBarrier((&___Data_0), value);
	}

	inline static int32_t get_offset_of_KeysToRemove_1() { return static_cast<int32_t>(offsetof(UpdateSharedGroupDataRequest_t1607840879, ___KeysToRemove_1)); }
	inline List_1_t3319525431 * get_KeysToRemove_1() const { return ___KeysToRemove_1; }
	inline List_1_t3319525431 ** get_address_of_KeysToRemove_1() { return &___KeysToRemove_1; }
	inline void set_KeysToRemove_1(List_1_t3319525431 * value)
	{
		___KeysToRemove_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeysToRemove_1), value);
	}

	inline static int32_t get_offset_of_Permission_2() { return static_cast<int32_t>(offsetof(UpdateSharedGroupDataRequest_t1607840879, ___Permission_2)); }
	inline Nullable_1_t3748078693  get_Permission_2() const { return ___Permission_2; }
	inline Nullable_1_t3748078693 * get_address_of_Permission_2() { return &___Permission_2; }
	inline void set_Permission_2(Nullable_1_t3748078693  value)
	{
		___Permission_2 = value;
	}

	inline static int32_t get_offset_of_SharedGroupId_3() { return static_cast<int32_t>(offsetof(UpdateSharedGroupDataRequest_t1607840879, ___SharedGroupId_3)); }
	inline String_t* get_SharedGroupId_3() const { return ___SharedGroupId_3; }
	inline String_t** get_address_of_SharedGroupId_3() { return &___SharedGroupId_3; }
	inline void set_SharedGroupId_3(String_t* value)
	{
		___SharedGroupId_3 = value;
		Il2CppCodeGenWriteBarrier((&___SharedGroupId_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATESHAREDGROUPDATAREQUEST_T1607840879_H
#ifndef UPDATEUSERDATAREQUEST_T585447437_H
#define UPDATEUSERDATAREQUEST_T585447437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdateUserDataRequest
struct  UpdateUserDataRequest_t585447437  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateUserDataRequest::Data
	Dictionary_2_t1632706988 * ___Data_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.UpdateUserDataRequest::KeysToRemove
	List_1_t3319525431 * ___KeysToRemove_1;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.UpdateUserDataRequest::Permission
	Nullable_1_t3748078693  ___Permission_2;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(UpdateUserDataRequest_t585447437, ___Data_0)); }
	inline Dictionary_2_t1632706988 * get_Data_0() const { return ___Data_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(Dictionary_2_t1632706988 * value)
	{
		___Data_0 = value;
		Il2CppCodeGenWriteBarrier((&___Data_0), value);
	}

	inline static int32_t get_offset_of_KeysToRemove_1() { return static_cast<int32_t>(offsetof(UpdateUserDataRequest_t585447437, ___KeysToRemove_1)); }
	inline List_1_t3319525431 * get_KeysToRemove_1() const { return ___KeysToRemove_1; }
	inline List_1_t3319525431 ** get_address_of_KeysToRemove_1() { return &___KeysToRemove_1; }
	inline void set_KeysToRemove_1(List_1_t3319525431 * value)
	{
		___KeysToRemove_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeysToRemove_1), value);
	}

	inline static int32_t get_offset_of_Permission_2() { return static_cast<int32_t>(offsetof(UpdateUserDataRequest_t585447437, ___Permission_2)); }
	inline Nullable_1_t3748078693  get_Permission_2() const { return ___Permission_2; }
	inline Nullable_1_t3748078693 * get_address_of_Permission_2() { return &___Permission_2; }
	inline void set_Permission_2(Nullable_1_t3748078693  value)
	{
		___Permission_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEUSERDATAREQUEST_T585447437_H
#ifndef USERACCOUNTINFO_T2687855647_H
#define USERACCOUNTINFO_T2687855647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserAccountInfo
struct  UserAccountInfo_t2687855647  : public RuntimeObject
{
public:
	// PlayFab.ClientModels.UserAndroidDeviceInfo PlayFab.ClientModels.UserAccountInfo::AndroidDeviceInfo
	UserAndroidDeviceInfo_t3243313677 * ___AndroidDeviceInfo_0;
	// System.DateTime PlayFab.ClientModels.UserAccountInfo::Created
	DateTime_t3738529785  ___Created_1;
	// PlayFab.ClientModels.UserCustomIdInfo PlayFab.ClientModels.UserAccountInfo::CustomIdInfo
	UserCustomIdInfo_t2526912300 * ___CustomIdInfo_2;
	// PlayFab.ClientModels.UserFacebookInfo PlayFab.ClientModels.UserAccountInfo::FacebookInfo
	UserFacebookInfo_t1027919101 * ___FacebookInfo_3;
	// PlayFab.ClientModels.UserFacebookInstantGamesIdInfo PlayFab.ClientModels.UserAccountInfo::FacebookInstantGamesIdInfo
	UserFacebookInstantGamesIdInfo_t975760407 * ___FacebookInstantGamesIdInfo_4;
	// PlayFab.ClientModels.UserGameCenterInfo PlayFab.ClientModels.UserAccountInfo::GameCenterInfo
	UserGameCenterInfo_t1831595825 * ___GameCenterInfo_5;
	// PlayFab.ClientModels.UserGoogleInfo PlayFab.ClientModels.UserAccountInfo::GoogleInfo
	UserGoogleInfo_t2549595312 * ___GoogleInfo_6;
	// PlayFab.ClientModels.UserIosDeviceInfo PlayFab.ClientModels.UserAccountInfo::IosDeviceInfo
	UserIosDeviceInfo_t593505116 * ___IosDeviceInfo_7;
	// PlayFab.ClientModels.UserKongregateInfo PlayFab.ClientModels.UserAccountInfo::KongregateInfo
	UserKongregateInfo_t82251820 * ___KongregateInfo_8;
	// PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo PlayFab.ClientModels.UserAccountInfo::NintendoSwitchDeviceIdInfo
	UserNintendoSwitchDeviceIdInfo_t1115872661 * ___NintendoSwitchDeviceIdInfo_9;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.UserOpenIdInfo> PlayFab.ClientModels.UserAccountInfo::OpenIdInfo
	List_1_t1620071493 * ___OpenIdInfo_10;
	// System.String PlayFab.ClientModels.UserAccountInfo::PlayFabId
	String_t* ___PlayFabId_11;
	// PlayFab.ClientModels.UserPrivateAccountInfo PlayFab.ClientModels.UserAccountInfo::PrivateInfo
	UserPrivateAccountInfo_t2844482441 * ___PrivateInfo_12;
	// PlayFab.ClientModels.UserPsnInfo PlayFab.ClientModels.UserAccountInfo::PsnInfo
	UserPsnInfo_t1437888010 * ___PsnInfo_13;
	// PlayFab.ClientModels.UserSteamInfo PlayFab.ClientModels.UserAccountInfo::SteamInfo
	UserSteamInfo_t155181053 * ___SteamInfo_14;
	// PlayFab.ClientModels.UserTitleInfo PlayFab.ClientModels.UserAccountInfo::TitleInfo
	UserTitleInfo_t663336695 * ___TitleInfo_15;
	// PlayFab.ClientModels.UserTwitchInfo PlayFab.ClientModels.UserAccountInfo::TwitchInfo
	UserTwitchInfo_t3900925054 * ___TwitchInfo_16;
	// System.String PlayFab.ClientModels.UserAccountInfo::Username
	String_t* ___Username_17;
	// PlayFab.ClientModels.UserWindowsHelloInfo PlayFab.ClientModels.UserAccountInfo::WindowsHelloInfo
	UserWindowsHelloInfo_t225950329 * ___WindowsHelloInfo_18;
	// PlayFab.ClientModels.UserXboxInfo PlayFab.ClientModels.UserAccountInfo::XboxInfo
	UserXboxInfo_t1002111372 * ___XboxInfo_19;

public:
	inline static int32_t get_offset_of_AndroidDeviceInfo_0() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___AndroidDeviceInfo_0)); }
	inline UserAndroidDeviceInfo_t3243313677 * get_AndroidDeviceInfo_0() const { return ___AndroidDeviceInfo_0; }
	inline UserAndroidDeviceInfo_t3243313677 ** get_address_of_AndroidDeviceInfo_0() { return &___AndroidDeviceInfo_0; }
	inline void set_AndroidDeviceInfo_0(UserAndroidDeviceInfo_t3243313677 * value)
	{
		___AndroidDeviceInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___AndroidDeviceInfo_0), value);
	}

	inline static int32_t get_offset_of_Created_1() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___Created_1)); }
	inline DateTime_t3738529785  get_Created_1() const { return ___Created_1; }
	inline DateTime_t3738529785 * get_address_of_Created_1() { return &___Created_1; }
	inline void set_Created_1(DateTime_t3738529785  value)
	{
		___Created_1 = value;
	}

	inline static int32_t get_offset_of_CustomIdInfo_2() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___CustomIdInfo_2)); }
	inline UserCustomIdInfo_t2526912300 * get_CustomIdInfo_2() const { return ___CustomIdInfo_2; }
	inline UserCustomIdInfo_t2526912300 ** get_address_of_CustomIdInfo_2() { return &___CustomIdInfo_2; }
	inline void set_CustomIdInfo_2(UserCustomIdInfo_t2526912300 * value)
	{
		___CustomIdInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___CustomIdInfo_2), value);
	}

	inline static int32_t get_offset_of_FacebookInfo_3() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___FacebookInfo_3)); }
	inline UserFacebookInfo_t1027919101 * get_FacebookInfo_3() const { return ___FacebookInfo_3; }
	inline UserFacebookInfo_t1027919101 ** get_address_of_FacebookInfo_3() { return &___FacebookInfo_3; }
	inline void set_FacebookInfo_3(UserFacebookInfo_t1027919101 * value)
	{
		___FacebookInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___FacebookInfo_3), value);
	}

	inline static int32_t get_offset_of_FacebookInstantGamesIdInfo_4() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___FacebookInstantGamesIdInfo_4)); }
	inline UserFacebookInstantGamesIdInfo_t975760407 * get_FacebookInstantGamesIdInfo_4() const { return ___FacebookInstantGamesIdInfo_4; }
	inline UserFacebookInstantGamesIdInfo_t975760407 ** get_address_of_FacebookInstantGamesIdInfo_4() { return &___FacebookInstantGamesIdInfo_4; }
	inline void set_FacebookInstantGamesIdInfo_4(UserFacebookInstantGamesIdInfo_t975760407 * value)
	{
		___FacebookInstantGamesIdInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___FacebookInstantGamesIdInfo_4), value);
	}

	inline static int32_t get_offset_of_GameCenterInfo_5() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___GameCenterInfo_5)); }
	inline UserGameCenterInfo_t1831595825 * get_GameCenterInfo_5() const { return ___GameCenterInfo_5; }
	inline UserGameCenterInfo_t1831595825 ** get_address_of_GameCenterInfo_5() { return &___GameCenterInfo_5; }
	inline void set_GameCenterInfo_5(UserGameCenterInfo_t1831595825 * value)
	{
		___GameCenterInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___GameCenterInfo_5), value);
	}

	inline static int32_t get_offset_of_GoogleInfo_6() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___GoogleInfo_6)); }
	inline UserGoogleInfo_t2549595312 * get_GoogleInfo_6() const { return ___GoogleInfo_6; }
	inline UserGoogleInfo_t2549595312 ** get_address_of_GoogleInfo_6() { return &___GoogleInfo_6; }
	inline void set_GoogleInfo_6(UserGoogleInfo_t2549595312 * value)
	{
		___GoogleInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___GoogleInfo_6), value);
	}

	inline static int32_t get_offset_of_IosDeviceInfo_7() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___IosDeviceInfo_7)); }
	inline UserIosDeviceInfo_t593505116 * get_IosDeviceInfo_7() const { return ___IosDeviceInfo_7; }
	inline UserIosDeviceInfo_t593505116 ** get_address_of_IosDeviceInfo_7() { return &___IosDeviceInfo_7; }
	inline void set_IosDeviceInfo_7(UserIosDeviceInfo_t593505116 * value)
	{
		___IosDeviceInfo_7 = value;
		Il2CppCodeGenWriteBarrier((&___IosDeviceInfo_7), value);
	}

	inline static int32_t get_offset_of_KongregateInfo_8() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___KongregateInfo_8)); }
	inline UserKongregateInfo_t82251820 * get_KongregateInfo_8() const { return ___KongregateInfo_8; }
	inline UserKongregateInfo_t82251820 ** get_address_of_KongregateInfo_8() { return &___KongregateInfo_8; }
	inline void set_KongregateInfo_8(UserKongregateInfo_t82251820 * value)
	{
		___KongregateInfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___KongregateInfo_8), value);
	}

	inline static int32_t get_offset_of_NintendoSwitchDeviceIdInfo_9() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___NintendoSwitchDeviceIdInfo_9)); }
	inline UserNintendoSwitchDeviceIdInfo_t1115872661 * get_NintendoSwitchDeviceIdInfo_9() const { return ___NintendoSwitchDeviceIdInfo_9; }
	inline UserNintendoSwitchDeviceIdInfo_t1115872661 ** get_address_of_NintendoSwitchDeviceIdInfo_9() { return &___NintendoSwitchDeviceIdInfo_9; }
	inline void set_NintendoSwitchDeviceIdInfo_9(UserNintendoSwitchDeviceIdInfo_t1115872661 * value)
	{
		___NintendoSwitchDeviceIdInfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___NintendoSwitchDeviceIdInfo_9), value);
	}

	inline static int32_t get_offset_of_OpenIdInfo_10() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___OpenIdInfo_10)); }
	inline List_1_t1620071493 * get_OpenIdInfo_10() const { return ___OpenIdInfo_10; }
	inline List_1_t1620071493 ** get_address_of_OpenIdInfo_10() { return &___OpenIdInfo_10; }
	inline void set_OpenIdInfo_10(List_1_t1620071493 * value)
	{
		___OpenIdInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___OpenIdInfo_10), value);
	}

	inline static int32_t get_offset_of_PlayFabId_11() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___PlayFabId_11)); }
	inline String_t* get_PlayFabId_11() const { return ___PlayFabId_11; }
	inline String_t** get_address_of_PlayFabId_11() { return &___PlayFabId_11; }
	inline void set_PlayFabId_11(String_t* value)
	{
		___PlayFabId_11 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_11), value);
	}

	inline static int32_t get_offset_of_PrivateInfo_12() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___PrivateInfo_12)); }
	inline UserPrivateAccountInfo_t2844482441 * get_PrivateInfo_12() const { return ___PrivateInfo_12; }
	inline UserPrivateAccountInfo_t2844482441 ** get_address_of_PrivateInfo_12() { return &___PrivateInfo_12; }
	inline void set_PrivateInfo_12(UserPrivateAccountInfo_t2844482441 * value)
	{
		___PrivateInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___PrivateInfo_12), value);
	}

	inline static int32_t get_offset_of_PsnInfo_13() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___PsnInfo_13)); }
	inline UserPsnInfo_t1437888010 * get_PsnInfo_13() const { return ___PsnInfo_13; }
	inline UserPsnInfo_t1437888010 ** get_address_of_PsnInfo_13() { return &___PsnInfo_13; }
	inline void set_PsnInfo_13(UserPsnInfo_t1437888010 * value)
	{
		___PsnInfo_13 = value;
		Il2CppCodeGenWriteBarrier((&___PsnInfo_13), value);
	}

	inline static int32_t get_offset_of_SteamInfo_14() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___SteamInfo_14)); }
	inline UserSteamInfo_t155181053 * get_SteamInfo_14() const { return ___SteamInfo_14; }
	inline UserSteamInfo_t155181053 ** get_address_of_SteamInfo_14() { return &___SteamInfo_14; }
	inline void set_SteamInfo_14(UserSteamInfo_t155181053 * value)
	{
		___SteamInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___SteamInfo_14), value);
	}

	inline static int32_t get_offset_of_TitleInfo_15() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___TitleInfo_15)); }
	inline UserTitleInfo_t663336695 * get_TitleInfo_15() const { return ___TitleInfo_15; }
	inline UserTitleInfo_t663336695 ** get_address_of_TitleInfo_15() { return &___TitleInfo_15; }
	inline void set_TitleInfo_15(UserTitleInfo_t663336695 * value)
	{
		___TitleInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleInfo_15), value);
	}

	inline static int32_t get_offset_of_TwitchInfo_16() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___TwitchInfo_16)); }
	inline UserTwitchInfo_t3900925054 * get_TwitchInfo_16() const { return ___TwitchInfo_16; }
	inline UserTwitchInfo_t3900925054 ** get_address_of_TwitchInfo_16() { return &___TwitchInfo_16; }
	inline void set_TwitchInfo_16(UserTwitchInfo_t3900925054 * value)
	{
		___TwitchInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___TwitchInfo_16), value);
	}

	inline static int32_t get_offset_of_Username_17() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___Username_17)); }
	inline String_t* get_Username_17() const { return ___Username_17; }
	inline String_t** get_address_of_Username_17() { return &___Username_17; }
	inline void set_Username_17(String_t* value)
	{
		___Username_17 = value;
		Il2CppCodeGenWriteBarrier((&___Username_17), value);
	}

	inline static int32_t get_offset_of_WindowsHelloInfo_18() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___WindowsHelloInfo_18)); }
	inline UserWindowsHelloInfo_t225950329 * get_WindowsHelloInfo_18() const { return ___WindowsHelloInfo_18; }
	inline UserWindowsHelloInfo_t225950329 ** get_address_of_WindowsHelloInfo_18() { return &___WindowsHelloInfo_18; }
	inline void set_WindowsHelloInfo_18(UserWindowsHelloInfo_t225950329 * value)
	{
		___WindowsHelloInfo_18 = value;
		Il2CppCodeGenWriteBarrier((&___WindowsHelloInfo_18), value);
	}

	inline static int32_t get_offset_of_XboxInfo_19() { return static_cast<int32_t>(offsetof(UserAccountInfo_t2687855647, ___XboxInfo_19)); }
	inline UserXboxInfo_t1002111372 * get_XboxInfo_19() const { return ___XboxInfo_19; }
	inline UserXboxInfo_t1002111372 ** get_address_of_XboxInfo_19() { return &___XboxInfo_19; }
	inline void set_XboxInfo_19(UserXboxInfo_t1002111372 * value)
	{
		___XboxInfo_19 = value;
		Il2CppCodeGenWriteBarrier((&___XboxInfo_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERACCOUNTINFO_T2687855647_H
#ifndef USERDATARECORD_T1385934566_H
#define USERDATARECORD_T1385934566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserDataRecord
struct  UserDataRecord_t1385934566  : public RuntimeObject
{
public:
	// System.DateTime PlayFab.ClientModels.UserDataRecord::LastUpdated
	DateTime_t3738529785  ___LastUpdated_0;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.UserDataRecord::Permission
	Nullable_1_t3748078693  ___Permission_1;
	// System.String PlayFab.ClientModels.UserDataRecord::Value
	String_t* ___Value_2;

public:
	inline static int32_t get_offset_of_LastUpdated_0() { return static_cast<int32_t>(offsetof(UserDataRecord_t1385934566, ___LastUpdated_0)); }
	inline DateTime_t3738529785  get_LastUpdated_0() const { return ___LastUpdated_0; }
	inline DateTime_t3738529785 * get_address_of_LastUpdated_0() { return &___LastUpdated_0; }
	inline void set_LastUpdated_0(DateTime_t3738529785  value)
	{
		___LastUpdated_0 = value;
	}

	inline static int32_t get_offset_of_Permission_1() { return static_cast<int32_t>(offsetof(UserDataRecord_t1385934566, ___Permission_1)); }
	inline Nullable_1_t3748078693  get_Permission_1() const { return ___Permission_1; }
	inline Nullable_1_t3748078693 * get_address_of_Permission_1() { return &___Permission_1; }
	inline void set_Permission_1(Nullable_1_t3748078693  value)
	{
		___Permission_1 = value;
	}

	inline static int32_t get_offset_of_Value_2() { return static_cast<int32_t>(offsetof(UserDataRecord_t1385934566, ___Value_2)); }
	inline String_t* get_Value_2() const { return ___Value_2; }
	inline String_t** get_address_of_Value_2() { return &___Value_2; }
	inline void set_Value_2(String_t* value)
	{
		___Value_2 = value;
		Il2CppCodeGenWriteBarrier((&___Value_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERDATARECORD_T1385934566_H
#ifndef USERSTEAMINFO_T155181053_H
#define USERSTEAMINFO_T155181053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserSteamInfo
struct  UserSteamInfo_t155181053  : public RuntimeObject
{
public:
	// System.Nullable`1<PlayFab.ClientModels.TitleActivationStatus> PlayFab.ClientModels.UserSteamInfo::SteamActivationStatus
	Nullable_1_t3273755412  ___SteamActivationStatus_0;
	// System.String PlayFab.ClientModels.UserSteamInfo::SteamCountry
	String_t* ___SteamCountry_1;
	// System.Nullable`1<PlayFab.ClientModels.Currency> PlayFab.ClientModels.UserSteamInfo::SteamCurrency
	Nullable_1_t469428370  ___SteamCurrency_2;
	// System.String PlayFab.ClientModels.UserSteamInfo::SteamId
	String_t* ___SteamId_3;

public:
	inline static int32_t get_offset_of_SteamActivationStatus_0() { return static_cast<int32_t>(offsetof(UserSteamInfo_t155181053, ___SteamActivationStatus_0)); }
	inline Nullable_1_t3273755412  get_SteamActivationStatus_0() const { return ___SteamActivationStatus_0; }
	inline Nullable_1_t3273755412 * get_address_of_SteamActivationStatus_0() { return &___SteamActivationStatus_0; }
	inline void set_SteamActivationStatus_0(Nullable_1_t3273755412  value)
	{
		___SteamActivationStatus_0 = value;
	}

	inline static int32_t get_offset_of_SteamCountry_1() { return static_cast<int32_t>(offsetof(UserSteamInfo_t155181053, ___SteamCountry_1)); }
	inline String_t* get_SteamCountry_1() const { return ___SteamCountry_1; }
	inline String_t** get_address_of_SteamCountry_1() { return &___SteamCountry_1; }
	inline void set_SteamCountry_1(String_t* value)
	{
		___SteamCountry_1 = value;
		Il2CppCodeGenWriteBarrier((&___SteamCountry_1), value);
	}

	inline static int32_t get_offset_of_SteamCurrency_2() { return static_cast<int32_t>(offsetof(UserSteamInfo_t155181053, ___SteamCurrency_2)); }
	inline Nullable_1_t469428370  get_SteamCurrency_2() const { return ___SteamCurrency_2; }
	inline Nullable_1_t469428370 * get_address_of_SteamCurrency_2() { return &___SteamCurrency_2; }
	inline void set_SteamCurrency_2(Nullable_1_t469428370  value)
	{
		___SteamCurrency_2 = value;
	}

	inline static int32_t get_offset_of_SteamId_3() { return static_cast<int32_t>(offsetof(UserSteamInfo_t155181053, ___SteamId_3)); }
	inline String_t* get_SteamId_3() const { return ___SteamId_3; }
	inline String_t** get_address_of_SteamId_3() { return &___SteamId_3; }
	inline void set_SteamId_3(String_t* value)
	{
		___SteamId_3 = value;
		Il2CppCodeGenWriteBarrier((&___SteamId_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERSTEAMINFO_T155181053_H
#ifndef VIRTUALCURRENCYRECHARGETIME_T2823835569_H
#define VIRTUALCURRENCYRECHARGETIME_T2823835569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.VirtualCurrencyRechargeTime
struct  VirtualCurrencyRechargeTime_t2823835569  : public RuntimeObject
{
public:
	// System.Int32 PlayFab.ClientModels.VirtualCurrencyRechargeTime::RechargeMax
	int32_t ___RechargeMax_0;
	// System.DateTime PlayFab.ClientModels.VirtualCurrencyRechargeTime::RechargeTime
	DateTime_t3738529785  ___RechargeTime_1;
	// System.Int32 PlayFab.ClientModels.VirtualCurrencyRechargeTime::SecondsToRecharge
	int32_t ___SecondsToRecharge_2;

public:
	inline static int32_t get_offset_of_RechargeMax_0() { return static_cast<int32_t>(offsetof(VirtualCurrencyRechargeTime_t2823835569, ___RechargeMax_0)); }
	inline int32_t get_RechargeMax_0() const { return ___RechargeMax_0; }
	inline int32_t* get_address_of_RechargeMax_0() { return &___RechargeMax_0; }
	inline void set_RechargeMax_0(int32_t value)
	{
		___RechargeMax_0 = value;
	}

	inline static int32_t get_offset_of_RechargeTime_1() { return static_cast<int32_t>(offsetof(VirtualCurrencyRechargeTime_t2823835569, ___RechargeTime_1)); }
	inline DateTime_t3738529785  get_RechargeTime_1() const { return ___RechargeTime_1; }
	inline DateTime_t3738529785 * get_address_of_RechargeTime_1() { return &___RechargeTime_1; }
	inline void set_RechargeTime_1(DateTime_t3738529785  value)
	{
		___RechargeTime_1 = value;
	}

	inline static int32_t get_offset_of_SecondsToRecharge_2() { return static_cast<int32_t>(offsetof(VirtualCurrencyRechargeTime_t2823835569, ___SecondsToRecharge_2)); }
	inline int32_t get_SecondsToRecharge_2() const { return ___SecondsToRecharge_2; }
	inline int32_t* get_address_of_SecondsToRecharge_2() { return &___SecondsToRecharge_2; }
	inline void set_SecondsToRecharge_2(int32_t value)
	{
		___SecondsToRecharge_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALCURRENCYRECHARGETIME_T2823835569_H
#ifndef EXECUTEENTITYCLOUDSCRIPTREQUEST_T646992320_H
#define EXECUTEENTITYCLOUDSCRIPTREQUEST_T646992320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.CloudScriptModels.ExecuteEntityCloudScriptRequest
struct  ExecuteEntityCloudScriptRequest_t646992320  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.CloudScriptModels.EntityKey PlayFab.CloudScriptModels.ExecuteEntityCloudScriptRequest::Entity
	EntityKey_t1335848462 * ___Entity_0;
	// System.String PlayFab.CloudScriptModels.ExecuteEntityCloudScriptRequest::FunctionName
	String_t* ___FunctionName_1;
	// System.Object PlayFab.CloudScriptModels.ExecuteEntityCloudScriptRequest::FunctionParameter
	RuntimeObject * ___FunctionParameter_2;
	// System.Nullable`1<System.Boolean> PlayFab.CloudScriptModels.ExecuteEntityCloudScriptRequest::GeneratePlayStreamEvent
	Nullable_1_t1819850047  ___GeneratePlayStreamEvent_3;
	// System.Nullable`1<PlayFab.CloudScriptModels.CloudScriptRevisionOption> PlayFab.CloudScriptModels.ExecuteEntityCloudScriptRequest::RevisionSelection
	Nullable_1_t102671619  ___RevisionSelection_4;
	// System.Nullable`1<System.Int32> PlayFab.CloudScriptModels.ExecuteEntityCloudScriptRequest::SpecificRevision
	Nullable_1_t378540539  ___SpecificRevision_5;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(ExecuteEntityCloudScriptRequest_t646992320, ___Entity_0)); }
	inline EntityKey_t1335848462 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t1335848462 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t1335848462 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}

	inline static int32_t get_offset_of_FunctionName_1() { return static_cast<int32_t>(offsetof(ExecuteEntityCloudScriptRequest_t646992320, ___FunctionName_1)); }
	inline String_t* get_FunctionName_1() const { return ___FunctionName_1; }
	inline String_t** get_address_of_FunctionName_1() { return &___FunctionName_1; }
	inline void set_FunctionName_1(String_t* value)
	{
		___FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionName_1), value);
	}

	inline static int32_t get_offset_of_FunctionParameter_2() { return static_cast<int32_t>(offsetof(ExecuteEntityCloudScriptRequest_t646992320, ___FunctionParameter_2)); }
	inline RuntimeObject * get_FunctionParameter_2() const { return ___FunctionParameter_2; }
	inline RuntimeObject ** get_address_of_FunctionParameter_2() { return &___FunctionParameter_2; }
	inline void set_FunctionParameter_2(RuntimeObject * value)
	{
		___FunctionParameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionParameter_2), value);
	}

	inline static int32_t get_offset_of_GeneratePlayStreamEvent_3() { return static_cast<int32_t>(offsetof(ExecuteEntityCloudScriptRequest_t646992320, ___GeneratePlayStreamEvent_3)); }
	inline Nullable_1_t1819850047  get_GeneratePlayStreamEvent_3() const { return ___GeneratePlayStreamEvent_3; }
	inline Nullable_1_t1819850047 * get_address_of_GeneratePlayStreamEvent_3() { return &___GeneratePlayStreamEvent_3; }
	inline void set_GeneratePlayStreamEvent_3(Nullable_1_t1819850047  value)
	{
		___GeneratePlayStreamEvent_3 = value;
	}

	inline static int32_t get_offset_of_RevisionSelection_4() { return static_cast<int32_t>(offsetof(ExecuteEntityCloudScriptRequest_t646992320, ___RevisionSelection_4)); }
	inline Nullable_1_t102671619  get_RevisionSelection_4() const { return ___RevisionSelection_4; }
	inline Nullable_1_t102671619 * get_address_of_RevisionSelection_4() { return &___RevisionSelection_4; }
	inline void set_RevisionSelection_4(Nullable_1_t102671619  value)
	{
		___RevisionSelection_4 = value;
	}

	inline static int32_t get_offset_of_SpecificRevision_5() { return static_cast<int32_t>(offsetof(ExecuteEntityCloudScriptRequest_t646992320, ___SpecificRevision_5)); }
	inline Nullable_1_t378540539  get_SpecificRevision_5() const { return ___SpecificRevision_5; }
	inline Nullable_1_t378540539 * get_address_of_SpecificRevision_5() { return &___SpecificRevision_5; }
	inline void set_SpecificRevision_5(Nullable_1_t378540539  value)
	{
		___SpecificRevision_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEENTITYCLOUDSCRIPTREQUEST_T646992320_H
#ifndef GETFILEMETADATA_T2550306569_H
#define GETFILEMETADATA_T2550306569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.GetFileMetadata
struct  GetFileMetadata_t2550306569  : public RuntimeObject
{
public:
	// System.String PlayFab.DataModels.GetFileMetadata::Checksum
	String_t* ___Checksum_0;
	// System.String PlayFab.DataModels.GetFileMetadata::DownloadUrl
	String_t* ___DownloadUrl_1;
	// System.String PlayFab.DataModels.GetFileMetadata::FileName
	String_t* ___FileName_2;
	// System.DateTime PlayFab.DataModels.GetFileMetadata::LastModified
	DateTime_t3738529785  ___LastModified_3;
	// System.Int32 PlayFab.DataModels.GetFileMetadata::Size
	int32_t ___Size_4;

public:
	inline static int32_t get_offset_of_Checksum_0() { return static_cast<int32_t>(offsetof(GetFileMetadata_t2550306569, ___Checksum_0)); }
	inline String_t* get_Checksum_0() const { return ___Checksum_0; }
	inline String_t** get_address_of_Checksum_0() { return &___Checksum_0; }
	inline void set_Checksum_0(String_t* value)
	{
		___Checksum_0 = value;
		Il2CppCodeGenWriteBarrier((&___Checksum_0), value);
	}

	inline static int32_t get_offset_of_DownloadUrl_1() { return static_cast<int32_t>(offsetof(GetFileMetadata_t2550306569, ___DownloadUrl_1)); }
	inline String_t* get_DownloadUrl_1() const { return ___DownloadUrl_1; }
	inline String_t** get_address_of_DownloadUrl_1() { return &___DownloadUrl_1; }
	inline void set_DownloadUrl_1(String_t* value)
	{
		___DownloadUrl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DownloadUrl_1), value);
	}

	inline static int32_t get_offset_of_FileName_2() { return static_cast<int32_t>(offsetof(GetFileMetadata_t2550306569, ___FileName_2)); }
	inline String_t* get_FileName_2() const { return ___FileName_2; }
	inline String_t** get_address_of_FileName_2() { return &___FileName_2; }
	inline void set_FileName_2(String_t* value)
	{
		___FileName_2 = value;
		Il2CppCodeGenWriteBarrier((&___FileName_2), value);
	}

	inline static int32_t get_offset_of_LastModified_3() { return static_cast<int32_t>(offsetof(GetFileMetadata_t2550306569, ___LastModified_3)); }
	inline DateTime_t3738529785  get_LastModified_3() const { return ___LastModified_3; }
	inline DateTime_t3738529785 * get_address_of_LastModified_3() { return &___LastModified_3; }
	inline void set_LastModified_3(DateTime_t3738529785  value)
	{
		___LastModified_3 = value;
	}

	inline static int32_t get_offset_of_Size_4() { return static_cast<int32_t>(offsetof(GetFileMetadata_t2550306569, ___Size_4)); }
	inline int32_t get_Size_4() const { return ___Size_4; }
	inline int32_t* get_address_of_Size_4() { return &___Size_4; }
	inline void set_Size_4(int32_t value)
	{
		___Size_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFILEMETADATA_T2550306569_H
#ifndef SETOBJECTINFO_T1522112334_H
#define SETOBJECTINFO_T1522112334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.DataModels.SetObjectInfo
struct  SetObjectInfo_t1522112334  : public RuntimeObject
{
public:
	// System.String PlayFab.DataModels.SetObjectInfo::ObjectName
	String_t* ___ObjectName_0;
	// System.String PlayFab.DataModels.SetObjectInfo::OperationReason
	String_t* ___OperationReason_1;
	// System.Nullable`1<PlayFab.DataModels.OperationTypes> PlayFab.DataModels.SetObjectInfo::SetResult
	Nullable_1_t987082842  ___SetResult_2;

public:
	inline static int32_t get_offset_of_ObjectName_0() { return static_cast<int32_t>(offsetof(SetObjectInfo_t1522112334, ___ObjectName_0)); }
	inline String_t* get_ObjectName_0() const { return ___ObjectName_0; }
	inline String_t** get_address_of_ObjectName_0() { return &___ObjectName_0; }
	inline void set_ObjectName_0(String_t* value)
	{
		___ObjectName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectName_0), value);
	}

	inline static int32_t get_offset_of_OperationReason_1() { return static_cast<int32_t>(offsetof(SetObjectInfo_t1522112334, ___OperationReason_1)); }
	inline String_t* get_OperationReason_1() const { return ___OperationReason_1; }
	inline String_t** get_address_of_OperationReason_1() { return &___OperationReason_1; }
	inline void set_OperationReason_1(String_t* value)
	{
		___OperationReason_1 = value;
		Il2CppCodeGenWriteBarrier((&___OperationReason_1), value);
	}

	inline static int32_t get_offset_of_SetResult_2() { return static_cast<int32_t>(offsetof(SetObjectInfo_t1522112334, ___SetResult_2)); }
	inline Nullable_1_t987082842  get_SetResult_2() const { return ___SetResult_2; }
	inline Nullable_1_t987082842 * get_address_of_SetResult_2() { return &___SetResult_2; }
	inline void set_SetResult_2(Nullable_1_t987082842  value)
	{
		___SetResult_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETOBJECTINFO_T1522112334_H
#ifndef APPLYTOGROUPRESPONSE_T3799590457_H
#define APPLYTOGROUPRESPONSE_T3799590457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.ApplyToGroupResponse
struct  ApplyToGroupResponse_t3799590457  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.GroupsModels.EntityWithLineage PlayFab.GroupsModels.ApplyToGroupResponse::Entity
	EntityWithLineage_t1029882210 * ___Entity_2;
	// System.DateTime PlayFab.GroupsModels.ApplyToGroupResponse::Expires
	DateTime_t3738529785  ___Expires_3;
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.ApplyToGroupResponse::Group
	EntityKey_t3899277558 * ___Group_4;

public:
	inline static int32_t get_offset_of_Entity_2() { return static_cast<int32_t>(offsetof(ApplyToGroupResponse_t3799590457, ___Entity_2)); }
	inline EntityWithLineage_t1029882210 * get_Entity_2() const { return ___Entity_2; }
	inline EntityWithLineage_t1029882210 ** get_address_of_Entity_2() { return &___Entity_2; }
	inline void set_Entity_2(EntityWithLineage_t1029882210 * value)
	{
		___Entity_2 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_2), value);
	}

	inline static int32_t get_offset_of_Expires_3() { return static_cast<int32_t>(offsetof(ApplyToGroupResponse_t3799590457, ___Expires_3)); }
	inline DateTime_t3738529785  get_Expires_3() const { return ___Expires_3; }
	inline DateTime_t3738529785 * get_address_of_Expires_3() { return &___Expires_3; }
	inline void set_Expires_3(DateTime_t3738529785  value)
	{
		___Expires_3 = value;
	}

	inline static int32_t get_offset_of_Group_4() { return static_cast<int32_t>(offsetof(ApplyToGroupResponse_t3799590457, ___Group_4)); }
	inline EntityKey_t3899277558 * get_Group_4() const { return ___Group_4; }
	inline EntityKey_t3899277558 ** get_address_of_Group_4() { return &___Group_4; }
	inline void set_Group_4(EntityKey_t3899277558 * value)
	{
		___Group_4 = value;
		Il2CppCodeGenWriteBarrier((&___Group_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLYTOGROUPRESPONSE_T3799590457_H
#ifndef CREATEGROUPRESPONSE_T904731171_H
#define CREATEGROUPRESPONSE_T904731171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.GroupsModels.CreateGroupResponse
struct  CreateGroupResponse_t904731171  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.GroupsModels.CreateGroupResponse::AdminRoleId
	String_t* ___AdminRoleId_2;
	// System.DateTime PlayFab.GroupsModels.CreateGroupResponse::Created
	DateTime_t3738529785  ___Created_3;
	// PlayFab.GroupsModels.EntityKey PlayFab.GroupsModels.CreateGroupResponse::Group
	EntityKey_t3899277558 * ___Group_4;
	// System.String PlayFab.GroupsModels.CreateGroupResponse::GroupName
	String_t* ___GroupName_5;
	// System.String PlayFab.GroupsModels.CreateGroupResponse::MemberRoleId
	String_t* ___MemberRoleId_6;
	// System.Int32 PlayFab.GroupsModels.CreateGroupResponse::ProfileVersion
	int32_t ___ProfileVersion_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.GroupsModels.CreateGroupResponse::Roles
	Dictionary_2_t1632706988 * ___Roles_8;

public:
	inline static int32_t get_offset_of_AdminRoleId_2() { return static_cast<int32_t>(offsetof(CreateGroupResponse_t904731171, ___AdminRoleId_2)); }
	inline String_t* get_AdminRoleId_2() const { return ___AdminRoleId_2; }
	inline String_t** get_address_of_AdminRoleId_2() { return &___AdminRoleId_2; }
	inline void set_AdminRoleId_2(String_t* value)
	{
		___AdminRoleId_2 = value;
		Il2CppCodeGenWriteBarrier((&___AdminRoleId_2), value);
	}

	inline static int32_t get_offset_of_Created_3() { return static_cast<int32_t>(offsetof(CreateGroupResponse_t904731171, ___Created_3)); }
	inline DateTime_t3738529785  get_Created_3() const { return ___Created_3; }
	inline DateTime_t3738529785 * get_address_of_Created_3() { return &___Created_3; }
	inline void set_Created_3(DateTime_t3738529785  value)
	{
		___Created_3 = value;
	}

	inline static int32_t get_offset_of_Group_4() { return static_cast<int32_t>(offsetof(CreateGroupResponse_t904731171, ___Group_4)); }
	inline EntityKey_t3899277558 * get_Group_4() const { return ___Group_4; }
	inline EntityKey_t3899277558 ** get_address_of_Group_4() { return &___Group_4; }
	inline void set_Group_4(EntityKey_t3899277558 * value)
	{
		___Group_4 = value;
		Il2CppCodeGenWriteBarrier((&___Group_4), value);
	}

	inline static int32_t get_offset_of_GroupName_5() { return static_cast<int32_t>(offsetof(CreateGroupResponse_t904731171, ___GroupName_5)); }
	inline String_t* get_GroupName_5() const { return ___GroupName_5; }
	inline String_t** get_address_of_GroupName_5() { return &___GroupName_5; }
	inline void set_GroupName_5(String_t* value)
	{
		___GroupName_5 = value;
		Il2CppCodeGenWriteBarrier((&___GroupName_5), value);
	}

	inline static int32_t get_offset_of_MemberRoleId_6() { return static_cast<int32_t>(offsetof(CreateGroupResponse_t904731171, ___MemberRoleId_6)); }
	inline String_t* get_MemberRoleId_6() const { return ___MemberRoleId_6; }
	inline String_t** get_address_of_MemberRoleId_6() { return &___MemberRoleId_6; }
	inline void set_MemberRoleId_6(String_t* value)
	{
		___MemberRoleId_6 = value;
		Il2CppCodeGenWriteBarrier((&___MemberRoleId_6), value);
	}

	inline static int32_t get_offset_of_ProfileVersion_7() { return static_cast<int32_t>(offsetof(CreateGroupResponse_t904731171, ___ProfileVersion_7)); }
	inline int32_t get_ProfileVersion_7() const { return ___ProfileVersion_7; }
	inline int32_t* get_address_of_ProfileVersion_7() { return &___ProfileVersion_7; }
	inline void set_ProfileVersion_7(int32_t value)
	{
		___ProfileVersion_7 = value;
	}

	inline static int32_t get_offset_of_Roles_8() { return static_cast<int32_t>(offsetof(CreateGroupResponse_t904731171, ___Roles_8)); }
	inline Dictionary_2_t1632706988 * get_Roles_8() const { return ___Roles_8; }
	inline Dictionary_2_t1632706988 ** get_address_of_Roles_8() { return &___Roles_8; }
	inline void set_Roles_8(Dictionary_2_t1632706988 * value)
	{
		___Roles_8 = value;
		Il2CppCodeGenWriteBarrier((&___Roles_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEGROUPRESPONSE_T904731171_H
#ifndef SCREENTIMETRACKER_T769550692_H
#define SCREENTIMETRACKER_T769550692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.Public.ScreenTimeTracker
struct  ScreenTimeTracker_t769550692  : public RuntimeObject
{
public:
	// System.Guid PlayFab.Public.ScreenTimeTracker::focusId
	Guid_t  ___focusId_0;
	// System.Guid PlayFab.Public.ScreenTimeTracker::gameSessionID
	Guid_t  ___gameSessionID_1;
	// System.Boolean PlayFab.Public.ScreenTimeTracker::initialFocus
	bool ___initialFocus_2;
	// System.Boolean PlayFab.Public.ScreenTimeTracker::isSending
	bool ___isSending_3;
	// System.DateTime PlayFab.Public.ScreenTimeTracker::focusOffDateTime
	DateTime_t3738529785  ___focusOffDateTime_4;
	// System.DateTime PlayFab.Public.ScreenTimeTracker::focusOnDateTime
	DateTime_t3738529785  ___focusOnDateTime_5;
	// System.Collections.Generic.Queue`1<PlayFab.EventsModels.EventContents> PlayFab.Public.ScreenTimeTracker::eventsRequests
	Queue_1_t3732839245 * ___eventsRequests_6;
	// PlayFab.EventsModels.EntityKey PlayFab.Public.ScreenTimeTracker::entityKey
	EntityKey_t3724060727 * ___entityKey_7;

public:
	inline static int32_t get_offset_of_focusId_0() { return static_cast<int32_t>(offsetof(ScreenTimeTracker_t769550692, ___focusId_0)); }
	inline Guid_t  get_focusId_0() const { return ___focusId_0; }
	inline Guid_t * get_address_of_focusId_0() { return &___focusId_0; }
	inline void set_focusId_0(Guid_t  value)
	{
		___focusId_0 = value;
	}

	inline static int32_t get_offset_of_gameSessionID_1() { return static_cast<int32_t>(offsetof(ScreenTimeTracker_t769550692, ___gameSessionID_1)); }
	inline Guid_t  get_gameSessionID_1() const { return ___gameSessionID_1; }
	inline Guid_t * get_address_of_gameSessionID_1() { return &___gameSessionID_1; }
	inline void set_gameSessionID_1(Guid_t  value)
	{
		___gameSessionID_1 = value;
	}

	inline static int32_t get_offset_of_initialFocus_2() { return static_cast<int32_t>(offsetof(ScreenTimeTracker_t769550692, ___initialFocus_2)); }
	inline bool get_initialFocus_2() const { return ___initialFocus_2; }
	inline bool* get_address_of_initialFocus_2() { return &___initialFocus_2; }
	inline void set_initialFocus_2(bool value)
	{
		___initialFocus_2 = value;
	}

	inline static int32_t get_offset_of_isSending_3() { return static_cast<int32_t>(offsetof(ScreenTimeTracker_t769550692, ___isSending_3)); }
	inline bool get_isSending_3() const { return ___isSending_3; }
	inline bool* get_address_of_isSending_3() { return &___isSending_3; }
	inline void set_isSending_3(bool value)
	{
		___isSending_3 = value;
	}

	inline static int32_t get_offset_of_focusOffDateTime_4() { return static_cast<int32_t>(offsetof(ScreenTimeTracker_t769550692, ___focusOffDateTime_4)); }
	inline DateTime_t3738529785  get_focusOffDateTime_4() const { return ___focusOffDateTime_4; }
	inline DateTime_t3738529785 * get_address_of_focusOffDateTime_4() { return &___focusOffDateTime_4; }
	inline void set_focusOffDateTime_4(DateTime_t3738529785  value)
	{
		___focusOffDateTime_4 = value;
	}

	inline static int32_t get_offset_of_focusOnDateTime_5() { return static_cast<int32_t>(offsetof(ScreenTimeTracker_t769550692, ___focusOnDateTime_5)); }
	inline DateTime_t3738529785  get_focusOnDateTime_5() const { return ___focusOnDateTime_5; }
	inline DateTime_t3738529785 * get_address_of_focusOnDateTime_5() { return &___focusOnDateTime_5; }
	inline void set_focusOnDateTime_5(DateTime_t3738529785  value)
	{
		___focusOnDateTime_5 = value;
	}

	inline static int32_t get_offset_of_eventsRequests_6() { return static_cast<int32_t>(offsetof(ScreenTimeTracker_t769550692, ___eventsRequests_6)); }
	inline Queue_1_t3732839245 * get_eventsRequests_6() const { return ___eventsRequests_6; }
	inline Queue_1_t3732839245 ** get_address_of_eventsRequests_6() { return &___eventsRequests_6; }
	inline void set_eventsRequests_6(Queue_1_t3732839245 * value)
	{
		___eventsRequests_6 = value;
		Il2CppCodeGenWriteBarrier((&___eventsRequests_6), value);
	}

	inline static int32_t get_offset_of_entityKey_7() { return static_cast<int32_t>(offsetof(ScreenTimeTracker_t769550692, ___entityKey_7)); }
	inline EntityKey_t3724060727 * get_entityKey_7() const { return ___entityKey_7; }
	inline EntityKey_t3724060727 ** get_address_of_entityKey_7() { return &___entityKey_7; }
	inline void set_entityKey_7(EntityKey_t3724060727 * value)
	{
		___entityKey_7 = value;
		Il2CppCodeGenWriteBarrier((&___entityKey_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENTIMETRACKER_T769550692_H
#ifndef NULLABLE_1_T1166124571_H
#define NULLABLE_1_T1166124571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t1166124571 
{
public:
	// T System.Nullable`1::value
	DateTime_t3738529785  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___value_0)); }
	inline DateTime_t3738529785  get_value_0() const { return ___value_0; }
	inline DateTime_t3738529785 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3738529785  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1166124571_H
#ifndef USERTITLEINFO_T663336695_H
#define USERTITLEINFO_T663336695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UserTitleInfo
struct  UserTitleInfo_t663336695  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.UserTitleInfo::AvatarUrl
	String_t* ___AvatarUrl_0;
	// System.DateTime PlayFab.ClientModels.UserTitleInfo::Created
	DateTime_t3738529785  ___Created_1;
	// System.String PlayFab.ClientModels.UserTitleInfo::DisplayName
	String_t* ___DisplayName_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.UserTitleInfo::FirstLogin
	Nullable_1_t1166124571  ___FirstLogin_3;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.UserTitleInfo::isBanned
	Nullable_1_t1819850047  ___isBanned_4;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.UserTitleInfo::LastLogin
	Nullable_1_t1166124571  ___LastLogin_5;
	// System.Nullable`1<PlayFab.ClientModels.UserOrigination> PlayFab.ClientModels.UserTitleInfo::Origination
	Nullable_1_t735945096  ___Origination_6;
	// PlayFab.ClientModels.EntityKey PlayFab.ClientModels.UserTitleInfo::TitlePlayerAccount
	EntityKey_t1759282107 * ___TitlePlayerAccount_7;

public:
	inline static int32_t get_offset_of_AvatarUrl_0() { return static_cast<int32_t>(offsetof(UserTitleInfo_t663336695, ___AvatarUrl_0)); }
	inline String_t* get_AvatarUrl_0() const { return ___AvatarUrl_0; }
	inline String_t** get_address_of_AvatarUrl_0() { return &___AvatarUrl_0; }
	inline void set_AvatarUrl_0(String_t* value)
	{
		___AvatarUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&___AvatarUrl_0), value);
	}

	inline static int32_t get_offset_of_Created_1() { return static_cast<int32_t>(offsetof(UserTitleInfo_t663336695, ___Created_1)); }
	inline DateTime_t3738529785  get_Created_1() const { return ___Created_1; }
	inline DateTime_t3738529785 * get_address_of_Created_1() { return &___Created_1; }
	inline void set_Created_1(DateTime_t3738529785  value)
	{
		___Created_1 = value;
	}

	inline static int32_t get_offset_of_DisplayName_2() { return static_cast<int32_t>(offsetof(UserTitleInfo_t663336695, ___DisplayName_2)); }
	inline String_t* get_DisplayName_2() const { return ___DisplayName_2; }
	inline String_t** get_address_of_DisplayName_2() { return &___DisplayName_2; }
	inline void set_DisplayName_2(String_t* value)
	{
		___DisplayName_2 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_2), value);
	}

	inline static int32_t get_offset_of_FirstLogin_3() { return static_cast<int32_t>(offsetof(UserTitleInfo_t663336695, ___FirstLogin_3)); }
	inline Nullable_1_t1166124571  get_FirstLogin_3() const { return ___FirstLogin_3; }
	inline Nullable_1_t1166124571 * get_address_of_FirstLogin_3() { return &___FirstLogin_3; }
	inline void set_FirstLogin_3(Nullable_1_t1166124571  value)
	{
		___FirstLogin_3 = value;
	}

	inline static int32_t get_offset_of_isBanned_4() { return static_cast<int32_t>(offsetof(UserTitleInfo_t663336695, ___isBanned_4)); }
	inline Nullable_1_t1819850047  get_isBanned_4() const { return ___isBanned_4; }
	inline Nullable_1_t1819850047 * get_address_of_isBanned_4() { return &___isBanned_4; }
	inline void set_isBanned_4(Nullable_1_t1819850047  value)
	{
		___isBanned_4 = value;
	}

	inline static int32_t get_offset_of_LastLogin_5() { return static_cast<int32_t>(offsetof(UserTitleInfo_t663336695, ___LastLogin_5)); }
	inline Nullable_1_t1166124571  get_LastLogin_5() const { return ___LastLogin_5; }
	inline Nullable_1_t1166124571 * get_address_of_LastLogin_5() { return &___LastLogin_5; }
	inline void set_LastLogin_5(Nullable_1_t1166124571  value)
	{
		___LastLogin_5 = value;
	}

	inline static int32_t get_offset_of_Origination_6() { return static_cast<int32_t>(offsetof(UserTitleInfo_t663336695, ___Origination_6)); }
	inline Nullable_1_t735945096  get_Origination_6() const { return ___Origination_6; }
	inline Nullable_1_t735945096 * get_address_of_Origination_6() { return &___Origination_6; }
	inline void set_Origination_6(Nullable_1_t735945096  value)
	{
		___Origination_6 = value;
	}

	inline static int32_t get_offset_of_TitlePlayerAccount_7() { return static_cast<int32_t>(offsetof(UserTitleInfo_t663336695, ___TitlePlayerAccount_7)); }
	inline EntityKey_t1759282107 * get_TitlePlayerAccount_7() const { return ___TitlePlayerAccount_7; }
	inline EntityKey_t1759282107 ** get_address_of_TitlePlayerAccount_7() { return &___TitlePlayerAccount_7; }
	inline void set_TitlePlayerAccount_7(EntityKey_t1759282107 * value)
	{
		___TitlePlayerAccount_7 = value;
		Il2CppCodeGenWriteBarrier((&___TitlePlayerAccount_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERTITLEINFO_T663336695_H
#ifndef WRITECLIENTCHARACTEREVENTREQUEST_T2924058298_H
#define WRITECLIENTCHARACTEREVENTREQUEST_T2924058298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.WriteClientCharacterEventRequest
struct  WriteClientCharacterEventRequest_t2924058298  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.ClientModels.WriteClientCharacterEventRequest::Body
	Dictionary_2_t2865362463 * ___Body_0;
	// System.String PlayFab.ClientModels.WriteClientCharacterEventRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.String PlayFab.ClientModels.WriteClientCharacterEventRequest::EventName
	String_t* ___EventName_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.WriteClientCharacterEventRequest::Timestamp
	Nullable_1_t1166124571  ___Timestamp_3;

public:
	inline static int32_t get_offset_of_Body_0() { return static_cast<int32_t>(offsetof(WriteClientCharacterEventRequest_t2924058298, ___Body_0)); }
	inline Dictionary_2_t2865362463 * get_Body_0() const { return ___Body_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_Body_0() { return &___Body_0; }
	inline void set_Body_0(Dictionary_2_t2865362463 * value)
	{
		___Body_0 = value;
		Il2CppCodeGenWriteBarrier((&___Body_0), value);
	}

	inline static int32_t get_offset_of_CharacterId_1() { return static_cast<int32_t>(offsetof(WriteClientCharacterEventRequest_t2924058298, ___CharacterId_1)); }
	inline String_t* get_CharacterId_1() const { return ___CharacterId_1; }
	inline String_t** get_address_of_CharacterId_1() { return &___CharacterId_1; }
	inline void set_CharacterId_1(String_t* value)
	{
		___CharacterId_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_1), value);
	}

	inline static int32_t get_offset_of_EventName_2() { return static_cast<int32_t>(offsetof(WriteClientCharacterEventRequest_t2924058298, ___EventName_2)); }
	inline String_t* get_EventName_2() const { return ___EventName_2; }
	inline String_t** get_address_of_EventName_2() { return &___EventName_2; }
	inline void set_EventName_2(String_t* value)
	{
		___EventName_2 = value;
		Il2CppCodeGenWriteBarrier((&___EventName_2), value);
	}

	inline static int32_t get_offset_of_Timestamp_3() { return static_cast<int32_t>(offsetof(WriteClientCharacterEventRequest_t2924058298, ___Timestamp_3)); }
	inline Nullable_1_t1166124571  get_Timestamp_3() const { return ___Timestamp_3; }
	inline Nullable_1_t1166124571 * get_address_of_Timestamp_3() { return &___Timestamp_3; }
	inline void set_Timestamp_3(Nullable_1_t1166124571  value)
	{
		___Timestamp_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITECLIENTCHARACTEREVENTREQUEST_T2924058298_H
#ifndef WRITECLIENTPLAYEREVENTREQUEST_T1685857642_H
#define WRITECLIENTPLAYEREVENTREQUEST_T1685857642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.WriteClientPlayerEventRequest
struct  WriteClientPlayerEventRequest_t1685857642  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.ClientModels.WriteClientPlayerEventRequest::Body
	Dictionary_2_t2865362463 * ___Body_0;
	// System.String PlayFab.ClientModels.WriteClientPlayerEventRequest::EventName
	String_t* ___EventName_1;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.WriteClientPlayerEventRequest::Timestamp
	Nullable_1_t1166124571  ___Timestamp_2;

public:
	inline static int32_t get_offset_of_Body_0() { return static_cast<int32_t>(offsetof(WriteClientPlayerEventRequest_t1685857642, ___Body_0)); }
	inline Dictionary_2_t2865362463 * get_Body_0() const { return ___Body_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_Body_0() { return &___Body_0; }
	inline void set_Body_0(Dictionary_2_t2865362463 * value)
	{
		___Body_0 = value;
		Il2CppCodeGenWriteBarrier((&___Body_0), value);
	}

	inline static int32_t get_offset_of_EventName_1() { return static_cast<int32_t>(offsetof(WriteClientPlayerEventRequest_t1685857642, ___EventName_1)); }
	inline String_t* get_EventName_1() const { return ___EventName_1; }
	inline String_t** get_address_of_EventName_1() { return &___EventName_1; }
	inline void set_EventName_1(String_t* value)
	{
		___EventName_1 = value;
		Il2CppCodeGenWriteBarrier((&___EventName_1), value);
	}

	inline static int32_t get_offset_of_Timestamp_2() { return static_cast<int32_t>(offsetof(WriteClientPlayerEventRequest_t1685857642, ___Timestamp_2)); }
	inline Nullable_1_t1166124571  get_Timestamp_2() const { return ___Timestamp_2; }
	inline Nullable_1_t1166124571 * get_address_of_Timestamp_2() { return &___Timestamp_2; }
	inline void set_Timestamp_2(Nullable_1_t1166124571  value)
	{
		___Timestamp_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITECLIENTPLAYEREVENTREQUEST_T1685857642_H
#ifndef WRITETITLEEVENTREQUEST_T1126918532_H
#define WRITETITLEEVENTREQUEST_T1126918532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.WriteTitleEventRequest
struct  WriteTitleEventRequest_t1126918532  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.ClientModels.WriteTitleEventRequest::Body
	Dictionary_2_t2865362463 * ___Body_0;
	// System.String PlayFab.ClientModels.WriteTitleEventRequest::EventName
	String_t* ___EventName_1;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.WriteTitleEventRequest::Timestamp
	Nullable_1_t1166124571  ___Timestamp_2;

public:
	inline static int32_t get_offset_of_Body_0() { return static_cast<int32_t>(offsetof(WriteTitleEventRequest_t1126918532, ___Body_0)); }
	inline Dictionary_2_t2865362463 * get_Body_0() const { return ___Body_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_Body_0() { return &___Body_0; }
	inline void set_Body_0(Dictionary_2_t2865362463 * value)
	{
		___Body_0 = value;
		Il2CppCodeGenWriteBarrier((&___Body_0), value);
	}

	inline static int32_t get_offset_of_EventName_1() { return static_cast<int32_t>(offsetof(WriteTitleEventRequest_t1126918532, ___EventName_1)); }
	inline String_t* get_EventName_1() const { return ___EventName_1; }
	inline String_t** get_address_of_EventName_1() { return &___EventName_1; }
	inline void set_EventName_1(String_t* value)
	{
		___EventName_1 = value;
		Il2CppCodeGenWriteBarrier((&___EventName_1), value);
	}

	inline static int32_t get_offset_of_Timestamp_2() { return static_cast<int32_t>(offsetof(WriteTitleEventRequest_t1126918532, ___Timestamp_2)); }
	inline Nullable_1_t1166124571  get_Timestamp_2() const { return ___Timestamp_2; }
	inline Nullable_1_t1166124571 * get_address_of_Timestamp_2() { return &___Timestamp_2; }
	inline void set_Timestamp_2(Nullable_1_t1166124571  value)
	{
		___Timestamp_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITETITLEEVENTREQUEST_T1126918532_H
#ifndef EVENTCONTENTS_T3886579751_H
#define EVENTCONTENTS_T3886579751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.EventsModels.EventContents
struct  EventContents_t3886579751  : public RuntimeObject
{
public:
	// PlayFab.EventsModels.EntityKey PlayFab.EventsModels.EventContents::Entity
	EntityKey_t3724060727 * ___Entity_0;
	// System.String PlayFab.EventsModels.EventContents::EventNamespace
	String_t* ___EventNamespace_1;
	// System.String PlayFab.EventsModels.EventContents::Name
	String_t* ___Name_2;
	// System.String PlayFab.EventsModels.EventContents::OriginalId
	String_t* ___OriginalId_3;
	// System.Nullable`1<System.DateTime> PlayFab.EventsModels.EventContents::OriginalTimestamp
	Nullable_1_t1166124571  ___OriginalTimestamp_4;
	// System.Object PlayFab.EventsModels.EventContents::Payload
	RuntimeObject * ___Payload_5;
	// System.String PlayFab.EventsModels.EventContents::PayloadJSON
	String_t* ___PayloadJSON_6;

public:
	inline static int32_t get_offset_of_Entity_0() { return static_cast<int32_t>(offsetof(EventContents_t3886579751, ___Entity_0)); }
	inline EntityKey_t3724060727 * get_Entity_0() const { return ___Entity_0; }
	inline EntityKey_t3724060727 ** get_address_of_Entity_0() { return &___Entity_0; }
	inline void set_Entity_0(EntityKey_t3724060727 * value)
	{
		___Entity_0 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_0), value);
	}

	inline static int32_t get_offset_of_EventNamespace_1() { return static_cast<int32_t>(offsetof(EventContents_t3886579751, ___EventNamespace_1)); }
	inline String_t* get_EventNamespace_1() const { return ___EventNamespace_1; }
	inline String_t** get_address_of_EventNamespace_1() { return &___EventNamespace_1; }
	inline void set_EventNamespace_1(String_t* value)
	{
		___EventNamespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___EventNamespace_1), value);
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(EventContents_t3886579751, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}

	inline static int32_t get_offset_of_OriginalId_3() { return static_cast<int32_t>(offsetof(EventContents_t3886579751, ___OriginalId_3)); }
	inline String_t* get_OriginalId_3() const { return ___OriginalId_3; }
	inline String_t** get_address_of_OriginalId_3() { return &___OriginalId_3; }
	inline void set_OriginalId_3(String_t* value)
	{
		___OriginalId_3 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalId_3), value);
	}

	inline static int32_t get_offset_of_OriginalTimestamp_4() { return static_cast<int32_t>(offsetof(EventContents_t3886579751, ___OriginalTimestamp_4)); }
	inline Nullable_1_t1166124571  get_OriginalTimestamp_4() const { return ___OriginalTimestamp_4; }
	inline Nullable_1_t1166124571 * get_address_of_OriginalTimestamp_4() { return &___OriginalTimestamp_4; }
	inline void set_OriginalTimestamp_4(Nullable_1_t1166124571  value)
	{
		___OriginalTimestamp_4 = value;
	}

	inline static int32_t get_offset_of_Payload_5() { return static_cast<int32_t>(offsetof(EventContents_t3886579751, ___Payload_5)); }
	inline RuntimeObject * get_Payload_5() const { return ___Payload_5; }
	inline RuntimeObject ** get_address_of_Payload_5() { return &___Payload_5; }
	inline void set_Payload_5(RuntimeObject * value)
	{
		___Payload_5 = value;
		Il2CppCodeGenWriteBarrier((&___Payload_5), value);
	}

	inline static int32_t get_offset_of_PayloadJSON_6() { return static_cast<int32_t>(offsetof(EventContents_t3886579751, ___PayloadJSON_6)); }
	inline String_t* get_PayloadJSON_6() const { return ___PayloadJSON_6; }
	inline String_t** get_address_of_PayloadJSON_6() { return &___PayloadJSON_6; }
	inline void set_PayloadJSON_6(String_t* value)
	{
		___PayloadJSON_6 = value;
		Il2CppCodeGenWriteBarrier((&___PayloadJSON_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTCONTENTS_T3886579751_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4000 = { sizeof (UpdatePlayerStatisticsResult_t836197869), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4001 = { sizeof (UpdateSharedGroupDataRequest_t1607840879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4001[4] = 
{
	UpdateSharedGroupDataRequest_t1607840879::get_offset_of_Data_0(),
	UpdateSharedGroupDataRequest_t1607840879::get_offset_of_KeysToRemove_1(),
	UpdateSharedGroupDataRequest_t1607840879::get_offset_of_Permission_2(),
	UpdateSharedGroupDataRequest_t1607840879::get_offset_of_SharedGroupId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4002 = { sizeof (UpdateSharedGroupDataResult_t3416968912), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4003 = { sizeof (UpdateUserDataRequest_t585447437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4003[3] = 
{
	UpdateUserDataRequest_t585447437::get_offset_of_Data_0(),
	UpdateUserDataRequest_t585447437::get_offset_of_KeysToRemove_1(),
	UpdateUserDataRequest_t585447437::get_offset_of_Permission_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4004 = { sizeof (UpdateUserDataResult_t1013856270), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4004[1] = 
{
	UpdateUserDataResult_t1013856270::get_offset_of_DataVersion_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4005 = { sizeof (UpdateUserTitleDisplayNameRequest_t1448654490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4005[1] = 
{
	UpdateUserTitleDisplayNameRequest_t1448654490::get_offset_of_DisplayName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4006 = { sizeof (UpdateUserTitleDisplayNameResult_t651277979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4006[1] = 
{
	UpdateUserTitleDisplayNameResult_t651277979::get_offset_of_DisplayName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4007 = { sizeof (UserAccountInfo_t2687855647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4007[20] = 
{
	UserAccountInfo_t2687855647::get_offset_of_AndroidDeviceInfo_0(),
	UserAccountInfo_t2687855647::get_offset_of_Created_1(),
	UserAccountInfo_t2687855647::get_offset_of_CustomIdInfo_2(),
	UserAccountInfo_t2687855647::get_offset_of_FacebookInfo_3(),
	UserAccountInfo_t2687855647::get_offset_of_FacebookInstantGamesIdInfo_4(),
	UserAccountInfo_t2687855647::get_offset_of_GameCenterInfo_5(),
	UserAccountInfo_t2687855647::get_offset_of_GoogleInfo_6(),
	UserAccountInfo_t2687855647::get_offset_of_IosDeviceInfo_7(),
	UserAccountInfo_t2687855647::get_offset_of_KongregateInfo_8(),
	UserAccountInfo_t2687855647::get_offset_of_NintendoSwitchDeviceIdInfo_9(),
	UserAccountInfo_t2687855647::get_offset_of_OpenIdInfo_10(),
	UserAccountInfo_t2687855647::get_offset_of_PlayFabId_11(),
	UserAccountInfo_t2687855647::get_offset_of_PrivateInfo_12(),
	UserAccountInfo_t2687855647::get_offset_of_PsnInfo_13(),
	UserAccountInfo_t2687855647::get_offset_of_SteamInfo_14(),
	UserAccountInfo_t2687855647::get_offset_of_TitleInfo_15(),
	UserAccountInfo_t2687855647::get_offset_of_TwitchInfo_16(),
	UserAccountInfo_t2687855647::get_offset_of_Username_17(),
	UserAccountInfo_t2687855647::get_offset_of_WindowsHelloInfo_18(),
	UserAccountInfo_t2687855647::get_offset_of_XboxInfo_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4008 = { sizeof (UserAndroidDeviceInfo_t3243313677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4008[1] = 
{
	UserAndroidDeviceInfo_t3243313677::get_offset_of_AndroidDeviceId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4009 = { sizeof (UserCustomIdInfo_t2526912300), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4009[1] = 
{
	UserCustomIdInfo_t2526912300::get_offset_of_CustomId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4010 = { sizeof (UserDataPermission_t2025516611)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4010[3] = 
{
	UserDataPermission_t2025516611::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4011 = { sizeof (UserDataRecord_t1385934566), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4011[3] = 
{
	UserDataRecord_t1385934566::get_offset_of_LastUpdated_0(),
	UserDataRecord_t1385934566::get_offset_of_Permission_1(),
	UserDataRecord_t1385934566::get_offset_of_Value_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4012 = { sizeof (UserFacebookInfo_t1027919101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4012[2] = 
{
	UserFacebookInfo_t1027919101::get_offset_of_FacebookId_0(),
	UserFacebookInfo_t1027919101::get_offset_of_FullName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4013 = { sizeof (UserFacebookInstantGamesIdInfo_t975760407), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4013[1] = 
{
	UserFacebookInstantGamesIdInfo_t975760407::get_offset_of_FacebookInstantGamesId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4014 = { sizeof (UserGameCenterInfo_t1831595825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4014[1] = 
{
	UserGameCenterInfo_t1831595825::get_offset_of_GameCenterId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4015 = { sizeof (UserGoogleInfo_t2549595312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4015[4] = 
{
	UserGoogleInfo_t2549595312::get_offset_of_GoogleEmail_0(),
	UserGoogleInfo_t2549595312::get_offset_of_GoogleGender_1(),
	UserGoogleInfo_t2549595312::get_offset_of_GoogleId_2(),
	UserGoogleInfo_t2549595312::get_offset_of_GoogleLocale_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4016 = { sizeof (UserIosDeviceInfo_t593505116), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4016[1] = 
{
	UserIosDeviceInfo_t593505116::get_offset_of_IosDeviceId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4017 = { sizeof (UserKongregateInfo_t82251820), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4017[2] = 
{
	UserKongregateInfo_t82251820::get_offset_of_KongregateId_0(),
	UserKongregateInfo_t82251820::get_offset_of_KongregateName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4018 = { sizeof (UserNintendoSwitchDeviceIdInfo_t1115872661), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4018[1] = 
{
	UserNintendoSwitchDeviceIdInfo_t1115872661::get_offset_of_NintendoSwitchDeviceId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4019 = { sizeof (UserOpenIdInfo_t147996751), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4019[3] = 
{
	UserOpenIdInfo_t147996751::get_offset_of_ConnectionId_0(),
	UserOpenIdInfo_t147996751::get_offset_of_Issuer_1(),
	UserOpenIdInfo_t147996751::get_offset_of_Subject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4020 = { sizeof (UserOrigination_t3308350310)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4020[23] = 
{
	UserOrigination_t3308350310::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4021 = { sizeof (UserPrivateAccountInfo_t2844482441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4021[1] = 
{
	UserPrivateAccountInfo_t2844482441::get_offset_of_Email_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4022 = { sizeof (UserPsnInfo_t1437888010), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4022[2] = 
{
	UserPsnInfo_t1437888010::get_offset_of_PsnAccountId_0(),
	UserPsnInfo_t1437888010::get_offset_of_PsnOnlineId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4023 = { sizeof (UserSettings_t3054366223), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4023[3] = 
{
	UserSettings_t3054366223::get_offset_of_GatherDeviceInfo_0(),
	UserSettings_t3054366223::get_offset_of_GatherFocusInfo_1(),
	UserSettings_t3054366223::get_offset_of_NeedsAttribution_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4024 = { sizeof (UserSteamInfo_t155181053), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4024[4] = 
{
	UserSteamInfo_t155181053::get_offset_of_SteamActivationStatus_0(),
	UserSteamInfo_t155181053::get_offset_of_SteamCountry_1(),
	UserSteamInfo_t155181053::get_offset_of_SteamCurrency_2(),
	UserSteamInfo_t155181053::get_offset_of_SteamId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4025 = { sizeof (UserTitleInfo_t663336695), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4025[8] = 
{
	UserTitleInfo_t663336695::get_offset_of_AvatarUrl_0(),
	UserTitleInfo_t663336695::get_offset_of_Created_1(),
	UserTitleInfo_t663336695::get_offset_of_DisplayName_2(),
	UserTitleInfo_t663336695::get_offset_of_FirstLogin_3(),
	UserTitleInfo_t663336695::get_offset_of_isBanned_4(),
	UserTitleInfo_t663336695::get_offset_of_LastLogin_5(),
	UserTitleInfo_t663336695::get_offset_of_Origination_6(),
	UserTitleInfo_t663336695::get_offset_of_TitlePlayerAccount_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4026 = { sizeof (UserTwitchInfo_t3900925054), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4026[2] = 
{
	UserTwitchInfo_t3900925054::get_offset_of_TwitchId_0(),
	UserTwitchInfo_t3900925054::get_offset_of_TwitchUserName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4027 = { sizeof (UserWindowsHelloInfo_t225950329), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4027[2] = 
{
	UserWindowsHelloInfo_t225950329::get_offset_of_WindowsHelloDeviceName_0(),
	UserWindowsHelloInfo_t225950329::get_offset_of_WindowsHelloPublicKeyHash_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4028 = { sizeof (UserXboxInfo_t1002111372), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4028[1] = 
{
	UserXboxInfo_t1002111372::get_offset_of_XboxUserId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4029 = { sizeof (ValidateAmazonReceiptRequest_t4084041820), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4029[5] = 
{
	ValidateAmazonReceiptRequest_t4084041820::get_offset_of_CatalogVersion_0(),
	ValidateAmazonReceiptRequest_t4084041820::get_offset_of_CurrencyCode_1(),
	ValidateAmazonReceiptRequest_t4084041820::get_offset_of_PurchasePrice_2(),
	ValidateAmazonReceiptRequest_t4084041820::get_offset_of_ReceiptId_3(),
	ValidateAmazonReceiptRequest_t4084041820::get_offset_of_UserId_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4030 = { sizeof (ValidateAmazonReceiptResult_t815414974), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4031 = { sizeof (ValidateGooglePlayPurchaseRequest_t572573556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4031[4] = 
{
	ValidateGooglePlayPurchaseRequest_t572573556::get_offset_of_CurrencyCode_0(),
	ValidateGooglePlayPurchaseRequest_t572573556::get_offset_of_PurchasePrice_1(),
	ValidateGooglePlayPurchaseRequest_t572573556::get_offset_of_ReceiptJson_2(),
	ValidateGooglePlayPurchaseRequest_t572573556::get_offset_of_Signature_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4032 = { sizeof (ValidateGooglePlayPurchaseResult_t989710195), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4033 = { sizeof (ValidateIOSReceiptRequest_t1731790168), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4033[3] = 
{
	ValidateIOSReceiptRequest_t1731790168::get_offset_of_CurrencyCode_0(),
	ValidateIOSReceiptRequest_t1731790168::get_offset_of_PurchasePrice_1(),
	ValidateIOSReceiptRequest_t1731790168::get_offset_of_ReceiptData_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4034 = { sizeof (ValidateIOSReceiptResult_t2155218257), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4035 = { sizeof (ValidateWindowsReceiptRequest_t3100880050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4035[4] = 
{
	ValidateWindowsReceiptRequest_t3100880050::get_offset_of_CatalogVersion_0(),
	ValidateWindowsReceiptRequest_t3100880050::get_offset_of_CurrencyCode_1(),
	ValidateWindowsReceiptRequest_t3100880050::get_offset_of_PurchasePrice_2(),
	ValidateWindowsReceiptRequest_t3100880050::get_offset_of_Receipt_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4036 = { sizeof (ValidateWindowsReceiptResult_t3911625901), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4037 = { sizeof (ValueToDateModel_t3894608384), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4037[3] = 
{
	ValueToDateModel_t3894608384::get_offset_of_Currency_0(),
	ValueToDateModel_t3894608384::get_offset_of_TotalValue_1(),
	ValueToDateModel_t3894608384::get_offset_of_TotalValueAsDecimal_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4038 = { sizeof (VirtualCurrencyRechargeTime_t2823835569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4038[3] = 
{
	VirtualCurrencyRechargeTime_t2823835569::get_offset_of_RechargeMax_0(),
	VirtualCurrencyRechargeTime_t2823835569::get_offset_of_RechargeTime_1(),
	VirtualCurrencyRechargeTime_t2823835569::get_offset_of_SecondsToRecharge_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4039 = { sizeof (WriteClientCharacterEventRequest_t2924058298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4039[4] = 
{
	WriteClientCharacterEventRequest_t2924058298::get_offset_of_Body_0(),
	WriteClientCharacterEventRequest_t2924058298::get_offset_of_CharacterId_1(),
	WriteClientCharacterEventRequest_t2924058298::get_offset_of_EventName_2(),
	WriteClientCharacterEventRequest_t2924058298::get_offset_of_Timestamp_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4040 = { sizeof (WriteClientPlayerEventRequest_t1685857642), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4040[3] = 
{
	WriteClientPlayerEventRequest_t1685857642::get_offset_of_Body_0(),
	WriteClientPlayerEventRequest_t1685857642::get_offset_of_EventName_1(),
	WriteClientPlayerEventRequest_t1685857642::get_offset_of_Timestamp_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4041 = { sizeof (WriteEventResponse_t368577847), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4041[1] = 
{
	WriteEventResponse_t368577847::get_offset_of_EventId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4042 = { sizeof (WriteTitleEventRequest_t1126918532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4042[3] = 
{
	WriteTitleEventRequest_t1126918532::get_offset_of_Body_0(),
	WriteTitleEventRequest_t1126918532::get_offset_of_EventName_1(),
	WriteTitleEventRequest_t1126918532::get_offset_of_Timestamp_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4043 = { sizeof (PlayFabDeviceUtil_t164370505), -1, sizeof(PlayFabDeviceUtil_t164370505_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4043[6] = 
{
	PlayFabDeviceUtil_t164370505_StaticFields::get_offset_of__needsAttribution_0(),
	PlayFabDeviceUtil_t164370505_StaticFields::get_offset_of__gatherDeviceInfo_1(),
	PlayFabDeviceUtil_t164370505_StaticFields::get_offset_of__gatherScreenTime_2(),
	PlayFabDeviceUtil_t164370505_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_3(),
	PlayFabDeviceUtil_t164370505_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_4(),
	PlayFabDeviceUtil_t164370505_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4044 = { sizeof (PlayFabIdfa_t2430733542), -1, sizeof(PlayFabIdfa_t2430733542_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4044[1] = 
{
	PlayFabIdfa_t2430733542_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4045 = { sizeof (PlayFabSettings_t1718914721), -1, sizeof(PlayFabSettings_t1718914721_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4045[13] = 
{
	0,
	0,
	PlayFabSettings_t1718914721_StaticFields::get_offset_of_AdvertisingIdType_2(),
	PlayFabSettings_t1718914721_StaticFields::get_offset_of_AdvertisingIdValue_3(),
	PlayFabSettings_t1718914721_StaticFields::get_offset_of_DisableAdvertising_4(),
	PlayFabSettings_t1718914721_StaticFields::get_offset_of_DisableDeviceInfo_5(),
	PlayFabSettings_t1718914721_StaticFields::get_offset_of_DisableFocusTimeCollection_6(),
	PlayFabSettings_t1718914721_StaticFields::get_offset_of__playFabShared_7(),
	0,
	0,
	0,
	PlayFabSettings_t1718914721_StaticFields::get_offset_of_RequestGetParams_11(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4046 = { sizeof (PlayFabCloudScriptAPI_t2283091135), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4047 = { sizeof (CloudScriptRevisionOption_t2675076833)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4047[4] = 
{
	CloudScriptRevisionOption_t2675076833::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4048 = { sizeof (EntityKey_t1335848462), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4048[2] = 
{
	EntityKey_t1335848462::get_offset_of_Id_0(),
	EntityKey_t1335848462::get_offset_of_Type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4049 = { sizeof (ExecuteCloudScriptResult_t1634170761), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4049[12] = 
{
	ExecuteCloudScriptResult_t1634170761::get_offset_of_APIRequestsIssued_2(),
	ExecuteCloudScriptResult_t1634170761::get_offset_of_Error_3(),
	ExecuteCloudScriptResult_t1634170761::get_offset_of_ExecutionTimeSeconds_4(),
	ExecuteCloudScriptResult_t1634170761::get_offset_of_FunctionName_5(),
	ExecuteCloudScriptResult_t1634170761::get_offset_of_FunctionResult_6(),
	ExecuteCloudScriptResult_t1634170761::get_offset_of_FunctionResultTooLarge_7(),
	ExecuteCloudScriptResult_t1634170761::get_offset_of_HttpRequestsIssued_8(),
	ExecuteCloudScriptResult_t1634170761::get_offset_of_Logs_9(),
	ExecuteCloudScriptResult_t1634170761::get_offset_of_LogsTooLarge_10(),
	ExecuteCloudScriptResult_t1634170761::get_offset_of_MemoryConsumedBytes_11(),
	ExecuteCloudScriptResult_t1634170761::get_offset_of_ProcessorTimeSeconds_12(),
	ExecuteCloudScriptResult_t1634170761::get_offset_of_Revision_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4050 = { sizeof (ExecuteEntityCloudScriptRequest_t646992320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4050[6] = 
{
	ExecuteEntityCloudScriptRequest_t646992320::get_offset_of_Entity_0(),
	ExecuteEntityCloudScriptRequest_t646992320::get_offset_of_FunctionName_1(),
	ExecuteEntityCloudScriptRequest_t646992320::get_offset_of_FunctionParameter_2(),
	ExecuteEntityCloudScriptRequest_t646992320::get_offset_of_GeneratePlayStreamEvent_3(),
	ExecuteEntityCloudScriptRequest_t646992320::get_offset_of_RevisionSelection_4(),
	ExecuteEntityCloudScriptRequest_t646992320::get_offset_of_SpecificRevision_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4051 = { sizeof (LogStatement_t103142253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4051[3] = 
{
	LogStatement_t103142253::get_offset_of_Data_0(),
	LogStatement_t103142253::get_offset_of_Level_1(),
	LogStatement_t103142253::get_offset_of_Message_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4052 = { sizeof (ScriptExecutionError_t2088752497), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4052[3] = 
{
	ScriptExecutionError_t2088752497::get_offset_of_Error_0(),
	ScriptExecutionError_t2088752497::get_offset_of_Message_1(),
	ScriptExecutionError_t2088752497::get_offset_of_StackTrace_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4053 = { sizeof (PlayFabDataAPI_t862530335), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4054 = { sizeof (AbortFileUploadsRequest_t1360817169), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4054[3] = 
{
	AbortFileUploadsRequest_t1360817169::get_offset_of_Entity_0(),
	AbortFileUploadsRequest_t1360817169::get_offset_of_FileNames_1(),
	AbortFileUploadsRequest_t1360817169::get_offset_of_ProfileVersion_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4055 = { sizeof (AbortFileUploadsResponse_t394824386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4055[2] = 
{
	AbortFileUploadsResponse_t394824386::get_offset_of_Entity_2(),
	AbortFileUploadsResponse_t394824386::get_offset_of_ProfileVersion_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4056 = { sizeof (DeleteFilesRequest_t1464197789), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4056[3] = 
{
	DeleteFilesRequest_t1464197789::get_offset_of_Entity_0(),
	DeleteFilesRequest_t1464197789::get_offset_of_FileNames_1(),
	DeleteFilesRequest_t1464197789::get_offset_of_ProfileVersion_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4057 = { sizeof (DeleteFilesResponse_t1939054338), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4057[2] = 
{
	DeleteFilesResponse_t1939054338::get_offset_of_Entity_2(),
	DeleteFilesResponse_t1939054338::get_offset_of_ProfileVersion_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4058 = { sizeof (EntityKey_t1066008332), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4058[2] = 
{
	EntityKey_t1066008332::get_offset_of_Id_0(),
	EntityKey_t1066008332::get_offset_of_Type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4059 = { sizeof (FinalizeFileUploadsRequest_t2794077293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4059[2] = 
{
	FinalizeFileUploadsRequest_t2794077293::get_offset_of_Entity_0(),
	FinalizeFileUploadsRequest_t2794077293::get_offset_of_FileNames_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4060 = { sizeof (FinalizeFileUploadsResponse_t3548379214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4060[3] = 
{
	FinalizeFileUploadsResponse_t3548379214::get_offset_of_Entity_2(),
	FinalizeFileUploadsResponse_t3548379214::get_offset_of_Metadata_3(),
	FinalizeFileUploadsResponse_t3548379214::get_offset_of_ProfileVersion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4061 = { sizeof (GetFileMetadata_t2550306569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4061[5] = 
{
	GetFileMetadata_t2550306569::get_offset_of_Checksum_0(),
	GetFileMetadata_t2550306569::get_offset_of_DownloadUrl_1(),
	GetFileMetadata_t2550306569::get_offset_of_FileName_2(),
	GetFileMetadata_t2550306569::get_offset_of_LastModified_3(),
	GetFileMetadata_t2550306569::get_offset_of_Size_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4062 = { sizeof (GetFilesRequest_t3180579864), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4062[1] = 
{
	GetFilesRequest_t3180579864::get_offset_of_Entity_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4063 = { sizeof (GetFilesResponse_t3141948640), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4063[3] = 
{
	GetFilesResponse_t3141948640::get_offset_of_Entity_2(),
	GetFilesResponse_t3141948640::get_offset_of_Metadata_3(),
	GetFilesResponse_t3141948640::get_offset_of_ProfileVersion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4064 = { sizeof (GetObjectsRequest_t1605754222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4064[2] = 
{
	GetObjectsRequest_t1605754222::get_offset_of_Entity_0(),
	GetObjectsRequest_t1605754222::get_offset_of_EscapeObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4065 = { sizeof (GetObjectsResponse_t2737919070), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4065[3] = 
{
	GetObjectsResponse_t2737919070::get_offset_of_Entity_2(),
	GetObjectsResponse_t2737919070::get_offset_of_Objects_3(),
	GetObjectsResponse_t2737919070::get_offset_of_ProfileVersion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4066 = { sizeof (InitiateFileUploadMetadata_t2129114080), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4066[2] = 
{
	InitiateFileUploadMetadata_t2129114080::get_offset_of_FileName_0(),
	InitiateFileUploadMetadata_t2129114080::get_offset_of_UploadUrl_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4067 = { sizeof (InitiateFileUploadsRequest_t3669402982), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4067[3] = 
{
	InitiateFileUploadsRequest_t3669402982::get_offset_of_Entity_0(),
	InitiateFileUploadsRequest_t3669402982::get_offset_of_FileNames_1(),
	InitiateFileUploadsRequest_t3669402982::get_offset_of_ProfileVersion_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4068 = { sizeof (InitiateFileUploadsResponse_t551433165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4068[3] = 
{
	InitiateFileUploadsResponse_t551433165::get_offset_of_Entity_2(),
	InitiateFileUploadsResponse_t551433165::get_offset_of_ProfileVersion_3(),
	InitiateFileUploadsResponse_t551433165::get_offset_of_UploadDetails_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4069 = { sizeof (ObjectResult_t1725694628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4069[3] = 
{
	ObjectResult_t1725694628::get_offset_of_DataObject_2(),
	ObjectResult_t1725694628::get_offset_of_EscapedDataObject_3(),
	ObjectResult_t1725694628::get_offset_of_ObjectName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4070 = { sizeof (OperationTypes_t3559488056)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4070[5] = 
{
	OperationTypes_t3559488056::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4071 = { sizeof (SetObject_t3400833426), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4071[4] = 
{
	SetObject_t3400833426::get_offset_of_DataObject_0(),
	SetObject_t3400833426::get_offset_of_DeleteObject_1(),
	SetObject_t3400833426::get_offset_of_EscapedDataObject_2(),
	SetObject_t3400833426::get_offset_of_ObjectName_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4072 = { sizeof (SetObjectInfo_t1522112334), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4072[3] = 
{
	SetObjectInfo_t1522112334::get_offset_of_ObjectName_0(),
	SetObjectInfo_t1522112334::get_offset_of_OperationReason_1(),
	SetObjectInfo_t1522112334::get_offset_of_SetResult_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4073 = { sizeof (SetObjectsRequest_t1997088269), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4073[3] = 
{
	SetObjectsRequest_t1997088269::get_offset_of_Entity_0(),
	SetObjectsRequest_t1997088269::get_offset_of_ExpectedProfileVersion_1(),
	SetObjectsRequest_t1997088269::get_offset_of_Objects_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4074 = { sizeof (SetObjectsResponse_t1465709267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4074[2] = 
{
	SetObjectsResponse_t1465709267::get_offset_of_ProfileVersion_2(),
	SetObjectsResponse_t1465709267::get_offset_of_SetResults_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4075 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4076 = { sizeof (ScreenTimeTracker_t769550692), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4076[10] = 
{
	ScreenTimeTracker_t769550692::get_offset_of_focusId_0(),
	ScreenTimeTracker_t769550692::get_offset_of_gameSessionID_1(),
	ScreenTimeTracker_t769550692::get_offset_of_initialFocus_2(),
	ScreenTimeTracker_t769550692::get_offset_of_isSending_3(),
	ScreenTimeTracker_t769550692::get_offset_of_focusOffDateTime_4(),
	ScreenTimeTracker_t769550692::get_offset_of_focusOnDateTime_5(),
	ScreenTimeTracker_t769550692::get_offset_of_eventsRequests_6(),
	ScreenTimeTracker_t769550692::get_offset_of_entityKey_7(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4077 = { sizeof (PlayFabEventsAPI_t970334335), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4078 = { sizeof (EntityKey_t3724060727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4078[2] = 
{
	EntityKey_t3724060727::get_offset_of_Id_0(),
	EntityKey_t3724060727::get_offset_of_Type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4079 = { sizeof (EventContents_t3886579751), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4079[7] = 
{
	EventContents_t3886579751::get_offset_of_Entity_0(),
	EventContents_t3886579751::get_offset_of_EventNamespace_1(),
	EventContents_t3886579751::get_offset_of_Name_2(),
	EventContents_t3886579751::get_offset_of_OriginalId_3(),
	EventContents_t3886579751::get_offset_of_OriginalTimestamp_4(),
	EventContents_t3886579751::get_offset_of_Payload_5(),
	EventContents_t3886579751::get_offset_of_PayloadJSON_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4080 = { sizeof (WriteEventsRequest_t283160343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4080[1] = 
{
	WriteEventsRequest_t283160343::get_offset_of_Events_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4081 = { sizeof (WriteEventsResponse_t2232497070), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4081[1] = 
{
	WriteEventsResponse_t2232497070::get_offset_of_AssignedEventIds_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4082 = { sizeof (PlayFabGroupsAPI_t3605214092), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4083 = { sizeof (AcceptGroupApplicationRequest_t4103511345), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4083[2] = 
{
	AcceptGroupApplicationRequest_t4103511345::get_offset_of_Entity_0(),
	AcceptGroupApplicationRequest_t4103511345::get_offset_of_Group_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4084 = { sizeof (AcceptGroupInvitationRequest_t3293306536), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4084[2] = 
{
	AcceptGroupInvitationRequest_t3293306536::get_offset_of_Entity_0(),
	AcceptGroupInvitationRequest_t3293306536::get_offset_of_Group_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4085 = { sizeof (AddMembersRequest_t1798597853), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4085[3] = 
{
	AddMembersRequest_t1798597853::get_offset_of_Group_0(),
	AddMembersRequest_t1798597853::get_offset_of_Members_1(),
	AddMembersRequest_t1798597853::get_offset_of_RoleId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4086 = { sizeof (ApplyToGroupRequest_t34617838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4086[3] = 
{
	ApplyToGroupRequest_t34617838::get_offset_of_AutoAcceptOutstandingInvite_0(),
	ApplyToGroupRequest_t34617838::get_offset_of_Entity_1(),
	ApplyToGroupRequest_t34617838::get_offset_of_Group_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4087 = { sizeof (ApplyToGroupResponse_t3799590457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4087[3] = 
{
	ApplyToGroupResponse_t3799590457::get_offset_of_Entity_2(),
	ApplyToGroupResponse_t3799590457::get_offset_of_Expires_3(),
	ApplyToGroupResponse_t3799590457::get_offset_of_Group_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4088 = { sizeof (BlockEntityRequest_t3966213165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4088[2] = 
{
	BlockEntityRequest_t3966213165::get_offset_of_Entity_0(),
	BlockEntityRequest_t3966213165::get_offset_of_Group_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4089 = { sizeof (ChangeMemberRoleRequest_t4028690435), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4089[4] = 
{
	ChangeMemberRoleRequest_t4028690435::get_offset_of_DestinationRoleId_0(),
	ChangeMemberRoleRequest_t4028690435::get_offset_of_Group_1(),
	ChangeMemberRoleRequest_t4028690435::get_offset_of_Members_2(),
	ChangeMemberRoleRequest_t4028690435::get_offset_of_OriginRoleId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4090 = { sizeof (CreateGroupRequest_t3166467504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4090[2] = 
{
	CreateGroupRequest_t3166467504::get_offset_of_Entity_0(),
	CreateGroupRequest_t3166467504::get_offset_of_GroupName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4091 = { sizeof (CreateGroupResponse_t904731171), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4091[7] = 
{
	CreateGroupResponse_t904731171::get_offset_of_AdminRoleId_2(),
	CreateGroupResponse_t904731171::get_offset_of_Created_3(),
	CreateGroupResponse_t904731171::get_offset_of_Group_4(),
	CreateGroupResponse_t904731171::get_offset_of_GroupName_5(),
	CreateGroupResponse_t904731171::get_offset_of_MemberRoleId_6(),
	CreateGroupResponse_t904731171::get_offset_of_ProfileVersion_7(),
	CreateGroupResponse_t904731171::get_offset_of_Roles_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4092 = { sizeof (CreateGroupRoleRequest_t217950697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4092[3] = 
{
	CreateGroupRoleRequest_t217950697::get_offset_of_Group_0(),
	CreateGroupRoleRequest_t217950697::get_offset_of_RoleId_1(),
	CreateGroupRoleRequest_t217950697::get_offset_of_RoleName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4093 = { sizeof (CreateGroupRoleResponse_t1003602002), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4093[3] = 
{
	CreateGroupRoleResponse_t1003602002::get_offset_of_ProfileVersion_2(),
	CreateGroupRoleResponse_t1003602002::get_offset_of_RoleId_3(),
	CreateGroupRoleResponse_t1003602002::get_offset_of_RoleName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4094 = { sizeof (DeleteGroupRequest_t1041266137), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4094[1] = 
{
	DeleteGroupRequest_t1041266137::get_offset_of_Group_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4095 = { sizeof (DeleteRoleRequest_t2674433510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4095[2] = 
{
	DeleteRoleRequest_t2674433510::get_offset_of_Group_0(),
	DeleteRoleRequest_t2674433510::get_offset_of_RoleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4096 = { sizeof (EmptyResponse_t1044150585), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4097 = { sizeof (EntityKey_t3899277558), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4097[2] = 
{
	EntityKey_t3899277558::get_offset_of_Id_0(),
	EntityKey_t3899277558::get_offset_of_Type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4098 = { sizeof (EntityMemberRole_t1296979408), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4098[3] = 
{
	EntityMemberRole_t1296979408::get_offset_of_Members_0(),
	EntityMemberRole_t1296979408::get_offset_of_RoleId_1(),
	EntityMemberRole_t1296979408::get_offset_of_RoleName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4099 = { sizeof (EntityWithLineage_t1029882210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4099[2] = 
{
	EntityWithLineage_t1029882210::get_offset_of_Key_0(),
	EntityWithLineage_t1029882210::get_offset_of_Lineage_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
