#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_LegendaryStorytellerAreaPuzzlePools_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_LegendaryStorytellerVariables_AdditionalPuzzles.DS_LegendaryStorytellerVariables_AdditionalPuzzles
// 0x00E0
struct FDS_LegendaryStorytellerVariables_AdditionalPuzzles
{
	class AActor*                                      NPC_72_0E21BBB242FF38D6654E898B3348A9BA;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPCProxy_73_DEB390E749BD4600B618F8BEC6D99727;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HandInLocation_70_210E0A434CE88632D3C5DC9EB3ED9F09;       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BriggsyChest_78_A3289A9C48A61A7626ADA3AA108BE9C5;         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            BriggsyChestLocation_79_098FB0BE412C7E53C5126396521AEBFF; // 0x0020(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      WoodenPlank_82_688D51014BBAE81C83A0AAA110672E55;          // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PlankPuzzleLocation_85_906D4B564EB4E702F99F52A920130400;  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AncientChest_88_C57F6CA8443032D34D2524BA00E260A1;         // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HandIn_91_2B183B734882D4B24931658429E33094;               // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MusicSpawnLocation_94_E3D9DC4E41ED5EB214750CA19171DF14;   // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MusicSpawnRef_97_06EC4D634F941228AE8A73AEF2F866B4;        // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDS_LegendaryStorytellerAreaPuzzlePools     SelectedPuzzleArea_111_AFE3569640C78E321EA8C6BB01B21B57;  // 0x0070(0x0030) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            KeyLocation1_107_CE3BFD3745DD580C91FB27A2E562AC06;        // 0x00A0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            KeyLocation2_110_41714E5A48823212B73FABAE6352DF92;        // 0x00C0(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
