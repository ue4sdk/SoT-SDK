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


// Function PrioritisedPrompts.BasePromptCoordinator.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAthenaPlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UPrioritisedPromptsManager* PrioritisedPromptsManager      (Parm, ZeroConstructor, IsPlainOldData)

void UBasePromptCoordinator::Initialize(class AAthenaPlayerController* PlayerController, class UPrioritisedPromptsManager* PrioritisedPromptsManager)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PrioritisedPrompts.BasePromptCoordinator.Initialize"));

	struct
	{
		class AAthenaPlayerController* PlayerController;
		class UPrioritisedPromptsManager* PrioritisedPromptsManager;
	} params;

	params.PlayerController = PlayerController;
	params.PrioritisedPromptsManager = PrioritisedPromptsManager;

	UObject::ProcessEvent(fn, &params);
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
