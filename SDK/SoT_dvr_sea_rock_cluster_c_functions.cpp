// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_dvr_sea_rock_cluster_c_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function dvr_sea_rock_cluster_c.dvr_sea_rock_cluster_c_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Advr_sea_rock_cluster_c_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function dvr_sea_rock_cluster_c.dvr_sea_rock_cluster_c_C.UserConstructionScript"));

	Advr_sea_rock_cluster_c_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
