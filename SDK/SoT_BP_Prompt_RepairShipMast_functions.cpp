// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_RepairShipMast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.UnregisterDamageEventFromCurrentShip
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_RepairShipMast_C::UnregisterDamageEventFromCurrentShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.UnregisterDamageEventFromCurrentShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.RegisterDamageEventWithCurrentShip
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_RepairShipMast_C::RegisterDamageEventWithCurrentShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.RegisterDamageEventWithCurrentShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_RepairShipMast_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_RepairShipMast_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.OnCurrentShipChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCurrentShipChanged Event                          (Parm)

void UBP_Prompt_RepairShipMast_C::OnCurrentShipChanged(const struct FEventCurrentShipChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.OnCurrentShipChanged"));

	struct
	{
		struct FEventCurrentShipChanged Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.OnShipMastDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventMastDamageLevelChanged Event                          (Parm)

void UBP_Prompt_RepairShipMast_C::OnShipMastDamaged(const struct FEventMastDamageLevelChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.OnShipMastDamaged"));

	struct
	{
		struct FEventMastDamageLevelChanged Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_RepairShipMast_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.ExecuteUbergraph_BP_Prompt_RepairShipMast
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_RepairShipMast_C::ExecuteUbergraph_BP_Prompt_RepairShipMast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.ExecuteUbergraph_BP_Prompt_RepairShipMast"));

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
