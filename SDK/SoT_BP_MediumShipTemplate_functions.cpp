// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShipTemplate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_MediumShipTemplate_C::GetPxActorCapacityForPhysXAggregate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.GetPxActorCapacityForPhysXAggregate"));

	ABP_MediumShipTemplate_C_GetPxActorCapacityForPhysXAggregate_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.SetupMastControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    LeftHoist                      (Parm, ZeroConstructor, IsPlainOldData)
// class UChildActorComponent*    RightHoist                     (Parm, ZeroConstructor, IsPlainOldData)
// class UChildActorComponent*    LeftAngle                      (Parm, ZeroConstructor, IsPlainOldData)
// class UChildActorComponent*    RightAngle                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RiggingGroupName               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MediumShipTemplate_C::SetupMastControls(class UChildActorComponent* LeftHoist, class UChildActorComponent* RightHoist, class UChildActorComponent* LeftAngle, class UChildActorComponent* RightAngle, const struct FName& RiggingGroupName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.SetupMastControls"));

	ABP_MediumShipTemplate_C_SetupMastControls_Params params;
	params.LeftHoist = LeftHoist;
	params.RightHoist = RightHoist;
	params.LeftAngle = LeftAngle;
	params.RightAngle = RightAngle;
	params.RiggingGroupName = RiggingGroupName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MediumShipTemplate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.UserConstructionScript"));

	ABP_MediumShipTemplate_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
