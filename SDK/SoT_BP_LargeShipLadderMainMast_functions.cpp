// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipLadderMainMast_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDockableInfo                  ReturnValue                    (Parm, OutParm, ReturnParm)

FDockableInfo ABP_LargeShipLadderMainMast_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.GetDockableInfo"));

	ABP_LargeShipLadderMainMast_C_GetDockableInfo_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.Setup Spline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// USplineComponent*              Spline                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FVector>                Positions                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_LargeShipLadderMainMast_C::Setup_Spline(USplineComponent* Spline, TArray<FVector>* Positions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.Setup Spline"));

	ABP_LargeShipLadderMainMast_C_Setup_Spline_Params params;
	params.Spline = Spline;

	UObject::ProcessEvent(fn, &params);

	if (Positions != nullptr)
		*Positions = params.Positions;
}


// Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LargeShipLadderMainMast_C::CanInteract(AActor* InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.CanInteract"));

	ABP_LargeShipLadderMainMast_C_CanInteract_Params params;
	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LargeShipLadderMainMast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.UserConstructionScript"));

	ABP_LargeShipLadderMainMast_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
