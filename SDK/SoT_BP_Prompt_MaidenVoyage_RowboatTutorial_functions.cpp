// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_MaidenVoyage_RowboatTutorial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnStrokeEndedFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_MaidenVoyage_RowboatTutorial_C::OnStrokeEndedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnStrokeEndedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnLeaveRowboatFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_MaidenVoyage_RowboatTutorial_C::OnLeaveRowboatFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnLeaveRowboatFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnSitInRowboatFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerTakenControlOfControllable EventPlayerTakenControlOfControllable (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_MaidenVoyage_RowboatTutorial_C::OnSitInRowboatFunc(const struct FEventPlayerTakenControlOfControllable& EventPlayerTakenControlOfControllable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnSitInRowboatFunc"));

	struct
	{
		struct FEventPlayerTakenControlOfControllable EventPlayerTakenControlOfControllable;
	} params;

	params.EventPlayerTakenControlOfControllable = EventPlayerTakenControlOfControllable;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.ResetState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_MaidenVoyage_RowboatTutorial_C::ResetState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.ResetState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_MaidenVoyage_RowboatTutorial_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.PostInitialize"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_MaidenVoyage_RowboatTutorial_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_MaidenVoyage_RowboatTutorial_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnSitInRowboat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerTakenControlOfControllable Event                          (Parm)

void UBP_Prompt_MaidenVoyage_RowboatTutorial_C::OnSitInRowboat(const struct FEventPlayerTakenControlOfControllable& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnSitInRowboat"));

	struct
	{
		struct FEventPlayerTakenControlOfControllable Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnLeaveRowboat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerReliquishedControlOfControllable Event                          (Parm)

void UBP_Prompt_MaidenVoyage_RowboatTutorial_C::OnLeaveRowboat(const struct FEventPlayerReliquishedControlOfControllable& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnLeaveRowboat"));

	struct
	{
		struct FEventPlayerReliquishedControlOfControllable Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnStrokeEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventOarStrokeEnded    Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_MaidenVoyage_RowboatTutorial_C::OnStrokeEnded(const struct FEventOarStrokeEnded& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnStrokeEnded"));

	struct
	{
		struct FEventOarStrokeEnded    Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_MaidenVoyage_RowboatTutorial_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial"));

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
