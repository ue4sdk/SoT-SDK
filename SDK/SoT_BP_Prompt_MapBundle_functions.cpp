// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_MapBundle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MapBundle_C::RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.RegisterCharacterEvents_Implementable"));

	UBP_Prompt_MapBundle_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MapBundle_C::UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.UnregisterCharacterEvents_Implementable"));

	UBP_Prompt_MapBundle_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_MapBundle_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.Evaluate"));

	UBP_Prompt_MapBundle_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.OnMapBundleBecameVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FPlayerBuriedItemsMapBundleBecameVisible Event                          (Parm)

void UBP_Prompt_MapBundle_C::OnMapBundleBecameVisible(const FPlayerBuriedItemsMapBundleBecameVisible& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.OnMapBundleBecameVisible"));

	UBP_Prompt_MapBundle_C_OnMapBundleBecameVisible_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.ExecuteUbergraph_BP_Prompt_MapBundle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_MapBundle_C::ExecuteUbergraph_BP_Prompt_MapBundle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.ExecuteUbergraph_BP_Prompt_MapBundle"));

	UBP_Prompt_MapBundle_C_ExecuteUbergraph_BP_Prompt_MapBundle_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
