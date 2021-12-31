// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BaseClamberSpot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BaseClamberSpot.BP_BaseClamberSpot_C.SetupClamberSpline
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseClamberSpot_C::SetupClamberSpline()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseClamberSpot.BP_BaseClamberSpot_C.SetupClamberSpline"));

	ABP_BaseClamberSpot_C_SetupClamberSpline_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BaseClamberSpot.BP_BaseClamberSpot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseClamberSpot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseClamberSpot.BP_BaseClamberSpot_C.UserConstructionScript"));

	ABP_BaseClamberSpot_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
