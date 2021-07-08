#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaAI.AthenaAIFormComponent
// 0x0070 (0x0138 - 0x00C8)
class UAthenaAIFormComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<struct FAthenaAIFormComponentVfxCustomisation> VfxCustomisations;                                        // 0x00D0(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIFormDataAsset*                      FormData;                                                 // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCharacterHitReactionDamagerTypeToAnimTypeLayer* HitReactionsLayer;                                        // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00F0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIFormComponent"));
		return ptr;
	}


	void OnRep_FormData();
};


// Class AthenaAI.AthenaAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIAbilityType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAbilityType"));
		return ptr;
	}

};


// Class AthenaAI.AIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UAIStrategyId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIStrategyId"));
		return ptr;
	}

};


// Class AthenaAI.AISpawner
// 0x03D8 (0x0400 - 0x0028)
class UAISpawner : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	bool                                               HasSpawnerLevelEncounters;                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FAISpawnTypeParamsCollection                SpawnTypeParamsCollection;                                // 0x0040(0x0048) (Edit)
	class UAIEncounterSettings*                        DefaultEncounterSettings;                                 // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISpawnWaveSequenceRankProgression*         DefaultSpawnWaveProgression;                              // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAISpawnContextIdEncounterSettingsPair> SpawnContextSpecificEncounterSettings;                    // 0x0098(0x0010) (Edit, ZeroConstructor)
	bool                                               ShouldSpawnFacingRegionCentre;                            // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAthenaAISpawnType>                    DefaultSpawnType;                                         // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	class UEnvQuery*                                   FindSpawnPosQuery;                                        // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryRunMode>                      FindSpawnPosQueryRunMode;                                 // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	struct FName                                       SpawnLocationType;                                        // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumOfSpawnedPawns;                                     // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PriorityForSpawnedPawns;                                  // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FConditionalAISpawnOverride>         SpawnOverrides;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAdditionalSpawnerBehaviour>         AdditionalBehaviours;                                     // 0x00E0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData05[0x270];                                     // 0x00F0(0x0270) MISSED OFFSET
	class UAthenaAISettings*                           AthenaAISettings;                                         // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x98];                                      // 0x0368(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawner"));
		return ptr;
	}


	int GetNumOfSpawnRequests();
};


// Class AthenaAI.AIPerCrewSpawner
// 0x0138 (0x0538 - 0x0400)
class UAIPerCrewSpawner : public UAISpawner
{
public:
	class UAIWeightedProbabilityRangeOfRangesRankProgression* DefaultRespawnTimerRanges;                                // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumOfCrewsToSpawnFor;                                  // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ActivateBySettingFootOnIsland;                            // 0x040C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseRespawnTimerForFirstSpawn;                             // 0x040D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AssociateSpawnsWithSpecificCrews;                         // 0x040E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PerceiveTriggerActorOnSpawn;                              // 0x040F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnforceRespawnTimeAfterCrewLeaves;                        // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSpawningGracePeriodForNewCrew;                      // 0x0411(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x126];                                     // 0x0412(0x0126) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPerCrewSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIFormDataAsset
// 0x0070 (0x0098 - 0x0028)
class UAthenaAIFormDataAsset : public UDataAsset
{
public:
	TArray<TEnumAsByte<EHealthChangedReason>>          PreventHealthChangedReasons;                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIFormDamageResponse>               DamageResponses;                                          // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UStatusRecipientResponseList*                OverrideStatusRecipientResponseList;                      // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           SurfaceMaterial;                                          // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     KilledVfxTemplate;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AICharacterAudioComponent;                                // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AnimNotifyEmitterWithObservers;                           // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HighPriorityFootstepAudio;                                // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              MovementSpeedMultipler;                                   // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPlayerStat                                 StatToFireOnDeath;                                        // 0x0078(0x000C) (Edit, DisableEditOnInstance)
	struct FName                                       FeatureName;                                              // 0x0084(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UClass*                                      FormComponentClass;                                       // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIFormDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AIPlayerTracker
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerTracker : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPlayerTracker"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnerPlayerTracker
// 0x0020 (0x0048 - 0x0028)
class UAISpawnerPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnerPlayerTracker"));
		return ptr;
	}

};


// Class AthenaAI.AIInteractableType
// 0x0000 (0x0028 - 0x0028)
class UAIInteractableType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIInteractableType"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityStageParams
// 0x0018 (0x0040 - 0x0028)
class UAthenaAIAbilityStageParams : public UObject
{
public:
	float                                              AbilityCooldownSpeedMultiplier;                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageRequiredForNextIntervalMultiplier;                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideParams;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoActivateOnStageTransition;                            // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	class UClass*                                      TypeClass;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAbilityStageParams"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbility
// 0x0050 (0x0078 - 0x0028)
class UAthenaAIAbility : public UObject
{
public:
	class UAthenaAIAbilityParams*                      AbilityParams;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAthenaAIController*                         Controller;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UAIPawnInterface>           AIPawnInterface;                                          // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	class UAthenaAIAbilityStageParams*                 CurrentAbilityStageParams;                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAbility"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityParams
// 0x00A0 (0x00C8 - 0x0028)
class UAthenaAIAbilityParams : public UObject
{
public:
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EAIAbilityDamageIntervalCounterMode>   DamageIntervalCountingMode;                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseTimeBetweenAbility;                                    // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FAthenaAIAbilityPlayerBasedRanges           ActivationTimerCooldown;                                  // 0x0040(0x0010) (Edit)
	struct FAthenaAIAbilityPlayerBasedRanges           TimeBetweenAbility;                                       // 0x0050(0x0010) (Edit)
	bool                                               UseDamageBetweenAbility;                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FAthenaAIAbilityPlayerBasedRanges           DamageBetweenAbility;                                     // 0x0068(0x0010) (Edit)
	float                                              AbilityRadius;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseMinMaxAttackRange;                                     // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	struct FMinMaxAbilityRange                         MinMaxAttackRange;                                        // 0x0080(0x0008) (Edit)
	TArray<struct FAIAbilityFollowUp>                  FollowUpAbilities;                                        // 0x0088(0x0010) (Edit, ZeroConstructor)
	float                                              Weight;                                                   // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FAIAbilityContinuousCooldownParameterData   ContinuousCooldownAbilityParameters;                      // 0x00A0(0x0020) (Edit)
	class UClass*                                      AIAbilityTypeClass;                                       // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAbilityParams"));
		return ptr;
	}

};


// Class AthenaAI.AIInteractableComponent
// 0x0038 (0x0100 - 0x00C8)
class UAIInteractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UClass*                                      Type;                                                     // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DetachOffsetFromOwner;                                    // 0x00D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanHaveTarget;                                            // 0x00E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1B];                                      // 0x00E5(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIInteractableComponent"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_BaseConditional
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_BaseConditional : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_BaseConditional"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TargetOnShip
// 0x0038 (0x00A0 - 0x0068)
class UBTDecorator_TargetOnShip : public UBTDecorator_BaseConditional
{
public:
	bool                                               Invert;                                                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBT_ShipOwnership>                     ShipOwnership;                                            // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x36];                                      // 0x006A(0x0036) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_TargetOnShip"));
		return ptr;
	}

};


// Class AthenaAI.BTService_QueryShipsForTarget
// 0x0290 (0x0300 - 0x0070)
class UBTService_QueryShipsForTarget : public UBTService
{
public:
	struct FAIDataProviderFloatValue                   MaxShipDistanceFromHomePosition;                          // 0x0070(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MinDamageToSwitchTargets;                                 // 0x00A0(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MinSecondsBeforeSwitchTargets;                            // 0x00D0(0x0030) (Edit)
	struct FAIDataProviderBoolValue                    SwitchTargetsAfterTimerExpires;                           // 0x0100(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   SecondsBeforeSwitchTargetsAfterTimerExpires;              // 0x0130(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   TimeBetweenDiceRolls;                                     // 0x0160(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   DiceRollForAggression;                                    // 0x0190(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MinTotalDamageToTurnDiceRollForAggression;                // 0x01C0(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   DiceRollForDamageAggression;                              // 0x01F0(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   DiceRollForDamageDormancy;                                // 0x0220(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   PlayerDistanceThresholdToTurnAggressive;                  // 0x0250(0x0030) (Edit)
	bool                                               IgnoreAI;                                                 // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7F];                                      // 0x0281(0x007F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_QueryShipsForTarget"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimAttackTargetActor
// 0x0058 (0x00E0 - 0x0088)
class UBTTask_SwimAttackTargetActor : public UBTTask_BlackboardBase
{
public:
	float                                              DamageToApply;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleToTargetToSuccessfullyAttack;                     // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttackableTypeToAnimMapping>        AttackAnimMapping;                                        // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FName                                       LoSTraceProfileName;                                      // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                           // 0x00A8(0x0030) (Edit)
	float                                              MaxDistanceToTargetToApplyDamage;                         // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SwimAttackTargetActor"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimAttackTargetShip
// 0x01B0 (0x0238 - 0x0088)
class UBTTask_SwimAttackTargetShip : public UBTTask_BlackboardBase
{
public:
	float                                              BiteRadiusOffsetToBeginAttackHeadOn;                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BiteRadiusOffsetToBeginAttackPerpendicular;               // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeToStartAttack;                                     // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UAnimSequence*                               AttackAnim;                                               // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackAnimLength;                                         // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToPerformAttack;                                      // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AttackVFX;                                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackVFXZOffset;                                         // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LoSTraceProfileName;                                      // 0x00B4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                           // 0x00C0(0x0030) (Edit)
	TArray<struct FSwimAttackTargetShipImpulseData>    ImpulseData;                                              // 0x00F0(0x0010) (Edit, ZeroConstructor)
	struct FAIDataProviderIntValue                     MinDamageHolesToApply;                                    // 0x0100(0x0030) (Edit)
	struct FAIDataProviderIntValue                     MaxDamageHolesToApply;                                    // 0x0130(0x0030) (Edit)
	int                                                LevelsOfHullDamage;                                       // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	class UClass*                                      DamageCauserType;                                         // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   PlayerBiteRadius;                                         // 0x0170(0x0030) (Edit)
	struct FKnockBackInfo                              KnockbackParams;                                          // 0x01A0(0x0050) (Edit)
	struct FAIDataProviderFloatValue                   PlayerBiteDamage;                                         // 0x01F0(0x0030) (Edit)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class AShip*                                       TargetShip;                                               // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SwimAttackTargetShip"));
		return ptr;
	}

};


// Class AthenaAI.BurrowEruptBase
// 0x0000 (0x03D0 - 0x03D0)
class ABurrowEruptBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BurrowEruptBase"));
		return ptr;
	}

};


// Class AthenaAI.AIAnimationStateId
// 0x0000 (0x0028 - 0x0028)
class UAIAnimationStateId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIAnimationStateId"));
		return ptr;
	}

};


// Class AthenaAI.SpawnerBehaviourStrategy
// 0x0020 (0x0048 - 0x0028)
class USpawnerBehaviourStrategy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SpawnerBehaviourStrategy"));
		return ptr;
	}

};


// Class AthenaAI.AICreatureCharacterMovementComponent
// 0x00C0 (0x0620 - 0x0560)
class UAICreatureCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0560(0x0008) MISSED OFFSET
	float                                              BlendSpeed;                                               // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateDisturbance;                                       // 0x056C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x056D(0x0003) MISSED OFFSET
	float                                              DisturbanceSize;                                          // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisturbanceVelocityScale;                                 // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrientationBlendSpeed;                                    // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrientationMaxPitch;                                      // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateOrientationFrequency;                               // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinStairAngle;                                            // 0x0584(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinStairVelocityDampen;                                   // 0x0588(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              SubscribedStairClimbStrategies;                           // 0x0590(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x80];                                      // 0x05A0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AICreatureCharacterMovementComponent"));
		return ptr;
	}

};


// Class AthenaAI.AICreatureCharacter
// 0x0220 (0x07F0 - 0x05D0)
class AAICreatureCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x05D0(0x0048) MISSED OFFSET
	float                                              DelayBeforeDestroying;                                    // 0x0618(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBeforeFadingOut;                                      // 0x061C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PickupTime;                                               // 0x0620(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TooltipDisplayOffset;                                     // 0x0624(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UActionStateMachineComponent*                ActionStateMachineComponent;                              // 0x0630(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActionStatePriorityTableData*               ActionStatePriorityTableData;                             // 0x0638(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActionStateCreatorDefinition;                             // 0x0640(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAthenaAIControllerParamsDataAsset*          AIControllerParams;                                       // 0x0648(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      InteractableComponent;                                    // 0x0650(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWaterHeightProviderComponent*               WaterHeightProviderComponent;                             // 0x0658(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitterComponent;                          // 0x0660(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class URewindComponent*                            RewindComponent;                                          // 0x0668(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActionRulesComponent*                       ActionRulesComponent;                                     // 0x0670(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x100];                                     // 0x0678(0x0100) MISSED OFFSET
	class UAICreatureCharacterMovementComponent*       AICreatureCharacterMovementComponent;                     // 0x0778(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      CurrentAIStrategy;                                        // 0x0780(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x68];                                      // 0x0788(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AICreatureCharacter"));
		return ptr;
	}


	void SetAIStrategy(class UClass* InStrategy);
	void OnRep_CurrentAIStrategy(class UClass* OldAIStrategy);
	void Multicast_DespawnRPC();
	class UClass* GetAIStrategy();
};


// Class AthenaAI.AthenaAICharacterPathFollowingComponent
// 0x0038 (0x02F0 - 0x02B8)
class UAthenaAICharacterPathFollowingComponent : public UPathFollowingComponent
{
public:
	float                                              ProportionOfTurnToMove;                                   // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAngleToTurnOnSpot;                                     // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachedGoalMaxSpeedToSlowDistanceFactor;                  // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AbortMoveMaxSpeedToSlowDistanceFactor;                    // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C8(0x0004) MISSED OFFSET
	float                                              MinSlowDownSpeed;                                         // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x02D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAICharacterPathFollowingComponent"));
		return ptr;
	}

};


// Class AthenaAI.AICreatureCharacterPathFollowingComponent
// 0x0030 (0x0320 - 0x02F0)
class UAICreatureCharacterPathFollowingComponent : public UAthenaAICharacterPathFollowingComponent
{
public:
	float                                              LandingAngle;                                             // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HopDistanceScale;                                         // 0x02F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumLandTime;                                          // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinStairAngle;                                            // 0x02FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinStairVelocityDampen;                                   // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	TArray<class UClass*>                              SubscribedStairClimbStrategies;                           // 0x0308(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AICreatureCharacterPathFollowingComponent"));
		return ptr;
	}

};


// Class AthenaAI.AICreatureMovementModifierInterface
// 0x0000 (0x0028 - 0x0028)
class UAICreatureMovementModifierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AICreatureMovementModifierInterface"));
		return ptr;
	}

};


// Class AthenaAI.AICreatureMovementModifierParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UAICreatureMovementModifierParamsDataAsset : public UDataAsset
{
public:
	float                                              TurnRateMultiplier;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlyingTurnRateMultiplier;                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseTighterTurningCircle;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseHighResNavMesh;                                        // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AICreatureMovementModifierParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.BehaviourTreeInterruptionInterface
// 0x0000 (0x0028 - 0x0028)
class UBehaviourTreeInterruptionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BehaviourTreeInterruptionInterface"));
		return ptr;
	}

};


// Class AthenaAI.ForcedIdleBehaviourInterface
// 0x0000 (0x0028 - 0x0028)
class UForcedIdleBehaviourInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.ForcedIdleBehaviourInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIDialogueStateProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UAIDialogueStateProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDialogueStateProviderInterface"));
		return ptr;
	}

};


// Class AthenaAI.SimpleDialogueStateProvider
// 0x0010 (0x0038 - 0x0028)
class USimpleDialogueStateProvider : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SimpleDialogueStateProvider"));
		return ptr;
	}

};


// Class AthenaAI.BountySpawnerAudioZonesInterface
// 0x0000 (0x0028 - 0x0028)
class UBountySpawnerAudioZonesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BountySpawnerAudioZonesInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIBountySpawner
// 0x0180 (0x0580 - 0x0400)
class UAIBountySpawner : public UAISpawner
{
public:
	float                                              MaximumDistanceToPerceiveOnSpawnsAfterFirstGroup;         // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	TArray<struct FAIBountySpawnerWaveGroup>           WaveGroups;                                               // 0x0408(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       TeamColor;                                                // 0x0418(0x0010) (Edit, ZeroConstructor)
	struct FWeightedProbabilityRange                   WavesPerRelocate;                                         // 0x0428(0x0020) (Edit)
	struct FWeightedProbabilityRange                   WaveSplitChance;                                          // 0x0448(0x0020) (Edit)
	TArray<float>                                      WaveSuicideTime;                                          // 0x0468(0x0010) (Edit, ZeroConstructor)
	float                                              WaveSuicideMinDist;                                       // 0x0478(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ImmediatelyPerceiveTargets;                               // 0x047C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2B];                                      // 0x047D(0x002B) MISSED OFFSET
	TArray<class AActor*>                              CrewMembers;                                              // 0x04A8(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              NonCrewMembersInRegion;                                   // 0x04B8(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              AllParticipatingPlayers;                                  // 0x04C8(0x0010) (ZeroConstructor)
	class UOverlapTriggerComponent*                    AudioZoneTriggerComponent;                                // 0x04D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x04E0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIBountySpawner"));
		return ptr;
	}

};


// Class AthenaAI.PostBountyAIPawnSpawnedAction
// 0x0000 (0x0028 - 0x0028)
class UPostBountyAIPawnSpawnedAction : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PostBountyAIPawnSpawnedAction"));
		return ptr;
	}

};


// Class AthenaAI.ApplyNameplateToBountyWaveSpawnedAction
// 0x0038 (0x0060 - 0x0028)
class UApplyNameplateToBountyWaveSpawnedAction : public UPostBountyAIPawnSpawnedAction
{
public:
	struct FText                                       AIName;                                                   // 0x0028(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.ApplyNameplateToBountyWaveSpawnedAction"));
		return ptr;
	}

};


// Class AthenaAI.AIFaunaSpawner
// 0x0148 (0x0548 - 0x0400)
class UAIFaunaSpawner : public UAISpawner
{
public:
	struct FAIFaunaSpawnerWave                         FaunaWave;                                                // 0x0400(0x0110) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0510(0x0010) MISSED OFFSET
	class AActor*                                      FaunaLeader;                                              // 0x0520(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0528(0x0010) MISSED OFFSET
	TArray<class AActor*>                              PlayersInSpawnArea;                                       // 0x0538(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIFaunaSpawner"));
		return ptr;
	}


	void SpawnFaunaGroup();
};


// Class AthenaAI.AthenaAIControllerBase
// 0x0158 (0x0618 - 0x04C0)
class AAthenaAIControllerBase : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x04C0(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIControllerBase"));
		return ptr;
	}


	void SetNamedControllerParam(const struct FName& ParamName, float Value);
	struct FWeightedProbabilityRangeOfRanges FindNamedWeightedRangesControllerParam(const struct FName& ParamName);
	float FindNamedControllerParam(const struct FName& ParamName);
	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
};


// Class AthenaAI.AthenaAIController
// 0x02D8 (0x08F0 - 0x0618)
class AAthenaAIController : public AAthenaAIControllerBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0618(0x0024) MISSED OFFSET
	float                                              CurrentTargetPerceivedNotVisibleAge;                      // 0x063C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0640(0x0040) MISSED OFFSET
	class UAISenseConfig_Sight*                        SightConfig;                                              // 0x0680(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAISenseConfig_Hearing*                      HearingConfig;                                            // 0x0688(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAISenseConfig_Damage*                       DamageSenseConfig;                                        // 0x0690(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0698(0x0048) MISSED OFFSET
	TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides;                          // 0x06E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x1D8];                                     // 0x06F0(0x01D8) MISSED OFFSET
	class AActor*                                      CurrentNotSeenPerceivedActor;                             // 0x08C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      PendingSpawnTriggerActor;                                 // 0x08D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x08D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIController"));
		return ptr;
	}


	void StopBehaviourLogic();
	void SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense);
	void RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor);
	void OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors);
	void OnNewlySpawned();
	void OnFinishDespawn();
	bool IsActorPerceived(class AActor* TargetActor);
	class AActor* GetTargetActor();
	class UAthenaAIPerceptionComponent* GetAthenaAIPerceptionComponent();
	void GetAllSeenActors(TArray<class AActor*>* SeenActors);
	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
};


// Class AthenaAI.AthenaFaunaAIController
// 0x0198 (0x0A88 - 0x08F0)
class AAthenaFaunaAIController : public AAthenaAIController
{
public:
	float                                              MaxTimeBetweenThreatDetermination;                        // 0x08F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultControlRotationInterpSpeed;                        // 0x08F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAIStategyControllerMovementMod>     StrategyControllerMovementMods;                           // 0x08F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinAgentHalfHeightPctOverride;                            // 0x0908(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x090C(0x0004) MISSED OFFSET
	class UFaunaAIContollerParamsDataAsset*            FaunaDataAsset;                                           // 0x0910(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      CarrierActor;                                             // 0x0918(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0920(0x00A8) MISSED OFFSET
	class AActor*                                      HighestDangerActor;                                       // 0x09C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x88];                                      // 0x09D0(0x0088) MISSED OFFSET
	class UFaunaAIPlayerTracker*                       PlayerTracker;                                            // 0x0A58(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0A60(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaFaunaAIController"));
		return ptr;
	}


	void SetDormancyCheckingEnabled(bool InDormancyCheckingEnabledInAutomation);
	void LeaderDestroyed(class AActor* Actor);
	class AActor* GetLeader();
	float GetCourage();
	class UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
};


// Class AthenaAI.CatchFaunaConditionalStatTrigger
// 0x0000 (0x0030 - 0x0030)
class UCatchFaunaConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.CatchFaunaConditionalStatTrigger"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_LeaderFromBlackboard
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_LeaderFromBlackboard : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_LeaderFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_Threat
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Threat : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_Threat"));
		return ptr;
	}

};


// Class AthenaAI.Fauna
// 0x0340 (0x0B30 - 0x07F0)
class AFauna : public AAICreatureCharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07F0(0x0008) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x07F8(0x0038) (Edit, DisableEditOnInstance)
	class UClass*                                      FaunaSpecies;                                             // 0x0830(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FaunaBreed;                                               // 0x0838(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HeadOffset;                                               // 0x0840(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MountedScale;                                             // 0x084C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearToSurfaceDistance;                                    // 0x0858(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartDrowningTimePercentage;                              // 0x085C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrowningDeathTimeMin;                                     // 0x0860(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrowningDeathTimeMax;                                     // 0x0864(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentageStarvedToChangeAnimation;                       // 0x0868(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x086C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     HitImpactParticleSystem;                                  // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     DeathParticleSystem;                                      // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     PutInCrateParticleSystem;                                 // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PutInCrateSoundCue;                                       // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 TookDamageSoundCue;                                       // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AgitationStartedSoundCue;                                 // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AgitationStoppedSoundCue;                                 // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CalmStartedSoundCue;                                      // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CalmStoppedSoundCue;                                      // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     BreathBubblesParticleSystem;                              // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BreathBubblesSocketName;                                  // 0x08C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UnderwaterRTPCName;                                       // 0x08C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        OnFeedingForceFeedbackEffect;                             // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMountableComponent*                         MountableComponent;                                       // 0x08D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UHealthComponent*                            HealthComponent;                                          // 0x08E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDamageableComponent*                        DamageableComponent;                                      // 0x08E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         AttackHitVolume;                                          // 0x08F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFaunaAnimationData*                         Animations;                                               // 0x08F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDitherComponent*                            DitherComponent;                                          // 0x0900(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVenomableComponent*                         VenomableComponent;                                       // 0x0908(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    StatusEffectManagerComponent;                             // 0x0910(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAthenaAIControllerParamsDataAsset*          AIControllerParamsWhenInCrate;                            // 0x0918(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPeriodicAINoiseEventComponent*              PeriodicAINoiseEventComponent;                            // 0x0920(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    FaunaAgitationResponseDelegate;                           // 0x0928(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FaunaDirectedAgitationResponseDelegate;                   // 0x0938(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                AgitationResponseChance;                                  // 0x0948(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AgitationResponseTestFrequencyMin;                        // 0x094C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AgitationResponseTestFrequencyMax;                        // 0x0950(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumFailedAgitationResponseTests;                       // 0x0954(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AgitationResponseVFXDelay;                                // 0x0958(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AgitationResponseRange;                                   // 0x095C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     AgitationResponseParticleSystem;                          // 0x0960(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgitationResponseRangeParticleSystemAngle;                // 0x0968(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     AgitationCollisionChannel;                                // 0x096C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopMovementWhenAgitated;                                 // 0x096D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x096E(0x0002) MISSED OFFSET
	float                                              ApproximateSpitTravelTime;                                // 0x0970(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopMovementWhenCalm;                                     // 0x0974(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	float                                              TurningSpringAcceleration;                                // 0x0978(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningSpringMaxVelocity;                                 // 0x097C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnResetDelay;                                           // 0x0980(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PivotPointOffset;                                         // 0x0984(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldTurn;                                               // 0x0990(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0991(0x0007) MISSED OFFSET
	class UFeedingComponent*                           FeedingComponent;                                         // 0x0998(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UFaunaMovementComponent*                     FaunaMovementComponent;                                   // 0x09A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              TimeUntilDrowned;                                         // 0x09A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RandomAnimationSeed;                                      // 0x09AC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x09B0(0x000C) MISSED OFFSET
	bool                                               Drowned;                                                  // 0x09BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x09BD(0x0002) MISSED OFFSET
	TEnumAsByte<EFaunaCratedState>                     CratedState;                                              // 0x09BF(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFaunaInWaterState>                    InWaterState;                                             // 0x09C0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	class AActor*                                      Crate;                                                    // 0x09C8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BreathBubblesParticleSystemComponent;                     // 0x09D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DrowningDeathTime;                                        // 0x09D8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayingStarvingAnim;                                    // 0x09DC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsAgitated;                                               // 0x09DD(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsCalm;                                                   // 0x09DE(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x09DF(0x0001) MISSED OFFSET
	float                                              TargetTurnAngle;                                          // 0x09E0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x124];                                     // 0x09E4(0x0124) MISSED OFFSET
	class UVenomComponent*                             VenomComponent;                                           // 0x0B08(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData09[0x20];                                      // 0x0B10(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.Fauna"));
		return ptr;
	}


	void TestingSetWaterState(TEnumAsByte<EFaunaInWaterState> NewInState);
	void OnRep_TargetTurnAngle();
	void OnRep_IsPlayingStarvingAnim();
	void OnRep_IsCalm();
	void OnRep_IsAgitated();
	void OnRep_InWaterState();
	void OnRep_CratedState(TEnumAsByte<EFaunaCratedState> PreviousCratedState);
	void Multicast_PlayPutInCrateEffectsRPC(class AActor* Crate);
	void Multicast_JustBeenFedRPC(class AActor* FedBy);
	void Multicast_HightlightLeader(bool bIsLeader);
	void GenerateNewRandomAnimationSeed();
	void ActivateResponseRPC(float InTargetTurnAngle);
};


// Class AthenaAI.FaunaAIPlayerTracker
// 0x0020 (0x0048 - 0x0028)
class UFaunaAIPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.FaunaAIPlayerTracker"));
		return ptr;
	}

};


// Class AthenaAI.FaunaMovementComponent
// 0x0000 (0x0620 - 0x0620)
class UFaunaMovementComponent : public UAICreatureCharacterMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.FaunaMovementComponent"));
		return ptr;
	}

};


// Class AthenaAI.AIItemParameterInterface
// 0x0000 (0x0028 - 0x0028)
class UAIItemParameterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIItemParameterInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset
// 0x0060 (0x0088 - 0x0028)
class UAthenaAIControllerSharedParamValuesDataAsset : public UDataAsset
{
public:
	bool                                               OverrideMeshScale;                                        // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              MeshScale;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideCurrentTargetPerceivedNotVisibleAge;              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              CurrentTargetPerceivedNotVisibleAge;                      // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides;                          // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FAthenaAIControllerHealthCustomisation      HealthCustomisationValues;                                // 0x0048(0x000C) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FAthenaAIControllerParamValue>       InitialBlackboardValues;                                  // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                    // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerWeightedRangesParamValue> NamedWeightedRangesControllerParams;                      // 0x0078(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerParamsDataAsset
// 0x00D8 (0x0100 - 0x0028)
class UAthenaAIControllerParamsDataAsset : public UDataAsset
{
public:
	struct FAthenaAIControllerSenseSettings            DefaultSenseSettings;                                     // 0x0028(0x0014) (Edit)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultPerceivedNotVisibleAge;                            // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideTeamID;                                           // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAthenaAITeam>                         TeamID;                                                   // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	float                                              TargetSwitchScoreTolerance;                               // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<float>                                      TargetLoadWeightingBias;                                  // 0x0050(0x0010) (Edit, ZeroConstructor)
	float                                              DistanceToStartTargetPickingDecrease;                     // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetPickingDistScoreAtMaxSightRange;                    // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VisionAngleToStartTargetPickingDecrease;                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetPickingFacingScoreAtMaxPeripheralVisionAngle;       // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseDamageAsFactorInTargetScore;                           // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FAthenaAIControllerDamageTargetScoreFromPerceivedTarget DamageTargetScores;                                       // 0x0074(0x0014) (Edit)
	TArray<class UAthenaAIControllerSharedParamValuesDataAsset*> SharedParamValues;                                        // 0x0088(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideMeshScale;                              // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              IndividualMeshScale;                                      // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAthenaAIControllerHealthCustomisation      IndividualHealthCustomisationValues;                      // 0x00A0(0x000C) (Edit)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<struct FAthenaAIControllerParamValue>       IndividualInitialBlackboardValues;                        // 0x00B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerParamValue>       IndividualNamedControllerParams;                          // 0x00C0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerWeightedRangesParamValue> IndividualNamedWeightedRangesControllerParams;            // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerSenseSettingOverride> IndividualAIStrategySenseSettingOverrides;                // 0x00E0(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideCurrentTargetPerceivedNotVisibleAge;    // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              IndividualCurrentTargetPerceivedNotVisibleAge;            // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FeatureName;                                              // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIControllerParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset
// 0x00D0 (0x0158 - 0x0088)
class UAthenaAICharacterControllerSharedParamValuesDataAsset : public UAthenaAIControllerSharedParamValuesDataAsset
{
public:
	bool                                               OverrideUseRVOAvoidance;                                  // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseRVOAvoidance;                                          // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverridePrioritiseInteractablesBeforeEnemies;             // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PrioritiseInteractablesBeforeEnemies;                     // 0x008B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                    // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStrategyMovementProperties>       AIStrategyMovementProperties;                             // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> ItemCategoryAIStrategyMovementPropertiesOverrides;        // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAthenaAICharacterCannonTargetingParams     CannonTargetingParams;                                    // 0x00B8(0x0010) (Edit)
	TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> WieldedItemProjectileEffectivenessProperties;             // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> WieldedItemOverrideNamedControllerParams;                 // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIItemParamValue>             NamedItemParams;                                          // 0x00E8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories;                           // 0x00F8(0x0010) (Edit, ZeroConstructor)
	TArray<class UAthenaAIAbilityParams*>              AIAbilityParams;                                          // 0x0108(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<struct FAthenaAIEngageEnemyData>            NonItemEngageOptions;                                     // 0x0118(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       AnimationDataOverrideAsset;                               // 0x0128(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       CustomAnimationAsset;                                     // 0x0138(0x0010) (Edit, ZeroConstructor)
	bool                                               OverrideNoInitialItem;                                    // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NoInitialItem;                                            // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideBeginFleeing;                                     // 0x014A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               BeginFleeing;                                             // 0x014B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	class UEnvQuery*                                   FleeingEQS;                                               // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAICharacterControllerParamsDataAsset
// 0x00F8 (0x01F8 - 0x0100)
class UAthenaAICharacterControllerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	bool                                               IndividualOverrideUseRVOAvoidance;                        // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualUseRVOAvoidance;                                // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualOverridePrioritiseInteractablesBeforeEnemies;   // 0x0102(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualPrioritiseInteractablesBeforeEnemies;           // 0x0103(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class UCurveFloat*                                 IndividualDistanceInMToCannonShotHitChanceCurve;          // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStrategyMovementProperties>       IndividualAIStrategyMovementProperties;                   // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> IndividualItemCategoryAIStrategyMovementPropertiesOverrides;// 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAthenaAICharacterCannonTargetingParams     IndividualCannonTargetingParams;                          // 0x0130(0x0010) (Edit)
	TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> IndividualWieldedItemProjectileEffectivenessProperties;   // 0x0140(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> IndividualWieldedItemOverrideNamedControllerParams;       // 0x0150(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIItemParamValue>             IndividualNamedItemParams;                                // 0x0160(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> IndividualSpawnItemDescForItemCategories;                 // 0x0170(0x0010) (Edit, ZeroConstructor)
	bool                                               UseDamageBasedAbilityStages;                              // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0181(0x0007) MISSED OFFSET
	TArray<float>                                      HealthStages;                                             // 0x0188(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIAbilityDamageStage>         IndividualDamageBasedAIAbilityStages;                     // 0x0198(0x0010) (Edit, ZeroConstructor)
	TArray<class UAthenaAIAbilityParams*>              IndividualAIAbilityParams;                                // 0x01A8(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<struct FAthenaAIEngageEnemyData>            IndividualNonItemEngageOptions;                           // 0x01B8(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       IndividualAnimationDataOverrideAsset;                     // 0x01C8(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       IndividualCustomAnimationAsset;                           // 0x01D8(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideNoInitialItem;                          // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualNoInitialItem;                                  // 0x01E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualOverrideBeginFleeing;                           // 0x01EA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualBeginFleeing;                                   // 0x01EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	class UEnvQuery*                                   IndividualFleeingEQS;                                     // 0x01F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAICharacterControllerParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAmmoDataAsset
// 0x00A8 (0x00D0 - 0x0028)
class UAthenaAIAmmoDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET
	TArray<struct FAthenaAICharacterControllerWeightedAmmoType> AmmoWeights;                                              // 0x00B8(0x0010) (Edit, ZeroConstructor)
	struct FName                                       FeatureName;                                              // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAmmoDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AIAmmoRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIAmmoRankProgression : public UDataAsset
{
public:
	TArray<struct FAIAmmoRankMapping>                  RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIAmmoRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AIAmmoProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIAmmoProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAIAmmoRankProgression*>              AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIAmmoProgressionTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIAmmoTypeList
// 0x0018 (0x0040 - 0x0028)
class UAIAmmoTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIAmmoDataAsset*>              AllAmmo;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIAmmoDataAsset*                      DefaultAmmo;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIAmmoTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIAnimationStateInterface
// 0x0000 (0x0028 - 0x0028)
class UAIAnimationStateInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIAnimationStateInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIChargeUpInterruptedStatus
// 0x0000 (0x0030 - 0x0030)
class UAIChargeUpInterruptedStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIChargeUpInterruptedStatus"));
		return ptr;
	}

};


// Class AthenaAI.AIClassId
// 0x0000 (0x0028 - 0x0028)
class UAIClassId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIClassId"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsDesc
// 0x0008 (0x0030 - 0x0028)
class UAIPartsDesc : public UDataAsset
{
public:
	struct FAIPartId                                   AIPartId;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsDesc"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsCategory
// 0x0040 (0x0068 - 0x0028)
class UAIPartsCategory : public UDataAsset
{
public:
	TArray<class UAIPartsDesc*>                        Parts;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate)
	int                                                NextPartsIndex;                                           // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               UseWeightedArray;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FName                                       UseWeightedArrayFeatureName;                              // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FWeightedProbabilityRange                   WeightedArray;                                            // 0x0048(0x0020) (Edit, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsCategory"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPartsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsServiceInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIEncounterServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterServiceInterface"));
		return ptr;
	}


	void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
	void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
	void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
	void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
	void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
};


// Class AthenaAI.AIClassIdTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIClassIdTypeList : public UDataAsset
{
public:
	TArray<class UClass*>                              AllClassIds;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIClassIdTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIColorVariantPool
// 0x0010 (0x0038 - 0x0028)
class UAIColorVariantPool : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               AvailableColors;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIColorVariantPool"));
		return ptr;
	}

};


// Class AthenaAI.AICombatEncounterInterface
// 0x0000 (0x0028 - 0x0028)
class UAICombatEncounterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AICombatEncounterInterface"));
		return ptr;
	}


	void OnVulnerabilityStateEntered();
};


// Class AthenaAI.AIDebugVisualisationComponent
// 0x0050 (0x0118 - 0x00C8)
class UAIDebugVisualisationComponent : public UActorComponent
{
public:
	TArray<struct FAIDebugVisualisationLine>           Lines;                                                    // 0x00C8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationBox>            Boxes;                                                    // 0x00D8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationCylinder>       Cylinders;                                                // 0x00E8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationSphere>         Spheres;                                                  // 0x00F8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationCone>           Cones;                                                    // 0x0108(0x0010) (Edit, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDebugVisualisationComponent"));
		return ptr;
	}

};


// Class AthenaAI.AIElectricProjectileInterruptedStatus
// 0x0000 (0x0030 - 0x0030)
class UAIElectricProjectileInterruptedStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIElectricProjectileInterruptedStatus"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipe
// 0x0070 (0x0098 - 0x0028)
class UAIEncounterGenerationRecipe : public UDataAsset
{
public:
	TArray<struct FAIFormVarietyEntry>                 Forms;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       SkillsetProgression;                                      // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       ItemDropProgression;                                      // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FTargetSkillsetProgressionPair              TargetSkillsetOverrides;                                  // 0x0058(0x0020) (Edit)
	struct FTargetItemDropProgressionPair              TargetItemDropOverrides;                                  // 0x0078(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterGenerationRecipe"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipeRankOrderList
// 0x0020 (0x0048 - 0x0028)
class UAIEncounterGenerationRecipeRankOrderList : public UDataAsset
{
public:
	TArray<class UAIEncounterGenerationRecipe*>        Recipes;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList> FeatureBasedRecipeLists;                                  // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterGenerationRecipeRankOrderList"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipeTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIEncounterGenerationRecipeTypeList : public UDataAsset
{
public:
	TArray<class UAIEncounterGenerationRecipe*>        AllRecipes;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterGenerationRecipeTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIEncounterGenerationServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterGenerationServiceInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationService
// 0x0088 (0x0458 - 0x03D0)
class AAIEncounterGenerationService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	class UAIEncounterGenerationRecipeTypeList*        GenerationRecipes;                                        // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UAIEncounterServiceInterface> EncounterService;                                         // 0x03E0(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x03F0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterGenerationService"));
		return ptr;
	}

};


// Class AthenaAI.AIFormRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIFormRankProgression : public UDataAsset
{
public:
	TArray<struct FAIFormRankMapping>                  RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIFormRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AIFormProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIFormProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAIFormRankProgression*>              AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIFormProgressionTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIFormTypeList
// 0x0018 (0x0040 - 0x0028)
class UAIFormTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIFormDataAsset*>              AllForms;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIFormDataAsset*                      DefaultForm;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIFormTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AILoadoutProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAILoadoutProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAILoadoutRankProgression*>           AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AILoadoutProgressionTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AILoadoutTypeList
// 0x0010 (0x0038 - 0x0028)
class UAILoadoutTypeList : public UDataAsset
{
public:
	TArray<class ULoadoutAsset*>                       AllLoadouts;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AILoadoutTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AISkillsetProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAISkillsetProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAISkillsetRankProgression*>          AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISkillsetProgressionTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AISkillsetTypeList
// 0x0010 (0x0038 - 0x0028)
class UAISkillsetTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIControllerParamsDataAsset*>  AllSkillsets;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISkillsetTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsCategoryTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIPartsCategoryTypeList : public UDataAsset
{
public:
	TArray<class UAIPartsCategory*>                    AllPartsCategories;                                       // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsCategoryTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterService
// 0x03D0 (0x07A0 - 0x03D0)
class AAIEncounterService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	TArray<struct FAIPartsCategoryMapping>             DefaultPartsCategories;                                   // 0x03D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIPartsCategoryFormMapping>         FormPartsCategories;                                      // 0x03E8(0x0010) (Edit, ZeroConstructor)
	class UAIAmmoTypeList*                             Ammo;                                                     // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIAmmoProgressionTypeList*                  AmmoProgressions;                                         // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIFormTypeList*                             Forms;                                                    // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIFormProgressionTypeList*                  FormProgressions;                                         // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAILoadoutTypeList*                          Loadouts;                                                 // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAILoadoutProgressionTypeList*               LoadoutProgressions;                                      // 0x0420(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISkillsetTypeList*                         Skillsets;                                                // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISkillsetProgressionTypeList*              SkillsetProgressions;                                     // 0x0430(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIClassIdTypeList*                          ClassIds;                                                 // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIPartsCategoryTypeList*                    PartsCategories;                                          // 0x0440(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIColorVariantPool*                         TeamColors;                                               // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIItemDropComponentList*                    AIItemDropSpawners;                                       // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIItemDropComponentRankProgressionList*     AIItemDropSpawnerProgressions;                            // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UAIEncounterSettings*>                DebugSpawnableEncounterSettings;                          // 0x0460(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x330];                                     // 0x0470(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterService"));
		return ptr;
	}


	void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
	void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
	void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
	void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
	void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
};


// Class AthenaAI.AISkillsetRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAISkillsetRankProgression : public UDataAsset
{
public:
	TArray<struct FAISkillsetRankMapping>              RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISkillsetRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettings
// 0x0038 (0x0060 - 0x0028)
class UAIEncounterSettings : public UDataAsset
{
public:
	TAssetPtr<class UClass>                            PawnClass;                                                // 0x0028(0x0020) (Edit)
	class UClass*                                      AIClass;                                                  // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       TeamColor;                                                // 0x0050(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterSettings"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettingsFixed
// 0x00B0 (0x0110 - 0x0060)
class UAIEncounterSettingsFixed : public UAIEncounterSettings
{
public:
	struct FStringAssetReference                       SpecificSkillset;                                         // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Loadout;                                                  // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Form;                                                     // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Ammo;                                                     // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FName                                       DioramaRole;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       LocalisableName;                                          // 0x00A8(0x0038) (Edit)
	struct FEncounterParams                            EncounterTrackingParams;                                  // 0x00E0(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            ItemDropComponentClass;                                   // 0x00F0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterSettingsFixed"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettingsRankProgression
// 0x0060 (0x00C0 - 0x0060)
class UAIEncounterSettingsRankProgression : public UAIEncounterSettings
{
public:
	struct FStringAssetReference                       SkillsetProgression;                                      // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       LoadoutProgression;                                       // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       FormProgression;                                          // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       AmmoProgression;                                          // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       ItemDropComponentProgression;                             // 0x00A0(0x0010) (Edit, ZeroConstructor)
	struct FEncounterParams                            EncounterTrackingParams;                                  // 0x00B0(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterSettingsRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AIIdentifierOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UAIIdentifierOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIIdentifierOwnerInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIInteractableInterface
// 0x0000 (0x0028 - 0x0028)
class UAIInteractableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIInteractableInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIInteractableOperatorInterface
// 0x0000 (0x0028 - 0x0028)
class UAIInteractableOperatorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIInteractableOperatorInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIItemDropComponentList
// 0x0010 (0x0038 - 0x0028)
class UAIItemDropComponentList : public UDataAsset
{
public:
	TArray<TAssetPtr<class UClass>>                    AllSpawners;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIItemDropComponentList"));
		return ptr;
	}

};


// Class AthenaAI.AIItemDropComponentRankProgressionList
// 0x0010 (0x0038 - 0x0028)
class UAIItemDropComponentRankProgressionList : public UDataAsset
{
public:
	TArray<class UAIItemSpawnRankProgression*>         AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIItemDropComponentRankProgressionList"));
		return ptr;
	}

};


// Class AthenaAI.AIItemSpawnRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIItemSpawnRankProgression : public UDataAsset
{
public:
	TArray<struct FAIDropSpawnerRankMapping>           RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIItemSpawnRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AILoadoutInterface
// 0x0000 (0x0028 - 0x0028)
class UAILoadoutInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AILoadoutInterface"));
		return ptr;
	}

};


// Class AthenaAI.AILoadoutRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAILoadoutRankProgression : public UDataAsset
{
public:
	TArray<struct FAILoadoutRankMapping>               RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AILoadoutRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AILoadoutWithNonStorableInterface
// 0x0000 (0x0028 - 0x0028)
class UAILoadoutWithNonStorableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AILoadoutWithNonStorableInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIManagerBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIManagerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIManagerBlueprintFunctionLibrary"));
		return ptr;
	}


	static class AItemInfo* SpawnItemFromAI(class APawn* Pawn, class UClass* ItemDesc);
	static int GetFrameCounter();
	static void AddNameplateToAIWithLocalisedName(class AActor* Actor, const struct FText& DisplayName);
	static void AddNameplateToAI(class AActor* Actor, const class FString& DisplayName);
};


// Class AthenaAI.AIManagerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIManagerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIManagerServiceInterface"));
		return ptr;
	}


	void StartDespawnAI(class APawn* AIActor, TEnumAsByte<ECharacterDeathType> DeathType);
	int GetNumOfSpawnedPawns();
};


// Class AthenaAI.AthenaAITypeListDataAsset
// 0x0020 (0x0048 - 0x0028)
class UAthenaAITypeListDataAsset : public UDataAsset
{
public:
	TArray<struct FAITypeData>                         AITypes;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FStringClassReference>               AdditionalAIActors;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAITypeListDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnWaveSequence
// 0x0018 (0x0040 - 0x0028)
class UAISpawnWaveSequence : public UDataAsset
{
public:
	TArray<struct FAISpawnerWave>                      Waves;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FName                                       FeatureName;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnWaveSequence"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnWaveSequenceRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAISpawnWaveSequenceRankProgression : public UDataAsset
{
public:
	TArray<struct FAISpawnWaveSequenceRankMapping>     RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnWaveSequenceRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset
// 0x0040 (0x0068 - 0x0028)
class UAIWeightedProbabilityRangeOfRangesAsset : public UDataAsset
{
public:
	float                                              RespawnChance;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           RespawnTimerRanges;                                       // 0x0030(0x0030) (Edit)
	struct FName                                       FeatureName;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset"));
		return ptr;
	}

};


// Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIWeightedProbabilityRangeOfRangesRankProgression : public UDataAsset
{
public:
	TArray<struct FAIWeightedProbabilityRangeOfRangesRankMapping> RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AIPlayerTrackerObservedInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerTrackerObservedInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPlayerTrackerObservedInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIPlayerTrackerObserverInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerTrackerObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPlayerTrackerObserverInterface"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnRequestResultLoggerInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnRequestResultLoggerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnRequestResultLoggerInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAISettings
// 0x00A0 (0x00D8 - 0x0038)
class UAthenaAISettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       AITypesAsset;                                             // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AISpawnContextListAsset;                                  // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	int                                                FallbackAIDifficultyRank;                                 // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxNumOfSpawnedActors;                                    // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxPlayerEquivalentAIsPerRegion;                          // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxWorldAICostUnitsForWorld;                              // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AIRegionCostUnitsForPlayer;                               // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterNetRelevancy;                                    // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterRegionDensityCheckTimer;                         // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterWorldDensityCheckTimer;                          // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DistanceToPlayerToRaiseSpawnPriority;                     // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRetryingCanSpawnRequestTime;                           // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRetryingCanSpawnRequestTime;                           // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRetryingLocationCheckTime;                             // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRetryingLocationCheckTime;                             // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterAINoiseTickInterval;                             // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PeriodicAINoiseComponentTickInterval;                     // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FaunaPlayerProximityDormancyRange;                        // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FaunaPlayerProximityTickTime;                             // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FaunaTimeOutOfPlayerProximityForDormancy;                 // 0x009C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultNavAgentCapsuleRadius;                             // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultNavAgentCapsuleHalfHeight;                         // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinDelayBeforeRetryingUnsuccessfulWave;                   // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxDelayBeforeRetryingUnsuccessfulWave;                   // 0x00AC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FStringAssetReference                       AIEncounterServiceAssetClassFileLocation;                 // 0x00B0(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AIEncounterGenerationServiceAssetClassFileLocation;       // 0x00C0(0x0010) (Edit, ZeroConstructor, Config)
	struct FName                                       AICharacterWaterInteractionCollisionProfileName;          // 0x00D0(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAISettings"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextId
// 0x0008 (0x0030 - 0x0028)
class UAISpawnContextId : public UObject
{
public:
	int                                                Weighting;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnContextId"));
		return ptr;
	}

};


// Class AthenaAI.AIManagerService
// 0x0668 (0x0A38 - 0x03D0)
class AAIManagerService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x03D0(0x0100) MISSED OFFSET
	TArray<class UClass*>                              LoadedAIPawnClasses;                                      // 0x04D0(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              LoadedAIItemDropComponentClasses;                         // 0x04E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET
	class AAmbientWaterSpawnerManager*                 AmbientWaterSpawnerManager;                               // 0x04F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x330];                                     // 0x0500(0x0330) MISSED OFFSET
	TArray<class UAIPlayerTracker*>                    PlayerTrackers;                                           // 0x0830(0x0010) (ZeroConstructor)
	TArray<struct FCustomPlayersAITrackerData>         CustomPlayersTrackerDatas;                                // 0x0840(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x100];                                     // 0x0850(0x0100) MISSED OFFSET
	TArray<class UAISpawner*>                          SpawnersPendingShutdown;                                  // 0x0950(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0xA8];                                      // 0x0960(0x00A8) MISSED OFFSET
	class UAthenaAITypeListDataAsset*                  AITypeList;                                               // 0x0A08(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAISpawnContextList*                         AISpawnContextList;                                       // 0x0A10(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0A18(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIManagerService"));
		return ptr;
	}


	void TickService(float DeltaSeconds);
	void StartDespawnAI(class APawn* AIActor, TEnumAsByte<ECharacterDeathType> DeathType);
};


// Class AthenaAI.DebugAIManagerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugAIManagerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.DebugAIManagerServiceInterface"));
		return ptr;
	}


	void SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors);
	void SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion);
	void SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld);
	void SetIgnoreCharacterLimits(bool Ignore);
	void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority);
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
	bool BlockAIAbility(class UClass* InExclusive, bool InBlockState);
};


// Class AthenaAI.DebugAIManagerService
// 0x0100 (0x0B38 - 0x0A38)
class ADebugAIManagerService : public AAIManagerService
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0A38(0x00F0) MISSED OFFSET
	TArray<class UClass*>                              BlockedAIAbilities;                                       // 0x0B28(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.DebugAIManagerService"));
		return ptr;
	}


	void SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors);
	void SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion);
	void SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld);
	void SetIgnoreCharacterLimits(bool Ignore);
	void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority);
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
	bool BlockAIAbility(class UClass* InExclusive, bool InBlockState);
};


// Class AthenaAI.AINameplateComponent
// 0x0160 (0x0440 - 0x02E0)
class UAINameplateComponent : public UNameplateComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	float                                              VisibleFromWorldDistance;                                 // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibleUntilWorldDistance;                                // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibleAfterDeathDuration;                                // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x02F8(0x0038) (Net)
	struct FText                                       DisplayName;                                              // 0x0330(0x0038) (Net)
	class FString                                      DisplayNameAsString;                                      // 0x0368(0x0010) (Net, ZeroConstructor)
	class FString                                      DebugDisplayText;                                         // 0x0378(0x0010) (Net, ZeroConstructor)
	bool                                               VisibilityDisabled;                                       // 0x0388(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB7];                                      // 0x0389(0x00B7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AINameplateComponent"));
		return ptr;
	}


	void OnRep_Title();
	void OnRep_DisplayNameAsString();
	void OnRep_DisplayName();
	void OnRep_DebugDisplayText();
};


// Class AthenaAI.AINoiseFireInstigator
// 0x0008 (0x03D8 - 0x03D0)
class AAINoiseFireInstigator : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AINoiseFireInstigator"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsService
// 0x0018 (0x0040 - 0x0028)
class UAIPartsService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAIPartsCategoryTypeList*                    PartsCategoriesList;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIColorVariantPool*                         TeamColors;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsService"));
		return ptr;
	}

};


// Class AthenaAI.AIPartCustomizationInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPartCustomizationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartCustomizationInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIPartIdListingAsset
// 0x0010 (0x0038 - 0x0028)
class UAIPartIdListingAsset : public UDataAsset
{
public:
	TArray<struct FAIPartIdNumVariantInfo>             AIPartIdsVariantInfo;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartIdListingAsset"));
		return ptr;
	}

};


// Class AthenaAI.MeshMemoryConstraintsAIPartsDesc
// 0x0050 (0x0080 - 0x0030)
class UMeshMemoryConstraintsAIPartsDesc : public UAIPartsDesc
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FStringAssetReference                       Mesh;                                                     // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            CachedMeshResourceSize;                                   // 0x0048(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UClass*                                      MeshFallbackCategory;                                     // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BudgetToCountMemoryAgainstIfNoFallback;                   // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FStringAssetReference>               FallbackOverrideMaterials;                                // 0x0070(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.MeshMemoryConstraintsAIPartsDesc"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsRetrievalInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPartsRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsRetrievalInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsRetrievalComponent
// 0x00A8 (0x0170 - 0x00C8)
class UAIPartsRetrievalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UAIPartsCategory*                            PartsCategory;                                            // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FReplicatedAIPartsData                      ReplicatedAIPartsData;                                    // 0x00D8(0x0018) (Net)
	unsigned char                                      UnknownData01[0x80];                                      // 0x00F0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsRetrievalComponent"));
		return ptr;
	}


	void RequestNewAIParts(class UAIPartsCategory* AssignedPartsCategory, int PartsIndexToUse, int TeamColorIndex);
	void OnRep_ReplicatedAIPartsData();
};


// Class AthenaAI.AIPawnInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPawnInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIPawnTurnActiveInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPawnTurnActiveInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPawnTurnActiveInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIProximityPlayerTracker
// 0x01E0 (0x0228 - 0x0048)
class UAIProximityPlayerTracker : public UAISpawnerPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0048(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIProximityPlayerTracker"));
		return ptr;
	}

};


// Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator
// 0x0038 (0x0080 - 0x0048)
class UFilterFirstPlayerEnterPlayerTrackerDecorator : public UAISpawnerPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator"));
		return ptr;
	}

};


// Class AthenaAI.AIProjectileInterface
// 0x0000 (0x0028 - 0x0028)
class UAIProjectileInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIProjectileInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIRegionInterface
// 0x0000 (0x0028 - 0x0028)
class UAIRegionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIRegionInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIRegionComponent
// 0x0070 (0x0320 - 0x02B0)
class UAIRegionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	bool                                               UpdateRegionPosition;                                     // 0x02B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	struct FName                                       NavMeshAgentType;                                         // 0x02BC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RegionRadius;                                             // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnLocationGroup>                 SpawnLocationGroups;                                      // 0x02C8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x48];                                      // 0x02D8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIRegionComponent"));
		return ptr;
	}

};


// Class AthenaAI.AIShipInterface
// 0x0000 (0x0028 - 0x0028)
class UAIShipInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIShipInterface"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnContextContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnContextContainerInterface"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextContainerComponent
// 0x0018 (0x00E0 - 0x00C8)
class UAISpawnContextContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnContextContainerComponent"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextList
// 0x0010 (0x0038 - 0x0028)
class UAISpawnContextList : public UDataAsset
{
public:
	TArray<struct FAISpawnContextData>                 SpawnContextList;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnContextList"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnContextProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnContextProviderInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIFixedWavesSpawner
// 0x0028 (0x0428 - 0x0400)
class UAIFixedWavesSpawner : public UAISpawner
{
public:
	TArray<struct FAIPersistentSpawnerWave>            SpawnedWaves;                                             // 0x0400(0x0010) (Edit, ZeroConstructor)
	int                                                NumWavesToSpawnOnSpottedNewTarget;                        // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0414(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIFixedWavesSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIIncrementalWaveSpawner
// 0x0118 (0x0518 - 0x0400)
class UAIIncrementalWaveSpawner : public UAISpawner
{
public:
	struct FAISpawnerWave                              SpawnedWave;                                              // 0x0400(0x0100) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0500(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIIncrementalWaveSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIInteractableSpawner
// 0x0100 (0x0500 - 0x0400)
class UAIInteractableSpawner : public UAISpawner
{
public:
	class UClass*                                      AIInteractableType;                                       // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InhabitedChance;                                          // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulInhabitedCheck;                       // 0x0410(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedInhabitedCheck;                           // 0x0440(0x0030) (Edit)
	float                                              SpawnForInteractableChance;                               // 0x0470(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulSpawnOnInteractableCheck;             // 0x0478(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedSpawnOnInteractableCheck;                 // 0x04A8(0x0030) (Edit)
	bool                                               RunInhabitedSimulation;                                   // 0x04D8(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               RunSpawnForInteractableSimulation;                        // 0x04D9(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04DA(0x0002) MISSED OFFSET
	int                                                NumIterations;                                            // 0x04DC(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x04E0(0x0018) MISSED OFFSET
	TEnumAsByte<EPlayMode>                             CachedPlaymode;                                           // 0x04F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIInteractableSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIOnDemandSpawner
// 0x0000 (0x0400 - 0x0400)
class UAIOnDemandSpawner : public UAISpawner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIOnDemandSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIPerPlayerSpawner
// 0x01E8 (0x05E8 - 0x0400)
class UAIPerPlayerSpawner : public UAISpawner
{
public:
	bool                                               CheckSpawnedActorsInRadiusBeforeSpawning;                 // 0x0400(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              RadiusToCheckForExistingPopulation;                       // 0x0404(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxExistingPopulationInRadius;                            // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DespawnAllPawnsWhenAllPlayersLeave;                       // 0x040C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	int                                                MaxActorsTotalPerPlayer;                                  // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RunSimulation;                                            // 0x0414(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	int                                                RankForSimulation;                                        // 0x0418(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumIterations;                                            // 0x041C(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               WantsToTemporarilyRememberPlayers;                        // 0x0420(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TemporaryPlayerMemoryTimeRange;                           // 0x0428(0x0030) (Edit)
	unsigned char                                      UnknownData04[0xE8];                                      // 0x0458(0x00E8) MISSED OFFSET
	TMap<class AActor*, struct FAIPerPlayerSpawnerPlayerDetailsUnit> PlayerDetails;                                            // 0x0540(0x0050) (ZeroConstructor, Transient)
	TMap<class AController*, struct FTemporaryPlayerDetailsUnitEntry> TemporaryPlayerDetails;                                   // 0x0590(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x8];                                       // 0x05E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPerPlayerSpawner"));
		return ptr;
	}


	void PlayerDeath(class AActor* Player);
};


// Class AthenaAI.NamedAIDataAsset
// 0x0088 (0x00B0 - 0x0028)
class UNamedAIDataAsset : public UDataAsset
{
public:
	TArray<struct FText>                               MaleCaptainNames;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               FemaleCaptainNames;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               MaleCrewNames;                                            // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               FemaleCrewNames;                                          // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAICustomNameTitleMapping>           CustomNameTitles;                                         // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAICustomClassIdNameOverrides>       CustomNameOverrides;                                      // 0x0078(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      DefaultClassId;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FemaleCaptainClassId;                                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MaleCaptainClassId;                                       // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FemaleCrewClassId;                                        // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MaleCrewClassId;                                          // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.NamedAIDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AIBoobyTrapSpawner
// 0x00D0 (0x06B8 - 0x05E8)
class UAIBoobyTrapSpawner : public UAIPerPlayerSpawner
{
public:
	int                                                NumberOfWavesToSpawn;                                     // 0x05E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05EC(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 NewWaveSpawnSfx;                                          // 0x05F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NewWaveSpawnSfxTriggerRadius;                             // 0x05F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ShowNameplatesFor;                                        // 0x0600(0x0010) (Edit, ZeroConstructor)
	class UNamedAIDataAsset*                           NamedAIDataAsset;                                         // 0x0610(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToTrack;                                             // 0x0618(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x98];                                      // 0x0620(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIBoobyTrapSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIProgressiveWavesSpawner
// 0x0030 (0x0430 - 0x0400)
class UAIProgressiveWavesSpawner : public UAISpawner
{
public:
	TArray<struct FAIPersistentSpawnerWave>            Waves;                                                    // 0x0400(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0410(0x0018) MISSED OFFSET
	class AActor*                                      TriggerActor;                                             // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIProgressiveWavesSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnerSpawnInteractableAssignmentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIWaveSpawner
// 0x0138 (0x0538 - 0x0400)
class UAIWaveSpawner : public UAISpawner
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0400(0x0008) MISSED OFFSET
	struct FAISpawnerWave                              SpawnedWave;                                              // 0x0408(0x0100) (Edit)
	float                                              MinRespawnTime;                                           // 0x0508(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRespawnTime;                                           // 0x050C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0510(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIWaveSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnerList
// 0x0010 (0x0038 - 0x0028)
class UAISpawnerList : public UDataAsset
{
public:
	TArray<class UAISpawner*>                          Spawners;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnerList"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnOverrideCondition
// 0x0008 (0x0030 - 0x0028)
class UAISpawnOverrideCondition : public UObject
{
public:
	bool                                               InvertResult;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnOverrideCondition"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnCampaignCondition
// 0x0020 (0x0050 - 0x0030)
class UAISpawnCampaignCondition : public UAISpawnOverrideCondition
{
public:
	struct FName                                       CampaignName;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnCampaignCondition"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnComplexCondition
// 0x0010 (0x0040 - 0x0030)
class UAISpawnComplexCondition : public UAISpawnOverrideCondition
{
public:
	TArray<class UAISpawnOverrideCondition*>           Conditions;                                               // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnComplexCondition"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnAndCondition
// 0x0000 (0x0040 - 0x0040)
class UAISpawnAndCondition : public UAISpawnComplexCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnAndCondition"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnOrCondition
// 0x0000 (0x0040 - 0x0040)
class UAISpawnOrCondition : public UAISpawnComplexCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnOrCondition"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnMatchesAllContextsCondition
// 0x0010 (0x0040 - 0x0030)
class UAISpawnMatchesAllContextsCondition : public UAISpawnOverrideCondition
{
public:
	TArray<class UClass*>                              Contexts;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnMatchesAllContextsCondition"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnMatchesAnyContextCondition
// 0x0010 (0x0040 - 0x0030)
class UAISpawnMatchesAnyContextCondition : public UAISpawnOverrideCondition
{
public:
	TArray<class UClass*>                              Contexts;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnMatchesAnyContextCondition"));
		return ptr;
	}

};


// Class AthenaAI.StaticAISpawnCondition
// 0x0008 (0x0038 - 0x0030)
class UStaticAISpawnCondition : public UAISpawnOverrideCondition
{
public:
	bool                                               ShouldApplyOverride;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.StaticAISpawnCondition"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnPointSeedComponent
// 0x0000 (0x02B0 - 0x02B0)
class UAISpawnPointSeedComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnPointSeedComponent"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnRegionInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnRegionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnRegionInterface"));
		return ptr;
	}

};


// Class AthenaAI.AITargetServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAITargetServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AITargetServiceInterface"));
		return ptr;
	}

};


// Class AthenaAI.AITargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAITargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AITargetInterface"));
		return ptr;
	}

};


// Class AthenaAI.AITargetActor
// 0x0018 (0x03E8 - 0x03D0)
class AAITargetActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	class USceneComponent*                             Root;                                                     // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EAthenaAITeam>                         Team;                                                     // 0x03E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AITargetActor"));
		return ptr;
	}

};


// Class AthenaAI.AITargetService
// 0x0018 (0x03E8 - 0x03D0)
class AAITargetService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AITargetService"));
		return ptr;
	}

};


// Class AthenaAI.AITargetWeaponInterface
// 0x0000 (0x0028 - 0x0028)
class UAITargetWeaponInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AITargetWeaponInterface"));
		return ptr;
	}


	bool FindAimConfigToHitTarget(const struct FVector& Target, bool CheckYaw, struct FRotator* OutAimConfig);
};


// Class AthenaAI.AIWithFormInterface
// 0x0000 (0x0028 - 0x0028)
class UAIWithFormInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIWithFormInterface"));
		return ptr;
	}

};


// Class AthenaAI.AmbientWaterSpawnerManager
// 0x0250 (0x0620 - 0x03D0)
class AAmbientWaterSpawnerManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	class USceneComponent*                             Root;                                                     // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAthenaAISettings*                           AthenaAISettings;                                         // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               AISpawnBlockingContextNames;                              // 0x03F0(0x0010) (Edit, ZeroConstructor)
	class UAIPerPlayerSpawner*                         SharkPerPlayerSpawnerTemplate;                            // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIPerPlayerSpawner*                         SirenPerPlayerSpawnerTemplate;                            // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SirenEncounterRegionRadius;                               // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SirenEncounterShutdownTime;                               // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           InitialSirenSpawningWeightedTimeRange;                    // 0x0418(0x0030) (Edit, Config)
	struct FWeightedProbabilityRangeOfRanges           UnsuccessfulSirenSpawningWeightedTimeRange;               // 0x0448(0x0030) (Edit, Config)
	struct FWeightedProbabilityRangeOfRanges           SuccessfulSirenSpawningWeightedTimeRange;                 // 0x0478(0x0030) (Edit, Config)
	struct FChanceForSharksToBlockSirenEncounterData   SharkEncounterSpawnBlockingData;                          // 0x04A8(0x000C) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	TArray<struct FPerDepthSpawnChance>                PerDepthSpawnChances;                                     // 0x04B8(0x0010) (Edit, ZeroConstructor)
	class UAIPerPlayerSpawner*                         SharkPerPlayerSpawner;                                    // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x130];                                     // 0x04D0(0x0130) MISSED OFFSET
	TArray<struct FPlayerInWaterData>                  PlayersInWater;                                           // 0x0600(0x0010) (ZeroConstructor, Transient)
	TArray<struct FSirenEncounterData>                 SirenEncounters;                                          // 0x0610(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AmbientWaterSpawnerManager"));
		return ptr;
	}


	void OnPlayerDeath(class AActor* InActorDying);
};


// Class AthenaAI.AmmunitionItemClassProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UAmmunitionItemClassProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AmmunitionItemClassProviderInterface"));
		return ptr;
	}

};


// Class AthenaAI.AppliedStatusToMultipleAIWithFormsStatCondition
// 0x0028 (0x0050 - 0x0028)
class UAppliedStatusToMultipleAIWithFormsStatCondition : public UStatCondition
{
public:
	TArray<class UClass*>                              Status;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                AICountMinimum;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowAllForms;                                            // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    AllowedAIForms;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AppliedStatusToMultipleAIWithFormsStatCondition"));
		return ptr;
	}

};


// Class AthenaAI.AquaticAITargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAquaticAITargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AquaticAITargetInterface"));
		return ptr;
	}

};


// Class AthenaAI.BurrowAIAbility
// 0x00C8 (0x0140 - 0x0078)
class UBurrowAIAbility : public UAthenaAIAbility
{
public:
	TArray<struct FVector>                             LocationsToSpawnCrack;                                    // 0x0078(0x0010) (ZeroConstructor)
	struct FTimerHandle                                TimerHandleStartNextSpawnWave;                            // 0x0088(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class AActor*                                      CachedTarget;                                             // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8C];                                      // 0x0098(0x008C) MISSED OFFSET
	bool                                               bExecuting;                                               // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bProcessingSpawnLocations;                                // 0x0125(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1A];                                      // 0x0126(0x001A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BurrowAIAbility"));
		return ptr;
	}

};


// Class AthenaAI.BurrowCrack
// 0x0040 (0x0410 - 0x03D0)
class ABurrowCrack : public AActor
{
public:
	class USceneComponent*                             DefaultSceneComponent;                                    // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             DecalComponent;                                           // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              FadeOutTimeSeconds;                                       // 0x03E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasFadeStarted;                                           // 0x03E4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2B];                                      // 0x03E5(0x002B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BurrowCrack"));
		return ptr;
	}


	void OnRep_StartFadeAndLifeSpan();
	void OnLifeSpanPercentLeft(float PercentLeft);
};


// Class AthenaAI.BurrowAIAbilityParams
// 0x0078 (0x0140 - 0x00C8)
class UBurrowAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	TArray<TEnumAsByte<EPhysicalSurface>>              ValidBurrowSurfaceTypes;                                  // 0x00C8(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      BurrowCrackToSpawn;                                       // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BurrowEruptArea;                                          // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEnvQuery*                                   EnvQueryLinesToTarget;                                    // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEnvQuery*                                   EnvQueryAroundTarget;                                     // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetPositionForStartTrace;                              // 0x00F8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceDetectRaycastLength;                               // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BurrowAroundTargetRange;                                  // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSurfaceAngleForBurrow;                                 // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEruptFromClosestSpawn;                                   // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	struct FMinMaxBurrowAbility                        EruptionDelayRndBetweenMinMaxSeconds;                     // 0x0114(0x0008) (Edit)
	struct FMinMaxBurrowAbility                        NumberOfCrackWavesMinMax;                                 // 0x011C(0x0008) (Edit)
	struct FMinMaxBurrowAbility                        RndSecondsBetweenCrackWaves;                              // 0x0124(0x0008) (Edit)
	struct FMinMaxBurrowAbility                        NumberOfCracksPerWaveMinMax;                              // 0x012C(0x0008) (Edit)
	struct FMinMaxBurrowAbility                        RndSecondsBetweenEachCrackSpawn;                          // 0x0134(0x0008) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BurrowAIAbilityParams"));
		return ptr;
	}

};


// Class AthenaAI.BurrowHealAIAbilityParams
// 0x0030 (0x0170 - 0x0140)
class UBurrowHealAIAbilityParams : public UBurrowAIAbilityParams
{
public:
	class UClass*                                      AllyTypeToHeal;                                           // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealDuration;                                             // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusForValidTargets;                                    // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfTargetsToHeal;                                    // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FStatus                                     StatusToApplyOnHeal;                                      // 0x0158(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BurrowHealAIAbilityParams"));
		return ptr;
	}

};


// Class AthenaAI.BurrowHealAIAbility
// 0x0010 (0x0150 - 0x0140)
class UBurrowHealAIAbility : public UBurrowAIAbility
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BurrowHealAIAbility"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIBuffAbilityInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIBuffAbilityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIBuffAbilityInterface"));
		return ptr;
	}

};


// Class AthenaAI.CoralShieldAbility
// 0x00B0 (0x0128 - 0x0078)
class UCoralShieldAbility : public UAthenaAIAbility
{
public:
	TArray<TWeakObjectPtr<class APawn>>                PotentialTargets;                                         // 0x0078(0x0010) (ZeroConstructor)
	TScriptInterface<class UAIManagerServiceInterface> CachedAIManager;                                          // 0x0088(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBuffReceiverInterface>     CachedBuffReceiver;                                       // 0x0098(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBuffedTargetData>                   BuffedTargets;                                            // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x70];                                      // 0x00B8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.CoralShieldAbility"));
		return ptr;
	}

};


// Class AthenaAI.ElectricShieldAbility
// 0x0098 (0x0110 - 0x0078)
class UElectricShieldAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<TScriptInterface<class UStatusEffectRecipientInterface>> SelectedTargets;                                          // 0x0080(0x0010) (ZeroConstructor)
	TScriptInterface<class UAIManagerServiceInterface> CachedAIManager;                                          // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UChainLightningSourceInterface> OwnerChainLightningSourceInterface;                       // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x00B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.ElectricShieldAbility"));
		return ptr;
	}

};


// Class AthenaAI.SporeBreathAIAbility
// 0x0038 (0x00B0 - 0x0078)
class USporeBreathAIAbility : public UAthenaAIAbility
{
public:
	class AStatusEffectOverlapZone*                    BreathActor;                                              // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	class UVFXSpawnerComponent*                        BreathVFX;                                                // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0088(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SporeBreathAIAbility"));
		return ptr;
	}

};


// Class AthenaAI.TeleportAIAbility
// 0x0008 (0x0080 - 0x0078)
class UTeleportAIAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TeleportAIAbility"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIAbilityHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAbilityHandlerInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityComponent
// 0x0100 (0x01C8 - 0x00C8)
class UAthenaAIAbilityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<class UAthenaAIAbility*>                    AIAbilities;                                              // 0x00D0(0x0010) (ZeroConstructor, Transient)
	TArray<class UAthenaAIAbility*>                    ActivatableAbilitiesInCurrentStage;                       // 0x00E0(0x0010) (ZeroConstructor, Transient)
	class UAthenaAIAbility*                            CurrentAIAbility;                                         // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      QueuedAbilityType;                                        // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      DebugAlwaysOnAbility;                                     // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FAthenaAIAbilityDamageStage>         AbilityDamageStages;                                      // 0x0108(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x0118(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAbilityComponent"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityHandlerComponent
// 0x0118 (0x01E0 - 0x00C8)
class UAthenaAIAbilityHandlerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00C8(0x00B0) MISSED OFFSET
	TArray<struct FAthenaAIAbilityDamageStage>         AbilityStages;                                            // 0x0178(0x0010) (ZeroConstructor)
	TArray<class UAthenaAIAbility*>                    AIAbilities;                                              // 0x0188(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              ReadyAbilitiesPool;                                       // 0x0198(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01A8(0x0020) MISSED OFFSET
	class UClass*                                      DebugAlwaysOnAbility;                                     // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      RequiresActivation;                                       // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAbilityHandlerComponent"));
		return ptr;
	}

};


// Class AthenaAI.CoralShieldAbilityParams
// 0x0038 (0x0100 - 0x00C8)
class UCoralShieldAbilityParams : public UAthenaAIAbilityParams
{
public:
	float                                              ShieldEffectRadius;                                       // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageNeededToBreakShield;                                // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShieldLifeTime;                                           // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FStatus                                     CoralShieldStatusEffect;                                  // 0x00D8(0x0018) (Edit)
	class UDamageableVulnerabilityLayer*               VulnerabilityToApplyToSelf;                               // 0x00F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DelayBeforeSFXPlays;                                      // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.CoralShieldAbilityParams"));
		return ptr;
	}

};


// Class AthenaAI.ElectricShieldAbilityParams
// 0x0038 (0x0100 - 0x00C8)
class UElectricShieldAbilityParams : public UAthenaAIAbilityParams
{
public:
	float                                              ChargeUpTime;                                             // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FStatus                                     BuffInterruptedStatusEffect;                              // 0x00D0(0x0018) (Edit)
	struct FStatus                                     ElectricShieldStatusEffect;                               // 0x00E8(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.ElectricShieldAbilityParams"));
		return ptr;
	}

};


// Class AthenaAI.SporeBreathAIAbilityParams
// 0x0078 (0x0140 - 0x00C8)
class USporeBreathAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	struct FAthenaAIAbilityPlayerBasedRanges           BreathMaxDuration;                                        // 0x00C8(0x0010) (Edit)
	float                                              BreathContinueThresholdDistance;                          // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	class UClass*                                      BreathActor;                                              // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVFXHandlerComponentParams                  BreathVFXParams;                                          // 0x00E8(0x0038) (Edit)
	struct FVector                                     BreathCollisionVolumeSize;                                // 0x0120(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BreathCollisionForwardOffset;                             // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BreathStartDelay;                                         // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class UClass*                                      VfxSpawner;                                               // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SporeBreathAIAbilityParams"));
		return ptr;
	}

};


// Class AthenaAI.BurrowAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class UBurrowAIAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BurrowAIAbilityType"));
		return ptr;
	}

};


// Class AthenaAI.BurrowHealAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class UBurrowHealAIAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BurrowHealAIAbilityType"));
		return ptr;
	}

};


// Class AthenaAI.CoralShieldAbilityType
// 0x0000 (0x0028 - 0x0028)
class UCoralShieldAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.CoralShieldAbilityType"));
		return ptr;
	}

};


// Class AthenaAI.ElectricShieldAbilityType
// 0x0000 (0x0028 - 0x0028)
class UElectricShieldAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.ElectricShieldAbilityType"));
		return ptr;
	}

};


// Class AthenaAI.SporeBreathAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class USporeBreathAIAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SporeBreathAIAbilityType"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIRangeBasedAmmoDataAsset
// 0x0010 (0x00E0 - 0x00D0)
class UAthenaAIRangeBasedAmmoDataAsset : public UAthenaAIAmmoDataAsset
{
public:
	TArray<struct FWeightedAmmoTypeRange>              AmmoTypeRanges;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIRangeBasedAmmoDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAICharacterStatsInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAICharacterStatsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAICharacterStatsInterface"));
		return ptr;
	}

};


// Class AthenaAI.SpawnItemDescProviderInterface
// 0x0000 (0x0028 - 0x0028)
class USpawnItemDescProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SpawnItemDescProviderInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAICharacterController
// 0x0220 (0x0B10 - 0x08F0)
class AAthenaAICharacterController : public AAthenaAIController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08F0(0x0008) MISSED OFFSET
	class UAthenaAIItemParamsDataAsset*                ItemParamsDataAsset;                                      // 0x08F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULoadoutAsset*                               FallbackLoadoutIfAllEngageItemsDropped;                   // 0x0900(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ControlRotationInterpSpeed;                               // 0x0908(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ControlRotationUseConstantInterp;                         // 0x090C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               FaceTargetDisabled;                                       // 0x090D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x090E(0x0002) MISSED OFFSET
	float                                              MinTurnAngleToPlayTurnAnim;                               // 0x0910(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0914(0x0014) MISSED OFFSET
	class UAthenaAICharacterControllerParamsDataAsset* CharacterParamsDataAsset;                                 // 0x0928(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x90];                                      // 0x0930(0x0090) MISSED OFFSET
	TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories;                           // 0x09C0(0x0010) (ZeroConstructor)
	TArray<class UAthenaAIAbilityParams*>              AIAbilityParams;                                          // 0x09D0(0x0010) (ZeroConstructor)
	TArray<struct FAthenaAIEngageEnemyData>            NonItemEngageOptions;                                     // 0x09E0(0x0010) (ZeroConstructor)
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                    // 0x09F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x118];                                     // 0x09F8(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAICharacterController"));
		return ptr;
	}


	void SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies);
	void SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const struct FName& ParamName, float Value);
	void SetDisableTurningForTest(bool InDisableTurningForTest);
	void ClearOverridePrioritiseInteractablesBeforeEnemies();
};


// Class AthenaAI.AthenaAIControllerNavMeshTogglesInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIControllerNavMeshTogglesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIControllerNavMeshTogglesInterface"));
		return ptr;
	}

};


// Class AthenaAI.FaunaAIContollerParamsDataAsset
// 0x0088 (0x0188 - 0x0100)
class UFaunaAIContollerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	struct FWeightedProbabilityRange                   Courage;                                                  // 0x0100(0x0020) (Edit)
	TArray<struct FCarriedItemThreatOverride>          CarriedItemThreatOverrides;                               // 0x0120(0x0010) (Edit, ZeroConstructor)
	bool                                               ThreatenedBySightOfCarrier;                               // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	TArray<struct FHearingThreat>                      KnownHearingDangers;                                      // 0x0138(0x0010) (Edit, ZeroConstructor)
	float                                              CarrierHearingThreatSpeedThreshold;                       // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageThreat;                                             // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CharacterDistanceToDangerRatingCurve;                     // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DangerRatingToAgitationDurationCurve;                     // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeAgitatedMin;                                  // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeAgitatedMax;                                  // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgitationDurationVariance;                                // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AlertThreshold;                                           // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FleeThreshold;                                            // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeCalm;                                         // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CalmCooldownTime;                                         // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceFromLeaderForIdle;                             // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceToLeaderPatrolChanceCurve;                        // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.FaunaAIContollerParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerParamsDataProvider
// 0x0018 (0x0040 - 0x0028)
class UAthenaAIControllerParamsDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIControllerParamsDataProvider"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerParamsTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIControllerParamsTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIControllerParamsTargetInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIFormComponentContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIFormComponentContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIFormComponentContainerInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIPerceptionComponent
// 0x0000 (0x01C8 - 0x01C8)
class UAthenaAIPerceptionComponent : public UAIPerceptionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIPerceptionComponent"));
		return ptr;
	}


	bool IsPerceptionSenseEnabled(class UClass* Sense);
	bool IsAnyPerceptionEnabled();
	void EnablePerceptionSense(class UClass* Sense, bool Enable);
	void EnableAllPerception(bool Enable);
};


// Class AthenaAI.AthenaAISightTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAISightTargetInterface : public UAISightTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAISightTargetInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIWeightedRangesDataProvider
// 0x0038 (0x0060 - 0x0028)
class UAthenaAIWeightedRangesDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           WeightedRangesValue;                                      // 0x0030(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIWeightedRangesDataProvider"));
		return ptr;
	}

};


// Class AthenaAI.BlackboardAIDataProvider
// 0x0018 (0x0040 - 0x0028)
class UBlackboardAIDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BlackboardAIDataProvider"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ActionState
// 0x0020 (0x0088 - 0x0068)
class UBTDecorator_ActionState : public UBTDecorator
{
public:
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class UClass*                                      StateId;                                                  // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_ActionState"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ActorInWater
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_ActorInWater : public UBTDecorator_BlackboardBase
{
public:
	bool                                               ReverseLogic;                                             // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_ActorInWater"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CurrentAIStrategy
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_CurrentAIStrategy : public UBTDecorator_BaseConditional
{
public:
	TArray<class UClass*>                              Strategies;                                               // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CurrentAIStrategy"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ItemReadyToUse
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_ItemReadyToUse : public UBTDecorator_BaseConditional
{
public:
	class UClass*                                      NotificationId;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_ItemReadyToUse"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_LeftOfAIPawn
// 0x0030 (0x0098 - 0x0068)
class UBTDecorator_LeftOfAIPawn : public UBTDecorator_BaseConditional
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0068(0x0028) (Edit)
	bool                                               ReverseLogic;                                             // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_LeftOfAIPawn"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_LineOfSightToTarget
// 0x0088 (0x00F0 - 0x0068)
class UBTDecorator_LineOfSightToTarget : public UBTDecorator_BaseConditional
{
public:
	float                                              Interval;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetActorKey;                                           // 0x0070(0x0028) (Edit)
	bool                                               UseTargetPosition;                                        // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetPositionKey;                                        // 0x00A0(0x0028) (Edit)
	struct FVector                                     OffsetToApplyToTargetPosition;                            // 0x00C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x00D4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_LineOfSightToTarget"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardClassValue
// 0x0028 (0x00B8 - 0x0090)
class UBTDecorator_CompareBlackboardClassValue : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      Class;                                                    // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Invert;                                                   // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	class FString                                      CachedDescription;                                        // 0x00A0(0x0010) (ZeroConstructor)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareBlackboardClassValue"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardIntValue
// 0x0030 (0x0098 - 0x0068)
class UBTDecorator_CompareBlackboardIntValue : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0068(0x0028) (Edit)
	int                                                Value;                                                    // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlackboardIntValueComparisonType>     ComparisonType;                                           // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0095(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareBlackboardIntValue"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardValues
// 0x0018 (0x0080 - 0x0068)
class UBTDecorator_CompareBlackboardValues : public UBTDecorator
{
public:
	TArray<struct FBlackboardValueCondition>           FloatConditions;                                          // 0x0068(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EBlackboardValueCompositeType>         FloatConditionComposite;                                  // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareBlackboardValues"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareFloatValueBase
// 0x0038 (0x00B8 - 0x0080)
class UBTDecorator_CompareFloatValueBase : public UBTDecorator_CompareBlackboardValues
{
public:
	TEnumAsByte<EFloatValueComparisonType>             Comparison;                                               // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   Value;                                                    // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareFloatValueBase"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed
// 0x0028 (0x00E0 - 0x00B8)
class UBTDecorator_CompareBlackboardActorSpeed : public UBTDecorator_CompareFloatValueBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x00B8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardFloatValue
// 0x0028 (0x00E0 - 0x00B8)
class UBTDecorator_CompareBlackboardFloatValue : public UBTDecorator_CompareFloatValueBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x00B8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareBlackboardFloatValue"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareCurrentHealth
// 0x0000 (0x00B8 - 0x00B8)
class UBTDecorator_CompareCurrentHealth : public UBTDecorator_CompareFloatValueBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareCurrentHealth"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TargetInRange
// 0x0088 (0x0108 - 0x0080)
class UBTDecorator_TargetInRange : public UBTDecorator_CompareBlackboardValues
{
public:
	struct FAIDataProviderFloatValue                   EnterRange;                                               // 0x0080(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   ExitRange;                                                // 0x00B0(0x0030) (Edit)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00E0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_TargetInRange"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TargetInRangeOfPoint
// 0x0028 (0x0130 - 0x0108)
class UBTDecorator_TargetInRangeOfPoint : public UBTDecorator_TargetInRange
{
public:
	struct FBlackboardKeySelector                      ReferencePointKey;                                        // 0x0108(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_TargetInRangeOfPoint"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TestRange
// 0x0068 (0x00E8 - 0x0080)
class UBTDecorator_TestRange : public UBTDecorator_CompareBlackboardValues
{
public:
	struct FAIDataProviderFloatValue                   EnterRange;                                               // 0x0080(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   ExitRange;                                                // 0x00B0(0x0030) (Edit)
	bool                                               TestForOutsideRange;                                      // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_TestRange"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TestRangeOfSeenActors
// 0x0010 (0x00F8 - 0x00E8)
class UBTDecorator_TestRangeOfSeenActors : public UBTDecorator_TestRange
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_TestRangeOfSeenActors"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ConeCheck3D
// 0x0058 (0x00C0 - 0x0068)
class UBTDecorator_ConeCheck3D : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x0098(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_ConeCheck3D"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_DockedToInteractable
// 0x0000 (0x0090 - 0x0090)
class UBTDecorator_DockedToInteractable : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_DockedToInteractable"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_FeatureToggle
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_FeatureToggle : public UBTDecorator
{
public:
	struct FName                                       FeatureName;                                              // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_FeatureToggle"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_IsAbilityAvailable
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_IsAbilityAvailable : public UBTDecorator
{
public:
	class UClass*                                      AIAbilityType;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_IsAbilityAvailable"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_IsLocationInWater
// 0x0058 (0x00E8 - 0x0090)
class UBTDecorator_IsLocationInWater : public UBTDecorator_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      WaterVolumeActor;                                         // 0x0090(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetLocation;                                           // 0x00B8(0x0028) (Edit)
	bool                                               OnlyConsidersSwimmableWater;                              // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_IsLocationInWater"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_MultipleRandomDiceRolls
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_MultipleRandomDiceRolls : public UBTDecorator
{
public:
	TArray<struct FChanceAndBlackboardKeyPair>         ChanceKeyPairs;                                           // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_MultipleRandomDiceRolls"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RandomDiceRoll
// 0x0030 (0x0098 - 0x0068)
class UBTDecorator_RandomDiceRoll : public UBTDecorator
{
public:
	struct FAIDataProviderFloatValue                   Chance;                                                   // 0x0068(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_RandomDiceRoll"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RandomLoop
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_RandomLoop : public UBTDecorator
{
public:
	int                                                MinNumLoops;                                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumLoops;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RandomNumLoopCurve;                                       // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_RandomLoop"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RollAgainstPatrolChance
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_RollAgainstPatrolChance : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_RollAgainstPatrolChance"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TestAIInteractableType
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_TestAIInteractableType : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      Type;                                                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_TestAIInteractableType"));
		return ptr;
	}

};


// Class AthenaAI.BTService_AimAIInteractable
// 0x0078 (0x00E8 - 0x0070)
class UBTService_AimAIInteractable : public UBTService
{
public:
	struct FBlackboardKeySelector                      Interactable;                                             // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x0098(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                  // 0x00C0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_AimAIInteractable"));
		return ptr;
	}

};


// Class AthenaAI.BTService_DefaultFocusToPosAtRelativeAngleToObject
// 0x0008 (0x00A8 - 0x00A0)
class UBTService_DefaultFocusToPosAtRelativeAngleToObject : public UBTService_DefaultFocus
{
public:
	float                                              RelativeYawAngleOffset;                                   // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RelativeDistance;                                         // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_DefaultFocusToPosAtRelativeAngleToObject"));
		return ptr;
	}

};


// Class AthenaAI.BTService_DetermineAIAbility
// 0x0028 (0x0098 - 0x0070)
class UBTService_DetermineAIAbility : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlockChangeAIAbilitiesKey;                                // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_DetermineAIAbility"));
		return ptr;
	}

};


// Class AthenaAI.BTService_DisableCollisions
// 0x0010 (0x0080 - 0x0070)
class UBTService_DisableCollisions : public UBTService
{
public:
	TArray<TEnumAsByte<ECollisionChannel>>             ChannelsToLeaveUnaffected;                                // 0x0070(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_DisableCollisions"));
		return ptr;
	}

};


// Class AthenaAI.BTService_DisableDamageResponses
// 0x0000 (0x0070 - 0x0070)
class UBTService_DisableDamageResponses : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_DisableDamageResponses"));
		return ptr;
	}

};


// Class AthenaAI.BTService_DisableStun
// 0x0000 (0x0070 - 0x0070)
class UBTService_DisableStun : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_DisableStun"));
		return ptr;
	}

};


// Class AthenaAI.BTService_EnableFaceFocusActor
// 0x0040 (0x00D8 - 0x0098)
class UBTService_EnableFaceFocusActor : public UBTService_BlackboardBase
{
public:
	bool                                               DisableUpdateMoveFocusForCurrentPathOnExit;               // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FConditionalBasedOnBlackboardKey            Conditional;                                              // 0x00A0(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_EnableFaceFocusActor"));
		return ptr;
	}

};


// Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch
// 0x0008 (0x00A0 - 0x0098)
class UBTService_IncrementFloatValueWithTimeSpentInBranch : public UBTService_BlackboardBase
{
public:
	float                                              TimeMultiplier;                                           // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch"));
		return ptr;
	}

};


// Class AthenaAI.BTService_OverrideTurnSpeed
// 0x0030 (0x00A0 - 0x0070)
class UBTService_OverrideTurnSpeed : public UBTService
{
public:
	struct FAIDataProviderFloatValue                   TurnSpeed;                                                // 0x0070(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_OverrideTurnSpeed"));
		return ptr;
	}

};


// Class AthenaAI.BTService_PlayCustomMontageId
// 0x0008 (0x0078 - 0x0070)
class UBTService_PlayCustomMontageId : public UBTService
{
public:
	struct FCustomAnimationMontageId                   CustomAnimationMontageId;                                 // 0x0070(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_PlayCustomMontageId"));
		return ptr;
	}

};


// Class AthenaAI.BTService_QueryPerceptionForTarget
// 0x0000 (0x0070 - 0x0070)
class UBTService_QueryPerceptionForTarget : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_QueryPerceptionForTarget"));
		return ptr;
	}

};


// Class AthenaAI.BTService_RunEQSQuery
// 0x0050 (0x00E8 - 0x0098)
class UBTService_RunEQSQuery : public UBTService_BlackboardBase
{
public:
	bool                                               OverrideQueryTemplateWithBlackboardValue;                 // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      OverrideEQSKey;                                           // 0x00A0(0x0028) (Edit)
	class UEnvQuery*                                   QueryTemplate;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ThrottleQueryTimePerFrame;                                // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	float                                              MaxSecondsToSpendOnQueryPerFrame;                         // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_RunEQSQuery"));
		return ptr;
	}

};


// Class AthenaAI.BTService_DoesEQSQuerySucceed
// 0x0000 (0x00E8 - 0x00E8)
class UBTService_DoesEQSQuerySucceed : public UBTService_RunEQSQuery
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_DoesEQSQuerySucceed"));
		return ptr;
	}

};


// Class AthenaAI.BTService_RunEQSQueryOnActorMovement
// 0x0040 (0x0128 - 0x00E8)
class UBTService_RunEQSQueryOnActorMovement : public UBTService_RunEQSQuery
{
public:
	struct FBlackboardKeySelector                      MovingActorKey;                                           // 0x00E8(0x0028) (Edit)
	float                                              MinimumActorMovementToRunEQS;                             // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumActorVelocityChangeToRunEQS;                       // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RunEQSForYawChanges;                                      // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              MinimumActorYawChangeToRunEQS;                            // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_RunEQSQueryOnActorMovement"));
		return ptr;
	}

};


// Class AthenaAI.BTService_SetAIAnimationState
// 0x0000 (0x0098 - 0x0098)
class UBTService_SetAIAnimationState : public UBTService_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_SetAIAnimationState"));
		return ptr;
	}

};


// Class AthenaAI.BTService_SetAIStrategy
// 0x0008 (0x0078 - 0x0070)
class UBTService_SetAIStrategy : public UBTService
{
public:
	class UClass*                                      NewStrategy;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_SetAIStrategy"));
		return ptr;
	}

};


// Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant
// 0x0028 (0x0098 - 0x0070)
class UBTService_SetBoolBlackboardValueToTrueOnCeaseRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      BoolValueKey;                                             // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant"));
		return ptr;
	}

};


// Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant
// 0x0028 (0x0098 - 0x0070)
class UBTService_SetBoolBlackboardValueTrueWhileRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      BoolValueKey;                                             // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant"));
		return ptr;
	}

};


// Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant
// 0x0030 (0x00A0 - 0x0070)
class UBTService_SetNameBlackboardValueWhileRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      NameValueKey;                                             // 0x0070(0x0028) (Edit)
	struct FName                                       Value;                                                    // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant"));
		return ptr;
	}

};


// Class AthenaAI.BTService_TriggerNotifications
// 0x0020 (0x0090 - 0x0070)
class UBTService_TriggerNotifications : public UBTService
{
public:
	class UClass*                                      EnterBranchNotificationId;                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LeaveBranchNotificationId;                                // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_TriggerNotifications"));
		return ptr;
	}

};


// Class AthenaAI.BTService_UpdateFocusOnBBChange
// 0x0040 (0x00E0 - 0x00A0)
class UBTService_UpdateFocusOnBBChange : public UBTService_DefaultFocus
{
public:
	bool                                               DisableUpdateMoveFocusForCurrentPathOnExit;               // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FConditionalBasedOnBlackboardKey            Conditional;                                              // 0x00A8(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_UpdateFocusOnBBChange"));
		return ptr;
	}

};


// Class AthenaAI.BTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile
// 0x0000 (0x00E0 - 0x00E0)
class UBTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile : public UBTService_UpdateFocusOnBBChange
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile"));
		return ptr;
	}

};


// Class AthenaAI.BTService_UpdateTargetForInteractable
// 0x0050 (0x00C0 - 0x0070)
class UBTService_UpdateTargetForInteractable : public UBTService
{
public:
	struct FBlackboardKeySelector                      Interactable;                                             // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x0098(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_UpdateTargetForInteractable"));
		return ptr;
	}

};


// Class AthenaAI.BTService_UpdateViewPitchForWieldedProjectileToHitTarget
// 0x0000 (0x0098 - 0x0098)
class UBTService_UpdateViewPitchForWieldedProjectileToHitTarget : public UBTService_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_UpdateViewPitchForWieldedProjectileToHitTarget"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_ApplyStatusComposite
// 0x0050 (0x00B0 - 0x0060)
class UBTTask_ApplyStatusComposite : public UBTTaskNode
{
public:
	bool                                               bOneShot;                                                 // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ContinuousStatusDuration;                                 // 0x0068(0x0030) (Edit)
	struct FStatus                                     StatusToApply;                                            // 0x0098(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_ApplyStatusComposite"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_AthenaMoveTo
// 0x0018 (0x00B8 - 0x00A0)
class UBTTask_AthenaMoveTo : public UBTTask_MoveTo
{
public:
	bool                                               ShouldFailBeforeSlowDown;                                 // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              ExitBeforeSlowDownDistanceTolerance;                      // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldOverrideMaxSpeedToSlow;                             // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                     // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MaintainFacingBeforeMove;                                 // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_AthenaMoveTo"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceChange
// 0x0008 (0x00C0 - 0x00B8)
class UBTTask_MoveToFailOnDistanceChange : public UBTTask_AthenaMoveTo
{
public:
	bool                                               FailOnDistanceBeingLess;                                  // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              FailDistance;                                             // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_MoveToFailOnDistanceChange"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors
// 0x0010 (0x00D0 - 0x00C0)
class UBTTask_MoveToFailOnDistanceToSeenActors : public UBTTask_MoveToFailOnDistanceChange
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged
// 0x0028 (0x00E8 - 0x00C0)
class UBTTask_MoveToFailOnDistanceToTargetChanged : public UBTTask_MoveToFailOnDistanceChange
{
public:
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x00C0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToMovingLocation
// 0x0010 (0x00C8 - 0x00B8)
class UBTTask_MoveToMovingLocation : public UBTTask_AthenaMoveTo
{
public:
	float                                              MinimumLocationMovementForRePath;                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumTimeBeforeRePath;                                  // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsContinuous;                                             // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_MoveToMovingLocation"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_AthenaWait
// 0x0098 (0x00F8 - 0x0060)
class UBTTask_AthenaWait : public UBTTaskNode
{
public:
	bool                                               UseMinMax;                                                // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   Min;                                                      // 0x0068(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   Max;                                                      // 0x0098(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   FixedWaitTime;                                            // 0x00C8(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_AthenaWait"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_AthenaWaitWithFloor
// 0x0030 (0x0128 - 0x00F8)
class UBTTask_AthenaWaitWithFloor : public UBTTask_AthenaWait
{
public:
	struct FAIDataProviderFloatValue                   Floor;                                                    // 0x00F8(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_AthenaWaitWithFloor"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_BurrowAbilityTriggerEruptAreaFromBlackboard
// 0x0000 (0x0060 - 0x0060)
class UBTTask_BurrowAbilityTriggerEruptAreaFromBlackboard : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_BurrowAbilityTriggerEruptAreaFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_BurrowIntoGround
// 0x0000 (0x0060 - 0x0060)
class UBTTask_BurrowIntoGround : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_BurrowIntoGround"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_ClearBlackboardValue
// 0x0000 (0x0088 - 0x0088)
class UBTTask_ClearBlackboardValue : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_ClearBlackboardValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_ClearPerceptualData
// 0x0000 (0x0060 - 0x0060)
class UBTTask_ClearPerceptualData : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_ClearPerceptualData"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard
// 0x0078 (0x00D8 - 0x0060)
class UBTTask_CopyAIInteractionPointAndFocusToBlackboard : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SourceInteractable;                                       // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      InteractionPosition;                                      // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      InteractionFocusPosition;                                 // 0x00B0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_CopyBlackboardActor
// 0x0050 (0x00B0 - 0x0060)
class UBTTask_CopyBlackboardActor : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                         // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x0088(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_CopyBlackboardActor"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_CopyBlackboardVector
// 0x0050 (0x00B0 - 0x0060)
class UBTTask_CopyBlackboardVector : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                         // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x0088(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_CopyBlackboardVector"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_DetermineFollowUpAIAbility
// 0x0008 (0x0068 - 0x0060)
class UBTTask_DetermineFollowUpAIAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityTypeToFollowUp;                                  // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_DetermineFollowUpAIAbility"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_ExecuteAIAbility
// 0x0008 (0x0068 - 0x0060)
class UBTTask_ExecuteAIAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityType;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_ExecuteAIAbility"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_GetCurrentHealth
// 0x0000 (0x0088 - 0x0088)
class UBTTask_GetCurrentHealth : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_GetCurrentHealth"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_IgnoreActorTemporarily
// 0x0008 (0x0090 - 0x0088)
class UBTTask_IgnoreActorTemporarily : public UBTTask_BlackboardBase
{
public:
	float                                              TimeToForget;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_IgnoreActorTemporarily"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_IncrementBlackboardFloatValue
// 0x0030 (0x00B8 - 0x0088)
class UBTTask_IncrementBlackboardFloatValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   FloatValueDelta;                                          // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_IncrementBlackboardFloatValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_IncrementBlackboardIntValue
// 0x0030 (0x00B8 - 0x0088)
class UBTTask_IncrementBlackboardIntValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderIntValue                     IntegerValueDelta;                                        // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_IncrementBlackboardIntValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_InteractWith
// 0x0008 (0x0090 - 0x0088)
class UBTTask_InteractWith : public UBTTask_BlackboardBase
{
public:
	class UClass*                                      NotificationId;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_InteractWith"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToTarget
// 0x0030 (0x00D0 - 0x00A0)
class UBTTask_MoveToTarget : public UBTTask_MoveTo
{
public:
	float                                              MaxDistFromDestinationPosToTargetPos;                     // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                     // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x00A8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_MoveToTarget"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_NetworkTriggerAnim
// 0x0010 (0x0070 - 0x0060)
class UBTTask_NetworkTriggerAnim : public UBTTaskNode
{
public:
	class UAnimSequence*                               Anim;                                                     // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimLength;                                               // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_NetworkTriggerAnim"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_NOP
// 0x0008 (0x0068 - 0x0060)
class UBTTask_NOP : public UBTTaskNode
{
public:
	int                                                Id;                                                       // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_NOP"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_PlayCustomMontageId
// 0x0010 (0x0070 - 0x0060)
class UBTTask_PlayCustomMontageId : public UBTTaskNode
{
public:
	struct FCustomAnimationMontageId                   CustomAnimationMontageId;                                 // 0x0060(0x0008) (Edit)
	float                                              TimeToWaitOnServer;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_PlayCustomMontageId"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_PlayMontage
// 0x0010 (0x0070 - 0x0060)
class UBTTask_PlayMontage : public UBTTaskNode
{
public:
	class UObject*                                     MontageToPlay;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAsDynamicMontage;                                     // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_PlayMontage"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_RequestDespawn
// 0x0000 (0x0060 - 0x0060)
class UBTTask_RequestDespawn : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_RequestDespawn"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetAIStrategy
// 0x0008 (0x0068 - 0x0060)
class UBTTask_SetAIStrategy : public UBTTaskNode
{
public:
	class UClass*                                      NewStrategy;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetAIStrategy"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray
// 0x0010 (0x0070 - 0x0060)
class UBTTask_SetAIStrategyFromWeightedArray : public UBTTaskNode
{
public:
	TArray<struct FWeightedAIStrategyChance>           WeightedStrategies;                                       // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardActor
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardActor : public UBTTask_BlackboardBase
{
public:
	class AActor*                                      Actor;                                                    // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardActor"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardBoolValue
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardBoolValue : public UBTTask_BlackboardBase
{
public:
	bool                                               NewValue;                                                 // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardBoolValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardClassValue
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardClassValue : public UBTTask_BlackboardBase
{
public:
	class UClass*                                      ClassValue;                                               // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardClassValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardEQSValue
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardEQSValue : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   EQS;                                                      // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardEQSValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValue
// 0x0030 (0x00B8 - 0x0088)
class UBTTask_SetBlackboardFloatValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   FloatValue;                                               // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardFloatValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax
// 0x0060 (0x00E8 - 0x0088)
class UBTTask_SetBlackboardFloatValueFromMinMax : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   MinValue;                                                 // 0x0088(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MaxValue;                                                 // 0x00B8(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray
// 0x0030 (0x00B8 - 0x0088)
class UBTTask_SetBlackboardFloatValueFromWeightedArray : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderStructValue                  WeightedArrayFromParams;                                  // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardIntValue
// 0x0030 (0x00B8 - 0x0088)
class UBTTask_SetBlackboardIntValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderIntValue                     IntValue;                                                 // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardIntValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetFollowUpAbility
// 0x0008 (0x0068 - 0x0060)
class UBTTask_SetFollowUpAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityType;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetFollowUpAbility"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetInHiddenActionState
// 0x0008 (0x0068 - 0x0060)
class UBTTask_SetInHiddenActionState : public UBTTaskNode
{
public:
	bool                                               EnableHiddenActionState;                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetInHiddenActionState"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetIsHeadingOffNavMeshCheck
// 0x0008 (0x0068 - 0x0060)
class UBTTask_SetIsHeadingOffNavMeshCheck : public UBTTaskNode
{
public:
	bool                                               DisableIsHeadingOffNavMeshCheck;                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetIsHeadingOffNavMeshCheck"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot
// 0x0078 (0x00D8 - 0x0060)
class UBTTask_SetupAITargetWeaponForNextShot : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      Interactable;                                             // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                  // 0x00B0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetVelocity
// 0x0010 (0x0098 - 0x0088)
class UBTTask_SetVelocity : public UBTTask_BlackboardBase
{
public:
	bool                                               UseBlackboardKey;                                         // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector                                     NewVelocity;                                              // 0x008C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetVelocity"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SpawnActorAndStore
// 0x0040 (0x00A0 - 0x0060)
class UBTTask_SpawnActorAndStore : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackBoardKeyNameToStoreActor;                            // 0x0060(0x0028) (Edit)
	class UClass*                                      ActorToSpawn;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnOffset;                                              // 0x0090(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SpawnActorAndStore"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_StopMovementImmediately
// 0x0000 (0x0060 - 0x0060)
class UBTTask_StopMovementImmediately : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_StopMovementImmediately"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_StorePawnLocationInBlackboard
// 0x0000 (0x0088 - 0x0088)
class UBTTask_StorePawnLocationInBlackboard : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_StorePawnLocationInBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_TeleportTo
// 0x0008 (0x0090 - 0x0088)
class UBTTask_TeleportTo : public UBTTask_BlackboardBase
{
public:
	bool                                               UseNavMesh;                                               // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_TeleportTo"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_TriggerNotification
// 0x0008 (0x0068 - 0x0060)
class UBTTask_TriggerNotification : public UBTTaskNode
{
public:
	class UClass*                                      NotificationId;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_TriggerNotification"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_UnwieldCurrentWeapon
// 0x0008 (0x0068 - 0x0060)
class UBTTask_UnwieldCurrentWeapon : public UBTTaskNode
{
public:
	bool                                               WaitForSuccessfulUnwield;                                 // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldUnwieldFast;                                        // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_UnwieldCurrentWeapon"));
		return ptr;
	}

};


// Class AthenaAI.BurrowInterface
// 0x0000 (0x0028 - 0x0028)
class UBurrowInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BurrowInterface"));
		return ptr;
	}

};


// Class AthenaAI.BurrowComponent
// 0x0040 (0x0108 - 0x00C8)
class UBurrowComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UClass*                                      BurrowCrackClass;                                         // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BurrowEruptClass;                                         // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurrowFadeoutTime;                                        // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<class ABurrowCrack*>                        BurrowCracks;                                             // 0x00E8(0x0010) (ZeroConstructor, Transient)
	class ABurrowEruptBase*                            BurrowErupt;                                              // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BurrowComponent"));
		return ptr;
	}

};


// Class AthenaAI.CoralShieldVFXComponent
// 0x00E0 (0x01A8 - 0x00C8)
class UCoralShieldVFXComponent : public UActorComponent
{
public:
	class UParticleSystem*                             VFXAsset;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       VfxSocketName;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedVFXSystem;                                         // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ECoralShieldVFXRole>                   CurrentCoralShieldRole;                                   // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	class UCurveFloat*                                 OffToOnCurve;                                             // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffToOnDuration;                                          // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 OnToOffCurve;                                             // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnToOffDuration;                                          // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OffToOnParamOverrideName;                                 // 0x0104(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OnToOffParamOverrideName;                                 // 0x010C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ReceiverMeshComponentName;                                // 0x0114(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CasterMeshComponentName;                                  // 0x011C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            OverriddenMaterialsForReceive;                            // 0x0128(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInstanceDynamic*>            OverriddenMaterialsForCast;                               // 0x0138(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x60];                                      // 0x0148(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.CoralShieldVFXComponent"));
		return ptr;
	}


	void OnRep_CurrentCoralShieldRole();
};


// Class AthenaAI.CustomSkeletonAnimationDataList
// 0x0010 (0x0038 - 0x0028)
class UCustomSkeletonAnimationDataList : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               CustomAnimationAssets;                                    // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.CustomSkeletonAnimationDataList"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_PositionFromBlackboard
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryContext_PositionFromBlackboard : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_PositionFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_ContextLocationFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_HomePositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_KnockbackPosFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_ThrowableTargetPositionFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_ThrowableTargetPositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_ThrowableTargetPositionFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_SeenActors
// 0x0010 (0x0038 - 0x0028)
class UEnvQueryContext_SeenActors : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_SeenActors"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_SeenActorsProjectedToGround
// 0x0030 (0x0058 - 0x0028)
class UEnvQueryContext_SeenActorsProjectedToGround : public UEnvQueryContext
{
public:
	TArray<class AActor*>                              SeenActors;                                               // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_SeenActorsProjectedToGround"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_SpawnedForActorFromBlackboard : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetActorFromBlackboard : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetActorFromBlackboardPredictedLocation : public UEnvQueryContext_TargetActorFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_TargetActorFromParams
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetActorFromParams : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_TargetActorFromParams"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_AIRegionLocations
// 0x0010 (0x0060 - 0x0050)
class UEnvQueryGenerator_AIRegionLocations : public UEnvQueryGenerator
{
public:
	bool                                               UseOverrideSpawnType;                                     // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FName                                       OverrideSpawnType;                                        // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_AIRegionLocations"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_FromContext
// 0x0008 (0x0058 - 0x0050)
class UEnvQueryGenerator_FromContext : public UEnvQueryGenerator
{
public:
	class UClass*                                      Context;                                                  // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_FromContext"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_Line
// 0x00A8 (0x0138 - 0x0090)
class UEnvQueryGenerator_Line : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      FromContext;                                              // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ToContext;                                                // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   PointSpacing;                                             // 0x00A0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumExtraPairsOfParallelLines;                             // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ParallelLineSpacing;                                      // 0x0100(0x0030) (Edit, DisableEditOnInstance)
	float                                              MaxValidLineLength;                                       // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ForceIncludeEndPoint;                                     // 0x0134(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ProjectPointsToWaterSurface;                              // 0x0135(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0136(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_Line"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_PointsAtContext
// 0x0008 (0x0098 - 0x0090)
class UEnvQueryGenerator_PointsAtContext : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      Context;                                                  // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_PointsAtContext"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_Sphere
// 0x00D0 (0x0160 - 0x0090)
class UEnvQueryGenerator_Sphere : public UEnvQueryGenerator_ProjectedPoints
{
public:
	TArray<struct FAIDataProviderFloatValue>           Radiuses;                                                 // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfVerticalCircles;                                  // 0x00A0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfHorizontalCircles;                                // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      DefineFirstPointDirection : 1;                            // 0x0100(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FEnvDirection                               FirstPointDirection;                                      // 0x0108(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      Centre;                                                   // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   ZOffsetFromCentre;                                        // 0x0130(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_Sphere"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_WaterArc
// 0x0180 (0x0210 - 0x0090)
class UEnvQueryGenerator_WaterArc : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      Origin;                                                   // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderIntValue                     NumberOfArcsToGenerate;                                   // 0x0098(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MinArcRadius;                                             // 0x00C8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MaxArcRadius;                                             // 0x00F8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MinArcTiltDegrees;                                        // 0x0128(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MaxArcTiltDegrees;                                        // 0x0158(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MinArcPercentage;                                         // 0x0188(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MaxArcPercentage;                                         // 0x01B8(0x0030) (Edit, DisableEditOnInstance)
	bool                                               IncludeDirectArcToTarget;                                 // 0x01E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	class UClass*                                      DirectArcTarget;                                          // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x01F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_WaterArc"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_WaterDonut
// 0x0160 (0x01F0 - 0x0090)
class UEnvQueryGenerator_WaterDonut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x00F0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x0120(0x0030) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x0150(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0170(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ZOffsetFromCentre;                                        // 0x01A0(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Center;                                                   // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01D8(0x0001)
	unsigned char                                      ProjectPointsToWaterSurface : 1;                          // 0x01D8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	class UClass*                                      WaterPlaneSourceContext;                                  // 0x01E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ApplyZOffsetToProjectPoints : 1;                          // 0x01E8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_WaterDonut"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing
// 0x0078 (0x0108 - 0x0090)
class UEnvQueryGenerator_WaterMultiDeckerRing : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   Radius;                                                   // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FAIDataProviderFloatValue>           ZOffsetOfRingsFromContext;                                // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Center;                                                   // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_HasLineOfSight
// 0x0010 (0x0180 - 0x0170)
class UEnvQueryTest_HasLineOfSight : public UEnvQueryTest
{
public:
	TEnumAsByte<ETraceDirection>                       TraceDirection;                                           // 0x0170(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	class UClass*                                      Context;                                                  // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryTest_HasLineOfSight"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_IsAngleInRange2D
// 0x00A0 (0x0210 - 0x0170)
class UEnvQueryTest_IsAngleInRange2D : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                    // 0x0170(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                    // 0x0190(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MinAngleDegrees;                                          // 0x01B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MaxAngleDegrees;                                          // 0x01E0(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryTest_IsAngleInRange2D"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_WaterHeight
// 0x0010 (0x0180 - 0x0170)
class UEnvQueryTest_WaterHeight : public UEnvQueryTest
{
public:
	float                                              WaterHeightCheckOffset;                                   // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	class UClass*                                      ActorWithWaterPlaneContext;                               // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryTest_WaterHeight"));
		return ptr;
	}

};


// Class AthenaAI.HealthGemComponent
// 0x0138 (0x0200 - 0x00C8)
class UHealthGemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x00C8(0x0118) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            OverridenMaterials;                                       // 0x01E0(0x0010) (ZeroConstructor)
	struct FName                                       EmissiveMaterialParameterName;                            // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BuildMaterialMapOnBeginPlay;                              // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.HealthGemComponent"));
		return ptr;
	}

};


// Class AthenaAI.IsAIOfClassStatCondition
// 0x0010 (0x0040 - 0x0030)
class UIsAIOfClassStatCondition : public UTargetedStatCondition
{
public:
	TArray<class UClass*>                              AIClasses;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.IsAIOfClassStatCondition"));
		return ptr;
	}

};


// Class AthenaAI.IsAIOfSkillsetStatCondition
// 0x0010 (0x0040 - 0x0030)
class UIsAIOfSkillsetStatCondition : public UTargetedStatCondition
{
public:
	TArray<class UAthenaAIControllerParamsDataAsset*>  AISkillsets;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.IsAIOfSkillsetStatCondition"));
		return ptr;
	}

};


// Class AthenaAI.PeriodicAINoiseEventComponent
// 0x0048 (0x0110 - 0x00C8)
class UPeriodicAINoiseEventComponent : public UActorComponent
{
public:
	struct FName                                       NoiseTag;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NoiseRangeBasedOnMovementSpeed;                           // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              ConstantNoiseRange;                                       // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MovementSpeedToNoiseRange;                                // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00E8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PeriodicAINoiseEventComponent"));
		return ptr;
	}

};


// Class AthenaAI.PlayerProximityObservedSpawnContextProvider
// 0x0020 (0x0048 - 0x0028)
class UPlayerProximityObservedSpawnContextProvider : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PlayerProximityObservedSpawnContextProvider"));
		return ptr;
	}

};


// Class AthenaAI.SimpleAIRegion
// 0x0038 (0x0060 - 0x0028)
class USimpleAIRegion : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SimpleAIRegion"));
		return ptr;
	}

};


// Class AthenaAI.SpawnContextProviderZone
// 0x0018 (0x03E8 - 0x03D0)
class ASpawnContextProviderZone : public AActor
{
public:
	TArray<struct FName>                               SpawnContextIDs;                                          // 0x03D0(0x0010) (Edit, ZeroConstructor)
	class UBoxComponent*                               BoundingBox;                                              // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SpawnContextProviderZone"));
		return ptr;
	}


	void RemoveContextsFromTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex);
	void AddContextsToTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult);
};


// Class AthenaAI.BaseSpawnBlockingBehaviourStrategy
// 0x0000 (0x0048 - 0x0048)
class UBaseSpawnBlockingBehaviourStrategy : public USpawnerBehaviourStrategy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BaseSpawnBlockingBehaviourStrategy"));
		return ptr;
	}

};


// Class AthenaAI.SirenEncounterSpawnBlockingBehaviourStrategy
// 0x0010 (0x0058 - 0x0048)
class USirenEncounterSpawnBlockingBehaviourStrategy : public UBaseSpawnBlockingBehaviourStrategy
{
public:
	float                                              ChanceToSpawn;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x004C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SirenEncounterSpawnBlockingBehaviourStrategy"));
		return ptr;
	}

};


// Class AthenaAI.StatusResponseSetBlackboardBoolKey
// 0x0010 (0x0040 - 0x0030)
class UStatusResponseSetBlackboardBoolKey : public UStatusResponse
{
public:
	struct FName                                       BlackboardBoolKeyName;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bValueWhenActive;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldClearKeyOnEnd;                                      // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.StatusResponseSetBlackboardBoolKey"));
		return ptr;
	}

};


// Class AthenaAI.StatusResponseSetBlackboardClassKey
// 0x0020 (0x0050 - 0x0030)
class UStatusResponseSetBlackboardClassKey : public UStatusResponse
{
public:
	struct FName                                       BlackboardClassKeyName;                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ValueWhenActive;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SetValueOnDeactivate;                                     // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UClass*                                      ValueWhenDeactivated;                                     // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.StatusResponseSetBlackboardClassKey"));
		return ptr;
	}

};


// Class AthenaAI.StatusResponseSetBlackboardFloatKey
// 0x0018 (0x0048 - 0x0030)
class UStatusResponseSetBlackboardFloatKey : public UStatusResponse
{
public:
	struct FName                                       BlackboardFloatKeyName;                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ValueWhenActive;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldClearKeyOnEnd;                                      // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x003D(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.StatusResponseSetBlackboardFloatKey"));
		return ptr;
	}

};


// Class AthenaAI.VulnerabilityDuringAIStrategyComponent
// 0x0088 (0x0150 - 0x00C8)
class UVulnerabilityDuringAIStrategyComponent : public UActorComponent
{
public:
	TArray<struct FAIStrategyVulnerabilityData>        StrategyVulnerabilities;                                  // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UHealthComponent*                            HealthComponent;                                          // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x00E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.VulnerabilityDuringAIStrategyComponent"));
		return ptr;
	}

};


// Class AthenaAI.WaterbasedAISupplier
// 0x0008 (0x03D8 - 0x03D0)
class AWaterbasedAISupplier : public AActor
{
public:
	class UAISpawnerList*                              Spawners;                                                 // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.WaterbasedAISupplier"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIDebugFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIDebugFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIDebugFunctionLibrary"));
		return ptr;
	}


	static void SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, TAssetPtr<class UClass> AIItemSpawnComponent, class UClass* ClassId, TAssetPtr<class UAthenaAIAmmoDataAsset> Ammo, const struct FVector& Pos, const struct FRotator& Rot, const struct FName& Region, class AActor* TriggerActor, const struct FName& NavMeshOverride, float Delay);
	static struct FAIEncounterSpecification SpawnAI(class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh);
	static void SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner);
	static void KillAllDebugAISpawners();
	static int GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner);
	static void EnableMaximumSightSettings(class AAthenaAIController* AIController);
	static void EnableBehaviorTreeLogging(class UObject* WorldContext);
	static void DespawnAIPawn(class APawn* Pawn);
	static void CreateAISpawnerAtPosition(class UObject* WorldContext, class UAISpawner* SpawnerAsset, const struct FVector& Pos);
	static void CreateAISpawnerAtActor(class UObject* WorldContext, class UAISpawner* SpawnerAsset, class AActor* SpawnLocationActor);
	static struct FVector CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
};


// Class AthenaAI.DebugAISpawnerCreator
// 0x0058 (0x0428 - 0x03D0)
class ADebugAISpawnerCreator : public AActor
{
public:
	class UAISpawner*                                  SpawnerTemplate;                                          // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TriggerRadius;                                            // 0x03D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class UAISpawner*                                  Spawner;                                                  // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAIProximityPlayerTracker*                   ProximityPlayerTracker;                                   // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class USimpleAIRegion*                             Region;                                                   // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x03F8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.DebugAISpawnerCreator"));
		return ptr;
	}

};


// Class AthenaAI.AIDioramaLocationSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIDioramaLocationSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDioramaLocationSourceInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIDiorama
// 0x0228 (0x05F8 - 0x03D0)
class AAIDiorama : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASceneDialogueCoordinator*                   SpawnedDialogueCoordinator;                               // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneDialogueData*                          DialogueData;                                             // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIDioramaPawn>                      LinkedActors;                                             // 0x03F0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x1F8];                                     // 0x0400(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDiorama"));
		return ptr;
	}

};


// Class AthenaAI.AIDioramaCategory
// 0x0000 (0x0028 - 0x0028)
class UAIDioramaCategory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDioramaCategory"));
		return ptr;
	}

};


// Class AthenaAI.AIDioramaController
// 0x0080 (0x00A8 - 0x0028)
class UAIDioramaController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAIDioramaDesc*                              AIDioramaDesc;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USceneDialogueData*                          DialogueData;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIDioramaPawn>                      SpawnedDioramaPawns;                                      // 0x0040(0x0010) (ZeroConstructor)
	class AAIDiorama*                                  AIDiorama;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  Spawner;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0060(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDioramaController"));
		return ptr;
	}

};


// Class AthenaAI.AIDioramaDesc
// 0x0018 (0x0040 - 0x0028)
class UAIDioramaDesc : public UDataAsset
{
public:
	TArray<struct FAIDioramaRoleDesc>                  RoleList;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	class USceneDialogueData*                          DialogueData;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDioramaDesc"));
		return ptr;
	}

};


// Class AthenaAI.AIDioramaLocationSourceComponent
// 0x0080 (0x0330 - 0x02B0)
class UAIDioramaLocationSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET
	TArray<struct FAIDioramaLocationSourceComponentData> DioramaRelativeLocations;                                 // 0x02C0(0x0010) (Edit, ZeroConstructor)
	float                                              DialogueTriggerRadius;                                    // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DialogueSubtitleBuffer;                                   // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AISenseRadiusForDebugDisplay;                             // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              Categories;                                               // 0x02E0(0x0010) (Edit, ZeroConstructor)
	struct FColor                                      DebugTriggerRadiusColor;                                  // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DebugSubtitleRadiusColor;                                 // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      AISenseRadiusColor;                                       // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	class USphereComponent*                            DialogueTriggerRadiusSphere;                              // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DialogueSubtitleRadiusSphere;                             // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            AISenseRadiusSphere;                                      // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0318(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDioramaLocationSourceComponent"));
		return ptr;
	}

};


// Class AthenaAI.AIDioramaServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIDioramaServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDioramaServiceInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIDioramaService
// 0x0068 (0x0438 - 0x03D0)
class AAIDioramaService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	TMap<class UClass*, struct FDioramaCategoryEntries> AllDioramasLocationsByCategory;                           // 0x03D8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0428(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDioramaService"));
		return ptr;
	}

};


// Class AthenaAI.DebugDioramaCreator
// 0x0018 (0x0440 - 0x0428)
class ADebugDioramaCreator : public ADebugAISpawnerCreator
{
public:
	class UAIDioramaDesc*                              AIDioramaDesc;                                            // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIDioramaLocationSourceComponent*           Location;                                                 // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIDioramaController*                        AIDioramaController;                                      // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.DebugDioramaCreator"));
		return ptr;
	}

};


// Class AthenaAI.InDioramaAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UInDioramaAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.InDioramaAIStrategyId"));
		return ptr;
	}

};


// Class AthenaAI.AthenaSwimmingAIController
// 0x00E0 (0x09D0 - 0x08F0)
class AAthenaSwimmingAIController : public AAthenaAIController
{
public:
	class USwimmingPathFollowingComponent*             SwimmingPathFollowingComponent;                           // 0x08F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               IgnoreTargetsOutOfWater;                                  // 0x08F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08F9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 DistOfAttackerVsChanceToPursue;                           // 0x0900(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               TimersToZeroIfStartingRevengeAttack;                      // 0x0908(0x0010) (Edit, ZeroConstructor)
	struct FName                                       DespawnRequiredBlackboardKey;                             // 0x0918(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DespawnRequiredReasonBlackboardKey;                       // 0x0920(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PathingFailedWeight;                                      // 0x0928(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PathingFailedThresholdToDespawn;                          // 0x092C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0930(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaSwimmingAIController"));
		return ptr;
	}


	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* InControllerParametersAsset, class APawn* InPawn);
};


// Class AthenaAI.BTDecorator_NearSurfaceOfWater
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_NearSurfaceOfWater : public UBTDecorator
{
public:
	float                                              DistanceFromSurface;                                      // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ReverseLogic;                                             // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_NearSurfaceOfWater"));
		return ptr;
	}

};


// Class AthenaAI.BTService_SetFloatToTheSurfaceWhileInBranch
// 0x0008 (0x0078 - 0x0070)
class UBTService_SetFloatToTheSurfaceWhileInBranch : public UBTService
{
public:
	bool                                               FloatToTheSurfaceWhileInBranch;                           // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_SetFloatToTheSurfaceWhileInBranch"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetFloatToTheSurface
// 0x0008 (0x0068 - 0x0060)
class UBTTask_SetFloatToTheSurface : public UBTTaskNode
{
public:
	bool                                               ShouldFloatToTheSurface;                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetFloatToTheSurface"));
		return ptr;
	}

};


// Class AthenaAI.SwimmingCreatureMovementAnimationInterface
// 0x0000 (0x0028 - 0x0028)
class USwimmingCreatureMovementAnimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SwimmingCreatureMovementAnimationInterface"));
		return ptr;
	}

};


// Class AthenaAI.SwimmingPathFollowingComponent
// 0x0128 (0x01F0 - 0x00C8)
class USwimmingPathFollowingComponent : public UActorComponent
{
public:
	float                                              DirectSwimmingDotToTarget;                                // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArcToTargetDotToTarget;                                   // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTargetPitchFactor;                                     // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPosDeltaSqToRepathToMovingTarget;                      // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPosDeltaSqToInvalidateFixedLocation;                   // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchBezierControlPointsLengthFactor;                     // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeMovingAwayFromTargetPosToFlagFailure;                 // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LineOfSightCollisionProfile;                              // 0x00E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineOfSightSphereCastRadius;                              // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineOfSightCheckInterval;                                 // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstLoSTriggerTimeInNewPath;                             // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstLoSTriggerTimeInRePath;                              // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugOnServer;                                        // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             CollisionTypesToDoPathUpdate;                             // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USwimmingCreatureMovementComponent*          MovementComponent;                                        // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AAthenaSwimmingAIController*                 SwimmingAIController;                                     // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EArcFollowingMode>                     ArcFollowingMode;                                         // 0x0120(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0121(0x0057) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x70];                                      // 0x0180(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SwimmingPathFollowingComponent"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimTo
// 0x0078 (0x0100 - 0x0088)
class UBTTask_SwimTo : public UBTTask_BlackboardBase
{
public:
	bool                                               WantsToReportPathFailure;                                 // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      PathFailureCounter;                                       // 0x0090(0x0028) (Edit)
	float                                              AcceptableRadius;                                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingGoalCheckMode>                GoalCheckMode;                                            // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingArcMode>                      ArcMode;                                                  // 0x00BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EArcToTargetDirection>                 ArcToTargetDirection;                                     // 0x00BE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETaskReaction>                         Swim3DCrestingReaction;                                   // 0x00BF(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSpatialOffset                              OffsetFromTargetActor;                                    // 0x00C0(0x0008) (Edit)
	TEnumAsByte<ESwimmingSyncMode>                     SwimSyncMode;                                             // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TrackTargetActor;                                         // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      TrackedTargetActorKey;                                    // 0x00D0(0x0028) (Edit)
	float                                              TimeToSlowDownAndStop;                                    // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingLineOfSightTest>              LineOfSightTestMode;                                      // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SwimTo"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimTurnOnTheSpot
// 0x0010 (0x0098 - 0x0088)
class UBTTask_SwimTurnOnTheSpot : public UBTTask_BlackboardBase
{
public:
	float                                              MaxTurnSpringAccel;                                       // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeUntilMaxTurnSpringAccel;                              // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleDeltaToAcceptFinalRotation;                          // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SwimTurnOnTheSpot"));
		return ptr;
	}

};


// Class AthenaAI.TinySharkTelemetryComponent
// 0x00C0 (0x0188 - 0x00C8)
class UTinySharkTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x00C8(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkTelemetryComponent"));
		return ptr;
	}

};


// Class AthenaAI.TinySharkExperience
// 0x03A0 (0x0770 - 0x03D0)
class ATinySharkExperience : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	float                                              RelevancyDistance;                                        // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrackingMovementCheckInterval;                            // 0x03DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   TrackingMovementValidQuery;                               // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x03E8(0x00A0) MISSED OFFSET
	class UAIOnDemandSpawner*                          TinySharkSpawner;                                         // 0x0488(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ASharkPawn*                                  TinySharkPawn;                                            // 0x0490(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       HealthRTPC;                                               // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04A0(0x0008) MISSED OFFSET
	struct FTinySharkParams                            Params;                                                   // 0x04A8(0x00B8) (Transient)
	class UTinySharkTelemetryComponent*                TinySharkTelemetryComponent;                              // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AShip*                                       TrackedShip;                                              // 0x0568(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x80];                                      // 0x0570(0x0080) MISSED OFFSET
	struct FEncounterParams                            SightingEncounterParams;                                  // 0x05F0(0x000C) (Edit, DisableEditOnInstance)
	struct FEncounterParams                            CloseEncounterParams;                                     // 0x05FC(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x140];                                     // 0x0608(0x0140) MISSED OFFSET
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> CachedControllerParamsAsset;                              // 0x0748(0x0020)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0768(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkExperience"));
		return ptr;
	}


	void TinySharkPawnDestroyed(class AActor* InDestroyedActor);
	void OnRep_TinySharkPawn(class ASharkPawn* LastTinySharkPawn);
	class AShip* GetTrackedShip();
	TEnumAsByte<ETinySharkState> GetCurrentState();
	TEnumAsByte<ETinySharkActiveState> GetActiveState();
};


// Class AthenaAI.TinySharkParamsDataAsset
// 0x00B8 (0x00E0 - 0x0028)
class UTinySharkParamsDataAsset : public UDataAsset
{
public:
	struct FTinySharkParams                            Params;                                                   // 0x0028(0x00B8) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.TinySharkServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UTinySharkServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkServiceInterface"));
		return ptr;
	}

};


// Class AthenaAI.TinySharkService
// 0x02B0 (0x0680 - 0x03D0)
class ATinySharkService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03D0(0x0020) MISSED OFFSET
	class UTinySharkServiceParamsDataAsset*            TinySharkServiceParams;                                   // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x210];                                     // 0x03F8(0x0210) MISSED OFFSET
	TArray<class ATinySharkExperience*>                TinySharkExperiences;                                     // 0x0608(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x68];                                      // 0x0618(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkService"));
		return ptr;
	}


	bool RequestTinySharkWithShip(class AShip* InTrackedShip, int OverrideControllerParamIndex, int PartIndex);
	bool RequestTinySharkWithLocation(const struct FVector& SpawnLocation, int PartIndex);
	void DismissAllTinySharks();
	bool CanSpawnTinySharkExperience();
};


// Class AthenaAI.TinySharkServiceParamsDataAsset
// 0x0030 (0x0058 - 0x0028)
class UTinySharkServiceParamsDataAsset : public UDataAsset
{
public:
	struct FTinySharkServiceParams                     Params;                                                   // 0x0028(0x0028) (Edit, DisableEditOnInstance)
	int                                                MaxNumTinySharkExperiences;                               // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkServiceParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.Pet
// 0x0430 (0x0C20 - 0x07F0)
class APet : public AAICreatureCharacter
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x07F0(0x0090) MISSED OFFSET
	class UPetWieldableReactMappingsDataAsset*         WieldableReactMappingsAsset;                              // 0x0880(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVelocityForLocomotionAnimation;                        // 0x0888(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanFly;                                                   // 0x088C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x088D(0x0003) MISSED OFFSET
	TArray<struct FPetFlyingStrategyProperties>        FlyingStrategyProperties;                                 // 0x0890(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              FlyingLandTime;                                           // 0x08A0(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08A4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FlyingLandCurve;                                          // 0x08A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingTakeOffTime;                                        // 0x08B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FlyingTakeOffCurve;                                       // 0x08B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 MidFlightAdjustmentTimerRange;                            // 0x08C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 MidFlightAdjustmentCurve;                                 // 0x08D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 MidFlightTimeToDistanceAdjustmentCurve;                   // 0x08D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FiredFromActorCollision;                                  // 0x08E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 FiredFromActorSFX;                                        // 0x08E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPetDitherComponent*                         DitherComponent;                                          // 0x08F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              MinimumDamageForHealthReact;                              // 0x08F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistForWaterBucketToClean;                             // 0x08FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumDurationUntilPetCanDespawnConcealed;               // 0x0900(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultNamePlateHeight;                                   // 0x0904(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlternateNamePlateHeight;                                 // 0x0908(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x090C(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> StatesToUseAlternateNamePlatePos;                         // 0x0910(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FFloatRange                                 PetTimeSpentSad;                                          // 0x0920(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDebugPetStateDescriptor>              DebugStateDescriptor;                                     // 0x0930(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0931(0x0007) MISSED OFFSET
	class UAINameplateComponent*                       AINameplateComponent;                                     // 0x0938(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFeedingComponent*                           FeedingComponent;                                         // 0x0940(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStarvingComponent*                          StarvingComponent;                                        // 0x0948(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCleanlinessComponent*                       CleanlinessComponent;                                     // 0x0950(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCannonSquashComponent*                      CannonSquashComponent;                                    // 0x0958(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPetMovementRequest                         ReplicatedMovementRequest;                                // 0x0960(0x000C) (Net)
	float                                              TargetMeshRoll;                                           // 0x096C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0970(0x0010) MISSED OFFSET
	float                                              DefaultShipTurnRateModifier;                              // 0x0980(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0984(0x0004) MISSED OFFSET
	TArray<struct FPetTurnRateModifier>                TurnRateModifierList;                                     // 0x0988(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> LocomotingMovementStates;                                 // 0x0998(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> RequestIdleOrMovementValidMovementStates;                 // 0x09A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxRollAngle;                                             // 0x09B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayForDisablingMovementOnIdle;                          // 0x09BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IslandDustRatePerSecond;                                  // 0x09C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x09C4(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               InHangout;                                                // 0x09D4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               PerchedInHangout;                                         // 0x09D5(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               ResetRollAndZOffset;                                      // 0x09D6(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldIgnoreTooltipDisplayOffset;                         // 0x09D7(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x09D8(0x0008) MISSED OFFSET
	struct FPetTurnToFaceData                          PetTurnToFaceData;                                        // 0x09E0(0x0020) (Net)
	unsigned char                                      UnknownData09[0x18];                                      // 0x0A00(0x0018) MISSED OFFSET
	class UAIPartsRetrievalComponent*                  AIPartsRetrievalComponent;                                // 0x0A18(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetPartCustomisationComponent*              PetPartCustomisationComponent;                            // 0x0A20(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    LightWeightStatusEffectManagerComponent;                  // 0x0A28(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetTelemetryComponent*                      TelemetryComponent;                                       // 0x0A30(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPetSicknessComponent*                       SicknessComponent;                                        // 0x0A38(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWaterExposureComponent*                     WaterExposureComponent;                                   // 0x0A40(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimationDataStoreComponent*                AnimationDataStoreComponent;                              // 0x0A48(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class AActor*                                      SpawnedForShip;                                           // 0x0A50(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PetOwner;                                                 // 0x0A58(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AItemInfo*                                   PetInfo;                                                  // 0x0A60(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x0A68(0x0008) MISSED OFFSET
	struct FDocker                                     Docker;                                                   // 0x0A70(0x0050) (Edit, DisableEditOnInstance)
	struct FStartPickupObjectActionRuleParams          StartPickupObjectActionRuleParams;                        // 0x0AC0(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData11[0x10];                                      // 0x0AD0(0x0010) MISSED OFFSET
	class UParticleSystemComponent*                    CurrentlyPlayingParticleSystem;                           // 0x0AE0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      LandingStrategy;                                          // 0x0AE8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PursuitStrategy;                                          // 0x0AF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultRollLerpTime;                                      // 0x0AF8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingRollLerpTime;                                      // 0x0AFC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBeingDismissed;                                         // 0x0B00(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0xEB];                                      // 0x0B01(0x00EB) MISSED OFFSET
	bool                                               IsInDisabledPetPerchHangout;                              // 0x0BEC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               PetIsSad;                                                 // 0x0BED(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x32];                                      // 0x0BEE(0x0032) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.Pet"));
		return ptr;
	}


	void SetExitTakeOffFlag(bool InExitTakeOffFlag);
	void OnShipDestroyed(class AActor* InShip);
	void OnRep_RollRequest();
	void OnRep_ResetRollAndZOffset();
	void OnRep_PetTurnToFaceData();
	void OnRep_PetOwner();
	void OnRep_PetIsSad();
	void OnRep_PerchedInHangout();
	void OnRep_MovementRequest();
	void OnRep_InHangout();
	void OnOwnerDestroyed(class AActor* InOwner);
	void Multicast_DitherOut();
	void Multicast_DitherIn();
	float GetFloorMeshOffsetZ();
};


// Class AthenaAI.BTTask_SetRoamingPetAnimationState
// 0x00A8 (0x0130 - 0x0088)
class UBTTask_SetRoamingPetAnimationState : public UBTTask_BlackboardBase
{
public:
	struct FWeightedPetAnimationSelector               WeightedAnimationSelection;                               // 0x0088(0x00A0) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetRoamingPetAnimationState"));
		return ptr;
	}

};


// Class AthenaAI.PetDitherComponent
// 0x0070 (0x0230 - 0x01C0)
class UPetDitherComponent : public UDitherComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x01C0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetDitherComponent"));
		return ptr;
	}

};


// Class AthenaAI.PetNameplateComponent
// 0x0030 (0x0470 - 0x0440)
class UPetNameplateComponent : public UAINameplateComponent
{
public:
	class FString                                      DefaultPetName;                                           // 0x0440(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0450(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetNameplateComponent"));
		return ptr;
	}

};


// Class AthenaAI.PetPartCustomisationComponent
// 0x00B8 (0x0180 - 0x00C8)
class UPetPartCustomisationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	class UClass*                                      AnimationDataStoreId;                                     // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPetPartSizeMappingsDataAsset*               SizeMappingsAsset;                                        // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FPetLoadedMaterial>                  CurrentlyLoadedMaterials;                                 // 0x00E8(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       DefaultMeshRef;                                           // 0x00F8(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       HighResMeshRef;                                           // 0x0108(0x0010) (ZeroConstructor, Transient)
	class USkeletalMesh*                               CurrentlyLoadedMesh;                                      // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPetSize>                              CurrentPetSize;                                           // 0x0120(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	class UPetCustomisationOverrideDataAsset*          CurrentlyLoadedOverrideAsset;                             // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0130(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetPartCustomisationComponent"));
		return ptr;
	}

};


// Class AthenaAI.PetPartSizeMappingsDataAsset
// 0x0020 (0x0048 - 0x0028)
class UPetPartSizeMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FPetPartSizeMapping>                 Mappings;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FFloatRange                                 ConcealedScaleBounds;                                     // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetPartSizeMappingsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.PetSicknessComponent
// 0x0010 (0x00D8 - 0x00C8)
class UPetSicknessComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetSicknessComponent"));
		return ptr;
	}

};


// Class AthenaAI.PetsPartsDesc
// 0x0040 (0x0070 - 0x0030)
class UPetsPartsDesc : public UAIPartsDesc
{
public:
	struct FStringAssetReference                       Mesh;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       HighResMesh;                                              // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPetMaterialEntry>                   PetMaterials;                                             // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EPetSize>                              PetSize;                                                  // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UPetCustomisationOverrideDataAsset*          PetOverrideAsset;                                         // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetsPartsDesc"));
		return ptr;
	}

};


// Class AthenaAI.PetTelemetryComponent
// 0x0048 (0x0110 - 0x00C8)
class UPetTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetTelemetryComponent"));
		return ptr;
	}

};


// Class AthenaAI.PetWieldableReactMappingsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UPetWieldableReactMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FPetWieldableReactMapping>           WieldableReactMappings;                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetWieldableReactMappingsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.PreviewPet
// 0x00E8 (0x04B8 - 0x03D0)
class APreviewPet : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	TEnumAsByte<EAthenaAnimationPetRoamingState>       InitialAnimState;                                         // 0x03D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	struct FAIPartId                                   InitialPartIdToLoad;                                      // 0x03DC(0x0008) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class UAIPartsCategory*                            PreviewPetPartsCategory;                                  // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      PreviewPetMesh;                                           // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FPetAnimationDataPreview                    PreviewPetAnimationData;                                  // 0x03F8(0x0010) (Edit, DisableEditOnInstance)
	class UAIPartsRetrievalComponent*                  AIPartsRetrievalComponent;                                // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetPartCustomisationComponent*              PetPartCustomisationComponent;                            // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x0418(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PreviewPet"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
