#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_FateOfTheMorningstar_PuzzleParams.DS_FateOfTheMorningstar_PuzzleParams
// 0x0078
struct FDS_FateOfTheMorningstar_PuzzleParams
{
	TAssetPtr<class AActor>                            DingerChestLocationID_19_9CF6B8AA49FE81D29821D3AB198ADDBE;// 0x0000(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      DingerChest_20_C281099B4C395F0D844DFBA4DB992241;          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            FontaineChestLocationID_23_829F78224FE5363ECD3B02B0FBA61795;// 0x0028(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      FontaineChest_30_F40733154DB4A0DB762ECC862865A246;        // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            EliChestLocationID_31_D62D3F4B443C3ABBC4DA468EE4C294A2;   // 0x0050(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      EliChest_32_5F7B9AFB4E55E5DDCEE4AAB130F54BAC;             // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
