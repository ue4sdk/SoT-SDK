// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_tls_wld_Orb_light_b_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function tls_wld_Orb_light_b.tls_wld_Orb_light_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Atls_wld_Orb_light_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function tls_wld_Orb_light_b.tls_wld_Orb_light_b_C.UserConstructionScript"));

	Atls_wld_Orb_light_b_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
