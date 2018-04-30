#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_SmallShip_DeckBrig_Back_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern_SmallShip_DeckBrig_Back.BP_Lantern_SmallShip_DeckBrig_Back_C
// 0x0000 (0x06A1 - 0x06A1)
class ABP_Lantern_SmallShip_DeckBrig_Back_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lantern_SmallShip_DeckBrig_Back.BP_Lantern_SmallShip_DeckBrig_Back_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
