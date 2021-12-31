// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_SpeakingTrumpet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.OnWieldFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FEventObjectWielded    EventObjectWielded             (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_SpeakingTrumpet_C::OnWieldFunc(const FAthena_FEventObjectWielded& EventObjectWielded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.OnWieldFunc"));

	UBP_Prompt_SpeakingTrumpet_C_OnWieldFunc_Params params;
	params.EventObjectWielded = EventObjectWielded;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_SpeakingTrumpet_C::RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.RegisterCharacterEvents_Implementable"));

	UBP_Prompt_SpeakingTrumpet_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_SpeakingTrumpet_C::UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.UnregisterCharacterEvents_Implementable"));

	UBP_Prompt_SpeakingTrumpet_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_SpeakingTrumpet_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.Evaluate"));

	UBP_Prompt_SpeakingTrumpet_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.OnWieldEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FEventObjectWielded    OnWieldEvent                   (Parm)

void UBP_Prompt_SpeakingTrumpet_C::OnWieldEvent(const FAthena_FEventObjectWielded& OnWieldEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.OnWieldEvent"));

	UBP_Prompt_SpeakingTrumpet_C_OnWieldEvent_Params params;
	params.OnWieldEvent = OnWieldEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.ExecuteUbergraph_BP_Prompt_SpeakingTrumpet
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_SpeakingTrumpet_C::ExecuteUbergraph_BP_Prompt_SpeakingTrumpet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.ExecuteUbergraph_BP_Prompt_SpeakingTrumpet"));

	UBP_Prompt_SpeakingTrumpet_C_ExecuteUbergraph_BP_Prompt_SpeakingTrumpet_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
