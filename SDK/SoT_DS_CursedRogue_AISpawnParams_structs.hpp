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
// 0x0028
struct FDS_CursedRogue_AISpawnParams
{
	class UAISpawner*                                  Spawner_14_A63A7E064AAF0D7DDEF5DB99280E76EC;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            SpawnerLocation_8_51D602CD47745CC5D148FF9414F22138;       // 0x0008(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
