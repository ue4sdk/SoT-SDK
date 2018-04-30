#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_OnlineSubsystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0030
struct FPlayerReservation
{
	float                                              ElapsedTime;                                              // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x01E3(0x0018) (Transient)
	class FString                                      ValidationStr;                                            // 0x01E3(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0030
struct FPartyReservation
{
	TArray<struct FPlayerReservation>                  PartyMembers;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	int                                                TeamNum;                                                  // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x01E3(0x0018) (Transient)
};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00D8
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0000(0x00D8) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
