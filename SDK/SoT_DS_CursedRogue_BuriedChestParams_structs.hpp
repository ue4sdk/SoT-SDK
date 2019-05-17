#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_CursedRogue_BuriedChestParams.DS_CursedRogue_BuriedChestParams
// 0x0020
struct FDS_CursedRogue_BuriedChestParams
{
	class AActor*                                      Location_2_BA5E8C9A454086A8C486AAAD60635941;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Chest_5_FA11DA0B4B07EC529E656CA8F093DDA4;                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              BriggsyArtifacts_10_EFEB60A74A71D35C2F878586D14525FA;     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
