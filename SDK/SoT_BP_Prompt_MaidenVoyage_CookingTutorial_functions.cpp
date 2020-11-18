// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_MaidenVoyage_CookingTutorial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C.OnHoldRawFoodFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventObjectWielded     EventObjectWielded             (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MaidenVoyage_CookingTutorial_C::OnHoldRawFoodFunc(const struct FEventObjectWielded& EventObjectWielded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C.OnHoldRawFoodFunc"));

	struct
	{
		struct FEventObjectWielded     EventObjectWielded;
	} params;

	params.EventObjectWielded = EventObjectWielded;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_MaidenVoyage_CookingTutorial_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MaidenVoyage_CookingTutorial_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MaidenVoyage_CookingTutorial_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C.OnHoldRawFood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventObjectWielded     Event                          (Parm)

void UBP_Prompt_MaidenVoyage_CookingTutorial_C::OnHoldRawFood(const struct FEventObjectWielded& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C.OnHoldRawFood"));

	struct
	{
		struct FEventObjectWielded     Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C.ExecuteUbergraph_BP_Prompt_MaidenVoyage_CookingTutorial
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_MaidenVoyage_CookingTutorial_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_CookingTutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C.ExecuteUbergraph_BP_Prompt_MaidenVoyage_CookingTutorial"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
