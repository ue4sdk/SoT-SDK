// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_palm_cluster_04_d_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wld_palm_cluster_04_d.wld_palm_cluster_04_d_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awld_palm_cluster_04_d_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wld_palm_cluster_04_d.wld_palm_cluster_04_d_C.UserConstructionScript"));

	Awld_palm_cluster_04_d_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
