#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ResourceIslandWashedUpCargoRunsSpawner_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ResourceIslandWashedUpCargoRunsSpawner_DVR.BP_ResourceIslandWashedUpCargoRunsSpawner_DVR_C
// 0x0000 (0x0540 - 0x0540)
class UBP_ResourceIslandWashedUpCargoRunsSpawner_DVR_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ResourceIslandWashedUpCargoRunsSpawner_DVR.BP_ResourceIslandWashedUpCargoRunsSpawner_DVR_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
