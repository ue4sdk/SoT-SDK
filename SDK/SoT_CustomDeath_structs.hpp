#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomDeath.SetShouldUseRevivalFlowData
// 0x0008
struct FSetShouldUseRevivalFlowData
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bShouldUseRevivalFlow;                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct CustomDeath.SetShouldSkipFerryOfTheDamnedData
// 0x0008
struct FSetShouldSkipFerryOfTheDamnedData
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSkipFerryOfTheDamned;                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct CustomDeath.GameModeDeathPenaltyRespawnTimerData
// 0x0004
struct FGameModeDeathPenaltyRespawnTimerData
{
	float                                              SpawnTimer;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomDeath.SetCustomPlayerStartData
// 0x0008
struct FSetCustomPlayerStartData
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerStartActorNetID;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomDeath.CustomDeathConfiguration
// 0x0018
struct FCustomDeathConfiguration
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct CustomDeath.ResetCustomConfigForPlayerData
// 0x0004
struct FResetCustomConfigForPlayerData
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomDeath.KillPlayerData
// 0x0004
struct FKillPlayerData
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomDeath.KillCrewData
// 0x0010
struct FKillCrewData
{
	FGuid                                              CrewNetGUID;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomDeath.ForcePlayerRespawnData
// 0x0008
struct FForcePlayerRespawnData
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRespawnAsGhost;                                          // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct CustomDeath.DestroyCustomPlayerStartData
// 0x0018
struct FDestroyCustomPlayerStartData
{
	int                                                PlayerStartActorNetID;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	FString                                            Tag;                                                      // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomDeath.CustomPlayerStartConfigData
// 0x0030
struct FCustomPlayerStartConfigData
{
	FVector                                            Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	FQuat                                              Rotation;                                                 // 0x0010(0x0010) (IsPlainOldData)
	TArray<FString>                                    Tags;                                                     // 0x0020(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
