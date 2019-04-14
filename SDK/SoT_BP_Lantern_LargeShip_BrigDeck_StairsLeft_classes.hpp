#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_LargeShip_BrigDeck_StairsLeft_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern_LargeShip_BrigDeck_StairsLeft.BP_Lantern_LargeShip_BrigDeck_StairsLeft_C
// 0x0000 (0x0835 - 0x0835)
class ABP_Lantern_LargeShip_BrigDeck_StairsLeft_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Lantern_LargeShip_BrigDeck_StairsLeft.BP_Lantern_LargeShip_BrigDeck_StairsLeft_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
