// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_VisitCompanyShop_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.HasAlreadyVisitedCompanyShop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasVistedCompanyShop           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_VisitCompanyShop_C::HasAlreadyVisitedCompanyShop(bool* HasVistedCompanyShop)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.HasAlreadyVisitedCompanyShop"));

	UBP_Prompt_VisitCompanyShop_C_HasAlreadyVisitedCompanyShop_Params params;

	UObject::ProcessEvent(fn, &params);

	if (HasVistedCompanyShop != nullptr)
		*HasVistedCompanyShop = params.HasVistedCompanyShop;
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.SetCompanyPromptInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UClass*                        Company                        (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        AccessKey                      (Parm, ZeroConstructor, IsPlainOldData)
// FPrioritisedPromptWithHandle   Prompt                         (Parm)
// UClass*                        CompanyRankDesc                (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_VisitCompanyShop_C::SetCompanyPromptInfo(UClass* Company, UClass* AccessKey, const FPrioritisedPromptWithHandle& Prompt, UClass* CompanyRankDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.SetCompanyPromptInfo"));

	UBP_Prompt_VisitCompanyShop_C_SetCompanyPromptInfo_Params params;
	params.Company = Company;
	params.AccessKey = AccessKey;
	params.Prompt = Prompt;
	params.CompanyRankDesc = CompanyRankDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.OnTreasureChestSold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FTreasureChestSoldClientPredictionEvent Event                          (Parm)

void UBP_Prompt_VisitCompanyShop_C::OnTreasureChestSold(const FTreasureChestSoldClientPredictionEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.OnTreasureChestSold"));

	UBP_Prompt_VisitCompanyShop_C_OnTreasureChestSold_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_VisitCompanyShop_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.Evaluate"));

	UBP_Prompt_VisitCompanyShop_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_VisitCompanyShop_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_VisitCompanyShop_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_VisitCompanyShop_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_VisitCompanyShop_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.TreasureChestSoldPredictedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FTreasureChestSoldClientPredictionEvent Event                          (Parm)

void UBP_Prompt_VisitCompanyShop_C::TreasureChestSoldPredictedEvent(const FTreasureChestSoldClientPredictionEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.TreasureChestSoldPredictedEvent"));

	UBP_Prompt_VisitCompanyShop_C_TreasureChestSoldPredictedEvent_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.ExecuteUbergraph_BP_Prompt_VisitCompanyShop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_VisitCompanyShop_C::ExecuteUbergraph_BP_Prompt_VisitCompanyShop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.ExecuteUbergraph_BP_Prompt_VisitCompanyShop"));

	UBP_Prompt_VisitCompanyShop_C_ExecuteUbergraph_BP_Prompt_VisitCompanyShop_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
