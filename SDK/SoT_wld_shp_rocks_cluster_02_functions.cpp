// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_shp_rocks_cluster_02_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wld_shp_rocks_cluster_02.wld_shp_rocks_cluster_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awld_shp_rocks_cluster_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wld_shp_rocks_cluster_02.wld_shp_rocks_cluster_02_C.UserConstructionScript"));

	Awld_shp_rocks_cluster_02_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
