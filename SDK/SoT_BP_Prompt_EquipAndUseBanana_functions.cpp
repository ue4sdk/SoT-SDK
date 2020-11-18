// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EquipAndUseBanana_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.OnPlayerDiedFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EquipAndUseBanana_C::OnPlayerDiedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.OnPlayerDiedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.SetShouldDisplayPrompts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InShouldDisplayPrompts         (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EquipAndUseBanana_C::SetShouldDisplayPrompts(bool InShouldDisplayPrompts)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.SetShouldDisplayPrompts"));

	struct
	{
		bool                           InShouldDisplayPrompts;
	} params;

	params.InShouldDisplayPrompts = InShouldDisplayPrompts;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.Start
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EquipAndUseBanana_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.Start"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EquipAndUseBanana_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_EquipAndUseBanana_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_EquipAndUseBanana_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.OnWielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventObjectWielded     Event                          (Parm)

void UBP_Prompt_EquipAndUseBanana_C::OnWielded(const struct FEventObjectWielded& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.OnWielded"));

	struct
	{
		struct FEventObjectWielded     Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.OnBananaUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventOneShotUseTriggered Event                          (Parm)

void UBP_Prompt_EquipAndUseBanana_C::OnBananaUsed(const struct FEventOneShotUseTriggered& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.OnBananaUsed"));

	struct
	{
		struct FEventOneShotUseTriggered Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.OnRadialOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShowRadialInventory    Event                          (Parm)

void UBP_Prompt_EquipAndUseBanana_C::OnRadialOpen(const struct FShowRadialInventory& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.OnRadialOpen"));

	struct
	{
		struct FShowRadialInventory    Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.OnCloseRadial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHideRadialInventory    Event                          (Parm)

void UBP_Prompt_EquipAndUseBanana_C::OnCloseRadial(const struct FHideRadialInventory& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.OnCloseRadial"));

	struct
	{
		struct FHideRadialInventory    Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.EventStartStow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FEventStartStow Event                          (Parm)

void UBP_Prompt_EquipAndUseBanana_C::EventStartStow(const struct FAthena_FEventStartStow& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.EventStartStow"));

	struct
	{
		struct FAthena_FEventStartStow Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.OnPlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCharacterDead     Event                          (Parm)

void UBP_Prompt_EquipAndUseBanana_C::OnPlayerDied(const struct FEventCharacterDead& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.OnPlayerDied"));

	struct
	{
		struct FEventCharacterDead     Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.ExecuteUbergraph_BP_Prompt_EquipAndUseBanana
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EquipAndUseBanana_C::ExecuteUbergraph_BP_Prompt_EquipAndUseBanana(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C.ExecuteUbergraph_BP_Prompt_EquipAndUseBanana"));

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
