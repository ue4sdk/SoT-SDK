// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_bsp_tree_palm_01_e_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_bsp_tree_palm_01_e.BP_bsp_tree_palm_01_e_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_bsp_tree_palm_01_e_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bsp_tree_palm_01_e.BP_bsp_tree_palm_01_e_C.UserConstructionScript");

	ABP_bsp_tree_palm_01_e_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
