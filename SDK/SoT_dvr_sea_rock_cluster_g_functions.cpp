// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_dvr_sea_rock_cluster_g_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function dvr_sea_rock_cluster_g.dvr_sea_rock_cluster_g_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Advr_sea_rock_cluster_g_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dvr_sea_rock_cluster_g.dvr_sea_rock_cluster_g_C.UserConstructionScript");

	Advr_sea_rock_cluster_g_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
