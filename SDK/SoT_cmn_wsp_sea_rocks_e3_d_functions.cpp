// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_wsp_sea_rocks_e3_d_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cmn_wsp_sea_rocks_e3_d.cmn_wsp_sea_rocks_e3_d_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acmn_wsp_sea_rocks_e3_d_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_wsp_sea_rocks_e3_d.cmn_wsp_sea_rocks_e3_d_C.UserConstructionScript");

	Acmn_wsp_sea_rocks_e3_d_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
