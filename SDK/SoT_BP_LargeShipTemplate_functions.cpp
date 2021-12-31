// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipTemplate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_LargeShipTemplate_C::GetPxActorCapacityForPhysXAggregate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.GetPxActorCapacityForPhysXAggregate"));

	ABP_LargeShipTemplate_C_GetPxActorCapacityForPhysXAggregate_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.SetupMastControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UChildActorComponent*          LeftHoist                      (Parm, ZeroConstructor, IsPlainOldData)
// UChildActorComponent*          RightHoist                     (Parm, ZeroConstructor, IsPlainOldData)
// UChildActorComponent*          LeftAngle                      (Parm, ZeroConstructor, IsPlainOldData)
// UChildActorComponent*          RightAngle                     (Parm, ZeroConstructor, IsPlainOldData)
// FName                          RiggingGroupName               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipTemplate_C::SetupMastControls(UChildActorComponent* LeftHoist, UChildActorComponent* RightHoist, UChildActorComponent* LeftAngle, UChildActorComponent* RightAngle, const FName& RiggingGroupName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.SetupMastControls"));

	ABP_LargeShipTemplate_C_SetupMastControls_Params params;
	params.LeftHoist = LeftHoist;
	params.RightHoist = RightHoist;
	params.LeftAngle = LeftAngle;
	params.RightAngle = RightAngle;
	params.RiggingGroupName = RiggingGroupName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LargeShipTemplate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.UserConstructionScript"));

	ABP_LargeShipTemplate_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
