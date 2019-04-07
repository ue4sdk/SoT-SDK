#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_StarsOfAThiefPairsPuzzles_classes.hpp"
#include "SoT_DS_StarsOfAThief_VaultParams_classes.hpp"
#include "SoT_DS_StarsOfAThiefPuzzle_classes.hpp"
#include "SoT_DS_Lorebooks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_StarsOfAThiefDefinition.DS_StarsOfAThiefDefinition
// 0x00F0
struct FDS_StarsOfAThiefDefinition
{
	TArray<class UClass*>                              AncientGems_44_F7C6645541D77186C51CD49ACFDE8490;          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_StarsOfAThiefPairsPuzzles>       PuzzlePairs_77_A4C7712C4C930453F41A8787EF8B588A;          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_StarsOfAThiefPuzzle>             BriggsyChestLocation_52_D0D034A442663EA1962E3CA72436D5E3; // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            LockedOoSChest_60_63D014994067D59A774AF99552A6AA2C;       // 0x0030(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            LockedAncientStatue_59_1824D0B043293DD2825FC6B2BD5ABE93;  // 0x0050(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            EnchantedSpyglassLocation_63_09B334F04D29A131C0072DAF7325427F;// 0x0070(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TotemLocation_66_98CB043D4A968BE6FC64A9BC2525B32B;        // 0x0090(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            NPCLocation_69_497923BB48D68440D9453A82B6AB5483;          // 0x00B0(0x0020) (Edit, BlueprintVisible)
	TArray<struct FDS_StarsOfAThief_VaultParams>       VaultParams_81_F60C06F44CDCE098FE439F868904CECE;          // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_Lorebooks>                       Lorebooks_85_6183A12E48EA4AAE09A4FBA355C10921;            // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
