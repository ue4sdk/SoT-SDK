// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_MaidenVoyage_UseIslandCannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnCannonFiredFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCannonFired       EventCannonFired               (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::OnCannonFiredFunc(const struct FEventCannonFired& EventCannonFired)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnCannonFiredFunc"));

	struct
	{
		struct FEventCannonFired       EventCannonFired;
	} params;

	params.EventCannonFired = EventCannonFired;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnLoadCannonFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::OnLoadCannonFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnLoadCannonFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnLeaveCannonFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerReliquishedControlOfControllable EventPlayerReliquishedControlOfControllable (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::OnLeaveCannonFunc(const struct FEventPlayerReliquishedControlOfControllable& EventPlayerReliquishedControlOfControllable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnLeaveCannonFunc"));

	struct
	{
		struct FEventPlayerReliquishedControlOfControllable EventPlayerReliquishedControlOfControllable;
	} params;

	params.EventPlayerReliquishedControlOfControllable = EventPlayerReliquishedControlOfControllable;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnDockWithCannonFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerTakenControlOfControllable EventPlayerTakenControlOfControllable (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::OnDockWithCannonFunc(const struct FEventPlayerTakenControlOfControllable& EventPlayerTakenControlOfControllable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnDockWithCannonFunc"));

	struct
	{
		struct FEventPlayerTakenControlOfControllable EventPlayerTakenControlOfControllable;
	} params;

	params.EventPlayerTakenControlOfControllable = EventPlayerTakenControlOfControllable;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnWieldFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventObjectWielded     EventObjectWielded             (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::OnWieldFunc(const struct FEventObjectWielded& EventObjectWielded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnWieldFunc"));

	struct
	{
		struct FEventObjectWielded     EventObjectWielded;
	} params;

	params.EventObjectWielded = EventObjectWielded;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.PostInitialize"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.UnregisterHandles
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::UnregisterHandles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.UnregisterHandles"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnWield
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventObjectWielded     Event                          (Parm)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::OnWield(const struct FEventObjectWielded& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnWield"));

	struct
	{
		struct FEventObjectWielded     Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnCannonFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCannonFired       Event                          (Parm)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::OnCannonFired(const struct FEventCannonFired& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnCannonFired"));

	struct
	{
		struct FEventCannonFired       Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnLoadCannon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventLoadableObjectLoaded Event                          (Parm)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::OnLoadCannon(const struct FEventLoadableObjectLoaded& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnLoadCannon"));

	struct
	{
		struct FEventLoadableObjectLoaded Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnDockWithCannon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerTakenControlOfControllable Event                          (Parm)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::OnDockWithCannon(const struct FEventPlayerTakenControlOfControllable& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnDockWithCannon"));

	struct
	{
		struct FEventPlayerTakenControlOfControllable Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnLeaveCannon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerReliquishedControlOfControllable Event                          (Parm)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::OnLeaveCannon(const struct FEventPlayerReliquishedControlOfControllable& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.OnLeaveCannon"));

	struct
	{
		struct FEventPlayerReliquishedControlOfControllable Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_MaidenVoyage_UseIslandCannon_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C.ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon"));

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
