#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AthenaAI.EAIDialogueState
enum class EAIDialogueState : uint8_t
{
	EAIDialogueState__Inactive     = 0,
	EAIDialogueState__Passive      = 1,
	EAIDialogueState__Alerted      = 2,
	EAIDialogueState__Dead         = 3,
	EAIDialogueState__EAIDialogueState_MAX = 4
};


// Enum AthenaAI.EBountySpawnerAudioState
enum class EBountySpawnerAudioState : uint8_t
{
	EBountySpawnerAudioState__None = 0,
	EBountySpawnerAudioState__Action = 1,
	EBountySpawnerAudioState__Anticipation = 2,
	EBountySpawnerAudioState__EBountySpawnerAudioState_MAX = 3
};


// Enum AthenaAI.EBountySpawnerType
enum class EBountySpawnerType : uint8_t
{
	EBountySpawnerType__Default    = 0,
	EBountySpawnerType__BountyQuest = 1,
	EBountySpawnerType__BountyFort = 2,
	EBountySpawnerType__EBountySpawnerType_MAX = 3
};


// Enum AthenaAI.EBountyTargetRank
enum class EBountyTargetRank : uint8_t
{
	EBountyTargetRank__Captain     = 0,
	EBountyTargetRank__Crew        = 1,
	EBountyTargetRank__EBountyTargetRank_MAX = 2
};


// Enum AthenaAI.EBountyTargetGender
enum class EBountyTargetGender : uint8_t
{
	EBountyTargetGender__Male      = 0,
	EBountyTargetGender__Female    = 1,
	EBountyTargetGender__EBountyTargetGender_MAX = 2
};


// Enum AthenaAI.EFaunaInWaterState
enum class EFaunaInWaterState : uint8_t
{
	EFaunaInWaterState__NotInWater = 0,
	EFaunaInWaterState__FloatingOnSurface = 1,
	EFaunaInWaterState__Underwater = 2,
	EFaunaInWaterState__EFaunaInWaterState_MAX = 3
};


// Enum AthenaAI.EFaunaCratedState
enum class EFaunaCratedState : uint8_t
{
	EFaunaCratedState__NotInCrate  = 0,
	EFaunaCratedState__InProxyCrate = 1,
	EFaunaCratedState__InWieldedCrate = 2,
	EFaunaCratedState__EFaunaCratedState_MAX = 3
};


// Enum AthenaAI.EAIKnockbackStrengthType
enum class EAIKnockbackStrengthType : uint8_t
{
	EAIKnockbackStrengthType__Low  = 0,
	EAIKnockbackStrengthType__Medium = 1,
	EAIKnockbackStrengthType__High = 2,
	EAIKnockbackStrengthType__EAIKnockbackStrengthType_MAX = 3
};


// Enum AthenaAI.EAthenaAISpawnType
enum class EAthenaAISpawnType : uint8_t
{
	EAthenaAISpawnType__SpawnOnLand = 0,
	EAthenaAISpawnType__SpawnOnShip = 1,
	EAthenaAISpawnType__SpawnSummoned = 2,
	EAthenaAISpawnType__SpawnBoarding = 3,
	EAthenaAISpawnType__Num        = 4,
	EAthenaAISpawnType__EAthenaAISpawnType_MAX = 5
};


// Enum AthenaAI.EAIAbilityDamageIntervalCounterMode
enum class EAIAbilityDamageIntervalCounterMode : uint8_t
{
	DontBlock                      = 0,
	BlockWhenExecutingThisAbility  = 1,
	BlockWhenExecutingAnyAbility   = 2,
	EAIAbilityDamageIntervalCounterMode_MAX = 3
};


// Enum AthenaAI.EAIDebugColour
enum class EAIDebugColour : uint8_t
{
	EAIDebugColour__Red            = 0,
	EAIDebugColour__Green          = 1,
	EAIDebugColour__Blue           = 2,
	EAIDebugColour__White          = 3,
	EAIDebugColour__Yellow         = 4,
	EAIDebugColour__Black          = 5,
	EAIDebugColour__EAIDebugColour_MAX = 6
};


// Enum AthenaAI.AISpawnRequestResult
enum class EAISpawnRequestResult : uint8_t
{
	AISpawnRequestResult__Incomplete = 0,
	AISpawnRequestResult__Success  = 1,
	AISpawnRequestResult__FailedSpawnDenied = 2,
	AISpawnRequestResult__FailedNoQuery = 3,
	AISpawnRequestResult__FailedNoValidPos = 4,
	AISpawnRequestResult__FailedLoadingPawnClass = 5,
	AISpawnRequestResult__FailedLoadingItemDropComponentClass = 6,
	AISpawnRequestResult__Cancelled = 7,
	AISpawnRequestResult__AISpawnRequestResult_MAX = 8
};


// Enum AthenaAI.ClassLoadState
enum class EClassLoadState : uint8_t
{
	ClassLoadState__Incomplete     = 0,
	ClassLoadState__Success        = 1,
	ClassLoadState__NoLoad         = 2,
	ClassLoadState__Failed         = 3,
	ClassLoadState__ClassLoadState_MAX = 4
};


// Enum AthenaAI.AISpawnLocationSearchResult
enum class EAISpawnLocationSearchResult : uint8_t
{
	AISpawnLocationSearchResult__Incomplete = 0,
	AISpawnLocationSearchResult__Success = 1,
	AISpawnLocationSearchResult__FailedNoQuery = 2,
	AISpawnLocationSearchResult__FailedNoValidPos = 3,
	AISpawnLocationSearchResult__Cancelled = 4,
	AISpawnLocationSearchResult__AISpawnLocationSearchResult_MAX = 5
};


// Enum AthenaAI.AISpawnRequestState
enum class EAISpawnRequestState : uint8_t
{
	AISpawnRequestState__PreloadClasses = 0,
	AISpawnRequestState__AwaitingBegin = 1,
	AISpawnRequestState__DelayUntilNextCanSpawnCheck = 2,
	AISpawnRequestState__WaitForClassLoadsAndLocationResult = 3,
	AISpawnRequestState__DelayUntilNextLocationCheck = 4,
	AISpawnRequestState__Complete  = 5,
	AISpawnRequestState__AISpawnRequestState_MAX = 6
};


// Enum AthenaAI.EAITargetWeaponFiringArcResult
enum class EAITargetWeaponFiringArcResult : uint8_t
{
	LeftOfArc                      = 0,
	RightOfArc                     = 1,
	WithinArc                      = 2,
	EAITargetWeaponFiringArcResult_MAX = 3
};


// Enum AthenaAI.ESirenEncounterState
enum class ESirenEncounterState : uint8_t
{
	ESirenEncounterState__Active   = 0,
	ESirenEncounterState__Inactive = 1,
	ESirenEncounterState__ESirenEncounterState_MAX = 2
};


// Enum AthenaAI.EBlackboardIntValueComparisonType
enum class EBlackboardIntValueComparisonType : uint8_t
{
	EBlackboardIntValueComparisonType__Equal = 0,
	EBlackboardIntValueComparisonType__NotEqual = 1,
	EBlackboardIntValueComparisonType__GreaterThan = 2,
	EBlackboardIntValueComparisonType__LessThan = 3,
	EBlackboardIntValueComparisonType__GreaterThanEquals = 4,
	EBlackboardIntValueComparisonType__LessThanEquals = 5,
	EBlackboardIntValueComparisonType__EBlackboardIntValueComparisonType_MAX = 6
};


// Enum AthenaAI.EBlackboardValueCompositeType
enum class EBlackboardValueCompositeType : uint8_t
{
	EBlackboardValueCompositeType__And = 0,
	EBlackboardValueCompositeType__Or = 1,
	EBlackboardValueCompositeType__EBlackboardValueCompositeType_MAX = 2
};


// Enum AthenaAI.EBlackboardValueComparisonType
enum class EBlackboardValueComparisonType : uint8_t
{
	EBlackboardValueComparisonType__NearlyEqual = 0,
	EBlackboardValueComparisonType__NotNearlyEqual = 1,
	EBlackboardValueComparisonType__GreaterThan = 2,
	EBlackboardValueComparisonType__LessThan = 3,
	EBlackboardValueComparisonType__GreaterThanEquals = 4,
	EBlackboardValueComparisonType__LessThanEquals = 5,
	EBlackboardValueComparisonType__EBlackboardValueComparisonType_MAX = 6
};


// Enum AthenaAI.EFloatValueComparisonType
enum class EFloatValueComparisonType : uint8_t
{
	EFloatValueComparisonType__NearlyEqual = 0,
	EFloatValueComparisonType__NotNearlyEqual = 1,
	EFloatValueComparisonType__GreaterThan = 2,
	EFloatValueComparisonType__LessThan = 3,
	EFloatValueComparisonType__GreaterThanEquals = 4,
	EFloatValueComparisonType__LessThanEquals = 5,
	EFloatValueComparisonType__EFloatValueComparisonType_MAX = 6
};


// Enum AthenaAI.ETraceDirection
enum class ETraceDirection : uint8_t
{
	ETraceDirection__ItemToContext = 0,
	ETraceDirection__ContextToItem = 1,
	ETraceDirection__ETraceDirection_MAX = 2
};


// Enum AthenaAI.EAIThreatLevel
enum class EAIThreatLevel : uint8_t
{
	EAIThreatLevel__NoDanger       = 0,
	EAIThreatLevel__Nervous        = 1,
	EAIThreatLevel__Threatened     = 2,
	EAIThreatLevel__Calm           = 3,
	EAIThreatLevel__EAIThreatLevel_MAX = 4
};


// Enum AthenaAI.EOceanCrawlerAbilityAudioKey
enum class EOceanCrawlerAbilityAudioKey : uint8_t
{
	EOceanCrawlerAbilityAudioKey__NONE = 0,
	EOceanCrawlerAbilityAudioKey__Hermit_Start_BurrowingLoop = 1,
	EOceanCrawlerAbilityAudioKey__Hermit_Stop_BurrowingLoop = 2,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BurrowDown_OneShot = 3,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BurrowEmerge_OneShot = 4,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BurrowHealTarget_OneShot = 5,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_SporeBreath_OneShot = 6,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BullRushChargeUp_OneShot = 7,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BullRushChargeGo_OneShot = 8,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BullRushStaticImpact_OneShot = 9,
	EOceanCrawlerAbilityAudioKey__Crab_Play_PummelWindBack_OneShot = 10,
	EOceanCrawlerAbilityAudioKey__Crab_Play_PummelImpact_OneShot = 11,
	EOceanCrawlerAbilityAudioKey__Crab_Play_CoralShieldStart_OneShot = 12,
	EOceanCrawlerAbilityAudioKey__Crab_Play_CoralShieldEnd_OneShot = 13,
	EOceanCrawlerAbilityAudioKey__Crab_Play_CoralShieldInterrupted_OneShot = 14,
	EOceanCrawlerAbilityAudioKey__Crab_Play_CoralShieldApplied_OneShot = 15,
	EOceanCrawlerAbilityAudioKey__Crab_Play_CoralShieldStopApplying_OneShot = 16,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelelectricShieldStartCharge_OneShot = 17,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelelectricShieldCast_OneShot = 18,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelelectricShieldInterrupted_OneShot = 19,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelelectricShieldAppliedToTarget_OneShot = 20,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelelectricShieldHitToChain_OneShot = 21,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelelectricShieldFinishedOnTarget_OneShot = 22,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelElectricEelThrowCharge_OneShot = 23,
	EOceanCrawlerAbilityAudioKey__EOceanCrawlerAbilityAudioKey_MAX = 24
};


// Enum AthenaAI.ESwimRotationMode
enum class ESwimRotationMode : uint8_t
{
	ESwimRotationMode__FaceMovement = 0,
	ESwimRotationMode__UprightStrafe = 1,
	ESwimRotationMode__LongwaysStrafe = 2,
	ESwimRotationMode__ESwimRotationMode_MAX = 3
};


// Enum AthenaAI.EArcToTargetDirection
enum class EArcToTargetDirection : uint8_t
{
	EArcToTargetDirection__VelocityOrRotation = 0,
	EArcToTargetDirection__VelocityOrRotation2D = 1,
	EArcToTargetDirection__InversedVelocityOrRotation = 2,
	EArcToTargetDirection__InversedVelocityOrRotation2D = 3,
	EArcToTargetDirection__Up      = 4,
	EArcToTargetDirection__Down    = 5,
	EArcToTargetDirection__GoalDirection2D = 6,
	EArcToTargetDirection__EArcToTargetDirection_MAX = 7
};


// Enum AthenaAI.EArcFollowingMode
enum class EArcFollowingMode : uint8_t
{
	EArcFollowingMode__SharkArc    = 0,
	EArcFollowingMode__Simple3DArc = 1,
	EArcFollowingMode__EArcFollowingMode_MAX = 2
};


// Enum AthenaAI.ESwimmingLineOfSightTest
enum class ESwimmingLineOfSightTest : uint8_t
{
	ESwimmingLineOfSightTest__None = 0,
	ESwimmingLineOfSightTest__Lazy = 1,
	ESwimmingLineOfSightTest__Immediate = 2,
	ESwimmingLineOfSightTest__ESwimmingLineOfSightTest_MAX = 3
};


// Enum AthenaAI.ESwimmingSyncMode
enum class ESwimmingSyncMode : uint8_t
{
	ESwimmingSyncMode__Synchronous = 0,
	ESwimmingSyncMode__Asynchronous = 1,
	ESwimmingSyncMode__ESwimmingSyncMode_MAX = 2
};


// Enum AthenaAI.ESwimmingArcMode
enum class ESwimmingArcMode : uint8_t
{
	ESwimmingArcMode__ArcToTarget  = 0,
	ESwimmingArcMode__SwimDirectlyToTarget = 1,
	ESwimmingArcMode__SwimDirectlyDown = 2,
	ESwimmingArcMode__ESwimmingArcMode_MAX = 3
};


// Enum AthenaAI.ESwimmingGoalCheckMode
enum class ESwimmingGoalCheckMode : uint8_t
{
	ESwimmingGoalCheckMode__Goal2D = 0,
	ESwimmingGoalCheckMode__Goal3D = 1,
	ESwimmingGoalCheckMode__ESwimmingGoalCheckMode_MAX = 2
};


// Enum AthenaAI.ETaskReaction
enum class ETaskReaction : uint8_t
{
	ETaskReaction__Ignore          = 0,
	ETaskReaction__SucceedTask     = 1,
	ETaskReaction__FailTask        = 2,
	ETaskReaction__ETaskReaction_MAX = 3
};


// Enum AthenaAI.ETinySharkDespawnReason
enum class ETinySharkDespawnReason : uint8_t
{
	ETinySharkDespawnReason__Invalid = 0,
	ETinySharkDespawnReason__Defeated = 1,
	ETinySharkDespawnReason__TimedOut = 2,
	ETinySharkDespawnReason__ETinySharkDespawnReason_MAX = 3
};


// Enum AthenaAI.ETinySharkActiveState
enum class ETinySharkActiveState : uint8_t
{
	ETinySharkActiveState__TrackingTarget = 0,
	ETinySharkActiveState__WaitingForTarget = 1,
	ETinySharkActiveState__RepositionToTarget = 2,
	ETinySharkActiveState__WaitingForRespawn = 3,
	ETinySharkActiveState__ETinySharkActiveState_MAX = 4
};


// Enum AthenaAI.ETinySharkState
enum class ETinySharkState : uint8_t
{
	ETinySharkState__Inactive      = 0,
	ETinySharkState__Spawning      = 1,
	ETinySharkState__Active        = 2,
	ETinySharkState__Defeated      = 3,
	ETinySharkState__Despawning    = 4,
	ETinySharkState__ETinySharkState_MAX = 5
};


// Enum AthenaAI.EDebugPetStateDescriptor
enum class EDebugPetStateDescriptor : uint8_t
{
	EDebugPetStateDescriptor__NoState = 0,
	EDebugPetStateDescriptor__Hangout_Attached = 1,
	EDebugPetStateDescriptor__Hangout_MoveToLocation = 2,
	EDebugPetStateDescriptor__Reacting = 3,
	EDebugPetStateDescriptor__Pursuit = 4,
	EDebugPetStateDescriptor__Idle = 5,
	EDebugPetStateDescriptor__Follow = 6,
	EDebugPetStateDescriptor__Eating = 7,
	EDebugPetStateDescriptor__Scared = 8,
	EDebugPetStateDescriptor__ForcedIdle = 9,
	EDebugPetStateDescriptor__EDebugPetStateDescriptor_MAX = 10
};


// Enum AthenaAI.EPetSize
enum class EPetSize : uint8_t
{
	EPetSize__Small                = 0,
	EPetSize__Medium               = 1,
	EPetSize__Large                = 2,
	EPetSize__EPetSize_MAX         = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
