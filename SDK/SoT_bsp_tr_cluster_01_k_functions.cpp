// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_tr_cluster_01_k_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_tr_cluster_01_k.bsp_tr_cluster_01_k_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_tr_cluster_01_k_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bsp_tr_cluster_01_k.bsp_tr_cluster_01_k_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
