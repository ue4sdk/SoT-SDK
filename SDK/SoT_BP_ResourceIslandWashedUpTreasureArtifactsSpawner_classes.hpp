#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ResourceIslandWashedUpTreasureArtifactsSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ResourceIslandWashedUpTreasureArtifactsSpawner.BP_ResourceIslandWashedUpTreasureArtifactsSpawner_C
// 0x0000 (0x0500 - 0x0500)
class UBP_ResourceIslandWashedUpTreasureArtifactsSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ResourceIslandWashedUpTreasureArtifactsSpawner.BP_ResourceIslandWashedUpTreasureArtifactsSpawner_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif