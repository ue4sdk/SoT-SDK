#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_OnlineSubsystem_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid = 0,
	None                           = 1,
	EBeaconConnectionState__EBeaconConnectionState_MAX = 2
};


// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult = 0,
	None                           = 1,
	EPartyReservationResult__IncorrectPlayerCount = 2,
	None01                         = 3,
	EPartyReservationResult__ReservationAccepted = 4,
	None02                         = 5,
	EPartyReservationResult__ReservationInvalid = 6,
	None03                         = 7
};


// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending = 0,
	None                           = 1,
	EClientRequestType__ChangeWorldRequest = 2,
	None01                         = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0030
struct FPlayerReservation
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0000(0x0018) (Transient)
	class FString                                      ValidationStr;                                            // 0x0018(0x0010) (ZeroConstructor, Transient)
	float                                              ElapsedTime;                                              // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0030
struct FPartyReservation
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x0008(0x0018) (Transient)
	TArray<struct FPlayerReservation>                  PartyMembers;                                             // 0x0020(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00E0
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
