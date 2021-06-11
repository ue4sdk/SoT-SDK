// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShipLadderForeMast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockableInfo ABP_MediumShipLadderForeMast_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.GetDockableInfo"));

	struct
	{
		struct FDockableInfo           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.Setup Spline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Positions                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MediumShipLadderForeMast_C::Setup_Spline(class USplineComponent* Spline, TArray<struct FVector>* Positions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.Setup Spline"));

	struct
	{
		class USplineComponent*        Spline;
		TArray<struct FVector>         Positions;
	} params;

	params.Spline = Spline;

	UObject::ProcessEvent(fn, &params);

	if (Positions != nullptr)
		*Positions = params.Positions;
}


// Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MediumShipLadderForeMast_C::CanInteract(class AActor* InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.CanInteract"));

	struct
	{
		class AActor*                  InInteractor;
		bool                           ReturnValue;
	} params;

	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MediumShipLadderForeMast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
