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

// UserDefinedStruct DS_StarsOfAThief_BuriedTreasure.DS_StarsOfAThief_BuriedTreasure
// 0x0021
struct FDS_StarsOfAThief_BuriedTreasure
{
	class AActor*                                      DigLocation_10_E3883AC74620E6351E8F048C4818196F;          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item_5_FA23DCD040C62144D386329490AC2401;                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        Pages_9_FFC843C64952E9B098DD0AA5B07D8DD9;                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        VaultSolutionPage_20_DB8263DB4F306BF2294C299C5C742BBE;    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NotBuried_16_73F890F74F80BC2349523BB828EF85A4;            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
