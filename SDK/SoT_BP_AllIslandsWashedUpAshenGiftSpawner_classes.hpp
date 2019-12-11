#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AllIslandsWashedUpAshenGiftSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AllIslandsWashedUpAshenGiftSpawner.BP_AllIslandsWashedUpAshenGiftSpawner_C
// 0x0000 (0x0540 - 0x0540)
class UBP_AllIslandsWashedUpAshenGiftSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AllIslandsWashedUpAshenGiftSpawner.BP_AllIslandsWashedUpAshenGiftSpawner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
