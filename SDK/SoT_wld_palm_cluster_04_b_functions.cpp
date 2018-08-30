// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_palm_cluster_04_b_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wld_palm_cluster_04_b.wld_palm_cluster_04_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awld_palm_cluster_04_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_palm_cluster_04_b.wld_palm_cluster_04_b_C.UserConstructionScript");

	Awld_palm_cluster_04_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
