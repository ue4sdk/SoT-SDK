#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_SmallShip_DeckFront_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern_SmallShip_DeckFront.BP_Lantern_SmallShip_DeckFront_C
// 0x0000 (0x081D - 0x081D)
class ABP_Lantern_SmallShip_DeckFront_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Lantern_SmallShip_DeckFront.BP_Lantern_SmallShip_DeckFront_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
