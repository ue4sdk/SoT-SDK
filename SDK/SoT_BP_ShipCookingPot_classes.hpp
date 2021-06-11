#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipCookingPot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipCookingPot.BP_ShipCookingPot_C
// 0x0008 (0x0640 - 0x0638)
class ABP_ShipCookingPot_C : public ABP_CookingPotBase_C
{
public:
	class UCookerIgnitionComponent*                    CookerIgnition;                                           // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShipCookingPot.BP_ShipCookingPot_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
