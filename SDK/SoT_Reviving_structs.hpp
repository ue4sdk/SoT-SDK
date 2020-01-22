#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Reviving_enums.hpp"
#include "SoT_ActionStateMachine_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_Interaction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Reviving.ReviveableActionStateConstructionInfo
// 0x0038 (0x0068 - 0x0030)
struct FReviveableActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	class UClass*                                      ActionStateId;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDamageInstance                             DamageInstance;                                           // 0x0038(0x0028)
	TEnumAsByte<ECharacterDeathType>                   CharacterDeathType;                                       // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterType>                        CharacterType;                                            // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
};

// ScriptStruct Reviving.RevivingWindowEnd
// 0x0001
struct FRevivingWindowEnd
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.RevivingWindowStart
// 0x0001
struct FRevivingWindowStart
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.RevivePlayerActionStateConstructionInfo
// 0x0030 (0x0060 - 0x0030)
struct FRevivePlayerActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	struct FNetActorPtr                                CharacterReviving;                                        // 0x0030(0x0014)
	struct FNetSubObjectPtr                            CharacterBeingRevived;                                    // 0x0044(0x0014)
	class UClass*                                      InputID;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
