// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAI_classes.hpp"

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAISkillsetRankProgression> Progression                    (Parm)

void UAIEncounterServiceInterface::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression"));

	struct
	{
		TAssetPtr<class UAISkillsetRankProgression> Progression;
	} params;

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

	struct
	{
		TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset;
	} params;

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

	struct
	{
		TAssetPtr<class ULoadoutAsset> Loadout;
	} params;

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

	struct
	{
		TAssetPtr<class UAthenaAIFormDataAsset> Form;
	} params;

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

	struct
	{
		TAssetPtr<class UAIEncounterSettings> Encounter;
	} params;

	params.Encounter = Encounter;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAISkillsetRankProgression> Progression                    (Parm)

void AAIEncounterService::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression"));

	struct
	{
		TAssetPtr<class UAISkillsetRankProgression> Progression;
	} params;

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

	struct
	{
		TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset;
	} params;

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

	struct
	{
		TAssetPtr<class ULoadoutAsset> Loadout;
	} params;

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

	struct
	{
		TAssetPtr<class UAthenaAIFormDataAsset> Form;
	} params;

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

	struct
	{
		TAssetPtr<class UAIEncounterSettings> Encounter;
	} params;

	params.Encounter = Encounter;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  DisplayName                    (Parm, ZeroConstructor)

void UAIManagerBlueprintFunctionLibrary::AddNameplateToAI(class AActor* Actor, const class FString& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI"));

	struct
	{
		class AActor*                  Actor;
		class FString                  DisplayName;
	} params;

	params.Actor = Actor;
	params.DisplayName = DisplayName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AIManagerServiceInterface.StartDespawnAI
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECharacterDeathType> DeathType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAIManagerServiceInterface::StartDespawnAI(class APawn* AIActor, TEnumAsByte<ECharacterDeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerServiceInterface.StartDespawnAI"));

	struct
	{
		class APawn*                   AIActor;
		TEnumAsByte<ECharacterDeathType> DeathType;
	} params;

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

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AISpawner.GetNumOfSpawnRequests
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAISpawner::GetNumOfSpawnRequests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AISpawner.GetNumOfSpawnRequests"));

	struct
	{
		int                            ReturnValue;
	} params;


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

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIManagerService.StartDespawnAI
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECharacterDeathType> DeathType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAIManagerService::StartDespawnAI(class APawn* AIActor, TEnumAsByte<ECharacterDeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerService.StartDespawnAI"));

	struct
	{
		class APawn*                   AIActor;
		TEnumAsByte<ECharacterDeathType> DeathType;
	} params;

	params.AIActor = AIActor;
	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIManagerService.GetRegionSpawner
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Region                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAISpawner*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAISpawner* AAIManagerService::GetRegionSpawner(const struct FName& Region, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerService.GetRegionSpawner"));

	struct
	{
		struct FName                   Region;
		int                            Index;
		class UAISpawner*              ReturnValue;
	} params;

	params.Region = Region;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AIManagerService.GetNumOfSpawnRequests
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AAIManagerService::GetNumOfSpawnRequests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerService.GetNumOfSpawnRequests"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxNumOfSpawnedActors        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugAIManagerServiceInterface::SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors"));

	struct
	{
		int                            InMaxNumOfSpawnedActors;
	} params;

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

	struct
	{
		int                            InMaxAICostUnitsPerRegion;
	} params;

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

	struct
	{
		int                            InMaxAICostUnitsForWorld;
	} params;

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

	struct
	{
		bool                           Ignore;
	} params;

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

	struct
	{
		float                          InDistanceToPlayerToRaiseSpawnPriority;
	} params;

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

	struct
	{
		float                          InCharacterWorldDensityCheckTimer;
	} params;

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

	struct
	{
		float                          InCharacterRegionDensityCheckTimer;
	} params;

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

	struct
	{
		float                          InCloseByCharactersRadius;
	} params;

	params.InCloseByCharactersRadius = InCloseByCharactersRadius;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxNumOfSpawnedActors        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADebugAIManagerService::SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors"));

	struct
	{
		int                            InMaxNumOfSpawnedActors;
	} params;

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

	struct
	{
		int                            InMaxAICostUnitsPerRegion;
	} params;

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

	struct
	{
		int                            InMaxAICostUnitsForWorld;
	} params;

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

	struct
	{
		bool                           Ignore;
	} params;

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

	struct
	{
		float                          InDistanceToPlayerToRaiseSpawnPriority;
	} params;

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

	struct
	{
		float                          InCharacterWorldDensityCheckTimer;
	} params;

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

	struct
	{
		float                          InCharacterRegionDensityCheckTimer;
	} params;

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

	struct
	{
		float                          InCloseByCharactersRadius;
	} params;

	params.InCloseByCharactersRadius = InCloseByCharactersRadius;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIPartsCategory*        AssignedPartsCategory          (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartsIndexToUse                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamColorIndex                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAIPartsRetrievalComponent::RequestNewAIParts(class UAIPartsCategory* AssignedPartsCategory, int PartsIndexToUse, int TeamColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts"));

	struct
	{
		class UAIPartsCategory*        AssignedPartsCategory;
		int                            PartsIndexToUse;
		int                            TeamColorIndex;
	} params;

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIPerPlayerSpawner.PlayerDeath
// (Final, Native, Public)
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIPerPlayerSpawner::PlayerDeath(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIPerPlayerSpawner.PlayerDeath"));

	struct
	{
		class AActor*                  Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AIPerPlayerSpawner.GetNumOfPlayers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAIPerPlayerSpawner::GetNumOfPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIPerPlayerSpawner.GetNumOfPlayers"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           CheckYaw                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutAimConfig                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAITargetWeaponInterface::FindAimConfigToHitTarget(const struct FVector& Target, bool CheckYaw, struct FRotator* OutAimConfig)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget"));

	struct
	{
		struct FVector                 Target;
		bool                           CheckYaw;
		struct FRotator                OutAimConfig;
		bool                           ReturnValue;
	} params;

	params.Target = Target;
	params.CheckYaw = CheckYaw;

	UObject::ProcessEvent(fn, &params);

	if (OutAimConfig != nullptr)
		*OutAimConfig = params.OutAimConfig;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIControllerBase::SetNamedControllerParam(const struct FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam"));

	struct
	{
		struct FName                   ParamName;
		float                          Value;
	} params;

	params.ParamName = ParamName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FWeightedProbabilityRangeOfRanges ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWeightedProbabilityRangeOfRanges AAthenaAIControllerBase::FindNamedWeightedRangesControllerParam(const struct FName& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam"));

	struct
	{
		struct FName                   ParamName;
		struct FWeightedProbabilityRangeOfRanges ReturnValue;
	} params;

	params.ParamName = ParamName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAthenaAIControllerBase::FindNamedControllerParam(const struct FName& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam"));

	struct
	{
		struct FName                   ParamName;
		float                          ReturnValue;
	} params;

	params.ParamName = ParamName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAthenaAIControllerParamsDataAsset* ParamsAsset                    (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   InPawn                         (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIControllerBase::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams"));

	struct
	{
		class UAthenaAIControllerParamsDataAsset* ParamsAsset;
		class APawn*                   InPawn;
	} params;

	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.StopBehaviourLogic
// (Native, Public, BlueprintCallable)

void AAthenaAIController::StopBehaviourLogic()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.StopBehaviourLogic"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirationAge                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Sense                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIController::SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor"));

	struct
	{
		class AActor*                  Actor;
		float                          ExpirationAge;
		class UClass*                  Sense;
	} params;

	params.Actor = Actor;
	params.ExpirationAge = ExpirationAge;
	params.Sense = Sense;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TriggerActor                   (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIController::RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus"));

	struct
	{
		class AActor*                  TriggerActor;
	} params;

	params.TriggerActor = TriggerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.OnPerceptionUpdated
// (Native, Public)
// Parameters:
// TArray<class AActor*>          ChangedPerceivedActors         (Parm, ZeroConstructor)

void AAthenaAIController::OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.OnPerceptionUpdated"));

	struct
	{
		TArray<class AActor*>          ChangedPerceivedActors;
	} params;

	params.ChangedPerceivedActors = ChangedPerceivedActors;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.OnNewlySpawned
// (Event, Public, BlueprintEvent)

void AAthenaAIController::OnNewlySpawned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.OnNewlySpawned"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.OnFinishDespawn
// (Event, Public, BlueprintEvent)

void AAthenaAIController::OnFinishDespawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.OnFinishDespawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIController.IsActorPerceived
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAthenaAIController::IsActorPerceived(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.IsActorPerceived"));

	struct
	{
		class AActor*                  TargetActor;
		bool                           ReturnValue;
	} params;

	params.TargetActor = TargetActor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetTargetActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AAthenaAIController::GetTargetActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.GetTargetActor"));

	struct
	{
		class AActor*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAthenaAIPerceptionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAthenaAIPerceptionComponent* AAthenaAIController::GetAthenaAIPerceptionComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent"));

	struct
	{
		class UAthenaAIPerceptionComponent* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetAllSeenActors
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          SeenActors                     (Parm, OutParm, ZeroConstructor)

void AAthenaAIController::GetAllSeenActors(TArray<class AActor*>* SeenActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.GetAllSeenActors"));

	struct
	{
		TArray<class AActor*>          SeenActors;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SeenActors != nullptr)
		*SeenActors = params.SeenActors;
}


// Function AthenaAI.AthenaAIController.ApplyControllerParams
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAthenaAIControllerParamsDataAsset* ParamsAsset                    (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   InPawn                         (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIController::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.ApplyControllerParams"));

	struct
	{
		class UAthenaAIControllerParamsDataAsset* ParamsAsset;
		class APawn*                   InPawn;
	} params;

	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InPrioritiseInteractablesBeforeEnemies (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAICharacterController::SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies"));

	struct
	{
		bool                           InPrioritiseInteractablesBeforeEnemies;
	} params;

	params.InPrioritiseInteractablesBeforeEnemies = InPrioritiseInteractablesBeforeEnemies;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  InItemCategory                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAICharacterController::SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const struct FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam"));

	struct
	{
		class UClass*                  InItemCategory;
		struct FName                   ParamName;
		float                          Value;
	} params;

	params.InItemCategory = InItemCategory;
	params.ParamName = ParamName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies
// (Final, Native, Public, BlueprintCallable)

void AAthenaAICharacterController::ClearOverridePrioritiseInteractablesBeforeEnemies()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
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

void UAthenaAIDebugFunctionLibrary::SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, class UClass* ClassId, const struct FVector& Pos, const struct FRotator& Rot, const struct FName& Region, class AActor* TriggerActor, const struct FName& NavMeshOverride, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings"));

	struct
	{
		TAssetPtr<class UClass>        AIType;
		TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset;
		TAssetPtr<class ULoadoutAsset> Loadout;
		TAssetPtr<class UAthenaAIFormDataAsset> Form;
		class UClass*                  ClassId;
		struct FVector                 Pos;
		struct FRotator                Rot;
		struct FName                   Region;
		class AActor*                  TriggerActor;
		struct FName                   NavMeshOverride;
		float                          Delay;
	} params;

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

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
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

void UAthenaAIDebugFunctionLibrary::SpawnAI(TAssetPtr<class UClass> AIClass, class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, bool RequireNavMesh, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI"));

	struct
	{
		TAssetPtr<class UClass>        AIClass;
		class UAIEncounterSettings*    EncounterSettings;
		struct FVector                 Pos;
		struct FRotator                Rot;
		bool                           RequireNavMesh;
		float                          Delay;
		bool                           MakeAIPermanentlyNetRelevant;
		class AActor*                  InstancedNavMesh;
	} params;

	params.AIClass = AIClass;
	params.EncounterSettings = EncounterSettings;
	params.Pos = Pos;
	params.Rot = Rot;
	params.RequireNavMesh = RequireNavMesh;
	params.Delay = Delay;
	params.MakeAIPermanentlyNetRelevant = MakeAIPermanentlyNetRelevant;
	params.InstancedNavMesh = InstancedNavMesh;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InMaxAllowedSeconds            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds"));

	struct
	{
		float                          InMaxAllowedSeconds;
		class UObject*                 QueryOwner;
	} params;

	params.InMaxAllowedSeconds = InMaxAllowedSeconds;
	params.QueryOwner = QueryOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAthenaAIDebugFunctionLibrary::GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries"));

	struct
	{
		class UObject*                 QueryOwner;
		int                            ReturnValue;
	} params;

	params.QueryOwner = QueryOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAthenaAIController*     AIController                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAthenaAIControllerParamsDataAsset* ControllerParams               (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::EnableMaximumSightSettings(class AAthenaAIController* AIController, class UAthenaAIControllerParamsDataAsset* ControllerParams)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings"));

	struct
	{
		class AAthenaAIController*     AIController;
		class UAthenaAIControllerParamsDataAsset* ControllerParams;
	} params;

	params.AIController = AIController;
	params.ControllerParams = ControllerParams;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::EnableBehaviorTreeLogging(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging"));

	struct
	{
		class UObject*                 WorldContext;
	} params;

	params.WorldContext = WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::DespawnAIPawn(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn"));

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
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

struct FVector UAthenaAIDebugFunctionLibrary::CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation"));

	struct
	{
		class UObject*                 WorldContext;
		struct FVector                 Point;
		class ANavigationData*         NavData;
		class UClass*                  FilterClass;
		struct FVector                 QueryExtent;
		struct FVector                 ReturnValue;
	} params;

	params.WorldContext = WorldContext;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Sense                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaAIPerceptionComponent::IsPerceptionSenseEnabled(class UClass* Sense)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled"));

	struct
	{
		class UClass*                  Sense;
		bool                           ReturnValue;
	} params;

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

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Sense                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAIPerceptionComponent::EnablePerceptionSense(class UClass* Sense, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense"));

	struct
	{
		class UClass*                  Sense;
		bool                           Enable;
	} params;

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

	struct
	{
		bool                           Enable;
	} params;

	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  InDestroyedActor               (Parm, ZeroConstructor, IsPlainOldData)

void ATinySharkExperience::TinySharkPawnDestroyed(class AActor* InDestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed"));

	struct
	{
		class AActor*                  InDestroyedActor;
	} params;

	params.InDestroyedActor = InDestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.TinySharkExperience.GetTrackedShip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShip*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShip* ATinySharkExperience::GetTrackedShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkExperience.GetTrackedShip"));

	struct
	{
		class AShip*                   ReturnValue;
	} params;


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

	struct
	{
		TEnumAsByte<ETinySharkState>   ReturnValue;
	} params;


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

	struct
	{
		TEnumAsByte<ETinySharkActiveState> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.TinySharkService.RequestTinySharkWithShip
// (Native, Public, BlueprintCallable)
// Parameters:
// class AShip*                   InTrackedShip                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            OverrideControllerParamIndex   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            PartIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATinySharkService::RequestTinySharkWithShip(class AShip* InTrackedShip, int OverrideControllerParamIndex, int PartIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkService.RequestTinySharkWithShip"));

	struct
	{
		class AShip*                   InTrackedShip;
		int                            OverrideControllerParamIndex;
		int                            PartIndex;
		bool                           ReturnValue;
	} params;

	params.InTrackedShip = InTrackedShip;
	params.OverrideControllerParamIndex = OverrideControllerParamIndex;
	params.PartIndex = PartIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.TinySharkService.RequestTinySharkWithLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SpawnLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            PartIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATinySharkService::RequestTinySharkWithLocation(const struct FVector& SpawnLocation, int PartIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkService.RequestTinySharkWithLocation"));

	struct
	{
		struct FVector                 SpawnLocation;
		int                            PartIndex;
		bool                           ReturnValue;
	} params;

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATinySharkService::CanSpawnTinySharkExperience()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AICreatureCharacter.SetAIStrategy
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InStrategy                     (Parm, ZeroConstructor, IsPlainOldData)

void AAICreatureCharacter::SetAIStrategy(class UClass* InStrategy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AICreatureCharacter.SetAIStrategy"));

	struct
	{
		class UClass*                  InStrategy;
	} params;

	params.InStrategy = InStrategy;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy
// (Final, Native, Protected)
// Parameters:
// class UClass*                  OldAIStrategy                  (Parm, ZeroConstructor, IsPlainOldData)

void AAICreatureCharacter::OnRep_CurrentAIStrategy(class UClass* OldAIStrategy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy"));

	struct
	{
		class UClass*                  OldAIStrategy;
	} params;

	params.OldAIStrategy = OldAIStrategy;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AAICreatureCharacter::Multicast_DespawnRPC()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AICreatureCharacter.GetAIStrategy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* AAICreatureCharacter::GetAIStrategy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AICreatureCharacter.GetAIStrategy"));

	struct
	{
		class UClass*                  ReturnValue;
	} params;


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

	struct
	{
		TEnumAsByte<EFaunaInWaterState> NewInState;
	} params;

	params.NewInState = NewInState;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.OnRep_TargetTurnAngle
// (Final, Native, Private)

void AFauna::OnRep_TargetTurnAngle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.OnRep_TargetTurnAngle"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim
// (Final, Native, Private)

void AFauna::OnRep_IsPlayingStarvingAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.OnRep_IsCalm
// (Final, Native, Private)

void AFauna::OnRep_IsCalm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.OnRep_IsCalm"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.OnRep_IsAgitated
// (Final, Native, Private)

void AFauna::OnRep_IsAgitated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.OnRep_IsAgitated"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.OnRep_InWaterState
// (Final, Native, Private)

void AFauna::OnRep_InWaterState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.OnRep_InWaterState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.OnRep_CratedState
// (Final, Native, Private, HasOutParms)
// Parameters:
// TEnumAsByte<EFaunaCratedState> PreviousCratedState            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AFauna::OnRep_CratedState(TEnumAsByte<EFaunaCratedState> PreviousCratedState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.OnRep_CratedState"));

	struct
	{
		TEnumAsByte<EFaunaCratedState> PreviousCratedState;
	} params;

	params.PreviousCratedState = PreviousCratedState;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AActor*                  Crate                          (Parm, ZeroConstructor, IsPlainOldData)

void AFauna::Multicast_PlayPutInCrateEffectsRPC(class AActor* Crate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC"));

	struct
	{
		class AActor*                  Crate;
	} params;

	params.Crate = Crate;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.Multicast_JustBeenFedRPC
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AActor*                  FedBy                          (Parm, ZeroConstructor, IsPlainOldData)

void AFauna::Multicast_JustBeenFedRPC(class AActor* FedBy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.Multicast_JustBeenFedRPC"));

	struct
	{
		class AActor*                  FedBy;
	} params;

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

	struct
	{
		bool                           bIsLeader;
	} params;

	params.bIsLeader = bIsLeader;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed
// (Final, Native, Public, BlueprintCallable)

void AFauna::GenerateNewRandomAnimationSeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Fauna.ActivateResponseRPC
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// float                          InTargetTurnAngle              (Parm, ZeroConstructor, IsPlainOldData)

void AFauna::ActivateResponseRPC(float InTargetTurnAngle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Fauna.ActivateResponseRPC"));

	struct
	{
		float                          InTargetTurnAngle;
	} params;

	params.InTargetTurnAngle = InTargetTurnAngle;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.SetExitTakeOffFlag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InExitTakeOffFlag              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APet::SetExitTakeOffFlag(bool InExitTakeOffFlag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.SetExitTakeOffFlag"));

	struct
	{
		bool                           InExitTakeOffFlag;
	} params;

	params.InExitTakeOffFlag = InExitTakeOffFlag;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnShipDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                  InShip                         (Parm, ZeroConstructor, IsPlainOldData)

void APet::OnShipDestroyed(class AActor* InShip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnShipDestroyed"));

	struct
	{
		class AActor*                  InShip;
	} params;

	params.InShip = InShip;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnRep_MovementRequest
// (Final, Native, Private)

void APet::OnRep_MovementRequest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnRep_MovementRequest"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.OnOwnerDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData)

void APet::OnOwnerDestroyed(class AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.OnOwnerDestroyed"));

	struct
	{
		class AActor*                  InOwner;
	} params;

	params.InOwner = InOwner;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.Pet.GetFloorMeshOffsetZ
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APet::GetFloorMeshOffsetZ()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.Pet.GetFloorMeshOffsetZ"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup
// (Final, Native, Public, BlueprintCallable)

void UAIFaunaSpawner::SpawnFaunaGroup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaFaunaAIController::LeaderDestroyed(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAI.AthenaFaunaAIController.GetLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AAthenaFaunaAIController::GetLeader()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaFaunaAIController.GetLeader"));

	struct
	{
		class AActor*                  ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAthenaAICharacterPathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAthenaAICharacterPathFollowingComponent* AAthenaFaunaAIController::GetAthenaAICharPathFollowingComp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp"));

	struct
	{
		class UAthenaAICharacterPathFollowingComponent* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
