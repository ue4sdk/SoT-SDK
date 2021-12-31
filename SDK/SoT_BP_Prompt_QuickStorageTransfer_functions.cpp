// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_QuickStorageTransfer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.IsStorageContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class UWieldableInterface> Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_QuickStorageTransfer_C::IsStorageContainer(const TScriptInterface<class UWieldableInterface>& Object, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.IsStorageContainer"));

	UBP_Prompt_QuickStorageTransfer_C_IsStorageContainer_Params params;
	params.Object = Object;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.GetShowPrompt
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// FPromptEvaluation              ReturnValue                    (Parm, OutParm, ReturnParm)

FPromptEvaluation UBP_Prompt_QuickStorageTransfer_C::GetShowPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.GetShowPrompt"));

	UBP_Prompt_QuickStorageTransfer_C_GetShowPrompt_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.EvaluatePromptDisplayState
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FPromptEvaluation              ReturnValue                    (Parm, OutParm, ReturnParm)

FPromptEvaluation UBP_Prompt_QuickStorageTransfer_C::EvaluatePromptDisplayState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.EvaluatePromptDisplayState"));

	UBP_Prompt_QuickStorageTransfer_C_EvaluatePromptDisplayState_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_QuickStorageTransfer_C::RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.RegisterCharacterEvents_Implementable"));

	UBP_Prompt_QuickStorageTransfer_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_QuickStorageTransfer_C::UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.UnregisterCharacterEvents_Implementable"));

	UBP_Prompt_QuickStorageTransfer_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.OnObjectWielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FEventObjectWielded    Event                          (Parm)

void UBP_Prompt_QuickStorageTransfer_C::OnObjectWielded(const FAthena_FEventObjectWielded& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.OnObjectWielded"));

	UBP_Prompt_QuickStorageTransfer_C_OnObjectWielded_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.ExecuteUbergraph_BP_Prompt_QuickStorageTransfer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_QuickStorageTransfer_C::ExecuteUbergraph_BP_Prompt_QuickStorageTransfer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.ExecuteUbergraph_BP_Prompt_QuickStorageTransfer"));

	UBP_Prompt_QuickStorageTransfer_C_ExecuteUbergraph_BP_Prompt_QuickStorageTransfer_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
