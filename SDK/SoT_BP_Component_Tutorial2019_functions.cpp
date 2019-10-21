// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Component_Tutorial2019_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.GetPlayerController
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAthenaPlayerController* Player_Controller              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Component_Tutorial2019_C::GetPlayerController(class AAthenaPlayerController** Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.GetPlayerController"));

	struct
	{
		class AAthenaPlayerController* Player_Controller;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Player_Controller != nullptr)
		*Player_Controller = params.Player_Controller;
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ConvertActorIdsToActors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TAssetPtr<class AActor>> ActorRefs                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_Component_Tutorial2019_C::ConvertActorIdsToActors(TArray<TAssetPtr<class AActor>>* ActorRefs, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ConvertActorIdsToActors"));

	struct
	{
		TArray<TAssetPtr<class AActor>> ActorRefs;
		TArray<class AActor*>          OutActors;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ActorRefs != nullptr)
		*ActorRefs = params.ActorRefs;
	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.Debug_SearchForMissingGoldHoarders
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Component_Tutorial2019_C::Debug_SearchForMissingGoldHoarders()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.Debug_SearchForMissingGoldHoarders"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.PopulateGoldHoarderLocationsFromGoldHoarders
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Component_Tutorial2019_C::PopulateGoldHoarderLocationsFromGoldHoarders()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.PopulateGoldHoarderLocationsFromGoldHoarders"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceCreatedAndPopulated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         InputPin                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_Component_Tutorial2019_C::EnsurePurchaseVoyageSequenceCreatedAndPopulated(TArray<struct FVector>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceCreatedAndPopulated"));

	struct
	{
		TArray<struct FVector>         InputPin;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceObjectCreated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Prompt_CTPurchaseVoyageSequence_C* PromptObject                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Component_Tutorial2019_C::EnsurePurchaseVoyageSequenceObjectCreated(class UBP_Prompt_CTPurchaseVoyageSequence_C** PromptObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceObjectCreated"));

	struct
	{
		class UBP_Prompt_CTPurchaseVoyageSequence_C* PromptObject;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PromptObject != nullptr)
		*PromptObject = params.PromptObject;
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.OnRep_GoldHoarderLocations
// (BlueprintCallable, BlueprintEvent)

void UBP_Component_Tutorial2019_C::OnRep_GoldHoarderLocations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.OnRep_GoldHoarderLocations"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TrySetUpCoordinator
// (BlueprintCallable, BlueprintEvent)

void UBP_Component_Tutorial2019_C::TrySetUpCoordinator()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TrySetUpCoordinator"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnClient
// (Event, Public, BlueprintEvent)

void UBP_Component_Tutorial2019_C::ReceiveTutorial2019BeginPlayOnClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnClient"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnServer
// (Event, Public, BlueprintEvent)

void UBP_Component_Tutorial2019_C::ReceiveTutorial2019BeginPlayOnServer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnServer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.On Start Destructing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerControllerDestroyedCalled Event_Params                   (Parm)

void UBP_Component_Tutorial2019_C::On_Start_Destructing(const struct FEventPlayerControllerDestroyedCalled& Event_Params)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.On Start Destructing"));

	struct
	{
		struct FEventPlayerControllerDestroyedCalled Event_Params;
	} params;

	params.Event_Params = Event_Params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ExecuteUbergraph_BP_Component_Tutorial2019
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Component_Tutorial2019_C::ExecuteUbergraph_BP_Component_Tutorial2019(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ExecuteUbergraph_BP_Component_Tutorial2019"));

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
