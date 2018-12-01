// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckTreasureChest_Wieldable_Common_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShipwreckTreasureChest_Wieldable_Common.BP_ShipwreckTreasureChest_Wieldable_Common_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipwreckTreasureChest_Wieldable_Common_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipwreckTreasureChest_Wieldable_Common.BP_ShipwreckTreasureChest_Wieldable_Common_C.UserConstructionScript");

	ABP_ShipwreckTreasureChest_Wieldable_Common_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
