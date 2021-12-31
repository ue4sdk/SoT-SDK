#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_TreasuryFramework_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TreasuryFramework.TreasuryWaveEncounter
// 0x0030
struct FTreasuryWaveEncounter
{
	TEnumAsByte<ETreasuryEncounterType>                EncounterType;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	ASpawnAIWaveMechanismAction*                       SpawnerMechanism;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	AActor*                                            MechanismTrigger;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UTreasuryWaveDataAsset*                            Waves;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UTreasuryWaveDataAsset*                            FinalWaves;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NeedsRoomFlooded;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct TreasuryFramework.TreasuryWaveTracker
// 0x0018
struct FTreasuryWaveTracker
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct TreasuryFramework.EventTreasuryRoomInactive
// 0x0001
struct FEventTreasuryRoomInactive
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct TreasuryFramework.EventTreasuryRoomActive
// 0x0001
struct FEventTreasuryRoomActive
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
