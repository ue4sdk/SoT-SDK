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
	TArray<FAthenaAIFormComponentVfxCustomisation>     VfxCustomisations;                                        // 0x00D0(0x0010) (Edit, ZeroConstructor)
	UAthenaAIFormDataAsset*                            FormData;                                                 // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	UCharacterHitReactionDamagerTypeToAnimTypeLayer*   HitReactionsLayer;                                        // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
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
// 0x0400 (0x0428 - 0x0028)
class UAISpawner : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	bool                                               HasSpawnerLevelEncounters;                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	FAISpawnTypeParamsCollection                       SpawnTypeParamsCollection;                                // 0x0040(0x0048) (Edit)
	UAIEncounterSettings*                              DefaultEncounterSettings;                                 // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAISpawnWaveSequenceRankProgression*               DefaultSpawnWaveProgression;                              // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FAISpawnContextIdEncounterSettingsPair>     SpawnContextSpecificEncounterSettings;                    // 0x0098(0x0010) (Edit, ZeroConstructor)
	bool                                               ShouldSpawnFacingRegionCentre;                            // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAthenaAISpawnType>                    DefaultSpawnType;                                         // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	UEnvQuery*                                         FindSpawnPosQuery;                                        // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryRunMode>                      FindSpawnPosQueryRunMode;                                 // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	FName                                              SpawnLocationType;                                        // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumOfSpawnedPawns;                                     // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PriorityForSpawnedPawns;                                  // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<FConditionalAISpawnOverride>                SpawnOverrides;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<FAdditionalSpawnerBehaviour>                AdditionalBehaviours;                                     // 0x00E0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData05[0x270];                                     // 0x00F0(0x0270) MISSED OFFSET
	UAthenaAISettings*                                 AthenaAISettings;                                         // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC0];                                      // 0x0368(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawner"));
		return ptr;
	}


	int GetNumOfSpawnRequests();
};


// Class AthenaAI.AIPerCrewSpawner
// 0x0138 (0x0560 - 0x0428)
class UAIPerCrewSpawner : public UAISpawner
{
public:
	UAIWeightedProbabilityRangeOfRangesRankProgression* DefaultRespawnTimerRanges;                                // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumOfCrewsToSpawnFor;                                  // 0x0430(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ActivateBySettingFootOnIsland;                            // 0x0434(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseRespawnTimerForFirstSpawn;                             // 0x0435(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AssociateSpawnsWithSpecificCrews;                         // 0x0436(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PerceiveTriggerActorOnSpawn;                              // 0x0437(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnforceRespawnTimeAfterCrewLeaves;                        // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSpawningGracePeriodForNewCrew;                      // 0x0439(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x126];                                     // 0x043A(0x0126) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPerCrewSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIFormDataAsset
// 0x0068 (0x0090 - 0x0028)
class UAthenaAIFormDataAsset : public UDataAsset
{
public:
	TArray<TEnumAsByte<EHealthChangedReason>>          PreventHealthChangedReasons;                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<FAIFormDamageResponse>                      DamageResponses;                                          // 0x0038(0x0010) (Edit, ZeroConstructor)
	UStatusRecipientResponseList*                      OverrideStatusRecipientResponseList;                      // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UPhysicalMaterial*                                 SurfaceMaterial;                                          // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UObject*                                           KilledVfxTemplate;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            AICharacterAudioComponent;                                // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            AnimNotifyEmitterWithObservers;                           // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HighPriorityFootstepAudio;                                // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              MovementSpeedMultipler;                                   // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FPlayerStat                                        StatToFireOnDeath;                                        // 0x0078(0x0004) (Edit, DisableEditOnInstance)
	FName                                              FeatureName;                                              // 0x007C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	UClass*                                            FormComponentClass;                                       // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	UClass*                                            TypeClass;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

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
	UAthenaAIAbilityParams*                            AbilityParams;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	APawn*                                             Pawn;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	AAthenaAIController*                               Controller;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UAIPawnInterface>           AIPawnInterface;                                          // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	UAthenaAIAbilityStageParams*                       CurrentAbilityStageParams;                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
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
	TArray<FAthenaAIControllerParamValue>              NamedControllerParams;                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EAIAbilityDamageIntervalCounterMode>   DamageIntervalCountingMode;                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseTimeBetweenAbility;                                    // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	FAthenaAIAbilityPlayerBasedRanges                  ActivationTimerCooldown;                                  // 0x0040(0x0010) (Edit)
	FAthenaAIAbilityPlayerBasedRanges                  TimeBetweenAbility;                                       // 0x0050(0x0010) (Edit)
	bool                                               UseDamageBetweenAbility;                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	FAthenaAIAbilityPlayerBasedRanges                  DamageBetweenAbility;                                     // 0x0068(0x0010) (Edit)
	float                                              AbilityRadius;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseMinMaxAttackRange;                                     // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	FMinMaxAbilityRange                                MinMaxAttackRange;                                        // 0x0080(0x0008) (Edit)
	TArray<FAIAbilityFollowUp>                         FollowUpAbilities;                                        // 0x0088(0x0010) (Edit, ZeroConstructor)
	float                                              Weight;                                                   // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	FAIAbilityContinuousCooldownParameterData          ContinuousCooldownAbilityParameters;                      // 0x00A0(0x0020) (Edit)
	UClass*                                            AIAbilityTypeClass;                                       // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)

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
	UClass*                                            Type;                                                     // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            DetachOffsetFromOwner;                                    // 0x00D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	FAIDataProviderFloatValue                          MaxShipDistanceFromHomePosition;                          // 0x0070(0x0030) (Edit)
	FAIDataProviderFloatValue                          MinDamageToSwitchTargets;                                 // 0x00A0(0x0030) (Edit)
	FAIDataProviderFloatValue                          MinSecondsBeforeSwitchTargets;                            // 0x00D0(0x0030) (Edit)
	FAIDataProviderBoolValue                           SwitchTargetsAfterTimerExpires;                           // 0x0100(0x0030) (Edit)
	FAIDataProviderFloatValue                          SecondsBeforeSwitchTargetsAfterTimerExpires;              // 0x0130(0x0030) (Edit)
	FAIDataProviderFloatValue                          TimeBetweenDiceRolls;                                     // 0x0160(0x0030) (Edit)
	FAIDataProviderFloatValue                          DiceRollForAggression;                                    // 0x0190(0x0030) (Edit)
	FAIDataProviderFloatValue                          MinTotalDamageToTurnDiceRollForAggression;                // 0x01C0(0x0030) (Edit)
	FAIDataProviderFloatValue                          DiceRollForDamageAggression;                              // 0x01F0(0x0030) (Edit)
	FAIDataProviderFloatValue                          DiceRollForDamageDormancy;                                // 0x0220(0x0030) (Edit)
	FAIDataProviderFloatValue                          PlayerDistanceThresholdToTurnAggressive;                  // 0x0250(0x0030) (Edit)
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
	TArray<FAttackableTypeToAnimMapping>               AttackAnimMapping;                                        // 0x0090(0x0010) (Edit, ZeroConstructor)
	FName                                              LoSTraceProfileName;                                      // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FAIDataProviderFloatValue                          LosTraceRadius;                                           // 0x00A8(0x0030) (Edit)
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
	UAnimSequence*                                     AttackAnim;                                               // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackAnimLength;                                         // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToPerformAttack;                                      // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UObject*                                           AttackVFX;                                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackVFXZOffset;                                         // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              LoSTraceProfileName;                                      // 0x00B4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	FAIDataProviderFloatValue                          LosTraceRadius;                                           // 0x00C0(0x0030) (Edit)
	TArray<FSwimAttackTargetShipImpulseData>           ImpulseData;                                              // 0x00F0(0x0010) (Edit, ZeroConstructor)
	FAIDataProviderIntValue                            MinDamageHolesToApply;                                    // 0x0100(0x0030) (Edit)
	FAIDataProviderIntValue                            MaxDamageHolesToApply;                                    // 0x0130(0x0030) (Edit)
	int                                                LevelsOfHullDamage;                                       // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	UClass*                                            DamageCauserType;                                         // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FAIDataProviderFloatValue                          PlayerBiteRadius;                                         // 0x0170(0x0030) (Edit)
	FKnockBackInfo                                     KnockbackParams;                                          // 0x01A0(0x0050) (Edit)
	FAIDataProviderFloatValue                          PlayerBiteDamage;                                         // 0x01F0(0x0030) (Edit)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	AShip*                                             TargetShip;                                               // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

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
	TArray<UClass*>                                    SubscribedStairClimbStrategies;                           // 0x0590(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x80];                                      // 0x05A0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AICreatureCharacterMovementComponent"));
		return ptr;
	}

};


// Class AthenaAI.AICreatureCharacter
// 0x0220 (0x0800 - 0x05E0)
class AAICreatureCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x05E0(0x0048) MISSED OFFSET
	float                                              DelayBeforeDestroying;                                    // 0x0628(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBeforeFadingOut;                                      // 0x062C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PickupTime;                                               // 0x0630(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            TooltipDisplayOffset;                                     // 0x0634(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UActionStateMachineComponent*                      ActionStateMachineComponent;                              // 0x0640(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	UActionStatePriorityTableData*                     ActionStatePriorityTableData;                             // 0x0648(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            ActionStateCreatorDefinition;                             // 0x0650(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAthenaAIControllerParamsDataAsset*                AIControllerParams;                                       // 0x0658(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UInteractableComponent*                            InteractableComponent;                                    // 0x0660(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UWaterHeightProviderComponent*                     WaterHeightProviderComponent;                             // 0x0668(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UAnimNotifyWwiseEmitterComponent*                  AnimNotifyWwiseEmitterComponent;                          // 0x0670(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	URewindComponent*                                  RewindComponent;                                          // 0x0678(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UActionRulesComponent*                             ActionRulesComponent;                                     // 0x0680(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x100];                                     // 0x0688(0x0100) MISSED OFFSET
	UAICreatureCharacterMovementComponent*             AICreatureCharacterMovementComponent;                     // 0x0788(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UClass*                                            CurrentAIStrategy;                                        // 0x0790(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x68];                                      // 0x0798(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AICreatureCharacter"));
		return ptr;
	}


	void SetAIStrategy(UClass* InStrategy);
	void OnRep_CurrentAIStrategy(UClass* OldAIStrategy);
	void Multicast_DespawnRPC();
	UClass* GetAIStrategy();
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
	TArray<UClass*>                                    SubscribedStairClimbStrategies;                           // 0x0308(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
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
// 0x0180 (0x05A8 - 0x0428)
class UAIBountySpawner : public UAISpawner
{
public:
	float                                              MaximumDistanceToPerceiveOnSpawnsAfterFirstGroup;         // 0x0428(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	TArray<FAIBountySpawnerWaveGroup>                  WaveGroups;                                               // 0x0430(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              TeamColor;                                                // 0x0440(0x0010) (Edit, ZeroConstructor)
	FWeightedProbabilityRange                          WavesPerRelocate;                                         // 0x0450(0x0020) (Edit)
	FWeightedProbabilityRange                          WaveSplitChance;                                          // 0x0470(0x0020) (Edit)
	TArray<float>                                      WaveSuicideTime;                                          // 0x0490(0x0010) (Edit, ZeroConstructor)
	float                                              WaveSuicideMinDist;                                       // 0x04A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ImmediatelyPerceiveTargets;                               // 0x04A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	UAICombatDialogue*                                 ActiveCombatDialogue;                                     // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x04B0(0x0028) MISSED OFFSET
	TArray<AActor*>                                    CrewMembers;                                              // 0x04D8(0x0010) (ZeroConstructor)
	TArray<AActor*>                                    NonCrewMembersInRegion;                                   // 0x04E8(0x0010) (ZeroConstructor)
	TArray<AActor*>                                    AllParticipatingPlayers;                                  // 0x04F8(0x0010) (ZeroConstructor)
	UOverlapTriggerComponent*                          AudioZoneTriggerComponent;                                // 0x0508(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x98];                                      // 0x0510(0x0098) MISSED OFFSET

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
	FText                                              AIName;                                                   // 0x0028(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.ApplyNameplateToBountyWaveSpawnedAction"));
		return ptr;
	}

};


// Class AthenaAI.AIFaunaSpawner
// 0x0148 (0x0570 - 0x0428)
class UAIFaunaSpawner : public UAISpawner
{
public:
	FAIFaunaSpawnerWave                                FaunaWave;                                                // 0x0428(0x0110) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0538(0x0010) MISSED OFFSET
	AActor*                                            FaunaLeader;                                              // 0x0548(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0550(0x0010) MISSED OFFSET
	TArray<AActor*>                                    PlayersInSpawnArea;                                       // 0x0560(0x0010) (ZeroConstructor)

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


	void SetNamedControllerParam(const FName& ParamName, float Value);
	FWeightedProbabilityRangeOfRanges FindNamedWeightedRangesControllerParam(const FName& ParamName);
	float FindNamedControllerParam(const FName& ParamName);
	void ApplyControllerParams(UAthenaAIControllerParamsDataAsset* ParamsAsset, APawn* InPawn);
};


// Class AthenaAI.AthenaAIController
// 0x02E0 (0x08F8 - 0x0618)
class AAthenaAIController : public AAthenaAIControllerBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0618(0x0024) MISSED OFFSET
	float                                              CurrentTargetPerceivedNotVisibleAge;                      // 0x063C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0640(0x0040) MISSED OFFSET
	UAISenseConfig_Sight*                              SightConfig;                                              // 0x0680(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UAISenseConfig_Hearing*                            HearingConfig;                                            // 0x0688(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UAISenseConfig_Damage*                             DamageSenseConfig;                                        // 0x0690(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0698(0x0048) MISSED OFFSET
	TArray<FAthenaAIControllerSenseSettingOverride>    AIStrategySenseSettingOverrides;                          // 0x06E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x1D8];                                     // 0x06F0(0x01D8) MISSED OFFSET
	AActor*                                            CurrentNotSeenPerceivedActor;                             // 0x08C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	AActor*                                            PendingSpawnTriggerActor;                                 // 0x08D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x20];                                      // 0x08D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIController"));
		return ptr;
	}


	void StopBehaviourLogic();
	void SetPerceptionExpirationAgeForActor(AActor* Actor, float ExpirationAge, UClass* Sense);
	void RegisterSpawnTriggerActorAsStimulus(AActor* TriggerActor);
	void OnPerceptionUpdated(TArray<AActor*> ChangedPerceivedActors);
	void OnNewlySpawned();
	void OnFinishDespawn();
	bool IsActorPerceived(AActor* TargetActor);
	AActor* GetTargetActor();
	UAthenaAIPerceptionComponent* GetAthenaAIPerceptionComponent();
	void GetAllSeenActors(TArray<AActor*>* SeenActors);
	void ApplyControllerParams(UAthenaAIControllerParamsDataAsset* ParamsAsset, APawn* InPawn);
};


// Class AthenaAI.AthenaFaunaAIController
// 0x0198 (0x0A90 - 0x08F8)
class AAthenaFaunaAIController : public AAthenaAIController
{
public:
	float                                              MaxTimeBetweenThreatDetermination;                        // 0x08F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultControlRotationInterpSpeed;                        // 0x08FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FAIStategyControllerMovementMod>            StrategyControllerMovementMods;                           // 0x0900(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinAgentHalfHeightPctOverride;                            // 0x0910(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0914(0x0004) MISSED OFFSET
	UFaunaAIContollerParamsDataAsset*                  FaunaDataAsset;                                           // 0x0918(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	AActor*                                            CarrierActor;                                             // 0x0920(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0928(0x00A8) MISSED OFFSET
	AActor*                                            HighestDangerActor;                                       // 0x09D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x88];                                      // 0x09D8(0x0088) MISSED OFFSET
	UFaunaAIPlayerTracker*                             PlayerTracker;                                            // 0x0A60(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0A68(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaFaunaAIController"));
		return ptr;
	}


	void SetDormancyCheckingEnabled(bool InDormancyCheckingEnabledInAutomation);
	void LeaderDestroyed(AActor* Actor);
	AActor* GetLeader();
	float GetCourage();
	UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
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
// 0x03A0 (0x0BA0 - 0x0800)
class AFauna : public AAICreatureCharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0800(0x0008) MISSED OFFSET
	FText                                              DisplayName;                                              // 0x0808(0x0038) (Edit, DisableEditOnInstance)
	UClass*                                            FaunaSpecies;                                             // 0x0840(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            FaunaBreed;                                               // 0x0848(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            HeadOffset;                                               // 0x0850(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            MountedScale;                                             // 0x085C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearToSurfaceDistance;                                    // 0x0868(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartDrowningTimePercentage;                              // 0x086C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrowningDeathTimeMin;                                     // 0x0870(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrowningDeathTimeMax;                                     // 0x0874(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentageStarvedToChangeAnimation;                       // 0x0878(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x087C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UObject*                                           HitImpactParticleSystem;                                  // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UObject*                                           DeathParticleSystem;                                      // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UObject*                                           PutInCrateParticleSystem;                                 // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       PutInCrateSoundCue;                                       // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       TookDamageSoundCue;                                       // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       AgitationStartedSoundCue;                                 // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       AgitationStoppedSoundCue;                                 // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       CalmStartedSoundCue;                                      // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       CalmStoppedSoundCue;                                      // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UObject*                                           BreathBubblesParticleSystem;                              // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FName                                              BreathBubblesSocketName;                                  // 0x08D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              UnderwaterRTPCName;                                       // 0x08D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UForceFeedbackEffect*                              OnFeedingForceFeedbackEffect;                             // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UMountableComponent*                               MountableComponent;                                       // 0x08E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UHealthComponent*                                  HealthComponent;                                          // 0x08F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UDamageableComponent*                              DamageableComponent;                                      // 0x08F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UPrimitiveComponent*                               AttackHitVolume;                                          // 0x0900(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UFaunaAnimationData*                               Animations;                                               // 0x0908(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UDitherComponent*                                  DitherComponent;                                          // 0x0910(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	ULightWeightStatusEffectManagerComponent*          StatusEffectManagerComponent;                             // 0x0918(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	UAthenaAIControllerParamsDataAsset*                AIControllerParamsWhenInCrate;                            // 0x0920(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UPeriodicAINoiseEventComponent*                    PeriodicAINoiseEventComponent;                            // 0x0928(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FScriptMulticastDelegate                           FaunaAgitationResponseDelegate;                           // 0x0930(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           FaunaDirectedAgitationResponseDelegate;                   // 0x0940(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                AgitationResponseChance;                                  // 0x0950(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AgitationResponseTestFrequencyMin;                        // 0x0954(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AgitationResponseTestFrequencyMax;                        // 0x0958(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumFailedAgitationResponseTests;                       // 0x095C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AgitationResponseVFXDelay;                                // 0x0960(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AgitationResponseRange;                                   // 0x0964(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UObject*                                           AgitationResponseParticleSystem;                          // 0x0968(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgitationResponseRangeParticleSystemAngle;                // 0x0970(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     AgitationCollisionChannel;                                // 0x0974(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopMovementWhenAgitated;                                 // 0x0975(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0976(0x0002) MISSED OFFSET
	float                                              ApproximateSpitTravelTime;                                // 0x0978(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopMovementWhenCalm;                                     // 0x097C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x097D(0x0003) MISSED OFFSET
	float                                              TurningSpringAcceleration;                                // 0x0980(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningSpringMaxVelocity;                                 // 0x0984(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnResetDelay;                                           // 0x0988(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            PivotPointOffset;                                         // 0x098C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldTurn;                                               // 0x0998(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0999(0x0007) MISSED OFFSET
	UFeedingComponent*                                 FeedingComponent;                                         // 0x09A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	UFaunaMovementComponent*                           FaunaMovementComponent;                                   // 0x09A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              TimeUntilDrowned;                                         // 0x09B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RandomAnimationSeed;                                      // 0x09B4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x09B8(0x000C) MISSED OFFSET
	bool                                               Drowned;                                                  // 0x09C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x09C5(0x0002) MISSED OFFSET
	TEnumAsByte<EFaunaCratedState>                     CratedState;                                              // 0x09C7(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFaunaInWaterState>                    InWaterState;                                             // 0x09C8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x09C9(0x0007) MISSED OFFSET
	AActor*                                            Crate;                                                    // 0x09D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	UParticleSystemComponent*                          BreathBubblesParticleSystemComponent;                     // 0x09D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DrowningDeathTime;                                        // 0x09E0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayingStarvingAnim;                                    // 0x09E4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsAgitated;                                               // 0x09E5(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsCalm;                                                   // 0x09E6(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x09E7(0x0001) MISSED OFFSET
	float                                              TargetTurnAngle;                                          // 0x09E8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x12C];                                     // 0x09EC(0x012C) MISSED OFFSET
	UVenomComponent*                                   VenomComponent;                                           // 0x0B18(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData09[0x80];                                      // 0x0B20(0x0080) MISSED OFFSET

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
	void Multicast_PlayPutInCrateEffectsRPC(AActor* Crate);
	void Multicast_JustBeenFedRPC(AActor* FedBy);
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


// Class AthenaAI.FaunaAnimationInterface
// 0x0000 (0x0028 - 0x0028)
class UFaunaAnimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.FaunaAnimationInterface"));
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


// Class AthenaAI.MerchantCrateMetaGenerator
// 0x0000 (0x0030 - 0x0030)
class UMerchantCrateMetaGenerator : public UItemSnapshotMetaGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.MerchantCrateMetaGenerator"));
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


	static void SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, TAssetPtr<class UClass> AIItemSpawnComponent, UClass* ClassId, TAssetPtr<class UAthenaAIAmmoDataAsset> Ammo, const FVector& Pos, const FRotator& Rot, const FName& Region, AActor* TriggerActor, const FName& NavMeshOverride, float Delay);
	static FAIEncounterSpecification SpawnAI(UAIEncounterSettings* EncounterSettings, const FVector& Pos, const FRotator& Rot, float Delay, bool MakeAIPermanentlyNetRelevant, AActor* InstancedNavMesh);
	static void SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, UObject* QueryOwner);
	static void KillAllDebugAISpawners();
	static int GetEnvQueryManagerNumRunningQueries(UObject* QueryOwner);
	static void EnableMaximumSightSettings(AAthenaAIController* AIController);
	static void EnableBehaviorTreeLogging(UObject* WorldContext);
	static void DespawnAIPawn(APawn* Pawn);
	static void CreateAISpawnerAtPosition(UObject* WorldContext, UAISpawner* SpawnerAsset, const FVector& Pos);
	static void CreateAISpawnerAtActor(UObject* WorldContext, UAISpawner* SpawnerAsset, AActor* SpawnLocationActor);
	static FVector CanProjectPointToNavigation(UObject* WorldContext, const FVector& Point, ANavigationData* NavData, UClass* FilterClass, const FVector& QueryExtent);
};


// Class AthenaAI.DebugAISpawnerCreator
// 0x0058 (0x0428 - 0x03D0)
class ADebugAISpawnerCreator : public AActor
{
public:
	UAISpawner*                                        SpawnerTemplate;                                          // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TriggerRadius;                                            // 0x03D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	UAISpawner*                                        Spawner;                                                  // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	UAIProximityPlayerTracker*                         ProximityPlayerTracker;                                   // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	USimpleAIRegion*                                   Region;                                                   // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
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
	USceneComponent*                                   SceneComponent;                                           // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ASceneDialogueCoordinator*                         SpawnedDialogueCoordinator;                               // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	USceneDialogueData*                                DialogueData;                                             // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FAIDioramaPawn>                             LinkedActors;                                             // 0x03F0(0x0010) (Edit, ZeroConstructor)
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
	UAIDioramaDesc*                                    AIDioramaDesc;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	USceneDialogueData*                                DialogueData;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FAIDioramaPawn>                             SpawnedDioramaPawns;                                      // 0x0040(0x0010) (ZeroConstructor)
	AAIDiorama*                                        AIDiorama;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	UAISpawner*                                        Spawner;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
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
	TArray<FAIDioramaRoleDesc>                         RoleList;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	USceneDialogueData*                                DialogueData;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	TArray<FAIDioramaLocationSourceComponentData>      DioramaRelativeLocations;                                 // 0x02C0(0x0010) (Edit, ZeroConstructor)
	float                                              DialogueTriggerRadius;                                    // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DialogueSubtitleBuffer;                                   // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AISenseRadiusForDebugDisplay;                             // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
	TArray<UClass*>                                    Categories;                                               // 0x02E0(0x0010) (Edit, ZeroConstructor)
	FColor                                             DebugTriggerRadiusColor;                                  // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FColor                                             DebugSubtitleRadiusColor;                                 // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FColor                                             AISenseRadiusColor;                                       // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	USphereComponent*                                  DialogueTriggerRadiusSphere;                              // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	USphereComponent*                                  DialogueSubtitleRadiusSphere;                             // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	USphereComponent*                                  AISenseRadiusSphere;                                      // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
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
	TMap<UClass*, FDioramaCategoryEntries>             AllDioramasLocationsByCategory;                           // 0x03D8(0x0050) (ZeroConstructor)
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
	UAIDioramaDesc*                                    AIDioramaDesc;                                            // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAIDioramaLocationSourceComponent*                 Location;                                                 // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UAIDioramaController*                              AIDioramaController;                                      // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)

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


// Class AthenaAI.Pet
// 0x0430 (0x0C30 - 0x0800)
class APet : public AAICreatureCharacter
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0800(0x0098) MISSED OFFSET
	UPetWieldableReactMappingsDataAsset*               WieldableReactMappingsAsset;                              // 0x0898(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVelocityForLocomotionAnimation;                        // 0x08A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanFly;                                                   // 0x08A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08A5(0x0003) MISSED OFFSET
	TArray<FPetFlyingStrategyProperties>               FlyingStrategyProperties;                                 // 0x08A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              FlyingLandTime;                                           // 0x08B8(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	UCurveFloat*                                       FlyingLandCurve;                                          // 0x08C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingTakeOffTime;                                        // 0x08C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	UCurveFloat*                                       FlyingTakeOffCurve;                                       // 0x08D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FFloatRange                                        MidFlightAdjustmentTimerRange;                            // 0x08D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UCurveFloat*                                       MidFlightAdjustmentCurve;                                 // 0x08E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UCurveFloat*                                       MidFlightTimeToDistanceAdjustmentCurve;                   // 0x08F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              FiredFromActorCollision;                                  // 0x08F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       FiredFromActorSFX;                                        // 0x0900(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPetDitherComponent*                               DitherComponent;                                          // 0x0908(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              MinimumDamageForHealthReact;                              // 0x0910(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistForWaterBucketToClean;                             // 0x0914(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumDurationUntilPetCanDespawnConcealed;               // 0x0918(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultNamePlateHeight;                                   // 0x091C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlternateNamePlateHeight;                                 // 0x0920(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> StatesToUseAlternateNamePlatePos;                         // 0x0928(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FFloatRange                                        PetTimeSpentSad;                                          // 0x0938(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDebugPetStateDescriptor>              DebugStateDescriptor;                                     // 0x0948(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	UAINameplateComponent*                             AINameplateComponent;                                     // 0x0950(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UFeedingComponent*                                 FeedingComponent;                                         // 0x0958(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UStarvingComponent*                                StarvingComponent;                                        // 0x0960(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UCleanlinessComponent*                             CleanlinessComponent;                                     // 0x0968(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UCannonSquashComponent*                            CannonSquashComponent;                                    // 0x0970(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FPetMovementRequest                                ReplicatedMovementRequest;                                // 0x0978(0x000C) (Net)
	float                                              TargetMeshRoll;                                           // 0x0984(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0988(0x0010) MISSED OFFSET
	float                                              DefaultShipTurnRateModifier;                              // 0x0998(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x099C(0x0004) MISSED OFFSET
	TArray<FPetTurnRateModifier>                       TurnRateModifierList;                                     // 0x09A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> LocomotingMovementStates;                                 // 0x09B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> RequestIdleOrMovementValidMovementStates;                 // 0x09C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxRollAngle;                                             // 0x09D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayForDisablingMovementOnIdle;                          // 0x09D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IslandDustRatePerSecond;                                  // 0x09D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FGuid                                              CrewId;                                                   // 0x09DC(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               InHangout;                                                // 0x09EC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               PerchedInHangout;                                         // 0x09ED(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               ResetRollAndZOffset;                                      // 0x09EE(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldIgnoreTooltipDisplayOffset;                         // 0x09EF(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	FPetTurnToFaceData                                 PetTurnToFaceData;                                        // 0x09F0(0x0020) (Net)
	unsigned char                                      UnknownData08[0x18];                                      // 0x0A10(0x0018) MISSED OFFSET
	UAIPartsRetrievalComponent*                        AIPartsRetrievalComponent;                                // 0x0A28(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UPetPartCustomisationComponent*                    PetPartCustomisationComponent;                            // 0x0A30(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	ULightWeightStatusEffectManagerComponent*          LightWeightStatusEffectManagerComponent;                  // 0x0A38(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UPetTelemetryComponent*                            TelemetryComponent;                                       // 0x0A40(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPetSicknessComponent*                             SicknessComponent;                                        // 0x0A48(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UWaterExposureComponent*                           WaterExposureComponent;                                   // 0x0A50(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UAnimationDataStoreComponent*                      AnimationDataStoreComponent;                              // 0x0A58(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	AActor*                                            SpawnedForShip;                                           // 0x0A60(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	AActor*                                            PetOwner;                                                 // 0x0A68(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	AItemInfo*                                         PetInfo;                                                  // 0x0A70(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0A78(0x0008) MISSED OFFSET
	FDocker                                            Docker;                                                   // 0x0A80(0x0050) (Edit, DisableEditOnInstance)
	FStartPickupObjectActionRuleParams                 StartPickupObjectActionRuleParams;                        // 0x0AD0(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData10[0x10];                                      // 0x0AE0(0x0010) MISSED OFFSET
	UParticleSystemComponent*                          CurrentlyPlayingParticleSystem;                           // 0x0AF0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	UClass*                                            LandingStrategy;                                          // 0x0AF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            PursuitStrategy;                                          // 0x0B00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultRollLerpTime;                                      // 0x0B08(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingRollLerpTime;                                      // 0x0B0C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBeingDismissed;                                         // 0x0B10(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0xEB];                                      // 0x0B11(0x00EB) MISSED OFFSET
	bool                                               IsInDisabledPetPerchHangout;                              // 0x0BFC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               PetIsSad;                                                 // 0x0BFD(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x32];                                      // 0x0BFE(0x0032) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.Pet"));
		return ptr;
	}


	void SetExitTakeOffFlag(bool InExitTakeOffFlag);
	void OnShipDestroyed(AActor* InShip);
	void OnRep_RollRequest();
	void OnRep_ResetRollAndZOffset();
	void OnRep_PetTurnToFaceData();
	void OnRep_PetOwner();
	void OnRep_PetIsSad();
	void OnRep_PerchedInHangout();
	void OnRep_MovementRequest();
	void OnRep_InHangout();
	void OnOwnerDestroyed(AActor* InOwner);
	void Multicast_DitherOut();
	void Multicast_DitherIn();
	float GetFloorMeshOffsetZ();
};


// Class AthenaAI.BTTask_SetRoamingPetAnimationState
// 0x00A8 (0x0130 - 0x0088)
class UBTTask_SetRoamingPetAnimationState : public UBTTask_BlackboardBase
{
public:
	FWeightedPetAnimationSelector                      WeightedAnimationSelection;                               // 0x0088(0x00A0) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetRoamingPetAnimationState"));
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


// Class AthenaAI.AINameplateComponent
// 0x0170 (0x0450 - 0x02E0)
class UAINameplateComponent : public UNameplateComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	float                                              VisibleFromWorldDistance;                                 // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibleUntilWorldDistance;                                // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibleAfterDeathDuration;                                // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	FText                                              Title;                                                    // 0x02F8(0x0038) (Net)
	FText                                              DisplayName;                                              // 0x0330(0x0038) (Net)
	FString                                            DisplayNameAsString;                                      // 0x0368(0x0010) (Net, ZeroConstructor)
	FString                                            DebugDisplayText;                                         // 0x0378(0x0010) (Net, ZeroConstructor)
	bool                                               VisibilityDisabled;                                       // 0x0388(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC7];                                      // 0x0389(0x00C7) MISSED OFFSET

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


// Class AthenaAI.PetNameplateComponent
// 0x0020 (0x0470 - 0x0450)
class UPetNameplateComponent : public UAINameplateComponent
{
public:
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
	UClass*                                            AnimationDataStoreId;                                     // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPetPartSizeMappingsDataAsset*                     SizeMappingsAsset;                                        // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FPetLoadedMaterial>                         CurrentlyLoadedMaterials;                                 // 0x00E8(0x0010) (ZeroConstructor, Transient)
	FStringAssetReference                              DefaultMeshRef;                                           // 0x00F8(0x0010) (ZeroConstructor, Transient)
	FStringAssetReference                              HighResMeshRef;                                           // 0x0108(0x0010) (ZeroConstructor, Transient)
	USkeletalMesh*                                     CurrentlyLoadedMesh;                                      // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPetSize>                              CurrentPetSize;                                           // 0x0120(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	UPetCustomisationOverrideDataAsset*                CurrentlyLoadedOverrideAsset;                             // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
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
	TArray<FPetPartSizeMapping>                        Mappings;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FFloatRange                                        ConcealedScaleBounds;                                     // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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


// Class AthenaAI.AIPartsDesc
// 0x0008 (0x0030 - 0x0028)
class UAIPartsDesc : public UDataAsset
{
public:
	FAIPartId                                          AIPartId;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsDesc"));
		return ptr;
	}

};


// Class AthenaAI.PetsPartsDesc
// 0x0040 (0x0070 - 0x0030)
class UPetsPartsDesc : public UAIPartsDesc
{
public:
	FStringAssetReference                              Mesh;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FStringAssetReference                              HighResMesh;                                              // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<FPetMaterialEntry>                          PetMaterials;                                             // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EPetSize>                              PetSize;                                                  // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	UPetCustomisationOverrideDataAsset*                PetOverrideAsset;                                         // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	TArray<FPetWieldableReactMapping>                  WieldableReactMappings;                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
	FAIPartId                                          InitialPartIdToLoad;                                      // 0x03DC(0x0008) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	UAIPartsCategory*                                  PreviewPetPartsCategory;                                  // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	USkeletalMeshComponent*                            PreviewPetMesh;                                           // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	FPetAnimationDataPreview                           PreviewPetAnimationData;                                  // 0x03F8(0x0010) (Edit, DisableEditOnInstance)
	UAIPartsRetrievalComponent*                        AIPartsRetrievalComponent;                                // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UPetPartCustomisationComponent*                    PetPartCustomisationComponent;                            // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x0418(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PreviewPet"));
		return ptr;
	}

};


// Class AthenaAI.AthenaSwimmingAIController
// 0x00E0 (0x09D8 - 0x08F8)
class AAthenaSwimmingAIController : public AAthenaAIController
{
public:
	USwimmingPathFollowingComponent*                   SwimmingPathFollowingComponent;                           // 0x08F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               IgnoreTargetsOutOfWater;                                  // 0x0900(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0901(0x0007) MISSED OFFSET
	UCurveFloat*                                       DistOfAttackerVsChanceToPursue;                           // 0x0908(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FName>                                      TimersToZeroIfStartingRevengeAttack;                      // 0x0910(0x0010) (Edit, ZeroConstructor)
	FName                                              DespawnRequiredBlackboardKey;                             // 0x0920(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              DespawnRequiredReasonBlackboardKey;                       // 0x0928(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PathingFailedWeight;                                      // 0x0930(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PathingFailedThresholdToDespawn;                          // 0x0934(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0938(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaSwimmingAIController"));
		return ptr;
	}


	void ApplyControllerParams(UAthenaAIControllerParamsDataAsset* InControllerParametersAsset, APawn* InPawn);
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
	FName                                              LineOfSightCollisionProfile;                              // 0x00E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineOfSightSphereCastRadius;                              // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineOfSightCheckInterval;                                 // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstLoSTriggerTimeInNewPath;                             // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstLoSTriggerTimeInRePath;                              // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugOnServer;                                        // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             CollisionTypesToDoPathUpdate;                             // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	USwimmingCreatureMovementComponent*                MovementComponent;                                        // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	AAthenaSwimmingAIController*                       SwimmingAIController;                                     // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EArcFollowingMode>                     ArcFollowingMode;                                         // 0x0120(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0121(0x0057) MISSED OFFSET
	AActor*                                            TargetActor;                                              // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
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
	FBlackboardKeySelector                             PathFailureCounter;                                       // 0x0090(0x0028) (Edit)
	float                                              AcceptableRadius;                                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingGoalCheckMode>                GoalCheckMode;                                            // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingArcMode>                      ArcMode;                                                  // 0x00BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EArcToTargetDirection>                 ArcToTargetDirection;                                     // 0x00BE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETaskReaction>                         Swim3DCrestingReaction;                                   // 0x00BF(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FSpatialOffset                                     OffsetFromTargetActor;                                    // 0x00C0(0x0008) (Edit)
	TEnumAsByte<ESwimmingSyncMode>                     SwimSyncMode;                                             // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TrackTargetActor;                                         // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET
	FBlackboardKeySelector                             TrackedTargetActorKey;                                    // 0x00D0(0x0028) (Edit)
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


// Class AthenaAI.AthenaAIControllerParamsDataAsset
// 0x00D8 (0x0100 - 0x0028)
class UAthenaAIControllerParamsDataAsset : public UDataAsset
{
public:
	FAthenaAIControllerSenseSettings                   DefaultSenseSettings;                                     // 0x0028(0x0014) (Edit)
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
	FAthenaAIControllerDamageTargetScoreFromPerceivedTarget DamageTargetScores;                                       // 0x0074(0x0014) (Edit)
	TArray<UAthenaAIControllerSharedParamValuesDataAsset*> SharedParamValues;                                        // 0x0088(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideMeshScale;                              // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              IndividualMeshScale;                                      // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FAthenaAIControllerHealthCustomisation             IndividualHealthCustomisationValues;                      // 0x00A0(0x000C) (Edit)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<FAthenaAIControllerParamValue>              IndividualInitialBlackboardValues;                        // 0x00B0(0x0010) (Edit, ZeroConstructor)
	TArray<FAthenaAIControllerParamValue>              IndividualNamedControllerParams;                          // 0x00C0(0x0010) (Edit, ZeroConstructor)
	TArray<FAthenaAIControllerWeightedRangesParamValue> IndividualNamedWeightedRangesControllerParams;            // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<FAthenaAIControllerSenseSettingOverride>    IndividualAIStrategySenseSettingOverrides;                // 0x00E0(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideCurrentTargetPerceivedNotVisibleAge;    // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              IndividualCurrentTargetPerceivedNotVisibleAge;            // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              FeatureName;                                              // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIControllerParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.TinySharkTelemetryComponent
// 0x0110 (0x01D8 - 0x00C8)
class UTinySharkTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x00C8(0x0110) MISSED OFFSET

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
	UEnvQuery*                                         TrackingMovementValidQuery;                               // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x03E8(0x00A0) MISSED OFFSET
	UAIOnDemandSpawner*                                TinySharkSpawner;                                         // 0x0488(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	ASharkPawn*                                        TinySharkPawn;                                            // 0x0490(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	FName                                              HealthRTPC;                                               // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04A0(0x0008) MISSED OFFSET
	FTinySharkParams                                   Params;                                                   // 0x04A8(0x00B8) (Transient)
	UTinySharkTelemetryComponent*                      TinySharkTelemetryComponent;                              // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	AShip*                                             TrackedShip;                                              // 0x0568(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x80];                                      // 0x0570(0x0080) MISSED OFFSET
	FEncounterParams                                   SightingEncounterParams;                                  // 0x05F0(0x000C) (Edit, DisableEditOnInstance)
	FEncounterParams                                   CloseEncounterParams;                                     // 0x05FC(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x140];                                     // 0x0608(0x0140) MISSED OFFSET
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> CachedControllerParamsAsset;                              // 0x0748(0x0020)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0768(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkExperience"));
		return ptr;
	}


	void TinySharkPawnDestroyed(AActor* InDestroyedActor);
	void OnRep_TinySharkPawn(ASharkPawn* LastTinySharkPawn);
	AShip* GetTrackedShip();
	TEnumAsByte<ETinySharkState> GetCurrentState();
	TEnumAsByte<ETinySharkActiveState> GetActiveState();
};


// Class AthenaAI.TinySharkParamsDataAsset
// 0x00B8 (0x00E0 - 0x0028)
class UTinySharkParamsDataAsset : public UDataAsset
{
public:
	FTinySharkParams                                   Params;                                                   // 0x0028(0x00B8) (Edit, DisableEditOnInstance)

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
// 0x01B8 (0x0588 - 0x03D0)
class ATinySharkService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	UTinySharkServiceParamsDataAsset*                  TinySharkServiceParams;                                   // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x170];                                     // 0x03E8(0x0170) MISSED OFFSET
	TArray<ATinySharkExperience*>                      TinySharkExperiences;                                     // 0x0558(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0568(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkService"));
		return ptr;
	}


	bool RequestTinySharkWithShip(AShip* InTrackedShip, int OverrideControllerParamIndex, int PartIndex);
	bool RequestTinySharkWithLocation(const FVector& SpawnLocation, int PartIndex);
	void DismissAllTinySharks();
	bool CanSpawnTinySharkExperience();
};


// Class AthenaAI.TinySharkServiceParamsDataAsset
// 0x0030 (0x0058 - 0x0028)
class UTinySharkServiceParamsDataAsset : public UDataAsset
{
public:
	FTinySharkServiceParams                            Params;                                                   // 0x0028(0x0028) (Edit, DisableEditOnInstance)
	int                                                MaxNumTinySharkExperiences;                               // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkServiceParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.MeshMemoryConstraintsAIPartsDesc
// 0x0050 (0x0080 - 0x0030)
class UMeshMemoryConstraintsAIPartsDesc : public UAIPartsDesc
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	FStringAssetReference                              Mesh;                                                     // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            CachedMeshResourceSize;                                   // 0x0048(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	UClass*                                            MeshFallbackCategory;                                     // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            BudgetToCountMemoryAgainstIfNoFallback;                   // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<UMaterialInterface*>                        OverrideMaterials;                                        // 0x0060(0x0010) (ZeroConstructor)
	TArray<FStringAssetReference>                      FallbackOverrideMaterials;                                // 0x0070(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.MeshMemoryConstraintsAIPartsDesc"));
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
	TArray<FAthenaAIControllerSenseSettingOverride>    AIStrategySenseSettingOverrides;                          // 0x0038(0x0010) (Edit, ZeroConstructor)
	FAthenaAIControllerHealthCustomisation             HealthCustomisationValues;                                // 0x0048(0x000C) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<FAthenaAIControllerParamValue>              InitialBlackboardValues;                                  // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<FAthenaAIControllerParamValue>              NamedControllerParams;                                    // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<FAthenaAIControllerWeightedRangesParamValue> NamedWeightedRangesControllerParams;                      // 0x0078(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset"));
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
	UCurveFloat*                                       DistanceInMToCannonShotHitChanceCurve;                    // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FAIStrategyMovementProperties>              AIStrategyMovementProperties;                             // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<FItemCategoryAIStrategyMovementPropertiesOverride> ItemCategoryAIStrategyMovementPropertiesOverrides;        // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	FAthenaAICharacterCannonTargetingParams            CannonTargetingParams;                                    // 0x00B8(0x0010) (Edit)
	TArray<FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> WieldedItemProjectileEffectivenessProperties;             // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<FAthenaAICharacterControllerItemCategoryNamedParams> WieldedItemOverrideNamedControllerParams;                 // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<FAthenaAIItemParamValue>                    NamedItemParams;                                          // 0x00E8(0x0010) (Edit, ZeroConstructor)
	TArray<FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories;                           // 0x00F8(0x0010) (Edit, ZeroConstructor)
	TArray<UAthenaAIAbilityParams*>                    AIAbilityParams;                                          // 0x0108(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<FAthenaAIEngageEnemyData>                   NonItemEngageOptions;                                     // 0x0118(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              AnimationDataOverrideAsset;                               // 0x0128(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              CustomAnimationAsset;                                     // 0x0138(0x0010) (Edit, ZeroConstructor)
	bool                                               OverrideNoInitialItem;                                    // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NoInitialItem;                                            // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideBeginFleeing;                                     // 0x014A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               BeginFleeing;                                             // 0x014B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	UEnvQuery*                                         FleeingEQS;                                               // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	UCurveFloat*                                       IndividualDistanceInMToCannonShotHitChanceCurve;          // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FAIStrategyMovementProperties>              IndividualAIStrategyMovementProperties;                   // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<FItemCategoryAIStrategyMovementPropertiesOverride> IndividualItemCategoryAIStrategyMovementPropertiesOverrides;// 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	FAthenaAICharacterCannonTargetingParams            IndividualCannonTargetingParams;                          // 0x0130(0x0010) (Edit)
	TArray<FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> IndividualWieldedItemProjectileEffectivenessProperties;   // 0x0140(0x0010) (Edit, ZeroConstructor)
	TArray<FAthenaAICharacterControllerItemCategoryNamedParams> IndividualWieldedItemOverrideNamedControllerParams;       // 0x0150(0x0010) (Edit, ZeroConstructor)
	TArray<FAthenaAIItemParamValue>                    IndividualNamedItemParams;                                // 0x0160(0x0010) (Edit, ZeroConstructor)
	TArray<FAthenaAICharacterControllerSpawnItemDescForItemCategory> IndividualSpawnItemDescForItemCategories;                 // 0x0170(0x0010) (Edit, ZeroConstructor)
	bool                                               UseDamageBasedAbilityStages;                              // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0181(0x0007) MISSED OFFSET
	TArray<float>                                      HealthStages;                                             // 0x0188(0x0010) (Edit, ZeroConstructor)
	TArray<FAthenaAIAbilityDamageStage>                IndividualDamageBasedAIAbilityStages;                     // 0x0198(0x0010) (Edit, ZeroConstructor)
	TArray<UAthenaAIAbilityParams*>                    IndividualAIAbilityParams;                                // 0x01A8(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<FAthenaAIEngageEnemyData>                   IndividualNonItemEngageOptions;                           // 0x01B8(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              IndividualAnimationDataOverrideAsset;                     // 0x01C8(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              IndividualCustomAnimationAsset;                           // 0x01D8(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideNoInitialItem;                          // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualNoInitialItem;                                  // 0x01E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualOverrideBeginFleeing;                           // 0x01EA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualBeginFleeing;                                   // 0x01EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	UEnvQuery*                                         IndividualFleeingEQS;                                     // 0x01F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	TArray<FAthenaAICharacterControllerWeightedAmmoType> AmmoWeights;                                              // 0x00B8(0x0010) (Edit, ZeroConstructor)
	FName                                              FeatureName;                                              // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	TArray<FAIAmmoRankMapping>                         RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
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
	TArray<UAIAmmoRankProgression*>                    AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

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
	TArray<UAthenaAIAmmoDataAsset*>                    AllAmmo;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	UAthenaAIAmmoDataAsset*                            DefaultAmmo;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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


// Class AthenaAI.AIPartsCategory
// 0x0040 (0x0068 - 0x0028)
class UAIPartsCategory : public UDataAsset
{
public:
	TArray<UAIPartsDesc*>                              Parts;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate)
	int                                                NextPartsIndex;                                           // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               UseWeightedArray;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	FName                                              UseWeightedArrayFeatureName;                              // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	FWeightedProbabilityRange                          WeightedArray;                                            // 0x0048(0x0020) (Edit, DisableEditOnTemplate)

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
	TArray<UClass*>                                    AllClassIds;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)

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
	TArray<FStringAssetReference>                      AvailableColors;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

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
	TArray<FAIDebugVisualisationLine>                  Lines;                                                    // 0x00C8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<FAIDebugVisualisationBox>                   Boxes;                                                    // 0x00D8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<FAIDebugVisualisationCylinder>              Cylinders;                                                // 0x00E8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<FAIDebugVisualisationSphere>                Spheres;                                                  // 0x00F8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<FAIDebugVisualisationCone>                  Cones;                                                    // 0x0108(0x0010) (Edit, Net, ZeroConstructor)

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
	TArray<FAIFormVarietyEntry>                        Forms;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              SkillsetProgression;                                      // 0x0038(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              ItemDropProgression;                                      // 0x0048(0x0010) (Edit, ZeroConstructor)
	FTargetSkillsetProgressionPair                     TargetSkillsetOverrides;                                  // 0x0058(0x0020) (Edit)
	FTargetItemDropProgressionPair                     TargetItemDropOverrides;                                  // 0x0078(0x0020) (Edit)

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
	TArray<UAIEncounterGenerationRecipe*>              Recipes;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<FAIEncounterGenerationRecipeFeatureBasedRankOrderList> FeatureBasedRecipeLists;                                  // 0x0038(0x0010) (Edit, ZeroConstructor)

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
	TArray<UAIEncounterGenerationRecipe*>              AllRecipes;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)

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
	UAIEncounterGenerationRecipeTypeList*              GenerationRecipes;                                        // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
	TArray<FAIFormRankMapping>                         RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
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
	TArray<UAIFormRankProgression*>                    AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

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
	TArray<UAthenaAIFormDataAsset*>                    AllForms;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	UAthenaAIFormDataAsset*                            DefaultForm;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	TArray<UAILoadoutRankProgression*>                 AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

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
	TArray<ULoadoutAsset*>                             AllLoadouts;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)

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
	TArray<UAISkillsetRankProgression*>                AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

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
	TArray<UAthenaAIControllerParamsDataAsset*>        AllSkillsets;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

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
	TArray<UAIPartsCategory*>                          AllPartsCategories;                                       // 0x0028(0x0010) (Edit, ZeroConstructor)

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
	TArray<FAIPartsCategoryMapping>                    DefaultPartsCategories;                                   // 0x03D8(0x0010) (Edit, ZeroConstructor)
	TArray<FAIPartsCategoryFormMapping>                FormPartsCategories;                                      // 0x03E8(0x0010) (Edit, ZeroConstructor)
	UAIAmmoTypeList*                                   Ammo;                                                     // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAIAmmoProgressionTypeList*                        AmmoProgressions;                                         // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAIFormTypeList*                                   Forms;                                                    // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAIFormProgressionTypeList*                        FormProgressions;                                         // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAILoadoutTypeList*                                Loadouts;                                                 // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAILoadoutProgressionTypeList*                     LoadoutProgressions;                                      // 0x0420(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAISkillsetTypeList*                               Skillsets;                                                // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAISkillsetProgressionTypeList*                    SkillsetProgressions;                                     // 0x0430(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAIClassIdTypeList*                                ClassIds;                                                 // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAIPartsCategoryTypeList*                          PartsCategories;                                          // 0x0440(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAIColorVariantPool*                               TeamColors;                                               // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAIItemDropComponentList*                          AIItemDropSpawners;                                       // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAIItemDropComponentRankProgressionList*           AIItemDropSpawnerProgressions;                            // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<UAIEncounterSettings*>                      DebugSpawnableEncounterSettings;                          // 0x0460(0x0010) (Edit, ZeroConstructor)
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
	TArray<FAISkillsetRankMapping>                     RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
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
	UClass*                                            AIClass;                                                  // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FStringAssetReference                              TeamColor;                                                // 0x0050(0x0010) (Edit, ZeroConstructor)

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
	FStringAssetReference                              SpecificSkillset;                                         // 0x0060(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              Loadout;                                                  // 0x0070(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              Form;                                                     // 0x0080(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              Ammo;                                                     // 0x0090(0x0010) (Edit, ZeroConstructor)
	FName                                              DioramaRole;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FText                                              LocalisableName;                                          // 0x00A8(0x0038) (Edit)
	FEncounterParams                                   EncounterTrackingParams;                                  // 0x00E0(0x000C) (Edit)
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
	FStringAssetReference                              SkillsetProgression;                                      // 0x0060(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              LoadoutProgression;                                       // 0x0070(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              FormProgression;                                          // 0x0080(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              AmmoProgression;                                          // 0x0090(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              ItemDropComponentProgression;                             // 0x00A0(0x0010) (Edit, ZeroConstructor)
	FEncounterParams                                   EncounterTrackingParams;                                  // 0x00B0(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterSettingsRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AIFormItemSpawnRequirement
// 0x0010 (0x0060 - 0x0050)
class UAIFormItemSpawnRequirement : public USpawnRequirement
{
public:
	TArray<UAthenaAIFormDataAsset*>                    AllowedForms;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIFormItemSpawnRequirement"));
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
	TArray<UAIItemSpawnRankProgression*>               AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIItemDropComponentRankProgressionList"));
		return ptr;
	}

};


// Class AthenaAI.AIItemSpawnDataSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIItemSpawnDataSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIItemSpawnDataSourceInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIItemSpawnDataSourceComponent
// 0x0010 (0x02C0 - 0x02B0)
class UAIItemSpawnDataSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	UItemSpawnTransformWithRandomQuantityDataAssset*   ItemSpawnDataAsset;                                       // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIItemSpawnDataSourceComponent"));
		return ptr;
	}

};


// Class AthenaAI.AIItemSpawnRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIItemSpawnRankProgression : public UDataAsset
{
public:
	TArray<FAIDropSpawnerRankMapping>                  RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
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


// Class AthenaAI.AILoadoutItemSpawnRequirement
// 0x0010 (0x0060 - 0x0050)
class UAILoadoutItemSpawnRequirement : public USpawnRequirement
{
public:
	TArray<ULoadoutAsset*>                             AllowedLoadouts;                                          // 0x0050(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AILoadoutItemSpawnRequirement"));
		return ptr;
	}

};


// Class AthenaAI.AILoadoutRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAILoadoutRankProgression : public UDataAsset
{
public:
	TArray<FAILoadoutRankMapping>                      RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
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


	static AItemInfo* SpawnItemFromAI(APawn* Pawn, UClass* ItemDesc);
	static int GetFrameCounter();
	static void AddNameplateToAIWithLocalisedName(AActor* Actor, const FText& DisplayName);
	static void AddNameplateToAI(AActor* Actor, const FString& DisplayName);
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


	void StartDespawnAI(APawn* AIActor, TEnumAsByte<ECharacterDeathType> DeathType);
	int GetNumOfSpawnedPawns();
};


// Class AthenaAI.AthenaAITypeListDataAsset
// 0x0020 (0x0048 - 0x0028)
class UAthenaAITypeListDataAsset : public UDataAsset
{
public:
	TArray<FAITypeData>                                AITypes;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<FStringClassReference>                      AdditionalAIActors;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)

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
	TArray<FAISpawnerWave>                             Waves;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	FName                                              FeatureName;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	TArray<FAISpawnWaveSequenceRankMapping>            RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
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
	FWeightedProbabilityRangeOfRanges                  RespawnTimerRanges;                                       // 0x0030(0x0030) (Edit)
	FName                                              FeatureName;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	TArray<FAIWeightedProbabilityRangeOfRangesRankMapping> RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
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
	FStringAssetReference                              AITypesAsset;                                             // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	FStringAssetReference                              AISpawnContextListAsset;                                  // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
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
	FStringAssetReference                              AIEncounterServiceAssetClassFileLocation;                 // 0x00B0(0x0010) (Edit, ZeroConstructor, Config)
	FStringAssetReference                              AIEncounterGenerationServiceAssetClassFileLocation;       // 0x00C0(0x0010) (Edit, ZeroConstructor, Config)
	FName                                              AICharacterWaterInteractionCollisionProfileName;          // 0x00D0(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)

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


// Class AthenaAI.CustomizableAIManagerInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomizableAIManagerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.CustomizableAIManagerInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIManagerService
// 0x0680 (0x0A50 - 0x03D0)
class AAIManagerService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x03D0(0x0108) MISSED OFFSET
	TArray<UClass*>                                    LoadedAIPawnClasses;                                      // 0x04D8(0x0010) (ZeroConstructor)
	TArray<UClass*>                                    LoadedAIItemDropComponentClasses;                         // 0x04E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET
	AAmbientWaterSpawnerManager*                       AmbientWaterSpawnerManager;                               // 0x0500(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x330];                                     // 0x0508(0x0330) MISSED OFFSET
	TArray<UAIPlayerTracker*>                          PlayerTrackers;                                           // 0x0838(0x0010) (ZeroConstructor)
	TArray<FCustomPlayersAITrackerData>                CustomPlayersTrackerDatas;                                // 0x0848(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x100];                                     // 0x0858(0x0100) MISSED OFFSET
	TArray<UAISpawner*>                                SpawnersPendingShutdown;                                  // 0x0958(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0xA8];                                      // 0x0968(0x00A8) MISSED OFFSET
	UAthenaAITypeListDataAsset*                        AITypeList;                                               // 0x0A10(0x0008) (ZeroConstructor, IsPlainOldData)
	UAISpawnContextList*                               AISpawnContextList;                                       // 0x0A18(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x30];                                      // 0x0A20(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIManagerService"));
		return ptr;
	}


	void TickService(float DeltaSeconds);
	void StartDespawnAI(APawn* AIActor, TEnumAsByte<ECharacterDeathType> DeathType);
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
	bool BlockAIAbility(UClass* InExclusive, bool InBlockState);
};


// Class AthenaAI.DebugAIManagerService
// 0x0100 (0x0B50 - 0x0A50)
class ADebugAIManagerService : public AAIManagerService
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0A50(0x00F0) MISSED OFFSET
	TArray<UClass*>                                    BlockedAIAbilities;                                       // 0x0B40(0x0010) (ZeroConstructor)

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
	bool BlockAIAbility(UClass* InExclusive, bool InBlockState);
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
	UAIPartsCategoryTypeList*                          PartsCategoriesList;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAIColorVariantPool*                               TeamColors;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	TArray<FAIPartIdNumVariantInfo>                    AIPartIdsVariantInfo;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartIdListingAsset"));
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
	UAIPartsCategory*                                  PartsCategory;                                            // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FReplicatedAIPartsData                             ReplicatedAIPartsData;                                    // 0x00D8(0x0018) (Net)
	unsigned char                                      UnknownData01[0x80];                                      // 0x00F0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsRetrievalComponent"));
		return ptr;
	}


	void RequestNewAIParts(UAIPartsCategory* AssignedPartsCategory, int PartsIndexToUse, int TeamColorIndex);
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
	FName                                              NavMeshAgentType;                                         // 0x02BC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RegionRadius;                                             // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FSpawnLocationGroup>                        SpawnLocationGroups;                                      // 0x02C8(0x0010) (Edit, ZeroConstructor)
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


// Class AthenaAI.AISkillsetItemSpawnRequirement
// 0x0010 (0x0060 - 0x0050)
class UAISkillsetItemSpawnRequirement : public USpawnRequirement
{
public:
	TArray<UAthenaAIControllerParamsDataAsset*>        DisallowedSkillsets;                                      // 0x0050(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISkillsetItemSpawnRequirement"));
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
	TArray<FAISpawnContextData>                        SpawnContextList;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)

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
// 0x0028 (0x0450 - 0x0428)
class UAIFixedWavesSpawner : public UAISpawner
{
public:
	TArray<FAIPersistentSpawnerWave>                   SpawnedWaves;                                             // 0x0428(0x0010) (Edit, ZeroConstructor)
	int                                                NumWavesToSpawnOnSpottedNewTarget;                        // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x043C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIFixedWavesSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIIncrementalWaveSpawner
// 0x0118 (0x0540 - 0x0428)
class UAIIncrementalWaveSpawner : public UAISpawner
{
public:
	FAISpawnerWave                                     SpawnedWave;                                              // 0x0428(0x0100) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0528(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIIncrementalWaveSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIInteractableSpawner
// 0x0100 (0x0528 - 0x0428)
class UAIInteractableSpawner : public UAISpawner
{
public:
	UClass*                                            AIInteractableType;                                       // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InhabitedChance;                                          // 0x0430(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	FWeightedProbabilityRangeOfRanges                  DelayAfterSuccessfulInhabitedCheck;                       // 0x0438(0x0030) (Edit)
	FWeightedProbabilityRangeOfRanges                  DelayAfterFailedInhabitedCheck;                           // 0x0468(0x0030) (Edit)
	float                                              SpawnForInteractableChance;                               // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	FWeightedProbabilityRangeOfRanges                  DelayAfterSuccessfulSpawnOnInteractableCheck;             // 0x04A0(0x0030) (Edit)
	FWeightedProbabilityRangeOfRanges                  DelayAfterFailedSpawnOnInteractableCheck;                 // 0x04D0(0x0030) (Edit)
	bool                                               RunInhabitedSimulation;                                   // 0x0500(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               RunSpawnForInteractableSimulation;                        // 0x0501(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0502(0x0002) MISSED OFFSET
	int                                                NumIterations;                                            // 0x0504(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0508(0x0018) MISSED OFFSET
	TEnumAsByte<EPlayMode>                             CachedPlaymode;                                           // 0x0520(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0521(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIInteractableSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIOnDemandSpawner
// 0x0000 (0x0428 - 0x0428)
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
// 0x01E8 (0x0610 - 0x0428)
class UAIPerPlayerSpawner : public UAISpawner
{
public:
	bool                                               CheckSpawnedActorsInRadiusBeforeSpawning;                 // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              RadiusToCheckForExistingPopulation;                       // 0x042C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxExistingPopulationInRadius;                            // 0x0430(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DespawnAllPawnsWhenAllPlayersLeave;                       // 0x0434(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	int                                                MaxActorsTotalPerPlayer;                                  // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RunSimulation;                                            // 0x043C(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	int                                                RankForSimulation;                                        // 0x0440(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumIterations;                                            // 0x0444(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               WantsToTemporarilyRememberPlayers;                        // 0x0448(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	FWeightedProbabilityRangeOfRanges                  TemporaryPlayerMemoryTimeRange;                           // 0x0450(0x0030) (Edit)
	unsigned char                                      UnknownData04[0xE8];                                      // 0x0480(0x00E8) MISSED OFFSET
	TMap<AActor*, FAIPerPlayerSpawnerPlayerDetailsUnit> PlayerDetails;                                            // 0x0568(0x0050) (ZeroConstructor, Transient)
	TMap<AController*, FTemporaryPlayerDetailsUnitEntry> TemporaryPlayerDetails;                                   // 0x05B8(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0608(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPerPlayerSpawner"));
		return ptr;
	}


	void PlayerDeath(AActor* Player);
};


// Class AthenaAI.NamedAIDataAsset
// 0x0088 (0x00B0 - 0x0028)
class UNamedAIDataAsset : public UDataAsset
{
public:
	TArray<FText>                                      MaleCaptainNames;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<FText>                                      FemaleCaptainNames;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<FText>                                      MaleCrewNames;                                            // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<FText>                                      FemaleCrewNames;                                          // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<FAICustomNameTitleMapping>                  CustomNameTitles;                                         // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<FAICustomClassIdNameOverrides>              CustomNameOverrides;                                      // 0x0078(0x0010) (Edit, ZeroConstructor)
	UClass*                                            DefaultClassId;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            FemaleCaptainClassId;                                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            MaleCaptainClassId;                                       // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            FemaleCrewClassId;                                        // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            MaleCrewClassId;                                          // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.NamedAIDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AIBoobyTrapSpawner
// 0x00D0 (0x06E0 - 0x0610)
class UAIBoobyTrapSpawner : public UAIPerPlayerSpawner
{
public:
	int                                                NumberOfWavesToSpawn;                                     // 0x0610(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	UWwiseEvent*                                       NewWaveSpawnSfx;                                          // 0x0618(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NewWaveSpawnSfxTriggerRadius;                             // 0x0620(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	TArray<UClass*>                                    ShowNameplatesFor;                                        // 0x0628(0x0010) (Edit, ZeroConstructor)
	UNamedAIDataAsset*                                 NamedAIDataAsset;                                         // 0x0638(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	AActor*                                            ActorToTrack;                                             // 0x0640(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x98];                                      // 0x0648(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIBoobyTrapSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIProgressiveWavesSpawner
// 0x0038 (0x0460 - 0x0428)
class UAIProgressiveWavesSpawner : public UAISpawner
{
public:
	bool                                               ApplyLocalisableNamesToNameplates;                        // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	TArray<FAIPersistentSpawnerWave>                   Waves;                                                    // 0x0430(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0440(0x0018) MISSED OFFSET
	AActor*                                            TriggerActor;                                             // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)

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
// 0x0138 (0x0560 - 0x0428)
class UAIWaveSpawner : public UAISpawner
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	FAISpawnerWave                                     SpawnedWave;                                              // 0x0430(0x0100) (Edit)
	float                                              MinRespawnTime;                                           // 0x0530(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRespawnTime;                                           // 0x0534(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0538(0x0028) MISSED OFFSET

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
	TArray<UAISpawner*>                                Spawners;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)

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
	FName                                              CampaignName;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	TArray<UAISpawnOverrideCondition*>                 Conditions;                                               // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)

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
	TArray<UClass*>                                    Contexts;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
	TArray<UClass*>                                    Contexts;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
	USceneComponent*                                   Root;                                                     // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
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


	bool FindAimConfigToHitTarget(const FVector& Target, bool CheckYaw, FRotator* OutAimConfig);
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
	USceneComponent*                                   Root;                                                     // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UAthenaAISettings*                                 AthenaAISettings;                                         // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<FName>                                      AISpawnBlockingContextNames;                              // 0x03F0(0x0010) (Edit, ZeroConstructor)
	UAIPerPlayerSpawner*                               SharkPerPlayerSpawnerTemplate;                            // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAIPerPlayerSpawner*                               SirenPerPlayerSpawnerTemplate;                            // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SirenEncounterRegionRadius;                               // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SirenEncounterShutdownTime;                               // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  InitialSirenSpawningWeightedTimeRange;                    // 0x0418(0x0030) (Edit, Config)
	FWeightedProbabilityRangeOfRanges                  UnsuccessfulSirenSpawningWeightedTimeRange;               // 0x0448(0x0030) (Edit, Config)
	FWeightedProbabilityRangeOfRanges                  SuccessfulSirenSpawningWeightedTimeRange;                 // 0x0478(0x0030) (Edit, Config)
	FChanceForSharksToBlockSirenEncounterData          SharkEncounterSpawnBlockingData;                          // 0x04A8(0x000C) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	TArray<FPerDepthSpawnChance>                       PerDepthSpawnChances;                                     // 0x04B8(0x0010) (Edit, ZeroConstructor)
	UAIPerPlayerSpawner*                               SharkPerPlayerSpawner;                                    // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x130];                                     // 0x04D0(0x0130) MISSED OFFSET
	TArray<FPlayerInWaterData>                         PlayersInWater;                                           // 0x0600(0x0010) (ZeroConstructor, Transient)
	TArray<FSirenEncounterData>                        SirenEncounters;                                          // 0x0610(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AmbientWaterSpawnerManager"));
		return ptr;
	}


	void OnPlayerDeath(AActor* InActorDying);
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
// 0x0048 (0x0070 - 0x0028)
class UAppliedStatusToMultipleAIWithFormsStatCondition : public UStatCondition
{
public:
	TArray<UClass*>                                    Status;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                AICountMinimum;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowAllForms;                                            // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    AllowedAIForms;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<UClass*>                                    AIClassesToIgnore;                                        // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    AllowedSources;                                           // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
	TArray<FVector>                                    LocationsToSpawnCrack;                                    // 0x0078(0x0010) (ZeroConstructor)
	FTimerHandle                                       TimerHandleStartNextSpawnWave;                            // 0x0088(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	AActor*                                            CachedTarget;                                             // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
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
	USceneComponent*                                   DefaultSceneComponent;                                    // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UDecalComponent*                                   DecalComponent;                                           // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
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
	UClass*                                            BurrowCrackToSpawn;                                       // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            BurrowEruptArea;                                          // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UEnvQuery*                                         EnvQueryLinesToTarget;                                    // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UEnvQuery*                                         EnvQueryAroundTarget;                                     // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FVector                                            OffsetPositionForStartTrace;                              // 0x00F8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceDetectRaycastLength;                               // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BurrowAroundTargetRange;                                  // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSurfaceAngleForBurrow;                                 // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEruptFromClosestSpawn;                                   // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	FMinMaxBurrowAbility                               EruptionDelayRndBetweenMinMaxSeconds;                     // 0x0114(0x0008) (Edit)
	FMinMaxBurrowAbility                               NumberOfCrackWavesMinMax;                                 // 0x011C(0x0008) (Edit)
	FMinMaxBurrowAbility                               RndSecondsBetweenCrackWaves;                              // 0x0124(0x0008) (Edit)
	FMinMaxBurrowAbility                               NumberOfCracksPerWaveMinMax;                              // 0x012C(0x0008) (Edit)
	FMinMaxBurrowAbility                               RndSecondsBetweenEachCrackSpawn;                          // 0x0134(0x0008) (Edit)
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
	UClass*                                            AllyTypeToHeal;                                           // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealDuration;                                             // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusForValidTargets;                                    // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfTargetsToHeal;                                    // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	FStatus                                            StatusToApplyOnHeal;                                      // 0x0158(0x0018) (Edit)

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
	TArray<FBuffedTargetData>                          BuffedTargets;                                            // 0x00A8(0x0010) (ZeroConstructor)
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
	AStatusEffectOverlapZone*                          BreathActor;                                              // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	UVFXSpawnerComponent*                              BreathVFX;                                                // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0088(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SporeBreathAIAbility"));
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
// 0x0108 (0x01D0 - 0x00C8)
class UAthenaAIAbilityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<UAthenaAIAbility*>                          AIAbilities;                                              // 0x00D0(0x0010) (ZeroConstructor, Transient)
	TArray<UAthenaAIAbility*>                          ActivatableAbilitiesInCurrentStage;                       // 0x00E0(0x0010) (ZeroConstructor, Transient)
	UAthenaAIAbility*                                  CurrentAIAbility;                                         // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UClass*                                            QueuedAbilityType;                                        // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UClass*                                            DebugAlwaysOnAbility;                                     // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<FAthenaAIAbilityDamageStage>                AbilityDamageStages;                                      // 0x0108(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x0118(0x00B8) MISSED OFFSET

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
	TArray<FAthenaAIAbilityDamageStage>                AbilityStages;                                            // 0x0178(0x0010) (ZeroConstructor)
	TArray<UAthenaAIAbility*>                          AIAbilities;                                              // 0x0188(0x0010) (ZeroConstructor)
	TArray<UClass*>                                    ReadyAbilitiesPool;                                       // 0x0198(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01A8(0x0020) MISSED OFFSET
	UClass*                                            DebugAlwaysOnAbility;                                     // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData)
	UClass*                                            RequiresActivation;                                       // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData)
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
	FStatus                                            CoralShieldStatusEffect;                                  // 0x00D8(0x0018) (Edit)
	UDamageableVulnerabilityLayer*                     VulnerabilityToApplyToSelf;                               // 0x00F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
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
	FStatus                                            BuffInterruptedStatusEffect;                              // 0x00D0(0x0018) (Edit)
	FStatus                                            ElectricShieldStatusEffect;                               // 0x00E8(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.ElectricShieldAbilityParams"));
		return ptr;
	}

};


// Class AthenaAI.SporeBreathAIAbilityParams
// 0x0080 (0x0148 - 0x00C8)
class USporeBreathAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	FAthenaAIAbilityPlayerBasedRanges                  BreathMaxDuration;                                        // 0x00C8(0x0010) (Edit)
	float                                              BreathContinueThresholdDistance;                          // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	UClass*                                            BreathActor;                                              // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FVFXHandlerComponentParams                         BreathVFXParams;                                          // 0x00E8(0x0040) (Edit)
	FVector                                            BreathCollisionVolumeSize;                                // 0x0128(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BreathCollisionForwardOffset;                             // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BreathStartDelay;                                         // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	UClass*                                            VfxSpawner;                                               // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)

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
	TArray<FWeightedAmmoTypeRange>                     AmmoTypeRanges;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor)

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
// 0x0220 (0x0B18 - 0x08F8)
class AAthenaAICharacterController : public AAthenaAIController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08F8(0x0008) MISSED OFFSET
	UAthenaAIItemParamsDataAsset*                      ItemParamsDataAsset;                                      // 0x0900(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ULoadoutAsset*                                     FallbackLoadoutIfAllEngageItemsDropped;                   // 0x0908(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ControlRotationInterpSpeed;                               // 0x0910(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ControlRotationUseConstantInterp;                         // 0x0914(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               FaceTargetDisabled;                                       // 0x0915(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0916(0x0002) MISSED OFFSET
	float                                              MinTurnAngleToPlayTurnAnim;                               // 0x0918(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x091C(0x0014) MISSED OFFSET
	UAthenaAICharacterControllerParamsDataAsset*       CharacterParamsDataAsset;                                 // 0x0930(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x90];                                      // 0x0938(0x0090) MISSED OFFSET
	TArray<FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories;                           // 0x09C8(0x0010) (ZeroConstructor)
	TArray<UAthenaAIAbilityParams*>                    AIAbilityParams;                                          // 0x09D8(0x0010) (ZeroConstructor)
	TArray<FAthenaAIEngageEnemyData>                   NonItemEngageOptions;                                     // 0x09E8(0x0010) (ZeroConstructor)
	UCurveFloat*                                       DistanceInMToCannonShotHitChanceCurve;                    // 0x09F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x118];                                     // 0x0A00(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAICharacterController"));
		return ptr;
	}


	void SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies);
	void SetItemSpecificNamedControllerParam(UClass* InItemCategory, const FName& ParamName, float Value);
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
	FWeightedProbabilityRange                          Courage;                                                  // 0x0100(0x0020) (Edit)
	TArray<FCarriedItemThreatOverride>                 CarriedItemThreatOverrides;                               // 0x0120(0x0010) (Edit, ZeroConstructor)
	bool                                               ThreatenedBySightOfCarrier;                               // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	TArray<FHearingThreat>                             KnownHearingDangers;                                      // 0x0138(0x0010) (Edit, ZeroConstructor)
	float                                              CarrierHearingThreatSpeedThreshold;                       // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageThreat;                                             // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UCurveFloat*                                       CharacterDistanceToDangerRatingCurve;                     // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UCurveFloat*                                       DangerRatingToAgitationDurationCurve;                     // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeAgitatedMin;                                  // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeAgitatedMax;                                  // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgitationDurationVariance;                                // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AlertThreshold;                                           // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FleeThreshold;                                            // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeCalm;                                         // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CalmCooldownTime;                                         // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceFromLeaderForIdle;                             // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UCurveFloat*                                       DistanceToLeaderPatrolChanceCurve;                        // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	FName                                              ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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


	bool IsPerceptionSenseEnabled(UClass* Sense);
	bool IsAnyPerceptionEnabled();
	void EnablePerceptionSense(UClass* Sense, bool Enable);
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
	FName                                              ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  WeightedRangesValue;                                      // 0x0030(0x0030)

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
	FName                                              ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
	UClass*                                            StateId;                                                  // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
	TArray<UClass*>                                    Strategies;                                               // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CurrentAIStrategy"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_IsActorInExpectedActionState
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_IsActorInExpectedActionState : public UBTDecorator_BaseConditional
{
public:
	UClass*                                            ExpectedActionState;                                      // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActionStateMachineTrackId>            ExpectedTrackId;                                          // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_IsActorInExpectedActionState"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ItemReadyToUse
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_ItemReadyToUse : public UBTDecorator_BaseConditional
{
public:
	UClass*                                            NotificationId;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	FBlackboardKeySelector                             TargetKey;                                                // 0x0068(0x0028) (Edit)
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
	FBlackboardKeySelector                             TargetActorKey;                                           // 0x0070(0x0028) (Edit)
	bool                                               UseTargetPosition;                                        // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	FBlackboardKeySelector                             TargetPositionKey;                                        // 0x00A0(0x0028) (Edit)
	FVector                                            OffsetToApplyToTargetPosition;                            // 0x00C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
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
	UClass*                                            Class;                                                    // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Invert;                                                   // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	FString                                            CachedDescription;                                        // 0x00A0(0x0010) (ZeroConstructor)
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
	FBlackboardKeySelector                             BlackboardKey;                                            // 0x0068(0x0028) (Edit)
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
	TArray<FBlackboardValueCondition>                  FloatConditions;                                          // 0x0068(0x0010) (Edit, ZeroConstructor)
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
	FAIDataProviderFloatValue                          Value;                                                    // 0x0088(0x0030) (Edit)

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
	FBlackboardKeySelector                             BlackboardKey;                                            // 0x00B8(0x0028) (Edit)

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
	FBlackboardKeySelector                             BlackboardKey;                                            // 0x00B8(0x0028) (Edit)

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
	FAIDataProviderFloatValue                          EnterRange;                                               // 0x0080(0x0030) (Edit)
	FAIDataProviderFloatValue                          ExitRange;                                                // 0x00B0(0x0030) (Edit)
	FBlackboardKeySelector                             TargetKey;                                                // 0x00E0(0x0028) (Edit)

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
	FBlackboardKeySelector                             ReferencePointKey;                                        // 0x0108(0x0028) (Edit)

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
	FAIDataProviderFloatValue                          EnterRange;                                               // 0x0080(0x0030) (Edit)
	FAIDataProviderFloatValue                          ExitRange;                                                // 0x00B0(0x0030) (Edit)
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
	FBlackboardKeySelector                             ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	FBlackboardKeySelector                             Observed;                                                 // 0x0098(0x0028) (Edit)

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
	FName                                              FeatureName;                                              // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	UClass*                                            AIAbilityType;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	FBlackboardKeySelector                             WaterVolumeActor;                                         // 0x0090(0x0028) (Edit)
	FBlackboardKeySelector                             TargetLocation;                                           // 0x00B8(0x0028) (Edit)
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
	TArray<FChanceAndBlackboardKeyPair>                ChanceKeyPairs;                                           // 0x0068(0x0010) (Edit, ZeroConstructor)

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
	FAIDataProviderFloatValue                          Chance;                                                   // 0x0068(0x0030) (Edit)

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
	UCurveFloat*                                       RandomNumLoopCurve;                                       // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	UClass*                                            Type;                                                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	FBlackboardKeySelector                             Interactable;                                             // 0x0070(0x0028) (Edit)
	FBlackboardKeySelector                             TargetForInteractable;                                    // 0x0098(0x0028) (Edit)
	FBlackboardKeySelector                             TargetRelativeAimVector;                                  // 0x00C0(0x0028) (Edit)

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
	FBlackboardKeySelector                             BlockChangeAIAbilitiesKey;                                // 0x0070(0x0028) (Edit)

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
	FConditionalBasedOnBlackboardKey                   Conditional;                                              // 0x00A0(0x0038) (Edit)

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
	FAIDataProviderFloatValue                          TurnSpeed;                                                // 0x0070(0x0030) (Edit)

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
	FCustomAnimationMontageId                          CustomAnimationMontageId;                                 // 0x0070(0x0008) (Edit)

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
	FBlackboardKeySelector                             OverrideEQSKey;                                           // 0x00A0(0x0028) (Edit)
	UEnvQuery*                                         QueryTemplate;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FEnvNamedValue>                             QueryParams;                                              // 0x00D0(0x0010) (Edit, ZeroConstructor)
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
	FBlackboardKeySelector                             MovingActorKey;                                           // 0x00E8(0x0028) (Edit)
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
	UClass*                                            NewStrategy;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	FBlackboardKeySelector                             BoolValueKey;                                             // 0x0070(0x0028) (Edit)

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
	FBlackboardKeySelector                             BoolValueKey;                                             // 0x0070(0x0028) (Edit)

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
	FBlackboardKeySelector                             NameValueKey;                                             // 0x0070(0x0028) (Edit)
	FName                                              Value;                                                    // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant"));
		return ptr;
	}

};


// Class AthenaAI.BTService_TriggerNotifications
// 0x0028 (0x0098 - 0x0070)
class UBTService_TriggerNotifications : public UBTService
{
public:
	UClass*                                            EnterBranchNotificationId;                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            LeaveBranchNotificationId;                                // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

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
	FConditionalBasedOnBlackboardKey                   Conditional;                                              // 0x00A8(0x0038) (Edit)

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
	FBlackboardKeySelector                             Interactable;                                             // 0x0070(0x0028) (Edit)
	FBlackboardKeySelector                             TargetForInteractable;                                    // 0x0098(0x0028) (Edit)

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
	FAIDataProviderFloatValue                          ContinuousStatusDuration;                                 // 0x0068(0x0030) (Edit)
	FStatus                                            StatusToApply;                                            // 0x0098(0x0018) (Edit)

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
	FBlackboardKeySelector                             TargetBlackboardKey;                                      // 0x00C0(0x0028) (Edit)

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
	FAIDataProviderFloatValue                          Min;                                                      // 0x0068(0x0030) (Edit)
	FAIDataProviderFloatValue                          Max;                                                      // 0x0098(0x0030) (Edit)
	FAIDataProviderFloatValue                          FixedWaitTime;                                            // 0x00C8(0x0030) (Edit)

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
	FAIDataProviderFloatValue                          Floor;                                                    // 0x00F8(0x0030) (Edit)

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
	FBlackboardKeySelector                             SourceInteractable;                                       // 0x0060(0x0028) (Edit)
	FBlackboardKeySelector                             InteractionPosition;                                      // 0x0088(0x0028) (Edit)
	FBlackboardKeySelector                             InteractionFocusPosition;                                 // 0x00B0(0x0028) (Edit)

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
	FBlackboardKeySelector                             SrcBlackboardKey;                                         // 0x0060(0x0028) (Edit)
	FBlackboardKeySelector                             TargetBlackboardKey;                                      // 0x0088(0x0028) (Edit)

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
	FBlackboardKeySelector                             SrcBlackboardKey;                                         // 0x0060(0x0028) (Edit)
	FBlackboardKeySelector                             TargetBlackboardKey;                                      // 0x0088(0x0028) (Edit)

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
	UClass*                                            AIAbilityTypeToFollowUp;                                  // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	UClass*                                            AIAbilityType;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	FAIDataProviderFloatValue                          FloatValueDelta;                                          // 0x0088(0x0030) (Edit)

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
	FAIDataProviderIntValue                            IntegerValueDelta;                                        // 0x0088(0x0030) (Edit)

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
	UClass*                                            NotificationId;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	FBlackboardKeySelector                             TargetBlackboardKey;                                      // 0x00A8(0x0028) (Edit)

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
	UAnimSequence*                                     Anim;                                                     // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
	FCustomAnimationMontageId                          CustomAnimationMontageId;                                 // 0x0060(0x0008) (Edit)
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
	UObject*                                           MontageToPlay;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
	UClass*                                            NewStrategy;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	TArray<FWeightedAIStrategyChance>                  WeightedStrategies;                                       // 0x0060(0x0010) (Edit, ZeroConstructor)

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
	AActor*                                            Actor;                                                    // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	UClass*                                            ClassValue;                                               // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	UEnvQuery*                                         EQS;                                                      // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	FAIDataProviderFloatValue                          FloatValue;                                               // 0x0088(0x0030) (Edit)

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
	FAIDataProviderFloatValue                          MinValue;                                                 // 0x0088(0x0030) (Edit)
	FAIDataProviderFloatValue                          MaxValue;                                                 // 0x00B8(0x0030) (Edit)

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
	FAIDataProviderStructValue                         WeightedArrayFromParams;                                  // 0x0088(0x0030) (Edit)

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
	FAIDataProviderIntValue                            IntValue;                                                 // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardIntValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardVectorValue
// 0x0038 (0x00C0 - 0x0088)
class UBTTask_SetBlackboardVectorValue : public UBTTask_BlackboardBase
{
public:
	bool                                               UseVectorFromBlackboard;                                  // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	FVector                                            StaticValue;                                              // 0x008C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	FBlackboardKeySelector                             BlackboardKeyToUseForVector;                              // 0x0098(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardVectorValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetFollowUpAbility
// 0x0008 (0x0068 - 0x0060)
class UBTTask_SetFollowUpAbility : public UBTTaskNode
{
public:
	UClass*                                            AIAbilityType;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	FBlackboardKeySelector                             Interactable;                                             // 0x0060(0x0028) (Edit)
	FBlackboardKeySelector                             TargetForInteractable;                                    // 0x0088(0x0028) (Edit)
	FBlackboardKeySelector                             TargetRelativeAimVector;                                  // 0x00B0(0x0028) (Edit)

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
	FVector                                            NewVelocity;                                              // 0x008C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

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
	FBlackboardKeySelector                             BlackBoardKeyNameToStoreActor;                            // 0x0060(0x0028) (Edit)
	UClass*                                            ActorToSpawn;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FVector                                            SpawnOffset;                                              // 0x0090(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
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
// 0x0010 (0x0070 - 0x0060)
class UBTTask_TriggerNotification : public UBTTaskNode
{
public:
	UClass*                                            NotificationId;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

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
	UClass*                                            BurrowCrackClass;                                         // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            BurrowEruptClass;                                         // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurrowFadeoutTime;                                        // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<ABurrowCrack*>                              BurrowCracks;                                             // 0x00E8(0x0010) (ZeroConstructor, Transient)
	ABurrowEruptBase*                                  BurrowErupt;                                              // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
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
	UParticleSystem*                                   VFXAsset;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              VfxSocketName;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UParticleSystemComponent*                          SpawnedVFXSystem;                                         // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ECoralShieldVFXRole>                   CurrentCoralShieldRole;                                   // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	UCurveFloat*                                       OffToOnCurve;                                             // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffToOnDuration;                                          // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	UCurveFloat*                                       OnToOffCurve;                                             // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnToOffDuration;                                          // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              OffToOnParamOverrideName;                                 // 0x0104(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              OnToOffParamOverrideName;                                 // 0x010C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              ReceiverMeshComponentName;                                // 0x0114(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              CasterMeshComponentName;                                  // 0x011C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	TArray<UMaterialInstanceDynamic*>                  OverriddenMaterialsForReceive;                            // 0x0128(0x0010) (ZeroConstructor, Transient)
	TArray<UMaterialInstanceDynamic*>                  OverriddenMaterialsForCast;                               // 0x0138(0x0010) (ZeroConstructor, Transient)
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
	TArray<FStringAssetReference>                      CustomAnimationAssets;                                    // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.CustomSkeletonAnimationDataList"));
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
	TArray<AActor*>                                    SeenActors;                                               // 0x0028(0x0010) (ZeroConstructor)
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
	FName                                              OverrideSpawnType;                                        // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
	UClass*                                            Context;                                                  // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	UClass*                                            FromContext;                                              // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            ToContext;                                                // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FAIDataProviderFloatValue                          PointSpacing;                                             // 0x00A0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderIntValue                            NumExtraPairsOfParallelLines;                             // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          ParallelLineSpacing;                                      // 0x0100(0x0030) (Edit, DisableEditOnInstance)
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
	UClass*                                            Context;                                                  // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	TArray<FAIDataProviderFloatValue>                  Radiuses;                                                 // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FAIDataProviderIntValue                            NumberOfVerticalCircles;                                  // 0x00A0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderIntValue                            NumberOfHorizontalCircles;                                // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      DefineFirstPointDirection : 1;                            // 0x0100(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	FEnvDirection                                      FirstPointDirection;                                      // 0x0108(0x0020) (Edit, DisableEditOnInstance)
	UClass*                                            Centre;                                                   // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FAIDataProviderFloatValue                          ZOffsetFromCentre;                                        // 0x0130(0x0030) (Edit, DisableEditOnInstance)

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
	UClass*                                            Origin;                                                   // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FAIDataProviderIntValue                            NumberOfArcsToGenerate;                                   // 0x0098(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          MinArcRadius;                                             // 0x00C8(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          MaxArcRadius;                                             // 0x00F8(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          MinArcTiltDegrees;                                        // 0x0128(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          MaxArcTiltDegrees;                                        // 0x0158(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          MinArcPercentage;                                         // 0x0188(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          MaxArcPercentage;                                         // 0x01B8(0x0030) (Edit, DisableEditOnInstance)
	bool                                               IncludeDirectArcToTarget;                                 // 0x01E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	UClass*                                            DirectArcTarget;                                          // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	FAIDataProviderFloatValue                          InnerRadius;                                              // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          OuterRadius;                                              // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderIntValue                            NumberOfRings;                                            // 0x00F0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderIntValue                            PointsPerRing;                                            // 0x0120(0x0030) (Edit, DisableEditOnInstance)
	FEnvDirection                                      ArcDirection;                                             // 0x0150(0x0020) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          ArcAngle;                                                 // 0x0170(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          ZOffsetFromCentre;                                        // 0x01A0(0x0030) (Edit, DisableEditOnInstance)
	UClass*                                            Center;                                                   // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01D8(0x0001)
	unsigned char                                      ProjectPointsToWaterSurface : 1;                          // 0x01D8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	UClass*                                            WaterPlaneSourceContext;                                  // 0x01E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
	FAIDataProviderFloatValue                          Radius;                                                   // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	TArray<FAIDataProviderFloatValue>                  ZOffsetOfRingsFromContext;                                // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FAIDataProviderIntValue                            PointsPerRing;                                            // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	UClass*                                            Center;                                                   // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	UClass*                                            Context;                                                  // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryTest_HasLineOfSight"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_InGameEventExclusionZone
// 0x0008 (0x0178 - 0x0170)
class UEnvQueryTest_InGameEventExclusionZone : public UEnvQueryTest
{
public:
	float                                              Radius;                                                   // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryTest_InGameEventExclusionZone"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_IsAngleInRange2D
// 0x00A0 (0x0210 - 0x0170)
class UEnvQueryTest_IsAngleInRange2D : public UEnvQueryTest
{
public:
	FEnvDirection                                      LineA;                                                    // 0x0170(0x0020) (Edit, DisableEditOnInstance)
	FEnvDirection                                      LineB;                                                    // 0x0190(0x0020) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          MinAngleDegrees;                                          // 0x01B0(0x0030) (Edit, DisableEditOnInstance)
	FAIDataProviderFloatValue                          MaxAngleDegrees;                                          // 0x01E0(0x0030) (Edit, DisableEditOnInstance)

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
	UClass*                                            ActorWithWaterPlaneContext;                               // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	TArray<UMaterialInstanceDynamic*>                  OverridenMaterials;                                       // 0x01E0(0x0010) (ZeroConstructor)
	FName                                              EmissiveMaterialParameterName;                            // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	TArray<UClass*>                                    AIClasses;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.IsAIOfClassStatCondition"));
		return ptr;
	}

};


// Class AthenaAI.IsAIOfFormStatCondition
// 0x0010 (0x0040 - 0x0030)
class UIsAIOfFormStatCondition : public UTargetedStatCondition
{
public:
	TArray<TAssetPtr<class UClass>>                    AllowedAIForms;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.IsAIOfFormStatCondition"));
		return ptr;
	}

};


// Class AthenaAI.IsAIOfSkillsetStatCondition
// 0x0010 (0x0040 - 0x0030)
class UIsAIOfSkillsetStatCondition : public UTargetedStatCondition
{
public:
	TArray<UAthenaAIControllerParamsDataAsset*>        AISkillsets;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
	FName                                              NoiseTag;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NoiseRangeBasedOnMovementSpeed;                           // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              ConstantNoiseRange;                                       // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UCurveFloat*                                       MovementSpeedToNoiseRange;                                // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	AActor*                                            OwnerActor;                                               // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
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
	TArray<FName>                                      SpawnContextIDs;                                          // 0x03D0(0x0010) (Edit, ZeroConstructor)
	UBoxComponent*                                     BoundingBox;                                              // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SpawnContextProviderZone"));
		return ptr;
	}


	void RemoveContextsFromTarget(AActor* InActor, UPrimitiveComponent* InComponent, int InOtherBodyIndex);
	void AddContextsToTarget(AActor* InActor, UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool InFromSweep, const FHitResult& InSweepResult);
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
	FName                                              BlackboardBoolKeyName;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
	FName                                              BlackboardClassKeyName;                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            ValueWhenActive;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SetValueOnDeactivate;                                     // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	UClass*                                            ValueWhenDeactivated;                                     // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	FName                                              BlackboardFloatKeyName;                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
	TArray<FAIStrategyVulnerabilityData>               StrategyVulnerabilities;                                  // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UHealthComponent*                                  HealthComponent;                                          // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
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
	UAISpawnerList*                                    Spawners;                                                 // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.WaterbasedAISupplier"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
