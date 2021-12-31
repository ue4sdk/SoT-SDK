// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_UseAMermaid_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ResetState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_UseAMermaid_C::ResetState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ResetState"));

	UBP_Prompt_UseAMermaid_C_ResetState_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.EvaluatePromptDisplayState
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FPromptEvaluation              ReturnValue                    (Parm, OutParm, ReturnParm)

FPromptEvaluation UBP_Prompt_UseAMermaid_C::EvaluatePromptDisplayState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.EvaluatePromptDisplayState"));

	UBP_Prompt_UseAMermaid_C_EvaluatePromptDisplayState_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_UseAMermaid_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.PostInitialize"));

	UBP_Prompt_UseAMermaid_C_PostInitialize_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidActivatedLocally
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FMermaidActivatedLocally       Ev                             (Parm)

void UBP_Prompt_UseAMermaid_C::Prompt_MermaidActivatedLocally(const FMermaidActivatedLocally& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidActivatedLocally"));

	UBP_Prompt_UseAMermaid_C_Prompt_MermaidActivatedLocally_Params params;
	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidDeactivatedLocally
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FMermaidDeactivatedLocally     Ev                             (Parm)

void UBP_Prompt_UseAMermaid_C::Prompt_MermaidDeactivatedLocally(const FMermaidDeactivatedLocally& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidDeactivatedLocally"));

	UBP_Prompt_UseAMermaid_C_Prompt_MermaidDeactivatedLocally_Params params;
	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FMermaidUsedEvent              Ev                             (Parm)

void UBP_Prompt_UseAMermaid_C::Prompt_MermaidUsed(const FMermaidUsedEvent& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidUsed"));

	UBP_Prompt_UseAMermaid_C_Prompt_MermaidUsed_Params params;
	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_UseAMermaid_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_UseAMermaid_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_UseAMermaid_C::RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.RegisterCharacterEvents_Implementable"));

	UBP_Prompt_UseAMermaid_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ExecuteUbergraph_BP_Prompt_UseAMermaid
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_UseAMermaid_C::ExecuteUbergraph_BP_Prompt_UseAMermaid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ExecuteUbergraph_BP_Prompt_UseAMermaid"));

	UBP_Prompt_UseAMermaid_C_ExecuteUbergraph_BP_Prompt_UseAMermaid_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
