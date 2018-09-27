// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_sea_rock_cluster_b_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wld_sea_rock_cluster_b.wld_sea_rock_cluster_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awld_sea_rock_cluster_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_sea_rock_cluster_b.wld_sea_rock_cluster_b_C.UserConstructionScript");

	Awld_sea_rock_cluster_b_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
