#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_DamageZone_MezzanineDeck_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShip_DamageZone_MezzanineDeck_01.BP_SmallShip_DamageZone_MezzanineDeck_01_C
// 0x0000 (0x07D0 - 0x07D0)
class ABP_SmallShip_DamageZone_MezzanineDeck_01_C : public ABP_BaseInternalDamageZone_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallShip_DamageZone_MezzanineDeck_01.BP_SmallShip_DamageZone_MezzanineDeck_01_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
