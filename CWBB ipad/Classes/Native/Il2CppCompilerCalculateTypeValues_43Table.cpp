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


// PlayFab.PlayStreamModels.APISettings
struct APISettings_t386763229;
// PlayFab.PlayStreamModels.ClientFocusChangePayload
struct ClientFocusChangePayload_t2346877824;
// PlayFab.PlayStreamModels.ClientSessionStartPayload
struct ClientSessionStartPayload_t3274456936;
// PlayFab.PlayStreamModels.EntityKey
struct EntityKey_t1354083966;
// PlayFab.PlayStreamModels.EntityLineage
struct EntityLineage_t1359769518;
// PlayFab.PlayStreamModels.EventLocation
struct EventLocation_t168363587;
// PlayFab.PlayStreamModels.ExecuteCloudScriptResult
struct ExecuteCloudScriptResult_t1291136388;
// PlayFab.PlayStreamModels.LeaderboardSource
struct LeaderboardSource_t3161314919;
// PlayFab.PlayStreamModels.NameId
struct NameId_t1096998722;
// PlayFab.PlayStreamModels.NameIdentifier
struct NameIdentifier_t3894807572;
// PlayFab.PlayStreamModels.PlayerProfile
struct PlayerProfile_t2381417705;
// PlayFab.PlayStreamModels.ScriptExecutionError
struct ScriptExecutionError_t2372349938;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.CartItem>
struct List_1_t748271486;
// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.CouponGrantedInventoryItem>
struct List_1_t1001903271;
// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.LogStatement>
struct List_1_t4088008609;
// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.Region>
struct List_1_t4271778298;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
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
#ifndef ENTITYLINEAGE_T1359769518_H
#define ENTITYLINEAGE_T1359769518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.EntityLineage
struct  EntityLineage_t1359769518  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.EntityLineage::CharacterId
	String_t* ___CharacterId_0;
	// System.String PlayFab.PlayStreamModels.EntityLineage::GroupId
	String_t* ___GroupId_1;
	// System.String PlayFab.PlayStreamModels.EntityLineage::MasterPlayerAccountId
	String_t* ___MasterPlayerAccountId_2;
	// System.String PlayFab.PlayStreamModels.EntityLineage::NamespaceId
	String_t* ___NamespaceId_3;
	// System.String PlayFab.PlayStreamModels.EntityLineage::TitleId
	String_t* ___TitleId_4;
	// System.String PlayFab.PlayStreamModels.EntityLineage::TitlePlayerAccountId
	String_t* ___TitlePlayerAccountId_5;

public:
	inline static int32_t get_offset_of_CharacterId_0() { return static_cast<int32_t>(offsetof(EntityLineage_t1359769518, ___CharacterId_0)); }
	inline String_t* get_CharacterId_0() const { return ___CharacterId_0; }
	inline String_t** get_address_of_CharacterId_0() { return &___CharacterId_0; }
	inline void set_CharacterId_0(String_t* value)
	{
		___CharacterId_0 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterId_0), value);
	}

	inline static int32_t get_offset_of_GroupId_1() { return static_cast<int32_t>(offsetof(EntityLineage_t1359769518, ___GroupId_1)); }
	inline String_t* get_GroupId_1() const { return ___GroupId_1; }
	inline String_t** get_address_of_GroupId_1() { return &___GroupId_1; }
	inline void set_GroupId_1(String_t* value)
	{
		___GroupId_1 = value;
		Il2CppCodeGenWriteBarrier((&___GroupId_1), value);
	}

	inline static int32_t get_offset_of_MasterPlayerAccountId_2() { return static_cast<int32_t>(offsetof(EntityLineage_t1359769518, ___MasterPlayerAccountId_2)); }
	inline String_t* get_MasterPlayerAccountId_2() const { return ___MasterPlayerAccountId_2; }
	inline String_t** get_address_of_MasterPlayerAccountId_2() { return &___MasterPlayerAccountId_2; }
	inline void set_MasterPlayerAccountId_2(String_t* value)
	{
		___MasterPlayerAccountId_2 = value;
		Il2CppCodeGenWriteBarrier((&___MasterPlayerAccountId_2), value);
	}

	inline static int32_t get_offset_of_NamespaceId_3() { return static_cast<int32_t>(offsetof(EntityLineage_t1359769518, ___NamespaceId_3)); }
	inline String_t* get_NamespaceId_3() const { return ___NamespaceId_3; }
	inline String_t** get_address_of_NamespaceId_3() { return &___NamespaceId_3; }
	inline void set_NamespaceId_3(String_t* value)
	{
		___NamespaceId_3 = value;
		Il2CppCodeGenWriteBarrier((&___NamespaceId_3), value);
	}

	inline static int32_t get_offset_of_TitleId_4() { return static_cast<int32_t>(offsetof(EntityLineage_t1359769518, ___TitleId_4)); }
	inline String_t* get_TitleId_4() const { return ___TitleId_4; }
	inline String_t** get_address_of_TitleId_4() { return &___TitleId_4; }
	inline void set_TitleId_4(String_t* value)
	{
		___TitleId_4 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_4), value);
	}

	inline static int32_t get_offset_of_TitlePlayerAccountId_5() { return static_cast<int32_t>(offsetof(EntityLineage_t1359769518, ___TitlePlayerAccountId_5)); }
	inline String_t* get_TitlePlayerAccountId_5() const { return ___TitlePlayerAccountId_5; }
	inline String_t** get_address_of_TitlePlayerAccountId_5() { return &___TitlePlayerAccountId_5; }
	inline void set_TitlePlayerAccountId_5(String_t* value)
	{
		___TitlePlayerAccountId_5 = value;
		Il2CppCodeGenWriteBarrier((&___TitlePlayerAccountId_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTITYLINEAGE_T1359769518_H
#ifndef LOGSTATEMENT_T2615933867_H
#define LOGSTATEMENT_T2615933867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.LogStatement
struct  LogStatement_t2615933867  : public RuntimeObject
{
public:
	// System.Object PlayFab.PlayStreamModels.LogStatement::Data
	RuntimeObject * ___Data_0;
	// System.String PlayFab.PlayStreamModels.LogStatement::Level
	String_t* ___Level_1;
	// System.String PlayFab.PlayStreamModels.LogStatement::Message
	String_t* ___Message_2;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(LogStatement_t2615933867, ___Data_0)); }
	inline RuntimeObject * get_Data_0() const { return ___Data_0; }
	inline RuntimeObject ** get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(RuntimeObject * value)
	{
		___Data_0 = value;
		Il2CppCodeGenWriteBarrier((&___Data_0), value);
	}

	inline static int32_t get_offset_of_Level_1() { return static_cast<int32_t>(offsetof(LogStatement_t2615933867, ___Level_1)); }
	inline String_t* get_Level_1() const { return ___Level_1; }
	inline String_t** get_address_of_Level_1() { return &___Level_1; }
	inline void set_Level_1(String_t* value)
	{
		___Level_1 = value;
		Il2CppCodeGenWriteBarrier((&___Level_1), value);
	}

	inline static int32_t get_offset_of_Message_2() { return static_cast<int32_t>(offsetof(LogStatement_t2615933867, ___Message_2)); }
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
#endif // LOGSTATEMENT_T2615933867_H
#ifndef MEMBER_T2056686911_H
#define MEMBER_T2056686911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.Member
struct  Member_t2056686911  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.Member::EntityId
	String_t* ___EntityId_0;
	// System.String PlayFab.PlayStreamModels.Member::EntityType
	String_t* ___EntityType_1;

public:
	inline static int32_t get_offset_of_EntityId_0() { return static_cast<int32_t>(offsetof(Member_t2056686911, ___EntityId_0)); }
	inline String_t* get_EntityId_0() const { return ___EntityId_0; }
	inline String_t** get_address_of_EntityId_0() { return &___EntityId_0; }
	inline void set_EntityId_0(String_t* value)
	{
		___EntityId_0 = value;
		Il2CppCodeGenWriteBarrier((&___EntityId_0), value);
	}

	inline static int32_t get_offset_of_EntityType_1() { return static_cast<int32_t>(offsetof(Member_t2056686911, ___EntityType_1)); }
	inline String_t* get_EntityType_1() const { return ___EntityType_1; }
	inline String_t** get_address_of_EntityType_1() { return &___EntityType_1; }
	inline void set_EntityType_1(String_t* value)
	{
		___EntityType_1 = value;
		Il2CppCodeGenWriteBarrier((&___EntityType_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBER_T2056686911_H
#ifndef ROLEPROPERTYVALUES_T1466286987_H
#define ROLEPROPERTYVALUES_T1466286987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.RolePropertyValues
struct  RolePropertyValues_t1466286987  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.RolePropertyValues::RoleName
	String_t* ___RoleName_0;

public:
	inline static int32_t get_offset_of_RoleName_0() { return static_cast<int32_t>(offsetof(RolePropertyValues_t1466286987, ___RoleName_0)); }
	inline String_t* get_RoleName_0() const { return ___RoleName_0; }
	inline String_t** get_address_of_RoleName_0() { return &___RoleName_0; }
	inline void set_RoleName_0(String_t* value)
	{
		___RoleName_0 = value;
		Il2CppCodeGenWriteBarrier((&___RoleName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROLEPROPERTYVALUES_T1466286987_H
#ifndef SCRIPTEXECUTIONERROR_T2372349938_H
#define SCRIPTEXECUTIONERROR_T2372349938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.ScriptExecutionError
struct  ScriptExecutionError_t2372349938  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.ScriptExecutionError::Error
	String_t* ___Error_0;
	// System.String PlayFab.PlayStreamModels.ScriptExecutionError::Message
	String_t* ___Message_1;
	// System.String PlayFab.PlayStreamModels.ScriptExecutionError::StackTrace
	String_t* ___StackTrace_2;

public:
	inline static int32_t get_offset_of_Error_0() { return static_cast<int32_t>(offsetof(ScriptExecutionError_t2372349938, ___Error_0)); }
	inline String_t* get_Error_0() const { return ___Error_0; }
	inline String_t** get_address_of_Error_0() { return &___Error_0; }
	inline void set_Error_0(String_t* value)
	{
		___Error_0 = value;
		Il2CppCodeGenWriteBarrier((&___Error_0), value);
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(ScriptExecutionError_t2372349938, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((&___Message_1), value);
	}

	inline static int32_t get_offset_of_StackTrace_2() { return static_cast<int32_t>(offsetof(ScriptExecutionError_t2372349938, ___StackTrace_2)); }
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
#endif // SCRIPTEXECUTIONERROR_T2372349938_H
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
#ifndef ALERTLEVEL_T1880627373_H
#define ALERTLEVEL_T1880627373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.AlertLevel
struct  AlertLevel_t1880627373 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.AlertLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertLevel_t1880627373, ___value___1)); }
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
#endif // ALERTLEVEL_T1880627373_H
#ifndef ALERTSTATES_T1591939942_H
#define ALERTSTATES_T1591939942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.AlertStates
struct  AlertStates_t1591939942 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.AlertStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertStates_t1591939942, ___value___1)); }
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
#endif // ALERTSTATES_T1591939942_H
#ifndef CURRENCY_T2828537844_H
#define CURRENCY_T2828537844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.Currency
struct  Currency_t2828537844 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.Currency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Currency_t2828537844, ___value___1)); }
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
#endif // CURRENCY_T2828537844_H
#ifndef EMAILTEMPLATETYPE_T3825967695_H
#define EMAILTEMPLATETYPE_T3825967695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.EmailTemplateType
struct  EmailTemplateType_t3825967695 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.EmailTemplateType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EmailTemplateType_t3825967695, ___value___1)); }
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
#endif // EMAILTEMPLATETYPE_T3825967695_H
#ifndef EXECUTECLOUDSCRIPTRESULT_T1291136388_H
#define EXECUTECLOUDSCRIPTRESULT_T1291136388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.ExecuteCloudScriptResult
struct  ExecuteCloudScriptResult_t1291136388  : public RuntimeObject
{
public:
	// System.Int32 PlayFab.PlayStreamModels.ExecuteCloudScriptResult::APIRequestsIssued
	int32_t ___APIRequestsIssued_0;
	// PlayFab.PlayStreamModels.ScriptExecutionError PlayFab.PlayStreamModels.ExecuteCloudScriptResult::Error
	ScriptExecutionError_t2372349938 * ___Error_1;
	// System.Double PlayFab.PlayStreamModels.ExecuteCloudScriptResult::ExecutionTimeSeconds
	double ___ExecutionTimeSeconds_2;
	// System.String PlayFab.PlayStreamModels.ExecuteCloudScriptResult::FunctionName
	String_t* ___FunctionName_3;
	// System.Object PlayFab.PlayStreamModels.ExecuteCloudScriptResult::FunctionResult
	RuntimeObject * ___FunctionResult_4;
	// System.Nullable`1<System.Boolean> PlayFab.PlayStreamModels.ExecuteCloudScriptResult::FunctionResultTooLarge
	Nullable_1_t1819850047  ___FunctionResultTooLarge_5;
	// System.Int32 PlayFab.PlayStreamModels.ExecuteCloudScriptResult::HttpRequestsIssued
	int32_t ___HttpRequestsIssued_6;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.LogStatement> PlayFab.PlayStreamModels.ExecuteCloudScriptResult::Logs
	List_1_t4088008609 * ___Logs_7;
	// System.Nullable`1<System.Boolean> PlayFab.PlayStreamModels.ExecuteCloudScriptResult::LogsTooLarge
	Nullable_1_t1819850047  ___LogsTooLarge_8;
	// System.UInt32 PlayFab.PlayStreamModels.ExecuteCloudScriptResult::MemoryConsumedBytes
	uint32_t ___MemoryConsumedBytes_9;
	// System.Double PlayFab.PlayStreamModels.ExecuteCloudScriptResult::ProcessorTimeSeconds
	double ___ProcessorTimeSeconds_10;
	// System.Int32 PlayFab.PlayStreamModels.ExecuteCloudScriptResult::Revision
	int32_t ___Revision_11;

public:
	inline static int32_t get_offset_of_APIRequestsIssued_0() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1291136388, ___APIRequestsIssued_0)); }
	inline int32_t get_APIRequestsIssued_0() const { return ___APIRequestsIssued_0; }
	inline int32_t* get_address_of_APIRequestsIssued_0() { return &___APIRequestsIssued_0; }
	inline void set_APIRequestsIssued_0(int32_t value)
	{
		___APIRequestsIssued_0 = value;
	}

	inline static int32_t get_offset_of_Error_1() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1291136388, ___Error_1)); }
	inline ScriptExecutionError_t2372349938 * get_Error_1() const { return ___Error_1; }
	inline ScriptExecutionError_t2372349938 ** get_address_of_Error_1() { return &___Error_1; }
	inline void set_Error_1(ScriptExecutionError_t2372349938 * value)
	{
		___Error_1 = value;
		Il2CppCodeGenWriteBarrier((&___Error_1), value);
	}

	inline static int32_t get_offset_of_ExecutionTimeSeconds_2() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1291136388, ___ExecutionTimeSeconds_2)); }
	inline double get_ExecutionTimeSeconds_2() const { return ___ExecutionTimeSeconds_2; }
	inline double* get_address_of_ExecutionTimeSeconds_2() { return &___ExecutionTimeSeconds_2; }
	inline void set_ExecutionTimeSeconds_2(double value)
	{
		___ExecutionTimeSeconds_2 = value;
	}

	inline static int32_t get_offset_of_FunctionName_3() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1291136388, ___FunctionName_3)); }
	inline String_t* get_FunctionName_3() const { return ___FunctionName_3; }
	inline String_t** get_address_of_FunctionName_3() { return &___FunctionName_3; }
	inline void set_FunctionName_3(String_t* value)
	{
		___FunctionName_3 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionName_3), value);
	}

	inline static int32_t get_offset_of_FunctionResult_4() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1291136388, ___FunctionResult_4)); }
	inline RuntimeObject * get_FunctionResult_4() const { return ___FunctionResult_4; }
	inline RuntimeObject ** get_address_of_FunctionResult_4() { return &___FunctionResult_4; }
	inline void set_FunctionResult_4(RuntimeObject * value)
	{
		___FunctionResult_4 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionResult_4), value);
	}

	inline static int32_t get_offset_of_FunctionResultTooLarge_5() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1291136388, ___FunctionResultTooLarge_5)); }
	inline Nullable_1_t1819850047  get_FunctionResultTooLarge_5() const { return ___FunctionResultTooLarge_5; }
	inline Nullable_1_t1819850047 * get_address_of_FunctionResultTooLarge_5() { return &___FunctionResultTooLarge_5; }
	inline void set_FunctionResultTooLarge_5(Nullable_1_t1819850047  value)
	{
		___FunctionResultTooLarge_5 = value;
	}

	inline static int32_t get_offset_of_HttpRequestsIssued_6() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1291136388, ___HttpRequestsIssued_6)); }
	inline int32_t get_HttpRequestsIssued_6() const { return ___HttpRequestsIssued_6; }
	inline int32_t* get_address_of_HttpRequestsIssued_6() { return &___HttpRequestsIssued_6; }
	inline void set_HttpRequestsIssued_6(int32_t value)
	{
		___HttpRequestsIssued_6 = value;
	}

	inline static int32_t get_offset_of_Logs_7() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1291136388, ___Logs_7)); }
	inline List_1_t4088008609 * get_Logs_7() const { return ___Logs_7; }
	inline List_1_t4088008609 ** get_address_of_Logs_7() { return &___Logs_7; }
	inline void set_Logs_7(List_1_t4088008609 * value)
	{
		___Logs_7 = value;
		Il2CppCodeGenWriteBarrier((&___Logs_7), value);
	}

	inline static int32_t get_offset_of_LogsTooLarge_8() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1291136388, ___LogsTooLarge_8)); }
	inline Nullable_1_t1819850047  get_LogsTooLarge_8() const { return ___LogsTooLarge_8; }
	inline Nullable_1_t1819850047 * get_address_of_LogsTooLarge_8() { return &___LogsTooLarge_8; }
	inline void set_LogsTooLarge_8(Nullable_1_t1819850047  value)
	{
		___LogsTooLarge_8 = value;
	}

	inline static int32_t get_offset_of_MemoryConsumedBytes_9() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1291136388, ___MemoryConsumedBytes_9)); }
	inline uint32_t get_MemoryConsumedBytes_9() const { return ___MemoryConsumedBytes_9; }
	inline uint32_t* get_address_of_MemoryConsumedBytes_9() { return &___MemoryConsumedBytes_9; }
	inline void set_MemoryConsumedBytes_9(uint32_t value)
	{
		___MemoryConsumedBytes_9 = value;
	}

	inline static int32_t get_offset_of_ProcessorTimeSeconds_10() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1291136388, ___ProcessorTimeSeconds_10)); }
	inline double get_ProcessorTimeSeconds_10() const { return ___ProcessorTimeSeconds_10; }
	inline double* get_address_of_ProcessorTimeSeconds_10() { return &___ProcessorTimeSeconds_10; }
	inline void set_ProcessorTimeSeconds_10(double value)
	{
		___ProcessorTimeSeconds_10 = value;
	}

	inline static int32_t get_offset_of_Revision_11() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t1291136388, ___Revision_11)); }
	inline int32_t get_Revision_11() const { return ___Revision_11; }
	inline int32_t* get_address_of_Revision_11() { return &___Revision_11; }
	inline void set_Revision_11(int32_t value)
	{
		___Revision_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTECLOUDSCRIPTRESULT_T1291136388_H
#ifndef GAMESERVERHOSTSTOPREASON_T3015216228_H
#define GAMESERVERHOSTSTOPREASON_T3015216228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.GameServerHostStopReason
struct  GameServerHostStopReason_t3015216228 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.GameServerHostStopReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GameServerHostStopReason_t3015216228, ___value___1)); }
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
#endif // GAMESERVERHOSTSTOPREASON_T3015216228_H
#ifndef LEADERBOARDVERSIONCHANGEBEHAVIOR_T4005222408_H
#define LEADERBOARDVERSIONCHANGEBEHAVIOR_T4005222408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.LeaderboardVersionChangeBehavior
struct  LeaderboardVersionChangeBehavior_t4005222408 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.LeaderboardVersionChangeBehavior::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LeaderboardVersionChangeBehavior_t4005222408, ___value___1)); }
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
#endif // LEADERBOARDVERSIONCHANGEBEHAVIOR_T4005222408_H
#ifndef LOGINIDENTITYPROVIDER_T3942211838_H
#define LOGINIDENTITYPROVIDER_T3942211838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.LoginIdentityProvider
struct  LoginIdentityProvider_t3942211838 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.LoginIdentityProvider::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoginIdentityProvider_t3942211838, ___value___1)); }
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
#endif // LOGINIDENTITYPROVIDER_T3942211838_H
#ifndef METRICUNIT_T3076135131_H
#define METRICUNIT_T3076135131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.MetricUnit
struct  MetricUnit_t3076135131 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.MetricUnit::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MetricUnit_t3076135131, ___value___1)); }
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
#endif // METRICUNIT_T3076135131_H
#ifndef NEWSSTATUS_T3751416544_H
#define NEWSSTATUS_T3751416544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.NewsStatus
struct  NewsStatus_t3751416544 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.NewsStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NewsStatus_t3751416544, ___value___1)); }
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
#endif // NEWSSTATUS_T3751416544_H
#ifndef OPERATIONTYPES_T1133051618_H
#define OPERATIONTYPES_T1133051618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.OperationTypes
struct  OperationTypes_t1133051618 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.OperationTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperationTypes_t1133051618, ___value___1)); }
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
#endif // OPERATIONTYPES_T1133051618_H
#ifndef PASSWORDRESETINITIATIONSOURCE_T2270098848_H
#define PASSWORDRESETINITIATIONSOURCE_T2270098848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PasswordResetInitiationSource
struct  PasswordResetInitiationSource_t2270098848 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.PasswordResetInitiationSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PasswordResetInitiationSource_t2270098848, ___value___1)); }
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
#endif // PASSWORDRESETINITIATIONSOURCE_T2270098848_H
#ifndef PAYMENTTYPE_T277679054_H
#define PAYMENTTYPE_T277679054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PaymentType
struct  PaymentType_t277679054 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.PaymentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaymentType_t277679054, ___value___1)); }
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
#endif // PAYMENTTYPE_T277679054_H
#ifndef PHOTONSERVICESENUM_T483803521_H
#define PHOTONSERVICESENUM_T483803521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PhotonServicesEnum
struct  PhotonServicesEnum_t483803521 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.PhotonServicesEnum::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PhotonServicesEnum_t483803521, ___value___1)); }
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
#endif // PHOTONSERVICESENUM_T483803521_H
#ifndef PLAYERPROFILEPROPERTY_T3552443834_H
#define PLAYERPROFILEPROPERTY_T3552443834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerProfileProperty
struct  PlayerProfileProperty_t3552443834 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.PlayerProfileProperty::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayerProfileProperty_t3552443834, ___value___1)); }
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
#endif // PLAYERPROFILEPROPERTY_T3552443834_H
#ifndef PUSHNOTIFICATIONPLATFORM_T2034864691_H
#define PUSHNOTIFICATIONPLATFORM_T2034864691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PushNotificationPlatform
struct  PushNotificationPlatform_t2034864691 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.PushNotificationPlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PushNotificationPlatform_t2034864691, ___value___1)); }
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
#endif // PUSHNOTIFICATIONPLATFORM_T2034864691_H
#ifndef STATISTICAGGREGATIONMETHOD_T3049797182_H
#define STATISTICAGGREGATIONMETHOD_T3049797182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.StatisticAggregationMethod
struct  StatisticAggregationMethod_t3049797182 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.StatisticAggregationMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StatisticAggregationMethod_t3049797182, ___value___1)); }
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
#endif // STATISTICAGGREGATIONMETHOD_T3049797182_H
#ifndef STATISTICRESETINTERVALOPTION_T1702424925_H
#define STATISTICRESETINTERVALOPTION_T1702424925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.StatisticResetIntervalOption
struct  StatisticResetIntervalOption_t1702424925 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.StatisticResetIntervalOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StatisticResetIntervalOption_t1702424925, ___value___1)); }
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
#endif // STATISTICRESETINTERVALOPTION_T1702424925_H
#ifndef TASKINSTANCESTATUS_T3698534111_H
#define TASKINSTANCESTATUS_T3698534111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TaskInstanceStatus
struct  TaskInstanceStatus_t3698534111 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.TaskInstanceStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TaskInstanceStatus_t3698534111, ___value___1)); }
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
#endif // TASKINSTANCESTATUS_T3698534111_H
#ifndef TRANSACTIONSTATUS_T1727745413_H
#define TRANSACTIONSTATUS_T1727745413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TransactionStatus
struct  TransactionStatus_t1727745413 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.TransactionStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TransactionStatus_t1727745413, ___value___1)); }
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
#endif // TRANSACTIONSTATUS_T1727745413_H
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
#ifndef NULLABLE_1_T3603189455_H
#define NULLABLE_1_T3603189455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.AlertLevel>
struct  Nullable_1_t3603189455 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3603189455, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3603189455, ___has_value_1)); }
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
#endif // NULLABLE_1_T3603189455_H
#ifndef NULLABLE_1_T3314502024_H
#define NULLABLE_1_T3314502024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.AlertStates>
struct  Nullable_1_t3314502024 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3314502024, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3314502024, ___has_value_1)); }
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
#endif // NULLABLE_1_T3314502024_H
#ifndef NULLABLE_1_T256132630_H
#define NULLABLE_1_T256132630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.Currency>
struct  Nullable_1_t256132630 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t256132630, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t256132630, ___has_value_1)); }
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
#endif // NULLABLE_1_T256132630_H
#ifndef NULLABLE_1_T1253562481_H
#define NULLABLE_1_T1253562481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.EmailTemplateType>
struct  Nullable_1_t1253562481 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1253562481, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1253562481, ___has_value_1)); }
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
#endif // NULLABLE_1_T1253562481_H
#ifndef NULLABLE_1_T442811014_H
#define NULLABLE_1_T442811014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.GameServerHostStopReason>
struct  Nullable_1_t442811014 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t442811014, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t442811014, ___has_value_1)); }
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
#endif // NULLABLE_1_T442811014_H
#ifndef NULLABLE_1_T1432817194_H
#define NULLABLE_1_T1432817194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.LeaderboardVersionChangeBehavior>
struct  Nullable_1_t1432817194 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1432817194, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1432817194, ___has_value_1)); }
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
#endif // NULLABLE_1_T1432817194_H
#ifndef NULLABLE_1_T1369806624_H
#define NULLABLE_1_T1369806624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider>
struct  Nullable_1_t1369806624 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1369806624, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1369806624, ___has_value_1)); }
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
#endif // NULLABLE_1_T1369806624_H
#ifndef NULLABLE_1_T503729917_H
#define NULLABLE_1_T503729917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.MetricUnit>
struct  Nullable_1_t503729917 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t503729917, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t503729917, ___has_value_1)); }
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
#endif // NULLABLE_1_T503729917_H
#ifndef NULLABLE_1_T1179011330_H
#define NULLABLE_1_T1179011330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.NewsStatus>
struct  Nullable_1_t1179011330 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1179011330, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1179011330, ___has_value_1)); }
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
#endif // NULLABLE_1_T1179011330_H
#ifndef NULLABLE_1_T2855613700_H
#define NULLABLE_1_T2855613700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.OperationTypes>
struct  Nullable_1_t2855613700 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2855613700, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2855613700, ___has_value_1)); }
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
#endif // NULLABLE_1_T2855613700_H
#ifndef NULLABLE_1_T3992660930_H
#define NULLABLE_1_T3992660930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.PasswordResetInitiationSource>
struct  Nullable_1_t3992660930 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3992660930, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3992660930, ___has_value_1)); }
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
#endif // NULLABLE_1_T3992660930_H
#ifndef NULLABLE_1_T2000241136_H
#define NULLABLE_1_T2000241136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.PaymentType>
struct  Nullable_1_t2000241136 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2000241136, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2000241136, ___has_value_1)); }
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
#endif // NULLABLE_1_T2000241136_H
#ifndef NULLABLE_1_T2206365603_H
#define NULLABLE_1_T2206365603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.PhotonServicesEnum>
struct  Nullable_1_t2206365603 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2206365603, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2206365603, ___has_value_1)); }
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
#endif // NULLABLE_1_T2206365603_H
#ifndef NULLABLE_1_T980038620_H
#define NULLABLE_1_T980038620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.PlayerProfileProperty>
struct  Nullable_1_t980038620 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t980038620, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t980038620, ___has_value_1)); }
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
#endif // NULLABLE_1_T980038620_H
#ifndef NULLABLE_1_T3757426773_H
#define NULLABLE_1_T3757426773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.PushNotificationPlatform>
struct  Nullable_1_t3757426773 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3757426773, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3757426773, ___has_value_1)); }
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
#endif // NULLABLE_1_T3757426773_H
#ifndef NULLABLE_1_T477391968_H
#define NULLABLE_1_T477391968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.StatisticAggregationMethod>
struct  Nullable_1_t477391968 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t477391968, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t477391968, ___has_value_1)); }
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
#endif // NULLABLE_1_T477391968_H
#ifndef NULLABLE_1_T3424987007_H
#define NULLABLE_1_T3424987007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.StatisticResetIntervalOption>
struct  Nullable_1_t3424987007 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3424987007, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3424987007, ___has_value_1)); }
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
#endif // NULLABLE_1_T3424987007_H
#ifndef NULLABLE_1_T1126128897_H
#define NULLABLE_1_T1126128897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.TaskInstanceStatus>
struct  Nullable_1_t1126128897 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1126128897, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1126128897, ___has_value_1)); }
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
#endif // NULLABLE_1_T1126128897_H
#ifndef NULLABLE_1_T3450307495_H
#define NULLABLE_1_T3450307495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.TransactionStatus>
struct  Nullable_1_t3450307495 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3450307495, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3450307495, ___has_value_1)); }
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
#endif // NULLABLE_1_T3450307495_H
#ifndef FILESET_T4097587909_H
#define FILESET_T4097587909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.FileSet
struct  FileSet_t4097587909  : public RuntimeObject
{
public:
	// System.Int32 PlayFab.PlayStreamModels.FileSet::ByteCount
	int32_t ___ByteCount_0;
	// System.String PlayFab.PlayStreamModels.FileSet::Checksum
	String_t* ___Checksum_1;
	// System.String PlayFab.PlayStreamModels.FileSet::FileName
	String_t* ___FileName_2;
	// System.Nullable`1<PlayFab.PlayStreamModels.OperationTypes> PlayFab.PlayStreamModels.FileSet::Operation
	Nullable_1_t2855613700  ___Operation_3;
	// System.Nullable`1<System.Int32> PlayFab.PlayStreamModels.FileSet::PreviousByteCount
	Nullable_1_t378540539  ___PreviousByteCount_4;
	// System.String PlayFab.PlayStreamModels.FileSet::PreviousChecksum
	String_t* ___PreviousChecksum_5;
	// System.String PlayFab.PlayStreamModels.FileSet::PreviousStoragePath
	String_t* ___PreviousStoragePath_6;
	// System.String PlayFab.PlayStreamModels.FileSet::StoragePath
	String_t* ___StoragePath_7;

public:
	inline static int32_t get_offset_of_ByteCount_0() { return static_cast<int32_t>(offsetof(FileSet_t4097587909, ___ByteCount_0)); }
	inline int32_t get_ByteCount_0() const { return ___ByteCount_0; }
	inline int32_t* get_address_of_ByteCount_0() { return &___ByteCount_0; }
	inline void set_ByteCount_0(int32_t value)
	{
		___ByteCount_0 = value;
	}

	inline static int32_t get_offset_of_Checksum_1() { return static_cast<int32_t>(offsetof(FileSet_t4097587909, ___Checksum_1)); }
	inline String_t* get_Checksum_1() const { return ___Checksum_1; }
	inline String_t** get_address_of_Checksum_1() { return &___Checksum_1; }
	inline void set_Checksum_1(String_t* value)
	{
		___Checksum_1 = value;
		Il2CppCodeGenWriteBarrier((&___Checksum_1), value);
	}

	inline static int32_t get_offset_of_FileName_2() { return static_cast<int32_t>(offsetof(FileSet_t4097587909, ___FileName_2)); }
	inline String_t* get_FileName_2() const { return ___FileName_2; }
	inline String_t** get_address_of_FileName_2() { return &___FileName_2; }
	inline void set_FileName_2(String_t* value)
	{
		___FileName_2 = value;
		Il2CppCodeGenWriteBarrier((&___FileName_2), value);
	}

	inline static int32_t get_offset_of_Operation_3() { return static_cast<int32_t>(offsetof(FileSet_t4097587909, ___Operation_3)); }
	inline Nullable_1_t2855613700  get_Operation_3() const { return ___Operation_3; }
	inline Nullable_1_t2855613700 * get_address_of_Operation_3() { return &___Operation_3; }
	inline void set_Operation_3(Nullable_1_t2855613700  value)
	{
		___Operation_3 = value;
	}

	inline static int32_t get_offset_of_PreviousByteCount_4() { return static_cast<int32_t>(offsetof(FileSet_t4097587909, ___PreviousByteCount_4)); }
	inline Nullable_1_t378540539  get_PreviousByteCount_4() const { return ___PreviousByteCount_4; }
	inline Nullable_1_t378540539 * get_address_of_PreviousByteCount_4() { return &___PreviousByteCount_4; }
	inline void set_PreviousByteCount_4(Nullable_1_t378540539  value)
	{
		___PreviousByteCount_4 = value;
	}

	inline static int32_t get_offset_of_PreviousChecksum_5() { return static_cast<int32_t>(offsetof(FileSet_t4097587909, ___PreviousChecksum_5)); }
	inline String_t* get_PreviousChecksum_5() const { return ___PreviousChecksum_5; }
	inline String_t** get_address_of_PreviousChecksum_5() { return &___PreviousChecksum_5; }
	inline void set_PreviousChecksum_5(String_t* value)
	{
		___PreviousChecksum_5 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousChecksum_5), value);
	}

	inline static int32_t get_offset_of_PreviousStoragePath_6() { return static_cast<int32_t>(offsetof(FileSet_t4097587909, ___PreviousStoragePath_6)); }
	inline String_t* get_PreviousStoragePath_6() const { return ___PreviousStoragePath_6; }
	inline String_t** get_address_of_PreviousStoragePath_6() { return &___PreviousStoragePath_6; }
	inline void set_PreviousStoragePath_6(String_t* value)
	{
		___PreviousStoragePath_6 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousStoragePath_6), value);
	}

	inline static int32_t get_offset_of_StoragePath_7() { return static_cast<int32_t>(offsetof(FileSet_t4097587909, ___StoragePath_7)); }
	inline String_t* get_StoragePath_7() const { return ___StoragePath_7; }
	inline String_t** get_address_of_StoragePath_7() { return &___StoragePath_7; }
	inline void set_StoragePath_7(String_t* value)
	{
		___StoragePath_7 = value;
		Il2CppCodeGenWriteBarrier((&___StoragePath_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESET_T4097587909_H
#ifndef PLAYSTREAMEVENTBASE_T3913229166_H
#define PLAYSTREAMEVENTBASE_T3913229166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayStreamEventBase
struct  PlayStreamEventBase_t3913229166  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.PlayStreamEventBase::Source
	String_t* ___Source_0;
	// System.String PlayFab.PlayStreamModels.PlayStreamEventBase::EventId
	String_t* ___EventId_1;
	// System.String PlayFab.PlayStreamModels.PlayStreamEventBase::EntityId
	String_t* ___EntityId_2;
	// System.String PlayFab.PlayStreamModels.PlayStreamEventBase::EntityType
	String_t* ___EntityType_3;
	// System.String PlayFab.PlayStreamModels.PlayStreamEventBase::EventNamespace
	String_t* ___EventNamespace_4;
	// System.String PlayFab.PlayStreamModels.PlayStreamEventBase::EventName
	String_t* ___EventName_5;
	// System.DateTime PlayFab.PlayStreamModels.PlayStreamEventBase::Timestamp
	DateTime_t3738529785  ___Timestamp_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.PlayStreamModels.PlayStreamEventBase::CustomTags
	Dictionary_2_t1632706988 * ___CustomTags_7;
	// System.Collections.Generic.List`1<System.Object> PlayFab.PlayStreamModels.PlayStreamEventBase::History
	List_1_t257213610 * ___History_8;
	// System.Object PlayFab.PlayStreamModels.PlayStreamEventBase::Reserved
	RuntimeObject * ___Reserved_9;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t3913229166, ___Source_0)); }
	inline String_t* get_Source_0() const { return ___Source_0; }
	inline String_t** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(String_t* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier((&___Source_0), value);
	}

	inline static int32_t get_offset_of_EventId_1() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t3913229166, ___EventId_1)); }
	inline String_t* get_EventId_1() const { return ___EventId_1; }
	inline String_t** get_address_of_EventId_1() { return &___EventId_1; }
	inline void set_EventId_1(String_t* value)
	{
		___EventId_1 = value;
		Il2CppCodeGenWriteBarrier((&___EventId_1), value);
	}

	inline static int32_t get_offset_of_EntityId_2() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t3913229166, ___EntityId_2)); }
	inline String_t* get_EntityId_2() const { return ___EntityId_2; }
	inline String_t** get_address_of_EntityId_2() { return &___EntityId_2; }
	inline void set_EntityId_2(String_t* value)
	{
		___EntityId_2 = value;
		Il2CppCodeGenWriteBarrier((&___EntityId_2), value);
	}

	inline static int32_t get_offset_of_EntityType_3() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t3913229166, ___EntityType_3)); }
	inline String_t* get_EntityType_3() const { return ___EntityType_3; }
	inline String_t** get_address_of_EntityType_3() { return &___EntityType_3; }
	inline void set_EntityType_3(String_t* value)
	{
		___EntityType_3 = value;
		Il2CppCodeGenWriteBarrier((&___EntityType_3), value);
	}

	inline static int32_t get_offset_of_EventNamespace_4() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t3913229166, ___EventNamespace_4)); }
	inline String_t* get_EventNamespace_4() const { return ___EventNamespace_4; }
	inline String_t** get_address_of_EventNamespace_4() { return &___EventNamespace_4; }
	inline void set_EventNamespace_4(String_t* value)
	{
		___EventNamespace_4 = value;
		Il2CppCodeGenWriteBarrier((&___EventNamespace_4), value);
	}

	inline static int32_t get_offset_of_EventName_5() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t3913229166, ___EventName_5)); }
	inline String_t* get_EventName_5() const { return ___EventName_5; }
	inline String_t** get_address_of_EventName_5() { return &___EventName_5; }
	inline void set_EventName_5(String_t* value)
	{
		___EventName_5 = value;
		Il2CppCodeGenWriteBarrier((&___EventName_5), value);
	}

	inline static int32_t get_offset_of_Timestamp_6() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t3913229166, ___Timestamp_6)); }
	inline DateTime_t3738529785  get_Timestamp_6() const { return ___Timestamp_6; }
	inline DateTime_t3738529785 * get_address_of_Timestamp_6() { return &___Timestamp_6; }
	inline void set_Timestamp_6(DateTime_t3738529785  value)
	{
		___Timestamp_6 = value;
	}

	inline static int32_t get_offset_of_CustomTags_7() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t3913229166, ___CustomTags_7)); }
	inline Dictionary_2_t1632706988 * get_CustomTags_7() const { return ___CustomTags_7; }
	inline Dictionary_2_t1632706988 ** get_address_of_CustomTags_7() { return &___CustomTags_7; }
	inline void set_CustomTags_7(Dictionary_2_t1632706988 * value)
	{
		___CustomTags_7 = value;
		Il2CppCodeGenWriteBarrier((&___CustomTags_7), value);
	}

	inline static int32_t get_offset_of_History_8() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t3913229166, ___History_8)); }
	inline List_1_t257213610 * get_History_8() const { return ___History_8; }
	inline List_1_t257213610 ** get_address_of_History_8() { return &___History_8; }
	inline void set_History_8(List_1_t257213610 * value)
	{
		___History_8 = value;
		Il2CppCodeGenWriteBarrier((&___History_8), value);
	}

	inline static int32_t get_offset_of_Reserved_9() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t3913229166, ___Reserved_9)); }
	inline RuntimeObject * get_Reserved_9() const { return ___Reserved_9; }
	inline RuntimeObject ** get_address_of_Reserved_9() { return &___Reserved_9; }
	inline void set_Reserved_9(RuntimeObject * value)
	{
		___Reserved_9 = value;
		Il2CppCodeGenWriteBarrier((&___Reserved_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTREAMEVENTBASE_T3913229166_H
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
#ifndef AUTHTOKENVALIDATEDEVENTDATA_T4010884767_H
#define AUTHTOKENVALIDATEDEVENTDATA_T4010884767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.AuthTokenValidatedEventData
struct  AuthTokenValidatedEventData_t4010884767  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.AuthTokenValidatedEventData::EmailTemplateId
	String_t* ___EmailTemplateId_10;
	// System.String PlayFab.PlayStreamModels.AuthTokenValidatedEventData::TitleId
	String_t* ___TitleId_11;
	// System.String PlayFab.PlayStreamModels.AuthTokenValidatedEventData::Token
	String_t* ___Token_12;

public:
	inline static int32_t get_offset_of_EmailTemplateId_10() { return static_cast<int32_t>(offsetof(AuthTokenValidatedEventData_t4010884767, ___EmailTemplateId_10)); }
	inline String_t* get_EmailTemplateId_10() const { return ___EmailTemplateId_10; }
	inline String_t** get_address_of_EmailTemplateId_10() { return &___EmailTemplateId_10; }
	inline void set_EmailTemplateId_10(String_t* value)
	{
		___EmailTemplateId_10 = value;
		Il2CppCodeGenWriteBarrier((&___EmailTemplateId_10), value);
	}

	inline static int32_t get_offset_of_TitleId_11() { return static_cast<int32_t>(offsetof(AuthTokenValidatedEventData_t4010884767, ___TitleId_11)); }
	inline String_t* get_TitleId_11() const { return ___TitleId_11; }
	inline String_t** get_address_of_TitleId_11() { return &___TitleId_11; }
	inline void set_TitleId_11(String_t* value)
	{
		___TitleId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_11), value);
	}

	inline static int32_t get_offset_of_Token_12() { return static_cast<int32_t>(offsetof(AuthTokenValidatedEventData_t4010884767, ___Token_12)); }
	inline String_t* get_Token_12() const { return ___Token_12; }
	inline String_t** get_address_of_Token_12() { return &___Token_12; }
	inline void set_Token_12(String_t* value)
	{
		___Token_12 = value;
		Il2CppCodeGenWriteBarrier((&___Token_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHTOKENVALIDATEDEVENTDATA_T4010884767_H
#ifndef CHARACTERCREATEDEVENTDATA_T1738514807_H
#define CHARACTERCREATEDEVENTDATA_T1738514807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.CharacterCreatedEventData
struct  CharacterCreatedEventData_t1738514807  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.CharacterCreatedEventData::CharacterName
	String_t* ___CharacterName_10;
	// System.DateTime PlayFab.PlayStreamModels.CharacterCreatedEventData::Created
	DateTime_t3738529785  ___Created_11;
	// System.String PlayFab.PlayStreamModels.CharacterCreatedEventData::PlayerId
	String_t* ___PlayerId_12;
	// System.String PlayFab.PlayStreamModels.CharacterCreatedEventData::TitleId
	String_t* ___TitleId_13;

public:
	inline static int32_t get_offset_of_CharacterName_10() { return static_cast<int32_t>(offsetof(CharacterCreatedEventData_t1738514807, ___CharacterName_10)); }
	inline String_t* get_CharacterName_10() const { return ___CharacterName_10; }
	inline String_t** get_address_of_CharacterName_10() { return &___CharacterName_10; }
	inline void set_CharacterName_10(String_t* value)
	{
		___CharacterName_10 = value;
		Il2CppCodeGenWriteBarrier((&___CharacterName_10), value);
	}

	inline static int32_t get_offset_of_Created_11() { return static_cast<int32_t>(offsetof(CharacterCreatedEventData_t1738514807, ___Created_11)); }
	inline DateTime_t3738529785  get_Created_11() const { return ___Created_11; }
	inline DateTime_t3738529785 * get_address_of_Created_11() { return &___Created_11; }
	inline void set_Created_11(DateTime_t3738529785  value)
	{
		___Created_11 = value;
	}

	inline static int32_t get_offset_of_PlayerId_12() { return static_cast<int32_t>(offsetof(CharacterCreatedEventData_t1738514807, ___PlayerId_12)); }
	inline String_t* get_PlayerId_12() const { return ___PlayerId_12; }
	inline String_t** get_address_of_PlayerId_12() { return &___PlayerId_12; }
	inline void set_PlayerId_12(String_t* value)
	{
		___PlayerId_12 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerId_12), value);
	}

	inline static int32_t get_offset_of_TitleId_13() { return static_cast<int32_t>(offsetof(CharacterCreatedEventData_t1738514807, ___TitleId_13)); }
	inline String_t* get_TitleId_13() const { return ___TitleId_13; }
	inline String_t** get_address_of_TitleId_13() { return &___TitleId_13; }
	inline void set_TitleId_13(String_t* value)
	{
		___TitleId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCREATEDEVENTDATA_T1738514807_H
#ifndef CHARACTERINVENTORYITEMADDEDEVENTDATA_T2213025775_H
#define CHARACTERINVENTORYITEMADDEDEVENTDATA_T2213025775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData
struct  CharacterInventoryItemAddedEventData_t2213025775  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData::Annotation
	String_t* ___Annotation_10;
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData::BundleContents
	List_1_t3319525431 * ___BundleContents_11;
	// System.String PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData::CatalogVersion
	String_t* ___CatalogVersion_12;
	// System.String PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData::Class
	String_t* ___Class_13;
	// System.String PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData::CouponCode
	String_t* ___CouponCode_14;
	// System.String PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData::DisplayName
	String_t* ___DisplayName_15;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData::Expiration
	Nullable_1_t1166124571  ___Expiration_16;
	// System.String PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData::InstanceId
	String_t* ___InstanceId_17;
	// System.String PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData::ItemId
	String_t* ___ItemId_18;
	// System.String PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData::PlayerId
	String_t* ___PlayerId_19;
	// System.Nullable`1<System.UInt32> PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData::RemainingUses
	Nullable_1_t4282624060  ___RemainingUses_20;
	// System.String PlayFab.PlayStreamModels.CharacterInventoryItemAddedEventData::TitleId
	String_t* ___TitleId_21;

public:
	inline static int32_t get_offset_of_Annotation_10() { return static_cast<int32_t>(offsetof(CharacterInventoryItemAddedEventData_t2213025775, ___Annotation_10)); }
	inline String_t* get_Annotation_10() const { return ___Annotation_10; }
	inline String_t** get_address_of_Annotation_10() { return &___Annotation_10; }
	inline void set_Annotation_10(String_t* value)
	{
		___Annotation_10 = value;
		Il2CppCodeGenWriteBarrier((&___Annotation_10), value);
	}

	inline static int32_t get_offset_of_BundleContents_11() { return static_cast<int32_t>(offsetof(CharacterInventoryItemAddedEventData_t2213025775, ___BundleContents_11)); }
	inline List_1_t3319525431 * get_BundleContents_11() const { return ___BundleContents_11; }
	inline List_1_t3319525431 ** get_address_of_BundleContents_11() { return &___BundleContents_11; }
	inline void set_BundleContents_11(List_1_t3319525431 * value)
	{
		___BundleContents_11 = value;
		Il2CppCodeGenWriteBarrier((&___BundleContents_11), value);
	}

	inline static int32_t get_offset_of_CatalogVersion_12() { return static_cast<int32_t>(offsetof(CharacterInventoryItemAddedEventData_t2213025775, ___CatalogVersion_12)); }
	inline String_t* get_CatalogVersion_12() const { return ___CatalogVersion_12; }
	inline String_t** get_address_of_CatalogVersion_12() { return &___CatalogVersion_12; }
	inline void set_CatalogVersion_12(String_t* value)
	{
		___CatalogVersion_12 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_12), value);
	}

	inline static int32_t get_offset_of_Class_13() { return static_cast<int32_t>(offsetof(CharacterInventoryItemAddedEventData_t2213025775, ___Class_13)); }
	inline String_t* get_Class_13() const { return ___Class_13; }
	inline String_t** get_address_of_Class_13() { return &___Class_13; }
	inline void set_Class_13(String_t* value)
	{
		___Class_13 = value;
		Il2CppCodeGenWriteBarrier((&___Class_13), value);
	}

	inline static int32_t get_offset_of_CouponCode_14() { return static_cast<int32_t>(offsetof(CharacterInventoryItemAddedEventData_t2213025775, ___CouponCode_14)); }
	inline String_t* get_CouponCode_14() const { return ___CouponCode_14; }
	inline String_t** get_address_of_CouponCode_14() { return &___CouponCode_14; }
	inline void set_CouponCode_14(String_t* value)
	{
		___CouponCode_14 = value;
		Il2CppCodeGenWriteBarrier((&___CouponCode_14), value);
	}

	inline static int32_t get_offset_of_DisplayName_15() { return static_cast<int32_t>(offsetof(CharacterInventoryItemAddedEventData_t2213025775, ___DisplayName_15)); }
	inline String_t* get_DisplayName_15() const { return ___DisplayName_15; }
	inline String_t** get_address_of_DisplayName_15() { return &___DisplayName_15; }
	inline void set_DisplayName_15(String_t* value)
	{
		___DisplayName_15 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_15), value);
	}

	inline static int32_t get_offset_of_Expiration_16() { return static_cast<int32_t>(offsetof(CharacterInventoryItemAddedEventData_t2213025775, ___Expiration_16)); }
	inline Nullable_1_t1166124571  get_Expiration_16() const { return ___Expiration_16; }
	inline Nullable_1_t1166124571 * get_address_of_Expiration_16() { return &___Expiration_16; }
	inline void set_Expiration_16(Nullable_1_t1166124571  value)
	{
		___Expiration_16 = value;
	}

	inline static int32_t get_offset_of_InstanceId_17() { return static_cast<int32_t>(offsetof(CharacterInventoryItemAddedEventData_t2213025775, ___InstanceId_17)); }
	inline String_t* get_InstanceId_17() const { return ___InstanceId_17; }
	inline String_t** get_address_of_InstanceId_17() { return &___InstanceId_17; }
	inline void set_InstanceId_17(String_t* value)
	{
		___InstanceId_17 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceId_17), value);
	}

	inline static int32_t get_offset_of_ItemId_18() { return static_cast<int32_t>(offsetof(CharacterInventoryItemAddedEventData_t2213025775, ___ItemId_18)); }
	inline String_t* get_ItemId_18() const { return ___ItemId_18; }
	inline String_t** get_address_of_ItemId_18() { return &___ItemId_18; }
	inline void set_ItemId_18(String_t* value)
	{
		___ItemId_18 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_18), value);
	}

	inline static int32_t get_offset_of_PlayerId_19() { return static_cast<int32_t>(offsetof(CharacterInventoryItemAddedEventData_t2213025775, ___PlayerId_19)); }
	inline String_t* get_PlayerId_19() const { return ___PlayerId_19; }
	inline String_t** get_address_of_PlayerId_19() { return &___PlayerId_19; }
	inline void set_PlayerId_19(String_t* value)
	{
		___PlayerId_19 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerId_19), value);
	}

	inline static int32_t get_offset_of_RemainingUses_20() { return static_cast<int32_t>(offsetof(CharacterInventoryItemAddedEventData_t2213025775, ___RemainingUses_20)); }
	inline Nullable_1_t4282624060  get_RemainingUses_20() const { return ___RemainingUses_20; }
	inline Nullable_1_t4282624060 * get_address_of_RemainingUses_20() { return &___RemainingUses_20; }
	inline void set_RemainingUses_20(Nullable_1_t4282624060  value)
	{
		___RemainingUses_20 = value;
	}

	inline static int32_t get_offset_of_TitleId_21() { return static_cast<int32_t>(offsetof(CharacterInventoryItemAddedEventData_t2213025775, ___TitleId_21)); }
	inline String_t* get_TitleId_21() const { return ___TitleId_21; }
	inline String_t** get_address_of_TitleId_21() { return &___TitleId_21; }
	inline void set_TitleId_21(String_t* value)
	{
		___TitleId_21 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERINVENTORYITEMADDEDEVENTDATA_T2213025775_H
#ifndef CHARACTERSTATISTICCHANGEDEVENTDATA_T912745082_H
#define CHARACTERSTATISTICCHANGEDEVENTDATA_T912745082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.CharacterStatisticChangedEventData
struct  CharacterStatisticChangedEventData_t912745082  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.CharacterStatisticChangedEventData::PlayerId
	String_t* ___PlayerId_10;
	// System.String PlayFab.PlayStreamModels.CharacterStatisticChangedEventData::StatisticName
	String_t* ___StatisticName_11;
	// System.Nullable`1<System.Int32> PlayFab.PlayStreamModels.CharacterStatisticChangedEventData::StatisticPreviousValue
	Nullable_1_t378540539  ___StatisticPreviousValue_12;
	// System.Int32 PlayFab.PlayStreamModels.CharacterStatisticChangedEventData::StatisticValue
	int32_t ___StatisticValue_13;
	// System.String PlayFab.PlayStreamModels.CharacterStatisticChangedEventData::TitleId
	String_t* ___TitleId_14;
	// System.UInt32 PlayFab.PlayStreamModels.CharacterStatisticChangedEventData::Version
	uint32_t ___Version_15;

public:
	inline static int32_t get_offset_of_PlayerId_10() { return static_cast<int32_t>(offsetof(CharacterStatisticChangedEventData_t912745082, ___PlayerId_10)); }
	inline String_t* get_PlayerId_10() const { return ___PlayerId_10; }
	inline String_t** get_address_of_PlayerId_10() { return &___PlayerId_10; }
	inline void set_PlayerId_10(String_t* value)
	{
		___PlayerId_10 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerId_10), value);
	}

	inline static int32_t get_offset_of_StatisticName_11() { return static_cast<int32_t>(offsetof(CharacterStatisticChangedEventData_t912745082, ___StatisticName_11)); }
	inline String_t* get_StatisticName_11() const { return ___StatisticName_11; }
	inline String_t** get_address_of_StatisticName_11() { return &___StatisticName_11; }
	inline void set_StatisticName_11(String_t* value)
	{
		___StatisticName_11 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_11), value);
	}

	inline static int32_t get_offset_of_StatisticPreviousValue_12() { return static_cast<int32_t>(offsetof(CharacterStatisticChangedEventData_t912745082, ___StatisticPreviousValue_12)); }
	inline Nullable_1_t378540539  get_StatisticPreviousValue_12() const { return ___StatisticPreviousValue_12; }
	inline Nullable_1_t378540539 * get_address_of_StatisticPreviousValue_12() { return &___StatisticPreviousValue_12; }
	inline void set_StatisticPreviousValue_12(Nullable_1_t378540539  value)
	{
		___StatisticPreviousValue_12 = value;
	}

	inline static int32_t get_offset_of_StatisticValue_13() { return static_cast<int32_t>(offsetof(CharacterStatisticChangedEventData_t912745082, ___StatisticValue_13)); }
	inline int32_t get_StatisticValue_13() const { return ___StatisticValue_13; }
	inline int32_t* get_address_of_StatisticValue_13() { return &___StatisticValue_13; }
	inline void set_StatisticValue_13(int32_t value)
	{
		___StatisticValue_13 = value;
	}

	inline static int32_t get_offset_of_TitleId_14() { return static_cast<int32_t>(offsetof(CharacterStatisticChangedEventData_t912745082, ___TitleId_14)); }
	inline String_t* get_TitleId_14() const { return ___TitleId_14; }
	inline String_t** get_address_of_TitleId_14() { return &___TitleId_14; }
	inline void set_TitleId_14(String_t* value)
	{
		___TitleId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_14), value);
	}

	inline static int32_t get_offset_of_Version_15() { return static_cast<int32_t>(offsetof(CharacterStatisticChangedEventData_t912745082, ___Version_15)); }
	inline uint32_t get_Version_15() const { return ___Version_15; }
	inline uint32_t* get_address_of_Version_15() { return &___Version_15; }
	inline void set_Version_15(uint32_t value)
	{
		___Version_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERSTATISTICCHANGEDEVENTDATA_T912745082_H
#ifndef CHARACTERSTATISTICDELETEDEVENTDATA_T802624884_H
#define CHARACTERSTATISTICDELETEDEVENTDATA_T802624884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.CharacterStatisticDeletedEventData
struct  CharacterStatisticDeletedEventData_t802624884  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.CharacterStatisticDeletedEventData::PlayerId
	String_t* ___PlayerId_10;
	// System.String PlayFab.PlayStreamModels.CharacterStatisticDeletedEventData::StatisticName
	String_t* ___StatisticName_11;
	// System.String PlayFab.PlayStreamModels.CharacterStatisticDeletedEventData::TitleId
	String_t* ___TitleId_12;
	// System.UInt32 PlayFab.PlayStreamModels.CharacterStatisticDeletedEventData::Version
	uint32_t ___Version_13;

public:
	inline static int32_t get_offset_of_PlayerId_10() { return static_cast<int32_t>(offsetof(CharacterStatisticDeletedEventData_t802624884, ___PlayerId_10)); }
	inline String_t* get_PlayerId_10() const { return ___PlayerId_10; }
	inline String_t** get_address_of_PlayerId_10() { return &___PlayerId_10; }
	inline void set_PlayerId_10(String_t* value)
	{
		___PlayerId_10 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerId_10), value);
	}

	inline static int32_t get_offset_of_StatisticName_11() { return static_cast<int32_t>(offsetof(CharacterStatisticDeletedEventData_t802624884, ___StatisticName_11)); }
	inline String_t* get_StatisticName_11() const { return ___StatisticName_11; }
	inline String_t** get_address_of_StatisticName_11() { return &___StatisticName_11; }
	inline void set_StatisticName_11(String_t* value)
	{
		___StatisticName_11 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(CharacterStatisticDeletedEventData_t802624884, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}

	inline static int32_t get_offset_of_Version_13() { return static_cast<int32_t>(offsetof(CharacterStatisticDeletedEventData_t802624884, ___Version_13)); }
	inline uint32_t get_Version_13() const { return ___Version_13; }
	inline uint32_t* get_address_of_Version_13() { return &___Version_13; }
	inline void set_Version_13(uint32_t value)
	{
		___Version_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERSTATISTICDELETEDEVENTDATA_T802624884_H
#ifndef CHARACTERVCPURCHASEEVENTDATA_T1703576413_H
#define CHARACTERVCPURCHASEEVENTDATA_T1703576413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.CharacterVCPurchaseEventData
struct  CharacterVCPurchaseEventData_t1703576413  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.CharacterVCPurchaseEventData::CatalogVersion
	String_t* ___CatalogVersion_10;
	// System.String PlayFab.PlayStreamModels.CharacterVCPurchaseEventData::CurrencyCode
	String_t* ___CurrencyCode_11;
	// System.String PlayFab.PlayStreamModels.CharacterVCPurchaseEventData::ItemId
	String_t* ___ItemId_12;
	// System.String PlayFab.PlayStreamModels.CharacterVCPurchaseEventData::PlayerId
	String_t* ___PlayerId_13;
	// System.String PlayFab.PlayStreamModels.CharacterVCPurchaseEventData::PurchaseId
	String_t* ___PurchaseId_14;
	// System.Int32 PlayFab.PlayStreamModels.CharacterVCPurchaseEventData::Quantity
	int32_t ___Quantity_15;
	// System.String PlayFab.PlayStreamModels.CharacterVCPurchaseEventData::StoreId
	String_t* ___StoreId_16;
	// System.String PlayFab.PlayStreamModels.CharacterVCPurchaseEventData::TitleId
	String_t* ___TitleId_17;
	// System.UInt32 PlayFab.PlayStreamModels.CharacterVCPurchaseEventData::UnitPrice
	uint32_t ___UnitPrice_18;

public:
	inline static int32_t get_offset_of_CatalogVersion_10() { return static_cast<int32_t>(offsetof(CharacterVCPurchaseEventData_t1703576413, ___CatalogVersion_10)); }
	inline String_t* get_CatalogVersion_10() const { return ___CatalogVersion_10; }
	inline String_t** get_address_of_CatalogVersion_10() { return &___CatalogVersion_10; }
	inline void set_CatalogVersion_10(String_t* value)
	{
		___CatalogVersion_10 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_10), value);
	}

	inline static int32_t get_offset_of_CurrencyCode_11() { return static_cast<int32_t>(offsetof(CharacterVCPurchaseEventData_t1703576413, ___CurrencyCode_11)); }
	inline String_t* get_CurrencyCode_11() const { return ___CurrencyCode_11; }
	inline String_t** get_address_of_CurrencyCode_11() { return &___CurrencyCode_11; }
	inline void set_CurrencyCode_11(String_t* value)
	{
		___CurrencyCode_11 = value;
		Il2CppCodeGenWriteBarrier((&___CurrencyCode_11), value);
	}

	inline static int32_t get_offset_of_ItemId_12() { return static_cast<int32_t>(offsetof(CharacterVCPurchaseEventData_t1703576413, ___ItemId_12)); }
	inline String_t* get_ItemId_12() const { return ___ItemId_12; }
	inline String_t** get_address_of_ItemId_12() { return &___ItemId_12; }
	inline void set_ItemId_12(String_t* value)
	{
		___ItemId_12 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_12), value);
	}

	inline static int32_t get_offset_of_PlayerId_13() { return static_cast<int32_t>(offsetof(CharacterVCPurchaseEventData_t1703576413, ___PlayerId_13)); }
	inline String_t* get_PlayerId_13() const { return ___PlayerId_13; }
	inline String_t** get_address_of_PlayerId_13() { return &___PlayerId_13; }
	inline void set_PlayerId_13(String_t* value)
	{
		___PlayerId_13 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerId_13), value);
	}

	inline static int32_t get_offset_of_PurchaseId_14() { return static_cast<int32_t>(offsetof(CharacterVCPurchaseEventData_t1703576413, ___PurchaseId_14)); }
	inline String_t* get_PurchaseId_14() const { return ___PurchaseId_14; }
	inline String_t** get_address_of_PurchaseId_14() { return &___PurchaseId_14; }
	inline void set_PurchaseId_14(String_t* value)
	{
		___PurchaseId_14 = value;
		Il2CppCodeGenWriteBarrier((&___PurchaseId_14), value);
	}

	inline static int32_t get_offset_of_Quantity_15() { return static_cast<int32_t>(offsetof(CharacterVCPurchaseEventData_t1703576413, ___Quantity_15)); }
	inline int32_t get_Quantity_15() const { return ___Quantity_15; }
	inline int32_t* get_address_of_Quantity_15() { return &___Quantity_15; }
	inline void set_Quantity_15(int32_t value)
	{
		___Quantity_15 = value;
	}

	inline static int32_t get_offset_of_StoreId_16() { return static_cast<int32_t>(offsetof(CharacterVCPurchaseEventData_t1703576413, ___StoreId_16)); }
	inline String_t* get_StoreId_16() const { return ___StoreId_16; }
	inline String_t** get_address_of_StoreId_16() { return &___StoreId_16; }
	inline void set_StoreId_16(String_t* value)
	{
		___StoreId_16 = value;
		Il2CppCodeGenWriteBarrier((&___StoreId_16), value);
	}

	inline static int32_t get_offset_of_TitleId_17() { return static_cast<int32_t>(offsetof(CharacterVCPurchaseEventData_t1703576413, ___TitleId_17)); }
	inline String_t* get_TitleId_17() const { return ___TitleId_17; }
	inline String_t** get_address_of_TitleId_17() { return &___TitleId_17; }
	inline void set_TitleId_17(String_t* value)
	{
		___TitleId_17 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_17), value);
	}

	inline static int32_t get_offset_of_UnitPrice_18() { return static_cast<int32_t>(offsetof(CharacterVCPurchaseEventData_t1703576413, ___UnitPrice_18)); }
	inline uint32_t get_UnitPrice_18() const { return ___UnitPrice_18; }
	inline uint32_t* get_address_of_UnitPrice_18() { return &___UnitPrice_18; }
	inline void set_UnitPrice_18(uint32_t value)
	{
		___UnitPrice_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERVCPURCHASEEVENTDATA_T1703576413_H
#ifndef CHARACTERVIRTUALCURRENCYBALANCECHANGEDEVENTDATA_T2951221935_H
#define CHARACTERVIRTUALCURRENCYBALANCECHANGEDEVENTDATA_T2951221935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.CharacterVirtualCurrencyBalanceChangedEventData
struct  CharacterVirtualCurrencyBalanceChangedEventData_t2951221935  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.CharacterVirtualCurrencyBalanceChangedEventData::OrderId
	String_t* ___OrderId_10;
	// System.String PlayFab.PlayStreamModels.CharacterVirtualCurrencyBalanceChangedEventData::PlayerId
	String_t* ___PlayerId_11;
	// System.String PlayFab.PlayStreamModels.CharacterVirtualCurrencyBalanceChangedEventData::TitleId
	String_t* ___TitleId_12;
	// System.Int32 PlayFab.PlayStreamModels.CharacterVirtualCurrencyBalanceChangedEventData::VirtualCurrencyBalance
	int32_t ___VirtualCurrencyBalance_13;
	// System.String PlayFab.PlayStreamModels.CharacterVirtualCurrencyBalanceChangedEventData::VirtualCurrencyName
	String_t* ___VirtualCurrencyName_14;
	// System.Int32 PlayFab.PlayStreamModels.CharacterVirtualCurrencyBalanceChangedEventData::VirtualCurrencyPreviousBalance
	int32_t ___VirtualCurrencyPreviousBalance_15;

public:
	inline static int32_t get_offset_of_OrderId_10() { return static_cast<int32_t>(offsetof(CharacterVirtualCurrencyBalanceChangedEventData_t2951221935, ___OrderId_10)); }
	inline String_t* get_OrderId_10() const { return ___OrderId_10; }
	inline String_t** get_address_of_OrderId_10() { return &___OrderId_10; }
	inline void set_OrderId_10(String_t* value)
	{
		___OrderId_10 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_10), value);
	}

	inline static int32_t get_offset_of_PlayerId_11() { return static_cast<int32_t>(offsetof(CharacterVirtualCurrencyBalanceChangedEventData_t2951221935, ___PlayerId_11)); }
	inline String_t* get_PlayerId_11() const { return ___PlayerId_11; }
	inline String_t** get_address_of_PlayerId_11() { return &___PlayerId_11; }
	inline void set_PlayerId_11(String_t* value)
	{
		___PlayerId_11 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerId_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(CharacterVirtualCurrencyBalanceChangedEventData_t2951221935, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyBalance_13() { return static_cast<int32_t>(offsetof(CharacterVirtualCurrencyBalanceChangedEventData_t2951221935, ___VirtualCurrencyBalance_13)); }
	inline int32_t get_VirtualCurrencyBalance_13() const { return ___VirtualCurrencyBalance_13; }
	inline int32_t* get_address_of_VirtualCurrencyBalance_13() { return &___VirtualCurrencyBalance_13; }
	inline void set_VirtualCurrencyBalance_13(int32_t value)
	{
		___VirtualCurrencyBalance_13 = value;
	}

	inline static int32_t get_offset_of_VirtualCurrencyName_14() { return static_cast<int32_t>(offsetof(CharacterVirtualCurrencyBalanceChangedEventData_t2951221935, ___VirtualCurrencyName_14)); }
	inline String_t* get_VirtualCurrencyName_14() const { return ___VirtualCurrencyName_14; }
	inline String_t** get_address_of_VirtualCurrencyName_14() { return &___VirtualCurrencyName_14; }
	inline void set_VirtualCurrencyName_14(String_t* value)
	{
		___VirtualCurrencyName_14 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyName_14), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyPreviousBalance_15() { return static_cast<int32_t>(offsetof(CharacterVirtualCurrencyBalanceChangedEventData_t2951221935, ___VirtualCurrencyPreviousBalance_15)); }
	inline int32_t get_VirtualCurrencyPreviousBalance_15() const { return ___VirtualCurrencyPreviousBalance_15; }
	inline int32_t* get_address_of_VirtualCurrencyPreviousBalance_15() { return &___VirtualCurrencyPreviousBalance_15; }
	inline void set_VirtualCurrencyPreviousBalance_15(int32_t value)
	{
		___VirtualCurrencyPreviousBalance_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERVIRTUALCURRENCYBALANCECHANGEDEVENTDATA_T2951221935_H
#ifndef CLIENTFOCUSCHANGEEVENTDATA_T407855270_H
#define CLIENTFOCUSCHANGEEVENTDATA_T407855270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.ClientFocusChangeEventData
struct  ClientFocusChangeEventData_t407855270  : public PlayStreamEventBase_t3913229166
{
public:
	// PlayFab.PlayStreamModels.EntityLineage PlayFab.PlayStreamModels.ClientFocusChangeEventData::EntityLineage
	EntityLineage_t1359769518 * ___EntityLineage_10;
	// System.String PlayFab.PlayStreamModels.ClientFocusChangeEventData::OriginalEventId
	String_t* ___OriginalEventId_11;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.ClientFocusChangeEventData::OriginalTimestamp
	Nullable_1_t1166124571  ___OriginalTimestamp_12;
	// PlayFab.PlayStreamModels.ClientFocusChangePayload PlayFab.PlayStreamModels.ClientFocusChangeEventData::Payload
	ClientFocusChangePayload_t2346877824 * ___Payload_13;
	// PlayFab.PlayStreamModels.EntityKey PlayFab.PlayStreamModels.ClientFocusChangeEventData::WriterEntity
	EntityKey_t1354083966 * ___WriterEntity_14;

public:
	inline static int32_t get_offset_of_EntityLineage_10() { return static_cast<int32_t>(offsetof(ClientFocusChangeEventData_t407855270, ___EntityLineage_10)); }
	inline EntityLineage_t1359769518 * get_EntityLineage_10() const { return ___EntityLineage_10; }
	inline EntityLineage_t1359769518 ** get_address_of_EntityLineage_10() { return &___EntityLineage_10; }
	inline void set_EntityLineage_10(EntityLineage_t1359769518 * value)
	{
		___EntityLineage_10 = value;
		Il2CppCodeGenWriteBarrier((&___EntityLineage_10), value);
	}

	inline static int32_t get_offset_of_OriginalEventId_11() { return static_cast<int32_t>(offsetof(ClientFocusChangeEventData_t407855270, ___OriginalEventId_11)); }
	inline String_t* get_OriginalEventId_11() const { return ___OriginalEventId_11; }
	inline String_t** get_address_of_OriginalEventId_11() { return &___OriginalEventId_11; }
	inline void set_OriginalEventId_11(String_t* value)
	{
		___OriginalEventId_11 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalEventId_11), value);
	}

	inline static int32_t get_offset_of_OriginalTimestamp_12() { return static_cast<int32_t>(offsetof(ClientFocusChangeEventData_t407855270, ___OriginalTimestamp_12)); }
	inline Nullable_1_t1166124571  get_OriginalTimestamp_12() const { return ___OriginalTimestamp_12; }
	inline Nullable_1_t1166124571 * get_address_of_OriginalTimestamp_12() { return &___OriginalTimestamp_12; }
	inline void set_OriginalTimestamp_12(Nullable_1_t1166124571  value)
	{
		___OriginalTimestamp_12 = value;
	}

	inline static int32_t get_offset_of_Payload_13() { return static_cast<int32_t>(offsetof(ClientFocusChangeEventData_t407855270, ___Payload_13)); }
	inline ClientFocusChangePayload_t2346877824 * get_Payload_13() const { return ___Payload_13; }
	inline ClientFocusChangePayload_t2346877824 ** get_address_of_Payload_13() { return &___Payload_13; }
	inline void set_Payload_13(ClientFocusChangePayload_t2346877824 * value)
	{
		___Payload_13 = value;
		Il2CppCodeGenWriteBarrier((&___Payload_13), value);
	}

	inline static int32_t get_offset_of_WriterEntity_14() { return static_cast<int32_t>(offsetof(ClientFocusChangeEventData_t407855270, ___WriterEntity_14)); }
	inline EntityKey_t1354083966 * get_WriterEntity_14() const { return ___WriterEntity_14; }
	inline EntityKey_t1354083966 ** get_address_of_WriterEntity_14() { return &___WriterEntity_14; }
	inline void set_WriterEntity_14(EntityKey_t1354083966 * value)
	{
		___WriterEntity_14 = value;
		Il2CppCodeGenWriteBarrier((&___WriterEntity_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTFOCUSCHANGEEVENTDATA_T407855270_H
#ifndef CLIENTSESSIONSTARTEVENTDATA_T4281035394_H
#define CLIENTSESSIONSTARTEVENTDATA_T4281035394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.ClientSessionStartEventData
struct  ClientSessionStartEventData_t4281035394  : public PlayStreamEventBase_t3913229166
{
public:
	// PlayFab.PlayStreamModels.EntityLineage PlayFab.PlayStreamModels.ClientSessionStartEventData::EntityLineage
	EntityLineage_t1359769518 * ___EntityLineage_10;
	// System.String PlayFab.PlayStreamModels.ClientSessionStartEventData::OriginalEventId
	String_t* ___OriginalEventId_11;
	// System.DateTime PlayFab.PlayStreamModels.ClientSessionStartEventData::OriginalTimestamp
	DateTime_t3738529785  ___OriginalTimestamp_12;
	// PlayFab.PlayStreamModels.ClientSessionStartPayload PlayFab.PlayStreamModels.ClientSessionStartEventData::Payload
	ClientSessionStartPayload_t3274456936 * ___Payload_13;
	// PlayFab.PlayStreamModels.EntityKey PlayFab.PlayStreamModels.ClientSessionStartEventData::WriterEntity
	EntityKey_t1354083966 * ___WriterEntity_14;

public:
	inline static int32_t get_offset_of_EntityLineage_10() { return static_cast<int32_t>(offsetof(ClientSessionStartEventData_t4281035394, ___EntityLineage_10)); }
	inline EntityLineage_t1359769518 * get_EntityLineage_10() const { return ___EntityLineage_10; }
	inline EntityLineage_t1359769518 ** get_address_of_EntityLineage_10() { return &___EntityLineage_10; }
	inline void set_EntityLineage_10(EntityLineage_t1359769518 * value)
	{
		___EntityLineage_10 = value;
		Il2CppCodeGenWriteBarrier((&___EntityLineage_10), value);
	}

	inline static int32_t get_offset_of_OriginalEventId_11() { return static_cast<int32_t>(offsetof(ClientSessionStartEventData_t4281035394, ___OriginalEventId_11)); }
	inline String_t* get_OriginalEventId_11() const { return ___OriginalEventId_11; }
	inline String_t** get_address_of_OriginalEventId_11() { return &___OriginalEventId_11; }
	inline void set_OriginalEventId_11(String_t* value)
	{
		___OriginalEventId_11 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalEventId_11), value);
	}

	inline static int32_t get_offset_of_OriginalTimestamp_12() { return static_cast<int32_t>(offsetof(ClientSessionStartEventData_t4281035394, ___OriginalTimestamp_12)); }
	inline DateTime_t3738529785  get_OriginalTimestamp_12() const { return ___OriginalTimestamp_12; }
	inline DateTime_t3738529785 * get_address_of_OriginalTimestamp_12() { return &___OriginalTimestamp_12; }
	inline void set_OriginalTimestamp_12(DateTime_t3738529785  value)
	{
		___OriginalTimestamp_12 = value;
	}

	inline static int32_t get_offset_of_Payload_13() { return static_cast<int32_t>(offsetof(ClientSessionStartEventData_t4281035394, ___Payload_13)); }
	inline ClientSessionStartPayload_t3274456936 * get_Payload_13() const { return ___Payload_13; }
	inline ClientSessionStartPayload_t3274456936 ** get_address_of_Payload_13() { return &___Payload_13; }
	inline void set_Payload_13(ClientSessionStartPayload_t3274456936 * value)
	{
		___Payload_13 = value;
		Il2CppCodeGenWriteBarrier((&___Payload_13), value);
	}

	inline static int32_t get_offset_of_WriterEntity_14() { return static_cast<int32_t>(offsetof(ClientSessionStartEventData_t4281035394, ___WriterEntity_14)); }
	inline EntityKey_t1354083966 * get_WriterEntity_14() const { return ___WriterEntity_14; }
	inline EntityKey_t1354083966 ** get_address_of_WriterEntity_14() { return &___WriterEntity_14; }
	inline void set_WriterEntity_14(EntityKey_t1354083966 * value)
	{
		___WriterEntity_14 = value;
		Il2CppCodeGenWriteBarrier((&___WriterEntity_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTSESSIONSTARTEVENTDATA_T4281035394_H
#ifndef DISPLAYNAMEFILTEREDEVENTDATA_T2782569754_H
#define DISPLAYNAMEFILTEREDEVENTDATA_T2782569754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.DisplayNameFilteredEventData
struct  DisplayNameFilteredEventData_t2782569754  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.DisplayNameFilteredEventData::DisplayName
	String_t* ___DisplayName_10;
	// System.String PlayFab.PlayStreamModels.DisplayNameFilteredEventData::PlayerId
	String_t* ___PlayerId_11;

public:
	inline static int32_t get_offset_of_DisplayName_10() { return static_cast<int32_t>(offsetof(DisplayNameFilteredEventData_t2782569754, ___DisplayName_10)); }
	inline String_t* get_DisplayName_10() const { return ___DisplayName_10; }
	inline String_t** get_address_of_DisplayName_10() { return &___DisplayName_10; }
	inline void set_DisplayName_10(String_t* value)
	{
		___DisplayName_10 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_10), value);
	}

	inline static int32_t get_offset_of_PlayerId_11() { return static_cast<int32_t>(offsetof(DisplayNameFilteredEventData_t2782569754, ___PlayerId_11)); }
	inline String_t* get_PlayerId_11() const { return ___PlayerId_11; }
	inline String_t** get_address_of_PlayerId_11() { return &___PlayerId_11; }
	inline void set_PlayerId_11(String_t* value)
	{
		___PlayerId_11 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerId_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYNAMEFILTEREDEVENTDATA_T2782569754_H
#ifndef GAMELOBBYENDEDEVENTDATA_T1075445578_H
#define GAMELOBBYENDEDEVENTDATA_T1075445578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.GameLobbyEndedEventData
struct  GameLobbyEndedEventData_t1075445578  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::GameMode
	String_t* ___GameMode_10;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.GameLobbyEndedEventData::GameStartTime
	Nullable_1_t1166124571  ___GameStartTime_11;
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::Region
	String_t* ___Region_12;
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_13;
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::ServerHost
	String_t* ___ServerHost_14;
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::ServerHostInstanceId
	String_t* ___ServerHostInstanceId_15;
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::ServerIPV4Address
	String_t* ___ServerIPV4Address_16;
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::ServerIPV6Address
	String_t* ___ServerIPV6Address_17;
	// System.UInt32 PlayFab.PlayStreamModels.GameLobbyEndedEventData::ServerPort
	uint32_t ___ServerPort_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.PlayStreamModels.GameLobbyEndedEventData::Tags
	Dictionary_2_t1632706988 * ___Tags_19;
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::TitleId
	String_t* ___TitleId_20;

public:
	inline static int32_t get_offset_of_GameMode_10() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t1075445578, ___GameMode_10)); }
	inline String_t* get_GameMode_10() const { return ___GameMode_10; }
	inline String_t** get_address_of_GameMode_10() { return &___GameMode_10; }
	inline void set_GameMode_10(String_t* value)
	{
		___GameMode_10 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_10), value);
	}

	inline static int32_t get_offset_of_GameStartTime_11() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t1075445578, ___GameStartTime_11)); }
	inline Nullable_1_t1166124571  get_GameStartTime_11() const { return ___GameStartTime_11; }
	inline Nullable_1_t1166124571 * get_address_of_GameStartTime_11() { return &___GameStartTime_11; }
	inline void set_GameStartTime_11(Nullable_1_t1166124571  value)
	{
		___GameStartTime_11 = value;
	}

	inline static int32_t get_offset_of_Region_12() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t1075445578, ___Region_12)); }
	inline String_t* get_Region_12() const { return ___Region_12; }
	inline String_t** get_address_of_Region_12() { return &___Region_12; }
	inline void set_Region_12(String_t* value)
	{
		___Region_12 = value;
		Il2CppCodeGenWriteBarrier((&___Region_12), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_13() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t1075445578, ___ServerBuildVersion_13)); }
	inline String_t* get_ServerBuildVersion_13() const { return ___ServerBuildVersion_13; }
	inline String_t** get_address_of_ServerBuildVersion_13() { return &___ServerBuildVersion_13; }
	inline void set_ServerBuildVersion_13(String_t* value)
	{
		___ServerBuildVersion_13 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_13), value);
	}

	inline static int32_t get_offset_of_ServerHost_14() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t1075445578, ___ServerHost_14)); }
	inline String_t* get_ServerHost_14() const { return ___ServerHost_14; }
	inline String_t** get_address_of_ServerHost_14() { return &___ServerHost_14; }
	inline void set_ServerHost_14(String_t* value)
	{
		___ServerHost_14 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_14), value);
	}

	inline static int32_t get_offset_of_ServerHostInstanceId_15() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t1075445578, ___ServerHostInstanceId_15)); }
	inline String_t* get_ServerHostInstanceId_15() const { return ___ServerHostInstanceId_15; }
	inline String_t** get_address_of_ServerHostInstanceId_15() { return &___ServerHostInstanceId_15; }
	inline void set_ServerHostInstanceId_15(String_t* value)
	{
		___ServerHostInstanceId_15 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostInstanceId_15), value);
	}

	inline static int32_t get_offset_of_ServerIPV4Address_16() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t1075445578, ___ServerIPV4Address_16)); }
	inline String_t* get_ServerIPV4Address_16() const { return ___ServerIPV4Address_16; }
	inline String_t** get_address_of_ServerIPV4Address_16() { return &___ServerIPV4Address_16; }
	inline void set_ServerIPV4Address_16(String_t* value)
	{
		___ServerIPV4Address_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV4Address_16), value);
	}

	inline static int32_t get_offset_of_ServerIPV6Address_17() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t1075445578, ___ServerIPV6Address_17)); }
	inline String_t* get_ServerIPV6Address_17() const { return ___ServerIPV6Address_17; }
	inline String_t** get_address_of_ServerIPV6Address_17() { return &___ServerIPV6Address_17; }
	inline void set_ServerIPV6Address_17(String_t* value)
	{
		___ServerIPV6Address_17 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV6Address_17), value);
	}

	inline static int32_t get_offset_of_ServerPort_18() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t1075445578, ___ServerPort_18)); }
	inline uint32_t get_ServerPort_18() const { return ___ServerPort_18; }
	inline uint32_t* get_address_of_ServerPort_18() { return &___ServerPort_18; }
	inline void set_ServerPort_18(uint32_t value)
	{
		___ServerPort_18 = value;
	}

	inline static int32_t get_offset_of_Tags_19() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t1075445578, ___Tags_19)); }
	inline Dictionary_2_t1632706988 * get_Tags_19() const { return ___Tags_19; }
	inline Dictionary_2_t1632706988 ** get_address_of_Tags_19() { return &___Tags_19; }
	inline void set_Tags_19(Dictionary_2_t1632706988 * value)
	{
		___Tags_19 = value;
		Il2CppCodeGenWriteBarrier((&___Tags_19), value);
	}

	inline static int32_t get_offset_of_TitleId_20() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t1075445578, ___TitleId_20)); }
	inline String_t* get_TitleId_20() const { return ___TitleId_20; }
	inline String_t** get_address_of_TitleId_20() { return &___TitleId_20; }
	inline void set_TitleId_20(String_t* value)
	{
		___TitleId_20 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMELOBBYENDEDEVENTDATA_T1075445578_H
#ifndef GAMELOBBYSTARTEDEVENTDATA_T499319584_H
#define GAMELOBBYSTARTEDEVENTDATA_T499319584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.GameLobbyStartedEventData
struct  GameLobbyStartedEventData_t499319584  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::CustomCommandLineData
	String_t* ___CustomCommandLineData_10;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::CustomMatchmakerEndpoint
	String_t* ___CustomMatchmakerEndpoint_11;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::GameMode
	String_t* ___GameMode_12;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::GameServerData
	String_t* ___GameServerData_13;
	// System.Nullable`1<System.Int32> PlayFab.PlayStreamModels.GameLobbyStartedEventData::MaxPlayers
	Nullable_1_t378540539  ___MaxPlayers_14;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::Region
	String_t* ___Region_15;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_16;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::ServerHost
	String_t* ___ServerHost_17;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::ServerHostInstanceId
	String_t* ___ServerHostInstanceId_18;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::ServerIPV4Address
	String_t* ___ServerIPV4Address_19;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::ServerIPV6Address
	String_t* ___ServerIPV6Address_20;
	// System.UInt32 PlayFab.PlayStreamModels.GameLobbyStartedEventData::ServerPort
	uint32_t ___ServerPort_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.PlayStreamModels.GameLobbyStartedEventData::Tags
	Dictionary_2_t1632706988 * ___Tags_22;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::TitleId
	String_t* ___TitleId_23;

public:
	inline static int32_t get_offset_of_CustomCommandLineData_10() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___CustomCommandLineData_10)); }
	inline String_t* get_CustomCommandLineData_10() const { return ___CustomCommandLineData_10; }
	inline String_t** get_address_of_CustomCommandLineData_10() { return &___CustomCommandLineData_10; }
	inline void set_CustomCommandLineData_10(String_t* value)
	{
		___CustomCommandLineData_10 = value;
		Il2CppCodeGenWriteBarrier((&___CustomCommandLineData_10), value);
	}

	inline static int32_t get_offset_of_CustomMatchmakerEndpoint_11() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___CustomMatchmakerEndpoint_11)); }
	inline String_t* get_CustomMatchmakerEndpoint_11() const { return ___CustomMatchmakerEndpoint_11; }
	inline String_t** get_address_of_CustomMatchmakerEndpoint_11() { return &___CustomMatchmakerEndpoint_11; }
	inline void set_CustomMatchmakerEndpoint_11(String_t* value)
	{
		___CustomMatchmakerEndpoint_11 = value;
		Il2CppCodeGenWriteBarrier((&___CustomMatchmakerEndpoint_11), value);
	}

	inline static int32_t get_offset_of_GameMode_12() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___GameMode_12)); }
	inline String_t* get_GameMode_12() const { return ___GameMode_12; }
	inline String_t** get_address_of_GameMode_12() { return &___GameMode_12; }
	inline void set_GameMode_12(String_t* value)
	{
		___GameMode_12 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_12), value);
	}

	inline static int32_t get_offset_of_GameServerData_13() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___GameServerData_13)); }
	inline String_t* get_GameServerData_13() const { return ___GameServerData_13; }
	inline String_t** get_address_of_GameServerData_13() { return &___GameServerData_13; }
	inline void set_GameServerData_13(String_t* value)
	{
		___GameServerData_13 = value;
		Il2CppCodeGenWriteBarrier((&___GameServerData_13), value);
	}

	inline static int32_t get_offset_of_MaxPlayers_14() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___MaxPlayers_14)); }
	inline Nullable_1_t378540539  get_MaxPlayers_14() const { return ___MaxPlayers_14; }
	inline Nullable_1_t378540539 * get_address_of_MaxPlayers_14() { return &___MaxPlayers_14; }
	inline void set_MaxPlayers_14(Nullable_1_t378540539  value)
	{
		___MaxPlayers_14 = value;
	}

	inline static int32_t get_offset_of_Region_15() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___Region_15)); }
	inline String_t* get_Region_15() const { return ___Region_15; }
	inline String_t** get_address_of_Region_15() { return &___Region_15; }
	inline void set_Region_15(String_t* value)
	{
		___Region_15 = value;
		Il2CppCodeGenWriteBarrier((&___Region_15), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_16() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___ServerBuildVersion_16)); }
	inline String_t* get_ServerBuildVersion_16() const { return ___ServerBuildVersion_16; }
	inline String_t** get_address_of_ServerBuildVersion_16() { return &___ServerBuildVersion_16; }
	inline void set_ServerBuildVersion_16(String_t* value)
	{
		___ServerBuildVersion_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_16), value);
	}

	inline static int32_t get_offset_of_ServerHost_17() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___ServerHost_17)); }
	inline String_t* get_ServerHost_17() const { return ___ServerHost_17; }
	inline String_t** get_address_of_ServerHost_17() { return &___ServerHost_17; }
	inline void set_ServerHost_17(String_t* value)
	{
		___ServerHost_17 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_17), value);
	}

	inline static int32_t get_offset_of_ServerHostInstanceId_18() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___ServerHostInstanceId_18)); }
	inline String_t* get_ServerHostInstanceId_18() const { return ___ServerHostInstanceId_18; }
	inline String_t** get_address_of_ServerHostInstanceId_18() { return &___ServerHostInstanceId_18; }
	inline void set_ServerHostInstanceId_18(String_t* value)
	{
		___ServerHostInstanceId_18 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostInstanceId_18), value);
	}

	inline static int32_t get_offset_of_ServerIPV4Address_19() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___ServerIPV4Address_19)); }
	inline String_t* get_ServerIPV4Address_19() const { return ___ServerIPV4Address_19; }
	inline String_t** get_address_of_ServerIPV4Address_19() { return &___ServerIPV4Address_19; }
	inline void set_ServerIPV4Address_19(String_t* value)
	{
		___ServerIPV4Address_19 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV4Address_19), value);
	}

	inline static int32_t get_offset_of_ServerIPV6Address_20() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___ServerIPV6Address_20)); }
	inline String_t* get_ServerIPV6Address_20() const { return ___ServerIPV6Address_20; }
	inline String_t** get_address_of_ServerIPV6Address_20() { return &___ServerIPV6Address_20; }
	inline void set_ServerIPV6Address_20(String_t* value)
	{
		___ServerIPV6Address_20 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV6Address_20), value);
	}

	inline static int32_t get_offset_of_ServerPort_21() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___ServerPort_21)); }
	inline uint32_t get_ServerPort_21() const { return ___ServerPort_21; }
	inline uint32_t* get_address_of_ServerPort_21() { return &___ServerPort_21; }
	inline void set_ServerPort_21(uint32_t value)
	{
		___ServerPort_21 = value;
	}

	inline static int32_t get_offset_of_Tags_22() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___Tags_22)); }
	inline Dictionary_2_t1632706988 * get_Tags_22() const { return ___Tags_22; }
	inline Dictionary_2_t1632706988 ** get_address_of_Tags_22() { return &___Tags_22; }
	inline void set_Tags_22(Dictionary_2_t1632706988 * value)
	{
		___Tags_22 = value;
		Il2CppCodeGenWriteBarrier((&___Tags_22), value);
	}

	inline static int32_t get_offset_of_TitleId_23() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t499319584, ___TitleId_23)); }
	inline String_t* get_TitleId_23() const { return ___TitleId_23; }
	inline String_t** get_address_of_TitleId_23() { return &___TitleId_23; }
	inline void set_TitleId_23(String_t* value)
	{
		___TitleId_23 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMELOBBYSTARTEDEVENTDATA_T499319584_H
#ifndef GAMESERVERHOSTSTARTEDEVENTDATA_T2782581439_H
#define GAMESERVERHOSTSTARTEDEVENTDATA_T2782581439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.GameServerHostStartedEventData
struct  GameServerHostStartedEventData_t2782581439  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::InstanceId
	String_t* ___InstanceId_10;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::InstanceProvider
	String_t* ___InstanceProvider_11;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::InstanceType
	String_t* ___InstanceType_12;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::Region
	String_t* ___Region_13;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_14;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::ServerHost
	String_t* ___ServerHost_15;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::ServerIPV4Address
	String_t* ___ServerIPV4Address_16;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::ServerIPV6Address
	String_t* ___ServerIPV6Address_17;
	// System.DateTime PlayFab.PlayStreamModels.GameServerHostStartedEventData::StartTime
	DateTime_t3738529785  ___StartTime_18;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::TitleId
	String_t* ___TitleId_19;

public:
	inline static int32_t get_offset_of_InstanceId_10() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t2782581439, ___InstanceId_10)); }
	inline String_t* get_InstanceId_10() const { return ___InstanceId_10; }
	inline String_t** get_address_of_InstanceId_10() { return &___InstanceId_10; }
	inline void set_InstanceId_10(String_t* value)
	{
		___InstanceId_10 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceId_10), value);
	}

	inline static int32_t get_offset_of_InstanceProvider_11() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t2782581439, ___InstanceProvider_11)); }
	inline String_t* get_InstanceProvider_11() const { return ___InstanceProvider_11; }
	inline String_t** get_address_of_InstanceProvider_11() { return &___InstanceProvider_11; }
	inline void set_InstanceProvider_11(String_t* value)
	{
		___InstanceProvider_11 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceProvider_11), value);
	}

	inline static int32_t get_offset_of_InstanceType_12() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t2782581439, ___InstanceType_12)); }
	inline String_t* get_InstanceType_12() const { return ___InstanceType_12; }
	inline String_t** get_address_of_InstanceType_12() { return &___InstanceType_12; }
	inline void set_InstanceType_12(String_t* value)
	{
		___InstanceType_12 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceType_12), value);
	}

	inline static int32_t get_offset_of_Region_13() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t2782581439, ___Region_13)); }
	inline String_t* get_Region_13() const { return ___Region_13; }
	inline String_t** get_address_of_Region_13() { return &___Region_13; }
	inline void set_Region_13(String_t* value)
	{
		___Region_13 = value;
		Il2CppCodeGenWriteBarrier((&___Region_13), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_14() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t2782581439, ___ServerBuildVersion_14)); }
	inline String_t* get_ServerBuildVersion_14() const { return ___ServerBuildVersion_14; }
	inline String_t** get_address_of_ServerBuildVersion_14() { return &___ServerBuildVersion_14; }
	inline void set_ServerBuildVersion_14(String_t* value)
	{
		___ServerBuildVersion_14 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_14), value);
	}

	inline static int32_t get_offset_of_ServerHost_15() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t2782581439, ___ServerHost_15)); }
	inline String_t* get_ServerHost_15() const { return ___ServerHost_15; }
	inline String_t** get_address_of_ServerHost_15() { return &___ServerHost_15; }
	inline void set_ServerHost_15(String_t* value)
	{
		___ServerHost_15 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_15), value);
	}

	inline static int32_t get_offset_of_ServerIPV4Address_16() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t2782581439, ___ServerIPV4Address_16)); }
	inline String_t* get_ServerIPV4Address_16() const { return ___ServerIPV4Address_16; }
	inline String_t** get_address_of_ServerIPV4Address_16() { return &___ServerIPV4Address_16; }
	inline void set_ServerIPV4Address_16(String_t* value)
	{
		___ServerIPV4Address_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV4Address_16), value);
	}

	inline static int32_t get_offset_of_ServerIPV6Address_17() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t2782581439, ___ServerIPV6Address_17)); }
	inline String_t* get_ServerIPV6Address_17() const { return ___ServerIPV6Address_17; }
	inline String_t** get_address_of_ServerIPV6Address_17() { return &___ServerIPV6Address_17; }
	inline void set_ServerIPV6Address_17(String_t* value)
	{
		___ServerIPV6Address_17 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV6Address_17), value);
	}

	inline static int32_t get_offset_of_StartTime_18() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t2782581439, ___StartTime_18)); }
	inline DateTime_t3738529785  get_StartTime_18() const { return ___StartTime_18; }
	inline DateTime_t3738529785 * get_address_of_StartTime_18() { return &___StartTime_18; }
	inline void set_StartTime_18(DateTime_t3738529785  value)
	{
		___StartTime_18 = value;
	}

	inline static int32_t get_offset_of_TitleId_19() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t2782581439, ___TitleId_19)); }
	inline String_t* get_TitleId_19() const { return ___TitleId_19; }
	inline String_t** get_address_of_TitleId_19() { return &___TitleId_19; }
	inline void set_TitleId_19(String_t* value)
	{
		___TitleId_19 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESERVERHOSTSTARTEDEVENTDATA_T2782581439_H
#ifndef GAMESERVERHOSTSTOPPEDEVENTDATA_T3634674403_H
#define GAMESERVERHOSTSTOPPEDEVENTDATA_T3634674403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.GameServerHostStoppedEventData
struct  GameServerHostStoppedEventData_t3634674403  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::InstanceId
	String_t* ___InstanceId_10;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::InstanceProvider
	String_t* ___InstanceProvider_11;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::InstanceType
	String_t* ___InstanceType_12;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::Region
	String_t* ___Region_13;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_14;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::ServerHost
	String_t* ___ServerHost_15;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::ServerIPV4Address
	String_t* ___ServerIPV4Address_16;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::ServerIPV6Address
	String_t* ___ServerIPV6Address_17;
	// System.DateTime PlayFab.PlayStreamModels.GameServerHostStoppedEventData::StartTime
	DateTime_t3738529785  ___StartTime_18;
	// System.Nullable`1<PlayFab.PlayStreamModels.GameServerHostStopReason> PlayFab.PlayStreamModels.GameServerHostStoppedEventData::StopReason
	Nullable_1_t442811014  ___StopReason_19;
	// System.DateTime PlayFab.PlayStreamModels.GameServerHostStoppedEventData::StopTime
	DateTime_t3738529785  ___StopTime_20;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::TitleId
	String_t* ___TitleId_21;

public:
	inline static int32_t get_offset_of_InstanceId_10() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t3634674403, ___InstanceId_10)); }
	inline String_t* get_InstanceId_10() const { return ___InstanceId_10; }
	inline String_t** get_address_of_InstanceId_10() { return &___InstanceId_10; }
	inline void set_InstanceId_10(String_t* value)
	{
		___InstanceId_10 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceId_10), value);
	}

	inline static int32_t get_offset_of_InstanceProvider_11() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t3634674403, ___InstanceProvider_11)); }
	inline String_t* get_InstanceProvider_11() const { return ___InstanceProvider_11; }
	inline String_t** get_address_of_InstanceProvider_11() { return &___InstanceProvider_11; }
	inline void set_InstanceProvider_11(String_t* value)
	{
		___InstanceProvider_11 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceProvider_11), value);
	}

	inline static int32_t get_offset_of_InstanceType_12() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t3634674403, ___InstanceType_12)); }
	inline String_t* get_InstanceType_12() const { return ___InstanceType_12; }
	inline String_t** get_address_of_InstanceType_12() { return &___InstanceType_12; }
	inline void set_InstanceType_12(String_t* value)
	{
		___InstanceType_12 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceType_12), value);
	}

	inline static int32_t get_offset_of_Region_13() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t3634674403, ___Region_13)); }
	inline String_t* get_Region_13() const { return ___Region_13; }
	inline String_t** get_address_of_Region_13() { return &___Region_13; }
	inline void set_Region_13(String_t* value)
	{
		___Region_13 = value;
		Il2CppCodeGenWriteBarrier((&___Region_13), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_14() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t3634674403, ___ServerBuildVersion_14)); }
	inline String_t* get_ServerBuildVersion_14() const { return ___ServerBuildVersion_14; }
	inline String_t** get_address_of_ServerBuildVersion_14() { return &___ServerBuildVersion_14; }
	inline void set_ServerBuildVersion_14(String_t* value)
	{
		___ServerBuildVersion_14 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_14), value);
	}

	inline static int32_t get_offset_of_ServerHost_15() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t3634674403, ___ServerHost_15)); }
	inline String_t* get_ServerHost_15() const { return ___ServerHost_15; }
	inline String_t** get_address_of_ServerHost_15() { return &___ServerHost_15; }
	inline void set_ServerHost_15(String_t* value)
	{
		___ServerHost_15 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_15), value);
	}

	inline static int32_t get_offset_of_ServerIPV4Address_16() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t3634674403, ___ServerIPV4Address_16)); }
	inline String_t* get_ServerIPV4Address_16() const { return ___ServerIPV4Address_16; }
	inline String_t** get_address_of_ServerIPV4Address_16() { return &___ServerIPV4Address_16; }
	inline void set_ServerIPV4Address_16(String_t* value)
	{
		___ServerIPV4Address_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV4Address_16), value);
	}

	inline static int32_t get_offset_of_ServerIPV6Address_17() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t3634674403, ___ServerIPV6Address_17)); }
	inline String_t* get_ServerIPV6Address_17() const { return ___ServerIPV6Address_17; }
	inline String_t** get_address_of_ServerIPV6Address_17() { return &___ServerIPV6Address_17; }
	inline void set_ServerIPV6Address_17(String_t* value)
	{
		___ServerIPV6Address_17 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV6Address_17), value);
	}

	inline static int32_t get_offset_of_StartTime_18() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t3634674403, ___StartTime_18)); }
	inline DateTime_t3738529785  get_StartTime_18() const { return ___StartTime_18; }
	inline DateTime_t3738529785 * get_address_of_StartTime_18() { return &___StartTime_18; }
	inline void set_StartTime_18(DateTime_t3738529785  value)
	{
		___StartTime_18 = value;
	}

	inline static int32_t get_offset_of_StopReason_19() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t3634674403, ___StopReason_19)); }
	inline Nullable_1_t442811014  get_StopReason_19() const { return ___StopReason_19; }
	inline Nullable_1_t442811014 * get_address_of_StopReason_19() { return &___StopReason_19; }
	inline void set_StopReason_19(Nullable_1_t442811014  value)
	{
		___StopReason_19 = value;
	}

	inline static int32_t get_offset_of_StopTime_20() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t3634674403, ___StopTime_20)); }
	inline DateTime_t3738529785  get_StopTime_20() const { return ___StopTime_20; }
	inline DateTime_t3738529785 * get_address_of_StopTime_20() { return &___StopTime_20; }
	inline void set_StopTime_20(DateTime_t3738529785  value)
	{
		___StopTime_20 = value;
	}

	inline static int32_t get_offset_of_TitleId_21() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t3634674403, ___TitleId_21)); }
	inline String_t* get_TitleId_21() const { return ___TitleId_21; }
	inline String_t** get_address_of_TitleId_21() { return &___TitleId_21; }
	inline void set_TitleId_21(String_t* value)
	{
		___TitleId_21 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESERVERHOSTSTOPPEDEVENTDATA_T3634674403_H
#ifndef MASTERPLAYERTITLEDELETEDEVENTDATA_T3276680103_H
#define MASTERPLAYERTITLEDELETEDEVENTDATA_T3276680103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.MasterPlayerTitleDeletedEventData
struct  MasterPlayerTitleDeletedEventData_t3276680103  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.MasterPlayerTitleDeletedEventData::MetaData
	String_t* ___MetaData_10;
	// System.String PlayFab.PlayStreamModels.MasterPlayerTitleDeletedEventData::ReceiptId
	String_t* ___ReceiptId_11;

public:
	inline static int32_t get_offset_of_MetaData_10() { return static_cast<int32_t>(offsetof(MasterPlayerTitleDeletedEventData_t3276680103, ___MetaData_10)); }
	inline String_t* get_MetaData_10() const { return ___MetaData_10; }
	inline String_t** get_address_of_MetaData_10() { return &___MetaData_10; }
	inline void set_MetaData_10(String_t* value)
	{
		___MetaData_10 = value;
		Il2CppCodeGenWriteBarrier((&___MetaData_10), value);
	}

	inline static int32_t get_offset_of_ReceiptId_11() { return static_cast<int32_t>(offsetof(MasterPlayerTitleDeletedEventData_t3276680103, ___ReceiptId_11)); }
	inline String_t* get_ReceiptId_11() const { return ___ReceiptId_11; }
	inline String_t** get_address_of_ReceiptId_11() { return &___ReceiptId_11; }
	inline void set_ReceiptId_11(String_t* value)
	{
		___ReceiptId_11 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiptId_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASTERPLAYERTITLEDELETEDEVENTDATA_T3276680103_H
#ifndef PLAYERADCAMPAIGNATTRIBUTIONEVENTDATA_T364161832_H
#define PLAYERADCAMPAIGNATTRIBUTIONEVENTDATA_T364161832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdCampaignAttributionEventData
struct  PlayerAdCampaignAttributionEventData_t364161832  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerAdCampaignAttributionEventData::CampaignId
	String_t* ___CampaignId_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdCampaignAttributionEventData::TitleId
	String_t* ___TitleId_11;

public:
	inline static int32_t get_offset_of_CampaignId_10() { return static_cast<int32_t>(offsetof(PlayerAdCampaignAttributionEventData_t364161832, ___CampaignId_10)); }
	inline String_t* get_CampaignId_10() const { return ___CampaignId_10; }
	inline String_t** get_address_of_CampaignId_10() { return &___CampaignId_10; }
	inline void set_CampaignId_10(String_t* value)
	{
		___CampaignId_10 = value;
		Il2CppCodeGenWriteBarrier((&___CampaignId_10), value);
	}

	inline static int32_t get_offset_of_TitleId_11() { return static_cast<int32_t>(offsetof(PlayerAdCampaignAttributionEventData_t364161832, ___TitleId_11)); }
	inline String_t* get_TitleId_11() const { return ___TitleId_11; }
	inline String_t** get_address_of_TitleId_11() { return &___TitleId_11; }
	inline void set_TitleId_11(String_t* value)
	{
		___TitleId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADCAMPAIGNATTRIBUTIONEVENTDATA_T364161832_H
#ifndef PLAYERADCLOSEDEVENTDATA_T1028452654_H
#define PLAYERADCLOSEDEVENTDATA_T1028452654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdClosedEventData
struct  PlayerAdClosedEventData_t1028452654  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerAdClosedEventData::AdPlacementId
	String_t* ___AdPlacementId_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdClosedEventData::AdPlacementName
	String_t* ___AdPlacementName_11;
	// System.String PlayFab.PlayStreamModels.PlayerAdClosedEventData::AdUnit
	String_t* ___AdUnit_12;
	// System.String PlayFab.PlayStreamModels.PlayerAdClosedEventData::RewardId
	String_t* ___RewardId_13;
	// System.String PlayFab.PlayStreamModels.PlayerAdClosedEventData::RewardName
	String_t* ___RewardName_14;
	// System.String PlayFab.PlayStreamModels.PlayerAdClosedEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_AdPlacementId_10() { return static_cast<int32_t>(offsetof(PlayerAdClosedEventData_t1028452654, ___AdPlacementId_10)); }
	inline String_t* get_AdPlacementId_10() const { return ___AdPlacementId_10; }
	inline String_t** get_address_of_AdPlacementId_10() { return &___AdPlacementId_10; }
	inline void set_AdPlacementId_10(String_t* value)
	{
		___AdPlacementId_10 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementId_10), value);
	}

	inline static int32_t get_offset_of_AdPlacementName_11() { return static_cast<int32_t>(offsetof(PlayerAdClosedEventData_t1028452654, ___AdPlacementName_11)); }
	inline String_t* get_AdPlacementName_11() const { return ___AdPlacementName_11; }
	inline String_t** get_address_of_AdPlacementName_11() { return &___AdPlacementName_11; }
	inline void set_AdPlacementName_11(String_t* value)
	{
		___AdPlacementName_11 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementName_11), value);
	}

	inline static int32_t get_offset_of_AdUnit_12() { return static_cast<int32_t>(offsetof(PlayerAdClosedEventData_t1028452654, ___AdUnit_12)); }
	inline String_t* get_AdUnit_12() const { return ___AdUnit_12; }
	inline String_t** get_address_of_AdUnit_12() { return &___AdUnit_12; }
	inline void set_AdUnit_12(String_t* value)
	{
		___AdUnit_12 = value;
		Il2CppCodeGenWriteBarrier((&___AdUnit_12), value);
	}

	inline static int32_t get_offset_of_RewardId_13() { return static_cast<int32_t>(offsetof(PlayerAdClosedEventData_t1028452654, ___RewardId_13)); }
	inline String_t* get_RewardId_13() const { return ___RewardId_13; }
	inline String_t** get_address_of_RewardId_13() { return &___RewardId_13; }
	inline void set_RewardId_13(String_t* value)
	{
		___RewardId_13 = value;
		Il2CppCodeGenWriteBarrier((&___RewardId_13), value);
	}

	inline static int32_t get_offset_of_RewardName_14() { return static_cast<int32_t>(offsetof(PlayerAdClosedEventData_t1028452654, ___RewardName_14)); }
	inline String_t* get_RewardName_14() const { return ___RewardName_14; }
	inline String_t** get_address_of_RewardName_14() { return &___RewardName_14; }
	inline void set_RewardName_14(String_t* value)
	{
		___RewardName_14 = value;
		Il2CppCodeGenWriteBarrier((&___RewardName_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerAdClosedEventData_t1028452654, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADCLOSEDEVENTDATA_T1028452654_H
#ifndef PLAYERADENDEDEVENTDATA_T4008010211_H
#define PLAYERADENDEDEVENTDATA_T4008010211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdEndedEventData
struct  PlayerAdEndedEventData_t4008010211  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerAdEndedEventData::AdPlacementId
	String_t* ___AdPlacementId_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdEndedEventData::AdPlacementName
	String_t* ___AdPlacementName_11;
	// System.String PlayFab.PlayStreamModels.PlayerAdEndedEventData::AdUnit
	String_t* ___AdUnit_12;
	// System.String PlayFab.PlayStreamModels.PlayerAdEndedEventData::RewardId
	String_t* ___RewardId_13;
	// System.String PlayFab.PlayStreamModels.PlayerAdEndedEventData::RewardName
	String_t* ___RewardName_14;
	// System.String PlayFab.PlayStreamModels.PlayerAdEndedEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_AdPlacementId_10() { return static_cast<int32_t>(offsetof(PlayerAdEndedEventData_t4008010211, ___AdPlacementId_10)); }
	inline String_t* get_AdPlacementId_10() const { return ___AdPlacementId_10; }
	inline String_t** get_address_of_AdPlacementId_10() { return &___AdPlacementId_10; }
	inline void set_AdPlacementId_10(String_t* value)
	{
		___AdPlacementId_10 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementId_10), value);
	}

	inline static int32_t get_offset_of_AdPlacementName_11() { return static_cast<int32_t>(offsetof(PlayerAdEndedEventData_t4008010211, ___AdPlacementName_11)); }
	inline String_t* get_AdPlacementName_11() const { return ___AdPlacementName_11; }
	inline String_t** get_address_of_AdPlacementName_11() { return &___AdPlacementName_11; }
	inline void set_AdPlacementName_11(String_t* value)
	{
		___AdPlacementName_11 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementName_11), value);
	}

	inline static int32_t get_offset_of_AdUnit_12() { return static_cast<int32_t>(offsetof(PlayerAdEndedEventData_t4008010211, ___AdUnit_12)); }
	inline String_t* get_AdUnit_12() const { return ___AdUnit_12; }
	inline String_t** get_address_of_AdUnit_12() { return &___AdUnit_12; }
	inline void set_AdUnit_12(String_t* value)
	{
		___AdUnit_12 = value;
		Il2CppCodeGenWriteBarrier((&___AdUnit_12), value);
	}

	inline static int32_t get_offset_of_RewardId_13() { return static_cast<int32_t>(offsetof(PlayerAdEndedEventData_t4008010211, ___RewardId_13)); }
	inline String_t* get_RewardId_13() const { return ___RewardId_13; }
	inline String_t** get_address_of_RewardId_13() { return &___RewardId_13; }
	inline void set_RewardId_13(String_t* value)
	{
		___RewardId_13 = value;
		Il2CppCodeGenWriteBarrier((&___RewardId_13), value);
	}

	inline static int32_t get_offset_of_RewardName_14() { return static_cast<int32_t>(offsetof(PlayerAdEndedEventData_t4008010211, ___RewardName_14)); }
	inline String_t* get_RewardName_14() const { return ___RewardName_14; }
	inline String_t** get_address_of_RewardName_14() { return &___RewardName_14; }
	inline void set_RewardName_14(String_t* value)
	{
		___RewardName_14 = value;
		Il2CppCodeGenWriteBarrier((&___RewardName_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerAdEndedEventData_t4008010211, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADENDEDEVENTDATA_T4008010211_H
#ifndef PLAYERADOPENEDEVENTDATA_T1554094522_H
#define PLAYERADOPENEDEVENTDATA_T1554094522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdOpenedEventData
struct  PlayerAdOpenedEventData_t1554094522  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerAdOpenedEventData::AdPlacementId
	String_t* ___AdPlacementId_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdOpenedEventData::AdPlacementName
	String_t* ___AdPlacementName_11;
	// System.String PlayFab.PlayStreamModels.PlayerAdOpenedEventData::AdUnit
	String_t* ___AdUnit_12;
	// System.String PlayFab.PlayStreamModels.PlayerAdOpenedEventData::RewardId
	String_t* ___RewardId_13;
	// System.String PlayFab.PlayStreamModels.PlayerAdOpenedEventData::RewardName
	String_t* ___RewardName_14;
	// System.String PlayFab.PlayStreamModels.PlayerAdOpenedEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_AdPlacementId_10() { return static_cast<int32_t>(offsetof(PlayerAdOpenedEventData_t1554094522, ___AdPlacementId_10)); }
	inline String_t* get_AdPlacementId_10() const { return ___AdPlacementId_10; }
	inline String_t** get_address_of_AdPlacementId_10() { return &___AdPlacementId_10; }
	inline void set_AdPlacementId_10(String_t* value)
	{
		___AdPlacementId_10 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementId_10), value);
	}

	inline static int32_t get_offset_of_AdPlacementName_11() { return static_cast<int32_t>(offsetof(PlayerAdOpenedEventData_t1554094522, ___AdPlacementName_11)); }
	inline String_t* get_AdPlacementName_11() const { return ___AdPlacementName_11; }
	inline String_t** get_address_of_AdPlacementName_11() { return &___AdPlacementName_11; }
	inline void set_AdPlacementName_11(String_t* value)
	{
		___AdPlacementName_11 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementName_11), value);
	}

	inline static int32_t get_offset_of_AdUnit_12() { return static_cast<int32_t>(offsetof(PlayerAdOpenedEventData_t1554094522, ___AdUnit_12)); }
	inline String_t* get_AdUnit_12() const { return ___AdUnit_12; }
	inline String_t** get_address_of_AdUnit_12() { return &___AdUnit_12; }
	inline void set_AdUnit_12(String_t* value)
	{
		___AdUnit_12 = value;
		Il2CppCodeGenWriteBarrier((&___AdUnit_12), value);
	}

	inline static int32_t get_offset_of_RewardId_13() { return static_cast<int32_t>(offsetof(PlayerAdOpenedEventData_t1554094522, ___RewardId_13)); }
	inline String_t* get_RewardId_13() const { return ___RewardId_13; }
	inline String_t** get_address_of_RewardId_13() { return &___RewardId_13; }
	inline void set_RewardId_13(String_t* value)
	{
		___RewardId_13 = value;
		Il2CppCodeGenWriteBarrier((&___RewardId_13), value);
	}

	inline static int32_t get_offset_of_RewardName_14() { return static_cast<int32_t>(offsetof(PlayerAdOpenedEventData_t1554094522, ___RewardName_14)); }
	inline String_t* get_RewardName_14() const { return ___RewardName_14; }
	inline String_t** get_address_of_RewardName_14() { return &___RewardName_14; }
	inline void set_RewardName_14(String_t* value)
	{
		___RewardName_14 = value;
		Il2CppCodeGenWriteBarrier((&___RewardName_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerAdOpenedEventData_t1554094522, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADOPENEDEVENTDATA_T1554094522_H
#ifndef PLAYERADREWARDVALUEDEVENTDATA_T4053417989_H
#define PLAYERADREWARDVALUEDEVENTDATA_T4053417989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData
struct  PlayerAdRewardValuedEventData_t4053417989  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::AdPlacementId
	String_t* ___AdPlacementId_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::AdPlacementName
	String_t* ___AdPlacementName_11;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::AdUnit
	String_t* ___AdUnit_12;
	// System.Double PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::RevenueShare
	double ___RevenueShare_13;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::RewardId
	String_t* ___RewardId_14;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::RewardName
	String_t* ___RewardName_15;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::TitleId
	String_t* ___TitleId_16;

public:
	inline static int32_t get_offset_of_AdPlacementId_10() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t4053417989, ___AdPlacementId_10)); }
	inline String_t* get_AdPlacementId_10() const { return ___AdPlacementId_10; }
	inline String_t** get_address_of_AdPlacementId_10() { return &___AdPlacementId_10; }
	inline void set_AdPlacementId_10(String_t* value)
	{
		___AdPlacementId_10 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementId_10), value);
	}

	inline static int32_t get_offset_of_AdPlacementName_11() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t4053417989, ___AdPlacementName_11)); }
	inline String_t* get_AdPlacementName_11() const { return ___AdPlacementName_11; }
	inline String_t** get_address_of_AdPlacementName_11() { return &___AdPlacementName_11; }
	inline void set_AdPlacementName_11(String_t* value)
	{
		___AdPlacementName_11 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementName_11), value);
	}

	inline static int32_t get_offset_of_AdUnit_12() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t4053417989, ___AdUnit_12)); }
	inline String_t* get_AdUnit_12() const { return ___AdUnit_12; }
	inline String_t** get_address_of_AdUnit_12() { return &___AdUnit_12; }
	inline void set_AdUnit_12(String_t* value)
	{
		___AdUnit_12 = value;
		Il2CppCodeGenWriteBarrier((&___AdUnit_12), value);
	}

	inline static int32_t get_offset_of_RevenueShare_13() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t4053417989, ___RevenueShare_13)); }
	inline double get_RevenueShare_13() const { return ___RevenueShare_13; }
	inline double* get_address_of_RevenueShare_13() { return &___RevenueShare_13; }
	inline void set_RevenueShare_13(double value)
	{
		___RevenueShare_13 = value;
	}

	inline static int32_t get_offset_of_RewardId_14() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t4053417989, ___RewardId_14)); }
	inline String_t* get_RewardId_14() const { return ___RewardId_14; }
	inline String_t** get_address_of_RewardId_14() { return &___RewardId_14; }
	inline void set_RewardId_14(String_t* value)
	{
		___RewardId_14 = value;
		Il2CppCodeGenWriteBarrier((&___RewardId_14), value);
	}

	inline static int32_t get_offset_of_RewardName_15() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t4053417989, ___RewardName_15)); }
	inline String_t* get_RewardName_15() const { return ___RewardName_15; }
	inline String_t** get_address_of_RewardName_15() { return &___RewardName_15; }
	inline void set_RewardName_15(String_t* value)
	{
		___RewardName_15 = value;
		Il2CppCodeGenWriteBarrier((&___RewardName_15), value);
	}

	inline static int32_t get_offset_of_TitleId_16() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t4053417989, ___TitleId_16)); }
	inline String_t* get_TitleId_16() const { return ___TitleId_16; }
	inline String_t** get_address_of_TitleId_16() { return &___TitleId_16; }
	inline void set_TitleId_16(String_t* value)
	{
		___TitleId_16 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADREWARDVALUEDEVENTDATA_T4053417989_H
#ifndef PLAYERADREWARDEDEVENTDATA_T3445056304_H
#define PLAYERADREWARDEDEVENTDATA_T3445056304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdRewardedEventData
struct  PlayerAdRewardedEventData_t3445056304  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.PlayerAdRewardedEventData::ActionGroupDebugMessages
	List_1_t3319525431 * ___ActionGroupDebugMessages_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardedEventData::AdPlacementId
	String_t* ___AdPlacementId_11;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardedEventData::AdPlacementName
	String_t* ___AdPlacementName_12;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardedEventData::AdUnit
	String_t* ___AdUnit_13;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardedEventData::RewardId
	String_t* ___RewardId_14;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardedEventData::RewardName
	String_t* ___RewardName_15;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardedEventData::TitleId
	String_t* ___TitleId_16;
	// System.Nullable`1<System.Int32> PlayFab.PlayStreamModels.PlayerAdRewardedEventData::ViewsRemainingThisPeriod
	Nullable_1_t378540539  ___ViewsRemainingThisPeriod_17;

public:
	inline static int32_t get_offset_of_ActionGroupDebugMessages_10() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t3445056304, ___ActionGroupDebugMessages_10)); }
	inline List_1_t3319525431 * get_ActionGroupDebugMessages_10() const { return ___ActionGroupDebugMessages_10; }
	inline List_1_t3319525431 ** get_address_of_ActionGroupDebugMessages_10() { return &___ActionGroupDebugMessages_10; }
	inline void set_ActionGroupDebugMessages_10(List_1_t3319525431 * value)
	{
		___ActionGroupDebugMessages_10 = value;
		Il2CppCodeGenWriteBarrier((&___ActionGroupDebugMessages_10), value);
	}

	inline static int32_t get_offset_of_AdPlacementId_11() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t3445056304, ___AdPlacementId_11)); }
	inline String_t* get_AdPlacementId_11() const { return ___AdPlacementId_11; }
	inline String_t** get_address_of_AdPlacementId_11() { return &___AdPlacementId_11; }
	inline void set_AdPlacementId_11(String_t* value)
	{
		___AdPlacementId_11 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementId_11), value);
	}

	inline static int32_t get_offset_of_AdPlacementName_12() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t3445056304, ___AdPlacementName_12)); }
	inline String_t* get_AdPlacementName_12() const { return ___AdPlacementName_12; }
	inline String_t** get_address_of_AdPlacementName_12() { return &___AdPlacementName_12; }
	inline void set_AdPlacementName_12(String_t* value)
	{
		___AdPlacementName_12 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementName_12), value);
	}

	inline static int32_t get_offset_of_AdUnit_13() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t3445056304, ___AdUnit_13)); }
	inline String_t* get_AdUnit_13() const { return ___AdUnit_13; }
	inline String_t** get_address_of_AdUnit_13() { return &___AdUnit_13; }
	inline void set_AdUnit_13(String_t* value)
	{
		___AdUnit_13 = value;
		Il2CppCodeGenWriteBarrier((&___AdUnit_13), value);
	}

	inline static int32_t get_offset_of_RewardId_14() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t3445056304, ___RewardId_14)); }
	inline String_t* get_RewardId_14() const { return ___RewardId_14; }
	inline String_t** get_address_of_RewardId_14() { return &___RewardId_14; }
	inline void set_RewardId_14(String_t* value)
	{
		___RewardId_14 = value;
		Il2CppCodeGenWriteBarrier((&___RewardId_14), value);
	}

	inline static int32_t get_offset_of_RewardName_15() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t3445056304, ___RewardName_15)); }
	inline String_t* get_RewardName_15() const { return ___RewardName_15; }
	inline String_t** get_address_of_RewardName_15() { return &___RewardName_15; }
	inline void set_RewardName_15(String_t* value)
	{
		___RewardName_15 = value;
		Il2CppCodeGenWriteBarrier((&___RewardName_15), value);
	}

	inline static int32_t get_offset_of_TitleId_16() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t3445056304, ___TitleId_16)); }
	inline String_t* get_TitleId_16() const { return ___TitleId_16; }
	inline String_t** get_address_of_TitleId_16() { return &___TitleId_16; }
	inline void set_TitleId_16(String_t* value)
	{
		___TitleId_16 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_16), value);
	}

	inline static int32_t get_offset_of_ViewsRemainingThisPeriod_17() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t3445056304, ___ViewsRemainingThisPeriod_17)); }
	inline Nullable_1_t378540539  get_ViewsRemainingThisPeriod_17() const { return ___ViewsRemainingThisPeriod_17; }
	inline Nullable_1_t378540539 * get_address_of_ViewsRemainingThisPeriod_17() { return &___ViewsRemainingThisPeriod_17; }
	inline void set_ViewsRemainingThisPeriod_17(Nullable_1_t378540539  value)
	{
		___ViewsRemainingThisPeriod_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADREWARDEDEVENTDATA_T3445056304_H
#ifndef PLAYERADSTARTEDEVENTDATA_T399493136_H
#define PLAYERADSTARTEDEVENTDATA_T399493136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdStartedEventData
struct  PlayerAdStartedEventData_t399493136  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerAdStartedEventData::AdPlacementId
	String_t* ___AdPlacementId_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdStartedEventData::AdPlacementName
	String_t* ___AdPlacementName_11;
	// System.String PlayFab.PlayStreamModels.PlayerAdStartedEventData::AdUnit
	String_t* ___AdUnit_12;
	// System.String PlayFab.PlayStreamModels.PlayerAdStartedEventData::RewardId
	String_t* ___RewardId_13;
	// System.String PlayFab.PlayStreamModels.PlayerAdStartedEventData::RewardName
	String_t* ___RewardName_14;
	// System.String PlayFab.PlayStreamModels.PlayerAdStartedEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_AdPlacementId_10() { return static_cast<int32_t>(offsetof(PlayerAdStartedEventData_t399493136, ___AdPlacementId_10)); }
	inline String_t* get_AdPlacementId_10() const { return ___AdPlacementId_10; }
	inline String_t** get_address_of_AdPlacementId_10() { return &___AdPlacementId_10; }
	inline void set_AdPlacementId_10(String_t* value)
	{
		___AdPlacementId_10 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementId_10), value);
	}

	inline static int32_t get_offset_of_AdPlacementName_11() { return static_cast<int32_t>(offsetof(PlayerAdStartedEventData_t399493136, ___AdPlacementName_11)); }
	inline String_t* get_AdPlacementName_11() const { return ___AdPlacementName_11; }
	inline String_t** get_address_of_AdPlacementName_11() { return &___AdPlacementName_11; }
	inline void set_AdPlacementName_11(String_t* value)
	{
		___AdPlacementName_11 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementName_11), value);
	}

	inline static int32_t get_offset_of_AdUnit_12() { return static_cast<int32_t>(offsetof(PlayerAdStartedEventData_t399493136, ___AdUnit_12)); }
	inline String_t* get_AdUnit_12() const { return ___AdUnit_12; }
	inline String_t** get_address_of_AdUnit_12() { return &___AdUnit_12; }
	inline void set_AdUnit_12(String_t* value)
	{
		___AdUnit_12 = value;
		Il2CppCodeGenWriteBarrier((&___AdUnit_12), value);
	}

	inline static int32_t get_offset_of_RewardId_13() { return static_cast<int32_t>(offsetof(PlayerAdStartedEventData_t399493136, ___RewardId_13)); }
	inline String_t* get_RewardId_13() const { return ___RewardId_13; }
	inline String_t** get_address_of_RewardId_13() { return &___RewardId_13; }
	inline void set_RewardId_13(String_t* value)
	{
		___RewardId_13 = value;
		Il2CppCodeGenWriteBarrier((&___RewardId_13), value);
	}

	inline static int32_t get_offset_of_RewardName_14() { return static_cast<int32_t>(offsetof(PlayerAdStartedEventData_t399493136, ___RewardName_14)); }
	inline String_t* get_RewardName_14() const { return ___RewardName_14; }
	inline String_t** get_address_of_RewardName_14() { return &___RewardName_14; }
	inline void set_RewardName_14(String_t* value)
	{
		___RewardName_14 = value;
		Il2CppCodeGenWriteBarrier((&___RewardName_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerAdStartedEventData_t399493136, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADSTARTEDEVENTDATA_T399493136_H
#ifndef PLAYERADDEDTITLEEVENTDATA_T653810095_H
#define PLAYERADDEDTITLEEVENTDATA_T653810095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAddedTitleEventData
struct  PlayerAddedTitleEventData_t653810095  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerAddedTitleEventData::DisplayName
	String_t* ___DisplayName_10;
	// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider> PlayFab.PlayStreamModels.PlayerAddedTitleEventData::Platform
	Nullable_1_t1369806624  ___Platform_11;
	// System.String PlayFab.PlayStreamModels.PlayerAddedTitleEventData::PlatformUserId
	String_t* ___PlatformUserId_12;
	// System.String PlayFab.PlayStreamModels.PlayerAddedTitleEventData::TitleId
	String_t* ___TitleId_13;

public:
	inline static int32_t get_offset_of_DisplayName_10() { return static_cast<int32_t>(offsetof(PlayerAddedTitleEventData_t653810095, ___DisplayName_10)); }
	inline String_t* get_DisplayName_10() const { return ___DisplayName_10; }
	inline String_t** get_address_of_DisplayName_10() { return &___DisplayName_10; }
	inline void set_DisplayName_10(String_t* value)
	{
		___DisplayName_10 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_10), value);
	}

	inline static int32_t get_offset_of_Platform_11() { return static_cast<int32_t>(offsetof(PlayerAddedTitleEventData_t653810095, ___Platform_11)); }
	inline Nullable_1_t1369806624  get_Platform_11() const { return ___Platform_11; }
	inline Nullable_1_t1369806624 * get_address_of_Platform_11() { return &___Platform_11; }
	inline void set_Platform_11(Nullable_1_t1369806624  value)
	{
		___Platform_11 = value;
	}

	inline static int32_t get_offset_of_PlatformUserId_12() { return static_cast<int32_t>(offsetof(PlayerAddedTitleEventData_t653810095, ___PlatformUserId_12)); }
	inline String_t* get_PlatformUserId_12() const { return ___PlatformUserId_12; }
	inline String_t** get_address_of_PlatformUserId_12() { return &___PlatformUserId_12; }
	inline void set_PlatformUserId_12(String_t* value)
	{
		___PlatformUserId_12 = value;
		Il2CppCodeGenWriteBarrier((&___PlatformUserId_12), value);
	}

	inline static int32_t get_offset_of_TitleId_13() { return static_cast<int32_t>(offsetof(PlayerAddedTitleEventData_t653810095, ___TitleId_13)); }
	inline String_t* get_TitleId_13() const { return ___TitleId_13; }
	inline String_t** get_address_of_TitleId_13() { return &___TitleId_13; }
	inline void set_TitleId_13(String_t* value)
	{
		___TitleId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADDEDTITLEEVENTDATA_T653810095_H
#ifndef PLAYERBANNEDEVENTDATA_T1085682463_H
#define PLAYERBANNEDEVENTDATA_T1085682463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerBannedEventData
struct  PlayerBannedEventData_t1085682463  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.PlayerBannedEventData::BanExpiration
	Nullable_1_t1166124571  ___BanExpiration_10;
	// System.String PlayFab.PlayStreamModels.PlayerBannedEventData::BanId
	String_t* ___BanId_11;
	// System.String PlayFab.PlayStreamModels.PlayerBannedEventData::BanReason
	String_t* ___BanReason_12;
	// System.Boolean PlayFab.PlayStreamModels.PlayerBannedEventData::PermanentBan
	bool ___PermanentBan_13;
	// System.String PlayFab.PlayStreamModels.PlayerBannedEventData::TitleId
	String_t* ___TitleId_14;

public:
	inline static int32_t get_offset_of_BanExpiration_10() { return static_cast<int32_t>(offsetof(PlayerBannedEventData_t1085682463, ___BanExpiration_10)); }
	inline Nullable_1_t1166124571  get_BanExpiration_10() const { return ___BanExpiration_10; }
	inline Nullable_1_t1166124571 * get_address_of_BanExpiration_10() { return &___BanExpiration_10; }
	inline void set_BanExpiration_10(Nullable_1_t1166124571  value)
	{
		___BanExpiration_10 = value;
	}

	inline static int32_t get_offset_of_BanId_11() { return static_cast<int32_t>(offsetof(PlayerBannedEventData_t1085682463, ___BanId_11)); }
	inline String_t* get_BanId_11() const { return ___BanId_11; }
	inline String_t** get_address_of_BanId_11() { return &___BanId_11; }
	inline void set_BanId_11(String_t* value)
	{
		___BanId_11 = value;
		Il2CppCodeGenWriteBarrier((&___BanId_11), value);
	}

	inline static int32_t get_offset_of_BanReason_12() { return static_cast<int32_t>(offsetof(PlayerBannedEventData_t1085682463, ___BanReason_12)); }
	inline String_t* get_BanReason_12() const { return ___BanReason_12; }
	inline String_t** get_address_of_BanReason_12() { return &___BanReason_12; }
	inline void set_BanReason_12(String_t* value)
	{
		___BanReason_12 = value;
		Il2CppCodeGenWriteBarrier((&___BanReason_12), value);
	}

	inline static int32_t get_offset_of_PermanentBan_13() { return static_cast<int32_t>(offsetof(PlayerBannedEventData_t1085682463, ___PermanentBan_13)); }
	inline bool get_PermanentBan_13() const { return ___PermanentBan_13; }
	inline bool* get_address_of_PermanentBan_13() { return &___PermanentBan_13; }
	inline void set_PermanentBan_13(bool value)
	{
		___PermanentBan_13 = value;
	}

	inline static int32_t get_offset_of_TitleId_14() { return static_cast<int32_t>(offsetof(PlayerBannedEventData_t1085682463, ___TitleId_14)); }
	inline String_t* get_TitleId_14() const { return ___TitleId_14; }
	inline String_t** get_address_of_TitleId_14() { return &___TitleId_14; }
	inline void set_TitleId_14(String_t* value)
	{
		___TitleId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERBANNEDEVENTDATA_T1085682463_H
#ifndef PLAYERCHANGEDAVATAREVENTDATA_T413992440_H
#define PLAYERCHANGEDAVATAREVENTDATA_T413992440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerChangedAvatarEventData
struct  PlayerChangedAvatarEventData_t413992440  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerChangedAvatarEventData::ImageUrl
	String_t* ___ImageUrl_10;
	// System.String PlayFab.PlayStreamModels.PlayerChangedAvatarEventData::PreviousImageUrl
	String_t* ___PreviousImageUrl_11;
	// System.String PlayFab.PlayStreamModels.PlayerChangedAvatarEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_ImageUrl_10() { return static_cast<int32_t>(offsetof(PlayerChangedAvatarEventData_t413992440, ___ImageUrl_10)); }
	inline String_t* get_ImageUrl_10() const { return ___ImageUrl_10; }
	inline String_t** get_address_of_ImageUrl_10() { return &___ImageUrl_10; }
	inline void set_ImageUrl_10(String_t* value)
	{
		___ImageUrl_10 = value;
		Il2CppCodeGenWriteBarrier((&___ImageUrl_10), value);
	}

	inline static int32_t get_offset_of_PreviousImageUrl_11() { return static_cast<int32_t>(offsetof(PlayerChangedAvatarEventData_t413992440, ___PreviousImageUrl_11)); }
	inline String_t* get_PreviousImageUrl_11() const { return ___PreviousImageUrl_11; }
	inline String_t** get_address_of_PreviousImageUrl_11() { return &___PreviousImageUrl_11; }
	inline void set_PreviousImageUrl_11(String_t* value)
	{
		___PreviousImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousImageUrl_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerChangedAvatarEventData_t413992440, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCHANGEDAVATAREVENTDATA_T413992440_H
#ifndef PLAYERCOMPLETEDPASSWORDRESETEVENTDATA_T1389371597_H
#define PLAYERCOMPLETEDPASSWORDRESETEVENTDATA_T1389371597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData
struct  PlayerCompletedPasswordResetEventData_t1389371597  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::CompletedFromIPAddress
	String_t* ___CompletedFromIPAddress_10;
	// System.DateTime PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::CompletionTimestamp
	DateTime_t3738529785  ___CompletionTimestamp_11;
	// System.Nullable`1<PlayFab.PlayStreamModels.PasswordResetInitiationSource> PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::InitiatedBy
	Nullable_1_t3992660930  ___InitiatedBy_12;
	// System.String PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::InitiatedFromIPAddress
	String_t* ___InitiatedFromIPAddress_13;
	// System.DateTime PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::InitiationTimestamp
	DateTime_t3738529785  ___InitiationTimestamp_14;
	// System.DateTime PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::LinkExpiration
	DateTime_t3738529785  ___LinkExpiration_15;
	// System.String PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::PasswordResetId
	String_t* ___PasswordResetId_16;
	// System.String PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::RecoveryEmailAddress
	String_t* ___RecoveryEmailAddress_17;
	// System.String PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::TitleId
	String_t* ___TitleId_18;

public:
	inline static int32_t get_offset_of_CompletedFromIPAddress_10() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1389371597, ___CompletedFromIPAddress_10)); }
	inline String_t* get_CompletedFromIPAddress_10() const { return ___CompletedFromIPAddress_10; }
	inline String_t** get_address_of_CompletedFromIPAddress_10() { return &___CompletedFromIPAddress_10; }
	inline void set_CompletedFromIPAddress_10(String_t* value)
	{
		___CompletedFromIPAddress_10 = value;
		Il2CppCodeGenWriteBarrier((&___CompletedFromIPAddress_10), value);
	}

	inline static int32_t get_offset_of_CompletionTimestamp_11() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1389371597, ___CompletionTimestamp_11)); }
	inline DateTime_t3738529785  get_CompletionTimestamp_11() const { return ___CompletionTimestamp_11; }
	inline DateTime_t3738529785 * get_address_of_CompletionTimestamp_11() { return &___CompletionTimestamp_11; }
	inline void set_CompletionTimestamp_11(DateTime_t3738529785  value)
	{
		___CompletionTimestamp_11 = value;
	}

	inline static int32_t get_offset_of_InitiatedBy_12() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1389371597, ___InitiatedBy_12)); }
	inline Nullable_1_t3992660930  get_InitiatedBy_12() const { return ___InitiatedBy_12; }
	inline Nullable_1_t3992660930 * get_address_of_InitiatedBy_12() { return &___InitiatedBy_12; }
	inline void set_InitiatedBy_12(Nullable_1_t3992660930  value)
	{
		___InitiatedBy_12 = value;
	}

	inline static int32_t get_offset_of_InitiatedFromIPAddress_13() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1389371597, ___InitiatedFromIPAddress_13)); }
	inline String_t* get_InitiatedFromIPAddress_13() const { return ___InitiatedFromIPAddress_13; }
	inline String_t** get_address_of_InitiatedFromIPAddress_13() { return &___InitiatedFromIPAddress_13; }
	inline void set_InitiatedFromIPAddress_13(String_t* value)
	{
		___InitiatedFromIPAddress_13 = value;
		Il2CppCodeGenWriteBarrier((&___InitiatedFromIPAddress_13), value);
	}

	inline static int32_t get_offset_of_InitiationTimestamp_14() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1389371597, ___InitiationTimestamp_14)); }
	inline DateTime_t3738529785  get_InitiationTimestamp_14() const { return ___InitiationTimestamp_14; }
	inline DateTime_t3738529785 * get_address_of_InitiationTimestamp_14() { return &___InitiationTimestamp_14; }
	inline void set_InitiationTimestamp_14(DateTime_t3738529785  value)
	{
		___InitiationTimestamp_14 = value;
	}

	inline static int32_t get_offset_of_LinkExpiration_15() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1389371597, ___LinkExpiration_15)); }
	inline DateTime_t3738529785  get_LinkExpiration_15() const { return ___LinkExpiration_15; }
	inline DateTime_t3738529785 * get_address_of_LinkExpiration_15() { return &___LinkExpiration_15; }
	inline void set_LinkExpiration_15(DateTime_t3738529785  value)
	{
		___LinkExpiration_15 = value;
	}

	inline static int32_t get_offset_of_PasswordResetId_16() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1389371597, ___PasswordResetId_16)); }
	inline String_t* get_PasswordResetId_16() const { return ___PasswordResetId_16; }
	inline String_t** get_address_of_PasswordResetId_16() { return &___PasswordResetId_16; }
	inline void set_PasswordResetId_16(String_t* value)
	{
		___PasswordResetId_16 = value;
		Il2CppCodeGenWriteBarrier((&___PasswordResetId_16), value);
	}

	inline static int32_t get_offset_of_RecoveryEmailAddress_17() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1389371597, ___RecoveryEmailAddress_17)); }
	inline String_t* get_RecoveryEmailAddress_17() const { return ___RecoveryEmailAddress_17; }
	inline String_t** get_address_of_RecoveryEmailAddress_17() { return &___RecoveryEmailAddress_17; }
	inline void set_RecoveryEmailAddress_17(String_t* value)
	{
		___RecoveryEmailAddress_17 = value;
		Il2CppCodeGenWriteBarrier((&___RecoveryEmailAddress_17), value);
	}

	inline static int32_t get_offset_of_TitleId_18() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1389371597, ___TitleId_18)); }
	inline String_t* get_TitleId_18() const { return ___TitleId_18; }
	inline String_t** get_address_of_TitleId_18() { return &___TitleId_18; }
	inline void set_TitleId_18(String_t* value)
	{
		___TitleId_18 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCOMPLETEDPASSWORDRESETEVENTDATA_T1389371597_H
#ifndef PLAYERCONSUMEDITEMEVENTDATA_T4154887560_H
#define PLAYERCONSUMEDITEMEVENTDATA_T4154887560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerConsumedItemEventData
struct  PlayerConsumedItemEventData_t4154887560  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerConsumedItemEventData::CatalogVersion
	String_t* ___CatalogVersion_10;
	// System.String PlayFab.PlayStreamModels.PlayerConsumedItemEventData::ItemId
	String_t* ___ItemId_11;
	// System.String PlayFab.PlayStreamModels.PlayerConsumedItemEventData::ItemInstanceId
	String_t* ___ItemInstanceId_12;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerConsumedItemEventData::PreviousUsesRemaining
	uint32_t ___PreviousUsesRemaining_13;
	// System.String PlayFab.PlayStreamModels.PlayerConsumedItemEventData::TitleId
	String_t* ___TitleId_14;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerConsumedItemEventData::UsesRemaining
	uint32_t ___UsesRemaining_15;

public:
	inline static int32_t get_offset_of_CatalogVersion_10() { return static_cast<int32_t>(offsetof(PlayerConsumedItemEventData_t4154887560, ___CatalogVersion_10)); }
	inline String_t* get_CatalogVersion_10() const { return ___CatalogVersion_10; }
	inline String_t** get_address_of_CatalogVersion_10() { return &___CatalogVersion_10; }
	inline void set_CatalogVersion_10(String_t* value)
	{
		___CatalogVersion_10 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_10), value);
	}

	inline static int32_t get_offset_of_ItemId_11() { return static_cast<int32_t>(offsetof(PlayerConsumedItemEventData_t4154887560, ___ItemId_11)); }
	inline String_t* get_ItemId_11() const { return ___ItemId_11; }
	inline String_t** get_address_of_ItemId_11() { return &___ItemId_11; }
	inline void set_ItemId_11(String_t* value)
	{
		___ItemId_11 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_11), value);
	}

	inline static int32_t get_offset_of_ItemInstanceId_12() { return static_cast<int32_t>(offsetof(PlayerConsumedItemEventData_t4154887560, ___ItemInstanceId_12)); }
	inline String_t* get_ItemInstanceId_12() const { return ___ItemInstanceId_12; }
	inline String_t** get_address_of_ItemInstanceId_12() { return &___ItemInstanceId_12; }
	inline void set_ItemInstanceId_12(String_t* value)
	{
		___ItemInstanceId_12 = value;
		Il2CppCodeGenWriteBarrier((&___ItemInstanceId_12), value);
	}

	inline static int32_t get_offset_of_PreviousUsesRemaining_13() { return static_cast<int32_t>(offsetof(PlayerConsumedItemEventData_t4154887560, ___PreviousUsesRemaining_13)); }
	inline uint32_t get_PreviousUsesRemaining_13() const { return ___PreviousUsesRemaining_13; }
	inline uint32_t* get_address_of_PreviousUsesRemaining_13() { return &___PreviousUsesRemaining_13; }
	inline void set_PreviousUsesRemaining_13(uint32_t value)
	{
		___PreviousUsesRemaining_13 = value;
	}

	inline static int32_t get_offset_of_TitleId_14() { return static_cast<int32_t>(offsetof(PlayerConsumedItemEventData_t4154887560, ___TitleId_14)); }
	inline String_t* get_TitleId_14() const { return ___TitleId_14; }
	inline String_t** get_address_of_TitleId_14() { return &___TitleId_14; }
	inline void set_TitleId_14(String_t* value)
	{
		___TitleId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_14), value);
	}

	inline static int32_t get_offset_of_UsesRemaining_15() { return static_cast<int32_t>(offsetof(PlayerConsumedItemEventData_t4154887560, ___UsesRemaining_15)); }
	inline uint32_t get_UsesRemaining_15() const { return ___UsesRemaining_15; }
	inline uint32_t* get_address_of_UsesRemaining_15() { return &___UsesRemaining_15; }
	inline void set_UsesRemaining_15(uint32_t value)
	{
		___UsesRemaining_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONSUMEDITEMEVENTDATA_T4154887560_H
#ifndef PLAYERCREATEDEVENTDATA_T2667878432_H
#define PLAYERCREATEDEVENTDATA_T2667878432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerCreatedEventData
struct  PlayerCreatedEventData_t2667878432  : public PlayStreamEventBase_t3913229166
{
public:
	// System.DateTime PlayFab.PlayStreamModels.PlayerCreatedEventData::Created
	DateTime_t3738529785  ___Created_10;
	// System.String PlayFab.PlayStreamModels.PlayerCreatedEventData::PublisherId
	String_t* ___PublisherId_11;
	// System.String PlayFab.PlayStreamModels.PlayerCreatedEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_Created_10() { return static_cast<int32_t>(offsetof(PlayerCreatedEventData_t2667878432, ___Created_10)); }
	inline DateTime_t3738529785  get_Created_10() const { return ___Created_10; }
	inline DateTime_t3738529785 * get_address_of_Created_10() { return &___Created_10; }
	inline void set_Created_10(DateTime_t3738529785  value)
	{
		___Created_10 = value;
	}

	inline static int32_t get_offset_of_PublisherId_11() { return static_cast<int32_t>(offsetof(PlayerCreatedEventData_t2667878432, ___PublisherId_11)); }
	inline String_t* get_PublisherId_11() const { return ___PublisherId_11; }
	inline String_t** get_address_of_PublisherId_11() { return &___PublisherId_11; }
	inline void set_PublisherId_11(String_t* value)
	{
		___PublisherId_11 = value;
		Il2CppCodeGenWriteBarrier((&___PublisherId_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerCreatedEventData_t2667878432, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCREATEDEVENTDATA_T2667878432_H
#ifndef PLAYERDATAEXPORTEDEVENTDATA_T3946825333_H
#define PLAYERDATAEXPORTEDEVENTDATA_T3946825333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerDataExportedEventData
struct  PlayerDataExportedEventData_t3946825333  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerDataExportedEventData::ExportDownloadUrl
	String_t* ___ExportDownloadUrl_10;
	// System.String PlayFab.PlayStreamModels.PlayerDataExportedEventData::JobReceiptId
	String_t* ___JobReceiptId_11;
	// System.DateTime PlayFab.PlayStreamModels.PlayerDataExportedEventData::RequestTime
	DateTime_t3738529785  ___RequestTime_12;
	// System.String PlayFab.PlayStreamModels.PlayerDataExportedEventData::TitleId
	String_t* ___TitleId_13;

public:
	inline static int32_t get_offset_of_ExportDownloadUrl_10() { return static_cast<int32_t>(offsetof(PlayerDataExportedEventData_t3946825333, ___ExportDownloadUrl_10)); }
	inline String_t* get_ExportDownloadUrl_10() const { return ___ExportDownloadUrl_10; }
	inline String_t** get_address_of_ExportDownloadUrl_10() { return &___ExportDownloadUrl_10; }
	inline void set_ExportDownloadUrl_10(String_t* value)
	{
		___ExportDownloadUrl_10 = value;
		Il2CppCodeGenWriteBarrier((&___ExportDownloadUrl_10), value);
	}

	inline static int32_t get_offset_of_JobReceiptId_11() { return static_cast<int32_t>(offsetof(PlayerDataExportedEventData_t3946825333, ___JobReceiptId_11)); }
	inline String_t* get_JobReceiptId_11() const { return ___JobReceiptId_11; }
	inline String_t** get_address_of_JobReceiptId_11() { return &___JobReceiptId_11; }
	inline void set_JobReceiptId_11(String_t* value)
	{
		___JobReceiptId_11 = value;
		Il2CppCodeGenWriteBarrier((&___JobReceiptId_11), value);
	}

	inline static int32_t get_offset_of_RequestTime_12() { return static_cast<int32_t>(offsetof(PlayerDataExportedEventData_t3946825333, ___RequestTime_12)); }
	inline DateTime_t3738529785  get_RequestTime_12() const { return ___RequestTime_12; }
	inline DateTime_t3738529785 * get_address_of_RequestTime_12() { return &___RequestTime_12; }
	inline void set_RequestTime_12(DateTime_t3738529785  value)
	{
		___RequestTime_12 = value;
	}

	inline static int32_t get_offset_of_TitleId_13() { return static_cast<int32_t>(offsetof(PlayerDataExportedEventData_t3946825333, ___TitleId_13)); }
	inline String_t* get_TitleId_13() const { return ___TitleId_13; }
	inline String_t** get_address_of_TitleId_13() { return &___TitleId_13; }
	inline void set_TitleId_13(String_t* value)
	{
		___TitleId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERDATAEXPORTEDEVENTDATA_T3946825333_H
#ifndef PLAYERDEVICEINFOEVENTDATA_T3528130884_H
#define PLAYERDEVICEINFOEVENTDATA_T3528130884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerDeviceInfoEventData
struct  PlayerDeviceInfoEventData_t3528130884  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.PlayStreamModels.PlayerDeviceInfoEventData::DeviceInfo
	Dictionary_2_t2865362463 * ___DeviceInfo_10;
	// System.String PlayFab.PlayStreamModels.PlayerDeviceInfoEventData::TitleId
	String_t* ___TitleId_11;

public:
	inline static int32_t get_offset_of_DeviceInfo_10() { return static_cast<int32_t>(offsetof(PlayerDeviceInfoEventData_t3528130884, ___DeviceInfo_10)); }
	inline Dictionary_2_t2865362463 * get_DeviceInfo_10() const { return ___DeviceInfo_10; }
	inline Dictionary_2_t2865362463 ** get_address_of_DeviceInfo_10() { return &___DeviceInfo_10; }
	inline void set_DeviceInfo_10(Dictionary_2_t2865362463 * value)
	{
		___DeviceInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceInfo_10), value);
	}

	inline static int32_t get_offset_of_TitleId_11() { return static_cast<int32_t>(offsetof(PlayerDeviceInfoEventData_t3528130884, ___TitleId_11)); }
	inline String_t* get_TitleId_11() const { return ___TitleId_11; }
	inline String_t** get_address_of_TitleId_11() { return &___TitleId_11; }
	inline void set_TitleId_11(String_t* value)
	{
		___TitleId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERDEVICEINFOEVENTDATA_T3528130884_H
#ifndef PLAYERDISPLAYNAMECHANGEDEVENTDATA_T3185908839_H
#define PLAYERDISPLAYNAMECHANGEDEVENTDATA_T3185908839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerDisplayNameChangedEventData
struct  PlayerDisplayNameChangedEventData_t3185908839  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerDisplayNameChangedEventData::DisplayName
	String_t* ___DisplayName_10;
	// System.String PlayFab.PlayStreamModels.PlayerDisplayNameChangedEventData::PreviousDisplayName
	String_t* ___PreviousDisplayName_11;
	// System.String PlayFab.PlayStreamModels.PlayerDisplayNameChangedEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_DisplayName_10() { return static_cast<int32_t>(offsetof(PlayerDisplayNameChangedEventData_t3185908839, ___DisplayName_10)); }
	inline String_t* get_DisplayName_10() const { return ___DisplayName_10; }
	inline String_t** get_address_of_DisplayName_10() { return &___DisplayName_10; }
	inline void set_DisplayName_10(String_t* value)
	{
		___DisplayName_10 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_10), value);
	}

	inline static int32_t get_offset_of_PreviousDisplayName_11() { return static_cast<int32_t>(offsetof(PlayerDisplayNameChangedEventData_t3185908839, ___PreviousDisplayName_11)); }
	inline String_t* get_PreviousDisplayName_11() const { return ___PreviousDisplayName_11; }
	inline String_t** get_address_of_PreviousDisplayName_11() { return &___PreviousDisplayName_11; }
	inline void set_PreviousDisplayName_11(String_t* value)
	{
		___PreviousDisplayName_11 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousDisplayName_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerDisplayNameChangedEventData_t3185908839, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERDISPLAYNAMECHANGEDEVENTDATA_T3185908839_H
#ifndef PLAYERDISPLAYNAMEFILTEREDEVENTDATA_T3121250570_H
#define PLAYERDISPLAYNAMEFILTEREDEVENTDATA_T3121250570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerDisplayNameFilteredEventData
struct  PlayerDisplayNameFilteredEventData_t3121250570  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerDisplayNameFilteredEventData::DisplayName
	String_t* ___DisplayName_10;
	// System.String PlayFab.PlayStreamModels.PlayerDisplayNameFilteredEventData::TitleId
	String_t* ___TitleId_11;

public:
	inline static int32_t get_offset_of_DisplayName_10() { return static_cast<int32_t>(offsetof(PlayerDisplayNameFilteredEventData_t3121250570, ___DisplayName_10)); }
	inline String_t* get_DisplayName_10() const { return ___DisplayName_10; }
	inline String_t** get_address_of_DisplayName_10() { return &___DisplayName_10; }
	inline void set_DisplayName_10(String_t* value)
	{
		___DisplayName_10 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_10), value);
	}

	inline static int32_t get_offset_of_TitleId_11() { return static_cast<int32_t>(offsetof(PlayerDisplayNameFilteredEventData_t3121250570, ___TitleId_11)); }
	inline String_t* get_TitleId_11() const { return ___TitleId_11; }
	inline String_t** get_address_of_TitleId_11() { return &___TitleId_11; }
	inline void set_TitleId_11(String_t* value)
	{
		___TitleId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERDISPLAYNAMEFILTEREDEVENTDATA_T3121250570_H
#ifndef PLAYEREXECUTEDCLOUDSCRIPTEVENTDATA_T3609150561_H
#define PLAYEREXECUTEDCLOUDSCRIPTEVENTDATA_T3609150561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerExecutedCloudScriptEventData
struct  PlayerExecutedCloudScriptEventData_t3609150561  : public PlayStreamEventBase_t3913229166
{
public:
	// PlayFab.PlayStreamModels.ExecuteCloudScriptResult PlayFab.PlayStreamModels.PlayerExecutedCloudScriptEventData::CloudScriptExecutionResult
	ExecuteCloudScriptResult_t1291136388 * ___CloudScriptExecutionResult_10;
	// System.String PlayFab.PlayStreamModels.PlayerExecutedCloudScriptEventData::FunctionName
	String_t* ___FunctionName_11;
	// System.String PlayFab.PlayStreamModels.PlayerExecutedCloudScriptEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_CloudScriptExecutionResult_10() { return static_cast<int32_t>(offsetof(PlayerExecutedCloudScriptEventData_t3609150561, ___CloudScriptExecutionResult_10)); }
	inline ExecuteCloudScriptResult_t1291136388 * get_CloudScriptExecutionResult_10() const { return ___CloudScriptExecutionResult_10; }
	inline ExecuteCloudScriptResult_t1291136388 ** get_address_of_CloudScriptExecutionResult_10() { return &___CloudScriptExecutionResult_10; }
	inline void set_CloudScriptExecutionResult_10(ExecuteCloudScriptResult_t1291136388 * value)
	{
		___CloudScriptExecutionResult_10 = value;
		Il2CppCodeGenWriteBarrier((&___CloudScriptExecutionResult_10), value);
	}

	inline static int32_t get_offset_of_FunctionName_11() { return static_cast<int32_t>(offsetof(PlayerExecutedCloudScriptEventData_t3609150561, ___FunctionName_11)); }
	inline String_t* get_FunctionName_11() const { return ___FunctionName_11; }
	inline String_t** get_address_of_FunctionName_11() { return &___FunctionName_11; }
	inline void set_FunctionName_11(String_t* value)
	{
		___FunctionName_11 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionName_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerExecutedCloudScriptEventData_t3609150561, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREXECUTEDCLOUDSCRIPTEVENTDATA_T3609150561_H
#ifndef PLAYERINVENTORYITEMADDEDEVENTDATA_T4177594946_H
#define PLAYERINVENTORYITEMADDEDEVENTDATA_T4177594946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData
struct  PlayerInventoryItemAddedEventData_t4177594946  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::Annotation
	String_t* ___Annotation_10;
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::BundleContents
	List_1_t3319525431 * ___BundleContents_11;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::CatalogVersion
	String_t* ___CatalogVersion_12;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::Class
	String_t* ___Class_13;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::CouponCode
	String_t* ___CouponCode_14;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::DisplayName
	String_t* ___DisplayName_15;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::Expiration
	Nullable_1_t1166124571  ___Expiration_16;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::InstanceId
	String_t* ___InstanceId_17;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::ItemId
	String_t* ___ItemId_18;
	// System.Nullable`1<System.UInt32> PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::RemainingUses
	Nullable_1_t4282624060  ___RemainingUses_19;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::TitleId
	String_t* ___TitleId_20;

public:
	inline static int32_t get_offset_of_Annotation_10() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t4177594946, ___Annotation_10)); }
	inline String_t* get_Annotation_10() const { return ___Annotation_10; }
	inline String_t** get_address_of_Annotation_10() { return &___Annotation_10; }
	inline void set_Annotation_10(String_t* value)
	{
		___Annotation_10 = value;
		Il2CppCodeGenWriteBarrier((&___Annotation_10), value);
	}

	inline static int32_t get_offset_of_BundleContents_11() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t4177594946, ___BundleContents_11)); }
	inline List_1_t3319525431 * get_BundleContents_11() const { return ___BundleContents_11; }
	inline List_1_t3319525431 ** get_address_of_BundleContents_11() { return &___BundleContents_11; }
	inline void set_BundleContents_11(List_1_t3319525431 * value)
	{
		___BundleContents_11 = value;
		Il2CppCodeGenWriteBarrier((&___BundleContents_11), value);
	}

	inline static int32_t get_offset_of_CatalogVersion_12() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t4177594946, ___CatalogVersion_12)); }
	inline String_t* get_CatalogVersion_12() const { return ___CatalogVersion_12; }
	inline String_t** get_address_of_CatalogVersion_12() { return &___CatalogVersion_12; }
	inline void set_CatalogVersion_12(String_t* value)
	{
		___CatalogVersion_12 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_12), value);
	}

	inline static int32_t get_offset_of_Class_13() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t4177594946, ___Class_13)); }
	inline String_t* get_Class_13() const { return ___Class_13; }
	inline String_t** get_address_of_Class_13() { return &___Class_13; }
	inline void set_Class_13(String_t* value)
	{
		___Class_13 = value;
		Il2CppCodeGenWriteBarrier((&___Class_13), value);
	}

	inline static int32_t get_offset_of_CouponCode_14() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t4177594946, ___CouponCode_14)); }
	inline String_t* get_CouponCode_14() const { return ___CouponCode_14; }
	inline String_t** get_address_of_CouponCode_14() { return &___CouponCode_14; }
	inline void set_CouponCode_14(String_t* value)
	{
		___CouponCode_14 = value;
		Il2CppCodeGenWriteBarrier((&___CouponCode_14), value);
	}

	inline static int32_t get_offset_of_DisplayName_15() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t4177594946, ___DisplayName_15)); }
	inline String_t* get_DisplayName_15() const { return ___DisplayName_15; }
	inline String_t** get_address_of_DisplayName_15() { return &___DisplayName_15; }
	inline void set_DisplayName_15(String_t* value)
	{
		___DisplayName_15 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_15), value);
	}

	inline static int32_t get_offset_of_Expiration_16() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t4177594946, ___Expiration_16)); }
	inline Nullable_1_t1166124571  get_Expiration_16() const { return ___Expiration_16; }
	inline Nullable_1_t1166124571 * get_address_of_Expiration_16() { return &___Expiration_16; }
	inline void set_Expiration_16(Nullable_1_t1166124571  value)
	{
		___Expiration_16 = value;
	}

	inline static int32_t get_offset_of_InstanceId_17() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t4177594946, ___InstanceId_17)); }
	inline String_t* get_InstanceId_17() const { return ___InstanceId_17; }
	inline String_t** get_address_of_InstanceId_17() { return &___InstanceId_17; }
	inline void set_InstanceId_17(String_t* value)
	{
		___InstanceId_17 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceId_17), value);
	}

	inline static int32_t get_offset_of_ItemId_18() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t4177594946, ___ItemId_18)); }
	inline String_t* get_ItemId_18() const { return ___ItemId_18; }
	inline String_t** get_address_of_ItemId_18() { return &___ItemId_18; }
	inline void set_ItemId_18(String_t* value)
	{
		___ItemId_18 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_18), value);
	}

	inline static int32_t get_offset_of_RemainingUses_19() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t4177594946, ___RemainingUses_19)); }
	inline Nullable_1_t4282624060  get_RemainingUses_19() const { return ___RemainingUses_19; }
	inline Nullable_1_t4282624060 * get_address_of_RemainingUses_19() { return &___RemainingUses_19; }
	inline void set_RemainingUses_19(Nullable_1_t4282624060  value)
	{
		___RemainingUses_19 = value;
	}

	inline static int32_t get_offset_of_TitleId_20() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t4177594946, ___TitleId_20)); }
	inline String_t* get_TitleId_20() const { return ___TitleId_20; }
	inline String_t** get_address_of_TitleId_20() { return &___TitleId_20; }
	inline void set_TitleId_20(String_t* value)
	{
		___TitleId_20 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERINVENTORYITEMADDEDEVENTDATA_T4177594946_H
#ifndef PLAYERJOINEDLOBBYEVENTDATA_T1438844628_H
#define PLAYERJOINEDLOBBYEVENTDATA_T1438844628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData
struct  PlayerJoinedLobbyEventData_t1438844628  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::GameMode
	String_t* ___GameMode_10;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::LobbyId
	String_t* ___LobbyId_11;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::Region
	String_t* ___Region_12;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_13;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::ServerHost
	String_t* ___ServerHost_14;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::ServerHostInstanceId
	String_t* ___ServerHostInstanceId_15;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::ServerIPV4Address
	String_t* ___ServerIPV4Address_16;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::ServerIPV6Address
	String_t* ___ServerIPV6Address_17;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::ServerPort
	uint32_t ___ServerPort_18;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::TitleId
	String_t* ___TitleId_19;

public:
	inline static int32_t get_offset_of_GameMode_10() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t1438844628, ___GameMode_10)); }
	inline String_t* get_GameMode_10() const { return ___GameMode_10; }
	inline String_t** get_address_of_GameMode_10() { return &___GameMode_10; }
	inline void set_GameMode_10(String_t* value)
	{
		___GameMode_10 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_10), value);
	}

	inline static int32_t get_offset_of_LobbyId_11() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t1438844628, ___LobbyId_11)); }
	inline String_t* get_LobbyId_11() const { return ___LobbyId_11; }
	inline String_t** get_address_of_LobbyId_11() { return &___LobbyId_11; }
	inline void set_LobbyId_11(String_t* value)
	{
		___LobbyId_11 = value;
		Il2CppCodeGenWriteBarrier((&___LobbyId_11), value);
	}

	inline static int32_t get_offset_of_Region_12() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t1438844628, ___Region_12)); }
	inline String_t* get_Region_12() const { return ___Region_12; }
	inline String_t** get_address_of_Region_12() { return &___Region_12; }
	inline void set_Region_12(String_t* value)
	{
		___Region_12 = value;
		Il2CppCodeGenWriteBarrier((&___Region_12), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_13() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t1438844628, ___ServerBuildVersion_13)); }
	inline String_t* get_ServerBuildVersion_13() const { return ___ServerBuildVersion_13; }
	inline String_t** get_address_of_ServerBuildVersion_13() { return &___ServerBuildVersion_13; }
	inline void set_ServerBuildVersion_13(String_t* value)
	{
		___ServerBuildVersion_13 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_13), value);
	}

	inline static int32_t get_offset_of_ServerHost_14() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t1438844628, ___ServerHost_14)); }
	inline String_t* get_ServerHost_14() const { return ___ServerHost_14; }
	inline String_t** get_address_of_ServerHost_14() { return &___ServerHost_14; }
	inline void set_ServerHost_14(String_t* value)
	{
		___ServerHost_14 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_14), value);
	}

	inline static int32_t get_offset_of_ServerHostInstanceId_15() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t1438844628, ___ServerHostInstanceId_15)); }
	inline String_t* get_ServerHostInstanceId_15() const { return ___ServerHostInstanceId_15; }
	inline String_t** get_address_of_ServerHostInstanceId_15() { return &___ServerHostInstanceId_15; }
	inline void set_ServerHostInstanceId_15(String_t* value)
	{
		___ServerHostInstanceId_15 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostInstanceId_15), value);
	}

	inline static int32_t get_offset_of_ServerIPV4Address_16() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t1438844628, ___ServerIPV4Address_16)); }
	inline String_t* get_ServerIPV4Address_16() const { return ___ServerIPV4Address_16; }
	inline String_t** get_address_of_ServerIPV4Address_16() { return &___ServerIPV4Address_16; }
	inline void set_ServerIPV4Address_16(String_t* value)
	{
		___ServerIPV4Address_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV4Address_16), value);
	}

	inline static int32_t get_offset_of_ServerIPV6Address_17() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t1438844628, ___ServerIPV6Address_17)); }
	inline String_t* get_ServerIPV6Address_17() const { return ___ServerIPV6Address_17; }
	inline String_t** get_address_of_ServerIPV6Address_17() { return &___ServerIPV6Address_17; }
	inline void set_ServerIPV6Address_17(String_t* value)
	{
		___ServerIPV6Address_17 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV6Address_17), value);
	}

	inline static int32_t get_offset_of_ServerPort_18() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t1438844628, ___ServerPort_18)); }
	inline uint32_t get_ServerPort_18() const { return ___ServerPort_18; }
	inline uint32_t* get_address_of_ServerPort_18() { return &___ServerPort_18; }
	inline void set_ServerPort_18(uint32_t value)
	{
		___ServerPort_18 = value;
	}

	inline static int32_t get_offset_of_TitleId_19() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t1438844628, ___TitleId_19)); }
	inline String_t* get_TitleId_19() const { return ___TitleId_19; }
	inline String_t** get_address_of_TitleId_19() { return &___TitleId_19; }
	inline void set_TitleId_19(String_t* value)
	{
		___TitleId_19 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERJOINEDLOBBYEVENTDATA_T1438844628_H
#ifndef PLAYERLEFTLOBBYEVENTDATA_T1957663752_H
#define PLAYERLEFTLOBBYEVENTDATA_T1957663752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerLeftLobbyEventData
struct  PlayerLeftLobbyEventData_t1957663752  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::GameMode
	String_t* ___GameMode_10;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::LobbyId
	String_t* ___LobbyId_11;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::Region
	String_t* ___Region_12;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_13;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::ServerHost
	String_t* ___ServerHost_14;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::ServerHostInstanceId
	String_t* ___ServerHostInstanceId_15;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::ServerIPV4Address
	String_t* ___ServerIPV4Address_16;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::ServerIPV6Address
	String_t* ___ServerIPV6Address_17;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::ServerPort
	uint32_t ___ServerPort_18;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::TitleId
	String_t* ___TitleId_19;

public:
	inline static int32_t get_offset_of_GameMode_10() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t1957663752, ___GameMode_10)); }
	inline String_t* get_GameMode_10() const { return ___GameMode_10; }
	inline String_t** get_address_of_GameMode_10() { return &___GameMode_10; }
	inline void set_GameMode_10(String_t* value)
	{
		___GameMode_10 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_10), value);
	}

	inline static int32_t get_offset_of_LobbyId_11() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t1957663752, ___LobbyId_11)); }
	inline String_t* get_LobbyId_11() const { return ___LobbyId_11; }
	inline String_t** get_address_of_LobbyId_11() { return &___LobbyId_11; }
	inline void set_LobbyId_11(String_t* value)
	{
		___LobbyId_11 = value;
		Il2CppCodeGenWriteBarrier((&___LobbyId_11), value);
	}

	inline static int32_t get_offset_of_Region_12() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t1957663752, ___Region_12)); }
	inline String_t* get_Region_12() const { return ___Region_12; }
	inline String_t** get_address_of_Region_12() { return &___Region_12; }
	inline void set_Region_12(String_t* value)
	{
		___Region_12 = value;
		Il2CppCodeGenWriteBarrier((&___Region_12), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_13() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t1957663752, ___ServerBuildVersion_13)); }
	inline String_t* get_ServerBuildVersion_13() const { return ___ServerBuildVersion_13; }
	inline String_t** get_address_of_ServerBuildVersion_13() { return &___ServerBuildVersion_13; }
	inline void set_ServerBuildVersion_13(String_t* value)
	{
		___ServerBuildVersion_13 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_13), value);
	}

	inline static int32_t get_offset_of_ServerHost_14() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t1957663752, ___ServerHost_14)); }
	inline String_t* get_ServerHost_14() const { return ___ServerHost_14; }
	inline String_t** get_address_of_ServerHost_14() { return &___ServerHost_14; }
	inline void set_ServerHost_14(String_t* value)
	{
		___ServerHost_14 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_14), value);
	}

	inline static int32_t get_offset_of_ServerHostInstanceId_15() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t1957663752, ___ServerHostInstanceId_15)); }
	inline String_t* get_ServerHostInstanceId_15() const { return ___ServerHostInstanceId_15; }
	inline String_t** get_address_of_ServerHostInstanceId_15() { return &___ServerHostInstanceId_15; }
	inline void set_ServerHostInstanceId_15(String_t* value)
	{
		___ServerHostInstanceId_15 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostInstanceId_15), value);
	}

	inline static int32_t get_offset_of_ServerIPV4Address_16() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t1957663752, ___ServerIPV4Address_16)); }
	inline String_t* get_ServerIPV4Address_16() const { return ___ServerIPV4Address_16; }
	inline String_t** get_address_of_ServerIPV4Address_16() { return &___ServerIPV4Address_16; }
	inline void set_ServerIPV4Address_16(String_t* value)
	{
		___ServerIPV4Address_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV4Address_16), value);
	}

	inline static int32_t get_offset_of_ServerIPV6Address_17() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t1957663752, ___ServerIPV6Address_17)); }
	inline String_t* get_ServerIPV6Address_17() const { return ___ServerIPV6Address_17; }
	inline String_t** get_address_of_ServerIPV6Address_17() { return &___ServerIPV6Address_17; }
	inline void set_ServerIPV6Address_17(String_t* value)
	{
		___ServerIPV6Address_17 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV6Address_17), value);
	}

	inline static int32_t get_offset_of_ServerPort_18() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t1957663752, ___ServerPort_18)); }
	inline uint32_t get_ServerPort_18() const { return ___ServerPort_18; }
	inline uint32_t* get_address_of_ServerPort_18() { return &___ServerPort_18; }
	inline void set_ServerPort_18(uint32_t value)
	{
		___ServerPort_18 = value;
	}

	inline static int32_t get_offset_of_TitleId_19() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t1957663752, ___TitleId_19)); }
	inline String_t* get_TitleId_19() const { return ___TitleId_19; }
	inline String_t** get_address_of_TitleId_19() { return &___TitleId_19; }
	inline void set_TitleId_19(String_t* value)
	{
		___TitleId_19 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLEFTLOBBYEVENTDATA_T1957663752_H
#ifndef PLAYERLINKEDACCOUNTEVENTDATA_T496376666_H
#define PLAYERLINKEDACCOUNTEVENTDATA_T496376666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerLinkedAccountEventData
struct  PlayerLinkedAccountEventData_t496376666  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerLinkedAccountEventData::Email
	String_t* ___Email_10;
	// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider> PlayFab.PlayStreamModels.PlayerLinkedAccountEventData::Origination
	Nullable_1_t1369806624  ___Origination_11;
	// System.String PlayFab.PlayStreamModels.PlayerLinkedAccountEventData::OriginationUserId
	String_t* ___OriginationUserId_12;
	// System.String PlayFab.PlayStreamModels.PlayerLinkedAccountEventData::TitleId
	String_t* ___TitleId_13;
	// System.String PlayFab.PlayStreamModels.PlayerLinkedAccountEventData::Username
	String_t* ___Username_14;

public:
	inline static int32_t get_offset_of_Email_10() { return static_cast<int32_t>(offsetof(PlayerLinkedAccountEventData_t496376666, ___Email_10)); }
	inline String_t* get_Email_10() const { return ___Email_10; }
	inline String_t** get_address_of_Email_10() { return &___Email_10; }
	inline void set_Email_10(String_t* value)
	{
		___Email_10 = value;
		Il2CppCodeGenWriteBarrier((&___Email_10), value);
	}

	inline static int32_t get_offset_of_Origination_11() { return static_cast<int32_t>(offsetof(PlayerLinkedAccountEventData_t496376666, ___Origination_11)); }
	inline Nullable_1_t1369806624  get_Origination_11() const { return ___Origination_11; }
	inline Nullable_1_t1369806624 * get_address_of_Origination_11() { return &___Origination_11; }
	inline void set_Origination_11(Nullable_1_t1369806624  value)
	{
		___Origination_11 = value;
	}

	inline static int32_t get_offset_of_OriginationUserId_12() { return static_cast<int32_t>(offsetof(PlayerLinkedAccountEventData_t496376666, ___OriginationUserId_12)); }
	inline String_t* get_OriginationUserId_12() const { return ___OriginationUserId_12; }
	inline String_t** get_address_of_OriginationUserId_12() { return &___OriginationUserId_12; }
	inline void set_OriginationUserId_12(String_t* value)
	{
		___OriginationUserId_12 = value;
		Il2CppCodeGenWriteBarrier((&___OriginationUserId_12), value);
	}

	inline static int32_t get_offset_of_TitleId_13() { return static_cast<int32_t>(offsetof(PlayerLinkedAccountEventData_t496376666, ___TitleId_13)); }
	inline String_t* get_TitleId_13() const { return ___TitleId_13; }
	inline String_t** get_address_of_TitleId_13() { return &___TitleId_13; }
	inline void set_TitleId_13(String_t* value)
	{
		___TitleId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_13), value);
	}

	inline static int32_t get_offset_of_Username_14() { return static_cast<int32_t>(offsetof(PlayerLinkedAccountEventData_t496376666, ___Username_14)); }
	inline String_t* get_Username_14() const { return ___Username_14; }
	inline String_t** get_address_of_Username_14() { return &___Username_14; }
	inline void set_Username_14(String_t* value)
	{
		___Username_14 = value;
		Il2CppCodeGenWriteBarrier((&___Username_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLINKEDACCOUNTEVENTDATA_T496376666_H
#ifndef PLAYERLOGGEDINEVENTDATA_T2733697567_H
#define PLAYERLOGGEDINEVENTDATA_T2733697567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerLoggedInEventData
struct  PlayerLoggedInEventData_t2733697567  : public PlayStreamEventBase_t3913229166
{
public:
	// PlayFab.PlayStreamModels.EventLocation PlayFab.PlayStreamModels.PlayerLoggedInEventData::Location
	EventLocation_t168363587 * ___Location_10;
	// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider> PlayFab.PlayStreamModels.PlayerLoggedInEventData::Platform
	Nullable_1_t1369806624  ___Platform_11;
	// System.String PlayFab.PlayStreamModels.PlayerLoggedInEventData::PlatformUserId
	String_t* ___PlatformUserId_12;
	// System.String PlayFab.PlayStreamModels.PlayerLoggedInEventData::PlatformUserName
	String_t* ___PlatformUserName_13;
	// System.String PlayFab.PlayStreamModels.PlayerLoggedInEventData::TitleId
	String_t* ___TitleId_14;

public:
	inline static int32_t get_offset_of_Location_10() { return static_cast<int32_t>(offsetof(PlayerLoggedInEventData_t2733697567, ___Location_10)); }
	inline EventLocation_t168363587 * get_Location_10() const { return ___Location_10; }
	inline EventLocation_t168363587 ** get_address_of_Location_10() { return &___Location_10; }
	inline void set_Location_10(EventLocation_t168363587 * value)
	{
		___Location_10 = value;
		Il2CppCodeGenWriteBarrier((&___Location_10), value);
	}

	inline static int32_t get_offset_of_Platform_11() { return static_cast<int32_t>(offsetof(PlayerLoggedInEventData_t2733697567, ___Platform_11)); }
	inline Nullable_1_t1369806624  get_Platform_11() const { return ___Platform_11; }
	inline Nullable_1_t1369806624 * get_address_of_Platform_11() { return &___Platform_11; }
	inline void set_Platform_11(Nullable_1_t1369806624  value)
	{
		___Platform_11 = value;
	}

	inline static int32_t get_offset_of_PlatformUserId_12() { return static_cast<int32_t>(offsetof(PlayerLoggedInEventData_t2733697567, ___PlatformUserId_12)); }
	inline String_t* get_PlatformUserId_12() const { return ___PlatformUserId_12; }
	inline String_t** get_address_of_PlatformUserId_12() { return &___PlatformUserId_12; }
	inline void set_PlatformUserId_12(String_t* value)
	{
		___PlatformUserId_12 = value;
		Il2CppCodeGenWriteBarrier((&___PlatformUserId_12), value);
	}

	inline static int32_t get_offset_of_PlatformUserName_13() { return static_cast<int32_t>(offsetof(PlayerLoggedInEventData_t2733697567, ___PlatformUserName_13)); }
	inline String_t* get_PlatformUserName_13() const { return ___PlatformUserName_13; }
	inline String_t** get_address_of_PlatformUserName_13() { return &___PlatformUserName_13; }
	inline void set_PlatformUserName_13(String_t* value)
	{
		___PlatformUserName_13 = value;
		Il2CppCodeGenWriteBarrier((&___PlatformUserName_13), value);
	}

	inline static int32_t get_offset_of_TitleId_14() { return static_cast<int32_t>(offsetof(PlayerLoggedInEventData_t2733697567, ___TitleId_14)); }
	inline String_t* get_TitleId_14() const { return ___TitleId_14; }
	inline String_t** get_address_of_TitleId_14() { return &___TitleId_14; }
	inline void set_TitleId_14(String_t* value)
	{
		___TitleId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLOGGEDINEVENTDATA_T2733697567_H
#ifndef PLAYERMATCHEDWITHLOBBYEVENTDATA_T3866319770_H
#define PLAYERMATCHEDWITHLOBBYEVENTDATA_T3866319770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData
struct  PlayerMatchedWithLobbyEventData_t3866319770  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::GameMode
	String_t* ___GameMode_10;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::LobbyId
	String_t* ___LobbyId_11;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::Region
	String_t* ___Region_12;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_13;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::ServerHost
	String_t* ___ServerHost_14;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::ServerHostInstanceId
	String_t* ___ServerHostInstanceId_15;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::ServerIPV4Address
	String_t* ___ServerIPV4Address_16;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::ServerIPV6Address
	String_t* ___ServerIPV6Address_17;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::ServerPort
	uint32_t ___ServerPort_18;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::TitleId
	String_t* ___TitleId_19;

public:
	inline static int32_t get_offset_of_GameMode_10() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t3866319770, ___GameMode_10)); }
	inline String_t* get_GameMode_10() const { return ___GameMode_10; }
	inline String_t** get_address_of_GameMode_10() { return &___GameMode_10; }
	inline void set_GameMode_10(String_t* value)
	{
		___GameMode_10 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_10), value);
	}

	inline static int32_t get_offset_of_LobbyId_11() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t3866319770, ___LobbyId_11)); }
	inline String_t* get_LobbyId_11() const { return ___LobbyId_11; }
	inline String_t** get_address_of_LobbyId_11() { return &___LobbyId_11; }
	inline void set_LobbyId_11(String_t* value)
	{
		___LobbyId_11 = value;
		Il2CppCodeGenWriteBarrier((&___LobbyId_11), value);
	}

	inline static int32_t get_offset_of_Region_12() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t3866319770, ___Region_12)); }
	inline String_t* get_Region_12() const { return ___Region_12; }
	inline String_t** get_address_of_Region_12() { return &___Region_12; }
	inline void set_Region_12(String_t* value)
	{
		___Region_12 = value;
		Il2CppCodeGenWriteBarrier((&___Region_12), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_13() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t3866319770, ___ServerBuildVersion_13)); }
	inline String_t* get_ServerBuildVersion_13() const { return ___ServerBuildVersion_13; }
	inline String_t** get_address_of_ServerBuildVersion_13() { return &___ServerBuildVersion_13; }
	inline void set_ServerBuildVersion_13(String_t* value)
	{
		___ServerBuildVersion_13 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_13), value);
	}

	inline static int32_t get_offset_of_ServerHost_14() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t3866319770, ___ServerHost_14)); }
	inline String_t* get_ServerHost_14() const { return ___ServerHost_14; }
	inline String_t** get_address_of_ServerHost_14() { return &___ServerHost_14; }
	inline void set_ServerHost_14(String_t* value)
	{
		___ServerHost_14 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_14), value);
	}

	inline static int32_t get_offset_of_ServerHostInstanceId_15() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t3866319770, ___ServerHostInstanceId_15)); }
	inline String_t* get_ServerHostInstanceId_15() const { return ___ServerHostInstanceId_15; }
	inline String_t** get_address_of_ServerHostInstanceId_15() { return &___ServerHostInstanceId_15; }
	inline void set_ServerHostInstanceId_15(String_t* value)
	{
		___ServerHostInstanceId_15 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostInstanceId_15), value);
	}

	inline static int32_t get_offset_of_ServerIPV4Address_16() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t3866319770, ___ServerIPV4Address_16)); }
	inline String_t* get_ServerIPV4Address_16() const { return ___ServerIPV4Address_16; }
	inline String_t** get_address_of_ServerIPV4Address_16() { return &___ServerIPV4Address_16; }
	inline void set_ServerIPV4Address_16(String_t* value)
	{
		___ServerIPV4Address_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV4Address_16), value);
	}

	inline static int32_t get_offset_of_ServerIPV6Address_17() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t3866319770, ___ServerIPV6Address_17)); }
	inline String_t* get_ServerIPV6Address_17() const { return ___ServerIPV6Address_17; }
	inline String_t** get_address_of_ServerIPV6Address_17() { return &___ServerIPV6Address_17; }
	inline void set_ServerIPV6Address_17(String_t* value)
	{
		___ServerIPV6Address_17 = value;
		Il2CppCodeGenWriteBarrier((&___ServerIPV6Address_17), value);
	}

	inline static int32_t get_offset_of_ServerPort_18() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t3866319770, ___ServerPort_18)); }
	inline uint32_t get_ServerPort_18() const { return ___ServerPort_18; }
	inline uint32_t* get_address_of_ServerPort_18() { return &___ServerPort_18; }
	inline void set_ServerPort_18(uint32_t value)
	{
		___ServerPort_18 = value;
	}

	inline static int32_t get_offset_of_TitleId_19() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t3866319770, ___TitleId_19)); }
	inline String_t* get_TitleId_19() const { return ___TitleId_19; }
	inline String_t** get_address_of_TitleId_19() { return &___TitleId_19; }
	inline void set_TitleId_19(String_t* value)
	{
		___TitleId_19 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERMATCHEDWITHLOBBYEVENTDATA_T3866319770_H
#ifndef PLAYERPASSWORDRESETLINKSENTEVENTDATA_T3829132934_H
#define PLAYERPASSWORDRESETLINKSENTEVENTDATA_T3829132934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData
struct  PlayerPasswordResetLinkSentEventData_t3829132934  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.PasswordResetInitiationSource> PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData::InitiatedBy
	Nullable_1_t3992660930  ___InitiatedBy_10;
	// System.String PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData::InitiatedFromIPAddress
	String_t* ___InitiatedFromIPAddress_11;
	// System.DateTime PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData::LinkExpiration
	DateTime_t3738529785  ___LinkExpiration_12;
	// System.String PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData::PasswordResetId
	String_t* ___PasswordResetId_13;
	// System.String PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData::RecoveryEmailAddress
	String_t* ___RecoveryEmailAddress_14;
	// System.String PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_InitiatedBy_10() { return static_cast<int32_t>(offsetof(PlayerPasswordResetLinkSentEventData_t3829132934, ___InitiatedBy_10)); }
	inline Nullable_1_t3992660930  get_InitiatedBy_10() const { return ___InitiatedBy_10; }
	inline Nullable_1_t3992660930 * get_address_of_InitiatedBy_10() { return &___InitiatedBy_10; }
	inline void set_InitiatedBy_10(Nullable_1_t3992660930  value)
	{
		___InitiatedBy_10 = value;
	}

	inline static int32_t get_offset_of_InitiatedFromIPAddress_11() { return static_cast<int32_t>(offsetof(PlayerPasswordResetLinkSentEventData_t3829132934, ___InitiatedFromIPAddress_11)); }
	inline String_t* get_InitiatedFromIPAddress_11() const { return ___InitiatedFromIPAddress_11; }
	inline String_t** get_address_of_InitiatedFromIPAddress_11() { return &___InitiatedFromIPAddress_11; }
	inline void set_InitiatedFromIPAddress_11(String_t* value)
	{
		___InitiatedFromIPAddress_11 = value;
		Il2CppCodeGenWriteBarrier((&___InitiatedFromIPAddress_11), value);
	}

	inline static int32_t get_offset_of_LinkExpiration_12() { return static_cast<int32_t>(offsetof(PlayerPasswordResetLinkSentEventData_t3829132934, ___LinkExpiration_12)); }
	inline DateTime_t3738529785  get_LinkExpiration_12() const { return ___LinkExpiration_12; }
	inline DateTime_t3738529785 * get_address_of_LinkExpiration_12() { return &___LinkExpiration_12; }
	inline void set_LinkExpiration_12(DateTime_t3738529785  value)
	{
		___LinkExpiration_12 = value;
	}

	inline static int32_t get_offset_of_PasswordResetId_13() { return static_cast<int32_t>(offsetof(PlayerPasswordResetLinkSentEventData_t3829132934, ___PasswordResetId_13)); }
	inline String_t* get_PasswordResetId_13() const { return ___PasswordResetId_13; }
	inline String_t** get_address_of_PasswordResetId_13() { return &___PasswordResetId_13; }
	inline void set_PasswordResetId_13(String_t* value)
	{
		___PasswordResetId_13 = value;
		Il2CppCodeGenWriteBarrier((&___PasswordResetId_13), value);
	}

	inline static int32_t get_offset_of_RecoveryEmailAddress_14() { return static_cast<int32_t>(offsetof(PlayerPasswordResetLinkSentEventData_t3829132934, ___RecoveryEmailAddress_14)); }
	inline String_t* get_RecoveryEmailAddress_14() const { return ___RecoveryEmailAddress_14; }
	inline String_t** get_address_of_RecoveryEmailAddress_14() { return &___RecoveryEmailAddress_14; }
	inline void set_RecoveryEmailAddress_14(String_t* value)
	{
		___RecoveryEmailAddress_14 = value;
		Il2CppCodeGenWriteBarrier((&___RecoveryEmailAddress_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerPasswordResetLinkSentEventData_t3829132934, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPASSWORDRESETLINKSENTEVENTDATA_T3829132934_H
#ifndef PLAYERPAYFORPURCHASEEVENTDATA_T3690698165_H
#define PLAYERPAYFORPURCHASEEVENTDATA_T3690698165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerPayForPurchaseEventData
struct  PlayerPayForPurchaseEventData_t3690698165  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerPayForPurchaseEventData::OrderId
	String_t* ___OrderId_10;
	// System.String PlayFab.PlayStreamModels.PlayerPayForPurchaseEventData::ProviderData
	String_t* ___ProviderData_11;
	// System.String PlayFab.PlayStreamModels.PlayerPayForPurchaseEventData::ProviderName
	String_t* ___ProviderName_12;
	// System.String PlayFab.PlayStreamModels.PlayerPayForPurchaseEventData::ProviderToken
	String_t* ___ProviderToken_13;
	// System.String PlayFab.PlayStreamModels.PlayerPayForPurchaseEventData::PurchaseConfirmationPageURL
	String_t* ___PurchaseConfirmationPageURL_14;
	// System.String PlayFab.PlayStreamModels.PlayerPayForPurchaseEventData::PurchaseCurrency
	String_t* ___PurchaseCurrency_15;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerPayForPurchaseEventData::PurchasePrice
	uint32_t ___PurchasePrice_16;
	// System.Nullable`1<PlayFab.PlayStreamModels.TransactionStatus> PlayFab.PlayStreamModels.PlayerPayForPurchaseEventData::Status
	Nullable_1_t3450307495  ___Status_17;
	// System.String PlayFab.PlayStreamModels.PlayerPayForPurchaseEventData::TitleId
	String_t* ___TitleId_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.PlayStreamModels.PlayerPayForPurchaseEventData::VirtualCurrencyBalances
	Dictionary_2_t2736202052 * ___VirtualCurrencyBalances_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.PlayStreamModels.PlayerPayForPurchaseEventData::VirtualCurrencyGrants
	Dictionary_2_t2736202052 * ___VirtualCurrencyGrants_20;

public:
	inline static int32_t get_offset_of_OrderId_10() { return static_cast<int32_t>(offsetof(PlayerPayForPurchaseEventData_t3690698165, ___OrderId_10)); }
	inline String_t* get_OrderId_10() const { return ___OrderId_10; }
	inline String_t** get_address_of_OrderId_10() { return &___OrderId_10; }
	inline void set_OrderId_10(String_t* value)
	{
		___OrderId_10 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_10), value);
	}

	inline static int32_t get_offset_of_ProviderData_11() { return static_cast<int32_t>(offsetof(PlayerPayForPurchaseEventData_t3690698165, ___ProviderData_11)); }
	inline String_t* get_ProviderData_11() const { return ___ProviderData_11; }
	inline String_t** get_address_of_ProviderData_11() { return &___ProviderData_11; }
	inline void set_ProviderData_11(String_t* value)
	{
		___ProviderData_11 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderData_11), value);
	}

	inline static int32_t get_offset_of_ProviderName_12() { return static_cast<int32_t>(offsetof(PlayerPayForPurchaseEventData_t3690698165, ___ProviderName_12)); }
	inline String_t* get_ProviderName_12() const { return ___ProviderName_12; }
	inline String_t** get_address_of_ProviderName_12() { return &___ProviderName_12; }
	inline void set_ProviderName_12(String_t* value)
	{
		___ProviderName_12 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_12), value);
	}

	inline static int32_t get_offset_of_ProviderToken_13() { return static_cast<int32_t>(offsetof(PlayerPayForPurchaseEventData_t3690698165, ___ProviderToken_13)); }
	inline String_t* get_ProviderToken_13() const { return ___ProviderToken_13; }
	inline String_t** get_address_of_ProviderToken_13() { return &___ProviderToken_13; }
	inline void set_ProviderToken_13(String_t* value)
	{
		___ProviderToken_13 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderToken_13), value);
	}

	inline static int32_t get_offset_of_PurchaseConfirmationPageURL_14() { return static_cast<int32_t>(offsetof(PlayerPayForPurchaseEventData_t3690698165, ___PurchaseConfirmationPageURL_14)); }
	inline String_t* get_PurchaseConfirmationPageURL_14() const { return ___PurchaseConfirmationPageURL_14; }
	inline String_t** get_address_of_PurchaseConfirmationPageURL_14() { return &___PurchaseConfirmationPageURL_14; }
	inline void set_PurchaseConfirmationPageURL_14(String_t* value)
	{
		___PurchaseConfirmationPageURL_14 = value;
		Il2CppCodeGenWriteBarrier((&___PurchaseConfirmationPageURL_14), value);
	}

	inline static int32_t get_offset_of_PurchaseCurrency_15() { return static_cast<int32_t>(offsetof(PlayerPayForPurchaseEventData_t3690698165, ___PurchaseCurrency_15)); }
	inline String_t* get_PurchaseCurrency_15() const { return ___PurchaseCurrency_15; }
	inline String_t** get_address_of_PurchaseCurrency_15() { return &___PurchaseCurrency_15; }
	inline void set_PurchaseCurrency_15(String_t* value)
	{
		___PurchaseCurrency_15 = value;
		Il2CppCodeGenWriteBarrier((&___PurchaseCurrency_15), value);
	}

	inline static int32_t get_offset_of_PurchasePrice_16() { return static_cast<int32_t>(offsetof(PlayerPayForPurchaseEventData_t3690698165, ___PurchasePrice_16)); }
	inline uint32_t get_PurchasePrice_16() const { return ___PurchasePrice_16; }
	inline uint32_t* get_address_of_PurchasePrice_16() { return &___PurchasePrice_16; }
	inline void set_PurchasePrice_16(uint32_t value)
	{
		___PurchasePrice_16 = value;
	}

	inline static int32_t get_offset_of_Status_17() { return static_cast<int32_t>(offsetof(PlayerPayForPurchaseEventData_t3690698165, ___Status_17)); }
	inline Nullable_1_t3450307495  get_Status_17() const { return ___Status_17; }
	inline Nullable_1_t3450307495 * get_address_of_Status_17() { return &___Status_17; }
	inline void set_Status_17(Nullable_1_t3450307495  value)
	{
		___Status_17 = value;
	}

	inline static int32_t get_offset_of_TitleId_18() { return static_cast<int32_t>(offsetof(PlayerPayForPurchaseEventData_t3690698165, ___TitleId_18)); }
	inline String_t* get_TitleId_18() const { return ___TitleId_18; }
	inline String_t** get_address_of_TitleId_18() { return &___TitleId_18; }
	inline void set_TitleId_18(String_t* value)
	{
		___TitleId_18 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_18), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyBalances_19() { return static_cast<int32_t>(offsetof(PlayerPayForPurchaseEventData_t3690698165, ___VirtualCurrencyBalances_19)); }
	inline Dictionary_2_t2736202052 * get_VirtualCurrencyBalances_19() const { return ___VirtualCurrencyBalances_19; }
	inline Dictionary_2_t2736202052 ** get_address_of_VirtualCurrencyBalances_19() { return &___VirtualCurrencyBalances_19; }
	inline void set_VirtualCurrencyBalances_19(Dictionary_2_t2736202052 * value)
	{
		___VirtualCurrencyBalances_19 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyBalances_19), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyGrants_20() { return static_cast<int32_t>(offsetof(PlayerPayForPurchaseEventData_t3690698165, ___VirtualCurrencyGrants_20)); }
	inline Dictionary_2_t2736202052 * get_VirtualCurrencyGrants_20() const { return ___VirtualCurrencyGrants_20; }
	inline Dictionary_2_t2736202052 ** get_address_of_VirtualCurrencyGrants_20() { return &___VirtualCurrencyGrants_20; }
	inline void set_VirtualCurrencyGrants_20(Dictionary_2_t2736202052 * value)
	{
		___VirtualCurrencyGrants_20 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyGrants_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPAYFORPURCHASEEVENTDATA_T3690698165_H
#ifndef PLAYERPHOTONSESSIONAUTHENTICATEDEVENTDATA_T2247705978_H
#define PLAYERPHOTONSESSIONAUTHENTICATEDEVENTDATA_T2247705978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerPhotonSessionAuthenticatedEventData
struct  PlayerPhotonSessionAuthenticatedEventData_t2247705978  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerPhotonSessionAuthenticatedEventData::PhotonApplicationId
	String_t* ___PhotonApplicationId_10;
	// System.Nullable`1<PlayFab.PlayStreamModels.PhotonServicesEnum> PlayFab.PlayStreamModels.PlayerPhotonSessionAuthenticatedEventData::PhotonApplicationType
	Nullable_1_t2206365603  ___PhotonApplicationType_11;
	// System.String PlayFab.PlayStreamModels.PlayerPhotonSessionAuthenticatedEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_PhotonApplicationId_10() { return static_cast<int32_t>(offsetof(PlayerPhotonSessionAuthenticatedEventData_t2247705978, ___PhotonApplicationId_10)); }
	inline String_t* get_PhotonApplicationId_10() const { return ___PhotonApplicationId_10; }
	inline String_t** get_address_of_PhotonApplicationId_10() { return &___PhotonApplicationId_10; }
	inline void set_PhotonApplicationId_10(String_t* value)
	{
		___PhotonApplicationId_10 = value;
		Il2CppCodeGenWriteBarrier((&___PhotonApplicationId_10), value);
	}

	inline static int32_t get_offset_of_PhotonApplicationType_11() { return static_cast<int32_t>(offsetof(PlayerPhotonSessionAuthenticatedEventData_t2247705978, ___PhotonApplicationType_11)); }
	inline Nullable_1_t2206365603  get_PhotonApplicationType_11() const { return ___PhotonApplicationType_11; }
	inline Nullable_1_t2206365603 * get_address_of_PhotonApplicationType_11() { return &___PhotonApplicationType_11; }
	inline void set_PhotonApplicationType_11(Nullable_1_t2206365603  value)
	{
		___PhotonApplicationType_11 = value;
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerPhotonSessionAuthenticatedEventData_t2247705978, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPHOTONSESSIONAUTHENTICATEDEVENTDATA_T2247705978_H
#ifndef PLAYERRANKEDONLEADERBOARDVERSIONEVENTDATA_T1978565495_H
#define PLAYERRANKEDONLEADERBOARDVERSIONEVENTDATA_T1978565495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData
struct  PlayerRankedOnLeaderboardVersionEventData_t1978565495  : public PlayStreamEventBase_t3913229166
{
public:
	// PlayFab.PlayStreamModels.LeaderboardSource PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData::LeaderboardSource
	LeaderboardSource_t3161314919 * ___LeaderboardSource_10;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData::Rank
	uint32_t ___Rank_11;
	// System.String PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData::TitleId
	String_t* ___TitleId_12;
	// System.Int32 PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData::Value
	int32_t ___Value_13;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData::Version
	uint32_t ___Version_14;
	// System.Nullable`1<PlayFab.PlayStreamModels.LeaderboardVersionChangeBehavior> PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData::VersionChangeBehavior
	Nullable_1_t1432817194  ___VersionChangeBehavior_15;

public:
	inline static int32_t get_offset_of_LeaderboardSource_10() { return static_cast<int32_t>(offsetof(PlayerRankedOnLeaderboardVersionEventData_t1978565495, ___LeaderboardSource_10)); }
	inline LeaderboardSource_t3161314919 * get_LeaderboardSource_10() const { return ___LeaderboardSource_10; }
	inline LeaderboardSource_t3161314919 ** get_address_of_LeaderboardSource_10() { return &___LeaderboardSource_10; }
	inline void set_LeaderboardSource_10(LeaderboardSource_t3161314919 * value)
	{
		___LeaderboardSource_10 = value;
		Il2CppCodeGenWriteBarrier((&___LeaderboardSource_10), value);
	}

	inline static int32_t get_offset_of_Rank_11() { return static_cast<int32_t>(offsetof(PlayerRankedOnLeaderboardVersionEventData_t1978565495, ___Rank_11)); }
	inline uint32_t get_Rank_11() const { return ___Rank_11; }
	inline uint32_t* get_address_of_Rank_11() { return &___Rank_11; }
	inline void set_Rank_11(uint32_t value)
	{
		___Rank_11 = value;
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerRankedOnLeaderboardVersionEventData_t1978565495, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}

	inline static int32_t get_offset_of_Value_13() { return static_cast<int32_t>(offsetof(PlayerRankedOnLeaderboardVersionEventData_t1978565495, ___Value_13)); }
	inline int32_t get_Value_13() const { return ___Value_13; }
	inline int32_t* get_address_of_Value_13() { return &___Value_13; }
	inline void set_Value_13(int32_t value)
	{
		___Value_13 = value;
	}

	inline static int32_t get_offset_of_Version_14() { return static_cast<int32_t>(offsetof(PlayerRankedOnLeaderboardVersionEventData_t1978565495, ___Version_14)); }
	inline uint32_t get_Version_14() const { return ___Version_14; }
	inline uint32_t* get_address_of_Version_14() { return &___Version_14; }
	inline void set_Version_14(uint32_t value)
	{
		___Version_14 = value;
	}

	inline static int32_t get_offset_of_VersionChangeBehavior_15() { return static_cast<int32_t>(offsetof(PlayerRankedOnLeaderboardVersionEventData_t1978565495, ___VersionChangeBehavior_15)); }
	inline Nullable_1_t1432817194  get_VersionChangeBehavior_15() const { return ___VersionChangeBehavior_15; }
	inline Nullable_1_t1432817194 * get_address_of_VersionChangeBehavior_15() { return &___VersionChangeBehavior_15; }
	inline void set_VersionChangeBehavior_15(Nullable_1_t1432817194  value)
	{
		___VersionChangeBehavior_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERRANKEDONLEADERBOARDVERSIONEVENTDATA_T1978565495_H
#ifndef PLAYERREALMONEYPURCHASEEVENTDATA_T2724906927_H
#define PLAYERREALMONEYPURCHASEEVENTDATA_T2724906927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData
struct  PlayerRealMoneyPurchaseEventData_t2724906927  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::OrderId
	String_t* ___OrderId_10;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::OrderTotal
	uint32_t ___OrderTotal_11;
	// System.String PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::PaymentProvider
	String_t* ___PaymentProvider_12;
	// System.Nullable`1<PlayFab.PlayStreamModels.PaymentType> PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::PaymentType
	Nullable_1_t2000241136  ___PaymentType_13;
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::PurchasedProduct
	List_1_t3319525431 * ___PurchasedProduct_14;
	// System.String PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::TitleId
	String_t* ___TitleId_15;
	// System.Nullable`1<PlayFab.PlayStreamModels.Currency> PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::TransactionCurrency
	Nullable_1_t256132630  ___TransactionCurrency_16;
	// System.String PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::TransactionId
	String_t* ___TransactionId_17;
	// System.Nullable`1<System.UInt32> PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::TransactionTotal
	Nullable_1_t4282624060  ___TransactionTotal_18;

public:
	inline static int32_t get_offset_of_OrderId_10() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t2724906927, ___OrderId_10)); }
	inline String_t* get_OrderId_10() const { return ___OrderId_10; }
	inline String_t** get_address_of_OrderId_10() { return &___OrderId_10; }
	inline void set_OrderId_10(String_t* value)
	{
		___OrderId_10 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_10), value);
	}

	inline static int32_t get_offset_of_OrderTotal_11() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t2724906927, ___OrderTotal_11)); }
	inline uint32_t get_OrderTotal_11() const { return ___OrderTotal_11; }
	inline uint32_t* get_address_of_OrderTotal_11() { return &___OrderTotal_11; }
	inline void set_OrderTotal_11(uint32_t value)
	{
		___OrderTotal_11 = value;
	}

	inline static int32_t get_offset_of_PaymentProvider_12() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t2724906927, ___PaymentProvider_12)); }
	inline String_t* get_PaymentProvider_12() const { return ___PaymentProvider_12; }
	inline String_t** get_address_of_PaymentProvider_12() { return &___PaymentProvider_12; }
	inline void set_PaymentProvider_12(String_t* value)
	{
		___PaymentProvider_12 = value;
		Il2CppCodeGenWriteBarrier((&___PaymentProvider_12), value);
	}

	inline static int32_t get_offset_of_PaymentType_13() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t2724906927, ___PaymentType_13)); }
	inline Nullable_1_t2000241136  get_PaymentType_13() const { return ___PaymentType_13; }
	inline Nullable_1_t2000241136 * get_address_of_PaymentType_13() { return &___PaymentType_13; }
	inline void set_PaymentType_13(Nullable_1_t2000241136  value)
	{
		___PaymentType_13 = value;
	}

	inline static int32_t get_offset_of_PurchasedProduct_14() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t2724906927, ___PurchasedProduct_14)); }
	inline List_1_t3319525431 * get_PurchasedProduct_14() const { return ___PurchasedProduct_14; }
	inline List_1_t3319525431 ** get_address_of_PurchasedProduct_14() { return &___PurchasedProduct_14; }
	inline void set_PurchasedProduct_14(List_1_t3319525431 * value)
	{
		___PurchasedProduct_14 = value;
		Il2CppCodeGenWriteBarrier((&___PurchasedProduct_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t2724906927, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}

	inline static int32_t get_offset_of_TransactionCurrency_16() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t2724906927, ___TransactionCurrency_16)); }
	inline Nullable_1_t256132630  get_TransactionCurrency_16() const { return ___TransactionCurrency_16; }
	inline Nullable_1_t256132630 * get_address_of_TransactionCurrency_16() { return &___TransactionCurrency_16; }
	inline void set_TransactionCurrency_16(Nullable_1_t256132630  value)
	{
		___TransactionCurrency_16 = value;
	}

	inline static int32_t get_offset_of_TransactionId_17() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t2724906927, ___TransactionId_17)); }
	inline String_t* get_TransactionId_17() const { return ___TransactionId_17; }
	inline String_t** get_address_of_TransactionId_17() { return &___TransactionId_17; }
	inline void set_TransactionId_17(String_t* value)
	{
		___TransactionId_17 = value;
		Il2CppCodeGenWriteBarrier((&___TransactionId_17), value);
	}

	inline static int32_t get_offset_of_TransactionTotal_18() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t2724906927, ___TransactionTotal_18)); }
	inline Nullable_1_t4282624060  get_TransactionTotal_18() const { return ___TransactionTotal_18; }
	inline Nullable_1_t4282624060 * get_address_of_TransactionTotal_18() { return &___TransactionTotal_18; }
	inline void set_TransactionTotal_18(Nullable_1_t4282624060  value)
	{
		___TransactionTotal_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERREALMONEYPURCHASEEVENTDATA_T2724906927_H
#ifndef PLAYERRECEIPTVALIDATIONEVENTDATA_T1655499948_H
#define PLAYERRECEIPTVALIDATIONEVENTDATA_T1655499948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerReceiptValidationEventData
struct  PlayerReceiptValidationEventData_t1655499948  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerReceiptValidationEventData::Error
	String_t* ___Error_10;
	// System.String PlayFab.PlayStreamModels.PlayerReceiptValidationEventData::PaymentProvider
	String_t* ___PaymentProvider_11;
	// System.Nullable`1<PlayFab.PlayStreamModels.PaymentType> PlayFab.PlayStreamModels.PlayerReceiptValidationEventData::PaymentType
	Nullable_1_t2000241136  ___PaymentType_12;
	// System.String PlayFab.PlayStreamModels.PlayerReceiptValidationEventData::ReceiptContent
	String_t* ___ReceiptContent_13;
	// System.String PlayFab.PlayStreamModels.PlayerReceiptValidationEventData::TitleId
	String_t* ___TitleId_14;
	// System.Boolean PlayFab.PlayStreamModels.PlayerReceiptValidationEventData::Valid
	bool ___Valid_15;

public:
	inline static int32_t get_offset_of_Error_10() { return static_cast<int32_t>(offsetof(PlayerReceiptValidationEventData_t1655499948, ___Error_10)); }
	inline String_t* get_Error_10() const { return ___Error_10; }
	inline String_t** get_address_of_Error_10() { return &___Error_10; }
	inline void set_Error_10(String_t* value)
	{
		___Error_10 = value;
		Il2CppCodeGenWriteBarrier((&___Error_10), value);
	}

	inline static int32_t get_offset_of_PaymentProvider_11() { return static_cast<int32_t>(offsetof(PlayerReceiptValidationEventData_t1655499948, ___PaymentProvider_11)); }
	inline String_t* get_PaymentProvider_11() const { return ___PaymentProvider_11; }
	inline String_t** get_address_of_PaymentProvider_11() { return &___PaymentProvider_11; }
	inline void set_PaymentProvider_11(String_t* value)
	{
		___PaymentProvider_11 = value;
		Il2CppCodeGenWriteBarrier((&___PaymentProvider_11), value);
	}

	inline static int32_t get_offset_of_PaymentType_12() { return static_cast<int32_t>(offsetof(PlayerReceiptValidationEventData_t1655499948, ___PaymentType_12)); }
	inline Nullable_1_t2000241136  get_PaymentType_12() const { return ___PaymentType_12; }
	inline Nullable_1_t2000241136 * get_address_of_PaymentType_12() { return &___PaymentType_12; }
	inline void set_PaymentType_12(Nullable_1_t2000241136  value)
	{
		___PaymentType_12 = value;
	}

	inline static int32_t get_offset_of_ReceiptContent_13() { return static_cast<int32_t>(offsetof(PlayerReceiptValidationEventData_t1655499948, ___ReceiptContent_13)); }
	inline String_t* get_ReceiptContent_13() const { return ___ReceiptContent_13; }
	inline String_t** get_address_of_ReceiptContent_13() { return &___ReceiptContent_13; }
	inline void set_ReceiptContent_13(String_t* value)
	{
		___ReceiptContent_13 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiptContent_13), value);
	}

	inline static int32_t get_offset_of_TitleId_14() { return static_cast<int32_t>(offsetof(PlayerReceiptValidationEventData_t1655499948, ___TitleId_14)); }
	inline String_t* get_TitleId_14() const { return ___TitleId_14; }
	inline String_t** get_address_of_TitleId_14() { return &___TitleId_14; }
	inline void set_TitleId_14(String_t* value)
	{
		___TitleId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_14), value);
	}

	inline static int32_t get_offset_of_Valid_15() { return static_cast<int32_t>(offsetof(PlayerReceiptValidationEventData_t1655499948, ___Valid_15)); }
	inline bool get_Valid_15() const { return ___Valid_15; }
	inline bool* get_address_of_Valid_15() { return &___Valid_15; }
	inline void set_Valid_15(bool value)
	{
		___Valid_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERRECEIPTVALIDATIONEVENTDATA_T1655499948_H
#ifndef PLAYERREDEEMEDCOUPONEVENTDATA_T1324586729_H
#define PLAYERREDEEMEDCOUPONEVENTDATA_T1324586729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerRedeemedCouponEventData
struct  PlayerRedeemedCouponEventData_t1324586729  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerRedeemedCouponEventData::CouponCode
	String_t* ___CouponCode_10;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.CouponGrantedInventoryItem> PlayFab.PlayStreamModels.PlayerRedeemedCouponEventData::GrantedInventoryItems
	List_1_t1001903271 * ___GrantedInventoryItems_11;
	// System.String PlayFab.PlayStreamModels.PlayerRedeemedCouponEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_CouponCode_10() { return static_cast<int32_t>(offsetof(PlayerRedeemedCouponEventData_t1324586729, ___CouponCode_10)); }
	inline String_t* get_CouponCode_10() const { return ___CouponCode_10; }
	inline String_t** get_address_of_CouponCode_10() { return &___CouponCode_10; }
	inline void set_CouponCode_10(String_t* value)
	{
		___CouponCode_10 = value;
		Il2CppCodeGenWriteBarrier((&___CouponCode_10), value);
	}

	inline static int32_t get_offset_of_GrantedInventoryItems_11() { return static_cast<int32_t>(offsetof(PlayerRedeemedCouponEventData_t1324586729, ___GrantedInventoryItems_11)); }
	inline List_1_t1001903271 * get_GrantedInventoryItems_11() const { return ___GrantedInventoryItems_11; }
	inline List_1_t1001903271 ** get_address_of_GrantedInventoryItems_11() { return &___GrantedInventoryItems_11; }
	inline void set_GrantedInventoryItems_11(List_1_t1001903271 * value)
	{
		___GrantedInventoryItems_11 = value;
		Il2CppCodeGenWriteBarrier((&___GrantedInventoryItems_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerRedeemedCouponEventData_t1324586729, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERREDEEMEDCOUPONEVENTDATA_T1324586729_H
#ifndef PLAYERREGISTEREDPUSHNOTIFICATIONSEVENTDATA_T1940130493_H
#define PLAYERREGISTEREDPUSHNOTIFICATIONSEVENTDATA_T1940130493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerRegisteredPushNotificationsEventData
struct  PlayerRegisteredPushNotificationsEventData_t1940130493  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerRegisteredPushNotificationsEventData::DeviceToken
	String_t* ___DeviceToken_10;
	// System.Nullable`1<PlayFab.PlayStreamModels.PushNotificationPlatform> PlayFab.PlayStreamModels.PlayerRegisteredPushNotificationsEventData::Platform
	Nullable_1_t3757426773  ___Platform_11;
	// System.String PlayFab.PlayStreamModels.PlayerRegisteredPushNotificationsEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_DeviceToken_10() { return static_cast<int32_t>(offsetof(PlayerRegisteredPushNotificationsEventData_t1940130493, ___DeviceToken_10)); }
	inline String_t* get_DeviceToken_10() const { return ___DeviceToken_10; }
	inline String_t** get_address_of_DeviceToken_10() { return &___DeviceToken_10; }
	inline void set_DeviceToken_10(String_t* value)
	{
		___DeviceToken_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceToken_10), value);
	}

	inline static int32_t get_offset_of_Platform_11() { return static_cast<int32_t>(offsetof(PlayerRegisteredPushNotificationsEventData_t1940130493, ___Platform_11)); }
	inline Nullable_1_t3757426773  get_Platform_11() const { return ___Platform_11; }
	inline Nullable_1_t3757426773 * get_address_of_Platform_11() { return &___Platform_11; }
	inline void set_Platform_11(Nullable_1_t3757426773  value)
	{
		___Platform_11 = value;
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerRegisteredPushNotificationsEventData_t1940130493, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERREGISTEREDPUSHNOTIFICATIONSEVENTDATA_T1940130493_H
#ifndef PLAYERREMOVEDTITLEEVENTDATA_T1127799809_H
#define PLAYERREMOVEDTITLEEVENTDATA_T1127799809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerRemovedTitleEventData
struct  PlayerRemovedTitleEventData_t1127799809  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerRemovedTitleEventData::TitleId
	String_t* ___TitleId_10;

public:
	inline static int32_t get_offset_of_TitleId_10() { return static_cast<int32_t>(offsetof(PlayerRemovedTitleEventData_t1127799809, ___TitleId_10)); }
	inline String_t* get_TitleId_10() const { return ___TitleId_10; }
	inline String_t** get_address_of_TitleId_10() { return &___TitleId_10; }
	inline void set_TitleId_10(String_t* value)
	{
		___TitleId_10 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERREMOVEDTITLEEVENTDATA_T1127799809_H
#ifndef PLAYERREPORTEDASABUSIVEEVENTDATA_T3805762698_H
#define PLAYERREPORTEDASABUSIVEEVENTDATA_T3805762698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerReportedAsAbusiveEventData
struct  PlayerReportedAsAbusiveEventData_t3805762698  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerReportedAsAbusiveEventData::Comment
	String_t* ___Comment_10;
	// System.String PlayFab.PlayStreamModels.PlayerReportedAsAbusiveEventData::ReportedByPlayer
	String_t* ___ReportedByPlayer_11;
	// System.String PlayFab.PlayStreamModels.PlayerReportedAsAbusiveEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_Comment_10() { return static_cast<int32_t>(offsetof(PlayerReportedAsAbusiveEventData_t3805762698, ___Comment_10)); }
	inline String_t* get_Comment_10() const { return ___Comment_10; }
	inline String_t** get_address_of_Comment_10() { return &___Comment_10; }
	inline void set_Comment_10(String_t* value)
	{
		___Comment_10 = value;
		Il2CppCodeGenWriteBarrier((&___Comment_10), value);
	}

	inline static int32_t get_offset_of_ReportedByPlayer_11() { return static_cast<int32_t>(offsetof(PlayerReportedAsAbusiveEventData_t3805762698, ___ReportedByPlayer_11)); }
	inline String_t* get_ReportedByPlayer_11() const { return ___ReportedByPlayer_11; }
	inline String_t** get_address_of_ReportedByPlayer_11() { return &___ReportedByPlayer_11; }
	inline void set_ReportedByPlayer_11(String_t* value)
	{
		___ReportedByPlayer_11 = value;
		Il2CppCodeGenWriteBarrier((&___ReportedByPlayer_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerReportedAsAbusiveEventData_t3805762698, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERREPORTEDASABUSIVEEVENTDATA_T3805762698_H
#ifndef PLAYERSETPROFILEPROPERTYEVENTDATA_T914979406_H
#define PLAYERSETPROFILEPROPERTYEVENTDATA_T914979406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerSetProfilePropertyEventData
struct  PlayerSetProfilePropertyEventData_t914979406  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.PlayerProfileProperty> PlayFab.PlayStreamModels.PlayerSetProfilePropertyEventData::Property
	Nullable_1_t980038620  ___Property_10;
	// System.String PlayFab.PlayStreamModels.PlayerSetProfilePropertyEventData::TitleId
	String_t* ___TitleId_11;
	// System.Object PlayFab.PlayStreamModels.PlayerSetProfilePropertyEventData::Value
	RuntimeObject * ___Value_12;

public:
	inline static int32_t get_offset_of_Property_10() { return static_cast<int32_t>(offsetof(PlayerSetProfilePropertyEventData_t914979406, ___Property_10)); }
	inline Nullable_1_t980038620  get_Property_10() const { return ___Property_10; }
	inline Nullable_1_t980038620 * get_address_of_Property_10() { return &___Property_10; }
	inline void set_Property_10(Nullable_1_t980038620  value)
	{
		___Property_10 = value;
	}

	inline static int32_t get_offset_of_TitleId_11() { return static_cast<int32_t>(offsetof(PlayerSetProfilePropertyEventData_t914979406, ___TitleId_11)); }
	inline String_t* get_TitleId_11() const { return ___TitleId_11; }
	inline String_t** get_address_of_TitleId_11() { return &___TitleId_11; }
	inline void set_TitleId_11(String_t* value)
	{
		___TitleId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_11), value);
	}

	inline static int32_t get_offset_of_Value_12() { return static_cast<int32_t>(offsetof(PlayerSetProfilePropertyEventData_t914979406, ___Value_12)); }
	inline RuntimeObject * get_Value_12() const { return ___Value_12; }
	inline RuntimeObject ** get_address_of_Value_12() { return &___Value_12; }
	inline void set_Value_12(RuntimeObject * value)
	{
		___Value_12 = value;
		Il2CppCodeGenWriteBarrier((&___Value_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSETPROFILEPROPERTYEVENTDATA_T914979406_H
#ifndef PLAYERSTARTPURCHASEEVENTDATA_T1844083469_H
#define PLAYERSTARTPURCHASEEVENTDATA_T1844083469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerStartPurchaseEventData
struct  PlayerStartPurchaseEventData_t1844083469  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerStartPurchaseEventData::CatalogVersion
	String_t* ___CatalogVersion_10;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.CartItem> PlayFab.PlayStreamModels.PlayerStartPurchaseEventData::Contents
	List_1_t748271486 * ___Contents_11;
	// System.String PlayFab.PlayStreamModels.PlayerStartPurchaseEventData::OrderId
	String_t* ___OrderId_12;
	// System.String PlayFab.PlayStreamModels.PlayerStartPurchaseEventData::StoreId
	String_t* ___StoreId_13;
	// System.String PlayFab.PlayStreamModels.PlayerStartPurchaseEventData::TitleId
	String_t* ___TitleId_14;

public:
	inline static int32_t get_offset_of_CatalogVersion_10() { return static_cast<int32_t>(offsetof(PlayerStartPurchaseEventData_t1844083469, ___CatalogVersion_10)); }
	inline String_t* get_CatalogVersion_10() const { return ___CatalogVersion_10; }
	inline String_t** get_address_of_CatalogVersion_10() { return &___CatalogVersion_10; }
	inline void set_CatalogVersion_10(String_t* value)
	{
		___CatalogVersion_10 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_10), value);
	}

	inline static int32_t get_offset_of_Contents_11() { return static_cast<int32_t>(offsetof(PlayerStartPurchaseEventData_t1844083469, ___Contents_11)); }
	inline List_1_t748271486 * get_Contents_11() const { return ___Contents_11; }
	inline List_1_t748271486 ** get_address_of_Contents_11() { return &___Contents_11; }
	inline void set_Contents_11(List_1_t748271486 * value)
	{
		___Contents_11 = value;
		Il2CppCodeGenWriteBarrier((&___Contents_11), value);
	}

	inline static int32_t get_offset_of_OrderId_12() { return static_cast<int32_t>(offsetof(PlayerStartPurchaseEventData_t1844083469, ___OrderId_12)); }
	inline String_t* get_OrderId_12() const { return ___OrderId_12; }
	inline String_t** get_address_of_OrderId_12() { return &___OrderId_12; }
	inline void set_OrderId_12(String_t* value)
	{
		___OrderId_12 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_12), value);
	}

	inline static int32_t get_offset_of_StoreId_13() { return static_cast<int32_t>(offsetof(PlayerStartPurchaseEventData_t1844083469, ___StoreId_13)); }
	inline String_t* get_StoreId_13() const { return ___StoreId_13; }
	inline String_t** get_address_of_StoreId_13() { return &___StoreId_13; }
	inline void set_StoreId_13(String_t* value)
	{
		___StoreId_13 = value;
		Il2CppCodeGenWriteBarrier((&___StoreId_13), value);
	}

	inline static int32_t get_offset_of_TitleId_14() { return static_cast<int32_t>(offsetof(PlayerStartPurchaseEventData_t1844083469, ___TitleId_14)); }
	inline String_t* get_TitleId_14() const { return ___TitleId_14; }
	inline String_t** get_address_of_TitleId_14() { return &___TitleId_14; }
	inline void set_TitleId_14(String_t* value)
	{
		___TitleId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSTARTPURCHASEEVENTDATA_T1844083469_H
#ifndef PLAYERSTATISTICCHANGEDEVENTDATA_T73800534_H
#define PLAYERSTATISTICCHANGEDEVENTDATA_T73800534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerStatisticChangedEventData
struct  PlayerStatisticChangedEventData_t73800534  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.StatisticAggregationMethod> PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::AggregationMethod
	Nullable_1_t477391968  ___AggregationMethod_10;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::StatisticId
	uint32_t ___StatisticId_11;
	// System.String PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::StatisticName
	String_t* ___StatisticName_12;
	// System.Nullable`1<System.Int32> PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::StatisticPreviousValue
	Nullable_1_t378540539  ___StatisticPreviousValue_13;
	// System.Int32 PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::StatisticValue
	int32_t ___StatisticValue_14;
	// System.String PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::TitleId
	String_t* ___TitleId_15;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::Version
	uint32_t ___Version_16;

public:
	inline static int32_t get_offset_of_AggregationMethod_10() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t73800534, ___AggregationMethod_10)); }
	inline Nullable_1_t477391968  get_AggregationMethod_10() const { return ___AggregationMethod_10; }
	inline Nullable_1_t477391968 * get_address_of_AggregationMethod_10() { return &___AggregationMethod_10; }
	inline void set_AggregationMethod_10(Nullable_1_t477391968  value)
	{
		___AggregationMethod_10 = value;
	}

	inline static int32_t get_offset_of_StatisticId_11() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t73800534, ___StatisticId_11)); }
	inline uint32_t get_StatisticId_11() const { return ___StatisticId_11; }
	inline uint32_t* get_address_of_StatisticId_11() { return &___StatisticId_11; }
	inline void set_StatisticId_11(uint32_t value)
	{
		___StatisticId_11 = value;
	}

	inline static int32_t get_offset_of_StatisticName_12() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t73800534, ___StatisticName_12)); }
	inline String_t* get_StatisticName_12() const { return ___StatisticName_12; }
	inline String_t** get_address_of_StatisticName_12() { return &___StatisticName_12; }
	inline void set_StatisticName_12(String_t* value)
	{
		___StatisticName_12 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_12), value);
	}

	inline static int32_t get_offset_of_StatisticPreviousValue_13() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t73800534, ___StatisticPreviousValue_13)); }
	inline Nullable_1_t378540539  get_StatisticPreviousValue_13() const { return ___StatisticPreviousValue_13; }
	inline Nullable_1_t378540539 * get_address_of_StatisticPreviousValue_13() { return &___StatisticPreviousValue_13; }
	inline void set_StatisticPreviousValue_13(Nullable_1_t378540539  value)
	{
		___StatisticPreviousValue_13 = value;
	}

	inline static int32_t get_offset_of_StatisticValue_14() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t73800534, ___StatisticValue_14)); }
	inline int32_t get_StatisticValue_14() const { return ___StatisticValue_14; }
	inline int32_t* get_address_of_StatisticValue_14() { return &___StatisticValue_14; }
	inline void set_StatisticValue_14(int32_t value)
	{
		___StatisticValue_14 = value;
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t73800534, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}

	inline static int32_t get_offset_of_Version_16() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t73800534, ___Version_16)); }
	inline uint32_t get_Version_16() const { return ___Version_16; }
	inline uint32_t* get_address_of_Version_16() { return &___Version_16; }
	inline void set_Version_16(uint32_t value)
	{
		___Version_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSTATISTICCHANGEDEVENTDATA_T73800534_H
#ifndef PLAYERSTATISTICDELETEDEVENTDATA_T328155140_H
#define PLAYERSTATISTICDELETEDEVENTDATA_T328155140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerStatisticDeletedEventData
struct  PlayerStatisticDeletedEventData_t328155140  : public PlayStreamEventBase_t3913229166
{
public:
	// System.UInt32 PlayFab.PlayStreamModels.PlayerStatisticDeletedEventData::StatisticId
	uint32_t ___StatisticId_10;
	// System.String PlayFab.PlayStreamModels.PlayerStatisticDeletedEventData::StatisticName
	String_t* ___StatisticName_11;
	// System.Nullable`1<System.Int32> PlayFab.PlayStreamModels.PlayerStatisticDeletedEventData::StatisticPreviousValue
	Nullable_1_t378540539  ___StatisticPreviousValue_12;
	// System.String PlayFab.PlayStreamModels.PlayerStatisticDeletedEventData::TitleId
	String_t* ___TitleId_13;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerStatisticDeletedEventData::Version
	uint32_t ___Version_14;

public:
	inline static int32_t get_offset_of_StatisticId_10() { return static_cast<int32_t>(offsetof(PlayerStatisticDeletedEventData_t328155140, ___StatisticId_10)); }
	inline uint32_t get_StatisticId_10() const { return ___StatisticId_10; }
	inline uint32_t* get_address_of_StatisticId_10() { return &___StatisticId_10; }
	inline void set_StatisticId_10(uint32_t value)
	{
		___StatisticId_10 = value;
	}

	inline static int32_t get_offset_of_StatisticName_11() { return static_cast<int32_t>(offsetof(PlayerStatisticDeletedEventData_t328155140, ___StatisticName_11)); }
	inline String_t* get_StatisticName_11() const { return ___StatisticName_11; }
	inline String_t** get_address_of_StatisticName_11() { return &___StatisticName_11; }
	inline void set_StatisticName_11(String_t* value)
	{
		___StatisticName_11 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_11), value);
	}

	inline static int32_t get_offset_of_StatisticPreviousValue_12() { return static_cast<int32_t>(offsetof(PlayerStatisticDeletedEventData_t328155140, ___StatisticPreviousValue_12)); }
	inline Nullable_1_t378540539  get_StatisticPreviousValue_12() const { return ___StatisticPreviousValue_12; }
	inline Nullable_1_t378540539 * get_address_of_StatisticPreviousValue_12() { return &___StatisticPreviousValue_12; }
	inline void set_StatisticPreviousValue_12(Nullable_1_t378540539  value)
	{
		___StatisticPreviousValue_12 = value;
	}

	inline static int32_t get_offset_of_TitleId_13() { return static_cast<int32_t>(offsetof(PlayerStatisticDeletedEventData_t328155140, ___TitleId_13)); }
	inline String_t* get_TitleId_13() const { return ___TitleId_13; }
	inline String_t** get_address_of_TitleId_13() { return &___TitleId_13; }
	inline void set_TitleId_13(String_t* value)
	{
		___TitleId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_13), value);
	}

	inline static int32_t get_offset_of_Version_14() { return static_cast<int32_t>(offsetof(PlayerStatisticDeletedEventData_t328155140, ___Version_14)); }
	inline uint32_t get_Version_14() const { return ___Version_14; }
	inline uint32_t* get_address_of_Version_14() { return &___Version_14; }
	inline void set_Version_14(uint32_t value)
	{
		___Version_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSTATISTICDELETEDEVENTDATA_T328155140_H
#ifndef PLAYERTAGADDEDEVENTDATA_T1599828201_H
#define PLAYERTAGADDEDEVENTDATA_T1599828201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerTagAddedEventData
struct  PlayerTagAddedEventData_t1599828201  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerTagAddedEventData::Namespace
	String_t* ___Namespace_10;
	// System.String PlayFab.PlayStreamModels.PlayerTagAddedEventData::TagName
	String_t* ___TagName_11;
	// System.String PlayFab.PlayStreamModels.PlayerTagAddedEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_Namespace_10() { return static_cast<int32_t>(offsetof(PlayerTagAddedEventData_t1599828201, ___Namespace_10)); }
	inline String_t* get_Namespace_10() const { return ___Namespace_10; }
	inline String_t** get_address_of_Namespace_10() { return &___Namespace_10; }
	inline void set_Namespace_10(String_t* value)
	{
		___Namespace_10 = value;
		Il2CppCodeGenWriteBarrier((&___Namespace_10), value);
	}

	inline static int32_t get_offset_of_TagName_11() { return static_cast<int32_t>(offsetof(PlayerTagAddedEventData_t1599828201, ___TagName_11)); }
	inline String_t* get_TagName_11() const { return ___TagName_11; }
	inline String_t** get_address_of_TagName_11() { return &___TagName_11; }
	inline void set_TagName_11(String_t* value)
	{
		___TagName_11 = value;
		Il2CppCodeGenWriteBarrier((&___TagName_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerTagAddedEventData_t1599828201, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERTAGADDEDEVENTDATA_T1599828201_H
#ifndef PLAYERTAGREMOVEDEVENTDATA_T158369537_H
#define PLAYERTAGREMOVEDEVENTDATA_T158369537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerTagRemovedEventData
struct  PlayerTagRemovedEventData_t158369537  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerTagRemovedEventData::Namespace
	String_t* ___Namespace_10;
	// System.String PlayFab.PlayStreamModels.PlayerTagRemovedEventData::TagName
	String_t* ___TagName_11;
	// System.String PlayFab.PlayStreamModels.PlayerTagRemovedEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_Namespace_10() { return static_cast<int32_t>(offsetof(PlayerTagRemovedEventData_t158369537, ___Namespace_10)); }
	inline String_t* get_Namespace_10() const { return ___Namespace_10; }
	inline String_t** get_address_of_Namespace_10() { return &___Namespace_10; }
	inline void set_Namespace_10(String_t* value)
	{
		___Namespace_10 = value;
		Il2CppCodeGenWriteBarrier((&___Namespace_10), value);
	}

	inline static int32_t get_offset_of_TagName_11() { return static_cast<int32_t>(offsetof(PlayerTagRemovedEventData_t158369537, ___TagName_11)); }
	inline String_t* get_TagName_11() const { return ___TagName_11; }
	inline String_t** get_address_of_TagName_11() { return &___TagName_11; }
	inline void set_TagName_11(String_t* value)
	{
		___TagName_11 = value;
		Il2CppCodeGenWriteBarrier((&___TagName_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerTagRemovedEventData_t158369537, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERTAGREMOVEDEVENTDATA_T158369537_H
#ifndef PLAYERTRIGGEREDACTIONEXECUTEDCLOUDSCRIPTEVENTDATA_T2749517829_H
#define PLAYERTRIGGEREDACTIONEXECUTEDCLOUDSCRIPTEVENTDATA_T2749517829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData
struct  PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829  : public PlayStreamEventBase_t3913229166
{
public:
	// PlayFab.PlayStreamModels.ExecuteCloudScriptResult PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData::CloudScriptExecutionResult
	ExecuteCloudScriptResult_t1291136388 * ___CloudScriptExecutionResult_10;
	// System.String PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData::FunctionName
	String_t* ___FunctionName_11;
	// System.String PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData::TitleId
	String_t* ___TitleId_12;
	// System.Object PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData::TriggeringEventData
	RuntimeObject * ___TriggeringEventData_13;
	// System.String PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData::TriggeringEventName
	String_t* ___TriggeringEventName_14;
	// PlayFab.PlayStreamModels.PlayerProfile PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData::TriggeringPlayer
	PlayerProfile_t2381417705 * ___TriggeringPlayer_15;

public:
	inline static int32_t get_offset_of_CloudScriptExecutionResult_10() { return static_cast<int32_t>(offsetof(PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829, ___CloudScriptExecutionResult_10)); }
	inline ExecuteCloudScriptResult_t1291136388 * get_CloudScriptExecutionResult_10() const { return ___CloudScriptExecutionResult_10; }
	inline ExecuteCloudScriptResult_t1291136388 ** get_address_of_CloudScriptExecutionResult_10() { return &___CloudScriptExecutionResult_10; }
	inline void set_CloudScriptExecutionResult_10(ExecuteCloudScriptResult_t1291136388 * value)
	{
		___CloudScriptExecutionResult_10 = value;
		Il2CppCodeGenWriteBarrier((&___CloudScriptExecutionResult_10), value);
	}

	inline static int32_t get_offset_of_FunctionName_11() { return static_cast<int32_t>(offsetof(PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829, ___FunctionName_11)); }
	inline String_t* get_FunctionName_11() const { return ___FunctionName_11; }
	inline String_t** get_address_of_FunctionName_11() { return &___FunctionName_11; }
	inline void set_FunctionName_11(String_t* value)
	{
		___FunctionName_11 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionName_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}

	inline static int32_t get_offset_of_TriggeringEventData_13() { return static_cast<int32_t>(offsetof(PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829, ___TriggeringEventData_13)); }
	inline RuntimeObject * get_TriggeringEventData_13() const { return ___TriggeringEventData_13; }
	inline RuntimeObject ** get_address_of_TriggeringEventData_13() { return &___TriggeringEventData_13; }
	inline void set_TriggeringEventData_13(RuntimeObject * value)
	{
		___TriggeringEventData_13 = value;
		Il2CppCodeGenWriteBarrier((&___TriggeringEventData_13), value);
	}

	inline static int32_t get_offset_of_TriggeringEventName_14() { return static_cast<int32_t>(offsetof(PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829, ___TriggeringEventName_14)); }
	inline String_t* get_TriggeringEventName_14() const { return ___TriggeringEventName_14; }
	inline String_t** get_address_of_TriggeringEventName_14() { return &___TriggeringEventName_14; }
	inline void set_TriggeringEventName_14(String_t* value)
	{
		___TriggeringEventName_14 = value;
		Il2CppCodeGenWriteBarrier((&___TriggeringEventName_14), value);
	}

	inline static int32_t get_offset_of_TriggeringPlayer_15() { return static_cast<int32_t>(offsetof(PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829, ___TriggeringPlayer_15)); }
	inline PlayerProfile_t2381417705 * get_TriggeringPlayer_15() const { return ___TriggeringPlayer_15; }
	inline PlayerProfile_t2381417705 ** get_address_of_TriggeringPlayer_15() { return &___TriggeringPlayer_15; }
	inline void set_TriggeringPlayer_15(PlayerProfile_t2381417705 * value)
	{
		___TriggeringPlayer_15 = value;
		Il2CppCodeGenWriteBarrier((&___TriggeringPlayer_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERTRIGGEREDACTIONEXECUTEDCLOUDSCRIPTEVENTDATA_T2749517829_H
#ifndef PLAYERUNLINKEDACCOUNTEVENTDATA_T37455566_H
#define PLAYERUNLINKEDACCOUNTEVENTDATA_T37455566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerUnlinkedAccountEventData
struct  PlayerUnlinkedAccountEventData_t37455566  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider> PlayFab.PlayStreamModels.PlayerUnlinkedAccountEventData::Origination
	Nullable_1_t1369806624  ___Origination_10;
	// System.String PlayFab.PlayStreamModels.PlayerUnlinkedAccountEventData::OriginationUserId
	String_t* ___OriginationUserId_11;
	// System.String PlayFab.PlayStreamModels.PlayerUnlinkedAccountEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_Origination_10() { return static_cast<int32_t>(offsetof(PlayerUnlinkedAccountEventData_t37455566, ___Origination_10)); }
	inline Nullable_1_t1369806624  get_Origination_10() const { return ___Origination_10; }
	inline Nullable_1_t1369806624 * get_address_of_Origination_10() { return &___Origination_10; }
	inline void set_Origination_10(Nullable_1_t1369806624  value)
	{
		___Origination_10 = value;
	}

	inline static int32_t get_offset_of_OriginationUserId_11() { return static_cast<int32_t>(offsetof(PlayerUnlinkedAccountEventData_t37455566, ___OriginationUserId_11)); }
	inline String_t* get_OriginationUserId_11() const { return ___OriginationUserId_11; }
	inline String_t** get_address_of_OriginationUserId_11() { return &___OriginationUserId_11; }
	inline void set_OriginationUserId_11(String_t* value)
	{
		___OriginationUserId_11 = value;
		Il2CppCodeGenWriteBarrier((&___OriginationUserId_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerUnlinkedAccountEventData_t37455566, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERUNLINKEDACCOUNTEVENTDATA_T37455566_H
#ifndef PLAYERUPDATEDCONTACTEMAILEVENTDATA_T776420100_H
#define PLAYERUPDATEDCONTACTEMAILEVENTDATA_T776420100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerUpdatedContactEmailEventData
struct  PlayerUpdatedContactEmailEventData_t776420100  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerUpdatedContactEmailEventData::EmailName
	String_t* ___EmailName_10;
	// System.String PlayFab.PlayStreamModels.PlayerUpdatedContactEmailEventData::NewEmailAddress
	String_t* ___NewEmailAddress_11;
	// System.String PlayFab.PlayStreamModels.PlayerUpdatedContactEmailEventData::PreviousEmailAddress
	String_t* ___PreviousEmailAddress_12;
	// System.String PlayFab.PlayStreamModels.PlayerUpdatedContactEmailEventData::TitleId
	String_t* ___TitleId_13;

public:
	inline static int32_t get_offset_of_EmailName_10() { return static_cast<int32_t>(offsetof(PlayerUpdatedContactEmailEventData_t776420100, ___EmailName_10)); }
	inline String_t* get_EmailName_10() const { return ___EmailName_10; }
	inline String_t** get_address_of_EmailName_10() { return &___EmailName_10; }
	inline void set_EmailName_10(String_t* value)
	{
		___EmailName_10 = value;
		Il2CppCodeGenWriteBarrier((&___EmailName_10), value);
	}

	inline static int32_t get_offset_of_NewEmailAddress_11() { return static_cast<int32_t>(offsetof(PlayerUpdatedContactEmailEventData_t776420100, ___NewEmailAddress_11)); }
	inline String_t* get_NewEmailAddress_11() const { return ___NewEmailAddress_11; }
	inline String_t** get_address_of_NewEmailAddress_11() { return &___NewEmailAddress_11; }
	inline void set_NewEmailAddress_11(String_t* value)
	{
		___NewEmailAddress_11 = value;
		Il2CppCodeGenWriteBarrier((&___NewEmailAddress_11), value);
	}

	inline static int32_t get_offset_of_PreviousEmailAddress_12() { return static_cast<int32_t>(offsetof(PlayerUpdatedContactEmailEventData_t776420100, ___PreviousEmailAddress_12)); }
	inline String_t* get_PreviousEmailAddress_12() const { return ___PreviousEmailAddress_12; }
	inline String_t** get_address_of_PreviousEmailAddress_12() { return &___PreviousEmailAddress_12; }
	inline void set_PreviousEmailAddress_12(String_t* value)
	{
		___PreviousEmailAddress_12 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousEmailAddress_12), value);
	}

	inline static int32_t get_offset_of_TitleId_13() { return static_cast<int32_t>(offsetof(PlayerUpdatedContactEmailEventData_t776420100, ___TitleId_13)); }
	inline String_t* get_TitleId_13() const { return ___TitleId_13; }
	inline String_t** get_address_of_TitleId_13() { return &___TitleId_13; }
	inline void set_TitleId_13(String_t* value)
	{
		___TitleId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERUPDATEDCONTACTEMAILEVENTDATA_T776420100_H
#ifndef PLAYERVCPURCHASEEVENTDATA_T3718844847_H
#define PLAYERVCPURCHASEEVENTDATA_T3718844847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerVCPurchaseEventData
struct  PlayerVCPurchaseEventData_t3718844847  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::CatalogVersion
	String_t* ___CatalogVersion_10;
	// System.String PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::CurrencyCode
	String_t* ___CurrencyCode_11;
	// System.String PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::ItemId
	String_t* ___ItemId_12;
	// System.String PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::PurchaseId
	String_t* ___PurchaseId_13;
	// System.Int32 PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::Quantity
	int32_t ___Quantity_14;
	// System.String PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::StoreId
	String_t* ___StoreId_15;
	// System.String PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::TitleId
	String_t* ___TitleId_16;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::UnitPrice
	uint32_t ___UnitPrice_17;

public:
	inline static int32_t get_offset_of_CatalogVersion_10() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3718844847, ___CatalogVersion_10)); }
	inline String_t* get_CatalogVersion_10() const { return ___CatalogVersion_10; }
	inline String_t** get_address_of_CatalogVersion_10() { return &___CatalogVersion_10; }
	inline void set_CatalogVersion_10(String_t* value)
	{
		___CatalogVersion_10 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_10), value);
	}

	inline static int32_t get_offset_of_CurrencyCode_11() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3718844847, ___CurrencyCode_11)); }
	inline String_t* get_CurrencyCode_11() const { return ___CurrencyCode_11; }
	inline String_t** get_address_of_CurrencyCode_11() { return &___CurrencyCode_11; }
	inline void set_CurrencyCode_11(String_t* value)
	{
		___CurrencyCode_11 = value;
		Il2CppCodeGenWriteBarrier((&___CurrencyCode_11), value);
	}

	inline static int32_t get_offset_of_ItemId_12() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3718844847, ___ItemId_12)); }
	inline String_t* get_ItemId_12() const { return ___ItemId_12; }
	inline String_t** get_address_of_ItemId_12() { return &___ItemId_12; }
	inline void set_ItemId_12(String_t* value)
	{
		___ItemId_12 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_12), value);
	}

	inline static int32_t get_offset_of_PurchaseId_13() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3718844847, ___PurchaseId_13)); }
	inline String_t* get_PurchaseId_13() const { return ___PurchaseId_13; }
	inline String_t** get_address_of_PurchaseId_13() { return &___PurchaseId_13; }
	inline void set_PurchaseId_13(String_t* value)
	{
		___PurchaseId_13 = value;
		Il2CppCodeGenWriteBarrier((&___PurchaseId_13), value);
	}

	inline static int32_t get_offset_of_Quantity_14() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3718844847, ___Quantity_14)); }
	inline int32_t get_Quantity_14() const { return ___Quantity_14; }
	inline int32_t* get_address_of_Quantity_14() { return &___Quantity_14; }
	inline void set_Quantity_14(int32_t value)
	{
		___Quantity_14 = value;
	}

	inline static int32_t get_offset_of_StoreId_15() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3718844847, ___StoreId_15)); }
	inline String_t* get_StoreId_15() const { return ___StoreId_15; }
	inline String_t** get_address_of_StoreId_15() { return &___StoreId_15; }
	inline void set_StoreId_15(String_t* value)
	{
		___StoreId_15 = value;
		Il2CppCodeGenWriteBarrier((&___StoreId_15), value);
	}

	inline static int32_t get_offset_of_TitleId_16() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3718844847, ___TitleId_16)); }
	inline String_t* get_TitleId_16() const { return ___TitleId_16; }
	inline String_t** get_address_of_TitleId_16() { return &___TitleId_16; }
	inline void set_TitleId_16(String_t* value)
	{
		___TitleId_16 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_16), value);
	}

	inline static int32_t get_offset_of_UnitPrice_17() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3718844847, ___UnitPrice_17)); }
	inline uint32_t get_UnitPrice_17() const { return ___UnitPrice_17; }
	inline uint32_t* get_address_of_UnitPrice_17() { return &___UnitPrice_17; }
	inline void set_UnitPrice_17(uint32_t value)
	{
		___UnitPrice_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERVCPURCHASEEVENTDATA_T3718844847_H
#ifndef PLAYERVERIFIEDCONTACTEMAILEVENTDATA_T2512849399_H
#define PLAYERVERIFIEDCONTACTEMAILEVENTDATA_T2512849399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerVerifiedContactEmailEventData
struct  PlayerVerifiedContactEmailEventData_t2512849399  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerVerifiedContactEmailEventData::EmailAddress
	String_t* ___EmailAddress_10;
	// System.String PlayFab.PlayStreamModels.PlayerVerifiedContactEmailEventData::EmailName
	String_t* ___EmailName_11;
	// System.String PlayFab.PlayStreamModels.PlayerVerifiedContactEmailEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_EmailAddress_10() { return static_cast<int32_t>(offsetof(PlayerVerifiedContactEmailEventData_t2512849399, ___EmailAddress_10)); }
	inline String_t* get_EmailAddress_10() const { return ___EmailAddress_10; }
	inline String_t** get_address_of_EmailAddress_10() { return &___EmailAddress_10; }
	inline void set_EmailAddress_10(String_t* value)
	{
		___EmailAddress_10 = value;
		Il2CppCodeGenWriteBarrier((&___EmailAddress_10), value);
	}

	inline static int32_t get_offset_of_EmailName_11() { return static_cast<int32_t>(offsetof(PlayerVerifiedContactEmailEventData_t2512849399, ___EmailName_11)); }
	inline String_t* get_EmailName_11() const { return ___EmailName_11; }
	inline String_t** get_address_of_EmailName_11() { return &___EmailName_11; }
	inline void set_EmailName_11(String_t* value)
	{
		___EmailName_11 = value;
		Il2CppCodeGenWriteBarrier((&___EmailName_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerVerifiedContactEmailEventData_t2512849399, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERVERIFIEDCONTACTEMAILEVENTDATA_T2512849399_H
#ifndef PLAYERVIRTUALCURRENCYBALANCECHANGEDEVENTDATA_T830832843_H
#define PLAYERVIRTUALCURRENCYBALANCECHANGEDEVENTDATA_T830832843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerVirtualCurrencyBalanceChangedEventData
struct  PlayerVirtualCurrencyBalanceChangedEventData_t830832843  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerVirtualCurrencyBalanceChangedEventData::OrderId
	String_t* ___OrderId_10;
	// System.String PlayFab.PlayStreamModels.PlayerVirtualCurrencyBalanceChangedEventData::TitleId
	String_t* ___TitleId_11;
	// System.Int32 PlayFab.PlayStreamModels.PlayerVirtualCurrencyBalanceChangedEventData::VirtualCurrencyBalance
	int32_t ___VirtualCurrencyBalance_12;
	// System.String PlayFab.PlayStreamModels.PlayerVirtualCurrencyBalanceChangedEventData::VirtualCurrencyName
	String_t* ___VirtualCurrencyName_13;
	// System.Int32 PlayFab.PlayStreamModels.PlayerVirtualCurrencyBalanceChangedEventData::VirtualCurrencyPreviousBalance
	int32_t ___VirtualCurrencyPreviousBalance_14;

public:
	inline static int32_t get_offset_of_OrderId_10() { return static_cast<int32_t>(offsetof(PlayerVirtualCurrencyBalanceChangedEventData_t830832843, ___OrderId_10)); }
	inline String_t* get_OrderId_10() const { return ___OrderId_10; }
	inline String_t** get_address_of_OrderId_10() { return &___OrderId_10; }
	inline void set_OrderId_10(String_t* value)
	{
		___OrderId_10 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_10), value);
	}

	inline static int32_t get_offset_of_TitleId_11() { return static_cast<int32_t>(offsetof(PlayerVirtualCurrencyBalanceChangedEventData_t830832843, ___TitleId_11)); }
	inline String_t* get_TitleId_11() const { return ___TitleId_11; }
	inline String_t** get_address_of_TitleId_11() { return &___TitleId_11; }
	inline void set_TitleId_11(String_t* value)
	{
		___TitleId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_11), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyBalance_12() { return static_cast<int32_t>(offsetof(PlayerVirtualCurrencyBalanceChangedEventData_t830832843, ___VirtualCurrencyBalance_12)); }
	inline int32_t get_VirtualCurrencyBalance_12() const { return ___VirtualCurrencyBalance_12; }
	inline int32_t* get_address_of_VirtualCurrencyBalance_12() { return &___VirtualCurrencyBalance_12; }
	inline void set_VirtualCurrencyBalance_12(int32_t value)
	{
		___VirtualCurrencyBalance_12 = value;
	}

	inline static int32_t get_offset_of_VirtualCurrencyName_13() { return static_cast<int32_t>(offsetof(PlayerVirtualCurrencyBalanceChangedEventData_t830832843, ___VirtualCurrencyName_13)); }
	inline String_t* get_VirtualCurrencyName_13() const { return ___VirtualCurrencyName_13; }
	inline String_t** get_address_of_VirtualCurrencyName_13() { return &___VirtualCurrencyName_13; }
	inline void set_VirtualCurrencyName_13(String_t* value)
	{
		___VirtualCurrencyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyName_13), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyPreviousBalance_14() { return static_cast<int32_t>(offsetof(PlayerVirtualCurrencyBalanceChangedEventData_t830832843, ___VirtualCurrencyPreviousBalance_14)); }
	inline int32_t get_VirtualCurrencyPreviousBalance_14() const { return ___VirtualCurrencyPreviousBalance_14; }
	inline int32_t* get_address_of_VirtualCurrencyPreviousBalance_14() { return &___VirtualCurrencyPreviousBalance_14; }
	inline void set_VirtualCurrencyPreviousBalance_14(int32_t value)
	{
		___VirtualCurrencyPreviousBalance_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERVIRTUALCURRENCYBALANCECHANGEDEVENTDATA_T830832843_H
#ifndef SENTEMAILEVENTDATA_T2109692145_H
#define SENTEMAILEVENTDATA_T2109692145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.SentEmailEventData
struct  SentEmailEventData_t2109692145  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::Body
	String_t* ___Body_10;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::EmailName
	String_t* ___EmailName_11;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::EmailTemplateId
	String_t* ___EmailTemplateId_12;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::EmailTemplateName
	String_t* ___EmailTemplateName_13;
	// System.Nullable`1<PlayFab.PlayStreamModels.EmailTemplateType> PlayFab.PlayStreamModels.SentEmailEventData::EmailTemplateType
	Nullable_1_t1253562481  ___EmailTemplateType_14;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::ErrorMessage
	String_t* ___ErrorMessage_15;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::ErrorName
	String_t* ___ErrorName_16;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::Language
	String_t* ___Language_17;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::Subject
	String_t* ___Subject_18;
	// System.Boolean PlayFab.PlayStreamModels.SentEmailEventData::Success
	bool ___Success_19;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::TitleId
	String_t* ___TitleId_20;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::Token
	String_t* ___Token_21;

public:
	inline static int32_t get_offset_of_Body_10() { return static_cast<int32_t>(offsetof(SentEmailEventData_t2109692145, ___Body_10)); }
	inline String_t* get_Body_10() const { return ___Body_10; }
	inline String_t** get_address_of_Body_10() { return &___Body_10; }
	inline void set_Body_10(String_t* value)
	{
		___Body_10 = value;
		Il2CppCodeGenWriteBarrier((&___Body_10), value);
	}

	inline static int32_t get_offset_of_EmailName_11() { return static_cast<int32_t>(offsetof(SentEmailEventData_t2109692145, ___EmailName_11)); }
	inline String_t* get_EmailName_11() const { return ___EmailName_11; }
	inline String_t** get_address_of_EmailName_11() { return &___EmailName_11; }
	inline void set_EmailName_11(String_t* value)
	{
		___EmailName_11 = value;
		Il2CppCodeGenWriteBarrier((&___EmailName_11), value);
	}

	inline static int32_t get_offset_of_EmailTemplateId_12() { return static_cast<int32_t>(offsetof(SentEmailEventData_t2109692145, ___EmailTemplateId_12)); }
	inline String_t* get_EmailTemplateId_12() const { return ___EmailTemplateId_12; }
	inline String_t** get_address_of_EmailTemplateId_12() { return &___EmailTemplateId_12; }
	inline void set_EmailTemplateId_12(String_t* value)
	{
		___EmailTemplateId_12 = value;
		Il2CppCodeGenWriteBarrier((&___EmailTemplateId_12), value);
	}

	inline static int32_t get_offset_of_EmailTemplateName_13() { return static_cast<int32_t>(offsetof(SentEmailEventData_t2109692145, ___EmailTemplateName_13)); }
	inline String_t* get_EmailTemplateName_13() const { return ___EmailTemplateName_13; }
	inline String_t** get_address_of_EmailTemplateName_13() { return &___EmailTemplateName_13; }
	inline void set_EmailTemplateName_13(String_t* value)
	{
		___EmailTemplateName_13 = value;
		Il2CppCodeGenWriteBarrier((&___EmailTemplateName_13), value);
	}

	inline static int32_t get_offset_of_EmailTemplateType_14() { return static_cast<int32_t>(offsetof(SentEmailEventData_t2109692145, ___EmailTemplateType_14)); }
	inline Nullable_1_t1253562481  get_EmailTemplateType_14() const { return ___EmailTemplateType_14; }
	inline Nullable_1_t1253562481 * get_address_of_EmailTemplateType_14() { return &___EmailTemplateType_14; }
	inline void set_EmailTemplateType_14(Nullable_1_t1253562481  value)
	{
		___EmailTemplateType_14 = value;
	}

	inline static int32_t get_offset_of_ErrorMessage_15() { return static_cast<int32_t>(offsetof(SentEmailEventData_t2109692145, ___ErrorMessage_15)); }
	inline String_t* get_ErrorMessage_15() const { return ___ErrorMessage_15; }
	inline String_t** get_address_of_ErrorMessage_15() { return &___ErrorMessage_15; }
	inline void set_ErrorMessage_15(String_t* value)
	{
		___ErrorMessage_15 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorMessage_15), value);
	}

	inline static int32_t get_offset_of_ErrorName_16() { return static_cast<int32_t>(offsetof(SentEmailEventData_t2109692145, ___ErrorName_16)); }
	inline String_t* get_ErrorName_16() const { return ___ErrorName_16; }
	inline String_t** get_address_of_ErrorName_16() { return &___ErrorName_16; }
	inline void set_ErrorName_16(String_t* value)
	{
		___ErrorName_16 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorName_16), value);
	}

	inline static int32_t get_offset_of_Language_17() { return static_cast<int32_t>(offsetof(SentEmailEventData_t2109692145, ___Language_17)); }
	inline String_t* get_Language_17() const { return ___Language_17; }
	inline String_t** get_address_of_Language_17() { return &___Language_17; }
	inline void set_Language_17(String_t* value)
	{
		___Language_17 = value;
		Il2CppCodeGenWriteBarrier((&___Language_17), value);
	}

	inline static int32_t get_offset_of_Subject_18() { return static_cast<int32_t>(offsetof(SentEmailEventData_t2109692145, ___Subject_18)); }
	inline String_t* get_Subject_18() const { return ___Subject_18; }
	inline String_t** get_address_of_Subject_18() { return &___Subject_18; }
	inline void set_Subject_18(String_t* value)
	{
		___Subject_18 = value;
		Il2CppCodeGenWriteBarrier((&___Subject_18), value);
	}

	inline static int32_t get_offset_of_Success_19() { return static_cast<int32_t>(offsetof(SentEmailEventData_t2109692145, ___Success_19)); }
	inline bool get_Success_19() const { return ___Success_19; }
	inline bool* get_address_of_Success_19() { return &___Success_19; }
	inline void set_Success_19(bool value)
	{
		___Success_19 = value;
	}

	inline static int32_t get_offset_of_TitleId_20() { return static_cast<int32_t>(offsetof(SentEmailEventData_t2109692145, ___TitleId_20)); }
	inline String_t* get_TitleId_20() const { return ___TitleId_20; }
	inline String_t** get_address_of_TitleId_20() { return &___TitleId_20; }
	inline void set_TitleId_20(String_t* value)
	{
		___TitleId_20 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_20), value);
	}

	inline static int32_t get_offset_of_Token_21() { return static_cast<int32_t>(offsetof(SentEmailEventData_t2109692145, ___Token_21)); }
	inline String_t* get_Token_21() const { return ___Token_21; }
	inline String_t** get_address_of_Token_21() { return &___Token_21; }
	inline void set_Token_21(String_t* value)
	{
		___Token_21 = value;
		Il2CppCodeGenWriteBarrier((&___Token_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENTEMAILEVENTDATA_T2109692145_H
#ifndef SESSIONENDEDEVENTDATA_T1471866750_H
#define SESSIONENDEDEVENTDATA_T1471866750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.SessionEndedEventData
struct  SessionEndedEventData_t1471866750  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Boolean PlayFab.PlayStreamModels.SessionEndedEventData::Crashed
	bool ___Crashed_10;
	// System.DateTime PlayFab.PlayStreamModels.SessionEndedEventData::EndTime
	DateTime_t3738529785  ___EndTime_11;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.SessionEndedEventData::KilobytesWritten
	Nullable_1_t2317227445  ___KilobytesWritten_12;
	// System.Double PlayFab.PlayStreamModels.SessionEndedEventData::SessionLengthMs
	double ___SessionLengthMs_13;
	// System.String PlayFab.PlayStreamModels.SessionEndedEventData::TitleId
	String_t* ___TitleId_14;
	// System.String PlayFab.PlayStreamModels.SessionEndedEventData::UserId
	String_t* ___UserId_15;

public:
	inline static int32_t get_offset_of_Crashed_10() { return static_cast<int32_t>(offsetof(SessionEndedEventData_t1471866750, ___Crashed_10)); }
	inline bool get_Crashed_10() const { return ___Crashed_10; }
	inline bool* get_address_of_Crashed_10() { return &___Crashed_10; }
	inline void set_Crashed_10(bool value)
	{
		___Crashed_10 = value;
	}

	inline static int32_t get_offset_of_EndTime_11() { return static_cast<int32_t>(offsetof(SessionEndedEventData_t1471866750, ___EndTime_11)); }
	inline DateTime_t3738529785  get_EndTime_11() const { return ___EndTime_11; }
	inline DateTime_t3738529785 * get_address_of_EndTime_11() { return &___EndTime_11; }
	inline void set_EndTime_11(DateTime_t3738529785  value)
	{
		___EndTime_11 = value;
	}

	inline static int32_t get_offset_of_KilobytesWritten_12() { return static_cast<int32_t>(offsetof(SessionEndedEventData_t1471866750, ___KilobytesWritten_12)); }
	inline Nullable_1_t2317227445  get_KilobytesWritten_12() const { return ___KilobytesWritten_12; }
	inline Nullable_1_t2317227445 * get_address_of_KilobytesWritten_12() { return &___KilobytesWritten_12; }
	inline void set_KilobytesWritten_12(Nullable_1_t2317227445  value)
	{
		___KilobytesWritten_12 = value;
	}

	inline static int32_t get_offset_of_SessionLengthMs_13() { return static_cast<int32_t>(offsetof(SessionEndedEventData_t1471866750, ___SessionLengthMs_13)); }
	inline double get_SessionLengthMs_13() const { return ___SessionLengthMs_13; }
	inline double* get_address_of_SessionLengthMs_13() { return &___SessionLengthMs_13; }
	inline void set_SessionLengthMs_13(double value)
	{
		___SessionLengthMs_13 = value;
	}

	inline static int32_t get_offset_of_TitleId_14() { return static_cast<int32_t>(offsetof(SessionEndedEventData_t1471866750, ___TitleId_14)); }
	inline String_t* get_TitleId_14() const { return ___TitleId_14; }
	inline String_t** get_address_of_TitleId_14() { return &___TitleId_14; }
	inline void set_TitleId_14(String_t* value)
	{
		___TitleId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_14), value);
	}

	inline static int32_t get_offset_of_UserId_15() { return static_cast<int32_t>(offsetof(SessionEndedEventData_t1471866750, ___UserId_15)); }
	inline String_t* get_UserId_15() const { return ___UserId_15; }
	inline String_t** get_address_of_UserId_15() { return &___UserId_15; }
	inline void set_UserId_15(String_t* value)
	{
		___UserId_15 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONENDEDEVENTDATA_T1471866750_H
#ifndef SESSIONSTARTEDEVENTDATA_T3144881655_H
#define SESSIONSTARTEDEVENTDATA_T3144881655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.SessionStartedEventData
struct  SessionStartedEventData_t3144881655  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.SessionStartedEventData::TemporaryWriteUrl
	String_t* ___TemporaryWriteUrl_10;
	// System.String PlayFab.PlayStreamModels.SessionStartedEventData::TitleId
	String_t* ___TitleId_11;

public:
	inline static int32_t get_offset_of_TemporaryWriteUrl_10() { return static_cast<int32_t>(offsetof(SessionStartedEventData_t3144881655, ___TemporaryWriteUrl_10)); }
	inline String_t* get_TemporaryWriteUrl_10() const { return ___TemporaryWriteUrl_10; }
	inline String_t** get_address_of_TemporaryWriteUrl_10() { return &___TemporaryWriteUrl_10; }
	inline void set_TemporaryWriteUrl_10(String_t* value)
	{
		___TemporaryWriteUrl_10 = value;
		Il2CppCodeGenWriteBarrier((&___TemporaryWriteUrl_10), value);
	}

	inline static int32_t get_offset_of_TitleId_11() { return static_cast<int32_t>(offsetof(SessionStartedEventData_t3144881655, ___TitleId_11)); }
	inline String_t* get_TitleId_11() const { return ___TitleId_11; }
	inline String_t** get_address_of_TitleId_11() { return &___TitleId_11; }
	inline void set_TitleId_11(String_t* value)
	{
		___TitleId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONSTARTEDEVENTDATA_T3144881655_H
#ifndef TITLEAPISETTINGSCHANGEDEVENTDATA_T2850335908_H
#define TITLEAPISETTINGSCHANGEDEVENTDATA_T2850335908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleAPISettingsChangedEventData
struct  TitleAPISettingsChangedEventData_t2850335908  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleAPISettingsChangedEventData::DeveloperId
	String_t* ___DeveloperId_10;
	// PlayFab.PlayStreamModels.APISettings PlayFab.PlayStreamModels.TitleAPISettingsChangedEventData::PreviousSettingsValues
	APISettings_t386763229 * ___PreviousSettingsValues_11;
	// PlayFab.PlayStreamModels.APISettings PlayFab.PlayStreamModels.TitleAPISettingsChangedEventData::SettingsValues
	APISettings_t386763229 * ___SettingsValues_12;
	// System.String PlayFab.PlayStreamModels.TitleAPISettingsChangedEventData::UserId
	String_t* ___UserId_13;

public:
	inline static int32_t get_offset_of_DeveloperId_10() { return static_cast<int32_t>(offsetof(TitleAPISettingsChangedEventData_t2850335908, ___DeveloperId_10)); }
	inline String_t* get_DeveloperId_10() const { return ___DeveloperId_10; }
	inline String_t** get_address_of_DeveloperId_10() { return &___DeveloperId_10; }
	inline void set_DeveloperId_10(String_t* value)
	{
		___DeveloperId_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_10), value);
	}

	inline static int32_t get_offset_of_PreviousSettingsValues_11() { return static_cast<int32_t>(offsetof(TitleAPISettingsChangedEventData_t2850335908, ___PreviousSettingsValues_11)); }
	inline APISettings_t386763229 * get_PreviousSettingsValues_11() const { return ___PreviousSettingsValues_11; }
	inline APISettings_t386763229 ** get_address_of_PreviousSettingsValues_11() { return &___PreviousSettingsValues_11; }
	inline void set_PreviousSettingsValues_11(APISettings_t386763229 * value)
	{
		___PreviousSettingsValues_11 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousSettingsValues_11), value);
	}

	inline static int32_t get_offset_of_SettingsValues_12() { return static_cast<int32_t>(offsetof(TitleAPISettingsChangedEventData_t2850335908, ___SettingsValues_12)); }
	inline APISettings_t386763229 * get_SettingsValues_12() const { return ___SettingsValues_12; }
	inline APISettings_t386763229 ** get_address_of_SettingsValues_12() { return &___SettingsValues_12; }
	inline void set_SettingsValues_12(APISettings_t386763229 * value)
	{
		___SettingsValues_12 = value;
		Il2CppCodeGenWriteBarrier((&___SettingsValues_12), value);
	}

	inline static int32_t get_offset_of_UserId_13() { return static_cast<int32_t>(offsetof(TitleAPISettingsChangedEventData_t2850335908, ___UserId_13)); }
	inline String_t* get_UserId_13() const { return ___UserId_13; }
	inline String_t** get_address_of_UserId_13() { return &___UserId_13; }
	inline void set_UserId_13(String_t* value)
	{
		___UserId_13 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEAPISETTINGSCHANGEDEVENTDATA_T2850335908_H
#ifndef TITLEABORTEDTASKEVENTDATA_T1586590638_H
#define TITLEABORTEDTASKEVENTDATA_T1586590638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleAbortedTaskEventData
struct  TitleAbortedTaskEventData_t1586590638  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleAbortedTaskEventData::DeveloperId
	String_t* ___DeveloperId_10;
	// System.String PlayFab.PlayStreamModels.TitleAbortedTaskEventData::TaskInstanceId
	String_t* ___TaskInstanceId_11;
	// System.String PlayFab.PlayStreamModels.TitleAbortedTaskEventData::UserId
	String_t* ___UserId_12;

public:
	inline static int32_t get_offset_of_DeveloperId_10() { return static_cast<int32_t>(offsetof(TitleAbortedTaskEventData_t1586590638, ___DeveloperId_10)); }
	inline String_t* get_DeveloperId_10() const { return ___DeveloperId_10; }
	inline String_t** get_address_of_DeveloperId_10() { return &___DeveloperId_10; }
	inline void set_DeveloperId_10(String_t* value)
	{
		___DeveloperId_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_10), value);
	}

	inline static int32_t get_offset_of_TaskInstanceId_11() { return static_cast<int32_t>(offsetof(TitleAbortedTaskEventData_t1586590638, ___TaskInstanceId_11)); }
	inline String_t* get_TaskInstanceId_11() const { return ___TaskInstanceId_11; }
	inline String_t** get_address_of_TaskInstanceId_11() { return &___TaskInstanceId_11; }
	inline void set_TaskInstanceId_11(String_t* value)
	{
		___TaskInstanceId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TaskInstanceId_11), value);
	}

	inline static int32_t get_offset_of_UserId_12() { return static_cast<int32_t>(offsetof(TitleAbortedTaskEventData_t1586590638, ___UserId_12)); }
	inline String_t* get_UserId_12() const { return ___UserId_12; }
	inline String_t** get_address_of_UserId_12() { return &___UserId_12; }
	inline void set_UserId_12(String_t* value)
	{
		___UserId_12 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEABORTEDTASKEVENTDATA_T1586590638_H
#ifndef TITLEADDEDCLOUDSCRIPTEVENTDATA_T1238269615_H
#define TITLEADDEDCLOUDSCRIPTEVENTDATA_T1238269615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData
struct  TitleAddedCloudScriptEventData_t1238269615  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData::DeveloperId
	String_t* ___DeveloperId_10;
	// System.Boolean PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData::Published
	bool ___Published_11;
	// System.Int32 PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData::Revision
	int32_t ___Revision_12;
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData::ScriptNames
	List_1_t3319525431 * ___ScriptNames_13;
	// System.String PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData::UserId
	String_t* ___UserId_14;
	// System.Int32 PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData::Version
	int32_t ___Version_15;

public:
	inline static int32_t get_offset_of_DeveloperId_10() { return static_cast<int32_t>(offsetof(TitleAddedCloudScriptEventData_t1238269615, ___DeveloperId_10)); }
	inline String_t* get_DeveloperId_10() const { return ___DeveloperId_10; }
	inline String_t** get_address_of_DeveloperId_10() { return &___DeveloperId_10; }
	inline void set_DeveloperId_10(String_t* value)
	{
		___DeveloperId_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_10), value);
	}

	inline static int32_t get_offset_of_Published_11() { return static_cast<int32_t>(offsetof(TitleAddedCloudScriptEventData_t1238269615, ___Published_11)); }
	inline bool get_Published_11() const { return ___Published_11; }
	inline bool* get_address_of_Published_11() { return &___Published_11; }
	inline void set_Published_11(bool value)
	{
		___Published_11 = value;
	}

	inline static int32_t get_offset_of_Revision_12() { return static_cast<int32_t>(offsetof(TitleAddedCloudScriptEventData_t1238269615, ___Revision_12)); }
	inline int32_t get_Revision_12() const { return ___Revision_12; }
	inline int32_t* get_address_of_Revision_12() { return &___Revision_12; }
	inline void set_Revision_12(int32_t value)
	{
		___Revision_12 = value;
	}

	inline static int32_t get_offset_of_ScriptNames_13() { return static_cast<int32_t>(offsetof(TitleAddedCloudScriptEventData_t1238269615, ___ScriptNames_13)); }
	inline List_1_t3319525431 * get_ScriptNames_13() const { return ___ScriptNames_13; }
	inline List_1_t3319525431 ** get_address_of_ScriptNames_13() { return &___ScriptNames_13; }
	inline void set_ScriptNames_13(List_1_t3319525431 * value)
	{
		___ScriptNames_13 = value;
		Il2CppCodeGenWriteBarrier((&___ScriptNames_13), value);
	}

	inline static int32_t get_offset_of_UserId_14() { return static_cast<int32_t>(offsetof(TitleAddedCloudScriptEventData_t1238269615, ___UserId_14)); }
	inline String_t* get_UserId_14() const { return ___UserId_14; }
	inline String_t** get_address_of_UserId_14() { return &___UserId_14; }
	inline void set_UserId_14(String_t* value)
	{
		___UserId_14 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_14), value);
	}

	inline static int32_t get_offset_of_Version_15() { return static_cast<int32_t>(offsetof(TitleAddedCloudScriptEventData_t1238269615, ___Version_15)); }
	inline int32_t get_Version_15() const { return ___Version_15; }
	inline int32_t* get_address_of_Version_15() { return &___Version_15; }
	inline void set_Version_15(int32_t value)
	{
		___Version_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEADDEDCLOUDSCRIPTEVENTDATA_T1238269615_H
#ifndef TITLEADDEDGAMEBUILDEVENTDATA_T3586467276_H
#define TITLEADDEDGAMEBUILDEVENTDATA_T3586467276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleAddedGameBuildEventData
struct  TitleAddedGameBuildEventData_t3586467276  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleAddedGameBuildEventData::BuildId
	String_t* ___BuildId_10;
	// System.String PlayFab.PlayStreamModels.TitleAddedGameBuildEventData::DeveloperId
	String_t* ___DeveloperId_11;
	// System.Int32 PlayFab.PlayStreamModels.TitleAddedGameBuildEventData::MaxGamesPerHost
	int32_t ___MaxGamesPerHost_12;
	// System.Int32 PlayFab.PlayStreamModels.TitleAddedGameBuildEventData::MinFreeGameSlots
	int32_t ___MinFreeGameSlots_13;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.Region> PlayFab.PlayStreamModels.TitleAddedGameBuildEventData::Regions
	List_1_t4271778298 * ___Regions_14;
	// System.String PlayFab.PlayStreamModels.TitleAddedGameBuildEventData::UserId
	String_t* ___UserId_15;

public:
	inline static int32_t get_offset_of_BuildId_10() { return static_cast<int32_t>(offsetof(TitleAddedGameBuildEventData_t3586467276, ___BuildId_10)); }
	inline String_t* get_BuildId_10() const { return ___BuildId_10; }
	inline String_t** get_address_of_BuildId_10() { return &___BuildId_10; }
	inline void set_BuildId_10(String_t* value)
	{
		___BuildId_10 = value;
		Il2CppCodeGenWriteBarrier((&___BuildId_10), value);
	}

	inline static int32_t get_offset_of_DeveloperId_11() { return static_cast<int32_t>(offsetof(TitleAddedGameBuildEventData_t3586467276, ___DeveloperId_11)); }
	inline String_t* get_DeveloperId_11() const { return ___DeveloperId_11; }
	inline String_t** get_address_of_DeveloperId_11() { return &___DeveloperId_11; }
	inline void set_DeveloperId_11(String_t* value)
	{
		___DeveloperId_11 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_11), value);
	}

	inline static int32_t get_offset_of_MaxGamesPerHost_12() { return static_cast<int32_t>(offsetof(TitleAddedGameBuildEventData_t3586467276, ___MaxGamesPerHost_12)); }
	inline int32_t get_MaxGamesPerHost_12() const { return ___MaxGamesPerHost_12; }
	inline int32_t* get_address_of_MaxGamesPerHost_12() { return &___MaxGamesPerHost_12; }
	inline void set_MaxGamesPerHost_12(int32_t value)
	{
		___MaxGamesPerHost_12 = value;
	}

	inline static int32_t get_offset_of_MinFreeGameSlots_13() { return static_cast<int32_t>(offsetof(TitleAddedGameBuildEventData_t3586467276, ___MinFreeGameSlots_13)); }
	inline int32_t get_MinFreeGameSlots_13() const { return ___MinFreeGameSlots_13; }
	inline int32_t* get_address_of_MinFreeGameSlots_13() { return &___MinFreeGameSlots_13; }
	inline void set_MinFreeGameSlots_13(int32_t value)
	{
		___MinFreeGameSlots_13 = value;
	}

	inline static int32_t get_offset_of_Regions_14() { return static_cast<int32_t>(offsetof(TitleAddedGameBuildEventData_t3586467276, ___Regions_14)); }
	inline List_1_t4271778298 * get_Regions_14() const { return ___Regions_14; }
	inline List_1_t4271778298 ** get_address_of_Regions_14() { return &___Regions_14; }
	inline void set_Regions_14(List_1_t4271778298 * value)
	{
		___Regions_14 = value;
		Il2CppCodeGenWriteBarrier((&___Regions_14), value);
	}

	inline static int32_t get_offset_of_UserId_15() { return static_cast<int32_t>(offsetof(TitleAddedGameBuildEventData_t3586467276, ___UserId_15)); }
	inline String_t* get_UserId_15() const { return ___UserId_15; }
	inline String_t** get_address_of_UserId_15() { return &___UserId_15; }
	inline void set_UserId_15(String_t* value)
	{
		___UserId_15 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEADDEDGAMEBUILDEVENTDATA_T3586467276_H
#ifndef TITLECATALOGUPDATEDEVENTDATA_T4227670981_H
#define TITLECATALOGUPDATEDEVENTDATA_T4227670981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleCatalogUpdatedEventData
struct  TitleCatalogUpdatedEventData_t4227670981  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleCatalogUpdatedEventData::CatalogVersion
	String_t* ___CatalogVersion_10;
	// System.Boolean PlayFab.PlayStreamModels.TitleCatalogUpdatedEventData::Deleted
	bool ___Deleted_11;
	// System.String PlayFab.PlayStreamModels.TitleCatalogUpdatedEventData::DeveloperId
	String_t* ___DeveloperId_12;
	// System.String PlayFab.PlayStreamModels.TitleCatalogUpdatedEventData::UserId
	String_t* ___UserId_13;

public:
	inline static int32_t get_offset_of_CatalogVersion_10() { return static_cast<int32_t>(offsetof(TitleCatalogUpdatedEventData_t4227670981, ___CatalogVersion_10)); }
	inline String_t* get_CatalogVersion_10() const { return ___CatalogVersion_10; }
	inline String_t** get_address_of_CatalogVersion_10() { return &___CatalogVersion_10; }
	inline void set_CatalogVersion_10(String_t* value)
	{
		___CatalogVersion_10 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_10), value);
	}

	inline static int32_t get_offset_of_Deleted_11() { return static_cast<int32_t>(offsetof(TitleCatalogUpdatedEventData_t4227670981, ___Deleted_11)); }
	inline bool get_Deleted_11() const { return ___Deleted_11; }
	inline bool* get_address_of_Deleted_11() { return &___Deleted_11; }
	inline void set_Deleted_11(bool value)
	{
		___Deleted_11 = value;
	}

	inline static int32_t get_offset_of_DeveloperId_12() { return static_cast<int32_t>(offsetof(TitleCatalogUpdatedEventData_t4227670981, ___DeveloperId_12)); }
	inline String_t* get_DeveloperId_12() const { return ___DeveloperId_12; }
	inline String_t** get_address_of_DeveloperId_12() { return &___DeveloperId_12; }
	inline void set_DeveloperId_12(String_t* value)
	{
		___DeveloperId_12 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_12), value);
	}

	inline static int32_t get_offset_of_UserId_13() { return static_cast<int32_t>(offsetof(TitleCatalogUpdatedEventData_t4227670981, ___UserId_13)); }
	inline String_t* get_UserId_13() const { return ___UserId_13; }
	inline String_t** get_address_of_UserId_13() { return &___UserId_13; }
	inline void set_UserId_13(String_t* value)
	{
		___UserId_13 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLECATALOGUPDATEDEVENTDATA_T4227670981_H
#ifndef TITLECLIENTRATELIMITEDEVENTDATA_T4196509077_H
#define TITLECLIENTRATELIMITEDEVENTDATA_T4196509077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleClientRateLimitedEventData
struct  TitleClientRateLimitedEventData_t4196509077  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleClientRateLimitedEventData::AlertEventId
	String_t* ___AlertEventId_10;
	// System.Nullable`1<PlayFab.PlayStreamModels.AlertStates> PlayFab.PlayStreamModels.TitleClientRateLimitedEventData::AlertState
	Nullable_1_t3314502024  ___AlertState_11;
	// System.String PlayFab.PlayStreamModels.TitleClientRateLimitedEventData::API
	String_t* ___API_12;
	// System.String PlayFab.PlayStreamModels.TitleClientRateLimitedEventData::ErrorCode
	String_t* ___ErrorCode_13;
	// System.String PlayFab.PlayStreamModels.TitleClientRateLimitedEventData::GraphUrl
	String_t* ___GraphUrl_14;
	// System.Nullable`1<PlayFab.PlayStreamModels.AlertLevel> PlayFab.PlayStreamModels.TitleClientRateLimitedEventData::Level
	Nullable_1_t3603189455  ___Level_15;

public:
	inline static int32_t get_offset_of_AlertEventId_10() { return static_cast<int32_t>(offsetof(TitleClientRateLimitedEventData_t4196509077, ___AlertEventId_10)); }
	inline String_t* get_AlertEventId_10() const { return ___AlertEventId_10; }
	inline String_t** get_address_of_AlertEventId_10() { return &___AlertEventId_10; }
	inline void set_AlertEventId_10(String_t* value)
	{
		___AlertEventId_10 = value;
		Il2CppCodeGenWriteBarrier((&___AlertEventId_10), value);
	}

	inline static int32_t get_offset_of_AlertState_11() { return static_cast<int32_t>(offsetof(TitleClientRateLimitedEventData_t4196509077, ___AlertState_11)); }
	inline Nullable_1_t3314502024  get_AlertState_11() const { return ___AlertState_11; }
	inline Nullable_1_t3314502024 * get_address_of_AlertState_11() { return &___AlertState_11; }
	inline void set_AlertState_11(Nullable_1_t3314502024  value)
	{
		___AlertState_11 = value;
	}

	inline static int32_t get_offset_of_API_12() { return static_cast<int32_t>(offsetof(TitleClientRateLimitedEventData_t4196509077, ___API_12)); }
	inline String_t* get_API_12() const { return ___API_12; }
	inline String_t** get_address_of_API_12() { return &___API_12; }
	inline void set_API_12(String_t* value)
	{
		___API_12 = value;
		Il2CppCodeGenWriteBarrier((&___API_12), value);
	}

	inline static int32_t get_offset_of_ErrorCode_13() { return static_cast<int32_t>(offsetof(TitleClientRateLimitedEventData_t4196509077, ___ErrorCode_13)); }
	inline String_t* get_ErrorCode_13() const { return ___ErrorCode_13; }
	inline String_t** get_address_of_ErrorCode_13() { return &___ErrorCode_13; }
	inline void set_ErrorCode_13(String_t* value)
	{
		___ErrorCode_13 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorCode_13), value);
	}

	inline static int32_t get_offset_of_GraphUrl_14() { return static_cast<int32_t>(offsetof(TitleClientRateLimitedEventData_t4196509077, ___GraphUrl_14)); }
	inline String_t* get_GraphUrl_14() const { return ___GraphUrl_14; }
	inline String_t** get_address_of_GraphUrl_14() { return &___GraphUrl_14; }
	inline void set_GraphUrl_14(String_t* value)
	{
		___GraphUrl_14 = value;
		Il2CppCodeGenWriteBarrier((&___GraphUrl_14), value);
	}

	inline static int32_t get_offset_of_Level_15() { return static_cast<int32_t>(offsetof(TitleClientRateLimitedEventData_t4196509077, ___Level_15)); }
	inline Nullable_1_t3603189455  get_Level_15() const { return ___Level_15; }
	inline Nullable_1_t3603189455 * get_address_of_Level_15() { return &___Level_15; }
	inline void set_Level_15(Nullable_1_t3603189455  value)
	{
		___Level_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLECLIENTRATELIMITEDEVENTDATA_T4196509077_H
#ifndef TITLECOMPLETEDTASKEVENTDATA_T37833475_H
#define TITLECOMPLETEDTASKEVENTDATA_T37833475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleCompletedTaskEventData
struct  TitleCompletedTaskEventData_t37833475  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.TitleCompletedTaskEventData::AbortedAt
	Nullable_1_t1166124571  ___AbortedAt_10;
	// System.Boolean PlayFab.PlayStreamModels.TitleCompletedTaskEventData::IsAborted
	bool ___IsAborted_11;
	// System.Nullable`1<PlayFab.PlayStreamModels.TaskInstanceStatus> PlayFab.PlayStreamModels.TitleCompletedTaskEventData::Result
	Nullable_1_t1126128897  ___Result_12;
	// System.Object PlayFab.PlayStreamModels.TitleCompletedTaskEventData::Summary
	RuntimeObject * ___Summary_13;
	// System.String PlayFab.PlayStreamModels.TitleCompletedTaskEventData::TaskInstanceId
	String_t* ___TaskInstanceId_14;
	// System.String PlayFab.PlayStreamModels.TitleCompletedTaskEventData::TaskType
	String_t* ___TaskType_15;

public:
	inline static int32_t get_offset_of_AbortedAt_10() { return static_cast<int32_t>(offsetof(TitleCompletedTaskEventData_t37833475, ___AbortedAt_10)); }
	inline Nullable_1_t1166124571  get_AbortedAt_10() const { return ___AbortedAt_10; }
	inline Nullable_1_t1166124571 * get_address_of_AbortedAt_10() { return &___AbortedAt_10; }
	inline void set_AbortedAt_10(Nullable_1_t1166124571  value)
	{
		___AbortedAt_10 = value;
	}

	inline static int32_t get_offset_of_IsAborted_11() { return static_cast<int32_t>(offsetof(TitleCompletedTaskEventData_t37833475, ___IsAborted_11)); }
	inline bool get_IsAborted_11() const { return ___IsAborted_11; }
	inline bool* get_address_of_IsAborted_11() { return &___IsAborted_11; }
	inline void set_IsAborted_11(bool value)
	{
		___IsAborted_11 = value;
	}

	inline static int32_t get_offset_of_Result_12() { return static_cast<int32_t>(offsetof(TitleCompletedTaskEventData_t37833475, ___Result_12)); }
	inline Nullable_1_t1126128897  get_Result_12() const { return ___Result_12; }
	inline Nullable_1_t1126128897 * get_address_of_Result_12() { return &___Result_12; }
	inline void set_Result_12(Nullable_1_t1126128897  value)
	{
		___Result_12 = value;
	}

	inline static int32_t get_offset_of_Summary_13() { return static_cast<int32_t>(offsetof(TitleCompletedTaskEventData_t37833475, ___Summary_13)); }
	inline RuntimeObject * get_Summary_13() const { return ___Summary_13; }
	inline RuntimeObject ** get_address_of_Summary_13() { return &___Summary_13; }
	inline void set_Summary_13(RuntimeObject * value)
	{
		___Summary_13 = value;
		Il2CppCodeGenWriteBarrier((&___Summary_13), value);
	}

	inline static int32_t get_offset_of_TaskInstanceId_14() { return static_cast<int32_t>(offsetof(TitleCompletedTaskEventData_t37833475, ___TaskInstanceId_14)); }
	inline String_t* get_TaskInstanceId_14() const { return ___TaskInstanceId_14; }
	inline String_t** get_address_of_TaskInstanceId_14() { return &___TaskInstanceId_14; }
	inline void set_TaskInstanceId_14(String_t* value)
	{
		___TaskInstanceId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TaskInstanceId_14), value);
	}

	inline static int32_t get_offset_of_TaskType_15() { return static_cast<int32_t>(offsetof(TitleCompletedTaskEventData_t37833475, ___TaskType_15)); }
	inline String_t* get_TaskType_15() const { return ___TaskType_15; }
	inline String_t** get_address_of_TaskType_15() { return &___TaskType_15; }
	inline void set_TaskType_15(String_t* value)
	{
		___TaskType_15 = value;
		Il2CppCodeGenWriteBarrier((&___TaskType_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLECOMPLETEDTASKEVENTDATA_T37833475_H
#ifndef TITLECREATEDTASKEVENTDATA_T107524265_H
#define TITLECREATEDTASKEVENTDATA_T107524265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleCreatedTaskEventData
struct  TitleCreatedTaskEventData_t107524265  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleCreatedTaskEventData::DeveloperId
	String_t* ___DeveloperId_10;
	// PlayFab.PlayStreamModels.NameIdentifier PlayFab.PlayStreamModels.TitleCreatedTaskEventData::ScheduledTask
	NameIdentifier_t3894807572 * ___ScheduledTask_11;
	// System.String PlayFab.PlayStreamModels.TitleCreatedTaskEventData::UserId
	String_t* ___UserId_12;

public:
	inline static int32_t get_offset_of_DeveloperId_10() { return static_cast<int32_t>(offsetof(TitleCreatedTaskEventData_t107524265, ___DeveloperId_10)); }
	inline String_t* get_DeveloperId_10() const { return ___DeveloperId_10; }
	inline String_t** get_address_of_DeveloperId_10() { return &___DeveloperId_10; }
	inline void set_DeveloperId_10(String_t* value)
	{
		___DeveloperId_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_10), value);
	}

	inline static int32_t get_offset_of_ScheduledTask_11() { return static_cast<int32_t>(offsetof(TitleCreatedTaskEventData_t107524265, ___ScheduledTask_11)); }
	inline NameIdentifier_t3894807572 * get_ScheduledTask_11() const { return ___ScheduledTask_11; }
	inline NameIdentifier_t3894807572 ** get_address_of_ScheduledTask_11() { return &___ScheduledTask_11; }
	inline void set_ScheduledTask_11(NameIdentifier_t3894807572 * value)
	{
		___ScheduledTask_11 = value;
		Il2CppCodeGenWriteBarrier((&___ScheduledTask_11), value);
	}

	inline static int32_t get_offset_of_UserId_12() { return static_cast<int32_t>(offsetof(TitleCreatedTaskEventData_t107524265, ___UserId_12)); }
	inline String_t* get_UserId_12() const { return ___UserId_12; }
	inline String_t** get_address_of_UserId_12() { return &___UserId_12; }
	inline void set_UserId_12(String_t* value)
	{
		___UserId_12 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLECREATEDTASKEVENTDATA_T107524265_H
#ifndef TITLEDELETEDEVENTDATA_T3474232298_H
#define TITLEDELETEDEVENTDATA_T3474232298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleDeletedEventData
struct  TitleDeletedEventData_t3474232298  : public PlayStreamEventBase_t3913229166
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEDELETEDEVENTDATA_T3474232298_H
#ifndef TITLEDELETEDTASKEVENTDATA_T2544448893_H
#define TITLEDELETEDTASKEVENTDATA_T2544448893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleDeletedTaskEventData
struct  TitleDeletedTaskEventData_t2544448893  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleDeletedTaskEventData::DeveloperId
	String_t* ___DeveloperId_10;
	// PlayFab.PlayStreamModels.NameIdentifier PlayFab.PlayStreamModels.TitleDeletedTaskEventData::ScheduledTask
	NameIdentifier_t3894807572 * ___ScheduledTask_11;
	// System.String PlayFab.PlayStreamModels.TitleDeletedTaskEventData::UserId
	String_t* ___UserId_12;

public:
	inline static int32_t get_offset_of_DeveloperId_10() { return static_cast<int32_t>(offsetof(TitleDeletedTaskEventData_t2544448893, ___DeveloperId_10)); }
	inline String_t* get_DeveloperId_10() const { return ___DeveloperId_10; }
	inline String_t** get_address_of_DeveloperId_10() { return &___DeveloperId_10; }
	inline void set_DeveloperId_10(String_t* value)
	{
		___DeveloperId_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_10), value);
	}

	inline static int32_t get_offset_of_ScheduledTask_11() { return static_cast<int32_t>(offsetof(TitleDeletedTaskEventData_t2544448893, ___ScheduledTask_11)); }
	inline NameIdentifier_t3894807572 * get_ScheduledTask_11() const { return ___ScheduledTask_11; }
	inline NameIdentifier_t3894807572 ** get_address_of_ScheduledTask_11() { return &___ScheduledTask_11; }
	inline void set_ScheduledTask_11(NameIdentifier_t3894807572 * value)
	{
		___ScheduledTask_11 = value;
		Il2CppCodeGenWriteBarrier((&___ScheduledTask_11), value);
	}

	inline static int32_t get_offset_of_UserId_12() { return static_cast<int32_t>(offsetof(TitleDeletedTaskEventData_t2544448893, ___UserId_12)); }
	inline String_t* get_UserId_12() const { return ___UserId_12; }
	inline String_t** get_address_of_UserId_12() { return &___UserId_12; }
	inline void set_UserId_12(String_t* value)
	{
		___UserId_12 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEDELETEDTASKEVENTDATA_T2544448893_H
#ifndef TITLEEXCEEDEDLIMITEVENTDATA_T1378613392_H
#define TITLEEXCEEDEDLIMITEVENTDATA_T1378613392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleExceededLimitEventData
struct  TitleExceededLimitEventData_t1378613392  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.PlayStreamModels.TitleExceededLimitEventData::Details
	Dictionary_2_t2865362463 * ___Details_10;
	// System.String PlayFab.PlayStreamModels.TitleExceededLimitEventData::LimitDisplayName
	String_t* ___LimitDisplayName_11;
	// System.String PlayFab.PlayStreamModels.TitleExceededLimitEventData::LimitId
	String_t* ___LimitId_12;
	// System.Double PlayFab.PlayStreamModels.TitleExceededLimitEventData::LimitValue
	double ___LimitValue_13;
	// System.Nullable`1<PlayFab.PlayStreamModels.MetricUnit> PlayFab.PlayStreamModels.TitleExceededLimitEventData::Unit
	Nullable_1_t503729917  ___Unit_14;
	// System.Double PlayFab.PlayStreamModels.TitleExceededLimitEventData::Value
	double ___Value_15;

public:
	inline static int32_t get_offset_of_Details_10() { return static_cast<int32_t>(offsetof(TitleExceededLimitEventData_t1378613392, ___Details_10)); }
	inline Dictionary_2_t2865362463 * get_Details_10() const { return ___Details_10; }
	inline Dictionary_2_t2865362463 ** get_address_of_Details_10() { return &___Details_10; }
	inline void set_Details_10(Dictionary_2_t2865362463 * value)
	{
		___Details_10 = value;
		Il2CppCodeGenWriteBarrier((&___Details_10), value);
	}

	inline static int32_t get_offset_of_LimitDisplayName_11() { return static_cast<int32_t>(offsetof(TitleExceededLimitEventData_t1378613392, ___LimitDisplayName_11)); }
	inline String_t* get_LimitDisplayName_11() const { return ___LimitDisplayName_11; }
	inline String_t** get_address_of_LimitDisplayName_11() { return &___LimitDisplayName_11; }
	inline void set_LimitDisplayName_11(String_t* value)
	{
		___LimitDisplayName_11 = value;
		Il2CppCodeGenWriteBarrier((&___LimitDisplayName_11), value);
	}

	inline static int32_t get_offset_of_LimitId_12() { return static_cast<int32_t>(offsetof(TitleExceededLimitEventData_t1378613392, ___LimitId_12)); }
	inline String_t* get_LimitId_12() const { return ___LimitId_12; }
	inline String_t** get_address_of_LimitId_12() { return &___LimitId_12; }
	inline void set_LimitId_12(String_t* value)
	{
		___LimitId_12 = value;
		Il2CppCodeGenWriteBarrier((&___LimitId_12), value);
	}

	inline static int32_t get_offset_of_LimitValue_13() { return static_cast<int32_t>(offsetof(TitleExceededLimitEventData_t1378613392, ___LimitValue_13)); }
	inline double get_LimitValue_13() const { return ___LimitValue_13; }
	inline double* get_address_of_LimitValue_13() { return &___LimitValue_13; }
	inline void set_LimitValue_13(double value)
	{
		___LimitValue_13 = value;
	}

	inline static int32_t get_offset_of_Unit_14() { return static_cast<int32_t>(offsetof(TitleExceededLimitEventData_t1378613392, ___Unit_14)); }
	inline Nullable_1_t503729917  get_Unit_14() const { return ___Unit_14; }
	inline Nullable_1_t503729917 * get_address_of_Unit_14() { return &___Unit_14; }
	inline void set_Unit_14(Nullable_1_t503729917  value)
	{
		___Unit_14 = value;
	}

	inline static int32_t get_offset_of_Value_15() { return static_cast<int32_t>(offsetof(TitleExceededLimitEventData_t1378613392, ___Value_15)); }
	inline double get_Value_15() const { return ___Value_15; }
	inline double* get_address_of_Value_15() { return &___Value_15; }
	inline void set_Value_15(double value)
	{
		___Value_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEEXCEEDEDLIMITEVENTDATA_T1378613392_H
#ifndef TITLEHIGHERRORRATEEVENTDATA_T815057784_H
#define TITLEHIGHERRORRATEEVENTDATA_T815057784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleHighErrorRateEventData
struct  TitleHighErrorRateEventData_t815057784  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleHighErrorRateEventData::AlertEventId
	String_t* ___AlertEventId_10;
	// System.Nullable`1<PlayFab.PlayStreamModels.AlertStates> PlayFab.PlayStreamModels.TitleHighErrorRateEventData::AlertState
	Nullable_1_t3314502024  ___AlertState_11;
	// System.String PlayFab.PlayStreamModels.TitleHighErrorRateEventData::API
	String_t* ___API_12;
	// System.String PlayFab.PlayStreamModels.TitleHighErrorRateEventData::ErrorCode
	String_t* ___ErrorCode_13;
	// System.String PlayFab.PlayStreamModels.TitleHighErrorRateEventData::GraphUrl
	String_t* ___GraphUrl_14;
	// System.Nullable`1<PlayFab.PlayStreamModels.AlertLevel> PlayFab.PlayStreamModels.TitleHighErrorRateEventData::Level
	Nullable_1_t3603189455  ___Level_15;

public:
	inline static int32_t get_offset_of_AlertEventId_10() { return static_cast<int32_t>(offsetof(TitleHighErrorRateEventData_t815057784, ___AlertEventId_10)); }
	inline String_t* get_AlertEventId_10() const { return ___AlertEventId_10; }
	inline String_t** get_address_of_AlertEventId_10() { return &___AlertEventId_10; }
	inline void set_AlertEventId_10(String_t* value)
	{
		___AlertEventId_10 = value;
		Il2CppCodeGenWriteBarrier((&___AlertEventId_10), value);
	}

	inline static int32_t get_offset_of_AlertState_11() { return static_cast<int32_t>(offsetof(TitleHighErrorRateEventData_t815057784, ___AlertState_11)); }
	inline Nullable_1_t3314502024  get_AlertState_11() const { return ___AlertState_11; }
	inline Nullable_1_t3314502024 * get_address_of_AlertState_11() { return &___AlertState_11; }
	inline void set_AlertState_11(Nullable_1_t3314502024  value)
	{
		___AlertState_11 = value;
	}

	inline static int32_t get_offset_of_API_12() { return static_cast<int32_t>(offsetof(TitleHighErrorRateEventData_t815057784, ___API_12)); }
	inline String_t* get_API_12() const { return ___API_12; }
	inline String_t** get_address_of_API_12() { return &___API_12; }
	inline void set_API_12(String_t* value)
	{
		___API_12 = value;
		Il2CppCodeGenWriteBarrier((&___API_12), value);
	}

	inline static int32_t get_offset_of_ErrorCode_13() { return static_cast<int32_t>(offsetof(TitleHighErrorRateEventData_t815057784, ___ErrorCode_13)); }
	inline String_t* get_ErrorCode_13() const { return ___ErrorCode_13; }
	inline String_t** get_address_of_ErrorCode_13() { return &___ErrorCode_13; }
	inline void set_ErrorCode_13(String_t* value)
	{
		___ErrorCode_13 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorCode_13), value);
	}

	inline static int32_t get_offset_of_GraphUrl_14() { return static_cast<int32_t>(offsetof(TitleHighErrorRateEventData_t815057784, ___GraphUrl_14)); }
	inline String_t* get_GraphUrl_14() const { return ___GraphUrl_14; }
	inline String_t** get_address_of_GraphUrl_14() { return &___GraphUrl_14; }
	inline void set_GraphUrl_14(String_t* value)
	{
		___GraphUrl_14 = value;
		Il2CppCodeGenWriteBarrier((&___GraphUrl_14), value);
	}

	inline static int32_t get_offset_of_Level_15() { return static_cast<int32_t>(offsetof(TitleHighErrorRateEventData_t815057784, ___Level_15)); }
	inline Nullable_1_t3603189455  get_Level_15() const { return ___Level_15; }
	inline Nullable_1_t3603189455 * get_address_of_Level_15() { return &___Level_15; }
	inline void set_Level_15(Nullable_1_t3603189455  value)
	{
		___Level_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEHIGHERRORRATEEVENTDATA_T815057784_H
#ifndef TITLEINITIATEDPLAYERPASSWORDRESETEVENTDATA_T3548219522_H
#define TITLEINITIATEDPLAYERPASSWORDRESETEVENTDATA_T3548219522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleInitiatedPlayerPasswordResetEventData
struct  TitleInitiatedPlayerPasswordResetEventData_t3548219522  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleInitiatedPlayerPasswordResetEventData::DeveloperId
	String_t* ___DeveloperId_10;
	// System.String PlayFab.PlayStreamModels.TitleInitiatedPlayerPasswordResetEventData::PasswordResetId
	String_t* ___PasswordResetId_11;
	// System.String PlayFab.PlayStreamModels.TitleInitiatedPlayerPasswordResetEventData::PlayerId
	String_t* ___PlayerId_12;
	// System.String PlayFab.PlayStreamModels.TitleInitiatedPlayerPasswordResetEventData::PlayerRecoveryEmailAddress
	String_t* ___PlayerRecoveryEmailAddress_13;
	// System.String PlayFab.PlayStreamModels.TitleInitiatedPlayerPasswordResetEventData::UserId
	String_t* ___UserId_14;

public:
	inline static int32_t get_offset_of_DeveloperId_10() { return static_cast<int32_t>(offsetof(TitleInitiatedPlayerPasswordResetEventData_t3548219522, ___DeveloperId_10)); }
	inline String_t* get_DeveloperId_10() const { return ___DeveloperId_10; }
	inline String_t** get_address_of_DeveloperId_10() { return &___DeveloperId_10; }
	inline void set_DeveloperId_10(String_t* value)
	{
		___DeveloperId_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_10), value);
	}

	inline static int32_t get_offset_of_PasswordResetId_11() { return static_cast<int32_t>(offsetof(TitleInitiatedPlayerPasswordResetEventData_t3548219522, ___PasswordResetId_11)); }
	inline String_t* get_PasswordResetId_11() const { return ___PasswordResetId_11; }
	inline String_t** get_address_of_PasswordResetId_11() { return &___PasswordResetId_11; }
	inline void set_PasswordResetId_11(String_t* value)
	{
		___PasswordResetId_11 = value;
		Il2CppCodeGenWriteBarrier((&___PasswordResetId_11), value);
	}

	inline static int32_t get_offset_of_PlayerId_12() { return static_cast<int32_t>(offsetof(TitleInitiatedPlayerPasswordResetEventData_t3548219522, ___PlayerId_12)); }
	inline String_t* get_PlayerId_12() const { return ___PlayerId_12; }
	inline String_t** get_address_of_PlayerId_12() { return &___PlayerId_12; }
	inline void set_PlayerId_12(String_t* value)
	{
		___PlayerId_12 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerId_12), value);
	}

	inline static int32_t get_offset_of_PlayerRecoveryEmailAddress_13() { return static_cast<int32_t>(offsetof(TitleInitiatedPlayerPasswordResetEventData_t3548219522, ___PlayerRecoveryEmailAddress_13)); }
	inline String_t* get_PlayerRecoveryEmailAddress_13() const { return ___PlayerRecoveryEmailAddress_13; }
	inline String_t** get_address_of_PlayerRecoveryEmailAddress_13() { return &___PlayerRecoveryEmailAddress_13; }
	inline void set_PlayerRecoveryEmailAddress_13(String_t* value)
	{
		___PlayerRecoveryEmailAddress_13 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerRecoveryEmailAddress_13), value);
	}

	inline static int32_t get_offset_of_UserId_14() { return static_cast<int32_t>(offsetof(TitleInitiatedPlayerPasswordResetEventData_t3548219522, ___UserId_14)); }
	inline String_t* get_UserId_14() const { return ___UserId_14; }
	inline String_t** get_address_of_UserId_14() { return &___UserId_14; }
	inline void set_UserId_14(String_t* value)
	{
		___UserId_14 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEINITIATEDPLAYERPASSWORDRESETEVENTDATA_T3548219522_H
#ifndef TITLELIMITCHANGEDEVENTDATA_T323349762_H
#define TITLELIMITCHANGEDEVENTDATA_T323349762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleLimitChangedEventData
struct  TitleLimitChangedEventData_t323349762  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleLimitChangedEventData::LimitDisplayName
	String_t* ___LimitDisplayName_10;
	// System.String PlayFab.PlayStreamModels.TitleLimitChangedEventData::LimitId
	String_t* ___LimitId_11;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleLimitChangedEventData::PreviousPriceUSD
	Nullable_1_t2317227445  ___PreviousPriceUSD_12;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleLimitChangedEventData::PreviousValue
	Nullable_1_t2317227445  ___PreviousValue_13;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleLimitChangedEventData::PriceUSD
	Nullable_1_t2317227445  ___PriceUSD_14;
	// System.String PlayFab.PlayStreamModels.TitleLimitChangedEventData::TransactionId
	String_t* ___TransactionId_15;
	// System.Nullable`1<PlayFab.PlayStreamModels.MetricUnit> PlayFab.PlayStreamModels.TitleLimitChangedEventData::Unit
	Nullable_1_t503729917  ___Unit_16;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleLimitChangedEventData::Value
	Nullable_1_t2317227445  ___Value_17;

public:
	inline static int32_t get_offset_of_LimitDisplayName_10() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t323349762, ___LimitDisplayName_10)); }
	inline String_t* get_LimitDisplayName_10() const { return ___LimitDisplayName_10; }
	inline String_t** get_address_of_LimitDisplayName_10() { return &___LimitDisplayName_10; }
	inline void set_LimitDisplayName_10(String_t* value)
	{
		___LimitDisplayName_10 = value;
		Il2CppCodeGenWriteBarrier((&___LimitDisplayName_10), value);
	}

	inline static int32_t get_offset_of_LimitId_11() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t323349762, ___LimitId_11)); }
	inline String_t* get_LimitId_11() const { return ___LimitId_11; }
	inline String_t** get_address_of_LimitId_11() { return &___LimitId_11; }
	inline void set_LimitId_11(String_t* value)
	{
		___LimitId_11 = value;
		Il2CppCodeGenWriteBarrier((&___LimitId_11), value);
	}

	inline static int32_t get_offset_of_PreviousPriceUSD_12() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t323349762, ___PreviousPriceUSD_12)); }
	inline Nullable_1_t2317227445  get_PreviousPriceUSD_12() const { return ___PreviousPriceUSD_12; }
	inline Nullable_1_t2317227445 * get_address_of_PreviousPriceUSD_12() { return &___PreviousPriceUSD_12; }
	inline void set_PreviousPriceUSD_12(Nullable_1_t2317227445  value)
	{
		___PreviousPriceUSD_12 = value;
	}

	inline static int32_t get_offset_of_PreviousValue_13() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t323349762, ___PreviousValue_13)); }
	inline Nullable_1_t2317227445  get_PreviousValue_13() const { return ___PreviousValue_13; }
	inline Nullable_1_t2317227445 * get_address_of_PreviousValue_13() { return &___PreviousValue_13; }
	inline void set_PreviousValue_13(Nullable_1_t2317227445  value)
	{
		___PreviousValue_13 = value;
	}

	inline static int32_t get_offset_of_PriceUSD_14() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t323349762, ___PriceUSD_14)); }
	inline Nullable_1_t2317227445  get_PriceUSD_14() const { return ___PriceUSD_14; }
	inline Nullable_1_t2317227445 * get_address_of_PriceUSD_14() { return &___PriceUSD_14; }
	inline void set_PriceUSD_14(Nullable_1_t2317227445  value)
	{
		___PriceUSD_14 = value;
	}

	inline static int32_t get_offset_of_TransactionId_15() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t323349762, ___TransactionId_15)); }
	inline String_t* get_TransactionId_15() const { return ___TransactionId_15; }
	inline String_t** get_address_of_TransactionId_15() { return &___TransactionId_15; }
	inline void set_TransactionId_15(String_t* value)
	{
		___TransactionId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TransactionId_15), value);
	}

	inline static int32_t get_offset_of_Unit_16() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t323349762, ___Unit_16)); }
	inline Nullable_1_t503729917  get_Unit_16() const { return ___Unit_16; }
	inline Nullable_1_t503729917 * get_address_of_Unit_16() { return &___Unit_16; }
	inline void set_Unit_16(Nullable_1_t503729917  value)
	{
		___Unit_16 = value;
	}

	inline static int32_t get_offset_of_Value_17() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t323349762, ___Value_17)); }
	inline Nullable_1_t2317227445  get_Value_17() const { return ___Value_17; }
	inline Nullable_1_t2317227445 * get_address_of_Value_17() { return &___Value_17; }
	inline void set_Value_17(Nullable_1_t2317227445  value)
	{
		___Value_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLELIMITCHANGEDEVENTDATA_T323349762_H
#ifndef TITLEMODIFIEDGAMEBUILDEVENTDATA_T2715074267_H
#define TITLEMODIFIEDGAMEBUILDEVENTDATA_T2715074267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData
struct  TitleModifiedGameBuildEventData_t2715074267  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData::BuildId
	String_t* ___BuildId_10;
	// System.String PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData::DeveloperId
	String_t* ___DeveloperId_11;
	// System.Int32 PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData::MaxGamesPerHost
	int32_t ___MaxGamesPerHost_12;
	// System.Int32 PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData::MinFreeGameSlots
	int32_t ___MinFreeGameSlots_13;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.Region> PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData::Regions
	List_1_t4271778298 * ___Regions_14;
	// System.String PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData::UserId
	String_t* ___UserId_15;

public:
	inline static int32_t get_offset_of_BuildId_10() { return static_cast<int32_t>(offsetof(TitleModifiedGameBuildEventData_t2715074267, ___BuildId_10)); }
	inline String_t* get_BuildId_10() const { return ___BuildId_10; }
	inline String_t** get_address_of_BuildId_10() { return &___BuildId_10; }
	inline void set_BuildId_10(String_t* value)
	{
		___BuildId_10 = value;
		Il2CppCodeGenWriteBarrier((&___BuildId_10), value);
	}

	inline static int32_t get_offset_of_DeveloperId_11() { return static_cast<int32_t>(offsetof(TitleModifiedGameBuildEventData_t2715074267, ___DeveloperId_11)); }
	inline String_t* get_DeveloperId_11() const { return ___DeveloperId_11; }
	inline String_t** get_address_of_DeveloperId_11() { return &___DeveloperId_11; }
	inline void set_DeveloperId_11(String_t* value)
	{
		___DeveloperId_11 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_11), value);
	}

	inline static int32_t get_offset_of_MaxGamesPerHost_12() { return static_cast<int32_t>(offsetof(TitleModifiedGameBuildEventData_t2715074267, ___MaxGamesPerHost_12)); }
	inline int32_t get_MaxGamesPerHost_12() const { return ___MaxGamesPerHost_12; }
	inline int32_t* get_address_of_MaxGamesPerHost_12() { return &___MaxGamesPerHost_12; }
	inline void set_MaxGamesPerHost_12(int32_t value)
	{
		___MaxGamesPerHost_12 = value;
	}

	inline static int32_t get_offset_of_MinFreeGameSlots_13() { return static_cast<int32_t>(offsetof(TitleModifiedGameBuildEventData_t2715074267, ___MinFreeGameSlots_13)); }
	inline int32_t get_MinFreeGameSlots_13() const { return ___MinFreeGameSlots_13; }
	inline int32_t* get_address_of_MinFreeGameSlots_13() { return &___MinFreeGameSlots_13; }
	inline void set_MinFreeGameSlots_13(int32_t value)
	{
		___MinFreeGameSlots_13 = value;
	}

	inline static int32_t get_offset_of_Regions_14() { return static_cast<int32_t>(offsetof(TitleModifiedGameBuildEventData_t2715074267, ___Regions_14)); }
	inline List_1_t4271778298 * get_Regions_14() const { return ___Regions_14; }
	inline List_1_t4271778298 ** get_address_of_Regions_14() { return &___Regions_14; }
	inline void set_Regions_14(List_1_t4271778298 * value)
	{
		___Regions_14 = value;
		Il2CppCodeGenWriteBarrier((&___Regions_14), value);
	}

	inline static int32_t get_offset_of_UserId_15() { return static_cast<int32_t>(offsetof(TitleModifiedGameBuildEventData_t2715074267, ___UserId_15)); }
	inline String_t* get_UserId_15() const { return ___UserId_15; }
	inline String_t** get_address_of_UserId_15() { return &___UserId_15; }
	inline void set_UserId_15(String_t* value)
	{
		___UserId_15 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEMODIFIEDGAMEBUILDEVENTDATA_T2715074267_H
#ifndef TITLENEWSUPDATEDEVENTDATA_T2984024213_H
#define TITLENEWSUPDATEDEVENTDATA_T2984024213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleNewsUpdatedEventData
struct  TitleNewsUpdatedEventData_t2984024213  : public PlayStreamEventBase_t3913229166
{
public:
	// System.DateTime PlayFab.PlayStreamModels.TitleNewsUpdatedEventData::DateCreated
	DateTime_t3738529785  ___DateCreated_10;
	// System.String PlayFab.PlayStreamModels.TitleNewsUpdatedEventData::NewsId
	String_t* ___NewsId_11;
	// System.String PlayFab.PlayStreamModels.TitleNewsUpdatedEventData::NewsTitle
	String_t* ___NewsTitle_12;
	// System.Nullable`1<PlayFab.PlayStreamModels.NewsStatus> PlayFab.PlayStreamModels.TitleNewsUpdatedEventData::Status
	Nullable_1_t1179011330  ___Status_13;

public:
	inline static int32_t get_offset_of_DateCreated_10() { return static_cast<int32_t>(offsetof(TitleNewsUpdatedEventData_t2984024213, ___DateCreated_10)); }
	inline DateTime_t3738529785  get_DateCreated_10() const { return ___DateCreated_10; }
	inline DateTime_t3738529785 * get_address_of_DateCreated_10() { return &___DateCreated_10; }
	inline void set_DateCreated_10(DateTime_t3738529785  value)
	{
		___DateCreated_10 = value;
	}

	inline static int32_t get_offset_of_NewsId_11() { return static_cast<int32_t>(offsetof(TitleNewsUpdatedEventData_t2984024213, ___NewsId_11)); }
	inline String_t* get_NewsId_11() const { return ___NewsId_11; }
	inline String_t** get_address_of_NewsId_11() { return &___NewsId_11; }
	inline void set_NewsId_11(String_t* value)
	{
		___NewsId_11 = value;
		Il2CppCodeGenWriteBarrier((&___NewsId_11), value);
	}

	inline static int32_t get_offset_of_NewsTitle_12() { return static_cast<int32_t>(offsetof(TitleNewsUpdatedEventData_t2984024213, ___NewsTitle_12)); }
	inline String_t* get_NewsTitle_12() const { return ___NewsTitle_12; }
	inline String_t** get_address_of_NewsTitle_12() { return &___NewsTitle_12; }
	inline void set_NewsTitle_12(String_t* value)
	{
		___NewsTitle_12 = value;
		Il2CppCodeGenWriteBarrier((&___NewsTitle_12), value);
	}

	inline static int32_t get_offset_of_Status_13() { return static_cast<int32_t>(offsetof(TitleNewsUpdatedEventData_t2984024213, ___Status_13)); }
	inline Nullable_1_t1179011330  get_Status_13() const { return ___Status_13; }
	inline Nullable_1_t1179011330 * get_address_of_Status_13() { return &___Status_13; }
	inline void set_Status_13(Nullable_1_t1179011330  value)
	{
		___Status_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLENEWSUPDATEDEVENTDATA_T2984024213_H
#ifndef TITLEPERMISSIONSPOLICYCHANGEDEVENTDATA_T3083171274_H
#define TITLEPERMISSIONSPOLICYCHANGEDEVENTDATA_T3083171274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitlePermissionsPolicyChangedEventData
struct  TitlePermissionsPolicyChangedEventData_t3083171274  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitlePermissionsPolicyChangedEventData::DeveloperId
	String_t* ___DeveloperId_10;
	// System.String PlayFab.PlayStreamModels.TitlePermissionsPolicyChangedEventData::NewPolicy
	String_t* ___NewPolicy_11;
	// System.String PlayFab.PlayStreamModels.TitlePermissionsPolicyChangedEventData::PolicyName
	String_t* ___PolicyName_12;
	// System.String PlayFab.PlayStreamModels.TitlePermissionsPolicyChangedEventData::UserId
	String_t* ___UserId_13;

public:
	inline static int32_t get_offset_of_DeveloperId_10() { return static_cast<int32_t>(offsetof(TitlePermissionsPolicyChangedEventData_t3083171274, ___DeveloperId_10)); }
	inline String_t* get_DeveloperId_10() const { return ___DeveloperId_10; }
	inline String_t** get_address_of_DeveloperId_10() { return &___DeveloperId_10; }
	inline void set_DeveloperId_10(String_t* value)
	{
		___DeveloperId_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_10), value);
	}

	inline static int32_t get_offset_of_NewPolicy_11() { return static_cast<int32_t>(offsetof(TitlePermissionsPolicyChangedEventData_t3083171274, ___NewPolicy_11)); }
	inline String_t* get_NewPolicy_11() const { return ___NewPolicy_11; }
	inline String_t** get_address_of_NewPolicy_11() { return &___NewPolicy_11; }
	inline void set_NewPolicy_11(String_t* value)
	{
		___NewPolicy_11 = value;
		Il2CppCodeGenWriteBarrier((&___NewPolicy_11), value);
	}

	inline static int32_t get_offset_of_PolicyName_12() { return static_cast<int32_t>(offsetof(TitlePermissionsPolicyChangedEventData_t3083171274, ___PolicyName_12)); }
	inline String_t* get_PolicyName_12() const { return ___PolicyName_12; }
	inline String_t** get_address_of_PolicyName_12() { return &___PolicyName_12; }
	inline void set_PolicyName_12(String_t* value)
	{
		___PolicyName_12 = value;
		Il2CppCodeGenWriteBarrier((&___PolicyName_12), value);
	}

	inline static int32_t get_offset_of_UserId_13() { return static_cast<int32_t>(offsetof(TitlePermissionsPolicyChangedEventData_t3083171274, ___UserId_13)); }
	inline String_t* get_UserId_13() const { return ___UserId_13; }
	inline String_t** get_address_of_UserId_13() { return &___UserId_13; }
	inline void set_UserId_13(String_t* value)
	{
		___UserId_13 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEPERMISSIONSPOLICYCHANGEDEVENTDATA_T3083171274_H
#ifndef TITLEPROFILEVIEWCONSTRAINTSCHANGEDEVENTDATA_T2671899541_H
#define TITLEPROFILEVIEWCONSTRAINTSCHANGEDEVENTDATA_T2671899541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleProfileViewConstraintsChangedEventData
struct  TitleProfileViewConstraintsChangedEventData_t2671899541  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleProfileViewConstraintsChangedEventData::DeveloperId
	String_t* ___DeveloperId_10;
	// System.String PlayFab.PlayStreamModels.TitleProfileViewConstraintsChangedEventData::PreviousProfileViewConstraints
	String_t* ___PreviousProfileViewConstraints_11;
	// System.String PlayFab.PlayStreamModels.TitleProfileViewConstraintsChangedEventData::ProfileType
	String_t* ___ProfileType_12;
	// System.String PlayFab.PlayStreamModels.TitleProfileViewConstraintsChangedEventData::ProfileViewConstraints
	String_t* ___ProfileViewConstraints_13;
	// System.String PlayFab.PlayStreamModels.TitleProfileViewConstraintsChangedEventData::UserId
	String_t* ___UserId_14;

public:
	inline static int32_t get_offset_of_DeveloperId_10() { return static_cast<int32_t>(offsetof(TitleProfileViewConstraintsChangedEventData_t2671899541, ___DeveloperId_10)); }
	inline String_t* get_DeveloperId_10() const { return ___DeveloperId_10; }
	inline String_t** get_address_of_DeveloperId_10() { return &___DeveloperId_10; }
	inline void set_DeveloperId_10(String_t* value)
	{
		___DeveloperId_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_10), value);
	}

	inline static int32_t get_offset_of_PreviousProfileViewConstraints_11() { return static_cast<int32_t>(offsetof(TitleProfileViewConstraintsChangedEventData_t2671899541, ___PreviousProfileViewConstraints_11)); }
	inline String_t* get_PreviousProfileViewConstraints_11() const { return ___PreviousProfileViewConstraints_11; }
	inline String_t** get_address_of_PreviousProfileViewConstraints_11() { return &___PreviousProfileViewConstraints_11; }
	inline void set_PreviousProfileViewConstraints_11(String_t* value)
	{
		___PreviousProfileViewConstraints_11 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousProfileViewConstraints_11), value);
	}

	inline static int32_t get_offset_of_ProfileType_12() { return static_cast<int32_t>(offsetof(TitleProfileViewConstraintsChangedEventData_t2671899541, ___ProfileType_12)); }
	inline String_t* get_ProfileType_12() const { return ___ProfileType_12; }
	inline String_t** get_address_of_ProfileType_12() { return &___ProfileType_12; }
	inline void set_ProfileType_12(String_t* value)
	{
		___ProfileType_12 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileType_12), value);
	}

	inline static int32_t get_offset_of_ProfileViewConstraints_13() { return static_cast<int32_t>(offsetof(TitleProfileViewConstraintsChangedEventData_t2671899541, ___ProfileViewConstraints_13)); }
	inline String_t* get_ProfileViewConstraints_13() const { return ___ProfileViewConstraints_13; }
	inline String_t** get_address_of_ProfileViewConstraints_13() { return &___ProfileViewConstraints_13; }
	inline void set_ProfileViewConstraints_13(String_t* value)
	{
		___ProfileViewConstraints_13 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileViewConstraints_13), value);
	}

	inline static int32_t get_offset_of_UserId_14() { return static_cast<int32_t>(offsetof(TitleProfileViewConstraintsChangedEventData_t2671899541, ___UserId_14)); }
	inline String_t* get_UserId_14() const { return ___UserId_14; }
	inline String_t** get_address_of_UserId_14() { return &___UserId_14; }
	inline void set_UserId_14(String_t* value)
	{
		___UserId_14 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEPROFILEVIEWCONSTRAINTSCHANGEDEVENTDATA_T2671899541_H
#ifndef TITLEPUBLISHEDCLOUDSCRIPTEVENTDATA_T624272339_H
#define TITLEPUBLISHEDCLOUDSCRIPTEVENTDATA_T624272339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitlePublishedCloudScriptEventData
struct  TitlePublishedCloudScriptEventData_t624272339  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitlePublishedCloudScriptEventData::DeveloperId
	String_t* ___DeveloperId_10;
	// System.Int32 PlayFab.PlayStreamModels.TitlePublishedCloudScriptEventData::Revision
	int32_t ___Revision_11;
	// System.String PlayFab.PlayStreamModels.TitlePublishedCloudScriptEventData::UserId
	String_t* ___UserId_12;

public:
	inline static int32_t get_offset_of_DeveloperId_10() { return static_cast<int32_t>(offsetof(TitlePublishedCloudScriptEventData_t624272339, ___DeveloperId_10)); }
	inline String_t* get_DeveloperId_10() const { return ___DeveloperId_10; }
	inline String_t** get_address_of_DeveloperId_10() { return &___DeveloperId_10; }
	inline void set_DeveloperId_10(String_t* value)
	{
		___DeveloperId_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_10), value);
	}

	inline static int32_t get_offset_of_Revision_11() { return static_cast<int32_t>(offsetof(TitlePublishedCloudScriptEventData_t624272339, ___Revision_11)); }
	inline int32_t get_Revision_11() const { return ___Revision_11; }
	inline int32_t* get_address_of_Revision_11() { return &___Revision_11; }
	inline void set_Revision_11(int32_t value)
	{
		___Revision_11 = value;
	}

	inline static int32_t get_offset_of_UserId_12() { return static_cast<int32_t>(offsetof(TitlePublishedCloudScriptEventData_t624272339, ___UserId_12)); }
	inline String_t* get_UserId_12() const { return ___UserId_12; }
	inline String_t** get_address_of_UserId_12() { return &___UserId_12; }
	inline void set_UserId_12(String_t* value)
	{
		___UserId_12 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEPUBLISHEDCLOUDSCRIPTEVENTDATA_T624272339_H
#ifndef TITLEQUEUECONFIGUPDATEDEVENTDATA_T3530715226_H
#define TITLEQUEUECONFIGUPDATEDEVENTDATA_T3530715226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleQueueConfigUpdatedEventData
struct  TitleQueueConfigUpdatedEventData_t3530715226  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Boolean PlayFab.PlayStreamModels.TitleQueueConfigUpdatedEventData::Deleted
	bool ___Deleted_10;
	// System.String PlayFab.PlayStreamModels.TitleQueueConfigUpdatedEventData::DeveloperId
	String_t* ___DeveloperId_11;
	// System.String PlayFab.PlayStreamModels.TitleQueueConfigUpdatedEventData::MatchQueueName
	String_t* ___MatchQueueName_12;
	// System.String PlayFab.PlayStreamModels.TitleQueueConfigUpdatedEventData::UserId
	String_t* ___UserId_13;

public:
	inline static int32_t get_offset_of_Deleted_10() { return static_cast<int32_t>(offsetof(TitleQueueConfigUpdatedEventData_t3530715226, ___Deleted_10)); }
	inline bool get_Deleted_10() const { return ___Deleted_10; }
	inline bool* get_address_of_Deleted_10() { return &___Deleted_10; }
	inline void set_Deleted_10(bool value)
	{
		___Deleted_10 = value;
	}

	inline static int32_t get_offset_of_DeveloperId_11() { return static_cast<int32_t>(offsetof(TitleQueueConfigUpdatedEventData_t3530715226, ___DeveloperId_11)); }
	inline String_t* get_DeveloperId_11() const { return ___DeveloperId_11; }
	inline String_t** get_address_of_DeveloperId_11() { return &___DeveloperId_11; }
	inline void set_DeveloperId_11(String_t* value)
	{
		___DeveloperId_11 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_11), value);
	}

	inline static int32_t get_offset_of_MatchQueueName_12() { return static_cast<int32_t>(offsetof(TitleQueueConfigUpdatedEventData_t3530715226, ___MatchQueueName_12)); }
	inline String_t* get_MatchQueueName_12() const { return ___MatchQueueName_12; }
	inline String_t** get_address_of_MatchQueueName_12() { return &___MatchQueueName_12; }
	inline void set_MatchQueueName_12(String_t* value)
	{
		___MatchQueueName_12 = value;
		Il2CppCodeGenWriteBarrier((&___MatchQueueName_12), value);
	}

	inline static int32_t get_offset_of_UserId_13() { return static_cast<int32_t>(offsetof(TitleQueueConfigUpdatedEventData_t3530715226, ___UserId_13)); }
	inline String_t* get_UserId_13() const { return ___UserId_13; }
	inline String_t** get_address_of_UserId_13() { return &___UserId_13; }
	inline void set_UserId_13(String_t* value)
	{
		___UserId_13 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEQUEUECONFIGUPDATEDEVENTDATA_T3530715226_H
#ifndef TITLEREQUESTEDLIMITCHANGEEVENTDATA_T875512100_H
#define TITLEREQUESTEDLIMITCHANGEEVENTDATA_T875512100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData
struct  TitleRequestedLimitChangeEventData_t875512100  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::DeveloperId
	String_t* ___DeveloperId_10;
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::LevelName
	String_t* ___LevelName_11;
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::LimitDisplayName
	String_t* ___LimitDisplayName_12;
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::LimitId
	String_t* ___LimitId_13;
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::PreviousLevelName
	String_t* ___PreviousLevelName_14;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::PreviousPriceUSD
	Nullable_1_t2317227445  ___PreviousPriceUSD_15;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::PreviousValue
	Nullable_1_t2317227445  ___PreviousValue_16;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::PriceUSD
	Nullable_1_t2317227445  ___PriceUSD_17;
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::TransactionId
	String_t* ___TransactionId_18;
	// System.Nullable`1<PlayFab.PlayStreamModels.MetricUnit> PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::Unit
	Nullable_1_t503729917  ___Unit_19;
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::UserId
	String_t* ___UserId_20;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::Value
	Nullable_1_t2317227445  ___Value_21;

public:
	inline static int32_t get_offset_of_DeveloperId_10() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t875512100, ___DeveloperId_10)); }
	inline String_t* get_DeveloperId_10() const { return ___DeveloperId_10; }
	inline String_t** get_address_of_DeveloperId_10() { return &___DeveloperId_10; }
	inline void set_DeveloperId_10(String_t* value)
	{
		___DeveloperId_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_10), value);
	}

	inline static int32_t get_offset_of_LevelName_11() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t875512100, ___LevelName_11)); }
	inline String_t* get_LevelName_11() const { return ___LevelName_11; }
	inline String_t** get_address_of_LevelName_11() { return &___LevelName_11; }
	inline void set_LevelName_11(String_t* value)
	{
		___LevelName_11 = value;
		Il2CppCodeGenWriteBarrier((&___LevelName_11), value);
	}

	inline static int32_t get_offset_of_LimitDisplayName_12() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t875512100, ___LimitDisplayName_12)); }
	inline String_t* get_LimitDisplayName_12() const { return ___LimitDisplayName_12; }
	inline String_t** get_address_of_LimitDisplayName_12() { return &___LimitDisplayName_12; }
	inline void set_LimitDisplayName_12(String_t* value)
	{
		___LimitDisplayName_12 = value;
		Il2CppCodeGenWriteBarrier((&___LimitDisplayName_12), value);
	}

	inline static int32_t get_offset_of_LimitId_13() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t875512100, ___LimitId_13)); }
	inline String_t* get_LimitId_13() const { return ___LimitId_13; }
	inline String_t** get_address_of_LimitId_13() { return &___LimitId_13; }
	inline void set_LimitId_13(String_t* value)
	{
		___LimitId_13 = value;
		Il2CppCodeGenWriteBarrier((&___LimitId_13), value);
	}

	inline static int32_t get_offset_of_PreviousLevelName_14() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t875512100, ___PreviousLevelName_14)); }
	inline String_t* get_PreviousLevelName_14() const { return ___PreviousLevelName_14; }
	inline String_t** get_address_of_PreviousLevelName_14() { return &___PreviousLevelName_14; }
	inline void set_PreviousLevelName_14(String_t* value)
	{
		___PreviousLevelName_14 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousLevelName_14), value);
	}

	inline static int32_t get_offset_of_PreviousPriceUSD_15() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t875512100, ___PreviousPriceUSD_15)); }
	inline Nullable_1_t2317227445  get_PreviousPriceUSD_15() const { return ___PreviousPriceUSD_15; }
	inline Nullable_1_t2317227445 * get_address_of_PreviousPriceUSD_15() { return &___PreviousPriceUSD_15; }
	inline void set_PreviousPriceUSD_15(Nullable_1_t2317227445  value)
	{
		___PreviousPriceUSD_15 = value;
	}

	inline static int32_t get_offset_of_PreviousValue_16() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t875512100, ___PreviousValue_16)); }
	inline Nullable_1_t2317227445  get_PreviousValue_16() const { return ___PreviousValue_16; }
	inline Nullable_1_t2317227445 * get_address_of_PreviousValue_16() { return &___PreviousValue_16; }
	inline void set_PreviousValue_16(Nullable_1_t2317227445  value)
	{
		___PreviousValue_16 = value;
	}

	inline static int32_t get_offset_of_PriceUSD_17() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t875512100, ___PriceUSD_17)); }
	inline Nullable_1_t2317227445  get_PriceUSD_17() const { return ___PriceUSD_17; }
	inline Nullable_1_t2317227445 * get_address_of_PriceUSD_17() { return &___PriceUSD_17; }
	inline void set_PriceUSD_17(Nullable_1_t2317227445  value)
	{
		___PriceUSD_17 = value;
	}

	inline static int32_t get_offset_of_TransactionId_18() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t875512100, ___TransactionId_18)); }
	inline String_t* get_TransactionId_18() const { return ___TransactionId_18; }
	inline String_t** get_address_of_TransactionId_18() { return &___TransactionId_18; }
	inline void set_TransactionId_18(String_t* value)
	{
		___TransactionId_18 = value;
		Il2CppCodeGenWriteBarrier((&___TransactionId_18), value);
	}

	inline static int32_t get_offset_of_Unit_19() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t875512100, ___Unit_19)); }
	inline Nullable_1_t503729917  get_Unit_19() const { return ___Unit_19; }
	inline Nullable_1_t503729917 * get_address_of_Unit_19() { return &___Unit_19; }
	inline void set_Unit_19(Nullable_1_t503729917  value)
	{
		___Unit_19 = value;
	}

	inline static int32_t get_offset_of_UserId_20() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t875512100, ___UserId_20)); }
	inline String_t* get_UserId_20() const { return ___UserId_20; }
	inline String_t** get_address_of_UserId_20() { return &___UserId_20; }
	inline void set_UserId_20(String_t* value)
	{
		___UserId_20 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_20), value);
	}

	inline static int32_t get_offset_of_Value_21() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t875512100, ___Value_21)); }
	inline Nullable_1_t2317227445  get_Value_21() const { return ___Value_21; }
	inline Nullable_1_t2317227445 * get_address_of_Value_21() { return &___Value_21; }
	inline void set_Value_21(Nullable_1_t2317227445  value)
	{
		___Value_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEREQUESTEDLIMITCHANGEEVENTDATA_T875512100_H
#ifndef TITLESAVEDSURVEYEVENTDATA_T2644699077_H
#define TITLESAVEDSURVEYEVENTDATA_T2644699077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleSavedSurveyEventData
struct  TitleSavedSurveyEventData_t2644699077  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleSavedSurveyEventData::Genre
	String_t* ___Genre_10;
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.TitleSavedSurveyEventData::Monetization
	List_1_t3319525431 * ___Monetization_11;
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.TitleSavedSurveyEventData::Platforms
	List_1_t3319525431 * ___Platforms_12;
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.TitleSavedSurveyEventData::PlayerModes
	List_1_t3319525431 * ___PlayerModes_13;
	// System.String PlayFab.PlayStreamModels.TitleSavedSurveyEventData::TitleName
	String_t* ___TitleName_14;
	// System.String PlayFab.PlayStreamModels.TitleSavedSurveyEventData::TitleWebsite
	String_t* ___TitleWebsite_15;

public:
	inline static int32_t get_offset_of_Genre_10() { return static_cast<int32_t>(offsetof(TitleSavedSurveyEventData_t2644699077, ___Genre_10)); }
	inline String_t* get_Genre_10() const { return ___Genre_10; }
	inline String_t** get_address_of_Genre_10() { return &___Genre_10; }
	inline void set_Genre_10(String_t* value)
	{
		___Genre_10 = value;
		Il2CppCodeGenWriteBarrier((&___Genre_10), value);
	}

	inline static int32_t get_offset_of_Monetization_11() { return static_cast<int32_t>(offsetof(TitleSavedSurveyEventData_t2644699077, ___Monetization_11)); }
	inline List_1_t3319525431 * get_Monetization_11() const { return ___Monetization_11; }
	inline List_1_t3319525431 ** get_address_of_Monetization_11() { return &___Monetization_11; }
	inline void set_Monetization_11(List_1_t3319525431 * value)
	{
		___Monetization_11 = value;
		Il2CppCodeGenWriteBarrier((&___Monetization_11), value);
	}

	inline static int32_t get_offset_of_Platforms_12() { return static_cast<int32_t>(offsetof(TitleSavedSurveyEventData_t2644699077, ___Platforms_12)); }
	inline List_1_t3319525431 * get_Platforms_12() const { return ___Platforms_12; }
	inline List_1_t3319525431 ** get_address_of_Platforms_12() { return &___Platforms_12; }
	inline void set_Platforms_12(List_1_t3319525431 * value)
	{
		___Platforms_12 = value;
		Il2CppCodeGenWriteBarrier((&___Platforms_12), value);
	}

	inline static int32_t get_offset_of_PlayerModes_13() { return static_cast<int32_t>(offsetof(TitleSavedSurveyEventData_t2644699077, ___PlayerModes_13)); }
	inline List_1_t3319525431 * get_PlayerModes_13() const { return ___PlayerModes_13; }
	inline List_1_t3319525431 ** get_address_of_PlayerModes_13() { return &___PlayerModes_13; }
	inline void set_PlayerModes_13(List_1_t3319525431 * value)
	{
		___PlayerModes_13 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerModes_13), value);
	}

	inline static int32_t get_offset_of_TitleName_14() { return static_cast<int32_t>(offsetof(TitleSavedSurveyEventData_t2644699077, ___TitleName_14)); }
	inline String_t* get_TitleName_14() const { return ___TitleName_14; }
	inline String_t** get_address_of_TitleName_14() { return &___TitleName_14; }
	inline void set_TitleName_14(String_t* value)
	{
		___TitleName_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleName_14), value);
	}

	inline static int32_t get_offset_of_TitleWebsite_15() { return static_cast<int32_t>(offsetof(TitleSavedSurveyEventData_t2644699077, ___TitleWebsite_15)); }
	inline String_t* get_TitleWebsite_15() const { return ___TitleWebsite_15; }
	inline String_t** get_address_of_TitleWebsite_15() { return &___TitleWebsite_15; }
	inline void set_TitleWebsite_15(String_t* value)
	{
		___TitleWebsite_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleWebsite_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESAVEDSURVEYEVENTDATA_T2644699077_H
#ifndef TITLESCHEDULEDCLOUDSCRIPTEXECUTEDEVENTDATA_T1671053640_H
#define TITLESCHEDULEDCLOUDSCRIPTEXECUTEDEVENTDATA_T1671053640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleScheduledCloudScriptExecutedEventData
struct  TitleScheduledCloudScriptExecutedEventData_t1671053640  : public PlayStreamEventBase_t3913229166
{
public:
	// PlayFab.PlayStreamModels.ExecuteCloudScriptResult PlayFab.PlayStreamModels.TitleScheduledCloudScriptExecutedEventData::CloudScriptExecutionResult
	ExecuteCloudScriptResult_t1291136388 * ___CloudScriptExecutionResult_10;
	// System.String PlayFab.PlayStreamModels.TitleScheduledCloudScriptExecutedEventData::FunctionName
	String_t* ___FunctionName_11;
	// PlayFab.PlayStreamModels.NameId PlayFab.PlayStreamModels.TitleScheduledCloudScriptExecutedEventData::ScheduledTask
	NameId_t1096998722 * ___ScheduledTask_12;

public:
	inline static int32_t get_offset_of_CloudScriptExecutionResult_10() { return static_cast<int32_t>(offsetof(TitleScheduledCloudScriptExecutedEventData_t1671053640, ___CloudScriptExecutionResult_10)); }
	inline ExecuteCloudScriptResult_t1291136388 * get_CloudScriptExecutionResult_10() const { return ___CloudScriptExecutionResult_10; }
	inline ExecuteCloudScriptResult_t1291136388 ** get_address_of_CloudScriptExecutionResult_10() { return &___CloudScriptExecutionResult_10; }
	inline void set_CloudScriptExecutionResult_10(ExecuteCloudScriptResult_t1291136388 * value)
	{
		___CloudScriptExecutionResult_10 = value;
		Il2CppCodeGenWriteBarrier((&___CloudScriptExecutionResult_10), value);
	}

	inline static int32_t get_offset_of_FunctionName_11() { return static_cast<int32_t>(offsetof(TitleScheduledCloudScriptExecutedEventData_t1671053640, ___FunctionName_11)); }
	inline String_t* get_FunctionName_11() const { return ___FunctionName_11; }
	inline String_t** get_address_of_FunctionName_11() { return &___FunctionName_11; }
	inline void set_FunctionName_11(String_t* value)
	{
		___FunctionName_11 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionName_11), value);
	}

	inline static int32_t get_offset_of_ScheduledTask_12() { return static_cast<int32_t>(offsetof(TitleScheduledCloudScriptExecutedEventData_t1671053640, ___ScheduledTask_12)); }
	inline NameId_t1096998722 * get_ScheduledTask_12() const { return ___ScheduledTask_12; }
	inline NameId_t1096998722 ** get_address_of_ScheduledTask_12() { return &___ScheduledTask_12; }
	inline void set_ScheduledTask_12(NameId_t1096998722 * value)
	{
		___ScheduledTask_12 = value;
		Il2CppCodeGenWriteBarrier((&___ScheduledTask_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESCHEDULEDCLOUDSCRIPTEXECUTEDEVENTDATA_T1671053640_H
#ifndef TITLESECRETKEYEVENTDATA_T3537560794_H
#define TITLESECRETKEYEVENTDATA_T3537560794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleSecretKeyEventData
struct  TitleSecretKeyEventData_t3537560794  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Nullable`1<System.Boolean> PlayFab.PlayStreamModels.TitleSecretKeyEventData::Deleted
	Nullable_1_t1819850047  ___Deleted_10;
	// System.String PlayFab.PlayStreamModels.TitleSecretKeyEventData::DeveloperId
	String_t* ___DeveloperId_11;
	// System.Nullable`1<System.Boolean> PlayFab.PlayStreamModels.TitleSecretKeyEventData::Disabled
	Nullable_1_t1819850047  ___Disabled_12;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.TitleSecretKeyEventData::ExpiryDate
	Nullable_1_t1166124571  ___ExpiryDate_13;
	// System.String PlayFab.PlayStreamModels.TitleSecretKeyEventData::SecretKeyId
	String_t* ___SecretKeyId_14;
	// System.String PlayFab.PlayStreamModels.TitleSecretKeyEventData::SecretKeyName
	String_t* ___SecretKeyName_15;
	// System.String PlayFab.PlayStreamModels.TitleSecretKeyEventData::UserId
	String_t* ___UserId_16;

public:
	inline static int32_t get_offset_of_Deleted_10() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t3537560794, ___Deleted_10)); }
	inline Nullable_1_t1819850047  get_Deleted_10() const { return ___Deleted_10; }
	inline Nullable_1_t1819850047 * get_address_of_Deleted_10() { return &___Deleted_10; }
	inline void set_Deleted_10(Nullable_1_t1819850047  value)
	{
		___Deleted_10 = value;
	}

	inline static int32_t get_offset_of_DeveloperId_11() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t3537560794, ___DeveloperId_11)); }
	inline String_t* get_DeveloperId_11() const { return ___DeveloperId_11; }
	inline String_t** get_address_of_DeveloperId_11() { return &___DeveloperId_11; }
	inline void set_DeveloperId_11(String_t* value)
	{
		___DeveloperId_11 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_11), value);
	}

	inline static int32_t get_offset_of_Disabled_12() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t3537560794, ___Disabled_12)); }
	inline Nullable_1_t1819850047  get_Disabled_12() const { return ___Disabled_12; }
	inline Nullable_1_t1819850047 * get_address_of_Disabled_12() { return &___Disabled_12; }
	inline void set_Disabled_12(Nullable_1_t1819850047  value)
	{
		___Disabled_12 = value;
	}

	inline static int32_t get_offset_of_ExpiryDate_13() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t3537560794, ___ExpiryDate_13)); }
	inline Nullable_1_t1166124571  get_ExpiryDate_13() const { return ___ExpiryDate_13; }
	inline Nullable_1_t1166124571 * get_address_of_ExpiryDate_13() { return &___ExpiryDate_13; }
	inline void set_ExpiryDate_13(Nullable_1_t1166124571  value)
	{
		___ExpiryDate_13 = value;
	}

	inline static int32_t get_offset_of_SecretKeyId_14() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t3537560794, ___SecretKeyId_14)); }
	inline String_t* get_SecretKeyId_14() const { return ___SecretKeyId_14; }
	inline String_t** get_address_of_SecretKeyId_14() { return &___SecretKeyId_14; }
	inline void set_SecretKeyId_14(String_t* value)
	{
		___SecretKeyId_14 = value;
		Il2CppCodeGenWriteBarrier((&___SecretKeyId_14), value);
	}

	inline static int32_t get_offset_of_SecretKeyName_15() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t3537560794, ___SecretKeyName_15)); }
	inline String_t* get_SecretKeyName_15() const { return ___SecretKeyName_15; }
	inline String_t** get_address_of_SecretKeyName_15() { return &___SecretKeyName_15; }
	inline void set_SecretKeyName_15(String_t* value)
	{
		___SecretKeyName_15 = value;
		Il2CppCodeGenWriteBarrier((&___SecretKeyName_15), value);
	}

	inline static int32_t get_offset_of_UserId_16() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t3537560794, ___UserId_16)); }
	inline String_t* get_UserId_16() const { return ___UserId_16; }
	inline String_t** get_address_of_UserId_16() { return &___UserId_16; }
	inline void set_UserId_16(String_t* value)
	{
		___UserId_16 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESECRETKEYEVENTDATA_T3537560794_H
#ifndef TITLESTARTEDTASKEVENTDATA_T806162805_H
#define TITLESTARTEDTASKEVENTDATA_T806162805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleStartedTaskEventData
struct  TitleStartedTaskEventData_t806162805  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleStartedTaskEventData::DeveloperId
	String_t* ___DeveloperId_10;
	// System.Object PlayFab.PlayStreamModels.TitleStartedTaskEventData::Parameter
	RuntimeObject * ___Parameter_11;
	// System.String PlayFab.PlayStreamModels.TitleStartedTaskEventData::ScheduledByUserId
	String_t* ___ScheduledByUserId_12;
	// PlayFab.PlayStreamModels.NameIdentifier PlayFab.PlayStreamModels.TitleStartedTaskEventData::ScheduledTask
	NameIdentifier_t3894807572 * ___ScheduledTask_13;
	// System.String PlayFab.PlayStreamModels.TitleStartedTaskEventData::TaskInstanceId
	String_t* ___TaskInstanceId_14;
	// System.String PlayFab.PlayStreamModels.TitleStartedTaskEventData::TaskType
	String_t* ___TaskType_15;
	// System.String PlayFab.PlayStreamModels.TitleStartedTaskEventData::UserId
	String_t* ___UserId_16;

public:
	inline static int32_t get_offset_of_DeveloperId_10() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t806162805, ___DeveloperId_10)); }
	inline String_t* get_DeveloperId_10() const { return ___DeveloperId_10; }
	inline String_t** get_address_of_DeveloperId_10() { return &___DeveloperId_10; }
	inline void set_DeveloperId_10(String_t* value)
	{
		___DeveloperId_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_10), value);
	}

	inline static int32_t get_offset_of_Parameter_11() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t806162805, ___Parameter_11)); }
	inline RuntimeObject * get_Parameter_11() const { return ___Parameter_11; }
	inline RuntimeObject ** get_address_of_Parameter_11() { return &___Parameter_11; }
	inline void set_Parameter_11(RuntimeObject * value)
	{
		___Parameter_11 = value;
		Il2CppCodeGenWriteBarrier((&___Parameter_11), value);
	}

	inline static int32_t get_offset_of_ScheduledByUserId_12() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t806162805, ___ScheduledByUserId_12)); }
	inline String_t* get_ScheduledByUserId_12() const { return ___ScheduledByUserId_12; }
	inline String_t** get_address_of_ScheduledByUserId_12() { return &___ScheduledByUserId_12; }
	inline void set_ScheduledByUserId_12(String_t* value)
	{
		___ScheduledByUserId_12 = value;
		Il2CppCodeGenWriteBarrier((&___ScheduledByUserId_12), value);
	}

	inline static int32_t get_offset_of_ScheduledTask_13() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t806162805, ___ScheduledTask_13)); }
	inline NameIdentifier_t3894807572 * get_ScheduledTask_13() const { return ___ScheduledTask_13; }
	inline NameIdentifier_t3894807572 ** get_address_of_ScheduledTask_13() { return &___ScheduledTask_13; }
	inline void set_ScheduledTask_13(NameIdentifier_t3894807572 * value)
	{
		___ScheduledTask_13 = value;
		Il2CppCodeGenWriteBarrier((&___ScheduledTask_13), value);
	}

	inline static int32_t get_offset_of_TaskInstanceId_14() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t806162805, ___TaskInstanceId_14)); }
	inline String_t* get_TaskInstanceId_14() const { return ___TaskInstanceId_14; }
	inline String_t** get_address_of_TaskInstanceId_14() { return &___TaskInstanceId_14; }
	inline void set_TaskInstanceId_14(String_t* value)
	{
		___TaskInstanceId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TaskInstanceId_14), value);
	}

	inline static int32_t get_offset_of_TaskType_15() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t806162805, ___TaskType_15)); }
	inline String_t* get_TaskType_15() const { return ___TaskType_15; }
	inline String_t** get_address_of_TaskType_15() { return &___TaskType_15; }
	inline void set_TaskType_15(String_t* value)
	{
		___TaskType_15 = value;
		Il2CppCodeGenWriteBarrier((&___TaskType_15), value);
	}

	inline static int32_t get_offset_of_UserId_16() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t806162805, ___UserId_16)); }
	inline String_t* get_UserId_16() const { return ___UserId_16; }
	inline String_t** get_address_of_UserId_16() { return &___UserId_16; }
	inline void set_UserId_16(String_t* value)
	{
		___UserId_16 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESTARTEDTASKEVENTDATA_T806162805_H
#ifndef TITLESTATISTICVERSIONCHANGEDEVENTDATA_T3511495994_H
#define TITLESTATISTICVERSIONCHANGEDEVENTDATA_T3511495994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleStatisticVersionChangedEventData
struct  TitleStatisticVersionChangedEventData_t3511495994  : public PlayStreamEventBase_t3913229166
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.StatisticResetIntervalOption> PlayFab.PlayStreamModels.TitleStatisticVersionChangedEventData::ScheduledResetInterval
	Nullable_1_t3424987007  ___ScheduledResetInterval_10;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.TitleStatisticVersionChangedEventData::ScheduledResetTime
	Nullable_1_t1166124571  ___ScheduledResetTime_11;
	// System.String PlayFab.PlayStreamModels.TitleStatisticVersionChangedEventData::StatisticName
	String_t* ___StatisticName_12;
	// System.UInt32 PlayFab.PlayStreamModels.TitleStatisticVersionChangedEventData::StatisticVersion
	uint32_t ___StatisticVersion_13;

public:
	inline static int32_t get_offset_of_ScheduledResetInterval_10() { return static_cast<int32_t>(offsetof(TitleStatisticVersionChangedEventData_t3511495994, ___ScheduledResetInterval_10)); }
	inline Nullable_1_t3424987007  get_ScheduledResetInterval_10() const { return ___ScheduledResetInterval_10; }
	inline Nullable_1_t3424987007 * get_address_of_ScheduledResetInterval_10() { return &___ScheduledResetInterval_10; }
	inline void set_ScheduledResetInterval_10(Nullable_1_t3424987007  value)
	{
		___ScheduledResetInterval_10 = value;
	}

	inline static int32_t get_offset_of_ScheduledResetTime_11() { return static_cast<int32_t>(offsetof(TitleStatisticVersionChangedEventData_t3511495994, ___ScheduledResetTime_11)); }
	inline Nullable_1_t1166124571  get_ScheduledResetTime_11() const { return ___ScheduledResetTime_11; }
	inline Nullable_1_t1166124571 * get_address_of_ScheduledResetTime_11() { return &___ScheduledResetTime_11; }
	inline void set_ScheduledResetTime_11(Nullable_1_t1166124571  value)
	{
		___ScheduledResetTime_11 = value;
	}

	inline static int32_t get_offset_of_StatisticName_12() { return static_cast<int32_t>(offsetof(TitleStatisticVersionChangedEventData_t3511495994, ___StatisticName_12)); }
	inline String_t* get_StatisticName_12() const { return ___StatisticName_12; }
	inline String_t** get_address_of_StatisticName_12() { return &___StatisticName_12; }
	inline void set_StatisticName_12(String_t* value)
	{
		___StatisticName_12 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_12), value);
	}

	inline static int32_t get_offset_of_StatisticVersion_13() { return static_cast<int32_t>(offsetof(TitleStatisticVersionChangedEventData_t3511495994, ___StatisticVersion_13)); }
	inline uint32_t get_StatisticVersion_13() const { return ___StatisticVersion_13; }
	inline uint32_t* get_address_of_StatisticVersion_13() { return &___StatisticVersion_13; }
	inline void set_StatisticVersion_13(uint32_t value)
	{
		___StatisticVersion_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESTATISTICVERSIONCHANGEDEVENTDATA_T3511495994_H
#ifndef TITLESTOREUPDATEDEVENTDATA_T1911314714_H
#define TITLESTOREUPDATEDEVENTDATA_T1911314714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleStoreUpdatedEventData
struct  TitleStoreUpdatedEventData_t1911314714  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleStoreUpdatedEventData::CatalogVersion
	String_t* ___CatalogVersion_10;
	// System.Boolean PlayFab.PlayStreamModels.TitleStoreUpdatedEventData::Deleted
	bool ___Deleted_11;
	// System.String PlayFab.PlayStreamModels.TitleStoreUpdatedEventData::DeveloperId
	String_t* ___DeveloperId_12;
	// System.String PlayFab.PlayStreamModels.TitleStoreUpdatedEventData::StoreId
	String_t* ___StoreId_13;
	// System.String PlayFab.PlayStreamModels.TitleStoreUpdatedEventData::UserId
	String_t* ___UserId_14;

public:
	inline static int32_t get_offset_of_CatalogVersion_10() { return static_cast<int32_t>(offsetof(TitleStoreUpdatedEventData_t1911314714, ___CatalogVersion_10)); }
	inline String_t* get_CatalogVersion_10() const { return ___CatalogVersion_10; }
	inline String_t** get_address_of_CatalogVersion_10() { return &___CatalogVersion_10; }
	inline void set_CatalogVersion_10(String_t* value)
	{
		___CatalogVersion_10 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_10), value);
	}

	inline static int32_t get_offset_of_Deleted_11() { return static_cast<int32_t>(offsetof(TitleStoreUpdatedEventData_t1911314714, ___Deleted_11)); }
	inline bool get_Deleted_11() const { return ___Deleted_11; }
	inline bool* get_address_of_Deleted_11() { return &___Deleted_11; }
	inline void set_Deleted_11(bool value)
	{
		___Deleted_11 = value;
	}

	inline static int32_t get_offset_of_DeveloperId_12() { return static_cast<int32_t>(offsetof(TitleStoreUpdatedEventData_t1911314714, ___DeveloperId_12)); }
	inline String_t* get_DeveloperId_12() const { return ___DeveloperId_12; }
	inline String_t** get_address_of_DeveloperId_12() { return &___DeveloperId_12; }
	inline void set_DeveloperId_12(String_t* value)
	{
		___DeveloperId_12 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_12), value);
	}

	inline static int32_t get_offset_of_StoreId_13() { return static_cast<int32_t>(offsetof(TitleStoreUpdatedEventData_t1911314714, ___StoreId_13)); }
	inline String_t* get_StoreId_13() const { return ___StoreId_13; }
	inline String_t** get_address_of_StoreId_13() { return &___StoreId_13; }
	inline void set_StoreId_13(String_t* value)
	{
		___StoreId_13 = value;
		Il2CppCodeGenWriteBarrier((&___StoreId_13), value);
	}

	inline static int32_t get_offset_of_UserId_14() { return static_cast<int32_t>(offsetof(TitleStoreUpdatedEventData_t1911314714, ___UserId_14)); }
	inline String_t* get_UserId_14() const { return ___UserId_14; }
	inline String_t** get_address_of_UserId_14() { return &___UserId_14; }
	inline void set_UserId_14(String_t* value)
	{
		___UserId_14 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESTOREUPDATEDEVENTDATA_T1911314714_H
#ifndef TITLEUPDATEDTASKEVENTDATA_T1479612834_H
#define TITLEUPDATEDTASKEVENTDATA_T1479612834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleUpdatedTaskEventData
struct  TitleUpdatedTaskEventData_t1479612834  : public PlayStreamEventBase_t3913229166
{
public:
	// System.String PlayFab.PlayStreamModels.TitleUpdatedTaskEventData::DeveloperId
	String_t* ___DeveloperId_10;
	// System.Boolean PlayFab.PlayStreamModels.TitleUpdatedTaskEventData::HasRenamed
	bool ___HasRenamed_11;
	// PlayFab.PlayStreamModels.NameIdentifier PlayFab.PlayStreamModels.TitleUpdatedTaskEventData::ScheduledTask
	NameIdentifier_t3894807572 * ___ScheduledTask_12;
	// System.String PlayFab.PlayStreamModels.TitleUpdatedTaskEventData::UserId
	String_t* ___UserId_13;

public:
	inline static int32_t get_offset_of_DeveloperId_10() { return static_cast<int32_t>(offsetof(TitleUpdatedTaskEventData_t1479612834, ___DeveloperId_10)); }
	inline String_t* get_DeveloperId_10() const { return ___DeveloperId_10; }
	inline String_t** get_address_of_DeveloperId_10() { return &___DeveloperId_10; }
	inline void set_DeveloperId_10(String_t* value)
	{
		___DeveloperId_10 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_10), value);
	}

	inline static int32_t get_offset_of_HasRenamed_11() { return static_cast<int32_t>(offsetof(TitleUpdatedTaskEventData_t1479612834, ___HasRenamed_11)); }
	inline bool get_HasRenamed_11() const { return ___HasRenamed_11; }
	inline bool* get_address_of_HasRenamed_11() { return &___HasRenamed_11; }
	inline void set_HasRenamed_11(bool value)
	{
		___HasRenamed_11 = value;
	}

	inline static int32_t get_offset_of_ScheduledTask_12() { return static_cast<int32_t>(offsetof(TitleUpdatedTaskEventData_t1479612834, ___ScheduledTask_12)); }
	inline NameIdentifier_t3894807572 * get_ScheduledTask_12() const { return ___ScheduledTask_12; }
	inline NameIdentifier_t3894807572 ** get_address_of_ScheduledTask_12() { return &___ScheduledTask_12; }
	inline void set_ScheduledTask_12(NameIdentifier_t3894807572 * value)
	{
		___ScheduledTask_12 = value;
		Il2CppCodeGenWriteBarrier((&___ScheduledTask_12), value);
	}

	inline static int32_t get_offset_of_UserId_13() { return static_cast<int32_t>(offsetof(TitleUpdatedTaskEventData_t1479612834, ___UserId_13)); }
	inline String_t* get_UserId_13() const { return ___UserId_13; }
	inline String_t** get_address_of_UserId_13() { return &___UserId_13; }
	inline void set_UserId_13(String_t* value)
	{
		___UserId_13 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEUPDATEDTASKEVENTDATA_T1479612834_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4300 = { sizeof (CharacterCreatedEventData_t1738514807), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4300[4] = 
{
	CharacterCreatedEventData_t1738514807::get_offset_of_CharacterName_10(),
	CharacterCreatedEventData_t1738514807::get_offset_of_Created_11(),
	CharacterCreatedEventData_t1738514807::get_offset_of_PlayerId_12(),
	CharacterCreatedEventData_t1738514807::get_offset_of_TitleId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4301 = { sizeof (CharacterInventoryItemAddedEventData_t2213025775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4301[12] = 
{
	CharacterInventoryItemAddedEventData_t2213025775::get_offset_of_Annotation_10(),
	CharacterInventoryItemAddedEventData_t2213025775::get_offset_of_BundleContents_11(),
	CharacterInventoryItemAddedEventData_t2213025775::get_offset_of_CatalogVersion_12(),
	CharacterInventoryItemAddedEventData_t2213025775::get_offset_of_Class_13(),
	CharacterInventoryItemAddedEventData_t2213025775::get_offset_of_CouponCode_14(),
	CharacterInventoryItemAddedEventData_t2213025775::get_offset_of_DisplayName_15(),
	CharacterInventoryItemAddedEventData_t2213025775::get_offset_of_Expiration_16(),
	CharacterInventoryItemAddedEventData_t2213025775::get_offset_of_InstanceId_17(),
	CharacterInventoryItemAddedEventData_t2213025775::get_offset_of_ItemId_18(),
	CharacterInventoryItemAddedEventData_t2213025775::get_offset_of_PlayerId_19(),
	CharacterInventoryItemAddedEventData_t2213025775::get_offset_of_RemainingUses_20(),
	CharacterInventoryItemAddedEventData_t2213025775::get_offset_of_TitleId_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4302 = { sizeof (CharacterStatisticChangedEventData_t912745082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4302[6] = 
{
	CharacterStatisticChangedEventData_t912745082::get_offset_of_PlayerId_10(),
	CharacterStatisticChangedEventData_t912745082::get_offset_of_StatisticName_11(),
	CharacterStatisticChangedEventData_t912745082::get_offset_of_StatisticPreviousValue_12(),
	CharacterStatisticChangedEventData_t912745082::get_offset_of_StatisticValue_13(),
	CharacterStatisticChangedEventData_t912745082::get_offset_of_TitleId_14(),
	CharacterStatisticChangedEventData_t912745082::get_offset_of_Version_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4303 = { sizeof (CharacterStatisticDeletedEventData_t802624884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4303[4] = 
{
	CharacterStatisticDeletedEventData_t802624884::get_offset_of_PlayerId_10(),
	CharacterStatisticDeletedEventData_t802624884::get_offset_of_StatisticName_11(),
	CharacterStatisticDeletedEventData_t802624884::get_offset_of_TitleId_12(),
	CharacterStatisticDeletedEventData_t802624884::get_offset_of_Version_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4304 = { sizeof (CharacterVCPurchaseEventData_t1703576413), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4304[9] = 
{
	CharacterVCPurchaseEventData_t1703576413::get_offset_of_CatalogVersion_10(),
	CharacterVCPurchaseEventData_t1703576413::get_offset_of_CurrencyCode_11(),
	CharacterVCPurchaseEventData_t1703576413::get_offset_of_ItemId_12(),
	CharacterVCPurchaseEventData_t1703576413::get_offset_of_PlayerId_13(),
	CharacterVCPurchaseEventData_t1703576413::get_offset_of_PurchaseId_14(),
	CharacterVCPurchaseEventData_t1703576413::get_offset_of_Quantity_15(),
	CharacterVCPurchaseEventData_t1703576413::get_offset_of_StoreId_16(),
	CharacterVCPurchaseEventData_t1703576413::get_offset_of_TitleId_17(),
	CharacterVCPurchaseEventData_t1703576413::get_offset_of_UnitPrice_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4305 = { sizeof (CharacterVirtualCurrencyBalanceChangedEventData_t2951221935), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4305[6] = 
{
	CharacterVirtualCurrencyBalanceChangedEventData_t2951221935::get_offset_of_OrderId_10(),
	CharacterVirtualCurrencyBalanceChangedEventData_t2951221935::get_offset_of_PlayerId_11(),
	CharacterVirtualCurrencyBalanceChangedEventData_t2951221935::get_offset_of_TitleId_12(),
	CharacterVirtualCurrencyBalanceChangedEventData_t2951221935::get_offset_of_VirtualCurrencyBalance_13(),
	CharacterVirtualCurrencyBalanceChangedEventData_t2951221935::get_offset_of_VirtualCurrencyName_14(),
	CharacterVirtualCurrencyBalanceChangedEventData_t2951221935::get_offset_of_VirtualCurrencyPreviousBalance_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4306 = { sizeof (DisplayNameFilteredEventData_t2782569754), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4306[2] = 
{
	DisplayNameFilteredEventData_t2782569754::get_offset_of_DisplayName_10(),
	DisplayNameFilteredEventData_t2782569754::get_offset_of_PlayerId_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4307 = { sizeof (PlayerDisplayNameFilteredEventData_t3121250570), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4307[2] = 
{
	PlayerDisplayNameFilteredEventData_t3121250570::get_offset_of_DisplayName_10(),
	PlayerDisplayNameFilteredEventData_t3121250570::get_offset_of_TitleId_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4308 = { sizeof (PlayerPhotonSessionAuthenticatedEventData_t2247705978), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4308[3] = 
{
	PlayerPhotonSessionAuthenticatedEventData_t2247705978::get_offset_of_PhotonApplicationId_10(),
	PlayerPhotonSessionAuthenticatedEventData_t2247705978::get_offset_of_PhotonApplicationType_11(),
	PlayerPhotonSessionAuthenticatedEventData_t2247705978::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4309 = { sizeof (AuthTokenValidatedEventData_t4010884767), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4309[3] = 
{
	AuthTokenValidatedEventData_t4010884767::get_offset_of_EmailTemplateId_10(),
	AuthTokenValidatedEventData_t4010884767::get_offset_of_TitleId_11(),
	AuthTokenValidatedEventData_t4010884767::get_offset_of_Token_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4310 = { sizeof (MasterPlayerTitleDeletedEventData_t3276680103), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4310[2] = 
{
	MasterPlayerTitleDeletedEventData_t3276680103::get_offset_of_MetaData_10(),
	MasterPlayerTitleDeletedEventData_t3276680103::get_offset_of_ReceiptId_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4311 = { sizeof (PlayerAdCampaignAttributionEventData_t364161832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4311[2] = 
{
	PlayerAdCampaignAttributionEventData_t364161832::get_offset_of_CampaignId_10(),
	PlayerAdCampaignAttributionEventData_t364161832::get_offset_of_TitleId_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4312 = { sizeof (PlayerAdClosedEventData_t1028452654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4312[6] = 
{
	PlayerAdClosedEventData_t1028452654::get_offset_of_AdPlacementId_10(),
	PlayerAdClosedEventData_t1028452654::get_offset_of_AdPlacementName_11(),
	PlayerAdClosedEventData_t1028452654::get_offset_of_AdUnit_12(),
	PlayerAdClosedEventData_t1028452654::get_offset_of_RewardId_13(),
	PlayerAdClosedEventData_t1028452654::get_offset_of_RewardName_14(),
	PlayerAdClosedEventData_t1028452654::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4313 = { sizeof (PlayerAddedTitleEventData_t653810095), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4313[4] = 
{
	PlayerAddedTitleEventData_t653810095::get_offset_of_DisplayName_10(),
	PlayerAddedTitleEventData_t653810095::get_offset_of_Platform_11(),
	PlayerAddedTitleEventData_t653810095::get_offset_of_PlatformUserId_12(),
	PlayerAddedTitleEventData_t653810095::get_offset_of_TitleId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4314 = { sizeof (PlayerAdEndedEventData_t4008010211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4314[6] = 
{
	PlayerAdEndedEventData_t4008010211::get_offset_of_AdPlacementId_10(),
	PlayerAdEndedEventData_t4008010211::get_offset_of_AdPlacementName_11(),
	PlayerAdEndedEventData_t4008010211::get_offset_of_AdUnit_12(),
	PlayerAdEndedEventData_t4008010211::get_offset_of_RewardId_13(),
	PlayerAdEndedEventData_t4008010211::get_offset_of_RewardName_14(),
	PlayerAdEndedEventData_t4008010211::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4315 = { sizeof (PlayerAdOpenedEventData_t1554094522), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4315[6] = 
{
	PlayerAdOpenedEventData_t1554094522::get_offset_of_AdPlacementId_10(),
	PlayerAdOpenedEventData_t1554094522::get_offset_of_AdPlacementName_11(),
	PlayerAdOpenedEventData_t1554094522::get_offset_of_AdUnit_12(),
	PlayerAdOpenedEventData_t1554094522::get_offset_of_RewardId_13(),
	PlayerAdOpenedEventData_t1554094522::get_offset_of_RewardName_14(),
	PlayerAdOpenedEventData_t1554094522::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4316 = { sizeof (PlayerAdRewardedEventData_t3445056304), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4316[8] = 
{
	PlayerAdRewardedEventData_t3445056304::get_offset_of_ActionGroupDebugMessages_10(),
	PlayerAdRewardedEventData_t3445056304::get_offset_of_AdPlacementId_11(),
	PlayerAdRewardedEventData_t3445056304::get_offset_of_AdPlacementName_12(),
	PlayerAdRewardedEventData_t3445056304::get_offset_of_AdUnit_13(),
	PlayerAdRewardedEventData_t3445056304::get_offset_of_RewardId_14(),
	PlayerAdRewardedEventData_t3445056304::get_offset_of_RewardName_15(),
	PlayerAdRewardedEventData_t3445056304::get_offset_of_TitleId_16(),
	PlayerAdRewardedEventData_t3445056304::get_offset_of_ViewsRemainingThisPeriod_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4317 = { sizeof (PlayerAdRewardValuedEventData_t4053417989), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4317[7] = 
{
	PlayerAdRewardValuedEventData_t4053417989::get_offset_of_AdPlacementId_10(),
	PlayerAdRewardValuedEventData_t4053417989::get_offset_of_AdPlacementName_11(),
	PlayerAdRewardValuedEventData_t4053417989::get_offset_of_AdUnit_12(),
	PlayerAdRewardValuedEventData_t4053417989::get_offset_of_RevenueShare_13(),
	PlayerAdRewardValuedEventData_t4053417989::get_offset_of_RewardId_14(),
	PlayerAdRewardValuedEventData_t4053417989::get_offset_of_RewardName_15(),
	PlayerAdRewardValuedEventData_t4053417989::get_offset_of_TitleId_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4318 = { sizeof (PlayerAdStartedEventData_t399493136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4318[6] = 
{
	PlayerAdStartedEventData_t399493136::get_offset_of_AdPlacementId_10(),
	PlayerAdStartedEventData_t399493136::get_offset_of_AdPlacementName_11(),
	PlayerAdStartedEventData_t399493136::get_offset_of_AdUnit_12(),
	PlayerAdStartedEventData_t399493136::get_offset_of_RewardId_13(),
	PlayerAdStartedEventData_t399493136::get_offset_of_RewardName_14(),
	PlayerAdStartedEventData_t399493136::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4319 = { sizeof (PlayerBannedEventData_t1085682463), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4319[5] = 
{
	PlayerBannedEventData_t1085682463::get_offset_of_BanExpiration_10(),
	PlayerBannedEventData_t1085682463::get_offset_of_BanId_11(),
	PlayerBannedEventData_t1085682463::get_offset_of_BanReason_12(),
	PlayerBannedEventData_t1085682463::get_offset_of_PermanentBan_13(),
	PlayerBannedEventData_t1085682463::get_offset_of_TitleId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4320 = { sizeof (PlayerChangedAvatarEventData_t413992440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4320[3] = 
{
	PlayerChangedAvatarEventData_t413992440::get_offset_of_ImageUrl_10(),
	PlayerChangedAvatarEventData_t413992440::get_offset_of_PreviousImageUrl_11(),
	PlayerChangedAvatarEventData_t413992440::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4321 = { sizeof (PlayerCompletedPasswordResetEventData_t1389371597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4321[9] = 
{
	PlayerCompletedPasswordResetEventData_t1389371597::get_offset_of_CompletedFromIPAddress_10(),
	PlayerCompletedPasswordResetEventData_t1389371597::get_offset_of_CompletionTimestamp_11(),
	PlayerCompletedPasswordResetEventData_t1389371597::get_offset_of_InitiatedBy_12(),
	PlayerCompletedPasswordResetEventData_t1389371597::get_offset_of_InitiatedFromIPAddress_13(),
	PlayerCompletedPasswordResetEventData_t1389371597::get_offset_of_InitiationTimestamp_14(),
	PlayerCompletedPasswordResetEventData_t1389371597::get_offset_of_LinkExpiration_15(),
	PlayerCompletedPasswordResetEventData_t1389371597::get_offset_of_PasswordResetId_16(),
	PlayerCompletedPasswordResetEventData_t1389371597::get_offset_of_RecoveryEmailAddress_17(),
	PlayerCompletedPasswordResetEventData_t1389371597::get_offset_of_TitleId_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4322 = { sizeof (PlayerConsumedItemEventData_t4154887560), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4322[6] = 
{
	PlayerConsumedItemEventData_t4154887560::get_offset_of_CatalogVersion_10(),
	PlayerConsumedItemEventData_t4154887560::get_offset_of_ItemId_11(),
	PlayerConsumedItemEventData_t4154887560::get_offset_of_ItemInstanceId_12(),
	PlayerConsumedItemEventData_t4154887560::get_offset_of_PreviousUsesRemaining_13(),
	PlayerConsumedItemEventData_t4154887560::get_offset_of_TitleId_14(),
	PlayerConsumedItemEventData_t4154887560::get_offset_of_UsesRemaining_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4323 = { sizeof (PlayerCreatedEventData_t2667878432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4323[3] = 
{
	PlayerCreatedEventData_t2667878432::get_offset_of_Created_10(),
	PlayerCreatedEventData_t2667878432::get_offset_of_PublisherId_11(),
	PlayerCreatedEventData_t2667878432::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4324 = { sizeof (PlayerDataExportedEventData_t3946825333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4324[4] = 
{
	PlayerDataExportedEventData_t3946825333::get_offset_of_ExportDownloadUrl_10(),
	PlayerDataExportedEventData_t3946825333::get_offset_of_JobReceiptId_11(),
	PlayerDataExportedEventData_t3946825333::get_offset_of_RequestTime_12(),
	PlayerDataExportedEventData_t3946825333::get_offset_of_TitleId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4325 = { sizeof (PlayerDeviceInfoEventData_t3528130884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4325[2] = 
{
	PlayerDeviceInfoEventData_t3528130884::get_offset_of_DeviceInfo_10(),
	PlayerDeviceInfoEventData_t3528130884::get_offset_of_TitleId_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4326 = { sizeof (PlayerDisplayNameChangedEventData_t3185908839), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4326[3] = 
{
	PlayerDisplayNameChangedEventData_t3185908839::get_offset_of_DisplayName_10(),
	PlayerDisplayNameChangedEventData_t3185908839::get_offset_of_PreviousDisplayName_11(),
	PlayerDisplayNameChangedEventData_t3185908839::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4327 = { sizeof (PlayerExecutedCloudScriptEventData_t3609150561), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4327[3] = 
{
	PlayerExecutedCloudScriptEventData_t3609150561::get_offset_of_CloudScriptExecutionResult_10(),
	PlayerExecutedCloudScriptEventData_t3609150561::get_offset_of_FunctionName_11(),
	PlayerExecutedCloudScriptEventData_t3609150561::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4328 = { sizeof (PlayerInventoryItemAddedEventData_t4177594946), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4328[11] = 
{
	PlayerInventoryItemAddedEventData_t4177594946::get_offset_of_Annotation_10(),
	PlayerInventoryItemAddedEventData_t4177594946::get_offset_of_BundleContents_11(),
	PlayerInventoryItemAddedEventData_t4177594946::get_offset_of_CatalogVersion_12(),
	PlayerInventoryItemAddedEventData_t4177594946::get_offset_of_Class_13(),
	PlayerInventoryItemAddedEventData_t4177594946::get_offset_of_CouponCode_14(),
	PlayerInventoryItemAddedEventData_t4177594946::get_offset_of_DisplayName_15(),
	PlayerInventoryItemAddedEventData_t4177594946::get_offset_of_Expiration_16(),
	PlayerInventoryItemAddedEventData_t4177594946::get_offset_of_InstanceId_17(),
	PlayerInventoryItemAddedEventData_t4177594946::get_offset_of_ItemId_18(),
	PlayerInventoryItemAddedEventData_t4177594946::get_offset_of_RemainingUses_19(),
	PlayerInventoryItemAddedEventData_t4177594946::get_offset_of_TitleId_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4329 = { sizeof (PlayerJoinedLobbyEventData_t1438844628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4329[10] = 
{
	PlayerJoinedLobbyEventData_t1438844628::get_offset_of_GameMode_10(),
	PlayerJoinedLobbyEventData_t1438844628::get_offset_of_LobbyId_11(),
	PlayerJoinedLobbyEventData_t1438844628::get_offset_of_Region_12(),
	PlayerJoinedLobbyEventData_t1438844628::get_offset_of_ServerBuildVersion_13(),
	PlayerJoinedLobbyEventData_t1438844628::get_offset_of_ServerHost_14(),
	PlayerJoinedLobbyEventData_t1438844628::get_offset_of_ServerHostInstanceId_15(),
	PlayerJoinedLobbyEventData_t1438844628::get_offset_of_ServerIPV4Address_16(),
	PlayerJoinedLobbyEventData_t1438844628::get_offset_of_ServerIPV6Address_17(),
	PlayerJoinedLobbyEventData_t1438844628::get_offset_of_ServerPort_18(),
	PlayerJoinedLobbyEventData_t1438844628::get_offset_of_TitleId_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4330 = { sizeof (PlayerLeftLobbyEventData_t1957663752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4330[10] = 
{
	PlayerLeftLobbyEventData_t1957663752::get_offset_of_GameMode_10(),
	PlayerLeftLobbyEventData_t1957663752::get_offset_of_LobbyId_11(),
	PlayerLeftLobbyEventData_t1957663752::get_offset_of_Region_12(),
	PlayerLeftLobbyEventData_t1957663752::get_offset_of_ServerBuildVersion_13(),
	PlayerLeftLobbyEventData_t1957663752::get_offset_of_ServerHost_14(),
	PlayerLeftLobbyEventData_t1957663752::get_offset_of_ServerHostInstanceId_15(),
	PlayerLeftLobbyEventData_t1957663752::get_offset_of_ServerIPV4Address_16(),
	PlayerLeftLobbyEventData_t1957663752::get_offset_of_ServerIPV6Address_17(),
	PlayerLeftLobbyEventData_t1957663752::get_offset_of_ServerPort_18(),
	PlayerLeftLobbyEventData_t1957663752::get_offset_of_TitleId_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4331 = { sizeof (PlayerLinkedAccountEventData_t496376666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4331[5] = 
{
	PlayerLinkedAccountEventData_t496376666::get_offset_of_Email_10(),
	PlayerLinkedAccountEventData_t496376666::get_offset_of_Origination_11(),
	PlayerLinkedAccountEventData_t496376666::get_offset_of_OriginationUserId_12(),
	PlayerLinkedAccountEventData_t496376666::get_offset_of_TitleId_13(),
	PlayerLinkedAccountEventData_t496376666::get_offset_of_Username_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4332 = { sizeof (PlayerLoggedInEventData_t2733697567), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4332[5] = 
{
	PlayerLoggedInEventData_t2733697567::get_offset_of_Location_10(),
	PlayerLoggedInEventData_t2733697567::get_offset_of_Platform_11(),
	PlayerLoggedInEventData_t2733697567::get_offset_of_PlatformUserId_12(),
	PlayerLoggedInEventData_t2733697567::get_offset_of_PlatformUserName_13(),
	PlayerLoggedInEventData_t2733697567::get_offset_of_TitleId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4333 = { sizeof (PlayerMatchedWithLobbyEventData_t3866319770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4333[10] = 
{
	PlayerMatchedWithLobbyEventData_t3866319770::get_offset_of_GameMode_10(),
	PlayerMatchedWithLobbyEventData_t3866319770::get_offset_of_LobbyId_11(),
	PlayerMatchedWithLobbyEventData_t3866319770::get_offset_of_Region_12(),
	PlayerMatchedWithLobbyEventData_t3866319770::get_offset_of_ServerBuildVersion_13(),
	PlayerMatchedWithLobbyEventData_t3866319770::get_offset_of_ServerHost_14(),
	PlayerMatchedWithLobbyEventData_t3866319770::get_offset_of_ServerHostInstanceId_15(),
	PlayerMatchedWithLobbyEventData_t3866319770::get_offset_of_ServerIPV4Address_16(),
	PlayerMatchedWithLobbyEventData_t3866319770::get_offset_of_ServerIPV6Address_17(),
	PlayerMatchedWithLobbyEventData_t3866319770::get_offset_of_ServerPort_18(),
	PlayerMatchedWithLobbyEventData_t3866319770::get_offset_of_TitleId_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4334 = { sizeof (PlayerPasswordResetLinkSentEventData_t3829132934), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4334[6] = 
{
	PlayerPasswordResetLinkSentEventData_t3829132934::get_offset_of_InitiatedBy_10(),
	PlayerPasswordResetLinkSentEventData_t3829132934::get_offset_of_InitiatedFromIPAddress_11(),
	PlayerPasswordResetLinkSentEventData_t3829132934::get_offset_of_LinkExpiration_12(),
	PlayerPasswordResetLinkSentEventData_t3829132934::get_offset_of_PasswordResetId_13(),
	PlayerPasswordResetLinkSentEventData_t3829132934::get_offset_of_RecoveryEmailAddress_14(),
	PlayerPasswordResetLinkSentEventData_t3829132934::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4335 = { sizeof (PlayerPayForPurchaseEventData_t3690698165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4335[11] = 
{
	PlayerPayForPurchaseEventData_t3690698165::get_offset_of_OrderId_10(),
	PlayerPayForPurchaseEventData_t3690698165::get_offset_of_ProviderData_11(),
	PlayerPayForPurchaseEventData_t3690698165::get_offset_of_ProviderName_12(),
	PlayerPayForPurchaseEventData_t3690698165::get_offset_of_ProviderToken_13(),
	PlayerPayForPurchaseEventData_t3690698165::get_offset_of_PurchaseConfirmationPageURL_14(),
	PlayerPayForPurchaseEventData_t3690698165::get_offset_of_PurchaseCurrency_15(),
	PlayerPayForPurchaseEventData_t3690698165::get_offset_of_PurchasePrice_16(),
	PlayerPayForPurchaseEventData_t3690698165::get_offset_of_Status_17(),
	PlayerPayForPurchaseEventData_t3690698165::get_offset_of_TitleId_18(),
	PlayerPayForPurchaseEventData_t3690698165::get_offset_of_VirtualCurrencyBalances_19(),
	PlayerPayForPurchaseEventData_t3690698165::get_offset_of_VirtualCurrencyGrants_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4336 = { sizeof (PlayerRankedOnLeaderboardVersionEventData_t1978565495), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4336[6] = 
{
	PlayerRankedOnLeaderboardVersionEventData_t1978565495::get_offset_of_LeaderboardSource_10(),
	PlayerRankedOnLeaderboardVersionEventData_t1978565495::get_offset_of_Rank_11(),
	PlayerRankedOnLeaderboardVersionEventData_t1978565495::get_offset_of_TitleId_12(),
	PlayerRankedOnLeaderboardVersionEventData_t1978565495::get_offset_of_Value_13(),
	PlayerRankedOnLeaderboardVersionEventData_t1978565495::get_offset_of_Version_14(),
	PlayerRankedOnLeaderboardVersionEventData_t1978565495::get_offset_of_VersionChangeBehavior_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4337 = { sizeof (PlayerRealMoneyPurchaseEventData_t2724906927), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4337[9] = 
{
	PlayerRealMoneyPurchaseEventData_t2724906927::get_offset_of_OrderId_10(),
	PlayerRealMoneyPurchaseEventData_t2724906927::get_offset_of_OrderTotal_11(),
	PlayerRealMoneyPurchaseEventData_t2724906927::get_offset_of_PaymentProvider_12(),
	PlayerRealMoneyPurchaseEventData_t2724906927::get_offset_of_PaymentType_13(),
	PlayerRealMoneyPurchaseEventData_t2724906927::get_offset_of_PurchasedProduct_14(),
	PlayerRealMoneyPurchaseEventData_t2724906927::get_offset_of_TitleId_15(),
	PlayerRealMoneyPurchaseEventData_t2724906927::get_offset_of_TransactionCurrency_16(),
	PlayerRealMoneyPurchaseEventData_t2724906927::get_offset_of_TransactionId_17(),
	PlayerRealMoneyPurchaseEventData_t2724906927::get_offset_of_TransactionTotal_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4338 = { sizeof (PlayerReceiptValidationEventData_t1655499948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4338[6] = 
{
	PlayerReceiptValidationEventData_t1655499948::get_offset_of_Error_10(),
	PlayerReceiptValidationEventData_t1655499948::get_offset_of_PaymentProvider_11(),
	PlayerReceiptValidationEventData_t1655499948::get_offset_of_PaymentType_12(),
	PlayerReceiptValidationEventData_t1655499948::get_offset_of_ReceiptContent_13(),
	PlayerReceiptValidationEventData_t1655499948::get_offset_of_TitleId_14(),
	PlayerReceiptValidationEventData_t1655499948::get_offset_of_Valid_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4339 = { sizeof (PlayerRedeemedCouponEventData_t1324586729), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4339[3] = 
{
	PlayerRedeemedCouponEventData_t1324586729::get_offset_of_CouponCode_10(),
	PlayerRedeemedCouponEventData_t1324586729::get_offset_of_GrantedInventoryItems_11(),
	PlayerRedeemedCouponEventData_t1324586729::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4340 = { sizeof (PlayerRegisteredPushNotificationsEventData_t1940130493), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4340[3] = 
{
	PlayerRegisteredPushNotificationsEventData_t1940130493::get_offset_of_DeviceToken_10(),
	PlayerRegisteredPushNotificationsEventData_t1940130493::get_offset_of_Platform_11(),
	PlayerRegisteredPushNotificationsEventData_t1940130493::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4341 = { sizeof (PlayerRemovedTitleEventData_t1127799809), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4341[1] = 
{
	PlayerRemovedTitleEventData_t1127799809::get_offset_of_TitleId_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4342 = { sizeof (PlayerReportedAsAbusiveEventData_t3805762698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4342[3] = 
{
	PlayerReportedAsAbusiveEventData_t3805762698::get_offset_of_Comment_10(),
	PlayerReportedAsAbusiveEventData_t3805762698::get_offset_of_ReportedByPlayer_11(),
	PlayerReportedAsAbusiveEventData_t3805762698::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4343 = { sizeof (PlayerSetProfilePropertyEventData_t914979406), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4343[3] = 
{
	PlayerSetProfilePropertyEventData_t914979406::get_offset_of_Property_10(),
	PlayerSetProfilePropertyEventData_t914979406::get_offset_of_TitleId_11(),
	PlayerSetProfilePropertyEventData_t914979406::get_offset_of_Value_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4344 = { sizeof (PlayerStartPurchaseEventData_t1844083469), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4344[5] = 
{
	PlayerStartPurchaseEventData_t1844083469::get_offset_of_CatalogVersion_10(),
	PlayerStartPurchaseEventData_t1844083469::get_offset_of_Contents_11(),
	PlayerStartPurchaseEventData_t1844083469::get_offset_of_OrderId_12(),
	PlayerStartPurchaseEventData_t1844083469::get_offset_of_StoreId_13(),
	PlayerStartPurchaseEventData_t1844083469::get_offset_of_TitleId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4345 = { sizeof (PlayerStatisticChangedEventData_t73800534), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4345[7] = 
{
	PlayerStatisticChangedEventData_t73800534::get_offset_of_AggregationMethod_10(),
	PlayerStatisticChangedEventData_t73800534::get_offset_of_StatisticId_11(),
	PlayerStatisticChangedEventData_t73800534::get_offset_of_StatisticName_12(),
	PlayerStatisticChangedEventData_t73800534::get_offset_of_StatisticPreviousValue_13(),
	PlayerStatisticChangedEventData_t73800534::get_offset_of_StatisticValue_14(),
	PlayerStatisticChangedEventData_t73800534::get_offset_of_TitleId_15(),
	PlayerStatisticChangedEventData_t73800534::get_offset_of_Version_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4346 = { sizeof (PlayerStatisticDeletedEventData_t328155140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4346[5] = 
{
	PlayerStatisticDeletedEventData_t328155140::get_offset_of_StatisticId_10(),
	PlayerStatisticDeletedEventData_t328155140::get_offset_of_StatisticName_11(),
	PlayerStatisticDeletedEventData_t328155140::get_offset_of_StatisticPreviousValue_12(),
	PlayerStatisticDeletedEventData_t328155140::get_offset_of_TitleId_13(),
	PlayerStatisticDeletedEventData_t328155140::get_offset_of_Version_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4347 = { sizeof (PlayerTagAddedEventData_t1599828201), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4347[3] = 
{
	PlayerTagAddedEventData_t1599828201::get_offset_of_Namespace_10(),
	PlayerTagAddedEventData_t1599828201::get_offset_of_TagName_11(),
	PlayerTagAddedEventData_t1599828201::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4348 = { sizeof (PlayerTagRemovedEventData_t158369537), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4348[3] = 
{
	PlayerTagRemovedEventData_t158369537::get_offset_of_Namespace_10(),
	PlayerTagRemovedEventData_t158369537::get_offset_of_TagName_11(),
	PlayerTagRemovedEventData_t158369537::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4349 = { sizeof (PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4349[6] = 
{
	PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829::get_offset_of_CloudScriptExecutionResult_10(),
	PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829::get_offset_of_FunctionName_11(),
	PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829::get_offset_of_TitleId_12(),
	PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829::get_offset_of_TriggeringEventData_13(),
	PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829::get_offset_of_TriggeringEventName_14(),
	PlayerTriggeredActionExecutedCloudScriptEventData_t2749517829::get_offset_of_TriggeringPlayer_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4350 = { sizeof (PlayerUnlinkedAccountEventData_t37455566), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4350[3] = 
{
	PlayerUnlinkedAccountEventData_t37455566::get_offset_of_Origination_10(),
	PlayerUnlinkedAccountEventData_t37455566::get_offset_of_OriginationUserId_11(),
	PlayerUnlinkedAccountEventData_t37455566::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4351 = { sizeof (PlayerUpdatedContactEmailEventData_t776420100), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4351[4] = 
{
	PlayerUpdatedContactEmailEventData_t776420100::get_offset_of_EmailName_10(),
	PlayerUpdatedContactEmailEventData_t776420100::get_offset_of_NewEmailAddress_11(),
	PlayerUpdatedContactEmailEventData_t776420100::get_offset_of_PreviousEmailAddress_12(),
	PlayerUpdatedContactEmailEventData_t776420100::get_offset_of_TitleId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4352 = { sizeof (PlayerVCPurchaseEventData_t3718844847), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4352[8] = 
{
	PlayerVCPurchaseEventData_t3718844847::get_offset_of_CatalogVersion_10(),
	PlayerVCPurchaseEventData_t3718844847::get_offset_of_CurrencyCode_11(),
	PlayerVCPurchaseEventData_t3718844847::get_offset_of_ItemId_12(),
	PlayerVCPurchaseEventData_t3718844847::get_offset_of_PurchaseId_13(),
	PlayerVCPurchaseEventData_t3718844847::get_offset_of_Quantity_14(),
	PlayerVCPurchaseEventData_t3718844847::get_offset_of_StoreId_15(),
	PlayerVCPurchaseEventData_t3718844847::get_offset_of_TitleId_16(),
	PlayerVCPurchaseEventData_t3718844847::get_offset_of_UnitPrice_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4353 = { sizeof (PlayerVerifiedContactEmailEventData_t2512849399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4353[3] = 
{
	PlayerVerifiedContactEmailEventData_t2512849399::get_offset_of_EmailAddress_10(),
	PlayerVerifiedContactEmailEventData_t2512849399::get_offset_of_EmailName_11(),
	PlayerVerifiedContactEmailEventData_t2512849399::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4354 = { sizeof (PlayerVirtualCurrencyBalanceChangedEventData_t830832843), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4354[5] = 
{
	PlayerVirtualCurrencyBalanceChangedEventData_t830832843::get_offset_of_OrderId_10(),
	PlayerVirtualCurrencyBalanceChangedEventData_t830832843::get_offset_of_TitleId_11(),
	PlayerVirtualCurrencyBalanceChangedEventData_t830832843::get_offset_of_VirtualCurrencyBalance_12(),
	PlayerVirtualCurrencyBalanceChangedEventData_t830832843::get_offset_of_VirtualCurrencyName_13(),
	PlayerVirtualCurrencyBalanceChangedEventData_t830832843::get_offset_of_VirtualCurrencyPreviousBalance_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4355 = { sizeof (SentEmailEventData_t2109692145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4355[12] = 
{
	SentEmailEventData_t2109692145::get_offset_of_Body_10(),
	SentEmailEventData_t2109692145::get_offset_of_EmailName_11(),
	SentEmailEventData_t2109692145::get_offset_of_EmailTemplateId_12(),
	SentEmailEventData_t2109692145::get_offset_of_EmailTemplateName_13(),
	SentEmailEventData_t2109692145::get_offset_of_EmailTemplateType_14(),
	SentEmailEventData_t2109692145::get_offset_of_ErrorMessage_15(),
	SentEmailEventData_t2109692145::get_offset_of_ErrorName_16(),
	SentEmailEventData_t2109692145::get_offset_of_Language_17(),
	SentEmailEventData_t2109692145::get_offset_of_Subject_18(),
	SentEmailEventData_t2109692145::get_offset_of_Success_19(),
	SentEmailEventData_t2109692145::get_offset_of_TitleId_20(),
	SentEmailEventData_t2109692145::get_offset_of_Token_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4356 = { sizeof (ClientFocusChangeEventData_t407855270), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4356[5] = 
{
	ClientFocusChangeEventData_t407855270::get_offset_of_EntityLineage_10(),
	ClientFocusChangeEventData_t407855270::get_offset_of_OriginalEventId_11(),
	ClientFocusChangeEventData_t407855270::get_offset_of_OriginalTimestamp_12(),
	ClientFocusChangeEventData_t407855270::get_offset_of_Payload_13(),
	ClientFocusChangeEventData_t407855270::get_offset_of_WriterEntity_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4357 = { sizeof (ClientSessionStartEventData_t4281035394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4357[5] = 
{
	ClientSessionStartEventData_t4281035394::get_offset_of_EntityLineage_10(),
	ClientSessionStartEventData_t4281035394::get_offset_of_OriginalEventId_11(),
	ClientSessionStartEventData_t4281035394::get_offset_of_OriginalTimestamp_12(),
	ClientSessionStartEventData_t4281035394::get_offset_of_Payload_13(),
	ClientSessionStartEventData_t4281035394::get_offset_of_WriterEntity_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4358 = { sizeof (GameLobbyEndedEventData_t1075445578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4358[11] = 
{
	GameLobbyEndedEventData_t1075445578::get_offset_of_GameMode_10(),
	GameLobbyEndedEventData_t1075445578::get_offset_of_GameStartTime_11(),
	GameLobbyEndedEventData_t1075445578::get_offset_of_Region_12(),
	GameLobbyEndedEventData_t1075445578::get_offset_of_ServerBuildVersion_13(),
	GameLobbyEndedEventData_t1075445578::get_offset_of_ServerHost_14(),
	GameLobbyEndedEventData_t1075445578::get_offset_of_ServerHostInstanceId_15(),
	GameLobbyEndedEventData_t1075445578::get_offset_of_ServerIPV4Address_16(),
	GameLobbyEndedEventData_t1075445578::get_offset_of_ServerIPV6Address_17(),
	GameLobbyEndedEventData_t1075445578::get_offset_of_ServerPort_18(),
	GameLobbyEndedEventData_t1075445578::get_offset_of_Tags_19(),
	GameLobbyEndedEventData_t1075445578::get_offset_of_TitleId_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4359 = { sizeof (GameLobbyStartedEventData_t499319584), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4359[14] = 
{
	GameLobbyStartedEventData_t499319584::get_offset_of_CustomCommandLineData_10(),
	GameLobbyStartedEventData_t499319584::get_offset_of_CustomMatchmakerEndpoint_11(),
	GameLobbyStartedEventData_t499319584::get_offset_of_GameMode_12(),
	GameLobbyStartedEventData_t499319584::get_offset_of_GameServerData_13(),
	GameLobbyStartedEventData_t499319584::get_offset_of_MaxPlayers_14(),
	GameLobbyStartedEventData_t499319584::get_offset_of_Region_15(),
	GameLobbyStartedEventData_t499319584::get_offset_of_ServerBuildVersion_16(),
	GameLobbyStartedEventData_t499319584::get_offset_of_ServerHost_17(),
	GameLobbyStartedEventData_t499319584::get_offset_of_ServerHostInstanceId_18(),
	GameLobbyStartedEventData_t499319584::get_offset_of_ServerIPV4Address_19(),
	GameLobbyStartedEventData_t499319584::get_offset_of_ServerIPV6Address_20(),
	GameLobbyStartedEventData_t499319584::get_offset_of_ServerPort_21(),
	GameLobbyStartedEventData_t499319584::get_offset_of_Tags_22(),
	GameLobbyStartedEventData_t499319584::get_offset_of_TitleId_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4360 = { sizeof (GameServerHostStartedEventData_t2782581439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4360[10] = 
{
	GameServerHostStartedEventData_t2782581439::get_offset_of_InstanceId_10(),
	GameServerHostStartedEventData_t2782581439::get_offset_of_InstanceProvider_11(),
	GameServerHostStartedEventData_t2782581439::get_offset_of_InstanceType_12(),
	GameServerHostStartedEventData_t2782581439::get_offset_of_Region_13(),
	GameServerHostStartedEventData_t2782581439::get_offset_of_ServerBuildVersion_14(),
	GameServerHostStartedEventData_t2782581439::get_offset_of_ServerHost_15(),
	GameServerHostStartedEventData_t2782581439::get_offset_of_ServerIPV4Address_16(),
	GameServerHostStartedEventData_t2782581439::get_offset_of_ServerIPV6Address_17(),
	GameServerHostStartedEventData_t2782581439::get_offset_of_StartTime_18(),
	GameServerHostStartedEventData_t2782581439::get_offset_of_TitleId_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4361 = { sizeof (GameServerHostStoppedEventData_t3634674403), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4361[12] = 
{
	GameServerHostStoppedEventData_t3634674403::get_offset_of_InstanceId_10(),
	GameServerHostStoppedEventData_t3634674403::get_offset_of_InstanceProvider_11(),
	GameServerHostStoppedEventData_t3634674403::get_offset_of_InstanceType_12(),
	GameServerHostStoppedEventData_t3634674403::get_offset_of_Region_13(),
	GameServerHostStoppedEventData_t3634674403::get_offset_of_ServerBuildVersion_14(),
	GameServerHostStoppedEventData_t3634674403::get_offset_of_ServerHost_15(),
	GameServerHostStoppedEventData_t3634674403::get_offset_of_ServerIPV4Address_16(),
	GameServerHostStoppedEventData_t3634674403::get_offset_of_ServerIPV6Address_17(),
	GameServerHostStoppedEventData_t3634674403::get_offset_of_StartTime_18(),
	GameServerHostStoppedEventData_t3634674403::get_offset_of_StopReason_19(),
	GameServerHostStoppedEventData_t3634674403::get_offset_of_StopTime_20(),
	GameServerHostStoppedEventData_t3634674403::get_offset_of_TitleId_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4362 = { sizeof (SessionEndedEventData_t1471866750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4362[6] = 
{
	SessionEndedEventData_t1471866750::get_offset_of_Crashed_10(),
	SessionEndedEventData_t1471866750::get_offset_of_EndTime_11(),
	SessionEndedEventData_t1471866750::get_offset_of_KilobytesWritten_12(),
	SessionEndedEventData_t1471866750::get_offset_of_SessionLengthMs_13(),
	SessionEndedEventData_t1471866750::get_offset_of_TitleId_14(),
	SessionEndedEventData_t1471866750::get_offset_of_UserId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4363 = { sizeof (SessionStartedEventData_t3144881655), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4363[2] = 
{
	SessionStartedEventData_t3144881655::get_offset_of_TemporaryWriteUrl_10(),
	SessionStartedEventData_t3144881655::get_offset_of_TitleId_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4364 = { sizeof (TitleAbortedTaskEventData_t1586590638), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4364[3] = 
{
	TitleAbortedTaskEventData_t1586590638::get_offset_of_DeveloperId_10(),
	TitleAbortedTaskEventData_t1586590638::get_offset_of_TaskInstanceId_11(),
	TitleAbortedTaskEventData_t1586590638::get_offset_of_UserId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4365 = { sizeof (TitleAddedCloudScriptEventData_t1238269615), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4365[6] = 
{
	TitleAddedCloudScriptEventData_t1238269615::get_offset_of_DeveloperId_10(),
	TitleAddedCloudScriptEventData_t1238269615::get_offset_of_Published_11(),
	TitleAddedCloudScriptEventData_t1238269615::get_offset_of_Revision_12(),
	TitleAddedCloudScriptEventData_t1238269615::get_offset_of_ScriptNames_13(),
	TitleAddedCloudScriptEventData_t1238269615::get_offset_of_UserId_14(),
	TitleAddedCloudScriptEventData_t1238269615::get_offset_of_Version_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4366 = { sizeof (TitleAddedGameBuildEventData_t3586467276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4366[6] = 
{
	TitleAddedGameBuildEventData_t3586467276::get_offset_of_BuildId_10(),
	TitleAddedGameBuildEventData_t3586467276::get_offset_of_DeveloperId_11(),
	TitleAddedGameBuildEventData_t3586467276::get_offset_of_MaxGamesPerHost_12(),
	TitleAddedGameBuildEventData_t3586467276::get_offset_of_MinFreeGameSlots_13(),
	TitleAddedGameBuildEventData_t3586467276::get_offset_of_Regions_14(),
	TitleAddedGameBuildEventData_t3586467276::get_offset_of_UserId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4367 = { sizeof (TitleAPISettingsChangedEventData_t2850335908), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4367[4] = 
{
	TitleAPISettingsChangedEventData_t2850335908::get_offset_of_DeveloperId_10(),
	TitleAPISettingsChangedEventData_t2850335908::get_offset_of_PreviousSettingsValues_11(),
	TitleAPISettingsChangedEventData_t2850335908::get_offset_of_SettingsValues_12(),
	TitleAPISettingsChangedEventData_t2850335908::get_offset_of_UserId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4368 = { sizeof (TitleCatalogUpdatedEventData_t4227670981), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4368[4] = 
{
	TitleCatalogUpdatedEventData_t4227670981::get_offset_of_CatalogVersion_10(),
	TitleCatalogUpdatedEventData_t4227670981::get_offset_of_Deleted_11(),
	TitleCatalogUpdatedEventData_t4227670981::get_offset_of_DeveloperId_12(),
	TitleCatalogUpdatedEventData_t4227670981::get_offset_of_UserId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4369 = { sizeof (TitleClientRateLimitedEventData_t4196509077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4369[6] = 
{
	TitleClientRateLimitedEventData_t4196509077::get_offset_of_AlertEventId_10(),
	TitleClientRateLimitedEventData_t4196509077::get_offset_of_AlertState_11(),
	TitleClientRateLimitedEventData_t4196509077::get_offset_of_API_12(),
	TitleClientRateLimitedEventData_t4196509077::get_offset_of_ErrorCode_13(),
	TitleClientRateLimitedEventData_t4196509077::get_offset_of_GraphUrl_14(),
	TitleClientRateLimitedEventData_t4196509077::get_offset_of_Level_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4370 = { sizeof (TitleCompletedTaskEventData_t37833475), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4370[6] = 
{
	TitleCompletedTaskEventData_t37833475::get_offset_of_AbortedAt_10(),
	TitleCompletedTaskEventData_t37833475::get_offset_of_IsAborted_11(),
	TitleCompletedTaskEventData_t37833475::get_offset_of_Result_12(),
	TitleCompletedTaskEventData_t37833475::get_offset_of_Summary_13(),
	TitleCompletedTaskEventData_t37833475::get_offset_of_TaskInstanceId_14(),
	TitleCompletedTaskEventData_t37833475::get_offset_of_TaskType_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4371 = { sizeof (TitleCreatedTaskEventData_t107524265), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4371[3] = 
{
	TitleCreatedTaskEventData_t107524265::get_offset_of_DeveloperId_10(),
	TitleCreatedTaskEventData_t107524265::get_offset_of_ScheduledTask_11(),
	TitleCreatedTaskEventData_t107524265::get_offset_of_UserId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4372 = { sizeof (TitleDeletedEventData_t3474232298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4373 = { sizeof (TitleDeletedTaskEventData_t2544448893), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4373[3] = 
{
	TitleDeletedTaskEventData_t2544448893::get_offset_of_DeveloperId_10(),
	TitleDeletedTaskEventData_t2544448893::get_offset_of_ScheduledTask_11(),
	TitleDeletedTaskEventData_t2544448893::get_offset_of_UserId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4374 = { sizeof (TitleExceededLimitEventData_t1378613392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4374[6] = 
{
	TitleExceededLimitEventData_t1378613392::get_offset_of_Details_10(),
	TitleExceededLimitEventData_t1378613392::get_offset_of_LimitDisplayName_11(),
	TitleExceededLimitEventData_t1378613392::get_offset_of_LimitId_12(),
	TitleExceededLimitEventData_t1378613392::get_offset_of_LimitValue_13(),
	TitleExceededLimitEventData_t1378613392::get_offset_of_Unit_14(),
	TitleExceededLimitEventData_t1378613392::get_offset_of_Value_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4375 = { sizeof (TitleHighErrorRateEventData_t815057784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4375[6] = 
{
	TitleHighErrorRateEventData_t815057784::get_offset_of_AlertEventId_10(),
	TitleHighErrorRateEventData_t815057784::get_offset_of_AlertState_11(),
	TitleHighErrorRateEventData_t815057784::get_offset_of_API_12(),
	TitleHighErrorRateEventData_t815057784::get_offset_of_ErrorCode_13(),
	TitleHighErrorRateEventData_t815057784::get_offset_of_GraphUrl_14(),
	TitleHighErrorRateEventData_t815057784::get_offset_of_Level_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4376 = { sizeof (TitleInitiatedPlayerPasswordResetEventData_t3548219522), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4376[5] = 
{
	TitleInitiatedPlayerPasswordResetEventData_t3548219522::get_offset_of_DeveloperId_10(),
	TitleInitiatedPlayerPasswordResetEventData_t3548219522::get_offset_of_PasswordResetId_11(),
	TitleInitiatedPlayerPasswordResetEventData_t3548219522::get_offset_of_PlayerId_12(),
	TitleInitiatedPlayerPasswordResetEventData_t3548219522::get_offset_of_PlayerRecoveryEmailAddress_13(),
	TitleInitiatedPlayerPasswordResetEventData_t3548219522::get_offset_of_UserId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4377 = { sizeof (TitleLimitChangedEventData_t323349762), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4377[8] = 
{
	TitleLimitChangedEventData_t323349762::get_offset_of_LimitDisplayName_10(),
	TitleLimitChangedEventData_t323349762::get_offset_of_LimitId_11(),
	TitleLimitChangedEventData_t323349762::get_offset_of_PreviousPriceUSD_12(),
	TitleLimitChangedEventData_t323349762::get_offset_of_PreviousValue_13(),
	TitleLimitChangedEventData_t323349762::get_offset_of_PriceUSD_14(),
	TitleLimitChangedEventData_t323349762::get_offset_of_TransactionId_15(),
	TitleLimitChangedEventData_t323349762::get_offset_of_Unit_16(),
	TitleLimitChangedEventData_t323349762::get_offset_of_Value_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4378 = { sizeof (TitleModifiedGameBuildEventData_t2715074267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4378[6] = 
{
	TitleModifiedGameBuildEventData_t2715074267::get_offset_of_BuildId_10(),
	TitleModifiedGameBuildEventData_t2715074267::get_offset_of_DeveloperId_11(),
	TitleModifiedGameBuildEventData_t2715074267::get_offset_of_MaxGamesPerHost_12(),
	TitleModifiedGameBuildEventData_t2715074267::get_offset_of_MinFreeGameSlots_13(),
	TitleModifiedGameBuildEventData_t2715074267::get_offset_of_Regions_14(),
	TitleModifiedGameBuildEventData_t2715074267::get_offset_of_UserId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4379 = { sizeof (TitleNewsUpdatedEventData_t2984024213), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4379[4] = 
{
	TitleNewsUpdatedEventData_t2984024213::get_offset_of_DateCreated_10(),
	TitleNewsUpdatedEventData_t2984024213::get_offset_of_NewsId_11(),
	TitleNewsUpdatedEventData_t2984024213::get_offset_of_NewsTitle_12(),
	TitleNewsUpdatedEventData_t2984024213::get_offset_of_Status_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4380 = { sizeof (TitlePermissionsPolicyChangedEventData_t3083171274), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4380[4] = 
{
	TitlePermissionsPolicyChangedEventData_t3083171274::get_offset_of_DeveloperId_10(),
	TitlePermissionsPolicyChangedEventData_t3083171274::get_offset_of_NewPolicy_11(),
	TitlePermissionsPolicyChangedEventData_t3083171274::get_offset_of_PolicyName_12(),
	TitlePermissionsPolicyChangedEventData_t3083171274::get_offset_of_UserId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4381 = { sizeof (TitleProfileViewConstraintsChangedEventData_t2671899541), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4381[5] = 
{
	TitleProfileViewConstraintsChangedEventData_t2671899541::get_offset_of_DeveloperId_10(),
	TitleProfileViewConstraintsChangedEventData_t2671899541::get_offset_of_PreviousProfileViewConstraints_11(),
	TitleProfileViewConstraintsChangedEventData_t2671899541::get_offset_of_ProfileType_12(),
	TitleProfileViewConstraintsChangedEventData_t2671899541::get_offset_of_ProfileViewConstraints_13(),
	TitleProfileViewConstraintsChangedEventData_t2671899541::get_offset_of_UserId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4382 = { sizeof (TitlePublishedCloudScriptEventData_t624272339), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4382[3] = 
{
	TitlePublishedCloudScriptEventData_t624272339::get_offset_of_DeveloperId_10(),
	TitlePublishedCloudScriptEventData_t624272339::get_offset_of_Revision_11(),
	TitlePublishedCloudScriptEventData_t624272339::get_offset_of_UserId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4383 = { sizeof (TitleQueueConfigUpdatedEventData_t3530715226), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4383[4] = 
{
	TitleQueueConfigUpdatedEventData_t3530715226::get_offset_of_Deleted_10(),
	TitleQueueConfigUpdatedEventData_t3530715226::get_offset_of_DeveloperId_11(),
	TitleQueueConfigUpdatedEventData_t3530715226::get_offset_of_MatchQueueName_12(),
	TitleQueueConfigUpdatedEventData_t3530715226::get_offset_of_UserId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4384 = { sizeof (TitleRequestedLimitChangeEventData_t875512100), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4384[12] = 
{
	TitleRequestedLimitChangeEventData_t875512100::get_offset_of_DeveloperId_10(),
	TitleRequestedLimitChangeEventData_t875512100::get_offset_of_LevelName_11(),
	TitleRequestedLimitChangeEventData_t875512100::get_offset_of_LimitDisplayName_12(),
	TitleRequestedLimitChangeEventData_t875512100::get_offset_of_LimitId_13(),
	TitleRequestedLimitChangeEventData_t875512100::get_offset_of_PreviousLevelName_14(),
	TitleRequestedLimitChangeEventData_t875512100::get_offset_of_PreviousPriceUSD_15(),
	TitleRequestedLimitChangeEventData_t875512100::get_offset_of_PreviousValue_16(),
	TitleRequestedLimitChangeEventData_t875512100::get_offset_of_PriceUSD_17(),
	TitleRequestedLimitChangeEventData_t875512100::get_offset_of_TransactionId_18(),
	TitleRequestedLimitChangeEventData_t875512100::get_offset_of_Unit_19(),
	TitleRequestedLimitChangeEventData_t875512100::get_offset_of_UserId_20(),
	TitleRequestedLimitChangeEventData_t875512100::get_offset_of_Value_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4385 = { sizeof (TitleSavedSurveyEventData_t2644699077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4385[6] = 
{
	TitleSavedSurveyEventData_t2644699077::get_offset_of_Genre_10(),
	TitleSavedSurveyEventData_t2644699077::get_offset_of_Monetization_11(),
	TitleSavedSurveyEventData_t2644699077::get_offset_of_Platforms_12(),
	TitleSavedSurveyEventData_t2644699077::get_offset_of_PlayerModes_13(),
	TitleSavedSurveyEventData_t2644699077::get_offset_of_TitleName_14(),
	TitleSavedSurveyEventData_t2644699077::get_offset_of_TitleWebsite_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4386 = { sizeof (TitleScheduledCloudScriptExecutedEventData_t1671053640), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4386[3] = 
{
	TitleScheduledCloudScriptExecutedEventData_t1671053640::get_offset_of_CloudScriptExecutionResult_10(),
	TitleScheduledCloudScriptExecutedEventData_t1671053640::get_offset_of_FunctionName_11(),
	TitleScheduledCloudScriptExecutedEventData_t1671053640::get_offset_of_ScheduledTask_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4387 = { sizeof (TitleSecretKeyEventData_t3537560794), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4387[7] = 
{
	TitleSecretKeyEventData_t3537560794::get_offset_of_Deleted_10(),
	TitleSecretKeyEventData_t3537560794::get_offset_of_DeveloperId_11(),
	TitleSecretKeyEventData_t3537560794::get_offset_of_Disabled_12(),
	TitleSecretKeyEventData_t3537560794::get_offset_of_ExpiryDate_13(),
	TitleSecretKeyEventData_t3537560794::get_offset_of_SecretKeyId_14(),
	TitleSecretKeyEventData_t3537560794::get_offset_of_SecretKeyName_15(),
	TitleSecretKeyEventData_t3537560794::get_offset_of_UserId_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4388 = { sizeof (TitleStartedTaskEventData_t806162805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4388[7] = 
{
	TitleStartedTaskEventData_t806162805::get_offset_of_DeveloperId_10(),
	TitleStartedTaskEventData_t806162805::get_offset_of_Parameter_11(),
	TitleStartedTaskEventData_t806162805::get_offset_of_ScheduledByUserId_12(),
	TitleStartedTaskEventData_t806162805::get_offset_of_ScheduledTask_13(),
	TitleStartedTaskEventData_t806162805::get_offset_of_TaskInstanceId_14(),
	TitleStartedTaskEventData_t806162805::get_offset_of_TaskType_15(),
	TitleStartedTaskEventData_t806162805::get_offset_of_UserId_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4389 = { sizeof (TitleStatisticVersionChangedEventData_t3511495994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4389[4] = 
{
	TitleStatisticVersionChangedEventData_t3511495994::get_offset_of_ScheduledResetInterval_10(),
	TitleStatisticVersionChangedEventData_t3511495994::get_offset_of_ScheduledResetTime_11(),
	TitleStatisticVersionChangedEventData_t3511495994::get_offset_of_StatisticName_12(),
	TitleStatisticVersionChangedEventData_t3511495994::get_offset_of_StatisticVersion_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4390 = { sizeof (TitleStoreUpdatedEventData_t1911314714), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4390[5] = 
{
	TitleStoreUpdatedEventData_t1911314714::get_offset_of_CatalogVersion_10(),
	TitleStoreUpdatedEventData_t1911314714::get_offset_of_Deleted_11(),
	TitleStoreUpdatedEventData_t1911314714::get_offset_of_DeveloperId_12(),
	TitleStoreUpdatedEventData_t1911314714::get_offset_of_StoreId_13(),
	TitleStoreUpdatedEventData_t1911314714::get_offset_of_UserId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4391 = { sizeof (TitleUpdatedTaskEventData_t1479612834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4391[4] = 
{
	TitleUpdatedTaskEventData_t1479612834::get_offset_of_DeveloperId_10(),
	TitleUpdatedTaskEventData_t1479612834::get_offset_of_HasRenamed_11(),
	TitleUpdatedTaskEventData_t1479612834::get_offset_of_ScheduledTask_12(),
	TitleUpdatedTaskEventData_t1479612834::get_offset_of_UserId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4392 = { sizeof (OperationTypes_t1133051618)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4392[5] = 
{
	OperationTypes_t1133051618::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4393 = { sizeof (FileSet_t4097587909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4393[8] = 
{
	FileSet_t4097587909::get_offset_of_ByteCount_0(),
	FileSet_t4097587909::get_offset_of_Checksum_1(),
	FileSet_t4097587909::get_offset_of_FileName_2(),
	FileSet_t4097587909::get_offset_of_Operation_3(),
	FileSet_t4097587909::get_offset_of_PreviousByteCount_4(),
	FileSet_t4097587909::get_offset_of_PreviousChecksum_5(),
	FileSet_t4097587909::get_offset_of_PreviousStoragePath_6(),
	FileSet_t4097587909::get_offset_of_StoragePath_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4394 = { sizeof (EntityLineage_t1359769518), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4394[6] = 
{
	EntityLineage_t1359769518::get_offset_of_CharacterId_0(),
	EntityLineage_t1359769518::get_offset_of_GroupId_1(),
	EntityLineage_t1359769518::get_offset_of_MasterPlayerAccountId_2(),
	EntityLineage_t1359769518::get_offset_of_NamespaceId_3(),
	EntityLineage_t1359769518::get_offset_of_TitleId_4(),
	EntityLineage_t1359769518::get_offset_of_TitlePlayerAccountId_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4395 = { sizeof (LogStatement_t2615933867), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4395[3] = 
{
	LogStatement_t2615933867::get_offset_of_Data_0(),
	LogStatement_t2615933867::get_offset_of_Level_1(),
	LogStatement_t2615933867::get_offset_of_Message_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4396 = { sizeof (ScriptExecutionError_t2372349938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4396[3] = 
{
	ScriptExecutionError_t2372349938::get_offset_of_Error_0(),
	ScriptExecutionError_t2372349938::get_offset_of_Message_1(),
	ScriptExecutionError_t2372349938::get_offset_of_StackTrace_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4397 = { sizeof (ExecuteCloudScriptResult_t1291136388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4397[12] = 
{
	ExecuteCloudScriptResult_t1291136388::get_offset_of_APIRequestsIssued_0(),
	ExecuteCloudScriptResult_t1291136388::get_offset_of_Error_1(),
	ExecuteCloudScriptResult_t1291136388::get_offset_of_ExecutionTimeSeconds_2(),
	ExecuteCloudScriptResult_t1291136388::get_offset_of_FunctionName_3(),
	ExecuteCloudScriptResult_t1291136388::get_offset_of_FunctionResult_4(),
	ExecuteCloudScriptResult_t1291136388::get_offset_of_FunctionResultTooLarge_5(),
	ExecuteCloudScriptResult_t1291136388::get_offset_of_HttpRequestsIssued_6(),
	ExecuteCloudScriptResult_t1291136388::get_offset_of_Logs_7(),
	ExecuteCloudScriptResult_t1291136388::get_offset_of_LogsTooLarge_8(),
	ExecuteCloudScriptResult_t1291136388::get_offset_of_MemoryConsumedBytes_9(),
	ExecuteCloudScriptResult_t1291136388::get_offset_of_ProcessorTimeSeconds_10(),
	ExecuteCloudScriptResult_t1291136388::get_offset_of_Revision_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4398 = { sizeof (Member_t2056686911), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4398[2] = 
{
	Member_t2056686911::get_offset_of_EntityId_0(),
	Member_t2056686911::get_offset_of_EntityType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4399 = { sizeof (RolePropertyValues_t1466286987), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4399[1] = 
{
	RolePropertyValues_t1466286987::get_offset_of_RoleName_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
