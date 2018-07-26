// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_bush_cluster_03_c_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wld_bush_cluster_03_c.wld_bush_cluster_03_c_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awld_bush_cluster_03_c_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_bush_cluster_03_c.wld_bush_cluster_03_c_C.UserConstructionScript");

	Awld_bush_cluster_03_c_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
