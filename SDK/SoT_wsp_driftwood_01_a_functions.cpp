// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_driftwood_01_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_driftwood_01_a.wsp_driftwood_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_driftwood_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_driftwood_01_a.wsp_driftwood_01_a_C.UserConstructionScript");

	Awsp_driftwood_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
