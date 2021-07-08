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

// Enum AIShips.EAIShipEncounterType
enum class EAIShipEncounterType : uint8_t
{
	EAIShipEncounterType__Battle   = 0,
	EAIShipEncounterType__Passive  = 1,
	EAIShipEncounterType__Aggressive = 2,
	EAIShipEncounterType__MAX      = 3,
	EAIShipEncounterType__EAIShipEncounterType_MAX = 4
};


// Enum AIShips.ECannonballIconType
enum class ECannonballIconType : uint8_t
{
	ECannonballIconType__Normal    = 0,
	ECannonballIconType__Anchor    = 1,
	ECannonballIconType__Ballast   = 2,
	ECannonballIconType__Barrel    = 3,
	ECannonballIconType__Boogie    = 4,
	ECannonballIconType__Grog      = 5,
	ECannonballIconType__Limp      = 6,
	ECannonballIconType__Passive   = 7,
	ECannonballIconType__Rigging   = 8,
	ECannonballIconType__Rudder    = 9,
	ECannonballIconType__Silence   = 10,
	ECannonballIconType__Snake     = 11,
	ECannonballIconType__Snooze    = 12,
	ECannonballIconType__None      = 13,
	ECannonballIconType__Max       = 14,
	ECannonballIconType__ECannonballIconType_MAX = 15
};


// Enum AIShips.ESkellyFormIconType
enum class ESkellyFormIconType : uint8_t
{
	ESkellyFormIconType__Normal    = 0,
	ESkellyFormIconType__Metal     = 1,
	ESkellyFormIconType__Plant     = 2,
	ESkellyFormIconType__Shadow    = 3,
	ESkellyFormIconType__None      = 4,
	ESkellyFormIconType__Max       = 5,
	ESkellyFormIconType__ESkellyFormIconType_MAX = 6
};


// Enum AIShips.EAIShipType
enum class EAIShipType : uint8_t
{
	EAIShipType__Normal            = 0,
	EAIShipType__Hard              = 1,
	EAIShipType__EAIShipType_MAX   = 2
};


// Enum AIShips.EAIShipPlayerTrackerType
enum class EAIShipPlayerTrackerType : uint8_t
{
	DefaultRadiusTracker           = 0,
	CannonRadiusTracker            = 1,
	OnShipTracker                  = 2,
	BelowDeckOfShipTracker         = 3,
	EAIShipPlayerTrackerType_MAX   = 4
};


// Enum AIShips.EAIShipDestructionReason
enum class EAIShipDestructionReason : uint8_t
{
	EAIShipDestructionReason__Defeated = 0,
	EAIShipDestructionReason__Despawn = 1,
	EAIShipDestructionReason__EAIShipDestructionReason_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
