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


// PlayFab.ClientModels.CollectionFilter
struct CollectionFilter_t2867730642;
// PlayFab.ClientModels.EntityTokenResponse
struct EntityTokenResponse_t1814794135;
// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams
struct GetPlayerCombinedInfoRequestParams_t121265087;
// PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload
struct GetPlayerCombinedInfoResultPayload_t2789378405;
// PlayFab.ClientModels.StoreMarketingModel
struct StoreMarketingModel_t3941052148;
// PlayFab.ClientModels.TradeInfo
struct TradeInfo_t4070927481;
// PlayFab.ClientModels.UserSettings
struct UserSettings_t3054366223;
// PlayFab.SharedModels.PlayFabRequestCommon
struct PlayFabRequestCommon_t229319069;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.SharedGroupDataRecord>
struct Dictionary_2_t1367178687;
// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord>
struct Dictionary_2_t1171190865;
// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.VirtualCurrencyRechargeTime>
struct Dictionary_2_t2609091868;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterResult>
struct List_1_t870886602;
// System.Collections.Generic.List`1<PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair>
struct List_1_t2572087611;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GameCenterPlayFabIdPair>
struct List_1_t349500089;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GenericPlayFabIdPair>
struct List_1_t3847474321;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GenericServiceId>
struct List_1_t577237979;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GooglePlayFabIdPair>
struct List_1_t1212696728;
// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance>
struct List_1_t898730215;
// System.Collections.Generic.List`1<PlayFab.ClientModels.KongregatePlayFabIdPair>
struct List_1_t668076486;
// System.Collections.Generic.List`1<PlayFab.ClientModels.NintendoSwitchPlayFabIdPair>
struct List_1_t3697230402;
// System.Collections.Generic.List`1<PlayFab.ClientModels.SteamPlayFabIdPair>
struct List_1_t2220671950;
// System.Collections.Generic.List`1<PlayFab.ClientModels.StoreItem>
struct List_1_t2148411690;
// System.Collections.Generic.List`1<PlayFab.ClientModels.SubscriptionModel>
struct List_1_t2010074131;
// System.Collections.Generic.List`1<PlayFab.ClientModels.TitleNewsItem>
struct List_1_t766029305;
// System.Collections.Generic.List`1<PlayFab.ClientModels.TwitchPlayFabIdPair>
struct List_1_t4273366236;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.String
struct String_t;
// System.String[]
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
#ifndef GOOGLEPLAYFABIDPAIR_T4035589282_H
#define GOOGLEPLAYFABIDPAIR_T4035589282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GooglePlayFabIdPair
struct  GooglePlayFabIdPair_t4035589282  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.GooglePlayFabIdPair::GoogleId
	String_t* ___GoogleId_0;
	// System.String PlayFab.ClientModels.GooglePlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;

public:
	inline static int32_t get_offset_of_GoogleId_0() { return static_cast<int32_t>(offsetof(GooglePlayFabIdPair_t4035589282, ___GoogleId_0)); }
	inline String_t* get_GoogleId_0() const { return ___GoogleId_0; }
	inline String_t** get_address_of_GoogleId_0() { return &___GoogleId_0; }
	inline void set_GoogleId_0(String_t* value)
	{
		___GoogleId_0 = value;
		Il2CppCodeGenWriteBarrier((&___GoogleId_0), value);
	}

	inline static int32_t get_offset_of_PlayFabId_1() { return static_cast<int32_t>(offsetof(GooglePlayFabIdPair_t4035589282, ___PlayFabId_1)); }
	inline String_t* get_PlayFabId_1() const { return ___PlayFabId_1; }
	inline String_t** get_address_of_PlayFabId_1() { return &___PlayFabId_1; }
	inline void set_PlayFabId_1(String_t* value)
	{
		___PlayFabId_1 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLEPLAYFABIDPAIR_T4035589282_H
#ifndef KONGREGATEPLAYFABIDPAIR_T3490969040_H
#define KONGREGATEPLAYFABIDPAIR_T3490969040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.KongregatePlayFabIdPair
struct  KongregatePlayFabIdPair_t3490969040  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.KongregatePlayFabIdPair::KongregateId
	String_t* ___KongregateId_0;
	// System.String PlayFab.ClientModels.KongregatePlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;

public:
	inline static int32_t get_offset_of_KongregateId_0() { return static_cast<int32_t>(offsetof(KongregatePlayFabIdPair_t3490969040, ___KongregateId_0)); }
	inline String_t* get_KongregateId_0() const { return ___KongregateId_0; }
	inline String_t** get_address_of_KongregateId_0() { return &___KongregateId_0; }
	inline void set_KongregateId_0(String_t* value)
	{
		___KongregateId_0 = value;
		Il2CppCodeGenWriteBarrier((&___KongregateId_0), value);
	}

	inline static int32_t get_offset_of_PlayFabId_1() { return static_cast<int32_t>(offsetof(KongregatePlayFabIdPair_t3490969040, ___PlayFabId_1)); }
	inline String_t* get_PlayFabId_1() const { return ___PlayFabId_1; }
	inline String_t** get_address_of_PlayFabId_1() { return &___PlayFabId_1; }
	inline void set_PlayFabId_1(String_t* value)
	{
		___PlayFabId_1 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KONGREGATEPLAYFABIDPAIR_T3490969040_H
#ifndef LOGSTATEMENT_T3612334110_H
#define LOGSTATEMENT_T3612334110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LogStatement
struct  LogStatement_t3612334110  : public RuntimeObject
{
public:
	// System.Object PlayFab.ClientModels.LogStatement::Data
	RuntimeObject * ___Data_0;
	// System.String PlayFab.ClientModels.LogStatement::Level
	String_t* ___Level_1;
	// System.String PlayFab.ClientModels.LogStatement::Message
	String_t* ___Message_2;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(LogStatement_t3612334110, ___Data_0)); }
	inline RuntimeObject * get_Data_0() const { return ___Data_0; }
	inline RuntimeObject ** get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(RuntimeObject * value)
	{
		___Data_0 = value;
		Il2CppCodeGenWriteBarrier((&___Data_0), value);
	}

	inline static int32_t get_offset_of_Level_1() { return static_cast<int32_t>(offsetof(LogStatement_t3612334110, ___Level_1)); }
	inline String_t* get_Level_1() const { return ___Level_1; }
	inline String_t** get_address_of_Level_1() { return &___Level_1; }
	inline void set_Level_1(String_t* value)
	{
		___Level_1 = value;
		Il2CppCodeGenWriteBarrier((&___Level_1), value);
	}

	inline static int32_t get_offset_of_Message_2() { return static_cast<int32_t>(offsetof(LogStatement_t3612334110, ___Message_2)); }
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
#endif // LOGSTATEMENT_T3612334110_H
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
#ifndef GETPLAYFABIDSFROMFACEBOOKINSTANTGAMESIDSREQUEST_T4247990660_H
#define GETPLAYFABIDSFROMFACEBOOKINSTANTGAMESIDSREQUEST_T4247990660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsRequest
struct  GetPlayFabIDsFromFacebookInstantGamesIdsRequest_t4247990660  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsRequest::FacebookInstantGamesIds
	List_1_t3319525431 * ___FacebookInstantGamesIds_0;

public:
	inline static int32_t get_offset_of_FacebookInstantGamesIds_0() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromFacebookInstantGamesIdsRequest_t4247990660, ___FacebookInstantGamesIds_0)); }
	inline List_1_t3319525431 * get_FacebookInstantGamesIds_0() const { return ___FacebookInstantGamesIds_0; }
	inline List_1_t3319525431 ** get_address_of_FacebookInstantGamesIds_0() { return &___FacebookInstantGamesIds_0; }
	inline void set_FacebookInstantGamesIds_0(List_1_t3319525431 * value)
	{
		___FacebookInstantGamesIds_0 = value;
		Il2CppCodeGenWriteBarrier((&___FacebookInstantGamesIds_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMFACEBOOKINSTANTGAMESIDSREQUEST_T4247990660_H
#ifndef GETPLAYFABIDSFROMFACEBOOKINSTANTGAMESIDSRESULT_T916575155_H
#define GETPLAYFABIDSFROMFACEBOOKINSTANTGAMESIDSRESULT_T916575155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsResult
struct  GetPlayFabIDsFromFacebookInstantGamesIdsResult_t916575155  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsResult::Data
	List_1_t2572087611 * ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromFacebookInstantGamesIdsResult_t916575155, ___Data_2)); }
	inline List_1_t2572087611 * get_Data_2() const { return ___Data_2; }
	inline List_1_t2572087611 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(List_1_t2572087611 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMFACEBOOKINSTANTGAMESIDSRESULT_T916575155_H
#ifndef GETPLAYFABIDSFROMGAMECENTERIDSREQUEST_T2496119787_H
#define GETPLAYFABIDSFROMGAMECENTERIDSREQUEST_T2496119787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsRequest
struct  GetPlayFabIDsFromGameCenterIDsRequest_t2496119787  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsRequest::GameCenterIDs
	List_1_t3319525431 * ___GameCenterIDs_0;

public:
	inline static int32_t get_offset_of_GameCenterIDs_0() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromGameCenterIDsRequest_t2496119787, ___GameCenterIDs_0)); }
	inline List_1_t3319525431 * get_GameCenterIDs_0() const { return ___GameCenterIDs_0; }
	inline List_1_t3319525431 ** get_address_of_GameCenterIDs_0() { return &___GameCenterIDs_0; }
	inline void set_GameCenterIDs_0(List_1_t3319525431 * value)
	{
		___GameCenterIDs_0 = value;
		Il2CppCodeGenWriteBarrier((&___GameCenterIDs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMGAMECENTERIDSREQUEST_T2496119787_H
#ifndef GETPLAYFABIDSFROMGAMECENTERIDSRESULT_T1686160360_H
#define GETPLAYFABIDSFROMGAMECENTERIDSRESULT_T1686160360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsResult
struct  GetPlayFabIDsFromGameCenterIDsResult_t1686160360  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GameCenterPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsResult::Data
	List_1_t349500089 * ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromGameCenterIDsResult_t1686160360, ___Data_2)); }
	inline List_1_t349500089 * get_Data_2() const { return ___Data_2; }
	inline List_1_t349500089 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(List_1_t349500089 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMGAMECENTERIDSRESULT_T1686160360_H
#ifndef GETPLAYFABIDSFROMGENERICIDSREQUEST_T2483038202_H
#define GETPLAYFABIDSFROMGENERICIDSREQUEST_T2483038202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsRequest
struct  GetPlayFabIDsFromGenericIDsRequest_t2483038202  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GenericServiceId> PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsRequest::GenericIDs
	List_1_t577237979 * ___GenericIDs_0;

public:
	inline static int32_t get_offset_of_GenericIDs_0() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromGenericIDsRequest_t2483038202, ___GenericIDs_0)); }
	inline List_1_t577237979 * get_GenericIDs_0() const { return ___GenericIDs_0; }
	inline List_1_t577237979 ** get_address_of_GenericIDs_0() { return &___GenericIDs_0; }
	inline void set_GenericIDs_0(List_1_t577237979 * value)
	{
		___GenericIDs_0 = value;
		Il2CppCodeGenWriteBarrier((&___GenericIDs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMGENERICIDSREQUEST_T2483038202_H
#ifndef GETPLAYFABIDSFROMGENERICIDSRESULT_T3007683901_H
#define GETPLAYFABIDSFROMGENERICIDSRESULT_T3007683901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsResult
struct  GetPlayFabIDsFromGenericIDsResult_t3007683901  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GenericPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsResult::Data
	List_1_t3847474321 * ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromGenericIDsResult_t3007683901, ___Data_2)); }
	inline List_1_t3847474321 * get_Data_2() const { return ___Data_2; }
	inline List_1_t3847474321 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(List_1_t3847474321 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMGENERICIDSRESULT_T3007683901_H
#ifndef GETPLAYFABIDSFROMGOOGLEIDSREQUEST_T3293540603_H
#define GETPLAYFABIDSFROMGOOGLEIDSREQUEST_T3293540603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsRequest
struct  GetPlayFabIDsFromGoogleIDsRequest_t3293540603  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsRequest::GoogleIDs
	List_1_t3319525431 * ___GoogleIDs_0;

public:
	inline static int32_t get_offset_of_GoogleIDs_0() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromGoogleIDsRequest_t3293540603, ___GoogleIDs_0)); }
	inline List_1_t3319525431 * get_GoogleIDs_0() const { return ___GoogleIDs_0; }
	inline List_1_t3319525431 ** get_address_of_GoogleIDs_0() { return &___GoogleIDs_0; }
	inline void set_GoogleIDs_0(List_1_t3319525431 * value)
	{
		___GoogleIDs_0 = value;
		Il2CppCodeGenWriteBarrier((&___GoogleIDs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMGOOGLEIDSREQUEST_T3293540603_H
#ifndef GETPLAYFABIDSFROMGOOGLEIDSRESULT_T2870112510_H
#define GETPLAYFABIDSFROMGOOGLEIDSRESULT_T2870112510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsResult
struct  GetPlayFabIDsFromGoogleIDsResult_t2870112510  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GooglePlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsResult::Data
	List_1_t1212696728 * ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromGoogleIDsResult_t2870112510, ___Data_2)); }
	inline List_1_t1212696728 * get_Data_2() const { return ___Data_2; }
	inline List_1_t1212696728 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(List_1_t1212696728 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMGOOGLEIDSRESULT_T2870112510_H
#ifndef GETPLAYFABIDSFROMKONGREGATEIDSREQUEST_T4167703349_H
#define GETPLAYFABIDSFROMKONGREGATEIDSREQUEST_T4167703349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsRequest
struct  GetPlayFabIDsFromKongregateIDsRequest_t4167703349  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsRequest::KongregateIDs
	List_1_t3319525431 * ___KongregateIDs_0;

public:
	inline static int32_t get_offset_of_KongregateIDs_0() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromKongregateIDsRequest_t4167703349, ___KongregateIDs_0)); }
	inline List_1_t3319525431 * get_KongregateIDs_0() const { return ___KongregateIDs_0; }
	inline List_1_t3319525431 ** get_address_of_KongregateIDs_0() { return &___KongregateIDs_0; }
	inline void set_KongregateIDs_0(List_1_t3319525431 * value)
	{
		___KongregateIDs_0 = value;
		Il2CppCodeGenWriteBarrier((&___KongregateIDs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMKONGREGATEIDSREQUEST_T4167703349_H
#ifndef GETPLAYFABIDSFROMKONGREGATEIDSRESULT_T296950584_H
#define GETPLAYFABIDSFROMKONGREGATEIDSRESULT_T296950584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsResult
struct  GetPlayFabIDsFromKongregateIDsResult_t296950584  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.KongregatePlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsResult::Data
	List_1_t668076486 * ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromKongregateIDsResult_t296950584, ___Data_2)); }
	inline List_1_t668076486 * get_Data_2() const { return ___Data_2; }
	inline List_1_t668076486 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(List_1_t668076486 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMKONGREGATEIDSRESULT_T296950584_H
#ifndef GETPLAYFABIDSFROMNINTENDOSWITCHDEVICEIDSREQUEST_T4218663982_H
#define GETPLAYFABIDSFROMNINTENDOSWITCHDEVICEIDSREQUEST_T4218663982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
struct  GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_t4218663982  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::NintendoSwitchDeviceIds
	List_1_t3319525431 * ___NintendoSwitchDeviceIds_0;

public:
	inline static int32_t get_offset_of_NintendoSwitchDeviceIds_0() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_t4218663982, ___NintendoSwitchDeviceIds_0)); }
	inline List_1_t3319525431 * get_NintendoSwitchDeviceIds_0() const { return ___NintendoSwitchDeviceIds_0; }
	inline List_1_t3319525431 ** get_address_of_NintendoSwitchDeviceIds_0() { return &___NintendoSwitchDeviceIds_0; }
	inline void set_NintendoSwitchDeviceIds_0(List_1_t3319525431 * value)
	{
		___NintendoSwitchDeviceIds_0 = value;
		Il2CppCodeGenWriteBarrier((&___NintendoSwitchDeviceIds_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMNINTENDOSWITCHDEVICEIDSREQUEST_T4218663982_H
#ifndef GETPLAYFABIDSFROMNINTENDOSWITCHDEVICEIDSRESULT_T2866495379_H
#define GETPLAYFABIDSFROMNINTENDOSWITCHDEVICEIDSRESULT_T2866495379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsResult
struct  GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_t2866495379  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.NintendoSwitchPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::Data
	List_1_t3697230402 * ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_t2866495379, ___Data_2)); }
	inline List_1_t3697230402 * get_Data_2() const { return ___Data_2; }
	inline List_1_t3697230402 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(List_1_t3697230402 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMNINTENDOSWITCHDEVICEIDSRESULT_T2866495379_H
#ifndef GETPLAYFABIDSFROMSTEAMIDSREQUEST_T3885282746_H
#define GETPLAYFABIDSFROMSTEAMIDSREQUEST_T3885282746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsRequest
struct  GetPlayFabIDsFromSteamIDsRequest_t3885282746  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsRequest::SteamStringIDs
	List_1_t3319525431 * ___SteamStringIDs_0;

public:
	inline static int32_t get_offset_of_SteamStringIDs_0() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromSteamIDsRequest_t3885282746, ___SteamStringIDs_0)); }
	inline List_1_t3319525431 * get_SteamStringIDs_0() const { return ___SteamStringIDs_0; }
	inline List_1_t3319525431 ** get_address_of_SteamStringIDs_0() { return &___SteamStringIDs_0; }
	inline void set_SteamStringIDs_0(List_1_t3319525431 * value)
	{
		___SteamStringIDs_0 = value;
		Il2CppCodeGenWriteBarrier((&___SteamStringIDs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMSTEAMIDSREQUEST_T3885282746_H
#ifndef GETPLAYFABIDSFROMSTEAMIDSRESULT_T1781009775_H
#define GETPLAYFABIDSFROMSTEAMIDSRESULT_T1781009775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsResult
struct  GetPlayFabIDsFromSteamIDsResult_t1781009775  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.SteamPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsResult::Data
	List_1_t2220671950 * ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromSteamIDsResult_t1781009775, ___Data_2)); }
	inline List_1_t2220671950 * get_Data_2() const { return ___Data_2; }
	inline List_1_t2220671950 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(List_1_t2220671950 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMSTEAMIDSRESULT_T1781009775_H
#ifndef GETPLAYFABIDSFROMTWITCHIDSREQUEST_T99285710_H
#define GETPLAYFABIDSFROMTWITCHIDSREQUEST_T99285710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsRequest
struct  GetPlayFabIDsFromTwitchIDsRequest_t99285710  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsRequest::TwitchIds
	List_1_t3319525431 * ___TwitchIds_0;

public:
	inline static int32_t get_offset_of_TwitchIds_0() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromTwitchIDsRequest_t99285710, ___TwitchIds_0)); }
	inline List_1_t3319525431 * get_TwitchIds_0() const { return ___TwitchIds_0; }
	inline List_1_t3319525431 ** get_address_of_TwitchIds_0() { return &___TwitchIds_0; }
	inline void set_TwitchIds_0(List_1_t3319525431 * value)
	{
		___TwitchIds_0 = value;
		Il2CppCodeGenWriteBarrier((&___TwitchIds_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMTWITCHIDSREQUEST_T99285710_H
#ifndef GETPLAYFABIDSFROMTWITCHIDSRESULT_T535558863_H
#define GETPLAYFABIDSFROMTWITCHIDSRESULT_T535558863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsResult
struct  GetPlayFabIDsFromTwitchIDsResult_t535558863  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.TwitchPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsResult::Data
	List_1_t4273366236 * ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromTwitchIDsResult_t535558863, ___Data_2)); }
	inline List_1_t4273366236 * get_Data_2() const { return ___Data_2; }
	inline List_1_t4273366236 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(List_1_t4273366236 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMTWITCHIDSRESULT_T535558863_H
#ifndef GETPUBLISHERDATAREQUEST_T3131466813_H
#define GETPUBLISHERDATAREQUEST_T3131466813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPublisherDataRequest
struct  GetPublisherDataRequest_t3131466813  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPublisherDataRequest::Keys
	List_1_t3319525431 * ___Keys_0;

public:
	inline static int32_t get_offset_of_Keys_0() { return static_cast<int32_t>(offsetof(GetPublisherDataRequest_t3131466813, ___Keys_0)); }
	inline List_1_t3319525431 * get_Keys_0() const { return ___Keys_0; }
	inline List_1_t3319525431 ** get_address_of_Keys_0() { return &___Keys_0; }
	inline void set_Keys_0(List_1_t3319525431 * value)
	{
		___Keys_0 = value;
		Il2CppCodeGenWriteBarrier((&___Keys_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPUBLISHERDATAREQUEST_T3131466813_H
#ifndef GETPUBLISHERDATARESULT_T4085748858_H
#define GETPUBLISHERDATARESULT_T4085748858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPublisherDataResult
struct  GetPublisherDataResult_t4085748858  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetPublisherDataResult::Data
	Dictionary_2_t1632706988 * ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetPublisherDataResult_t4085748858, ___Data_2)); }
	inline Dictionary_2_t1632706988 * get_Data_2() const { return ___Data_2; }
	inline Dictionary_2_t1632706988 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(Dictionary_2_t1632706988 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPUBLISHERDATARESULT_T4085748858_H
#ifndef GETPURCHASEREQUEST_T2379666455_H
#define GETPURCHASEREQUEST_T2379666455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPurchaseRequest
struct  GetPurchaseRequest_t2379666455  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetPurchaseRequest::OrderId
	String_t* ___OrderId_0;

public:
	inline static int32_t get_offset_of_OrderId_0() { return static_cast<int32_t>(offsetof(GetPurchaseRequest_t2379666455, ___OrderId_0)); }
	inline String_t* get_OrderId_0() const { return ___OrderId_0; }
	inline String_t** get_address_of_OrderId_0() { return &___OrderId_0; }
	inline void set_OrderId_0(String_t* value)
	{
		___OrderId_0 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPURCHASEREQUEST_T2379666455_H
#ifndef GETSEGMENTRESULT_T2447221534_H
#define GETSEGMENTRESULT_T2447221534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetSegmentResult
struct  GetSegmentResult_t2447221534  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.GetSegmentResult::ABTestParent
	String_t* ___ABTestParent_2;
	// System.String PlayFab.ClientModels.GetSegmentResult::Id
	String_t* ___Id_3;
	// System.String PlayFab.ClientModels.GetSegmentResult::Name
	String_t* ___Name_4;

public:
	inline static int32_t get_offset_of_ABTestParent_2() { return static_cast<int32_t>(offsetof(GetSegmentResult_t2447221534, ___ABTestParent_2)); }
	inline String_t* get_ABTestParent_2() const { return ___ABTestParent_2; }
	inline String_t** get_address_of_ABTestParent_2() { return &___ABTestParent_2; }
	inline void set_ABTestParent_2(String_t* value)
	{
		___ABTestParent_2 = value;
		Il2CppCodeGenWriteBarrier((&___ABTestParent_2), value);
	}

	inline static int32_t get_offset_of_Id_3() { return static_cast<int32_t>(offsetof(GetSegmentResult_t2447221534, ___Id_3)); }
	inline String_t* get_Id_3() const { return ___Id_3; }
	inline String_t** get_address_of_Id_3() { return &___Id_3; }
	inline void set_Id_3(String_t* value)
	{
		___Id_3 = value;
		Il2CppCodeGenWriteBarrier((&___Id_3), value);
	}

	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(GetSegmentResult_t2447221534, ___Name_4)); }
	inline String_t* get_Name_4() const { return ___Name_4; }
	inline String_t** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(String_t* value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier((&___Name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETSEGMENTRESULT_T2447221534_H
#ifndef GETSHAREDGROUPDATARESULT_T1785210302_H
#define GETSHAREDGROUPDATARESULT_T1785210302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetSharedGroupDataResult
struct  GetSharedGroupDataResult_t1785210302  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.SharedGroupDataRecord> PlayFab.ClientModels.GetSharedGroupDataResult::Data
	Dictionary_2_t1367178687 * ___Data_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetSharedGroupDataResult::Members
	List_1_t3319525431 * ___Members_3;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetSharedGroupDataResult_t1785210302, ___Data_2)); }
	inline Dictionary_2_t1367178687 * get_Data_2() const { return ___Data_2; }
	inline Dictionary_2_t1367178687 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(Dictionary_2_t1367178687 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}

	inline static int32_t get_offset_of_Members_3() { return static_cast<int32_t>(offsetof(GetSharedGroupDataResult_t1785210302, ___Members_3)); }
	inline List_1_t3319525431 * get_Members_3() const { return ___Members_3; }
	inline List_1_t3319525431 ** get_address_of_Members_3() { return &___Members_3; }
	inline void set_Members_3(List_1_t3319525431 * value)
	{
		___Members_3 = value;
		Il2CppCodeGenWriteBarrier((&___Members_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETSHAREDGROUPDATARESULT_T1785210302_H
#ifndef GETSTOREITEMSREQUEST_T1044850080_H
#define GETSTOREITEMSREQUEST_T1044850080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetStoreItemsRequest
struct  GetStoreItemsRequest_t1044850080  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetStoreItemsRequest::CatalogVersion
	String_t* ___CatalogVersion_0;
	// System.String PlayFab.ClientModels.GetStoreItemsRequest::StoreId
	String_t* ___StoreId_1;

public:
	inline static int32_t get_offset_of_CatalogVersion_0() { return static_cast<int32_t>(offsetof(GetStoreItemsRequest_t1044850080, ___CatalogVersion_0)); }
	inline String_t* get_CatalogVersion_0() const { return ___CatalogVersion_0; }
	inline String_t** get_address_of_CatalogVersion_0() { return &___CatalogVersion_0; }
	inline void set_CatalogVersion_0(String_t* value)
	{
		___CatalogVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_0), value);
	}

	inline static int32_t get_offset_of_StoreId_1() { return static_cast<int32_t>(offsetof(GetStoreItemsRequest_t1044850080, ___StoreId_1)); }
	inline String_t* get_StoreId_1() const { return ___StoreId_1; }
	inline String_t** get_address_of_StoreId_1() { return &___StoreId_1; }
	inline void set_StoreId_1(String_t* value)
	{
		___StoreId_1 = value;
		Il2CppCodeGenWriteBarrier((&___StoreId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETSTOREITEMSREQUEST_T1044850080_H
#ifndef GETTIMEREQUEST_T1013677983_H
#define GETTIMEREQUEST_T1013677983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetTimeRequest
struct  GetTimeRequest_t1013677983  : public PlayFabRequestCommon_t229319069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTIMEREQUEST_T1013677983_H
#ifndef GETTITLEDATAREQUEST_T1690973210_H
#define GETTITLEDATAREQUEST_T1690973210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetTitleDataRequest
struct  GetTitleDataRequest_t1690973210  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetTitleDataRequest::Keys
	List_1_t3319525431 * ___Keys_0;

public:
	inline static int32_t get_offset_of_Keys_0() { return static_cast<int32_t>(offsetof(GetTitleDataRequest_t1690973210, ___Keys_0)); }
	inline List_1_t3319525431 * get_Keys_0() const { return ___Keys_0; }
	inline List_1_t3319525431 ** get_address_of_Keys_0() { return &___Keys_0; }
	inline void set_Keys_0(List_1_t3319525431 * value)
	{
		___Keys_0 = value;
		Il2CppCodeGenWriteBarrier((&___Keys_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTITLEDATAREQUEST_T1690973210_H
#ifndef GETTITLEDATARESULT_T2255589867_H
#define GETTITLEDATARESULT_T2255589867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetTitleDataResult
struct  GetTitleDataResult_t2255589867  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetTitleDataResult::Data
	Dictionary_2_t1632706988 * ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetTitleDataResult_t2255589867, ___Data_2)); }
	inline Dictionary_2_t1632706988 * get_Data_2() const { return ___Data_2; }
	inline Dictionary_2_t1632706988 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(Dictionary_2_t1632706988 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTITLEDATARESULT_T2255589867_H
#ifndef GETTITLENEWSRESULT_T2470125701_H
#define GETTITLENEWSRESULT_T2470125701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetTitleNewsResult
struct  GetTitleNewsResult_t2470125701  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.TitleNewsItem> PlayFab.ClientModels.GetTitleNewsResult::News
	List_1_t766029305 * ___News_2;

public:
	inline static int32_t get_offset_of_News_2() { return static_cast<int32_t>(offsetof(GetTitleNewsResult_t2470125701, ___News_2)); }
	inline List_1_t766029305 * get_News_2() const { return ___News_2; }
	inline List_1_t766029305 ** get_address_of_News_2() { return &___News_2; }
	inline void set_News_2(List_1_t766029305 * value)
	{
		___News_2 = value;
		Il2CppCodeGenWriteBarrier((&___News_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTITLENEWSRESULT_T2470125701_H
#ifndef GETTITLEPUBLICKEYREQUEST_T2540155591_H
#define GETTITLEPUBLICKEYREQUEST_T2540155591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetTitlePublicKeyRequest
struct  GetTitlePublicKeyRequest_t2540155591  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetTitlePublicKeyRequest::TitleId
	String_t* ___TitleId_0;
	// System.String PlayFab.ClientModels.GetTitlePublicKeyRequest::TitleSharedSecret
	String_t* ___TitleSharedSecret_1;

public:
	inline static int32_t get_offset_of_TitleId_0() { return static_cast<int32_t>(offsetof(GetTitlePublicKeyRequest_t2540155591, ___TitleId_0)); }
	inline String_t* get_TitleId_0() const { return ___TitleId_0; }
	inline String_t** get_address_of_TitleId_0() { return &___TitleId_0; }
	inline void set_TitleId_0(String_t* value)
	{
		___TitleId_0 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_0), value);
	}

	inline static int32_t get_offset_of_TitleSharedSecret_1() { return static_cast<int32_t>(offsetof(GetTitlePublicKeyRequest_t2540155591, ___TitleSharedSecret_1)); }
	inline String_t* get_TitleSharedSecret_1() const { return ___TitleSharedSecret_1; }
	inline String_t** get_address_of_TitleSharedSecret_1() { return &___TitleSharedSecret_1; }
	inline void set_TitleSharedSecret_1(String_t* value)
	{
		___TitleSharedSecret_1 = value;
		Il2CppCodeGenWriteBarrier((&___TitleSharedSecret_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTITLEPUBLICKEYREQUEST_T2540155591_H
#ifndef GETTITLEPUBLICKEYRESULT_T501477709_H
#define GETTITLEPUBLICKEYRESULT_T501477709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetTitlePublicKeyResult
struct  GetTitlePublicKeyResult_t501477709  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.GetTitlePublicKeyResult::RSAPublicKey
	String_t* ___RSAPublicKey_2;

public:
	inline static int32_t get_offset_of_RSAPublicKey_2() { return static_cast<int32_t>(offsetof(GetTitlePublicKeyResult_t501477709, ___RSAPublicKey_2)); }
	inline String_t* get_RSAPublicKey_2() const { return ___RSAPublicKey_2; }
	inline String_t** get_address_of_RSAPublicKey_2() { return &___RSAPublicKey_2; }
	inline void set_RSAPublicKey_2(String_t* value)
	{
		___RSAPublicKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___RSAPublicKey_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTITLEPUBLICKEYRESULT_T501477709_H
#ifndef GETTRADESTATUSREQUEST_T4121937612_H
#define GETTRADESTATUSREQUEST_T4121937612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetTradeStatusRequest
struct  GetTradeStatusRequest_t4121937612  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetTradeStatusRequest::OfferingPlayerId
	String_t* ___OfferingPlayerId_0;
	// System.String PlayFab.ClientModels.GetTradeStatusRequest::TradeId
	String_t* ___TradeId_1;

public:
	inline static int32_t get_offset_of_OfferingPlayerId_0() { return static_cast<int32_t>(offsetof(GetTradeStatusRequest_t4121937612, ___OfferingPlayerId_0)); }
	inline String_t* get_OfferingPlayerId_0() const { return ___OfferingPlayerId_0; }
	inline String_t** get_address_of_OfferingPlayerId_0() { return &___OfferingPlayerId_0; }
	inline void set_OfferingPlayerId_0(String_t* value)
	{
		___OfferingPlayerId_0 = value;
		Il2CppCodeGenWriteBarrier((&___OfferingPlayerId_0), value);
	}

	inline static int32_t get_offset_of_TradeId_1() { return static_cast<int32_t>(offsetof(GetTradeStatusRequest_t4121937612, ___TradeId_1)); }
	inline String_t* get_TradeId_1() const { return ___TradeId_1; }
	inline String_t** get_address_of_TradeId_1() { return &___TradeId_1; }
	inline void set_TradeId_1(String_t* value)
	{
		___TradeId_1 = value;
		Il2CppCodeGenWriteBarrier((&___TradeId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTRADESTATUSREQUEST_T4121937612_H
#ifndef GETTRADESTATUSRESPONSE_T3727694106_H
#define GETTRADESTATUSRESPONSE_T3727694106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetTradeStatusResponse
struct  GetTradeStatusResponse_t3727694106  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.ClientModels.TradeInfo PlayFab.ClientModels.GetTradeStatusResponse::Trade
	TradeInfo_t4070927481 * ___Trade_2;

public:
	inline static int32_t get_offset_of_Trade_2() { return static_cast<int32_t>(offsetof(GetTradeStatusResponse_t3727694106, ___Trade_2)); }
	inline TradeInfo_t4070927481 * get_Trade_2() const { return ___Trade_2; }
	inline TradeInfo_t4070927481 ** get_address_of_Trade_2() { return &___Trade_2; }
	inline void set_Trade_2(TradeInfo_t4070927481 * value)
	{
		___Trade_2 = value;
		Il2CppCodeGenWriteBarrier((&___Trade_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTRADESTATUSRESPONSE_T3727694106_H
#ifndef GETUSERDATARESULT_T3119786651_H
#define GETUSERDATARESULT_T3119786651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetUserDataResult
struct  GetUserDataResult_t3119786651  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord> PlayFab.ClientModels.GetUserDataResult::Data
	Dictionary_2_t1171190865 * ___Data_2;
	// System.UInt32 PlayFab.ClientModels.GetUserDataResult::DataVersion
	uint32_t ___DataVersion_3;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetUserDataResult_t3119786651, ___Data_2)); }
	inline Dictionary_2_t1171190865 * get_Data_2() const { return ___Data_2; }
	inline Dictionary_2_t1171190865 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(Dictionary_2_t1171190865 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}

	inline static int32_t get_offset_of_DataVersion_3() { return static_cast<int32_t>(offsetof(GetUserDataResult_t3119786651, ___DataVersion_3)); }
	inline uint32_t get_DataVersion_3() const { return ___DataVersion_3; }
	inline uint32_t* get_address_of_DataVersion_3() { return &___DataVersion_3; }
	inline void set_DataVersion_3(uint32_t value)
	{
		___DataVersion_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETUSERDATARESULT_T3119786651_H
#ifndef GETUSERINVENTORYREQUEST_T938586848_H
#define GETUSERINVENTORYREQUEST_T938586848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetUserInventoryRequest
struct  GetUserInventoryRequest_t938586848  : public PlayFabRequestCommon_t229319069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETUSERINVENTORYREQUEST_T938586848_H
#ifndef GETUSERINVENTORYRESULT_T4051075747_H
#define GETUSERINVENTORYRESULT_T4051075747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetUserInventoryResult
struct  GetUserInventoryResult_t4051075747  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.GetUserInventoryResult::Inventory
	List_1_t898730215 * ___Inventory_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.GetUserInventoryResult::VirtualCurrency
	Dictionary_2_t2736202052 * ___VirtualCurrency_3;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.VirtualCurrencyRechargeTime> PlayFab.ClientModels.GetUserInventoryResult::VirtualCurrencyRechargeTimes
	Dictionary_2_t2609091868 * ___VirtualCurrencyRechargeTimes_4;

public:
	inline static int32_t get_offset_of_Inventory_2() { return static_cast<int32_t>(offsetof(GetUserInventoryResult_t4051075747, ___Inventory_2)); }
	inline List_1_t898730215 * get_Inventory_2() const { return ___Inventory_2; }
	inline List_1_t898730215 ** get_address_of_Inventory_2() { return &___Inventory_2; }
	inline void set_Inventory_2(List_1_t898730215 * value)
	{
		___Inventory_2 = value;
		Il2CppCodeGenWriteBarrier((&___Inventory_2), value);
	}

	inline static int32_t get_offset_of_VirtualCurrency_3() { return static_cast<int32_t>(offsetof(GetUserInventoryResult_t4051075747, ___VirtualCurrency_3)); }
	inline Dictionary_2_t2736202052 * get_VirtualCurrency_3() const { return ___VirtualCurrency_3; }
	inline Dictionary_2_t2736202052 ** get_address_of_VirtualCurrency_3() { return &___VirtualCurrency_3; }
	inline void set_VirtualCurrency_3(Dictionary_2_t2736202052 * value)
	{
		___VirtualCurrency_3 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrency_3), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyRechargeTimes_4() { return static_cast<int32_t>(offsetof(GetUserInventoryResult_t4051075747, ___VirtualCurrencyRechargeTimes_4)); }
	inline Dictionary_2_t2609091868 * get_VirtualCurrencyRechargeTimes_4() const { return ___VirtualCurrencyRechargeTimes_4; }
	inline Dictionary_2_t2609091868 ** get_address_of_VirtualCurrencyRechargeTimes_4() { return &___VirtualCurrencyRechargeTimes_4; }
	inline void set_VirtualCurrencyRechargeTimes_4(Dictionary_2_t2609091868 * value)
	{
		___VirtualCurrencyRechargeTimes_4 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyRechargeTimes_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETUSERINVENTORYRESULT_T4051075747_H
#ifndef GETWINDOWSHELLOCHALLENGEREQUEST_T4137577037_H
#define GETWINDOWSHELLOCHALLENGEREQUEST_T4137577037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetWindowsHelloChallengeRequest
struct  GetWindowsHelloChallengeRequest_t4137577037  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetWindowsHelloChallengeRequest::PublicKeyHint
	String_t* ___PublicKeyHint_0;
	// System.String PlayFab.ClientModels.GetWindowsHelloChallengeRequest::TitleId
	String_t* ___TitleId_1;

public:
	inline static int32_t get_offset_of_PublicKeyHint_0() { return static_cast<int32_t>(offsetof(GetWindowsHelloChallengeRequest_t4137577037, ___PublicKeyHint_0)); }
	inline String_t* get_PublicKeyHint_0() const { return ___PublicKeyHint_0; }
	inline String_t** get_address_of_PublicKeyHint_0() { return &___PublicKeyHint_0; }
	inline void set_PublicKeyHint_0(String_t* value)
	{
		___PublicKeyHint_0 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKeyHint_0), value);
	}

	inline static int32_t get_offset_of_TitleId_1() { return static_cast<int32_t>(offsetof(GetWindowsHelloChallengeRequest_t4137577037, ___TitleId_1)); }
	inline String_t* get_TitleId_1() const { return ___TitleId_1; }
	inline String_t** get_address_of_TitleId_1() { return &___TitleId_1; }
	inline void set_TitleId_1(String_t* value)
	{
		___TitleId_1 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETWINDOWSHELLOCHALLENGEREQUEST_T4137577037_H
#ifndef GETWINDOWSHELLOCHALLENGERESPONSE_T2829443843_H
#define GETWINDOWSHELLOCHALLENGERESPONSE_T2829443843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetWindowsHelloChallengeResponse
struct  GetWindowsHelloChallengeResponse_t2829443843  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.GetWindowsHelloChallengeResponse::Challenge
	String_t* ___Challenge_2;

public:
	inline static int32_t get_offset_of_Challenge_2() { return static_cast<int32_t>(offsetof(GetWindowsHelloChallengeResponse_t2829443843, ___Challenge_2)); }
	inline String_t* get_Challenge_2() const { return ___Challenge_2; }
	inline String_t** get_address_of_Challenge_2() { return &___Challenge_2; }
	inline void set_Challenge_2(String_t* value)
	{
		___Challenge_2 = value;
		Il2CppCodeGenWriteBarrier((&___Challenge_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETWINDOWSHELLOCHALLENGERESPONSE_T2829443843_H
#ifndef GRANTCHARACTERTOUSERREQUEST_T2936922968_H
#define GRANTCHARACTERTOUSERREQUEST_T2936922968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GrantCharacterToUserRequest
struct  GrantCharacterToUserRequest_t2936922968  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GrantCharacterToUserRequest::CatalogVersion
	String_t* ___CatalogVersion_0;
	// System.String PlayFab.ClientModels.GrantCharacterToUserRequest::CharacterName
	String_t* ___CharacterName_1;
	// System.String PlayFab.ClientModels.GrantCharacterToUserRequest::ItemId
	String_t* ___ItemId_2;

public:
	inline static int32_t get_offset_of_CatalogVersion_0() { return static_cast<int32_t>(offsetof(GrantCharacterToUserRequest_t2936922968, ___CatalogVersion_0)); }
	inline String_t* get_CatalogVersion_0() const { return ___CatalogVersion_0; }
	inline String_t** get_address_of_CatalogVersion_0() { return &___CatalogVersion_0; }
	inline void set_CatalogVersion_0(String_t* value)
	{
		___CatalogVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_0), value);
	}

	inline static int32_t get_offset_of_CharacterName_1() { return static_cast<int32_t>(offsetof(GrantCharacterToUserRequest_t2936922968, ___CharacterName_1)); }
	inline String_t* get_CharacterName_1() const { return ___CharacterName_1; }
	inline String_t** get_address_of_CharacterName_1() { return &___CharacterName_1; }
	inline void set_CharacterName_1(String_t* value)
	{
		___CharacterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterName_1), value);
	}

	inline static int32_t get_offset_of_ItemId_2() { return static_cast<int32_t>(offsetof(GrantCharacterToUserRequest_t2936922968, ___ItemId_2)); }
	inline String_t* get_ItemId_2() const { return ___ItemId_2; }
	inline String_t** get_address_of_ItemId_2() { return &___ItemId_2; }
	inline void set_ItemId_2(String_t* value)
	{
		___ItemId_2 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRANTCHARACTERTOUSERREQUEST_T2936922968_H
#ifndef GRANTCHARACTERTOUSERRESULT_T2109757427_H
#define GRANTCHARACTERTOUSERRESULT_T2109757427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GrantCharacterToUserResult
struct  GrantCharacterToUserResult_t2109757427  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.GrantCharacterToUserResult::CharacterId
	String_t* ___CharacterId_2;
	// System.String PlayFab.ClientModels.GrantCharacterToUserResult::CharacterType
	String_t* ___CharacterType_3;
	// System.Boolean PlayFab.ClientModels.GrantCharacterToUserResult::Result
	bool ___Result_4;

public:
	inline static int32_t get_offset_of_CharacterId_2() { return static_cast<int32_t>(offsetof(GrantCharacterToUserResult_t2109757427, ___CharacterId_2)); }
	inline String_t* get_CharacterId_2() const { return ___CharacterId_2; }
	inline String_t** get_address_of_CharacterId_2() { return &___CharacterId_2; }
	inline void set_CharacterId_2(String_t* value)
	{
		___CharacterId_2 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_2), value);
	}

	inline static int32_t get_offset_of_CharacterType_3() { return static_cast<int32_t>(offsetof(GrantCharacterToUserResult_t2109757427, ___CharacterType_3)); }
	inline String_t* get_CharacterType_3() const { return ___CharacterType_3; }
	inline String_t** get_address_of_CharacterType_3() { return &___CharacterType_3; }
	inline void set_CharacterType_3(String_t* value)
	{
		___CharacterType_3 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterType_3), value);
	}

	inline static int32_t get_offset_of_Result_4() { return static_cast<int32_t>(offsetof(GrantCharacterToUserResult_t2109757427, ___Result_4)); }
	inline bool get_Result_4() const { return ___Result_4; }
	inline bool* get_address_of_Result_4() { return &___Result_4; }
	inline void set_Result_4(bool value)
	{
		___Result_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRANTCHARACTERTOUSERRESULT_T2109757427_H
#ifndef ITEMPURCHASEREQUEST_T2333686997_H
#define ITEMPURCHASEREQUEST_T2333686997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ItemPurchaseRequest
struct  ItemPurchaseRequest_t2333686997  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.ItemPurchaseRequest::Annotation
	String_t* ___Annotation_0;
	// System.String PlayFab.ClientModels.ItemPurchaseRequest::ItemId
	String_t* ___ItemId_1;
	// System.UInt32 PlayFab.ClientModels.ItemPurchaseRequest::Quantity
	uint32_t ___Quantity_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.ItemPurchaseRequest::UpgradeFromItems
	List_1_t3319525431 * ___UpgradeFromItems_3;

public:
	inline static int32_t get_offset_of_Annotation_0() { return static_cast<int32_t>(offsetof(ItemPurchaseRequest_t2333686997, ___Annotation_0)); }
	inline String_t* get_Annotation_0() const { return ___Annotation_0; }
	inline String_t** get_address_of_Annotation_0() { return &___Annotation_0; }
	inline void set_Annotation_0(String_t* value)
	{
		___Annotation_0 = value;
		Il2CppCodeGenWriteBarrier((&___Annotation_0), value);
	}

	inline static int32_t get_offset_of_ItemId_1() { return static_cast<int32_t>(offsetof(ItemPurchaseRequest_t2333686997, ___ItemId_1)); }
	inline String_t* get_ItemId_1() const { return ___ItemId_1; }
	inline String_t** get_address_of_ItemId_1() { return &___ItemId_1; }
	inline void set_ItemId_1(String_t* value)
	{
		___ItemId_1 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_1), value);
	}

	inline static int32_t get_offset_of_Quantity_2() { return static_cast<int32_t>(offsetof(ItemPurchaseRequest_t2333686997, ___Quantity_2)); }
	inline uint32_t get_Quantity_2() const { return ___Quantity_2; }
	inline uint32_t* get_address_of_Quantity_2() { return &___Quantity_2; }
	inline void set_Quantity_2(uint32_t value)
	{
		___Quantity_2 = value;
	}

	inline static int32_t get_offset_of_UpgradeFromItems_3() { return static_cast<int32_t>(offsetof(ItemPurchaseRequest_t2333686997, ___UpgradeFromItems_3)); }
	inline List_1_t3319525431 * get_UpgradeFromItems_3() const { return ___UpgradeFromItems_3; }
	inline List_1_t3319525431 ** get_address_of_UpgradeFromItems_3() { return &___UpgradeFromItems_3; }
	inline void set_UpgradeFromItems_3(List_1_t3319525431 * value)
	{
		___UpgradeFromItems_3 = value;
		Il2CppCodeGenWriteBarrier((&___UpgradeFromItems_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITEMPURCHASEREQUEST_T2333686997_H
#ifndef LINKANDROIDDEVICEIDRESULT_T552766912_H
#define LINKANDROIDDEVICEIDRESULT_T552766912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkAndroidDeviceIDResult
struct  LinkAndroidDeviceIDResult_t552766912  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKANDROIDDEVICEIDRESULT_T552766912_H
#ifndef LINKCUSTOMIDRESULT_T139981749_H
#define LINKCUSTOMIDRESULT_T139981749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkCustomIDResult
struct  LinkCustomIDResult_t139981749  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKCUSTOMIDRESULT_T139981749_H
#ifndef LINKFACEBOOKACCOUNTRESULT_T3882480540_H
#define LINKFACEBOOKACCOUNTRESULT_T3882480540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkFacebookAccountResult
struct  LinkFacebookAccountResult_t3882480540  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKFACEBOOKACCOUNTRESULT_T3882480540_H
#ifndef LINKFACEBOOKINSTANTGAMESIDRESULT_T2079830387_H
#define LINKFACEBOOKINSTANTGAMESIDRESULT_T2079830387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkFacebookInstantGamesIdResult
struct  LinkFacebookInstantGamesIdResult_t2079830387  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKFACEBOOKINSTANTGAMESIDRESULT_T2079830387_H
#ifndef LINKGAMECENTERACCOUNTRESULT_T1522738593_H
#define LINKGAMECENTERACCOUNTRESULT_T1522738593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkGameCenterAccountResult
struct  LinkGameCenterAccountResult_t1522738593  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKGAMECENTERACCOUNTRESULT_T1522738593_H
#ifndef LINKGOOGLEACCOUNTRESULT_T1807689001_H
#define LINKGOOGLEACCOUNTRESULT_T1807689001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkGoogleAccountResult
struct  LinkGoogleAccountResult_t1807689001  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKGOOGLEACCOUNTRESULT_T1807689001_H
#ifndef LINKIOSDEVICEIDRESULT_T3891870534_H
#define LINKIOSDEVICEIDRESULT_T3891870534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkIOSDeviceIDResult
struct  LinkIOSDeviceIDResult_t3891870534  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKIOSDEVICEIDRESULT_T3891870534_H
#ifndef LINKKONGREGATEACCOUNTRESULT_T2275718960_H
#define LINKKONGREGATEACCOUNTRESULT_T2275718960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkKongregateAccountResult
struct  LinkKongregateAccountResult_t2275718960  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKKONGREGATEACCOUNTRESULT_T2275718960_H
#ifndef LINKNINTENDOSWITCHDEVICEIDRESULT_T3730288605_H
#define LINKNINTENDOSWITCHDEVICEIDRESULT_T3730288605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkNintendoSwitchDeviceIdResult
struct  LinkNintendoSwitchDeviceIdResult_t3730288605  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKNINTENDOSWITCHDEVICEIDRESULT_T3730288605_H
#ifndef LINKSTEAMACCOUNTRESULT_T2110373135_H
#define LINKSTEAMACCOUNTRESULT_T2110373135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkSteamAccountResult
struct  LinkSteamAccountResult_t2110373135  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKSTEAMACCOUNTRESULT_T2110373135_H
#ifndef LINKTWITCHACCOUNTRESULT_T4274966282_H
#define LINKTWITCHACCOUNTRESULT_T4274966282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkTwitchAccountResult
struct  LinkTwitchAccountResult_t4274966282  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKTWITCHACCOUNTRESULT_T4274966282_H
#ifndef LINKWINDOWSHELLOACCOUNTRESPONSE_T3319284420_H
#define LINKWINDOWSHELLOACCOUNTRESPONSE_T3319284420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkWindowsHelloAccountResponse
struct  LinkWindowsHelloAccountResponse_t3319284420  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKWINDOWSHELLOACCOUNTRESPONSE_T3319284420_H
#ifndef LINKXBOXACCOUNTRESULT_T175680237_H
#define LINKXBOXACCOUNTRESULT_T175680237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkXboxAccountResult
struct  LinkXboxAccountResult_t175680237  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKXBOXACCOUNTRESULT_T175680237_H
#ifndef LISTUSERSCHARACTERSREQUEST_T1477129616_H
#define LISTUSERSCHARACTERSREQUEST_T1477129616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ListUsersCharactersRequest
struct  ListUsersCharactersRequest_t1477129616  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.ListUsersCharactersRequest::PlayFabId
	String_t* ___PlayFabId_0;

public:
	inline static int32_t get_offset_of_PlayFabId_0() { return static_cast<int32_t>(offsetof(ListUsersCharactersRequest_t1477129616, ___PlayFabId_0)); }
	inline String_t* get_PlayFabId_0() const { return ___PlayFabId_0; }
	inline String_t** get_address_of_PlayFabId_0() { return &___PlayFabId_0; }
	inline void set_PlayFabId_0(String_t* value)
	{
		___PlayFabId_0 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTUSERSCHARACTERSREQUEST_T1477129616_H
#ifndef LISTUSERSCHARACTERSRESULT_T1440701948_H
#define LISTUSERSCHARACTERSRESULT_T1440701948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ListUsersCharactersResult
struct  ListUsersCharactersResult_t1440701948  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterResult> PlayFab.ClientModels.ListUsersCharactersResult::Characters
	List_1_t870886602 * ___Characters_2;

public:
	inline static int32_t get_offset_of_Characters_2() { return static_cast<int32_t>(offsetof(ListUsersCharactersResult_t1440701948, ___Characters_2)); }
	inline List_1_t870886602 * get_Characters_2() const { return ___Characters_2; }
	inline List_1_t870886602 ** get_address_of_Characters_2() { return &___Characters_2; }
	inline void set_Characters_2(List_1_t870886602 * value)
	{
		___Characters_2 = value;
		Il2CppCodeGenWriteBarrier((&___Characters_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTUSERSCHARACTERSRESULT_T1440701948_H
#ifndef MODIFYUSERVIRTUALCURRENCYRESULT_T2341190276_H
#define MODIFYUSERVIRTUALCURRENCYRESULT_T2341190276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ModifyUserVirtualCurrencyResult
struct  ModifyUserVirtualCurrencyResult_t2341190276  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Int32 PlayFab.ClientModels.ModifyUserVirtualCurrencyResult::Balance
	int32_t ___Balance_2;
	// System.Int32 PlayFab.ClientModels.ModifyUserVirtualCurrencyResult::BalanceChange
	int32_t ___BalanceChange_3;
	// System.String PlayFab.ClientModels.ModifyUserVirtualCurrencyResult::PlayFabId
	String_t* ___PlayFabId_4;
	// System.String PlayFab.ClientModels.ModifyUserVirtualCurrencyResult::VirtualCurrency
	String_t* ___VirtualCurrency_5;

public:
	inline static int32_t get_offset_of_Balance_2() { return static_cast<int32_t>(offsetof(ModifyUserVirtualCurrencyResult_t2341190276, ___Balance_2)); }
	inline int32_t get_Balance_2() const { return ___Balance_2; }
	inline int32_t* get_address_of_Balance_2() { return &___Balance_2; }
	inline void set_Balance_2(int32_t value)
	{
		___Balance_2 = value;
	}

	inline static int32_t get_offset_of_BalanceChange_3() { return static_cast<int32_t>(offsetof(ModifyUserVirtualCurrencyResult_t2341190276, ___BalanceChange_3)); }
	inline int32_t get_BalanceChange_3() const { return ___BalanceChange_3; }
	inline int32_t* get_address_of_BalanceChange_3() { return &___BalanceChange_3; }
	inline void set_BalanceChange_3(int32_t value)
	{
		___BalanceChange_3 = value;
	}

	inline static int32_t get_offset_of_PlayFabId_4() { return static_cast<int32_t>(offsetof(ModifyUserVirtualCurrencyResult_t2341190276, ___PlayFabId_4)); }
	inline String_t* get_PlayFabId_4() const { return ___PlayFabId_4; }
	inline String_t** get_address_of_PlayFabId_4() { return &___PlayFabId_4; }
	inline void set_PlayFabId_4(String_t* value)
	{
		___PlayFabId_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_4), value);
	}

	inline static int32_t get_offset_of_VirtualCurrency_5() { return static_cast<int32_t>(offsetof(ModifyUserVirtualCurrencyResult_t2341190276, ___VirtualCurrency_5)); }
	inline String_t* get_VirtualCurrency_5() const { return ___VirtualCurrency_5; }
	inline String_t** get_address_of_VirtualCurrency_5() { return &___VirtualCurrency_5; }
	inline void set_VirtualCurrency_5(String_t* value)
	{
		___VirtualCurrency_5 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrency_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODIFYUSERVIRTUALCURRENCYRESULT_T2341190276_H
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
#ifndef NULLABLE_1_T2317227445_H
#define NULLABLE_1_T2317227445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Double>
struct  Nullable_1_t2317227445 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2317227445, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2317227445, ___has_value_1)); }
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
#endif // NULLABLE_1_T2317227445_H
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
#ifndef CONTINENTCODE_T2955100920_H
#define CONTINENTCODE_T2955100920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ContinentCode
struct  ContinentCode_t2955100920 
{
public:
	// System.Int32 PlayFab.ClientModels.ContinentCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContinentCode_t2955100920, ___value___1)); }
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
#endif // CONTINENTCODE_T2955100920_H
#ifndef COUNTRYCODE_T1744650337_H
#define COUNTRYCODE_T1744650337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CountryCode
struct  CountryCode_t1744650337 
{
public:
	// System.Int32 PlayFab.ClientModels.CountryCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CountryCode_t1744650337, ___value___1)); }
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
#endif // COUNTRYCODE_T1744650337_H
#ifndef GETSHAREDGROUPDATAREQUEST_T1368073665_H
#define GETSHAREDGROUPDATAREQUEST_T1368073665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetSharedGroupDataRequest
struct  GetSharedGroupDataRequest_t1368073665  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetSharedGroupDataRequest::GetMembers
	Nullable_1_t1819850047  ___GetMembers_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetSharedGroupDataRequest::Keys
	List_1_t3319525431 * ___Keys_1;
	// System.String PlayFab.ClientModels.GetSharedGroupDataRequest::SharedGroupId
	String_t* ___SharedGroupId_2;

public:
	inline static int32_t get_offset_of_GetMembers_0() { return static_cast<int32_t>(offsetof(GetSharedGroupDataRequest_t1368073665, ___GetMembers_0)); }
	inline Nullable_1_t1819850047  get_GetMembers_0() const { return ___GetMembers_0; }
	inline Nullable_1_t1819850047 * get_address_of_GetMembers_0() { return &___GetMembers_0; }
	inline void set_GetMembers_0(Nullable_1_t1819850047  value)
	{
		___GetMembers_0 = value;
	}

	inline static int32_t get_offset_of_Keys_1() { return static_cast<int32_t>(offsetof(GetSharedGroupDataRequest_t1368073665, ___Keys_1)); }
	inline List_1_t3319525431 * get_Keys_1() const { return ___Keys_1; }
	inline List_1_t3319525431 ** get_address_of_Keys_1() { return &___Keys_1; }
	inline void set_Keys_1(List_1_t3319525431 * value)
	{
		___Keys_1 = value;
		Il2CppCodeGenWriteBarrier((&___Keys_1), value);
	}

	inline static int32_t get_offset_of_SharedGroupId_2() { return static_cast<int32_t>(offsetof(GetSharedGroupDataRequest_t1368073665, ___SharedGroupId_2)); }
	inline String_t* get_SharedGroupId_2() const { return ___SharedGroupId_2; }
	inline String_t** get_address_of_SharedGroupId_2() { return &___SharedGroupId_2; }
	inline void set_SharedGroupId_2(String_t* value)
	{
		___SharedGroupId_2 = value;
		Il2CppCodeGenWriteBarrier((&___SharedGroupId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETSHAREDGROUPDATAREQUEST_T1368073665_H
#ifndef GETTITLENEWSREQUEST_T961505164_H
#define GETTITLENEWSREQUEST_T961505164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetTitleNewsRequest
struct  GetTitleNewsRequest_t961505164  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetTitleNewsRequest::Count
	Nullable_1_t378540539  ___Count_0;

public:
	inline static int32_t get_offset_of_Count_0() { return static_cast<int32_t>(offsetof(GetTitleNewsRequest_t961505164, ___Count_0)); }
	inline Nullable_1_t378540539  get_Count_0() const { return ___Count_0; }
	inline Nullable_1_t378540539 * get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(Nullable_1_t378540539  value)
	{
		___Count_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTITLENEWSREQUEST_T961505164_H
#ifndef GETUSERDATAREQUEST_T3786552105_H
#define GETUSERDATAREQUEST_T3786552105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetUserDataRequest
struct  GetUserDataRequest_t3786552105  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.GetUserDataRequest::IfChangedFromDataVersion
	Nullable_1_t4282624060  ___IfChangedFromDataVersion_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetUserDataRequest::Keys
	List_1_t3319525431 * ___Keys_1;
	// System.String PlayFab.ClientModels.GetUserDataRequest::PlayFabId
	String_t* ___PlayFabId_2;

public:
	inline static int32_t get_offset_of_IfChangedFromDataVersion_0() { return static_cast<int32_t>(offsetof(GetUserDataRequest_t3786552105, ___IfChangedFromDataVersion_0)); }
	inline Nullable_1_t4282624060  get_IfChangedFromDataVersion_0() const { return ___IfChangedFromDataVersion_0; }
	inline Nullable_1_t4282624060 * get_address_of_IfChangedFromDataVersion_0() { return &___IfChangedFromDataVersion_0; }
	inline void set_IfChangedFromDataVersion_0(Nullable_1_t4282624060  value)
	{
		___IfChangedFromDataVersion_0 = value;
	}

	inline static int32_t get_offset_of_Keys_1() { return static_cast<int32_t>(offsetof(GetUserDataRequest_t3786552105, ___Keys_1)); }
	inline List_1_t3319525431 * get_Keys_1() const { return ___Keys_1; }
	inline List_1_t3319525431 ** get_address_of_Keys_1() { return &___Keys_1; }
	inline void set_Keys_1(List_1_t3319525431 * value)
	{
		___Keys_1 = value;
		Il2CppCodeGenWriteBarrier((&___Keys_1), value);
	}

	inline static int32_t get_offset_of_PlayFabId_2() { return static_cast<int32_t>(offsetof(GetUserDataRequest_t3786552105, ___PlayFabId_2)); }
	inline String_t* get_PlayFabId_2() const { return ___PlayFabId_2; }
	inline String_t** get_address_of_PlayFabId_2() { return &___PlayFabId_2; }
	inline void set_PlayFabId_2(String_t* value)
	{
		___PlayFabId_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETUSERDATAREQUEST_T3786552105_H
#ifndef LINKANDROIDDEVICEIDREQUEST_T254733486_H
#define LINKANDROIDDEVICEIDREQUEST_T254733486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkAndroidDeviceIDRequest
struct  LinkAndroidDeviceIDRequest_t254733486  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LinkAndroidDeviceIDRequest::AndroidDevice
	String_t* ___AndroidDevice_0;
	// System.String PlayFab.ClientModels.LinkAndroidDeviceIDRequest::AndroidDeviceId
	String_t* ___AndroidDeviceId_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkAndroidDeviceIDRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_2;
	// System.String PlayFab.ClientModels.LinkAndroidDeviceIDRequest::OS
	String_t* ___OS_3;

public:
	inline static int32_t get_offset_of_AndroidDevice_0() { return static_cast<int32_t>(offsetof(LinkAndroidDeviceIDRequest_t254733486, ___AndroidDevice_0)); }
	inline String_t* get_AndroidDevice_0() const { return ___AndroidDevice_0; }
	inline String_t** get_address_of_AndroidDevice_0() { return &___AndroidDevice_0; }
	inline void set_AndroidDevice_0(String_t* value)
	{
		___AndroidDevice_0 = value;
		Il2CppCodeGenWriteBarrier((&___AndroidDevice_0), value);
	}

	inline static int32_t get_offset_of_AndroidDeviceId_1() { return static_cast<int32_t>(offsetof(LinkAndroidDeviceIDRequest_t254733486, ___AndroidDeviceId_1)); }
	inline String_t* get_AndroidDeviceId_1() const { return ___AndroidDeviceId_1; }
	inline String_t** get_address_of_AndroidDeviceId_1() { return &___AndroidDeviceId_1; }
	inline void set_AndroidDeviceId_1(String_t* value)
	{
		___AndroidDeviceId_1 = value;
		Il2CppCodeGenWriteBarrier((&___AndroidDeviceId_1), value);
	}

	inline static int32_t get_offset_of_ForceLink_2() { return static_cast<int32_t>(offsetof(LinkAndroidDeviceIDRequest_t254733486, ___ForceLink_2)); }
	inline Nullable_1_t1819850047  get_ForceLink_2() const { return ___ForceLink_2; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_2() { return &___ForceLink_2; }
	inline void set_ForceLink_2(Nullable_1_t1819850047  value)
	{
		___ForceLink_2 = value;
	}

	inline static int32_t get_offset_of_OS_3() { return static_cast<int32_t>(offsetof(LinkAndroidDeviceIDRequest_t254733486, ___OS_3)); }
	inline String_t* get_OS_3() const { return ___OS_3; }
	inline String_t** get_address_of_OS_3() { return &___OS_3; }
	inline void set_OS_3(String_t* value)
	{
		___OS_3 = value;
		Il2CppCodeGenWriteBarrier((&___OS_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKANDROIDDEVICEIDREQUEST_T254733486_H
#ifndef LINKCUSTOMIDREQUEST_T2139586330_H
#define LINKCUSTOMIDREQUEST_T2139586330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkCustomIDRequest
struct  LinkCustomIDRequest_t2139586330  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LinkCustomIDRequest::CustomId
	String_t* ___CustomId_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkCustomIDRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_1;

public:
	inline static int32_t get_offset_of_CustomId_0() { return static_cast<int32_t>(offsetof(LinkCustomIDRequest_t2139586330, ___CustomId_0)); }
	inline String_t* get_CustomId_0() const { return ___CustomId_0; }
	inline String_t** get_address_of_CustomId_0() { return &___CustomId_0; }
	inline void set_CustomId_0(String_t* value)
	{
		___CustomId_0 = value;
		Il2CppCodeGenWriteBarrier((&___CustomId_0), value);
	}

	inline static int32_t get_offset_of_ForceLink_1() { return static_cast<int32_t>(offsetof(LinkCustomIDRequest_t2139586330, ___ForceLink_1)); }
	inline Nullable_1_t1819850047  get_ForceLink_1() const { return ___ForceLink_1; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_1() { return &___ForceLink_1; }
	inline void set_ForceLink_1(Nullable_1_t1819850047  value)
	{
		___ForceLink_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKCUSTOMIDREQUEST_T2139586330_H
#ifndef LINKFACEBOOKACCOUNTREQUEST_T206724149_H
#define LINKFACEBOOKACCOUNTREQUEST_T206724149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkFacebookAccountRequest
struct  LinkFacebookAccountRequest_t206724149  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LinkFacebookAccountRequest::AccessToken
	String_t* ___AccessToken_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkFacebookAccountRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_1;

public:
	inline static int32_t get_offset_of_AccessToken_0() { return static_cast<int32_t>(offsetof(LinkFacebookAccountRequest_t206724149, ___AccessToken_0)); }
	inline String_t* get_AccessToken_0() const { return ___AccessToken_0; }
	inline String_t** get_address_of_AccessToken_0() { return &___AccessToken_0; }
	inline void set_AccessToken_0(String_t* value)
	{
		___AccessToken_0 = value;
		Il2CppCodeGenWriteBarrier((&___AccessToken_0), value);
	}

	inline static int32_t get_offset_of_ForceLink_1() { return static_cast<int32_t>(offsetof(LinkFacebookAccountRequest_t206724149, ___ForceLink_1)); }
	inline Nullable_1_t1819850047  get_ForceLink_1() const { return ___ForceLink_1; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_1() { return &___ForceLink_1; }
	inline void set_ForceLink_1(Nullable_1_t1819850047  value)
	{
		___ForceLink_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKFACEBOOKACCOUNTREQUEST_T206724149_H
#ifndef LINKFACEBOOKINSTANTGAMESIDREQUEST_T1645654384_H
#define LINKFACEBOOKINSTANTGAMESIDREQUEST_T1645654384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkFacebookInstantGamesIdRequest
struct  LinkFacebookInstantGamesIdRequest_t1645654384  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LinkFacebookInstantGamesIdRequest::FacebookInstantGamesSignature
	String_t* ___FacebookInstantGamesSignature_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkFacebookInstantGamesIdRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_1;

public:
	inline static int32_t get_offset_of_FacebookInstantGamesSignature_0() { return static_cast<int32_t>(offsetof(LinkFacebookInstantGamesIdRequest_t1645654384, ___FacebookInstantGamesSignature_0)); }
	inline String_t* get_FacebookInstantGamesSignature_0() const { return ___FacebookInstantGamesSignature_0; }
	inline String_t** get_address_of_FacebookInstantGamesSignature_0() { return &___FacebookInstantGamesSignature_0; }
	inline void set_FacebookInstantGamesSignature_0(String_t* value)
	{
		___FacebookInstantGamesSignature_0 = value;
		Il2CppCodeGenWriteBarrier((&___FacebookInstantGamesSignature_0), value);
	}

	inline static int32_t get_offset_of_ForceLink_1() { return static_cast<int32_t>(offsetof(LinkFacebookInstantGamesIdRequest_t1645654384, ___ForceLink_1)); }
	inline Nullable_1_t1819850047  get_ForceLink_1() const { return ___ForceLink_1; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_1() { return &___ForceLink_1; }
	inline void set_ForceLink_1(Nullable_1_t1819850047  value)
	{
		___ForceLink_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKFACEBOOKINSTANTGAMESIDREQUEST_T1645654384_H
#ifndef LINKGAMECENTERACCOUNTREQUEST_T2735439760_H
#define LINKGAMECENTERACCOUNTREQUEST_T2735439760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkGameCenterAccountRequest
struct  LinkGameCenterAccountRequest_t2735439760  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkGameCenterAccountRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_0;
	// System.String PlayFab.ClientModels.LinkGameCenterAccountRequest::GameCenterId
	String_t* ___GameCenterId_1;

public:
	inline static int32_t get_offset_of_ForceLink_0() { return static_cast<int32_t>(offsetof(LinkGameCenterAccountRequest_t2735439760, ___ForceLink_0)); }
	inline Nullable_1_t1819850047  get_ForceLink_0() const { return ___ForceLink_0; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_0() { return &___ForceLink_0; }
	inline void set_ForceLink_0(Nullable_1_t1819850047  value)
	{
		___ForceLink_0 = value;
	}

	inline static int32_t get_offset_of_GameCenterId_1() { return static_cast<int32_t>(offsetof(LinkGameCenterAccountRequest_t2735439760, ___GameCenterId_1)); }
	inline String_t* get_GameCenterId_1() const { return ___GameCenterId_1; }
	inline String_t** get_address_of_GameCenterId_1() { return &___GameCenterId_1; }
	inline void set_GameCenterId_1(String_t* value)
	{
		___GameCenterId_1 = value;
		Il2CppCodeGenWriteBarrier((&___GameCenterId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKGAMECENTERACCOUNTREQUEST_T2735439760_H
#ifndef LINKGOOGLEACCOUNTREQUEST_T1583516147_H
#define LINKGOOGLEACCOUNTREQUEST_T1583516147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkGoogleAccountRequest
struct  LinkGoogleAccountRequest_t1583516147  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkGoogleAccountRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_0;
	// System.String PlayFab.ClientModels.LinkGoogleAccountRequest::ServerAuthCode
	String_t* ___ServerAuthCode_1;

public:
	inline static int32_t get_offset_of_ForceLink_0() { return static_cast<int32_t>(offsetof(LinkGoogleAccountRequest_t1583516147, ___ForceLink_0)); }
	inline Nullable_1_t1819850047  get_ForceLink_0() const { return ___ForceLink_0; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_0() { return &___ForceLink_0; }
	inline void set_ForceLink_0(Nullable_1_t1819850047  value)
	{
		___ForceLink_0 = value;
	}

	inline static int32_t get_offset_of_ServerAuthCode_1() { return static_cast<int32_t>(offsetof(LinkGoogleAccountRequest_t1583516147, ___ServerAuthCode_1)); }
	inline String_t* get_ServerAuthCode_1() const { return ___ServerAuthCode_1; }
	inline String_t** get_address_of_ServerAuthCode_1() { return &___ServerAuthCode_1; }
	inline void set_ServerAuthCode_1(String_t* value)
	{
		___ServerAuthCode_1 = value;
		Il2CppCodeGenWriteBarrier((&___ServerAuthCode_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKGOOGLEACCOUNTREQUEST_T1583516147_H
#ifndef LINKIOSDEVICEIDREQUEST_T732156087_H
#define LINKIOSDEVICEIDREQUEST_T732156087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkIOSDeviceIDRequest
struct  LinkIOSDeviceIDRequest_t732156087  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LinkIOSDeviceIDRequest::DeviceId
	String_t* ___DeviceId_0;
	// System.String PlayFab.ClientModels.LinkIOSDeviceIDRequest::DeviceModel
	String_t* ___DeviceModel_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkIOSDeviceIDRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_2;
	// System.String PlayFab.ClientModels.LinkIOSDeviceIDRequest::OS
	String_t* ___OS_3;

public:
	inline static int32_t get_offset_of_DeviceId_0() { return static_cast<int32_t>(offsetof(LinkIOSDeviceIDRequest_t732156087, ___DeviceId_0)); }
	inline String_t* get_DeviceId_0() const { return ___DeviceId_0; }
	inline String_t** get_address_of_DeviceId_0() { return &___DeviceId_0; }
	inline void set_DeviceId_0(String_t* value)
	{
		___DeviceId_0 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceId_0), value);
	}

	inline static int32_t get_offset_of_DeviceModel_1() { return static_cast<int32_t>(offsetof(LinkIOSDeviceIDRequest_t732156087, ___DeviceModel_1)); }
	inline String_t* get_DeviceModel_1() const { return ___DeviceModel_1; }
	inline String_t** get_address_of_DeviceModel_1() { return &___DeviceModel_1; }
	inline void set_DeviceModel_1(String_t* value)
	{
		___DeviceModel_1 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceModel_1), value);
	}

	inline static int32_t get_offset_of_ForceLink_2() { return static_cast<int32_t>(offsetof(LinkIOSDeviceIDRequest_t732156087, ___ForceLink_2)); }
	inline Nullable_1_t1819850047  get_ForceLink_2() const { return ___ForceLink_2; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_2() { return &___ForceLink_2; }
	inline void set_ForceLink_2(Nullable_1_t1819850047  value)
	{
		___ForceLink_2 = value;
	}

	inline static int32_t get_offset_of_OS_3() { return static_cast<int32_t>(offsetof(LinkIOSDeviceIDRequest_t732156087, ___OS_3)); }
	inline String_t* get_OS_3() const { return ___OS_3; }
	inline String_t** get_address_of_OS_3() { return &___OS_3; }
	inline void set_OS_3(String_t* value)
	{
		___OS_3 = value;
		Il2CppCodeGenWriteBarrier((&___OS_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKIOSDEVICEIDREQUEST_T732156087_H
#ifndef LINKKONGREGATEACCOUNTREQUEST_T2767208911_H
#define LINKKONGREGATEACCOUNTREQUEST_T2767208911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkKongregateAccountRequest
struct  LinkKongregateAccountRequest_t2767208911  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LinkKongregateAccountRequest::AuthTicket
	String_t* ___AuthTicket_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkKongregateAccountRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_1;
	// System.String PlayFab.ClientModels.LinkKongregateAccountRequest::KongregateId
	String_t* ___KongregateId_2;

public:
	inline static int32_t get_offset_of_AuthTicket_0() { return static_cast<int32_t>(offsetof(LinkKongregateAccountRequest_t2767208911, ___AuthTicket_0)); }
	inline String_t* get_AuthTicket_0() const { return ___AuthTicket_0; }
	inline String_t** get_address_of_AuthTicket_0() { return &___AuthTicket_0; }
	inline void set_AuthTicket_0(String_t* value)
	{
		___AuthTicket_0 = value;
		Il2CppCodeGenWriteBarrier((&___AuthTicket_0), value);
	}

	inline static int32_t get_offset_of_ForceLink_1() { return static_cast<int32_t>(offsetof(LinkKongregateAccountRequest_t2767208911, ___ForceLink_1)); }
	inline Nullable_1_t1819850047  get_ForceLink_1() const { return ___ForceLink_1; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_1() { return &___ForceLink_1; }
	inline void set_ForceLink_1(Nullable_1_t1819850047  value)
	{
		___ForceLink_1 = value;
	}

	inline static int32_t get_offset_of_KongregateId_2() { return static_cast<int32_t>(offsetof(LinkKongregateAccountRequest_t2767208911, ___KongregateId_2)); }
	inline String_t* get_KongregateId_2() const { return ___KongregateId_2; }
	inline String_t** get_address_of_KongregateId_2() { return &___KongregateId_2; }
	inline void set_KongregateId_2(String_t* value)
	{
		___KongregateId_2 = value;
		Il2CppCodeGenWriteBarrier((&___KongregateId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKKONGREGATEACCOUNTREQUEST_T2767208911_H
#ifndef LINKNINTENDOSWITCHDEVICEIDREQUEST_T3301879768_H
#define LINKNINTENDOSWITCHDEVICEIDREQUEST_T3301879768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkNintendoSwitchDeviceIdRequest
struct  LinkNintendoSwitchDeviceIdRequest_t3301879768  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkNintendoSwitchDeviceIdRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_0;
	// System.String PlayFab.ClientModels.LinkNintendoSwitchDeviceIdRequest::NintendoSwitchDeviceId
	String_t* ___NintendoSwitchDeviceId_1;

public:
	inline static int32_t get_offset_of_ForceLink_0() { return static_cast<int32_t>(offsetof(LinkNintendoSwitchDeviceIdRequest_t3301879768, ___ForceLink_0)); }
	inline Nullable_1_t1819850047  get_ForceLink_0() const { return ___ForceLink_0; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_0() { return &___ForceLink_0; }
	inline void set_ForceLink_0(Nullable_1_t1819850047  value)
	{
		___ForceLink_0 = value;
	}

	inline static int32_t get_offset_of_NintendoSwitchDeviceId_1() { return static_cast<int32_t>(offsetof(LinkNintendoSwitchDeviceIdRequest_t3301879768, ___NintendoSwitchDeviceId_1)); }
	inline String_t* get_NintendoSwitchDeviceId_1() const { return ___NintendoSwitchDeviceId_1; }
	inline String_t** get_address_of_NintendoSwitchDeviceId_1() { return &___NintendoSwitchDeviceId_1; }
	inline void set_NintendoSwitchDeviceId_1(String_t* value)
	{
		___NintendoSwitchDeviceId_1 = value;
		Il2CppCodeGenWriteBarrier((&___NintendoSwitchDeviceId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKNINTENDOSWITCHDEVICEIDREQUEST_T3301879768_H
#ifndef LINKSTEAMACCOUNTREQUEST_T3315598358_H
#define LINKSTEAMACCOUNTREQUEST_T3315598358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkSteamAccountRequest
struct  LinkSteamAccountRequest_t3315598358  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkSteamAccountRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_0;
	// System.String PlayFab.ClientModels.LinkSteamAccountRequest::SteamTicket
	String_t* ___SteamTicket_1;

public:
	inline static int32_t get_offset_of_ForceLink_0() { return static_cast<int32_t>(offsetof(LinkSteamAccountRequest_t3315598358, ___ForceLink_0)); }
	inline Nullable_1_t1819850047  get_ForceLink_0() const { return ___ForceLink_0; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_0() { return &___ForceLink_0; }
	inline void set_ForceLink_0(Nullable_1_t1819850047  value)
	{
		___ForceLink_0 = value;
	}

	inline static int32_t get_offset_of_SteamTicket_1() { return static_cast<int32_t>(offsetof(LinkSteamAccountRequest_t3315598358, ___SteamTicket_1)); }
	inline String_t* get_SteamTicket_1() const { return ___SteamTicket_1; }
	inline String_t** get_address_of_SteamTicket_1() { return &___SteamTicket_1; }
	inline void set_SteamTicket_1(String_t* value)
	{
		___SteamTicket_1 = value;
		Il2CppCodeGenWriteBarrier((&___SteamTicket_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKSTEAMACCOUNTREQUEST_T3315598358_H
#ifndef LINKTWITCHACCOUNTREQUEST_T1241952066_H
#define LINKTWITCHACCOUNTREQUEST_T1241952066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkTwitchAccountRequest
struct  LinkTwitchAccountRequest_t1241952066  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LinkTwitchAccountRequest::AccessToken
	String_t* ___AccessToken_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkTwitchAccountRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_1;

public:
	inline static int32_t get_offset_of_AccessToken_0() { return static_cast<int32_t>(offsetof(LinkTwitchAccountRequest_t1241952066, ___AccessToken_0)); }
	inline String_t* get_AccessToken_0() const { return ___AccessToken_0; }
	inline String_t** get_address_of_AccessToken_0() { return &___AccessToken_0; }
	inline void set_AccessToken_0(String_t* value)
	{
		___AccessToken_0 = value;
		Il2CppCodeGenWriteBarrier((&___AccessToken_0), value);
	}

	inline static int32_t get_offset_of_ForceLink_1() { return static_cast<int32_t>(offsetof(LinkTwitchAccountRequest_t1241952066, ___ForceLink_1)); }
	inline Nullable_1_t1819850047  get_ForceLink_1() const { return ___ForceLink_1; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_1() { return &___ForceLink_1; }
	inline void set_ForceLink_1(Nullable_1_t1819850047  value)
	{
		___ForceLink_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKTWITCHACCOUNTREQUEST_T1241952066_H
#ifndef LINKWINDOWSHELLOACCOUNTREQUEST_T2757452561_H
#define LINKWINDOWSHELLOACCOUNTREQUEST_T2757452561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkWindowsHelloAccountRequest
struct  LinkWindowsHelloAccountRequest_t2757452561  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LinkWindowsHelloAccountRequest::DeviceName
	String_t* ___DeviceName_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkWindowsHelloAccountRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_1;
	// System.String PlayFab.ClientModels.LinkWindowsHelloAccountRequest::PublicKey
	String_t* ___PublicKey_2;
	// System.String PlayFab.ClientModels.LinkWindowsHelloAccountRequest::UserName
	String_t* ___UserName_3;

public:
	inline static int32_t get_offset_of_DeviceName_0() { return static_cast<int32_t>(offsetof(LinkWindowsHelloAccountRequest_t2757452561, ___DeviceName_0)); }
	inline String_t* get_DeviceName_0() const { return ___DeviceName_0; }
	inline String_t** get_address_of_DeviceName_0() { return &___DeviceName_0; }
	inline void set_DeviceName_0(String_t* value)
	{
		___DeviceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceName_0), value);
	}

	inline static int32_t get_offset_of_ForceLink_1() { return static_cast<int32_t>(offsetof(LinkWindowsHelloAccountRequest_t2757452561, ___ForceLink_1)); }
	inline Nullable_1_t1819850047  get_ForceLink_1() const { return ___ForceLink_1; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_1() { return &___ForceLink_1; }
	inline void set_ForceLink_1(Nullable_1_t1819850047  value)
	{
		___ForceLink_1 = value;
	}

	inline static int32_t get_offset_of_PublicKey_2() { return static_cast<int32_t>(offsetof(LinkWindowsHelloAccountRequest_t2757452561, ___PublicKey_2)); }
	inline String_t* get_PublicKey_2() const { return ___PublicKey_2; }
	inline String_t** get_address_of_PublicKey_2() { return &___PublicKey_2; }
	inline void set_PublicKey_2(String_t* value)
	{
		___PublicKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKey_2), value);
	}

	inline static int32_t get_offset_of_UserName_3() { return static_cast<int32_t>(offsetof(LinkWindowsHelloAccountRequest_t2757452561, ___UserName_3)); }
	inline String_t* get_UserName_3() const { return ___UserName_3; }
	inline String_t** get_address_of_UserName_3() { return &___UserName_3; }
	inline void set_UserName_3(String_t* value)
	{
		___UserName_3 = value;
		Il2CppCodeGenWriteBarrier((&___UserName_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKWINDOWSHELLOACCOUNTREQUEST_T2757452561_H
#ifndef LINKXBOXACCOUNTREQUEST_T3732097738_H
#define LINKXBOXACCOUNTREQUEST_T3732097738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkXboxAccountRequest
struct  LinkXboxAccountRequest_t3732097738  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkXboxAccountRequest::ForceLink
	Nullable_1_t1819850047  ___ForceLink_0;
	// System.String PlayFab.ClientModels.LinkXboxAccountRequest::XboxToken
	String_t* ___XboxToken_1;

public:
	inline static int32_t get_offset_of_ForceLink_0() { return static_cast<int32_t>(offsetof(LinkXboxAccountRequest_t3732097738, ___ForceLink_0)); }
	inline Nullable_1_t1819850047  get_ForceLink_0() const { return ___ForceLink_0; }
	inline Nullable_1_t1819850047 * get_address_of_ForceLink_0() { return &___ForceLink_0; }
	inline void set_ForceLink_0(Nullable_1_t1819850047  value)
	{
		___ForceLink_0 = value;
	}

	inline static int32_t get_offset_of_XboxToken_1() { return static_cast<int32_t>(offsetof(LinkXboxAccountRequest_t3732097738, ___XboxToken_1)); }
	inline String_t* get_XboxToken_1() const { return ___XboxToken_1; }
	inline String_t** get_address_of_XboxToken_1() { return &___XboxToken_1; }
	inline void set_XboxToken_1(String_t* value)
	{
		___XboxToken_1 = value;
		Il2CppCodeGenWriteBarrier((&___XboxToken_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKXBOXACCOUNTREQUEST_T3732097738_H
#ifndef LOGINIDENTITYPROVIDER_T1880618185_H
#define LOGINIDENTITYPROVIDER_T1880618185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginIdentityProvider
struct  LoginIdentityProvider_t1880618185 
{
public:
	// System.Int32 PlayFab.ClientModels.LoginIdentityProvider::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoginIdentityProvider_t1880618185, ___value___1)); }
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
#endif // LOGINIDENTITYPROVIDER_T1880618185_H
#ifndef LOGINWITHANDROIDDEVICEIDREQUEST_T1269656532_H
#define LOGINWITHANDROIDDEVICEIDREQUEST_T1269656532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest
struct  LoginWithAndroidDeviceIDRequest_t1269656532  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::AndroidDevice
	String_t* ___AndroidDevice_0;
	// System.String PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::AndroidDeviceId
	String_t* ___AndroidDeviceId_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::CreateAccount
	Nullable_1_t1819850047  ___CreateAccount_2;
	// System.String PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::EncryptedRequest
	String_t* ___EncryptedRequest_3;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_4;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_5;
	// System.String PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::OS
	String_t* ___OS_6;
	// System.String PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::PlayerSecret
	String_t* ___PlayerSecret_7;
	// System.String PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::TitleId
	String_t* ___TitleId_8;

public:
	inline static int32_t get_offset_of_AndroidDevice_0() { return static_cast<int32_t>(offsetof(LoginWithAndroidDeviceIDRequest_t1269656532, ___AndroidDevice_0)); }
	inline String_t* get_AndroidDevice_0() const { return ___AndroidDevice_0; }
	inline String_t** get_address_of_AndroidDevice_0() { return &___AndroidDevice_0; }
	inline void set_AndroidDevice_0(String_t* value)
	{
		___AndroidDevice_0 = value;
		Il2CppCodeGenWriteBarrier((&___AndroidDevice_0), value);
	}

	inline static int32_t get_offset_of_AndroidDeviceId_1() { return static_cast<int32_t>(offsetof(LoginWithAndroidDeviceIDRequest_t1269656532, ___AndroidDeviceId_1)); }
	inline String_t* get_AndroidDeviceId_1() const { return ___AndroidDeviceId_1; }
	inline String_t** get_address_of_AndroidDeviceId_1() { return &___AndroidDeviceId_1; }
	inline void set_AndroidDeviceId_1(String_t* value)
	{
		___AndroidDeviceId_1 = value;
		Il2CppCodeGenWriteBarrier((&___AndroidDeviceId_1), value);
	}

	inline static int32_t get_offset_of_CreateAccount_2() { return static_cast<int32_t>(offsetof(LoginWithAndroidDeviceIDRequest_t1269656532, ___CreateAccount_2)); }
	inline Nullable_1_t1819850047  get_CreateAccount_2() const { return ___CreateAccount_2; }
	inline Nullable_1_t1819850047 * get_address_of_CreateAccount_2() { return &___CreateAccount_2; }
	inline void set_CreateAccount_2(Nullable_1_t1819850047  value)
	{
		___CreateAccount_2 = value;
	}

	inline static int32_t get_offset_of_EncryptedRequest_3() { return static_cast<int32_t>(offsetof(LoginWithAndroidDeviceIDRequest_t1269656532, ___EncryptedRequest_3)); }
	inline String_t* get_EncryptedRequest_3() const { return ___EncryptedRequest_3; }
	inline String_t** get_address_of_EncryptedRequest_3() { return &___EncryptedRequest_3; }
	inline void set_EncryptedRequest_3(String_t* value)
	{
		___EncryptedRequest_3 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_3), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_4() { return static_cast<int32_t>(offsetof(LoginWithAndroidDeviceIDRequest_t1269656532, ___InfoRequestParameters_4)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_4() const { return ___InfoRequestParameters_4; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_4() { return &___InfoRequestParameters_4; }
	inline void set_InfoRequestParameters_4(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_4 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_4), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_5() { return static_cast<int32_t>(offsetof(LoginWithAndroidDeviceIDRequest_t1269656532, ___LoginTitlePlayerAccountEntity_5)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_5() const { return ___LoginTitlePlayerAccountEntity_5; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_5() { return &___LoginTitlePlayerAccountEntity_5; }
	inline void set_LoginTitlePlayerAccountEntity_5(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_5 = value;
	}

	inline static int32_t get_offset_of_OS_6() { return static_cast<int32_t>(offsetof(LoginWithAndroidDeviceIDRequest_t1269656532, ___OS_6)); }
	inline String_t* get_OS_6() const { return ___OS_6; }
	inline String_t** get_address_of_OS_6() { return &___OS_6; }
	inline void set_OS_6(String_t* value)
	{
		___OS_6 = value;
		Il2CppCodeGenWriteBarrier((&___OS_6), value);
	}

	inline static int32_t get_offset_of_PlayerSecret_7() { return static_cast<int32_t>(offsetof(LoginWithAndroidDeviceIDRequest_t1269656532, ___PlayerSecret_7)); }
	inline String_t* get_PlayerSecret_7() const { return ___PlayerSecret_7; }
	inline String_t** get_address_of_PlayerSecret_7() { return &___PlayerSecret_7; }
	inline void set_PlayerSecret_7(String_t* value)
	{
		___PlayerSecret_7 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_7), value);
	}

	inline static int32_t get_offset_of_TitleId_8() { return static_cast<int32_t>(offsetof(LoginWithAndroidDeviceIDRequest_t1269656532, ___TitleId_8)); }
	inline String_t* get_TitleId_8() const { return ___TitleId_8; }
	inline String_t** get_address_of_TitleId_8() { return &___TitleId_8; }
	inline void set_TitleId_8(String_t* value)
	{
		___TitleId_8 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHANDROIDDEVICEIDREQUEST_T1269656532_H
#ifndef LOGINWITHCUSTOMIDREQUEST_T176841994_H
#define LOGINWITHCUSTOMIDREQUEST_T176841994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithCustomIDRequest
struct  LoginWithCustomIDRequest_t176841994  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithCustomIDRequest::CreateAccount
	Nullable_1_t1819850047  ___CreateAccount_0;
	// System.String PlayFab.ClientModels.LoginWithCustomIDRequest::CustomId
	String_t* ___CustomId_1;
	// System.String PlayFab.ClientModels.LoginWithCustomIDRequest::EncryptedRequest
	String_t* ___EncryptedRequest_2;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithCustomIDRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_3;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithCustomIDRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_4;
	// System.String PlayFab.ClientModels.LoginWithCustomIDRequest::PlayerSecret
	String_t* ___PlayerSecret_5;
	// System.String PlayFab.ClientModels.LoginWithCustomIDRequest::TitleId
	String_t* ___TitleId_6;

public:
	inline static int32_t get_offset_of_CreateAccount_0() { return static_cast<int32_t>(offsetof(LoginWithCustomIDRequest_t176841994, ___CreateAccount_0)); }
	inline Nullable_1_t1819850047  get_CreateAccount_0() const { return ___CreateAccount_0; }
	inline Nullable_1_t1819850047 * get_address_of_CreateAccount_0() { return &___CreateAccount_0; }
	inline void set_CreateAccount_0(Nullable_1_t1819850047  value)
	{
		___CreateAccount_0 = value;
	}

	inline static int32_t get_offset_of_CustomId_1() { return static_cast<int32_t>(offsetof(LoginWithCustomIDRequest_t176841994, ___CustomId_1)); }
	inline String_t* get_CustomId_1() const { return ___CustomId_1; }
	inline String_t** get_address_of_CustomId_1() { return &___CustomId_1; }
	inline void set_CustomId_1(String_t* value)
	{
		___CustomId_1 = value;
		Il2CppCodeGenWriteBarrier((&___CustomId_1), value);
	}

	inline static int32_t get_offset_of_EncryptedRequest_2() { return static_cast<int32_t>(offsetof(LoginWithCustomIDRequest_t176841994, ___EncryptedRequest_2)); }
	inline String_t* get_EncryptedRequest_2() const { return ___EncryptedRequest_2; }
	inline String_t** get_address_of_EncryptedRequest_2() { return &___EncryptedRequest_2; }
	inline void set_EncryptedRequest_2(String_t* value)
	{
		___EncryptedRequest_2 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_2), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_3() { return static_cast<int32_t>(offsetof(LoginWithCustomIDRequest_t176841994, ___InfoRequestParameters_3)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_3() const { return ___InfoRequestParameters_3; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_3() { return &___InfoRequestParameters_3; }
	inline void set_InfoRequestParameters_3(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_3), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_4() { return static_cast<int32_t>(offsetof(LoginWithCustomIDRequest_t176841994, ___LoginTitlePlayerAccountEntity_4)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_4() const { return ___LoginTitlePlayerAccountEntity_4; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_4() { return &___LoginTitlePlayerAccountEntity_4; }
	inline void set_LoginTitlePlayerAccountEntity_4(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_4 = value;
	}

	inline static int32_t get_offset_of_PlayerSecret_5() { return static_cast<int32_t>(offsetof(LoginWithCustomIDRequest_t176841994, ___PlayerSecret_5)); }
	inline String_t* get_PlayerSecret_5() const { return ___PlayerSecret_5; }
	inline String_t** get_address_of_PlayerSecret_5() { return &___PlayerSecret_5; }
	inline void set_PlayerSecret_5(String_t* value)
	{
		___PlayerSecret_5 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_5), value);
	}

	inline static int32_t get_offset_of_TitleId_6() { return static_cast<int32_t>(offsetof(LoginWithCustomIDRequest_t176841994, ___TitleId_6)); }
	inline String_t* get_TitleId_6() const { return ___TitleId_6; }
	inline String_t** get_address_of_TitleId_6() { return &___TitleId_6; }
	inline void set_TitleId_6(String_t* value)
	{
		___TitleId_6 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHCUSTOMIDREQUEST_T176841994_H
#ifndef LOGINWITHEMAILADDRESSREQUEST_T3424541161_H
#define LOGINWITHEMAILADDRESSREQUEST_T3424541161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithEmailAddressRequest
struct  LoginWithEmailAddressRequest_t3424541161  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LoginWithEmailAddressRequest::Email
	String_t* ___Email_0;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithEmailAddressRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithEmailAddressRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_2;
	// System.String PlayFab.ClientModels.LoginWithEmailAddressRequest::Password
	String_t* ___Password_3;
	// System.String PlayFab.ClientModels.LoginWithEmailAddressRequest::TitleId
	String_t* ___TitleId_4;

public:
	inline static int32_t get_offset_of_Email_0() { return static_cast<int32_t>(offsetof(LoginWithEmailAddressRequest_t3424541161, ___Email_0)); }
	inline String_t* get_Email_0() const { return ___Email_0; }
	inline String_t** get_address_of_Email_0() { return &___Email_0; }
	inline void set_Email_0(String_t* value)
	{
		___Email_0 = value;
		Il2CppCodeGenWriteBarrier((&___Email_0), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_1() { return static_cast<int32_t>(offsetof(LoginWithEmailAddressRequest_t3424541161, ___InfoRequestParameters_1)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_1() const { return ___InfoRequestParameters_1; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_1() { return &___InfoRequestParameters_1; }
	inline void set_InfoRequestParameters_1(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_1), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_2() { return static_cast<int32_t>(offsetof(LoginWithEmailAddressRequest_t3424541161, ___LoginTitlePlayerAccountEntity_2)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_2() const { return ___LoginTitlePlayerAccountEntity_2; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_2() { return &___LoginTitlePlayerAccountEntity_2; }
	inline void set_LoginTitlePlayerAccountEntity_2(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_2 = value;
	}

	inline static int32_t get_offset_of_Password_3() { return static_cast<int32_t>(offsetof(LoginWithEmailAddressRequest_t3424541161, ___Password_3)); }
	inline String_t* get_Password_3() const { return ___Password_3; }
	inline String_t** get_address_of_Password_3() { return &___Password_3; }
	inline void set_Password_3(String_t* value)
	{
		___Password_3 = value;
		Il2CppCodeGenWriteBarrier((&___Password_3), value);
	}

	inline static int32_t get_offset_of_TitleId_4() { return static_cast<int32_t>(offsetof(LoginWithEmailAddressRequest_t3424541161, ___TitleId_4)); }
	inline String_t* get_TitleId_4() const { return ___TitleId_4; }
	inline String_t** get_address_of_TitleId_4() { return &___TitleId_4; }
	inline void set_TitleId_4(String_t* value)
	{
		___TitleId_4 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHEMAILADDRESSREQUEST_T3424541161_H
#ifndef LOGINWITHFACEBOOKINSTANTGAMESIDREQUEST_T20822577_H
#define LOGINWITHFACEBOOKINSTANTGAMESIDREQUEST_T20822577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest
struct  LoginWithFacebookInstantGamesIdRequest_t20822577  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::CreateAccount
	Nullable_1_t1819850047  ___CreateAccount_0;
	// System.String PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::EncryptedRequest
	String_t* ___EncryptedRequest_1;
	// System.String PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::FacebookInstantGamesSignature
	String_t* ___FacebookInstantGamesSignature_2;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_3;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_4;
	// System.String PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::PlayerSecret
	String_t* ___PlayerSecret_5;
	// System.String PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::TitleId
	String_t* ___TitleId_6;

public:
	inline static int32_t get_offset_of_CreateAccount_0() { return static_cast<int32_t>(offsetof(LoginWithFacebookInstantGamesIdRequest_t20822577, ___CreateAccount_0)); }
	inline Nullable_1_t1819850047  get_CreateAccount_0() const { return ___CreateAccount_0; }
	inline Nullable_1_t1819850047 * get_address_of_CreateAccount_0() { return &___CreateAccount_0; }
	inline void set_CreateAccount_0(Nullable_1_t1819850047  value)
	{
		___CreateAccount_0 = value;
	}

	inline static int32_t get_offset_of_EncryptedRequest_1() { return static_cast<int32_t>(offsetof(LoginWithFacebookInstantGamesIdRequest_t20822577, ___EncryptedRequest_1)); }
	inline String_t* get_EncryptedRequest_1() const { return ___EncryptedRequest_1; }
	inline String_t** get_address_of_EncryptedRequest_1() { return &___EncryptedRequest_1; }
	inline void set_EncryptedRequest_1(String_t* value)
	{
		___EncryptedRequest_1 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_1), value);
	}

	inline static int32_t get_offset_of_FacebookInstantGamesSignature_2() { return static_cast<int32_t>(offsetof(LoginWithFacebookInstantGamesIdRequest_t20822577, ___FacebookInstantGamesSignature_2)); }
	inline String_t* get_FacebookInstantGamesSignature_2() const { return ___FacebookInstantGamesSignature_2; }
	inline String_t** get_address_of_FacebookInstantGamesSignature_2() { return &___FacebookInstantGamesSignature_2; }
	inline void set_FacebookInstantGamesSignature_2(String_t* value)
	{
		___FacebookInstantGamesSignature_2 = value;
		Il2CppCodeGenWriteBarrier((&___FacebookInstantGamesSignature_2), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_3() { return static_cast<int32_t>(offsetof(LoginWithFacebookInstantGamesIdRequest_t20822577, ___InfoRequestParameters_3)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_3() const { return ___InfoRequestParameters_3; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_3() { return &___InfoRequestParameters_3; }
	inline void set_InfoRequestParameters_3(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_3), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_4() { return static_cast<int32_t>(offsetof(LoginWithFacebookInstantGamesIdRequest_t20822577, ___LoginTitlePlayerAccountEntity_4)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_4() const { return ___LoginTitlePlayerAccountEntity_4; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_4() { return &___LoginTitlePlayerAccountEntity_4; }
	inline void set_LoginTitlePlayerAccountEntity_4(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_4 = value;
	}

	inline static int32_t get_offset_of_PlayerSecret_5() { return static_cast<int32_t>(offsetof(LoginWithFacebookInstantGamesIdRequest_t20822577, ___PlayerSecret_5)); }
	inline String_t* get_PlayerSecret_5() const { return ___PlayerSecret_5; }
	inline String_t** get_address_of_PlayerSecret_5() { return &___PlayerSecret_5; }
	inline void set_PlayerSecret_5(String_t* value)
	{
		___PlayerSecret_5 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_5), value);
	}

	inline static int32_t get_offset_of_TitleId_6() { return static_cast<int32_t>(offsetof(LoginWithFacebookInstantGamesIdRequest_t20822577, ___TitleId_6)); }
	inline String_t* get_TitleId_6() const { return ___TitleId_6; }
	inline String_t** get_address_of_TitleId_6() { return &___TitleId_6; }
	inline void set_TitleId_6(String_t* value)
	{
		___TitleId_6 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHFACEBOOKINSTANTGAMESIDREQUEST_T20822577_H
#ifndef LOGINWITHFACEBOOKREQUEST_T553021538_H
#define LOGINWITHFACEBOOKREQUEST_T553021538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithFacebookRequest
struct  LoginWithFacebookRequest_t553021538  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LoginWithFacebookRequest::AccessToken
	String_t* ___AccessToken_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithFacebookRequest::CreateAccount
	Nullable_1_t1819850047  ___CreateAccount_1;
	// System.String PlayFab.ClientModels.LoginWithFacebookRequest::EncryptedRequest
	String_t* ___EncryptedRequest_2;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithFacebookRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_3;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithFacebookRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_4;
	// System.String PlayFab.ClientModels.LoginWithFacebookRequest::PlayerSecret
	String_t* ___PlayerSecret_5;
	// System.String PlayFab.ClientModels.LoginWithFacebookRequest::TitleId
	String_t* ___TitleId_6;

public:
	inline static int32_t get_offset_of_AccessToken_0() { return static_cast<int32_t>(offsetof(LoginWithFacebookRequest_t553021538, ___AccessToken_0)); }
	inline String_t* get_AccessToken_0() const { return ___AccessToken_0; }
	inline String_t** get_address_of_AccessToken_0() { return &___AccessToken_0; }
	inline void set_AccessToken_0(String_t* value)
	{
		___AccessToken_0 = value;
		Il2CppCodeGenWriteBarrier((&___AccessToken_0), value);
	}

	inline static int32_t get_offset_of_CreateAccount_1() { return static_cast<int32_t>(offsetof(LoginWithFacebookRequest_t553021538, ___CreateAccount_1)); }
	inline Nullable_1_t1819850047  get_CreateAccount_1() const { return ___CreateAccount_1; }
	inline Nullable_1_t1819850047 * get_address_of_CreateAccount_1() { return &___CreateAccount_1; }
	inline void set_CreateAccount_1(Nullable_1_t1819850047  value)
	{
		___CreateAccount_1 = value;
	}

	inline static int32_t get_offset_of_EncryptedRequest_2() { return static_cast<int32_t>(offsetof(LoginWithFacebookRequest_t553021538, ___EncryptedRequest_2)); }
	inline String_t* get_EncryptedRequest_2() const { return ___EncryptedRequest_2; }
	inline String_t** get_address_of_EncryptedRequest_2() { return &___EncryptedRequest_2; }
	inline void set_EncryptedRequest_2(String_t* value)
	{
		___EncryptedRequest_2 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_2), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_3() { return static_cast<int32_t>(offsetof(LoginWithFacebookRequest_t553021538, ___InfoRequestParameters_3)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_3() const { return ___InfoRequestParameters_3; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_3() { return &___InfoRequestParameters_3; }
	inline void set_InfoRequestParameters_3(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_3), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_4() { return static_cast<int32_t>(offsetof(LoginWithFacebookRequest_t553021538, ___LoginTitlePlayerAccountEntity_4)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_4() const { return ___LoginTitlePlayerAccountEntity_4; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_4() { return &___LoginTitlePlayerAccountEntity_4; }
	inline void set_LoginTitlePlayerAccountEntity_4(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_4 = value;
	}

	inline static int32_t get_offset_of_PlayerSecret_5() { return static_cast<int32_t>(offsetof(LoginWithFacebookRequest_t553021538, ___PlayerSecret_5)); }
	inline String_t* get_PlayerSecret_5() const { return ___PlayerSecret_5; }
	inline String_t** get_address_of_PlayerSecret_5() { return &___PlayerSecret_5; }
	inline void set_PlayerSecret_5(String_t* value)
	{
		___PlayerSecret_5 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_5), value);
	}

	inline static int32_t get_offset_of_TitleId_6() { return static_cast<int32_t>(offsetof(LoginWithFacebookRequest_t553021538, ___TitleId_6)); }
	inline String_t* get_TitleId_6() const { return ___TitleId_6; }
	inline String_t** get_address_of_TitleId_6() { return &___TitleId_6; }
	inline void set_TitleId_6(String_t* value)
	{
		___TitleId_6 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHFACEBOOKREQUEST_T553021538_H
#ifndef LOGINWITHGAMECENTERREQUEST_T195971591_H
#define LOGINWITHGAMECENTERREQUEST_T195971591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithGameCenterRequest
struct  LoginWithGameCenterRequest_t195971591  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithGameCenterRequest::CreateAccount
	Nullable_1_t1819850047  ___CreateAccount_0;
	// System.String PlayFab.ClientModels.LoginWithGameCenterRequest::EncryptedRequest
	String_t* ___EncryptedRequest_1;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithGameCenterRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithGameCenterRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_3;
	// System.String PlayFab.ClientModels.LoginWithGameCenterRequest::PlayerId
	String_t* ___PlayerId_4;
	// System.String PlayFab.ClientModels.LoginWithGameCenterRequest::PlayerSecret
	String_t* ___PlayerSecret_5;
	// System.String PlayFab.ClientModels.LoginWithGameCenterRequest::TitleId
	String_t* ___TitleId_6;

public:
	inline static int32_t get_offset_of_CreateAccount_0() { return static_cast<int32_t>(offsetof(LoginWithGameCenterRequest_t195971591, ___CreateAccount_0)); }
	inline Nullable_1_t1819850047  get_CreateAccount_0() const { return ___CreateAccount_0; }
	inline Nullable_1_t1819850047 * get_address_of_CreateAccount_0() { return &___CreateAccount_0; }
	inline void set_CreateAccount_0(Nullable_1_t1819850047  value)
	{
		___CreateAccount_0 = value;
	}

	inline static int32_t get_offset_of_EncryptedRequest_1() { return static_cast<int32_t>(offsetof(LoginWithGameCenterRequest_t195971591, ___EncryptedRequest_1)); }
	inline String_t* get_EncryptedRequest_1() const { return ___EncryptedRequest_1; }
	inline String_t** get_address_of_EncryptedRequest_1() { return &___EncryptedRequest_1; }
	inline void set_EncryptedRequest_1(String_t* value)
	{
		___EncryptedRequest_1 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_1), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_2() { return static_cast<int32_t>(offsetof(LoginWithGameCenterRequest_t195971591, ___InfoRequestParameters_2)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_2() const { return ___InfoRequestParameters_2; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_2() { return &___InfoRequestParameters_2; }
	inline void set_InfoRequestParameters_2(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_2), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_3() { return static_cast<int32_t>(offsetof(LoginWithGameCenterRequest_t195971591, ___LoginTitlePlayerAccountEntity_3)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_3() const { return ___LoginTitlePlayerAccountEntity_3; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_3() { return &___LoginTitlePlayerAccountEntity_3; }
	inline void set_LoginTitlePlayerAccountEntity_3(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_3 = value;
	}

	inline static int32_t get_offset_of_PlayerId_4() { return static_cast<int32_t>(offsetof(LoginWithGameCenterRequest_t195971591, ___PlayerId_4)); }
	inline String_t* get_PlayerId_4() const { return ___PlayerId_4; }
	inline String_t** get_address_of_PlayerId_4() { return &___PlayerId_4; }
	inline void set_PlayerId_4(String_t* value)
	{
		___PlayerId_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerId_4), value);
	}

	inline static int32_t get_offset_of_PlayerSecret_5() { return static_cast<int32_t>(offsetof(LoginWithGameCenterRequest_t195971591, ___PlayerSecret_5)); }
	inline String_t* get_PlayerSecret_5() const { return ___PlayerSecret_5; }
	inline String_t** get_address_of_PlayerSecret_5() { return &___PlayerSecret_5; }
	inline void set_PlayerSecret_5(String_t* value)
	{
		___PlayerSecret_5 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_5), value);
	}

	inline static int32_t get_offset_of_TitleId_6() { return static_cast<int32_t>(offsetof(LoginWithGameCenterRequest_t195971591, ___TitleId_6)); }
	inline String_t* get_TitleId_6() const { return ___TitleId_6; }
	inline String_t** get_address_of_TitleId_6() { return &___TitleId_6; }
	inline void set_TitleId_6(String_t* value)
	{
		___TitleId_6 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHGAMECENTERREQUEST_T195971591_H
#ifndef LOGINWITHGOOGLEACCOUNTREQUEST_T513675687_H
#define LOGINWITHGOOGLEACCOUNTREQUEST_T513675687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithGoogleAccountRequest
struct  LoginWithGoogleAccountRequest_t513675687  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithGoogleAccountRequest::CreateAccount
	Nullable_1_t1819850047  ___CreateAccount_0;
	// System.String PlayFab.ClientModels.LoginWithGoogleAccountRequest::EncryptedRequest
	String_t* ___EncryptedRequest_1;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithGoogleAccountRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithGoogleAccountRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_3;
	// System.String PlayFab.ClientModels.LoginWithGoogleAccountRequest::PlayerSecret
	String_t* ___PlayerSecret_4;
	// System.String PlayFab.ClientModels.LoginWithGoogleAccountRequest::ServerAuthCode
	String_t* ___ServerAuthCode_5;
	// System.String PlayFab.ClientModels.LoginWithGoogleAccountRequest::TitleId
	String_t* ___TitleId_6;

public:
	inline static int32_t get_offset_of_CreateAccount_0() { return static_cast<int32_t>(offsetof(LoginWithGoogleAccountRequest_t513675687, ___CreateAccount_0)); }
	inline Nullable_1_t1819850047  get_CreateAccount_0() const { return ___CreateAccount_0; }
	inline Nullable_1_t1819850047 * get_address_of_CreateAccount_0() { return &___CreateAccount_0; }
	inline void set_CreateAccount_0(Nullable_1_t1819850047  value)
	{
		___CreateAccount_0 = value;
	}

	inline static int32_t get_offset_of_EncryptedRequest_1() { return static_cast<int32_t>(offsetof(LoginWithGoogleAccountRequest_t513675687, ___EncryptedRequest_1)); }
	inline String_t* get_EncryptedRequest_1() const { return ___EncryptedRequest_1; }
	inline String_t** get_address_of_EncryptedRequest_1() { return &___EncryptedRequest_1; }
	inline void set_EncryptedRequest_1(String_t* value)
	{
		___EncryptedRequest_1 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_1), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_2() { return static_cast<int32_t>(offsetof(LoginWithGoogleAccountRequest_t513675687, ___InfoRequestParameters_2)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_2() const { return ___InfoRequestParameters_2; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_2() { return &___InfoRequestParameters_2; }
	inline void set_InfoRequestParameters_2(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_2), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_3() { return static_cast<int32_t>(offsetof(LoginWithGoogleAccountRequest_t513675687, ___LoginTitlePlayerAccountEntity_3)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_3() const { return ___LoginTitlePlayerAccountEntity_3; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_3() { return &___LoginTitlePlayerAccountEntity_3; }
	inline void set_LoginTitlePlayerAccountEntity_3(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_3 = value;
	}

	inline static int32_t get_offset_of_PlayerSecret_4() { return static_cast<int32_t>(offsetof(LoginWithGoogleAccountRequest_t513675687, ___PlayerSecret_4)); }
	inline String_t* get_PlayerSecret_4() const { return ___PlayerSecret_4; }
	inline String_t** get_address_of_PlayerSecret_4() { return &___PlayerSecret_4; }
	inline void set_PlayerSecret_4(String_t* value)
	{
		___PlayerSecret_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_4), value);
	}

	inline static int32_t get_offset_of_ServerAuthCode_5() { return static_cast<int32_t>(offsetof(LoginWithGoogleAccountRequest_t513675687, ___ServerAuthCode_5)); }
	inline String_t* get_ServerAuthCode_5() const { return ___ServerAuthCode_5; }
	inline String_t** get_address_of_ServerAuthCode_5() { return &___ServerAuthCode_5; }
	inline void set_ServerAuthCode_5(String_t* value)
	{
		___ServerAuthCode_5 = value;
		Il2CppCodeGenWriteBarrier((&___ServerAuthCode_5), value);
	}

	inline static int32_t get_offset_of_TitleId_6() { return static_cast<int32_t>(offsetof(LoginWithGoogleAccountRequest_t513675687, ___TitleId_6)); }
	inline String_t* get_TitleId_6() const { return ___TitleId_6; }
	inline String_t** get_address_of_TitleId_6() { return &___TitleId_6; }
	inline void set_TitleId_6(String_t* value)
	{
		___TitleId_6 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHGOOGLEACCOUNTREQUEST_T513675687_H
#ifndef LOGINWITHIOSDEVICEIDREQUEST_T1104678395_H
#define LOGINWITHIOSDEVICEIDREQUEST_T1104678395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithIOSDeviceIDRequest
struct  LoginWithIOSDeviceIDRequest_t1104678395  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::CreateAccount
	Nullable_1_t1819850047  ___CreateAccount_0;
	// System.String PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::DeviceId
	String_t* ___DeviceId_1;
	// System.String PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::DeviceModel
	String_t* ___DeviceModel_2;
	// System.String PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::EncryptedRequest
	String_t* ___EncryptedRequest_3;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_4;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_5;
	// System.String PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::OS
	String_t* ___OS_6;
	// System.String PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::PlayerSecret
	String_t* ___PlayerSecret_7;
	// System.String PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::TitleId
	String_t* ___TitleId_8;

public:
	inline static int32_t get_offset_of_CreateAccount_0() { return static_cast<int32_t>(offsetof(LoginWithIOSDeviceIDRequest_t1104678395, ___CreateAccount_0)); }
	inline Nullable_1_t1819850047  get_CreateAccount_0() const { return ___CreateAccount_0; }
	inline Nullable_1_t1819850047 * get_address_of_CreateAccount_0() { return &___CreateAccount_0; }
	inline void set_CreateAccount_0(Nullable_1_t1819850047  value)
	{
		___CreateAccount_0 = value;
	}

	inline static int32_t get_offset_of_DeviceId_1() { return static_cast<int32_t>(offsetof(LoginWithIOSDeviceIDRequest_t1104678395, ___DeviceId_1)); }
	inline String_t* get_DeviceId_1() const { return ___DeviceId_1; }
	inline String_t** get_address_of_DeviceId_1() { return &___DeviceId_1; }
	inline void set_DeviceId_1(String_t* value)
	{
		___DeviceId_1 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceId_1), value);
	}

	inline static int32_t get_offset_of_DeviceModel_2() { return static_cast<int32_t>(offsetof(LoginWithIOSDeviceIDRequest_t1104678395, ___DeviceModel_2)); }
	inline String_t* get_DeviceModel_2() const { return ___DeviceModel_2; }
	inline String_t** get_address_of_DeviceModel_2() { return &___DeviceModel_2; }
	inline void set_DeviceModel_2(String_t* value)
	{
		___DeviceModel_2 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceModel_2), value);
	}

	inline static int32_t get_offset_of_EncryptedRequest_3() { return static_cast<int32_t>(offsetof(LoginWithIOSDeviceIDRequest_t1104678395, ___EncryptedRequest_3)); }
	inline String_t* get_EncryptedRequest_3() const { return ___EncryptedRequest_3; }
	inline String_t** get_address_of_EncryptedRequest_3() { return &___EncryptedRequest_3; }
	inline void set_EncryptedRequest_3(String_t* value)
	{
		___EncryptedRequest_3 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_3), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_4() { return static_cast<int32_t>(offsetof(LoginWithIOSDeviceIDRequest_t1104678395, ___InfoRequestParameters_4)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_4() const { return ___InfoRequestParameters_4; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_4() { return &___InfoRequestParameters_4; }
	inline void set_InfoRequestParameters_4(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_4 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_4), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_5() { return static_cast<int32_t>(offsetof(LoginWithIOSDeviceIDRequest_t1104678395, ___LoginTitlePlayerAccountEntity_5)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_5() const { return ___LoginTitlePlayerAccountEntity_5; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_5() { return &___LoginTitlePlayerAccountEntity_5; }
	inline void set_LoginTitlePlayerAccountEntity_5(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_5 = value;
	}

	inline static int32_t get_offset_of_OS_6() { return static_cast<int32_t>(offsetof(LoginWithIOSDeviceIDRequest_t1104678395, ___OS_6)); }
	inline String_t* get_OS_6() const { return ___OS_6; }
	inline String_t** get_address_of_OS_6() { return &___OS_6; }
	inline void set_OS_6(String_t* value)
	{
		___OS_6 = value;
		Il2CppCodeGenWriteBarrier((&___OS_6), value);
	}

	inline static int32_t get_offset_of_PlayerSecret_7() { return static_cast<int32_t>(offsetof(LoginWithIOSDeviceIDRequest_t1104678395, ___PlayerSecret_7)); }
	inline String_t* get_PlayerSecret_7() const { return ___PlayerSecret_7; }
	inline String_t** get_address_of_PlayerSecret_7() { return &___PlayerSecret_7; }
	inline void set_PlayerSecret_7(String_t* value)
	{
		___PlayerSecret_7 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_7), value);
	}

	inline static int32_t get_offset_of_TitleId_8() { return static_cast<int32_t>(offsetof(LoginWithIOSDeviceIDRequest_t1104678395, ___TitleId_8)); }
	inline String_t* get_TitleId_8() const { return ___TitleId_8; }
	inline String_t** get_address_of_TitleId_8() { return &___TitleId_8; }
	inline void set_TitleId_8(String_t* value)
	{
		___TitleId_8 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHIOSDEVICEIDREQUEST_T1104678395_H
#ifndef LOGINWITHKONGREGATEREQUEST_T2996684931_H
#define LOGINWITHKONGREGATEREQUEST_T2996684931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithKongregateRequest
struct  LoginWithKongregateRequest_t2996684931  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LoginWithKongregateRequest::AuthTicket
	String_t* ___AuthTicket_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithKongregateRequest::CreateAccount
	Nullable_1_t1819850047  ___CreateAccount_1;
	// System.String PlayFab.ClientModels.LoginWithKongregateRequest::EncryptedRequest
	String_t* ___EncryptedRequest_2;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithKongregateRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_3;
	// System.String PlayFab.ClientModels.LoginWithKongregateRequest::KongregateId
	String_t* ___KongregateId_4;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithKongregateRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_5;
	// System.String PlayFab.ClientModels.LoginWithKongregateRequest::PlayerSecret
	String_t* ___PlayerSecret_6;
	// System.String PlayFab.ClientModels.LoginWithKongregateRequest::TitleId
	String_t* ___TitleId_7;

public:
	inline static int32_t get_offset_of_AuthTicket_0() { return static_cast<int32_t>(offsetof(LoginWithKongregateRequest_t2996684931, ___AuthTicket_0)); }
	inline String_t* get_AuthTicket_0() const { return ___AuthTicket_0; }
	inline String_t** get_address_of_AuthTicket_0() { return &___AuthTicket_0; }
	inline void set_AuthTicket_0(String_t* value)
	{
		___AuthTicket_0 = value;
		Il2CppCodeGenWriteBarrier((&___AuthTicket_0), value);
	}

	inline static int32_t get_offset_of_CreateAccount_1() { return static_cast<int32_t>(offsetof(LoginWithKongregateRequest_t2996684931, ___CreateAccount_1)); }
	inline Nullable_1_t1819850047  get_CreateAccount_1() const { return ___CreateAccount_1; }
	inline Nullable_1_t1819850047 * get_address_of_CreateAccount_1() { return &___CreateAccount_1; }
	inline void set_CreateAccount_1(Nullable_1_t1819850047  value)
	{
		___CreateAccount_1 = value;
	}

	inline static int32_t get_offset_of_EncryptedRequest_2() { return static_cast<int32_t>(offsetof(LoginWithKongregateRequest_t2996684931, ___EncryptedRequest_2)); }
	inline String_t* get_EncryptedRequest_2() const { return ___EncryptedRequest_2; }
	inline String_t** get_address_of_EncryptedRequest_2() { return &___EncryptedRequest_2; }
	inline void set_EncryptedRequest_2(String_t* value)
	{
		___EncryptedRequest_2 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_2), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_3() { return static_cast<int32_t>(offsetof(LoginWithKongregateRequest_t2996684931, ___InfoRequestParameters_3)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_3() const { return ___InfoRequestParameters_3; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_3() { return &___InfoRequestParameters_3; }
	inline void set_InfoRequestParameters_3(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_3), value);
	}

	inline static int32_t get_offset_of_KongregateId_4() { return static_cast<int32_t>(offsetof(LoginWithKongregateRequest_t2996684931, ___KongregateId_4)); }
	inline String_t* get_KongregateId_4() const { return ___KongregateId_4; }
	inline String_t** get_address_of_KongregateId_4() { return &___KongregateId_4; }
	inline void set_KongregateId_4(String_t* value)
	{
		___KongregateId_4 = value;
		Il2CppCodeGenWriteBarrier((&___KongregateId_4), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_5() { return static_cast<int32_t>(offsetof(LoginWithKongregateRequest_t2996684931, ___LoginTitlePlayerAccountEntity_5)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_5() const { return ___LoginTitlePlayerAccountEntity_5; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_5() { return &___LoginTitlePlayerAccountEntity_5; }
	inline void set_LoginTitlePlayerAccountEntity_5(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_5 = value;
	}

	inline static int32_t get_offset_of_PlayerSecret_6() { return static_cast<int32_t>(offsetof(LoginWithKongregateRequest_t2996684931, ___PlayerSecret_6)); }
	inline String_t* get_PlayerSecret_6() const { return ___PlayerSecret_6; }
	inline String_t** get_address_of_PlayerSecret_6() { return &___PlayerSecret_6; }
	inline void set_PlayerSecret_6(String_t* value)
	{
		___PlayerSecret_6 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_6), value);
	}

	inline static int32_t get_offset_of_TitleId_7() { return static_cast<int32_t>(offsetof(LoginWithKongregateRequest_t2996684931, ___TitleId_7)); }
	inline String_t* get_TitleId_7() const { return ___TitleId_7; }
	inline String_t** get_address_of_TitleId_7() { return &___TitleId_7; }
	inline void set_TitleId_7(String_t* value)
	{
		___TitleId_7 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHKONGREGATEREQUEST_T2996684931_H
#ifndef LOGINWITHNINTENDOSWITCHDEVICEIDREQUEST_T4205102542_H
#define LOGINWITHNINTENDOSWITCHDEVICEIDREQUEST_T4205102542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest
struct  LoginWithNintendoSwitchDeviceIdRequest_t4205102542  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::CreateAccount
	Nullable_1_t1819850047  ___CreateAccount_0;
	// System.String PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::EncryptedRequest
	String_t* ___EncryptedRequest_1;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_3;
	// System.String PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::NintendoSwitchDeviceId
	String_t* ___NintendoSwitchDeviceId_4;
	// System.String PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::PlayerSecret
	String_t* ___PlayerSecret_5;
	// System.String PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::TitleId
	String_t* ___TitleId_6;

public:
	inline static int32_t get_offset_of_CreateAccount_0() { return static_cast<int32_t>(offsetof(LoginWithNintendoSwitchDeviceIdRequest_t4205102542, ___CreateAccount_0)); }
	inline Nullable_1_t1819850047  get_CreateAccount_0() const { return ___CreateAccount_0; }
	inline Nullable_1_t1819850047 * get_address_of_CreateAccount_0() { return &___CreateAccount_0; }
	inline void set_CreateAccount_0(Nullable_1_t1819850047  value)
	{
		___CreateAccount_0 = value;
	}

	inline static int32_t get_offset_of_EncryptedRequest_1() { return static_cast<int32_t>(offsetof(LoginWithNintendoSwitchDeviceIdRequest_t4205102542, ___EncryptedRequest_1)); }
	inline String_t* get_EncryptedRequest_1() const { return ___EncryptedRequest_1; }
	inline String_t** get_address_of_EncryptedRequest_1() { return &___EncryptedRequest_1; }
	inline void set_EncryptedRequest_1(String_t* value)
	{
		___EncryptedRequest_1 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_1), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_2() { return static_cast<int32_t>(offsetof(LoginWithNintendoSwitchDeviceIdRequest_t4205102542, ___InfoRequestParameters_2)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_2() const { return ___InfoRequestParameters_2; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_2() { return &___InfoRequestParameters_2; }
	inline void set_InfoRequestParameters_2(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_2), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_3() { return static_cast<int32_t>(offsetof(LoginWithNintendoSwitchDeviceIdRequest_t4205102542, ___LoginTitlePlayerAccountEntity_3)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_3() const { return ___LoginTitlePlayerAccountEntity_3; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_3() { return &___LoginTitlePlayerAccountEntity_3; }
	inline void set_LoginTitlePlayerAccountEntity_3(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_3 = value;
	}

	inline static int32_t get_offset_of_NintendoSwitchDeviceId_4() { return static_cast<int32_t>(offsetof(LoginWithNintendoSwitchDeviceIdRequest_t4205102542, ___NintendoSwitchDeviceId_4)); }
	inline String_t* get_NintendoSwitchDeviceId_4() const { return ___NintendoSwitchDeviceId_4; }
	inline String_t** get_address_of_NintendoSwitchDeviceId_4() { return &___NintendoSwitchDeviceId_4; }
	inline void set_NintendoSwitchDeviceId_4(String_t* value)
	{
		___NintendoSwitchDeviceId_4 = value;
		Il2CppCodeGenWriteBarrier((&___NintendoSwitchDeviceId_4), value);
	}

	inline static int32_t get_offset_of_PlayerSecret_5() { return static_cast<int32_t>(offsetof(LoginWithNintendoSwitchDeviceIdRequest_t4205102542, ___PlayerSecret_5)); }
	inline String_t* get_PlayerSecret_5() const { return ___PlayerSecret_5; }
	inline String_t** get_address_of_PlayerSecret_5() { return &___PlayerSecret_5; }
	inline void set_PlayerSecret_5(String_t* value)
	{
		___PlayerSecret_5 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_5), value);
	}

	inline static int32_t get_offset_of_TitleId_6() { return static_cast<int32_t>(offsetof(LoginWithNintendoSwitchDeviceIdRequest_t4205102542, ___TitleId_6)); }
	inline String_t* get_TitleId_6() const { return ___TitleId_6; }
	inline String_t** get_address_of_TitleId_6() { return &___TitleId_6; }
	inline void set_TitleId_6(String_t* value)
	{
		___TitleId_6 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHNINTENDOSWITCHDEVICEIDREQUEST_T4205102542_H
#ifndef LOGINWITHPLAYFABREQUEST_T29234253_H
#define LOGINWITHPLAYFABREQUEST_T29234253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithPlayFabRequest
struct  LoginWithPlayFabRequest_t29234253  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithPlayFabRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithPlayFabRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_1;
	// System.String PlayFab.ClientModels.LoginWithPlayFabRequest::Password
	String_t* ___Password_2;
	// System.String PlayFab.ClientModels.LoginWithPlayFabRequest::TitleId
	String_t* ___TitleId_3;
	// System.String PlayFab.ClientModels.LoginWithPlayFabRequest::Username
	String_t* ___Username_4;

public:
	inline static int32_t get_offset_of_InfoRequestParameters_0() { return static_cast<int32_t>(offsetof(LoginWithPlayFabRequest_t29234253, ___InfoRequestParameters_0)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_0() const { return ___InfoRequestParameters_0; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_0() { return &___InfoRequestParameters_0; }
	inline void set_InfoRequestParameters_0(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_0 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_0), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_1() { return static_cast<int32_t>(offsetof(LoginWithPlayFabRequest_t29234253, ___LoginTitlePlayerAccountEntity_1)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_1() const { return ___LoginTitlePlayerAccountEntity_1; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_1() { return &___LoginTitlePlayerAccountEntity_1; }
	inline void set_LoginTitlePlayerAccountEntity_1(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_1 = value;
	}

	inline static int32_t get_offset_of_Password_2() { return static_cast<int32_t>(offsetof(LoginWithPlayFabRequest_t29234253, ___Password_2)); }
	inline String_t* get_Password_2() const { return ___Password_2; }
	inline String_t** get_address_of_Password_2() { return &___Password_2; }
	inline void set_Password_2(String_t* value)
	{
		___Password_2 = value;
		Il2CppCodeGenWriteBarrier((&___Password_2), value);
	}

	inline static int32_t get_offset_of_TitleId_3() { return static_cast<int32_t>(offsetof(LoginWithPlayFabRequest_t29234253, ___TitleId_3)); }
	inline String_t* get_TitleId_3() const { return ___TitleId_3; }
	inline String_t** get_address_of_TitleId_3() { return &___TitleId_3; }
	inline void set_TitleId_3(String_t* value)
	{
		___TitleId_3 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_3), value);
	}

	inline static int32_t get_offset_of_Username_4() { return static_cast<int32_t>(offsetof(LoginWithPlayFabRequest_t29234253, ___Username_4)); }
	inline String_t* get_Username_4() const { return ___Username_4; }
	inline String_t** get_address_of_Username_4() { return &___Username_4; }
	inline void set_Username_4(String_t* value)
	{
		___Username_4 = value;
		Il2CppCodeGenWriteBarrier((&___Username_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHPLAYFABREQUEST_T29234253_H
#ifndef LOGINWITHSTEAMREQUEST_T1168349975_H
#define LOGINWITHSTEAMREQUEST_T1168349975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithSteamRequest
struct  LoginWithSteamRequest_t1168349975  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithSteamRequest::CreateAccount
	Nullable_1_t1819850047  ___CreateAccount_0;
	// System.String PlayFab.ClientModels.LoginWithSteamRequest::EncryptedRequest
	String_t* ___EncryptedRequest_1;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithSteamRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithSteamRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_3;
	// System.String PlayFab.ClientModels.LoginWithSteamRequest::PlayerSecret
	String_t* ___PlayerSecret_4;
	// System.String PlayFab.ClientModels.LoginWithSteamRequest::SteamTicket
	String_t* ___SteamTicket_5;
	// System.String PlayFab.ClientModels.LoginWithSteamRequest::TitleId
	String_t* ___TitleId_6;

public:
	inline static int32_t get_offset_of_CreateAccount_0() { return static_cast<int32_t>(offsetof(LoginWithSteamRequest_t1168349975, ___CreateAccount_0)); }
	inline Nullable_1_t1819850047  get_CreateAccount_0() const { return ___CreateAccount_0; }
	inline Nullable_1_t1819850047 * get_address_of_CreateAccount_0() { return &___CreateAccount_0; }
	inline void set_CreateAccount_0(Nullable_1_t1819850047  value)
	{
		___CreateAccount_0 = value;
	}

	inline static int32_t get_offset_of_EncryptedRequest_1() { return static_cast<int32_t>(offsetof(LoginWithSteamRequest_t1168349975, ___EncryptedRequest_1)); }
	inline String_t* get_EncryptedRequest_1() const { return ___EncryptedRequest_1; }
	inline String_t** get_address_of_EncryptedRequest_1() { return &___EncryptedRequest_1; }
	inline void set_EncryptedRequest_1(String_t* value)
	{
		___EncryptedRequest_1 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_1), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_2() { return static_cast<int32_t>(offsetof(LoginWithSteamRequest_t1168349975, ___InfoRequestParameters_2)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_2() const { return ___InfoRequestParameters_2; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_2() { return &___InfoRequestParameters_2; }
	inline void set_InfoRequestParameters_2(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_2), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_3() { return static_cast<int32_t>(offsetof(LoginWithSteamRequest_t1168349975, ___LoginTitlePlayerAccountEntity_3)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_3() const { return ___LoginTitlePlayerAccountEntity_3; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_3() { return &___LoginTitlePlayerAccountEntity_3; }
	inline void set_LoginTitlePlayerAccountEntity_3(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_3 = value;
	}

	inline static int32_t get_offset_of_PlayerSecret_4() { return static_cast<int32_t>(offsetof(LoginWithSteamRequest_t1168349975, ___PlayerSecret_4)); }
	inline String_t* get_PlayerSecret_4() const { return ___PlayerSecret_4; }
	inline String_t** get_address_of_PlayerSecret_4() { return &___PlayerSecret_4; }
	inline void set_PlayerSecret_4(String_t* value)
	{
		___PlayerSecret_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_4), value);
	}

	inline static int32_t get_offset_of_SteamTicket_5() { return static_cast<int32_t>(offsetof(LoginWithSteamRequest_t1168349975, ___SteamTicket_5)); }
	inline String_t* get_SteamTicket_5() const { return ___SteamTicket_5; }
	inline String_t** get_address_of_SteamTicket_5() { return &___SteamTicket_5; }
	inline void set_SteamTicket_5(String_t* value)
	{
		___SteamTicket_5 = value;
		Il2CppCodeGenWriteBarrier((&___SteamTicket_5), value);
	}

	inline static int32_t get_offset_of_TitleId_6() { return static_cast<int32_t>(offsetof(LoginWithSteamRequest_t1168349975, ___TitleId_6)); }
	inline String_t* get_TitleId_6() const { return ___TitleId_6; }
	inline String_t** get_address_of_TitleId_6() { return &___TitleId_6; }
	inline void set_TitleId_6(String_t* value)
	{
		___TitleId_6 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHSTEAMREQUEST_T1168349975_H
#ifndef LOGINWITHTWITCHREQUEST_T1822909188_H
#define LOGINWITHTWITCHREQUEST_T1822909188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithTwitchRequest
struct  LoginWithTwitchRequest_t1822909188  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LoginWithTwitchRequest::AccessToken
	String_t* ___AccessToken_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithTwitchRequest::CreateAccount
	Nullable_1_t1819850047  ___CreateAccount_1;
	// System.String PlayFab.ClientModels.LoginWithTwitchRequest::EncryptedRequest
	String_t* ___EncryptedRequest_2;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithTwitchRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_3;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithTwitchRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_4;
	// System.String PlayFab.ClientModels.LoginWithTwitchRequest::PlayerSecret
	String_t* ___PlayerSecret_5;
	// System.String PlayFab.ClientModels.LoginWithTwitchRequest::TitleId
	String_t* ___TitleId_6;

public:
	inline static int32_t get_offset_of_AccessToken_0() { return static_cast<int32_t>(offsetof(LoginWithTwitchRequest_t1822909188, ___AccessToken_0)); }
	inline String_t* get_AccessToken_0() const { return ___AccessToken_0; }
	inline String_t** get_address_of_AccessToken_0() { return &___AccessToken_0; }
	inline void set_AccessToken_0(String_t* value)
	{
		___AccessToken_0 = value;
		Il2CppCodeGenWriteBarrier((&___AccessToken_0), value);
	}

	inline static int32_t get_offset_of_CreateAccount_1() { return static_cast<int32_t>(offsetof(LoginWithTwitchRequest_t1822909188, ___CreateAccount_1)); }
	inline Nullable_1_t1819850047  get_CreateAccount_1() const { return ___CreateAccount_1; }
	inline Nullable_1_t1819850047 * get_address_of_CreateAccount_1() { return &___CreateAccount_1; }
	inline void set_CreateAccount_1(Nullable_1_t1819850047  value)
	{
		___CreateAccount_1 = value;
	}

	inline static int32_t get_offset_of_EncryptedRequest_2() { return static_cast<int32_t>(offsetof(LoginWithTwitchRequest_t1822909188, ___EncryptedRequest_2)); }
	inline String_t* get_EncryptedRequest_2() const { return ___EncryptedRequest_2; }
	inline String_t** get_address_of_EncryptedRequest_2() { return &___EncryptedRequest_2; }
	inline void set_EncryptedRequest_2(String_t* value)
	{
		___EncryptedRequest_2 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_2), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_3() { return static_cast<int32_t>(offsetof(LoginWithTwitchRequest_t1822909188, ___InfoRequestParameters_3)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_3() const { return ___InfoRequestParameters_3; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_3() { return &___InfoRequestParameters_3; }
	inline void set_InfoRequestParameters_3(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_3), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_4() { return static_cast<int32_t>(offsetof(LoginWithTwitchRequest_t1822909188, ___LoginTitlePlayerAccountEntity_4)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_4() const { return ___LoginTitlePlayerAccountEntity_4; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_4() { return &___LoginTitlePlayerAccountEntity_4; }
	inline void set_LoginTitlePlayerAccountEntity_4(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_4 = value;
	}

	inline static int32_t get_offset_of_PlayerSecret_5() { return static_cast<int32_t>(offsetof(LoginWithTwitchRequest_t1822909188, ___PlayerSecret_5)); }
	inline String_t* get_PlayerSecret_5() const { return ___PlayerSecret_5; }
	inline String_t** get_address_of_PlayerSecret_5() { return &___PlayerSecret_5; }
	inline void set_PlayerSecret_5(String_t* value)
	{
		___PlayerSecret_5 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_5), value);
	}

	inline static int32_t get_offset_of_TitleId_6() { return static_cast<int32_t>(offsetof(LoginWithTwitchRequest_t1822909188, ___TitleId_6)); }
	inline String_t* get_TitleId_6() const { return ___TitleId_6; }
	inline String_t** get_address_of_TitleId_6() { return &___TitleId_6; }
	inline void set_TitleId_6(String_t* value)
	{
		___TitleId_6 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHTWITCHREQUEST_T1822909188_H
#ifndef LOGINWITHWINDOWSHELLOREQUEST_T725081759_H
#define LOGINWITHWINDOWSHELLOREQUEST_T725081759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithWindowsHelloRequest
struct  LoginWithWindowsHelloRequest_t725081759  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.LoginWithWindowsHelloRequest::ChallengeSignature
	String_t* ___ChallengeSignature_0;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithWindowsHelloRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithWindowsHelloRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_2;
	// System.String PlayFab.ClientModels.LoginWithWindowsHelloRequest::PublicKeyHint
	String_t* ___PublicKeyHint_3;
	// System.String PlayFab.ClientModels.LoginWithWindowsHelloRequest::TitleId
	String_t* ___TitleId_4;

public:
	inline static int32_t get_offset_of_ChallengeSignature_0() { return static_cast<int32_t>(offsetof(LoginWithWindowsHelloRequest_t725081759, ___ChallengeSignature_0)); }
	inline String_t* get_ChallengeSignature_0() const { return ___ChallengeSignature_0; }
	inline String_t** get_address_of_ChallengeSignature_0() { return &___ChallengeSignature_0; }
	inline void set_ChallengeSignature_0(String_t* value)
	{
		___ChallengeSignature_0 = value;
		Il2CppCodeGenWriteBarrier((&___ChallengeSignature_0), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_1() { return static_cast<int32_t>(offsetof(LoginWithWindowsHelloRequest_t725081759, ___InfoRequestParameters_1)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_1() const { return ___InfoRequestParameters_1; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_1() { return &___InfoRequestParameters_1; }
	inline void set_InfoRequestParameters_1(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_1), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_2() { return static_cast<int32_t>(offsetof(LoginWithWindowsHelloRequest_t725081759, ___LoginTitlePlayerAccountEntity_2)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_2() const { return ___LoginTitlePlayerAccountEntity_2; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_2() { return &___LoginTitlePlayerAccountEntity_2; }
	inline void set_LoginTitlePlayerAccountEntity_2(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_2 = value;
	}

	inline static int32_t get_offset_of_PublicKeyHint_3() { return static_cast<int32_t>(offsetof(LoginWithWindowsHelloRequest_t725081759, ___PublicKeyHint_3)); }
	inline String_t* get_PublicKeyHint_3() const { return ___PublicKeyHint_3; }
	inline String_t** get_address_of_PublicKeyHint_3() { return &___PublicKeyHint_3; }
	inline void set_PublicKeyHint_3(String_t* value)
	{
		___PublicKeyHint_3 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKeyHint_3), value);
	}

	inline static int32_t get_offset_of_TitleId_4() { return static_cast<int32_t>(offsetof(LoginWithWindowsHelloRequest_t725081759, ___TitleId_4)); }
	inline String_t* get_TitleId_4() const { return ___TitleId_4; }
	inline String_t** get_address_of_TitleId_4() { return &___TitleId_4; }
	inline void set_TitleId_4(String_t* value)
	{
		___TitleId_4 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHWINDOWSHELLOREQUEST_T725081759_H
#ifndef LOGINWITHXBOXREQUEST_T2119363681_H
#define LOGINWITHXBOXREQUEST_T2119363681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginWithXboxRequest
struct  LoginWithXboxRequest_t2119363681  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithXboxRequest::CreateAccount
	Nullable_1_t1819850047  ___CreateAccount_0;
	// System.String PlayFab.ClientModels.LoginWithXboxRequest::EncryptedRequest
	String_t* ___EncryptedRequest_1;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithXboxRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithXboxRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_3;
	// System.String PlayFab.ClientModels.LoginWithXboxRequest::PlayerSecret
	String_t* ___PlayerSecret_4;
	// System.String PlayFab.ClientModels.LoginWithXboxRequest::TitleId
	String_t* ___TitleId_5;
	// System.String PlayFab.ClientModels.LoginWithXboxRequest::XboxToken
	String_t* ___XboxToken_6;

public:
	inline static int32_t get_offset_of_CreateAccount_0() { return static_cast<int32_t>(offsetof(LoginWithXboxRequest_t2119363681, ___CreateAccount_0)); }
	inline Nullable_1_t1819850047  get_CreateAccount_0() const { return ___CreateAccount_0; }
	inline Nullable_1_t1819850047 * get_address_of_CreateAccount_0() { return &___CreateAccount_0; }
	inline void set_CreateAccount_0(Nullable_1_t1819850047  value)
	{
		___CreateAccount_0 = value;
	}

	inline static int32_t get_offset_of_EncryptedRequest_1() { return static_cast<int32_t>(offsetof(LoginWithXboxRequest_t2119363681, ___EncryptedRequest_1)); }
	inline String_t* get_EncryptedRequest_1() const { return ___EncryptedRequest_1; }
	inline String_t** get_address_of_EncryptedRequest_1() { return &___EncryptedRequest_1; }
	inline void set_EncryptedRequest_1(String_t* value)
	{
		___EncryptedRequest_1 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_1), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_2() { return static_cast<int32_t>(offsetof(LoginWithXboxRequest_t2119363681, ___InfoRequestParameters_2)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_2() const { return ___InfoRequestParameters_2; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_2() { return &___InfoRequestParameters_2; }
	inline void set_InfoRequestParameters_2(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_2), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_3() { return static_cast<int32_t>(offsetof(LoginWithXboxRequest_t2119363681, ___LoginTitlePlayerAccountEntity_3)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_3() const { return ___LoginTitlePlayerAccountEntity_3; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_3() { return &___LoginTitlePlayerAccountEntity_3; }
	inline void set_LoginTitlePlayerAccountEntity_3(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_3 = value;
	}

	inline static int32_t get_offset_of_PlayerSecret_4() { return static_cast<int32_t>(offsetof(LoginWithXboxRequest_t2119363681, ___PlayerSecret_4)); }
	inline String_t* get_PlayerSecret_4() const { return ___PlayerSecret_4; }
	inline String_t** get_address_of_PlayerSecret_4() { return &___PlayerSecret_4; }
	inline void set_PlayerSecret_4(String_t* value)
	{
		___PlayerSecret_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_4), value);
	}

	inline static int32_t get_offset_of_TitleId_5() { return static_cast<int32_t>(offsetof(LoginWithXboxRequest_t2119363681, ___TitleId_5)); }
	inline String_t* get_TitleId_5() const { return ___TitleId_5; }
	inline String_t** get_address_of_TitleId_5() { return &___TitleId_5; }
	inline void set_TitleId_5(String_t* value)
	{
		___TitleId_5 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_5), value);
	}

	inline static int32_t get_offset_of_XboxToken_6() { return static_cast<int32_t>(offsetof(LoginWithXboxRequest_t2119363681, ___XboxToken_6)); }
	inline String_t* get_XboxToken_6() const { return ___XboxToken_6; }
	inline String_t** get_address_of_XboxToken_6() { return &___XboxToken_6; }
	inline void set_XboxToken_6(String_t* value)
	{
		___XboxToken_6 = value;
		Il2CppCodeGenWriteBarrier((&___XboxToken_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINWITHXBOXREQUEST_T2119363681_H
#ifndef MATCHMAKESTATUS_T1217147204_H
#define MATCHMAKESTATUS_T1217147204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.MatchmakeStatus
struct  MatchmakeStatus_t1217147204 
{
public:
	// System.Int32 PlayFab.ClientModels.MatchmakeStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MatchmakeStatus_t1217147204, ___value___1)); }
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
#endif // MATCHMAKESTATUS_T1217147204_H
#ifndef REGION_T4198023226_H
#define REGION_T4198023226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.Region
struct  Region_t4198023226 
{
public:
	// System.Int32 PlayFab.ClientModels.Region::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Region_t4198023226, ___value___1)); }
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
#endif // REGION_T4198023226_H
#ifndef SOURCETYPE_T2721852859_H
#define SOURCETYPE_T2721852859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.SourceType
struct  SourceType_t2721852859 
{
public:
	// System.Int32 PlayFab.ClientModels.SourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SourceType_t2721852859, ___value___1)); }
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
#endif // SOURCETYPE_T2721852859_H
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
#ifndef NULLABLE_1_T382695706_H
#define NULLABLE_1_T382695706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.ContinentCode>
struct  Nullable_1_t382695706 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t382695706, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t382695706, ___has_value_1)); }
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
#endif // NULLABLE_1_T382695706_H
#ifndef NULLABLE_1_T3467212419_H
#define NULLABLE_1_T3467212419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.CountryCode>
struct  Nullable_1_t3467212419 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3467212419, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3467212419, ___has_value_1)); }
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
#endif // NULLABLE_1_T3467212419_H
#ifndef NULLABLE_1_T3603180267_H
#define NULLABLE_1_T3603180267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.LoginIdentityProvider>
struct  Nullable_1_t3603180267 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3603180267, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3603180267, ___has_value_1)); }
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
#endif // NULLABLE_1_T3603180267_H
#ifndef NULLABLE_1_T2939709286_H
#define NULLABLE_1_T2939709286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.MatchmakeStatus>
struct  Nullable_1_t2939709286 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2939709286, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2939709286, ___has_value_1)); }
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
#endif // NULLABLE_1_T2939709286_H
#ifndef NULLABLE_1_T1625618012_H
#define NULLABLE_1_T1625618012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.Region>
struct  Nullable_1_t1625618012 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1625618012, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1625618012, ___has_value_1)); }
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
#endif // NULLABLE_1_T1625618012_H
#ifndef NULLABLE_1_T149447645_H
#define NULLABLE_1_T149447645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.SourceType>
struct  Nullable_1_t149447645 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t149447645, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t149447645, ___has_value_1)); }
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
#endif // NULLABLE_1_T149447645_H
#ifndef GETPURCHASERESULT_T3451093745_H
#define GETPURCHASERESULT_T3451093745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPurchaseResult
struct  GetPurchaseResult_t3451093745  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.GetPurchaseResult::OrderId
	String_t* ___OrderId_2;
	// System.String PlayFab.ClientModels.GetPurchaseResult::PaymentProvider
	String_t* ___PaymentProvider_3;
	// System.DateTime PlayFab.ClientModels.GetPurchaseResult::PurchaseDate
	DateTime_t3738529785  ___PurchaseDate_4;
	// System.String PlayFab.ClientModels.GetPurchaseResult::TransactionId
	String_t* ___TransactionId_5;
	// System.String PlayFab.ClientModels.GetPurchaseResult::TransactionStatus
	String_t* ___TransactionStatus_6;

public:
	inline static int32_t get_offset_of_OrderId_2() { return static_cast<int32_t>(offsetof(GetPurchaseResult_t3451093745, ___OrderId_2)); }
	inline String_t* get_OrderId_2() const { return ___OrderId_2; }
	inline String_t** get_address_of_OrderId_2() { return &___OrderId_2; }
	inline void set_OrderId_2(String_t* value)
	{
		___OrderId_2 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_2), value);
	}

	inline static int32_t get_offset_of_PaymentProvider_3() { return static_cast<int32_t>(offsetof(GetPurchaseResult_t3451093745, ___PaymentProvider_3)); }
	inline String_t* get_PaymentProvider_3() const { return ___PaymentProvider_3; }
	inline String_t** get_address_of_PaymentProvider_3() { return &___PaymentProvider_3; }
	inline void set_PaymentProvider_3(String_t* value)
	{
		___PaymentProvider_3 = value;
		Il2CppCodeGenWriteBarrier((&___PaymentProvider_3), value);
	}

	inline static int32_t get_offset_of_PurchaseDate_4() { return static_cast<int32_t>(offsetof(GetPurchaseResult_t3451093745, ___PurchaseDate_4)); }
	inline DateTime_t3738529785  get_PurchaseDate_4() const { return ___PurchaseDate_4; }
	inline DateTime_t3738529785 * get_address_of_PurchaseDate_4() { return &___PurchaseDate_4; }
	inline void set_PurchaseDate_4(DateTime_t3738529785  value)
	{
		___PurchaseDate_4 = value;
	}

	inline static int32_t get_offset_of_TransactionId_5() { return static_cast<int32_t>(offsetof(GetPurchaseResult_t3451093745, ___TransactionId_5)); }
	inline String_t* get_TransactionId_5() const { return ___TransactionId_5; }
	inline String_t** get_address_of_TransactionId_5() { return &___TransactionId_5; }
	inline void set_TransactionId_5(String_t* value)
	{
		___TransactionId_5 = value;
		Il2CppCodeGenWriteBarrier((&___TransactionId_5), value);
	}

	inline static int32_t get_offset_of_TransactionStatus_6() { return static_cast<int32_t>(offsetof(GetPurchaseResult_t3451093745, ___TransactionStatus_6)); }
	inline String_t* get_TransactionStatus_6() const { return ___TransactionStatus_6; }
	inline String_t** get_address_of_TransactionStatus_6() { return &___TransactionStatus_6; }
	inline void set_TransactionStatus_6(String_t* value)
	{
		___TransactionStatus_6 = value;
		Il2CppCodeGenWriteBarrier((&___TransactionStatus_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPURCHASERESULT_T3451093745_H
#ifndef GETSTOREITEMSRESULT_T1048173527_H
#define GETSTOREITEMSRESULT_T1048173527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetStoreItemsResult
struct  GetStoreItemsResult_t1048173527  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.GetStoreItemsResult::CatalogVersion
	String_t* ___CatalogVersion_2;
	// PlayFab.ClientModels.StoreMarketingModel PlayFab.ClientModels.GetStoreItemsResult::MarketingData
	StoreMarketingModel_t3941052148 * ___MarketingData_3;
	// System.Nullable`1<PlayFab.ClientModels.SourceType> PlayFab.ClientModels.GetStoreItemsResult::Source
	Nullable_1_t149447645  ___Source_4;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StoreItem> PlayFab.ClientModels.GetStoreItemsResult::Store
	List_1_t2148411690 * ___Store_5;
	// System.String PlayFab.ClientModels.GetStoreItemsResult::StoreId
	String_t* ___StoreId_6;

public:
	inline static int32_t get_offset_of_CatalogVersion_2() { return static_cast<int32_t>(offsetof(GetStoreItemsResult_t1048173527, ___CatalogVersion_2)); }
	inline String_t* get_CatalogVersion_2() const { return ___CatalogVersion_2; }
	inline String_t** get_address_of_CatalogVersion_2() { return &___CatalogVersion_2; }
	inline void set_CatalogVersion_2(String_t* value)
	{
		___CatalogVersion_2 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_2), value);
	}

	inline static int32_t get_offset_of_MarketingData_3() { return static_cast<int32_t>(offsetof(GetStoreItemsResult_t1048173527, ___MarketingData_3)); }
	inline StoreMarketingModel_t3941052148 * get_MarketingData_3() const { return ___MarketingData_3; }
	inline StoreMarketingModel_t3941052148 ** get_address_of_MarketingData_3() { return &___MarketingData_3; }
	inline void set_MarketingData_3(StoreMarketingModel_t3941052148 * value)
	{
		___MarketingData_3 = value;
		Il2CppCodeGenWriteBarrier((&___MarketingData_3), value);
	}

	inline static int32_t get_offset_of_Source_4() { return static_cast<int32_t>(offsetof(GetStoreItemsResult_t1048173527, ___Source_4)); }
	inline Nullable_1_t149447645  get_Source_4() const { return ___Source_4; }
	inline Nullable_1_t149447645 * get_address_of_Source_4() { return &___Source_4; }
	inline void set_Source_4(Nullable_1_t149447645  value)
	{
		___Source_4 = value;
	}

	inline static int32_t get_offset_of_Store_5() { return static_cast<int32_t>(offsetof(GetStoreItemsResult_t1048173527, ___Store_5)); }
	inline List_1_t2148411690 * get_Store_5() const { return ___Store_5; }
	inline List_1_t2148411690 ** get_address_of_Store_5() { return &___Store_5; }
	inline void set_Store_5(List_1_t2148411690 * value)
	{
		___Store_5 = value;
		Il2CppCodeGenWriteBarrier((&___Store_5), value);
	}

	inline static int32_t get_offset_of_StoreId_6() { return static_cast<int32_t>(offsetof(GetStoreItemsResult_t1048173527, ___StoreId_6)); }
	inline String_t* get_StoreId_6() const { return ___StoreId_6; }
	inline String_t** get_address_of_StoreId_6() { return &___StoreId_6; }
	inline void set_StoreId_6(String_t* value)
	{
		___StoreId_6 = value;
		Il2CppCodeGenWriteBarrier((&___StoreId_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETSTOREITEMSRESULT_T1048173527_H
#ifndef GETTIMERESULT_T426877017_H
#define GETTIMERESULT_T426877017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetTimeResult
struct  GetTimeResult_t426877017  : public PlayFabResultCommon_t3469603827
{
public:
	// System.DateTime PlayFab.ClientModels.GetTimeResult::Time
	DateTime_t3738529785  ___Time_2;

public:
	inline static int32_t get_offset_of_Time_2() { return static_cast<int32_t>(offsetof(GetTimeResult_t426877017, ___Time_2)); }
	inline DateTime_t3738529785  get_Time_2() const { return ___Time_2; }
	inline DateTime_t3738529785 * get_address_of_Time_2() { return &___Time_2; }
	inline void set_Time_2(DateTime_t3738529785  value)
	{
		___Time_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTIMERESULT_T426877017_H
#ifndef LINKEDPLATFORMACCOUNTMODEL_T2719432589_H
#define LINKEDPLATFORMACCOUNTMODEL_T2719432589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LinkedPlatformAccountModel
struct  LinkedPlatformAccountModel_t2719432589  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.LinkedPlatformAccountModel::Email
	String_t* ___Email_0;
	// System.Nullable`1<PlayFab.ClientModels.LoginIdentityProvider> PlayFab.ClientModels.LinkedPlatformAccountModel::Platform
	Nullable_1_t3603180267  ___Platform_1;
	// System.String PlayFab.ClientModels.LinkedPlatformAccountModel::PlatformUserId
	String_t* ___PlatformUserId_2;
	// System.String PlayFab.ClientModels.LinkedPlatformAccountModel::Username
	String_t* ___Username_3;

public:
	inline static int32_t get_offset_of_Email_0() { return static_cast<int32_t>(offsetof(LinkedPlatformAccountModel_t2719432589, ___Email_0)); }
	inline String_t* get_Email_0() const { return ___Email_0; }
	inline String_t** get_address_of_Email_0() { return &___Email_0; }
	inline void set_Email_0(String_t* value)
	{
		___Email_0 = value;
		Il2CppCodeGenWriteBarrier((&___Email_0), value);
	}

	inline static int32_t get_offset_of_Platform_1() { return static_cast<int32_t>(offsetof(LinkedPlatformAccountModel_t2719432589, ___Platform_1)); }
	inline Nullable_1_t3603180267  get_Platform_1() const { return ___Platform_1; }
	inline Nullable_1_t3603180267 * get_address_of_Platform_1() { return &___Platform_1; }
	inline void set_Platform_1(Nullable_1_t3603180267  value)
	{
		___Platform_1 = value;
	}

	inline static int32_t get_offset_of_PlatformUserId_2() { return static_cast<int32_t>(offsetof(LinkedPlatformAccountModel_t2719432589, ___PlatformUserId_2)); }
	inline String_t* get_PlatformUserId_2() const { return ___PlatformUserId_2; }
	inline String_t** get_address_of_PlatformUserId_2() { return &___PlatformUserId_2; }
	inline void set_PlatformUserId_2(String_t* value)
	{
		___PlatformUserId_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlatformUserId_2), value);
	}

	inline static int32_t get_offset_of_Username_3() { return static_cast<int32_t>(offsetof(LinkedPlatformAccountModel_t2719432589, ___Username_3)); }
	inline String_t* get_Username_3() const { return ___Username_3; }
	inline String_t** get_address_of_Username_3() { return &___Username_3; }
	inline void set_Username_3(String_t* value)
	{
		___Username_3 = value;
		Il2CppCodeGenWriteBarrier((&___Username_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKEDPLATFORMACCOUNTMODEL_T2719432589_H
#ifndef LOCATIONMODEL_T3813501936_H
#define LOCATIONMODEL_T3813501936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LocationModel
struct  LocationModel_t3813501936  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.LocationModel::City
	String_t* ___City_0;
	// System.Nullable`1<PlayFab.ClientModels.ContinentCode> PlayFab.ClientModels.LocationModel::ContinentCode
	Nullable_1_t382695706  ___ContinentCode_1;
	// System.Nullable`1<PlayFab.ClientModels.CountryCode> PlayFab.ClientModels.LocationModel::CountryCode
	Nullable_1_t3467212419  ___CountryCode_2;
	// System.Nullable`1<System.Double> PlayFab.ClientModels.LocationModel::Latitude
	Nullable_1_t2317227445  ___Latitude_3;
	// System.Nullable`1<System.Double> PlayFab.ClientModels.LocationModel::Longitude
	Nullable_1_t2317227445  ___Longitude_4;

public:
	inline static int32_t get_offset_of_City_0() { return static_cast<int32_t>(offsetof(LocationModel_t3813501936, ___City_0)); }
	inline String_t* get_City_0() const { return ___City_0; }
	inline String_t** get_address_of_City_0() { return &___City_0; }
	inline void set_City_0(String_t* value)
	{
		___City_0 = value;
		Il2CppCodeGenWriteBarrier((&___City_0), value);
	}

	inline static int32_t get_offset_of_ContinentCode_1() { return static_cast<int32_t>(offsetof(LocationModel_t3813501936, ___ContinentCode_1)); }
	inline Nullable_1_t382695706  get_ContinentCode_1() const { return ___ContinentCode_1; }
	inline Nullable_1_t382695706 * get_address_of_ContinentCode_1() { return &___ContinentCode_1; }
	inline void set_ContinentCode_1(Nullable_1_t382695706  value)
	{
		___ContinentCode_1 = value;
	}

	inline static int32_t get_offset_of_CountryCode_2() { return static_cast<int32_t>(offsetof(LocationModel_t3813501936, ___CountryCode_2)); }
	inline Nullable_1_t3467212419  get_CountryCode_2() const { return ___CountryCode_2; }
	inline Nullable_1_t3467212419 * get_address_of_CountryCode_2() { return &___CountryCode_2; }
	inline void set_CountryCode_2(Nullable_1_t3467212419  value)
	{
		___CountryCode_2 = value;
	}

	inline static int32_t get_offset_of_Latitude_3() { return static_cast<int32_t>(offsetof(LocationModel_t3813501936, ___Latitude_3)); }
	inline Nullable_1_t2317227445  get_Latitude_3() const { return ___Latitude_3; }
	inline Nullable_1_t2317227445 * get_address_of_Latitude_3() { return &___Latitude_3; }
	inline void set_Latitude_3(Nullable_1_t2317227445  value)
	{
		___Latitude_3 = value;
	}

	inline static int32_t get_offset_of_Longitude_4() { return static_cast<int32_t>(offsetof(LocationModel_t3813501936, ___Longitude_4)); }
	inline Nullable_1_t2317227445  get_Longitude_4() const { return ___Longitude_4; }
	inline Nullable_1_t2317227445 * get_address_of_Longitude_4() { return &___Longitude_4; }
	inline void set_Longitude_4(Nullable_1_t2317227445  value)
	{
		___Longitude_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCATIONMODEL_T3813501936_H
#ifndef MATCHMAKEREQUEST_T1739851507_H
#define MATCHMAKEREQUEST_T1739851507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.MatchmakeRequest
struct  MatchmakeRequest_t1739851507  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.MatchmakeRequest::BuildVersion
	String_t* ___BuildVersion_0;
	// System.String PlayFab.ClientModels.MatchmakeRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.String PlayFab.ClientModels.MatchmakeRequest::GameMode
	String_t* ___GameMode_2;
	// System.String PlayFab.ClientModels.MatchmakeRequest::LobbyId
	String_t* ___LobbyId_3;
	// System.Nullable`1<PlayFab.ClientModels.Region> PlayFab.ClientModels.MatchmakeRequest::Region
	Nullable_1_t1625618012  ___Region_4;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.MatchmakeRequest::StartNewIfNoneFound
	Nullable_1_t1819850047  ___StartNewIfNoneFound_5;
	// System.String PlayFab.ClientModels.MatchmakeRequest::StatisticName
	String_t* ___StatisticName_6;
	// PlayFab.ClientModels.CollectionFilter PlayFab.ClientModels.MatchmakeRequest::TagFilter
	CollectionFilter_t2867730642 * ___TagFilter_7;

public:
	inline static int32_t get_offset_of_BuildVersion_0() { return static_cast<int32_t>(offsetof(MatchmakeRequest_t1739851507, ___BuildVersion_0)); }
	inline String_t* get_BuildVersion_0() const { return ___BuildVersion_0; }
	inline String_t** get_address_of_BuildVersion_0() { return &___BuildVersion_0; }
	inline void set_BuildVersion_0(String_t* value)
	{
		___BuildVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___BuildVersion_0), value);
	}

	inline static int32_t get_offset_of_CharacterId_1() { return static_cast<int32_t>(offsetof(MatchmakeRequest_t1739851507, ___CharacterId_1)); }
	inline String_t* get_CharacterId_1() const { return ___CharacterId_1; }
	inline String_t** get_address_of_CharacterId_1() { return &___CharacterId_1; }
	inline void set_CharacterId_1(String_t* value)
	{
		___CharacterId_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_1), value);
	}

	inline static int32_t get_offset_of_GameMode_2() { return static_cast<int32_t>(offsetof(MatchmakeRequest_t1739851507, ___GameMode_2)); }
	inline String_t* get_GameMode_2() const { return ___GameMode_2; }
	inline String_t** get_address_of_GameMode_2() { return &___GameMode_2; }
	inline void set_GameMode_2(String_t* value)
	{
		___GameMode_2 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_2), value);
	}

	inline static int32_t get_offset_of_LobbyId_3() { return static_cast<int32_t>(offsetof(MatchmakeRequest_t1739851507, ___LobbyId_3)); }
	inline String_t* get_LobbyId_3() const { return ___LobbyId_3; }
	inline String_t** get_address_of_LobbyId_3() { return &___LobbyId_3; }
	inline void set_LobbyId_3(String_t* value)
	{
		___LobbyId_3 = value;
		Il2CppCodeGenWriteBarrier((&___LobbyId_3), value);
	}

	inline static int32_t get_offset_of_Region_4() { return static_cast<int32_t>(offsetof(MatchmakeRequest_t1739851507, ___Region_4)); }
	inline Nullable_1_t1625618012  get_Region_4() const { return ___Region_4; }
	inline Nullable_1_t1625618012 * get_address_of_Region_4() { return &___Region_4; }
	inline void set_Region_4(Nullable_1_t1625618012  value)
	{
		___Region_4 = value;
	}

	inline static int32_t get_offset_of_StartNewIfNoneFound_5() { return static_cast<int32_t>(offsetof(MatchmakeRequest_t1739851507, ___StartNewIfNoneFound_5)); }
	inline Nullable_1_t1819850047  get_StartNewIfNoneFound_5() const { return ___StartNewIfNoneFound_5; }
	inline Nullable_1_t1819850047 * get_address_of_StartNewIfNoneFound_5() { return &___StartNewIfNoneFound_5; }
	inline void set_StartNewIfNoneFound_5(Nullable_1_t1819850047  value)
	{
		___StartNewIfNoneFound_5 = value;
	}

	inline static int32_t get_offset_of_StatisticName_6() { return static_cast<int32_t>(offsetof(MatchmakeRequest_t1739851507, ___StatisticName_6)); }
	inline String_t* get_StatisticName_6() const { return ___StatisticName_6; }
	inline String_t** get_address_of_StatisticName_6() { return &___StatisticName_6; }
	inline void set_StatisticName_6(String_t* value)
	{
		___StatisticName_6 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_6), value);
	}

	inline static int32_t get_offset_of_TagFilter_7() { return static_cast<int32_t>(offsetof(MatchmakeRequest_t1739851507, ___TagFilter_7)); }
	inline CollectionFilter_t2867730642 * get_TagFilter_7() const { return ___TagFilter_7; }
	inline CollectionFilter_t2867730642 ** get_address_of_TagFilter_7() { return &___TagFilter_7; }
	inline void set_TagFilter_7(CollectionFilter_t2867730642 * value)
	{
		___TagFilter_7 = value;
		Il2CppCodeGenWriteBarrier((&___TagFilter_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHMAKEREQUEST_T1739851507_H
#ifndef MATCHMAKERESULT_T2030730580_H
#define MATCHMAKERESULT_T2030730580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.MatchmakeResult
struct  MatchmakeResult_t2030730580  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.MatchmakeResult::Expires
	String_t* ___Expires_2;
	// System.String PlayFab.ClientModels.MatchmakeResult::LobbyID
	String_t* ___LobbyID_3;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.MatchmakeResult::PollWaitTimeMS
	Nullable_1_t378540539  ___PollWaitTimeMS_4;
	// System.String PlayFab.ClientModels.MatchmakeResult::ServerHostname
	String_t* ___ServerHostname_5;
	// System.String PlayFab.ClientModels.MatchmakeResult::ServerIPV4Address
	String_t* ___ServerIPV4Address_6;
	// System.String PlayFab.ClientModels.MatchmakeResult::ServerIPV6Address
	String_t* ___ServerIPV6Address_7;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.MatchmakeResult::ServerPort
	Nullable_1_t378540539  ___ServerPort_8;
	// System.String PlayFab.ClientModels.MatchmakeResult::ServerPublicDNSName
	String_t* ___ServerPublicDNSName_9;
	// System.Nullable`1<PlayFab.ClientModels.MatchmakeStatus> PlayFab.ClientModels.MatchmakeResult::Status
	Nullable_1_t2939709286  ___Status_10;
	// System.String PlayFab.ClientModels.MatchmakeResult::Ticket
	String_t* ___Ticket_11;

public:
	inline static int32_t get_offset_of_Expires_2() { return static_cast<int32_t>(offsetof(MatchmakeResult_t2030730580, ___Expires_2)); }
	inline String_t* get_Expires_2() const { return ___Expires_2; }
	inline String_t** get_address_of_Expires_2() { return &___Expires_2; }
	inline void set_Expires_2(String_t* value)
	{
		___Expires_2 = value;
		Il2CppCodeGenWriteBarrier((&___Expires_2), value);
	}

	inline static int32_t get_offset_of_LobbyID_3() { return static_cast<int32_t>(offsetof(MatchmakeResult_t2030730580, ___LobbyID_3)); }
	inline String_t* get_LobbyID_3() const { return ___LobbyID_3; }
	inline String_t** get_address_of_LobbyID_3() { return &___LobbyID_3; }
	inline void set_LobbyID_3(String_t* value)
	{
		___LobbyID_3 = value;
		Il2CppCodeGenWriteBarrier((&___LobbyID_3), value);
	}

	inline static int32_t get_offset_of_PollWaitTimeMS_4() { return static_cast<int32_t>(offsetof(MatchmakeResult_t2030730580, ___PollWaitTimeMS_4)); }
	inline Nullable_1_t378540539  get_PollWaitTimeMS_4() const { return ___PollWaitTimeMS_4; }
	inline Nullable_1_t378540539 * get_address_of_PollWaitTimeMS_4() { return &___PollWaitTimeMS_4; }
	inline void set_PollWaitTimeMS_4(Nullable_1_t378540539  value)
	{
		___PollWaitTimeMS_4 = value;
	}

	inline static int32_t get_offset_of_ServerHostname_5() { return static_cast<int32_t>(offsetof(MatchmakeResult_t2030730580, ___ServerHostname_5)); }
	inline String_t* get_ServerHostname_5() const { return ___ServerHostname_5; }
	inline String_t** get_address_of_ServerHostname_5() { return &___ServerHostname_5; }
	inline void set_ServerHostname_5(String_t* value)
	{
		___ServerHostname_5 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostname_5), value);
	}

	inline static int32_t get_offset_of_ServerIPV4Address_6() { return static_cast<int32_t>(offsetof(MatchmakeResult_t2030730580, ___ServerIPV4Address_6)); }
	inline String_t* get_ServerIPV4Address_6() const { return ___ServerIPV4Address_6; }
	inline String_t** get_address_of_ServerIPV4Address_6() { return &___ServerIPV4Address_6; }
	inline void set_ServerIPV4Address_6(String_t* value)
	{
		___ServerIPV4Address_6 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV4Address_6), value);
	}

	inline static int32_t get_offset_of_ServerIPV6Address_7() { return static_cast<int32_t>(offsetof(MatchmakeResult_t2030730580, ___ServerIPV6Address_7)); }
	inline String_t* get_ServerIPV6Address_7() const { return ___ServerIPV6Address_7; }
	inline String_t** get_address_of_ServerIPV6Address_7() { return &___ServerIPV6Address_7; }
	inline void set_ServerIPV6Address_7(String_t* value)
	{
		___ServerIPV6Address_7 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV6Address_7), value);
	}

	inline static int32_t get_offset_of_ServerPort_8() { return static_cast<int32_t>(offsetof(MatchmakeResult_t2030730580, ___ServerPort_8)); }
	inline Nullable_1_t378540539  get_ServerPort_8() const { return ___ServerPort_8; }
	inline Nullable_1_t378540539 * get_address_of_ServerPort_8() { return &___ServerPort_8; }
	inline void set_ServerPort_8(Nullable_1_t378540539  value)
	{
		___ServerPort_8 = value;
	}

	inline static int32_t get_offset_of_ServerPublicDNSName_9() { return static_cast<int32_t>(offsetof(MatchmakeResult_t2030730580, ___ServerPublicDNSName_9)); }
	inline String_t* get_ServerPublicDNSName_9() const { return ___ServerPublicDNSName_9; }
	inline String_t** get_address_of_ServerPublicDNSName_9() { return &___ServerPublicDNSName_9; }
	inline void set_ServerPublicDNSName_9(String_t* value)
	{
		___ServerPublicDNSName_9 = value;
		Il2CppCodeGenWriteBarrier((&___ServerPublicDNSName_9), value);
	}

	inline static int32_t get_offset_of_Status_10() { return static_cast<int32_t>(offsetof(MatchmakeResult_t2030730580, ___Status_10)); }
	inline Nullable_1_t2939709286  get_Status_10() const { return ___Status_10; }
	inline Nullable_1_t2939709286 * get_address_of_Status_10() { return &___Status_10; }
	inline void set_Status_10(Nullable_1_t2939709286  value)
	{
		___Status_10 = value;
	}

	inline static int32_t get_offset_of_Ticket_11() { return static_cast<int32_t>(offsetof(MatchmakeResult_t2030730580, ___Ticket_11)); }
	inline String_t* get_Ticket_11() const { return ___Ticket_11; }
	inline String_t** get_address_of_Ticket_11() { return &___Ticket_11; }
	inline void set_Ticket_11(String_t* value)
	{
		___Ticket_11 = value;
		Il2CppCodeGenWriteBarrier((&___Ticket_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHMAKERESULT_T2030730580_H
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
#ifndef ITEMINSTANCE_T3721622769_H
#define ITEMINSTANCE_T3721622769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ItemInstance
struct  ItemInstance_t3721622769  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.ItemInstance::Annotation
	String_t* ___Annotation_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.ItemInstance::BundleContents
	List_1_t3319525431 * ___BundleContents_1;
	// System.String PlayFab.ClientModels.ItemInstance::BundleParent
	String_t* ___BundleParent_2;
	// System.String PlayFab.ClientModels.ItemInstance::CatalogVersion
	String_t* ___CatalogVersion_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ItemInstance::CustomData
	Dictionary_2_t1632706988 * ___CustomData_4;
	// System.String PlayFab.ClientModels.ItemInstance::DisplayName
	String_t* ___DisplayName_5;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.ItemInstance::Expiration
	Nullable_1_t1166124571  ___Expiration_6;
	// System.String PlayFab.ClientModels.ItemInstance::ItemClass
	String_t* ___ItemClass_7;
	// System.String PlayFab.ClientModels.ItemInstance::ItemId
	String_t* ___ItemId_8;
	// System.String PlayFab.ClientModels.ItemInstance::ItemInstanceId
	String_t* ___ItemInstanceId_9;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.ItemInstance::PurchaseDate
	Nullable_1_t1166124571  ___PurchaseDate_10;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.ItemInstance::RemainingUses
	Nullable_1_t378540539  ___RemainingUses_11;
	// System.String PlayFab.ClientModels.ItemInstance::UnitCurrency
	String_t* ___UnitCurrency_12;
	// System.UInt32 PlayFab.ClientModels.ItemInstance::UnitPrice
	uint32_t ___UnitPrice_13;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.ItemInstance::UsesIncrementedBy
	Nullable_1_t378540539  ___UsesIncrementedBy_14;

public:
	inline static int32_t get_offset_of_Annotation_0() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___Annotation_0)); }
	inline String_t* get_Annotation_0() const { return ___Annotation_0; }
	inline String_t** get_address_of_Annotation_0() { return &___Annotation_0; }
	inline void set_Annotation_0(String_t* value)
	{
		___Annotation_0 = value;
		Il2CppCodeGenWriteBarrier((&___Annotation_0), value);
	}

	inline static int32_t get_offset_of_BundleContents_1() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___BundleContents_1)); }
	inline List_1_t3319525431 * get_BundleContents_1() const { return ___BundleContents_1; }
	inline List_1_t3319525431 ** get_address_of_BundleContents_1() { return &___BundleContents_1; }
	inline void set_BundleContents_1(List_1_t3319525431 * value)
	{
		___BundleContents_1 = value;
		Il2CppCodeGenWriteBarrier((&___BundleContents_1), value);
	}

	inline static int32_t get_offset_of_BundleParent_2() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___BundleParent_2)); }
	inline String_t* get_BundleParent_2() const { return ___BundleParent_2; }
	inline String_t** get_address_of_BundleParent_2() { return &___BundleParent_2; }
	inline void set_BundleParent_2(String_t* value)
	{
		___BundleParent_2 = value;
		Il2CppCodeGenWriteBarrier((&___BundleParent_2), value);
	}

	inline static int32_t get_offset_of_CatalogVersion_3() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___CatalogVersion_3)); }
	inline String_t* get_CatalogVersion_3() const { return ___CatalogVersion_3; }
	inline String_t** get_address_of_CatalogVersion_3() { return &___CatalogVersion_3; }
	inline void set_CatalogVersion_3(String_t* value)
	{
		___CatalogVersion_3 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_3), value);
	}

	inline static int32_t get_offset_of_CustomData_4() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___CustomData_4)); }
	inline Dictionary_2_t1632706988 * get_CustomData_4() const { return ___CustomData_4; }
	inline Dictionary_2_t1632706988 ** get_address_of_CustomData_4() { return &___CustomData_4; }
	inline void set_CustomData_4(Dictionary_2_t1632706988 * value)
	{
		___CustomData_4 = value;
		Il2CppCodeGenWriteBarrier((&___CustomData_4), value);
	}

	inline static int32_t get_offset_of_DisplayName_5() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___DisplayName_5)); }
	inline String_t* get_DisplayName_5() const { return ___DisplayName_5; }
	inline String_t** get_address_of_DisplayName_5() { return &___DisplayName_5; }
	inline void set_DisplayName_5(String_t* value)
	{
		___DisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_5), value);
	}

	inline static int32_t get_offset_of_Expiration_6() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___Expiration_6)); }
	inline Nullable_1_t1166124571  get_Expiration_6() const { return ___Expiration_6; }
	inline Nullable_1_t1166124571 * get_address_of_Expiration_6() { return &___Expiration_6; }
	inline void set_Expiration_6(Nullable_1_t1166124571  value)
	{
		___Expiration_6 = value;
	}

	inline static int32_t get_offset_of_ItemClass_7() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___ItemClass_7)); }
	inline String_t* get_ItemClass_7() const { return ___ItemClass_7; }
	inline String_t** get_address_of_ItemClass_7() { return &___ItemClass_7; }
	inline void set_ItemClass_7(String_t* value)
	{
		___ItemClass_7 = value;
		Il2CppCodeGenWriteBarrier((&___ItemClass_7), value);
	}

	inline static int32_t get_offset_of_ItemId_8() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___ItemId_8)); }
	inline String_t* get_ItemId_8() const { return ___ItemId_8; }
	inline String_t** get_address_of_ItemId_8() { return &___ItemId_8; }
	inline void set_ItemId_8(String_t* value)
	{
		___ItemId_8 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_8), value);
	}

	inline static int32_t get_offset_of_ItemInstanceId_9() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___ItemInstanceId_9)); }
	inline String_t* get_ItemInstanceId_9() const { return ___ItemInstanceId_9; }
	inline String_t** get_address_of_ItemInstanceId_9() { return &___ItemInstanceId_9; }
	inline void set_ItemInstanceId_9(String_t* value)
	{
		___ItemInstanceId_9 = value;
		Il2CppCodeGenWriteBarrier((&___ItemInstanceId_9), value);
	}

	inline static int32_t get_offset_of_PurchaseDate_10() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___PurchaseDate_10)); }
	inline Nullable_1_t1166124571  get_PurchaseDate_10() const { return ___PurchaseDate_10; }
	inline Nullable_1_t1166124571 * get_address_of_PurchaseDate_10() { return &___PurchaseDate_10; }
	inline void set_PurchaseDate_10(Nullable_1_t1166124571  value)
	{
		___PurchaseDate_10 = value;
	}

	inline static int32_t get_offset_of_RemainingUses_11() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___RemainingUses_11)); }
	inline Nullable_1_t378540539  get_RemainingUses_11() const { return ___RemainingUses_11; }
	inline Nullable_1_t378540539 * get_address_of_RemainingUses_11() { return &___RemainingUses_11; }
	inline void set_RemainingUses_11(Nullable_1_t378540539  value)
	{
		___RemainingUses_11 = value;
	}

	inline static int32_t get_offset_of_UnitCurrency_12() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___UnitCurrency_12)); }
	inline String_t* get_UnitCurrency_12() const { return ___UnitCurrency_12; }
	inline String_t** get_address_of_UnitCurrency_12() { return &___UnitCurrency_12; }
	inline void set_UnitCurrency_12(String_t* value)
	{
		___UnitCurrency_12 = value;
		Il2CppCodeGenWriteBarrier((&___UnitCurrency_12), value);
	}

	inline static int32_t get_offset_of_UnitPrice_13() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___UnitPrice_13)); }
	inline uint32_t get_UnitPrice_13() const { return ___UnitPrice_13; }
	inline uint32_t* get_address_of_UnitPrice_13() { return &___UnitPrice_13; }
	inline void set_UnitPrice_13(uint32_t value)
	{
		___UnitPrice_13 = value;
	}

	inline static int32_t get_offset_of_UsesIncrementedBy_14() { return static_cast<int32_t>(offsetof(ItemInstance_t3721622769, ___UsesIncrementedBy_14)); }
	inline Nullable_1_t378540539  get_UsesIncrementedBy_14() const { return ___UsesIncrementedBy_14; }
	inline Nullable_1_t378540539 * get_address_of_UsesIncrementedBy_14() { return &___UsesIncrementedBy_14; }
	inline void set_UsesIncrementedBy_14(Nullable_1_t378540539  value)
	{
		___UsesIncrementedBy_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITEMINSTANCE_T3721622769_H
#ifndef LOGINRESULT_T1741360290_H
#define LOGINRESULT_T1741360290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.LoginResult
struct  LoginResult_t1741360290  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.ClientModels.EntityTokenResponse PlayFab.ClientModels.LoginResult::EntityToken
	EntityTokenResponse_t1814794135 * ___EntityToken_2;
	// PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload PlayFab.ClientModels.LoginResult::InfoResultPayload
	GetPlayerCombinedInfoResultPayload_t2789378405 * ___InfoResultPayload_3;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.LoginResult::LastLoginTime
	Nullable_1_t1166124571  ___LastLoginTime_4;
	// System.Boolean PlayFab.ClientModels.LoginResult::NewlyCreated
	bool ___NewlyCreated_5;
	// System.String PlayFab.ClientModels.LoginResult::PlayFabId
	String_t* ___PlayFabId_6;
	// System.String PlayFab.ClientModels.LoginResult::SessionTicket
	String_t* ___SessionTicket_7;
	// PlayFab.ClientModels.UserSettings PlayFab.ClientModels.LoginResult::SettingsForUser
	UserSettings_t3054366223 * ___SettingsForUser_8;

public:
	inline static int32_t get_offset_of_EntityToken_2() { return static_cast<int32_t>(offsetof(LoginResult_t1741360290, ___EntityToken_2)); }
	inline EntityTokenResponse_t1814794135 * get_EntityToken_2() const { return ___EntityToken_2; }
	inline EntityTokenResponse_t1814794135 ** get_address_of_EntityToken_2() { return &___EntityToken_2; }
	inline void set_EntityToken_2(EntityTokenResponse_t1814794135 * value)
	{
		___EntityToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___EntityToken_2), value);
	}

	inline static int32_t get_offset_of_InfoResultPayload_3() { return static_cast<int32_t>(offsetof(LoginResult_t1741360290, ___InfoResultPayload_3)); }
	inline GetPlayerCombinedInfoResultPayload_t2789378405 * get_InfoResultPayload_3() const { return ___InfoResultPayload_3; }
	inline GetPlayerCombinedInfoResultPayload_t2789378405 ** get_address_of_InfoResultPayload_3() { return &___InfoResultPayload_3; }
	inline void set_InfoResultPayload_3(GetPlayerCombinedInfoResultPayload_t2789378405 * value)
	{
		___InfoResultPayload_3 = value;
		Il2CppCodeGenWriteBarrier((&___InfoResultPayload_3), value);
	}

	inline static int32_t get_offset_of_LastLoginTime_4() { return static_cast<int32_t>(offsetof(LoginResult_t1741360290, ___LastLoginTime_4)); }
	inline Nullable_1_t1166124571  get_LastLoginTime_4() const { return ___LastLoginTime_4; }
	inline Nullable_1_t1166124571 * get_address_of_LastLoginTime_4() { return &___LastLoginTime_4; }
	inline void set_LastLoginTime_4(Nullable_1_t1166124571  value)
	{
		___LastLoginTime_4 = value;
	}

	inline static int32_t get_offset_of_NewlyCreated_5() { return static_cast<int32_t>(offsetof(LoginResult_t1741360290, ___NewlyCreated_5)); }
	inline bool get_NewlyCreated_5() const { return ___NewlyCreated_5; }
	inline bool* get_address_of_NewlyCreated_5() { return &___NewlyCreated_5; }
	inline void set_NewlyCreated_5(bool value)
	{
		___NewlyCreated_5 = value;
	}

	inline static int32_t get_offset_of_PlayFabId_6() { return static_cast<int32_t>(offsetof(LoginResult_t1741360290, ___PlayFabId_6)); }
	inline String_t* get_PlayFabId_6() const { return ___PlayFabId_6; }
	inline String_t** get_address_of_PlayFabId_6() { return &___PlayFabId_6; }
	inline void set_PlayFabId_6(String_t* value)
	{
		___PlayFabId_6 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_6), value);
	}

	inline static int32_t get_offset_of_SessionTicket_7() { return static_cast<int32_t>(offsetof(LoginResult_t1741360290, ___SessionTicket_7)); }
	inline String_t* get_SessionTicket_7() const { return ___SessionTicket_7; }
	inline String_t** get_address_of_SessionTicket_7() { return &___SessionTicket_7; }
	inline void set_SessionTicket_7(String_t* value)
	{
		___SessionTicket_7 = value;
		Il2CppCodeGenWriteBarrier((&___SessionTicket_7), value);
	}

	inline static int32_t get_offset_of_SettingsForUser_8() { return static_cast<int32_t>(offsetof(LoginResult_t1741360290, ___SettingsForUser_8)); }
	inline UserSettings_t3054366223 * get_SettingsForUser_8() const { return ___SettingsForUser_8; }
	inline UserSettings_t3054366223 ** get_address_of_SettingsForUser_8() { return &___SettingsForUser_8; }
	inline void set_SettingsForUser_8(UserSettings_t3054366223 * value)
	{
		___SettingsForUser_8 = value;
		Il2CppCodeGenWriteBarrier((&___SettingsForUser_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINRESULT_T1741360290_H
#ifndef MEMBERSHIPMODEL_T1372399326_H
#define MEMBERSHIPMODEL_T1372399326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.MembershipModel
struct  MembershipModel_t1372399326  : public RuntimeObject
{
public:
	// System.Boolean PlayFab.ClientModels.MembershipModel::IsActive
	bool ___IsActive_0;
	// System.DateTime PlayFab.ClientModels.MembershipModel::MembershipExpiration
	DateTime_t3738529785  ___MembershipExpiration_1;
	// System.String PlayFab.ClientModels.MembershipModel::MembershipId
	String_t* ___MembershipId_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.MembershipModel::OverrideExpiration
	Nullable_1_t1166124571  ___OverrideExpiration_3;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.SubscriptionModel> PlayFab.ClientModels.MembershipModel::Subscriptions
	List_1_t2010074131 * ___Subscriptions_4;

public:
	inline static int32_t get_offset_of_IsActive_0() { return static_cast<int32_t>(offsetof(MembershipModel_t1372399326, ___IsActive_0)); }
	inline bool get_IsActive_0() const { return ___IsActive_0; }
	inline bool* get_address_of_IsActive_0() { return &___IsActive_0; }
	inline void set_IsActive_0(bool value)
	{
		___IsActive_0 = value;
	}

	inline static int32_t get_offset_of_MembershipExpiration_1() { return static_cast<int32_t>(offsetof(MembershipModel_t1372399326, ___MembershipExpiration_1)); }
	inline DateTime_t3738529785  get_MembershipExpiration_1() const { return ___MembershipExpiration_1; }
	inline DateTime_t3738529785 * get_address_of_MembershipExpiration_1() { return &___MembershipExpiration_1; }
	inline void set_MembershipExpiration_1(DateTime_t3738529785  value)
	{
		___MembershipExpiration_1 = value;
	}

	inline static int32_t get_offset_of_MembershipId_2() { return static_cast<int32_t>(offsetof(MembershipModel_t1372399326, ___MembershipId_2)); }
	inline String_t* get_MembershipId_2() const { return ___MembershipId_2; }
	inline String_t** get_address_of_MembershipId_2() { return &___MembershipId_2; }
	inline void set_MembershipId_2(String_t* value)
	{
		___MembershipId_2 = value;
		Il2CppCodeGenWriteBarrier((&___MembershipId_2), value);
	}

	inline static int32_t get_offset_of_OverrideExpiration_3() { return static_cast<int32_t>(offsetof(MembershipModel_t1372399326, ___OverrideExpiration_3)); }
	inline Nullable_1_t1166124571  get_OverrideExpiration_3() const { return ___OverrideExpiration_3; }
	inline Nullable_1_t1166124571 * get_address_of_OverrideExpiration_3() { return &___OverrideExpiration_3; }
	inline void set_OverrideExpiration_3(Nullable_1_t1166124571  value)
	{
		___OverrideExpiration_3 = value;
	}

	inline static int32_t get_offset_of_Subscriptions_4() { return static_cast<int32_t>(offsetof(MembershipModel_t1372399326, ___Subscriptions_4)); }
	inline List_1_t2010074131 * get_Subscriptions_4() const { return ___Subscriptions_4; }
	inline List_1_t2010074131 ** get_address_of_Subscriptions_4() { return &___Subscriptions_4; }
	inline void set_Subscriptions_4(List_1_t2010074131 * value)
	{
		___Subscriptions_4 = value;
		Il2CppCodeGenWriteBarrier((&___Subscriptions_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERSHIPMODEL_T1372399326_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3800 = { sizeof (GetPlayFabIDsFromFacebookInstantGamesIdsRequest_t4247990660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3800[1] = 
{
	GetPlayFabIDsFromFacebookInstantGamesIdsRequest_t4247990660::get_offset_of_FacebookInstantGamesIds_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3801 = { sizeof (GetPlayFabIDsFromFacebookInstantGamesIdsResult_t916575155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3801[1] = 
{
	GetPlayFabIDsFromFacebookInstantGamesIdsResult_t916575155::get_offset_of_Data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3802 = { sizeof (GetPlayFabIDsFromGameCenterIDsRequest_t2496119787), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3802[1] = 
{
	GetPlayFabIDsFromGameCenterIDsRequest_t2496119787::get_offset_of_GameCenterIDs_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3803 = { sizeof (GetPlayFabIDsFromGameCenterIDsResult_t1686160360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3803[1] = 
{
	GetPlayFabIDsFromGameCenterIDsResult_t1686160360::get_offset_of_Data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3804 = { sizeof (GetPlayFabIDsFromGenericIDsRequest_t2483038202), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3804[1] = 
{
	GetPlayFabIDsFromGenericIDsRequest_t2483038202::get_offset_of_GenericIDs_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3805 = { sizeof (GetPlayFabIDsFromGenericIDsResult_t3007683901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3805[1] = 
{
	GetPlayFabIDsFromGenericIDsResult_t3007683901::get_offset_of_Data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3806 = { sizeof (GetPlayFabIDsFromGoogleIDsRequest_t3293540603), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3806[1] = 
{
	GetPlayFabIDsFromGoogleIDsRequest_t3293540603::get_offset_of_GoogleIDs_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3807 = { sizeof (GetPlayFabIDsFromGoogleIDsResult_t2870112510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3807[1] = 
{
	GetPlayFabIDsFromGoogleIDsResult_t2870112510::get_offset_of_Data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3808 = { sizeof (GetPlayFabIDsFromKongregateIDsRequest_t4167703349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3808[1] = 
{
	GetPlayFabIDsFromKongregateIDsRequest_t4167703349::get_offset_of_KongregateIDs_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3809 = { sizeof (GetPlayFabIDsFromKongregateIDsResult_t296950584), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3809[1] = 
{
	GetPlayFabIDsFromKongregateIDsResult_t296950584::get_offset_of_Data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3810 = { sizeof (GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_t4218663982), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3810[1] = 
{
	GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_t4218663982::get_offset_of_NintendoSwitchDeviceIds_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3811 = { sizeof (GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_t2866495379), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3811[1] = 
{
	GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_t2866495379::get_offset_of_Data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3812 = { sizeof (GetPlayFabIDsFromSteamIDsRequest_t3885282746), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3812[1] = 
{
	GetPlayFabIDsFromSteamIDsRequest_t3885282746::get_offset_of_SteamStringIDs_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3813 = { sizeof (GetPlayFabIDsFromSteamIDsResult_t1781009775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3813[1] = 
{
	GetPlayFabIDsFromSteamIDsResult_t1781009775::get_offset_of_Data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3814 = { sizeof (GetPlayFabIDsFromTwitchIDsRequest_t99285710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3814[1] = 
{
	GetPlayFabIDsFromTwitchIDsRequest_t99285710::get_offset_of_TwitchIds_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3815 = { sizeof (GetPlayFabIDsFromTwitchIDsResult_t535558863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3815[1] = 
{
	GetPlayFabIDsFromTwitchIDsResult_t535558863::get_offset_of_Data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3816 = { sizeof (GetPublisherDataRequest_t3131466813), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3816[1] = 
{
	GetPublisherDataRequest_t3131466813::get_offset_of_Keys_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3817 = { sizeof (GetPublisherDataResult_t4085748858), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3817[1] = 
{
	GetPublisherDataResult_t4085748858::get_offset_of_Data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3818 = { sizeof (GetPurchaseRequest_t2379666455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3818[1] = 
{
	GetPurchaseRequest_t2379666455::get_offset_of_OrderId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3819 = { sizeof (GetPurchaseResult_t3451093745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3819[5] = 
{
	GetPurchaseResult_t3451093745::get_offset_of_OrderId_2(),
	GetPurchaseResult_t3451093745::get_offset_of_PaymentProvider_3(),
	GetPurchaseResult_t3451093745::get_offset_of_PurchaseDate_4(),
	GetPurchaseResult_t3451093745::get_offset_of_TransactionId_5(),
	GetPurchaseResult_t3451093745::get_offset_of_TransactionStatus_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3820 = { sizeof (GetSegmentResult_t2447221534), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3820[3] = 
{
	GetSegmentResult_t2447221534::get_offset_of_ABTestParent_2(),
	GetSegmentResult_t2447221534::get_offset_of_Id_3(),
	GetSegmentResult_t2447221534::get_offset_of_Name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3821 = { sizeof (GetSharedGroupDataRequest_t1368073665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3821[3] = 
{
	GetSharedGroupDataRequest_t1368073665::get_offset_of_GetMembers_0(),
	GetSharedGroupDataRequest_t1368073665::get_offset_of_Keys_1(),
	GetSharedGroupDataRequest_t1368073665::get_offset_of_SharedGroupId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3822 = { sizeof (GetSharedGroupDataResult_t1785210302), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3822[2] = 
{
	GetSharedGroupDataResult_t1785210302::get_offset_of_Data_2(),
	GetSharedGroupDataResult_t1785210302::get_offset_of_Members_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3823 = { sizeof (GetStoreItemsRequest_t1044850080), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3823[2] = 
{
	GetStoreItemsRequest_t1044850080::get_offset_of_CatalogVersion_0(),
	GetStoreItemsRequest_t1044850080::get_offset_of_StoreId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3824 = { sizeof (GetStoreItemsResult_t1048173527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3824[5] = 
{
	GetStoreItemsResult_t1048173527::get_offset_of_CatalogVersion_2(),
	GetStoreItemsResult_t1048173527::get_offset_of_MarketingData_3(),
	GetStoreItemsResult_t1048173527::get_offset_of_Source_4(),
	GetStoreItemsResult_t1048173527::get_offset_of_Store_5(),
	GetStoreItemsResult_t1048173527::get_offset_of_StoreId_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3825 = { sizeof (GetTimeRequest_t1013677983), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3826 = { sizeof (GetTimeResult_t426877017), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3826[1] = 
{
	GetTimeResult_t426877017::get_offset_of_Time_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3827 = { sizeof (GetTitleDataRequest_t1690973210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3827[1] = 
{
	GetTitleDataRequest_t1690973210::get_offset_of_Keys_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3828 = { sizeof (GetTitleDataResult_t2255589867), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3828[1] = 
{
	GetTitleDataResult_t2255589867::get_offset_of_Data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3829 = { sizeof (GetTitleNewsRequest_t961505164), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3829[1] = 
{
	GetTitleNewsRequest_t961505164::get_offset_of_Count_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3830 = { sizeof (GetTitleNewsResult_t2470125701), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3830[1] = 
{
	GetTitleNewsResult_t2470125701::get_offset_of_News_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3831 = { sizeof (GetTitlePublicKeyRequest_t2540155591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3831[2] = 
{
	GetTitlePublicKeyRequest_t2540155591::get_offset_of_TitleId_0(),
	GetTitlePublicKeyRequest_t2540155591::get_offset_of_TitleSharedSecret_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3832 = { sizeof (GetTitlePublicKeyResult_t501477709), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3832[1] = 
{
	GetTitlePublicKeyResult_t501477709::get_offset_of_RSAPublicKey_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3833 = { sizeof (GetTradeStatusRequest_t4121937612), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3833[2] = 
{
	GetTradeStatusRequest_t4121937612::get_offset_of_OfferingPlayerId_0(),
	GetTradeStatusRequest_t4121937612::get_offset_of_TradeId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3834 = { sizeof (GetTradeStatusResponse_t3727694106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3834[1] = 
{
	GetTradeStatusResponse_t3727694106::get_offset_of_Trade_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3835 = { sizeof (GetUserDataRequest_t3786552105), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3835[3] = 
{
	GetUserDataRequest_t3786552105::get_offset_of_IfChangedFromDataVersion_0(),
	GetUserDataRequest_t3786552105::get_offset_of_Keys_1(),
	GetUserDataRequest_t3786552105::get_offset_of_PlayFabId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3836 = { sizeof (GetUserDataResult_t3119786651), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3836[2] = 
{
	GetUserDataResult_t3119786651::get_offset_of_Data_2(),
	GetUserDataResult_t3119786651::get_offset_of_DataVersion_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3837 = { sizeof (GetUserInventoryRequest_t938586848), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3838 = { sizeof (GetUserInventoryResult_t4051075747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3838[3] = 
{
	GetUserInventoryResult_t4051075747::get_offset_of_Inventory_2(),
	GetUserInventoryResult_t4051075747::get_offset_of_VirtualCurrency_3(),
	GetUserInventoryResult_t4051075747::get_offset_of_VirtualCurrencyRechargeTimes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3839 = { sizeof (GetWindowsHelloChallengeRequest_t4137577037), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3839[2] = 
{
	GetWindowsHelloChallengeRequest_t4137577037::get_offset_of_PublicKeyHint_0(),
	GetWindowsHelloChallengeRequest_t4137577037::get_offset_of_TitleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3840 = { sizeof (GetWindowsHelloChallengeResponse_t2829443843), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3840[1] = 
{
	GetWindowsHelloChallengeResponse_t2829443843::get_offset_of_Challenge_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3841 = { sizeof (GooglePlayFabIdPair_t4035589282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3841[2] = 
{
	GooglePlayFabIdPair_t4035589282::get_offset_of_GoogleId_0(),
	GooglePlayFabIdPair_t4035589282::get_offset_of_PlayFabId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3842 = { sizeof (GrantCharacterToUserRequest_t2936922968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3842[3] = 
{
	GrantCharacterToUserRequest_t2936922968::get_offset_of_CatalogVersion_0(),
	GrantCharacterToUserRequest_t2936922968::get_offset_of_CharacterName_1(),
	GrantCharacterToUserRequest_t2936922968::get_offset_of_ItemId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3843 = { sizeof (GrantCharacterToUserResult_t2109757427), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3843[3] = 
{
	GrantCharacterToUserResult_t2109757427::get_offset_of_CharacterId_2(),
	GrantCharacterToUserResult_t2109757427::get_offset_of_CharacterType_3(),
	GrantCharacterToUserResult_t2109757427::get_offset_of_Result_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3844 = { sizeof (ItemInstance_t3721622769), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3844[15] = 
{
	ItemInstance_t3721622769::get_offset_of_Annotation_0(),
	ItemInstance_t3721622769::get_offset_of_BundleContents_1(),
	ItemInstance_t3721622769::get_offset_of_BundleParent_2(),
	ItemInstance_t3721622769::get_offset_of_CatalogVersion_3(),
	ItemInstance_t3721622769::get_offset_of_CustomData_4(),
	ItemInstance_t3721622769::get_offset_of_DisplayName_5(),
	ItemInstance_t3721622769::get_offset_of_Expiration_6(),
	ItemInstance_t3721622769::get_offset_of_ItemClass_7(),
	ItemInstance_t3721622769::get_offset_of_ItemId_8(),
	ItemInstance_t3721622769::get_offset_of_ItemInstanceId_9(),
	ItemInstance_t3721622769::get_offset_of_PurchaseDate_10(),
	ItemInstance_t3721622769::get_offset_of_RemainingUses_11(),
	ItemInstance_t3721622769::get_offset_of_UnitCurrency_12(),
	ItemInstance_t3721622769::get_offset_of_UnitPrice_13(),
	ItemInstance_t3721622769::get_offset_of_UsesIncrementedBy_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3845 = { sizeof (ItemPurchaseRequest_t2333686997), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3845[4] = 
{
	ItemPurchaseRequest_t2333686997::get_offset_of_Annotation_0(),
	ItemPurchaseRequest_t2333686997::get_offset_of_ItemId_1(),
	ItemPurchaseRequest_t2333686997::get_offset_of_Quantity_2(),
	ItemPurchaseRequest_t2333686997::get_offset_of_UpgradeFromItems_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3846 = { sizeof (KongregatePlayFabIdPair_t3490969040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3846[2] = 
{
	KongregatePlayFabIdPair_t3490969040::get_offset_of_KongregateId_0(),
	KongregatePlayFabIdPair_t3490969040::get_offset_of_PlayFabId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3847 = { sizeof (LinkAndroidDeviceIDRequest_t254733486), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3847[4] = 
{
	LinkAndroidDeviceIDRequest_t254733486::get_offset_of_AndroidDevice_0(),
	LinkAndroidDeviceIDRequest_t254733486::get_offset_of_AndroidDeviceId_1(),
	LinkAndroidDeviceIDRequest_t254733486::get_offset_of_ForceLink_2(),
	LinkAndroidDeviceIDRequest_t254733486::get_offset_of_OS_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3848 = { sizeof (LinkAndroidDeviceIDResult_t552766912), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3849 = { sizeof (LinkCustomIDRequest_t2139586330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3849[2] = 
{
	LinkCustomIDRequest_t2139586330::get_offset_of_CustomId_0(),
	LinkCustomIDRequest_t2139586330::get_offset_of_ForceLink_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3850 = { sizeof (LinkCustomIDResult_t139981749), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3851 = { sizeof (LinkedPlatformAccountModel_t2719432589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3851[4] = 
{
	LinkedPlatformAccountModel_t2719432589::get_offset_of_Email_0(),
	LinkedPlatformAccountModel_t2719432589::get_offset_of_Platform_1(),
	LinkedPlatformAccountModel_t2719432589::get_offset_of_PlatformUserId_2(),
	LinkedPlatformAccountModel_t2719432589::get_offset_of_Username_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3852 = { sizeof (LinkFacebookAccountRequest_t206724149), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3852[2] = 
{
	LinkFacebookAccountRequest_t206724149::get_offset_of_AccessToken_0(),
	LinkFacebookAccountRequest_t206724149::get_offset_of_ForceLink_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3853 = { sizeof (LinkFacebookAccountResult_t3882480540), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3854 = { sizeof (LinkFacebookInstantGamesIdRequest_t1645654384), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3854[2] = 
{
	LinkFacebookInstantGamesIdRequest_t1645654384::get_offset_of_FacebookInstantGamesSignature_0(),
	LinkFacebookInstantGamesIdRequest_t1645654384::get_offset_of_ForceLink_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3855 = { sizeof (LinkFacebookInstantGamesIdResult_t2079830387), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3856 = { sizeof (LinkGameCenterAccountRequest_t2735439760), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3856[2] = 
{
	LinkGameCenterAccountRequest_t2735439760::get_offset_of_ForceLink_0(),
	LinkGameCenterAccountRequest_t2735439760::get_offset_of_GameCenterId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3857 = { sizeof (LinkGameCenterAccountResult_t1522738593), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3858 = { sizeof (LinkGoogleAccountRequest_t1583516147), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3858[2] = 
{
	LinkGoogleAccountRequest_t1583516147::get_offset_of_ForceLink_0(),
	LinkGoogleAccountRequest_t1583516147::get_offset_of_ServerAuthCode_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3859 = { sizeof (LinkGoogleAccountResult_t1807689001), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3860 = { sizeof (LinkIOSDeviceIDRequest_t732156087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3860[4] = 
{
	LinkIOSDeviceIDRequest_t732156087::get_offset_of_DeviceId_0(),
	LinkIOSDeviceIDRequest_t732156087::get_offset_of_DeviceModel_1(),
	LinkIOSDeviceIDRequest_t732156087::get_offset_of_ForceLink_2(),
	LinkIOSDeviceIDRequest_t732156087::get_offset_of_OS_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3861 = { sizeof (LinkIOSDeviceIDResult_t3891870534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3862 = { sizeof (LinkKongregateAccountRequest_t2767208911), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3862[3] = 
{
	LinkKongregateAccountRequest_t2767208911::get_offset_of_AuthTicket_0(),
	LinkKongregateAccountRequest_t2767208911::get_offset_of_ForceLink_1(),
	LinkKongregateAccountRequest_t2767208911::get_offset_of_KongregateId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3863 = { sizeof (LinkKongregateAccountResult_t2275718960), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3864 = { sizeof (LinkNintendoSwitchDeviceIdRequest_t3301879768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3864[2] = 
{
	LinkNintendoSwitchDeviceIdRequest_t3301879768::get_offset_of_ForceLink_0(),
	LinkNintendoSwitchDeviceIdRequest_t3301879768::get_offset_of_NintendoSwitchDeviceId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3865 = { sizeof (LinkNintendoSwitchDeviceIdResult_t3730288605), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3866 = { sizeof (LinkSteamAccountRequest_t3315598358), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3866[2] = 
{
	LinkSteamAccountRequest_t3315598358::get_offset_of_ForceLink_0(),
	LinkSteamAccountRequest_t3315598358::get_offset_of_SteamTicket_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3867 = { sizeof (LinkSteamAccountResult_t2110373135), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3868 = { sizeof (LinkTwitchAccountRequest_t1241952066), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3868[2] = 
{
	LinkTwitchAccountRequest_t1241952066::get_offset_of_AccessToken_0(),
	LinkTwitchAccountRequest_t1241952066::get_offset_of_ForceLink_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3869 = { sizeof (LinkTwitchAccountResult_t4274966282), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3870 = { sizeof (LinkWindowsHelloAccountRequest_t2757452561), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3870[4] = 
{
	LinkWindowsHelloAccountRequest_t2757452561::get_offset_of_DeviceName_0(),
	LinkWindowsHelloAccountRequest_t2757452561::get_offset_of_ForceLink_1(),
	LinkWindowsHelloAccountRequest_t2757452561::get_offset_of_PublicKey_2(),
	LinkWindowsHelloAccountRequest_t2757452561::get_offset_of_UserName_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3871 = { sizeof (LinkWindowsHelloAccountResponse_t3319284420), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3872 = { sizeof (LinkXboxAccountRequest_t3732097738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3872[2] = 
{
	LinkXboxAccountRequest_t3732097738::get_offset_of_ForceLink_0(),
	LinkXboxAccountRequest_t3732097738::get_offset_of_XboxToken_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3873 = { sizeof (LinkXboxAccountResult_t175680237), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3874 = { sizeof (ListUsersCharactersRequest_t1477129616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3874[1] = 
{
	ListUsersCharactersRequest_t1477129616::get_offset_of_PlayFabId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3875 = { sizeof (ListUsersCharactersResult_t1440701948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3875[1] = 
{
	ListUsersCharactersResult_t1440701948::get_offset_of_Characters_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3876 = { sizeof (LocationModel_t3813501936), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3876[5] = 
{
	LocationModel_t3813501936::get_offset_of_City_0(),
	LocationModel_t3813501936::get_offset_of_ContinentCode_1(),
	LocationModel_t3813501936::get_offset_of_CountryCode_2(),
	LocationModel_t3813501936::get_offset_of_Latitude_3(),
	LocationModel_t3813501936::get_offset_of_Longitude_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3877 = { sizeof (LoginIdentityProvider_t1880618185)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3877[20] = 
{
	LoginIdentityProvider_t1880618185::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3878 = { sizeof (LoginResult_t1741360290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3878[7] = 
{
	LoginResult_t1741360290::get_offset_of_EntityToken_2(),
	LoginResult_t1741360290::get_offset_of_InfoResultPayload_3(),
	LoginResult_t1741360290::get_offset_of_LastLoginTime_4(),
	LoginResult_t1741360290::get_offset_of_NewlyCreated_5(),
	LoginResult_t1741360290::get_offset_of_PlayFabId_6(),
	LoginResult_t1741360290::get_offset_of_SessionTicket_7(),
	LoginResult_t1741360290::get_offset_of_SettingsForUser_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3879 = { sizeof (LoginWithAndroidDeviceIDRequest_t1269656532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3879[9] = 
{
	LoginWithAndroidDeviceIDRequest_t1269656532::get_offset_of_AndroidDevice_0(),
	LoginWithAndroidDeviceIDRequest_t1269656532::get_offset_of_AndroidDeviceId_1(),
	LoginWithAndroidDeviceIDRequest_t1269656532::get_offset_of_CreateAccount_2(),
	LoginWithAndroidDeviceIDRequest_t1269656532::get_offset_of_EncryptedRequest_3(),
	LoginWithAndroidDeviceIDRequest_t1269656532::get_offset_of_InfoRequestParameters_4(),
	LoginWithAndroidDeviceIDRequest_t1269656532::get_offset_of_LoginTitlePlayerAccountEntity_5(),
	LoginWithAndroidDeviceIDRequest_t1269656532::get_offset_of_OS_6(),
	LoginWithAndroidDeviceIDRequest_t1269656532::get_offset_of_PlayerSecret_7(),
	LoginWithAndroidDeviceIDRequest_t1269656532::get_offset_of_TitleId_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3880 = { sizeof (LoginWithCustomIDRequest_t176841994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3880[7] = 
{
	LoginWithCustomIDRequest_t176841994::get_offset_of_CreateAccount_0(),
	LoginWithCustomIDRequest_t176841994::get_offset_of_CustomId_1(),
	LoginWithCustomIDRequest_t176841994::get_offset_of_EncryptedRequest_2(),
	LoginWithCustomIDRequest_t176841994::get_offset_of_InfoRequestParameters_3(),
	LoginWithCustomIDRequest_t176841994::get_offset_of_LoginTitlePlayerAccountEntity_4(),
	LoginWithCustomIDRequest_t176841994::get_offset_of_PlayerSecret_5(),
	LoginWithCustomIDRequest_t176841994::get_offset_of_TitleId_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3881 = { sizeof (LoginWithEmailAddressRequest_t3424541161), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3881[5] = 
{
	LoginWithEmailAddressRequest_t3424541161::get_offset_of_Email_0(),
	LoginWithEmailAddressRequest_t3424541161::get_offset_of_InfoRequestParameters_1(),
	LoginWithEmailAddressRequest_t3424541161::get_offset_of_LoginTitlePlayerAccountEntity_2(),
	LoginWithEmailAddressRequest_t3424541161::get_offset_of_Password_3(),
	LoginWithEmailAddressRequest_t3424541161::get_offset_of_TitleId_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3882 = { sizeof (LoginWithFacebookInstantGamesIdRequest_t20822577), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3882[7] = 
{
	LoginWithFacebookInstantGamesIdRequest_t20822577::get_offset_of_CreateAccount_0(),
	LoginWithFacebookInstantGamesIdRequest_t20822577::get_offset_of_EncryptedRequest_1(),
	LoginWithFacebookInstantGamesIdRequest_t20822577::get_offset_of_FacebookInstantGamesSignature_2(),
	LoginWithFacebookInstantGamesIdRequest_t20822577::get_offset_of_InfoRequestParameters_3(),
	LoginWithFacebookInstantGamesIdRequest_t20822577::get_offset_of_LoginTitlePlayerAccountEntity_4(),
	LoginWithFacebookInstantGamesIdRequest_t20822577::get_offset_of_PlayerSecret_5(),
	LoginWithFacebookInstantGamesIdRequest_t20822577::get_offset_of_TitleId_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3883 = { sizeof (LoginWithFacebookRequest_t553021538), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3883[7] = 
{
	LoginWithFacebookRequest_t553021538::get_offset_of_AccessToken_0(),
	LoginWithFacebookRequest_t553021538::get_offset_of_CreateAccount_1(),
	LoginWithFacebookRequest_t553021538::get_offset_of_EncryptedRequest_2(),
	LoginWithFacebookRequest_t553021538::get_offset_of_InfoRequestParameters_3(),
	LoginWithFacebookRequest_t553021538::get_offset_of_LoginTitlePlayerAccountEntity_4(),
	LoginWithFacebookRequest_t553021538::get_offset_of_PlayerSecret_5(),
	LoginWithFacebookRequest_t553021538::get_offset_of_TitleId_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3884 = { sizeof (LoginWithGameCenterRequest_t195971591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3884[7] = 
{
	LoginWithGameCenterRequest_t195971591::get_offset_of_CreateAccount_0(),
	LoginWithGameCenterRequest_t195971591::get_offset_of_EncryptedRequest_1(),
	LoginWithGameCenterRequest_t195971591::get_offset_of_InfoRequestParameters_2(),
	LoginWithGameCenterRequest_t195971591::get_offset_of_LoginTitlePlayerAccountEntity_3(),
	LoginWithGameCenterRequest_t195971591::get_offset_of_PlayerId_4(),
	LoginWithGameCenterRequest_t195971591::get_offset_of_PlayerSecret_5(),
	LoginWithGameCenterRequest_t195971591::get_offset_of_TitleId_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3885 = { sizeof (LoginWithGoogleAccountRequest_t513675687), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3885[7] = 
{
	LoginWithGoogleAccountRequest_t513675687::get_offset_of_CreateAccount_0(),
	LoginWithGoogleAccountRequest_t513675687::get_offset_of_EncryptedRequest_1(),
	LoginWithGoogleAccountRequest_t513675687::get_offset_of_InfoRequestParameters_2(),
	LoginWithGoogleAccountRequest_t513675687::get_offset_of_LoginTitlePlayerAccountEntity_3(),
	LoginWithGoogleAccountRequest_t513675687::get_offset_of_PlayerSecret_4(),
	LoginWithGoogleAccountRequest_t513675687::get_offset_of_ServerAuthCode_5(),
	LoginWithGoogleAccountRequest_t513675687::get_offset_of_TitleId_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3886 = { sizeof (LoginWithIOSDeviceIDRequest_t1104678395), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3886[9] = 
{
	LoginWithIOSDeviceIDRequest_t1104678395::get_offset_of_CreateAccount_0(),
	LoginWithIOSDeviceIDRequest_t1104678395::get_offset_of_DeviceId_1(),
	LoginWithIOSDeviceIDRequest_t1104678395::get_offset_of_DeviceModel_2(),
	LoginWithIOSDeviceIDRequest_t1104678395::get_offset_of_EncryptedRequest_3(),
	LoginWithIOSDeviceIDRequest_t1104678395::get_offset_of_InfoRequestParameters_4(),
	LoginWithIOSDeviceIDRequest_t1104678395::get_offset_of_LoginTitlePlayerAccountEntity_5(),
	LoginWithIOSDeviceIDRequest_t1104678395::get_offset_of_OS_6(),
	LoginWithIOSDeviceIDRequest_t1104678395::get_offset_of_PlayerSecret_7(),
	LoginWithIOSDeviceIDRequest_t1104678395::get_offset_of_TitleId_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3887 = { sizeof (LoginWithKongregateRequest_t2996684931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3887[8] = 
{
	LoginWithKongregateRequest_t2996684931::get_offset_of_AuthTicket_0(),
	LoginWithKongregateRequest_t2996684931::get_offset_of_CreateAccount_1(),
	LoginWithKongregateRequest_t2996684931::get_offset_of_EncryptedRequest_2(),
	LoginWithKongregateRequest_t2996684931::get_offset_of_InfoRequestParameters_3(),
	LoginWithKongregateRequest_t2996684931::get_offset_of_KongregateId_4(),
	LoginWithKongregateRequest_t2996684931::get_offset_of_LoginTitlePlayerAccountEntity_5(),
	LoginWithKongregateRequest_t2996684931::get_offset_of_PlayerSecret_6(),
	LoginWithKongregateRequest_t2996684931::get_offset_of_TitleId_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3888 = { sizeof (LoginWithNintendoSwitchDeviceIdRequest_t4205102542), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3888[7] = 
{
	LoginWithNintendoSwitchDeviceIdRequest_t4205102542::get_offset_of_CreateAccount_0(),
	LoginWithNintendoSwitchDeviceIdRequest_t4205102542::get_offset_of_EncryptedRequest_1(),
	LoginWithNintendoSwitchDeviceIdRequest_t4205102542::get_offset_of_InfoRequestParameters_2(),
	LoginWithNintendoSwitchDeviceIdRequest_t4205102542::get_offset_of_LoginTitlePlayerAccountEntity_3(),
	LoginWithNintendoSwitchDeviceIdRequest_t4205102542::get_offset_of_NintendoSwitchDeviceId_4(),
	LoginWithNintendoSwitchDeviceIdRequest_t4205102542::get_offset_of_PlayerSecret_5(),
	LoginWithNintendoSwitchDeviceIdRequest_t4205102542::get_offset_of_TitleId_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3889 = { sizeof (LoginWithPlayFabRequest_t29234253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3889[5] = 
{
	LoginWithPlayFabRequest_t29234253::get_offset_of_InfoRequestParameters_0(),
	LoginWithPlayFabRequest_t29234253::get_offset_of_LoginTitlePlayerAccountEntity_1(),
	LoginWithPlayFabRequest_t29234253::get_offset_of_Password_2(),
	LoginWithPlayFabRequest_t29234253::get_offset_of_TitleId_3(),
	LoginWithPlayFabRequest_t29234253::get_offset_of_Username_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3890 = { sizeof (LoginWithSteamRequest_t1168349975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3890[7] = 
{
	LoginWithSteamRequest_t1168349975::get_offset_of_CreateAccount_0(),
	LoginWithSteamRequest_t1168349975::get_offset_of_EncryptedRequest_1(),
	LoginWithSteamRequest_t1168349975::get_offset_of_InfoRequestParameters_2(),
	LoginWithSteamRequest_t1168349975::get_offset_of_LoginTitlePlayerAccountEntity_3(),
	LoginWithSteamRequest_t1168349975::get_offset_of_PlayerSecret_4(),
	LoginWithSteamRequest_t1168349975::get_offset_of_SteamTicket_5(),
	LoginWithSteamRequest_t1168349975::get_offset_of_TitleId_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3891 = { sizeof (LoginWithTwitchRequest_t1822909188), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3891[7] = 
{
	LoginWithTwitchRequest_t1822909188::get_offset_of_AccessToken_0(),
	LoginWithTwitchRequest_t1822909188::get_offset_of_CreateAccount_1(),
	LoginWithTwitchRequest_t1822909188::get_offset_of_EncryptedRequest_2(),
	LoginWithTwitchRequest_t1822909188::get_offset_of_InfoRequestParameters_3(),
	LoginWithTwitchRequest_t1822909188::get_offset_of_LoginTitlePlayerAccountEntity_4(),
	LoginWithTwitchRequest_t1822909188::get_offset_of_PlayerSecret_5(),
	LoginWithTwitchRequest_t1822909188::get_offset_of_TitleId_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3892 = { sizeof (LoginWithWindowsHelloRequest_t725081759), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3892[5] = 
{
	LoginWithWindowsHelloRequest_t725081759::get_offset_of_ChallengeSignature_0(),
	LoginWithWindowsHelloRequest_t725081759::get_offset_of_InfoRequestParameters_1(),
	LoginWithWindowsHelloRequest_t725081759::get_offset_of_LoginTitlePlayerAccountEntity_2(),
	LoginWithWindowsHelloRequest_t725081759::get_offset_of_PublicKeyHint_3(),
	LoginWithWindowsHelloRequest_t725081759::get_offset_of_TitleId_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3893 = { sizeof (LoginWithXboxRequest_t2119363681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3893[7] = 
{
	LoginWithXboxRequest_t2119363681::get_offset_of_CreateAccount_0(),
	LoginWithXboxRequest_t2119363681::get_offset_of_EncryptedRequest_1(),
	LoginWithXboxRequest_t2119363681::get_offset_of_InfoRequestParameters_2(),
	LoginWithXboxRequest_t2119363681::get_offset_of_LoginTitlePlayerAccountEntity_3(),
	LoginWithXboxRequest_t2119363681::get_offset_of_PlayerSecret_4(),
	LoginWithXboxRequest_t2119363681::get_offset_of_TitleId_5(),
	LoginWithXboxRequest_t2119363681::get_offset_of_XboxToken_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3894 = { sizeof (LogStatement_t3612334110), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3894[3] = 
{
	LogStatement_t3612334110::get_offset_of_Data_0(),
	LogStatement_t3612334110::get_offset_of_Level_1(),
	LogStatement_t3612334110::get_offset_of_Message_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3895 = { sizeof (MatchmakeRequest_t1739851507), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3895[8] = 
{
	MatchmakeRequest_t1739851507::get_offset_of_BuildVersion_0(),
	MatchmakeRequest_t1739851507::get_offset_of_CharacterId_1(),
	MatchmakeRequest_t1739851507::get_offset_of_GameMode_2(),
	MatchmakeRequest_t1739851507::get_offset_of_LobbyId_3(),
	MatchmakeRequest_t1739851507::get_offset_of_Region_4(),
	MatchmakeRequest_t1739851507::get_offset_of_StartNewIfNoneFound_5(),
	MatchmakeRequest_t1739851507::get_offset_of_StatisticName_6(),
	MatchmakeRequest_t1739851507::get_offset_of_TagFilter_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3896 = { sizeof (MatchmakeResult_t2030730580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3896[10] = 
{
	MatchmakeResult_t2030730580::get_offset_of_Expires_2(),
	MatchmakeResult_t2030730580::get_offset_of_LobbyID_3(),
	MatchmakeResult_t2030730580::get_offset_of_PollWaitTimeMS_4(),
	MatchmakeResult_t2030730580::get_offset_of_ServerHostname_5(),
	MatchmakeResult_t2030730580::get_offset_of_ServerIPV4Address_6(),
	MatchmakeResult_t2030730580::get_offset_of_ServerIPV6Address_7(),
	MatchmakeResult_t2030730580::get_offset_of_ServerPort_8(),
	MatchmakeResult_t2030730580::get_offset_of_ServerPublicDNSName_9(),
	MatchmakeResult_t2030730580::get_offset_of_Status_10(),
	MatchmakeResult_t2030730580::get_offset_of_Ticket_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3897 = { sizeof (MatchmakeStatus_t1217147204)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3897[6] = 
{
	MatchmakeStatus_t1217147204::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3898 = { sizeof (MembershipModel_t1372399326), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3898[5] = 
{
	MembershipModel_t1372399326::get_offset_of_IsActive_0(),
	MembershipModel_t1372399326::get_offset_of_MembershipExpiration_1(),
	MembershipModel_t1372399326::get_offset_of_MembershipId_2(),
	MembershipModel_t1372399326::get_offset_of_OverrideExpiration_3(),
	MembershipModel_t1372399326::get_offset_of_Subscriptions_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3899 = { sizeof (ModifyUserVirtualCurrencyResult_t2341190276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3899[4] = 
{
	ModifyUserVirtualCurrencyResult_t2341190276::get_offset_of_Balance_2(),
	ModifyUserVirtualCurrencyResult_t2341190276::get_offset_of_BalanceChange_3(),
	ModifyUserVirtualCurrencyResult_t2341190276::get_offset_of_PlayFabId_4(),
	ModifyUserVirtualCurrencyResult_t2341190276::get_offset_of_VirtualCurrency_5(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
