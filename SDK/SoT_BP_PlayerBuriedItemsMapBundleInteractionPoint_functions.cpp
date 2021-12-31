// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PlayerBuriedItemsMapBundleInteractionPoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C.GetObjectDisplayName
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerBuriedItemsMapBundleInteractionPoint_C::GetObjectDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C.GetObjectDisplayName"));

	ABP_PlayerBuriedItemsMapBundleInteractionPoint_C_GetObjectDisplayName_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerBuriedItemsMapBundleInteractionPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C.UserConstructionScript"));

	ABP_PlayerBuriedItemsMapBundleInteractionPoint_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
