#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_CursedRogue_BuryPointPuzzle_classes.hpp"
#include "SoT_DS_CursedRogue_KeyCrewPuzzle_classes.hpp"
#include "SoT_DS_Lorebooks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_CursedRogue_Definition.DS_CursedRogue_Definition
// 0x00F0
struct FDS_CursedRogue_Definition
{
	TArray<struct FDS_CursedRogue_KeyCrewPuzzle>       KeyCrewPuzzles_30_636F9638426528526A9AB690EB034E50;       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_CursedRogue_BuryPointPuzzle>     BuryPointPuzzles_34_865199B146323D9ACBDAE48914D7BDCD;     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              CollectorsChestItems_8_9D8240C449D33A633F1B3EB60A3F3A48;  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            CompassSpawnLocationID_16_AFF00CE54F0E15620536979F502CE68B;// 0x0030(0x0020) (Edit, BlueprintVisible)
	TArray<class UClass*>                              BuriedDummyItemPools_23_C5C37B7440E634CAD1467E97AB4A90DC; // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            NPCLocation_26_D8A77D864C22553F064FC0B29D449F8C;          // 0x0060(0x0020) (Edit, BlueprintVisible)
	TArray<struct FDS_Lorebooks>                       Lorebooks_39_593F2B9044A98C567FADC49CBEA4577C;            // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class AActor>>                    KeyCrewLocations_47_766D86984114B37A3B367EB7DD14A0FC;     // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          KeyCrewSpawners_51_2C14DFD541EF611D72CF3D9FABE6BBF9;      // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class AActor>>                    BuryPointLocations_55_AA515CFE4965FB87ED5A2FAE958AAA79;   // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          BuryPointSpawners_59_CF9D682C469D0CC10BE41498D858C79B;    // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class AActor>>                    BriggsyLocations_64_8516D6E741122D73FADB7EB49CF8C995;     // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          BriggsySpawners_68_871DA0D247D1A72B399D56BFAEE9F6A5;      // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
