// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipLadderMainMast_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockableInfo ABP_SmallShipLadderMainMast_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.GetDockableInfo");

	ABP_SmallShipLadderMainMast_C_GetDockableInfo_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.Setup Spline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Positions                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_SmallShipLadderMainMast_C::Setup_Spline(class USplineComponent* Spline, TArray<struct FVector>* Positions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.Setup Spline");

	ABP_SmallShipLadderMainMast_C_Setup_Spline_Params params;
	params.Spline = Spline;

	UObject::ProcessEvent(fn, &params);

	if (Positions != nullptr)
		*Positions = params.Positions;
}


// Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SmallShipLadderMainMast_C::CanInteract(class AActor* InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.CanInteract");

	ABP_SmallShipLadderMainMast_C_CanInteract_Params params;
	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SmallShipLadderMainMast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.UserConstructionScript");

	ABP_SmallShipLadderMainMast_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
