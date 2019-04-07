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

// UserDefinedStruct DS_CursedRogue_AISpawnParams.DS_CursedRogue_AISpawnParams
// 0x0054
struct FDS_CursedRogue_AISpawnParams
{
	class UAISpawner*                                  Spawner_14_A63A7E064AAF0D7DDEF5DB99280E76EC;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            SpawnerLocation_8_51D602CD47745CC5D148FF9414F22138;       // 0x0008(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TriggerLocation_9_8CCF735F4ADA3F07322506B3D1ADE2D2;       // 0x0028(0x0020) (Edit, BlueprintVisible)
	float                                              TriggerRadius_10_386D085845EE1E1DC1237E82FB020168;        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RegionName_11_B935D1D24CE3CF564FD3129592C9C13A;           // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
