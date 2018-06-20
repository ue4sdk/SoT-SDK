// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_shp_rocks_cluster_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wld_shp_rocks_cluster_01.wld_shp_rocks_cluster_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awld_shp_rocks_cluster_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_shp_rocks_cluster_01.wld_shp_rocks_cluster_01_C.UserConstructionScript");

	Awld_shp_rocks_cluster_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
