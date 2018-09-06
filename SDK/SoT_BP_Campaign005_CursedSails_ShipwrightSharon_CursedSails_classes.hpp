#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign005_CursedSails_ShipwrightSharon_CursedSails_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign005_CursedSails_ShipwrightSharon_CursedSails.BP_Campaign005_CursedSails_ShipwrightSharon_CursedSails_C
// 0x0000 (0x05C8 - 0x05C8)
class ABP_Campaign005_CursedSails_ShipwrightSharon_CursedSails_C : public ABP_Shipwright_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Campaign005_CursedSails_ShipwrightSharon_CursedSails.BP_Campaign005_CursedSails_ShipwrightSharon_CursedSails_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
