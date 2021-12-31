// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaAI.AthenaAIFormComponent.OnRep_FormData
// (Final, Native, Private)

void UAthenaAIFormComponent::OnRep_FormData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIFormComponent.OnRep_FormData"));

	UAthenaAIFormComponent_OnRep_FormData_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AISpawner.GetNumOfSpawnRequests
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAISpawner::GetNumOfSpawnRequests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AISpawner.GetNumOfSpawnRequests"));

	UAISpawner_GetNumOfSpawnRequests_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AICreatureCharacter.SetAIStrategy
// (Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        InStrategy                     (Parm, ZeroConstructor, IsPlainOldData)

void AAICreatureCharacter::SetAIStrategy(UClass* InStrategy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AICreatureCharacter.SetAIStrategy"));

	AAICreatureCharacter_SetAIStrategy_Params params;
	params.InStrategy = InStrategy;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy
// (Final, Native, Protected)
// Parameters:
// UClass*                        OldAIStrategy                  (Parm, ZeroConstructor, IsPlainOldData)

void AAICreatureCharacter::OnRep_CurrentAIStrategy(UClass* OldAIStrategy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy"));

	AAICreatureCharacter_OnRep_CurrentAIStrategy_Params params;
	params.OldAIStrategy = OldAIStrategy;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AAICreatureCharacter::Multicast_DespawnRPC()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC"));

	AAICreatureCharacter_Multicast_DespawnRPC_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AICreatureCharacter.GetAIStrategy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UClass*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UClass* AAICreatureCharacter::GetAIStrategy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AICreatureCharacter.GetAIStrategy"));

	AAICreatureCharacter_GetAIStrategy_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup
// (Final, Native, Public, BlueprintCallable)

void UAIFaunaSpawner::SpawnFaunaGroup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup"));

	UAIFaunaSpawner_SpawnFaunaGroup_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FName                          ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIControllerBase::SetNamedControllerParam(const FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam"));

	AAthenaAIControllerBase_SetNamedControllerParam_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FName                          ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FWeightedProbabilityRangeOfRanges ReturnValue                    (Parm, OutParm, ReturnParm)

FWeightedProbabilityRangeOfRanges AAthenaAIControllerBase::FindNamedWeightedRangesControllerParam(const FName& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam"));

	AAthenaAIControllerBase_FindNamedWeightedRangesControllerParam_Params params;
	params.ParamName = ParamName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FName                          ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAthenaAIControllerBase::FindNamedControllerParam(const FName& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam"));

	AAthenaAIControllerBase_FindNamedControllerParam_Params params;
	params.ParamName = ParamName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams
// (Native, Public, BlueprintCallable)
// Parameters:
// UAthenaAIControllerParamsDataAsset* ParamsAsset                    (Parm, ZeroConstructor, IsPlainOldData)
// APawn*                         InPawn                         (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIControllerBase::ApplyControllerParams(UAthenaAIControllerParamsDataAsset* ParamsAsset, APawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams"));

	AAthenaAIControllerBase_ApplyControllerParams_Params params;
	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.StopBehaviourLogic
// (Native, Public, BlueprintCallable)

void AAthenaAIController::StopBehaviourLogic()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.StopBehaviourLogic"));

	AAthenaAIController_StopBehaviourLogic_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirationAge                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        Sense                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIController::SetPerceptionExpirationAgeForActor(AActor* Actor, float ExpirationAge, UClass* Sense)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor"));

	AAthenaAIController_SetPerceptionExpirationAgeForActor_Params params;
	params.Actor = Actor;
	params.ExpirationAge = ExpirationAge;
	params.Sense = Sense;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus
// (Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        TriggerActor                   (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIController::RegisterSpawnTriggerActorAsStimulus(AActor* TriggerActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus"));

	AAthenaAIController_RegisterSpawnTriggerActorAsStimulus_Params params;
	params.TriggerActor = TriggerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.OnPerceptionUpdated
// (Native, Public)
// Parameters:
// TArray<AActor*>                ChangedPerceivedActors         (Parm, ZeroConstructor)

void AAthenaAIController::OnPerceptionUpdated(TArray<AActor*> ChangedPerceivedActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.OnPerceptionUpdated"));

	AAthenaAIController_OnPerceptionUpdated_Params params;
	params.ChangedPerceivedActors = ChangedPerceivedActors;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.OnNewlySpawned
// (Event, Public, BlueprintEvent)

void AAthenaAIController::OnNewlySpawned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.OnNewlySpawned"));

	AAthenaAIController_OnNewlySpawned_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.OnFinishDespawn
// (Event, Public, BlueprintEvent)

void AAthenaAIController::OnFinishDespawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.OnFinishDespawn"));

	AAthenaAIController_OnFinishDespawn_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.IsActorPerceived
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AActor*                        TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAthenaAIController::IsActorPerceived(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.IsActorPerceived"));

	AAthenaAIController_IsActorPerceived_Params params;
	params.TargetActor = TargetActor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetTargetActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* AAthenaAIController::GetTargetActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.GetTargetActor"));

	AAthenaAIController_GetTargetActor_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UAthenaAIPerceptionComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

UAthenaAIPerceptionComponent* AAthenaAIController::GetAthenaAIPerceptionComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent"));

	AAthenaAIController_GetAthenaAIPerceptionComponent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetAllSeenActors
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<AActor*>                SeenActors                     (Parm, OutParm, ZeroConstructor)

void AAthenaAIController::GetAllSeenActors(TArray<AActor*>* SeenActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.GetAllSeenActors"));

	AAthenaAIController_GetAllSeenActors_Params params;

	UObject::ProcessEvent(fn, &params);

	if (SeenActors != nullptr)
		*SeenActors = params.SeenActors;
}


// Function AthenaAI.AthenaAIController.ApplyControllerParams
// (Native, Public, BlueprintCallable)
// Parameters:
// UAthenaAIControllerParamsDataAsset* ParamsAsset                    (Parm, ZeroConstructor, IsPlainOldData)
// APawn*                         InPawn                         (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIController::ApplyControllerParams(UAthenaAIControllerParamsDataAsset* ParamsAsset, APawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.ApplyControllerParams"));

	AAthenaAIController_ApplyControllerParams_Params params;
	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaFaunaAIController.SetDormancyCheckingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InDormancyCheckingEnabledInAutomation (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaFaunaAIController::SetDormancyCheckingEnabled(bool InDormancyCheckingEnabledInAutomation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaFaunaAIController.SetDormancyCheckingEnabled"));

	AAthenaFaunaAIController_SetDormancyCheckingEnabled_Params params;
	params.InDormancyCheckingEnabledInAutomation = InDormancyCheckingEnabledInAutomation;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed
// (Final, Native, Private)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaFaunaAIController::LeaderDestroyed(AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed"));

	AAthenaFaunaAIController_LeaderDestroyed_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaFaunaAIController.GetLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* AAthenaFaunaAIController::GetLeader()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaFaunaAIController.GetLeader"));

	AAthenaFaunaAIController_GetLeader_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaFaunaAIController.GetCourage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAthenaFaunaAIController::GetCourage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaFaunaAIController.GetCourage"));

	AAthenaFaunaAIController_GetCourage_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UAthenaAICharacterPathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

UAthenaAICharacterPathFollowingComponent* AAthenaFaunaAIController::GetAthenaAICharPathFollowingComp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp"));

	AAthenaFaunaAIController_GetAthenaAICharPathFollowingComp_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.Fauna.TestingSetWaterState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFaunaInWaterState> NewInState                     (Parm, ZeroConstructor, IsPlainOldData)

void AFauna::TestingSetWaterState(TEnumAsByte<EFaunaInWaterState> NewInState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.TestingSetWaterState"));

	AFauna_TestingSetWaterState_Params params;
	params.NewInState = NewInState;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.OnRep_TargetTurnAngle
// (Final, Native, Private)

void AFauna::OnRep_TargetTurnAngle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.OnRep_TargetTurnAngle"));

	AFauna_OnRep_TargetTurnAngle_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim
// (Final, Native, Private)

void AFauna::OnRep_IsPlayingStarvingAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim"));

	AFauna_OnRep_IsPlayingStarvingAnim_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.OnRep_IsCalm
// (Final, Native, Private)

void AFauna::OnRep_IsCalm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.OnRep_IsCalm"));

	AFauna_OnRep_IsCalm_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.OnRep_IsAgitated
// (Final, Native, Private)

void AFauna::OnRep_IsAgitated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.OnRep_IsAgitated"));

	AFauna_OnRep_IsAgitated_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.OnRep_InWaterState
// (Final, Native, Private)

void AFauna::OnRep_InWaterState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.OnRep_InWaterState"));

	AFauna_OnRep_InWaterState_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.OnRep_CratedState
// (Final, Native, Private, HasOutParms)
// Parameters:
// TEnumAsByte<EFaunaCratedState> PreviousCratedState            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AFauna::OnRep_CratedState(TEnumAsByte<EFaunaCratedState> PreviousCratedState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.OnRep_CratedState"));

	AFauna_OnRep_CratedState_Params params;
	params.PreviousCratedState = PreviousCratedState;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// AActor*                        Crate                          (Parm, ZeroConstructor, IsPlainOldData)

void AFauna::Multicast_PlayPutInCrateEffectsRPC(AActor* Crate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC"));

	AFauna_Multicast_PlayPutInCrateEffectsRPC_Params params;
	params.Crate = Crate;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.Multicast_JustBeenFedRPC
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// AActor*                        FedBy                          (Parm, ZeroConstructor, IsPlainOldData)

void AFauna::Multicast_JustBeenFedRPC(AActor* FedBy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.Multicast_JustBeenFedRPC"));

	AFauna_Multicast_JustBeenFedRPC_Params params;
	params.FedBy = FedBy;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.Multicast_HightlightLeader
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bIsLeader                      (Parm, ZeroConstructor, IsPlainOldData)

void AFauna::Multicast_HightlightLeader(bool bIsLeader)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.Multicast_HightlightLeader"));

	AFauna_Multicast_HightlightLeader_Params params;
	params.bIsLeader = bIsLeader;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed
// (Final, Native, Public, BlueprintCallable)

void AFauna::GenerateNewRandomAnimationSeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed"));

	AFauna_GenerateNewRandomAnimationSeed_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.ActivateResponseRPC
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// float                          InTargetTurnAngle              (Parm, ZeroConstructor, IsPlainOldData)

void AFauna::ActivateResponseRPC(float InTargetTurnAngle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.ActivateResponseRPC"));

	AFauna_ActivateResponseRPC_Params params;
	params.InTargetTurnAngle = InTargetTurnAngle;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TAssetPtr<class UClass>        AIType                         (ConstParm, Parm)
// TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                       (ConstParm, Parm)
// TAssetPtr<class ULoadoutAsset> Loadout                        (ConstParm, Parm)
// TAssetPtr<class UAthenaAIFormDataAsset> Form                           (ConstParm, Parm)
// TAssetPtr<class UClass>        AIItemSpawnComponent           (ConstParm, Parm)
// UClass*                        ClassId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UAthenaAIAmmoDataAsset> Ammo                           (ConstParm, Parm)
// FVector                        Pos                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FRotator                       Rot                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FName                          Region                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// AActor*                        TriggerActor                   (Parm, ZeroConstructor, IsPlainOldData)
// FName                          NavMeshOverride                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, TAssetPtr<class UClass> AIItemSpawnComponent, UClass* ClassId, TAssetPtr<class UAthenaAIAmmoDataAsset> Ammo, const FVector& Pos, const FRotator& Rot, const FName& Region, AActor* TriggerActor, const FName& NavMeshOverride, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings"));

	UAthenaAIDebugFunctionLibrary_SpawnAIWithSettings_Params params;
	params.AIType = AIType;
	params.Skillset = Skillset;
	params.Loadout = Loadout;
	params.Form = Form;
	params.AIItemSpawnComponent = AIItemSpawnComponent;
	params.ClassId = ClassId;
	params.Ammo = Ammo;
	params.Pos = Pos;
	params.Rot = Rot;
	params.Region = Region;
	params.TriggerActor = TriggerActor;
	params.NavMeshOverride = NavMeshOverride;
	params.Delay = Delay;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// UAIEncounterSettings*          EncounterSettings              (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Pos                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FRotator                       Rot                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MakeAIPermanentlyNetRelevant   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        InstancedNavMesh               (Parm, ZeroConstructor, IsPlainOldData)
// FAIEncounterSpecification      ReturnValue                    (Parm, OutParm, ReturnParm)

FAIEncounterSpecification UAthenaAIDebugFunctionLibrary::SpawnAI(UAIEncounterSettings* EncounterSettings, const FVector& Pos, const FRotator& Rot, float Delay, bool MakeAIPermanentlyNetRelevant, AActor* InstancedNavMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI"));

	UAthenaAIDebugFunctionLibrary_SpawnAI_Params params;
	params.EncounterSettings = EncounterSettings;
	params.Pos = Pos;
	params.Rot = Rot;
	params.Delay = Delay;
	params.MakeAIPermanentlyNetRelevant = MakeAIPermanentlyNetRelevant;
	params.InstancedNavMesh = InstancedNavMesh;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InMaxAllowedSeconds            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, UObject* QueryOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds"));

	UAthenaAIDebugFunctionLibrary_SetEnvQueryManagerMaxAllowedSeconds_Params params;
	params.InMaxAllowedSeconds = InMaxAllowedSeconds;
	params.QueryOwner = QueryOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.KillAllDebugAISpawners
// (Final, Native, Static, Public, BlueprintCallable)

void UAthenaAIDebugFunctionLibrary::KillAllDebugAISpawners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.KillAllDebugAISpawners"));

	UAthenaAIDebugFunctionLibrary_KillAllDebugAISpawners_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAthenaAIDebugFunctionLibrary::GetEnvQueryManagerNumRunningQueries(UObject* QueryOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries"));

	UAthenaAIDebugFunctionLibrary_GetEnvQueryManagerNumRunningQueries_Params params;
	params.QueryOwner = QueryOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AAthenaAIController*           AIController                   (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::EnableMaximumSightSettings(AAthenaAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings"));

	UAthenaAIDebugFunctionLibrary_EnableMaximumSightSettings_Params params;
	params.AIController = AIController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::EnableBehaviorTreeLogging(UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging"));

	UAthenaAIDebugFunctionLibrary_EnableBehaviorTreeLogging_Params params;
	params.WorldContext = WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// APawn*                         Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::DespawnAIPawn(APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn"));

	UAthenaAIDebugFunctionLibrary_DespawnAIPawn_Params params;
	params.Pawn = Pawn;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// UObject*                       WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// UAISpawner*                    SpawnerAsset                   (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Pos                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::CreateAISpawnerAtPosition(UObject* WorldContext, UAISpawner* SpawnerAsset, const FVector& Pos)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtPosition"));

	UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtPosition_Params params;
	params.WorldContext = WorldContext;
	params.SpawnerAsset = SpawnerAsset;
	params.Pos = Pos;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// UAISpawner*                    SpawnerAsset                   (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        SpawnLocationActor             (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::CreateAISpawnerAtActor(UObject* WorldContext, UAISpawner* SpawnerAsset, AActor* SpawnLocationActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtActor"));

	UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtActor_Params params;
	params.WorldContext = WorldContext;
	params.SpawnerAsset = SpawnerAsset;
	params.SpawnLocationActor = SpawnLocationActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// UObject*                       WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ANavigationData*               NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UAthenaAIDebugFunctionLibrary::CanProjectPointToNavigation(UObject* WorldContext, const FVector& Point, ANavigationData* NavData, UClass* FilterClass, const FVector& QueryExtent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation"));

	UAthenaAIDebugFunctionLibrary_CanProjectPointToNavigation_Params params;
	params.WorldContext = WorldContext;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.Pet.SetExitTakeOffFlag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InExitTakeOffFlag              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APet::SetExitTakeOffFlag(bool InExitTakeOffFlag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.SetExitTakeOffFlag"));

	APet_SetExitTakeOffFlag_Params params;
	params.InExitTakeOffFlag = InExitTakeOffFlag;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnShipDestroyed
// (Final, Native, Public)
// Parameters:
// AActor*                        InShip                         (Parm, ZeroConstructor, IsPlainOldData)

void APet::OnShipDestroyed(AActor* InShip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnShipDestroyed"));

	APet_OnShipDestroyed_Params params;
	params.InShip = InShip;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnRep_RollRequest
// (Final, Native, Private)

void APet::OnRep_RollRequest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnRep_RollRequest"));

	APet_OnRep_RollRequest_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnRep_ResetRollAndZOffset
// (Final, Native, Private)

void APet::OnRep_ResetRollAndZOffset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnRep_ResetRollAndZOffset"));

	APet_OnRep_ResetRollAndZOffset_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnRep_PetTurnToFaceData
// (Final, Native, Public)

void APet::OnRep_PetTurnToFaceData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnRep_PetTurnToFaceData"));

	APet_OnRep_PetTurnToFaceData_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnRep_PetOwner
// (Final, Native, Private)

void APet::OnRep_PetOwner()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnRep_PetOwner"));

	APet_OnRep_PetOwner_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnRep_PetIsSad
// (Final, Native, Private)

void APet::OnRep_PetIsSad()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnRep_PetIsSad"));

	APet_OnRep_PetIsSad_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnRep_PerchedInHangout
// (Final, Native, Private)

void APet::OnRep_PerchedInHangout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnRep_PerchedInHangout"));

	APet_OnRep_PerchedInHangout_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnRep_MovementRequest
// (Final, Native, Private)

void APet::OnRep_MovementRequest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnRep_MovementRequest"));

	APet_OnRep_MovementRequest_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnRep_InHangout
// (Final, Native, Private)

void APet::OnRep_InHangout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnRep_InHangout"));

	APet_OnRep_InHangout_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnOwnerDestroyed
// (Final, Native, Public)
// Parameters:
// AActor*                        InOwner                        (Parm, ZeroConstructor, IsPlainOldData)

void APet::OnOwnerDestroyed(AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnOwnerDestroyed"));

	APet_OnOwnerDestroyed_Params params;
	params.InOwner = InOwner;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.Multicast_DitherOut
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void APet::Multicast_DitherOut()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.Multicast_DitherOut"));

	APet_Multicast_DitherOut_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.Multicast_DitherIn
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void APet::Multicast_DitherIn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.Multicast_DitherIn"));

	APet_Multicast_DitherIn_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.GetFloorMeshOffsetZ
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APet::GetFloorMeshOffsetZ()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.GetFloorMeshOffsetZ"));

	APet_GetFloorMeshOffsetZ_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AINameplateComponent.OnRep_Title
// (Final, Native, Private)

void UAINameplateComponent::OnRep_Title()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AINameplateComponent.OnRep_Title"));

	UAINameplateComponent_OnRep_Title_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AINameplateComponent.OnRep_DisplayNameAsString
// (Final, Native, Private)

void UAINameplateComponent::OnRep_DisplayNameAsString()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AINameplateComponent.OnRep_DisplayNameAsString"));

	UAINameplateComponent_OnRep_DisplayNameAsString_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AINameplateComponent.OnRep_DisplayName
// (Final, Native, Private)

void UAINameplateComponent::OnRep_DisplayName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AINameplateComponent.OnRep_DisplayName"));

	UAINameplateComponent_OnRep_DisplayName_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AINameplateComponent.OnRep_DebugDisplayText
// (Final, Native, Private)

void UAINameplateComponent::OnRep_DebugDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AINameplateComponent.OnRep_DebugDisplayText"));

	UAINameplateComponent_OnRep_DebugDisplayText_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaSwimmingAIController.ApplyControllerParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UAthenaAIControllerParamsDataAsset* InControllerParametersAsset    (Parm, ZeroConstructor, IsPlainOldData)
// APawn*                         InPawn                         (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSwimmingAIController::ApplyControllerParams(UAthenaAIControllerParamsDataAsset* InControllerParametersAsset, APawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaSwimmingAIController.ApplyControllerParams"));

	AAthenaSwimmingAIController_ApplyControllerParams_Params params;
	params.InControllerParametersAsset = InControllerParametersAsset;
	params.InPawn = InPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed
// (Final, Native, Private)
// Parameters:
// AActor*                        InDestroyedActor               (Parm, ZeroConstructor, IsPlainOldData)

void ATinySharkExperience::TinySharkPawnDestroyed(AActor* InDestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed"));

	ATinySharkExperience_TinySharkPawnDestroyed_Params params;
	params.InDestroyedActor = InDestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.TinySharkExperience.OnRep_TinySharkPawn
// (Native, Protected)
// Parameters:
// ASharkPawn*                    LastTinySharkPawn              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATinySharkExperience::OnRep_TinySharkPawn(ASharkPawn* LastTinySharkPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkExperience.OnRep_TinySharkPawn"));

	ATinySharkExperience_OnRep_TinySharkPawn_Params params;
	params.LastTinySharkPawn = LastTinySharkPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.TinySharkExperience.GetTrackedShip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AShip*                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AShip* ATinySharkExperience::GetTrackedShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkExperience.GetTrackedShip"));

	ATinySharkExperience_GetTrackedShip_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.TinySharkExperience.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETinySharkState>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETinySharkState> ATinySharkExperience::GetCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkExperience.GetCurrentState"));

	ATinySharkExperience_GetCurrentState_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.TinySharkExperience.GetActiveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETinySharkActiveState> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETinySharkActiveState> ATinySharkExperience::GetActiveState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkExperience.GetActiveState"));

	ATinySharkExperience_GetActiveState_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.TinySharkService.RequestTinySharkWithShip
// (Native, Public, BlueprintCallable)
// Parameters:
// AShip*                         InTrackedShip                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            OverrideControllerParamIndex   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            PartIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATinySharkService::RequestTinySharkWithShip(AShip* InTrackedShip, int OverrideControllerParamIndex, int PartIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkService.RequestTinySharkWithShip"));

	ATinySharkService_RequestTinySharkWithShip_Params params;
	params.InTrackedShip = InTrackedShip;
	params.OverrideControllerParamIndex = OverrideControllerParamIndex;
	params.PartIndex = PartIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.TinySharkService.RequestTinySharkWithLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        SpawnLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            PartIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATinySharkService::RequestTinySharkWithLocation(const FVector& SpawnLocation, int PartIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkService.RequestTinySharkWithLocation"));

	ATinySharkService_RequestTinySharkWithLocation_Params params;
	params.SpawnLocation = SpawnLocation;
	params.PartIndex = PartIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.TinySharkService.DismissAllTinySharks
// (Native, Public, BlueprintCallable)

void ATinySharkService::DismissAllTinySharks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkService.DismissAllTinySharks"));

	ATinySharkService_DismissAllTinySharks_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATinySharkService::CanSpawnTinySharkExperience()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience"));

	ATinySharkService_CanSpawnTinySharkExperience_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAISkillsetRankProgression> Progression                    (Parm)

void UAIEncounterServiceInterface::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression"));

	UAIEncounterServiceInterface_RegisterLoadedSkillsetProgression_Params params;
	params.Progression = Progression;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                       (Parm)

void UAIEncounterServiceInterface::RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset"));

	UAIEncounterServiceInterface_RegisterLoadedSkillset_Params params;
	params.Skillset = Skillset;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class ULoadoutAsset> Loadout                        (Parm)

void UAIEncounterServiceInterface::RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout"));

	UAIEncounterServiceInterface_RegisterLoadedLoadout_Params params;
	params.Loadout = Loadout;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAthenaAIFormDataAsset> Form                           (Parm)

void UAIEncounterServiceInterface::RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm"));

	UAIEncounterServiceInterface_RegisterLoadedForm_Params params;
	params.Form = Form;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAIEncounterSettings> Encounter                      (Parm)

void UAIEncounterServiceInterface::RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter"));

	UAIEncounterServiceInterface_RegisterLoadedEncounter_Params params;
	params.Encounter = Encounter;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AICombatEncounterInterface.OnVulnerabilityStateEntered
// (Native, Event, Public, BlueprintEvent)

void UAICombatEncounterInterface::OnVulnerabilityStateEntered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AICombatEncounterInterface.OnVulnerabilityStateEntered"));

	UAICombatEncounterInterface_OnVulnerabilityStateEntered_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAISkillsetRankProgression> Progression                    (Parm)

void AAIEncounterService::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression"));

	AAIEncounterService_RegisterLoadedSkillsetProgression_Params params;
	params.Progression = Progression;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIEncounterService.RegisterLoadedSkillset
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                       (Parm)

void AAIEncounterService::RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterService.RegisterLoadedSkillset"));

	AAIEncounterService_RegisterLoadedSkillset_Params params;
	params.Skillset = Skillset;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIEncounterService.RegisterLoadedLoadout
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class ULoadoutAsset> Loadout                        (Parm)

void AAIEncounterService::RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterService.RegisterLoadedLoadout"));

	AAIEncounterService_RegisterLoadedLoadout_Params params;
	params.Loadout = Loadout;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIEncounterService.RegisterLoadedForm
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAthenaAIFormDataAsset> Form                           (Parm)

void AAIEncounterService::RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterService.RegisterLoadedForm"));

	AAIEncounterService_RegisterLoadedForm_Params params;
	params.Form = Form;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIEncounterService.RegisterLoadedEncounter
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAIEncounterSettings> Encounter                      (Parm)

void AAIEncounterService::RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterService.RegisterLoadedEncounter"));

	AAIEncounterService_RegisterLoadedEncounter_Params params;
	params.Encounter = Encounter;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIManagerBlueprintFunctionLibrary.SpawnItemFromAI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// APawn*                         Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        ItemDesc                       (Parm, ZeroConstructor, IsPlainOldData)
// AItemInfo*                     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AItemInfo* UAIManagerBlueprintFunctionLibrary::SpawnItemFromAI(APawn* Pawn, UClass* ItemDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerBlueprintFunctionLibrary.SpawnItemFromAI"));

	UAIManagerBlueprintFunctionLibrary_SpawnItemFromAI_Params params;
	params.Pawn = Pawn;
	params.ItemDesc = ItemDesc;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AIManagerBlueprintFunctionLibrary.GetFrameCounter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAIManagerBlueprintFunctionLibrary::GetFrameCounter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerBlueprintFunctionLibrary.GetFrameCounter"));

	UAIManagerBlueprintFunctionLibrary_GetFrameCounter_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAIWithLocalisedName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FText                          DisplayName                    (ConstParm, Parm, OutParm, ReferenceParm)

void UAIManagerBlueprintFunctionLibrary::AddNameplateToAIWithLocalisedName(AActor* Actor, const FText& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAIWithLocalisedName"));

	UAIManagerBlueprintFunctionLibrary_AddNameplateToAIWithLocalisedName_Params params;
	params.Actor = Actor;
	params.DisplayName = DisplayName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FString                        DisplayName                    (Parm, ZeroConstructor)

void UAIManagerBlueprintFunctionLibrary::AddNameplateToAI(AActor* Actor, const FString& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI"));

	UAIManagerBlueprintFunctionLibrary_AddNameplateToAI_Params params;
	params.Actor = Actor;
	params.DisplayName = DisplayName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AIManagerServiceInterface.StartDespawnAI
// (Native, Public, BlueprintCallable)
// Parameters:
// APawn*                         AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECharacterDeathType> DeathType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAIManagerServiceInterface::StartDespawnAI(APawn* AIActor, TEnumAsByte<ECharacterDeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerServiceInterface.StartDespawnAI"));

	UAIManagerServiceInterface_StartDespawnAI_Params params;
	params.AIActor = AIActor;
	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAIManagerServiceInterface::GetNumOfSpawnedPawns()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns"));

	UAIManagerServiceInterface_GetNumOfSpawnedPawns_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AIManagerService.TickService
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAIManagerService::TickService(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerService.TickService"));

	AAIManagerService_TickService_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIManagerService.StartDespawnAI
// (Native, Public, BlueprintCallable)
// Parameters:
// APawn*                         AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECharacterDeathType> DeathType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAIManagerService::StartDespawnAI(APawn* AIActor, TEnumAsByte<ECharacterDeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerService.StartDespawnAI"));

	AAIManagerService_StartDespawnAI_Params params;
	params.AIActor = AIActor;
	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxNumOfSpawnedActors        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors"));

	UDebugAIManagerServiceInterface_SetMaxNumOfSpawnedActors_Params params;
	params.InMaxNumOfSpawnedActors = InMaxNumOfSpawnedActors;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxAICostUnitsPerRegion      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion"));

	UDebugAIManagerServiceInterface_SetMaxAICostUnitsPerRegion_Params params;
	params.InMaxAICostUnitsPerRegion = InMaxAICostUnitsPerRegion;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxAICostUnitsForWorld       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld"));

	UDebugAIManagerServiceInterface_SetMaxAICostUnitsForWorld_Params params;
	params.InMaxAICostUnitsForWorld = InMaxAICostUnitsForWorld;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Ignore                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetIgnoreCharacterLimits(bool Ignore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits"));

	UDebugAIManagerServiceInterface_SetIgnoreCharacterLimits_Params params;
	params.Ignore = Ignore;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InDistanceToPlayerToRaiseSpawnPriority (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority"));

	UDebugAIManagerServiceInterface_SetDistanceToPlayerToRaiseSpawnPriority_Params params;
	params.InDistanceToPlayerToRaiseSpawnPriority = InDistanceToPlayerToRaiseSpawnPriority;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCharacterWorldDensityCheckTimer (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer"));

	UDebugAIManagerServiceInterface_SetCharacterWorldDensityCheckTimer_Params params;
	params.InCharacterWorldDensityCheckTimer = InCharacterWorldDensityCheckTimer;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCharacterRegionDensityCheckTimer (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer"));

	UDebugAIManagerServiceInterface_SetCharacterRegionDensityCheckTimer_Params params;
	params.InCharacterRegionDensityCheckTimer = InCharacterRegionDensityCheckTimer;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCloseByCharactersRadius      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetCharacterNetRelevancy(float InCloseByCharactersRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy"));

	UDebugAIManagerServiceInterface_SetCharacterNetRelevancy_Params params;
	params.InCloseByCharactersRadius = InCloseByCharactersRadius;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerServiceInterface.BlockAIAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        InExclusive                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InBlockState                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDebugAIManagerServiceInterface::BlockAIAbility(UClass* InExclusive, bool InBlockState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.BlockAIAbility"));

	UDebugAIManagerServiceInterface_BlockAIAbility_Params params;
	params.InExclusive = InExclusive;
	params.InBlockState = InBlockState;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxNumOfSpawnedActors        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors"));

	ADebugAIManagerService_SetMaxNumOfSpawnedActors_Params params;
	params.InMaxNumOfSpawnedActors = InMaxNumOfSpawnedActors;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxAICostUnitsPerRegion      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion"));

	ADebugAIManagerService_SetMaxAICostUnitsPerRegion_Params params;
	params.InMaxAICostUnitsPerRegion = InMaxAICostUnitsPerRegion;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxAICostUnitsForWorld       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld"));

	ADebugAIManagerService_SetMaxAICostUnitsForWorld_Params params;
	params.InMaxAICostUnitsForWorld = InMaxAICostUnitsForWorld;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Ignore                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetIgnoreCharacterLimits(bool Ignore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits"));

	ADebugAIManagerService_SetIgnoreCharacterLimits_Params params;
	params.Ignore = Ignore;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InDistanceToPlayerToRaiseSpawnPriority (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority"));

	ADebugAIManagerService_SetDistanceToPlayerToRaiseSpawnPriority_Params params;
	params.InDistanceToPlayerToRaiseSpawnPriority = InDistanceToPlayerToRaiseSpawnPriority;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCharacterWorldDensityCheckTimer (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer"));

	ADebugAIManagerService_SetCharacterWorldDensityCheckTimer_Params params;
	params.InCharacterWorldDensityCheckTimer = InCharacterWorldDensityCheckTimer;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCharacterRegionDensityCheckTimer (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer"));

	ADebugAIManagerService_SetCharacterRegionDensityCheckTimer_Params params;
	params.InCharacterRegionDensityCheckTimer = InCharacterRegionDensityCheckTimer;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCloseByCharactersRadius      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetCharacterNetRelevancy(float InCloseByCharactersRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy"));

	ADebugAIManagerService_SetCharacterNetRelevancy_Params params;
	params.InCloseByCharactersRadius = InCloseByCharactersRadius;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerService.BlockAIAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        InExclusive                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InBlockState                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADebugAIManagerService::BlockAIAbility(UClass* InExclusive, bool InBlockState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.BlockAIAbility"));

	ADebugAIManagerService_BlockAIAbility_Params params;
	params.InExclusive = InExclusive;
	params.InBlockState = InBlockState;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UAIPartsCategory*              AssignedPartsCategory          (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartsIndexToUse                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamColorIndex                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAIPartsRetrievalComponent::RequestNewAIParts(UAIPartsCategory* AssignedPartsCategory, int PartsIndexToUse, int TeamColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts"));

	UAIPartsRetrievalComponent_RequestNewAIParts_Params params;
	params.AssignedPartsCategory = AssignedPartsCategory;
	params.PartsIndexToUse = PartsIndexToUse;
	params.TeamColorIndex = TeamColorIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData
// (Final, Native, Private)

void UAIPartsRetrievalComponent::OnRep_ReplicatedAIPartsData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData"));

	UAIPartsRetrievalComponent_OnRep_ReplicatedAIPartsData_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIPerPlayerSpawner.PlayerDeath
// (Final, Native, Public)
// Parameters:
// AActor*                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIPerPlayerSpawner::PlayerDeath(AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIPerPlayerSpawner.PlayerDeath"));

	UAIPerPlayerSpawner_PlayerDeath_Params params;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           CheckYaw                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FRotator                       OutAimConfig                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAITargetWeaponInterface::FindAimConfigToHitTarget(const FVector& Target, bool CheckYaw, FRotator* OutAimConfig)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget"));

	UAITargetWeaponInterface_FindAimConfigToHitTarget_Params params;
	params.Target = Target;
	params.CheckYaw = CheckYaw;

	UObject::ProcessEvent(fn, &params);

	if (OutAimConfig != nullptr)
		*OutAimConfig = params.OutAimConfig;

	return params.ReturnValue;
}


// Function AthenaAI.AmbientWaterSpawnerManager.OnPlayerDeath
// (Final, Native, Private)
// Parameters:
// AActor*                        InActorDying                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientWaterSpawnerManager::OnPlayerDeath(AActor* InActorDying)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AmbientWaterSpawnerManager.OnPlayerDeath"));

	AAmbientWaterSpawnerManager_OnPlayerDeath_Params params;
	params.InActorDying = InActorDying;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.BurrowCrack.OnRep_StartFadeAndLifeSpan
// (Final, Native, Public)

void ABurrowCrack::OnRep_StartFadeAndLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.BurrowCrack.OnRep_StartFadeAndLifeSpan"));

	ABurrowCrack_OnRep_StartFadeAndLifeSpan_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.BurrowCrack.OnLifeSpanPercentLeft
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          PercentLeft                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABurrowCrack::OnLifeSpanPercentLeft(float PercentLeft)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.BurrowCrack.OnLifeSpanPercentLeft"));

	ABurrowCrack_OnLifeSpanPercentLeft_Params params;
	params.PercentLeft = PercentLeft;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InPrioritiseInteractablesBeforeEnemies (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAICharacterController::SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies"));

	AAthenaAICharacterController_SetOverridePrioritiseInteractablesBeforeEnemies_Params params;
	params.InPrioritiseInteractablesBeforeEnemies = InPrioritiseInteractablesBeforeEnemies;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UClass*                        InItemCategory                 (Parm, ZeroConstructor, IsPlainOldData)
// FName                          ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAICharacterController::SetItemSpecificNamedControllerParam(UClass* InItemCategory, const FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam"));

	AAthenaAICharacterController_SetItemSpecificNamedControllerParam_Params params;
	params.InItemCategory = InItemCategory;
	params.ParamName = ParamName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAICharacterController.SetDisableTurningForTest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InDisableTurningForTest        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAICharacterController::SetDisableTurningForTest(bool InDisableTurningForTest)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAICharacterController.SetDisableTurningForTest"));

	AAthenaAICharacterController_SetDisableTurningForTest_Params params;
	params.InDisableTurningForTest = InDisableTurningForTest;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies
// (Final, Native, Public, BlueprintCallable)

void AAthenaAICharacterController::ClearOverridePrioritiseInteractablesBeforeEnemies()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies"));

	AAthenaAICharacterController_ClearOverridePrioritiseInteractablesBeforeEnemies_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UClass*                        Sense                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaAIPerceptionComponent::IsPerceptionSenseEnabled(UClass* Sense)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled"));

	UAthenaAIPerceptionComponent_IsPerceptionSenseEnabled_Params params;
	params.Sense = Sense;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaAIPerceptionComponent::IsAnyPerceptionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled"));

	UAthenaAIPerceptionComponent_IsAnyPerceptionEnabled_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        Sense                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIPerceptionComponent::EnablePerceptionSense(UClass* Sense, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense"));

	UAthenaAIPerceptionComponent_EnablePerceptionSense_Params params;
	params.Sense = Sense;
	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIPerceptionComponent::EnableAllPerception(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception"));

	UAthenaAIPerceptionComponent_EnableAllPerception_Params params;
	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.CoralShieldVFXComponent.OnRep_CurrentCoralShieldRole
// (Final, Native, Private)

void UCoralShieldVFXComponent::OnRep_CurrentCoralShieldRole()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.CoralShieldVFXComponent.OnRep_CurrentCoralShieldRole"));

	UCoralShieldVFXComponent_OnRep_CurrentCoralShieldRole_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.SpawnContextProviderZone.RemoveContextsFromTarget
// (Final, Native, Private)
// Parameters:
// AActor*                        InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData)

void ASpawnContextProviderZone::RemoveContextsFromTarget(AActor* InActor, UPrimitiveComponent* InComponent, int InOtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.SpawnContextProviderZone.RemoveContextsFromTarget"));

	ASpawnContextProviderZone_RemoveContextsFromTarget_Params params;
	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.SpawnContextProviderZone.AddContextsToTarget
// (Final, Native, Private, HasOutParms)
// Parameters:
// AActor*                        InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InFromSweep                    (Parm, ZeroConstructor, IsPlainOldData)
// FHitResult                     InSweepResult                  (ConstParm, Parm, OutParm, ReferenceParm)

void ASpawnContextProviderZone::AddContextsToTarget(AActor* InActor, UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool InFromSweep, const FHitResult& InSweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.SpawnContextProviderZone.AddContextsToTarget"));

	ASpawnContextProviderZone_AddContextsToTarget_Params params;
	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.InFromSweep = InFromSweep;
	params.InSweepResult = InSweepResult;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
