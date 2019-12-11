// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_UseAMermaid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.MermaidUsed
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_UseAMermaid_C::MermaidUsed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.MermaidUsed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.MermaidDeactivatedLocally
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FMermaidDeactivatedLocally MermaidDeactivatedLocally      (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_UseAMermaid_C::MermaidDeactivatedLocally(const struct FAthena_FMermaidDeactivatedLocally& MermaidDeactivatedLocally)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.MermaidDeactivatedLocally"));

	struct
	{
		struct FAthena_FMermaidDeactivatedLocally MermaidDeactivatedLocally;
	} params;

	params.MermaidDeactivatedLocally = MermaidDeactivatedLocally;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.MermaidActivatedLocally
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FMermaidActivatedLocally MermaidActivatedLocally        (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_UseAMermaid_C::MermaidActivatedLocally(const struct FAthena_FMermaidActivatedLocally& MermaidActivatedLocally)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.MermaidActivatedLocally"));

	struct
	{
		struct FAthena_FMermaidActivatedLocally MermaidActivatedLocally;
	} params;

	params.MermaidActivatedLocally = MermaidActivatedLocally;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.EvaluatePromptDisplayState
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPromptEvaluation       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPromptEvaluation UBP_Prompt_UseAMermaid_C::EvaluatePromptDisplayState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.EvaluatePromptDisplayState"));

	struct
	{
		struct FPromptEvaluation       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_UseAMermaid_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.PostInitialize"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidActivatedLocally
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FMermaidActivatedLocally Ev                             (Parm)

void UBP_Prompt_UseAMermaid_C::Prompt_MermaidActivatedLocally(const struct FAthena_FMermaidActivatedLocally& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidActivatedLocally"));

	struct
	{
		struct FAthena_FMermaidActivatedLocally Ev;
	} params;

	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidDeactivatedLocally
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FMermaidDeactivatedLocally Ev                             (Parm)

void UBP_Prompt_UseAMermaid_C::Prompt_MermaidDeactivatedLocally(const struct FAthena_FMermaidDeactivatedLocally& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidDeactivatedLocally"));

	struct
	{
		struct FAthena_FMermaidDeactivatedLocally Ev;
	} params;

	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMermaidUsedEvent       Ev                             (Parm)

void UBP_Prompt_UseAMermaid_C::Prompt_MermaidUsed(const struct FMermaidUsedEvent& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidUsed"));

	struct
	{
		struct FMermaidUsedEvent       Ev;
	} params;

	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_UseAMermaid_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ExecuteUbergraph_BP_Prompt_UseAMermaid
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_UseAMermaid_C::ExecuteUbergraph_BP_Prompt_UseAMermaid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ExecuteUbergraph_BP_Prompt_UseAMermaid"));

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
