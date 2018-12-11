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


// PlayFab.ClientModels.CatalogItemBundleInfo
struct CatalogItemBundleInfo_t862654583;
// PlayFab.ClientModels.CatalogItemConsumableInfo
struct CatalogItemConsumableInfo_t2482552979;
// PlayFab.ClientModels.CatalogItemContainerInfo
struct CatalogItemContainerInfo_t582357744;
// PlayFab.ClientModels.CollectionFilter
struct CollectionFilter_t2867730642;
// PlayFab.ClientModels.EntityKey
struct EntityKey_t1759282107;
// PlayFab.ClientModels.GenericServiceId
struct GenericServiceId_t3400130533;
// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams
struct GetPlayerCombinedInfoRequestParams_t121265087;
// PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload
struct GetPlayerCombinedInfoResultPayload_t2789378405;
// PlayFab.ClientModels.PlayerProfileModel
struct PlayerProfileModel_t250934598;
// PlayFab.ClientModels.PlayerProfileViewConstraints
struct PlayerProfileViewConstraints_t97717017;
// PlayFab.ClientModels.ScriptExecutionError
struct ScriptExecutionError_t3998229139;
// PlayFab.ClientModels.TradeInfo
struct TradeInfo_t4070927481;
// PlayFab.ClientModels.UserAccountInfo
struct UserAccountInfo_t2687855647;
// PlayFab.ClientModels.UserFacebookInfo
struct UserFacebookInfo_t1027919101;
// PlayFab.ClientModels.UserGameCenterInfo
struct UserGameCenterInfo_t1831595825;
// PlayFab.ClientModels.UserPsnInfo
struct UserPsnInfo_t1437888010;
// PlayFab.ClientModels.UserSteamInfo
struct UserSteamInfo_t155181053;
// PlayFab.ClientModels.UserXboxInfo
struct UserXboxInfo_t1002111372;
// PlayFab.SharedModels.PlayFabRequestCommon
struct PlayFabRequestCommon_t229319069;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord>
struct Dictionary_2_t1171190865;
// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.VirtualCurrencyRechargeTime>
struct Dictionary_2_t2609091868;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.Dictionary`2<System.String,System.UInt32>
struct Dictionary_2_t2345318277;
// System.Collections.Generic.List`1<PlayFab.ClientModels.CatalogItem>
struct List_1_t2565788986;
// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterInventory>
struct List_1_t1295715675;
// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterLeaderboardEntry>
struct List_1_t4011474940;
// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterResult>
struct List_1_t870886602;
// System.Collections.Generic.List`1<PlayFab.ClientModels.Container_Dictionary_String_String>
struct List_1_t2944824905;
// System.Collections.Generic.List`1<PlayFab.ClientModels.FacebookPlayFabIdPair>
struct List_1_t1153674906;
// System.Collections.Generic.List`1<PlayFab.ClientModels.FriendInfo>
struct List_1_t2625934009;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GameInfo>
struct List_1_t1113734529;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GetSegmentResult>
struct List_1_t3919296276;
// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance>
struct List_1_t898730215;
// System.Collections.Generic.List`1<PlayFab.ClientModels.LogStatement>
struct List_1_t789441556;
// System.Collections.Generic.List`1<PlayFab.ClientModels.PlayerLeaderboardEntry>
struct List_1_t3353752699;
// System.Collections.Generic.List`1<PlayFab.ClientModels.PlayerStatisticVersion>
struct List_1_t4202799161;
// System.Collections.Generic.List`1<PlayFab.ClientModels.RegionInfo>
struct List_1_t3188088408;
// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticNameVersion>
struct List_1_t1254354793;
// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticValue>
struct List_1_t1855408285;
// System.Collections.Generic.List`1<PlayFab.ClientModels.TradeInfo>
struct List_1_t1248034927;
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
#ifndef CARTITEM_T669385532_H
#define CARTITEM_T669385532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CartItem
struct  CartItem_t669385532  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.CartItem::Description
	String_t* ___Description_0;
	// System.String PlayFab.ClientModels.CartItem::DisplayName
	String_t* ___DisplayName_1;
	// System.String PlayFab.ClientModels.CartItem::ItemClass
	String_t* ___ItemClass_2;
	// System.String PlayFab.ClientModels.CartItem::ItemId
	String_t* ___ItemId_3;
	// System.String PlayFab.ClientModels.CartItem::ItemInstanceId
	String_t* ___ItemInstanceId_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CartItem::RealCurrencyPrices
	Dictionary_2_t2345318277 * ___RealCurrencyPrices_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CartItem::VCAmount
	Dictionary_2_t2345318277 * ___VCAmount_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CartItem::VirtualCurrencyPrices
	Dictionary_2_t2345318277 * ___VirtualCurrencyPrices_7;

public:
	inline static int32_t get_offset_of_Description_0() { return static_cast<int32_t>(offsetof(CartItem_t669385532, ___Description_0)); }
	inline String_t* get_Description_0() const { return ___Description_0; }
	inline String_t** get_address_of_Description_0() { return &___Description_0; }
	inline void set_Description_0(String_t* value)
	{
		___Description_0 = value;
		Il2CppCodeGenWriteBarrier((&___Description_0), value);
	}

	inline static int32_t get_offset_of_DisplayName_1() { return static_cast<int32_t>(offsetof(CartItem_t669385532, ___DisplayName_1)); }
	inline String_t* get_DisplayName_1() const { return ___DisplayName_1; }
	inline String_t** get_address_of_DisplayName_1() { return &___DisplayName_1; }
	inline void set_DisplayName_1(String_t* value)
	{
		___DisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_1), value);
	}

	inline static int32_t get_offset_of_ItemClass_2() { return static_cast<int32_t>(offsetof(CartItem_t669385532, ___ItemClass_2)); }
	inline String_t* get_ItemClass_2() const { return ___ItemClass_2; }
	inline String_t** get_address_of_ItemClass_2() { return &___ItemClass_2; }
	inline void set_ItemClass_2(String_t* value)
	{
		___ItemClass_2 = value;
		Il2CppCodeGenWriteBarrier((&___ItemClass_2), value);
	}

	inline static int32_t get_offset_of_ItemId_3() { return static_cast<int32_t>(offsetof(CartItem_t669385532, ___ItemId_3)); }
	inline String_t* get_ItemId_3() const { return ___ItemId_3; }
	inline String_t** get_address_of_ItemId_3() { return &___ItemId_3; }
	inline void set_ItemId_3(String_t* value)
	{
		___ItemId_3 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_3), value);
	}

	inline static int32_t get_offset_of_ItemInstanceId_4() { return static_cast<int32_t>(offsetof(CartItem_t669385532, ___ItemInstanceId_4)); }
	inline String_t* get_ItemInstanceId_4() const { return ___ItemInstanceId_4; }
	inline String_t** get_address_of_ItemInstanceId_4() { return &___ItemInstanceId_4; }
	inline void set_ItemInstanceId_4(String_t* value)
	{
		___ItemInstanceId_4 = value;
		Il2CppCodeGenWriteBarrier((&___ItemInstanceId_4), value);
	}

	inline static int32_t get_offset_of_RealCurrencyPrices_5() { return static_cast<int32_t>(offsetof(CartItem_t669385532, ___RealCurrencyPrices_5)); }
	inline Dictionary_2_t2345318277 * get_RealCurrencyPrices_5() const { return ___RealCurrencyPrices_5; }
	inline Dictionary_2_t2345318277 ** get_address_of_RealCurrencyPrices_5() { return &___RealCurrencyPrices_5; }
	inline void set_RealCurrencyPrices_5(Dictionary_2_t2345318277 * value)
	{
		___RealCurrencyPrices_5 = value;
		Il2CppCodeGenWriteBarrier((&___RealCurrencyPrices_5), value);
	}

	inline static int32_t get_offset_of_VCAmount_6() { return static_cast<int32_t>(offsetof(CartItem_t669385532, ___VCAmount_6)); }
	inline Dictionary_2_t2345318277 * get_VCAmount_6() const { return ___VCAmount_6; }
	inline Dictionary_2_t2345318277 ** get_address_of_VCAmount_6() { return &___VCAmount_6; }
	inline void set_VCAmount_6(Dictionary_2_t2345318277 * value)
	{
		___VCAmount_6 = value;
		Il2CppCodeGenWriteBarrier((&___VCAmount_6), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyPrices_7() { return static_cast<int32_t>(offsetof(CartItem_t669385532, ___VirtualCurrencyPrices_7)); }
	inline Dictionary_2_t2345318277 * get_VirtualCurrencyPrices_7() const { return ___VirtualCurrencyPrices_7; }
	inline Dictionary_2_t2345318277 ** get_address_of_VirtualCurrencyPrices_7() { return &___VirtualCurrencyPrices_7; }
	inline void set_VirtualCurrencyPrices_7(Dictionary_2_t2345318277 * value)
	{
		___VirtualCurrencyPrices_7 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyPrices_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CARTITEM_T669385532_H
#ifndef CATALOGITEM_T1093714244_H
#define CATALOGITEM_T1093714244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CatalogItem
struct  CatalogItem_t1093714244  : public RuntimeObject
{
public:
	// PlayFab.ClientModels.CatalogItemBundleInfo PlayFab.ClientModels.CatalogItem::Bundle
	CatalogItemBundleInfo_t862654583 * ___Bundle_0;
	// System.Boolean PlayFab.ClientModels.CatalogItem::CanBecomeCharacter
	bool ___CanBecomeCharacter_1;
	// System.String PlayFab.ClientModels.CatalogItem::CatalogVersion
	String_t* ___CatalogVersion_2;
	// PlayFab.ClientModels.CatalogItemConsumableInfo PlayFab.ClientModels.CatalogItem::Consumable
	CatalogItemConsumableInfo_t2482552979 * ___Consumable_3;
	// PlayFab.ClientModels.CatalogItemContainerInfo PlayFab.ClientModels.CatalogItem::Container
	CatalogItemContainerInfo_t582357744 * ___Container_4;
	// System.String PlayFab.ClientModels.CatalogItem::CustomData
	String_t* ___CustomData_5;
	// System.String PlayFab.ClientModels.CatalogItem::Description
	String_t* ___Description_6;
	// System.String PlayFab.ClientModels.CatalogItem::DisplayName
	String_t* ___DisplayName_7;
	// System.Int32 PlayFab.ClientModels.CatalogItem::InitialLimitedEditionCount
	int32_t ___InitialLimitedEditionCount_8;
	// System.Boolean PlayFab.ClientModels.CatalogItem::IsLimitedEdition
	bool ___IsLimitedEdition_9;
	// System.Boolean PlayFab.ClientModels.CatalogItem::IsStackable
	bool ___IsStackable_10;
	// System.Boolean PlayFab.ClientModels.CatalogItem::IsTradable
	bool ___IsTradable_11;
	// System.String PlayFab.ClientModels.CatalogItem::ItemClass
	String_t* ___ItemClass_12;
	// System.String PlayFab.ClientModels.CatalogItem::ItemId
	String_t* ___ItemId_13;
	// System.String PlayFab.ClientModels.CatalogItem::ItemImageUrl
	String_t* ___ItemImageUrl_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CatalogItem::RealCurrencyPrices
	Dictionary_2_t2345318277 * ___RealCurrencyPrices_15;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.CatalogItem::Tags
	List_1_t3319525431 * ___Tags_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CatalogItem::VirtualCurrencyPrices
	Dictionary_2_t2345318277 * ___VirtualCurrencyPrices_17;

public:
	inline static int32_t get_offset_of_Bundle_0() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___Bundle_0)); }
	inline CatalogItemBundleInfo_t862654583 * get_Bundle_0() const { return ___Bundle_0; }
	inline CatalogItemBundleInfo_t862654583 ** get_address_of_Bundle_0() { return &___Bundle_0; }
	inline void set_Bundle_0(CatalogItemBundleInfo_t862654583 * value)
	{
		___Bundle_0 = value;
		Il2CppCodeGenWriteBarrier((&___Bundle_0), value);
	}

	inline static int32_t get_offset_of_CanBecomeCharacter_1() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___CanBecomeCharacter_1)); }
	inline bool get_CanBecomeCharacter_1() const { return ___CanBecomeCharacter_1; }
	inline bool* get_address_of_CanBecomeCharacter_1() { return &___CanBecomeCharacter_1; }
	inline void set_CanBecomeCharacter_1(bool value)
	{
		___CanBecomeCharacter_1 = value;
	}

	inline static int32_t get_offset_of_CatalogVersion_2() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___CatalogVersion_2)); }
	inline String_t* get_CatalogVersion_2() const { return ___CatalogVersion_2; }
	inline String_t** get_address_of_CatalogVersion_2() { return &___CatalogVersion_2; }
	inline void set_CatalogVersion_2(String_t* value)
	{
		___CatalogVersion_2 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_2), value);
	}

	inline static int32_t get_offset_of_Consumable_3() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___Consumable_3)); }
	inline CatalogItemConsumableInfo_t2482552979 * get_Consumable_3() const { return ___Consumable_3; }
	inline CatalogItemConsumableInfo_t2482552979 ** get_address_of_Consumable_3() { return &___Consumable_3; }
	inline void set_Consumable_3(CatalogItemConsumableInfo_t2482552979 * value)
	{
		___Consumable_3 = value;
		Il2CppCodeGenWriteBarrier((&___Consumable_3), value);
	}

	inline static int32_t get_offset_of_Container_4() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___Container_4)); }
	inline CatalogItemContainerInfo_t582357744 * get_Container_4() const { return ___Container_4; }
	inline CatalogItemContainerInfo_t582357744 ** get_address_of_Container_4() { return &___Container_4; }
	inline void set_Container_4(CatalogItemContainerInfo_t582357744 * value)
	{
		___Container_4 = value;
		Il2CppCodeGenWriteBarrier((&___Container_4), value);
	}

	inline static int32_t get_offset_of_CustomData_5() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___CustomData_5)); }
	inline String_t* get_CustomData_5() const { return ___CustomData_5; }
	inline String_t** get_address_of_CustomData_5() { return &___CustomData_5; }
	inline void set_CustomData_5(String_t* value)
	{
		___CustomData_5 = value;
		Il2CppCodeGenWriteBarrier((&___CustomData_5), value);
	}

	inline static int32_t get_offset_of_Description_6() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___Description_6)); }
	inline String_t* get_Description_6() const { return ___Description_6; }
	inline String_t** get_address_of_Description_6() { return &___Description_6; }
	inline void set_Description_6(String_t* value)
	{
		___Description_6 = value;
		Il2CppCodeGenWriteBarrier((&___Description_6), value);
	}

	inline static int32_t get_offset_of_DisplayName_7() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___DisplayName_7)); }
	inline String_t* get_DisplayName_7() const { return ___DisplayName_7; }
	inline String_t** get_address_of_DisplayName_7() { return &___DisplayName_7; }
	inline void set_DisplayName_7(String_t* value)
	{
		___DisplayName_7 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_7), value);
	}

	inline static int32_t get_offset_of_InitialLimitedEditionCount_8() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___InitialLimitedEditionCount_8)); }
	inline int32_t get_InitialLimitedEditionCount_8() const { return ___InitialLimitedEditionCount_8; }
	inline int32_t* get_address_of_InitialLimitedEditionCount_8() { return &___InitialLimitedEditionCount_8; }
	inline void set_InitialLimitedEditionCount_8(int32_t value)
	{
		___InitialLimitedEditionCount_8 = value;
	}

	inline static int32_t get_offset_of_IsLimitedEdition_9() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___IsLimitedEdition_9)); }
	inline bool get_IsLimitedEdition_9() const { return ___IsLimitedEdition_9; }
	inline bool* get_address_of_IsLimitedEdition_9() { return &___IsLimitedEdition_9; }
	inline void set_IsLimitedEdition_9(bool value)
	{
		___IsLimitedEdition_9 = value;
	}

	inline static int32_t get_offset_of_IsStackable_10() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___IsStackable_10)); }
	inline bool get_IsStackable_10() const { return ___IsStackable_10; }
	inline bool* get_address_of_IsStackable_10() { return &___IsStackable_10; }
	inline void set_IsStackable_10(bool value)
	{
		___IsStackable_10 = value;
	}

	inline static int32_t get_offset_of_IsTradable_11() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___IsTradable_11)); }
	inline bool get_IsTradable_11() const { return ___IsTradable_11; }
	inline bool* get_address_of_IsTradable_11() { return &___IsTradable_11; }
	inline void set_IsTradable_11(bool value)
	{
		___IsTradable_11 = value;
	}

	inline static int32_t get_offset_of_ItemClass_12() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___ItemClass_12)); }
	inline String_t* get_ItemClass_12() const { return ___ItemClass_12; }
	inline String_t** get_address_of_ItemClass_12() { return &___ItemClass_12; }
	inline void set_ItemClass_12(String_t* value)
	{
		___ItemClass_12 = value;
		Il2CppCodeGenWriteBarrier((&___ItemClass_12), value);
	}

	inline static int32_t get_offset_of_ItemId_13() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___ItemId_13)); }
	inline String_t* get_ItemId_13() const { return ___ItemId_13; }
	inline String_t** get_address_of_ItemId_13() { return &___ItemId_13; }
	inline void set_ItemId_13(String_t* value)
	{
		___ItemId_13 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_13), value);
	}

	inline static int32_t get_offset_of_ItemImageUrl_14() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___ItemImageUrl_14)); }
	inline String_t* get_ItemImageUrl_14() const { return ___ItemImageUrl_14; }
	inline String_t** get_address_of_ItemImageUrl_14() { return &___ItemImageUrl_14; }
	inline void set_ItemImageUrl_14(String_t* value)
	{
		___ItemImageUrl_14 = value;
		Il2CppCodeGenWriteBarrier((&___ItemImageUrl_14), value);
	}

	inline static int32_t get_offset_of_RealCurrencyPrices_15() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___RealCurrencyPrices_15)); }
	inline Dictionary_2_t2345318277 * get_RealCurrencyPrices_15() const { return ___RealCurrencyPrices_15; }
	inline Dictionary_2_t2345318277 ** get_address_of_RealCurrencyPrices_15() { return &___RealCurrencyPrices_15; }
	inline void set_RealCurrencyPrices_15(Dictionary_2_t2345318277 * value)
	{
		___RealCurrencyPrices_15 = value;
		Il2CppCodeGenWriteBarrier((&___RealCurrencyPrices_15), value);
	}

	inline static int32_t get_offset_of_Tags_16() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___Tags_16)); }
	inline List_1_t3319525431 * get_Tags_16() const { return ___Tags_16; }
	inline List_1_t3319525431 ** get_address_of_Tags_16() { return &___Tags_16; }
	inline void set_Tags_16(List_1_t3319525431 * value)
	{
		___Tags_16 = value;
		Il2CppCodeGenWriteBarrier((&___Tags_16), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyPrices_17() { return static_cast<int32_t>(offsetof(CatalogItem_t1093714244, ___VirtualCurrencyPrices_17)); }
	inline Dictionary_2_t2345318277 * get_VirtualCurrencyPrices_17() const { return ___VirtualCurrencyPrices_17; }
	inline Dictionary_2_t2345318277 ** get_address_of_VirtualCurrencyPrices_17() { return &___VirtualCurrencyPrices_17; }
	inline void set_VirtualCurrencyPrices_17(Dictionary_2_t2345318277 * value)
	{
		___VirtualCurrencyPrices_17 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyPrices_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATALOGITEM_T1093714244_H
#ifndef CATALOGITEMBUNDLEINFO_T862654583_H
#define CATALOGITEMBUNDLEINFO_T862654583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CatalogItemBundleInfo
struct  CatalogItemBundleInfo_t862654583  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.CatalogItemBundleInfo::BundledItems
	List_1_t3319525431 * ___BundledItems_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.CatalogItemBundleInfo::BundledResultTables
	List_1_t3319525431 * ___BundledResultTables_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CatalogItemBundleInfo::BundledVirtualCurrencies
	Dictionary_2_t2345318277 * ___BundledVirtualCurrencies_2;

public:
	inline static int32_t get_offset_of_BundledItems_0() { return static_cast<int32_t>(offsetof(CatalogItemBundleInfo_t862654583, ___BundledItems_0)); }
	inline List_1_t3319525431 * get_BundledItems_0() const { return ___BundledItems_0; }
	inline List_1_t3319525431 ** get_address_of_BundledItems_0() { return &___BundledItems_0; }
	inline void set_BundledItems_0(List_1_t3319525431 * value)
	{
		___BundledItems_0 = value;
		Il2CppCodeGenWriteBarrier((&___BundledItems_0), value);
	}

	inline static int32_t get_offset_of_BundledResultTables_1() { return static_cast<int32_t>(offsetof(CatalogItemBundleInfo_t862654583, ___BundledResultTables_1)); }
	inline List_1_t3319525431 * get_BundledResultTables_1() const { return ___BundledResultTables_1; }
	inline List_1_t3319525431 ** get_address_of_BundledResultTables_1() { return &___BundledResultTables_1; }
	inline void set_BundledResultTables_1(List_1_t3319525431 * value)
	{
		___BundledResultTables_1 = value;
		Il2CppCodeGenWriteBarrier((&___BundledResultTables_1), value);
	}

	inline static int32_t get_offset_of_BundledVirtualCurrencies_2() { return static_cast<int32_t>(offsetof(CatalogItemBundleInfo_t862654583, ___BundledVirtualCurrencies_2)); }
	inline Dictionary_2_t2345318277 * get_BundledVirtualCurrencies_2() const { return ___BundledVirtualCurrencies_2; }
	inline Dictionary_2_t2345318277 ** get_address_of_BundledVirtualCurrencies_2() { return &___BundledVirtualCurrencies_2; }
	inline void set_BundledVirtualCurrencies_2(Dictionary_2_t2345318277 * value)
	{
		___BundledVirtualCurrencies_2 = value;
		Il2CppCodeGenWriteBarrier((&___BundledVirtualCurrencies_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATALOGITEMBUNDLEINFO_T862654583_H
#ifndef CATALOGITEMCONTAINERINFO_T582357744_H
#define CATALOGITEMCONTAINERINFO_T582357744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CatalogItemContainerInfo
struct  CatalogItemContainerInfo_t582357744  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.CatalogItemContainerInfo::ItemContents
	List_1_t3319525431 * ___ItemContents_0;
	// System.String PlayFab.ClientModels.CatalogItemContainerInfo::KeyItemId
	String_t* ___KeyItemId_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.CatalogItemContainerInfo::ResultTableContents
	List_1_t3319525431 * ___ResultTableContents_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CatalogItemContainerInfo::VirtualCurrencyContents
	Dictionary_2_t2345318277 * ___VirtualCurrencyContents_3;

public:
	inline static int32_t get_offset_of_ItemContents_0() { return static_cast<int32_t>(offsetof(CatalogItemContainerInfo_t582357744, ___ItemContents_0)); }
	inline List_1_t3319525431 * get_ItemContents_0() const { return ___ItemContents_0; }
	inline List_1_t3319525431 ** get_address_of_ItemContents_0() { return &___ItemContents_0; }
	inline void set_ItemContents_0(List_1_t3319525431 * value)
	{
		___ItemContents_0 = value;
		Il2CppCodeGenWriteBarrier((&___ItemContents_0), value);
	}

	inline static int32_t get_offset_of_KeyItemId_1() { return static_cast<int32_t>(offsetof(CatalogItemContainerInfo_t582357744, ___KeyItemId_1)); }
	inline String_t* get_KeyItemId_1() const { return ___KeyItemId_1; }
	inline String_t** get_address_of_KeyItemId_1() { return &___KeyItemId_1; }
	inline void set_KeyItemId_1(String_t* value)
	{
		___KeyItemId_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyItemId_1), value);
	}

	inline static int32_t get_offset_of_ResultTableContents_2() { return static_cast<int32_t>(offsetof(CatalogItemContainerInfo_t582357744, ___ResultTableContents_2)); }
	inline List_1_t3319525431 * get_ResultTableContents_2() const { return ___ResultTableContents_2; }
	inline List_1_t3319525431 ** get_address_of_ResultTableContents_2() { return &___ResultTableContents_2; }
	inline void set_ResultTableContents_2(List_1_t3319525431 * value)
	{
		___ResultTableContents_2 = value;
		Il2CppCodeGenWriteBarrier((&___ResultTableContents_2), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyContents_3() { return static_cast<int32_t>(offsetof(CatalogItemContainerInfo_t582357744, ___VirtualCurrencyContents_3)); }
	inline Dictionary_2_t2345318277 * get_VirtualCurrencyContents_3() const { return ___VirtualCurrencyContents_3; }
	inline Dictionary_2_t2345318277 ** get_address_of_VirtualCurrencyContents_3() { return &___VirtualCurrencyContents_3; }
	inline void set_VirtualCurrencyContents_3(Dictionary_2_t2345318277 * value)
	{
		___VirtualCurrencyContents_3 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyContents_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATALOGITEMCONTAINERINFO_T582357744_H
#ifndef CHARACTERINVENTORY_T4118608229_H
#define CHARACTERINVENTORY_T4118608229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CharacterInventory
struct  CharacterInventory_t4118608229  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.CharacterInventory::CharacterId
	String_t* ___CharacterId_0;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.CharacterInventory::Inventory
	List_1_t898730215 * ___Inventory_1;

public:
	inline static int32_t get_offset_of_CharacterId_0() { return static_cast<int32_t>(offsetof(CharacterInventory_t4118608229, ___CharacterId_0)); }
	inline String_t* get_CharacterId_0() const { return ___CharacterId_0; }
	inline String_t** get_address_of_CharacterId_0() { return &___CharacterId_0; }
	inline void set_CharacterId_0(String_t* value)
	{
		___CharacterId_0 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_0), value);
	}

	inline static int32_t get_offset_of_Inventory_1() { return static_cast<int32_t>(offsetof(CharacterInventory_t4118608229, ___Inventory_1)); }
	inline List_1_t898730215 * get_Inventory_1() const { return ___Inventory_1; }
	inline List_1_t898730215 ** get_address_of_Inventory_1() { return &___Inventory_1; }
	inline void set_Inventory_1(List_1_t898730215 * value)
	{
		___Inventory_1 = value;
		Il2CppCodeGenWriteBarrier((&___Inventory_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERINVENTORY_T4118608229_H
#ifndef CHARACTERLEADERBOARDENTRY_T2539400198_H
#define CHARACTERLEADERBOARDENTRY_T2539400198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CharacterLeaderboardEntry
struct  CharacterLeaderboardEntry_t2539400198  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.CharacterLeaderboardEntry::CharacterId
	String_t* ___CharacterId_0;
	// System.String PlayFab.ClientModels.CharacterLeaderboardEntry::CharacterName
	String_t* ___CharacterName_1;
	// System.String PlayFab.ClientModels.CharacterLeaderboardEntry::CharacterType
	String_t* ___CharacterType_2;
	// System.String PlayFab.ClientModels.CharacterLeaderboardEntry::DisplayName
	String_t* ___DisplayName_3;
	// System.String PlayFab.ClientModels.CharacterLeaderboardEntry::PlayFabId
	String_t* ___PlayFabId_4;
	// System.Int32 PlayFab.ClientModels.CharacterLeaderboardEntry::Position
	int32_t ___Position_5;
	// System.Int32 PlayFab.ClientModels.CharacterLeaderboardEntry::StatValue
	int32_t ___StatValue_6;

public:
	inline static int32_t get_offset_of_CharacterId_0() { return static_cast<int32_t>(offsetof(CharacterLeaderboardEntry_t2539400198, ___CharacterId_0)); }
	inline String_t* get_CharacterId_0() const { return ___CharacterId_0; }
	inline String_t** get_address_of_CharacterId_0() { return &___CharacterId_0; }
	inline void set_CharacterId_0(String_t* value)
	{
		___CharacterId_0 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_0), value);
	}

	inline static int32_t get_offset_of_CharacterName_1() { return static_cast<int32_t>(offsetof(CharacterLeaderboardEntry_t2539400198, ___CharacterName_1)); }
	inline String_t* get_CharacterName_1() const { return ___CharacterName_1; }
	inline String_t** get_address_of_CharacterName_1() { return &___CharacterName_1; }
	inline void set_CharacterName_1(String_t* value)
	{
		___CharacterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterName_1), value);
	}

	inline static int32_t get_offset_of_CharacterType_2() { return static_cast<int32_t>(offsetof(CharacterLeaderboardEntry_t2539400198, ___CharacterType_2)); }
	inline String_t* get_CharacterType_2() const { return ___CharacterType_2; }
	inline String_t** get_address_of_CharacterType_2() { return &___CharacterType_2; }
	inline void set_CharacterType_2(String_t* value)
	{
		___CharacterType_2 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterType_2), value);
	}

	inline static int32_t get_offset_of_DisplayName_3() { return static_cast<int32_t>(offsetof(CharacterLeaderboardEntry_t2539400198, ___DisplayName_3)); }
	inline String_t* get_DisplayName_3() const { return ___DisplayName_3; }
	inline String_t** get_address_of_DisplayName_3() { return &___DisplayName_3; }
	inline void set_DisplayName_3(String_t* value)
	{
		___DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_3), value);
	}

	inline static int32_t get_offset_of_PlayFabId_4() { return static_cast<int32_t>(offsetof(CharacterLeaderboardEntry_t2539400198, ___PlayFabId_4)); }
	inline String_t* get_PlayFabId_4() const { return ___PlayFabId_4; }
	inline String_t** get_address_of_PlayFabId_4() { return &___PlayFabId_4; }
	inline void set_PlayFabId_4(String_t* value)
	{
		___PlayFabId_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_4), value);
	}

	inline static int32_t get_offset_of_Position_5() { return static_cast<int32_t>(offsetof(CharacterLeaderboardEntry_t2539400198, ___Position_5)); }
	inline int32_t get_Position_5() const { return ___Position_5; }
	inline int32_t* get_address_of_Position_5() { return &___Position_5; }
	inline void set_Position_5(int32_t value)
	{
		___Position_5 = value;
	}

	inline static int32_t get_offset_of_StatValue_6() { return static_cast<int32_t>(offsetof(CharacterLeaderboardEntry_t2539400198, ___StatValue_6)); }
	inline int32_t get_StatValue_6() const { return ___StatValue_6; }
	inline int32_t* get_address_of_StatValue_6() { return &___StatValue_6; }
	inline void set_StatValue_6(int32_t value)
	{
		___StatValue_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERLEADERBOARDENTRY_T2539400198_H
#ifndef COLLECTIONFILTER_T2867730642_H
#define COLLECTIONFILTER_T2867730642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CollectionFilter
struct  CollectionFilter_t2867730642  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.Container_Dictionary_String_String> PlayFab.ClientModels.CollectionFilter::Excludes
	List_1_t2944824905 * ___Excludes_0;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.Container_Dictionary_String_String> PlayFab.ClientModels.CollectionFilter::Includes
	List_1_t2944824905 * ___Includes_1;

public:
	inline static int32_t get_offset_of_Excludes_0() { return static_cast<int32_t>(offsetof(CollectionFilter_t2867730642, ___Excludes_0)); }
	inline List_1_t2944824905 * get_Excludes_0() const { return ___Excludes_0; }
	inline List_1_t2944824905 ** get_address_of_Excludes_0() { return &___Excludes_0; }
	inline void set_Excludes_0(List_1_t2944824905 * value)
	{
		___Excludes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Excludes_0), value);
	}

	inline static int32_t get_offset_of_Includes_1() { return static_cast<int32_t>(offsetof(CollectionFilter_t2867730642, ___Includes_1)); }
	inline List_1_t2944824905 * get_Includes_1() const { return ___Includes_1; }
	inline List_1_t2944824905 ** get_address_of_Includes_1() { return &___Includes_1; }
	inline void set_Includes_1(List_1_t2944824905 * value)
	{
		___Includes_1 = value;
		Il2CppCodeGenWriteBarrier((&___Includes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONFILTER_T2867730642_H
#ifndef CONTAINER_DICTIONARY_STRING_STRING_T1472750163_H
#define CONTAINER_DICTIONARY_STRING_STRING_T1472750163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.Container_Dictionary_String_String
struct  Container_Dictionary_String_String_t1472750163  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.Container_Dictionary_String_String::Data
	Dictionary_2_t1632706988 * ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Container_Dictionary_String_String_t1472750163, ___Data_0)); }
	inline Dictionary_2_t1632706988 * get_Data_0() const { return ___Data_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(Dictionary_2_t1632706988 * value)
	{
		___Data_0 = value;
		Il2CppCodeGenWriteBarrier((&___Data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTAINER_DICTIONARY_STRING_STRING_T1472750163_H
#ifndef ENTITYKEY_T1759282107_H
#define ENTITYKEY_T1759282107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.EntityKey
struct  EntityKey_t1759282107  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.EntityKey::Id
	String_t* ___Id_0;
	// System.String PlayFab.ClientModels.EntityKey::Type
	String_t* ___Type_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(EntityKey_t1759282107, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier((&___Id_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(EntityKey_t1759282107, ___Type_1)); }
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
#endif // ENTITYKEY_T1759282107_H
#ifndef FACEBOOKINSTANTGAMESPLAYFABIDPAIR_T1100012869_H
#define FACEBOOKINSTANTGAMESPLAYFABIDPAIR_T1100012869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair
struct  FacebookInstantGamesPlayFabIdPair_t1100012869  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesId
	String_t* ___FacebookInstantGamesId_0;
	// System.String PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;

public:
	inline static int32_t get_offset_of_FacebookInstantGamesId_0() { return static_cast<int32_t>(offsetof(FacebookInstantGamesPlayFabIdPair_t1100012869, ___FacebookInstantGamesId_0)); }
	inline String_t* get_FacebookInstantGamesId_0() const { return ___FacebookInstantGamesId_0; }
	inline String_t** get_address_of_FacebookInstantGamesId_0() { return &___FacebookInstantGamesId_0; }
	inline void set_FacebookInstantGamesId_0(String_t* value)
	{
		___FacebookInstantGamesId_0 = value;
		Il2CppCodeGenWriteBarrier((&___FacebookInstantGamesId_0), value);
	}

	inline static int32_t get_offset_of_PlayFabId_1() { return static_cast<int32_t>(offsetof(FacebookInstantGamesPlayFabIdPair_t1100012869, ___PlayFabId_1)); }
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
#endif // FACEBOOKINSTANTGAMESPLAYFABIDPAIR_T1100012869_H
#ifndef FACEBOOKPLAYFABIDPAIR_T3976567460_H
#define FACEBOOKPLAYFABIDPAIR_T3976567460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.FacebookPlayFabIdPair
struct  FacebookPlayFabIdPair_t3976567460  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.FacebookPlayFabIdPair::FacebookId
	String_t* ___FacebookId_0;
	// System.String PlayFab.ClientModels.FacebookPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;

public:
	inline static int32_t get_offset_of_FacebookId_0() { return static_cast<int32_t>(offsetof(FacebookPlayFabIdPair_t3976567460, ___FacebookId_0)); }
	inline String_t* get_FacebookId_0() const { return ___FacebookId_0; }
	inline String_t** get_address_of_FacebookId_0() { return &___FacebookId_0; }
	inline void set_FacebookId_0(String_t* value)
	{
		___FacebookId_0 = value;
		Il2CppCodeGenWriteBarrier((&___FacebookId_0), value);
	}

	inline static int32_t get_offset_of_PlayFabId_1() { return static_cast<int32_t>(offsetof(FacebookPlayFabIdPair_t3976567460, ___PlayFabId_1)); }
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
#endif // FACEBOOKPLAYFABIDPAIR_T3976567460_H
#ifndef FRIENDINFO_T1153859267_H
#define FRIENDINFO_T1153859267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.FriendInfo
struct  FriendInfo_t1153859267  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.FriendInfo::CurrentMatchmakerLobbyId
	String_t* ___CurrentMatchmakerLobbyId_0;
	// PlayFab.ClientModels.UserFacebookInfo PlayFab.ClientModels.FriendInfo::FacebookInfo
	UserFacebookInfo_t1027919101 * ___FacebookInfo_1;
	// System.String PlayFab.ClientModels.FriendInfo::FriendPlayFabId
	String_t* ___FriendPlayFabId_2;
	// PlayFab.ClientModels.UserGameCenterInfo PlayFab.ClientModels.FriendInfo::GameCenterInfo
	UserGameCenterInfo_t1831595825 * ___GameCenterInfo_3;
	// PlayFab.ClientModels.PlayerProfileModel PlayFab.ClientModels.FriendInfo::Profile
	PlayerProfileModel_t250934598 * ___Profile_4;
	// PlayFab.ClientModels.UserPsnInfo PlayFab.ClientModels.FriendInfo::PSNInfo
	UserPsnInfo_t1437888010 * ___PSNInfo_5;
	// PlayFab.ClientModels.UserSteamInfo PlayFab.ClientModels.FriendInfo::SteamInfo
	UserSteamInfo_t155181053 * ___SteamInfo_6;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.FriendInfo::Tags
	List_1_t3319525431 * ___Tags_7;
	// System.String PlayFab.ClientModels.FriendInfo::TitleDisplayName
	String_t* ___TitleDisplayName_8;
	// System.String PlayFab.ClientModels.FriendInfo::Username
	String_t* ___Username_9;
	// PlayFab.ClientModels.UserXboxInfo PlayFab.ClientModels.FriendInfo::XboxInfo
	UserXboxInfo_t1002111372 * ___XboxInfo_10;

public:
	inline static int32_t get_offset_of_CurrentMatchmakerLobbyId_0() { return static_cast<int32_t>(offsetof(FriendInfo_t1153859267, ___CurrentMatchmakerLobbyId_0)); }
	inline String_t* get_CurrentMatchmakerLobbyId_0() const { return ___CurrentMatchmakerLobbyId_0; }
	inline String_t** get_address_of_CurrentMatchmakerLobbyId_0() { return &___CurrentMatchmakerLobbyId_0; }
	inline void set_CurrentMatchmakerLobbyId_0(String_t* value)
	{
		___CurrentMatchmakerLobbyId_0 = value;
		Il2CppCodeGenWriteBarrier((&___CurrentMatchmakerLobbyId_0), value);
	}

	inline static int32_t get_offset_of_FacebookInfo_1() { return static_cast<int32_t>(offsetof(FriendInfo_t1153859267, ___FacebookInfo_1)); }
	inline UserFacebookInfo_t1027919101 * get_FacebookInfo_1() const { return ___FacebookInfo_1; }
	inline UserFacebookInfo_t1027919101 ** get_address_of_FacebookInfo_1() { return &___FacebookInfo_1; }
	inline void set_FacebookInfo_1(UserFacebookInfo_t1027919101 * value)
	{
		___FacebookInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___FacebookInfo_1), value);
	}

	inline static int32_t get_offset_of_FriendPlayFabId_2() { return static_cast<int32_t>(offsetof(FriendInfo_t1153859267, ___FriendPlayFabId_2)); }
	inline String_t* get_FriendPlayFabId_2() const { return ___FriendPlayFabId_2; }
	inline String_t** get_address_of_FriendPlayFabId_2() { return &___FriendPlayFabId_2; }
	inline void set_FriendPlayFabId_2(String_t* value)
	{
		___FriendPlayFabId_2 = value;
		Il2CppCodeGenWriteBarrier((&___FriendPlayFabId_2), value);
	}

	inline static int32_t get_offset_of_GameCenterInfo_3() { return static_cast<int32_t>(offsetof(FriendInfo_t1153859267, ___GameCenterInfo_3)); }
	inline UserGameCenterInfo_t1831595825 * get_GameCenterInfo_3() const { return ___GameCenterInfo_3; }
	inline UserGameCenterInfo_t1831595825 ** get_address_of_GameCenterInfo_3() { return &___GameCenterInfo_3; }
	inline void set_GameCenterInfo_3(UserGameCenterInfo_t1831595825 * value)
	{
		___GameCenterInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___GameCenterInfo_3), value);
	}

	inline static int32_t get_offset_of_Profile_4() { return static_cast<int32_t>(offsetof(FriendInfo_t1153859267, ___Profile_4)); }
	inline PlayerProfileModel_t250934598 * get_Profile_4() const { return ___Profile_4; }
	inline PlayerProfileModel_t250934598 ** get_address_of_Profile_4() { return &___Profile_4; }
	inline void set_Profile_4(PlayerProfileModel_t250934598 * value)
	{
		___Profile_4 = value;
		Il2CppCodeGenWriteBarrier((&___Profile_4), value);
	}

	inline static int32_t get_offset_of_PSNInfo_5() { return static_cast<int32_t>(offsetof(FriendInfo_t1153859267, ___PSNInfo_5)); }
	inline UserPsnInfo_t1437888010 * get_PSNInfo_5() const { return ___PSNInfo_5; }
	inline UserPsnInfo_t1437888010 ** get_address_of_PSNInfo_5() { return &___PSNInfo_5; }
	inline void set_PSNInfo_5(UserPsnInfo_t1437888010 * value)
	{
		___PSNInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___PSNInfo_5), value);
	}

	inline static int32_t get_offset_of_SteamInfo_6() { return static_cast<int32_t>(offsetof(FriendInfo_t1153859267, ___SteamInfo_6)); }
	inline UserSteamInfo_t155181053 * get_SteamInfo_6() const { return ___SteamInfo_6; }
	inline UserSteamInfo_t155181053 ** get_address_of_SteamInfo_6() { return &___SteamInfo_6; }
	inline void set_SteamInfo_6(UserSteamInfo_t155181053 * value)
	{
		___SteamInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___SteamInfo_6), value);
	}

	inline static int32_t get_offset_of_Tags_7() { return static_cast<int32_t>(offsetof(FriendInfo_t1153859267, ___Tags_7)); }
	inline List_1_t3319525431 * get_Tags_7() const { return ___Tags_7; }
	inline List_1_t3319525431 ** get_address_of_Tags_7() { return &___Tags_7; }
	inline void set_Tags_7(List_1_t3319525431 * value)
	{
		___Tags_7 = value;
		Il2CppCodeGenWriteBarrier((&___Tags_7), value);
	}

	inline static int32_t get_offset_of_TitleDisplayName_8() { return static_cast<int32_t>(offsetof(FriendInfo_t1153859267, ___TitleDisplayName_8)); }
	inline String_t* get_TitleDisplayName_8() const { return ___TitleDisplayName_8; }
	inline String_t** get_address_of_TitleDisplayName_8() { return &___TitleDisplayName_8; }
	inline void set_TitleDisplayName_8(String_t* value)
	{
		___TitleDisplayName_8 = value;
		Il2CppCodeGenWriteBarrier((&___TitleDisplayName_8), value);
	}

	inline static int32_t get_offset_of_Username_9() { return static_cast<int32_t>(offsetof(FriendInfo_t1153859267, ___Username_9)); }
	inline String_t* get_Username_9() const { return ___Username_9; }
	inline String_t** get_address_of_Username_9() { return &___Username_9; }
	inline void set_Username_9(String_t* value)
	{
		___Username_9 = value;
		Il2CppCodeGenWriteBarrier((&___Username_9), value);
	}

	inline static int32_t get_offset_of_XboxInfo_10() { return static_cast<int32_t>(offsetof(FriendInfo_t1153859267, ___XboxInfo_10)); }
	inline UserXboxInfo_t1002111372 * get_XboxInfo_10() const { return ___XboxInfo_10; }
	inline UserXboxInfo_t1002111372 ** get_address_of_XboxInfo_10() { return &___XboxInfo_10; }
	inline void set_XboxInfo_10(UserXboxInfo_t1002111372 * value)
	{
		___XboxInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___XboxInfo_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRIENDINFO_T1153859267_H
#ifndef GAMECENTERPLAYFABIDPAIR_T3172392643_H
#define GAMECENTERPLAYFABIDPAIR_T3172392643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GameCenterPlayFabIdPair
struct  GameCenterPlayFabIdPair_t3172392643  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.GameCenterPlayFabIdPair::GameCenterId
	String_t* ___GameCenterId_0;
	// System.String PlayFab.ClientModels.GameCenterPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;

public:
	inline static int32_t get_offset_of_GameCenterId_0() { return static_cast<int32_t>(offsetof(GameCenterPlayFabIdPair_t3172392643, ___GameCenterId_0)); }
	inline String_t* get_GameCenterId_0() const { return ___GameCenterId_0; }
	inline String_t** get_address_of_GameCenterId_0() { return &___GameCenterId_0; }
	inline void set_GameCenterId_0(String_t* value)
	{
		___GameCenterId_0 = value;
		Il2CppCodeGenWriteBarrier((&___GameCenterId_0), value);
	}

	inline static int32_t get_offset_of_PlayFabId_1() { return static_cast<int32_t>(offsetof(GameCenterPlayFabIdPair_t3172392643, ___PlayFabId_1)); }
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
#endif // GAMECENTERPLAYFABIDPAIR_T3172392643_H
#ifndef GENERICPLAYFABIDPAIR_T2375399579_H
#define GENERICPLAYFABIDPAIR_T2375399579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GenericPlayFabIdPair
struct  GenericPlayFabIdPair_t2375399579  : public RuntimeObject
{
public:
	// PlayFab.ClientModels.GenericServiceId PlayFab.ClientModels.GenericPlayFabIdPair::GenericId
	GenericServiceId_t3400130533 * ___GenericId_0;
	// System.String PlayFab.ClientModels.GenericPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;

public:
	inline static int32_t get_offset_of_GenericId_0() { return static_cast<int32_t>(offsetof(GenericPlayFabIdPair_t2375399579, ___GenericId_0)); }
	inline GenericServiceId_t3400130533 * get_GenericId_0() const { return ___GenericId_0; }
	inline GenericServiceId_t3400130533 ** get_address_of_GenericId_0() { return &___GenericId_0; }
	inline void set_GenericId_0(GenericServiceId_t3400130533 * value)
	{
		___GenericId_0 = value;
		Il2CppCodeGenWriteBarrier((&___GenericId_0), value);
	}

	inline static int32_t get_offset_of_PlayFabId_1() { return static_cast<int32_t>(offsetof(GenericPlayFabIdPair_t2375399579, ___PlayFabId_1)); }
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
#endif // GENERICPLAYFABIDPAIR_T2375399579_H
#ifndef GENERICSERVICEID_T3400130533_H
#define GENERICSERVICEID_T3400130533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GenericServiceId
struct  GenericServiceId_t3400130533  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.GenericServiceId::ServiceName
	String_t* ___ServiceName_0;
	// System.String PlayFab.ClientModels.GenericServiceId::UserId
	String_t* ___UserId_1;

public:
	inline static int32_t get_offset_of_ServiceName_0() { return static_cast<int32_t>(offsetof(GenericServiceId_t3400130533, ___ServiceName_0)); }
	inline String_t* get_ServiceName_0() const { return ___ServiceName_0; }
	inline String_t** get_address_of_ServiceName_0() { return &___ServiceName_0; }
	inline void set_ServiceName_0(String_t* value)
	{
		___ServiceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ServiceName_0), value);
	}

	inline static int32_t get_offset_of_UserId_1() { return static_cast<int32_t>(offsetof(GenericServiceId_t3400130533, ___UserId_1)); }
	inline String_t* get_UserId_1() const { return ___UserId_1; }
	inline String_t** get_address_of_UserId_1() { return &___UserId_1; }
	inline void set_UserId_1(String_t* value)
	{
		___UserId_1 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSERVICEID_T3400130533_H
#ifndef GETPLAYERCOMBINEDINFOREQUESTPARAMS_T121265087_H
#define GETPLAYERCOMBINEDINFOREQUESTPARAMS_T121265087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams
struct  GetPlayerCombinedInfoRequestParams_t121265087  : public RuntimeObject
{
public:
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetCharacterInventories
	bool ___GetCharacterInventories_0;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetCharacterList
	bool ___GetCharacterList_1;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetPlayerProfile
	bool ___GetPlayerProfile_2;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetPlayerStatistics
	bool ___GetPlayerStatistics_3;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetTitleData
	bool ___GetTitleData_4;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetUserAccountInfo
	bool ___GetUserAccountInfo_5;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetUserData
	bool ___GetUserData_6;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetUserInventory
	bool ___GetUserInventory_7;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetUserReadOnlyData
	bool ___GetUserReadOnlyData_8;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetUserVirtualCurrency
	bool ___GetUserVirtualCurrency_9;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::PlayerStatisticNames
	List_1_t3319525431 * ___PlayerStatisticNames_10;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::ProfileConstraints
	PlayerProfileViewConstraints_t97717017 * ___ProfileConstraints_11;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::TitleDataKeys
	List_1_t3319525431 * ___TitleDataKeys_12;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::UserDataKeys
	List_1_t3319525431 * ___UserDataKeys_13;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::UserReadOnlyDataKeys
	List_1_t3319525431 * ___UserReadOnlyDataKeys_14;

public:
	inline static int32_t get_offset_of_GetCharacterInventories_0() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___GetCharacterInventories_0)); }
	inline bool get_GetCharacterInventories_0() const { return ___GetCharacterInventories_0; }
	inline bool* get_address_of_GetCharacterInventories_0() { return &___GetCharacterInventories_0; }
	inline void set_GetCharacterInventories_0(bool value)
	{
		___GetCharacterInventories_0 = value;
	}

	inline static int32_t get_offset_of_GetCharacterList_1() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___GetCharacterList_1)); }
	inline bool get_GetCharacterList_1() const { return ___GetCharacterList_1; }
	inline bool* get_address_of_GetCharacterList_1() { return &___GetCharacterList_1; }
	inline void set_GetCharacterList_1(bool value)
	{
		___GetCharacterList_1 = value;
	}

	inline static int32_t get_offset_of_GetPlayerProfile_2() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___GetPlayerProfile_2)); }
	inline bool get_GetPlayerProfile_2() const { return ___GetPlayerProfile_2; }
	inline bool* get_address_of_GetPlayerProfile_2() { return &___GetPlayerProfile_2; }
	inline void set_GetPlayerProfile_2(bool value)
	{
		___GetPlayerProfile_2 = value;
	}

	inline static int32_t get_offset_of_GetPlayerStatistics_3() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___GetPlayerStatistics_3)); }
	inline bool get_GetPlayerStatistics_3() const { return ___GetPlayerStatistics_3; }
	inline bool* get_address_of_GetPlayerStatistics_3() { return &___GetPlayerStatistics_3; }
	inline void set_GetPlayerStatistics_3(bool value)
	{
		___GetPlayerStatistics_3 = value;
	}

	inline static int32_t get_offset_of_GetTitleData_4() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___GetTitleData_4)); }
	inline bool get_GetTitleData_4() const { return ___GetTitleData_4; }
	inline bool* get_address_of_GetTitleData_4() { return &___GetTitleData_4; }
	inline void set_GetTitleData_4(bool value)
	{
		___GetTitleData_4 = value;
	}

	inline static int32_t get_offset_of_GetUserAccountInfo_5() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___GetUserAccountInfo_5)); }
	inline bool get_GetUserAccountInfo_5() const { return ___GetUserAccountInfo_5; }
	inline bool* get_address_of_GetUserAccountInfo_5() { return &___GetUserAccountInfo_5; }
	inline void set_GetUserAccountInfo_5(bool value)
	{
		___GetUserAccountInfo_5 = value;
	}

	inline static int32_t get_offset_of_GetUserData_6() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___GetUserData_6)); }
	inline bool get_GetUserData_6() const { return ___GetUserData_6; }
	inline bool* get_address_of_GetUserData_6() { return &___GetUserData_6; }
	inline void set_GetUserData_6(bool value)
	{
		___GetUserData_6 = value;
	}

	inline static int32_t get_offset_of_GetUserInventory_7() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___GetUserInventory_7)); }
	inline bool get_GetUserInventory_7() const { return ___GetUserInventory_7; }
	inline bool* get_address_of_GetUserInventory_7() { return &___GetUserInventory_7; }
	inline void set_GetUserInventory_7(bool value)
	{
		___GetUserInventory_7 = value;
	}

	inline static int32_t get_offset_of_GetUserReadOnlyData_8() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___GetUserReadOnlyData_8)); }
	inline bool get_GetUserReadOnlyData_8() const { return ___GetUserReadOnlyData_8; }
	inline bool* get_address_of_GetUserReadOnlyData_8() { return &___GetUserReadOnlyData_8; }
	inline void set_GetUserReadOnlyData_8(bool value)
	{
		___GetUserReadOnlyData_8 = value;
	}

	inline static int32_t get_offset_of_GetUserVirtualCurrency_9() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___GetUserVirtualCurrency_9)); }
	inline bool get_GetUserVirtualCurrency_9() const { return ___GetUserVirtualCurrency_9; }
	inline bool* get_address_of_GetUserVirtualCurrency_9() { return &___GetUserVirtualCurrency_9; }
	inline void set_GetUserVirtualCurrency_9(bool value)
	{
		___GetUserVirtualCurrency_9 = value;
	}

	inline static int32_t get_offset_of_PlayerStatisticNames_10() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___PlayerStatisticNames_10)); }
	inline List_1_t3319525431 * get_PlayerStatisticNames_10() const { return ___PlayerStatisticNames_10; }
	inline List_1_t3319525431 ** get_address_of_PlayerStatisticNames_10() { return &___PlayerStatisticNames_10; }
	inline void set_PlayerStatisticNames_10(List_1_t3319525431 * value)
	{
		___PlayerStatisticNames_10 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerStatisticNames_10), value);
	}

	inline static int32_t get_offset_of_ProfileConstraints_11() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___ProfileConstraints_11)); }
	inline PlayerProfileViewConstraints_t97717017 * get_ProfileConstraints_11() const { return ___ProfileConstraints_11; }
	inline PlayerProfileViewConstraints_t97717017 ** get_address_of_ProfileConstraints_11() { return &___ProfileConstraints_11; }
	inline void set_ProfileConstraints_11(PlayerProfileViewConstraints_t97717017 * value)
	{
		___ProfileConstraints_11 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileConstraints_11), value);
	}

	inline static int32_t get_offset_of_TitleDataKeys_12() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___TitleDataKeys_12)); }
	inline List_1_t3319525431 * get_TitleDataKeys_12() const { return ___TitleDataKeys_12; }
	inline List_1_t3319525431 ** get_address_of_TitleDataKeys_12() { return &___TitleDataKeys_12; }
	inline void set_TitleDataKeys_12(List_1_t3319525431 * value)
	{
		___TitleDataKeys_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleDataKeys_12), value);
	}

	inline static int32_t get_offset_of_UserDataKeys_13() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___UserDataKeys_13)); }
	inline List_1_t3319525431 * get_UserDataKeys_13() const { return ___UserDataKeys_13; }
	inline List_1_t3319525431 ** get_address_of_UserDataKeys_13() { return &___UserDataKeys_13; }
	inline void set_UserDataKeys_13(List_1_t3319525431 * value)
	{
		___UserDataKeys_13 = value;
		Il2CppCodeGenWriteBarrier((&___UserDataKeys_13), value);
	}

	inline static int32_t get_offset_of_UserReadOnlyDataKeys_14() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequestParams_t121265087, ___UserReadOnlyDataKeys_14)); }
	inline List_1_t3319525431 * get_UserReadOnlyDataKeys_14() const { return ___UserReadOnlyDataKeys_14; }
	inline List_1_t3319525431 ** get_address_of_UserReadOnlyDataKeys_14() { return &___UserReadOnlyDataKeys_14; }
	inline void set_UserReadOnlyDataKeys_14(List_1_t3319525431 * value)
	{
		___UserReadOnlyDataKeys_14 = value;
		Il2CppCodeGenWriteBarrier((&___UserReadOnlyDataKeys_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERCOMBINEDINFOREQUESTPARAMS_T121265087_H
#ifndef GETPLAYERCOMBINEDINFORESULTPAYLOAD_T2789378405_H
#define GETPLAYERCOMBINEDINFORESULTPAYLOAD_T2789378405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload
struct  GetPlayerCombinedInfoResultPayload_t2789378405  : public RuntimeObject
{
public:
	// PlayFab.ClientModels.UserAccountInfo PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::AccountInfo
	UserAccountInfo_t2687855647 * ___AccountInfo_0;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterInventory> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::CharacterInventories
	List_1_t1295715675 * ___CharacterInventories_1;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterResult> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::CharacterList
	List_1_t870886602 * ___CharacterList_2;
	// PlayFab.ClientModels.PlayerProfileModel PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::PlayerProfile
	PlayerProfileModel_t250934598 * ___PlayerProfile_3;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticValue> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::PlayerStatistics
	List_1_t1855408285 * ___PlayerStatistics_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::TitleData
	Dictionary_2_t1632706988 * ___TitleData_5;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserData
	Dictionary_2_t1171190865 * ___UserData_6;
	// System.UInt32 PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserDataVersion
	uint32_t ___UserDataVersion_7;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserInventory
	List_1_t898730215 * ___UserInventory_8;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserReadOnlyData
	Dictionary_2_t1171190865 * ___UserReadOnlyData_9;
	// System.UInt32 PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserReadOnlyDataVersion
	uint32_t ___UserReadOnlyDataVersion_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserVirtualCurrency
	Dictionary_2_t2736202052 * ___UserVirtualCurrency_11;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.VirtualCurrencyRechargeTime> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserVirtualCurrencyRechargeTimes
	Dictionary_2_t2609091868 * ___UserVirtualCurrencyRechargeTimes_12;

public:
	inline static int32_t get_offset_of_AccountInfo_0() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___AccountInfo_0)); }
	inline UserAccountInfo_t2687855647 * get_AccountInfo_0() const { return ___AccountInfo_0; }
	inline UserAccountInfo_t2687855647 ** get_address_of_AccountInfo_0() { return &___AccountInfo_0; }
	inline void set_AccountInfo_0(UserAccountInfo_t2687855647 * value)
	{
		___AccountInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___AccountInfo_0), value);
	}

	inline static int32_t get_offset_of_CharacterInventories_1() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___CharacterInventories_1)); }
	inline List_1_t1295715675 * get_CharacterInventories_1() const { return ___CharacterInventories_1; }
	inline List_1_t1295715675 ** get_address_of_CharacterInventories_1() { return &___CharacterInventories_1; }
	inline void set_CharacterInventories_1(List_1_t1295715675 * value)
	{
		___CharacterInventories_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterInventories_1), value);
	}

	inline static int32_t get_offset_of_CharacterList_2() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___CharacterList_2)); }
	inline List_1_t870886602 * get_CharacterList_2() const { return ___CharacterList_2; }
	inline List_1_t870886602 ** get_address_of_CharacterList_2() { return &___CharacterList_2; }
	inline void set_CharacterList_2(List_1_t870886602 * value)
	{
		___CharacterList_2 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterList_2), value);
	}

	inline static int32_t get_offset_of_PlayerProfile_3() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___PlayerProfile_3)); }
	inline PlayerProfileModel_t250934598 * get_PlayerProfile_3() const { return ___PlayerProfile_3; }
	inline PlayerProfileModel_t250934598 ** get_address_of_PlayerProfile_3() { return &___PlayerProfile_3; }
	inline void set_PlayerProfile_3(PlayerProfileModel_t250934598 * value)
	{
		___PlayerProfile_3 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerProfile_3), value);
	}

	inline static int32_t get_offset_of_PlayerStatistics_4() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___PlayerStatistics_4)); }
	inline List_1_t1855408285 * get_PlayerStatistics_4() const { return ___PlayerStatistics_4; }
	inline List_1_t1855408285 ** get_address_of_PlayerStatistics_4() { return &___PlayerStatistics_4; }
	inline void set_PlayerStatistics_4(List_1_t1855408285 * value)
	{
		___PlayerStatistics_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerStatistics_4), value);
	}

	inline static int32_t get_offset_of_TitleData_5() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___TitleData_5)); }
	inline Dictionary_2_t1632706988 * get_TitleData_5() const { return ___TitleData_5; }
	inline Dictionary_2_t1632706988 ** get_address_of_TitleData_5() { return &___TitleData_5; }
	inline void set_TitleData_5(Dictionary_2_t1632706988 * value)
	{
		___TitleData_5 = value;
		Il2CppCodeGenWriteBarrier((&___TitleData_5), value);
	}

	inline static int32_t get_offset_of_UserData_6() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___UserData_6)); }
	inline Dictionary_2_t1171190865 * get_UserData_6() const { return ___UserData_6; }
	inline Dictionary_2_t1171190865 ** get_address_of_UserData_6() { return &___UserData_6; }
	inline void set_UserData_6(Dictionary_2_t1171190865 * value)
	{
		___UserData_6 = value;
		Il2CppCodeGenWriteBarrier((&___UserData_6), value);
	}

	inline static int32_t get_offset_of_UserDataVersion_7() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___UserDataVersion_7)); }
	inline uint32_t get_UserDataVersion_7() const { return ___UserDataVersion_7; }
	inline uint32_t* get_address_of_UserDataVersion_7() { return &___UserDataVersion_7; }
	inline void set_UserDataVersion_7(uint32_t value)
	{
		___UserDataVersion_7 = value;
	}

	inline static int32_t get_offset_of_UserInventory_8() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___UserInventory_8)); }
	inline List_1_t898730215 * get_UserInventory_8() const { return ___UserInventory_8; }
	inline List_1_t898730215 ** get_address_of_UserInventory_8() { return &___UserInventory_8; }
	inline void set_UserInventory_8(List_1_t898730215 * value)
	{
		___UserInventory_8 = value;
		Il2CppCodeGenWriteBarrier((&___UserInventory_8), value);
	}

	inline static int32_t get_offset_of_UserReadOnlyData_9() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___UserReadOnlyData_9)); }
	inline Dictionary_2_t1171190865 * get_UserReadOnlyData_9() const { return ___UserReadOnlyData_9; }
	inline Dictionary_2_t1171190865 ** get_address_of_UserReadOnlyData_9() { return &___UserReadOnlyData_9; }
	inline void set_UserReadOnlyData_9(Dictionary_2_t1171190865 * value)
	{
		___UserReadOnlyData_9 = value;
		Il2CppCodeGenWriteBarrier((&___UserReadOnlyData_9), value);
	}

	inline static int32_t get_offset_of_UserReadOnlyDataVersion_10() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___UserReadOnlyDataVersion_10)); }
	inline uint32_t get_UserReadOnlyDataVersion_10() const { return ___UserReadOnlyDataVersion_10; }
	inline uint32_t* get_address_of_UserReadOnlyDataVersion_10() { return &___UserReadOnlyDataVersion_10; }
	inline void set_UserReadOnlyDataVersion_10(uint32_t value)
	{
		___UserReadOnlyDataVersion_10 = value;
	}

	inline static int32_t get_offset_of_UserVirtualCurrency_11() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___UserVirtualCurrency_11)); }
	inline Dictionary_2_t2736202052 * get_UserVirtualCurrency_11() const { return ___UserVirtualCurrency_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_UserVirtualCurrency_11() { return &___UserVirtualCurrency_11; }
	inline void set_UserVirtualCurrency_11(Dictionary_2_t2736202052 * value)
	{
		___UserVirtualCurrency_11 = value;
		Il2CppCodeGenWriteBarrier((&___UserVirtualCurrency_11), value);
	}

	inline static int32_t get_offset_of_UserVirtualCurrencyRechargeTimes_12() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResultPayload_t2789378405, ___UserVirtualCurrencyRechargeTimes_12)); }
	inline Dictionary_2_t2609091868 * get_UserVirtualCurrencyRechargeTimes_12() const { return ___UserVirtualCurrencyRechargeTimes_12; }
	inline Dictionary_2_t2609091868 ** get_address_of_UserVirtualCurrencyRechargeTimes_12() { return &___UserVirtualCurrencyRechargeTimes_12; }
	inline void set_UserVirtualCurrencyRechargeTimes_12(Dictionary_2_t2609091868 * value)
	{
		___UserVirtualCurrencyRechargeTimes_12 = value;
		Il2CppCodeGenWriteBarrier((&___UserVirtualCurrencyRechargeTimes_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERCOMBINEDINFORESULTPAYLOAD_T2789378405_H
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
#ifndef ADDUSERVIRTUALCURRENCYREQUEST_T774176691_H
#define ADDUSERVIRTUALCURRENCYREQUEST_T774176691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.AddUserVirtualCurrencyRequest
struct  AddUserVirtualCurrencyRequest_t774176691  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Int32 PlayFab.ClientModels.AddUserVirtualCurrencyRequest::Amount
	int32_t ___Amount_0;
	// System.String PlayFab.ClientModels.AddUserVirtualCurrencyRequest::VirtualCurrency
	String_t* ___VirtualCurrency_1;

public:
	inline static int32_t get_offset_of_Amount_0() { return static_cast<int32_t>(offsetof(AddUserVirtualCurrencyRequest_t774176691, ___Amount_0)); }
	inline int32_t get_Amount_0() const { return ___Amount_0; }
	inline int32_t* get_address_of_Amount_0() { return &___Amount_0; }
	inline void set_Amount_0(int32_t value)
	{
		___Amount_0 = value;
	}

	inline static int32_t get_offset_of_VirtualCurrency_1() { return static_cast<int32_t>(offsetof(AddUserVirtualCurrencyRequest_t774176691, ___VirtualCurrency_1)); }
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
#endif // ADDUSERVIRTUALCURRENCYREQUEST_T774176691_H
#ifndef ADDUSERNAMEPASSWORDREQUEST_T1867219871_H
#define ADDUSERNAMEPASSWORDREQUEST_T1867219871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.AddUsernamePasswordRequest
struct  AddUsernamePasswordRequest_t1867219871  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.AddUsernamePasswordRequest::Email
	String_t* ___Email_0;
	// System.String PlayFab.ClientModels.AddUsernamePasswordRequest::Password
	String_t* ___Password_1;
	// System.String PlayFab.ClientModels.AddUsernamePasswordRequest::Username
	String_t* ___Username_2;

public:
	inline static int32_t get_offset_of_Email_0() { return static_cast<int32_t>(offsetof(AddUsernamePasswordRequest_t1867219871, ___Email_0)); }
	inline String_t* get_Email_0() const { return ___Email_0; }
	inline String_t** get_address_of_Email_0() { return &___Email_0; }
	inline void set_Email_0(String_t* value)
	{
		___Email_0 = value;
		Il2CppCodeGenWriteBarrier((&___Email_0), value);
	}

	inline static int32_t get_offset_of_Password_1() { return static_cast<int32_t>(offsetof(AddUsernamePasswordRequest_t1867219871, ___Password_1)); }
	inline String_t* get_Password_1() const { return ___Password_1; }
	inline String_t** get_address_of_Password_1() { return &___Password_1; }
	inline void set_Password_1(String_t* value)
	{
		___Password_1 = value;
		Il2CppCodeGenWriteBarrier((&___Password_1), value);
	}

	inline static int32_t get_offset_of_Username_2() { return static_cast<int32_t>(offsetof(AddUsernamePasswordRequest_t1867219871, ___Username_2)); }
	inline String_t* get_Username_2() const { return ___Username_2; }
	inline String_t** get_address_of_Username_2() { return &___Username_2; }
	inline void set_Username_2(String_t* value)
	{
		___Username_2 = value;
		Il2CppCodeGenWriteBarrier((&___Username_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDUSERNAMEPASSWORDREQUEST_T1867219871_H
#ifndef ADDUSERNAMEPASSWORDRESULT_T1113447058_H
#define ADDUSERNAMEPASSWORDRESULT_T1113447058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.AddUsernamePasswordResult
struct  AddUsernamePasswordResult_t1113447058  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.AddUsernamePasswordResult::Username
	String_t* ___Username_2;

public:
	inline static int32_t get_offset_of_Username_2() { return static_cast<int32_t>(offsetof(AddUsernamePasswordResult_t1113447058, ___Username_2)); }
	inline String_t* get_Username_2() const { return ___Username_2; }
	inline String_t** get_address_of_Username_2() { return &___Username_2; }
	inline void set_Username_2(String_t* value)
	{
		___Username_2 = value;
		Il2CppCodeGenWriteBarrier((&___Username_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDUSERNAMEPASSWORDRESULT_T1113447058_H
#ifndef ANDROIDDEVICEPUSHNOTIFICATIONREGISTRATIONRESULT_T2366557797_H
#define ANDROIDDEVICEPUSHNOTIFICATIONREGISTRATIONRESULT_T2366557797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationResult
struct  AndroidDevicePushNotificationRegistrationResult_t2366557797  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDDEVICEPUSHNOTIFICATIONREGISTRATIONRESULT_T2366557797_H
#ifndef ATTRIBUTEINSTALLREQUEST_T215954694_H
#define ATTRIBUTEINSTALLREQUEST_T215954694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.AttributeInstallRequest
struct  AttributeInstallRequest_t215954694  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.AttributeInstallRequest::Adid
	String_t* ___Adid_0;
	// System.String PlayFab.ClientModels.AttributeInstallRequest::Idfa
	String_t* ___Idfa_1;

public:
	inline static int32_t get_offset_of_Adid_0() { return static_cast<int32_t>(offsetof(AttributeInstallRequest_t215954694, ___Adid_0)); }
	inline String_t* get_Adid_0() const { return ___Adid_0; }
	inline String_t** get_address_of_Adid_0() { return &___Adid_0; }
	inline void set_Adid_0(String_t* value)
	{
		___Adid_0 = value;
		Il2CppCodeGenWriteBarrier((&___Adid_0), value);
	}

	inline static int32_t get_offset_of_Idfa_1() { return static_cast<int32_t>(offsetof(AttributeInstallRequest_t215954694, ___Idfa_1)); }
	inline String_t* get_Idfa_1() const { return ___Idfa_1; }
	inline String_t** get_address_of_Idfa_1() { return &___Idfa_1; }
	inline void set_Idfa_1(String_t* value)
	{
		___Idfa_1 = value;
		Il2CppCodeGenWriteBarrier((&___Idfa_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEINSTALLREQUEST_T215954694_H
#ifndef ATTRIBUTEINSTALLRESULT_T2699584835_H
#define ATTRIBUTEINSTALLRESULT_T2699584835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.AttributeInstallResult
struct  AttributeInstallResult_t2699584835  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEINSTALLRESULT_T2699584835_H
#ifndef CANCELTRADEREQUEST_T3627140333_H
#define CANCELTRADEREQUEST_T3627140333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CancelTradeRequest
struct  CancelTradeRequest_t3627140333  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.CancelTradeRequest::TradeId
	String_t* ___TradeId_0;

public:
	inline static int32_t get_offset_of_TradeId_0() { return static_cast<int32_t>(offsetof(CancelTradeRequest_t3627140333, ___TradeId_0)); }
	inline String_t* get_TradeId_0() const { return ___TradeId_0; }
	inline String_t** get_address_of_TradeId_0() { return &___TradeId_0; }
	inline void set_TradeId_0(String_t* value)
	{
		___TradeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___TradeId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELTRADEREQUEST_T3627140333_H
#ifndef CANCELTRADERESPONSE_T3574647456_H
#define CANCELTRADERESPONSE_T3574647456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CancelTradeResponse
struct  CancelTradeResponse_t3574647456  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.ClientModels.TradeInfo PlayFab.ClientModels.CancelTradeResponse::Trade
	TradeInfo_t4070927481 * ___Trade_2;

public:
	inline static int32_t get_offset_of_Trade_2() { return static_cast<int32_t>(offsetof(CancelTradeResponse_t3574647456, ___Trade_2)); }
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
#endif // CANCELTRADERESPONSE_T3574647456_H
#ifndef CHARACTERRESULT_T3693779156_H
#define CHARACTERRESULT_T3693779156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CharacterResult
struct  CharacterResult_t3693779156  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.CharacterResult::CharacterId
	String_t* ___CharacterId_2;
	// System.String PlayFab.ClientModels.CharacterResult::CharacterName
	String_t* ___CharacterName_3;
	// System.String PlayFab.ClientModels.CharacterResult::CharacterType
	String_t* ___CharacterType_4;

public:
	inline static int32_t get_offset_of_CharacterId_2() { return static_cast<int32_t>(offsetof(CharacterResult_t3693779156, ___CharacterId_2)); }
	inline String_t* get_CharacterId_2() const { return ___CharacterId_2; }
	inline String_t** get_address_of_CharacterId_2() { return &___CharacterId_2; }
	inline void set_CharacterId_2(String_t* value)
	{
		___CharacterId_2 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_2), value);
	}

	inline static int32_t get_offset_of_CharacterName_3() { return static_cast<int32_t>(offsetof(CharacterResult_t3693779156, ___CharacterName_3)); }
	inline String_t* get_CharacterName_3() const { return ___CharacterName_3; }
	inline String_t** get_address_of_CharacterName_3() { return &___CharacterName_3; }
	inline void set_CharacterName_3(String_t* value)
	{
		___CharacterName_3 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterName_3), value);
	}

	inline static int32_t get_offset_of_CharacterType_4() { return static_cast<int32_t>(offsetof(CharacterResult_t3693779156, ___CharacterType_4)); }
	inline String_t* get_CharacterType_4() const { return ___CharacterType_4; }
	inline String_t** get_address_of_CharacterType_4() { return &___CharacterType_4; }
	inline void set_CharacterType_4(String_t* value)
	{
		___CharacterType_4 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterType_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERRESULT_T3693779156_H
#ifndef CONFIRMPURCHASEREQUEST_T2468501779_H
#define CONFIRMPURCHASEREQUEST_T2468501779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ConfirmPurchaseRequest
struct  ConfirmPurchaseRequest_t2468501779  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.ConfirmPurchaseRequest::OrderId
	String_t* ___OrderId_0;

public:
	inline static int32_t get_offset_of_OrderId_0() { return static_cast<int32_t>(offsetof(ConfirmPurchaseRequest_t2468501779, ___OrderId_0)); }
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
#endif // CONFIRMPURCHASEREQUEST_T2468501779_H
#ifndef CONSUMEITEMREQUEST_T1258774420_H
#define CONSUMEITEMREQUEST_T1258774420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ConsumeItemRequest
struct  ConsumeItemRequest_t1258774420  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.ConsumeItemRequest::CharacterId
	String_t* ___CharacterId_0;
	// System.Int32 PlayFab.ClientModels.ConsumeItemRequest::ConsumeCount
	int32_t ___ConsumeCount_1;
	// System.String PlayFab.ClientModels.ConsumeItemRequest::ItemInstanceId
	String_t* ___ItemInstanceId_2;

public:
	inline static int32_t get_offset_of_CharacterId_0() { return static_cast<int32_t>(offsetof(ConsumeItemRequest_t1258774420, ___CharacterId_0)); }
	inline String_t* get_CharacterId_0() const { return ___CharacterId_0; }
	inline String_t** get_address_of_CharacterId_0() { return &___CharacterId_0; }
	inline void set_CharacterId_0(String_t* value)
	{
		___CharacterId_0 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_0), value);
	}

	inline static int32_t get_offset_of_ConsumeCount_1() { return static_cast<int32_t>(offsetof(ConsumeItemRequest_t1258774420, ___ConsumeCount_1)); }
	inline int32_t get_ConsumeCount_1() const { return ___ConsumeCount_1; }
	inline int32_t* get_address_of_ConsumeCount_1() { return &___ConsumeCount_1; }
	inline void set_ConsumeCount_1(int32_t value)
	{
		___ConsumeCount_1 = value;
	}

	inline static int32_t get_offset_of_ItemInstanceId_2() { return static_cast<int32_t>(offsetof(ConsumeItemRequest_t1258774420, ___ItemInstanceId_2)); }
	inline String_t* get_ItemInstanceId_2() const { return ___ItemInstanceId_2; }
	inline String_t** get_address_of_ItemInstanceId_2() { return &___ItemInstanceId_2; }
	inline void set_ItemInstanceId_2(String_t* value)
	{
		___ItemInstanceId_2 = value;
		Il2CppCodeGenWriteBarrier((&___ItemInstanceId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSUMEITEMREQUEST_T1258774420_H
#ifndef CONSUMEITEMRESULT_T4190837579_H
#define CONSUMEITEMRESULT_T4190837579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ConsumeItemResult
struct  ConsumeItemResult_t4190837579  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.ConsumeItemResult::ItemInstanceId
	String_t* ___ItemInstanceId_2;
	// System.Int32 PlayFab.ClientModels.ConsumeItemResult::RemainingUses
	int32_t ___RemainingUses_3;

public:
	inline static int32_t get_offset_of_ItemInstanceId_2() { return static_cast<int32_t>(offsetof(ConsumeItemResult_t4190837579, ___ItemInstanceId_2)); }
	inline String_t* get_ItemInstanceId_2() const { return ___ItemInstanceId_2; }
	inline String_t** get_address_of_ItemInstanceId_2() { return &___ItemInstanceId_2; }
	inline void set_ItemInstanceId_2(String_t* value)
	{
		___ItemInstanceId_2 = value;
		Il2CppCodeGenWriteBarrier((&___ItemInstanceId_2), value);
	}

	inline static int32_t get_offset_of_RemainingUses_3() { return static_cast<int32_t>(offsetof(ConsumeItemResult_t4190837579, ___RemainingUses_3)); }
	inline int32_t get_RemainingUses_3() const { return ___RemainingUses_3; }
	inline int32_t* get_address_of_RemainingUses_3() { return &___RemainingUses_3; }
	inline void set_RemainingUses_3(int32_t value)
	{
		___RemainingUses_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSUMEITEMRESULT_T4190837579_H
#ifndef CONSUMEXBOXENTITLEMENTSREQUEST_T2980421321_H
#define CONSUMEXBOXENTITLEMENTSREQUEST_T2980421321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ConsumeXboxEntitlementsRequest
struct  ConsumeXboxEntitlementsRequest_t2980421321  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.ConsumeXboxEntitlementsRequest::CatalogVersion
	String_t* ___CatalogVersion_0;
	// System.String PlayFab.ClientModels.ConsumeXboxEntitlementsRequest::XboxToken
	String_t* ___XboxToken_1;

public:
	inline static int32_t get_offset_of_CatalogVersion_0() { return static_cast<int32_t>(offsetof(ConsumeXboxEntitlementsRequest_t2980421321, ___CatalogVersion_0)); }
	inline String_t* get_CatalogVersion_0() const { return ___CatalogVersion_0; }
	inline String_t** get_address_of_CatalogVersion_0() { return &___CatalogVersion_0; }
	inline void set_CatalogVersion_0(String_t* value)
	{
		___CatalogVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_0), value);
	}

	inline static int32_t get_offset_of_XboxToken_1() { return static_cast<int32_t>(offsetof(ConsumeXboxEntitlementsRequest_t2980421321, ___XboxToken_1)); }
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
#endif // CONSUMEXBOXENTITLEMENTSREQUEST_T2980421321_H
#ifndef CONSUMEXBOXENTITLEMENTSRESULT_T1200602624_H
#define CONSUMEXBOXENTITLEMENTSRESULT_T1200602624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ConsumeXboxEntitlementsResult
struct  ConsumeXboxEntitlementsResult_t1200602624  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.ConsumeXboxEntitlementsResult::Items
	List_1_t898730215 * ___Items_2;

public:
	inline static int32_t get_offset_of_Items_2() { return static_cast<int32_t>(offsetof(ConsumeXboxEntitlementsResult_t1200602624, ___Items_2)); }
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
#endif // CONSUMEXBOXENTITLEMENTSRESULT_T1200602624_H
#ifndef CREATESHAREDGROUPREQUEST_T266174694_H
#define CREATESHAREDGROUPREQUEST_T266174694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CreateSharedGroupRequest
struct  CreateSharedGroupRequest_t266174694  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.CreateSharedGroupRequest::SharedGroupId
	String_t* ___SharedGroupId_0;

public:
	inline static int32_t get_offset_of_SharedGroupId_0() { return static_cast<int32_t>(offsetof(CreateSharedGroupRequest_t266174694, ___SharedGroupId_0)); }
	inline String_t* get_SharedGroupId_0() const { return ___SharedGroupId_0; }
	inline String_t** get_address_of_SharedGroupId_0() { return &___SharedGroupId_0; }
	inline void set_SharedGroupId_0(String_t* value)
	{
		___SharedGroupId_0 = value;
		Il2CppCodeGenWriteBarrier((&___SharedGroupId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATESHAREDGROUPREQUEST_T266174694_H
#ifndef CREATESHAREDGROUPRESULT_T3931530866_H
#define CREATESHAREDGROUPRESULT_T3931530866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CreateSharedGroupResult
struct  CreateSharedGroupResult_t3931530866  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.CreateSharedGroupResult::SharedGroupId
	String_t* ___SharedGroupId_2;

public:
	inline static int32_t get_offset_of_SharedGroupId_2() { return static_cast<int32_t>(offsetof(CreateSharedGroupResult_t3931530866, ___SharedGroupId_2)); }
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
#endif // CREATESHAREDGROUPRESULT_T3931530866_H
#ifndef CURRENTGAMESRESULT_T1599588651_H
#define CURRENTGAMESRESULT_T1599588651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CurrentGamesResult
struct  CurrentGamesResult_t1599588651  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Int32 PlayFab.ClientModels.CurrentGamesResult::GameCount
	int32_t ___GameCount_2;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GameInfo> PlayFab.ClientModels.CurrentGamesResult::Games
	List_1_t1113734529 * ___Games_3;
	// System.Int32 PlayFab.ClientModels.CurrentGamesResult::PlayerCount
	int32_t ___PlayerCount_4;

public:
	inline static int32_t get_offset_of_GameCount_2() { return static_cast<int32_t>(offsetof(CurrentGamesResult_t1599588651, ___GameCount_2)); }
	inline int32_t get_GameCount_2() const { return ___GameCount_2; }
	inline int32_t* get_address_of_GameCount_2() { return &___GameCount_2; }
	inline void set_GameCount_2(int32_t value)
	{
		___GameCount_2 = value;
	}

	inline static int32_t get_offset_of_Games_3() { return static_cast<int32_t>(offsetof(CurrentGamesResult_t1599588651, ___Games_3)); }
	inline List_1_t1113734529 * get_Games_3() const { return ___Games_3; }
	inline List_1_t1113734529 ** get_address_of_Games_3() { return &___Games_3; }
	inline void set_Games_3(List_1_t1113734529 * value)
	{
		___Games_3 = value;
		Il2CppCodeGenWriteBarrier((&___Games_3), value);
	}

	inline static int32_t get_offset_of_PlayerCount_4() { return static_cast<int32_t>(offsetof(CurrentGamesResult_t1599588651, ___PlayerCount_4)); }
	inline int32_t get_PlayerCount_4() const { return ___PlayerCount_4; }
	inline int32_t* get_address_of_PlayerCount_4() { return &___PlayerCount_4; }
	inline void set_PlayerCount_4(int32_t value)
	{
		___PlayerCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTGAMESRESULT_T1599588651_H
#ifndef DEVICEINFOREQUEST_T3905803023_H
#define DEVICEINFOREQUEST_T3905803023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.DeviceInfoRequest
struct  DeviceInfoRequest_t3905803023  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.ClientModels.DeviceInfoRequest::Info
	Dictionary_2_t2865362463 * ___Info_0;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(DeviceInfoRequest_t3905803023, ___Info_0)); }
	inline Dictionary_2_t2865362463 * get_Info_0() const { return ___Info_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(Dictionary_2_t2865362463 * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((&___Info_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEINFOREQUEST_T3905803023_H
#ifndef EMPTYRESPONSE_T674599539_H
#define EMPTYRESPONSE_T674599539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.EmptyResponse
struct  EmptyResponse_t674599539  : public PlayFabResultCommon_t3469603827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYRESPONSE_T674599539_H
#ifndef GAMESERVERREGIONSREQUEST_T3425196055_H
#define GAMESERVERREGIONSREQUEST_T3425196055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GameServerRegionsRequest
struct  GameServerRegionsRequest_t3425196055  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GameServerRegionsRequest::BuildVersion
	String_t* ___BuildVersion_0;
	// System.String PlayFab.ClientModels.GameServerRegionsRequest::TitleId
	String_t* ___TitleId_1;

public:
	inline static int32_t get_offset_of_BuildVersion_0() { return static_cast<int32_t>(offsetof(GameServerRegionsRequest_t3425196055, ___BuildVersion_0)); }
	inline String_t* get_BuildVersion_0() const { return ___BuildVersion_0; }
	inline String_t** get_address_of_BuildVersion_0() { return &___BuildVersion_0; }
	inline void set_BuildVersion_0(String_t* value)
	{
		___BuildVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___BuildVersion_0), value);
	}

	inline static int32_t get_offset_of_TitleId_1() { return static_cast<int32_t>(offsetof(GameServerRegionsRequest_t3425196055, ___TitleId_1)); }
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
#endif // GAMESERVERREGIONSREQUEST_T3425196055_H
#ifndef GAMESERVERREGIONSRESULT_T2030324960_H
#define GAMESERVERREGIONSRESULT_T2030324960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GameServerRegionsResult
struct  GameServerRegionsResult_t2030324960  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.RegionInfo> PlayFab.ClientModels.GameServerRegionsResult::Regions
	List_1_t3188088408 * ___Regions_2;

public:
	inline static int32_t get_offset_of_Regions_2() { return static_cast<int32_t>(offsetof(GameServerRegionsResult_t2030324960, ___Regions_2)); }
	inline List_1_t3188088408 * get_Regions_2() const { return ___Regions_2; }
	inline List_1_t3188088408 ** get_address_of_Regions_2() { return &___Regions_2; }
	inline void set_Regions_2(List_1_t3188088408 * value)
	{
		___Regions_2 = value;
		Il2CppCodeGenWriteBarrier((&___Regions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESERVERREGIONSRESULT_T2030324960_H
#ifndef GETACCOUNTINFOREQUEST_T231147466_H
#define GETACCOUNTINFOREQUEST_T231147466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetAccountInfoRequest
struct  GetAccountInfoRequest_t231147466  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetAccountInfoRequest::Email
	String_t* ___Email_0;
	// System.String PlayFab.ClientModels.GetAccountInfoRequest::PlayFabId
	String_t* ___PlayFabId_1;
	// System.String PlayFab.ClientModels.GetAccountInfoRequest::TitleDisplayName
	String_t* ___TitleDisplayName_2;
	// System.String PlayFab.ClientModels.GetAccountInfoRequest::Username
	String_t* ___Username_3;

public:
	inline static int32_t get_offset_of_Email_0() { return static_cast<int32_t>(offsetof(GetAccountInfoRequest_t231147466, ___Email_0)); }
	inline String_t* get_Email_0() const { return ___Email_0; }
	inline String_t** get_address_of_Email_0() { return &___Email_0; }
	inline void set_Email_0(String_t* value)
	{
		___Email_0 = value;
		Il2CppCodeGenWriteBarrier((&___Email_0), value);
	}

	inline static int32_t get_offset_of_PlayFabId_1() { return static_cast<int32_t>(offsetof(GetAccountInfoRequest_t231147466, ___PlayFabId_1)); }
	inline String_t* get_PlayFabId_1() const { return ___PlayFabId_1; }
	inline String_t** get_address_of_PlayFabId_1() { return &___PlayFabId_1; }
	inline void set_PlayFabId_1(String_t* value)
	{
		___PlayFabId_1 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_1), value);
	}

	inline static int32_t get_offset_of_TitleDisplayName_2() { return static_cast<int32_t>(offsetof(GetAccountInfoRequest_t231147466, ___TitleDisplayName_2)); }
	inline String_t* get_TitleDisplayName_2() const { return ___TitleDisplayName_2; }
	inline String_t** get_address_of_TitleDisplayName_2() { return &___TitleDisplayName_2; }
	inline void set_TitleDisplayName_2(String_t* value)
	{
		___TitleDisplayName_2 = value;
		Il2CppCodeGenWriteBarrier((&___TitleDisplayName_2), value);
	}

	inline static int32_t get_offset_of_Username_3() { return static_cast<int32_t>(offsetof(GetAccountInfoRequest_t231147466, ___Username_3)); }
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
#endif // GETACCOUNTINFOREQUEST_T231147466_H
#ifndef GETACCOUNTINFORESULT_T659556297_H
#define GETACCOUNTINFORESULT_T659556297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetAccountInfoResult
struct  GetAccountInfoResult_t659556297  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.ClientModels.UserAccountInfo PlayFab.ClientModels.GetAccountInfoResult::AccountInfo
	UserAccountInfo_t2687855647 * ___AccountInfo_2;

public:
	inline static int32_t get_offset_of_AccountInfo_2() { return static_cast<int32_t>(offsetof(GetAccountInfoResult_t659556297, ___AccountInfo_2)); }
	inline UserAccountInfo_t2687855647 * get_AccountInfo_2() const { return ___AccountInfo_2; }
	inline UserAccountInfo_t2687855647 ** get_address_of_AccountInfo_2() { return &___AccountInfo_2; }
	inline void set_AccountInfo_2(UserAccountInfo_t2687855647 * value)
	{
		___AccountInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___AccountInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETACCOUNTINFORESULT_T659556297_H
#ifndef GETCATALOGITEMSREQUEST_T3816966401_H
#define GETCATALOGITEMSREQUEST_T3816966401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetCatalogItemsRequest
struct  GetCatalogItemsRequest_t3816966401  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetCatalogItemsRequest::CatalogVersion
	String_t* ___CatalogVersion_0;

public:
	inline static int32_t get_offset_of_CatalogVersion_0() { return static_cast<int32_t>(offsetof(GetCatalogItemsRequest_t3816966401, ___CatalogVersion_0)); }
	inline String_t* get_CatalogVersion_0() const { return ___CatalogVersion_0; }
	inline String_t** get_address_of_CatalogVersion_0() { return &___CatalogVersion_0; }
	inline void set_CatalogVersion_0(String_t* value)
	{
		___CatalogVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETCATALOGITEMSREQUEST_T3816966401_H
#ifndef GETCATALOGITEMSRESULT_T1488911543_H
#define GETCATALOGITEMSRESULT_T1488911543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetCatalogItemsResult
struct  GetCatalogItemsResult_t1488911543  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CatalogItem> PlayFab.ClientModels.GetCatalogItemsResult::Catalog
	List_1_t2565788986 * ___Catalog_2;

public:
	inline static int32_t get_offset_of_Catalog_2() { return static_cast<int32_t>(offsetof(GetCatalogItemsResult_t1488911543, ___Catalog_2)); }
	inline List_1_t2565788986 * get_Catalog_2() const { return ___Catalog_2; }
	inline List_1_t2565788986 ** get_address_of_Catalog_2() { return &___Catalog_2; }
	inline void set_Catalog_2(List_1_t2565788986 * value)
	{
		___Catalog_2 = value;
		Il2CppCodeGenWriteBarrier((&___Catalog_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETCATALOGITEMSRESULT_T1488911543_H
#ifndef GETCHARACTERDATARESULT_T3645025181_H
#define GETCHARACTERDATARESULT_T3645025181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetCharacterDataResult
struct  GetCharacterDataResult_t3645025181  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.GetCharacterDataResult::CharacterId
	String_t* ___CharacterId_2;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord> PlayFab.ClientModels.GetCharacterDataResult::Data
	Dictionary_2_t1171190865 * ___Data_3;
	// System.UInt32 PlayFab.ClientModels.GetCharacterDataResult::DataVersion
	uint32_t ___DataVersion_4;

public:
	inline static int32_t get_offset_of_CharacterId_2() { return static_cast<int32_t>(offsetof(GetCharacterDataResult_t3645025181, ___CharacterId_2)); }
	inline String_t* get_CharacterId_2() const { return ___CharacterId_2; }
	inline String_t** get_address_of_CharacterId_2() { return &___CharacterId_2; }
	inline void set_CharacterId_2(String_t* value)
	{
		___CharacterId_2 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_2), value);
	}

	inline static int32_t get_offset_of_Data_3() { return static_cast<int32_t>(offsetof(GetCharacterDataResult_t3645025181, ___Data_3)); }
	inline Dictionary_2_t1171190865 * get_Data_3() const { return ___Data_3; }
	inline Dictionary_2_t1171190865 ** get_address_of_Data_3() { return &___Data_3; }
	inline void set_Data_3(Dictionary_2_t1171190865 * value)
	{
		___Data_3 = value;
		Il2CppCodeGenWriteBarrier((&___Data_3), value);
	}

	inline static int32_t get_offset_of_DataVersion_4() { return static_cast<int32_t>(offsetof(GetCharacterDataResult_t3645025181, ___DataVersion_4)); }
	inline uint32_t get_DataVersion_4() const { return ___DataVersion_4; }
	inline uint32_t* get_address_of_DataVersion_4() { return &___DataVersion_4; }
	inline void set_DataVersion_4(uint32_t value)
	{
		___DataVersion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETCHARACTERDATARESULT_T3645025181_H
#ifndef GETCHARACTERINVENTORYREQUEST_T1947452908_H
#define GETCHARACTERINVENTORYREQUEST_T1947452908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetCharacterInventoryRequest
struct  GetCharacterInventoryRequest_t1947452908  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetCharacterInventoryRequest::CatalogVersion
	String_t* ___CatalogVersion_0;
	// System.String PlayFab.ClientModels.GetCharacterInventoryRequest::CharacterId
	String_t* ___CharacterId_1;

public:
	inline static int32_t get_offset_of_CatalogVersion_0() { return static_cast<int32_t>(offsetof(GetCharacterInventoryRequest_t1947452908, ___CatalogVersion_0)); }
	inline String_t* get_CatalogVersion_0() const { return ___CatalogVersion_0; }
	inline String_t** get_address_of_CatalogVersion_0() { return &___CatalogVersion_0; }
	inline void set_CatalogVersion_0(String_t* value)
	{
		___CatalogVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_0), value);
	}

	inline static int32_t get_offset_of_CharacterId_1() { return static_cast<int32_t>(offsetof(GetCharacterInventoryRequest_t1947452908, ___CharacterId_1)); }
	inline String_t* get_CharacterId_1() const { return ___CharacterId_1; }
	inline String_t** get_address_of_CharacterId_1() { return &___CharacterId_1; }
	inline void set_CharacterId_1(String_t* value)
	{
		___CharacterId_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETCHARACTERINVENTORYREQUEST_T1947452908_H
#ifndef GETCHARACTERINVENTORYRESULT_T3947237696_H
#define GETCHARACTERINVENTORYRESULT_T3947237696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetCharacterInventoryResult
struct  GetCharacterInventoryResult_t3947237696  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.GetCharacterInventoryResult::CharacterId
	String_t* ___CharacterId_2;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.GetCharacterInventoryResult::Inventory
	List_1_t898730215 * ___Inventory_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.GetCharacterInventoryResult::VirtualCurrency
	Dictionary_2_t2736202052 * ___VirtualCurrency_4;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.VirtualCurrencyRechargeTime> PlayFab.ClientModels.GetCharacterInventoryResult::VirtualCurrencyRechargeTimes
	Dictionary_2_t2609091868 * ___VirtualCurrencyRechargeTimes_5;

public:
	inline static int32_t get_offset_of_CharacterId_2() { return static_cast<int32_t>(offsetof(GetCharacterInventoryResult_t3947237696, ___CharacterId_2)); }
	inline String_t* get_CharacterId_2() const { return ___CharacterId_2; }
	inline String_t** get_address_of_CharacterId_2() { return &___CharacterId_2; }
	inline void set_CharacterId_2(String_t* value)
	{
		___CharacterId_2 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_2), value);
	}

	inline static int32_t get_offset_of_Inventory_3() { return static_cast<int32_t>(offsetof(GetCharacterInventoryResult_t3947237696, ___Inventory_3)); }
	inline List_1_t898730215 * get_Inventory_3() const { return ___Inventory_3; }
	inline List_1_t898730215 ** get_address_of_Inventory_3() { return &___Inventory_3; }
	inline void set_Inventory_3(List_1_t898730215 * value)
	{
		___Inventory_3 = value;
		Il2CppCodeGenWriteBarrier((&___Inventory_3), value);
	}

	inline static int32_t get_offset_of_VirtualCurrency_4() { return static_cast<int32_t>(offsetof(GetCharacterInventoryResult_t3947237696, ___VirtualCurrency_4)); }
	inline Dictionary_2_t2736202052 * get_VirtualCurrency_4() const { return ___VirtualCurrency_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_VirtualCurrency_4() { return &___VirtualCurrency_4; }
	inline void set_VirtualCurrency_4(Dictionary_2_t2736202052 * value)
	{
		___VirtualCurrency_4 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrency_4), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyRechargeTimes_5() { return static_cast<int32_t>(offsetof(GetCharacterInventoryResult_t3947237696, ___VirtualCurrencyRechargeTimes_5)); }
	inline Dictionary_2_t2609091868 * get_VirtualCurrencyRechargeTimes_5() const { return ___VirtualCurrencyRechargeTimes_5; }
	inline Dictionary_2_t2609091868 ** get_address_of_VirtualCurrencyRechargeTimes_5() { return &___VirtualCurrencyRechargeTimes_5; }
	inline void set_VirtualCurrencyRechargeTimes_5(Dictionary_2_t2609091868 * value)
	{
		___VirtualCurrencyRechargeTimes_5 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyRechargeTimes_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETCHARACTERINVENTORYRESULT_T3947237696_H
#ifndef GETCHARACTERLEADERBOARDRESULT_T416954792_H
#define GETCHARACTERLEADERBOARDRESULT_T416954792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetCharacterLeaderboardResult
struct  GetCharacterLeaderboardResult_t416954792  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterLeaderboardEntry> PlayFab.ClientModels.GetCharacterLeaderboardResult::Leaderboard
	List_1_t4011474940 * ___Leaderboard_2;

public:
	inline static int32_t get_offset_of_Leaderboard_2() { return static_cast<int32_t>(offsetof(GetCharacterLeaderboardResult_t416954792, ___Leaderboard_2)); }
	inline List_1_t4011474940 * get_Leaderboard_2() const { return ___Leaderboard_2; }
	inline List_1_t4011474940 ** get_address_of_Leaderboard_2() { return &___Leaderboard_2; }
	inline void set_Leaderboard_2(List_1_t4011474940 * value)
	{
		___Leaderboard_2 = value;
		Il2CppCodeGenWriteBarrier((&___Leaderboard_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETCHARACTERLEADERBOARDRESULT_T416954792_H
#ifndef GETCHARACTERSTATISTICSREQUEST_T736995317_H
#define GETCHARACTERSTATISTICSREQUEST_T736995317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetCharacterStatisticsRequest
struct  GetCharacterStatisticsRequest_t736995317  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetCharacterStatisticsRequest::CharacterId
	String_t* ___CharacterId_0;

public:
	inline static int32_t get_offset_of_CharacterId_0() { return static_cast<int32_t>(offsetof(GetCharacterStatisticsRequest_t736995317, ___CharacterId_0)); }
	inline String_t* get_CharacterId_0() const { return ___CharacterId_0; }
	inline String_t** get_address_of_CharacterId_0() { return &___CharacterId_0; }
	inline void set_CharacterId_0(String_t* value)
	{
		___CharacterId_0 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETCHARACTERSTATISTICSREQUEST_T736995317_H
#ifndef GETCHARACTERSTATISTICSRESULT_T306489328_H
#define GETCHARACTERSTATISTICSRESULT_T306489328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetCharacterStatisticsResult
struct  GetCharacterStatisticsResult_t306489328  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.GetCharacterStatisticsResult::CharacterStatistics
	Dictionary_2_t2736202052 * ___CharacterStatistics_2;

public:
	inline static int32_t get_offset_of_CharacterStatistics_2() { return static_cast<int32_t>(offsetof(GetCharacterStatisticsResult_t306489328, ___CharacterStatistics_2)); }
	inline Dictionary_2_t2736202052 * get_CharacterStatistics_2() const { return ___CharacterStatistics_2; }
	inline Dictionary_2_t2736202052 ** get_address_of_CharacterStatistics_2() { return &___CharacterStatistics_2; }
	inline void set_CharacterStatistics_2(Dictionary_2_t2736202052 * value)
	{
		___CharacterStatistics_2 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterStatistics_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETCHARACTERSTATISTICSRESULT_T306489328_H
#ifndef GETCONTENTDOWNLOADURLRESULT_T24643405_H
#define GETCONTENTDOWNLOADURLRESULT_T24643405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetContentDownloadUrlResult
struct  GetContentDownloadUrlResult_t24643405  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.GetContentDownloadUrlResult::URL
	String_t* ___URL_2;

public:
	inline static int32_t get_offset_of_URL_2() { return static_cast<int32_t>(offsetof(GetContentDownloadUrlResult_t24643405, ___URL_2)); }
	inline String_t* get_URL_2() const { return ___URL_2; }
	inline String_t** get_address_of_URL_2() { return &___URL_2; }
	inline void set_URL_2(String_t* value)
	{
		___URL_2 = value;
		Il2CppCodeGenWriteBarrier((&___URL_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETCONTENTDOWNLOADURLRESULT_T24643405_H
#ifndef GETFRIENDSLISTRESULT_T2972310698_H
#define GETFRIENDSLISTRESULT_T2972310698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetFriendsListResult
struct  GetFriendsListResult_t2972310698  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.FriendInfo> PlayFab.ClientModels.GetFriendsListResult::Friends
	List_1_t2625934009 * ___Friends_2;

public:
	inline static int32_t get_offset_of_Friends_2() { return static_cast<int32_t>(offsetof(GetFriendsListResult_t2972310698, ___Friends_2)); }
	inline List_1_t2625934009 * get_Friends_2() const { return ___Friends_2; }
	inline List_1_t2625934009 ** get_address_of_Friends_2() { return &___Friends_2; }
	inline void set_Friends_2(List_1_t2625934009 * value)
	{
		___Friends_2 = value;
		Il2CppCodeGenWriteBarrier((&___Friends_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFRIENDSLISTRESULT_T2972310698_H
#ifndef GETLEADERBOARDAROUNDCHARACTERRESULT_T2774851536_H
#define GETLEADERBOARDAROUNDCHARACTERRESULT_T2774851536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetLeaderboardAroundCharacterResult
struct  GetLeaderboardAroundCharacterResult_t2774851536  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterLeaderboardEntry> PlayFab.ClientModels.GetLeaderboardAroundCharacterResult::Leaderboard
	List_1_t4011474940 * ___Leaderboard_2;

public:
	inline static int32_t get_offset_of_Leaderboard_2() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundCharacterResult_t2774851536, ___Leaderboard_2)); }
	inline List_1_t4011474940 * get_Leaderboard_2() const { return ___Leaderboard_2; }
	inline List_1_t4011474940 ** get_address_of_Leaderboard_2() { return &___Leaderboard_2; }
	inline void set_Leaderboard_2(List_1_t4011474940 * value)
	{
		___Leaderboard_2 = value;
		Il2CppCodeGenWriteBarrier((&___Leaderboard_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETLEADERBOARDAROUNDCHARACTERRESULT_T2774851536_H
#ifndef GETLEADERBOARDFORUSERSCHARACTERSREQUEST_T3811877747_H
#define GETLEADERBOARDFORUSERSCHARACTERSREQUEST_T3811877747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetLeaderboardForUsersCharactersRequest
struct  GetLeaderboardForUsersCharactersRequest_t3811877747  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Int32 PlayFab.ClientModels.GetLeaderboardForUsersCharactersRequest::MaxResultsCount
	int32_t ___MaxResultsCount_0;
	// System.String PlayFab.ClientModels.GetLeaderboardForUsersCharactersRequest::StatisticName
	String_t* ___StatisticName_1;

public:
	inline static int32_t get_offset_of_MaxResultsCount_0() { return static_cast<int32_t>(offsetof(GetLeaderboardForUsersCharactersRequest_t3811877747, ___MaxResultsCount_0)); }
	inline int32_t get_MaxResultsCount_0() const { return ___MaxResultsCount_0; }
	inline int32_t* get_address_of_MaxResultsCount_0() { return &___MaxResultsCount_0; }
	inline void set_MaxResultsCount_0(int32_t value)
	{
		___MaxResultsCount_0 = value;
	}

	inline static int32_t get_offset_of_StatisticName_1() { return static_cast<int32_t>(offsetof(GetLeaderboardForUsersCharactersRequest_t3811877747, ___StatisticName_1)); }
	inline String_t* get_StatisticName_1() const { return ___StatisticName_1; }
	inline String_t** get_address_of_StatisticName_1() { return &___StatisticName_1; }
	inline void set_StatisticName_1(String_t* value)
	{
		___StatisticName_1 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETLEADERBOARDFORUSERSCHARACTERSREQUEST_T3811877747_H
#ifndef GETLEADERBOARDFORUSERSCHARACTERSRESULT_T3341752334_H
#define GETLEADERBOARDFORUSERSCHARACTERSRESULT_T3341752334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetLeaderboardForUsersCharactersResult
struct  GetLeaderboardForUsersCharactersResult_t3341752334  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterLeaderboardEntry> PlayFab.ClientModels.GetLeaderboardForUsersCharactersResult::Leaderboard
	List_1_t4011474940 * ___Leaderboard_2;

public:
	inline static int32_t get_offset_of_Leaderboard_2() { return static_cast<int32_t>(offsetof(GetLeaderboardForUsersCharactersResult_t3341752334, ___Leaderboard_2)); }
	inline List_1_t4011474940 * get_Leaderboard_2() const { return ___Leaderboard_2; }
	inline List_1_t4011474940 ** get_address_of_Leaderboard_2() { return &___Leaderboard_2; }
	inline void set_Leaderboard_2(List_1_t4011474940 * value)
	{
		___Leaderboard_2 = value;
		Il2CppCodeGenWriteBarrier((&___Leaderboard_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETLEADERBOARDFORUSERSCHARACTERSRESULT_T3341752334_H
#ifndef GETPAYMENTTOKENREQUEST_T1987987818_H
#define GETPAYMENTTOKENREQUEST_T1987987818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPaymentTokenRequest
struct  GetPaymentTokenRequest_t1987987818  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetPaymentTokenRequest::TokenProvider
	String_t* ___TokenProvider_0;

public:
	inline static int32_t get_offset_of_TokenProvider_0() { return static_cast<int32_t>(offsetof(GetPaymentTokenRequest_t1987987818, ___TokenProvider_0)); }
	inline String_t* get_TokenProvider_0() const { return ___TokenProvider_0; }
	inline String_t** get_address_of_TokenProvider_0() { return &___TokenProvider_0; }
	inline void set_TokenProvider_0(String_t* value)
	{
		___TokenProvider_0 = value;
		Il2CppCodeGenWriteBarrier((&___TokenProvider_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPAYMENTTOKENREQUEST_T1987987818_H
#ifndef GETPAYMENTTOKENRESULT_T2244665520_H
#define GETPAYMENTTOKENRESULT_T2244665520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPaymentTokenResult
struct  GetPaymentTokenResult_t2244665520  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.GetPaymentTokenResult::OrderId
	String_t* ___OrderId_2;
	// System.String PlayFab.ClientModels.GetPaymentTokenResult::ProviderToken
	String_t* ___ProviderToken_3;

public:
	inline static int32_t get_offset_of_OrderId_2() { return static_cast<int32_t>(offsetof(GetPaymentTokenResult_t2244665520, ___OrderId_2)); }
	inline String_t* get_OrderId_2() const { return ___OrderId_2; }
	inline String_t** get_address_of_OrderId_2() { return &___OrderId_2; }
	inline void set_OrderId_2(String_t* value)
	{
		___OrderId_2 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_2), value);
	}

	inline static int32_t get_offset_of_ProviderToken_3() { return static_cast<int32_t>(offsetof(GetPaymentTokenResult_t2244665520, ___ProviderToken_3)); }
	inline String_t* get_ProviderToken_3() const { return ___ProviderToken_3; }
	inline String_t** get_address_of_ProviderToken_3() { return &___ProviderToken_3; }
	inline void set_ProviderToken_3(String_t* value)
	{
		___ProviderToken_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderToken_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPAYMENTTOKENRESULT_T2244665520_H
#ifndef GETPHOTONAUTHENTICATIONTOKENREQUEST_T702201970_H
#define GETPHOTONAUTHENTICATIONTOKENREQUEST_T702201970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPhotonAuthenticationTokenRequest
struct  GetPhotonAuthenticationTokenRequest_t702201970  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetPhotonAuthenticationTokenRequest::PhotonApplicationId
	String_t* ___PhotonApplicationId_0;

public:
	inline static int32_t get_offset_of_PhotonApplicationId_0() { return static_cast<int32_t>(offsetof(GetPhotonAuthenticationTokenRequest_t702201970, ___PhotonApplicationId_0)); }
	inline String_t* get_PhotonApplicationId_0() const { return ___PhotonApplicationId_0; }
	inline String_t** get_address_of_PhotonApplicationId_0() { return &___PhotonApplicationId_0; }
	inline void set_PhotonApplicationId_0(String_t* value)
	{
		___PhotonApplicationId_0 = value;
		Il2CppCodeGenWriteBarrier((&___PhotonApplicationId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPHOTONAUTHENTICATIONTOKENREQUEST_T702201970_H
#ifndef GETPHOTONAUTHENTICATIONTOKENRESULT_T890761391_H
#define GETPHOTONAUTHENTICATIONTOKENRESULT_T890761391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPhotonAuthenticationTokenResult
struct  GetPhotonAuthenticationTokenResult_t890761391  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.GetPhotonAuthenticationTokenResult::PhotonCustomAuthenticationToken
	String_t* ___PhotonCustomAuthenticationToken_2;

public:
	inline static int32_t get_offset_of_PhotonCustomAuthenticationToken_2() { return static_cast<int32_t>(offsetof(GetPhotonAuthenticationTokenResult_t890761391, ___PhotonCustomAuthenticationToken_2)); }
	inline String_t* get_PhotonCustomAuthenticationToken_2() const { return ___PhotonCustomAuthenticationToken_2; }
	inline String_t** get_address_of_PhotonCustomAuthenticationToken_2() { return &___PhotonCustomAuthenticationToken_2; }
	inline void set_PhotonCustomAuthenticationToken_2(String_t* value)
	{
		___PhotonCustomAuthenticationToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___PhotonCustomAuthenticationToken_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPHOTONAUTHENTICATIONTOKENRESULT_T890761391_H
#ifndef GETPLAYFABIDSFROMFACEBOOKIDSREQUEST_T2574797800_H
#define GETPLAYFABIDSFROMFACEBOOKIDSREQUEST_T2574797800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsRequest
struct  GetPlayFabIDsFromFacebookIDsRequest_t2574797800  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsRequest::FacebookIDs
	List_1_t3319525431 * ___FacebookIDs_0;

public:
	inline static int32_t get_offset_of_FacebookIDs_0() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromFacebookIDsRequest_t2574797800, ___FacebookIDs_0)); }
	inline List_1_t3319525431 * get_FacebookIDs_0() const { return ___FacebookIDs_0; }
	inline List_1_t3319525431 ** get_address_of_FacebookIDs_0() { return &___FacebookIDs_0; }
	inline void set_FacebookIDs_0(List_1_t3319525431 * value)
	{
		___FacebookIDs_0 = value;
		Il2CppCodeGenWriteBarrier((&___FacebookIDs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMFACEBOOKIDSREQUEST_T2574797800_H
#ifndef GETPLAYFABIDSFROMFACEBOOKIDSRESULT_T1577679909_H
#define GETPLAYFABIDSFROMFACEBOOKIDSRESULT_T1577679909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsResult
struct  GetPlayFabIDsFromFacebookIDsResult_t1577679909  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.FacebookPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsResult::Data
	List_1_t1153674906 * ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(GetPlayFabIDsFromFacebookIDsResult_t1577679909, ___Data_2)); }
	inline List_1_t1153674906 * get_Data_2() const { return ___Data_2; }
	inline List_1_t1153674906 ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(List_1_t1153674906 * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYFABIDSFROMFACEBOOKIDSRESULT_T1577679909_H
#ifndef GETPLAYERCOMBINEDINFOREQUEST_T3695404297_H
#define GETPLAYERCOMBINEDINFOREQUEST_T3695404297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerCombinedInfoRequest
struct  GetPlayerCombinedInfoRequest_t3695404297  : public PlayFabRequestCommon_t229319069
{
public:
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.GetPlayerCombinedInfoRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t121265087 * ___InfoRequestParameters_0;
	// System.String PlayFab.ClientModels.GetPlayerCombinedInfoRequest::PlayFabId
	String_t* ___PlayFabId_1;

public:
	inline static int32_t get_offset_of_InfoRequestParameters_0() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequest_t3695404297, ___InfoRequestParameters_0)); }
	inline GetPlayerCombinedInfoRequestParams_t121265087 * get_InfoRequestParameters_0() const { return ___InfoRequestParameters_0; }
	inline GetPlayerCombinedInfoRequestParams_t121265087 ** get_address_of_InfoRequestParameters_0() { return &___InfoRequestParameters_0; }
	inline void set_InfoRequestParameters_0(GetPlayerCombinedInfoRequestParams_t121265087 * value)
	{
		___InfoRequestParameters_0 = value;
		Il2CppCodeGenWriteBarrier((&___InfoRequestParameters_0), value);
	}

	inline static int32_t get_offset_of_PlayFabId_1() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoRequest_t3695404297, ___PlayFabId_1)); }
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
#endif // GETPLAYERCOMBINEDINFOREQUEST_T3695404297_H
#ifndef GETPLAYERCOMBINEDINFORESULT_T1685921054_H
#define GETPLAYERCOMBINEDINFORESULT_T1685921054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerCombinedInfoResult
struct  GetPlayerCombinedInfoResult_t1685921054  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload PlayFab.ClientModels.GetPlayerCombinedInfoResult::InfoResultPayload
	GetPlayerCombinedInfoResultPayload_t2789378405 * ___InfoResultPayload_2;
	// System.String PlayFab.ClientModels.GetPlayerCombinedInfoResult::PlayFabId
	String_t* ___PlayFabId_3;

public:
	inline static int32_t get_offset_of_InfoResultPayload_2() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResult_t1685921054, ___InfoResultPayload_2)); }
	inline GetPlayerCombinedInfoResultPayload_t2789378405 * get_InfoResultPayload_2() const { return ___InfoResultPayload_2; }
	inline GetPlayerCombinedInfoResultPayload_t2789378405 ** get_address_of_InfoResultPayload_2() { return &___InfoResultPayload_2; }
	inline void set_InfoResultPayload_2(GetPlayerCombinedInfoResultPayload_t2789378405 * value)
	{
		___InfoResultPayload_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfoResultPayload_2), value);
	}

	inline static int32_t get_offset_of_PlayFabId_3() { return static_cast<int32_t>(offsetof(GetPlayerCombinedInfoResult_t1685921054, ___PlayFabId_3)); }
	inline String_t* get_PlayFabId_3() const { return ___PlayFabId_3; }
	inline String_t** get_address_of_PlayFabId_3() { return &___PlayFabId_3; }
	inline void set_PlayFabId_3(String_t* value)
	{
		___PlayFabId_3 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERCOMBINEDINFORESULT_T1685921054_H
#ifndef GETPLAYERPROFILEREQUEST_T2569991826_H
#define GETPLAYERPROFILEREQUEST_T2569991826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerProfileRequest
struct  GetPlayerProfileRequest_t2569991826  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetPlayerProfileRequest::PlayFabId
	String_t* ___PlayFabId_0;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetPlayerProfileRequest::ProfileConstraints
	PlayerProfileViewConstraints_t97717017 * ___ProfileConstraints_1;

public:
	inline static int32_t get_offset_of_PlayFabId_0() { return static_cast<int32_t>(offsetof(GetPlayerProfileRequest_t2569991826, ___PlayFabId_0)); }
	inline String_t* get_PlayFabId_0() const { return ___PlayFabId_0; }
	inline String_t** get_address_of_PlayFabId_0() { return &___PlayFabId_0; }
	inline void set_PlayFabId_0(String_t* value)
	{
		___PlayFabId_0 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_0), value);
	}

	inline static int32_t get_offset_of_ProfileConstraints_1() { return static_cast<int32_t>(offsetof(GetPlayerProfileRequest_t2569991826, ___ProfileConstraints_1)); }
	inline PlayerProfileViewConstraints_t97717017 * get_ProfileConstraints_1() const { return ___ProfileConstraints_1; }
	inline PlayerProfileViewConstraints_t97717017 ** get_address_of_ProfileConstraints_1() { return &___ProfileConstraints_1; }
	inline void set_ProfileConstraints_1(PlayerProfileViewConstraints_t97717017 * value)
	{
		___ProfileConstraints_1 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileConstraints_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERPROFILEREQUEST_T2569991826_H
#ifndef GETPLAYERPROFILERESULT_T3566978645_H
#define GETPLAYERPROFILERESULT_T3566978645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerProfileResult
struct  GetPlayerProfileResult_t3566978645  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.ClientModels.PlayerProfileModel PlayFab.ClientModels.GetPlayerProfileResult::PlayerProfile
	PlayerProfileModel_t250934598 * ___PlayerProfile_2;

public:
	inline static int32_t get_offset_of_PlayerProfile_2() { return static_cast<int32_t>(offsetof(GetPlayerProfileResult_t3566978645, ___PlayerProfile_2)); }
	inline PlayerProfileModel_t250934598 * get_PlayerProfile_2() const { return ___PlayerProfile_2; }
	inline PlayerProfileModel_t250934598 ** get_address_of_PlayerProfile_2() { return &___PlayerProfile_2; }
	inline void set_PlayerProfile_2(PlayerProfileModel_t250934598 * value)
	{
		___PlayerProfile_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerProfile_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERPROFILERESULT_T3566978645_H
#ifndef GETPLAYERSEGMENTSREQUEST_T2589129559_H
#define GETPLAYERSEGMENTSREQUEST_T2589129559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerSegmentsRequest
struct  GetPlayerSegmentsRequest_t2589129559  : public PlayFabRequestCommon_t229319069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERSEGMENTSREQUEST_T2589129559_H
#ifndef GETPLAYERSEGMENTSRESULT_T4239216360_H
#define GETPLAYERSEGMENTSRESULT_T4239216360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerSegmentsResult
struct  GetPlayerSegmentsResult_t4239216360  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GetSegmentResult> PlayFab.ClientModels.GetPlayerSegmentsResult::Segments
	List_1_t3919296276 * ___Segments_2;

public:
	inline static int32_t get_offset_of_Segments_2() { return static_cast<int32_t>(offsetof(GetPlayerSegmentsResult_t4239216360, ___Segments_2)); }
	inline List_1_t3919296276 * get_Segments_2() const { return ___Segments_2; }
	inline List_1_t3919296276 ** get_address_of_Segments_2() { return &___Segments_2; }
	inline void set_Segments_2(List_1_t3919296276 * value)
	{
		___Segments_2 = value;
		Il2CppCodeGenWriteBarrier((&___Segments_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERSEGMENTSRESULT_T4239216360_H
#ifndef GETPLAYERSTATISTICVERSIONSREQUEST_T1890685024_H
#define GETPLAYERSTATISTICVERSIONSREQUEST_T1890685024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerStatisticVersionsRequest
struct  GetPlayerStatisticVersionsRequest_t1890685024  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetPlayerStatisticVersionsRequest::StatisticName
	String_t* ___StatisticName_0;

public:
	inline static int32_t get_offset_of_StatisticName_0() { return static_cast<int32_t>(offsetof(GetPlayerStatisticVersionsRequest_t1890685024, ___StatisticName_0)); }
	inline String_t* get_StatisticName_0() const { return ___StatisticName_0; }
	inline String_t** get_address_of_StatisticName_0() { return &___StatisticName_0; }
	inline void set_StatisticName_0(String_t* value)
	{
		___StatisticName_0 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERSTATISTICVERSIONSREQUEST_T1890685024_H
#ifndef GETPLAYERSTATISTICVERSIONSRESULT_T1451790427_H
#define GETPLAYERSTATISTICVERSIONSRESULT_T1451790427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerStatisticVersionsResult
struct  GetPlayerStatisticVersionsResult_t1451790427  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PlayerStatisticVersion> PlayFab.ClientModels.GetPlayerStatisticVersionsResult::StatisticVersions
	List_1_t4202799161 * ___StatisticVersions_2;

public:
	inline static int32_t get_offset_of_StatisticVersions_2() { return static_cast<int32_t>(offsetof(GetPlayerStatisticVersionsResult_t1451790427, ___StatisticVersions_2)); }
	inline List_1_t4202799161 * get_StatisticVersions_2() const { return ___StatisticVersions_2; }
	inline List_1_t4202799161 ** get_address_of_StatisticVersions_2() { return &___StatisticVersions_2; }
	inline void set_StatisticVersions_2(List_1_t4202799161 * value)
	{
		___StatisticVersions_2 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticVersions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERSTATISTICVERSIONSRESULT_T1451790427_H
#ifndef GETPLAYERSTATISTICSREQUEST_T4108574586_H
#define GETPLAYERSTATISTICSREQUEST_T4108574586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerStatisticsRequest
struct  GetPlayerStatisticsRequest_t4108574586  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayerStatisticsRequest::StatisticNames
	List_1_t3319525431 * ___StatisticNames_0;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticNameVersion> PlayFab.ClientModels.GetPlayerStatisticsRequest::StatisticNameVersions
	List_1_t1254354793 * ___StatisticNameVersions_1;

public:
	inline static int32_t get_offset_of_StatisticNames_0() { return static_cast<int32_t>(offsetof(GetPlayerStatisticsRequest_t4108574586, ___StatisticNames_0)); }
	inline List_1_t3319525431 * get_StatisticNames_0() const { return ___StatisticNames_0; }
	inline List_1_t3319525431 ** get_address_of_StatisticNames_0() { return &___StatisticNames_0; }
	inline void set_StatisticNames_0(List_1_t3319525431 * value)
	{
		___StatisticNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticNames_0), value);
	}

	inline static int32_t get_offset_of_StatisticNameVersions_1() { return static_cast<int32_t>(offsetof(GetPlayerStatisticsRequest_t4108574586, ___StatisticNameVersions_1)); }
	inline List_1_t1254354793 * get_StatisticNameVersions_1() const { return ___StatisticNameVersions_1; }
	inline List_1_t1254354793 ** get_address_of_StatisticNameVersions_1() { return &___StatisticNameVersions_1; }
	inline void set_StatisticNameVersions_1(List_1_t1254354793 * value)
	{
		___StatisticNameVersions_1 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticNameVersions_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERSTATISTICSREQUEST_T4108574586_H
#ifndef GETPLAYERSTATISTICSRESULT_T133705579_H
#define GETPLAYERSTATISTICSRESULT_T133705579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerStatisticsResult
struct  GetPlayerStatisticsResult_t133705579  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticValue> PlayFab.ClientModels.GetPlayerStatisticsResult::Statistics
	List_1_t1855408285 * ___Statistics_2;

public:
	inline static int32_t get_offset_of_Statistics_2() { return static_cast<int32_t>(offsetof(GetPlayerStatisticsResult_t133705579, ___Statistics_2)); }
	inline List_1_t1855408285 * get_Statistics_2() const { return ___Statistics_2; }
	inline List_1_t1855408285 ** get_address_of_Statistics_2() { return &___Statistics_2; }
	inline void set_Statistics_2(List_1_t1855408285 * value)
	{
		___Statistics_2 = value;
		Il2CppCodeGenWriteBarrier((&___Statistics_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERSTATISTICSRESULT_T133705579_H
#ifndef GETPLAYERTAGSREQUEST_T2415734797_H
#define GETPLAYERTAGSREQUEST_T2415734797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerTagsRequest
struct  GetPlayerTagsRequest_t2415734797  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetPlayerTagsRequest::Namespace
	String_t* ___Namespace_0;
	// System.String PlayFab.ClientModels.GetPlayerTagsRequest::PlayFabId
	String_t* ___PlayFabId_1;

public:
	inline static int32_t get_offset_of_Namespace_0() { return static_cast<int32_t>(offsetof(GetPlayerTagsRequest_t2415734797, ___Namespace_0)); }
	inline String_t* get_Namespace_0() const { return ___Namespace_0; }
	inline String_t** get_address_of_Namespace_0() { return &___Namespace_0; }
	inline void set_Namespace_0(String_t* value)
	{
		___Namespace_0 = value;
		Il2CppCodeGenWriteBarrier((&___Namespace_0), value);
	}

	inline static int32_t get_offset_of_PlayFabId_1() { return static_cast<int32_t>(offsetof(GetPlayerTagsRequest_t2415734797, ___PlayFabId_1)); }
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
#endif // GETPLAYERTAGSREQUEST_T2415734797_H
#ifndef GETPLAYERTAGSRESULT_T3544216249_H
#define GETPLAYERTAGSRESULT_T3544216249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerTagsResult
struct  GetPlayerTagsResult_t3544216249  : public PlayFabResultCommon_t3469603827
{
public:
	// System.String PlayFab.ClientModels.GetPlayerTagsResult::PlayFabId
	String_t* ___PlayFabId_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayerTagsResult::Tags
	List_1_t3319525431 * ___Tags_3;

public:
	inline static int32_t get_offset_of_PlayFabId_2() { return static_cast<int32_t>(offsetof(GetPlayerTagsResult_t3544216249, ___PlayFabId_2)); }
	inline String_t* get_PlayFabId_2() const { return ___PlayFabId_2; }
	inline String_t** get_address_of_PlayFabId_2() { return &___PlayFabId_2; }
	inline void set_PlayFabId_2(String_t* value)
	{
		___PlayFabId_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_2), value);
	}

	inline static int32_t get_offset_of_Tags_3() { return static_cast<int32_t>(offsetof(GetPlayerTagsResult_t3544216249, ___Tags_3)); }
	inline List_1_t3319525431 * get_Tags_3() const { return ___Tags_3; }
	inline List_1_t3319525431 ** get_address_of_Tags_3() { return &___Tags_3; }
	inline void set_Tags_3(List_1_t3319525431 * value)
	{
		___Tags_3 = value;
		Il2CppCodeGenWriteBarrier((&___Tags_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERTAGSRESULT_T3544216249_H
#ifndef GETPLAYERTRADESRESPONSE_T1415293971_H
#define GETPLAYERTRADESRESPONSE_T1415293971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerTradesResponse
struct  GetPlayerTradesResponse_t1415293971  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.TradeInfo> PlayFab.ClientModels.GetPlayerTradesResponse::AcceptedTrades
	List_1_t1248034927 * ___AcceptedTrades_2;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.TradeInfo> PlayFab.ClientModels.GetPlayerTradesResponse::OpenedTrades
	List_1_t1248034927 * ___OpenedTrades_3;

public:
	inline static int32_t get_offset_of_AcceptedTrades_2() { return static_cast<int32_t>(offsetof(GetPlayerTradesResponse_t1415293971, ___AcceptedTrades_2)); }
	inline List_1_t1248034927 * get_AcceptedTrades_2() const { return ___AcceptedTrades_2; }
	inline List_1_t1248034927 ** get_address_of_AcceptedTrades_2() { return &___AcceptedTrades_2; }
	inline void set_AcceptedTrades_2(List_1_t1248034927 * value)
	{
		___AcceptedTrades_2 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptedTrades_2), value);
	}

	inline static int32_t get_offset_of_OpenedTrades_3() { return static_cast<int32_t>(offsetof(GetPlayerTradesResponse_t1415293971, ___OpenedTrades_3)); }
	inline List_1_t1248034927 * get_OpenedTrades_3() const { return ___OpenedTrades_3; }
	inline List_1_t1248034927 ** get_address_of_OpenedTrades_3() { return &___OpenedTrades_3; }
	inline void set_OpenedTrades_3(List_1_t1248034927 * value)
	{
		___OpenedTrades_3 = value;
		Il2CppCodeGenWriteBarrier((&___OpenedTrades_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERTRADESRESPONSE_T1415293971_H
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
#ifndef ANDROIDDEVICEPUSHNOTIFICATIONREGISTRATIONREQUEST_T3081612946_H
#define ANDROIDDEVICEPUSHNOTIFICATIONREGISTRATIONREQUEST_T3081612946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationRequest
struct  AndroidDevicePushNotificationRegistrationRequest_t3081612946  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationRequest::ConfirmationMessage
	String_t* ___ConfirmationMessage_0;
	// System.String PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationRequest::DeviceToken
	String_t* ___DeviceToken_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationRequest::SendPushNotificationConfirmation
	Nullable_1_t1819850047  ___SendPushNotificationConfirmation_2;

public:
	inline static int32_t get_offset_of_ConfirmationMessage_0() { return static_cast<int32_t>(offsetof(AndroidDevicePushNotificationRegistrationRequest_t3081612946, ___ConfirmationMessage_0)); }
	inline String_t* get_ConfirmationMessage_0() const { return ___ConfirmationMessage_0; }
	inline String_t** get_address_of_ConfirmationMessage_0() { return &___ConfirmationMessage_0; }
	inline void set_ConfirmationMessage_0(String_t* value)
	{
		___ConfirmationMessage_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConfirmationMessage_0), value);
	}

	inline static int32_t get_offset_of_DeviceToken_1() { return static_cast<int32_t>(offsetof(AndroidDevicePushNotificationRegistrationRequest_t3081612946, ___DeviceToken_1)); }
	inline String_t* get_DeviceToken_1() const { return ___DeviceToken_1; }
	inline String_t** get_address_of_DeviceToken_1() { return &___DeviceToken_1; }
	inline void set_DeviceToken_1(String_t* value)
	{
		___DeviceToken_1 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceToken_1), value);
	}

	inline static int32_t get_offset_of_SendPushNotificationConfirmation_2() { return static_cast<int32_t>(offsetof(AndroidDevicePushNotificationRegistrationRequest_t3081612946, ___SendPushNotificationConfirmation_2)); }
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
#endif // ANDROIDDEVICEPUSHNOTIFICATIONREGISTRATIONREQUEST_T3081612946_H
#ifndef CATALOGITEMCONSUMABLEINFO_T2482552979_H
#define CATALOGITEMCONSUMABLEINFO_T2482552979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CatalogItemConsumableInfo
struct  CatalogItemConsumableInfo_t2482552979  : public RuntimeObject
{
public:
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.CatalogItemConsumableInfo::UsageCount
	Nullable_1_t4282624060  ___UsageCount_0;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.CatalogItemConsumableInfo::UsagePeriod
	Nullable_1_t4282624060  ___UsagePeriod_1;
	// System.String PlayFab.ClientModels.CatalogItemConsumableInfo::UsagePeriodGroup
	String_t* ___UsagePeriodGroup_2;

public:
	inline static int32_t get_offset_of_UsageCount_0() { return static_cast<int32_t>(offsetof(CatalogItemConsumableInfo_t2482552979, ___UsageCount_0)); }
	inline Nullable_1_t4282624060  get_UsageCount_0() const { return ___UsageCount_0; }
	inline Nullable_1_t4282624060 * get_address_of_UsageCount_0() { return &___UsageCount_0; }
	inline void set_UsageCount_0(Nullable_1_t4282624060  value)
	{
		___UsageCount_0 = value;
	}

	inline static int32_t get_offset_of_UsagePeriod_1() { return static_cast<int32_t>(offsetof(CatalogItemConsumableInfo_t2482552979, ___UsagePeriod_1)); }
	inline Nullable_1_t4282624060  get_UsagePeriod_1() const { return ___UsagePeriod_1; }
	inline Nullable_1_t4282624060 * get_address_of_UsagePeriod_1() { return &___UsagePeriod_1; }
	inline void set_UsagePeriod_1(Nullable_1_t4282624060  value)
	{
		___UsagePeriod_1 = value;
	}

	inline static int32_t get_offset_of_UsagePeriodGroup_2() { return static_cast<int32_t>(offsetof(CatalogItemConsumableInfo_t2482552979, ___UsagePeriodGroup_2)); }
	inline String_t* get_UsagePeriodGroup_2() const { return ___UsagePeriodGroup_2; }
	inline String_t** get_address_of_UsagePeriodGroup_2() { return &___UsagePeriodGroup_2; }
	inline void set_UsagePeriodGroup_2(String_t* value)
	{
		___UsagePeriodGroup_2 = value;
		Il2CppCodeGenWriteBarrier((&___UsagePeriodGroup_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATALOGITEMCONSUMABLEINFO_T2482552979_H
#ifndef CLOUDSCRIPTREVISIONOPTION_T1494085737_H
#define CLOUDSCRIPTREVISIONOPTION_T1494085737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CloudScriptRevisionOption
struct  CloudScriptRevisionOption_t1494085737 
{
public:
	// System.Int32 PlayFab.ClientModels.CloudScriptRevisionOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CloudScriptRevisionOption_t1494085737, ___value___1)); }
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
#endif // CLOUDSCRIPTREVISIONOPTION_T1494085737_H
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
#ifndef EMAILVERIFICATIONSTATUS_T99910467_H
#define EMAILVERIFICATIONSTATUS_T99910467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.EmailVerificationStatus
struct  EmailVerificationStatus_t99910467 
{
public:
	// System.Int32 PlayFab.ClientModels.EmailVerificationStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EmailVerificationStatus_t99910467, ___value___1)); }
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
#endif // EMAILVERIFICATIONSTATUS_T99910467_H
#ifndef EXECUTECLOUDSCRIPTRESULT_T216533998_H
#define EXECUTECLOUDSCRIPTRESULT_T216533998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ExecuteCloudScriptResult
struct  ExecuteCloudScriptResult_t216533998  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Int32 PlayFab.ClientModels.ExecuteCloudScriptResult::APIRequestsIssued
	int32_t ___APIRequestsIssued_2;
	// PlayFab.ClientModels.ScriptExecutionError PlayFab.ClientModels.ExecuteCloudScriptResult::Error
	ScriptExecutionError_t3998229139 * ___Error_3;
	// System.Double PlayFab.ClientModels.ExecuteCloudScriptResult::ExecutionTimeSeconds
	double ___ExecutionTimeSeconds_4;
	// System.String PlayFab.ClientModels.ExecuteCloudScriptResult::FunctionName
	String_t* ___FunctionName_5;
	// System.Object PlayFab.ClientModels.ExecuteCloudScriptResult::FunctionResult
	RuntimeObject * ___FunctionResult_6;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.ExecuteCloudScriptResult::FunctionResultTooLarge
	Nullable_1_t1819850047  ___FunctionResultTooLarge_7;
	// System.Int32 PlayFab.ClientModels.ExecuteCloudScriptResult::HttpRequestsIssued
	int32_t ___HttpRequestsIssued_8;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.LogStatement> PlayFab.ClientModels.ExecuteCloudScriptResult::Logs
	List_1_t789441556 * ___Logs_9;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.ExecuteCloudScriptResult::LogsTooLarge
	Nullable_1_t1819850047  ___LogsTooLarge_10;
	// System.UInt32 PlayFab.ClientModels.ExecuteCloudScriptResult::MemoryConsumedBytes
	uint32_t ___MemoryConsumedBytes_11;
	// System.Double PlayFab.ClientModels.ExecuteCloudScriptResult::ProcessorTimeSeconds
	double ___ProcessorTimeSeconds_12;
	// System.Int32 PlayFab.ClientModels.ExecuteCloudScriptResult::Revision
	int32_t ___Revision_13;

public:
	inline static int32_t get_offset_of_APIRequestsIssued_2() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t216533998, ___APIRequestsIssued_2)); }
	inline int32_t get_APIRequestsIssued_2() const { return ___APIRequestsIssued_2; }
	inline int32_t* get_address_of_APIRequestsIssued_2() { return &___APIRequestsIssued_2; }
	inline void set_APIRequestsIssued_2(int32_t value)
	{
		___APIRequestsIssued_2 = value;
	}

	inline static int32_t get_offset_of_Error_3() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t216533998, ___Error_3)); }
	inline ScriptExecutionError_t3998229139 * get_Error_3() const { return ___Error_3; }
	inline ScriptExecutionError_t3998229139 ** get_address_of_Error_3() { return &___Error_3; }
	inline void set_Error_3(ScriptExecutionError_t3998229139 * value)
	{
		___Error_3 = value;
		Il2CppCodeGenWriteBarrier((&___Error_3), value);
	}

	inline static int32_t get_offset_of_ExecutionTimeSeconds_4() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t216533998, ___ExecutionTimeSeconds_4)); }
	inline double get_ExecutionTimeSeconds_4() const { return ___ExecutionTimeSeconds_4; }
	inline double* get_address_of_ExecutionTimeSeconds_4() { return &___ExecutionTimeSeconds_4; }
	inline void set_ExecutionTimeSeconds_4(double value)
	{
		___ExecutionTimeSeconds_4 = value;
	}

	inline static int32_t get_offset_of_FunctionName_5() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t216533998, ___FunctionName_5)); }
	inline String_t* get_FunctionName_5() const { return ___FunctionName_5; }
	inline String_t** get_address_of_FunctionName_5() { return &___FunctionName_5; }
	inline void set_FunctionName_5(String_t* value)
	{
		___FunctionName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionName_5), value);
	}

	inline static int32_t get_offset_of_FunctionResult_6() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t216533998, ___FunctionResult_6)); }
	inline RuntimeObject * get_FunctionResult_6() const { return ___FunctionResult_6; }
	inline RuntimeObject ** get_address_of_FunctionResult_6() { return &___FunctionResult_6; }
	inline void set_FunctionResult_6(RuntimeObject * value)
	{
		___FunctionResult_6 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionResult_6), value);
	}

	inline static int32_t get_offset_of_FunctionResultTooLarge_7() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t216533998, ___FunctionResultTooLarge_7)); }
	inline Nullable_1_t1819850047  get_FunctionResultTooLarge_7() const { return ___FunctionResultTooLarge_7; }
	inline Nullable_1_t1819850047 * get_address_of_FunctionResultTooLarge_7() { return &___FunctionResultTooLarge_7; }
	inline void set_FunctionResultTooLarge_7(Nullable_1_t1819850047  value)
	{
		___FunctionResultTooLarge_7 = value;
	}

	inline static int32_t get_offset_of_HttpRequestsIssued_8() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t216533998, ___HttpRequestsIssued_8)); }
	inline int32_t get_HttpRequestsIssued_8() const { return ___HttpRequestsIssued_8; }
	inline int32_t* get_address_of_HttpRequestsIssued_8() { return &___HttpRequestsIssued_8; }
	inline void set_HttpRequestsIssued_8(int32_t value)
	{
		___HttpRequestsIssued_8 = value;
	}

	inline static int32_t get_offset_of_Logs_9() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t216533998, ___Logs_9)); }
	inline List_1_t789441556 * get_Logs_9() const { return ___Logs_9; }
	inline List_1_t789441556 ** get_address_of_Logs_9() { return &___Logs_9; }
	inline void set_Logs_9(List_1_t789441556 * value)
	{
		___Logs_9 = value;
		Il2CppCodeGenWriteBarrier((&___Logs_9), value);
	}

	inline static int32_t get_offset_of_LogsTooLarge_10() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t216533998, ___LogsTooLarge_10)); }
	inline Nullable_1_t1819850047  get_LogsTooLarge_10() const { return ___LogsTooLarge_10; }
	inline Nullable_1_t1819850047 * get_address_of_LogsTooLarge_10() { return &___LogsTooLarge_10; }
	inline void set_LogsTooLarge_10(Nullable_1_t1819850047  value)
	{
		___LogsTooLarge_10 = value;
	}

	inline static int32_t get_offset_of_MemoryConsumedBytes_11() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t216533998, ___MemoryConsumedBytes_11)); }
	inline uint32_t get_MemoryConsumedBytes_11() const { return ___MemoryConsumedBytes_11; }
	inline uint32_t* get_address_of_MemoryConsumedBytes_11() { return &___MemoryConsumedBytes_11; }
	inline void set_MemoryConsumedBytes_11(uint32_t value)
	{
		___MemoryConsumedBytes_11 = value;
	}

	inline static int32_t get_offset_of_ProcessorTimeSeconds_12() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t216533998, ___ProcessorTimeSeconds_12)); }
	inline double get_ProcessorTimeSeconds_12() const { return ___ProcessorTimeSeconds_12; }
	inline double* get_address_of_ProcessorTimeSeconds_12() { return &___ProcessorTimeSeconds_12; }
	inline void set_ProcessorTimeSeconds_12(double value)
	{
		___ProcessorTimeSeconds_12 = value;
	}

	inline static int32_t get_offset_of_Revision_13() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t216533998, ___Revision_13)); }
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
#endif // EXECUTECLOUDSCRIPTRESULT_T216533998_H
#ifndef GAMEINSTANCESTATE_T2211628668_H
#define GAMEINSTANCESTATE_T2211628668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GameInstanceState
struct  GameInstanceState_t2211628668 
{
public:
	// System.Int32 PlayFab.ClientModels.GameInstanceState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GameInstanceState_t2211628668, ___value___1)); }
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
#endif // GAMEINSTANCESTATE_T2211628668_H
#ifndef GETCHARACTERDATAREQUEST_T2125716442_H
#define GETCHARACTERDATAREQUEST_T2125716442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetCharacterDataRequest
struct  GetCharacterDataRequest_t2125716442  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetCharacterDataRequest::CharacterId
	String_t* ___CharacterId_0;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.GetCharacterDataRequest::IfChangedFromDataVersion
	Nullable_1_t4282624060  ___IfChangedFromDataVersion_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetCharacterDataRequest::Keys
	List_1_t3319525431 * ___Keys_2;
	// System.String PlayFab.ClientModels.GetCharacterDataRequest::PlayFabId
	String_t* ___PlayFabId_3;

public:
	inline static int32_t get_offset_of_CharacterId_0() { return static_cast<int32_t>(offsetof(GetCharacterDataRequest_t2125716442, ___CharacterId_0)); }
	inline String_t* get_CharacterId_0() const { return ___CharacterId_0; }
	inline String_t** get_address_of_CharacterId_0() { return &___CharacterId_0; }
	inline void set_CharacterId_0(String_t* value)
	{
		___CharacterId_0 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_0), value);
	}

	inline static int32_t get_offset_of_IfChangedFromDataVersion_1() { return static_cast<int32_t>(offsetof(GetCharacterDataRequest_t2125716442, ___IfChangedFromDataVersion_1)); }
	inline Nullable_1_t4282624060  get_IfChangedFromDataVersion_1() const { return ___IfChangedFromDataVersion_1; }
	inline Nullable_1_t4282624060 * get_address_of_IfChangedFromDataVersion_1() { return &___IfChangedFromDataVersion_1; }
	inline void set_IfChangedFromDataVersion_1(Nullable_1_t4282624060  value)
	{
		___IfChangedFromDataVersion_1 = value;
	}

	inline static int32_t get_offset_of_Keys_2() { return static_cast<int32_t>(offsetof(GetCharacterDataRequest_t2125716442, ___Keys_2)); }
	inline List_1_t3319525431 * get_Keys_2() const { return ___Keys_2; }
	inline List_1_t3319525431 ** get_address_of_Keys_2() { return &___Keys_2; }
	inline void set_Keys_2(List_1_t3319525431 * value)
	{
		___Keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___Keys_2), value);
	}

	inline static int32_t get_offset_of_PlayFabId_3() { return static_cast<int32_t>(offsetof(GetCharacterDataRequest_t2125716442, ___PlayFabId_3)); }
	inline String_t* get_PlayFabId_3() const { return ___PlayFabId_3; }
	inline String_t** get_address_of_PlayFabId_3() { return &___PlayFabId_3; }
	inline void set_PlayFabId_3(String_t* value)
	{
		___PlayFabId_3 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETCHARACTERDATAREQUEST_T2125716442_H
#ifndef GETCHARACTERLEADERBOARDREQUEST_T3930104902_H
#define GETCHARACTERLEADERBOARDREQUEST_T3930104902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetCharacterLeaderboardRequest
struct  GetCharacterLeaderboardRequest_t3930104902  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetCharacterLeaderboardRequest::CharacterType
	String_t* ___CharacterType_0;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetCharacterLeaderboardRequest::MaxResultsCount
	Nullable_1_t378540539  ___MaxResultsCount_1;
	// System.Int32 PlayFab.ClientModels.GetCharacterLeaderboardRequest::StartPosition
	int32_t ___StartPosition_2;
	// System.String PlayFab.ClientModels.GetCharacterLeaderboardRequest::StatisticName
	String_t* ___StatisticName_3;

public:
	inline static int32_t get_offset_of_CharacterType_0() { return static_cast<int32_t>(offsetof(GetCharacterLeaderboardRequest_t3930104902, ___CharacterType_0)); }
	inline String_t* get_CharacterType_0() const { return ___CharacterType_0; }
	inline String_t** get_address_of_CharacterType_0() { return &___CharacterType_0; }
	inline void set_CharacterType_0(String_t* value)
	{
		___CharacterType_0 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterType_0), value);
	}

	inline static int32_t get_offset_of_MaxResultsCount_1() { return static_cast<int32_t>(offsetof(GetCharacterLeaderboardRequest_t3930104902, ___MaxResultsCount_1)); }
	inline Nullable_1_t378540539  get_MaxResultsCount_1() const { return ___MaxResultsCount_1; }
	inline Nullable_1_t378540539 * get_address_of_MaxResultsCount_1() { return &___MaxResultsCount_1; }
	inline void set_MaxResultsCount_1(Nullable_1_t378540539  value)
	{
		___MaxResultsCount_1 = value;
	}

	inline static int32_t get_offset_of_StartPosition_2() { return static_cast<int32_t>(offsetof(GetCharacterLeaderboardRequest_t3930104902, ___StartPosition_2)); }
	inline int32_t get_StartPosition_2() const { return ___StartPosition_2; }
	inline int32_t* get_address_of_StartPosition_2() { return &___StartPosition_2; }
	inline void set_StartPosition_2(int32_t value)
	{
		___StartPosition_2 = value;
	}

	inline static int32_t get_offset_of_StatisticName_3() { return static_cast<int32_t>(offsetof(GetCharacterLeaderboardRequest_t3930104902, ___StatisticName_3)); }
	inline String_t* get_StatisticName_3() const { return ___StatisticName_3; }
	inline String_t** get_address_of_StatisticName_3() { return &___StatisticName_3; }
	inline void set_StatisticName_3(String_t* value)
	{
		___StatisticName_3 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETCHARACTERLEADERBOARDREQUEST_T3930104902_H
#ifndef GETCONTENTDOWNLOADURLREQUEST_T2270909012_H
#define GETCONTENTDOWNLOADURLREQUEST_T2270909012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetContentDownloadUrlRequest
struct  GetContentDownloadUrlRequest_t2270909012  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetContentDownloadUrlRequest::HttpMethod
	String_t* ___HttpMethod_0;
	// System.String PlayFab.ClientModels.GetContentDownloadUrlRequest::Key
	String_t* ___Key_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetContentDownloadUrlRequest::ThruCDN
	Nullable_1_t1819850047  ___ThruCDN_2;

public:
	inline static int32_t get_offset_of_HttpMethod_0() { return static_cast<int32_t>(offsetof(GetContentDownloadUrlRequest_t2270909012, ___HttpMethod_0)); }
	inline String_t* get_HttpMethod_0() const { return ___HttpMethod_0; }
	inline String_t** get_address_of_HttpMethod_0() { return &___HttpMethod_0; }
	inline void set_HttpMethod_0(String_t* value)
	{
		___HttpMethod_0 = value;
		Il2CppCodeGenWriteBarrier((&___HttpMethod_0), value);
	}

	inline static int32_t get_offset_of_Key_1() { return static_cast<int32_t>(offsetof(GetContentDownloadUrlRequest_t2270909012, ___Key_1)); }
	inline String_t* get_Key_1() const { return ___Key_1; }
	inline String_t** get_address_of_Key_1() { return &___Key_1; }
	inline void set_Key_1(String_t* value)
	{
		___Key_1 = value;
		Il2CppCodeGenWriteBarrier((&___Key_1), value);
	}

	inline static int32_t get_offset_of_ThruCDN_2() { return static_cast<int32_t>(offsetof(GetContentDownloadUrlRequest_t2270909012, ___ThruCDN_2)); }
	inline Nullable_1_t1819850047  get_ThruCDN_2() const { return ___ThruCDN_2; }
	inline Nullable_1_t1819850047 * get_address_of_ThruCDN_2() { return &___ThruCDN_2; }
	inline void set_ThruCDN_2(Nullable_1_t1819850047  value)
	{
		___ThruCDN_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETCONTENTDOWNLOADURLREQUEST_T2270909012_H
#ifndef GETFRIENDLEADERBOARDAROUNDPLAYERREQUEST_T2809382610_H
#define GETFRIENDLEADERBOARDAROUNDPLAYERREQUEST_T2809382610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest
struct  GetFriendLeaderboardAroundPlayerRequest_t2809382610  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::IncludeFacebookFriends
	Nullable_1_t1819850047  ___IncludeFacebookFriends_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::IncludeSteamFriends
	Nullable_1_t1819850047  ___IncludeSteamFriends_1;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::MaxResultsCount
	Nullable_1_t378540539  ___MaxResultsCount_2;
	// System.String PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::PlayFabId
	String_t* ___PlayFabId_3;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::ProfileConstraints
	PlayerProfileViewConstraints_t97717017 * ___ProfileConstraints_4;
	// System.String PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::StatisticName
	String_t* ___StatisticName_5;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::Version
	Nullable_1_t378540539  ___Version_6;
	// System.String PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::XboxToken
	String_t* ___XboxToken_7;

public:
	inline static int32_t get_offset_of_IncludeFacebookFriends_0() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardAroundPlayerRequest_t2809382610, ___IncludeFacebookFriends_0)); }
	inline Nullable_1_t1819850047  get_IncludeFacebookFriends_0() const { return ___IncludeFacebookFriends_0; }
	inline Nullable_1_t1819850047 * get_address_of_IncludeFacebookFriends_0() { return &___IncludeFacebookFriends_0; }
	inline void set_IncludeFacebookFriends_0(Nullable_1_t1819850047  value)
	{
		___IncludeFacebookFriends_0 = value;
	}

	inline static int32_t get_offset_of_IncludeSteamFriends_1() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardAroundPlayerRequest_t2809382610, ___IncludeSteamFriends_1)); }
	inline Nullable_1_t1819850047  get_IncludeSteamFriends_1() const { return ___IncludeSteamFriends_1; }
	inline Nullable_1_t1819850047 * get_address_of_IncludeSteamFriends_1() { return &___IncludeSteamFriends_1; }
	inline void set_IncludeSteamFriends_1(Nullable_1_t1819850047  value)
	{
		___IncludeSteamFriends_1 = value;
	}

	inline static int32_t get_offset_of_MaxResultsCount_2() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardAroundPlayerRequest_t2809382610, ___MaxResultsCount_2)); }
	inline Nullable_1_t378540539  get_MaxResultsCount_2() const { return ___MaxResultsCount_2; }
	inline Nullable_1_t378540539 * get_address_of_MaxResultsCount_2() { return &___MaxResultsCount_2; }
	inline void set_MaxResultsCount_2(Nullable_1_t378540539  value)
	{
		___MaxResultsCount_2 = value;
	}

	inline static int32_t get_offset_of_PlayFabId_3() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardAroundPlayerRequest_t2809382610, ___PlayFabId_3)); }
	inline String_t* get_PlayFabId_3() const { return ___PlayFabId_3; }
	inline String_t** get_address_of_PlayFabId_3() { return &___PlayFabId_3; }
	inline void set_PlayFabId_3(String_t* value)
	{
		___PlayFabId_3 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_3), value);
	}

	inline static int32_t get_offset_of_ProfileConstraints_4() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardAroundPlayerRequest_t2809382610, ___ProfileConstraints_4)); }
	inline PlayerProfileViewConstraints_t97717017 * get_ProfileConstraints_4() const { return ___ProfileConstraints_4; }
	inline PlayerProfileViewConstraints_t97717017 ** get_address_of_ProfileConstraints_4() { return &___ProfileConstraints_4; }
	inline void set_ProfileConstraints_4(PlayerProfileViewConstraints_t97717017 * value)
	{
		___ProfileConstraints_4 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileConstraints_4), value);
	}

	inline static int32_t get_offset_of_StatisticName_5() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardAroundPlayerRequest_t2809382610, ___StatisticName_5)); }
	inline String_t* get_StatisticName_5() const { return ___StatisticName_5; }
	inline String_t** get_address_of_StatisticName_5() { return &___StatisticName_5; }
	inline void set_StatisticName_5(String_t* value)
	{
		___StatisticName_5 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_5), value);
	}

	inline static int32_t get_offset_of_Version_6() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardAroundPlayerRequest_t2809382610, ___Version_6)); }
	inline Nullable_1_t378540539  get_Version_6() const { return ___Version_6; }
	inline Nullable_1_t378540539 * get_address_of_Version_6() { return &___Version_6; }
	inline void set_Version_6(Nullable_1_t378540539  value)
	{
		___Version_6 = value;
	}

	inline static int32_t get_offset_of_XboxToken_7() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardAroundPlayerRequest_t2809382610, ___XboxToken_7)); }
	inline String_t* get_XboxToken_7() const { return ___XboxToken_7; }
	inline String_t** get_address_of_XboxToken_7() { return &___XboxToken_7; }
	inline void set_XboxToken_7(String_t* value)
	{
		___XboxToken_7 = value;
		Il2CppCodeGenWriteBarrier((&___XboxToken_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFRIENDLEADERBOARDAROUNDPLAYERREQUEST_T2809382610_H
#ifndef GETFRIENDLEADERBOARDREQUEST_T548985863_H
#define GETFRIENDLEADERBOARDREQUEST_T548985863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetFriendLeaderboardRequest
struct  GetFriendLeaderboardRequest_t548985863  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetFriendLeaderboardRequest::IncludeFacebookFriends
	Nullable_1_t1819850047  ___IncludeFacebookFriends_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetFriendLeaderboardRequest::IncludeSteamFriends
	Nullable_1_t1819850047  ___IncludeSteamFriends_1;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetFriendLeaderboardRequest::MaxResultsCount
	Nullable_1_t378540539  ___MaxResultsCount_2;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetFriendLeaderboardRequest::ProfileConstraints
	PlayerProfileViewConstraints_t97717017 * ___ProfileConstraints_3;
	// System.Int32 PlayFab.ClientModels.GetFriendLeaderboardRequest::StartPosition
	int32_t ___StartPosition_4;
	// System.String PlayFab.ClientModels.GetFriendLeaderboardRequest::StatisticName
	String_t* ___StatisticName_5;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetFriendLeaderboardRequest::Version
	Nullable_1_t378540539  ___Version_6;
	// System.String PlayFab.ClientModels.GetFriendLeaderboardRequest::XboxToken
	String_t* ___XboxToken_7;

public:
	inline static int32_t get_offset_of_IncludeFacebookFriends_0() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardRequest_t548985863, ___IncludeFacebookFriends_0)); }
	inline Nullable_1_t1819850047  get_IncludeFacebookFriends_0() const { return ___IncludeFacebookFriends_0; }
	inline Nullable_1_t1819850047 * get_address_of_IncludeFacebookFriends_0() { return &___IncludeFacebookFriends_0; }
	inline void set_IncludeFacebookFriends_0(Nullable_1_t1819850047  value)
	{
		___IncludeFacebookFriends_0 = value;
	}

	inline static int32_t get_offset_of_IncludeSteamFriends_1() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardRequest_t548985863, ___IncludeSteamFriends_1)); }
	inline Nullable_1_t1819850047  get_IncludeSteamFriends_1() const { return ___IncludeSteamFriends_1; }
	inline Nullable_1_t1819850047 * get_address_of_IncludeSteamFriends_1() { return &___IncludeSteamFriends_1; }
	inline void set_IncludeSteamFriends_1(Nullable_1_t1819850047  value)
	{
		___IncludeSteamFriends_1 = value;
	}

	inline static int32_t get_offset_of_MaxResultsCount_2() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardRequest_t548985863, ___MaxResultsCount_2)); }
	inline Nullable_1_t378540539  get_MaxResultsCount_2() const { return ___MaxResultsCount_2; }
	inline Nullable_1_t378540539 * get_address_of_MaxResultsCount_2() { return &___MaxResultsCount_2; }
	inline void set_MaxResultsCount_2(Nullable_1_t378540539  value)
	{
		___MaxResultsCount_2 = value;
	}

	inline static int32_t get_offset_of_ProfileConstraints_3() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardRequest_t548985863, ___ProfileConstraints_3)); }
	inline PlayerProfileViewConstraints_t97717017 * get_ProfileConstraints_3() const { return ___ProfileConstraints_3; }
	inline PlayerProfileViewConstraints_t97717017 ** get_address_of_ProfileConstraints_3() { return &___ProfileConstraints_3; }
	inline void set_ProfileConstraints_3(PlayerProfileViewConstraints_t97717017 * value)
	{
		___ProfileConstraints_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileConstraints_3), value);
	}

	inline static int32_t get_offset_of_StartPosition_4() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardRequest_t548985863, ___StartPosition_4)); }
	inline int32_t get_StartPosition_4() const { return ___StartPosition_4; }
	inline int32_t* get_address_of_StartPosition_4() { return &___StartPosition_4; }
	inline void set_StartPosition_4(int32_t value)
	{
		___StartPosition_4 = value;
	}

	inline static int32_t get_offset_of_StatisticName_5() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardRequest_t548985863, ___StatisticName_5)); }
	inline String_t* get_StatisticName_5() const { return ___StatisticName_5; }
	inline String_t** get_address_of_StatisticName_5() { return &___StatisticName_5; }
	inline void set_StatisticName_5(String_t* value)
	{
		___StatisticName_5 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_5), value);
	}

	inline static int32_t get_offset_of_Version_6() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardRequest_t548985863, ___Version_6)); }
	inline Nullable_1_t378540539  get_Version_6() const { return ___Version_6; }
	inline Nullable_1_t378540539 * get_address_of_Version_6() { return &___Version_6; }
	inline void set_Version_6(Nullable_1_t378540539  value)
	{
		___Version_6 = value;
	}

	inline static int32_t get_offset_of_XboxToken_7() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardRequest_t548985863, ___XboxToken_7)); }
	inline String_t* get_XboxToken_7() const { return ___XboxToken_7; }
	inline String_t** get_address_of_XboxToken_7() { return &___XboxToken_7; }
	inline void set_XboxToken_7(String_t* value)
	{
		___XboxToken_7 = value;
		Il2CppCodeGenWriteBarrier((&___XboxToken_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFRIENDLEADERBOARDREQUEST_T548985863_H
#ifndef GETFRIENDSLISTREQUEST_T2544426151_H
#define GETFRIENDSLISTREQUEST_T2544426151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetFriendsListRequest
struct  GetFriendsListRequest_t2544426151  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetFriendsListRequest::IncludeFacebookFriends
	Nullable_1_t1819850047  ___IncludeFacebookFriends_0;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetFriendsListRequest::IncludeSteamFriends
	Nullable_1_t1819850047  ___IncludeSteamFriends_1;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetFriendsListRequest::ProfileConstraints
	PlayerProfileViewConstraints_t97717017 * ___ProfileConstraints_2;
	// System.String PlayFab.ClientModels.GetFriendsListRequest::XboxToken
	String_t* ___XboxToken_3;

public:
	inline static int32_t get_offset_of_IncludeFacebookFriends_0() { return static_cast<int32_t>(offsetof(GetFriendsListRequest_t2544426151, ___IncludeFacebookFriends_0)); }
	inline Nullable_1_t1819850047  get_IncludeFacebookFriends_0() const { return ___IncludeFacebookFriends_0; }
	inline Nullable_1_t1819850047 * get_address_of_IncludeFacebookFriends_0() { return &___IncludeFacebookFriends_0; }
	inline void set_IncludeFacebookFriends_0(Nullable_1_t1819850047  value)
	{
		___IncludeFacebookFriends_0 = value;
	}

	inline static int32_t get_offset_of_IncludeSteamFriends_1() { return static_cast<int32_t>(offsetof(GetFriendsListRequest_t2544426151, ___IncludeSteamFriends_1)); }
	inline Nullable_1_t1819850047  get_IncludeSteamFriends_1() const { return ___IncludeSteamFriends_1; }
	inline Nullable_1_t1819850047 * get_address_of_IncludeSteamFriends_1() { return &___IncludeSteamFriends_1; }
	inline void set_IncludeSteamFriends_1(Nullable_1_t1819850047  value)
	{
		___IncludeSteamFriends_1 = value;
	}

	inline static int32_t get_offset_of_ProfileConstraints_2() { return static_cast<int32_t>(offsetof(GetFriendsListRequest_t2544426151, ___ProfileConstraints_2)); }
	inline PlayerProfileViewConstraints_t97717017 * get_ProfileConstraints_2() const { return ___ProfileConstraints_2; }
	inline PlayerProfileViewConstraints_t97717017 ** get_address_of_ProfileConstraints_2() { return &___ProfileConstraints_2; }
	inline void set_ProfileConstraints_2(PlayerProfileViewConstraints_t97717017 * value)
	{
		___ProfileConstraints_2 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileConstraints_2), value);
	}

	inline static int32_t get_offset_of_XboxToken_3() { return static_cast<int32_t>(offsetof(GetFriendsListRequest_t2544426151, ___XboxToken_3)); }
	inline String_t* get_XboxToken_3() const { return ___XboxToken_3; }
	inline String_t** get_address_of_XboxToken_3() { return &___XboxToken_3; }
	inline void set_XboxToken_3(String_t* value)
	{
		___XboxToken_3 = value;
		Il2CppCodeGenWriteBarrier((&___XboxToken_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFRIENDSLISTREQUEST_T2544426151_H
#ifndef GETLEADERBOARDAROUNDCHARACTERREQUEST_T4072747985_H
#define GETLEADERBOARDAROUNDCHARACTERREQUEST_T4072747985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest
struct  GetLeaderboardAroundCharacterRequest_t4072747985  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest::CharacterId
	String_t* ___CharacterId_0;
	// System.String PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest::CharacterType
	String_t* ___CharacterType_1;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest::MaxResultsCount
	Nullable_1_t378540539  ___MaxResultsCount_2;
	// System.String PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest::StatisticName
	String_t* ___StatisticName_3;

public:
	inline static int32_t get_offset_of_CharacterId_0() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundCharacterRequest_t4072747985, ___CharacterId_0)); }
	inline String_t* get_CharacterId_0() const { return ___CharacterId_0; }
	inline String_t** get_address_of_CharacterId_0() { return &___CharacterId_0; }
	inline void set_CharacterId_0(String_t* value)
	{
		___CharacterId_0 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_0), value);
	}

	inline static int32_t get_offset_of_CharacterType_1() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundCharacterRequest_t4072747985, ___CharacterType_1)); }
	inline String_t* get_CharacterType_1() const { return ___CharacterType_1; }
	inline String_t** get_address_of_CharacterType_1() { return &___CharacterType_1; }
	inline void set_CharacterType_1(String_t* value)
	{
		___CharacterType_1 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterType_1), value);
	}

	inline static int32_t get_offset_of_MaxResultsCount_2() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundCharacterRequest_t4072747985, ___MaxResultsCount_2)); }
	inline Nullable_1_t378540539  get_MaxResultsCount_2() const { return ___MaxResultsCount_2; }
	inline Nullable_1_t378540539 * get_address_of_MaxResultsCount_2() { return &___MaxResultsCount_2; }
	inline void set_MaxResultsCount_2(Nullable_1_t378540539  value)
	{
		___MaxResultsCount_2 = value;
	}

	inline static int32_t get_offset_of_StatisticName_3() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundCharacterRequest_t4072747985, ___StatisticName_3)); }
	inline String_t* get_StatisticName_3() const { return ___StatisticName_3; }
	inline String_t** get_address_of_StatisticName_3() { return &___StatisticName_3; }
	inline void set_StatisticName_3(String_t* value)
	{
		___StatisticName_3 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETLEADERBOARDAROUNDCHARACTERREQUEST_T4072747985_H
#ifndef GETLEADERBOARDAROUNDPLAYERREQUEST_T1172201677_H
#define GETLEADERBOARDAROUNDPLAYERREQUEST_T1172201677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest
struct  GetLeaderboardAroundPlayerRequest_t1172201677  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest::MaxResultsCount
	Nullable_1_t378540539  ___MaxResultsCount_0;
	// System.String PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest::PlayFabId
	String_t* ___PlayFabId_1;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest::ProfileConstraints
	PlayerProfileViewConstraints_t97717017 * ___ProfileConstraints_2;
	// System.String PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest::StatisticName
	String_t* ___StatisticName_3;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest::Version
	Nullable_1_t378540539  ___Version_4;

public:
	inline static int32_t get_offset_of_MaxResultsCount_0() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundPlayerRequest_t1172201677, ___MaxResultsCount_0)); }
	inline Nullable_1_t378540539  get_MaxResultsCount_0() const { return ___MaxResultsCount_0; }
	inline Nullable_1_t378540539 * get_address_of_MaxResultsCount_0() { return &___MaxResultsCount_0; }
	inline void set_MaxResultsCount_0(Nullable_1_t378540539  value)
	{
		___MaxResultsCount_0 = value;
	}

	inline static int32_t get_offset_of_PlayFabId_1() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundPlayerRequest_t1172201677, ___PlayFabId_1)); }
	inline String_t* get_PlayFabId_1() const { return ___PlayFabId_1; }
	inline String_t** get_address_of_PlayFabId_1() { return &___PlayFabId_1; }
	inline void set_PlayFabId_1(String_t* value)
	{
		___PlayFabId_1 = value;
		Il2CppCodeGenWriteBarrier((&___PlayFabId_1), value);
	}

	inline static int32_t get_offset_of_ProfileConstraints_2() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundPlayerRequest_t1172201677, ___ProfileConstraints_2)); }
	inline PlayerProfileViewConstraints_t97717017 * get_ProfileConstraints_2() const { return ___ProfileConstraints_2; }
	inline PlayerProfileViewConstraints_t97717017 ** get_address_of_ProfileConstraints_2() { return &___ProfileConstraints_2; }
	inline void set_ProfileConstraints_2(PlayerProfileViewConstraints_t97717017 * value)
	{
		___ProfileConstraints_2 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileConstraints_2), value);
	}

	inline static int32_t get_offset_of_StatisticName_3() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundPlayerRequest_t1172201677, ___StatisticName_3)); }
	inline String_t* get_StatisticName_3() const { return ___StatisticName_3; }
	inline String_t** get_address_of_StatisticName_3() { return &___StatisticName_3; }
	inline void set_StatisticName_3(String_t* value)
	{
		___StatisticName_3 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_3), value);
	}

	inline static int32_t get_offset_of_Version_4() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundPlayerRequest_t1172201677, ___Version_4)); }
	inline Nullable_1_t378540539  get_Version_4() const { return ___Version_4; }
	inline Nullable_1_t378540539 * get_address_of_Version_4() { return &___Version_4; }
	inline void set_Version_4(Nullable_1_t378540539  value)
	{
		___Version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETLEADERBOARDAROUNDPLAYERREQUEST_T1172201677_H
#ifndef GETLEADERBOARDREQUEST_T2393021863_H
#define GETLEADERBOARDREQUEST_T2393021863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetLeaderboardRequest
struct  GetLeaderboardRequest_t2393021863  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetLeaderboardRequest::MaxResultsCount
	Nullable_1_t378540539  ___MaxResultsCount_0;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetLeaderboardRequest::ProfileConstraints
	PlayerProfileViewConstraints_t97717017 * ___ProfileConstraints_1;
	// System.Int32 PlayFab.ClientModels.GetLeaderboardRequest::StartPosition
	int32_t ___StartPosition_2;
	// System.String PlayFab.ClientModels.GetLeaderboardRequest::StatisticName
	String_t* ___StatisticName_3;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetLeaderboardRequest::Version
	Nullable_1_t378540539  ___Version_4;

public:
	inline static int32_t get_offset_of_MaxResultsCount_0() { return static_cast<int32_t>(offsetof(GetLeaderboardRequest_t2393021863, ___MaxResultsCount_0)); }
	inline Nullable_1_t378540539  get_MaxResultsCount_0() const { return ___MaxResultsCount_0; }
	inline Nullable_1_t378540539 * get_address_of_MaxResultsCount_0() { return &___MaxResultsCount_0; }
	inline void set_MaxResultsCount_0(Nullable_1_t378540539  value)
	{
		___MaxResultsCount_0 = value;
	}

	inline static int32_t get_offset_of_ProfileConstraints_1() { return static_cast<int32_t>(offsetof(GetLeaderboardRequest_t2393021863, ___ProfileConstraints_1)); }
	inline PlayerProfileViewConstraints_t97717017 * get_ProfileConstraints_1() const { return ___ProfileConstraints_1; }
	inline PlayerProfileViewConstraints_t97717017 ** get_address_of_ProfileConstraints_1() { return &___ProfileConstraints_1; }
	inline void set_ProfileConstraints_1(PlayerProfileViewConstraints_t97717017 * value)
	{
		___ProfileConstraints_1 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileConstraints_1), value);
	}

	inline static int32_t get_offset_of_StartPosition_2() { return static_cast<int32_t>(offsetof(GetLeaderboardRequest_t2393021863, ___StartPosition_2)); }
	inline int32_t get_StartPosition_2() const { return ___StartPosition_2; }
	inline int32_t* get_address_of_StartPosition_2() { return &___StartPosition_2; }
	inline void set_StartPosition_2(int32_t value)
	{
		___StartPosition_2 = value;
	}

	inline static int32_t get_offset_of_StatisticName_3() { return static_cast<int32_t>(offsetof(GetLeaderboardRequest_t2393021863, ___StatisticName_3)); }
	inline String_t* get_StatisticName_3() const { return ___StatisticName_3; }
	inline String_t** get_address_of_StatisticName_3() { return &___StatisticName_3; }
	inline void set_StatisticName_3(String_t* value)
	{
		___StatisticName_3 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_3), value);
	}

	inline static int32_t get_offset_of_Version_4() { return static_cast<int32_t>(offsetof(GetLeaderboardRequest_t2393021863, ___Version_4)); }
	inline Nullable_1_t378540539  get_Version_4() const { return ___Version_4; }
	inline Nullable_1_t378540539 * get_address_of_Version_4() { return &___Version_4; }
	inline void set_Version_4(Nullable_1_t378540539  value)
	{
		___Version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETLEADERBOARDREQUEST_T2393021863_H
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
#ifndef NULLABLE_1_T3216647819_H
#define NULLABLE_1_T3216647819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.CloudScriptRevisionOption>
struct  Nullable_1_t3216647819 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3216647819, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3216647819, ___has_value_1)); }
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
#endif // NULLABLE_1_T3216647819_H
#ifndef NULLABLE_1_T1822472549_H
#define NULLABLE_1_T1822472549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.EmailVerificationStatus>
struct  Nullable_1_t1822472549 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1822472549, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1822472549, ___has_value_1)); }
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
#endif // NULLABLE_1_T1822472549_H
#ifndef NULLABLE_1_T3934190750_H
#define NULLABLE_1_T3934190750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.ClientModels.GameInstanceState>
struct  Nullable_1_t3934190750 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3934190750, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3934190750, ___has_value_1)); }
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
#endif // NULLABLE_1_T3934190750_H
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
#ifndef CONFIRMPURCHASERESULT_T1016176588_H
#define CONFIRMPURCHASERESULT_T1016176588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ConfirmPurchaseResult
struct  ConfirmPurchaseResult_t1016176588  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.ConfirmPurchaseResult::Items
	List_1_t898730215 * ___Items_2;
	// System.String PlayFab.ClientModels.ConfirmPurchaseResult::OrderId
	String_t* ___OrderId_3;
	// System.DateTime PlayFab.ClientModels.ConfirmPurchaseResult::PurchaseDate
	DateTime_t3738529785  ___PurchaseDate_4;

public:
	inline static int32_t get_offset_of_Items_2() { return static_cast<int32_t>(offsetof(ConfirmPurchaseResult_t1016176588, ___Items_2)); }
	inline List_1_t898730215 * get_Items_2() const { return ___Items_2; }
	inline List_1_t898730215 ** get_address_of_Items_2() { return &___Items_2; }
	inline void set_Items_2(List_1_t898730215 * value)
	{
		___Items_2 = value;
		Il2CppCodeGenWriteBarrier((&___Items_2), value);
	}

	inline static int32_t get_offset_of_OrderId_3() { return static_cast<int32_t>(offsetof(ConfirmPurchaseResult_t1016176588, ___OrderId_3)); }
	inline String_t* get_OrderId_3() const { return ___OrderId_3; }
	inline String_t** get_address_of_OrderId_3() { return &___OrderId_3; }
	inline void set_OrderId_3(String_t* value)
	{
		___OrderId_3 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_3), value);
	}

	inline static int32_t get_offset_of_PurchaseDate_4() { return static_cast<int32_t>(offsetof(ConfirmPurchaseResult_t1016176588, ___PurchaseDate_4)); }
	inline DateTime_t3738529785  get_PurchaseDate_4() const { return ___PurchaseDate_4; }
	inline DateTime_t3738529785 * get_address_of_PurchaseDate_4() { return &___PurchaseDate_4; }
	inline void set_PurchaseDate_4(DateTime_t3738529785  value)
	{
		___PurchaseDate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIRMPURCHASERESULT_T1016176588_H
#ifndef CONTACTEMAILINFOMODEL_T3940837230_H
#define CONTACTEMAILINFOMODEL_T3940837230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ContactEmailInfoModel
struct  ContactEmailInfoModel_t3940837230  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.ContactEmailInfoModel::EmailAddress
	String_t* ___EmailAddress_0;
	// System.String PlayFab.ClientModels.ContactEmailInfoModel::Name
	String_t* ___Name_1;
	// System.Nullable`1<PlayFab.ClientModels.EmailVerificationStatus> PlayFab.ClientModels.ContactEmailInfoModel::VerificationStatus
	Nullable_1_t1822472549  ___VerificationStatus_2;

public:
	inline static int32_t get_offset_of_EmailAddress_0() { return static_cast<int32_t>(offsetof(ContactEmailInfoModel_t3940837230, ___EmailAddress_0)); }
	inline String_t* get_EmailAddress_0() const { return ___EmailAddress_0; }
	inline String_t** get_address_of_EmailAddress_0() { return &___EmailAddress_0; }
	inline void set_EmailAddress_0(String_t* value)
	{
		___EmailAddress_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmailAddress_0), value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(ContactEmailInfoModel_t3940837230, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_VerificationStatus_2() { return static_cast<int32_t>(offsetof(ContactEmailInfoModel_t3940837230, ___VerificationStatus_2)); }
	inline Nullable_1_t1822472549  get_VerificationStatus_2() const { return ___VerificationStatus_2; }
	inline Nullable_1_t1822472549 * get_address_of_VerificationStatus_2() { return &___VerificationStatus_2; }
	inline void set_VerificationStatus_2(Nullable_1_t1822472549  value)
	{
		___VerificationStatus_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTEMAILINFOMODEL_T3940837230_H
#ifndef CURRENTGAMESREQUEST_T4114556668_H
#define CURRENTGAMESREQUEST_T4114556668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.CurrentGamesRequest
struct  CurrentGamesRequest_t4114556668  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.CurrentGamesRequest::BuildVersion
	String_t* ___BuildVersion_0;
	// System.String PlayFab.ClientModels.CurrentGamesRequest::GameMode
	String_t* ___GameMode_1;
	// System.Nullable`1<PlayFab.ClientModels.Region> PlayFab.ClientModels.CurrentGamesRequest::Region
	Nullable_1_t1625618012  ___Region_2;
	// System.String PlayFab.ClientModels.CurrentGamesRequest::StatisticName
	String_t* ___StatisticName_3;
	// PlayFab.ClientModels.CollectionFilter PlayFab.ClientModels.CurrentGamesRequest::TagFilter
	CollectionFilter_t2867730642 * ___TagFilter_4;

public:
	inline static int32_t get_offset_of_BuildVersion_0() { return static_cast<int32_t>(offsetof(CurrentGamesRequest_t4114556668, ___BuildVersion_0)); }
	inline String_t* get_BuildVersion_0() const { return ___BuildVersion_0; }
	inline String_t** get_address_of_BuildVersion_0() { return &___BuildVersion_0; }
	inline void set_BuildVersion_0(String_t* value)
	{
		___BuildVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___BuildVersion_0), value);
	}

	inline static int32_t get_offset_of_GameMode_1() { return static_cast<int32_t>(offsetof(CurrentGamesRequest_t4114556668, ___GameMode_1)); }
	inline String_t* get_GameMode_1() const { return ___GameMode_1; }
	inline String_t** get_address_of_GameMode_1() { return &___GameMode_1; }
	inline void set_GameMode_1(String_t* value)
	{
		___GameMode_1 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_1), value);
	}

	inline static int32_t get_offset_of_Region_2() { return static_cast<int32_t>(offsetof(CurrentGamesRequest_t4114556668, ___Region_2)); }
	inline Nullable_1_t1625618012  get_Region_2() const { return ___Region_2; }
	inline Nullable_1_t1625618012 * get_address_of_Region_2() { return &___Region_2; }
	inline void set_Region_2(Nullable_1_t1625618012  value)
	{
		___Region_2 = value;
	}

	inline static int32_t get_offset_of_StatisticName_3() { return static_cast<int32_t>(offsetof(CurrentGamesRequest_t4114556668, ___StatisticName_3)); }
	inline String_t* get_StatisticName_3() const { return ___StatisticName_3; }
	inline String_t** get_address_of_StatisticName_3() { return &___StatisticName_3; }
	inline void set_StatisticName_3(String_t* value)
	{
		___StatisticName_3 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_3), value);
	}

	inline static int32_t get_offset_of_TagFilter_4() { return static_cast<int32_t>(offsetof(CurrentGamesRequest_t4114556668, ___TagFilter_4)); }
	inline CollectionFilter_t2867730642 * get_TagFilter_4() const { return ___TagFilter_4; }
	inline CollectionFilter_t2867730642 ** get_address_of_TagFilter_4() { return &___TagFilter_4; }
	inline void set_TagFilter_4(CollectionFilter_t2867730642 * value)
	{
		___TagFilter_4 = value;
		Il2CppCodeGenWriteBarrier((&___TagFilter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTGAMESREQUEST_T4114556668_H
#ifndef EXECUTECLOUDSCRIPTREQUEST_T1025182705_H
#define EXECUTECLOUDSCRIPTREQUEST_T1025182705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.ExecuteCloudScriptRequest
struct  ExecuteCloudScriptRequest_t1025182705  : public PlayFabRequestCommon_t229319069
{
public:
	// System.String PlayFab.ClientModels.ExecuteCloudScriptRequest::FunctionName
	String_t* ___FunctionName_0;
	// System.Object PlayFab.ClientModels.ExecuteCloudScriptRequest::FunctionParameter
	RuntimeObject * ___FunctionParameter_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.ExecuteCloudScriptRequest::GeneratePlayStreamEvent
	Nullable_1_t1819850047  ___GeneratePlayStreamEvent_2;
	// System.Nullable`1<PlayFab.ClientModels.CloudScriptRevisionOption> PlayFab.ClientModels.ExecuteCloudScriptRequest::RevisionSelection
	Nullable_1_t3216647819  ___RevisionSelection_3;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.ExecuteCloudScriptRequest::SpecificRevision
	Nullable_1_t378540539  ___SpecificRevision_4;

public:
	inline static int32_t get_offset_of_FunctionName_0() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptRequest_t1025182705, ___FunctionName_0)); }
	inline String_t* get_FunctionName_0() const { return ___FunctionName_0; }
	inline String_t** get_address_of_FunctionName_0() { return &___FunctionName_0; }
	inline void set_FunctionName_0(String_t* value)
	{
		___FunctionName_0 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionName_0), value);
	}

	inline static int32_t get_offset_of_FunctionParameter_1() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptRequest_t1025182705, ___FunctionParameter_1)); }
	inline RuntimeObject * get_FunctionParameter_1() const { return ___FunctionParameter_1; }
	inline RuntimeObject ** get_address_of_FunctionParameter_1() { return &___FunctionParameter_1; }
	inline void set_FunctionParameter_1(RuntimeObject * value)
	{
		___FunctionParameter_1 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionParameter_1), value);
	}

	inline static int32_t get_offset_of_GeneratePlayStreamEvent_2() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptRequest_t1025182705, ___GeneratePlayStreamEvent_2)); }
	inline Nullable_1_t1819850047  get_GeneratePlayStreamEvent_2() const { return ___GeneratePlayStreamEvent_2; }
	inline Nullable_1_t1819850047 * get_address_of_GeneratePlayStreamEvent_2() { return &___GeneratePlayStreamEvent_2; }
	inline void set_GeneratePlayStreamEvent_2(Nullable_1_t1819850047  value)
	{
		___GeneratePlayStreamEvent_2 = value;
	}

	inline static int32_t get_offset_of_RevisionSelection_3() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptRequest_t1025182705, ___RevisionSelection_3)); }
	inline Nullable_1_t3216647819  get_RevisionSelection_3() const { return ___RevisionSelection_3; }
	inline Nullable_1_t3216647819 * get_address_of_RevisionSelection_3() { return &___RevisionSelection_3; }
	inline void set_RevisionSelection_3(Nullable_1_t3216647819  value)
	{
		___RevisionSelection_3 = value;
	}

	inline static int32_t get_offset_of_SpecificRevision_4() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptRequest_t1025182705, ___SpecificRevision_4)); }
	inline Nullable_1_t378540539  get_SpecificRevision_4() const { return ___SpecificRevision_4; }
	inline Nullable_1_t378540539 * get_address_of_SpecificRevision_4() { return &___SpecificRevision_4; }
	inline void set_SpecificRevision_4(Nullable_1_t378540539  value)
	{
		___SpecificRevision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTECLOUDSCRIPTREQUEST_T1025182705_H
#ifndef GETPLAYERTRADESREQUEST_T3439472798_H
#define GETPLAYERTRADESREQUEST_T3439472798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetPlayerTradesRequest
struct  GetPlayerTradesRequest_t3439472798  : public PlayFabRequestCommon_t229319069
{
public:
	// System.Nullable`1<PlayFab.ClientModels.TradeStatus> PlayFab.ClientModels.GetPlayerTradesRequest::StatusFilter
	Nullable_1_t968051236  ___StatusFilter_0;

public:
	inline static int32_t get_offset_of_StatusFilter_0() { return static_cast<int32_t>(offsetof(GetPlayerTradesRequest_t3439472798, ___StatusFilter_0)); }
	inline Nullable_1_t968051236  get_StatusFilter_0() const { return ___StatusFilter_0; }
	inline Nullable_1_t968051236 * get_address_of_StatusFilter_0() { return &___StatusFilter_0; }
	inline void set_StatusFilter_0(Nullable_1_t968051236  value)
	{
		___StatusFilter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPLAYERTRADESREQUEST_T3439472798_H
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
#ifndef ENTITYTOKENRESPONSE_T1814794135_H
#define ENTITYTOKENRESPONSE_T1814794135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.EntityTokenResponse
struct  EntityTokenResponse_t1814794135  : public PlayFabResultCommon_t3469603827
{
public:
	// PlayFab.ClientModels.EntityKey PlayFab.ClientModels.EntityTokenResponse::Entity
	EntityKey_t1759282107 * ___Entity_2;
	// System.String PlayFab.ClientModels.EntityTokenResponse::EntityToken
	String_t* ___EntityToken_3;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.EntityTokenResponse::TokenExpiration
	Nullable_1_t1166124571  ___TokenExpiration_4;

public:
	inline static int32_t get_offset_of_Entity_2() { return static_cast<int32_t>(offsetof(EntityTokenResponse_t1814794135, ___Entity_2)); }
	inline EntityKey_t1759282107 * get_Entity_2() const { return ___Entity_2; }
	inline EntityKey_t1759282107 ** get_address_of_Entity_2() { return &___Entity_2; }
	inline void set_Entity_2(EntityKey_t1759282107 * value)
	{
		___Entity_2 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_2), value);
	}

	inline static int32_t get_offset_of_EntityToken_3() { return static_cast<int32_t>(offsetof(EntityTokenResponse_t1814794135, ___EntityToken_3)); }
	inline String_t* get_EntityToken_3() const { return ___EntityToken_3; }
	inline String_t** get_address_of_EntityToken_3() { return &___EntityToken_3; }
	inline void set_EntityToken_3(String_t* value)
	{
		___EntityToken_3 = value;
		Il2CppCodeGenWriteBarrier((&___EntityToken_3), value);
	}

	inline static int32_t get_offset_of_TokenExpiration_4() { return static_cast<int32_t>(offsetof(EntityTokenResponse_t1814794135, ___TokenExpiration_4)); }
	inline Nullable_1_t1166124571  get_TokenExpiration_4() const { return ___TokenExpiration_4; }
	inline Nullable_1_t1166124571 * get_address_of_TokenExpiration_4() { return &___TokenExpiration_4; }
	inline void set_TokenExpiration_4(Nullable_1_t1166124571  value)
	{
		___TokenExpiration_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTITYTOKENRESPONSE_T1814794135_H
#ifndef GAMEINFO_T3936627083_H
#define GAMEINFO_T3936627083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GameInfo
struct  GameInfo_t3936627083  : public RuntimeObject
{
public:
	// System.String PlayFab.ClientModels.GameInfo::BuildVersion
	String_t* ___BuildVersion_0;
	// System.String PlayFab.ClientModels.GameInfo::GameMode
	String_t* ___GameMode_1;
	// System.String PlayFab.ClientModels.GameInfo::GameServerData
	String_t* ___GameServerData_2;
	// System.Nullable`1<PlayFab.ClientModels.GameInstanceState> PlayFab.ClientModels.GameInfo::GameServerStateEnum
	Nullable_1_t3934190750  ___GameServerStateEnum_3;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.GameInfo::LastHeartbeat
	Nullable_1_t1166124571  ___LastHeartbeat_4;
	// System.String PlayFab.ClientModels.GameInfo::LobbyID
	String_t* ___LobbyID_5;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GameInfo::MaxPlayers
	Nullable_1_t378540539  ___MaxPlayers_6;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GameInfo::PlayerUserIds
	List_1_t3319525431 * ___PlayerUserIds_7;
	// System.Nullable`1<PlayFab.ClientModels.Region> PlayFab.ClientModels.GameInfo::Region
	Nullable_1_t1625618012  ___Region_8;
	// System.UInt32 PlayFab.ClientModels.GameInfo::RunTime
	uint32_t ___RunTime_9;
	// System.String PlayFab.ClientModels.GameInfo::ServerHostname
	String_t* ___ServerHostname_10;
	// System.String PlayFab.ClientModels.GameInfo::ServerIPV4Address
	String_t* ___ServerIPV4Address_11;
	// System.String PlayFab.ClientModels.GameInfo::ServerIPV6Address
	String_t* ___ServerIPV6Address_12;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GameInfo::ServerPort
	Nullable_1_t378540539  ___ServerPort_13;
	// System.String PlayFab.ClientModels.GameInfo::ServerPublicDNSName
	String_t* ___ServerPublicDNSName_14;
	// System.String PlayFab.ClientModels.GameInfo::StatisticName
	String_t* ___StatisticName_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GameInfo::Tags
	Dictionary_2_t1632706988 * ___Tags_16;

public:
	inline static int32_t get_offset_of_BuildVersion_0() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___BuildVersion_0)); }
	inline String_t* get_BuildVersion_0() const { return ___BuildVersion_0; }
	inline String_t** get_address_of_BuildVersion_0() { return &___BuildVersion_0; }
	inline void set_BuildVersion_0(String_t* value)
	{
		___BuildVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___BuildVersion_0), value);
	}

	inline static int32_t get_offset_of_GameMode_1() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___GameMode_1)); }
	inline String_t* get_GameMode_1() const { return ___GameMode_1; }
	inline String_t** get_address_of_GameMode_1() { return &___GameMode_1; }
	inline void set_GameMode_1(String_t* value)
	{
		___GameMode_1 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_1), value);
	}

	inline static int32_t get_offset_of_GameServerData_2() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___GameServerData_2)); }
	inline String_t* get_GameServerData_2() const { return ___GameServerData_2; }
	inline String_t** get_address_of_GameServerData_2() { return &___GameServerData_2; }
	inline void set_GameServerData_2(String_t* value)
	{
		___GameServerData_2 = value;
		Il2CppCodeGenWriteBarrier((&___GameServerData_2), value);
	}

	inline static int32_t get_offset_of_GameServerStateEnum_3() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___GameServerStateEnum_3)); }
	inline Nullable_1_t3934190750  get_GameServerStateEnum_3() const { return ___GameServerStateEnum_3; }
	inline Nullable_1_t3934190750 * get_address_of_GameServerStateEnum_3() { return &___GameServerStateEnum_3; }
	inline void set_GameServerStateEnum_3(Nullable_1_t3934190750  value)
	{
		___GameServerStateEnum_3 = value;
	}

	inline static int32_t get_offset_of_LastHeartbeat_4() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___LastHeartbeat_4)); }
	inline Nullable_1_t1166124571  get_LastHeartbeat_4() const { return ___LastHeartbeat_4; }
	inline Nullable_1_t1166124571 * get_address_of_LastHeartbeat_4() { return &___LastHeartbeat_4; }
	inline void set_LastHeartbeat_4(Nullable_1_t1166124571  value)
	{
		___LastHeartbeat_4 = value;
	}

	inline static int32_t get_offset_of_LobbyID_5() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___LobbyID_5)); }
	inline String_t* get_LobbyID_5() const { return ___LobbyID_5; }
	inline String_t** get_address_of_LobbyID_5() { return &___LobbyID_5; }
	inline void set_LobbyID_5(String_t* value)
	{
		___LobbyID_5 = value;
		Il2CppCodeGenWriteBarrier((&___LobbyID_5), value);
	}

	inline static int32_t get_offset_of_MaxPlayers_6() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___MaxPlayers_6)); }
	inline Nullable_1_t378540539  get_MaxPlayers_6() const { return ___MaxPlayers_6; }
	inline Nullable_1_t378540539 * get_address_of_MaxPlayers_6() { return &___MaxPlayers_6; }
	inline void set_MaxPlayers_6(Nullable_1_t378540539  value)
	{
		___MaxPlayers_6 = value;
	}

	inline static int32_t get_offset_of_PlayerUserIds_7() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___PlayerUserIds_7)); }
	inline List_1_t3319525431 * get_PlayerUserIds_7() const { return ___PlayerUserIds_7; }
	inline List_1_t3319525431 ** get_address_of_PlayerUserIds_7() { return &___PlayerUserIds_7; }
	inline void set_PlayerUserIds_7(List_1_t3319525431 * value)
	{
		___PlayerUserIds_7 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerUserIds_7), value);
	}

	inline static int32_t get_offset_of_Region_8() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___Region_8)); }
	inline Nullable_1_t1625618012  get_Region_8() const { return ___Region_8; }
	inline Nullable_1_t1625618012 * get_address_of_Region_8() { return &___Region_8; }
	inline void set_Region_8(Nullable_1_t1625618012  value)
	{
		___Region_8 = value;
	}

	inline static int32_t get_offset_of_RunTime_9() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___RunTime_9)); }
	inline uint32_t get_RunTime_9() const { return ___RunTime_9; }
	inline uint32_t* get_address_of_RunTime_9() { return &___RunTime_9; }
	inline void set_RunTime_9(uint32_t value)
	{
		___RunTime_9 = value;
	}

	inline static int32_t get_offset_of_ServerHostname_10() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___ServerHostname_10)); }
	inline String_t* get_ServerHostname_10() const { return ___ServerHostname_10; }
	inline String_t** get_address_of_ServerHostname_10() { return &___ServerHostname_10; }
	inline void set_ServerHostname_10(String_t* value)
	{
		___ServerHostname_10 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostname_10), value);
	}

	inline static int32_t get_offset_of_ServerIPV4Address_11() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___ServerIPV4Address_11)); }
	inline String_t* get_ServerIPV4Address_11() const { return ___ServerIPV4Address_11; }
	inline String_t** get_address_of_ServerIPV4Address_11() { return &___ServerIPV4Address_11; }
	inline void set_ServerIPV4Address_11(String_t* value)
	{
		___ServerIPV4Address_11 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV4Address_11), value);
	}

	inline static int32_t get_offset_of_ServerIPV6Address_12() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___ServerIPV6Address_12)); }
	inline String_t* get_ServerIPV6Address_12() const { return ___ServerIPV6Address_12; }
	inline String_t** get_address_of_ServerIPV6Address_12() { return &___ServerIPV6Address_12; }
	inline void set_ServerIPV6Address_12(String_t* value)
	{
		___ServerIPV6Address_12 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV6Address_12), value);
	}

	inline static int32_t get_offset_of_ServerPort_13() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___ServerPort_13)); }
	inline Nullable_1_t378540539  get_ServerPort_13() const { return ___ServerPort_13; }
	inline Nullable_1_t378540539 * get_address_of_ServerPort_13() { return &___ServerPort_13; }
	inline void set_ServerPort_13(Nullable_1_t378540539  value)
	{
		___ServerPort_13 = value;
	}

	inline static int32_t get_offset_of_ServerPublicDNSName_14() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___ServerPublicDNSName_14)); }
	inline String_t* get_ServerPublicDNSName_14() const { return ___ServerPublicDNSName_14; }
	inline String_t** get_address_of_ServerPublicDNSName_14() { return &___ServerPublicDNSName_14; }
	inline void set_ServerPublicDNSName_14(String_t* value)
	{
		___ServerPublicDNSName_14 = value;
		Il2CppCodeGenWriteBarrier((&___ServerPublicDNSName_14), value);
	}

	inline static int32_t get_offset_of_StatisticName_15() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___StatisticName_15)); }
	inline String_t* get_StatisticName_15() const { return ___StatisticName_15; }
	inline String_t** get_address_of_StatisticName_15() { return &___StatisticName_15; }
	inline void set_StatisticName_15(String_t* value)
	{
		___StatisticName_15 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_15), value);
	}

	inline static int32_t get_offset_of_Tags_16() { return static_cast<int32_t>(offsetof(GameInfo_t3936627083, ___Tags_16)); }
	inline Dictionary_2_t1632706988 * get_Tags_16() const { return ___Tags_16; }
	inline Dictionary_2_t1632706988 ** get_address_of_Tags_16() { return &___Tags_16; }
	inline void set_Tags_16(Dictionary_2_t1632706988 * value)
	{
		___Tags_16 = value;
		Il2CppCodeGenWriteBarrier((&___Tags_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEINFO_T3936627083_H
#ifndef GETFRIENDLEADERBOARDAROUNDPLAYERRESULT_T2632334189_H
#define GETFRIENDLEADERBOARDAROUNDPLAYERRESULT_T2632334189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerResult
struct  GetFriendLeaderboardAroundPlayerResult_t2632334189  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PlayerLeaderboardEntry> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerResult::Leaderboard
	List_1_t3353752699 * ___Leaderboard_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerResult::NextReset
	Nullable_1_t1166124571  ___NextReset_3;
	// System.Int32 PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerResult::Version
	int32_t ___Version_4;

public:
	inline static int32_t get_offset_of_Leaderboard_2() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardAroundPlayerResult_t2632334189, ___Leaderboard_2)); }
	inline List_1_t3353752699 * get_Leaderboard_2() const { return ___Leaderboard_2; }
	inline List_1_t3353752699 ** get_address_of_Leaderboard_2() { return &___Leaderboard_2; }
	inline void set_Leaderboard_2(List_1_t3353752699 * value)
	{
		___Leaderboard_2 = value;
		Il2CppCodeGenWriteBarrier((&___Leaderboard_2), value);
	}

	inline static int32_t get_offset_of_NextReset_3() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardAroundPlayerResult_t2632334189, ___NextReset_3)); }
	inline Nullable_1_t1166124571  get_NextReset_3() const { return ___NextReset_3; }
	inline Nullable_1_t1166124571 * get_address_of_NextReset_3() { return &___NextReset_3; }
	inline void set_NextReset_3(Nullable_1_t1166124571  value)
	{
		___NextReset_3 = value;
	}

	inline static int32_t get_offset_of_Version_4() { return static_cast<int32_t>(offsetof(GetFriendLeaderboardAroundPlayerResult_t2632334189, ___Version_4)); }
	inline int32_t get_Version_4() const { return ___Version_4; }
	inline int32_t* get_address_of_Version_4() { return &___Version_4; }
	inline void set_Version_4(int32_t value)
	{
		___Version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFRIENDLEADERBOARDAROUNDPLAYERRESULT_T2632334189_H
#ifndef GETLEADERBOARDAROUNDPLAYERRESULT_T738025680_H
#define GETLEADERBOARDAROUNDPLAYERRESULT_T738025680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetLeaderboardAroundPlayerResult
struct  GetLeaderboardAroundPlayerResult_t738025680  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PlayerLeaderboardEntry> PlayFab.ClientModels.GetLeaderboardAroundPlayerResult::Leaderboard
	List_1_t3353752699 * ___Leaderboard_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.GetLeaderboardAroundPlayerResult::NextReset
	Nullable_1_t1166124571  ___NextReset_3;
	// System.Int32 PlayFab.ClientModels.GetLeaderboardAroundPlayerResult::Version
	int32_t ___Version_4;

public:
	inline static int32_t get_offset_of_Leaderboard_2() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundPlayerResult_t738025680, ___Leaderboard_2)); }
	inline List_1_t3353752699 * get_Leaderboard_2() const { return ___Leaderboard_2; }
	inline List_1_t3353752699 ** get_address_of_Leaderboard_2() { return &___Leaderboard_2; }
	inline void set_Leaderboard_2(List_1_t3353752699 * value)
	{
		___Leaderboard_2 = value;
		Il2CppCodeGenWriteBarrier((&___Leaderboard_2), value);
	}

	inline static int32_t get_offset_of_NextReset_3() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundPlayerResult_t738025680, ___NextReset_3)); }
	inline Nullable_1_t1166124571  get_NextReset_3() const { return ___NextReset_3; }
	inline Nullable_1_t1166124571 * get_address_of_NextReset_3() { return &___NextReset_3; }
	inline void set_NextReset_3(Nullable_1_t1166124571  value)
	{
		___NextReset_3 = value;
	}

	inline static int32_t get_offset_of_Version_4() { return static_cast<int32_t>(offsetof(GetLeaderboardAroundPlayerResult_t738025680, ___Version_4)); }
	inline int32_t get_Version_4() const { return ___Version_4; }
	inline int32_t* get_address_of_Version_4() { return &___Version_4; }
	inline void set_Version_4(int32_t value)
	{
		___Version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETLEADERBOARDAROUNDPLAYERRESULT_T738025680_H
#ifndef GETLEADERBOARDRESULT_T1593023908_H
#define GETLEADERBOARDRESULT_T1593023908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.ClientModels.GetLeaderboardResult
struct  GetLeaderboardResult_t1593023908  : public PlayFabResultCommon_t3469603827
{
public:
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PlayerLeaderboardEntry> PlayFab.ClientModels.GetLeaderboardResult::Leaderboard
	List_1_t3353752699 * ___Leaderboard_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.GetLeaderboardResult::NextReset
	Nullable_1_t1166124571  ___NextReset_3;
	// System.Int32 PlayFab.ClientModels.GetLeaderboardResult::Version
	int32_t ___Version_4;

public:
	inline static int32_t get_offset_of_Leaderboard_2() { return static_cast<int32_t>(offsetof(GetLeaderboardResult_t1593023908, ___Leaderboard_2)); }
	inline List_1_t3353752699 * get_Leaderboard_2() const { return ___Leaderboard_2; }
	inline List_1_t3353752699 ** get_address_of_Leaderboard_2() { return &___Leaderboard_2; }
	inline void set_Leaderboard_2(List_1_t3353752699 * value)
	{
		___Leaderboard_2 = value;
		Il2CppCodeGenWriteBarrier((&___Leaderboard_2), value);
	}

	inline static int32_t get_offset_of_NextReset_3() { return static_cast<int32_t>(offsetof(GetLeaderboardResult_t1593023908, ___NextReset_3)); }
	inline Nullable_1_t1166124571  get_NextReset_3() const { return ___NextReset_3; }
	inline Nullable_1_t1166124571 * get_address_of_NextReset_3() { return &___NextReset_3; }
	inline void set_NextReset_3(Nullable_1_t1166124571  value)
	{
		___NextReset_3 = value;
	}

	inline static int32_t get_offset_of_Version_4() { return static_cast<int32_t>(offsetof(GetLeaderboardResult_t1593023908, ___Version_4)); }
	inline int32_t get_Version_4() const { return ___Version_4; }
	inline int32_t* get_address_of_Version_4() { return &___Version_4; }
	inline void set_Version_4(int32_t value)
	{
		___Version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETLEADERBOARDRESULT_T1593023908_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3700 = { sizeof (AddUsernamePasswordRequest_t1867219871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3700[3] = 
{
	AddUsernamePasswordRequest_t1867219871::get_offset_of_Email_0(),
	AddUsernamePasswordRequest_t1867219871::get_offset_of_Password_1(),
	AddUsernamePasswordRequest_t1867219871::get_offset_of_Username_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3701 = { sizeof (AddUsernamePasswordResult_t1113447058), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3701[1] = 
{
	AddUsernamePasswordResult_t1113447058::get_offset_of_Username_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3702 = { sizeof (AddUserVirtualCurrencyRequest_t774176691), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3702[2] = 
{
	AddUserVirtualCurrencyRequest_t774176691::get_offset_of_Amount_0(),
	AddUserVirtualCurrencyRequest_t774176691::get_offset_of_VirtualCurrency_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3703 = { sizeof (AndroidDevicePushNotificationRegistrationRequest_t3081612946), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3703[3] = 
{
	AndroidDevicePushNotificationRegistrationRequest_t3081612946::get_offset_of_ConfirmationMessage_0(),
	AndroidDevicePushNotificationRegistrationRequest_t3081612946::get_offset_of_DeviceToken_1(),
	AndroidDevicePushNotificationRegistrationRequest_t3081612946::get_offset_of_SendPushNotificationConfirmation_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3704 = { sizeof (AndroidDevicePushNotificationRegistrationResult_t2366557797), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3705 = { sizeof (AttributeInstallRequest_t215954694), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3705[2] = 
{
	AttributeInstallRequest_t215954694::get_offset_of_Adid_0(),
	AttributeInstallRequest_t215954694::get_offset_of_Idfa_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3706 = { sizeof (AttributeInstallResult_t2699584835), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3707 = { sizeof (CancelTradeRequest_t3627140333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3707[1] = 
{
	CancelTradeRequest_t3627140333::get_offset_of_TradeId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3708 = { sizeof (CancelTradeResponse_t3574647456), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3708[1] = 
{
	CancelTradeResponse_t3574647456::get_offset_of_Trade_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3709 = { sizeof (CartItem_t669385532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3709[8] = 
{
	CartItem_t669385532::get_offset_of_Description_0(),
	CartItem_t669385532::get_offset_of_DisplayName_1(),
	CartItem_t669385532::get_offset_of_ItemClass_2(),
	CartItem_t669385532::get_offset_of_ItemId_3(),
	CartItem_t669385532::get_offset_of_ItemInstanceId_4(),
	CartItem_t669385532::get_offset_of_RealCurrencyPrices_5(),
	CartItem_t669385532::get_offset_of_VCAmount_6(),
	CartItem_t669385532::get_offset_of_VirtualCurrencyPrices_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3710 = { sizeof (CatalogItem_t1093714244), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3710[18] = 
{
	CatalogItem_t1093714244::get_offset_of_Bundle_0(),
	CatalogItem_t1093714244::get_offset_of_CanBecomeCharacter_1(),
	CatalogItem_t1093714244::get_offset_of_CatalogVersion_2(),
	CatalogItem_t1093714244::get_offset_of_Consumable_3(),
	CatalogItem_t1093714244::get_offset_of_Container_4(),
	CatalogItem_t1093714244::get_offset_of_CustomData_5(),
	CatalogItem_t1093714244::get_offset_of_Description_6(),
	CatalogItem_t1093714244::get_offset_of_DisplayName_7(),
	CatalogItem_t1093714244::get_offset_of_InitialLimitedEditionCount_8(),
	CatalogItem_t1093714244::get_offset_of_IsLimitedEdition_9(),
	CatalogItem_t1093714244::get_offset_of_IsStackable_10(),
	CatalogItem_t1093714244::get_offset_of_IsTradable_11(),
	CatalogItem_t1093714244::get_offset_of_ItemClass_12(),
	CatalogItem_t1093714244::get_offset_of_ItemId_13(),
	CatalogItem_t1093714244::get_offset_of_ItemImageUrl_14(),
	CatalogItem_t1093714244::get_offset_of_RealCurrencyPrices_15(),
	CatalogItem_t1093714244::get_offset_of_Tags_16(),
	CatalogItem_t1093714244::get_offset_of_VirtualCurrencyPrices_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3711 = { sizeof (CatalogItemBundleInfo_t862654583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3711[3] = 
{
	CatalogItemBundleInfo_t862654583::get_offset_of_BundledItems_0(),
	CatalogItemBundleInfo_t862654583::get_offset_of_BundledResultTables_1(),
	CatalogItemBundleInfo_t862654583::get_offset_of_BundledVirtualCurrencies_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3712 = { sizeof (CatalogItemConsumableInfo_t2482552979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3712[3] = 
{
	CatalogItemConsumableInfo_t2482552979::get_offset_of_UsageCount_0(),
	CatalogItemConsumableInfo_t2482552979::get_offset_of_UsagePeriod_1(),
	CatalogItemConsumableInfo_t2482552979::get_offset_of_UsagePeriodGroup_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3713 = { sizeof (CatalogItemContainerInfo_t582357744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3713[4] = 
{
	CatalogItemContainerInfo_t582357744::get_offset_of_ItemContents_0(),
	CatalogItemContainerInfo_t582357744::get_offset_of_KeyItemId_1(),
	CatalogItemContainerInfo_t582357744::get_offset_of_ResultTableContents_2(),
	CatalogItemContainerInfo_t582357744::get_offset_of_VirtualCurrencyContents_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3714 = { sizeof (CharacterInventory_t4118608229), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3714[2] = 
{
	CharacterInventory_t4118608229::get_offset_of_CharacterId_0(),
	CharacterInventory_t4118608229::get_offset_of_Inventory_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3715 = { sizeof (CharacterLeaderboardEntry_t2539400198), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3715[7] = 
{
	CharacterLeaderboardEntry_t2539400198::get_offset_of_CharacterId_0(),
	CharacterLeaderboardEntry_t2539400198::get_offset_of_CharacterName_1(),
	CharacterLeaderboardEntry_t2539400198::get_offset_of_CharacterType_2(),
	CharacterLeaderboardEntry_t2539400198::get_offset_of_DisplayName_3(),
	CharacterLeaderboardEntry_t2539400198::get_offset_of_PlayFabId_4(),
	CharacterLeaderboardEntry_t2539400198::get_offset_of_Position_5(),
	CharacterLeaderboardEntry_t2539400198::get_offset_of_StatValue_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3716 = { sizeof (CharacterResult_t3693779156), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3716[3] = 
{
	CharacterResult_t3693779156::get_offset_of_CharacterId_2(),
	CharacterResult_t3693779156::get_offset_of_CharacterName_3(),
	CharacterResult_t3693779156::get_offset_of_CharacterType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3717 = { sizeof (CloudScriptRevisionOption_t1494085737)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3717[4] = 
{
	CloudScriptRevisionOption_t1494085737::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3718 = { sizeof (CollectionFilter_t2867730642), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3718[2] = 
{
	CollectionFilter_t2867730642::get_offset_of_Excludes_0(),
	CollectionFilter_t2867730642::get_offset_of_Includes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3719 = { sizeof (ConfirmPurchaseRequest_t2468501779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3719[1] = 
{
	ConfirmPurchaseRequest_t2468501779::get_offset_of_OrderId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3720 = { sizeof (ConfirmPurchaseResult_t1016176588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3720[3] = 
{
	ConfirmPurchaseResult_t1016176588::get_offset_of_Items_2(),
	ConfirmPurchaseResult_t1016176588::get_offset_of_OrderId_3(),
	ConfirmPurchaseResult_t1016176588::get_offset_of_PurchaseDate_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3721 = { sizeof (ConsumeItemRequest_t1258774420), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3721[3] = 
{
	ConsumeItemRequest_t1258774420::get_offset_of_CharacterId_0(),
	ConsumeItemRequest_t1258774420::get_offset_of_ConsumeCount_1(),
	ConsumeItemRequest_t1258774420::get_offset_of_ItemInstanceId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3722 = { sizeof (ConsumeItemResult_t4190837579), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3722[2] = 
{
	ConsumeItemResult_t4190837579::get_offset_of_ItemInstanceId_2(),
	ConsumeItemResult_t4190837579::get_offset_of_RemainingUses_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3723 = { sizeof (ConsumeXboxEntitlementsRequest_t2980421321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3723[2] = 
{
	ConsumeXboxEntitlementsRequest_t2980421321::get_offset_of_CatalogVersion_0(),
	ConsumeXboxEntitlementsRequest_t2980421321::get_offset_of_XboxToken_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3724 = { sizeof (ConsumeXboxEntitlementsResult_t1200602624), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3724[1] = 
{
	ConsumeXboxEntitlementsResult_t1200602624::get_offset_of_Items_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3725 = { sizeof (ContactEmailInfoModel_t3940837230), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3725[3] = 
{
	ContactEmailInfoModel_t3940837230::get_offset_of_EmailAddress_0(),
	ContactEmailInfoModel_t3940837230::get_offset_of_Name_1(),
	ContactEmailInfoModel_t3940837230::get_offset_of_VerificationStatus_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3726 = { sizeof (Container_Dictionary_String_String_t1472750163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3726[1] = 
{
	Container_Dictionary_String_String_t1472750163::get_offset_of_Data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3727 = { sizeof (ContinentCode_t2955100920)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3727[8] = 
{
	ContinentCode_t2955100920::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3728 = { sizeof (CountryCode_t1744650337)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3728[250] = 
{
	CountryCode_t1744650337::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3729 = { sizeof (CreateSharedGroupRequest_t266174694), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3729[1] = 
{
	CreateSharedGroupRequest_t266174694::get_offset_of_SharedGroupId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3730 = { sizeof (CreateSharedGroupResult_t3931530866), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3730[1] = 
{
	CreateSharedGroupResult_t3931530866::get_offset_of_SharedGroupId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3731 = { sizeof (Currency_t3041833584)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3731[163] = 
{
	Currency_t3041833584::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3732 = { sizeof (CurrentGamesRequest_t4114556668), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3732[5] = 
{
	CurrentGamesRequest_t4114556668::get_offset_of_BuildVersion_0(),
	CurrentGamesRequest_t4114556668::get_offset_of_GameMode_1(),
	CurrentGamesRequest_t4114556668::get_offset_of_Region_2(),
	CurrentGamesRequest_t4114556668::get_offset_of_StatisticName_3(),
	CurrentGamesRequest_t4114556668::get_offset_of_TagFilter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3733 = { sizeof (CurrentGamesResult_t1599588651), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3733[3] = 
{
	CurrentGamesResult_t1599588651::get_offset_of_GameCount_2(),
	CurrentGamesResult_t1599588651::get_offset_of_Games_3(),
	CurrentGamesResult_t1599588651::get_offset_of_PlayerCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3734 = { sizeof (DeviceInfoRequest_t3905803023), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3734[1] = 
{
	DeviceInfoRequest_t3905803023::get_offset_of_Info_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3735 = { sizeof (EmailVerificationStatus_t99910467)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3735[4] = 
{
	EmailVerificationStatus_t99910467::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3736 = { sizeof (EmptyResponse_t674599539), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3737 = { sizeof (EntityKey_t1759282107), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3737[2] = 
{
	EntityKey_t1759282107::get_offset_of_Id_0(),
	EntityKey_t1759282107::get_offset_of_Type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3738 = { sizeof (EntityTokenResponse_t1814794135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3738[3] = 
{
	EntityTokenResponse_t1814794135::get_offset_of_Entity_2(),
	EntityTokenResponse_t1814794135::get_offset_of_EntityToken_3(),
	EntityTokenResponse_t1814794135::get_offset_of_TokenExpiration_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3739 = { sizeof (ExecuteCloudScriptRequest_t1025182705), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3739[5] = 
{
	ExecuteCloudScriptRequest_t1025182705::get_offset_of_FunctionName_0(),
	ExecuteCloudScriptRequest_t1025182705::get_offset_of_FunctionParameter_1(),
	ExecuteCloudScriptRequest_t1025182705::get_offset_of_GeneratePlayStreamEvent_2(),
	ExecuteCloudScriptRequest_t1025182705::get_offset_of_RevisionSelection_3(),
	ExecuteCloudScriptRequest_t1025182705::get_offset_of_SpecificRevision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3740 = { sizeof (ExecuteCloudScriptResult_t216533998), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3740[12] = 
{
	ExecuteCloudScriptResult_t216533998::get_offset_of_APIRequestsIssued_2(),
	ExecuteCloudScriptResult_t216533998::get_offset_of_Error_3(),
	ExecuteCloudScriptResult_t216533998::get_offset_of_ExecutionTimeSeconds_4(),
	ExecuteCloudScriptResult_t216533998::get_offset_of_FunctionName_5(),
	ExecuteCloudScriptResult_t216533998::get_offset_of_FunctionResult_6(),
	ExecuteCloudScriptResult_t216533998::get_offset_of_FunctionResultTooLarge_7(),
	ExecuteCloudScriptResult_t216533998::get_offset_of_HttpRequestsIssued_8(),
	ExecuteCloudScriptResult_t216533998::get_offset_of_Logs_9(),
	ExecuteCloudScriptResult_t216533998::get_offset_of_LogsTooLarge_10(),
	ExecuteCloudScriptResult_t216533998::get_offset_of_MemoryConsumedBytes_11(),
	ExecuteCloudScriptResult_t216533998::get_offset_of_ProcessorTimeSeconds_12(),
	ExecuteCloudScriptResult_t216533998::get_offset_of_Revision_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3741 = { sizeof (FacebookInstantGamesPlayFabIdPair_t1100012869), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3741[2] = 
{
	FacebookInstantGamesPlayFabIdPair_t1100012869::get_offset_of_FacebookInstantGamesId_0(),
	FacebookInstantGamesPlayFabIdPair_t1100012869::get_offset_of_PlayFabId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3742 = { sizeof (FacebookPlayFabIdPair_t3976567460), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3742[2] = 
{
	FacebookPlayFabIdPair_t3976567460::get_offset_of_FacebookId_0(),
	FacebookPlayFabIdPair_t3976567460::get_offset_of_PlayFabId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3743 = { sizeof (FriendInfo_t1153859267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3743[11] = 
{
	FriendInfo_t1153859267::get_offset_of_CurrentMatchmakerLobbyId_0(),
	FriendInfo_t1153859267::get_offset_of_FacebookInfo_1(),
	FriendInfo_t1153859267::get_offset_of_FriendPlayFabId_2(),
	FriendInfo_t1153859267::get_offset_of_GameCenterInfo_3(),
	FriendInfo_t1153859267::get_offset_of_Profile_4(),
	FriendInfo_t1153859267::get_offset_of_PSNInfo_5(),
	FriendInfo_t1153859267::get_offset_of_SteamInfo_6(),
	FriendInfo_t1153859267::get_offset_of_Tags_7(),
	FriendInfo_t1153859267::get_offset_of_TitleDisplayName_8(),
	FriendInfo_t1153859267::get_offset_of_Username_9(),
	FriendInfo_t1153859267::get_offset_of_XboxInfo_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3744 = { sizeof (GameCenterPlayFabIdPair_t3172392643), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3744[2] = 
{
	GameCenterPlayFabIdPair_t3172392643::get_offset_of_GameCenterId_0(),
	GameCenterPlayFabIdPair_t3172392643::get_offset_of_PlayFabId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3745 = { sizeof (GameInfo_t3936627083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3745[17] = 
{
	GameInfo_t3936627083::get_offset_of_BuildVersion_0(),
	GameInfo_t3936627083::get_offset_of_GameMode_1(),
	GameInfo_t3936627083::get_offset_of_GameServerData_2(),
	GameInfo_t3936627083::get_offset_of_GameServerStateEnum_3(),
	GameInfo_t3936627083::get_offset_of_LastHeartbeat_4(),
	GameInfo_t3936627083::get_offset_of_LobbyID_5(),
	GameInfo_t3936627083::get_offset_of_MaxPlayers_6(),
	GameInfo_t3936627083::get_offset_of_PlayerUserIds_7(),
	GameInfo_t3936627083::get_offset_of_Region_8(),
	GameInfo_t3936627083::get_offset_of_RunTime_9(),
	GameInfo_t3936627083::get_offset_of_ServerHostname_10(),
	GameInfo_t3936627083::get_offset_of_ServerIPV4Address_11(),
	GameInfo_t3936627083::get_offset_of_ServerIPV6Address_12(),
	GameInfo_t3936627083::get_offset_of_ServerPort_13(),
	GameInfo_t3936627083::get_offset_of_ServerPublicDNSName_14(),
	GameInfo_t3936627083::get_offset_of_StatisticName_15(),
	GameInfo_t3936627083::get_offset_of_Tags_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3746 = { sizeof (GameInstanceState_t2211628668)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3746[3] = 
{
	GameInstanceState_t2211628668::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3747 = { sizeof (GameServerRegionsRequest_t3425196055), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3747[2] = 
{
	GameServerRegionsRequest_t3425196055::get_offset_of_BuildVersion_0(),
	GameServerRegionsRequest_t3425196055::get_offset_of_TitleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3748 = { sizeof (GameServerRegionsResult_t2030324960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3748[1] = 
{
	GameServerRegionsResult_t2030324960::get_offset_of_Regions_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3749 = { sizeof (GenericPlayFabIdPair_t2375399579), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3749[2] = 
{
	GenericPlayFabIdPair_t2375399579::get_offset_of_GenericId_0(),
	GenericPlayFabIdPair_t2375399579::get_offset_of_PlayFabId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3750 = { sizeof (GenericServiceId_t3400130533), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3750[2] = 
{
	GenericServiceId_t3400130533::get_offset_of_ServiceName_0(),
	GenericServiceId_t3400130533::get_offset_of_UserId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3751 = { sizeof (GetAccountInfoRequest_t231147466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3751[4] = 
{
	GetAccountInfoRequest_t231147466::get_offset_of_Email_0(),
	GetAccountInfoRequest_t231147466::get_offset_of_PlayFabId_1(),
	GetAccountInfoRequest_t231147466::get_offset_of_TitleDisplayName_2(),
	GetAccountInfoRequest_t231147466::get_offset_of_Username_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3752 = { sizeof (GetAccountInfoResult_t659556297), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3752[1] = 
{
	GetAccountInfoResult_t659556297::get_offset_of_AccountInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3753 = { sizeof (GetCatalogItemsRequest_t3816966401), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3753[1] = 
{
	GetCatalogItemsRequest_t3816966401::get_offset_of_CatalogVersion_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3754 = { sizeof (GetCatalogItemsResult_t1488911543), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3754[1] = 
{
	GetCatalogItemsResult_t1488911543::get_offset_of_Catalog_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3755 = { sizeof (GetCharacterDataRequest_t2125716442), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3755[4] = 
{
	GetCharacterDataRequest_t2125716442::get_offset_of_CharacterId_0(),
	GetCharacterDataRequest_t2125716442::get_offset_of_IfChangedFromDataVersion_1(),
	GetCharacterDataRequest_t2125716442::get_offset_of_Keys_2(),
	GetCharacterDataRequest_t2125716442::get_offset_of_PlayFabId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3756 = { sizeof (GetCharacterDataResult_t3645025181), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3756[3] = 
{
	GetCharacterDataResult_t3645025181::get_offset_of_CharacterId_2(),
	GetCharacterDataResult_t3645025181::get_offset_of_Data_3(),
	GetCharacterDataResult_t3645025181::get_offset_of_DataVersion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3757 = { sizeof (GetCharacterInventoryRequest_t1947452908), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3757[2] = 
{
	GetCharacterInventoryRequest_t1947452908::get_offset_of_CatalogVersion_0(),
	GetCharacterInventoryRequest_t1947452908::get_offset_of_CharacterId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3758 = { sizeof (GetCharacterInventoryResult_t3947237696), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3758[4] = 
{
	GetCharacterInventoryResult_t3947237696::get_offset_of_CharacterId_2(),
	GetCharacterInventoryResult_t3947237696::get_offset_of_Inventory_3(),
	GetCharacterInventoryResult_t3947237696::get_offset_of_VirtualCurrency_4(),
	GetCharacterInventoryResult_t3947237696::get_offset_of_VirtualCurrencyRechargeTimes_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3759 = { sizeof (GetCharacterLeaderboardRequest_t3930104902), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3759[4] = 
{
	GetCharacterLeaderboardRequest_t3930104902::get_offset_of_CharacterType_0(),
	GetCharacterLeaderboardRequest_t3930104902::get_offset_of_MaxResultsCount_1(),
	GetCharacterLeaderboardRequest_t3930104902::get_offset_of_StartPosition_2(),
	GetCharacterLeaderboardRequest_t3930104902::get_offset_of_StatisticName_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3760 = { sizeof (GetCharacterLeaderboardResult_t416954792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3760[1] = 
{
	GetCharacterLeaderboardResult_t416954792::get_offset_of_Leaderboard_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3761 = { sizeof (GetCharacterStatisticsRequest_t736995317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3761[1] = 
{
	GetCharacterStatisticsRequest_t736995317::get_offset_of_CharacterId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3762 = { sizeof (GetCharacterStatisticsResult_t306489328), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3762[1] = 
{
	GetCharacterStatisticsResult_t306489328::get_offset_of_CharacterStatistics_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3763 = { sizeof (GetContentDownloadUrlRequest_t2270909012), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3763[3] = 
{
	GetContentDownloadUrlRequest_t2270909012::get_offset_of_HttpMethod_0(),
	GetContentDownloadUrlRequest_t2270909012::get_offset_of_Key_1(),
	GetContentDownloadUrlRequest_t2270909012::get_offset_of_ThruCDN_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3764 = { sizeof (GetContentDownloadUrlResult_t24643405), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3764[1] = 
{
	GetContentDownloadUrlResult_t24643405::get_offset_of_URL_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3765 = { sizeof (GetFriendLeaderboardAroundPlayerRequest_t2809382610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3765[8] = 
{
	GetFriendLeaderboardAroundPlayerRequest_t2809382610::get_offset_of_IncludeFacebookFriends_0(),
	GetFriendLeaderboardAroundPlayerRequest_t2809382610::get_offset_of_IncludeSteamFriends_1(),
	GetFriendLeaderboardAroundPlayerRequest_t2809382610::get_offset_of_MaxResultsCount_2(),
	GetFriendLeaderboardAroundPlayerRequest_t2809382610::get_offset_of_PlayFabId_3(),
	GetFriendLeaderboardAroundPlayerRequest_t2809382610::get_offset_of_ProfileConstraints_4(),
	GetFriendLeaderboardAroundPlayerRequest_t2809382610::get_offset_of_StatisticName_5(),
	GetFriendLeaderboardAroundPlayerRequest_t2809382610::get_offset_of_Version_6(),
	GetFriendLeaderboardAroundPlayerRequest_t2809382610::get_offset_of_XboxToken_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3766 = { sizeof (GetFriendLeaderboardAroundPlayerResult_t2632334189), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3766[3] = 
{
	GetFriendLeaderboardAroundPlayerResult_t2632334189::get_offset_of_Leaderboard_2(),
	GetFriendLeaderboardAroundPlayerResult_t2632334189::get_offset_of_NextReset_3(),
	GetFriendLeaderboardAroundPlayerResult_t2632334189::get_offset_of_Version_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3767 = { sizeof (GetFriendLeaderboardRequest_t548985863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3767[8] = 
{
	GetFriendLeaderboardRequest_t548985863::get_offset_of_IncludeFacebookFriends_0(),
	GetFriendLeaderboardRequest_t548985863::get_offset_of_IncludeSteamFriends_1(),
	GetFriendLeaderboardRequest_t548985863::get_offset_of_MaxResultsCount_2(),
	GetFriendLeaderboardRequest_t548985863::get_offset_of_ProfileConstraints_3(),
	GetFriendLeaderboardRequest_t548985863::get_offset_of_StartPosition_4(),
	GetFriendLeaderboardRequest_t548985863::get_offset_of_StatisticName_5(),
	GetFriendLeaderboardRequest_t548985863::get_offset_of_Version_6(),
	GetFriendLeaderboardRequest_t548985863::get_offset_of_XboxToken_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3768 = { sizeof (GetFriendsListRequest_t2544426151), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3768[4] = 
{
	GetFriendsListRequest_t2544426151::get_offset_of_IncludeFacebookFriends_0(),
	GetFriendsListRequest_t2544426151::get_offset_of_IncludeSteamFriends_1(),
	GetFriendsListRequest_t2544426151::get_offset_of_ProfileConstraints_2(),
	GetFriendsListRequest_t2544426151::get_offset_of_XboxToken_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3769 = { sizeof (GetFriendsListResult_t2972310698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3769[1] = 
{
	GetFriendsListResult_t2972310698::get_offset_of_Friends_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3770 = { sizeof (GetLeaderboardAroundCharacterRequest_t4072747985), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3770[4] = 
{
	GetLeaderboardAroundCharacterRequest_t4072747985::get_offset_of_CharacterId_0(),
	GetLeaderboardAroundCharacterRequest_t4072747985::get_offset_of_CharacterType_1(),
	GetLeaderboardAroundCharacterRequest_t4072747985::get_offset_of_MaxResultsCount_2(),
	GetLeaderboardAroundCharacterRequest_t4072747985::get_offset_of_StatisticName_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3771 = { sizeof (GetLeaderboardAroundCharacterResult_t2774851536), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3771[1] = 
{
	GetLeaderboardAroundCharacterResult_t2774851536::get_offset_of_Leaderboard_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3772 = { sizeof (GetLeaderboardAroundPlayerRequest_t1172201677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3772[5] = 
{
	GetLeaderboardAroundPlayerRequest_t1172201677::get_offset_of_MaxResultsCount_0(),
	GetLeaderboardAroundPlayerRequest_t1172201677::get_offset_of_PlayFabId_1(),
	GetLeaderboardAroundPlayerRequest_t1172201677::get_offset_of_ProfileConstraints_2(),
	GetLeaderboardAroundPlayerRequest_t1172201677::get_offset_of_StatisticName_3(),
	GetLeaderboardAroundPlayerRequest_t1172201677::get_offset_of_Version_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3773 = { sizeof (GetLeaderboardAroundPlayerResult_t738025680), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3773[3] = 
{
	GetLeaderboardAroundPlayerResult_t738025680::get_offset_of_Leaderboard_2(),
	GetLeaderboardAroundPlayerResult_t738025680::get_offset_of_NextReset_3(),
	GetLeaderboardAroundPlayerResult_t738025680::get_offset_of_Version_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3774 = { sizeof (GetLeaderboardForUsersCharactersRequest_t3811877747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3774[2] = 
{
	GetLeaderboardForUsersCharactersRequest_t3811877747::get_offset_of_MaxResultsCount_0(),
	GetLeaderboardForUsersCharactersRequest_t3811877747::get_offset_of_StatisticName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3775 = { sizeof (GetLeaderboardForUsersCharactersResult_t3341752334), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3775[1] = 
{
	GetLeaderboardForUsersCharactersResult_t3341752334::get_offset_of_Leaderboard_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3776 = { sizeof (GetLeaderboardRequest_t2393021863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3776[5] = 
{
	GetLeaderboardRequest_t2393021863::get_offset_of_MaxResultsCount_0(),
	GetLeaderboardRequest_t2393021863::get_offset_of_ProfileConstraints_1(),
	GetLeaderboardRequest_t2393021863::get_offset_of_StartPosition_2(),
	GetLeaderboardRequest_t2393021863::get_offset_of_StatisticName_3(),
	GetLeaderboardRequest_t2393021863::get_offset_of_Version_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3777 = { sizeof (GetLeaderboardResult_t1593023908), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3777[3] = 
{
	GetLeaderboardResult_t1593023908::get_offset_of_Leaderboard_2(),
	GetLeaderboardResult_t1593023908::get_offset_of_NextReset_3(),
	GetLeaderboardResult_t1593023908::get_offset_of_Version_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3778 = { sizeof (GetPaymentTokenRequest_t1987987818), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3778[1] = 
{
	GetPaymentTokenRequest_t1987987818::get_offset_of_TokenProvider_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3779 = { sizeof (GetPaymentTokenResult_t2244665520), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3779[2] = 
{
	GetPaymentTokenResult_t2244665520::get_offset_of_OrderId_2(),
	GetPaymentTokenResult_t2244665520::get_offset_of_ProviderToken_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3780 = { sizeof (GetPhotonAuthenticationTokenRequest_t702201970), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3780[1] = 
{
	GetPhotonAuthenticationTokenRequest_t702201970::get_offset_of_PhotonApplicationId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3781 = { sizeof (GetPhotonAuthenticationTokenResult_t890761391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3781[1] = 
{
	GetPhotonAuthenticationTokenResult_t890761391::get_offset_of_PhotonCustomAuthenticationToken_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3782 = { sizeof (GetPlayerCombinedInfoRequest_t3695404297), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3782[2] = 
{
	GetPlayerCombinedInfoRequest_t3695404297::get_offset_of_InfoRequestParameters_0(),
	GetPlayerCombinedInfoRequest_t3695404297::get_offset_of_PlayFabId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3783 = { sizeof (GetPlayerCombinedInfoRequestParams_t121265087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3783[15] = 
{
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_GetCharacterInventories_0(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_GetCharacterList_1(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_GetPlayerProfile_2(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_GetPlayerStatistics_3(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_GetTitleData_4(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_GetUserAccountInfo_5(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_GetUserData_6(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_GetUserInventory_7(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_GetUserReadOnlyData_8(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_GetUserVirtualCurrency_9(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_PlayerStatisticNames_10(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_ProfileConstraints_11(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_TitleDataKeys_12(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_UserDataKeys_13(),
	GetPlayerCombinedInfoRequestParams_t121265087::get_offset_of_UserReadOnlyDataKeys_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3784 = { sizeof (GetPlayerCombinedInfoResult_t1685921054), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3784[2] = 
{
	GetPlayerCombinedInfoResult_t1685921054::get_offset_of_InfoResultPayload_2(),
	GetPlayerCombinedInfoResult_t1685921054::get_offset_of_PlayFabId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3785 = { sizeof (GetPlayerCombinedInfoResultPayload_t2789378405), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3785[13] = 
{
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_AccountInfo_0(),
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_CharacterInventories_1(),
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_CharacterList_2(),
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_PlayerProfile_3(),
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_PlayerStatistics_4(),
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_TitleData_5(),
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_UserData_6(),
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_UserDataVersion_7(),
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_UserInventory_8(),
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_UserReadOnlyData_9(),
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_UserReadOnlyDataVersion_10(),
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_UserVirtualCurrency_11(),
	GetPlayerCombinedInfoResultPayload_t2789378405::get_offset_of_UserVirtualCurrencyRechargeTimes_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3786 = { sizeof (GetPlayerProfileRequest_t2569991826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3786[2] = 
{
	GetPlayerProfileRequest_t2569991826::get_offset_of_PlayFabId_0(),
	GetPlayerProfileRequest_t2569991826::get_offset_of_ProfileConstraints_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3787 = { sizeof (GetPlayerProfileResult_t3566978645), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3787[1] = 
{
	GetPlayerProfileResult_t3566978645::get_offset_of_PlayerProfile_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3788 = { sizeof (GetPlayerSegmentsRequest_t2589129559), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3789 = { sizeof (GetPlayerSegmentsResult_t4239216360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3789[1] = 
{
	GetPlayerSegmentsResult_t4239216360::get_offset_of_Segments_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3790 = { sizeof (GetPlayerStatisticsRequest_t4108574586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3790[2] = 
{
	GetPlayerStatisticsRequest_t4108574586::get_offset_of_StatisticNames_0(),
	GetPlayerStatisticsRequest_t4108574586::get_offset_of_StatisticNameVersions_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3791 = { sizeof (GetPlayerStatisticsResult_t133705579), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3791[1] = 
{
	GetPlayerStatisticsResult_t133705579::get_offset_of_Statistics_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3792 = { sizeof (GetPlayerStatisticVersionsRequest_t1890685024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3792[1] = 
{
	GetPlayerStatisticVersionsRequest_t1890685024::get_offset_of_StatisticName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3793 = { sizeof (GetPlayerStatisticVersionsResult_t1451790427), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3793[1] = 
{
	GetPlayerStatisticVersionsResult_t1451790427::get_offset_of_StatisticVersions_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3794 = { sizeof (GetPlayerTagsRequest_t2415734797), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3794[2] = 
{
	GetPlayerTagsRequest_t2415734797::get_offset_of_Namespace_0(),
	GetPlayerTagsRequest_t2415734797::get_offset_of_PlayFabId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3795 = { sizeof (GetPlayerTagsResult_t3544216249), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3795[2] = 
{
	GetPlayerTagsResult_t3544216249::get_offset_of_PlayFabId_2(),
	GetPlayerTagsResult_t3544216249::get_offset_of_Tags_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3796 = { sizeof (GetPlayerTradesRequest_t3439472798), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3796[1] = 
{
	GetPlayerTradesRequest_t3439472798::get_offset_of_StatusFilter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3797 = { sizeof (GetPlayerTradesResponse_t1415293971), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3797[2] = 
{
	GetPlayerTradesResponse_t1415293971::get_offset_of_AcceptedTrades_2(),
	GetPlayerTradesResponse_t1415293971::get_offset_of_OpenedTrades_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3798 = { sizeof (GetPlayFabIDsFromFacebookIDsRequest_t2574797800), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3798[1] = 
{
	GetPlayFabIDsFromFacebookIDsRequest_t2574797800::get_offset_of_FacebookIDs_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3799 = { sizeof (GetPlayFabIDsFromFacebookIDsResult_t1577679909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3799[1] = 
{
	GetPlayFabIDsFromFacebookIDsResult_t1577679909::get_offset_of_Data_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
