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

// UserDefinedStruct DS_FateOfTheMorningstar_SharkEncounterParams.DS_FateOfTheMorningstar_SharkEncounterParams
// 0x0044
struct FDS_FateOfTheMorningstar_SharkEncounterParams
{
	TAssetPtr<class AActor>                            LocationID_3_86F41DED46B14478EE9952AC173A0C3F;            // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      Item_6_D7FC5F2846322AAD95216395DFF4A6A9;                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        Pages_9_10A971CE4B5FC73FFF5107B378202A0B;                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  Spawner_12_8275BDCE44A1E00FF87BBFB6C0DC0B3B;              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Region_18_B9D91C8C4781A4F44E282896E57D892D;               // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TriggerRadius_15_B41E1BA944309FC3AF1DC8A28C8337C5;        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
