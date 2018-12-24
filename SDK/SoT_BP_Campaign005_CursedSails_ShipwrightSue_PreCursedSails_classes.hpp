#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign005_CursedSails_ShipwrightSue_PreCursedSails_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign005_CursedSails_ShipwrightSue_PreCursedSails.BP_Campaign005_CursedSails_ShipwrightSue_PreCursedSails_C
// 0x0000 (0x05D0 - 0x05D0)
class ABP_Campaign005_CursedSails_ShipwrightSue_PreCursedSails_C : public ABP_Shipwright_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Campaign005_CursedSails_ShipwrightSue_PreCursedSails.BP_Campaign005_CursedSails_ShipwrightSue_PreCursedSails_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
