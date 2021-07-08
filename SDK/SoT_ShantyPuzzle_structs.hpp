#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_ShantyPuzzle_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_Time_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShantyPuzzle.ShantyPuzzleInteractionZoneDefinition
// 0x0018
struct FShantyPuzzleInteractionZoneDefinition
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<EMusicalInstrumentType>                RequiredMusicalInstrumentType;                            // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                RequiredNumInteractors;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct ShantyPuzzle.ShantyPuzzleUnlockCanceledEvent
// 0x0001
struct FShantyPuzzleUnlockCanceledEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ShantyPuzzle.ShantyPuzzleSingleInteractionZoneStopInteractingEvent
// 0x0010
struct FShantyPuzzleSingleInteractionZoneStopInteractingEvent
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                InteractionZoneIdx;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShantyPuzzle.ShantyPuzzleSingleInteractionZoneUnlockEvent
// 0x0010
struct FShantyPuzzleSingleInteractionZoneUnlockEvent
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                InteractionZoneIdx;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShantyPuzzle.ShantyPuzzlePlayerExitInteractionZoneEvent
// 0x0008
struct FShantyPuzzlePlayerExitInteractionZoneEvent
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShantyPuzzle.ShantyPuzzlePlayerEnterInteractionZoneEvent
// 0x0008
struct FShantyPuzzlePlayerEnterInteractionZoneEvent
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShantyPuzzle.ShantyPuzzleUnlockedCompleteEvent
// 0x0001
struct FShantyPuzzleUnlockedCompleteEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
