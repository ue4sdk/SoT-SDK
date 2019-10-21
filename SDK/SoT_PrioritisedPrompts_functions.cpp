// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PrioritisedPrompts_classes.hpp"

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBasePromptCoordinator::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBasePromptCoordinator::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize_Implementable
// (Event, Public, BlueprintEvent)

void UBasePromptCoordinator::Uninitialize_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize
// (Final, Native, Public, BlueprintCallable)

void UBasePromptCoordinator::Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.Start
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UBasePromptCoordinator::Start()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.Start"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.SetPromptAs
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPrioritisedPromptWithHandle Prompt                         (ConstParm, Parm, OutParm, ReferenceParm)

void UBasePromptCoordinator::SetPromptAs(const struct FPrioritisedPromptWithHandle& Prompt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.SetPromptAs"));

	struct
	{
		struct FPrioritisedPromptWithHandle Prompt;
	} params;

	params.Prompt = Prompt;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBasePromptCoordinator::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBasePromptCoordinator::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

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

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.MakeShowPrompt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPrioritisedPromptWithHandle Prompt                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FPromptEvaluation       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPromptEvaluation UBasePromptCoordinator::MakeShowPrompt(const struct FPrioritisedPromptWithHandle& Prompt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.MakeShowPrompt"));

	struct
	{
		struct FPrioritisedPromptWithHandle Prompt;
		struct FPromptEvaluation       ReturnValue;
	} params;

	params.Prompt = Prompt;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrioritisedPrompts.BasePromptCoordinator.MakeHideCurrentPrompts
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPromptEvaluation       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPromptEvaluation UBasePromptCoordinator::MakeHideCurrentPrompts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.MakeHideCurrentPrompts"));

	struct
	{
		struct FPromptEvaluation       ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrioritisedPrompts.BasePromptCoordinator.MakeCompleteCoordinator
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPromptEvaluation       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPromptEvaluation UBasePromptCoordinator::MakeCompleteCoordinator()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.MakeCompleteCoordinator"));

	struct
	{
		struct FPromptEvaluation       ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrioritisedPrompts.BasePromptCoordinator.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAthenaPlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UPrioritisedPromptsManager* PrioritisedPromptsManager      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ImmediatelyRegisterForCharacterEvents (Parm, ZeroConstructor, IsPlainOldData)

void UBasePromptCoordinator::Initialize(class AAthenaPlayerController* PlayerController, class UPrioritisedPromptsManager* PrioritisedPromptsManager, bool ImmediatelyRegisterForCharacterEvents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.Initialize"));

	struct
	{
		class AAthenaPlayerController* PlayerController;
		class UPrioritisedPromptsManager* PrioritisedPromptsManager;
		bool                           ImmediatelyRegisterForCharacterEvents;
	} params;

	params.PlayerController = PlayerController;
	params.PrioritisedPromptsManager = PrioritisedPromptsManager;
	params.ImmediatelyRegisterForCharacterEvents = ImmediatelyRegisterForCharacterEvents;

	UObject::ProcessEvent(fn, &params);
}


// Function PrioritisedPrompts.BasePromptCoordinator.EvaluatePromptDisplayState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPromptEvaluation       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPromptEvaluation UBasePromptCoordinator::EvaluatePromptDisplayState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.EvaluatePromptDisplayState"));

	struct
	{
		struct FPromptEvaluation       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrioritisedPrompts.BasePromptCoordinator.DismissAllPrompts
// (Final, Native, Public, BlueprintCallable)

void UBasePromptCoordinator::DismissAllPrompts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.DismissAllPrompts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
