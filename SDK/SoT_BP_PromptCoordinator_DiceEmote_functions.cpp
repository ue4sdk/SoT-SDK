// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_DiceEmote_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStartedFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventEmoteStarted             EventEmoteStarted              (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_PromptCoordinator_DiceEmote_C::OnEmoteStartedFunc(const FEventEmoteStarted& EventEmoteStarted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStartedFunc"));

	UBP_PromptCoordinator_DiceEmote_C_OnEmoteStartedFunc_Params params;
	params.EventEmoteStarted = EventEmoteStarted;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_PromptCoordinator_DiceEmote_C::RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.RegisterCharacterEvents_Implementable"));

	UBP_PromptCoordinator_DiceEmote_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_PromptCoordinator_DiceEmote_C::UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.UnregisterCharacterEvents_Implementable"));

	UBP_PromptCoordinator_DiceEmote_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_DiceEmote_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.Evaluate"));

	UBP_PromptCoordinator_DiceEmote_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEventEmoteStarted             EmoteStartedEvent              (Parm)

void UBP_PromptCoordinator_DiceEmote_C::OnEmoteStarted(const FEventEmoteStarted& EmoteStartedEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStarted"));

	UBP_PromptCoordinator_DiceEmote_C_OnEmoteStarted_Params params;
	params.EmoteStartedEvent = EmoteStartedEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.ExecuteUbergraph_BP_PromptCoordinator_DiceEmote
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_DiceEmote_C::ExecuteUbergraph_BP_PromptCoordinator_DiceEmote(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.ExecuteUbergraph_BP_PromptCoordinator_DiceEmote"));

	UBP_PromptCoordinator_DiceEmote_C_ExecuteUbergraph_BP_PromptCoordinator_DiceEmote_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
