// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_tls_wld_Orb_light_D_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function tls_wld_Orb_light_D.tls_wld_Orb_light_D_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Atls_wld_Orb_light_D_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function tls_wld_Orb_light_D.tls_wld_Orb_light_D_C.UserConstructionScript"));

	Atls_wld_Orb_light_D_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
