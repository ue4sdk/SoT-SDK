#pragma once

// Sea of Thieves (1.4) SDK

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


// Enum AthenaAI.EAthenaAISpawnType
enum class EAthenaAISpawnType : uint8_t
{
	EAthenaAISpawnType__SpawnOnLand = 0,
	EAthenaAISpawnType__SpawnOnShip = 1,
	EAthenaAISpawnType__SpawnSummoned = 2,
	EAthenaAISpawnType__EAthenaAISpawnType_MAX = 3
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
	AISpawnRequestState__WaitForCanSpawn = 1,
	AISpawnRequestState__WaitForClassLoad = 2,
	AISpawnRequestState__WaitForLocationResult = 3,
	AISpawnRequestState__WaitForLocationCheck = 4,
	AISpawnRequestState__Complete  = 5,
	AISpawnRequestState__AISpawnRequestState_MAX = 6
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


// Enum AthenaAI.ECustomAiEventDuringDeathEnum
enum class ECustomAiEventDuringDeathEnum : uint8_t
{
	ECustomAiEventDuringDeathEnum__None = 0,
	ECustomAiEventDuringDeathEnum__StartSinking = 1,
	ECustomAiEventDuringDeathEnum__StartSinkingAnim = 2,
	ECustomAiEventDuringDeathEnum__ECustomAiEventDuringDeathEnum_MAX = 3
};


// Enum AthenaAI.EBT_ShipOwnership
enum class EBT_ShipOwnership : uint8_t
{
	EBT_ShipOwnership__Any         = 0,
	EBT_ShipOwnership__Crew        = 1,
	EBT_ShipOwnership__Alliance    = 2,
	EBT_ShipOwnership__AI          = 3,
	EBT_ShipOwnership__EBT_MAX     = 4
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


// Enum AthenaAI.AISpawnRequestResult
enum class EAISpawnRequestResult : uint8_t
{
	AISpawnRequestResult__Incomplete = 0,
	AISpawnRequestResult__Success  = 1,
	AISpawnRequestResult__FailedSpawnDenied = 2,
	AISpawnRequestResult__FailedNoQuery = 3,
	AISpawnRequestResult__FailedNoValidPos = 4,
	AISpawnRequestResult__FailedNoPawnClass = 5,
	AISpawnRequestResult__Cancelled = 6,
	AISpawnRequestResult__AISpawnRequestResult_MAX = 7
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


// Enum AthenaAI.EAthenaAnimationPetRoamingState
enum class EAthenaAnimationPetRoamingState : uint8_t
{
	EAthenaAnimationPetRoamingState__Idle = 0,
	EAthenaAnimationPetRoamingState__Locomotion = 1,
	EAthenaAnimationPetRoamingState__Unique = 2,
	EAthenaAnimationPetRoamingState__React = 3,
	EAthenaAnimationPetRoamingState__Call = 4,
	EAthenaAnimationPetRoamingState__Concealed = 5,
	EAthenaAnimationPetRoamingState__FlyCannon = 6,
	EAthenaAnimationPetRoamingState__Cheer = 7,
	EAthenaAnimationPetRoamingState__Interested = 8,
	EAthenaAnimationPetRoamingState__Talking = 9,
	EAthenaAnimationPetRoamingState__Happy = 10,
	EAthenaAnimationPetRoamingState__Grumpy = 11,
	EAthenaAnimationPetRoamingState__Angry = 12,
	EAthenaAnimationPetRoamingState__Dance = 13,
	EAthenaAnimationPetRoamingState__Cleaning = 14,
	EAthenaAnimationPetRoamingState__Exit = 15,
	EAthenaAnimationPetRoamingState__Arrive = 16,
	EAthenaAnimationPetRoamingState__Startled = 17,
	EAthenaAnimationPetRoamingState__Inactive = 18,
	EAthenaAnimationPetRoamingState__TakingOff = 19,
	EAthenaAnimationPetRoamingState__Landing = 20,
	EAthenaAnimationPetRoamingState__Flying = 21,
	EAthenaAnimationPetRoamingState__Yawn = 22,
	EAthenaAnimationPetRoamingState__Scared = 23,
	EAthenaAnimationPetRoamingState__Protective = 24,
	EAthenaAnimationPetRoamingState__Play = 25,
	EAthenaAnimationPetRoamingState__Vomit = 26,
	EAthenaAnimationPetRoamingState__Chew = 27,
	EAthenaAnimationPetRoamingState__Sneeze = 28,
	EAthenaAnimationPetRoamingState__Sleep = 29,
	EAthenaAnimationPetRoamingState__Hangout_A = 30,
	EAthenaAnimationPetRoamingState__Hangout_B = 31,
	EAthenaAnimationPetRoamingState__Hangout_C = 32,
	EAthenaAnimationPetRoamingState__EAthenaAnimationPetRoamingState_MAX = 33
};


// Enum AthenaAI.EAthenaAnimationPetHeldState
enum class EAthenaAnimationPetHeldState : uint8_t
{
	EAthenaAnimationPetHeldState__Idle = 0,
	EAthenaAnimationPetHeldState__Unique = 1,
	EAthenaAnimationPetHeldState__Jump = 2,
	EAthenaAnimationPetHeldState__Locomotion = 3,
	EAthenaAnimationPetHeldState__Angry = 4,
	EAthenaAnimationPetHeldState__Underwater = 5,
	EAthenaAnimationPetHeldState__UnEquip = 6,
	EAthenaAnimationPetHeldState__Equip = 7,
	EAthenaAnimationPetHeldState__Inactive = 8,
	EAthenaAnimationPetHeldState__EAthenaAnimationPetHeldState_MAX = 9
};


// Enum AthenaAI.EAthenaAnimationPetSpawnState
enum class EAthenaAnimationPetSpawnState : uint8_t
{
	EAthenaAnimationPetSpawnState__Null = 0,
	EAthenaAnimationPetSpawnState__BeingHeld = 1,
	EAthenaAnimationPetSpawnState__Roaming = 2,
	EAthenaAnimationPetSpawnState__EAthenaAnimationPetSpawnState_MAX = 3
};


// Enum AthenaAI.EDebugPetStateDescriptor
enum class EDebugPetStateDescriptor : uint8_t
{
	EDebugPetStateDescriptor__NoState = 0,
	EDebugPetStateDescriptor__Hangout_Docked = 1,
	EDebugPetStateDescriptor__Hangout_MoveToLocation = 2,
	EDebugPetStateDescriptor__Reacting = 3,
	EDebugPetStateDescriptor__Pursuit = 4,
	EDebugPetStateDescriptor__Idle = 5,
	EDebugPetStateDescriptor__Follow = 6,
	EDebugPetStateDescriptor__EDebugPetStateDescriptor_MAX = 7
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
