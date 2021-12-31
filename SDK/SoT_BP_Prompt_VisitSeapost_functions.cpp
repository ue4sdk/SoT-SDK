// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_VisitSeapost_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.OnEventObjectWielded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FEventObjectWielded    Event                          (Parm)

void UBP_Prompt_VisitSeapost_C::OnEventObjectWielded(const FAthena_FEventObjectWielded& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.OnEventObjectWielded"));

	UBP_Prompt_VisitSeapost_C_OnEventObjectWielded_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_VisitSeapost_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.Evaluate"));

	UBP_Prompt_VisitSeapost_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.EventObjectWielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FEventObjectWielded    Event                          (Parm)

void UBP_Prompt_VisitSeapost_C::EventObjectWielded(const FAthena_FEventObjectWielded& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.EventObjectWielded"));

	UBP_Prompt_VisitSeapost_C_EventObjectWielded_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_VisitSeapost_C::RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.RegisterCharacterEvents_Implementable"));

	UBP_Prompt_VisitSeapost_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_VisitSeapost_C::UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.UnregisterCharacterEvents_Implementable"));

	UBP_Prompt_VisitSeapost_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.ExecuteUbergraph_BP_Prompt_VisitSeapost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_VisitSeapost_C::ExecuteUbergraph_BP_Prompt_VisitSeapost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.ExecuteUbergraph_BP_Prompt_VisitSeapost"));

	UBP_Prompt_VisitSeapost_C_ExecuteUbergraph_BP_Prompt_VisitSeapost_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
