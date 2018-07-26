#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_LargeShip_MapDeck_MapTable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern_LargeShip_MapDeck_MapTable.BP_Lantern_LargeShip_MapDeck_MapTable_C
// 0x0000 (0x06A9 - 0x06A9)
class ABP_Lantern_LargeShip_MapDeck_MapTable_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lantern_LargeShip_MapDeck_MapTable.BP_Lantern_LargeShip_MapDeck_MapTable_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
