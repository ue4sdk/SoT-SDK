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

// UserDefinedStruct DS_Shroudbreaker_AISpawnParams.DS_Shroudbreaker_AISpawnParams
// 0x0034
struct FDS_Shroudbreaker_AISpawnParams
{
	TAssetPtr<class AActor>                            LocationID_19_92B586F7406FC32B3F338CBC950C0D84;           // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UAISpawner*                                  Spawner_21_E6F7EB6249BBAED7E7FFC5A0BFA94219;              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Region_22_B8820BA04B06A8B8C93D9C82CE2EC8F8;               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TriggerRadius_10_5A720A01420553E0DC45779FC920A1C7;        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
