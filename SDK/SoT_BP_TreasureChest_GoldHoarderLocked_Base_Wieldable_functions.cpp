// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_GoldHoarderLocked_Base_Wieldable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TreasureChest_GoldHoarderLocked_Base_Wieldable.BP_TreasureChest_GoldHoarderLocked_Base_Wieldable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TreasureChest_GoldHoarderLocked_Base_Wieldable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasureChest_GoldHoarderLocked_Base_Wieldable.BP_TreasureChest_GoldHoarderLocked_Base_Wieldable_C.UserConstructionScript"));

	ABP_TreasureChest_GoldHoarderLocked_Base_Wieldable_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
