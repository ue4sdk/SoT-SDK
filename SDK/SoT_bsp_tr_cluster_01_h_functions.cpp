// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_tr_cluster_01_h_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_tr_cluster_01_h.bsp_tr_cluster_01_h_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_tr_cluster_01_h_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_tr_cluster_01_h.bsp_tr_cluster_01_h_C.UserConstructionScript");

	Absp_tr_cluster_01_h_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
