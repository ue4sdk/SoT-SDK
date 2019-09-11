#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_SmallShip_Cabin_Quest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern_SmallShip_Cabin_Quest.BP_Lantern_SmallShip_Cabin_Quest_C
// 0x0000 (0x081D - 0x081D)
class ABP_Lantern_SmallShip_Cabin_Quest_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Lantern_SmallShip_Cabin_Quest.BP_Lantern_SmallShip_Cabin_Quest_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
