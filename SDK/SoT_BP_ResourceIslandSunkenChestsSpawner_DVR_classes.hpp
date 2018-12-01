#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ResourceIslandSunkenChestsSpawner_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ResourceIslandSunkenChestsSpawner_DVR.BP_ResourceIslandSunkenChestsSpawner_DVR_C
// 0x0000 (0x0500 - 0x0500)
class UBP_ResourceIslandSunkenChestsSpawner_DVR_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ResourceIslandSunkenChestsSpawner_DVR.BP_ResourceIslandSunkenChestsSpawner_DVR_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
