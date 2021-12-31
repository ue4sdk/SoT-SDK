// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Component_Tutorial2019_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.SwapMysteriousStrangerToTutorialModeOnClient
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Component_Tutorial2019_C::SwapMysteriousStrangerToTutorialModeOnClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.SwapMysteriousStrangerToTutorialModeOnClient"));

	UBP_Component_Tutorial2019_C_SwapMysteriousStrangerToTutorialModeOnClient_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TeleportPlayerToOnboardingSpawnPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Component_Tutorial2019_C::TeleportPlayerToOnboardingSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TeleportPlayerToOnboardingSpawnPoint"));

	UBP_Component_Tutorial2019_C_TeleportPlayerToOnboardingSpawnPoint_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.GetPlayerController
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// AAthenaPlayerController*       Player_Controller              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Component_Tutorial2019_C::GetPlayerController(AAthenaPlayerController** Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.GetPlayerController"));

	UBP_Component_Tutorial2019_C_GetPlayerController_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Player_Controller != nullptr)
		*Player_Controller = params.Player_Controller;
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ConvertActorIdsToActors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TAssetPtr<class AActor>> ActorRefs                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<AActor*>                OutActors                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_Component_Tutorial2019_C::ConvertActorIdsToActors(TArray<TAssetPtr<class AActor>>* ActorRefs, TArray<AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ConvertActorIdsToActors"));

	UBP_Component_Tutorial2019_C_ConvertActorIdsToActors_Params params;

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

	UBP_Component_Tutorial2019_C_Debug_SearchForMissingGoldHoarders_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.PopulateGoldHoarderLocationsFromGoldHoarders
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Component_Tutorial2019_C::PopulateGoldHoarderLocationsFromGoldHoarders()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.PopulateGoldHoarderLocationsFromGoldHoarders"));

	UBP_Component_Tutorial2019_C_PopulateGoldHoarderLocationsFromGoldHoarders_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceCreatedAndPopulated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<FVector>                InputPin                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_Component_Tutorial2019_C::EnsurePurchaseVoyageSequenceCreatedAndPopulated(TArray<FVector>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceCreatedAndPopulated"));

	UBP_Component_Tutorial2019_C_EnsurePurchaseVoyageSequenceCreatedAndPopulated_Params params;

	UObject::ProcessEvent(fn, &params);

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceObjectCreated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// UBP_Prompt_CTPurchaseVoyageSequence_C* PromptObject                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Component_Tutorial2019_C::EnsurePurchaseVoyageSequenceObjectCreated(UBP_Prompt_CTPurchaseVoyageSequence_C** PromptObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceObjectCreated"));

	UBP_Component_Tutorial2019_C_EnsurePurchaseVoyageSequenceObjectCreated_Params params;

	UObject::ProcessEvent(fn, &params);

	if (PromptObject != nullptr)
		*PromptObject = params.PromptObject;
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.OnRep_GoldHoarderLocations
// (BlueprintCallable, BlueprintEvent)

void UBP_Component_Tutorial2019_C::OnRep_GoldHoarderLocations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.OnRep_GoldHoarderLocations"));

	UBP_Component_Tutorial2019_C_OnRep_GoldHoarderLocations_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TrySetUpCoordinator
// (BlueprintCallable, BlueprintEvent)

void UBP_Component_Tutorial2019_C::TrySetUpCoordinator()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TrySetUpCoordinator"));

	UBP_Component_Tutorial2019_C_TrySetUpCoordinator_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnClient
// (Event, Public, BlueprintEvent)

void UBP_Component_Tutorial2019_C::ReceiveTutorial2019BeginPlayOnClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnClient"));

	UBP_Component_Tutorial2019_C_ReceiveTutorial2019BeginPlayOnClient_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnServer
// (Event, Public, BlueprintEvent)

void UBP_Component_Tutorial2019_C::ReceiveTutorial2019BeginPlayOnServer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnServer"));

	UBP_Component_Tutorial2019_C_ReceiveTutorial2019BeginPlayOnServer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ForceDisableComponent_Blueprint
// (Event, Public, BlueprintEvent)

void UBP_Component_Tutorial2019_C::ForceDisableComponent_Blueprint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ForceDisableComponent_Blueprint"));

	UBP_Component_Tutorial2019_C_ForceDisableComponent_Blueprint_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.Set Prompts Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHidden                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReEvaluate                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay_In_Seconds               (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Component_Tutorial2019_C::Set_Prompts_Visibility(bool IsHidden, bool ReEvaluate, float Delay_In_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.Set Prompts Visibility"));

	UBP_Component_Tutorial2019_C_Set_Prompts_Visibility_Params params;
	params.IsHidden = IsHidden;
	params.ReEvaluate = ReEvaluate;
	params.Delay_In_Seconds = Delay_In_Seconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ControllerOnEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Component_Tutorial2019_C::ControllerOnEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ControllerOnEndPlay"));

	UBP_Component_Tutorial2019_C_ControllerOnEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ExecuteUbergraph_BP_Component_Tutorial2019
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Component_Tutorial2019_C::ExecuteUbergraph_BP_Component_Tutorial2019(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ExecuteUbergraph_BP_Component_Tutorial2019"));

	UBP_Component_Tutorial2019_C_ExecuteUbergraph_BP_Component_Tutorial2019_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
