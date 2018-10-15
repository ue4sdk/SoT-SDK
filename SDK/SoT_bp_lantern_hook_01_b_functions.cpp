// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bp_lantern_hook_01_b_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_lantern_hook_01_b.bp_lantern_hook_01_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_lantern_hook_01_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_lantern_hook_01_b.bp_lantern_hook_01_b_C.UserConstructionScript");

	Abp_lantern_hook_01_b_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
