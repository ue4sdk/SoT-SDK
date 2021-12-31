#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaAI.AthenaAIFormComponent.OnRep_FormData
struct UAthenaAIFormComponent_OnRep_FormData_Params
{
};

// Function AthenaAI.AISpawner.GetNumOfSpawnRequests
struct UAISpawner_GetNumOfSpawnRequests_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AICreatureCharacter.SetAIStrategy
struct AAICreatureCharacter_SetAIStrategy_Params
{
	UClass*                                            InStrategy;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy
struct AAICreatureCharacter_OnRep_CurrentAIStrategy_Params
{
	UClass*                                            OldAIStrategy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC
struct AAICreatureCharacter_Multicast_DespawnRPC_Params
{
};

// Function AthenaAI.AICreatureCharacter.GetAIStrategy
struct AAICreatureCharacter_GetAIStrategy_Params
{
	UClass*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup
struct UAIFaunaSpawner_SpawnFaunaGroup_Params
{
};

// Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam
struct AAthenaAIControllerBase_SetNamedControllerParam_Params
{
	FName                                              ParamName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam
struct AAthenaAIControllerBase_FindNamedWeightedRangesControllerParam_Params
{
	FName                                              ParamName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam
struct AAthenaAIControllerBase_FindNamedControllerParam_Params
{
	FName                                              ParamName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams
struct AAthenaAIControllerBase_ApplyControllerParams_Params
{
	UAthenaAIControllerParamsDataAsset*                ParamsAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAIController.StopBehaviourLogic
struct AAthenaAIController_StopBehaviourLogic_Params
{
};

// Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor
struct AAthenaAIController_SetPerceptionExpirationAgeForActor_Params
{
	AActor*                                            Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpirationAge;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            Sense;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus
struct AAthenaAIController_RegisterSpawnTriggerActorAsStimulus_Params
{
	AActor*                                            TriggerActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAIController.OnPerceptionUpdated
struct AAthenaAIController_OnPerceptionUpdated_Params
{
	TArray<AActor*>                                    ChangedPerceivedActors;                                   // (Parm, ZeroConstructor)
};

// Function AthenaAI.AthenaAIController.OnNewlySpawned
struct AAthenaAIController_OnNewlySpawned_Params
{
};

// Function AthenaAI.AthenaAIController.OnFinishDespawn
struct AAthenaAIController_OnFinishDespawn_Params
{
};

// Function AthenaAI.AthenaAIController.IsActorPerceived
struct AAthenaAIController_IsActorPerceived_Params
{
	AActor*                                            TargetActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AthenaAIController.GetTargetActor
struct AAthenaAIController_GetTargetActor_Params
{
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent
struct AAthenaAIController_GetAthenaAIPerceptionComponent_Params
{
	UAthenaAIPerceptionComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaAI.AthenaAIController.GetAllSeenActors
struct AAthenaAIController_GetAllSeenActors_Params
{
	TArray<AActor*>                                    SeenActors;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function AthenaAI.AthenaAIController.ApplyControllerParams
struct AAthenaAIController_ApplyControllerParams_Params
{
	UAthenaAIControllerParamsDataAsset*                ParamsAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaFaunaAIController.SetDormancyCheckingEnabled
struct AAthenaFaunaAIController_SetDormancyCheckingEnabled_Params
{
	bool                                               InDormancyCheckingEnabledInAutomation;                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed
struct AAthenaFaunaAIController_LeaderDestroyed_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaFaunaAIController.GetLeader
struct AAthenaFaunaAIController_GetLeader_Params
{
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AthenaFaunaAIController.GetCourage
struct AAthenaFaunaAIController_GetCourage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp
struct AAthenaFaunaAIController_GetAthenaAICharPathFollowingComp_Params
{
	UAthenaAICharacterPathFollowingComponent*          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaAI.Fauna.TestingSetWaterState
struct AFauna_TestingSetWaterState_Params
{
	TEnumAsByte<EFaunaInWaterState>                    NewInState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.Fauna.OnRep_TargetTurnAngle
struct AFauna_OnRep_TargetTurnAngle_Params
{
};

// Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim
struct AFauna_OnRep_IsPlayingStarvingAnim_Params
{
};

// Function AthenaAI.Fauna.OnRep_IsCalm
struct AFauna_OnRep_IsCalm_Params
{
};

// Function AthenaAI.Fauna.OnRep_IsAgitated
struct AFauna_OnRep_IsAgitated_Params
{
};

// Function AthenaAI.Fauna.OnRep_InWaterState
struct AFauna_OnRep_InWaterState_Params
{
};

// Function AthenaAI.Fauna.OnRep_CratedState
struct AFauna_OnRep_CratedState_Params
{
	TEnumAsByte<EFaunaCratedState>                     PreviousCratedState;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC
struct AFauna_Multicast_PlayPutInCrateEffectsRPC_Params
{
	AActor*                                            Crate;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.Fauna.Multicast_JustBeenFedRPC
struct AFauna_Multicast_JustBeenFedRPC_Params
{
	AActor*                                            FedBy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.Fauna.Multicast_HightlightLeader
struct AFauna_Multicast_HightlightLeader_Params
{
	bool                                               bIsLeader;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed
struct AFauna_GenerateNewRandomAnimationSeed_Params
{
};

// Function AthenaAI.Fauna.ActivateResponseRPC
struct AFauna_ActivateResponseRPC_Params
{
	float                                              InTargetTurnAngle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings
struct UAthenaAIDebugFunctionLibrary_SpawnAIWithSettings_Params
{
	TAssetPtr<class UClass>                            AIType;                                                   // (ConstParm, Parm)
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset;                                                 // (ConstParm, Parm)
	TAssetPtr<class ULoadoutAsset>                     Loadout;                                                  // (ConstParm, Parm)
	TAssetPtr<class UAthenaAIFormDataAsset>            Form;                                                     // (ConstParm, Parm)
	TAssetPtr<class UClass>                            AIItemSpawnComponent;                                     // (ConstParm, Parm)
	UClass*                                            ClassId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UAthenaAIAmmoDataAsset>            Ammo;                                                     // (ConstParm, Parm)
	FVector                                            Pos;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FRotator                                           Rot;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FName                                              Region;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	AActor*                                            TriggerActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              NavMeshOverride;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Delay;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI
struct UAthenaAIDebugFunctionLibrary_SpawnAI_Params
{
	UAIEncounterSettings*                              EncounterSettings;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Pos;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FRotator                                           Rot;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Delay;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MakeAIPermanentlyNetRelevant;                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            InstancedNavMesh;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FAIEncounterSpecification                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds
struct UAthenaAIDebugFunctionLibrary_SetEnvQueryManagerMaxAllowedSeconds_Params
{
	float                                              InMaxAllowedSeconds;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           QueryOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.KillAllDebugAISpawners
struct UAthenaAIDebugFunctionLibrary_KillAllDebugAISpawners_Params
{
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries
struct UAthenaAIDebugFunctionLibrary_GetEnvQueryManagerNumRunningQueries_Params
{
	UObject*                                           QueryOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings
struct UAthenaAIDebugFunctionLibrary_EnableMaximumSightSettings_Params
{
	AAthenaAIController*                               AIController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging
struct UAthenaAIDebugFunctionLibrary_EnableBehaviorTreeLogging_Params
{
	UObject*                                           WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn
struct UAthenaAIDebugFunctionLibrary_DespawnAIPawn_Params
{
	APawn*                                             Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtPosition
struct UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtPosition_Params
{
	UObject*                                           WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UAISpawner*                                        SpawnerAsset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Pos;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtActor
struct UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtActor_Params
{
	UObject*                                           WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UAISpawner*                                        SpawnerAsset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            SpawnLocationActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation
struct UAthenaAIDebugFunctionLibrary_CanProjectPointToNavigation_Params
{
	UObject*                                           WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ANavigationData*                                   NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            QueryExtent;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.Pet.SetExitTakeOffFlag
struct APet_SetExitTakeOffFlag_Params
{
	bool                                               InExitTakeOffFlag;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.Pet.OnShipDestroyed
struct APet_OnShipDestroyed_Params
{
	AActor*                                            InShip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.Pet.OnRep_RollRequest
struct APet_OnRep_RollRequest_Params
{
};

// Function AthenaAI.Pet.OnRep_ResetRollAndZOffset
struct APet_OnRep_ResetRollAndZOffset_Params
{
};

// Function AthenaAI.Pet.OnRep_PetTurnToFaceData
struct APet_OnRep_PetTurnToFaceData_Params
{
};

// Function AthenaAI.Pet.OnRep_PetOwner
struct APet_OnRep_PetOwner_Params
{
};

// Function AthenaAI.Pet.OnRep_PetIsSad
struct APet_OnRep_PetIsSad_Params
{
};

// Function AthenaAI.Pet.OnRep_PerchedInHangout
struct APet_OnRep_PerchedInHangout_Params
{
};

// Function AthenaAI.Pet.OnRep_MovementRequest
struct APet_OnRep_MovementRequest_Params
{
};

// Function AthenaAI.Pet.OnRep_InHangout
struct APet_OnRep_InHangout_Params
{
};

// Function AthenaAI.Pet.OnOwnerDestroyed
struct APet_OnOwnerDestroyed_Params
{
	AActor*                                            InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.Pet.Multicast_DitherOut
struct APet_Multicast_DitherOut_Params
{
};

// Function AthenaAI.Pet.Multicast_DitherIn
struct APet_Multicast_DitherIn_Params
{
};

// Function AthenaAI.Pet.GetFloorMeshOffsetZ
struct APet_GetFloorMeshOffsetZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AINameplateComponent.OnRep_Title
struct UAINameplateComponent_OnRep_Title_Params
{
};

// Function AthenaAI.AINameplateComponent.OnRep_DisplayNameAsString
struct UAINameplateComponent_OnRep_DisplayNameAsString_Params
{
};

// Function AthenaAI.AINameplateComponent.OnRep_DisplayName
struct UAINameplateComponent_OnRep_DisplayName_Params
{
};

// Function AthenaAI.AINameplateComponent.OnRep_DebugDisplayText
struct UAINameplateComponent_OnRep_DebugDisplayText_Params
{
};

// Function AthenaAI.AthenaSwimmingAIController.ApplyControllerParams
struct AAthenaSwimmingAIController_ApplyControllerParams_Params
{
	UAthenaAIControllerParamsDataAsset*                InControllerParametersAsset;                              // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed
struct ATinySharkExperience_TinySharkPawnDestroyed_Params
{
	AActor*                                            InDestroyedActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.TinySharkExperience.OnRep_TinySharkPawn
struct ATinySharkExperience_OnRep_TinySharkPawn_Params
{
	ASharkPawn*                                        LastTinySharkPawn;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.TinySharkExperience.GetTrackedShip
struct ATinySharkExperience_GetTrackedShip_Params
{
	AShip*                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.TinySharkExperience.GetCurrentState
struct ATinySharkExperience_GetCurrentState_Params
{
	TEnumAsByte<ETinySharkState>                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.TinySharkExperience.GetActiveState
struct ATinySharkExperience_GetActiveState_Params
{
	TEnumAsByte<ETinySharkActiveState>                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.TinySharkService.RequestTinySharkWithShip
struct ATinySharkService_RequestTinySharkWithShip_Params
{
	AShip*                                             InTrackedShip;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OverrideControllerParamIndex;                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.TinySharkService.RequestTinySharkWithLocation
struct ATinySharkService_RequestTinySharkWithLocation_Params
{
	FVector                                            SpawnLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                PartIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.TinySharkService.DismissAllTinySharks
struct ATinySharkService_DismissAllTinySharks_Params
{
};

// Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience
struct ATinySharkService_CanSpawnTinySharkExperience_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression
struct UAIEncounterServiceInterface_RegisterLoadedSkillsetProgression_Params
{
	TAssetPtr<class UAISkillsetRankProgression>        Progression;                                              // (Parm)
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset
struct UAIEncounterServiceInterface_RegisterLoadedSkillset_Params
{
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset;                                                 // (Parm)
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout
struct UAIEncounterServiceInterface_RegisterLoadedLoadout_Params
{
	TAssetPtr<class ULoadoutAsset>                     Loadout;                                                  // (Parm)
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm
struct UAIEncounterServiceInterface_RegisterLoadedForm_Params
{
	TAssetPtr<class UAthenaAIFormDataAsset>            Form;                                                     // (Parm)
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter
struct UAIEncounterServiceInterface_RegisterLoadedEncounter_Params
{
	TAssetPtr<class UAIEncounterSettings>              Encounter;                                                // (Parm)
};

// Function AthenaAI.AICombatEncounterInterface.OnVulnerabilityStateEntered
struct UAICombatEncounterInterface_OnVulnerabilityStateEntered_Params
{
};

// Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression
struct AAIEncounterService_RegisterLoadedSkillsetProgression_Params
{
	TAssetPtr<class UAISkillsetRankProgression>        Progression;                                              // (Parm)
};

// Function AthenaAI.AIEncounterService.RegisterLoadedSkillset
struct AAIEncounterService_RegisterLoadedSkillset_Params
{
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset;                                                 // (Parm)
};

// Function AthenaAI.AIEncounterService.RegisterLoadedLoadout
struct AAIEncounterService_RegisterLoadedLoadout_Params
{
	TAssetPtr<class ULoadoutAsset>                     Loadout;                                                  // (Parm)
};

// Function AthenaAI.AIEncounterService.RegisterLoadedForm
struct AAIEncounterService_RegisterLoadedForm_Params
{
	TAssetPtr<class UAthenaAIFormDataAsset>            Form;                                                     // (Parm)
};

// Function AthenaAI.AIEncounterService.RegisterLoadedEncounter
struct AAIEncounterService_RegisterLoadedEncounter_Params
{
	TAssetPtr<class UAIEncounterSettings>              Encounter;                                                // (Parm)
};

// Function AthenaAI.AIManagerBlueprintFunctionLibrary.SpawnItemFromAI
struct UAIManagerBlueprintFunctionLibrary_SpawnItemFromAI_Params
{
	APawn*                                             Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            ItemDesc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	AItemInfo*                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AIManagerBlueprintFunctionLibrary.GetFrameCounter
struct UAIManagerBlueprintFunctionLibrary_GetFrameCounter_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAIWithLocalisedName
struct UAIManagerBlueprintFunctionLibrary_AddNameplateToAIWithLocalisedName_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FText                                              DisplayName;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI
struct UAIManagerBlueprintFunctionLibrary_AddNameplateToAI_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            DisplayName;                                              // (Parm, ZeroConstructor)
};

// Function AthenaAI.AIManagerServiceInterface.StartDespawnAI
struct UAIManagerServiceInterface_StartDespawnAI_Params
{
	APawn*                                             AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns
struct UAIManagerServiceInterface_GetNumOfSpawnedPawns_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AIManagerService.TickService
struct AAIManagerService_TickService_Params
{
	float                                              DeltaSeconds;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AIManagerService.StartDespawnAI
struct AAIManagerService_StartDespawnAI_Params
{
	APawn*                                             AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors
struct UDebugAIManagerServiceInterface_SetMaxNumOfSpawnedActors_Params
{
	int                                                InMaxNumOfSpawnedActors;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion
struct UDebugAIManagerServiceInterface_SetMaxAICostUnitsPerRegion_Params
{
	int                                                InMaxAICostUnitsPerRegion;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld
struct UDebugAIManagerServiceInterface_SetMaxAICostUnitsForWorld_Params
{
	int                                                InMaxAICostUnitsForWorld;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits
struct UDebugAIManagerServiceInterface_SetIgnoreCharacterLimits_Params
{
	bool                                               Ignore;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority
struct UDebugAIManagerServiceInterface_SetDistanceToPlayerToRaiseSpawnPriority_Params
{
	float                                              InDistanceToPlayerToRaiseSpawnPriority;                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer
struct UDebugAIManagerServiceInterface_SetCharacterWorldDensityCheckTimer_Params
{
	float                                              InCharacterWorldDensityCheckTimer;                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer
struct UDebugAIManagerServiceInterface_SetCharacterRegionDensityCheckTimer_Params
{
	float                                              InCharacterRegionDensityCheckTimer;                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy
struct UDebugAIManagerServiceInterface_SetCharacterNetRelevancy_Params
{
	float                                              InCloseByCharactersRadius;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerServiceInterface.BlockAIAbility
struct UDebugAIManagerServiceInterface_BlockAIAbility_Params
{
	UClass*                                            InExclusive;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InBlockState;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors
struct ADebugAIManagerService_SetMaxNumOfSpawnedActors_Params
{
	int                                                InMaxNumOfSpawnedActors;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion
struct ADebugAIManagerService_SetMaxAICostUnitsPerRegion_Params
{
	int                                                InMaxAICostUnitsPerRegion;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld
struct ADebugAIManagerService_SetMaxAICostUnitsForWorld_Params
{
	int                                                InMaxAICostUnitsForWorld;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits
struct ADebugAIManagerService_SetIgnoreCharacterLimits_Params
{
	bool                                               Ignore;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority
struct ADebugAIManagerService_SetDistanceToPlayerToRaiseSpawnPriority_Params
{
	float                                              InDistanceToPlayerToRaiseSpawnPriority;                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer
struct ADebugAIManagerService_SetCharacterWorldDensityCheckTimer_Params
{
	float                                              InCharacterWorldDensityCheckTimer;                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer
struct ADebugAIManagerService_SetCharacterRegionDensityCheckTimer_Params
{
	float                                              InCharacterRegionDensityCheckTimer;                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy
struct ADebugAIManagerService_SetCharacterNetRelevancy_Params
{
	float                                              InCloseByCharactersRadius;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.DebugAIManagerService.BlockAIAbility
struct ADebugAIManagerService_BlockAIAbility_Params
{
	UClass*                                            InExclusive;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InBlockState;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts
struct UAIPartsRetrievalComponent_RequestNewAIParts_Params
{
	UAIPartsCategory*                                  AssignedPartsCategory;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartsIndexToUse;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamColorIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData
struct UAIPartsRetrievalComponent_OnRep_ReplicatedAIPartsData_Params
{
};

// Function AthenaAI.AIPerPlayerSpawner.PlayerDeath
struct UAIPerPlayerSpawner_PlayerDeath_Params
{
	AActor*                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget
struct UAITargetWeaponInterface_FindAimConfigToHitTarget_Params
{
	FVector                                            Target;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               CheckYaw;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FRotator                                           OutAimConfig;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AmbientWaterSpawnerManager.OnPlayerDeath
struct AAmbientWaterSpawnerManager_OnPlayerDeath_Params
{
	AActor*                                            InActorDying;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.BurrowCrack.OnRep_StartFadeAndLifeSpan
struct ABurrowCrack_OnRep_StartFadeAndLifeSpan_Params
{
};

// Function AthenaAI.BurrowCrack.OnLifeSpanPercentLeft
struct ABurrowCrack_OnLifeSpanPercentLeft_Params
{
	float                                              PercentLeft;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies
struct AAthenaAICharacterController_SetOverridePrioritiseInteractablesBeforeEnemies_Params
{
	bool                                               InPrioritiseInteractablesBeforeEnemies;                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam
struct AAthenaAICharacterController_SetItemSpecificNamedControllerParam_Params
{
	UClass*                                            InItemCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              ParamName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAICharacterController.SetDisableTurningForTest
struct AAthenaAICharacterController_SetDisableTurningForTest_Params
{
	bool                                               InDisableTurningForTest;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies
struct AAthenaAICharacterController_ClearOverridePrioritiseInteractablesBeforeEnemies_Params
{
};

// Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled
struct UAthenaAIPerceptionComponent_IsPerceptionSenseEnabled_Params
{
	UClass*                                            Sense;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled
struct UAthenaAIPerceptionComponent_IsAnyPerceptionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense
struct UAthenaAIPerceptionComponent_EnablePerceptionSense_Params
{
	UClass*                                            Sense;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception
struct UAthenaAIPerceptionComponent_EnableAllPerception_Params
{
	bool                                               Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.CoralShieldVFXComponent.OnRep_CurrentCoralShieldRole
struct UCoralShieldVFXComponent_OnRep_CurrentCoralShieldRole_Params
{
};

// Function AthenaAI.SpawnContextProviderZone.RemoveContextsFromTarget
struct ASpawnContextProviderZone_RemoveContextsFromTarget_Params
{
	AActor*                                            InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InOtherBodyIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAI.SpawnContextProviderZone.AddContextsToTarget
struct ASpawnContextProviderZone_AddContextsToTarget_Params
{
	AActor*                                            InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InOtherBodyIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InFromSweep;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FHitResult                                         InSweepResult;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
