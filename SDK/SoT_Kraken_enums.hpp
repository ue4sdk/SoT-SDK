#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Kraken.ECoordinatedKrakenSpecialEventTypes
enum class ECoordinatedKrakenSpecialEventTypes : uint8_t
{
	ECoordinatedKrakenSpecialEventTypes__None = 0,
	ECoordinatedKrakenSpecialEventTypes__OverrideTargetActor = 1,
	ECoordinatedKrakenSpecialEventTypes__ReleaseTargetActor = 2,
	ECoordinatedKrakenSpecialEventTypes__BiteAttackImpact = 3,
	ECoordinatedKrakenSpecialEventTypes__BreathingIn = 4,
	ECoordinatedKrakenSpecialEventTypes__RoarVisuals = 5,
	ECoordinatedKrakenSpecialEventTypes__RoarAttack = 6,
	ECoordinatedKrakenSpecialEventTypes__EnableHeadDamage = 7,
	ECoordinatedKrakenSpecialEventTypes__ECoordinatedKrakenSpecialEventTypes_MAX = 8
};


// Enum Kraken.ECoordinatedKrakenActionType
enum class ECoordinatedKrakenActionType : uint8_t
{
	ECoordinatedKrakenActionType__Normal = 0,
	ECoordinatedKrakenActionType__Appear = 1,
	ECoordinatedKrakenActionType__Disappear = 2,
	ECoordinatedKrakenActionType__ECoordinatedKrakenActionType_MAX = 3
};


// Enum Kraken.EKrakenBehaviourType
enum class EKrakenBehaviourType : uint8_t
{
	EKrakenBehaviourType__Idle     = 0,
	EKrakenBehaviourType__ShipHitting = 1,
	EKrakenBehaviourType__ShipWrapping = 2,
	EKrakenBehaviourType__PlayerGrabbing = 3,
	EKrakenBehaviourType__EKrakenBehaviourType_MAX = 4
};


// Enum Kraken.EKrakenShipWrappingTentacleState
enum class EKrakenShipWrappingTentacleState : uint8_t
{
	EKrakenShipWrappingTentacleState__Dormant = 0,
	EKrakenShipWrappingTentacleState__Wrapping = 1,
	EKrakenShipWrappingTentacleState__AmbientWobble = 2,
	EKrakenShipWrappingTentacleState__EnteringShakeAttack = 3,
	EKrakenShipWrappingTentacleState__ShakeAttack = 4,
	EKrakenShipWrappingTentacleState__ExitingShakeAttack = 5,
	EKrakenShipWrappingTentacleState__HeavyAttack = 6,
	EKrakenShipWrappingTentacleState__Unwrapping = 7,
	EKrakenShipWrappingTentacleState__EKrakenShipWrappingTentacleState_MAX = 8
};


// Enum Kraken.EKrakenDynamicsStateEvent
enum class EKrakenDynamicsStateEvent : uint8_t
{
	EKrakenDynamicsStateEvent__Damage = 0,
	EKrakenDynamicsStateEvent__Knockback = 1,
	EKrakenDynamicsStateEvent__EKrakenDynamicsStateEvent_MAX = 2
};


// Enum Kraken.EKrakenEQSLockReason
enum class EKrakenEQSLockReason : uint8_t
{
	EKrakenEQSLockReason__Spawning = 0,
	EKrakenEQSLockReason__EKrakenEQSLockReason_MAX = 1
};


// Enum Kraken.EKrakenDespawnReason
enum class EKrakenDespawnReason : uint8_t
{
	EKrakenDespawnReason__Invalid  = 0,
	EKrakenDespawnReason__Defeated = 1,
	EKrakenDespawnReason__TimedOutWithNoTargets = 2,
	EKrakenDespawnReason__TimedOutWithTarget = 3,
	EKrakenDespawnReason__Dismissed = 4,
	EKrakenDespawnReason__EKrakenDespawnReason_MAX = 5
};


// Enum Kraken.EKrakenState
enum class EKrakenState : uint8_t
{
	EKrakenState__Spawning         = 0,
	EKrakenState__Active           = 1,
	EKrakenState__Despawning       = 2,
	EKrakenState__EKrakenState_MAX = 3
};


// Enum Kraken.EKrakenTentacleBehaviourDamageActions
enum class EKrakenTentacleBehaviourDamageActions : uint8_t
{
	EKrakenTentacleBehaviourDamageActions__StayActive = 0,
	EKrakenTentacleBehaviourDamageActions__MoveActive = 1,
	EKrakenTentacleBehaviourDamageActions__FleeInactive = 2,
	EKrakenTentacleBehaviourDamageActions__EKrakenTentacleBehaviourDamageActions_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
