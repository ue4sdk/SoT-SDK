#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_CursedRogue_SelectedPuzzles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_CursedRogue_Variables.DS_CursedRogue_Variables
// 0x0118
struct FDS_CursedRogue_Variables
{
	struct FDS_CursedRogue_SelectedPuzzles             SelectedPuzzles_35_2E9E10C945FE8B06290943B937818235;      // 0x0000(0x00E0) (Edit, BlueprintVisible)
	class AActor*                                      CompassSpawnLocation_17_3B39C55541BF4F35BDD6A1B718EF1EB1; // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HandInChest_22_69CA10504A69B4DE67D3B7902A22A125;          // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPC_28_A8CE898C4052D07C815F05B4C1ED6E05;                  // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPCLocation_30_09D7452F423D344B8E3298AD748C26E4;          // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SkeletonCollectorsChest_33_EBC343E14DD43E93F67E99B50BF5CF01;// 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PlaceableReaction_40_4D91360B4991E39BCEE66E92F164C5A2;    // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AAthenaPlayerCharacter*                      CompassCollector_43_930F0802490D5B90577155848E363B18;     // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
