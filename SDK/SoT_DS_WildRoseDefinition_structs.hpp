#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_Puzzle_classes.hpp"
#include "SoT_DS_Lorebooks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_WildRoseDefinition.DS_WildRoseDefinition
// 0x0110
struct FDS_WildRoseDefinition
{
	TArray<struct FDS_Puzzle>                          ChestOfMemoriesLocations_21_13FB91184431A95EB8CDBB962DA13E5F;// 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              Momentoes_11_F7C6645541D77186C51CD49ACFDE8490;            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_Puzzle>                          EasyPuzzles_15_A4C7712C4C930453F41A8787EF8B588A;          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_Puzzle>                          HardPuzzles_19_65E9FAAF47C8F23536EBA4BDD829EBB8;          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            Lockable_28_9E78F2404EA34AF00D6F0B9A7187B589;             // 0x0040(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            EnchantedCompassSpawnLocation_32_473761DD4B28462964C0F88AA5CE8D48;// 0x0060(0x0020) (Edit, BlueprintVisible)
	TArray<TAssetPtr<class AActor>>                    PendantLocations_36_141C70D0493AD4DB94AA08AD1DD71795;     // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            MadamOliveLocation_43_9E6FEBF4416492EF6063A296699F1BDD;   // 0x0090(0x0020) (Edit, BlueprintVisible)
	TArray<struct FDS_Lorebooks>                       Lorebooks_52_451C7E8C47F914486830C39083AB5998;            // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            EnchantmentPlaceableReaction_62_DE5DDD1D4F183C59FD73A783D5AEEB32;// 0x00C0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            EndingPlaceableReaction_65_BC62F11B4F31D1CD09909DB61EC3424A;// 0x00E0(0x0020) (Edit, BlueprintVisible)
	TArray<TAssetPtr<class AActor>>                    RookeEncounterLocations_70_D730B5D941A7696F2395438230EDFD05;// 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
