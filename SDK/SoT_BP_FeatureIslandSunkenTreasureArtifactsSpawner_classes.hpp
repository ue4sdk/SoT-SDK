#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FeatureIslandSunkenTreasureArtifactsSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FeatureIslandSunkenTreasureArtifactsSpawner.BP_FeatureIslandSunkenTreasureArtifactsSpawner_C
// 0x0000 (0x0500 - 0x0500)
class UBP_FeatureIslandSunkenTreasureArtifactsSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_FeatureIslandSunkenTreasureArtifactsSpawner.BP_FeatureIslandSunkenTreasureArtifactsSpawner_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
