// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AIShipWheel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AIShipWheel.BP_AIShipWheel_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockableInfo ABP_AIShipWheel_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIShipWheel.BP_AIShipWheel_C.GetDockableInfo");

	ABP_AIShipWheel_C_GetDockableInfo_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_AIShipWheel.BP_AIShipWheel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AIShipWheel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIShipWheel.BP_AIShipWheel_C.UserConstructionScript");

	ABP_AIShipWheel_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
