#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_FateOfTheMorningstar_Lorebooks_classes.hpp"
#include "SoT_DS_FateOfTheMorningstar_SarcophagusSpawnParams_classes.hpp"
#include "SoT_DS_FateOfTheMorningstar_IslandPuzzleSet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_FateOfTheMorningstar_Definition.DS_FateOfTheMorningstar_Definition
// 0x0110
struct FDS_FateOfTheMorningstar_Definition
{
	TArray<struct FDS_FateOfTheMorningstar_SarcophagusSpawnParams> SarcophagusLocations_14_77F419924DBDC269DC04B0AE5203F0CC; // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_FateOfTheMorningstar_IslandPuzzleSet> IslandPuzzleSets_10_EB66A76B45286F5AC8F5E0A7DC664B23;     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            TempChestLocationID_7_0E62C2AC4DD2F5A6A61C868A6E32DF39;   // 0x0020(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            FerrymanLocation_17_50CFA4BA439FDE624FCA54B5E92BAE04;     // 0x0040(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            GhostEli_41_784D00DA4B89705AE6633195FFE4D5EE;             // 0x0060(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            GhostDinger_46_10D7C40A435AEFD8413560A8C187EFCD;          // 0x0080(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            GhostFontaine_47_021008CA40E0F23C5084BD901C05AC59;        // 0x00A0(0x0020) (Edit, BlueprintVisible)
	TArray<struct FDS_FateOfTheMorningstar_Lorebooks>  Lorebooks_51_1AF9ED4C408691A8A8B47E963FC4C973;            // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            FreeSouls_54_646A5C3F45B885CDECE035A5E5E5C8B9;            // 0x00D0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TriggerVolumeLocationID_57_4B50A4CE41A45E5BEE38ABBD1C9A9837;// 0x00F0(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
