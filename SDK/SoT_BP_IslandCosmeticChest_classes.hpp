#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_IslandCosmeticChest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IslandCosmeticChest.BP_IslandCosmeticChest_C
// 0x0000 (0x05F0 - 0x05F0)
class ABP_IslandCosmeticChest_C : public AShipCustomizationChest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IslandCosmeticChest.BP_IslandCosmeticChest_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
