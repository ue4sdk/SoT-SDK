// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_wld_tree_palm_02_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_wld_tree_palm_02_a.BP_wld_tree_palm_02_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_wld_tree_palm_02_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_wld_tree_palm_02_a.BP_wld_tree_palm_02_a_C.UserConstructionScript"));

	ABP_wld_tree_palm_02_a_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
