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

// Enum OnlineSubsystem.EOnlineStatsSuccess
enum class EOnlineStatsSuccess : uint8_t
{
	EOnlineStatsSuccess__Success   = 0,
	EOnlineStatsSuccess__UnknownError = 1,
	EOnlineStatsSuccess__InvalidStatId = 2,
	EOnlineStatsSuccess__InvalidArgument = 3,
	EOnlineStatsSuccess__InvalidUser = 4,
	EOnlineStatsSuccess__EOnlineStatsSuccess_MAX = 5
};


// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Success   = 0,
	EInAppPurchaseState__Failed    = 1,
	EInAppPurchaseState__Cancelled = 2,
	EInAppPurchaseState__Invalid   = 3,
	EInAppPurchaseState__NotAllowed = 4,
	EInAppPurchaseState__Restored  = 5,
	EInAppPurchaseState__Unknown   = 6,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 7
};


// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None          = 0,
	EMPMatchOutcome__Quit          = 1,
	EMPMatchOutcome__Won           = 2,
	EMPMatchOutcome__Lost          = 3,
	EMPMatchOutcome__Tied          = 4,
	EMPMatchOutcome__TimeExpired   = 5,
	EMPMatchOutcome__First         = 6,
	EMPMatchOutcome__Second        = 7,
	EMPMatchOutcome__Third         = 8,
	EMPMatchOutcome__Fourth        = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX = 10
};


// Enum OnlineSubsystem.EPlatformId
enum class EPlatformId : uint8_t
{
	EPlatformId__Unknown           = 0,
	EPlatformId__XboxLive          = 1,
	EPlatformId__Steam             = 2,
	EPlatformId__EPlatformId_MAX   = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
