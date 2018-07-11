// Sea of Thieves (1.1.6) SDK

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
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIFormComponent.OnRep_FormData");

	UAthenaAIFormComponent_OnRep_FormData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAISkillsetRankProgression> Progression                    (Parm)

void UAIEncounterServiceInterface::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression");

	UAIEncounterServiceInterface_RegisterLoadedSkillsetProgression_Params params;
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                       (Parm)

void UAIEncounterServiceInterface::RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset");

	UAIEncounterServiceInterface_RegisterLoadedSkillset_Params params;
	params.Skillset = Skillset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class ULoadoutAsset> Loadout                        (Parm)

void UAIEncounterServiceInterface::RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout");

	UAIEncounterServiceInterface_RegisterLoadedLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAthenaAIFormDataAsset> Form                           (Parm)

void UAIEncounterServiceInterface::RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm");

	UAIEncounterServiceInterface_RegisterLoadedForm_Params params;
	params.Form = Form;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAIEncounterSettings> Encounter                      (Parm)

void UAIEncounterServiceInterface::RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter");

	UAIEncounterServiceInterface_RegisterLoadedEncounter_Params params;
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAISkillsetRankProgression> Progression                    (Parm)

void AAIEncounterService::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression");

	AAIEncounterService_RegisterLoadedSkillsetProgression_Params params;
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterService.RegisterLoadedSkillset
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                       (Parm)

void AAIEncounterService::RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedSkillset");

	AAIEncounterService_RegisterLoadedSkillset_Params params;
	params.Skillset = Skillset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterService.RegisterLoadedLoadout
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class ULoadoutAsset> Loadout                        (Parm)

void AAIEncounterService::RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedLoadout");

	AAIEncounterService_RegisterLoadedLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterService.RegisterLoadedForm
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAthenaAIFormDataAsset> Form                           (Parm)

void AAIEncounterService::RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedForm");

	AAIEncounterService_RegisterLoadedForm_Params params;
	params.Form = Form;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterService.RegisterLoadedEncounter
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAIEncounterSettings> Encounter                      (Parm)

void AAIEncounterService::RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedEncounter");

	AAIEncounterService_RegisterLoadedEncounter_Params params;
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIManagerServiceInterface.StartDespawnAI
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   AIActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UAIManagerServiceInterface::StartDespawnAI(class APawn* AIActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerServiceInterface.StartDespawnAI");

	UAIManagerServiceInterface_StartDespawnAI_Params params;
	params.AIActor = AIActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAIManagerServiceInterface::GetNumOfSpawnedPawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns");

	UAIManagerServiceInterface_GetNumOfSpawnedPawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AISpawner.GetNumOfSpawnRequests
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAISpawner::GetNumOfSpawnRequests()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AISpawner.GetNumOfSpawnRequests");

	UAISpawner_GetNumOfSpawnRequests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AIManagerService.TickService
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAIManagerService::TickService(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerService.TickService");

	AAIManagerService_TickService_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIManagerService.StartDespawnAI
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   AIActor                        (Parm, ZeroConstructor, IsPlainOldData)

void AAIManagerService::StartDespawnAI(class APawn* AIActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerService.StartDespawnAI");

	AAIManagerService_StartDespawnAI_Params params;
	params.AIActor = AIActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIManagerService.GetRegionSpawner
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Region                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAISpawner*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAISpawner* AAIManagerService::GetRegionSpawner(const struct FName& Region, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerService.GetRegionSpawner");

	AAIManagerService_GetRegionSpawner_Params params;
	params.Region = Region;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AIManagerService.GetNumOfSpawnRequests
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AAIManagerService::GetNumOfSpawnRequests()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerService.GetNumOfSpawnRequests");

	AAIManagerService_GetNumOfSpawnRequests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxNumOfSpawnedActors        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors");

	UDebugAIManagerServiceInterface_SetMaxNumOfSpawnedActors_Params params;
	params.InMaxNumOfSpawnedActors = InMaxNumOfSpawnedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxAICostUnitsPerRegion      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion");

	UDebugAIManagerServiceInterface_SetMaxAICostUnitsPerRegion_Params params;
	params.InMaxAICostUnitsPerRegion = InMaxAICostUnitsPerRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxAICostUnitsForWorld       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld");

	UDebugAIManagerServiceInterface_SetMaxAICostUnitsForWorld_Params params;
	params.InMaxAICostUnitsForWorld = InMaxAICostUnitsForWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Ignore                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetIgnoreCharacterLimits(bool Ignore)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits");

	UDebugAIManagerServiceInterface_SetIgnoreCharacterLimits_Params params;
	params.Ignore = Ignore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InDistanceToPlayerToRaiseSpawnPriority (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority");

	UDebugAIManagerServiceInterface_SetDistanceToPlayerToRaiseSpawnPriority_Params params;
	params.InDistanceToPlayerToRaiseSpawnPriority = InDistanceToPlayerToRaiseSpawnPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCharacterWorldDensityCheckTimer (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer");

	UDebugAIManagerServiceInterface_SetCharacterWorldDensityCheckTimer_Params params;
	params.InCharacterWorldDensityCheckTimer = InCharacterWorldDensityCheckTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCharacterRegionDensityCheckTimer (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer");

	UDebugAIManagerServiceInterface_SetCharacterRegionDensityCheckTimer_Params params;
	params.InCharacterRegionDensityCheckTimer = InCharacterRegionDensityCheckTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCloseByCharactersRadius      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetCharacterNetRelevancy(float InCloseByCharactersRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy");

	UDebugAIManagerServiceInterface_SetCharacterNetRelevancy_Params params;
	params.InCloseByCharactersRadius = InCloseByCharactersRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxNumOfSpawnedActors        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors");

	ADebugAIManagerService_SetMaxNumOfSpawnedActors_Params params;
	params.InMaxNumOfSpawnedActors = InMaxNumOfSpawnedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxAICostUnitsPerRegion      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion");

	ADebugAIManagerService_SetMaxAICostUnitsPerRegion_Params params;
	params.InMaxAICostUnitsPerRegion = InMaxAICostUnitsPerRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxAICostUnitsForWorld       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld");

	ADebugAIManagerService_SetMaxAICostUnitsForWorld_Params params;
	params.InMaxAICostUnitsForWorld = InMaxAICostUnitsForWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Ignore                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetIgnoreCharacterLimits(bool Ignore)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits");

	ADebugAIManagerService_SetIgnoreCharacterLimits_Params params;
	params.Ignore = Ignore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InDistanceToPlayerToRaiseSpawnPriority (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority");

	ADebugAIManagerService_SetDistanceToPlayerToRaiseSpawnPriority_Params params;
	params.InDistanceToPlayerToRaiseSpawnPriority = InDistanceToPlayerToRaiseSpawnPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCharacterWorldDensityCheckTimer (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer");

	ADebugAIManagerService_SetCharacterWorldDensityCheckTimer_Params params;
	params.InCharacterWorldDensityCheckTimer = InCharacterWorldDensityCheckTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCharacterRegionDensityCheckTimer (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer");

	ADebugAIManagerService_SetCharacterRegionDensityCheckTimer_Params params;
	params.InCharacterRegionDensityCheckTimer = InCharacterRegionDensityCheckTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCloseByCharactersRadius      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetCharacterNetRelevancy(float InCloseByCharactersRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy");

	ADebugAIManagerService_SetCharacterNetRelevancy_Params params;
	params.InCloseByCharactersRadius = InCloseByCharactersRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup
// (Final, Native, Public, BlueprintCallable)

void UAIFaunaSpawner::SpawnFaunaGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup");

	UAIFaunaSpawner_SpawnFaunaGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIPerPlayerSpawner.PlayerDeath
// (Final, Native, Public)
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIPerPlayerSpawner::PlayerDeath(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIPerPlayerSpawner.PlayerDeath");

	UAIPerPlayerSpawner_PlayerDeath_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIPerPlayerSpawner.GetNumOfPlayers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAIPerPlayerSpawner::GetNumOfPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIPerPlayerSpawner.GetNumOfPlayers");

	UAIPerPlayerSpawner_GetNumOfPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AIWaveSpawner.SpawnWaveGroup
// (Final, Native, Public, BlueprintCallable)

void UAIWaveSpawner::SpawnWaveGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AIWaveSpawner.SpawnWaveGroup");

	UAIWaveSpawner_SpawnWaveGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutAimConfig                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAITargetWeaponInterface::FindAimConfigToHitTarget(const struct FVector& Target, struct FRotator* OutAimConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget");

	UAITargetWeaponInterface_FindAimConfigToHitTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAimConfig != nullptr)
		*OutAimConfig = params.OutAimConfig;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.StopBehaviourLogic
// (Native, Public, BlueprintCallable)

void AAthenaAIController::StopBehaviourLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.StopBehaviourLogic");

	AAthenaAIController_StopBehaviourLogic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirationAge                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Sense                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIController::SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor");

	AAthenaAIController_SetPerceptionExpirationAgeForActor_Params params;
	params.Actor = Actor;
	params.ExpirationAge = ExpirationAge;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.SetNamedControllerParam
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIController::SetNamedControllerParam(const struct FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.SetNamedControllerParam");

	AAthenaAIController_SetNamedControllerParam_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TriggerActor                   (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIController::RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus");

	AAthenaAIController_RegisterSpawnTriggerActorAsStimulus_Params params;
	params.TriggerActor = TriggerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.OnPerceptionUpdated
// (Native, Public)
// Parameters:
// TArray<class AActor*>          ChangedPerceivedActors         (Parm, ZeroConstructor)

void AAthenaAIController::OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.OnPerceptionUpdated");

	AAthenaAIController_OnPerceptionUpdated_Params params;
	params.ChangedPerceivedActors = ChangedPerceivedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.OnNewlySpawned
// (Event, Public, BlueprintEvent)

void AAthenaAIController::OnNewlySpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.OnNewlySpawned");

	AAthenaAIController_OnNewlySpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.OnFinishDespawn
// (Event, Public, BlueprintEvent)

void AAthenaAIController::OnFinishDespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.OnFinishDespawn");

	AAthenaAIController_OnFinishDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.IsActorPerceived
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAthenaAIController::IsActorPerceived(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.IsActorPerceived");

	AAthenaAIController_IsActorPerceived_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetTargetActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AAthenaAIController::GetTargetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.GetTargetActor");

	AAthenaAIController_GetTargetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAthenaAIPerceptionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAthenaAIPerceptionComponent* AAthenaAIController::GetAthenaAIPerceptionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent");

	AAthenaAIController_GetAthenaAIPerceptionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetAllSeenActors
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          SeenActors                     (Parm, OutParm, ZeroConstructor)

void AAthenaAIController::GetAllSeenActors(TArray<class AActor*>* SeenActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.GetAllSeenActors");

	AAthenaAIController_GetAllSeenActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SeenActors != nullptr)
		*SeenActors = params.SeenActors;
}


// Function AthenaAI.AthenaAIController.FindNamedWeightedRangesControllerParam
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FWeightedProbabilityRangeOfRanges ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWeightedProbabilityRangeOfRanges AAthenaAIController::FindNamedWeightedRangesControllerParam(const struct FName& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.FindNamedWeightedRangesControllerParam");

	AAthenaAIController_FindNamedWeightedRangesControllerParam_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.FindNamedControllerParam
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAthenaAIController::FindNamedControllerParam(const struct FName& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.FindNamedControllerParam");

	AAthenaAIController_FindNamedControllerParam_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.ApplyControllerParams
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAthenaAIControllerParamsDataAsset* ParamsAsset                    (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   InPawn                         (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIController::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.ApplyControllerParams");

	AAthenaAIController_ApplyControllerParams_Params params;
	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InPrioritiseInteractablesBeforeEnemies (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAICharacterController::SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies");

	AAthenaAICharacterController_SetOverridePrioritiseInteractablesBeforeEnemies_Params params;
	params.InPrioritiseInteractablesBeforeEnemies = InPrioritiseInteractablesBeforeEnemies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  InItemCategory                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAICharacterController::SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const struct FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam");

	AAthenaAICharacterController_SetItemSpecificNamedControllerParam_Params params;
	params.InItemCategory = InItemCategory;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies
// (Final, Native, Public, BlueprintCallable)

void AAthenaAICharacterController::ClearOverridePrioritiseInteractablesBeforeEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies");

	AAthenaAICharacterController_ClearOverridePrioritiseInteractablesBeforeEnemies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaFaunaAIController::LeaderDestroyed(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed");

	AAthenaFaunaAIController_LeaderDestroyed_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaFaunaAIController.GetLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AAthenaFaunaAIController::GetLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.GetLeader");

	AAthenaFaunaAIController_GetLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaFaunaAIController.GetCourage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAthenaFaunaAIController::GetCourage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.GetCourage");

	AAthenaFaunaAIController_GetCourage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAthenaAICharacterPathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAthenaAICharacterPathFollowingComponent* AAthenaFaunaAIController::GetAthenaAICharPathFollowingComp()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp");

	AAthenaFaunaAIController_GetAthenaAICharPathFollowingComp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaSwimmingAIController.TargetActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSwimmingAIController::TargetActorDestroyed(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaSwimmingAIController.TargetActorDestroyed");

	AAthenaSwimmingAIController_TargetActorDestroyed_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaSwimmingAIController.SetTargetActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSwimmingAIController::SetTargetActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaSwimmingAIController.SetTargetActor");

	AAthenaSwimmingAIController_SetTargetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TAssetPtr<class UClass>        AIType                         (ConstParm, Parm)
// TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                       (ConstParm, Parm)
// TAssetPtr<class ULoadoutAsset> Loadout                        (ConstParm, Parm)
// TAssetPtr<class UAthenaAIFormDataAsset> Form                           (ConstParm, Parm)
// class UClass*                  ClassId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Pos                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                Rot                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   Region                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TriggerActor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NavMeshOverride                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::STATIC_SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, class UClass* ClassId, const struct FVector& Pos, const struct FRotator& Rot, const struct FName& Region, class AActor* TriggerActor, const struct FName& NavMeshOverride, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings");

	UAthenaAIDebugFunctionLibrary_SpawnAIWithSettings_Params params;
	params.AIType = AIType;
	params.Skillset = Skillset;
	params.Loadout = Loadout;
	params.Form = Form;
	params.ClassId = ClassId;
	params.Pos = Pos;
	params.Rot = Rot;
	params.Region = Region;
	params.TriggerActor = TriggerActor;
	params.NavMeshOverride = NavMeshOverride;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TAssetPtr<class UClass>        AIClass                        (ConstParm, Parm)
// class UAIEncounterSettings*    EncounterSettings              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Pos                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                Rot                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           RequireNavMesh                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MakeAIPermanentlyNetRelevant   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InstancedNavMesh               (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::STATIC_SpawnAI(TAssetPtr<class UClass> AIClass, class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, bool RequireNavMesh, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI");

	UAthenaAIDebugFunctionLibrary_SpawnAI_Params params;
	params.AIClass = AIClass;
	params.EncounterSettings = EncounterSettings;
	params.Pos = Pos;
	params.Rot = Rot;
	params.RequireNavMesh = RequireNavMesh;
	params.Delay = Delay;
	params.MakeAIPermanentlyNetRelevant = MakeAIPermanentlyNetRelevant;
	params.InstancedNavMesh = InstancedNavMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InMaxAllowedSeconds            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::STATIC_SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds");

	UAthenaAIDebugFunctionLibrary_SetEnvQueryManagerMaxAllowedSeconds_Params params;
	params.InMaxAllowedSeconds = InMaxAllowedSeconds;
	params.QueryOwner = QueryOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAthenaAIDebugFunctionLibrary::STATIC_GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries");

	UAthenaAIDebugFunctionLibrary_GetEnvQueryManagerNumRunningQueries_Params params;
	params.QueryOwner = QueryOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAthenaAIController*     AIController                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAthenaAIControllerParamsDataAsset* ControllerParams               (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::STATIC_EnableMaximumSightSettings(class AAthenaAIController* AIController, class UAthenaAIControllerParamsDataAsset* ControllerParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings");

	UAthenaAIDebugFunctionLibrary_EnableMaximumSightSettings_Params params;
	params.AIController = AIController;
	params.ControllerParams = ControllerParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::STATIC_EnableBehaviorTreeLogging(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging");

	UAthenaAIDebugFunctionLibrary_EnableBehaviorTreeLogging_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::STATIC_DespawnAIPawn(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn");

	UAthenaAIDebugFunctionLibrary_DespawnAIPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAthenaAIDebugFunctionLibrary::STATIC_CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation");

	UAthenaAIDebugFunctionLibrary_CanProjectPointToNavigation_Params params;
	params.WorldContext = WorldContext;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Sense                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaAIPerceptionComponent::IsPerceptionSenseEnabled(class UClass* Sense)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled");

	UAthenaAIPerceptionComponent_IsPerceptionSenseEnabled_Params params;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaAIPerceptionComponent::IsAnyPerceptionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled");

	UAthenaAIPerceptionComponent_IsAnyPerceptionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Sense                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIPerceptionComponent::EnablePerceptionSense(class UClass* Sense, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense");

	UAthenaAIPerceptionComponent_EnablePerceptionSense_Params params;
	params.Sense = Sense;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIPerceptionComponent::EnableAllPerception(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception");

	UAthenaAIPerceptionComponent_EnableAllPerception_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  InDestroyedActor               (Parm, ZeroConstructor, IsPlainOldData)

void ATinySharkExperience::TinySharkPawnDestroyed(class AActor* InDestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed");

	ATinySharkExperience_TinySharkPawnDestroyed_Params params;
	params.InDestroyedActor = InDestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.TinySharkExperience.GetTrackedShip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShip*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShip* ATinySharkExperience::GetTrackedShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.GetTrackedShip");

	ATinySharkExperience_GetTrackedShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.TinySharkExperience.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETinySharkState>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETinySharkState> ATinySharkExperience::GetCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.GetCurrentState");

	ATinySharkExperience_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.TinySharkExperience.GetActiveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETinySharkActiveState> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETinySharkActiveState> ATinySharkExperience::GetActiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.GetActiveState");

	ATinySharkExperience_GetActiveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.TinySharkService.RequestTinySharkWithShip
// (Native, Public, BlueprintCallable)
// Parameters:
// class AShip*                   InTrackedShip                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            OverrideControllerParamIndex   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATinySharkService::RequestTinySharkWithShip(class AShip* InTrackedShip, int OverrideControllerParamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.RequestTinySharkWithShip");

	ATinySharkService_RequestTinySharkWithShip_Params params;
	params.InTrackedShip = InTrackedShip;
	params.OverrideControllerParamIndex = OverrideControllerParamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.TinySharkService.RequestTinySharkWithLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SpawnLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATinySharkService::RequestTinySharkWithLocation(const struct FVector& SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.RequestTinySharkWithLocation");

	ATinySharkService_RequestTinySharkWithLocation_Params params;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.TinySharkService.DismissAllTinySharks
// (Native, Public, BlueprintCallable)

void ATinySharkService::DismissAllTinySharks()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.DismissAllTinySharks");

	ATinySharkService_DismissAllTinySharks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATinySharkService::CanSpawnTinySharkExperience()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience");

	ATinySharkService_CanSpawnTinySharkExperience_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
