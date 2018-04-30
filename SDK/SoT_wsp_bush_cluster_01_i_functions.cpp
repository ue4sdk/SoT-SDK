// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_bush_cluster_01_i_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_bush_cluster_01_i.wsp_bush_cluster_01_i_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_bush_cluster_01_i_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_bush_cluster_01_i.wsp_bush_cluster_01_i_C.UserConstructionScript");

	Awsp_bush_cluster_01_i_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
