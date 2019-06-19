#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_FateOfTheMorningstar_KeysParams_classes.hpp"
#include "SoT_DS_FateOfTheMorningstar_PuzzleParams_classes.hpp"
#include "SoT_DS_FateOfTheMorningstar_SarcophagusSpawnParams_classes.hpp"
#include "SoT_DS_FateOfTheMorningstar_SharkEncounterParams_classes.hpp"
#include "SoT_DS_FateOfTheMorningstar_CagedKeyParams_classes.hpp"
#include "SoT_DS_FateOfTheMorningstar_GhostFootprints_classes.hpp"
#include "SoT_DS_FateOfTheMorningstar_GhostScenesParams2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_FateOfTheMorningstar_IslandPuzzleSet.DS_FateOfTheMorningstar_IslandPuzzleSet
// 0x0108
struct FDS_FateOfTheMorningstar_IslandPuzzleSet
{
	struct FName                                       IslandName_6_62F50E6B47DA2D80EBFE2CBC563A5F66;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FDS_FateOfTheMorningstar_PuzzleParams> DigLocationPuzzles_7_C15FCBBE40AC8F8672C495ACC5C4779F;    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FDS_FateOfTheMorningstar_SharkEncounterParams SharkEncounter_30_46F2F0994AC322B2AE6AD7BB54425A21;       // 0x0018(0x0048) (Edit, BlueprintVisible)
	struct FDS_FateOfTheMorningstar_KeysParams         KeyLocation_53_033F721A4CFC99AD648DD4BAD7CE5FA3;          // 0x0060(0x0050) (Edit, BlueprintVisible)
	struct FDS_FateOfTheMorningstar_CagedKeyParams     CagedKeyLocation_56_0B4FFF49497620608C452A9AE791C58D;     // 0x00B0(0x0028) (Edit, BlueprintVisible)
	TArray<struct FDS_FateOfTheMorningstar_GhostScenesParams2> GhostScenes_67_D3F91FFC45FF9BB04862C09F81CCC81C;          // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_FateOfTheMorningstar_GhostFootprints> GhostFootprints2_71_23C50BD3444295D5C304D49EDB4894C8;     // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_FateOfTheMorningstar_SarcophagusSpawnParams> SarcophagusLocation_75_B0023A66494664C455C598A2EA164480;  // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
