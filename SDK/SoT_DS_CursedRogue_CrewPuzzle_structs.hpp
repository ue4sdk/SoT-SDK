#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_CursedRogue_AISpawnParams_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_CursedRogue_CrewPuzzle.DS_CursedRogue_CrewPuzzle
// 0x0050
struct FDS_CursedRogue_CrewPuzzle
{
	TArray<class UQuestBookPageBundle*>                Bundles_18_FD7129854194218338B9ACB725780403;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_CursedRogue_AISpawnParams>       CrewAISpawnParams_31_4E79B53F4D120C239D83968D85F9677D;    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UQuestBookPageBundle*>                MapBundles_22_212B1CB64D42D3F9A7DCF2AA44BBFB1A;           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class AActor>>                    BuryLocations_27_2480AEF84858AA94A333F78E850F8A09;        // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class AActor>>                    DummyDigLocations_36_1054E4CD4DFB91F6763B1EB00364C854;    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
