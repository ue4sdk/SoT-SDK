#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CS_TreasureVaultDoor_Opening01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CS_TreasureVaultDoor_Opening01.CS_TreasureVaultDoor_Opening01_C
// 0x0000 (0x0140 - 0x0140)
class UCS_TreasureVaultDoor_Opening01_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CS_TreasureVaultDoor_Opening01.CS_TreasureVaultDoor_Opening01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
