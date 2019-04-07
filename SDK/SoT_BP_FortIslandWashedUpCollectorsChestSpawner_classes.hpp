#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FortIslandWashedUpCollectorsChestSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FortIslandWashedUpCollectorsChestSpawner.BP_FortIslandWashedUpCollectorsChestSpawner_C
// 0x0000 (0x0500 - 0x0500)
class UBP_FortIslandWashedUpCollectorsChestSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FortIslandWashedUpCollectorsChestSpawner.BP_FortIslandWashedUpCollectorsChestSpawner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
