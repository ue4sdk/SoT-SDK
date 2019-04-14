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
// 0x0140
struct FDS_CursedRogue_Variables
{
	struct FDS_CursedRogue_SelectedPuzzles             SelectedPuzzles_35_2E9E10C945FE8B06290943B937818235;      // 0x0000(0x0030) (Edit, BlueprintVisible)
	class AActor*                                      CompassSpawnLocation_17_3B39C55541BF4F35BDD6A1B718EF1EB1; // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPC_28_A8CE898C4052D07C815F05B4C1ED6E05;                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPCLocation_30_09D7452F423D344B8E3298AD748C26E4;          // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SkeletonCollectorsChest_33_EBC343E14DD43E93F67E99B50BF5CF01;// 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PlaceableReaction_40_4D91360B4991E39BCEE66E92F164C5A2;    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AAthenaPlayerCharacter*                      CompassCollector_43_930F0802490D5B90577155848E363B18;     // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TAssetPtr<class AActor>>                    KeyCrewLocations_47_546781CC4646E71EF2A000BB819498A0;     // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          KeyCrewSpawners_51_2070558049FD8D2A6459409987A7EA47;      // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class AActor>>                    BuryPointLocations_55_6CC325214401E731F9095A89EEDF6A73;   // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          BuryPointSpawners_59_46B7904A48CA27C8AAD16A8AB61F3D66;    // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class AActor>>                    BriggsyLocations_67_E6861E324798E1DE223C789FA4A58A74;     // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          BriggsySpawners_70_5CFC8BD84B35D3E6D1934CADA6F5EF61;      // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                KeyCrewIndexChosen_73_77B25D4B45F3CB2EAC83BC9488543795;   // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BuryPointIndexChosen_76_EF5B79494B42AA19BAF18FA94077A71A; // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            KeyCrewLocationChosen_79_A56347534CA413143A86F3BE3311F804;// 0x00C8(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            BuryPointLocationChosen_82_96A51E614C97E4EAFD1EBD87CAEC2B35;// 0x00E8(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            BriggsyLocationChosen_91_052276A54BB7B01340C4A2A1B944D87B;// 0x0108(0x0020) (Edit, BlueprintVisible)
	class UAISpawner*                                  KeyCrewSpawnerChosen_86_4F979CC6489706A050AC64968C20A41D; // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  BuryPointSpawnerChosen_88_6D4B70F9430353381B3BBE95002E45A4;// 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  BriggsySpawnerChosen_94_67D6F5264721B7D7B3905995D404218B; // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
