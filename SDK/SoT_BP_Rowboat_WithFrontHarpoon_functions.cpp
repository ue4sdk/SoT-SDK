// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Rowboat_WithFrontHarpoon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Rowboat_WithFrontHarpoon.BP_Rowboat_WithFrontHarpoon_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_Rowboat_WithFrontHarpoon_C::GetPxActorCapacityForPhysXAggregate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Rowboat_WithFrontHarpoon.BP_Rowboat_WithFrontHarpoon_C.GetPxActorCapacityForPhysXAggregate"));

	ABP_Rowboat_WithFrontHarpoon_C_GetPxActorCapacityForPhysXAggregate_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Rowboat_WithFrontHarpoon.BP_Rowboat_WithFrontHarpoon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Rowboat_WithFrontHarpoon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Rowboat_WithFrontHarpoon.BP_Rowboat_WithFrontHarpoon_C.UserConstructionScript"));

	ABP_Rowboat_WithFrontHarpoon_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
