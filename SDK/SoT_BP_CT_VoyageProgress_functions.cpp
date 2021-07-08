// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CT_VoyageProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPurchaseable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CT_VoyageProgress_C::IsPurchaseable(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPurchaseable"));

	struct
	{
		bool                           Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETutorialVoyageInternalState> NewProgress                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CT_VoyageProgress_C::SetProgress(TEnumAsByte<ETutorialVoyageInternalState> NewProgress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.SetProgress"));

	struct
	{
		TEnumAsByte<ETutorialVoyageInternalState> NewProgress;
	} params;

	params.NewProgress = NewProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsCurrently
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETutorialVoyageInternalState> ProgressState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CT_VoyageProgress_C::IsCurrently(TEnumAsByte<ETutorialVoyageInternalState> ProgressState, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsCurrently"));

	struct
	{
		TEnumAsByte<ETutorialVoyageInternalState> ProgressState;
		bool                           Result;
	} params;

	params.ProgressState = ProgressState;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPast
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETutorialVoyageInternalState> ProgressState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CT_VoyageProgress_C::IsPast(TEnumAsByte<ETutorialVoyageInternalState> ProgressState, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPast"));

	struct
	{
		TEnumAsByte<ETutorialVoyageInternalState> ProgressState;
		bool                           Result;
	} params;

	params.ProgressState = ProgressState;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.PopulateExistingState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CT_VoyageProgress_C::PopulateExistingState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.PopulateExistingState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.Initialise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Disabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CT_VoyageProgress_C::Initialise(bool Disabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.Initialise"));

	struct
	{
		bool                           Disabled;
	} params;

	params.Disabled = Disabled;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.ExecuteUbergraph_BP_CT_VoyageProgress
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CT_VoyageProgress_C::ExecuteUbergraph_BP_CT_VoyageProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.ExecuteUbergraph_BP_CT_VoyageProgress"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
