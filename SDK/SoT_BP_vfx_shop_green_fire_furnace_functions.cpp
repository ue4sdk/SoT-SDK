// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_vfx_shop_green_fire_furnace_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_vfx_shop_green_fire_furnace.BP_vfx_shop_green_fire_furnace_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_vfx_shop_green_fire_furnace_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_vfx_shop_green_fire_furnace.BP_vfx_shop_green_fire_furnace_C.UserConstructionScript");

	ABP_vfx_shop_green_fire_furnace_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
