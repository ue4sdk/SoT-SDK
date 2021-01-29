#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_EEmergentGhostShipEncounterProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_GhostShipEncounterProgress.DS_GhostShipEncounterProgress
// 0x0008
struct FDS_GhostShipEncounterProgress
{
	TEnumAsByte<EEmergentGhostShipEncounterProgress>   EncounterProgress_4_1496B55F42F0EDA1AD6D809A6243BDF9;     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                WaveNumber_5_E3ED393749D8F7AFDD7055A3910FBAAC;            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
