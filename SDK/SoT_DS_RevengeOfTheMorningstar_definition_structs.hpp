#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_RevengeOfTheMorningstar_Puzzle_classes.hpp"
#include "SoT_DS_RevengeOfTheMorningstar_Lorebooks_classes.hpp"
#include "SoT_DS_RevengeOfTheMorningstar_AISpawnParams3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_RevengeOfTheMorningstar_definition.DS_RevengeOfTheMorningstar_definition
// 0x0158
struct FDS_RevengeOfTheMorningstar_definition
{
	TAssetPtr<class AActor>                            SandraLocation_62_03A4B91C476B71E41EFABAADC8B2E81D;       // 0x0000(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TracyLocation_96_5EBA7F9E44DD9256322ABFB6C70CA0FA;        // 0x0020(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TylerLocation_100_2A1F0E824ADA0E68C9BB22B4F4278C1C;       // 0x0040(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            GemLockLocation_110_7BB2A62A498E16FF5384D58DE4D0E5B2;     // 0x0060(0x0020) (Edit, BlueprintVisible)
	struct FDS_RevengeOfTheMorningstar_Puzzle          ChestParam_52_9AECDED34DEAA17A65765DAB4F24F3E0;           // 0x0080(0x0028) (Edit, BlueprintVisible)
	TArray<struct FDS_RevengeOfTheMorningstar_AISpawnParams3> AISpawnParams_135_53C489B24C66EFFC9CEB26B8189231E8;       // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_RevengeOfTheMorningstar_Lorebooks> Lorebooks_122_AFC74AB9461A9AF500F7838AC37EE020;           // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class AActor>>                    NoteLocations_128_E0E596FF473094402586428D7CE4A5BB;       // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UQuestBookPageBundle*>                NoteBundles_130_40E55BA84B09706095709098BE180ADA;         // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          RawboneSpawners_139_A47C7AAA4E4CFA226D1370997B2CE864;     // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          SkullSpawners_143_B93767C946F70C33EDB6BE9DF8C41618;       // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          ThickskullSpawners_157_99E163C14D4F2D976CD3CD9B265889EE;  // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          DouglasSpawners_151_02542B344E3BC8F52B86588C577C59D8;     // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAISpawner*>                          GraymarrowSpawners_174_8BA2BAD847303738697AD7B0E3C9DC12;  // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            Shipwreck_MusicZone_179_5CBC74B44A0D2A98F4B3FDA1410F97F3; // 0x0138(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
