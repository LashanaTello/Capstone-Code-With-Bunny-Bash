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


// PlayFab.ClientModels.EntityTokenResponse
struct EntityTokenResponse_t1814794135;
// PlayFab.ClientModels.GenericServiceId
struct GenericServiceId_t3400130533;
// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams
struct GetPlayerCombinedInfoRequestParams_t121265087;
// PlayFab.ClientModels.PlayerProfileModel
struct PlayerProfileModel_t250934598;
// PlayFab.ClientModels.TradeInfo
struct TradeInfo_t4070927481;
// PlayFab.ClientModels.UserSettings
struct UserSettings_t3054366223;
// PlayFab.SharedModels.PlayFabRequestCommon
struct PlayFabRequestCommon_t229319069;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.Dictionary`2<System.String,System.UInt32>
struct Dictionary_2_t2345318277;
// System.Collections.Generic.List`1<PlayFab.ClientModels.AdCampaignAttributionModel>
struct List_1_t406833115;
// System.Collections.Generic.List`1<PlayFab.ClientModels.CartItem>
struct List_1_t2141460274;
// System.Collections.Generic.List`1<PlayFab.ClientModels.ContactEmailInfoModel>
struct List_1_t1117944676;
// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance>
struct List_1_t898730215;
// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemPurchaseRequest>
struct List_1_t3805761739;
// System.Collections.Generic.List`1<PlayFab.ClientModels.LinkedPlatformAccountModel>
struct List_1_t4191507331;
// System.Collections.Generic.List`1<PlayFab.ClientModels.LocationModel>
struct List_1_t990609382;
// System.Collections.Generic.List`1<PlayFab.ClientModels.MembershipModel>
struct List_1_t2844474068;
// System.Collections.Generic.List`1<PlayFab.ClientModels.PaymentOption>
struct List_1_t2421373131;
// System.Collections.Generic.List`1<PlayFab.ClientModels.PushNotificationRegistrationModel>
struct List_1_t2875462914;
// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticModel>
struct List_1_t2070485369;
// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticUpdate>
struct List_1_t431464649;
// System.Collections.Generic.List`1<PlayFab.ClientModels.TagModel>
struct List_1_t4252289162;
// System.Collections.Generic.List`1<PlayFab.ClientModels.ValueToDateModel>
struct List_1_t1071715830;
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
#ifndef NINTENDOSWITCHPLAYFABIDPAIR_T2225155660_H
#define NINTENDOSWITCHPLAYFABIDPAIR_T2225155660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.NintendoSwitchPlayFabIdPair
struct  NintendoSwitchPlayFabIdPair_t2225155660  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.NintendoSwitchPlayFabIdPair::NintendoSwitchDeviceId
	String_t* ___NintendoSwitchDeviceId_0;
	// System.String PlayFab.ClientModels.NintendoSwitchPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;

public:
	inline static int32_t get_offset_of_NintendoSwitchDeviceId_0() { return static_cast<int32_t>(offsetof(NintendoSwitchPlayFabIdPair_t2225155660, ___NintendoSwitchDeviceId_0)); }
	inline String_t* get_NintendoSwitchDeviceId_0() const { return ___NintendoSwitchDeviceId_0; }
	inline String_t** get_address_of_NintendoSwitchDeviceId_0() { return &___NintendoSwitchDeviceId_0; }
	inline void set_NintendoSwitchDeviceId_0(String_t* value)
	{
		___NintendoSwitchDeviceId_0 = value;
		Il2CppCodeGenWriteBarrier((&___NintendoSwitchDeviceId_0), value);
	}

	inline static int32_t get_offset_of_PlayFabId_1() { return static_cast<int32_t>(offsetof(NintendoSwitchPlayFabIdPair_t2225155660, ___PlayFabId_1)); }
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
#endif // NINTENDOSWITCHPLAYFABIDPAIR_T2225155660_H
#ifndef PAYMENTOPTION_T949298389_H
#define PAYMENTOPTION_T949298389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.PaymentOption
struct  PaymentOption_t949298389  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.PaymentOption::Currency
	String_t* ___Currency_0;
	// System.UInt32 PlayFab.ClientModels.PaymentOption::Price
	uint32_t ___Price_1;
	// System.String PlayFab.ClientModels.PaymentOption::ProviderName
	String_t* ___ProviderName_2;
	// System.UInt32 PlayFab.ClientModels.PaymentOption::StoreCredit
	uint32_t ___StoreCredit_3;

public:
	inline static int32_t get_offset_of_Currency_0() { return static_cast<int32_t>(offsetof(PaymentOption_t949298389, ___Currency_0)); }
	inline String_t* get_Currency_0() const { return ___Currency_0; }
	inline String_t** get_address_of_Currency_0() { return &___Currency_0; }
	inline void set_Currency_0(String_t* value)
	{
		___Currency_0 = value;
		Il2CppCodeGenWriteBarrier((&___Currency_0), value);
	}

	inline static int32_t get_offset_of_Price_1() { return static_cast<int32_t>(offsetof(PaymentOption_t949298389, ___Price_1)); }
	inline uint32_t get_Price_1() const { return ___Price_1; }
	inline uint32_t* get_address_of_Price_1() { return &___Price_1; }
	inline void set_Price_1(uint32_t value)
	{
		___Price_1 = value;
	}

	inline static int32_t get_offset_of_ProviderName_2() { return static_cast<int32_t>(offsetof(PaymentOption_t949298389, ___ProviderName_2)); }
	inline String_t* get_ProviderName_2() const { return ___ProviderName_2; }
	inline String_t** get_address_of_ProviderName_2() { return &___ProviderName_2; }
	inline void set_ProviderName_2(String_t* value)
	{
		___ProviderName_2 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_2), value);
	}

	inline static int32_t get_offset_of_StoreCredit_3() { return static_cast<int32_t>(offsetof(PaymentOption_t949298389, ___StoreCredit_3)); }
	inline uint32_t get_StoreCredit_3() const { return ___StoreCredit_3; }
	inline uint32_t* get_address_of_StoreCredit_3() { return &___StoreCredit_3; }
	inline void set_StoreCredit_3(uint32_t value)
	{
		___StoreCredit_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAYMENTOPTION_T949298389_H
#ifndef PLAYERLEADERBOARDENTRY_T1881677957_H
#define PLAYERLEADERBOARDENTRY_T1881677957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.PlayerLeaderboardEntry
struct  PlayerLeaderboardEntry_t1881677957  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.PlayerLeaderboardEntry::DisplayName
	String_t* ___DisplayName_0;
	// System.String PlayFab.ClientModels.PlayerLeaderboardEntry::PlayFabId
	String_t* ___PlayFabId_1;
	// System.Int32 PlayFab.ClientModels.PlayerLeaderboardEntry::Position
	int32_t ___Position_2;
	// PlayFab.ClientModels.PlayerProfileModel PlayFab.ClientModels.PlayerLeaderboardEntry::Profile
	PlayerProfileModel_t250934598 * ___Profile_3;
	// System.Int32 PlayFab.ClientModels.PlayerLeaderboardEntry::StatValue
	int32_t ___StatValue_4;

public:
	inline static int32_t get_offset_of_DisplayName_0() { return static_cast<int32_t>(offsetof(PlayerLeaderboardEntry_t1881677957, ___DisplayName_0)); }
	inline String_t* get_DisplayName_0() const { return ___DisplayName_0; }
	inline String_t** get_address_of_DisplayName_0() { return &___DisplayName_0; }
	inline void set_DisplayName_0(String_t* value)
	{
		___DisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_0), value);
	}

	inline static int32_t get_offset_of_PlayFabId_1() { return static_cast<int32_t>(offsetof(PlayerLeaderboardEntry_t1881677957, ___PlayFabId_1)); }
	inline String_t* get_PlayFabId_1() const { return ___PlayFabId_1; }
	inline String_t** get_address_of_PlayFabId_1() { return &___PlayFabId_1; }
	inline void set_PlayFabId_1(String_t* value)
	{
		___PlayFabId_1 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_1), value);
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(PlayerLeaderboardEntry_t1881677957, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}

	inline static int32_t get_offset_of_Profile_3() { return static_cast<int32_t>(offsetof(PlayerLeaderboardEntry_t1881677957, ___Profile_3)); }
	inline PlayerProfileModel_t250934598 * get_Profile_3() const { return ___Profile_3; }
	inline PlayerProfileModel_t250934598 ** get_address_of_Profile_3() { return &___Profile_3; }
	inline void set_Profile_3(PlayerProfileModel_t250934598 * value)
	{
		___Profile_3 = value;
		Il2CppCodeGenWriteBarrier((&___Profile_3), value);
	}

	inline static int32_t get_offset_of_StatValue_4() { return static_cast<int32_t>(offsetof(PlayerLeaderboardEntry_t1881677957, ___StatValue_4)); }
	inline int32_t get_StatValue_4() const { return ___StatValue_4; }
	inline int32_t* get_address_of_StatValue_4() { return &___StatValue_4; }
	inline void set_StatValue_4(int32_t value)
	{
		___StatValue_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLEADERBOARDENTRY_T1881677957_H
#ifndef PLAYERPROFILEVIEWCONSTRAINTS_T97717017_H
#define PLAYERPROFILEVIEWCONSTRAINTS_T97717017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.PlayerProfileViewConstraints
struct  PlayerProfileViewConstraints_t97717017  : public RuntimeObject
{
public:
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowAvatarUrl
	bool ___ShowAvatarUrl_0;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowBannedUntil
	bool ___ShowBannedUntil_1;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowCampaignAttributions
	bool ___ShowCampaignAttributions_2;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowContactEmailAddresses
	bool ___ShowContactEmailAddresses_3;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowCreated
	bool ___ShowCreated_4;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowDisplayName
	bool ___ShowDisplayName_5;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowLastLogin
	bool ___ShowLastLogin_6;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowLinkedAccounts
	bool ___ShowLinkedAccounts_7;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowLocations
	bool ___ShowLocations_8;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowMemberships
	bool ___ShowMemberships_9;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowOrigination
	bool ___ShowOrigination_10;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowPushNotificationRegistrations
	bool ___ShowPushNotificationRegistrations_11;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowStatistics
	bool ___ShowStatistics_12;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowTags
	bool ___ShowTags_13;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowTotalValueToDateInUsd
	bool ___ShowTotalValueToDateInUsd_14;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowValuesToDate
	bool ___ShowValuesToDate_15;

public:
	inline static int32_t get_offset_of_ShowAvatarUrl_0() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowAvatarUrl_0)); }
	inline bool get_ShowAvatarUrl_0() const { return ___ShowAvatarUrl_0; }
	inline bool* get_address_of_ShowAvatarUrl_0() { return &___ShowAvatarUrl_0; }
	inline void set_ShowAvatarUrl_0(bool value)
	{
		___ShowAvatarUrl_0 = value;
	}

	inline static int32_t get_offset_of_ShowBannedUntil_1() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowBannedUntil_1)); }
	inline bool get_ShowBannedUntil_1() const { return ___ShowBannedUntil_1; }
	inline bool* get_address_of_ShowBannedUntil_1() { return &___ShowBannedUntil_1; }
	inline void set_ShowBannedUntil_1(bool value)
	{
		___ShowBannedUntil_1 = value;
	}

	inline static int32_t get_offset_of_ShowCampaignAttributions_2() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowCampaignAttributions_2)); }
	inline bool get_ShowCampaignAttributions_2() const { return ___ShowCampaignAttributions_2; }
	inline bool* get_address_of_ShowCampaignAttributions_2() { return &___ShowCampaignAttributions_2; }
	inline void set_ShowCampaignAttributions_2(bool value)
	{
		___ShowCampaignAttributions_2 = value;
	}

	inline static int32_t get_offset_of_ShowContactEmailAddresses_3() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowContactEmailAddresses_3)); }
	inline bool get_ShowContactEmailAddresses_3() const { return ___ShowContactEmailAddresses_3; }
	inline bool* get_address_of_ShowContactEmailAddresses_3() { return &___ShowContactEmailAddresses_3; }
	inline void set_ShowContactEmailAddresses_3(bool value)
	{
		___ShowContactEmailAddresses_3 = value;
	}

	inline static int32_t get_offset_of_ShowCreated_4() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowCreated_4)); }
	inline bool get_ShowCreated_4() const { return ___ShowCreated_4; }
	inline bool* get_address_of_ShowCreated_4() { return &___ShowCreated_4; }
	inline void set_ShowCreated_4(bool value)
	{
		___ShowCreated_4 = value;
	}

	inline static int32_t get_offset_of_ShowDisplayName_5() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowDisplayName_5)); }
	inline bool get_ShowDisplayName_5() const { return ___ShowDisplayName_5; }
	inline bool* get_address_of_ShowDisplayName_5() { return &___ShowDisplayName_5; }
	inline void set_ShowDisplayName_5(bool value)
	{
		___ShowDisplayName_5 = value;
	}

	inline static int32_t get_offset_of_ShowLastLogin_6() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowLastLogin_6)); }
	inline bool get_ShowLastLogin_6() const { return ___ShowLastLogin_6; }
	inline bool* get_address_of_ShowLastLogin_6() { return &___ShowLastLogin_6; }
	inline void set_ShowLastLogin_6(bool value)
	{
		___ShowLastLogin_6 = value;
	}

	inline static int32_t get_offset_of_ShowLinkedAccounts_7() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowLinkedAccounts_7)); }
	inline bool get_ShowLinkedAccounts_7() const { return ___ShowLinkedAccounts_7; }
	inline bool* get_address_of_ShowLinkedAccounts_7() { return &___ShowLinkedAccounts_7; }
	inline void set_ShowLinkedAccounts_7(bool value)
	{
		___ShowLinkedAccounts_7 = value;
	}

	inline static int32_t get_offset_of_ShowLocations_8() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowLocations_8)); }
	inline bool get_ShowLocations_8() const { return ___ShowLocations_8; }
	inline bool* get_address_of_ShowLocations_8() { return &___ShowLocations_8; }
	inline void set_ShowLocations_8(bool value)
	{
		___ShowLocations_8 = value;
	}

	inline static int32_t get_offset_of_ShowMemberships_9() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowMemberships_9)); }
	inline bool get_ShowMemberships_9() const { return ___ShowMemberships_9; }
	inline bool* get_address_of_ShowMemberships_9() { return &___ShowMemberships_9; }
	inline void set_ShowMemberships_9(bool value)
	{
		___ShowMemberships_9 = value;
	}

	inline static int32_t get_offset_of_ShowOrigination_10() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowOrigination_10)); }
	inline bool get_ShowOrigination_10() const { return ___ShowOrigination_10; }
	inline bool* get_address_of_ShowOrigination_10() { return &___ShowOrigination_10; }
	inline void set_ShowOrigination_10(bool value)
	{
		___ShowOrigination_10 = value;
	}

	inline static int32_t get_offset_of_ShowPushNotificationRegistrations_11() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowPushNotificationRegistrations_11)); }
	inline bool get_ShowPushNotificationRegistrations_11() const { return ___ShowPushNotificationRegistrations_11; }
	inline bool* get_address_of_ShowPushNotificationRegistrations_11() { return &___ShowPushNotificationRegistrations_11; }
	inline void set_ShowPushNotificationRegistrations_11(bool value)
	{
		___ShowPushNotificationRegistrations_11 = value;
	}

	inline static int32_t get_offset_of_ShowStatistics_12() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowStatistics_12)); }
	inline bool get_ShowStatistics_12() const { return ___ShowStatistics_12; }
	inline bool* get_address_of_ShowStatistics_12() { return &___ShowStatistics_12; }
	inline void set_ShowStatistics_12(bool value)
	{
		___ShowStatistics_12 = value;
	}

	inline static int32_t get_offset_of_ShowTags_13() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowTags_13)); }
	inline bool get_ShowTags_13() const { return ___ShowTags_13; }
	inline bool* get_address_of_ShowTags_13() { return &___ShowTags_13; }
	inline void set_ShowTags_13(bool value)
	{
		___ShowTags_13 = value;
	}

	inline static int32_t get_offset_of_ShowTotalValueToDateInUsd_14() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowTotalValueToDateInUsd_14)); }
	inline bool get_ShowTotalValueToDateInUsd_14() const { return ___ShowTotalValueToDateInUsd_14; }
	inline bool* get_address_of_ShowTotalValueToDateInUsd_14() { return &___ShowTotalValueToDateInUsd_14; }
	inline void set_ShowTotalValueToDateInUsd_14(bool value)
	{
		___ShowTotalValueToDateInUsd_14 = value;
	}

	inline static int32_t get_offset_of_ShowValuesToDate_15() { return static_cast<int32_t>(offsetof(PlayerProfileViewConstraints_t97717017, ___ShowValuesToDate_15)); }
	inline bool get_ShowValuesToDate_15() const { return ___ShowValuesToDate_15; }
	inline bool* get_address_of_ShowValuesToDate_15() { return &___ShowValuesToDate_15; }
	inline void set_ShowValuesToDate_15(bool value)
	{
		___ShowValuesToDate_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPROFILEVIEWCONSTRAINTS_T97717017_H
#ifndef SCRIPTEXECUTIONERROR_T3998229139_H
#define SCRIPTEXECUTIONERROR_T3998229139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ScriptExecutionError
struct  ScriptExecutionError_t3998229139  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.ScriptExecutionError::Error
	String_t* ___Error_0;
	// System.String PlayFab.ClientModels.ScriptExecutionError::Message
	String_t* ___Message_1;
	// System.String PlayFab.ClientModels.ScriptExecutionError::StackTrace
	String_t* ___StackTrace_2;

public:
	inline static int32_t get_offset_of_Error_0() { return static_cast<int32_t>(offsetof(ScriptExecutionError_t3998229139, ___Error_0)); }
	inline String_t* get_Error_0() const { return ___Error_0; }
	inline String_t** get_address_of_Error_0() { return &___Error_0; }
	inline void set_Error_0(String_t* value)
	{
		___Error_0 = value;
		Il2CppCodeGenWriteBarrier((&___Error_0), value);
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(ScriptExecutionError_t3998229139, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((&___Message_1), value);
	}

	inline static int32_t get_offset_of_StackTrace_2() { return static_cast<int32_t>(offsetof(ScriptExecutionError_t3998229139, ___StackTrace_2)); }
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
#endif // SCRIPTEXECUTIONERROR_T3998229139_H
#ifndef STATISTICMODEL_T598410627_H
#define STATISTICMODEL_T598410627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.StatisticModel
struct  StatisticModel_t598410627  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.StatisticModel::Name
	String_t* ___Name_0;
	// System.Int32 PlayFab.ClientModels.StatisticModel::Value
	int32_t ___Value_1;
	// System.Int32 PlayFab.ClientModels.StatisticModel::Version
	int32_t ___Version_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(StatisticModel_t598410627, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(StatisticModel_t598410627, ___Value_1)); }
	inline int32_t get_Value_1() const { return ___Value_1; }
	inline int32_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(int32_t value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_Version_2() { return static_cast<int32_t>(offsetof(StatisticModel_t598410627, ___Version_2)); }
	inline int32_t get_Version_2() const { return ___Version_2; }
	inline int32_t* get_address_of_Version_2() { return &___Version_2; }
	inline void set_Version_2(int32_t value)
	{
		___Version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATISTICMODEL_T598410627_H
#ifndef STATISTICNAMEVERSION_T4077247347_H
#define STATISTICNAMEVERSION_T4077247347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.StatisticNameVersion
struct  StatisticNameVersion_t4077247347  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.StatisticNameVersion::StatisticName
	String_t* ___StatisticName_0;
	// System.UInt32 PlayFab.ClientModels.StatisticNameVersion::Version
	uint32_t ___Version_1;

public:
	inline static int32_t get_offset_of_StatisticName_0() { return static_cast<int32_t>(offsetof(StatisticNameVersion_t4077247347, ___StatisticName_0)); }
	inline String_t* get_StatisticName_0() const { return ___StatisticName_0; }
	inline String_t** get_address_of_StatisticName_0() { return &___StatisticName_0; }
	inline void set_StatisticName_0(String_t* value)
	{
		___StatisticName_0 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_0), value);
	}

	inline static int32_t get_offset_of_Version_1() { return static_cast<int32_t>(offsetof(StatisticNameVersion_t4077247347, ___Version_1)); }
	inline uint32_t get_Version_1() const { return ___Version_1; }
	inline uint32_t* get_address_of_Version_1() { return &___Version_1; }
	inline void set_Version_1(uint32_t value)
	{
		___Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATISTICNAMEVERSION_T4077247347_H
#ifndef STATISTICVALUE_T383333543_H
#define STATISTICVALUE_T383333543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.StatisticValue
struct  StatisticValue_t383333543  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.StatisticValue::StatisticName
	String_t* ___StatisticName_0;
	// System.Int32 PlayFab.ClientModels.StatisticValue::Value
	int32_t ___Value_1;
	// System.UInt32 PlayFab.ClientModels.StatisticValue::Version
	uint32_t ___Version_2;

public:
	inline static int32_t get_offset_of_StatisticName_0() { return static_cast<int32_t>(offsetof(StatisticValue_t383333543, ___StatisticName_0)); }
	inline String_t* get_StatisticName_0() const { return ___StatisticName_0; }
	inline String_t** get_address_of_StatisticName_0() { return &___StatisticName_0; }
	inline void set_StatisticName_0(String_t* value)
	{
		___StatisticName_0 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_0), value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(StatisticValue_t383333543, ___Value_1)); }
	inline int32_t get_Value_1() const { return ___Value_1; }
	inline int32_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(int32_t value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_Version_2() { return static_cast<int32_t>(offsetof(StatisticValue_t383333543, ___Version_2)); }
	inline uint32_t get_Version_2() const { return ___Version_2; }
	inline uint32_t* get_address_of_Version_2() { return &___Version_2; }
	inline void set_Version_2(uint32_t value)
	{
		___Version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATISTICVALUE_T383333543_H
#ifndef STEAMPLAYFABIDPAIR_T748597208_H
#define STEAMPLAYFABIDPAIR_T748597208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.SteamPlayFabIdPair
struct  SteamPlayFabIdPair_t748597208  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.SteamPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_0;
	// System.String PlayFab.ClientModels.SteamPlayFabIdPair::SteamStringId
	String_t* ___SteamStringId_1;

public:
	inline static int32_t get_offset_of_PlayFabId_0() { return static_cast<int32_t>(offsetof(SteamPlayFabIdPair_t748597208, ___PlayFabId_0)); }
	inline String_t* get_PlayFabId_0() const { return ___PlayFabId_0; }
	inline String_t** get_address_of_PlayFabId_0() { return &___PlayFabId_0; }
	inline void set_PlayFabId_0(String_t* value)
	{
		___PlayFabId_0 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_0), value);
	}

	inline static int32_t get_offset_of_SteamStringId_1() { return static_cast<int32_t>(offsetof(SteamPlayFabIdPair_t748597208, ___SteamStringId_1)); }
	inline String_t* get_SteamStringId_1() const { return ___SteamStringId_1; }
	inline String_t** get_address_of_SteamStringId_1() { return &___SteamStringId_1; }
	inline void set_SteamStringId_1(String_t* value)
	{
		___SteamStringId_1 = value;
		Il2CppCodeGenWriteBarrier((&___SteamStringId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEAMPLAYFABIDPAIR_T748597208_H
#ifndef STOREMARKETINGMODEL_T3941052148_H
#define STOREMARKETINGMODEL_T3941052148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.StoreMarketingModel
struct  StoreMarketingModel_t3941052148  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.StoreMarketingModel::Description
	String_t* ___Description_0;
	// System.String PlayFab.ClientModels.StoreMarketingModel::DisplayName
	String_t* ___DisplayName_1;
	// System.Object PlayFab.ClientModels.StoreMarketingModel::Metadata
	RuntimeObject * ___Metadata_2;

public:
	inline static int32_t get_offset_of_Description_0() { return static_cast<int32_t>(offsetof(StoreMarketingModel_t3941052148, ___Description_0)); }
	inline String_t* get_Description_0() const { return ___Description_0; }
	inline String_t** get_address_of_Description_0() { return &___Description_0; }
	inline void set_Description_0(String_t* value)
	{
		___Description_0 = value;
		Il2CppCodeGenWriteBarrier((&___Description_0), value);
	}

	inline static int32_t get_offset_of_DisplayName_1() { return static_cast<int32_t>(offsetof(StoreMarketingModel_t3941052148, ___DisplayName_1)); }
	inline String_t* get_DisplayName_1() const { return ___DisplayName_1; }
	inline String_t** get_address_of_DisplayName_1() { return &___DisplayName_1; }
	inline void set_DisplayName_1(String_t* value)
	{
		___DisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_1), value);
	}

	inline static int32_t get_offset_of_Metadata_2() { return static_cast<int32_t>(offsetof(StoreMarketingModel_t3941052148, ___Metadata_2)); }
	inline RuntimeObject * get_Metadata_2() const { return ___Metadata_2; }
	inline RuntimeObject ** get_address_of_Metadata_2() { return &___Metadata_2; }
	inline void set_Metadata_2(RuntimeObject * value)
	{
		___Metadata_2 = value;
		Il2CppCodeGenWriteBarrier((&___Metadata_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STOREMARKETINGMODEL_T3941052148_H
#ifndef TAGMODEL_T2780214420_H
#define TAGMODEL_T2780214420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.TagModel
struct  TagModel_t2780214420  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.TagModel::TagValue
	String_t* ___TagValue_0;

public:
	inline static int32_t get_offset_of_TagValue_0() { return static_cast<int32_t>(offsetof(TagModel_t2780214420, ___TagValue_0)); }
	inline String_t* get_TagValue_0() const { return ___TagValue_0; }
	inline String_t** get_address_of_TagValue_0() { return &___TagValue_0; }
	inline void set_TagValue_0(String_t* value)
	{
		___TagValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___TagValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAGMODEL_T2780214420_H
#ifndef TWITCHPLAYFABIDPAIR_T2801291494_H
#define TWITCHPLAYFABIDPAIR_T2801291494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.TwitchPlayFabIdPair
struct  TwitchPlayFabIdPair_t2801291494  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.TwitchPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_0;
	// System.String PlayFab.ClientModels.TwitchPlayFabIdPair::TwitchId
	String_t* ___TwitchId_1;

public:
	inline static int32_t get_offset_of_PlayFabId_0() { return static_cast<int32_t>(offsetof(TwitchPlayFabIdPair_t2801291494, ___PlayFabId_0)); }
	inline String_t* get_PlayFabId_0() const { return ___PlayFabId_0; }
	inline String_t** get_address_of_PlayFabId_0() { return &___PlayFabId_0; }
	inline void set_PlayFabId_0(String_t* value)
	{
		___PlayFabId_0 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_0), value);
	}

	inline static int32_t get_offset_of_TwitchId_1() { return static_cast<int32_t>(offsetof(TwitchPlayFabIdPair_t2801291494, ___TwitchId_1)); }
	inline String_t* get_TwitchId_1() const { return ___TwitchId_1; }
	inline String_t** get_address_of_TwitchId_1() { return &___TwitchId_1; }
	inline void set_TwitchId_1(String_t* value)
	{
		___TwitchId_1 = value;
		Il2CppCodeGenWriteBarrier((&___TwitchId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWITCHPLAYFABIDPAIR_T2801291494_H
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
#ifndef OPENTRADEREQUEST_T11547462_H
#define OPENTRADEREQUEST_T11547462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.OpenTradeRequest
struct  OpenTradeRequest_t11547462  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.OpenTradeRequest::AllowedPlayerIds
	List_1_t3319525431 * ___AllowedPlayerIds_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.OpenTradeRequest::OfferedInventoryInstanceIds
	List_1_t3319525431 * ___OfferedInventoryInstanceIds_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.OpenTradeRequest::RequestedCatalogItemIds
	List_1_t3319525431 * ___RequestedCatalogItemIds_2;

public:
	inline static int32_t get_offset_of_AllowedPlayerIds_0() { return static_cast<int32_t>(offsetof(OpenTradeRequest_t11547462, ___AllowedPlayerIds_0)); }
	inline List_1_t3319525431 * get_AllowedPlayerIds_0() const { return ___AllowedPlayerIds_0; }
	inline List_1_t3319525431 ** get_address_of_AllowedPlayerIds_0() { return &___AllowedPlayerIds_0; }
	inline void set_AllowedPlayerIds_0(List_1_t3319525431 * value)
	{
		___AllowedPlayerIds_0 = value;
		Il2CppCodeGenWriteBarrier((&___AllowedPlayerIds_0), value);
	}

	inline static int32_t get_offset_of_OfferedInventoryInstanceIds_1() { return static_cast<int32_t>(offsetof(OpenTradeRequest_t11547462, ___OfferedInventoryInstanceIds_1)); }
	inline List_1_t3319525431 * get_OfferedInventoryInstanceIds_1() const { return ___OfferedInventoryInstanceIds_1; }
	inline List_1_t3319525431 ** get_address_of_OfferedInventoryInstanceIds_1() { return &___OfferedInventoryInstanceIds_1; }
	inline void set_OfferedInventoryInstanceIds_1(List_1_t3319525431 * value)
	{
		___OfferedInventoryInstanceIds_1 = value;
		Il2CppCodeGenWriteBarrier((&___OfferedInventoryInstanceIds_1), value);
	}

	inline static int32_t get_offset_of_RequestedCatalogItemIds_2() { return static_cast<int32_t>(offsetof(OpenTradeRequest_t11547462, ___RequestedCatalogItemIds_2)); }
	inline List_1_t3319525431 * get_RequestedCatalogItemIds_2() const { return ___RequestedCatalogItemIds_2; }
	inline List_1_t3319525431 ** get_address_of_RequestedCatalogItemIds_2() { return &___RequestedCatalogItemIds_2; }
	inline void set_RequestedCatalogItemIds_2(List_1_t3319525431 * value)
	{
		___RequestedCatalogItemIds_2 = value;
		Il2CppCodeGenWriteBarrier((&___RequestedCatalogItemIds_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPENTRADEREQUEST_T11547462_H
#ifndef OPENTRADERESPONSE_T2601250367_H
#define OPENTRADERESPONSE_T2601250367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.OpenTradeResponse
struct  OpenTradeResponse_t2601250367  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.ClientModels.TradeInfo PlayFab.ClientModels.OpenTradeResponse::Trade
	TradeInfo_t4070927481 * ___Trade_2;

public:
	inline static int32_t get_offset_of_Trade_2() { return static_cast<int32_t>(offsetof(OpenTradeResponse_t2601250367, ___Trade_2)); }
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
#endif // OPENTRADERESPONSE_T2601250367_H
#ifndef PAYFORPURCHASEREQUEST_T2615822629_H
#define PAYFORPURCHASEREQUEST_T2615822629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.PayForPurchaseRequest
struct  PayForPurchaseRequest_t2615822629  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.PayForPurchaseRequest::Currency
	String_t* ___Currency_0;
	// System.String PlayFab.ClientModels.PayForPurchaseRequest::OrderId
	String_t* ___OrderId_1;
	// System.String PlayFab.ClientModels.PayForPurchaseRequest::ProviderName
	String_t* ___ProviderName_2;
	// System.String PlayFab.ClientModels.PayForPurchaseRequest::ProviderTransactionId
	String_t* ___ProviderTransactionId_3;

public:
	inline static int32_t get_offset_of_Currency_0() { return static_cast<int32_t>(offsetof(PayForPurchaseRequest_t2615822629, ___Currency_0)); }
	inline String_t* get_Currency_0() const { return ___Currency_0; }
	inline String_t** get_address_of_Currency_0() { return &___Currency_0; }
	inline void set_Currency_0(String_t* value)
	{
		___Currency_0 = value;
		Il2CppCodeGenWriteBarrier((&___Currency_0), value);
	}

	inline static int32_t get_offset_of_OrderId_1() { return static_cast<int32_t>(offsetof(PayForPurchaseRequest_t2615822629, ___OrderId_1)); }
	inline String_t* get_OrderId_1() const { return ___OrderId_1; }
	inline String_t** get_address_of_OrderId_1() { return &___OrderId_1; }
	inline void set_OrderId_1(String_t* value)
	{
		___OrderId_1 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_1), value);
	}

	inline static int32_t get_offset_of_ProviderName_2() { return static_cast<int32_t>(offsetof(PayForPurchaseRequest_t2615822629, ___ProviderName_2)); }
	inline String_t* get_ProviderName_2() const { return ___ProviderName_2; }
	inline String_t** get_address_of_ProviderName_2() { return &___ProviderName_2; }
	inline void set_ProviderName_2(String_t* value)
	{
		___ProviderName_2 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_2), value);
	}

	inline static int32_t get_offset_of_ProviderTransactionId_3() { return static_cast<int32_t>(offsetof(PayForPurchaseRequest_t2615822629, ___ProviderTransactionId_3)); }
	inline String_t* get_ProviderTransactionId_3() const { return ___ProviderTransactionId_3; }
	inline String_t** get_address_of_ProviderTransactionId_3() { return &___ProviderTransactionId_3; }
	inline void set_ProviderTransactionId_3(String_t* value)
	{
		___ProviderTransactionId_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderTransactionId_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAYFORPURCHASEREQUEST_T2615822629_H
#ifndef PURCHASEITEMREQUEST_T446597288_H
#define PURCHASEITEMREQUEST_T446597288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.PurchaseItemRequest
struct  PurchaseItemRequest_t446597288  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.PurchaseItemRequest::CatalogVersion
	String_t* ___CatalogVersion_0;
	// System.String PlayFab.ClientModels.PurchaseItemRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.String PlayFab.ClientModels.PurchaseItemRequest::ItemId
	String_t* ___ItemId_2;
	// System.Int32 PlayFab.ClientModels.PurchaseItemRequest::Price
	int32_t ___Price_3;
	// System.String PlayFab.ClientModels.PurchaseItemRequest::StoreId
	String_t* ___StoreId_4;
	// System.String PlayFab.ClientModels.PurchaseItemRequest::VirtualCurrency
	String_t* ___VirtualCurrency_5;

public:
	inline static int32_t get_offset_of_CatalogVersion_0() { return static_cast<int32_t>(offsetof(PurchaseItemRequest_t446597288, ___CatalogVersion_0)); }
	inline String_t* get_CatalogVersion_0() const { return ___CatalogVersion_0; }
	inline String_t** get_address_of_CatalogVersion_0() { return &___CatalogVersion_0; }
	inline void set_CatalogVersion_0(String_t* value)
	{
		___CatalogVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_0), value);
	}

	inline static int32_t get_offset_of_CharacterId_1() { return static_cast<int32_t>(offsetof(PurchaseItemRequest_t446597288, ___CharacterId_1)); }
	inline String_t* get_CharacterId_1() const { return ___CharacterId_1; }
	inline String_t** get_address_of_CharacterId_1() { return &___CharacterId_1; }
	inline void set_CharacterId_1(String_t* value)
	{
		___CharacterId_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_1), value);
	}

	inline static int32_t get_offset_of_ItemId_2() { return static_cast<int32_t>(offsetof(PurchaseItemRequest_t446597288, ___ItemId_2)); }
	inline String_t* get_ItemId_2() const { return ___ItemId_2; }
	inline String_t** get_address_of_ItemId_2() { return &___ItemId_2; }
	inline void set_ItemId_2(String_t* value)
	{
		___ItemId_2 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_2), value);
	}

	inline static int32_t get_offset_of_Price_3() { return static_cast<int32_t>(offsetof(PurchaseItemRequest_t446597288, ___Price_3)); }
	inline int32_t get_Price_3() const { return ___Price_3; }
	inline int32_t* get_address_of_Price_3() { return &___Price_3; }
	inline void set_Price_3(int32_t value)
	{
		___Price_3 = value;
	}

	inline static int32_t get_offset_of_StoreId_4() { return static_cast<int32_t>(offsetof(PurchaseItemRequest_t446597288, ___StoreId_4)); }
	inline String_t* get_StoreId_4() const { return ___StoreId_4; }
	inline String_t** get_address_of_StoreId_4() { return &___StoreId_4; }
	inline void set_StoreId_4(String_t* value)
	{
		___StoreId_4 = value;
		Il2CppCodeGenWriteBarrier((&___StoreId_4), value);
	}

	inline static int32_t get_offset_of_VirtualCurrency_5() { return static_cast<int32_t>(offsetof(PurchaseItemRequest_t446597288, ___VirtualCurrency_5)); }
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
#endif // PURCHASEITEMREQUEST_T446597288_H
#ifndef PURCHASEITEMRESULT_T1722243179_H
#define PURCHASEITEMRESULT_T1722243179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.PurchaseItemResult
struct  PurchaseItemResult_t1722243179  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.PurchaseItemResult::Items
	List_1_t898730215 * ___Items_2;

public:
	inline static int32_t get_offset_of_Items_2() { return static_cast<int32_t>(offsetof(PurchaseItemResult_t1722243179, ___Items_2)); }
	inline List_1_t898730215 * get_Items_2() const { return ___Items_2; }
	inline List_1_t898730215 ** get_address_of_Items_2() { return &___Items_2; }
	inline void set_Items_2(List_1_t898730215 * value)
	{
		___Items_2 = value;
		Il2CppCodeGenWriteBarrier((&___Items_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURCHASEITEMRESULT_T1722243179_H
#ifndef REDEEMCOUPONREQUEST_T236242173_H
#define REDEEMCOUPONREQUEST_T236242173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RedeemCouponRequest
struct  RedeemCouponRequest_t236242173  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.RedeemCouponRequest::CatalogVersion
	String_t* ___CatalogVersion_0;
	// System.String PlayFab.ClientModels.RedeemCouponRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.String PlayFab.ClientModels.RedeemCouponRequest::CouponCode
	String_t* ___CouponCode_2;

public:
	inline static int32_t get_offset_of_CatalogVersion_0() { return static_cast<int32_t>(offsetof(RedeemCouponRequest_t236242173, ___CatalogVersion_0)); }
	inline String_t* get_CatalogVersion_0() const { return ___CatalogVersion_0; }
	inline String_t** get_address_of_CatalogVersion_0() { return &___CatalogVersion_0; }
	inline void set_CatalogVersion_0(String_t* value)
	{
		___CatalogVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_0), value);
	}

	inline static int32_t get_offset_of_CharacterId_1() { return static_cast<int32_t>(offsetof(RedeemCouponRequest_t236242173, ___CharacterId_1)); }
	inline String_t* get_CharacterId_1() const { return ___CharacterId_1; }
	inline String_t** get_address_of_CharacterId_1() { return &___CharacterId_1; }
	inline void set_CharacterId_1(String_t* value)
	{
		___CharacterId_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_1), value);
	}

	inline static int32_t get_offset_of_CouponCode_2() { return static_cast<int32_t>(offsetof(RedeemCouponRequest_t236242173, ___CouponCode_2)); }
	inline String_t* get_CouponCode_2() const { return ___CouponCode_2; }
	inline String_t** get_address_of_CouponCode_2() { return &___CouponCode_2; }
	inline void set_CouponCode_2(String_t* value)
	{
		___CouponCode_2 = value;
		Il2CppCodeGenWriteBarrier((&___CouponCode_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REDEEMCOUPONREQUEST_T236242173_H
#ifndef REDEEMCOUPONRESULT_T4207086596_H
#define REDEEMCOUPONRESULT_T4207086596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RedeemCouponResult
struct  RedeemCouponResult_t4207086596  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.RedeemCouponResult::GrantedItems
	List_1_t898730215 * ___GrantedItems_2;

public:
	inline static int32_t get_offset_of_GrantedItems_2() { return static_cast<int32_t>(offsetof(RedeemCouponResult_t4207086596, ___GrantedItems_2)); }
	inline List_1_t898730215 * get_GrantedItems_2() const { return ___GrantedItems_2; }
	inline List_1_t898730215 ** get_address_of_GrantedItems_2() { return &___GrantedItems_2; }
	inline void set_GrantedItems_2(List_1_t898730215 * value)
	{
		___GrantedItems_2 = value;
		Il2CppCodeGenWriteBarrier((&___GrantedItems_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REDEEMCOUPONRESULT_T4207086596_H
#ifndef REGISTERFORIOSPUSHNOTIFICATIONRESULT_T2256269114_H
#define REGISTERFORIOSPUSHNOTIFICATIONRESULT_T2256269114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RegisterForIOSPushNotificationResult
struct  RegisterForIOSPushNotificationResult_t2256269114  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTERFORIOSPUSHNOTIFICATIONRESULT_T2256269114_H
#ifndef REGISTERPLAYFABUSERRESULT_T802479880_H
#define REGISTERPLAYFABUSERRESULT_T802479880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RegisterPlayFabUserResult
struct  RegisterPlayFabUserResult_t802479880  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.ClientModels.EntityTokenResponse PlayFab.ClientModels.RegisterPlayFabUserResult::EntityToken
	EntityTokenResponse_t1814794135 * ___EntityToken_2;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserResult::PlayFabId
	String_t* ___PlayFabId_3;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserResult::SessionTicket
	String_t* ___SessionTicket_4;
	// PlayFab.ClientModels.UserSettings PlayFab.ClientModels.RegisterPlayFabUserResult::SettingsForUser
	UserSettings_t3054366223 * ___SettingsForUser_5;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserResult::Username
	String_t* ___Username_6;

public:
	inline static int32_t get_offset_of_EntityToken_2() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserResult_t802479880, ___EntityToken_2)); }
	inline EntityTokenResponse_t1814794135 * get_EntityToken_2() const { return ___EntityToken_2; }
	inline EntityTokenResponse_t1814794135 ** get_address_of_EntityToken_2() { return &___EntityToken_2; }
	inline void set_EntityToken_2(EntityTokenResponse_t1814794135 * value)
	{
		___EntityToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___EntityToken_2), value);
	}

	inline static int32_t get_offset_of_PlayFabId_3() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserResult_t802479880, ___PlayFabId_3)); }
	inline String_t* get_PlayFabId_3() const { return ___PlayFabId_3; }
	inline String_t** get_address_of_PlayFabId_3() { return &___PlayFabId_3; }
	inline void set_PlayFabId_3(String_t* value)
	{
		___PlayFabId_3 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_3), value);
	}

	inline static int32_t get_offset_of_SessionTicket_4() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserResult_t802479880, ___SessionTicket_4)); }
	inline String_t* get_SessionTicket_4() const { return ___SessionTicket_4; }
	inline String_t** get_address_of_SessionTicket_4() { return &___SessionTicket_4; }
	inline void set_SessionTicket_4(String_t* value)
	{
		___SessionTicket_4 = value;
		Il2CppCodeGenWriteBarrier((&___SessionTicket_4), value);
	}

	inline static int32_t get_offset_of_SettingsForUser_5() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserResult_t802479880, ___SettingsForUser_5)); }
	inline UserSettings_t3054366223 * get_SettingsForUser_5() const { return ___SettingsForUser_5; }
	inline UserSettings_t3054366223 ** get_address_of_SettingsForUser_5() { return &___SettingsForUser_5; }
	inline void set_SettingsForUser_5(UserSettings_t3054366223 * value)
	{
		___SettingsForUser_5 = value;
		Il2CppCodeGenWriteBarrier((&___SettingsForUser_5), value);
	}

	inline static int32_t get_offset_of_Username_6() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserResult_t802479880, ___Username_6)); }
	inline String_t* get_Username_6() const { return ___Username_6; }
	inline String_t** get_address_of_Username_6() { return &___Username_6; }
	inline void set_Username_6(String_t* value)
	{
		___Username_6 = value;
		Il2CppCodeGenWriteBarrier((&___Username_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTERPLAYFABUSERRESULT_T802479880_H
#ifndef REMOVECONTACTEMAILREQUEST_T1252854948_H
#define REMOVECONTACTEMAILREQUEST_T1252854948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RemoveContactEmailRequest
struct  RemoveContactEmailRequest_t1252854948  : public PlayFabRequestCommon_t229319069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVECONTACTEMAILREQUEST_T1252854948_H
#ifndef REMOVECONTACTEMAILRESULT_T1684933791_H
#define REMOVECONTACTEMAILRESULT_T1684933791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RemoveContactEmailResult
struct  RemoveContactEmailResult_t1684933791  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVECONTACTEMAILRESULT_T1684933791_H
#ifndef REMOVEFRIENDREQUEST_T4181183992_H
#define REMOVEFRIENDREQUEST_T4181183992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RemoveFriendRequest
struct  RemoveFriendRequest_t4181183992  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.RemoveFriendRequest::FriendPlayFabId
	String_t* ___FriendPlayFabId_0;

public:
	inline static int32_t get_offset_of_FriendPlayFabId_0() { return static_cast<int32_t>(offsetof(RemoveFriendRequest_t4181183992, ___FriendPlayFabId_0)); }
	inline String_t* get_FriendPlayFabId_0() const { return ___FriendPlayFabId_0; }
	inline String_t** get_address_of_FriendPlayFabId_0() { return &___FriendPlayFabId_0; }
	inline void set_FriendPlayFabId_0(String_t* value)
	{
		___FriendPlayFabId_0 = value;
		Il2CppCodeGenWriteBarrier((&___FriendPlayFabId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVEFRIENDREQUEST_T4181183992_H
#ifndef REMOVEFRIENDRESULT_T1519141523_H
#define REMOVEFRIENDRESULT_T1519141523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RemoveFriendResult
struct  RemoveFriendResult_t1519141523  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVEFRIENDRESULT_T1519141523_H
#ifndef REMOVEGENERICIDREQUEST_T1674395511_H
#define REMOVEGENERICIDREQUEST_T1674395511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RemoveGenericIDRequest
struct  RemoveGenericIDRequest_t1674395511  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.ClientModels.GenericServiceId PlayFab.ClientModels.RemoveGenericIDRequest::GenericId
	GenericServiceId_t3400130533 * ___GenericId_0;

public:
	inline static int32_t get_offset_of_GenericId_0() { return static_cast<int32_t>(offsetof(RemoveGenericIDRequest_t1674395511, ___GenericId_0)); }
	inline GenericServiceId_t3400130533 * get_GenericId_0() const { return ___GenericId_0; }
	inline GenericServiceId_t3400130533 ** get_address_of_GenericId_0() { return &___GenericId_0; }
	inline void set_GenericId_0(GenericServiceId_t3400130533 * value)
	{
		___GenericId_0 = value;
		Il2CppCodeGenWriteBarrier((&___GenericId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVEGENERICIDREQUEST_T1674395511_H
#ifndef REMOVEGENERICIDRESULT_T3234682150_H
#define REMOVEGENERICIDRESULT_T3234682150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RemoveGenericIDResult
struct  RemoveGenericIDResult_t3234682150  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVEGENERICIDRESULT_T3234682150_H
#ifndef REMOVESHAREDGROUPMEMBERSREQUEST_T3650533269_H
#define REMOVESHAREDGROUPMEMBERSREQUEST_T3650533269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RemoveSharedGroupMembersRequest
struct  RemoveSharedGroupMembersRequest_t3650533269  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.RemoveSharedGroupMembersRequest::PlayFabIds
	List_1_t3319525431 * ___PlayFabIds_0;
	// System.String PlayFab.ClientModels.RemoveSharedGroupMembersRequest::SharedGroupId
	String_t* ___SharedGroupId_1;

public:
	inline static int32_t get_offset_of_PlayFabIds_0() { return static_cast<int32_t>(offsetof(RemoveSharedGroupMembersRequest_t3650533269, ___PlayFabIds_0)); }
	inline List_1_t3319525431 * get_PlayFabIds_0() const { return ___PlayFabIds_0; }
	inline List_1_t3319525431 ** get_address_of_PlayFabIds_0() { return &___PlayFabIds_0; }
	inline void set_PlayFabIds_0(List_1_t3319525431 * value)
	{
		___PlayFabIds_0 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabIds_0), value);
	}

	inline static int32_t get_offset_of_SharedGroupId_1() { return static_cast<int32_t>(offsetof(RemoveSharedGroupMembersRequest_t3650533269, ___SharedGroupId_1)); }
	inline String_t* get_SharedGroupId_1() const { return ___SharedGroupId_1; }
	inline String_t** get_address_of_SharedGroupId_1() { return &___SharedGroupId_1; }
	inline void set_SharedGroupId_1(String_t* value)
	{
		___SharedGroupId_1 = value;
		Il2CppCodeGenWriteBarrier((&___SharedGroupId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVESHAREDGROUPMEMBERSREQUEST_T3650533269_H
#ifndef REMOVESHAREDGROUPMEMBERSRESULT_T1660437242_H
#define REMOVESHAREDGROUPMEMBERSRESULT_T1660437242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RemoveSharedGroupMembersResult
struct  RemoveSharedGroupMembersResult_t1660437242  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVESHAREDGROUPMEMBERSRESULT_T1660437242_H
#ifndef REPORTPLAYERCLIENTREQUEST_T2988748114_H
#define REPORTPLAYERCLIENTREQUEST_T2988748114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ReportPlayerClientRequest
struct  ReportPlayerClientRequest_t2988748114  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.ReportPlayerClientRequest::Comment
	String_t* ___Comment_0;
	// System.String PlayFab.ClientModels.ReportPlayerClientRequest::ReporteeId
	String_t* ___ReporteeId_1;

public:
	inline static int32_t get_offset_of_Comment_0() { return static_cast<int32_t>(offsetof(ReportPlayerClientRequest_t2988748114, ___Comment_0)); }
	inline String_t* get_Comment_0() const { return ___Comment_0; }
	inline String_t** get_address_of_Comment_0() { return &___Comment_0; }
	inline void set_Comment_0(String_t* value)
	{
		___Comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___Comment_0), value);
	}

	inline static int32_t get_offset_of_ReporteeId_1() { return static_cast<int32_t>(offsetof(ReportPlayerClientRequest_t2988748114, ___ReporteeId_1)); }
	inline String_t* get_ReporteeId_1() const { return ___ReporteeId_1; }
	inline String_t** get_address_of_ReporteeId_1() { return &___ReporteeId_1; }
	inline void set_ReporteeId_1(String_t* value)
	{
		___ReporteeId_1 = value;
		Il2CppCodeGenWriteBarrier((&___ReporteeId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPORTPLAYERCLIENTREQUEST_T2988748114_H
#ifndef REPORTPLAYERCLIENTRESULT_T3799493971_H
#define REPORTPLAYERCLIENTRESULT_T3799493971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ReportPlayerClientResult
struct  ReportPlayerClientResult_t3799493971  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Int32 PlayFab.ClientModels.ReportPlayerClientResult::SubmissionsRemaining
	int32_t ___SubmissionsRemaining_2;

public:
	inline static int32_t get_offset_of_SubmissionsRemaining_2() { return static_cast<int32_t>(offsetof(ReportPlayerClientResult_t3799493971, ___SubmissionsRemaining_2)); }
	inline int32_t get_SubmissionsRemaining_2() const { return ___SubmissionsRemaining_2; }
	inline int32_t* get_address_of_SubmissionsRemaining_2() { return &___SubmissionsRemaining_2; }
	inline void set_SubmissionsRemaining_2(int32_t value)
	{
		___SubmissionsRemaining_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPORTPLAYERCLIENTRESULT_T3799493971_H
#ifndef RESTOREIOSPURCHASESREQUEST_T2021516304_H
#define RESTOREIOSPURCHASESREQUEST_T2021516304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RestoreIOSPurchasesRequest
struct  RestoreIOSPurchasesRequest_t2021516304  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.RestoreIOSPurchasesRequest::ReceiptData
	String_t* ___ReceiptData_0;

public:
	inline static int32_t get_offset_of_ReceiptData_0() { return static_cast<int32_t>(offsetof(RestoreIOSPurchasesRequest_t2021516304, ___ReceiptData_0)); }
	inline String_t* get_ReceiptData_0() const { return ___ReceiptData_0; }
	inline String_t** get_address_of_ReceiptData_0() { return &___ReceiptData_0; }
	inline void set_ReceiptData_0(String_t* value)
	{
		___ReceiptData_0 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiptData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESTOREIOSPURCHASESREQUEST_T2021516304_H
#ifndef RESTOREIOSPURCHASESRESULT_T2500978621_H
#define RESTOREIOSPURCHASESRESULT_T2500978621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RestoreIOSPurchasesResult
struct  RestoreIOSPurchasesResult_t2500978621  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESTOREIOSPURCHASESRESULT_T2500978621_H
#ifndef SENDACCOUNTRECOVERYEMAILREQUEST_T3630781634_H
#define SENDACCOUNTRECOVERYEMAILREQUEST_T3630781634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.SendAccountRecoveryEmailRequest
struct  SendAccountRecoveryEmailRequest_t3630781634  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.SendAccountRecoveryEmailRequest::Email
	String_t* ___Email_0;
	// System.String PlayFab.ClientModels.SendAccountRecoveryEmailRequest::EmailTemplateId
	String_t* ___EmailTemplateId_1;
	// System.String PlayFab.ClientModels.SendAccountRecoveryEmailRequest::TitleId
	String_t* ___TitleId_2;

public:
	inline static int32_t get_offset_of_Email_0() { return static_cast<int32_t>(offsetof(SendAccountRecoveryEmailRequest_t3630781634, ___Email_0)); }
	inline String_t* get_Email_0() const { return ___Email_0; }
	inline String_t** get_address_of_Email_0() { return &___Email_0; }
	inline void set_Email_0(String_t* value)
	{
		___Email_0 = value;
		Il2CppCodeGenWriteBarrier((&___Email_0), value);
	}

	inline static int32_t get_offset_of_EmailTemplateId_1() { return static_cast<int32_t>(offsetof(SendAccountRecoveryEmailRequest_t3630781634, ___EmailTemplateId_1)); }
	inline String_t* get_EmailTemplateId_1() const { return ___EmailTemplateId_1; }
	inline String_t** get_address_of_EmailTemplateId_1() { return &___EmailTemplateId_1; }
	inline void set_EmailTemplateId_1(String_t* value)
	{
		___EmailTemplateId_1 = value;
		Il2CppCodeGenWriteBarrier((&___EmailTemplateId_1), value);
	}

	inline static int32_t get_offset_of_TitleId_2() { return static_cast<int32_t>(offsetof(SendAccountRecoveryEmailRequest_t3630781634, ___TitleId_2)); }
	inline String_t* get_TitleId_2() const { return ___TitleId_2; }
	inline String_t** get_address_of_TitleId_2() { return &___TitleId_2; }
	inline void set_TitleId_2(String_t* value)
	{
		___TitleId_2 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDACCOUNTRECOVERYEMAILREQUEST_T3630781634_H
#ifndef SENDACCOUNTRECOVERYEMAILRESULT_T550548115_H
#define SENDACCOUNTRECOVERYEMAILRESULT_T550548115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.SendAccountRecoveryEmailResult
struct  SendAccountRecoveryEmailResult_t550548115  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDACCOUNTRECOVERYEMAILRESULT_T550548115_H
#ifndef SETFRIENDTAGSREQUEST_T2241574297_H
#define SETFRIENDTAGSREQUEST_T2241574297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.SetFriendTagsRequest
struct  SetFriendTagsRequest_t2241574297  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.SetFriendTagsRequest::FriendPlayFabId
	String_t* ___FriendPlayFabId_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.SetFriendTagsRequest::Tags
	List_1_t3319525431 * ___Tags_1;

public:
	inline static int32_t get_offset_of_FriendPlayFabId_0() { return static_cast<int32_t>(offsetof(SetFriendTagsRequest_t2241574297, ___FriendPlayFabId_0)); }
	inline String_t* get_FriendPlayFabId_0() const { return ___FriendPlayFabId_0; }
	inline String_t** get_address_of_FriendPlayFabId_0() { return &___FriendPlayFabId_0; }
	inline void set_FriendPlayFabId_0(String_t* value)
	{
		___FriendPlayFabId_0 = value;
		Il2CppCodeGenWriteBarrier((&___FriendPlayFabId_0), value);
	}

	inline static int32_t get_offset_of_Tags_1() { return static_cast<int32_t>(offsetof(SetFriendTagsRequest_t2241574297, ___Tags_1)); }
	inline List_1_t3319525431 * get_Tags_1() const { return ___Tags_1; }
	inline List_1_t3319525431 ** get_address_of_Tags_1() { return &___Tags_1; }
	inline void set_Tags_1(List_1_t3319525431 * value)
	{
		___Tags_1 = value;
		Il2CppCodeGenWriteBarrier((&___Tags_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETFRIENDTAGSREQUEST_T2241574297_H
#ifndef SETFRIENDTAGSRESULT_T4002085899_H
#define SETFRIENDTAGSRESULT_T4002085899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.SetFriendTagsResult
struct  SetFriendTagsResult_t4002085899  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETFRIENDTAGSRESULT_T4002085899_H
#ifndef SETPLAYERSECRETREQUEST_T226361414_H
#define SETPLAYERSECRETREQUEST_T226361414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.SetPlayerSecretRequest
struct  SetPlayerSecretRequest_t226361414  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.SetPlayerSecretRequest::EncryptedRequest
	String_t* ___EncryptedRequest_0;
	// System.String PlayFab.ClientModels.SetPlayerSecretRequest::PlayerSecret
	String_t* ___PlayerSecret_1;

public:
	inline static int32_t get_offset_of_EncryptedRequest_0() { return static_cast<int32_t>(offsetof(SetPlayerSecretRequest_t226361414, ___EncryptedRequest_0)); }
	inline String_t* get_EncryptedRequest_0() const { return ___EncryptedRequest_0; }
	inline String_t** get_address_of_EncryptedRequest_0() { return &___EncryptedRequest_0; }
	inline void set_EncryptedRequest_0(String_t* value)
	{
		___EncryptedRequest_0 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_0), value);
	}

	inline static int32_t get_offset_of_PlayerSecret_1() { return static_cast<int32_t>(offsetof(SetPlayerSecretRequest_t226361414, ___PlayerSecret_1)); }
	inline String_t* get_PlayerSecret_1() const { return ___PlayerSecret_1; }
	inline String_t** get_address_of_PlayerSecret_1() { return &___PlayerSecret_1; }
	inline void set_PlayerSecret_1(String_t* value)
	{
		___PlayerSecret_1 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETPLAYERSECRETREQUEST_T226361414_H
#ifndef SETPLAYERSECRETRESULT_T1859896565_H
#define SETPLAYERSECRETRESULT_T1859896565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.SetPlayerSecretResult
struct  SetPlayerSecretResult_t1859896565  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETPLAYERSECRETRESULT_T1859896565_H
#ifndef STARTPURCHASEREQUEST_T1560898140_H
#define STARTPURCHASEREQUEST_T1560898140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.StartPurchaseRequest
struct  StartPurchaseRequest_t1560898140  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.StartPurchaseRequest::CatalogVersion
	String_t* ___CatalogVersion_0;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemPurchaseRequest> PlayFab.ClientModels.StartPurchaseRequest::Items
	List_1_t3805761739 * ___Items_1;
	// System.String PlayFab.ClientModels.StartPurchaseRequest::StoreId
	String_t* ___StoreId_2;

public:
	inline static int32_t get_offset_of_CatalogVersion_0() { return static_cast<int32_t>(offsetof(StartPurchaseRequest_t1560898140, ___CatalogVersion_0)); }
	inline String_t* get_CatalogVersion_0() const { return ___CatalogVersion_0; }
	inline String_t** get_address_of_CatalogVersion_0() { return &___CatalogVersion_0; }
	inline void set_CatalogVersion_0(String_t* value)
	{
		___CatalogVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_0), value);
	}

	inline static int32_t get_offset_of_Items_1() { return static_cast<int32_t>(offsetof(StartPurchaseRequest_t1560898140, ___Items_1)); }
	inline List_1_t3805761739 * get_Items_1() const { return ___Items_1; }
	inline List_1_t3805761739 ** get_address_of_Items_1() { return &___Items_1; }
	inline void set_Items_1(List_1_t3805761739 * value)
	{
		___Items_1 = value;
		Il2CppCodeGenWriteBarrier((&___Items_1), value);
	}

	inline static int32_t get_offset_of_StoreId_2() { return static_cast<int32_t>(offsetof(StartPurchaseRequest_t1560898140, ___StoreId_2)); }
	inline String_t* get_StoreId_2() const { return ___StoreId_2; }
	inline String_t** get_address_of_StoreId_2() { return &___StoreId_2; }
	inline void set_StoreId_2(String_t* value)
	{
		___StoreId_2 = value;
		Il2CppCodeGenWriteBarrier((&___StoreId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTPURCHASEREQUEST_T1560898140_H
#ifndef STARTPURCHASERESULT_T322616865_H
#define STARTPURCHASERESULT_T322616865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.StartPurchaseResult
struct  StartPurchaseResult_t322616865  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CartItem> PlayFab.ClientModels.StartPurchaseResult::Contents
	List_1_t2141460274 * ___Contents_2;
	// System.String PlayFab.ClientModels.StartPurchaseResult::OrderId
	String_t* ___OrderId_3;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PaymentOption> PlayFab.ClientModels.StartPurchaseResult::PaymentOptions
	List_1_t2421373131 * ___PaymentOptions_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.StartPurchaseResult::VirtualCurrencyBalances
	Dictionary_2_t2736202052 * ___VirtualCurrencyBalances_5;

public:
	inline static int32_t get_offset_of_Contents_2() { return static_cast<int32_t>(offsetof(StartPurchaseResult_t322616865, ___Contents_2)); }
	inline List_1_t2141460274 * get_Contents_2() const { return ___Contents_2; }
	inline List_1_t2141460274 ** get_address_of_Contents_2() { return &___Contents_2; }
	inline void set_Contents_2(List_1_t2141460274 * value)
	{
		___Contents_2 = value;
		Il2CppCodeGenWriteBarrier((&___Contents_2), value);
	}

	inline static int32_t get_offset_of_OrderId_3() { return static_cast<int32_t>(offsetof(StartPurchaseResult_t322616865, ___OrderId_3)); }
	inline String_t* get_OrderId_3() const { return ___OrderId_3; }
	inline String_t** get_address_of_OrderId_3() { return &___OrderId_3; }
	inline void set_OrderId_3(String_t* value)
	{
		___OrderId_3 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_3), value);
	}

	inline static int32_t get_offset_of_PaymentOptions_4() { return static_cast<int32_t>(offsetof(StartPurchaseResult_t322616865, ___PaymentOptions_4)); }
	inline List_1_t2421373131 * get_PaymentOptions_4() const { return ___PaymentOptions_4; }
	inline List_1_t2421373131 ** get_address_of_PaymentOptions_4() { return &___PaymentOptions_4; }
	inline void set_PaymentOptions_4(List_1_t2421373131 * value)
	{
		___PaymentOptions_4 = value;
		Il2CppCodeGenWriteBarrier((&___PaymentOptions_4), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyBalances_5() { return static_cast<int32_t>(offsetof(StartPurchaseResult_t322616865, ___VirtualCurrencyBalances_5)); }
	inline Dictionary_2_t2736202052 * get_VirtualCurrencyBalances_5() const { return ___VirtualCurrencyBalances_5; }
	inline Dictionary_2_t2736202052 ** get_address_of_VirtualCurrencyBalances_5() { return &___VirtualCurrencyBalances_5; }
	inline void set_VirtualCurrencyBalances_5(Dictionary_2_t2736202052 * value)
	{
		___VirtualCurrencyBalances_5 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyBalances_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTPURCHASERESULT_T322616865_H
#ifndef SUBTRACTUSERVIRTUALCURRENCYREQUEST_T2836060639_H
#define SUBTRACTUSERVIRTUALCURRENCYREQUEST_T2836060639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.SubtractUserVirtualCurrencyRequest
struct  SubtractUserVirtualCurrencyRequest_t2836060639  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Int32 PlayFab.ClientModels.SubtractUserVirtualCurrencyRequest::Amount
	int32_t ___Amount_0;
	// System.String PlayFab.ClientModels.SubtractUserVirtualCurrencyRequest::VirtualCurrency
	String_t* ___VirtualCurrency_1;

public:
	inline static int32_t get_offset_of_Amount_0() { return static_cast<int32_t>(offsetof(SubtractUserVirtualCurrencyRequest_t2836060639, ___Amount_0)); }
	inline int32_t get_Amount_0() const { return ___Amount_0; }
	inline int32_t* get_address_of_Amount_0() { return &___Amount_0; }
	inline void set_Amount_0(int32_t value)
	{
		___Amount_0 = value;
	}

	inline static int32_t get_offset_of_VirtualCurrency_1() { return static_cast<int32_t>(offsetof(SubtractUserVirtualCurrencyRequest_t2836060639, ___VirtualCurrency_1)); }
	inline String_t* get_VirtualCurrency_1() const { return ___VirtualCurrency_1; }
	inline String_t** get_address_of_VirtualCurrency_1() { return &___VirtualCurrency_1; }
	inline void set_VirtualCurrency_1(String_t* value)
	{
		___VirtualCurrency_1 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrency_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBTRACTUSERVIRTUALCURRENCYREQUEST_T2836060639_H
#ifndef UNLINKANDROIDDEVICEIDREQUEST_T1847446916_H
#define UNLINKANDROIDDEVICEIDREQUEST_T1847446916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkAndroidDeviceIDRequest
struct  UnlinkAndroidDeviceIDRequest_t1847446916  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UnlinkAndroidDeviceIDRequest::AndroidDeviceId
	String_t* ___AndroidDeviceId_0;

public:
	inline static int32_t get_offset_of_AndroidDeviceId_0() { return static_cast<int32_t>(offsetof(UnlinkAndroidDeviceIDRequest_t1847446916, ___AndroidDeviceId_0)); }
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
#endif // UNLINKANDROIDDEVICEIDREQUEST_T1847446916_H
#ifndef UNLINKANDROIDDEVICEIDRESULT_T1333511660_H
#define UNLINKANDROIDDEVICEIDRESULT_T1333511660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkAndroidDeviceIDResult
struct  UnlinkAndroidDeviceIDResult_t1333511660  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKANDROIDDEVICEIDRESULT_T1333511660_H
#ifndef UNLINKCUSTOMIDREQUEST_T211480731_H
#define UNLINKCUSTOMIDREQUEST_T211480731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkCustomIDRequest
struct  UnlinkCustomIDRequest_t211480731  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UnlinkCustomIDRequest::CustomId
	String_t* ___CustomId_0;

public:
	inline static int32_t get_offset_of_CustomId_0() { return static_cast<int32_t>(offsetof(UnlinkCustomIDRequest_t211480731, ___CustomId_0)); }
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
#endif // UNLINKCUSTOMIDREQUEST_T211480731_H
#ifndef UNLINKCUSTOMIDRESULT_T3699896482_H
#define UNLINKCUSTOMIDRESULT_T3699896482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkCustomIDResult
struct  UnlinkCustomIDResult_t3699896482  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKCUSTOMIDRESULT_T3699896482_H
#ifndef UNLINKFACEBOOKACCOUNTREQUEST_T1821811487_H
#define UNLINKFACEBOOKACCOUNTREQUEST_T1821811487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkFacebookAccountRequest
struct  UnlinkFacebookAccountRequest_t1821811487  : public PlayFabRequestCommon_t229319069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKFACEBOOKACCOUNTREQUEST_T1821811487_H
#ifndef UNLINKFACEBOOKACCOUNTRESULT_T3945255406_H
#define UNLINKFACEBOOKACCOUNTRESULT_T3945255406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkFacebookAccountResult
struct  UnlinkFacebookAccountResult_t3945255406  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKFACEBOOKACCOUNTRESULT_T3945255406_H
#ifndef UNLINKFACEBOOKINSTANTGAMESIDREQUEST_T2506757754_H
#define UNLINKFACEBOOKINSTANTGAMESIDREQUEST_T2506757754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkFacebookInstantGamesIdRequest
struct  UnlinkFacebookInstantGamesIdRequest_t2506757754  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UnlinkFacebookInstantGamesIdRequest::FacebookInstantGamesId
	String_t* ___FacebookInstantGamesId_0;

public:
	inline static int32_t get_offset_of_FacebookInstantGamesId_0() { return static_cast<int32_t>(offsetof(UnlinkFacebookInstantGamesIdRequest_t2506757754, ___FacebookInstantGamesId_0)); }
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
#endif // UNLINKFACEBOOKINSTANTGAMESIDREQUEST_T2506757754_H
#ifndef UNLINKFACEBOOKINSTANTGAMESIDRESULT_T150922813_H
#define UNLINKFACEBOOKINSTANTGAMESIDRESULT_T150922813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkFacebookInstantGamesIdResult
struct  UnlinkFacebookInstantGamesIdResult_t150922813  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKFACEBOOKINSTANTGAMESIDRESULT_T150922813_H
#ifndef UNLINKGAMECENTERACCOUNTREQUEST_T887789930_H
#define UNLINKGAMECENTERACCOUNTREQUEST_T887789930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkGameCenterAccountRequest
struct  UnlinkGameCenterAccountRequest_t887789930  : public PlayFabRequestCommon_t229319069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKGAMECENTERACCOUNTREQUEST_T887789930_H
#ifndef UNLINKGAMECENTERACCOUNTRESULT_T3227499617_H
#define UNLINKGAMECENTERACCOUNTRESULT_T3227499617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkGameCenterAccountResult
struct  UnlinkGameCenterAccountResult_t3227499617  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKGAMECENTERACCOUNTRESULT_T3227499617_H
#ifndef UNLINKGOOGLEACCOUNTREQUEST_T2190997272_H
#define UNLINKGOOGLEACCOUNTREQUEST_T2190997272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkGoogleAccountRequest
struct  UnlinkGoogleAccountRequest_t2190997272  : public PlayFabRequestCommon_t229319069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKGOOGLEACCOUNTREQUEST_T2190997272_H
#ifndef UNLINKGOOGLEACCOUNTRESULT_T261921105_H
#define UNLINKGOOGLEACCOUNTRESULT_T261921105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkGoogleAccountResult
struct  UnlinkGoogleAccountResult_t261921105  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKGOOGLEACCOUNTRESULT_T261921105_H
#ifndef UNLINKIOSDEVICEIDREQUEST_T1460914532_H
#define UNLINKIOSDEVICEIDREQUEST_T1460914532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkIOSDeviceIDRequest
struct  UnlinkIOSDeviceIDRequest_t1460914532  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UnlinkIOSDeviceIDRequest::DeviceId
	String_t* ___DeviceId_0;

public:
	inline static int32_t get_offset_of_DeviceId_0() { return static_cast<int32_t>(offsetof(UnlinkIOSDeviceIDRequest_t1460914532, ___DeviceId_0)); }
	inline String_t* get_DeviceId_0() const { return ___DeviceId_0; }
	inline String_t** get_address_of_DeviceId_0() { return &___DeviceId_0; }
	inline void set_DeviceId_0(String_t* value)
	{
		___DeviceId_0 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKIOSDEVICEIDREQUEST_T1460914532_H
#ifndef UNLINKIOSDEVICEIDRESULT_T2913467552_H
#define UNLINKIOSDEVICEIDRESULT_T2913467552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkIOSDeviceIDResult
struct  UnlinkIOSDeviceIDResult_t2913467552  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKIOSDEVICEIDRESULT_T2913467552_H
#ifndef UNLINKKONGREGATEACCOUNTREQUEST_T3532493616_H
#define UNLINKKONGREGATEACCOUNTREQUEST_T3532493616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkKongregateAccountRequest
struct  UnlinkKongregateAccountRequest_t3532493616  : public PlayFabRequestCommon_t229319069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKKONGREGATEACCOUNTREQUEST_T3532493616_H
#ifndef UNLINKKONGREGATEACCOUNTRESULT_T1677538191_H
#define UNLINKKONGREGATEACCOUNTRESULT_T1677538191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkKongregateAccountResult
struct  UnlinkKongregateAccountResult_t1677538191  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKKONGREGATEACCOUNTRESULT_T1677538191_H
#ifndef UNLINKNINTENDOSWITCHDEVICEIDREQUEST_T80719688_H
#define UNLINKNINTENDOSWITCHDEVICEIDREQUEST_T80719688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdRequest
struct  UnlinkNintendoSwitchDeviceIdRequest_t80719688  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdRequest::NintendoSwitchDeviceId
	String_t* ___NintendoSwitchDeviceId_0;

public:
	inline static int32_t get_offset_of_NintendoSwitchDeviceId_0() { return static_cast<int32_t>(offsetof(UnlinkNintendoSwitchDeviceIdRequest_t80719688, ___NintendoSwitchDeviceId_0)); }
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
#endif // UNLINKNINTENDOSWITCHDEVICEIDREQUEST_T80719688_H
#ifndef UNLINKNINTENDOSWITCHDEVICEIDRESULT_T2877253697_H
#define UNLINKNINTENDOSWITCHDEVICEIDRESULT_T2877253697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdResult
struct  UnlinkNintendoSwitchDeviceIdResult_t2877253697  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKNINTENDOSWITCHDEVICEIDRESULT_T2877253697_H
#ifndef UNLINKSTEAMACCOUNTREQUEST_T1633183653_H
#define UNLINKSTEAMACCOUNTREQUEST_T1633183653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkSteamAccountRequest
struct  UnlinkSteamAccountRequest_t1633183653  : public PlayFabRequestCommon_t229319069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKSTEAMACCOUNTREQUEST_T1633183653_H
#ifndef UNLINKSTEAMACCOUNTRESULT_T1196386210_H
#define UNLINKSTEAMACCOUNTRESULT_T1196386210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkSteamAccountResult
struct  UnlinkSteamAccountResult_t1196386210  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKSTEAMACCOUNTRESULT_T1196386210_H
#ifndef UNLINKTWITCHACCOUNTREQUEST_T1805171282_H
#define UNLINKTWITCHACCOUNTREQUEST_T1805171282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkTwitchAccountRequest
struct  UnlinkTwitchAccountRequest_t1805171282  : public PlayFabRequestCommon_t229319069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKTWITCHACCOUNTREQUEST_T1805171282_H
#ifndef UNLINKTWITCHACCOUNTRESULT_T3093969921_H
#define UNLINKTWITCHACCOUNTRESULT_T3093969921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkTwitchAccountResult
struct  UnlinkTwitchAccountResult_t3093969921  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKTWITCHACCOUNTRESULT_T3093969921_H
#ifndef UNLINKWINDOWSHELLOACCOUNTREQUEST_T275323180_H
#define UNLINKWINDOWSHELLOACCOUNTREQUEST_T275323180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkWindowsHelloAccountRequest
struct  UnlinkWindowsHelloAccountRequest_t275323180  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UnlinkWindowsHelloAccountRequest::PublicKeyHint
	String_t* ___PublicKeyHint_0;

public:
	inline static int32_t get_offset_of_PublicKeyHint_0() { return static_cast<int32_t>(offsetof(UnlinkWindowsHelloAccountRequest_t275323180, ___PublicKeyHint_0)); }
	inline String_t* get_PublicKeyHint_0() const { return ___PublicKeyHint_0; }
	inline String_t** get_address_of_PublicKeyHint_0() { return &___PublicKeyHint_0; }
	inline void set_PublicKeyHint_0(String_t* value)
	{
		___PublicKeyHint_0 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKeyHint_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKWINDOWSHELLOACCOUNTREQUEST_T275323180_H
#ifndef UNLINKWINDOWSHELLOACCOUNTRESPONSE_T2140972915_H
#define UNLINKWINDOWSHELLOACCOUNTRESPONSE_T2140972915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkWindowsHelloAccountResponse
struct  UnlinkWindowsHelloAccountResponse_t2140972915  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKWINDOWSHELLOACCOUNTRESPONSE_T2140972915_H
#ifndef UNLINKXBOXACCOUNTREQUEST_T3207239382_H
#define UNLINKXBOXACCOUNTREQUEST_T3207239382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkXboxAccountRequest
struct  UnlinkXboxAccountRequest_t3207239382  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UnlinkXboxAccountRequest::XboxToken
	String_t* ___XboxToken_0;

public:
	inline static int32_t get_offset_of_XboxToken_0() { return static_cast<int32_t>(offsetof(UnlinkXboxAccountRequest_t3207239382, ___XboxToken_0)); }
	inline String_t* get_XboxToken_0() const { return ___XboxToken_0; }
	inline String_t** get_address_of_XboxToken_0() { return &___XboxToken_0; }
	inline void set_XboxToken_0(String_t* value)
	{
		___XboxToken_0 = value;
		Il2CppCodeGenWriteBarrier((&___XboxToken_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKXBOXACCOUNTREQUEST_T3207239382_H
#ifndef UNLINKXBOXACCOUNTRESULT_T3640208244_H
#define UNLINKXBOXACCOUNTRESULT_T3640208244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlinkXboxAccountResult
struct  UnlinkXboxAccountResult_t3640208244  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLINKXBOXACCOUNTRESULT_T3640208244_H
#ifndef UNLOCKCONTAINERINSTANCEREQUEST_T1274512457_H
#define UNLOCKCONTAINERINSTANCEREQUEST_T1274512457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlockContainerInstanceRequest
struct  UnlockContainerInstanceRequest_t1274512457  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UnlockContainerInstanceRequest::CatalogVersion
	String_t* ___CatalogVersion_0;
	// System.String PlayFab.ClientModels.UnlockContainerInstanceRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.String PlayFab.ClientModels.UnlockContainerInstanceRequest::ContainerItemInstanceId
	String_t* ___ContainerItemInstanceId_2;
	// System.String PlayFab.ClientModels.UnlockContainerInstanceRequest::KeyItemInstanceId
	String_t* ___KeyItemInstanceId_3;

public:
	inline static int32_t get_offset_of_CatalogVersion_0() { return static_cast<int32_t>(offsetof(UnlockContainerInstanceRequest_t1274512457, ___CatalogVersion_0)); }
	inline String_t* get_CatalogVersion_0() const { return ___CatalogVersion_0; }
	inline String_t** get_address_of_CatalogVersion_0() { return &___CatalogVersion_0; }
	inline void set_CatalogVersion_0(String_t* value)
	{
		___CatalogVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_0), value);
	}

	inline static int32_t get_offset_of_CharacterId_1() { return static_cast<int32_t>(offsetof(UnlockContainerInstanceRequest_t1274512457, ___CharacterId_1)); }
	inline String_t* get_CharacterId_1() const { return ___CharacterId_1; }
	inline String_t** get_address_of_CharacterId_1() { return &___CharacterId_1; }
	inline void set_CharacterId_1(String_t* value)
	{
		___CharacterId_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_1), value);
	}

	inline static int32_t get_offset_of_ContainerItemInstanceId_2() { return static_cast<int32_t>(offsetof(UnlockContainerInstanceRequest_t1274512457, ___ContainerItemInstanceId_2)); }
	inline String_t* get_ContainerItemInstanceId_2() const { return ___ContainerItemInstanceId_2; }
	inline String_t** get_address_of_ContainerItemInstanceId_2() { return &___ContainerItemInstanceId_2; }
	inline void set_ContainerItemInstanceId_2(String_t* value)
	{
		___ContainerItemInstanceId_2 = value;
		Il2CppCodeGenWriteBarrier((&___ContainerItemInstanceId_2), value);
	}

	inline static int32_t get_offset_of_KeyItemInstanceId_3() { return static_cast<int32_t>(offsetof(UnlockContainerInstanceRequest_t1274512457, ___KeyItemInstanceId_3)); }
	inline String_t* get_KeyItemInstanceId_3() const { return ___KeyItemInstanceId_3; }
	inline String_t** get_address_of_KeyItemInstanceId_3() { return &___KeyItemInstanceId_3; }
	inline void set_KeyItemInstanceId_3(String_t* value)
	{
		___KeyItemInstanceId_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyItemInstanceId_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLOCKCONTAINERINSTANCEREQUEST_T1274512457_H
#ifndef UNLOCKCONTAINERITEMREQUEST_T2386906346_H
#define UNLOCKCONTAINERITEMREQUEST_T2386906346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlockContainerItemRequest
struct  UnlockContainerItemRequest_t2386906346  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UnlockContainerItemRequest::CatalogVersion
	String_t* ___CatalogVersion_0;
	// System.String PlayFab.ClientModels.UnlockContainerItemRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.String PlayFab.ClientModels.UnlockContainerItemRequest::ContainerItemId
	String_t* ___ContainerItemId_2;

public:
	inline static int32_t get_offset_of_CatalogVersion_0() { return static_cast<int32_t>(offsetof(UnlockContainerItemRequest_t2386906346, ___CatalogVersion_0)); }
	inline String_t* get_CatalogVersion_0() const { return ___CatalogVersion_0; }
	inline String_t** get_address_of_CatalogVersion_0() { return &___CatalogVersion_0; }
	inline void set_CatalogVersion_0(String_t* value)
	{
		___CatalogVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_0), value);
	}

	inline static int32_t get_offset_of_CharacterId_1() { return static_cast<int32_t>(offsetof(UnlockContainerItemRequest_t2386906346, ___CharacterId_1)); }
	inline String_t* get_CharacterId_1() const { return ___CharacterId_1; }
	inline String_t** get_address_of_CharacterId_1() { return &___CharacterId_1; }
	inline void set_CharacterId_1(String_t* value)
	{
		___CharacterId_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_1), value);
	}

	inline static int32_t get_offset_of_ContainerItemId_2() { return static_cast<int32_t>(offsetof(UnlockContainerItemRequest_t2386906346, ___ContainerItemId_2)); }
	inline String_t* get_ContainerItemId_2() const { return ___ContainerItemId_2; }
	inline String_t** get_address_of_ContainerItemId_2() { return &___ContainerItemId_2; }
	inline void set_ContainerItemId_2(String_t* value)
	{
		___ContainerItemId_2 = value;
		Il2CppCodeGenWriteBarrier((&___ContainerItemId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLOCKCONTAINERITEMREQUEST_T2386906346_H
#ifndef UNLOCKCONTAINERITEMRESULT_T3538577975_H
#define UNLOCKCONTAINERITEMRESULT_T3538577975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UnlockContainerItemResult
struct  UnlockContainerItemResult_t3538577975  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.UnlockContainerItemResult::GrantedItems
	List_1_t898730215 * ___GrantedItems_2;
	// System.String PlayFab.ClientModels.UnlockContainerItemResult::UnlockedItemInstanceId
	String_t* ___UnlockedItemInstanceId_3;
	// System.String PlayFab.ClientModels.UnlockContainerItemResult::UnlockedWithItemInstanceId
	String_t* ___UnlockedWithItemInstanceId_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.UnlockContainerItemResult::VirtualCurrency
	Dictionary_2_t2345318277 * ___VirtualCurrency_5;

public:
	inline static int32_t get_offset_of_GrantedItems_2() { return static_cast<int32_t>(offsetof(UnlockContainerItemResult_t3538577975, ___GrantedItems_2)); }
	inline List_1_t898730215 * get_GrantedItems_2() const { return ___GrantedItems_2; }
	inline List_1_t898730215 ** get_address_of_GrantedItems_2() { return &___GrantedItems_2; }
	inline void set_GrantedItems_2(List_1_t898730215 * value)
	{
		___GrantedItems_2 = value;
		Il2CppCodeGenWriteBarrier((&___GrantedItems_2), value);
	}

	inline static int32_t get_offset_of_UnlockedItemInstanceId_3() { return static_cast<int32_t>(offsetof(UnlockContainerItemResult_t3538577975, ___UnlockedItemInstanceId_3)); }
	inline String_t* get_UnlockedItemInstanceId_3() const { return ___UnlockedItemInstanceId_3; }
	inline String_t** get_address_of_UnlockedItemInstanceId_3() { return &___UnlockedItemInstanceId_3; }
	inline void set_UnlockedItemInstanceId_3(String_t* value)
	{
		___UnlockedItemInstanceId_3 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockedItemInstanceId_3), value);
	}

	inline static int32_t get_offset_of_UnlockedWithItemInstanceId_4() { return static_cast<int32_t>(offsetof(UnlockContainerItemResult_t3538577975, ___UnlockedWithItemInstanceId_4)); }
	inline String_t* get_UnlockedWithItemInstanceId_4() const { return ___UnlockedWithItemInstanceId_4; }
	inline String_t** get_address_of_UnlockedWithItemInstanceId_4() { return &___UnlockedWithItemInstanceId_4; }
	inline void set_UnlockedWithItemInstanceId_4(String_t* value)
	{
		___UnlockedWithItemInstanceId_4 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockedWithItemInstanceId_4), value);
	}

	inline static int32_t get_offset_of_VirtualCurrency_5() { return static_cast<int32_t>(offsetof(UnlockContainerItemResult_t3538577975, ___VirtualCurrency_5)); }
	inline Dictionary_2_t2345318277 * get_VirtualCurrency_5() const { return ___VirtualCurrency_5; }
	inline Dictionary_2_t2345318277 ** get_address_of_VirtualCurrency_5() { return &___VirtualCurrency_5; }
	inline void set_VirtualCurrency_5(Dictionary_2_t2345318277 * value)
	{
		___VirtualCurrency_5 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrency_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLOCKCONTAINERITEMRESULT_T3538577975_H
#ifndef UPDATEAVATARURLREQUEST_T1480905281_H
#define UPDATEAVATARURLREQUEST_T1480905281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdateAvatarUrlRequest
struct  UpdateAvatarUrlRequest_t1480905281  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UpdateAvatarUrlRequest::ImageUrl
	String_t* ___ImageUrl_0;

public:
	inline static int32_t get_offset_of_ImageUrl_0() { return static_cast<int32_t>(offsetof(UpdateAvatarUrlRequest_t1480905281, ___ImageUrl_0)); }
	inline String_t* get_ImageUrl_0() const { return ___ImageUrl_0; }
	inline String_t** get_address_of_ImageUrl_0() { return &___ImageUrl_0; }
	inline void set_ImageUrl_0(String_t* value)
	{
		___ImageUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ImageUrl_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEAVATARURLREQUEST_T1480905281_H
#ifndef UPDATECHARACTERDATARESULT_T2223161901_H
#define UPDATECHARACTERDATARESULT_T2223161901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdateCharacterDataResult
struct  UpdateCharacterDataResult_t2223161901  : public PlayFabResultCommon_t3469603827
{
public:
	// System.UInt32 PlayFab.ClientModels.UpdateCharacterDataResult::DataVersion
	uint32_t ___DataVersion_2;

public:
	inline static int32_t get_offset_of_DataVersion_2() { return static_cast<int32_t>(offsetof(UpdateCharacterDataResult_t2223161901, ___DataVersion_2)); }
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
#endif // UPDATECHARACTERDATARESULT_T2223161901_H
#ifndef UPDATECHARACTERSTATISTICSREQUEST_T4132629260_H
#define UPDATECHARACTERSTATISTICSREQUEST_T4132629260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdateCharacterStatisticsRequest
struct  UpdateCharacterStatisticsRequest_t4132629260  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UpdateCharacterStatisticsRequest::CharacterId
	String_t* ___CharacterId_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.UpdateCharacterStatisticsRequest::CharacterStatistics
	Dictionary_2_t2736202052 * ___CharacterStatistics_1;

public:
	inline static int32_t get_offset_of_CharacterId_0() { return static_cast<int32_t>(offsetof(UpdateCharacterStatisticsRequest_t4132629260, ___CharacterId_0)); }
	inline String_t* get_CharacterId_0() const { return ___CharacterId_0; }
	inline String_t** get_address_of_CharacterId_0() { return &___CharacterId_0; }
	inline void set_CharacterId_0(String_t* value)
	{
		___CharacterId_0 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_0), value);
	}

	inline static int32_t get_offset_of_CharacterStatistics_1() { return static_cast<int32_t>(offsetof(UpdateCharacterStatisticsRequest_t4132629260, ___CharacterStatistics_1)); }
	inline Dictionary_2_t2736202052 * get_CharacterStatistics_1() const { return ___CharacterStatistics_1; }
	inline Dictionary_2_t2736202052 ** get_address_of_CharacterStatistics_1() { return &___CharacterStatistics_1; }
	inline void set_CharacterStatistics_1(Dictionary_2_t2736202052 * value)
	{
		___CharacterStatistics_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterStatistics_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECHARACTERSTATISTICSREQUEST_T4132629260_H
#ifndef UPDATECHARACTERSTATISTICSRESULT_T2136044864_H
#define UPDATECHARACTERSTATISTICSRESULT_T2136044864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdateCharacterStatisticsResult
struct  UpdateCharacterStatisticsResult_t2136044864  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECHARACTERSTATISTICSRESULT_T2136044864_H
#ifndef UPDATEPLAYERSTATISTICSREQUEST_T410410476_H
#define UPDATEPLAYERSTATISTICSREQUEST_T410410476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdatePlayerStatisticsRequest
struct  UpdatePlayerStatisticsRequest_t410410476  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticUpdate> PlayFab.ClientModels.UpdatePlayerStatisticsRequest::Statistics
	List_1_t431464649 * ___Statistics_0;

public:
	inline static int32_t get_offset_of_Statistics_0() { return static_cast<int32_t>(offsetof(UpdatePlayerStatisticsRequest_t410410476, ___Statistics_0)); }
	inline List_1_t431464649 * get_Statistics_0() const { return ___Statistics_0; }
	inline List_1_t431464649 ** get_address_of_Statistics_0() { return &___Statistics_0; }
	inline void set_Statistics_0(List_1_t431464649 * value)
	{
		___Statistics_0 = value;
		Il2CppCodeGenWriteBarrier((&___Statistics_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEPLAYERSTATISTICSREQUEST_T410410476_H
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
#ifndef PUSHNOTIFICATIONPLATFORM_T675897761_H
#define PUSHNOTIFICATIONPLATFORM_T675897761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.PushNotificationPlatform
struct  PushNotificationPlatform_t675897761 
{
public:
	// System.Int32 PlayFab.ClientModels.PushNotificationPlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PushNotificationPlatform_t675897761, ___value___1)); }
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
#endif // PUSHNOTIFICATIONPLATFORM_T675897761_H
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
#ifndef REGISTERFORIOSPUSHNOTIFICATIONREQUEST_T3055742779_H
#define REGISTERFORIOSPUSHNOTIFICATIONREQUEST_T3055742779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RegisterForIOSPushNotificationRequest
struct  RegisterForIOSPushNotificationRequest_t3055742779  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.RegisterForIOSPushNotificationRequest::ConfirmationMessage
	String_t* ___ConfirmationMessage_0;
	// System.String PlayFab.ClientModels.RegisterForIOSPushNotificationRequest::DeviceToken
	String_t* ___DeviceToken_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.RegisterForIOSPushNotificationRequest::SendPushNotificationConfirmation
	Nullable_1_t1819850047  ___SendPushNotificationConfirmation_2;

public:
	inline static int32_t get_offset_of_ConfirmationMessage_0() { return static_cast<int32_t>(offsetof(RegisterForIOSPushNotificationRequest_t3055742779, ___ConfirmationMessage_0)); }
	inline String_t* get_ConfirmationMessage_0() const { return ___ConfirmationMessage_0; }
	inline String_t** get_address_of_ConfirmationMessage_0() { return &___ConfirmationMessage_0; }
	inline void set_ConfirmationMessage_0(String_t* value)
	{
		___ConfirmationMessage_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConfirmationMessage_0), value);
	}

	inline static int32_t get_offset_of_DeviceToken_1() { return static_cast<int32_t>(offsetof(RegisterForIOSPushNotificationRequest_t3055742779, ___DeviceToken_1)); }
	inline String_t* get_DeviceToken_1() const { return ___DeviceToken_1; }
	inline String_t** get_address_of_DeviceToken_1() { return &___DeviceToken_1; }
	inline void set_DeviceToken_1(String_t* value)
	{
		___DeviceToken_1 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceToken_1), value);
	}

	inline static int32_t get_offset_of_SendPushNotificationConfirmation_2() { return static_cast<int32_t>(offsetof(RegisterForIOSPushNotificationRequest_t3055742779, ___SendPushNotificationConfirmation_2)); }
	inline Nullable_1_t1819850047  get_SendPushNotificationConfirmation_2() const { return ___SendPushNotificationConfirmation_2; }
	inline Nullable_1_t1819850047 * get_address_of_SendPushNotificationConfirmation_2() { return &___SendPushNotificationConfirmation_2; }
	inline void set_SendPushNotificationConfirmation_2(Nullable_1_t1819850047  value)
	{
		___SendPushNotificationConfirmation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTERFORIOSPUSHNOTIFICATIONREQUEST_T3055742779_H
#ifndef REGISTERPLAYFABUSERREQUEST_T413887218_H
#define REGISTERPLAYFABUSERREQUEST_T413887218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RegisterPlayFabUserRequest
struct  RegisterPlayFabUserRequest_t413887218  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::DisplayName
	String_t* ___DisplayName_0;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::Email
	String_t* ___Email_1;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::EncryptedRequest
	String_t* ___EncryptedRequest_2;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.RegisterPlayFabUserRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_3;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.RegisterPlayFabUserRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_4;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::Password
	String_t* ___Password_5;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::PlayerSecret
	String_t* ___PlayerSecret_6;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.RegisterPlayFabUserRequest::RequireBothUsernameAndEmail
	Nullable_1_t1819850047  ___RequireBothUsernameAndEmail_7;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::TitleId
	String_t* ___TitleId_8;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::Username
	String_t* ___Username_9;

public:
	inline static int32_t get_offset_of_DisplayName_0() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserRequest_t413887218, ___DisplayName_0)); }
	inline String_t* get_DisplayName_0() const { return ___DisplayName_0; }
	inline String_t** get_address_of_DisplayName_0() { return &___DisplayName_0; }
	inline void set_DisplayName_0(String_t* value)
	{
		___DisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_0), value);
	}

	inline static int32_t get_offset_of_Email_1() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserRequest_t413887218, ___Email_1)); }
	inline String_t* get_Email_1() const { return ___Email_1; }
	inline String_t** get_address_of_Email_1() { return &___Email_1; }
	inline void set_Email_1(String_t* value)
	{
		___Email_1 = value;
		Il2CppCodeGenWriteBarrier((&___Email_1), value);
	}

	inline static int32_t get_offset_of_EncryptedRequest_2() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserRequest_t413887218, ___EncryptedRequest_2)); }
	inline String_t* get_EncryptedRequest_2() const { return ___EncryptedRequest_2; }
	inline String_t** get_address_of_EncryptedRequest_2() { return &___EncryptedRequest_2; }
	inline void set_EncryptedRequest_2(String_t* value)
	{
		___EncryptedRequest_2 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_2), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_3() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserRequest_t413887218, ___InfoRequestParameters_3)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_3() const { return ___InfoRequestParameters_3; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_3() { return &___InfoRequestParameters_3; }
	inline void set_InfoRequestParameters_3(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_3), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_4() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserRequest_t413887218, ___LoginTitlePlayerAccountEntity_4)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_4() const { return ___LoginTitlePlayerAccountEntity_4; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_4() { return &___LoginTitlePlayerAccountEntity_4; }
	inline void set_LoginTitlePlayerAccountEntity_4(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_4 = value;
	}

	inline static int32_t get_offset_of_Password_5() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserRequest_t413887218, ___Password_5)); }
	inline String_t* get_Password_5() const { return ___Password_5; }
	inline String_t** get_address_of_Password_5() { return &___Password_5; }
	inline void set_Password_5(String_t* value)
	{
		___Password_5 = value;
		Il2CppCodeGenWriteBarrier((&___Password_5), value);
	}

	inline static int32_t get_offset_of_PlayerSecret_6() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserRequest_t413887218, ___PlayerSecret_6)); }
	inline String_t* get_PlayerSecret_6() const { return ___PlayerSecret_6; }
	inline String_t** get_address_of_PlayerSecret_6() { return &___PlayerSecret_6; }
	inline void set_PlayerSecret_6(String_t* value)
	{
		___PlayerSecret_6 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_6), value);
	}

	inline static int32_t get_offset_of_RequireBothUsernameAndEmail_7() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserRequest_t413887218, ___RequireBothUsernameAndEmail_7)); }
	inline Nullable_1_t1819850047  get_RequireBothUsernameAndEmail_7() const { return ___RequireBothUsernameAndEmail_7; }
	inline Nullable_1_t1819850047 * get_address_of_RequireBothUsernameAndEmail_7() { return &___RequireBothUsernameAndEmail_7; }
	inline void set_RequireBothUsernameAndEmail_7(Nullable_1_t1819850047  value)
	{
		___RequireBothUsernameAndEmail_7 = value;
	}

	inline static int32_t get_offset_of_TitleId_8() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserRequest_t413887218, ___TitleId_8)); }
	inline String_t* get_TitleId_8() const { return ___TitleId_8; }
	inline String_t** get_address_of_TitleId_8() { return &___TitleId_8; }
	inline void set_TitleId_8(String_t* value)
	{
		___TitleId_8 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_8), value);
	}

	inline static int32_t get_offset_of_Username_9() { return static_cast<int32_t>(offsetof(RegisterPlayFabUserRequest_t413887218, ___Username_9)); }
	inline String_t* get_Username_9() const { return ___Username_9; }
	inline String_t** get_address_of_Username_9() { return &___Username_9; }
	inline void set_Username_9(String_t* value)
	{
		___Username_9 = value;
		Il2CppCodeGenWriteBarrier((&___Username_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTERPLAYFABUSERREQUEST_T413887218_H
#ifndef REGISTERWITHWINDOWSHELLOREQUEST_T1629448663_H
#define REGISTERWITHWINDOWSHELLOREQUEST_T1629448663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RegisterWithWindowsHelloRequest
struct  RegisterWithWindowsHelloRequest_t1629448663  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.RegisterWithWindowsHelloRequest::DeviceName
	String_t* ___DeviceName_0;
	// System.String PlayFab.ClientModels.RegisterWithWindowsHelloRequest::EncryptedRequest
	String_t* ___EncryptedRequest_1;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.RegisterWithWindowsHelloRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.RegisterWithWindowsHelloRequest::LoginTitlePlayerAccountEntity
	Nullable_1_t1819850047  ___LoginTitlePlayerAccountEntity_3;
	// System.String PlayFab.ClientModels.RegisterWithWindowsHelloRequest::PlayerSecret
	String_t* ___PlayerSecret_4;
	// System.String PlayFab.ClientModels.RegisterWithWindowsHelloRequest::PublicKey
	String_t* ___PublicKey_5;
	// System.String PlayFab.ClientModels.RegisterWithWindowsHelloRequest::TitleId
	String_t* ___TitleId_6;
	// System.String PlayFab.ClientModels.RegisterWithWindowsHelloRequest::UserName
	String_t* ___UserName_7;

public:
	inline static int32_t get_offset_of_DeviceName_0() { return static_cast<int32_t>(offsetof(RegisterWithWindowsHelloRequest_t1629448663, ___DeviceName_0)); }
	inline String_t* get_DeviceName_0() const { return ___DeviceName_0; }
	inline String_t** get_address_of_DeviceName_0() { return &___DeviceName_0; }
	inline void set_DeviceName_0(String_t* value)
	{
		___DeviceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceName_0), value);
	}

	inline static int32_t get_offset_of_EncryptedRequest_1() { return static_cast<int32_t>(offsetof(RegisterWithWindowsHelloRequest_t1629448663, ___EncryptedRequest_1)); }
	inline String_t* get_EncryptedRequest_1() const { return ___EncryptedRequest_1; }
	inline String_t** get_address_of_EncryptedRequest_1() { return &___EncryptedRequest_1; }
	inline void set_EncryptedRequest_1(String_t* value)
	{
		___EncryptedRequest_1 = value;
		Il2CppCodeGenWriteBarrier((&___EncryptedRequest_1), value);
	}

	inline static int32_t get_offset_of_InfoRequestParameters_2() { return static_cast<int32_t>(offsetof(RegisterWithWindowsHelloRequest_t1629448663, ___InfoRequestParameters_2)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_2() const { return ___InfoRequestParameters_2; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_2() { return &___InfoRequestParameters_2; }
	inline void set_InfoRequestParameters_2(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_2), value);
	}

	inline static int32_t get_offset_of_LoginTitlePlayerAccountEntity_3() { return static_cast<int32_t>(offsetof(RegisterWithWindowsHelloRequest_t1629448663, ___LoginTitlePlayerAccountEntity_3)); }
	inline Nullable_1_t1819850047  get_LoginTitlePlayerAccountEntity_3() const { return ___LoginTitlePlayerAccountEntity_3; }
	inline Nullable_1_t1819850047 * get_address_of_LoginTitlePlayerAccountEntity_3() { return &___LoginTitlePlayerAccountEntity_3; }
	inline void set_LoginTitlePlayerAccountEntity_3(Nullable_1_t1819850047  value)
	{
		___LoginTitlePlayerAccountEntity_3 = value;
	}

	inline static int32_t get_offset_of_PlayerSecret_4() { return static_cast<int32_t>(offsetof(RegisterWithWindowsHelloRequest_t1629448663, ___PlayerSecret_4)); }
	inline String_t* get_PlayerSecret_4() const { return ___PlayerSecret_4; }
	inline String_t** get_address_of_PlayerSecret_4() { return &___PlayerSecret_4; }
	inline void set_PlayerSecret_4(String_t* value)
	{
		___PlayerSecret_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerSecret_4), value);
	}

	inline static int32_t get_offset_of_PublicKey_5() { return static_cast<int32_t>(offsetof(RegisterWithWindowsHelloRequest_t1629448663, ___PublicKey_5)); }
	inline String_t* get_PublicKey_5() const { return ___PublicKey_5; }
	inline String_t** get_address_of_PublicKey_5() { return &___PublicKey_5; }
	inline void set_PublicKey_5(String_t* value)
	{
		___PublicKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKey_5), value);
	}

	inline static int32_t get_offset_of_TitleId_6() { return static_cast<int32_t>(offsetof(RegisterWithWindowsHelloRequest_t1629448663, ___TitleId_6)); }
	inline String_t* get_TitleId_6() const { return ___TitleId_6; }
	inline String_t** get_address_of_TitleId_6() { return &___TitleId_6; }
	inline void set_TitleId_6(String_t* value)
	{
		___TitleId_6 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_6), value);
	}

	inline static int32_t get_offset_of_UserName_7() { return static_cast<int32_t>(offsetof(RegisterWithWindowsHelloRequest_t1629448663, ___UserName_7)); }
	inline String_t* get_UserName_7() const { return ___UserName_7; }
	inline String_t** get_address_of_UserName_7() { return &___UserName_7; }
	inline void set_UserName_7(String_t* value)
	{
		___UserName_7 = value;
		Il2CppCodeGenWriteBarrier((&___UserName_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTERWITHWINDOWSHELLOREQUEST_T1629448663_H
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
#ifndef STARTGAMERESULT_T3332222724_H
#define STARTGAMERESULT_T3332222724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.StartGameResult
struct  StartGameResult_t3332222724  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.StartGameResult::Expires
	String_t* ___Expires_2;
	// System.String PlayFab.ClientModels.StartGameResult::LobbyID
	String_t* ___LobbyID_3;
	// System.String PlayFab.ClientModels.StartGameResult::Password
	String_t* ___Password_4;
	// System.String PlayFab.ClientModels.StartGameResult::ServerHostname
	String_t* ___ServerHostname_5;
	// System.String PlayFab.ClientModels.StartGameResult::ServerIPV4Address
	String_t* ___ServerIPV4Address_6;
	// System.String PlayFab.ClientModels.StartGameResult::ServerIPV6Address
	String_t* ___ServerIPV6Address_7;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.StartGameResult::ServerPort
	Nullable_1_t378540539  ___ServerPort_8;
	// System.String PlayFab.ClientModels.StartGameResult::ServerPublicDNSName
	String_t* ___ServerPublicDNSName_9;
	// System.String PlayFab.ClientModels.StartGameResult::Ticket
	String_t* ___Ticket_10;

public:
	inline static int32_t get_offset_of_Expires_2() { return static_cast<int32_t>(offsetof(StartGameResult_t3332222724, ___Expires_2)); }
	inline String_t* get_Expires_2() const { return ___Expires_2; }
	inline String_t** get_address_of_Expires_2() { return &___Expires_2; }
	inline void set_Expires_2(String_t* value)
	{
		___Expires_2 = value;
		Il2CppCodeGenWriteBarrier((&___Expires_2), value);
	}

	inline static int32_t get_offset_of_LobbyID_3() { return static_cast<int32_t>(offsetof(StartGameResult_t3332222724, ___LobbyID_3)); }
	inline String_t* get_LobbyID_3() const { return ___LobbyID_3; }
	inline String_t** get_address_of_LobbyID_3() { return &___LobbyID_3; }
	inline void set_LobbyID_3(String_t* value)
	{
		___LobbyID_3 = value;
		Il2CppCodeGenWriteBarrier((&___LobbyID_3), value);
	}

	inline static int32_t get_offset_of_Password_4() { return static_cast<int32_t>(offsetof(StartGameResult_t3332222724, ___Password_4)); }
	inline String_t* get_Password_4() const { return ___Password_4; }
	inline String_t** get_address_of_Password_4() { return &___Password_4; }
	inline void set_Password_4(String_t* value)
	{
		___Password_4 = value;
		Il2CppCodeGenWriteBarrier((&___Password_4), value);
	}

	inline static int32_t get_offset_of_ServerHostname_5() { return static_cast<int32_t>(offsetof(StartGameResult_t3332222724, ___ServerHostname_5)); }
	inline String_t* get_ServerHostname_5() const { return ___ServerHostname_5; }
	inline String_t** get_address_of_ServerHostname_5() { return &___ServerHostname_5; }
	inline void set_ServerHostname_5(String_t* value)
	{
		___ServerHostname_5 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostname_5), value);
	}

	inline static int32_t get_offset_of_ServerIPV4Address_6() { return static_cast<int32_t>(offsetof(StartGameResult_t3332222724, ___ServerIPV4Address_6)); }
	inline String_t* get_ServerIPV4Address_6() const { return ___ServerIPV4Address_6; }
	inline String_t** get_address_of_ServerIPV4Address_6() { return &___ServerIPV4Address_6; }
	inline void set_ServerIPV4Address_6(String_t* value)
	{
		___ServerIPV4Address_6 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV4Address_6), value);
	}

	inline static int32_t get_offset_of_ServerIPV6Address_7() { return static_cast<int32_t>(offsetof(StartGameResult_t3332222724, ___ServerIPV6Address_7)); }
	inline String_t* get_ServerIPV6Address_7() const { return ___ServerIPV6Address_7; }
	inline String_t** get_address_of_ServerIPV6Address_7() { return &___ServerIPV6Address_7; }
	inline void set_ServerIPV6Address_7(String_t* value)
	{
		___ServerIPV6Address_7 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV6Address_7), value);
	}

	inline static int32_t get_offset_of_ServerPort_8() { return static_cast<int32_t>(offsetof(StartGameResult_t3332222724, ___ServerPort_8)); }
	inline Nullable_1_t378540539  get_ServerPort_8() const { return ___ServerPort_8; }
	inline Nullable_1_t378540539 * get_address_of_ServerPort_8() { return &___ServerPort_8; }
	inline void set_ServerPort_8(Nullable_1_t378540539  value)
	{
		___ServerPort_8 = value;
	}

	inline static int32_t get_offset_of_ServerPublicDNSName_9() { return static_cast<int32_t>(offsetof(StartGameResult_t3332222724, ___ServerPublicDNSName_9)); }
	inline String_t* get_ServerPublicDNSName_9() const { return ___ServerPublicDNSName_9; }
	inline String_t** get_address_of_ServerPublicDNSName_9() { return &___ServerPublicDNSName_9; }
	inline void set_ServerPublicDNSName_9(String_t* value)
	{
		___ServerPublicDNSName_9 = value;
		Il2CppCodeGenWriteBarrier((&___ServerPublicDNSName_9), value);
	}

	inline static int32_t get_offset_of_Ticket_10() { return static_cast<int32_t>(offsetof(StartGameResult_t3332222724, ___Ticket_10)); }
	inline String_t* get_Ticket_10() const { return ___Ticket_10; }
	inline String_t** get_address_of_Ticket_10() { return &___Ticket_10; }
	inline void set_Ticket_10(String_t* value)
	{
		___Ticket_10 = value;
		Il2CppCodeGenWriteBarrier((&___Ticket_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTGAMERESULT_T3332222724_H
#ifndef STATISTICUPDATE_T3254357203_H
#define STATISTICUPDATE_T3254357203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.StatisticUpdate
struct  StatisticUpdate_t3254357203  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.StatisticUpdate::StatisticName
	String_t* ___StatisticName_0;
	// System.Int32 PlayFab.ClientModels.StatisticUpdate::Value
	int32_t ___Value_1;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.StatisticUpdate::Version
	Nullable_1_t4282624060  ___Version_2;

public:
	inline static int32_t get_offset_of_StatisticName_0() { return static_cast<int32_t>(offsetof(StatisticUpdate_t3254357203, ___StatisticName_0)); }
	inline String_t* get_StatisticName_0() const { return ___StatisticName_0; }
	inline String_t** get_address_of_StatisticName_0() { return &___StatisticName_0; }
	inline void set_StatisticName_0(String_t* value)
	{
		___StatisticName_0 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_0), value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(StatisticUpdate_t3254357203, ___Value_1)); }
	inline int32_t get_Value_1() const { return ___Value_1; }
	inline int32_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(int32_t value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_Version_2() { return static_cast<int32_t>(offsetof(StatisticUpdate_t3254357203, ___Version_2)); }
	inline Nullable_1_t4282624060  get_Version_2() const { return ___Version_2; }
	inline Nullable_1_t4282624060 * get_address_of_Version_2() { return &___Version_2; }
	inline void set_Version_2(Nullable_1_t4282624060  value)
	{
		___Version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATISTICUPDATE_T3254357203_H
#ifndef STOREITEM_T676336948_H
#define STOREITEM_T676336948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.StoreItem
struct  StoreItem_t676336948  : public RuntimeObject
{
public:
	// System.Object PlayFab.ClientModels.StoreItem::CustomData
	RuntimeObject * ___CustomData_0;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.StoreItem::DisplayPosition
	Nullable_1_t4282624060  ___DisplayPosition_1;
	// System.String PlayFab.ClientModels.StoreItem::ItemId
	String_t* ___ItemId_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.StoreItem::RealCurrencyPrices
	Dictionary_2_t2345318277 * ___RealCurrencyPrices_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.StoreItem::VirtualCurrencyPrices
	Dictionary_2_t2345318277 * ___VirtualCurrencyPrices_4;

public:
	inline static int32_t get_offset_of_CustomData_0() { return static_cast<int32_t>(offsetof(StoreItem_t676336948, ___CustomData_0)); }
	inline RuntimeObject * get_CustomData_0() const { return ___CustomData_0; }
	inline RuntimeObject ** get_address_of_CustomData_0() { return &___CustomData_0; }
	inline void set_CustomData_0(RuntimeObject * value)
	{
		___CustomData_0 = value;
		Il2CppCodeGenWriteBarrier((&___CustomData_0), value);
	}

	inline static int32_t get_offset_of_DisplayPosition_1() { return static_cast<int32_t>(offsetof(StoreItem_t676336948, ___DisplayPosition_1)); }
	inline Nullable_1_t4282624060  get_DisplayPosition_1() const { return ___DisplayPosition_1; }
	inline Nullable_1_t4282624060 * get_address_of_DisplayPosition_1() { return &___DisplayPosition_1; }
	inline void set_DisplayPosition_1(Nullable_1_t4282624060  value)
	{
		___DisplayPosition_1 = value;
	}

	inline static int32_t get_offset_of_ItemId_2() { return static_cast<int32_t>(offsetof(StoreItem_t676336948, ___ItemId_2)); }
	inline String_t* get_ItemId_2() const { return ___ItemId_2; }
	inline String_t** get_address_of_ItemId_2() { return &___ItemId_2; }
	inline void set_ItemId_2(String_t* value)
	{
		___ItemId_2 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_2), value);
	}

	inline static int32_t get_offset_of_RealCurrencyPrices_3() { return static_cast<int32_t>(offsetof(StoreItem_t676336948, ___RealCurrencyPrices_3)); }
	inline Dictionary_2_t2345318277 * get_RealCurrencyPrices_3() const { return ___RealCurrencyPrices_3; }
	inline Dictionary_2_t2345318277 ** get_address_of_RealCurrencyPrices_3() { return &___RealCurrencyPrices_3; }
	inline void set_RealCurrencyPrices_3(Dictionary_2_t2345318277 * value)
	{
		___RealCurrencyPrices_3 = value;
		Il2CppCodeGenWriteBarrier((&___RealCurrencyPrices_3), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyPrices_4() { return static_cast<int32_t>(offsetof(StoreItem_t676336948, ___VirtualCurrencyPrices_4)); }
	inline Dictionary_2_t2345318277 * get_VirtualCurrencyPrices_4() const { return ___VirtualCurrencyPrices_4; }
	inline Dictionary_2_t2345318277 ** get_address_of_VirtualCurrencyPrices_4() { return &___VirtualCurrencyPrices_4; }
	inline void set_VirtualCurrencyPrices_4(Dictionary_2_t2345318277 * value)
	{
		___VirtualCurrencyPrices_4 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyPrices_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STOREITEM_T676336948_H
#ifndef SUBSCRIPTIONPROVIDERSTATUS_T1621771676_H
#define SUBSCRIPTIONPROVIDERSTATUS_T1621771676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.SubscriptionProviderStatus
struct  SubscriptionProviderStatus_t1621771676 
{
public:
	// System.Int32 PlayFab.ClientModels.SubscriptionProviderStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SubscriptionProviderStatus_t1621771676, ___value___1)); }
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
#endif // SUBSCRIPTIONPROVIDERSTATUS_T1621771676_H
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
#ifndef TRADESTATUS_T3540456450_H
#define TRADESTATUS_T3540456450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.TradeStatus
struct  TradeStatus_t3540456450 
{
public:
	// System.Int32 PlayFab.ClientModels.TradeStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TradeStatus_t3540456450, ___value___1)); }
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
#endif // TRADESTATUS_T3540456450_H
#ifndef TRANSACTIONSTATUS_T2822543195_H
#define TRANSACTIONSTATUS_T2822543195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.TransactionStatus
struct  TransactionStatus_t2822543195 
{
public:
	// System.Int32 PlayFab.ClientModels.TransactionStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TransactionStatus_t2822543195, ___value___1)); }
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
#endif // TRANSACTIONSTATUS_T2822543195_H
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
#ifndef STARTGAMEREQUEST_T3072561728_H
#define STARTGAMEREQUEST_T3072561728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.StartGameRequest
struct  StartGameRequest_t3072561728  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.StartGameRequest::BuildVersion
	String_t* ___BuildVersion_0;
	// System.String PlayFab.ClientModels.StartGameRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.String PlayFab.ClientModels.StartGameRequest::CustomCommandLineData
	String_t* ___CustomCommandLineData_2;
	// System.String PlayFab.ClientModels.StartGameRequest::GameMode
	String_t* ___GameMode_3;
	// PlayFab.ClientModels.Region PlayFab.ClientModels.StartGameRequest::Region
	int32_t ___Region_4;
	// System.String PlayFab.ClientModels.StartGameRequest::StatisticName
	String_t* ___StatisticName_5;

public:
	inline static int32_t get_offset_of_BuildVersion_0() { return static_cast<int32_t>(offsetof(StartGameRequest_t3072561728, ___BuildVersion_0)); }
	inline String_t* get_BuildVersion_0() const { return ___BuildVersion_0; }
	inline String_t** get_address_of_BuildVersion_0() { return &___BuildVersion_0; }
	inline void set_BuildVersion_0(String_t* value)
	{
		___BuildVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___BuildVersion_0), value);
	}

	inline static int32_t get_offset_of_CharacterId_1() { return static_cast<int32_t>(offsetof(StartGameRequest_t3072561728, ___CharacterId_1)); }
	inline String_t* get_CharacterId_1() const { return ___CharacterId_1; }
	inline String_t** get_address_of_CharacterId_1() { return &___CharacterId_1; }
	inline void set_CharacterId_1(String_t* value)
	{
		___CharacterId_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_1), value);
	}

	inline static int32_t get_offset_of_CustomCommandLineData_2() { return static_cast<int32_t>(offsetof(StartGameRequest_t3072561728, ___CustomCommandLineData_2)); }
	inline String_t* get_CustomCommandLineData_2() const { return ___CustomCommandLineData_2; }
	inline String_t** get_address_of_CustomCommandLineData_2() { return &___CustomCommandLineData_2; }
	inline void set_CustomCommandLineData_2(String_t* value)
	{
		___CustomCommandLineData_2 = value;
		Il2CppCodeGenWriteBarrier((&___CustomCommandLineData_2), value);
	}

	inline static int32_t get_offset_of_GameMode_3() { return static_cast<int32_t>(offsetof(StartGameRequest_t3072561728, ___GameMode_3)); }
	inline String_t* get_GameMode_3() const { return ___GameMode_3; }
	inline String_t** get_address_of_GameMode_3() { return &___GameMode_3; }
	inline void set_GameMode_3(String_t* value)
	{
		___GameMode_3 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_3), value);
	}

	inline static int32_t get_offset_of_Region_4() { return static_cast<int32_t>(offsetof(StartGameRequest_t3072561728, ___Region_4)); }
	inline int32_t get_Region_4() const { return ___Region_4; }
	inline int32_t* get_address_of_Region_4() { return &___Region_4; }
	inline void set_Region_4(int32_t value)
	{
		___Region_4 = value;
	}

	inline static int32_t get_offset_of_StatisticName_5() { return static_cast<int32_t>(offsetof(StartGameRequest_t3072561728, ___StatisticName_5)); }
	inline String_t* get_StatisticName_5() const { return ___StatisticName_5; }
	inline String_t** get_address_of_StatisticName_5() { return &___StatisticName_5; }
	inline void set_StatisticName_5(String_t* value)
	{
		___StatisticName_5 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTGAMEREQUEST_T3072561728_H
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
#ifndef NULLABLE_1_T2398459843_H
#define NULLABLE_1_T2398459843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.PushNotificationPlatform>
struct  Nullable_1_t2398459843 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2398459843, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2398459843, ___has_value_1)); }
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
#endif // NULLABLE_1_T2398459843_H
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
#ifndef NULLABLE_1_T3344333758_H
#define NULLABLE_1_T3344333758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.SubscriptionProviderStatus>
struct  Nullable_1_t3344333758 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3344333758, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3344333758, ___has_value_1)); }
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
#endif // NULLABLE_1_T3344333758_H
#ifndef NULLABLE_1_T968051236_H
#define NULLABLE_1_T968051236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.TradeStatus>
struct  Nullable_1_t968051236 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t968051236, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t968051236, ___has_value_1)); }
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
#endif // NULLABLE_1_T968051236_H
#ifndef NULLABLE_1_T250137981_H
#define NULLABLE_1_T250137981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.TransactionStatus>
struct  Nullable_1_t250137981 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t250137981, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t250137981, ___has_value_1)); }
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
#endif // NULLABLE_1_T250137981_H
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
#ifndef PAYFORPURCHASERESULT_T2186103076_H
#define PAYFORPURCHASERESULT_T2186103076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.PayForPurchaseResult
struct  PayForPurchaseResult_t2186103076  : public PlayFabResultCommon_t3469603827
{
public:
	// System.UInt32 PlayFab.ClientModels.PayForPurchaseResult::CreditApplied
	uint32_t ___CreditApplied_2;
	// System.String PlayFab.ClientModels.PayForPurchaseResult::OrderId
	String_t* ___OrderId_3;
	// System.String PlayFab.ClientModels.PayForPurchaseResult::ProviderData
	String_t* ___ProviderData_4;
	// System.String PlayFab.ClientModels.PayForPurchaseResult::ProviderToken
	String_t* ___ProviderToken_5;
	// System.String PlayFab.ClientModels.PayForPurchaseResult::PurchaseConfirmationPageURL
	String_t* ___PurchaseConfirmationPageURL_6;
	// System.String PlayFab.ClientModels.PayForPurchaseResult::PurchaseCurrency
	String_t* ___PurchaseCurrency_7;
	// System.UInt32 PlayFab.ClientModels.PayForPurchaseResult::PurchasePrice
	uint32_t ___PurchasePrice_8;
	// System.Nullable`1<PlayFab.ClientModels.TransactionStatus> PlayFab.ClientModels.PayForPurchaseResult::Status
	Nullable_1_t250137981  ___Status_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.PayForPurchaseResult::VCAmount
	Dictionary_2_t2736202052 * ___VCAmount_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.PayForPurchaseResult::VirtualCurrency
	Dictionary_2_t2736202052 * ___VirtualCurrency_11;

public:
	inline static int32_t get_offset_of_CreditApplied_2() { return static_cast<int32_t>(offsetof(PayForPurchaseResult_t2186103076, ___CreditApplied_2)); }
	inline uint32_t get_CreditApplied_2() const { return ___CreditApplied_2; }
	inline uint32_t* get_address_of_CreditApplied_2() { return &___CreditApplied_2; }
	inline void set_CreditApplied_2(uint32_t value)
	{
		___CreditApplied_2 = value;
	}

	inline static int32_t get_offset_of_OrderId_3() { return static_cast<int32_t>(offsetof(PayForPurchaseResult_t2186103076, ___OrderId_3)); }
	inline String_t* get_OrderId_3() const { return ___OrderId_3; }
	inline String_t** get_address_of_OrderId_3() { return &___OrderId_3; }
	inline void set_OrderId_3(String_t* value)
	{
		___OrderId_3 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_3), value);
	}

	inline static int32_t get_offset_of_ProviderData_4() { return static_cast<int32_t>(offsetof(PayForPurchaseResult_t2186103076, ___ProviderData_4)); }
	inline String_t* get_ProviderData_4() const { return ___ProviderData_4; }
	inline String_t** get_address_of_ProviderData_4() { return &___ProviderData_4; }
	inline void set_ProviderData_4(String_t* value)
	{
		___ProviderData_4 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderData_4), value);
	}

	inline static int32_t get_offset_of_ProviderToken_5() { return static_cast<int32_t>(offsetof(PayForPurchaseResult_t2186103076, ___ProviderToken_5)); }
	inline String_t* get_ProviderToken_5() const { return ___ProviderToken_5; }
	inline String_t** get_address_of_ProviderToken_5() { return &___ProviderToken_5; }
	inline void set_ProviderToken_5(String_t* value)
	{
		___ProviderToken_5 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderToken_5), value);
	}

	inline static int32_t get_offset_of_PurchaseConfirmationPageURL_6() { return static_cast<int32_t>(offsetof(PayForPurchaseResult_t2186103076, ___PurchaseConfirmationPageURL_6)); }
	inline String_t* get_PurchaseConfirmationPageURL_6() const { return ___PurchaseConfirmationPageURL_6; }
	inline String_t** get_address_of_PurchaseConfirmationPageURL_6() { return &___PurchaseConfirmationPageURL_6; }
	inline void set_PurchaseConfirmationPageURL_6(String_t* value)
	{
		___PurchaseConfirmationPageURL_6 = value;
		Il2CppCodeGenWriteBarrier((&___PurchaseConfirmationPageURL_6), value);
	}

	inline static int32_t get_offset_of_PurchaseCurrency_7() { return static_cast<int32_t>(offsetof(PayForPurchaseResult_t2186103076, ___PurchaseCurrency_7)); }
	inline String_t* get_PurchaseCurrency_7() const { return ___PurchaseCurrency_7; }
	inline String_t** get_address_of_PurchaseCurrency_7() { return &___PurchaseCurrency_7; }
	inline void set_PurchaseCurrency_7(String_t* value)
	{
		___PurchaseCurrency_7 = value;
		Il2CppCodeGenWriteBarrier((&___PurchaseCurrency_7), value);
	}

	inline static int32_t get_offset_of_PurchasePrice_8() { return static_cast<int32_t>(offsetof(PayForPurchaseResult_t2186103076, ___PurchasePrice_8)); }
	inline uint32_t get_PurchasePrice_8() const { return ___PurchasePrice_8; }
	inline uint32_t* get_address_of_PurchasePrice_8() { return &___PurchasePrice_8; }
	inline void set_PurchasePrice_8(uint32_t value)
	{
		___PurchasePrice_8 = value;
	}

	inline static int32_t get_offset_of_Status_9() { return static_cast<int32_t>(offsetof(PayForPurchaseResult_t2186103076, ___Status_9)); }
	inline Nullable_1_t250137981  get_Status_9() const { return ___Status_9; }
	inline Nullable_1_t250137981 * get_address_of_Status_9() { return &___Status_9; }
	inline void set_Status_9(Nullable_1_t250137981  value)
	{
		___Status_9 = value;
	}

	inline static int32_t get_offset_of_VCAmount_10() { return static_cast<int32_t>(offsetof(PayForPurchaseResult_t2186103076, ___VCAmount_10)); }
	inline Dictionary_2_t2736202052 * get_VCAmount_10() const { return ___VCAmount_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_VCAmount_10() { return &___VCAmount_10; }
	inline void set_VCAmount_10(Dictionary_2_t2736202052 * value)
	{
		___VCAmount_10 = value;
		Il2CppCodeGenWriteBarrier((&___VCAmount_10), value);
	}

	inline static int32_t get_offset_of_VirtualCurrency_11() { return static_cast<int32_t>(offsetof(PayForPurchaseResult_t2186103076, ___VirtualCurrency_11)); }
	inline Dictionary_2_t2736202052 * get_VirtualCurrency_11() const { return ___VirtualCurrency_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_VirtualCurrency_11() { return &___VirtualCurrency_11; }
	inline void set_VirtualCurrency_11(Dictionary_2_t2736202052 * value)
	{
		___VirtualCurrency_11 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrency_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAYFORPURCHASERESULT_T2186103076_H
#ifndef PUSHNOTIFICATIONREGISTRATIONMODEL_T1403388172_H
#define PUSHNOTIFICATIONREGISTRATIONMODEL_T1403388172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.PushNotificationRegistrationModel
struct  PushNotificationRegistrationModel_t1403388172  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.PushNotificationRegistrationModel::NotificationEndpointARN
	String_t* ___NotificationEndpointARN_0;
	// System.Nullable`1<PlayFab.ClientModels.PushNotificationPlatform> PlayFab.ClientModels.PushNotificationRegistrationModel::Platform
	Nullable_1_t2398459843  ___Platform_1;

public:
	inline static int32_t get_offset_of_NotificationEndpointARN_0() { return static_cast<int32_t>(offsetof(PushNotificationRegistrationModel_t1403388172, ___NotificationEndpointARN_0)); }
	inline String_t* get_NotificationEndpointARN_0() const { return ___NotificationEndpointARN_0; }
	inline String_t** get_address_of_NotificationEndpointARN_0() { return &___NotificationEndpointARN_0; }
	inline void set_NotificationEndpointARN_0(String_t* value)
	{
		___NotificationEndpointARN_0 = value;
		Il2CppCodeGenWriteBarrier((&___NotificationEndpointARN_0), value);
	}

	inline static int32_t get_offset_of_Platform_1() { return static_cast<int32_t>(offsetof(PushNotificationRegistrationModel_t1403388172, ___Platform_1)); }
	inline Nullable_1_t2398459843  get_Platform_1() const { return ___Platform_1; }
	inline Nullable_1_t2398459843 * get_address_of_Platform_1() { return &___Platform_1; }
	inline void set_Platform_1(Nullable_1_t2398459843  value)
	{
		___Platform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUSHNOTIFICATIONREGISTRATIONMODEL_T1403388172_H
#ifndef REGIONINFO_T1716013666_H
#define REGIONINFO_T1716013666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.RegionInfo
struct  RegionInfo_t1716013666  : public RuntimeObject
{
public:
	// System.Boolean PlayFab.ClientModels.RegionInfo::Available
	bool ___Available_0;
	// System.String PlayFab.ClientModels.RegionInfo::Name
	String_t* ___Name_1;
	// System.String PlayFab.ClientModels.RegionInfo::PingUrl
	String_t* ___PingUrl_2;
	// System.Nullable`1<PlayFab.ClientModels.Region> PlayFab.ClientModels.RegionInfo::Region
	Nullable_1_t1625618012  ___Region_3;

public:
	inline static int32_t get_offset_of_Available_0() { return static_cast<int32_t>(offsetof(RegionInfo_t1716013666, ___Available_0)); }
	inline bool get_Available_0() const { return ___Available_0; }
	inline bool* get_address_of_Available_0() { return &___Available_0; }
	inline void set_Available_0(bool value)
	{
		___Available_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(RegionInfo_t1716013666, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_PingUrl_2() { return static_cast<int32_t>(offsetof(RegionInfo_t1716013666, ___PingUrl_2)); }
	inline String_t* get_PingUrl_2() const { return ___PingUrl_2; }
	inline String_t** get_address_of_PingUrl_2() { return &___PingUrl_2; }
	inline void set_PingUrl_2(String_t* value)
	{
		___PingUrl_2 = value;
		Il2CppCodeGenWriteBarrier((&___PingUrl_2), value);
	}

	inline static int32_t get_offset_of_Region_3() { return static_cast<int32_t>(offsetof(RegionInfo_t1716013666, ___Region_3)); }
	inline Nullable_1_t1625618012  get_Region_3() const { return ___Region_3; }
	inline Nullable_1_t1625618012 * get_address_of_Region_3() { return &___Region_3; }
	inline void set_Region_3(Nullable_1_t1625618012  value)
	{
		___Region_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGIONINFO_T1716013666_H
#ifndef SHAREDGROUPDATARECORD_T1581922388_H
#define SHAREDGROUPDATARECORD_T1581922388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.SharedGroupDataRecord
struct  SharedGroupDataRecord_t1581922388  : public RuntimeObject
{
public:
	// System.DateTime PlayFab.ClientModels.SharedGroupDataRecord::LastUpdated
	DateTime_t3738529785  ___LastUpdated_0;
	// System.String PlayFab.ClientModels.SharedGroupDataRecord::LastUpdatedBy
	String_t* ___LastUpdatedBy_1;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.SharedGroupDataRecord::Permission
	Nullable_1_t3748078693  ___Permission_2;
	// System.String PlayFab.ClientModels.SharedGroupDataRecord::Value
	String_t* ___Value_3;

public:
	inline static int32_t get_offset_of_LastUpdated_0() { return static_cast<int32_t>(offsetof(SharedGroupDataRecord_t1581922388, ___LastUpdated_0)); }
	inline DateTime_t3738529785  get_LastUpdated_0() const { return ___LastUpdated_0; }
	inline DateTime_t3738529785 * get_address_of_LastUpdated_0() { return &___LastUpdated_0; }
	inline void set_LastUpdated_0(DateTime_t3738529785  value)
	{
		___LastUpdated_0 = value;
	}

	inline static int32_t get_offset_of_LastUpdatedBy_1() { return static_cast<int32_t>(offsetof(SharedGroupDataRecord_t1581922388, ___LastUpdatedBy_1)); }
	inline String_t* get_LastUpdatedBy_1() const { return ___LastUpdatedBy_1; }
	inline String_t** get_address_of_LastUpdatedBy_1() { return &___LastUpdatedBy_1; }
	inline void set_LastUpdatedBy_1(String_t* value)
	{
		___LastUpdatedBy_1 = value;
		Il2CppCodeGenWriteBarrier((&___LastUpdatedBy_1), value);
	}

	inline static int32_t get_offset_of_Permission_2() { return static_cast<int32_t>(offsetof(SharedGroupDataRecord_t1581922388, ___Permission_2)); }
	inline Nullable_1_t3748078693  get_Permission_2() const { return ___Permission_2; }
	inline Nullable_1_t3748078693 * get_address_of_Permission_2() { return &___Permission_2; }
	inline void set_Permission_2(Nullable_1_t3748078693  value)
	{
		___Permission_2 = value;
	}

	inline static int32_t get_offset_of_Value_3() { return static_cast<int32_t>(offsetof(SharedGroupDataRecord_t1581922388, ___Value_3)); }
	inline String_t* get_Value_3() const { return ___Value_3; }
	inline String_t** get_address_of_Value_3() { return &___Value_3; }
	inline void set_Value_3(String_t* value)
	{
		___Value_3 = value;
		Il2CppCodeGenWriteBarrier((&___Value_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDGROUPDATARECORD_T1581922388_H
#ifndef SUBSCRIPTIONMODEL_T537999389_H
#define SUBSCRIPTIONMODEL_T537999389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.SubscriptionModel
struct  SubscriptionModel_t537999389  : public RuntimeObject
{
public:
	// System.DateTime PlayFab.ClientModels.SubscriptionModel::Expiration
	DateTime_t3738529785  ___Expiration_0;
	// System.DateTime PlayFab.ClientModels.SubscriptionModel::InitialSubscriptionTime
	DateTime_t3738529785  ___InitialSubscriptionTime_1;
	// System.Boolean PlayFab.ClientModels.SubscriptionModel::IsActive
	bool ___IsActive_2;
	// System.Nullable`1<PlayFab.ClientModels.SubscriptionProviderStatus> PlayFab.ClientModels.SubscriptionModel::Status
	Nullable_1_t3344333758  ___Status_3;
	// System.String PlayFab.ClientModels.SubscriptionModel::SubscriptionId
	String_t* ___SubscriptionId_4;
	// System.String PlayFab.ClientModels.SubscriptionModel::SubscriptionItemId
	String_t* ___SubscriptionItemId_5;
	// System.String PlayFab.ClientModels.SubscriptionModel::SubscriptionProvider
	String_t* ___SubscriptionProvider_6;

public:
	inline static int32_t get_offset_of_Expiration_0() { return static_cast<int32_t>(offsetof(SubscriptionModel_t537999389, ___Expiration_0)); }
	inline DateTime_t3738529785  get_Expiration_0() const { return ___Expiration_0; }
	inline DateTime_t3738529785 * get_address_of_Expiration_0() { return &___Expiration_0; }
	inline void set_Expiration_0(DateTime_t3738529785  value)
	{
		___Expiration_0 = value;
	}

	inline static int32_t get_offset_of_InitialSubscriptionTime_1() { return static_cast<int32_t>(offsetof(SubscriptionModel_t537999389, ___InitialSubscriptionTime_1)); }
	inline DateTime_t3738529785  get_InitialSubscriptionTime_1() const { return ___InitialSubscriptionTime_1; }
	inline DateTime_t3738529785 * get_address_of_InitialSubscriptionTime_1() { return &___InitialSubscriptionTime_1; }
	inline void set_InitialSubscriptionTime_1(DateTime_t3738529785  value)
	{
		___InitialSubscriptionTime_1 = value;
	}

	inline static int32_t get_offset_of_IsActive_2() { return static_cast<int32_t>(offsetof(SubscriptionModel_t537999389, ___IsActive_2)); }
	inline bool get_IsActive_2() const { return ___IsActive_2; }
	inline bool* get_address_of_IsActive_2() { return &___IsActive_2; }
	inline void set_IsActive_2(bool value)
	{
		___IsActive_2 = value;
	}

	inline static int32_t get_offset_of_Status_3() { return static_cast<int32_t>(offsetof(SubscriptionModel_t537999389, ___Status_3)); }
	inline Nullable_1_t3344333758  get_Status_3() const { return ___Status_3; }
	inline Nullable_1_t3344333758 * get_address_of_Status_3() { return &___Status_3; }
	inline void set_Status_3(Nullable_1_t3344333758  value)
	{
		___Status_3 = value;
	}

	inline static int32_t get_offset_of_SubscriptionId_4() { return static_cast<int32_t>(offsetof(SubscriptionModel_t537999389, ___SubscriptionId_4)); }
	inline String_t* get_SubscriptionId_4() const { return ___SubscriptionId_4; }
	inline String_t** get_address_of_SubscriptionId_4() { return &___SubscriptionId_4; }
	inline void set_SubscriptionId_4(String_t* value)
	{
		___SubscriptionId_4 = value;
		Il2CppCodeGenWriteBarrier((&___SubscriptionId_4), value);
	}

	inline static int32_t get_offset_of_SubscriptionItemId_5() { return static_cast<int32_t>(offsetof(SubscriptionModel_t537999389, ___SubscriptionItemId_5)); }
	inline String_t* get_SubscriptionItemId_5() const { return ___SubscriptionItemId_5; }
	inline String_t** get_address_of_SubscriptionItemId_5() { return &___SubscriptionItemId_5; }
	inline void set_SubscriptionItemId_5(String_t* value)
	{
		___SubscriptionItemId_5 = value;
		Il2CppCodeGenWriteBarrier((&___SubscriptionItemId_5), value);
	}

	inline static int32_t get_offset_of_SubscriptionProvider_6() { return static_cast<int32_t>(offsetof(SubscriptionModel_t537999389, ___SubscriptionProvider_6)); }
	inline String_t* get_SubscriptionProvider_6() const { return ___SubscriptionProvider_6; }
	inline String_t** get_address_of_SubscriptionProvider_6() { return &___SubscriptionProvider_6; }
	inline void set_SubscriptionProvider_6(String_t* value)
	{
		___SubscriptionProvider_6 = value;
		Il2CppCodeGenWriteBarrier((&___SubscriptionProvider_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSCRIPTIONMODEL_T537999389_H
#ifndef TITLENEWSITEM_T3588921859_H
#define TITLENEWSITEM_T3588921859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.TitleNewsItem
struct  TitleNewsItem_t3588921859  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.TitleNewsItem::Body
	String_t* ___Body_0;
	// System.String PlayFab.ClientModels.TitleNewsItem::NewsId
	String_t* ___NewsId_1;
	// System.DateTime PlayFab.ClientModels.TitleNewsItem::Timestamp
	DateTime_t3738529785  ___Timestamp_2;
	// System.String PlayFab.ClientModels.TitleNewsItem::Title
	String_t* ___Title_3;

public:
	inline static int32_t get_offset_of_Body_0() { return static_cast<int32_t>(offsetof(TitleNewsItem_t3588921859, ___Body_0)); }
	inline String_t* get_Body_0() const { return ___Body_0; }
	inline String_t** get_address_of_Body_0() { return &___Body_0; }
	inline void set_Body_0(String_t* value)
	{
		___Body_0 = value;
		Il2CppCodeGenWriteBarrier((&___Body_0), value);
	}

	inline static int32_t get_offset_of_NewsId_1() { return static_cast<int32_t>(offsetof(TitleNewsItem_t3588921859, ___NewsId_1)); }
	inline String_t* get_NewsId_1() const { return ___NewsId_1; }
	inline String_t** get_address_of_NewsId_1() { return &___NewsId_1; }
	inline void set_NewsId_1(String_t* value)
	{
		___NewsId_1 = value;
		Il2CppCodeGenWriteBarrier((&___NewsId_1), value);
	}

	inline static int32_t get_offset_of_Timestamp_2() { return static_cast<int32_t>(offsetof(TitleNewsItem_t3588921859, ___Timestamp_2)); }
	inline DateTime_t3738529785  get_Timestamp_2() const { return ___Timestamp_2; }
	inline DateTime_t3738529785 * get_address_of_Timestamp_2() { return &___Timestamp_2; }
	inline void set_Timestamp_2(DateTime_t3738529785  value)
	{
		___Timestamp_2 = value;
	}

	inline static int32_t get_offset_of_Title_3() { return static_cast<int32_t>(offsetof(TitleNewsItem_t3588921859, ___Title_3)); }
	inline String_t* get_Title_3() const { return ___Title_3; }
	inline String_t** get_address_of_Title_3() { return &___Title_3; }
	inline void set_Title_3(String_t* value)
	{
		___Title_3 = value;
		Il2CppCodeGenWriteBarrier((&___Title_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLENEWSITEM_T3588921859_H
#ifndef UPDATECHARACTERDATAREQUEST_T4168165221_H
#define UPDATECHARACTERDATAREQUEST_T4168165221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.UpdateCharacterDataRequest
struct  UpdateCharacterDataRequest_t4168165221  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.UpdateCharacterDataRequest::CharacterId
	String_t* ___CharacterId_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateCharacterDataRequest::Data
	Dictionary_2_t1632706988 * ___Data_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.UpdateCharacterDataRequest::KeysToRemove
	List_1_t3319525431 * ___KeysToRemove_2;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.UpdateCharacterDataRequest::Permission
	Nullable_1_t3748078693  ___Permission_3;

public:
	inline static int32_t get_offset_of_CharacterId_0() { return static_cast<int32_t>(offsetof(UpdateCharacterDataRequest_t4168165221, ___CharacterId_0)); }
	inline String_t* get_CharacterId_0() const { return ___CharacterId_0; }
	inline String_t** get_address_of_CharacterId_0() { return &___CharacterId_0; }
	inline void set_CharacterId_0(String_t* value)
	{
		___CharacterId_0 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_0), value);
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(UpdateCharacterDataRequest_t4168165221, ___Data_1)); }
	inline Dictionary_2_t1632706988 * get_Data_1() const { return ___Data_1; }
	inline Dictionary_2_t1632706988 ** get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(Dictionary_2_t1632706988 * value)
	{
		___Data_1 = value;
		Il2CppCodeGenWriteBarrier((&___Data_1), value);
	}

	inline static int32_t get_offset_of_KeysToRemove_2() { return static_cast<int32_t>(offsetof(UpdateCharacterDataRequest_t4168165221, ___KeysToRemove_2)); }
	inline List_1_t3319525431 * get_KeysToRemove_2() const { return ___KeysToRemove_2; }
	inline List_1_t3319525431 ** get_address_of_KeysToRemove_2() { return &___KeysToRemove_2; }
	inline void set_KeysToRemove_2(List_1_t3319525431 * value)
	{
		___KeysToRemove_2 = value;
		Il2CppCodeGenWriteBarrier((&___KeysToRemove_2), value);
	}

	inline static int32_t get_offset_of_Permission_3() { return static_cast<int32_t>(offsetof(UpdateCharacterDataRequest_t4168165221, ___Permission_3)); }
	inline Nullable_1_t3748078693  get_Permission_3() const { return ___Permission_3; }
	inline Nullable_1_t3748078693 * get_address_of_Permission_3() { return &___Permission_3; }
	inline void set_Permission_3(Nullable_1_t3748078693  value)
	{
		___Permission_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECHARACTERDATAREQUEST_T4168165221_H
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
#ifndef PLAYERPROFILEMODEL_T250934598_H
#define PLAYERPROFILEMODEL_T250934598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.PlayerProfileModel
struct  PlayerProfileModel_t250934598  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.AdCampaignAttributionModel> PlayFab.ClientModels.PlayerProfileModel::AdCampaignAttributions
	List_1_t406833115 * ___AdCampaignAttributions_0;
	// System.String PlayFab.ClientModels.PlayerProfileModel::AvatarUrl
	String_t* ___AvatarUrl_1;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.PlayerProfileModel::BannedUntil
	Nullable_1_t1166124571  ___BannedUntil_2;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ContactEmailInfoModel> PlayFab.ClientModels.PlayerProfileModel::ContactEmailAddresses
	List_1_t1117944676 * ___ContactEmailAddresses_3;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.PlayerProfileModel::Created
	Nullable_1_t1166124571  ___Created_4;
	// System.String PlayFab.ClientModels.PlayerProfileModel::DisplayName
	String_t* ___DisplayName_5;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.PlayerProfileModel::LastLogin
	Nullable_1_t1166124571  ___LastLogin_6;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.LinkedPlatformAccountModel> PlayFab.ClientModels.PlayerProfileModel::LinkedAccounts
	List_1_t4191507331 * ___LinkedAccounts_7;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.LocationModel> PlayFab.ClientModels.PlayerProfileModel::Locations
	List_1_t990609382 * ___Locations_8;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.MembershipModel> PlayFab.ClientModels.PlayerProfileModel::Memberships
	List_1_t2844474068 * ___Memberships_9;
	// System.Nullable`1<PlayFab.ClientModels.LoginIdentityProvider> PlayFab.ClientModels.PlayerProfileModel::Origination
	Nullable_1_t3603180267  ___Origination_10;
	// System.String PlayFab.ClientModels.PlayerProfileModel::PlayerId
	String_t* ___PlayerId_11;
	// System.String PlayFab.ClientModels.PlayerProfileModel::PublisherId
	String_t* ___PublisherId_12;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PushNotificationRegistrationModel> PlayFab.ClientModels.PlayerProfileModel::PushNotificationRegistrations
	List_1_t2875462914 * ___PushNotificationRegistrations_13;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticModel> PlayFab.ClientModels.PlayerProfileModel::Statistics
	List_1_t2070485369 * ___Statistics_14;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.TagModel> PlayFab.ClientModels.PlayerProfileModel::Tags
	List_1_t4252289162 * ___Tags_15;
	// System.String PlayFab.ClientModels.PlayerProfileModel::TitleId
	String_t* ___TitleId_16;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.PlayerProfileModel::TotalValueToDateInUSD
	Nullable_1_t4282624060  ___TotalValueToDateInUSD_17;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ValueToDateModel> PlayFab.ClientModels.PlayerProfileModel::ValuesToDate
	List_1_t1071715830 * ___ValuesToDate_18;

public:
	inline static int32_t get_offset_of_AdCampaignAttributions_0() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___AdCampaignAttributions_0)); }
	inline List_1_t406833115 * get_AdCampaignAttributions_0() const { return ___AdCampaignAttributions_0; }
	inline List_1_t406833115 ** get_address_of_AdCampaignAttributions_0() { return &___AdCampaignAttributions_0; }
	inline void set_AdCampaignAttributions_0(List_1_t406833115 * value)
	{
		___AdCampaignAttributions_0 = value;
		Il2CppCodeGenWriteBarrier((&___AdCampaignAttributions_0), value);
	}

	inline static int32_t get_offset_of_AvatarUrl_1() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___AvatarUrl_1)); }
	inline String_t* get_AvatarUrl_1() const { return ___AvatarUrl_1; }
	inline String_t** get_address_of_AvatarUrl_1() { return &___AvatarUrl_1; }
	inline void set_AvatarUrl_1(String_t* value)
	{
		___AvatarUrl_1 = value;
		Il2CppCodeGenWriteBarrier((&___AvatarUrl_1), value);
	}

	inline static int32_t get_offset_of_BannedUntil_2() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___BannedUntil_2)); }
	inline Nullable_1_t1166124571  get_BannedUntil_2() const { return ___BannedUntil_2; }
	inline Nullable_1_t1166124571 * get_address_of_BannedUntil_2() { return &___BannedUntil_2; }
	inline void set_BannedUntil_2(Nullable_1_t1166124571  value)
	{
		___BannedUntil_2 = value;
	}

	inline static int32_t get_offset_of_ContactEmailAddresses_3() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___ContactEmailAddresses_3)); }
	inline List_1_t1117944676 * get_ContactEmailAddresses_3() const { return ___ContactEmailAddresses_3; }
	inline List_1_t1117944676 ** get_address_of_ContactEmailAddresses_3() { return &___ContactEmailAddresses_3; }
	inline void set_ContactEmailAddresses_3(List_1_t1117944676 * value)
	{
		___ContactEmailAddresses_3 = value;
		Il2CppCodeGenWriteBarrier((&___ContactEmailAddresses_3), value);
	}

	inline static int32_t get_offset_of_Created_4() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___Created_4)); }
	inline Nullable_1_t1166124571  get_Created_4() const { return ___Created_4; }
	inline Nullable_1_t1166124571 * get_address_of_Created_4() { return &___Created_4; }
	inline void set_Created_4(Nullable_1_t1166124571  value)
	{
		___Created_4 = value;
	}

	inline static int32_t get_offset_of_DisplayName_5() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___DisplayName_5)); }
	inline String_t* get_DisplayName_5() const { return ___DisplayName_5; }
	inline String_t** get_address_of_DisplayName_5() { return &___DisplayName_5; }
	inline void set_DisplayName_5(String_t* value)
	{
		___DisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_5), value);
	}

	inline static int32_t get_offset_of_LastLogin_6() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___LastLogin_6)); }
	inline Nullable_1_t1166124571  get_LastLogin_6() const { return ___LastLogin_6; }
	inline Nullable_1_t1166124571 * get_address_of_LastLogin_6() { return &___LastLogin_6; }
	inline void set_LastLogin_6(Nullable_1_t1166124571  value)
	{
		___LastLogin_6 = value;
	}

	inline static int32_t get_offset_of_LinkedAccounts_7() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___LinkedAccounts_7)); }
	inline List_1_t4191507331 * get_LinkedAccounts_7() const { return ___LinkedAccounts_7; }
	inline List_1_t4191507331 ** get_address_of_LinkedAccounts_7() { return &___LinkedAccounts_7; }
	inline void set_LinkedAccounts_7(List_1_t4191507331 * value)
	{
		___LinkedAccounts_7 = value;
		Il2CppCodeGenWriteBarrier((&___LinkedAccounts_7), value);
	}

	inline static int32_t get_offset_of_Locations_8() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___Locations_8)); }
	inline List_1_t990609382 * get_Locations_8() const { return ___Locations_8; }
	inline List_1_t990609382 ** get_address_of_Locations_8() { return &___Locations_8; }
	inline void set_Locations_8(List_1_t990609382 * value)
	{
		___Locations_8 = value;
		Il2CppCodeGenWriteBarrier((&___Locations_8), value);
	}

	inline static int32_t get_offset_of_Memberships_9() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___Memberships_9)); }
	inline List_1_t2844474068 * get_Memberships_9() const { return ___Memberships_9; }
	inline List_1_t2844474068 ** get_address_of_Memberships_9() { return &___Memberships_9; }
	inline void set_Memberships_9(List_1_t2844474068 * value)
	{
		___Memberships_9 = value;
		Il2CppCodeGenWriteBarrier((&___Memberships_9), value);
	}

	inline static int32_t get_offset_of_Origination_10() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___Origination_10)); }
	inline Nullable_1_t3603180267  get_Origination_10() const { return ___Origination_10; }
	inline Nullable_1_t3603180267 * get_address_of_Origination_10() { return &___Origination_10; }
	inline void set_Origination_10(Nullable_1_t3603180267  value)
	{
		___Origination_10 = value;
	}

	inline static int32_t get_offset_of_PlayerId_11() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___PlayerId_11)); }
	inline String_t* get_PlayerId_11() const { return ___PlayerId_11; }
	inline String_t** get_address_of_PlayerId_11() { return &___PlayerId_11; }
	inline void set_PlayerId_11(String_t* value)
	{
		___PlayerId_11 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerId_11), value);
	}

	inline static int32_t get_offset_of_PublisherId_12() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___PublisherId_12)); }
	inline String_t* get_PublisherId_12() const { return ___PublisherId_12; }
	inline String_t** get_address_of_PublisherId_12() { return &___PublisherId_12; }
	inline void set_PublisherId_12(String_t* value)
	{
		___PublisherId_12 = value;
		Il2CppCodeGenWriteBarrier((&___PublisherId_12), value);
	}

	inline static int32_t get_offset_of_PushNotificationRegistrations_13() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___PushNotificationRegistrations_13)); }
	inline List_1_t2875462914 * get_PushNotificationRegistrations_13() const { return ___PushNotificationRegistrations_13; }
	inline List_1_t2875462914 ** get_address_of_PushNotificationRegistrations_13() { return &___PushNotificationRegistrations_13; }
	inline void set_PushNotificationRegistrations_13(List_1_t2875462914 * value)
	{
		___PushNotificationRegistrations_13 = value;
		Il2CppCodeGenWriteBarrier((&___PushNotificationRegistrations_13), value);
	}

	inline static int32_t get_offset_of_Statistics_14() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___Statistics_14)); }
	inline List_1_t2070485369 * get_Statistics_14() const { return ___Statistics_14; }
	inline List_1_t2070485369 ** get_address_of_Statistics_14() { return &___Statistics_14; }
	inline void set_Statistics_14(List_1_t2070485369 * value)
	{
		___Statistics_14 = value;
		Il2CppCodeGenWriteBarrier((&___Statistics_14), value);
	}

	inline static int32_t get_offset_of_Tags_15() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___Tags_15)); }
	inline List_1_t4252289162 * get_Tags_15() const { return ___Tags_15; }
	inline List_1_t4252289162 ** get_address_of_Tags_15() { return &___Tags_15; }
	inline void set_Tags_15(List_1_t4252289162 * value)
	{
		___Tags_15 = value;
		Il2CppCodeGenWriteBarrier((&___Tags_15), value);
	}

	inline static int32_t get_offset_of_TitleId_16() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___TitleId_16)); }
	inline String_t* get_TitleId_16() const { return ___TitleId_16; }
	inline String_t** get_address_of_TitleId_16() { return &___TitleId_16; }
	inline void set_TitleId_16(String_t* value)
	{
		___TitleId_16 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_16), value);
	}

	inline static int32_t get_offset_of_TotalValueToDateInUSD_17() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___TotalValueToDateInUSD_17)); }
	inline Nullable_1_t4282624060  get_TotalValueToDateInUSD_17() const { return ___TotalValueToDateInUSD_17; }
	inline Nullable_1_t4282624060 * get_address_of_TotalValueToDateInUSD_17() { return &___TotalValueToDateInUSD_17; }
	inline void set_TotalValueToDateInUSD_17(Nullable_1_t4282624060  value)
	{
		___TotalValueToDateInUSD_17 = value;
	}

	inline static int32_t get_offset_of_ValuesToDate_18() { return static_cast<int32_t>(offsetof(PlayerProfileModel_t250934598, ___ValuesToDate_18)); }
	inline List_1_t1071715830 * get_ValuesToDate_18() const { return ___ValuesToDate_18; }
	inline List_1_t1071715830 ** get_address_of_ValuesToDate_18() { return &___ValuesToDate_18; }
	inline void set_ValuesToDate_18(List_1_t1071715830 * value)
	{
		___ValuesToDate_18 = value;
		Il2CppCodeGenWriteBarrier((&___ValuesToDate_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPROFILEMODEL_T250934598_H
#ifndef PLAYERSTATISTICVERSION_T2730724419_H
#define PLAYERSTATISTICVERSION_T2730724419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.PlayerStatisticVersion
struct  PlayerStatisticVersion_t2730724419  : public RuntimeObject
{
public:
	// System.DateTime PlayFab.ClientModels.PlayerStatisticVersion::ActivationTime
	DateTime_t3738529785  ___ActivationTime_0;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.PlayerStatisticVersion::DeactivationTime
	Nullable_1_t1166124571  ___DeactivationTime_1;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.PlayerStatisticVersion::ScheduledActivationTime
	Nullable_1_t1166124571  ___ScheduledActivationTime_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.PlayerStatisticVersion::ScheduledDeactivationTime
	Nullable_1_t1166124571  ___ScheduledDeactivationTime_3;
	// System.String PlayFab.ClientModels.PlayerStatisticVersion::StatisticName
	String_t* ___StatisticName_4;
	// System.UInt32 PlayFab.ClientModels.PlayerStatisticVersion::Version
	uint32_t ___Version_5;

public:
	inline static int32_t get_offset_of_ActivationTime_0() { return static_cast<int32_t>(offsetof(PlayerStatisticVersion_t2730724419, ___ActivationTime_0)); }
	inline DateTime_t3738529785  get_ActivationTime_0() const { return ___ActivationTime_0; }
	inline DateTime_t3738529785 * get_address_of_ActivationTime_0() { return &___ActivationTime_0; }
	inline void set_ActivationTime_0(DateTime_t3738529785  value)
	{
		___ActivationTime_0 = value;
	}

	inline static int32_t get_offset_of_DeactivationTime_1() { return static_cast<int32_t>(offsetof(PlayerStatisticVersion_t2730724419, ___DeactivationTime_1)); }
	inline Nullable_1_t1166124571  get_DeactivationTime_1() const { return ___DeactivationTime_1; }
	inline Nullable_1_t1166124571 * get_address_of_DeactivationTime_1() { return &___DeactivationTime_1; }
	inline void set_DeactivationTime_1(Nullable_1_t1166124571  value)
	{
		___DeactivationTime_1 = value;
	}

	inline static int32_t get_offset_of_ScheduledActivationTime_2() { return static_cast<int32_t>(offsetof(PlayerStatisticVersion_t2730724419, ___ScheduledActivationTime_2)); }
	inline Nullable_1_t1166124571  get_ScheduledActivationTime_2() const { return ___ScheduledActivationTime_2; }
	inline Nullable_1_t1166124571 * get_address_of_ScheduledActivationTime_2() { return &___ScheduledActivationTime_2; }
	inline void set_ScheduledActivationTime_2(Nullable_1_t1166124571  value)
	{
		___ScheduledActivationTime_2 = value;
	}

	inline static int32_t get_offset_of_ScheduledDeactivationTime_3() { return static_cast<int32_t>(offsetof(PlayerStatisticVersion_t2730724419, ___ScheduledDeactivationTime_3)); }
	inline Nullable_1_t1166124571  get_ScheduledDeactivationTime_3() const { return ___ScheduledDeactivationTime_3; }
	inline Nullable_1_t1166124571 * get_address_of_ScheduledDeactivationTime_3() { return &___ScheduledDeactivationTime_3; }
	inline void set_ScheduledDeactivationTime_3(Nullable_1_t1166124571  value)
	{
		___ScheduledDeactivationTime_3 = value;
	}

	inline static int32_t get_offset_of_StatisticName_4() { return static_cast<int32_t>(offsetof(PlayerStatisticVersion_t2730724419, ___StatisticName_4)); }
	inline String_t* get_StatisticName_4() const { return ___StatisticName_4; }
	inline String_t** get_address_of_StatisticName_4() { return &___StatisticName_4; }
	inline void set_StatisticName_4(String_t* value)
	{
		___StatisticName_4 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_4), value);
	}

	inline static int32_t get_offset_of_Version_5() { return static_cast<int32_t>(offsetof(PlayerStatisticVersion_t2730724419, ___Version_5)); }
	inline uint32_t get_Version_5() const { return ___Version_5; }
	inline uint32_t* get_address_of_Version_5() { return &___Version_5; }
	inline void set_Version_5(uint32_t value)
	{
		___Version_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSTATISTICVERSION_T2730724419_H
#ifndef TRADEINFO_T4070927481_H
#define TRADEINFO_T4070927481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.TradeInfo
struct  TradeInfo_t4070927481  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.TradeInfo::AcceptedInventoryInstanceIds
	List_1_t3319525431 * ___AcceptedInventoryInstanceIds_0;
	// System.String PlayFab.ClientModels.TradeInfo::AcceptedPlayerId
	String_t* ___AcceptedPlayerId_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.TradeInfo::AllowedPlayerIds
	List_1_t3319525431 * ___AllowedPlayerIds_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.TradeInfo::CancelledAt
	Nullable_1_t1166124571  ___CancelledAt_3;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.TradeInfo::FilledAt
	Nullable_1_t1166124571  ___FilledAt_4;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.TradeInfo::InvalidatedAt
	Nullable_1_t1166124571  ___InvalidatedAt_5;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.TradeInfo::OfferedCatalogItemIds
	List_1_t3319525431 * ___OfferedCatalogItemIds_6;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.TradeInfo::OfferedInventoryInstanceIds
	List_1_t3319525431 * ___OfferedInventoryInstanceIds_7;
	// System.String PlayFab.ClientModels.TradeInfo::OfferingPlayerId
	String_t* ___OfferingPlayerId_8;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.TradeInfo::OpenedAt
	Nullable_1_t1166124571  ___OpenedAt_9;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.TradeInfo::RequestedCatalogItemIds
	List_1_t3319525431 * ___RequestedCatalogItemIds_10;
	// System.Nullable`1<PlayFab.ClientModels.TradeStatus> PlayFab.ClientModels.TradeInfo::Status
	Nullable_1_t968051236  ___Status_11;
	// System.String PlayFab.ClientModels.TradeInfo::TradeId
	String_t* ___TradeId_12;

public:
	inline static int32_t get_offset_of_AcceptedInventoryInstanceIds_0() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___AcceptedInventoryInstanceIds_0)); }
	inline List_1_t3319525431 * get_AcceptedInventoryInstanceIds_0() const { return ___AcceptedInventoryInstanceIds_0; }
	inline List_1_t3319525431 ** get_address_of_AcceptedInventoryInstanceIds_0() { return &___AcceptedInventoryInstanceIds_0; }
	inline void set_AcceptedInventoryInstanceIds_0(List_1_t3319525431 * value)
	{
		___AcceptedInventoryInstanceIds_0 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptedInventoryInstanceIds_0), value);
	}

	inline static int32_t get_offset_of_AcceptedPlayerId_1() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___AcceptedPlayerId_1)); }
	inline String_t* get_AcceptedPlayerId_1() const { return ___AcceptedPlayerId_1; }
	inline String_t** get_address_of_AcceptedPlayerId_1() { return &___AcceptedPlayerId_1; }
	inline void set_AcceptedPlayerId_1(String_t* value)
	{
		___AcceptedPlayerId_1 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptedPlayerId_1), value);
	}

	inline static int32_t get_offset_of_AllowedPlayerIds_2() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___AllowedPlayerIds_2)); }
	inline List_1_t3319525431 * get_AllowedPlayerIds_2() const { return ___AllowedPlayerIds_2; }
	inline List_1_t3319525431 ** get_address_of_AllowedPlayerIds_2() { return &___AllowedPlayerIds_2; }
	inline void set_AllowedPlayerIds_2(List_1_t3319525431 * value)
	{
		___AllowedPlayerIds_2 = value;
		Il2CppCodeGenWriteBarrier((&___AllowedPlayerIds_2), value);
	}

	inline static int32_t get_offset_of_CancelledAt_3() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___CancelledAt_3)); }
	inline Nullable_1_t1166124571  get_CancelledAt_3() const { return ___CancelledAt_3; }
	inline Nullable_1_t1166124571 * get_address_of_CancelledAt_3() { return &___CancelledAt_3; }
	inline void set_CancelledAt_3(Nullable_1_t1166124571  value)
	{
		___CancelledAt_3 = value;
	}

	inline static int32_t get_offset_of_FilledAt_4() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___FilledAt_4)); }
	inline Nullable_1_t1166124571  get_FilledAt_4() const { return ___FilledAt_4; }
	inline Nullable_1_t1166124571 * get_address_of_FilledAt_4() { return &___FilledAt_4; }
	inline void set_FilledAt_4(Nullable_1_t1166124571  value)
	{
		___FilledAt_4 = value;
	}

	inline static int32_t get_offset_of_InvalidatedAt_5() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___InvalidatedAt_5)); }
	inline Nullable_1_t1166124571  get_InvalidatedAt_5() const { return ___InvalidatedAt_5; }
	inline Nullable_1_t1166124571 * get_address_of_InvalidatedAt_5() { return &___InvalidatedAt_5; }
	inline void set_InvalidatedAt_5(Nullable_1_t1166124571  value)
	{
		___InvalidatedAt_5 = value;
	}

	inline static int32_t get_offset_of_OfferedCatalogItemIds_6() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___OfferedCatalogItemIds_6)); }
	inline List_1_t3319525431 * get_OfferedCatalogItemIds_6() const { return ___OfferedCatalogItemIds_6; }
	inline List_1_t3319525431 ** get_address_of_OfferedCatalogItemIds_6() { return &___OfferedCatalogItemIds_6; }
	inline void set_OfferedCatalogItemIds_6(List_1_t3319525431 * value)
	{
		___OfferedCatalogItemIds_6 = value;
		Il2CppCodeGenWriteBarrier((&___OfferedCatalogItemIds_6), value);
	}

	inline static int32_t get_offset_of_OfferedInventoryInstanceIds_7() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___OfferedInventoryInstanceIds_7)); }
	inline List_1_t3319525431 * get_OfferedInventoryInstanceIds_7() const { return ___OfferedInventoryInstanceIds_7; }
	inline List_1_t3319525431 ** get_address_of_OfferedInventoryInstanceIds_7() { return &___OfferedInventoryInstanceIds_7; }
	inline void set_OfferedInventoryInstanceIds_7(List_1_t3319525431 * value)
	{
		___OfferedInventoryInstanceIds_7 = value;
		Il2CppCodeGenWriteBarrier((&___OfferedInventoryInstanceIds_7), value);
	}

	inline static int32_t get_offset_of_OfferingPlayerId_8() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___OfferingPlayerId_8)); }
	inline String_t* get_OfferingPlayerId_8() const { return ___OfferingPlayerId_8; }
	inline String_t** get_address_of_OfferingPlayerId_8() { return &___OfferingPlayerId_8; }
	inline void set_OfferingPlayerId_8(String_t* value)
	{
		___OfferingPlayerId_8 = value;
		Il2CppCodeGenWriteBarrier((&___OfferingPlayerId_8), value);
	}

	inline static int32_t get_offset_of_OpenedAt_9() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___OpenedAt_9)); }
	inline Nullable_1_t1166124571  get_OpenedAt_9() const { return ___OpenedAt_9; }
	inline Nullable_1_t1166124571 * get_address_of_OpenedAt_9() { return &___OpenedAt_9; }
	inline void set_OpenedAt_9(Nullable_1_t1166124571  value)
	{
		___OpenedAt_9 = value;
	}

	inline static int32_t get_offset_of_RequestedCatalogItemIds_10() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___RequestedCatalogItemIds_10)); }
	inline List_1_t3319525431 * get_RequestedCatalogItemIds_10() const { return ___RequestedCatalogItemIds_10; }
	inline List_1_t3319525431 ** get_address_of_RequestedCatalogItemIds_10() { return &___RequestedCatalogItemIds_10; }
	inline void set_RequestedCatalogItemIds_10(List_1_t3319525431 * value)
	{
		___RequestedCatalogItemIds_10 = value;
		Il2CppCodeGenWriteBarrier((&___RequestedCatalogItemIds_10), value);
	}

	inline static int32_t get_offset_of_Status_11() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___Status_11)); }
	inline Nullable_1_t968051236  get_Status_11() const { return ___Status_11; }
	inline Nullable_1_t968051236 * get_address_of_Status_11() { return &___Status_11; }
	inline void set_Status_11(Nullable_1_t968051236  value)
	{
		___Status_11 = value;
	}

	inline static int32_t get_offset_of_TradeId_12() { return static_cast<int32_t>(offsetof(TradeInfo_t4070927481, ___TradeId_12)); }
	inline String_t* get_TradeId_12() const { return ___TradeId_12; }
	inline String_t** get_address_of_TradeId_12() { return &___TradeId_12; }
	inline void set_TradeId_12(String_t* value)
	{
		___TradeId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TradeId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRADEINFO_T4070927481_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3900 = { sizeof (NintendoSwitchPlayFabIdPair_t2225155660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3900[2] = 
{
	NintendoSwitchPlayFabIdPair_t2225155660::get_offset_of_NintendoSwitchDeviceId_0(),
	NintendoSwitchPlayFabIdPair_t2225155660::get_offset_of_PlayFabId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3901 = { sizeof (OpenTradeRequest_t11547462), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3901[3] = 
{
	OpenTradeRequest_t11547462::get_offset_of_AllowedPlayerIds_0(),
	OpenTradeRequest_t11547462::get_offset_of_OfferedInventoryInstanceIds_1(),
	OpenTradeRequest_t11547462::get_offset_of_RequestedCatalogItemIds_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3902 = { sizeof (OpenTradeResponse_t2601250367), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3902[1] = 
{
	OpenTradeResponse_t2601250367::get_offset_of_Trade_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3903 = { sizeof (PayForPurchaseRequest_t2615822629), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3903[4] = 
{
	PayForPurchaseRequest_t2615822629::get_offset_of_Currency_0(),
	PayForPurchaseRequest_t2615822629::get_offset_of_OrderId_1(),
	PayForPurchaseRequest_t2615822629::get_offset_of_ProviderName_2(),
	PayForPurchaseRequest_t2615822629::get_offset_of_ProviderTransactionId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3904 = { sizeof (PayForPurchaseResult_t2186103076), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3904[10] = 
{
	PayForPurchaseResult_t2186103076::get_offset_of_CreditApplied_2(),
	PayForPurchaseResult_t2186103076::get_offset_of_OrderId_3(),
	PayForPurchaseResult_t2186103076::get_offset_of_ProviderData_4(),
	PayForPurchaseResult_t2186103076::get_offset_of_ProviderToken_5(),
	PayForPurchaseResult_t2186103076::get_offset_of_PurchaseConfirmationPageURL_6(),
	PayForPurchaseResult_t2186103076::get_offset_of_PurchaseCurrency_7(),
	PayForPurchaseResult_t2186103076::get_offset_of_PurchasePrice_8(),
	PayForPurchaseResult_t2186103076::get_offset_of_Status_9(),
	PayForPurchaseResult_t2186103076::get_offset_of_VCAmount_10(),
	PayForPurchaseResult_t2186103076::get_offset_of_VirtualCurrency_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3905 = { sizeof (PaymentOption_t949298389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3905[4] = 
{
	PaymentOption_t949298389::get_offset_of_Currency_0(),
	PaymentOption_t949298389::get_offset_of_Price_1(),
	PaymentOption_t949298389::get_offset_of_ProviderName_2(),
	PaymentOption_t949298389::get_offset_of_StoreCredit_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3906 = { sizeof (PlayerLeaderboardEntry_t1881677957), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3906[5] = 
{
	PlayerLeaderboardEntry_t1881677957::get_offset_of_DisplayName_0(),
	PlayerLeaderboardEntry_t1881677957::get_offset_of_PlayFabId_1(),
	PlayerLeaderboardEntry_t1881677957::get_offset_of_Position_2(),
	PlayerLeaderboardEntry_t1881677957::get_offset_of_Profile_3(),
	PlayerLeaderboardEntry_t1881677957::get_offset_of_StatValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3907 = { sizeof (PlayerProfileModel_t250934598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3907[19] = 
{
	PlayerProfileModel_t250934598::get_offset_of_AdCampaignAttributions_0(),
	PlayerProfileModel_t250934598::get_offset_of_AvatarUrl_1(),
	PlayerProfileModel_t250934598::get_offset_of_BannedUntil_2(),
	PlayerProfileModel_t250934598::get_offset_of_ContactEmailAddresses_3(),
	PlayerProfileModel_t250934598::get_offset_of_Created_4(),
	PlayerProfileModel_t250934598::get_offset_of_DisplayName_5(),
	PlayerProfileModel_t250934598::get_offset_of_LastLogin_6(),
	PlayerProfileModel_t250934598::get_offset_of_LinkedAccounts_7(),
	PlayerProfileModel_t250934598::get_offset_of_Locations_8(),
	PlayerProfileModel_t250934598::get_offset_of_Memberships_9(),
	PlayerProfileModel_t250934598::get_offset_of_Origination_10(),
	PlayerProfileModel_t250934598::get_offset_of_PlayerId_11(),
	PlayerProfileModel_t250934598::get_offset_of_PublisherId_12(),
	PlayerProfileModel_t250934598::get_offset_of_PushNotificationRegistrations_13(),
	PlayerProfileModel_t250934598::get_offset_of_Statistics_14(),
	PlayerProfileModel_t250934598::get_offset_of_Tags_15(),
	PlayerProfileModel_t250934598::get_offset_of_TitleId_16(),
	PlayerProfileModel_t250934598::get_offset_of_TotalValueToDateInUSD_17(),
	PlayerProfileModel_t250934598::get_offset_of_ValuesToDate_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3908 = { sizeof (PlayerProfileViewConstraints_t97717017), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3908[16] = 
{
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowAvatarUrl_0(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowBannedUntil_1(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowCampaignAttributions_2(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowContactEmailAddresses_3(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowCreated_4(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowDisplayName_5(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowLastLogin_6(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowLinkedAccounts_7(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowLocations_8(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowMemberships_9(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowOrigination_10(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowPushNotificationRegistrations_11(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowStatistics_12(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowTags_13(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowTotalValueToDateInUsd_14(),
	PlayerProfileViewConstraints_t97717017::get_offset_of_ShowValuesToDate_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3909 = { sizeof (PlayerStatisticVersion_t2730724419), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3909[6] = 
{
	PlayerStatisticVersion_t2730724419::get_offset_of_ActivationTime_0(),
	PlayerStatisticVersion_t2730724419::get_offset_of_DeactivationTime_1(),
	PlayerStatisticVersion_t2730724419::get_offset_of_ScheduledActivationTime_2(),
	PlayerStatisticVersion_t2730724419::get_offset_of_ScheduledDeactivationTime_3(),
	PlayerStatisticVersion_t2730724419::get_offset_of_StatisticName_4(),
	PlayerStatisticVersion_t2730724419::get_offset_of_Version_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3910 = { sizeof (PurchaseItemRequest_t446597288), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3910[6] = 
{
	PurchaseItemRequest_t446597288::get_offset_of_CatalogVersion_0(),
	PurchaseItemRequest_t446597288::get_offset_of_CharacterId_1(),
	PurchaseItemRequest_t446597288::get_offset_of_ItemId_2(),
	PurchaseItemRequest_t446597288::get_offset_of_Price_3(),
	PurchaseItemRequest_t446597288::get_offset_of_StoreId_4(),
	PurchaseItemRequest_t446597288::get_offset_of_VirtualCurrency_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3911 = { sizeof (PurchaseItemResult_t1722243179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3911[1] = 
{
	PurchaseItemResult_t1722243179::get_offset_of_Items_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3912 = { sizeof (PushNotificationPlatform_t675897761)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3912[3] = 
{
	PushNotificationPlatform_t675897761::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3913 = { sizeof (PushNotificationRegistrationModel_t1403388172), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3913[2] = 
{
	PushNotificationRegistrationModel_t1403388172::get_offset_of_NotificationEndpointARN_0(),
	PushNotificationRegistrationModel_t1403388172::get_offset_of_Platform_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3914 = { sizeof (RedeemCouponRequest_t236242173), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3914[3] = 
{
	RedeemCouponRequest_t236242173::get_offset_of_CatalogVersion_0(),
	RedeemCouponRequest_t236242173::get_offset_of_CharacterId_1(),
	RedeemCouponRequest_t236242173::get_offset_of_CouponCode_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3915 = { sizeof (RedeemCouponResult_t4207086596), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3915[1] = 
{
	RedeemCouponResult_t4207086596::get_offset_of_GrantedItems_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3916 = { sizeof (Region_t4198023226)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3916[8] = 
{
	Region_t4198023226::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3917 = { sizeof (RegionInfo_t1716013666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3917[4] = 
{
	RegionInfo_t1716013666::get_offset_of_Available_0(),
	RegionInfo_t1716013666::get_offset_of_Name_1(),
	RegionInfo_t1716013666::get_offset_of_PingUrl_2(),
	RegionInfo_t1716013666::get_offset_of_Region_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3918 = { sizeof (RegisterForIOSPushNotificationRequest_t3055742779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3918[3] = 
{
	RegisterForIOSPushNotificationRequest_t3055742779::get_offset_of_ConfirmationMessage_0(),
	RegisterForIOSPushNotificationRequest_t3055742779::get_offset_of_DeviceToken_1(),
	RegisterForIOSPushNotificationRequest_t3055742779::get_offset_of_SendPushNotificationConfirmation_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3919 = { sizeof (RegisterForIOSPushNotificationResult_t2256269114), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3920 = { sizeof (RegisterPlayFabUserRequest_t413887218), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3920[10] = 
{
	RegisterPlayFabUserRequest_t413887218::get_offset_of_DisplayName_0(),
	RegisterPlayFabUserRequest_t413887218::get_offset_of_Email_1(),
	RegisterPlayFabUserRequest_t413887218::get_offset_of_EncryptedRequest_2(),
	RegisterPlayFabUserRequest_t413887218::get_offset_of_InfoRequestParameters_3(),
	RegisterPlayFabUserRequest_t413887218::get_offset_of_LoginTitlePlayerAccountEntity_4(),
	RegisterPlayFabUserRequest_t413887218::get_offset_of_Password_5(),
	RegisterPlayFabUserRequest_t413887218::get_offset_of_PlayerSecret_6(),
	RegisterPlayFabUserRequest_t413887218::get_offset_of_RequireBothUsernameAndEmail_7(),
	RegisterPlayFabUserRequest_t413887218::get_offset_of_TitleId_8(),
	RegisterPlayFabUserRequest_t413887218::get_offset_of_Username_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3921 = { sizeof (RegisterPlayFabUserResult_t802479880), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3921[5] = 
{
	RegisterPlayFabUserResult_t802479880::get_offset_of_EntityToken_2(),
	RegisterPlayFabUserResult_t802479880::get_offset_of_PlayFabId_3(),
	RegisterPlayFabUserResult_t802479880::get_offset_of_SessionTicket_4(),
	RegisterPlayFabUserResult_t802479880::get_offset_of_SettingsForUser_5(),
	RegisterPlayFabUserResult_t802479880::get_offset_of_Username_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3922 = { sizeof (RegisterWithWindowsHelloRequest_t1629448663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3922[8] = 
{
	RegisterWithWindowsHelloRequest_t1629448663::get_offset_of_DeviceName_0(),
	RegisterWithWindowsHelloRequest_t1629448663::get_offset_of_EncryptedRequest_1(),
	RegisterWithWindowsHelloRequest_t1629448663::get_offset_of_InfoRequestParameters_2(),
	RegisterWithWindowsHelloRequest_t1629448663::get_offset_of_LoginTitlePlayerAccountEntity_3(),
	RegisterWithWindowsHelloRequest_t1629448663::get_offset_of_PlayerSecret_4(),
	RegisterWithWindowsHelloRequest_t1629448663::get_offset_of_PublicKey_5(),
	RegisterWithWindowsHelloRequest_t1629448663::get_offset_of_TitleId_6(),
	RegisterWithWindowsHelloRequest_t1629448663::get_offset_of_UserName_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3923 = { sizeof (RemoveContactEmailRequest_t1252854948), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3924 = { sizeof (RemoveContactEmailResult_t1684933791), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3925 = { sizeof (RemoveFriendRequest_t4181183992), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3925[1] = 
{
	RemoveFriendRequest_t4181183992::get_offset_of_FriendPlayFabId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3926 = { sizeof (RemoveFriendResult_t1519141523), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3927 = { sizeof (RemoveGenericIDRequest_t1674395511), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3927[1] = 
{
	RemoveGenericIDRequest_t1674395511::get_offset_of_GenericId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3928 = { sizeof (RemoveGenericIDResult_t3234682150), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3929 = { sizeof (RemoveSharedGroupMembersRequest_t3650533269), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3929[2] = 
{
	RemoveSharedGroupMembersRequest_t3650533269::get_offset_of_PlayFabIds_0(),
	RemoveSharedGroupMembersRequest_t3650533269::get_offset_of_SharedGroupId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3930 = { sizeof (RemoveSharedGroupMembersResult_t1660437242), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3931 = { sizeof (ReportPlayerClientRequest_t2988748114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3931[2] = 
{
	ReportPlayerClientRequest_t2988748114::get_offset_of_Comment_0(),
	ReportPlayerClientRequest_t2988748114::get_offset_of_ReporteeId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3932 = { sizeof (ReportPlayerClientResult_t3799493971), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3932[1] = 
{
	ReportPlayerClientResult_t3799493971::get_offset_of_SubmissionsRemaining_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3933 = { sizeof (RestoreIOSPurchasesRequest_t2021516304), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3933[1] = 
{
	RestoreIOSPurchasesRequest_t2021516304::get_offset_of_ReceiptData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3934 = { sizeof (RestoreIOSPurchasesResult_t2500978621), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3935 = { sizeof (ScriptExecutionError_t3998229139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3935[3] = 
{
	ScriptExecutionError_t3998229139::get_offset_of_Error_0(),
	ScriptExecutionError_t3998229139::get_offset_of_Message_1(),
	ScriptExecutionError_t3998229139::get_offset_of_StackTrace_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3936 = { sizeof (SendAccountRecoveryEmailRequest_t3630781634), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3936[3] = 
{
	SendAccountRecoveryEmailRequest_t3630781634::get_offset_of_Email_0(),
	SendAccountRecoveryEmailRequest_t3630781634::get_offset_of_EmailTemplateId_1(),
	SendAccountRecoveryEmailRequest_t3630781634::get_offset_of_TitleId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3937 = { sizeof (SendAccountRecoveryEmailResult_t550548115), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3938 = { sizeof (SetFriendTagsRequest_t2241574297), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3938[2] = 
{
	SetFriendTagsRequest_t2241574297::get_offset_of_FriendPlayFabId_0(),
	SetFriendTagsRequest_t2241574297::get_offset_of_Tags_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3939 = { sizeof (SetFriendTagsResult_t4002085899), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3940 = { sizeof (SetPlayerSecretRequest_t226361414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3940[2] = 
{
	SetPlayerSecretRequest_t226361414::get_offset_of_EncryptedRequest_0(),
	SetPlayerSecretRequest_t226361414::get_offset_of_PlayerSecret_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3941 = { sizeof (SetPlayerSecretResult_t1859896565), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3942 = { sizeof (SharedGroupDataRecord_t1581922388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3942[4] = 
{
	SharedGroupDataRecord_t1581922388::get_offset_of_LastUpdated_0(),
	SharedGroupDataRecord_t1581922388::get_offset_of_LastUpdatedBy_1(),
	SharedGroupDataRecord_t1581922388::get_offset_of_Permission_2(),
	SharedGroupDataRecord_t1581922388::get_offset_of_Value_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3943 = { sizeof (SourceType_t2721852859)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3943[8] = 
{
	SourceType_t2721852859::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3944 = { sizeof (StartGameRequest_t3072561728), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3944[6] = 
{
	StartGameRequest_t3072561728::get_offset_of_BuildVersion_0(),
	StartGameRequest_t3072561728::get_offset_of_CharacterId_1(),
	StartGameRequest_t3072561728::get_offset_of_CustomCommandLineData_2(),
	StartGameRequest_t3072561728::get_offset_of_GameMode_3(),
	StartGameRequest_t3072561728::get_offset_of_Region_4(),
	StartGameRequest_t3072561728::get_offset_of_StatisticName_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3945 = { sizeof (StartGameResult_t3332222724), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3945[9] = 
{
	StartGameResult_t3332222724::get_offset_of_Expires_2(),
	StartGameResult_t3332222724::get_offset_of_LobbyID_3(),
	StartGameResult_t3332222724::get_offset_of_Password_4(),
	StartGameResult_t3332222724::get_offset_of_ServerHostname_5(),
	StartGameResult_t3332222724::get_offset_of_ServerIPV4Address_6(),
	StartGameResult_t3332222724::get_offset_of_ServerIPV6Address_7(),
	StartGameResult_t3332222724::get_offset_of_ServerPort_8(),
	StartGameResult_t3332222724::get_offset_of_ServerPublicDNSName_9(),
	StartGameResult_t3332222724::get_offset_of_Ticket_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3946 = { sizeof (StartPurchaseRequest_t1560898140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3946[3] = 
{
	StartPurchaseRequest_t1560898140::get_offset_of_CatalogVersion_0(),
	StartPurchaseRequest_t1560898140::get_offset_of_Items_1(),
	StartPurchaseRequest_t1560898140::get_offset_of_StoreId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3947 = { sizeof (StartPurchaseResult_t322616865), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3947[4] = 
{
	StartPurchaseResult_t322616865::get_offset_of_Contents_2(),
	StartPurchaseResult_t322616865::get_offset_of_OrderId_3(),
	StartPurchaseResult_t322616865::get_offset_of_PaymentOptions_4(),
	StartPurchaseResult_t322616865::get_offset_of_VirtualCurrencyBalances_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3948 = { sizeof (StatisticModel_t598410627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3948[3] = 
{
	StatisticModel_t598410627::get_offset_of_Name_0(),
	StatisticModel_t598410627::get_offset_of_Value_1(),
	StatisticModel_t598410627::get_offset_of_Version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3949 = { sizeof (StatisticNameVersion_t4077247347), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3949[2] = 
{
	StatisticNameVersion_t4077247347::get_offset_of_StatisticName_0(),
	StatisticNameVersion_t4077247347::get_offset_of_Version_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3950 = { sizeof (StatisticUpdate_t3254357203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3950[3] = 
{
	StatisticUpdate_t3254357203::get_offset_of_StatisticName_0(),
	StatisticUpdate_t3254357203::get_offset_of_Value_1(),
	StatisticUpdate_t3254357203::get_offset_of_Version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3951 = { sizeof (StatisticValue_t383333543), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3951[3] = 
{
	StatisticValue_t383333543::get_offset_of_StatisticName_0(),
	StatisticValue_t383333543::get_offset_of_Value_1(),
	StatisticValue_t383333543::get_offset_of_Version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3952 = { sizeof (SteamPlayFabIdPair_t748597208), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3952[2] = 
{
	SteamPlayFabIdPair_t748597208::get_offset_of_PlayFabId_0(),
	SteamPlayFabIdPair_t748597208::get_offset_of_SteamStringId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3953 = { sizeof (StoreItem_t676336948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3953[5] = 
{
	StoreItem_t676336948::get_offset_of_CustomData_0(),
	StoreItem_t676336948::get_offset_of_DisplayPosition_1(),
	StoreItem_t676336948::get_offset_of_ItemId_2(),
	StoreItem_t676336948::get_offset_of_RealCurrencyPrices_3(),
	StoreItem_t676336948::get_offset_of_VirtualCurrencyPrices_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3954 = { sizeof (StoreMarketingModel_t3941052148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3954[3] = 
{
	StoreMarketingModel_t3941052148::get_offset_of_Description_0(),
	StoreMarketingModel_t3941052148::get_offset_of_DisplayName_1(),
	StoreMarketingModel_t3941052148::get_offset_of_Metadata_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3955 = { sizeof (SubscriptionModel_t537999389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3955[7] = 
{
	SubscriptionModel_t537999389::get_offset_of_Expiration_0(),
	SubscriptionModel_t537999389::get_offset_of_InitialSubscriptionTime_1(),
	SubscriptionModel_t537999389::get_offset_of_IsActive_2(),
	SubscriptionModel_t537999389::get_offset_of_Status_3(),
	SubscriptionModel_t537999389::get_offset_of_SubscriptionId_4(),
	SubscriptionModel_t537999389::get_offset_of_SubscriptionItemId_5(),
	SubscriptionModel_t537999389::get_offset_of_SubscriptionProvider_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3956 = { sizeof (SubscriptionProviderStatus_t1621771676)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3956[9] = 
{
	SubscriptionProviderStatus_t1621771676::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3957 = { sizeof (SubtractUserVirtualCurrencyRequest_t2836060639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3957[2] = 
{
	SubtractUserVirtualCurrencyRequest_t2836060639::get_offset_of_Amount_0(),
	SubtractUserVirtualCurrencyRequest_t2836060639::get_offset_of_VirtualCurrency_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3958 = { sizeof (TagModel_t2780214420), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3958[1] = 
{
	TagModel_t2780214420::get_offset_of_TagValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3959 = { sizeof (TitleActivationStatus_t1551193330)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3959[6] = 
{
	TitleActivationStatus_t1551193330::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3960 = { sizeof (TitleNewsItem_t3588921859), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3960[4] = 
{
	TitleNewsItem_t3588921859::get_offset_of_Body_0(),
	TitleNewsItem_t3588921859::get_offset_of_NewsId_1(),
	TitleNewsItem_t3588921859::get_offset_of_Timestamp_2(),
	TitleNewsItem_t3588921859::get_offset_of_Title_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3961 = { sizeof (TradeInfo_t4070927481), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3961[13] = 
{
	TradeInfo_t4070927481::get_offset_of_AcceptedInventoryInstanceIds_0(),
	TradeInfo_t4070927481::get_offset_of_AcceptedPlayerId_1(),
	TradeInfo_t4070927481::get_offset_of_AllowedPlayerIds_2(),
	TradeInfo_t4070927481::get_offset_of_CancelledAt_3(),
	TradeInfo_t4070927481::get_offset_of_FilledAt_4(),
	TradeInfo_t4070927481::get_offset_of_InvalidatedAt_5(),
	TradeInfo_t4070927481::get_offset_of_OfferedCatalogItemIds_6(),
	TradeInfo_t4070927481::get_offset_of_OfferedInventoryInstanceIds_7(),
	TradeInfo_t4070927481::get_offset_of_OfferingPlayerId_8(),
	TradeInfo_t4070927481::get_offset_of_OpenedAt_9(),
	TradeInfo_t4070927481::get_offset_of_RequestedCatalogItemIds_10(),
	TradeInfo_t4070927481::get_offset_of_Status_11(),
	TradeInfo_t4070927481::get_offset_of_TradeId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3962 = { sizeof (TradeStatus_t3540456450)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3962[8] = 
{
	TradeStatus_t3540456450::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3963 = { sizeof (TransactionStatus_t2822543195)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3963[21] = 
{
	TransactionStatus_t2822543195::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3964 = { sizeof (TwitchPlayFabIdPair_t2801291494), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3964[2] = 
{
	TwitchPlayFabIdPair_t2801291494::get_offset_of_PlayFabId_0(),
	TwitchPlayFabIdPair_t2801291494::get_offset_of_TwitchId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3965 = { sizeof (UnlinkAndroidDeviceIDRequest_t1847446916), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3965[1] = 
{
	UnlinkAndroidDeviceIDRequest_t1847446916::get_offset_of_AndroidDeviceId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3966 = { sizeof (UnlinkAndroidDeviceIDResult_t1333511660), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3967 = { sizeof (UnlinkCustomIDRequest_t211480731), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3967[1] = 
{
	UnlinkCustomIDRequest_t211480731::get_offset_of_CustomId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3968 = { sizeof (UnlinkCustomIDResult_t3699896482), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3969 = { sizeof (UnlinkFacebookAccountRequest_t1821811487), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3970 = { sizeof (UnlinkFacebookAccountResult_t3945255406), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3971 = { sizeof (UnlinkFacebookInstantGamesIdRequest_t2506757754), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3971[1] = 
{
	UnlinkFacebookInstantGamesIdRequest_t2506757754::get_offset_of_FacebookInstantGamesId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3972 = { sizeof (UnlinkFacebookInstantGamesIdResult_t150922813), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3973 = { sizeof (UnlinkGameCenterAccountRequest_t887789930), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3974 = { sizeof (UnlinkGameCenterAccountResult_t3227499617), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3975 = { sizeof (UnlinkGoogleAccountRequest_t2190997272), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3976 = { sizeof (UnlinkGoogleAccountResult_t261921105), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3977 = { sizeof (UnlinkIOSDeviceIDRequest_t1460914532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3977[1] = 
{
	UnlinkIOSDeviceIDRequest_t1460914532::get_offset_of_DeviceId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3978 = { sizeof (UnlinkIOSDeviceIDResult_t2913467552), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3979 = { sizeof (UnlinkKongregateAccountRequest_t3532493616), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3980 = { sizeof (UnlinkKongregateAccountResult_t1677538191), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3981 = { sizeof (UnlinkNintendoSwitchDeviceIdRequest_t80719688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3981[1] = 
{
	UnlinkNintendoSwitchDeviceIdRequest_t80719688::get_offset_of_NintendoSwitchDeviceId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3982 = { sizeof (UnlinkNintendoSwitchDeviceIdResult_t2877253697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3983 = { sizeof (UnlinkSteamAccountRequest_t1633183653), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3984 = { sizeof (UnlinkSteamAccountResult_t1196386210), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3985 = { sizeof (UnlinkTwitchAccountRequest_t1805171282), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3986 = { sizeof (UnlinkTwitchAccountResult_t3093969921), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3987 = { sizeof (UnlinkWindowsHelloAccountRequest_t275323180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3987[1] = 
{
	UnlinkWindowsHelloAccountRequest_t275323180::get_offset_of_PublicKeyHint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3988 = { sizeof (UnlinkWindowsHelloAccountResponse_t2140972915), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3989 = { sizeof (UnlinkXboxAccountRequest_t3207239382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3989[1] = 
{
	UnlinkXboxAccountRequest_t3207239382::get_offset_of_XboxToken_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3990 = { sizeof (UnlinkXboxAccountResult_t3640208244), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3991 = { sizeof (UnlockContainerInstanceRequest_t1274512457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3991[4] = 
{
	UnlockContainerInstanceRequest_t1274512457::get_offset_of_CatalogVersion_0(),
	UnlockContainerInstanceRequest_t1274512457::get_offset_of_CharacterId_1(),
	UnlockContainerInstanceRequest_t1274512457::get_offset_of_ContainerItemInstanceId_2(),
	UnlockContainerInstanceRequest_t1274512457::get_offset_of_KeyItemInstanceId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3992 = { sizeof (UnlockContainerItemRequest_t2386906346), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3992[3] = 
{
	UnlockContainerItemRequest_t2386906346::get_offset_of_CatalogVersion_0(),
	UnlockContainerItemRequest_t2386906346::get_offset_of_CharacterId_1(),
	UnlockContainerItemRequest_t2386906346::get_offset_of_ContainerItemId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3993 = { sizeof (UnlockContainerItemResult_t3538577975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3993[4] = 
{
	UnlockContainerItemResult_t3538577975::get_offset_of_GrantedItems_2(),
	UnlockContainerItemResult_t3538577975::get_offset_of_UnlockedItemInstanceId_3(),
	UnlockContainerItemResult_t3538577975::get_offset_of_UnlockedWithItemInstanceId_4(),
	UnlockContainerItemResult_t3538577975::get_offset_of_VirtualCurrency_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3994 = { sizeof (UpdateAvatarUrlRequest_t1480905281), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3994[1] = 
{
	UpdateAvatarUrlRequest_t1480905281::get_offset_of_ImageUrl_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3995 = { sizeof (UpdateCharacterDataRequest_t4168165221), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3995[4] = 
{
	UpdateCharacterDataRequest_t4168165221::get_offset_of_CharacterId_0(),
	UpdateCharacterDataRequest_t4168165221::get_offset_of_Data_1(),
	UpdateCharacterDataRequest_t4168165221::get_offset_of_KeysToRemove_2(),
	UpdateCharacterDataRequest_t4168165221::get_offset_of_Permission_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3996 = { sizeof (UpdateCharacterDataResult_t2223161901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3996[1] = 
{
	UpdateCharacterDataResult_t2223161901::get_offset_of_DataVersion_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3997 = { sizeof (UpdateCharacterStatisticsRequest_t4132629260), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3997[2] = 
{
	UpdateCharacterStatisticsRequest_t4132629260::get_offset_of_CharacterId_0(),
	UpdateCharacterStatisticsRequest_t4132629260::get_offset_of_CharacterStatistics_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3998 = { sizeof (UpdateCharacterStatisticsResult_t2136044864), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3999 = { sizeof (UpdatePlayerStatisticsRequest_t410410476), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3999[1] = 
{
	UpdatePlayerStatisticsRequest_t410410476::get_offset_of_Statistics_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
