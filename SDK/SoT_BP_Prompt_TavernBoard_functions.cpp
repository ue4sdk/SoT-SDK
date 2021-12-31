// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_TavernBoard_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_TavernBoard_C::RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.RegisterCharacterEvents_Implementable"));

	UBP_Prompt_TavernBoard_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_TavernBoard_C::UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.UnregisterCharacterEvents_Implementable"));

	UBP_Prompt_TavernBoard_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_TavernBoard_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.Evaluate"));

	UBP_Prompt_TavernBoard_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.OnApproachedTavernBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FApproachedPlayerGeneratedMapsContainer Event                          (Parm)

void UBP_Prompt_TavernBoard_C::OnApproachedTavernBoard(const FApproachedPlayerGeneratedMapsContainer& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.OnApproachedTavernBoard"));

	UBP_Prompt_TavernBoard_C_OnApproachedTavernBoard_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.ExecuteUbergraph_BP_Prompt_TavernBoard
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_TavernBoard_C::ExecuteUbergraph_BP_Prompt_TavernBoard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.ExecuteUbergraph_BP_Prompt_TavernBoard"));

	UBP_Prompt_TavernBoard_C_ExecuteUbergraph_BP_Prompt_TavernBoard_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
