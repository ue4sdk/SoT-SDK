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

// Enum Watercrafts.EOarState
enum class EOarState : uint8_t
{
	EOarState__Idle                = 0,
	EOarState__InStroke            = 1,
	EOarState__ApexOfStroke        = 2,
	EOarState__RecoveringFromStroke = 3,
	EOarState__Braking             = 4,
	EOarState__EOarState_MAX       = 5
};


// Enum Watercrafts.EOarIdentifier
enum class EOarIdentifier : uint8_t
{
	EOarIdentifier__Left           = 0,
	EOarIdentifier__Right          = 1,
	EOarIdentifier__EOarIdentifier_MAX = 2
};


// Enum Watercrafts.ERowboatActionTelemetry
enum class ERowboatActionTelemetry : uint8_t
{
	ERowboatActionTelemetry__None  = 0,
	ERowboatActionTelemetry__Mount = 1,
	ERowboatActionTelemetry__Unmount = 2,
	ERowboatActionTelemetry__ERowboatActionTelemetry_MAX = 3
};


// Enum Watercrafts.EWatercraftDespawnReason
enum class EWatercraftDespawnReason : uint8_t
{
	EWatercraftDespawnReason__Unknown = 0,
	EWatercraftDespawnReason__Destroyed = 1,
	EWatercraftDespawnReason__ExternalRequest = 2,
	EWatercraftDespawnReason__Migration = 3,
	EWatercraftDespawnReason__WorldEnding = 4,
	EWatercraftDespawnReason__EWatercraftDespawnReason_MAX = 5
};


// Enum Watercrafts.EOarInputState
enum class EOarInputState : uint8_t
{
	EOarInputState__Inactive       = 0,
	EOarInputState__Active         = 1,
	EOarInputState__Braking        = 2,
	EOarInputState__EOarInputState_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
