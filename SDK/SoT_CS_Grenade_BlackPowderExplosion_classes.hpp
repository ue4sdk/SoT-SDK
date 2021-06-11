#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CS_Grenade_BlackPowderExplosion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CS_Grenade_BlackPowderExplosion.CS_Grenade_BlackPowderExplosion_C
// 0x0000 (0x0140 - 0x0140)
class UCS_Grenade_BlackPowderExplosion_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CS_Grenade_BlackPowderExplosion.CS_Grenade_BlackPowderExplosion_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
