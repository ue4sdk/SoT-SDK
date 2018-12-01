#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_LargeShip_MapDeck_BowRight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern_LargeShip_MapDeck_BowRight.BP_Lantern_LargeShip_MapDeck_BowRight_C
// 0x0000 (0x081D - 0x081D)
class ABP_Lantern_LargeShip_MapDeck_BowRight_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Lantern_LargeShip_MapDeck_BowRight.BP_Lantern_LargeShip_MapDeck_BowRight_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
