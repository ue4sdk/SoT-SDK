// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_gho_mast_mizzen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_gho_mast_mizzen.BP_gho_mast_mizzen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_gho_mast_mizzen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_gho_mast_mizzen.BP_gho_mast_mizzen_C.UserConstructionScript");

	ABP_gho_mast_mizzen_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
