#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FortIslandWashedUpResourcesSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FortIslandWashedUpResourcesSpawner.BP_FortIslandWashedUpResourcesSpawner_C
// 0x0000 (0x04F0 - 0x04F0)
class UBP_FortIslandWashedUpResourcesSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FortIslandWashedUpResourcesSpawner.BP_FortIslandWashedUpResourcesSpawner_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
