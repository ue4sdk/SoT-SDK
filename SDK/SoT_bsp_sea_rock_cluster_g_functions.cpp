// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_sea_rock_cluster_g_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_sea_rock_cluster_g.bsp_sea_rock_cluster_g_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_sea_rock_cluster_g_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bsp_sea_rock_cluster_g.bsp_sea_rock_cluster_g_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
