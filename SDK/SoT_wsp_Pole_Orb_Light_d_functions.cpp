// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_Pole_Orb_Light_d_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_Pole_Orb_Light_d.wsp_Pole_Orb_Light_d_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_Pole_Orb_Light_d_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_Pole_Orb_Light_d.wsp_Pole_Orb_Light_d_C.UserConstructionScript");

	Awsp_Pole_Orb_Light_d_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
