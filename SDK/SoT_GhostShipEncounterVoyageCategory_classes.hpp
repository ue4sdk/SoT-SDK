#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GhostShipEncounterVoyageCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GhostShipEncounterVoyageCategory.GhostShipEncounterVoyageCategory_C
// 0x0000 (0x0078 - 0x0078)
class UGhostShipEncounterVoyageCategory_C : public UVoyageCategory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GhostShipEncounterVoyageCategory.GhostShipEncounterVoyageCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
