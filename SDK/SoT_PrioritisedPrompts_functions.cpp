// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PrioritisedPrompts_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrioritisedPrompts.BasePromptCoordinator.UpdateVisiblePrompt
// (Final, Native, Public, BlueprintCallable)

void UBasePromptCoordinator::UpdateVisiblePrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.UpdateVisiblePrompt"));

	UBasePromptCoordinator_UpdateVisiblePrompt_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBasePromptCoordinator::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.UnregisterOtherEvents_Implementable"));

	UBasePromptCoordinator_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBasePromptCoordinator::UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.UnregisterCharacterEvents_Implementable"));

	UBasePromptCoordinator_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize_Implementable
// (Event, Public, BlueprintEvent)

void UBasePromptCoordinator::Uninitialize_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize_Implementable"));

	UBasePromptCoordinator_Uninitialize_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize
// (Final, Native, Public, BlueprintCallable)

void UBasePromptCoordinator::Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize"));

	UBasePromptCoordinator_Uninitialize_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.Start
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UBasePromptCoordinator::Start()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.Start"));

	UBasePromptCoordinator_Start_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.SetPromptAs
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FPrioritisedPromptWithHandle   Prompt                         (ConstParm, Parm, OutParm, ReferenceParm)

void UBasePromptCoordinator::SetPromptAs(const FPrioritisedPromptWithHandle& Prompt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.SetPromptAs"));

	UBasePromptCoordinator_SetPromptAs_Params params;
	params.Prompt = Prompt;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBasePromptCoordinator::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.RegisterOtherEvents_Implementable"));

	UBasePromptCoordinator_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBasePromptCoordinator::RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.RegisterCharacterEvents_Implementable"));

	UBasePromptCoordinator_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.OnControllerEndPlay
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UBasePromptCoordinator::OnControllerEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.OnControllerEndPlay"));

	UBasePromptCoordinator_OnControllerEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.MarkAsComplete_Implementable
// (Event, Public, BlueprintEvent)

void UBasePromptCoordinator::MarkAsComplete_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.MarkAsComplete_Implementable"));

	UBasePromptCoordinator_MarkAsComplete_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.MakeShowPrompt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FPrioritisedPromptWithHandle   Prompt                         (ConstParm, Parm, OutParm, ReferenceParm)
// FPromptEvaluation              ReturnValue                    (Parm, OutParm, ReturnParm)

FPromptEvaluation UBasePromptCoordinator::MakeShowPrompt(const FPrioritisedPromptWithHandle& Prompt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.MakeShowPrompt"));

	UBasePromptCoordinator_MakeShowPrompt_Params params;
	params.Prompt = Prompt;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrioritisedPrompts.BasePromptCoordinator.MakeHideCurrentPrompts
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FPromptEvaluation              ReturnValue                    (Parm, OutParm, ReturnParm)

FPromptEvaluation UBasePromptCoordinator::MakeHideCurrentPrompts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.MakeHideCurrentPrompts"));

	UBasePromptCoordinator_MakeHideCurrentPrompts_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrioritisedPrompts.BasePromptCoordinator.MakeCompleteCoordinator
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FPromptEvaluation              ReturnValue                    (Parm, OutParm, ReturnParm)

FPromptEvaluation UBasePromptCoordinator::MakeCompleteCoordinator()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.MakeCompleteCoordinator"));

	UBasePromptCoordinator_MakeCompleteCoordinator_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrioritisedPrompts.BasePromptCoordinator.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AAthenaPlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// UPrioritisedPromptsManager*    PrioritisedPromptsManager      (Parm, ZeroConstructor, IsPlainOldData)

void UBasePromptCoordinator::Initialize(AAthenaPlayerController* PlayerController, UPrioritisedPromptsManager* PrioritisedPromptsManager)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.Initialize"));

	UBasePromptCoordinator_Initialize_Params params;
	params.PlayerController = PlayerController;
	params.PrioritisedPromptsManager = PrioritisedPromptsManager;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.GetCompleted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBasePromptCoordinator::GetCompleted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.GetCompleted"));

	UBasePromptCoordinator_GetCompleted_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrioritisedPrompts.BasePromptCoordinator.EvaluatePromptDisplayState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FPromptEvaluation              ReturnValue                    (Parm, OutParm, ReturnParm)

FPromptEvaluation UBasePromptCoordinator::EvaluatePromptDisplayState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.EvaluatePromptDisplayState"));

	UBasePromptCoordinator_EvaluatePromptDisplayState_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrioritisedPrompts.BasePromptCoordinator.DismissAllPrompts
// (Final, Native, Public, BlueprintCallable)

void UBasePromptCoordinator::DismissAllPrompts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.DismissAllPrompts"));

	UBasePromptCoordinator_DismissAllPrompts_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.GetPromptsLocalService.GetPromptsLocalService
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// UGetPromptsLocalService*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UGetPromptsLocalService* UGetPromptsLocalService::GetPromptsLocalService(UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.GetPromptsLocalService.GetPromptsLocalService"));

	UGetPromptsLocalService_GetPromptsLocalService_Params params;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrioritisedPrompts.PromptsLocalServiceInterface.IncrementCountForKey
// (Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        AccessKey                      (Parm, ZeroConstructor, IsPlainOldData)

void UPromptsLocalServiceInterface::IncrementCountForKey(UClass* AccessKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.PromptsLocalServiceInterface.IncrementCountForKey"));

	UPromptsLocalServiceInterface_IncrementCountForKey_Params params;
	params.AccessKey = AccessKey;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.PromptsLocalServiceInterface.GetCountForKey
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UClass*                        AccessKey                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPromptsLocalServiceInterface::GetCountForKey(UClass* AccessKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.PromptsLocalServiceInterface.GetCountForKey"));

	UPromptsLocalServiceInterface_GetCountForKey_Params params;
	params.AccessKey = AccessKey;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
