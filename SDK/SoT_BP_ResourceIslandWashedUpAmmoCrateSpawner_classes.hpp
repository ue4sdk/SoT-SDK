#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ResourceIslandWashedUpAmmoCrateSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ResourceIslandWashedUpAmmoCrateSpawner.BP_ResourceIslandWashedUpAmmoCrateSpawner_C
// 0x0000 (0x0590 - 0x0590)
class UBP_ResourceIslandWashedUpAmmoCrateSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ResourceIslandWashedUpAmmoCrateSpawner.BP_ResourceIslandWashedUpAmmoCrateSpawner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
