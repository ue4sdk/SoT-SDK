#pragma once

// Sea of Thieves (1.0.5) SDK

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
// 0x0008 (0x08A8 - 0x08A0)
class ABP_SmallShip_DamageZone_MezzanineDeck_01_C : public ABP_BaseInternalDamageZone_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShip_DamageZone_MezzanineDeck_01.BP_SmallShip_DamageZone_MezzanineDeck_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
