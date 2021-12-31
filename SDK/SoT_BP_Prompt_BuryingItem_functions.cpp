// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_BuryingItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.OnWieldFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FEventObjectWielded    EventObjectWielded             (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_BuryingItem_C::OnWieldFunc(const FAthena_FEventObjectWielded& EventObjectWielded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.OnWieldFunc"));

	UBP_Prompt_BuryingItem_C_OnWieldFunc_Params params;
	params.EventObjectWielded = EventObjectWielded;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_BuryingItem_C::RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.RegisterCharacterEvents_Implementable"));

	UBP_Prompt_BuryingItem_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_BuryingItem_C::UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.UnregisterCharacterEvents_Implementable"));

	UBP_Prompt_BuryingItem_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_BuryingItem_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.Evaluate"));

	UBP_Prompt_BuryingItem_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.OnWieldEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FEventObjectWielded    OnWieldEvent                   (Parm)

void UBP_Prompt_BuryingItem_C::OnWieldEvent(const FAthena_FEventObjectWielded& OnWieldEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.OnWieldEvent"));

	UBP_Prompt_BuryingItem_C_OnWieldEvent_Params params;
	params.OnWieldEvent = OnWieldEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.ExecuteUbergraph_BP_Prompt_BuryingItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_BuryingItem_C::ExecuteUbergraph_BP_Prompt_BuryingItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_BuryingItem.BP_Prompt_BuryingItem_C.ExecuteUbergraph_BP_Prompt_BuryingItem"));

	UBP_Prompt_BuryingItem_C_ExecuteUbergraph_BP_Prompt_BuryingItem_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
