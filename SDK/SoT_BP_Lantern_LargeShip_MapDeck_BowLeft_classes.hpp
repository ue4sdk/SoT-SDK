#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_LargeShip_MapDeck_BowLeft_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern_LargeShip_MapDeck_BowLeft.BP_Lantern_LargeShip_MapDeck_BowLeft_C
// 0x0000 (0x07AD - 0x07AD)
class ABP_Lantern_LargeShip_MapDeck_BowLeft_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Lantern_LargeShip_MapDeck_BowLeft.BP_Lantern_LargeShip_MapDeck_BowLeft_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
