#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ResourceIslandWashedUpChestsSpawner_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ResourceIslandWashedUpChestsSpawner_DVR.BP_ResourceIslandWashedUpChestsSpawner_DVR_C
// 0x0000 (0x0500 - 0x0500)
class UBP_ResourceIslandWashedUpChestsSpawner_DVR_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ResourceIslandWashedUpChestsSpawner_DVR.BP_ResourceIslandWashedUpChestsSpawner_DVR_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
