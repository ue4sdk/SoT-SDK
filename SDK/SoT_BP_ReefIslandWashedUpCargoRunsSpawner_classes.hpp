#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ReefIslandWashedUpCargoRunsSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ReefIslandWashedUpCargoRunsSpawner.BP_ReefIslandWashedUpCargoRunsSpawner_C
// 0x0000 (0x0590 - 0x0590)
class UBP_ReefIslandWashedUpCargoRunsSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ReefIslandWashedUpCargoRunsSpawner.BP_ReefIslandWashedUpCargoRunsSpawner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
