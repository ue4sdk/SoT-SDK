// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShipLadder_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MediumShipLadder.BP_MediumShipLadder_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockableInfo ABP_MediumShipLadder_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShipLadder.BP_MediumShipLadder_C.GetDockableInfo");

	ABP_MediumShipLadder_C_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MediumShipLadder.BP_MediumShipLadder_C.Setup Spline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Positions                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MediumShipLadder_C::Setup_Spline(class USplineComponent* Spline, TArray<struct FVector>* Positions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShipLadder.BP_MediumShipLadder_C.Setup Spline");

	ABP_MediumShipLadder_C_Setup_Spline_Params params;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Positions != nullptr)
		*Positions = params.Positions;
}


// Function BP_MediumShipLadder.BP_MediumShipLadder_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MediumShipLadder_C::CanInteract(class AActor** InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShipLadder.BP_MediumShipLadder_C.CanInteract");

	ABP_MediumShipLadder_C_CanInteract_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MediumShipLadder.BP_MediumShipLadder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MediumShipLadder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShipLadder.BP_MediumShipLadder_C.UserConstructionScript");

	ABP_MediumShipLadder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
