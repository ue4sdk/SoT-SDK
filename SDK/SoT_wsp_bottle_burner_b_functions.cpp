// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_bottle_burner_b_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_bottle_burner_b.wsp_bottle_burner_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_bottle_burner_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_bottle_burner_b.wsp_bottle_burner_b_C.UserConstructionScript"));

	Awsp_bottle_burner_b_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
