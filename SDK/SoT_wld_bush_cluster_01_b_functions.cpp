// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_bush_cluster_01_b_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wld_bush_cluster_01_b.wld_bush_cluster_01_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awld_bush_cluster_01_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wld_bush_cluster_01_b.wld_bush_cluster_01_b_C.UserConstructionScript"));

	Awld_bush_cluster_01_b_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
