// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_xmas_WLD_Outpost_2_Dressing_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_xmas_WLD_Outpost_2_Dressing.BP_xmas_WLD_Outpost_2_Dressing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_xmas_WLD_Outpost_2_Dressing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_xmas_WLD_Outpost_2_Dressing.BP_xmas_WLD_Outpost_2_Dressing_C.UserConstructionScript"));

	ABP_xmas_WLD_Outpost_2_Dressing_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
