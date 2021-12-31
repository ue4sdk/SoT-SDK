#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Reviving_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"
#include "SoT_Interaction_classes.hpp"
#include "SoT_StatusEffects_classes.hpp"
#include "SoT_ActionStateMachine_classes.hpp"
#include "SoT_RareAudio_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Reviving.ModeSpecificReviveSettings
// 0x0030
struct FModeSpecificReviveSettings
{
	TEnumAsByte<EPlayMode>                             AssociatedPlaymode;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DeathCameraBlackFadeDelay;                                // 0x0004(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathCameraBlackFadeDuration;                             // 0x0008(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathCameraBlackFadeEventClientTimeout;                   // 0x000C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathCameraBlackFadeEventServerTimeout;                   // 0x0010(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeEvaporate;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              EvaporateDuration;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathCameraStartDelay;                                    // 0x001C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ReviveWindowDuration;                                     // 0x0020(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              GhostFadeDuration;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	UReviveSettings*                                   CachedReviveSettings;                                     // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Reviving.ReviveEffectsValues
// 0x0020
struct FReviveEffectsValues
{
	UMaterialInstanceDynamic*                          AstralCordPostProcessMID;                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Reviving.PlayerInReviveableStateTelemetryEvent
// 0x0001
struct FPlayerInReviveableStateTelemetryEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.PlayerRevivalTelemetryEvent
// 0x0001
struct FPlayerRevivalTelemetryEvent
{
	bool                                               Success;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Reviving.PostReviveLocomotionActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FPostReviveLocomotionActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

};

// ScriptStruct Reviving.EventRevivableRepresentationSpawnCompleted
// 0x0001
struct FEventRevivableRepresentationSpawnCompleted
{
	bool                                               FromSwimming;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Reviving.EventRevivableRepresentationSpawnStarted
// 0x0001
struct FEventRevivableRepresentationSpawnStarted
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.ReviveableActionStateConstructionInfo
// 0x0038 (0x0068 - 0x0030)
struct FReviveableActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	UClass*                                            ActionStateId;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	FDamageInstance                                    DamageInstance;                                           // 0x0038(0x0028)
	TEnumAsByte<ECharacterDeathType>                   CharacterDeathType;                                       // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterType>                        CharacterType;                                            // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
};

// ScriptStruct Reviving.RevivedActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FRevivedActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

};

// ScriptStruct Reviving.RevivedActionStateParams
// 0x0010
struct FRevivedActionStateParams
{
	float                                              HealthRegained;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReviveDuration;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       ReviveGaspAudio;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Reviving.ReviveableActionStateStarted
// 0x0001
struct FReviveableActionStateStarted
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.EventCharacterDiedDuringReviving
// 0x0008
struct FEventCharacterDiedDuringReviving
{
	ACharacter*                                        OwningCharacter;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Reviving.EventRevivePlayerActionStateLeft
// 0x0001
struct FEventRevivePlayerActionStateLeft
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.EventRevivePlayerActionStateEntered
// 0x0001
struct FEventRevivePlayerActionStateEntered
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.EventCharacterFullyRevived
// 0x0001
struct FEventCharacterFullyRevived
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.ReviveEndedEarlyEvent
// 0x0001
struct FReviveEndedEarlyEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.EventRevivableRepresentationReturnedToBody
// 0x0001
struct FEventRevivableRepresentationReturnedToBody
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.SuccessfulReviveEvent
// 0x0001
struct FSuccessfulReviveEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.BeingRevivedStoppedEvent
// 0x0001
struct FBeingRevivedStoppedEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.BeingRevivedStartedEvent
// 0x0001
struct FBeingRevivedStartedEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.RevivableCharacterGhostlyBodyEvaporateStarted
// 0x0001
struct FRevivableCharacterGhostlyBodyEvaporateStarted
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.RevivingWindowEnd
// 0x0001
struct FRevivingWindowEnd
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.RevivingWindowStart
// 0x0038
struct FRevivingWindowStart
{
	FDamageInstance                                    DamageInstance;                                           // 0x0000(0x0028)
	TEnumAsByte<ECharacterDeathType>                   CharacterDeathType;                                       // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	ACharacter*                                        RevivableCharacter;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Reviving.RevivePlayerActionStateConstructionInfo
// 0x0030 (0x0060 - 0x0030)
struct FRevivePlayerActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	FNetActorPtr                                       CharacterReviving;                                        // 0x0030(0x0014)
	FNetSubObjectPtr                                   CharacterBeingRevived;                                    // 0x0044(0x0014)
	UClass*                                            InputID;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
