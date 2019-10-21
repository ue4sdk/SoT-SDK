#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

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


// Enum AthenaAI.EAIDialogueState
enum class EAIDialogueState : uint8_t
{
	EAIDialogueState__Inactive     = 0,
	EAIDialogueState__Passive      = 1,
	EAIDialogueState__Alerted      = 2,
	EAIDialogueState__Dead         = 3,
	EAIDialogueState__EAIDialogueState_MAX = 4
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


// Enum AthenaAI.EAthenaAISpawnType
enum class EAthenaAISpawnType : uint8_t
{
	EAthenaAISpawnType__SpawnOnLand = 0,
	EAthenaAISpawnType__SpawnOnShip = 1,
	EAthenaAISpawnType__SpawnSummoned = 2,
	EAthenaAISpawnType__EAthenaAISpawnType_MAX = 3
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
	AISpawnRequestState__AwaitingBegin = 0,
	AISpawnRequestState__DelayUntilNextCanSpawnCheck = 1,
	AISpawnRequestState__WaitForClassLoadsAndLocationResult = 2,
	AISpawnRequestState__DelayUntilNextLocationCheck = 3,
	AISpawnRequestState__Complete  = 4,
	AISpawnRequestState__AISpawnRequestState_MAX = 5
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


// Enum AthenaAI.EAITargetWeaponFiringArcResult
enum class EAITargetWeaponFiringArcResult : uint8_t
{
	LeftOfArc                      = 0,
	RightOfArc                     = 1,
	WithinArc                      = 2,
	EAITargetWeaponFiringArcResult_MAX = 3
};


// Enum AthenaAI.EAIKnockbackStrengthType
enum class EAIKnockbackStrengthType : uint8_t
{
	EAIKnockbackStrengthType__Low  = 0,
	EAIKnockbackStrengthType__Medium = 1,
	EAIKnockbackStrengthType__High = 2,
	EAIKnockbackStrengthType__EAIKnockbackStrengthType_MAX = 3
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
	ESwimmingArcMode__ESwimmingArcMode_MAX = 2
};


// Enum AthenaAI.ESwimmingGoalCheckMode
enum class ESwimmingGoalCheckMode : uint8_t
{
	ESwimmingGoalCheckMode__Goal2D = 0,
	ESwimmingGoalCheckMode__Goal3D = 1,
	ESwimmingGoalCheckMode__ESwimmingGoalCheckMode_MAX = 2
};


// Enum AthenaAI.ETraceDirection
enum class ETraceDirection : uint8_t
{
	ETraceDirection__ItemToContext = 0,
	ETraceDirection__ContextToItem = 1,
	ETraceDirection__ETraceDirection_MAX = 2
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


// Enum AthenaAI.EAIThreatLevel
enum class EAIThreatLevel : uint8_t
{
	EAIThreatLevel__NoDanger       = 0,
	EAIThreatLevel__Nervous        = 1,
	EAIThreatLevel__Threatened     = 2,
	EAIThreatLevel__Calm           = 3,
	EAIThreatLevel__EAIThreatLevel_MAX = 4
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
