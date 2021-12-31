// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_fod_CoconutFresh_00_a_ItemProxy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_fod_CoconutFresh_00_a_ItemProxy.BP_fod_CoconutFresh_00_a_ItemProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_fod_CoconutFresh_00_a_ItemProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_fod_CoconutFresh_00_a_ItemProxy.BP_fod_CoconutFresh_00_a_ItemProxy_C.UserConstructionScript"));

	ABP_fod_CoconutFresh_00_a_ItemProxy_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
