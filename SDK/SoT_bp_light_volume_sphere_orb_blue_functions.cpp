// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bp_light_volume_sphere_orb_blue_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_light_volume_sphere_orb_blue.bp_light_volume_sphere_orb_blue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_light_volume_sphere_orb_blue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bp_light_volume_sphere_orb_blue.bp_light_volume_sphere_orb_blue_C.UserConstructionScript"));

	Abp_light_volume_sphere_orb_blue_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
