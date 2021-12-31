#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaCheat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaCheat.AthenaCheatManager.WindTriggerChange
struct UAthenaCheatManager_WindTriggerChange_Params
{
	int                                                ChangeInstantly;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.WindSetVector
struct UAthenaCheatManager_WindSetVector_Params
{
	float                                              X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.WindSetMagnitude
struct UAthenaCheatManager_WindSetMagnitude_Params
{
	float                                              Magnitude;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.WindSetDirection
struct UAthenaCheatManager_WindSetDirection_Params
{
	float                                              X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.WindReloadParams
struct UAthenaCheatManager_WindReloadParams_Params
{
};

// Function AthenaCheat.AthenaCheatManager.WindPrintDirection
struct UAthenaCheatManager_WindPrintDirection_Params
{
};

// Function AthenaCheat.AthenaCheatManager.WindEnableDebug
struct UAthenaCheatManager_WindEnableDebug_Params
{
};

// Function AthenaCheat.AthenaCheatManager.WindDisableDebug
struct UAthenaCheatManager_WindDisableDebug_Params
{
};

// Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera
struct UAthenaCheatManager_WindAlignWithCamera_Params
{
};

// Function AthenaCheat.AthenaCheatManager.Walk
struct UAthenaCheatManager_Walk_Params
{
};

// Function AthenaCheat.AthenaCheatManager.VomitWithType
struct UAthenaCheatManager_VomitWithType_Params
{
	FName                                              VomitType;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Duration;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.Vomit
struct UAthenaCheatManager_Vomit_Params
{
};

// Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew
struct UAthenaCheatManager_UnlockTradeRouteSelectionForMyCrew_Params
{
};

// Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew
struct UAthenaCheatManager_UnlockTradeRouteSelectionForCrew_Params
{
	FGuid                                              CrewId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.UnlockEntitlement
struct UAthenaCheatManager_UnlockEntitlement_Params
{
	FString                                            EntitlementId;                                            // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements
struct UAthenaCheatManager_UnlockAllEntitlements_Params
{
	int                                                TrueFalse;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements
struct UAthenaCheatManager_UnlockAllEmblemsAndAchievements_Params
{
};

// Function AthenaCheat.AthenaCheatManager.UnBreakLeg
struct UAthenaCheatManager_UnBreakLeg_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TutorialAction
struct UAthenaCheatManager_TutorialAction_Params
{
	FString                                            ActionTypeString;                                         // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TriggerTunnelMigration
struct UAthenaCheatManager_TriggerTunnelMigration_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification
struct UAthenaCheatManager_TriggerRewardNotification_Params
{
	FName                                              Identifier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction
struct UAthenaCheatManager_TriggerLandmarkReaction_Params
{
	int                                                ActionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland
struct UAthenaCheatManager_TriggerFogManagerAtNearestIsland_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage
struct UAthenaCheatManager_TriggerEmblemUnlockedMessage_Params
{
	FString                                            EmblemFriendlyName;                                       // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange
struct UAthenaCheatManager_TriggerControllerConnectionChange_Params
{
	bool                                               IsConnect;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UserId;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerId;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration
struct UAthenaCheatManager_TriggerContestMatchmakingMigration_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TriggerContestBannerUnfurl
struct UAthenaCheatManager_TriggerContestBannerUnfurl_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle
struct UAthenaCheatManager_TriggerAIShipTimerBattle_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive
struct UAthenaCheatManager_TriggerAIShipPassive_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter
struct UAthenaCheatManager_TriggerAIShipEncounter_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive
struct UAthenaCheatManager_TriggerAIShipAggressive_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleVideprinter
struct UAthenaCheatManager_ToggleVideprinter_Params
{
	FString                                            Id;                                                       // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson
struct UAthenaCheatManager_ToggleThirdPerson_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay
struct UAthenaCheatManager_ToggleSeaClueLocationQueryDebugDisplay_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug
struct UAthenaCheatManager_ToggleRetailDrawDebug_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleProjectileAimBaseAdjustmentsServer
struct UAthenaCheatManager_ToggleProjectileAimBaseAdjustmentsServer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleProjectileAimBaseAdjustmentsLocalClient
struct UAthenaCheatManager_ToggleProjectileAimBaseAdjustmentsLocalClient_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleNoClip
struct UAthenaCheatManager_ToggleNoClip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater
struct UAthenaCheatManager_ToggleNearestSuperheatedWater_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleNearestLava
struct UAthenaCheatManager_ToggleNearestLava_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks
struct UAthenaCheatManager_ToggleMigrationPointOfInterestChecks_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay
struct UAthenaCheatManager_ToggleIslandSelectionDebugDisplay_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls
struct UAthenaCheatManager_ToggleFastShipControls_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleDrowning
struct UAthenaCheatManager_ToggleDrowning_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed
struct UAthenaCheatManager_ToggleDrawShipSpeed_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds
struct UAthenaCheatManager_ToggleDrawAboveIslandBounds_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones
struct UAthenaCheatManager_ToggleDisplayCannonAISpawnerZones_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying
struct UAthenaCheatManager_ToggleDebugFlying_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera
struct UAthenaCheatManager_ToggleDeathCamera_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip
struct UAthenaCheatManager_ToggleDamageAllowedToPlayerShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug
struct UAthenaCheatManager_ToggleContestScoreDebug_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera
struct UAthenaCheatManager_ToggleCinematicCamera_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride
struct UAthenaCheatManager_ToggleAttributeOverride_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TestForceArchiveAsyncPoolCanaryCrash
struct UAthenaCheatManager_TestForceArchiveAsyncPoolCanaryCrash_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread
struct UAthenaCheatManager_TestCrashDumpCreationOnRunnableThread_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread
struct UAthenaCheatManager_TestCrashDumpCreationOnMainThread_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportToShip
struct UAthenaCheatManager_TeleportToShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart
struct UAthenaCheatManager_TeleportToPlayerStart_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation
struct UAthenaCheatManager_TeleportToNearestTreasureLocation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportToLocation
struct UAthenaCheatManager_TeleportToLocation_Params
{
	float                                              LocationX;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationZ;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TeleportToHideout
struct UAthenaCheatManager_TeleportToHideout_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation
struct UAthenaCheatManager_TeleportToDebugDestinationLocation_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	FString                                            DestinationId;                                            // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter
struct UAthenaCheatManager_TeleportToAggressiveGhostShipEncounter_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportShip
struct UAthenaCheatManager_TeleportShip_Params
{
	float                                              X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation
struct UAthenaCheatManager_TeleportPlayerToSpireLocation_Params
{
	int                                                SpireIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety
struct UAthenaCheatManager_TeleportPlayerToSafety_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn
struct UAthenaCheatManager_TeleportPlayerToOffsetAndReturn_Params
{
	float                                              OffsetX;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetY;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetZ;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken
struct UAthenaCheatManager_TeleportPlayerToKraken_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation
struct UAthenaCheatManager_TeleportPlayersCrewShipToPlayerLocation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout
struct UAthenaCheatManager_TeleportOutOfHideout_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip
struct UAthenaCheatManager_TeleportCrewToShip_Params
{
	FString                                            CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor
struct UAthenaCheatManager_TeleportCrewToSafeSpawnLocationFromRemoteActor_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	FString                                            CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation
struct UAthenaCheatManager_TeleportCrewToSafeSpawnLocation_Params
{
	FString                                            CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip
struct UAthenaCheatManager_TeleportCrewMemberToShip_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip
struct UAthenaCheatManager_TeleportAllPlayersToShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart
struct UAthenaCheatManager_TeleportAllPlayersToPlayerStart_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips
struct UAthenaCheatManager_TeleportAllCrewsToShips_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations
struct UAthenaCheatManager_TeleportAllCrewsToCrewSpawnLocations_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType
struct UAthenaCheatManager_TeleportActorToTrackedActorType_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	int                                                DestinationActorType;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor
struct UAthenaCheatManager_TeleportActorToTeleportLocationActor_Params
{
	FString                                            ControllerActorIdString;                                  // (Parm, ZeroConstructor)
	FString                                            TeleportLocationActorIdString;                            // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportActorToPlayerBuriedDigSite
struct UAthenaCheatManager_TeleportActorToPlayerBuriedDigSite_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation
struct UAthenaCheatManager_TeleportActorToLocation_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	float                                              LocationX;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationZ;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland
struct UAthenaCheatManager_TeleportActorToIsland_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	FString                                            IslandName;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite
struct UAthenaCheatManager_TeleportActorToDigSite_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	bool                                               WasBuriedByPlayer;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset
struct UAthenaCheatManager_TeleportActorToActorWithOffset_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	FString                                            DestinationActorIdString;                                 // (Parm, ZeroConstructor)
	float                                              OffsetX;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetY;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetZ;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SuperShovel
struct UAthenaCheatManager_SuperShovel_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SuperSailor
struct UAthenaCheatManager_SuperSailor_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland
struct UAthenaCheatManager_StoreWieldedItemInBootyStorageInCurrentIsland_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage
struct UAthenaCheatManager_StoreWieldedItemInBootyStorage_Params
{
	FString                                            IslandName;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.StoreShipLocation
struct UAthenaCheatManager_StoreShipLocation_Params
{
	float                                              LocationX;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationZ;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.StopShip
struct UAthenaCheatManager_StopShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StopPetHangout
struct UAthenaCheatManager_StopPetHangout_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StopLocalSequences
struct UAthenaCheatManager_StopLocalSequences_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StopAllShips
struct UAthenaCheatManager_StopAllShips_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout
struct UAthenaCheatManager_StopAllPetsHangout_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StartVoyage
struct UAthenaCheatManager_StartVoyage_Params
{
	FString                                            SourceAssetName;                                          // (Parm, ZeroConstructor)
	bool                                               Development;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer
struct UAthenaCheatManager_StartSicknessOnPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage
struct UAthenaCheatManager_StartSelectedRomeVoyage_Params
{
	FString                                            RomeVoyageString;                                         // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.StartNearestVolcano
struct UAthenaCheatManager_StartNearestVolcano_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StartNearestGeysers
struct UAthenaCheatManager_StartNearestGeysers_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake
struct UAthenaCheatManager_StartNearestEarthquake_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StartDemoSession
struct UAthenaCheatManager_StartDemoSession_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC
struct UAthenaCheatManager_StartCargoRunFromNearestNPC_Params
{
	int                                                NumOfCrates;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers
struct UAthenaCheatManager_StartAshenLordGeysers_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StartAllVolcanos
struct UAthenaCheatManager_StartAllVolcanos_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages
struct UAthenaCheatManager_StartAllCrewVoyages_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpireStreamOut
struct UAthenaCheatManager_SpireStreamOut_Params
{
	int                                                SpireIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpireStreamIn
struct UAthenaCheatManager_SpireStreamIn_Params
{
	int                                                SpireIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpinShip
struct UAthenaCheatManager_SpinShip_Params
{
	float                                              YawSpdInDegreesPerSecond;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnWatercraft
struct UAthenaCheatManager_SpawnWatercraft_Params
{
	FString                                            WatercraftClassString;                                    // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType
struct UAthenaCheatManager_SpawnTreasureChestOfType_Params
{
	FString                                            ChestTypeString;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact
struct UAthenaCheatManager_SpawnTreasureArtifact_Params
{
	FString                                            TypeString;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation
struct UAthenaCheatManager_SpawnTinySharkAtLocation_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation
struct UAthenaCheatManager_SpawnTinySharkAtCurrentLocation_Params
{
	int                                                ControllerParamIndex;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType
struct UAthenaCheatManager_SpawnStrongholdKeyFromGameEventType_Params
{
	FString                                            FortEventName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey
struct UAthenaCheatManager_SpawnStrongholdKey_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland
struct UAthenaCheatManager_SpawnSmallShipAtIsland_Params
{
	FString                                            IslandName;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnSmallShip
struct UAthenaCheatManager_SpawnSmallShip_Params
{
	float                                              SpawnLocationX;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationY;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationZ;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnYaw;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint
struct UAthenaCheatManager_SpawnSkeletonAtNearestAISpawnPoint_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnShipOfType
struct UAthenaCheatManager_SpawnShipOfType_Params
{
	float                                              SpawnLocationX;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationY;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationZ;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnYaw;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            TypeString;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable
struct UAthenaCheatManager_SpawnShipInFrontOfNearestAIInteractable_Params
{
	float                                              XProportion;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              YProportion;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            TypeString;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc
struct UAthenaCheatManager_SpawnShipFromDesc_Params
{
	FString                                            InShipDescAssetString;                                    // (Parm, ZeroConstructor)
	float                                              SpawnLocationX;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationY;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationZ;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnYaw;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland
struct UAthenaCheatManager_SpawnShipAtIsland_Params
{
	FString                                            IslandName;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnShip
struct UAthenaCheatManager_SpawnShip_Params
{
	float                                              SpawnLocationX;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationY;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationZ;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnYaw;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnRomeTreasureChestOfType
struct UAthenaCheatManager_SpawnRomeTreasureChestOfType_Params
{
	FString                                            ChestTypeString;                                          // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI
struct UAthenaCheatManager_SpawnNumberOfAI_Params
{
	FString                                            AIDescString;                                             // (Parm, ZeroConstructor)
	int                                                NumToSpawn;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom
struct UAthenaCheatManager_SpawnNightmareAggressiveGhostShipEncountersRandom_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer
struct UAthenaCheatManager_SpawnNightmareAggressiveGhostShipEncountersNearToPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType
struct UAthenaCheatManager_SpawnMultipleTreasureChestsOfType_Params
{
	FString                                            ChestTypeString;                                          // (Parm, OutParm, ZeroConstructor)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle
struct UAthenaCheatManager_SpawnMessageInABottle_Params
{
	FString                                            MessageInABottleTypeString;                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnMermaid
struct UAthenaCheatManager_SpawnMermaid_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna
struct UAthenaCheatManager_SpawnMerchantFauna_Params
{
	FString                                            FaunaTypeString;                                          // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate
struct UAthenaCheatManager_SpawnMerchantCrate_Params
{
	FString                                            MerchantCrateTypeString;                                  // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo
struct UAthenaCheatManager_SpawnMerchantCargo_Params
{
	FString                                            MerchantCargoTypeString;                                  // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles
struct UAthenaCheatManager_SpawnKrakenAtCurrentLocationWithNumTentacles_Params
{
	uint32_t                                           NumTentacles;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation
struct UAthenaCheatManager_SpawnKrakenAtCurrentLocation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor
struct UAthenaCheatManager_SpawnItemOnFloor_Params
{
	FString                                            ItemString;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnItemInHand
struct UAthenaCheatManager_SpawnItemInHand_Params
{
	FString                                            ItemString;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnGoldMound
struct UAthenaCheatManager_SpawnGoldMound_Params
{
	FString                                            GoldMoundTypeString;                                      // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy
struct UAthenaCheatManager_SpawnGeyserAtPlayerLocationWithDormancy_Params
{
	float                                              Dormancy;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation
struct UAthenaCheatManager_SpawnGeyserAtPlayerLocation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation
struct UAthenaCheatManager_SpawnGeyserAtLocation_Params
{
	float                                              LocationX;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationZ;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dormancy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition
struct UAthenaCheatManager_SpawnFogAtPlayerPosition_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation
struct UAthenaCheatManager_SpawnFishAtPlayerLocation_Params
{
	FString                                            InBaitType;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnFirework
struct UAthenaCheatManager_SpawnFirework_Params
{
	FString                                            FireworkItemString;                                       // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball
struct UAthenaCheatManager_SpawnCursedCannonball_Params
{
	FString                                            CannonballTypeString;                                     // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnContextualPrompt
struct UAthenaCheatManager_SpawnContextualPrompt_Params
{
	FString                                            PromptAccessKey;                                          // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType
struct UAthenaCheatManager_SpawnCollectorsChestOfType_Params
{
	FString                                            ChestTypeString;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate
struct UAthenaCheatManager_SpawnCargoRunCrate_Params
{
	FString                                            SpawnCargoRunCrateString;                                 // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer
struct UAthenaCheatManager_SpawnCabinDoorInFrontOfPlayer_Params
{
	float                                              Distance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnBountyReward
struct UAthenaCheatManager_SpawnBountyReward_Params
{
	FString                                            BountyTypeString;                                         // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint
struct UAthenaCheatManager_SpawnBootyPickupPoint_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup
struct UAthenaCheatManager_SpawnBarrelGroup_Params
{
	bool                                               ForcedCloseSpawn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests
struct UAthenaCheatManager_SpawnAThousandTreasureChests_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable
struct UAthenaCheatManager_SpawnAndEquipDebugWieldable_Params
{
	FString                                            DebugWieldableTypeString;                                 // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger
struct UAthenaCheatManager_SpawnAINoTrigger_Params
{
	FString                                            AIDescString;                                             // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter
struct UAthenaCheatManager_SpawnAIEncounter_Params
{
	FString                                            AIEncounterString;                                        // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint
struct UAthenaCheatManager_SpawnAIAtNearestAISpawnPoint_Params
{
	FString                                            AIDescString;                                             // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed
struct UAthenaCheatManager_SpawnAIAtLocationDelayed_Params
{
	FString                                            AIDescString;                                             // (Parm, ZeroConstructor)
	float                                              LocationX;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationZ;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed
struct UAthenaCheatManager_SpawnAIAtCurrentLocationDelayed_Params
{
	FString                                            AIDescString;                                             // (Parm, ZeroConstructor)
	float                                              Delay;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnAI
struct UAthenaCheatManager_SpawnAI_Params
{
	FString                                            AIDescString;                                             // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid
struct UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation
struct UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireFriendlyFormation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation
struct UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireEnemyFormation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire
struct UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpire_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter
struct UAthenaCheatManager_SpawnAggressiveGhostShipEncounter_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire
struct UAthenaCheatManager_SmoulderClosestShipFire_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires
struct UAthenaCheatManager_SmoulderAllShipFires_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SlowMotionOverride
struct UAthenaCheatManager_SlowMotionOverride_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding
struct UAthenaCheatManager_SkipToEndOfOnboarding_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex
struct UAthenaCheatManager_SinkShipWithKeelOverIndex_Params
{
	int                                                KeelOverConfigIndex;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SinkShipByActorId
struct UAthenaCheatManager_SinkShipByActorId_Params
{
	FString                                            ShipActorIdString;                                        // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SinkShip
struct UAthenaCheatManager_SinkShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy
struct UAthenaCheatManager_SinkClosestItemProxy_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SinkAllBarrels
struct UAthenaCheatManager_SinkAllBarrels_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SinkAllAIShips
struct UAthenaCheatManager_SinkAllAIShips_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SingleStickRight
struct UAthenaCheatManager_SingleStickRight_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SingleStickOff
struct UAthenaCheatManager_SingleStickOff_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SingleStickLeft
struct UAthenaCheatManager_SingleStickLeft_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure
struct UAthenaCheatManager_SimulateTunnelFailure_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest
struct UAthenaCheatManager_SimulatePetReactRequest_Params
{
	FString                                            Id;                                                       // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation
struct UAthenaCheatManager_SimulatePetReactCancellation_Params
{
	FString                                            Id;                                                       // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ShowTavernBanners
struct UAthenaCheatManager_ShowTavernBanners_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables
struct UAthenaCheatManager_ShowTaleDebug_WithVariables_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ShowTaleDebug
struct UAthenaCheatManager_ShowTaleDebug_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard
struct UAthenaCheatManager_ShowRandomCrewMemberGamerCard_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators
struct UAthenaCheatManager_ShowEmissaryVoteIndicators_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ShowAllWelds
struct UAthenaCheatManager_ShowAllWelds_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ShowAllRomeBeacons
struct UAthenaCheatManager_ShowAllRomeBeacons_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus
struct UAthenaCheatManager_ShowAllianceStatus_Params
{
	FString                                            CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne
struct UAthenaCheatManager_ShipwrecksSpawnOne_Params
{
	float                                              SpawnLocationX;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationY;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationZ;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom
struct UAthenaCheatManager_ShipwrecksSpawnCustom_Params
{
	float                                              SpawnLocationX;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationY;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationZ;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            WreckAsset;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom
struct UAthenaCheatManager_ShipwrecksRemoveCustom_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen
struct UAthenaCheatManager_ShipwrecksRegen_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies
struct UAthenaCheatManager_ShipUpdateMassProperies_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetWheelAngle
struct UAthenaCheatManager_SetWheelAngle_Params
{
	float                                              Angle;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut
struct UAthenaCheatManager_SetWeaponsLockedOut_Params
{
	bool                                               WeaponsLockedOut;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetWaveFlag
struct UAthenaCheatManager_SetWaveFlag_Params
{
	int                                                InFlag;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams
struct UAthenaCheatManager_SetWaterWaveParams_Params
{
	float                                              Amplitude;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaveLength;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PropagationSpeed;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2
struct UAthenaCheatManager_SetVoiceChatEndpointXAudio2_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise
struct UAthenaCheatManager_SetVoiceChatEndpointWwise_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise
struct UAthenaCheatManager_SetUnattenuatedChatMixingMethodToUseWwise_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform
struct UAthenaCheatManager_SetUnattenuatedChatMixingMethodToUsePlatform_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth
struct UAthenaCheatManager_SetTinySharkToOneHealth_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetTimeScalar
struct UAthenaCheatManager_SetTimeScalar_Params
{
	float                                              TimeScalar;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes
struct UAthenaCheatManager_SetTimeHoursAndMinutes_Params
{
	int                                                Hours;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetTime
struct UAthenaCheatManager_SetTime_Params
{
	int                                                Hours;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed
struct UAthenaCheatManager_SetTaleSelectorSeed_Params
{
	int                                                Seed;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive
struct UAthenaCheatManager_SetShroudbreakerActive_Params
{
	bool                                               bActive;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetShipYaw
struct UAthenaCheatManager_SetShipYaw_Params
{
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired
struct UAthenaCheatManager_SetShipWheelFullyRepaired_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged
struct UAthenaCheatManager_SetShipWheelFullyDamaged_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetShipRoll
struct UAthenaCheatManager_SetShipRoll_Params
{
	float                                              Roll;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged
struct UAthenaCheatManager_SetShipFullyDamaged_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired
struct UAthenaCheatManager_SetShipCapstanFullyRepaired_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged
struct UAthenaCheatManager_SetShipCapstanFullyDamaged_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend
struct UAthenaCheatManager_SetShipBuoyancyBlend_Params
{
	float                                              UnaryBlend;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions
struct UAthenaCheatManager_SetSailLoweredProportions_Params
{
	float                                              Proportion;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetSailAngles
struct UAthenaCheatManager_SetSailAngles_Params
{
	float                                              Angle;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips
struct UAthenaCheatManager_SetPreventLeakingOnAllShips_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones
struct UAthenaCheatManager_SetPreventLeakingOnAllDamageZones_Params
{
	bool                                               PreventLeaking;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI
struct UAthenaCheatManager_SetPlayerVisibleToAI_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetPlayerMaxTicks
struct UAthenaCheatManager_SetPlayerMaxTicks_Params
{
	int                                                InMaxTicksPerFrame;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI
struct UAthenaCheatManager_SetPlayerInvisibleToAI_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetPhotoMode
struct UAthenaCheatManager_SetPhotoMode_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow
struct UAthenaCheatManager_SetPetMovementTimeWindow_Params
{
	float                                              TimeWindow;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation
struct UAthenaCheatManager_SetNonCrewChatSpatialisation_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI
struct UAthenaCheatManager_SetMaxNumOfSpawnedAI_Params
{
	int                                                MaxNumOfSpawnedActors;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips
struct UAthenaCheatManager_SetMaxMovingPetsOnShips_Params
{
	int                                                MaxMovingPets;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer
struct UAthenaCheatManager_SetMaxMovingPetsOnServer_Params
{
	int                                                MaxMovingPets;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand
struct UAthenaCheatManager_SetMaxMovingPetsOnLand_Params
{
	int                                                MaxMovingPets;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired
struct UAthenaCheatManager_SetMastsFullyRepaired_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged
struct UAthenaCheatManager_SetMastsFullyDamaged_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled
struct UAthenaCheatManager_SetKnockbackDisabled_Params
{
	bool                                               Disabled;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetIsTinSession
struct UAthenaCheatManager_SetIsTinSession_Params
{
	bool                                               InIsCaptainedSession;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetIsTinOwner
struct UAthenaCheatManager_SetIsTinOwner_Params
{
	bool                                               InIsCaptain;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled
struct UAthenaCheatManager_SetIdleDisconnectEnabled_Params
{
	bool                                               Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride
struct UAthenaCheatManager_SetHealthInfoReplicateOverride_Params
{
	bool                                               bActive;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetGrogSecondary
struct UAthenaCheatManager_SetGrogSecondary_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetGodMode
struct UAthenaCheatManager_SetGodMode_Params
{
	bool                                               GodModeOn;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride
struct UAthenaCheatManager_SetGlitterbeardRequiredPlayersOverride_Params
{
	int                                                RequiredPlayerCount;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetFOV
struct UAthenaCheatManager_SetFOV_Params
{
	float                                              InNewFOV;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour
struct UAthenaCheatManager_SetFlameOfFateColour_Params
{
	int                                                InFlameOfFateType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetDebugItemSource
struct UAthenaCheatManager_SetDebugItemSource_Params
{
	FString                                            Source;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage
struct UAthenaCheatManager_SetDebugHealthStage_Params
{
	int                                                InStage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel
struct UAthenaCheatManager_SetDebugCameraUseProjectileCollisionChannel_Params
{
	bool                                               bUseProjectileChannel;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer
struct UAthenaCheatManager_SetDeathPenaltyRespawnTimer_Params
{
	float                                              InSpawnTimer;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip
struct UAthenaCheatManager_SetDamageAllowedToPlayerShip_Params
{
	bool                                               InAllowDamage;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug
struct UAthenaCheatManager_SetCutsceneResponseCoordinatorDebug_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetCurrentCulture
struct UAthenaCheatManager_SetCurrentCulture_Params
{
	FString                                            Culture;                                                  // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset
struct UAthenaCheatManager_SetCoordinatedKrakenPhaseAsset_Params
{
	int                                                AssetIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive
struct UAthenaCheatManager_SetCoordinatedKrakenCurrentPhaseAssetInactive_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive
struct UAthenaCheatManager_SetCoordinatedKrakenCurrentPhaseAssetActive_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SetCapstanPosition
struct UAthenaCheatManager_SetCapstanPosition_Params
{
	float                                              Position;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetAxisBinding
struct UAthenaCheatManager_SetAxisBinding_Params
{
	FString                                            InBindingName;                                            // (Parm, ZeroConstructor)
	FString                                            InKeyName;                                                // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance
struct UAthenaCheatManager_SetAllAIOverrideCannonShotHitChance_Params
{
	float                                              HitChance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude
struct UAthenaCheatManager_SetAITeamAttitude_Params
{
	FString                                            TeamAString;                                              // (Parm, ZeroConstructor)
	FString                                            TeamBString;                                              // (Parm, ZeroConstructor)
	FString                                            AttitudeString;                                           // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility
struct UAthenaCheatManager_SetAIExclusiveAbility_Params
{
	FString                                            AIAbilityString;                                          // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier
struct UAthenaCheatManager_SetAIAbilityTimeMultiplier_Params
{
	FString                                            AIAbilityString;                                          // (Parm, ZeroConstructor)
	float                                              IntervalCooldownMultiplier;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ActivationCooldownMultiplier;                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn
struct UAthenaCheatManager_SetAbilityAlwaysOn_Params
{
	FString                                            AIAbilityString;                                          // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent
struct UAthenaCheatManager_SendUpdateVoyageProgressEvent_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SendStatEvent
struct UAthenaCheatManager_SendStatEvent_Params
{
	uint32_t                                           StatId;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           StatValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent
struct UAthenaCheatManager_SendRewardRequestEvent_Params
{
	FString                                            CompanyNameAndRewardIdSeparatedByColon;                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent
struct UAthenaCheatManager_SendResetReaperLevelEvent_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ScuttleShip
struct UAthenaCheatManager_ScuttleShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ScreenFadeStart
struct UAthenaCheatManager_ScreenFadeStart_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd
struct UAthenaCheatManager_ScreenFadeEnd_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw
struct UAthenaCheatManager_SchedulerToggleDebugDraw_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext
struct UAthenaCheatManager_SchedulerSkipToNext_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark
struct UAthenaCheatManager_SchedulerInitTinyShark_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort
struct UAthenaCheatManager_SchedulerInitSkellyFort_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken
struct UAthenaCheatManager_SchedulerInitKraken_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault
struct UAthenaCheatManager_SchedulerInitDefault_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord
struct UAthenaCheatManager_SchedulerInitAshenLord_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive
struct UAthenaCheatManager_SchedulerInitAIShipPassive_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle
struct UAthenaCheatManager_SchedulerInitAIShipBattle_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro
struct UAthenaCheatManager_SchedulerInitAIShipAggro_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip
struct UAthenaCheatManager_SchedulerInitAggroGhostShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SchedulerAdvance
struct UAthenaCheatManager_SchedulerAdvance_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SaveMyShip
struct UAthenaCheatManager_SaveMyShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SailShip
struct UAthenaCheatManager_SailShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SailAllShips
struct UAthenaCheatManager_SailAllShips_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy
struct UAthenaCheatManager_RewindPhysicsSceneBy_Params
{
	float                                              SecondsToRewindBy;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly
struct UAthenaCheatManager_ReviveLocalPlayerInstantly_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime
struct UAthenaCheatManager_ReviveLocalPlayerAccordingToReviveTime_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ReviveAllPlayerCharactersAccordingToReviveTime
struct UAthenaCheatManager_ReviveAllPlayerCharactersAccordingToReviveTime_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland
struct UAthenaCheatManager_RetrieveItemsFromBootyStorageInCurrentIsland_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage
struct UAthenaCheatManager_RetrieveItemsFromBootyStorage_Params
{
	FString                                            IslandName;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId
struct UAthenaCheatManager_ResurfaceShipByActorId_Params
{
	FString                                            ShipActorIdString;                                        // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer
struct UAthenaCheatManager_RestoreAndRestockShipAndPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels
struct UAthenaCheatManager_RestockIslandBarrels_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables
struct UAthenaCheatManager_RestockAllReplenishables_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners
struct UAthenaCheatManager_RespawnAllIslandItemSpawners_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimerWithTime
struct UAthenaCheatManager_ResetTinySharkSpawnTimerWithTime_Params
{
	float                                              Timer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimer
struct UAthenaCheatManager_ResetTinySharkSpawnTimer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed
struct UAthenaCheatManager_ResetTaleSelectorSeed_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetStats
struct UAthenaCheatManager_ResetStats_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetNearestVault
struct UAthenaCheatManager_ResetNearestVault_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom
struct UAthenaCheatManager_ResetNearestEventRoom_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetMouseDelta
struct UAthenaCheatManager_ResetMouseDelta_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI
struct UAthenaCheatManager_ResetMaxNumOfSpawnedAI_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault
struct UAthenaCheatManager_ResetMaxMovingPetsOnServerToDefault_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree
struct UAthenaCheatManager_ResetGlitterbeardTree_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetDemoSession
struct UAthenaCheatManager_ResetDemoSession_Params
{
	bool                                               StartNewSession;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance
struct UAthenaCheatManager_ResetAllOverrideCannonShotHitChance_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms
struct UAthenaCheatManager_ResetAllMechanisms_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes
struct UAthenaCheatManager_ResetAITeamAttitudes_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities
struct UAthenaCheatManager_ResetAIExclusiveAbilities_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn
struct UAthenaCheatManager_ResetAbilityAlwaysOn_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip
struct UAthenaCheatManager_RequestSmallPassiveAIShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip
struct UAthenaCheatManager_RequestSmallAggressiveAIShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer
struct UAthenaCheatManager_RequestMysteriousNotesForPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip
struct UAthenaCheatManager_RequestLargePassiveAIShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip
struct UAthenaCheatManager_RequestLargeAggressiveAIShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner
struct UAthenaCheatManager_ReplenishShipWithDebugSpawner_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ReplenishShip
struct UAthenaCheatManager_ReplenishShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip
struct UAthenaCheatManager_ReplaceShipWithSmallShip_Params
{
	FString                                            ShipActorIdConsoleString;                                 // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater
struct UAthenaCheatManager_RepairShipAndClearInternalWater_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips
struct UAthenaCheatManager_RepairAndClearInternalWaterOnAllShips_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RenameTreasure
struct UAthenaCheatManager_RenameTreasure_Params
{
	FString                                            InVendorName;                                             // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers
struct UAthenaCheatManager_RemovePetsFromAllPlayers_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer
struct UAthenaCheatManager_RemovePetFromPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging
struct UAthenaCheatManager_RemoveLostShipmentsDebugging_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot
struct UAthenaCheatManager_RemoveItemInSlot_Params
{
	int                                                SlotIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners
struct UAthenaCheatManager_RemoveDebugPetSpawners_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage
struct UAthenaCheatManager_RemoveDebugHealthStage_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RemoveAllFog
struct UAthenaCheatManager_RemoveAllFog_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext
struct UAthenaCheatManager_RemoveAISpawnContext_Params
{
	FString                                            ContextName;                                              // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed
struct UAthenaCheatManager_RebuildPirateFromSeed_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag
struct UAthenaCheatManager_ReallyScrambleMyGamertag_Params
{
};

// Function AthenaCheat.AthenaCheatManager.PushShip
struct UAthenaCheatManager_PushShip_Params
{
	float                                              FwdSpdInMetersPerSecond;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress
struct UAthenaCheatManager_PullLatestEmblemProgress_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState
struct UAthenaCheatManager_ProceedToNextContestState_Params
{
};

// Function AthenaCheat.AthenaCheatManager.PrintTime
struct UAthenaCheatManager_PrintTime_Params
{
};

// Function AthenaCheat.AthenaCheatManager.PrintNPCs
struct UAthenaCheatManager_PrintNPCs_Params
{
};

// Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors
struct UAthenaCheatManager_PrintAllNetworkActors_Params
{
};

// Function AthenaCheat.AthenaCheatManager.PrintAISpawners
struct UAthenaCheatManager_PrintAISpawners_Params
{
};

// Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts
struct UAthenaCheatManager_PrintAISpawnContexts_Params
{
};

// Function AthenaCheat.AthenaCheatManager.PlayWorldSequence
struct UAthenaCheatManager_PlayWorldSequence_Params
{
	FString                                            InReference;                                              // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.PlayLocalSequences
struct UAthenaCheatManager_PlayLocalSequences_Params
{
};

// Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride
struct UAthenaCheatManager_PlayerAnimationOverride_Params
{
	FName                                              Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue
struct UAthenaCheatManager_OverrideShipPartFromCatalogue_Params
{
	FString                                            InShipActorIdConsoleString;                               // (Parm, ZeroConstructor)
	int                                                InCataloguePartIndex;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCataloguePartCustomisationIndex;                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor
struct UAthenaCheatManager_OpenSkeletonFortDoor_Params
{
};

// Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer
struct UAthenaCheatManager_MoveStormToPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.MoveStormToLocation
struct UAthenaCheatManager_MoveStormToLocation_Params
{
	float                                              LocationX;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.MoveStormToIsland
struct UAthenaCheatManager_MoveStormToIsland_Params
{
	FString                                            IslandNameString;                                         // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest
struct UAthenaCheatManager_MessageBoxOnGraphicsThreadTest_Params
{
};

// Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead
struct UAthenaCheatManager_MakeSharksBrainDead_Params
{
};

// Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner
struct UAthenaCheatManager_MakeDebugPetSpawner_Params
{
};

// Function AthenaCheat.AthenaCheatManager.LogShipHierarchy
struct UAthenaCheatManager_LogShipHierarchy_Params
{
};

// Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy
struct UAthenaCheatManager_LogServerShipHierarchy_Params
{
};

// Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes
struct UAthenaCheatManager_LogAITeamAttitudes_Params
{
};

// Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew
struct UAthenaCheatManager_LockTradeRouteSelectionToSpecificRouteForMyCrew_Params
{
	FString                                            RouteReferencePath;                                       // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew
struct UAthenaCheatManager_LockTradeRouteSelectionToSpecificRouteForCrew_Params
{
	FGuid                                              CrewId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FString                                            RouteReferencePath;                                       // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg
struct UAthenaCheatManager_LocallyUnBreakLeg_Params
{
};

// Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial
struct UAthenaCheatManager_LocallyDisableTutorial_Params
{
};

// Function AthenaCheat.AthenaCheatManager.LoadMyShip
struct UAthenaCheatManager_LoadMyShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.LightLocalBraziers
struct UAthenaCheatManager_LightLocalBraziers_Params
{
};

// Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius
struct UAthenaCheatManager_LightBraziersInRadius_Params
{
	float                                              Radius;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.LeaveAlliance
struct UAthenaCheatManager_LeaveAlliance_Params
{
	FString                                            CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.LaunchPlayer
struct UAthenaCheatManager_LaunchPlayer_Params
{
	float                                              Velocity;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth
struct UAthenaCheatManager_KrakenSetTentaclesToOneHealth_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer
struct UAthenaCheatManager_KrakenAnimatedTentacleThrowPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage
struct UAthenaCheatManager_KrakenAnimatedTentacleTakeDamage_Params
{
	float                                              Damage;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer
struct UAthenaCheatManager_KrakenAnimatedTentacleSwallowPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer
struct UAthenaCheatManager_KrakenAnimatedTentacleSuckPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer
struct UAthenaCheatManager_KrakenAnimatedTentaclePowerSlamPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill
struct UAthenaCheatManager_KrakenAnimatedTentacleKill_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer
struct UAthenaCheatManager_KrakenAnimatedTentacleIngestPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer
struct UAthenaCheatManager_KrakenAnimatedTentacleDropPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn
struct UAthenaCheatManager_KrakenAnimatedTentacleDespawn_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat
struct UAthenaCheatManager_KrakenAnimatedTentacleDefeat_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState
struct UAthenaCheatManager_KrakenAnimatedTentacleChangePlayerHoldState_Params
{
	FString                                            HoldState;                                                // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.KindleClosestShip
struct UAthenaCheatManager_KindleClosestShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KindleAllShipFires
struct UAthenaCheatManager_KindleAllShipFires_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KillPlayer
struct UAthenaCheatManager_KillPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KillCrew
struct UAthenaCheatManager_KillCrew_Params
{
	FString                                            CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.KillAllSkeletons
struct UAthenaCheatManager_KillAllSkeletons_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KillAllPlayers
struct UAthenaCheatManager_KillAllPlayers_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers
struct UAthenaCheatManager_KillAllOtherPlayers_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters
struct UAthenaCheatManager_KillAllOtherPlayerCharacters_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners
struct UAthenaCheatManager_KillAllDebugAISpawners_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KillAllCrews
struct UAthenaCheatManager_KillAllCrews_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KillAllAI
struct UAthenaCheatManager_KillAllAI_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips
struct UAthenaCheatManager_KillAllAggressiveGhostShips_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters
struct UAthenaCheatManager_KillAllAggressiveGhostShipEncounters_Params
{
};

// Function AthenaCheat.AthenaCheatManager.JoinAlliance
struct UAthenaCheatManager_JoinAlliance_Params
{
	FString                                            OfferingCrew;                                             // (Parm, ZeroConstructor)
	FString                                            AcceptingCrew;                                            // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.IPGOverride
struct UAthenaCheatManager_IPGOverride_Params
{
	FName                                              BodyShape;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing
struct UAthenaCheatManager_IPGLoadWithoutClothing_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	FString                                            path;                                                     // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing
struct UAthenaCheatManager_IPGLoadWithClothing_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	FString                                            path;                                                     // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.IPGLoad
struct UAthenaCheatManager_IPGLoad_Params
{
	FString                                            path;                                                     // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.InvincibleEverything
struct UAthenaCheatManager_InvincibleEverything_Params
{
};

// Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer
struct UAthenaCheatManager_InterruptSicknessOnPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo
struct UAthenaCheatManager_InfiniteGunAmmo_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.IncrementTime
struct UAthenaCheatManager_IncrementTime_Params
{
	int                                                Hours;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage
struct UAthenaCheatManager_IncrementDebugHealthStage_Params
{
};

// Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount
struct UAthenaCheatManager_IncreaseEmissaryCount_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation
struct UAthenaCheatManager_IgniteShipAtPlayerLocation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer
struct UAthenaCheatManager_IgniteLocalPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.IgniteClosestShip
struct UAthenaCheatManager_IgniteClosestShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires
struct UAthenaCheatManager_IgniteAllShipFires_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsToggleOnScreenStatus
struct UAthenaCheatManager_HitRegSnapshotsToggleOnScreenStatus_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplaySnapshots
struct UAthenaCheatManager_HitRegSnapshotsSetDisplaySnapshots_Params
{
	bool                                               ShowSnapshots;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AffectAllSnapshots;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LocalClientOnly;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayServerData
struct UAthenaCheatManager_HitRegSnapshotsSetDisplayServerData_Params
{
	bool                                               ShowServerData;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AffectAllSnapshots;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LocalClientOnly;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayDetailedExplanations
struct UAthenaCheatManager_HitRegSnapshotsSetDisplayDetailedExplanations_Params
{
	bool                                               ShowExplanations;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AffectAllSnapshots;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LocalClientOnly;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayAttackingClientData
struct UAthenaCheatManager_HitRegSnapshotsSetDisplayAttackingClientData_Params
{
	bool                                               ShowClientData;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AffectAllSnapshots;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LocalClientOnly;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToComponents
struct UAthenaCheatManager_HitRegSnapshotsSetDisagreementModeToComponents_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToAllShots
struct UAthenaCheatManager_HitRegSnapshotsSetDisagreementModeToAllShots_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToActors
struct UAthenaCheatManager_HitRegSnapshotsSetDisagreementModeToActors_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsResetVisibilitySettingsToDefault
struct UAthenaCheatManager_HitRegSnapshotsResetVisibilitySettingsToDefault_Params
{
	bool                                               AffectAllSnapshots;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LocalClientOnly;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsEnableSystem
struct UAthenaCheatManager_HitRegSnapshotsEnableSystem_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDisableSystem
struct UAthenaCheatManager_HitRegSnapshotsDisableSystem_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDestroyAll
struct UAthenaCheatManager_HitRegSnapshotsDestroyAll_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HideTaleDebug
struct UAthenaCheatManager_HideTaleDebug_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators
struct UAthenaCheatManager_HideEmissaryVoteIndicators_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HideAllRomeBeacons
struct UAthenaCheatManager_HideAllRomeBeacons_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HealthSet
struct UAthenaCheatManager_HealthSet_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.HealthReset
struct UAthenaCheatManager_HealthReset_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty
struct UAthenaCheatManager_HealthRegenResetToEmpty_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HealthRegenAdd
struct UAthenaCheatManager_HealthRegenAdd_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason
struct UAthenaCheatManager_HealthContinuousStopWithTestReason_Params
{
};

// Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason
struct UAthenaCheatManager_HealthContinuousStopWithReason_Params
{
	FString                                            Reason;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason
struct UAthenaCheatManager_HealthContinuousStartWithTestReason_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason
struct UAthenaCheatManager_HealthContinuousStartWithReason_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            Reason;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.HealthAdjust
struct UAthenaCheatManager_HealthAdjust_Params
{
	float                                              Amount;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.God
struct UAthenaCheatManager_God_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger
struct UAthenaCheatManager_ForceStopAllPetsDanger_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation
struct UAthenaCheatManager_ForceStartAllPetsDangerWithChangingThreatLocation_Params
{
	FString                                            ResponseType;                                             // (Parm, ZeroConstructor)
	float                                              UpdateThreatLocationTime;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger
struct UAthenaCheatManager_ForceStartAllPetsDanger_Params
{
	FString                                            ResponseType;                                             // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes
struct UAthenaCheatManager_ForceSkipTallTaleSteps_WaitAndCutscenes_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices
struct UAthenaCheatManager_ForceRequestCampaignsFromServices_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ForcePetHangout
struct UAthenaCheatManager_ForcePetHangout_Params
{
	FName                                              HangoutName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PositionIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ForceOpenShop
struct UAthenaCheatManager_ForceOpenShop_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove
struct UAthenaCheatManager_ForceNPCOnSurfaceToMove_Params
{
	bool                                               FastMove;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KeepCurrentLocation;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation
struct UAthenaCheatManager_ForceNPCOnSurfaceLocation_Params
{
	int                                                LoctationIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LoctationPointIndex;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger
struct UAthenaCheatManager_ForceNPCOnShipIsCurrentlyInDanger_Params
{
	bool                                               IsCurrentlyInDanger;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ForceMigrationServiceHeartBeat
struct UAthenaCheatManager_ForceMigrationServiceHeartBeat_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ForceGarbageCollect
struct UAthenaCheatManager_ForceGarbageCollect_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription
struct UAthenaCheatManager_ForceEmoteWithDescription_Params
{
	FName                                              EmoteIdentifier;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FString                                            DisplayName;                                              // (Parm, ZeroConstructor)
	FString                                            AudioDescription;                                         // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ForceEmote
struct UAthenaCheatManager_ForceEmote_Params
{
	FName                                              EmoteIdentifier;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ForceCloseShop
struct UAthenaCheatManager_ForceCloseShop_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation
struct UAthenaCheatManager_ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation_Params
{
	FString                                            ResponseType;                                             // (Parm, ZeroConstructor)
	float                                              UpdateThreatLocationTime;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent
struct UAthenaCheatManager_ForceAllPetsDangerWithNoiseEvent_Params
{
	FString                                            ResponseType;                                             // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation
struct UAthenaCheatManager_ForceAggressiveGhostShipStartSinkingAnimation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation
struct UAthenaCheatManager_ForceAggressiveGhostShipStartDisappearAnimation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation
struct UAthenaCheatManager_ForceAggressiveGhostShipStartAppearAnimation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump
struct UAthenaCheatManager_ForceAggressiveGhostShipPortalJump_Params
{
};

// Function AthenaCheat.AthenaCheatManager.Fly
struct UAthenaCheatManager_Fly_Params
{
};

// Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex
struct UAthenaCheatManager_FloodShipWithKeelOverIndex_Params
{
	float                                              NormalisedWaterAmount;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                KeelOverConfigIndex;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.FloodShip
struct UAthenaCheatManager_FloodShip_Params
{
	float                                              NormalisedWaterAmount;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage
struct UAthenaCheatManager_FireSeasonRewardEarnedMessage_Params
{
	int                                                InNumSeason;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InRewardsLevel;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InMultipleRewards;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage
struct UAthenaCheatManager_FireSeasonGoalProgressionMessage_Params
{
	int                                                InNumSeason;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InPreviousProgress;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCurrentProgress;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCompletionTreshold;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InGoalType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            InGoalCategory;                                           // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage
struct UAthenaCheatManager_FireSeasonGoalCompletionMessage_Params
{
	int                                                InNumSeason;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InGoalType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            InGoalCategory;                                           // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage
struct UAthenaCheatManager_FireLevelCompletionMessage_Params
{
	int                                                InNumSeason;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InLevel;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InTimeSpentInLevel;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InTier;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InTimeSpentInTier;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InTierCompleted;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InSeasonCompleted;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat
struct UAthenaCheatManager_FireCreatorCrewSignedUpStat_Params
{
};

// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat
struct UAthenaCheatManager_FireCreatorCrewMinutesViewedStat_Params
{
	int                                                InNumMinutes;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat
struct UAthenaCheatManager_FireCreatorCrewMinutesStreamedStat_Params
{
	int                                                InNumMinutes;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat
struct UAthenaCheatManager_FireCreatorCrewCurrentViewersStat_Params
{
	int                                                InNumViewers;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.FindText
struct UAthenaCheatManager_FindText_Params
{
	FString                                            Namespace;                                                // (Parm, ZeroConstructor)
	FString                                            Key;                                                      // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests
struct UAthenaCheatManager_FakeMigrateBountyQuests_Params
{
};

// Function AthenaCheat.AthenaCheatManager.EquipPirateTitle
struct UAthenaCheatManager_EquipPirateTitle_Params
{
	FString                                            PirateTitleType;                                          // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout
struct UAthenaCheatManager_EquipCompassInLoadout_Params
{
};

// Function AthenaCheat.AthenaCheatManager.EndDemoSession
struct UAthenaCheatManager_EndDemoSession_Params
{
};

// Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals
struct UAthenaCheatManager_EnableVoiceChatMeteringForOutgoingSignals_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals
struct UAthenaCheatManager_EnableVoiceChatMeteringForIncomingSignals_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.EnableStormEffects
struct UAthenaCheatManager_EnableStormEffects_Params
{
	unsigned char                                      LockReason;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay
struct UAthenaCheatManager_EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay_Params
{
	int                                                TrueFalse;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.EnableNTP
struct UAthenaCheatManager_EnableNTP_Params
{
	bool                                               Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning
struct UAthenaCheatManager_EnableMermaidSpawning_Params
{
	int                                                Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion
struct UAthenaCheatManager_EnableMermaidDeletion_Params
{
	int                                                Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing
struct UAthenaCheatManager_EnableHeadphoneMixing_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning
struct UAthenaCheatManager_EnableEmergentSirenSpawning_Params
{
};

// Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning
struct UAthenaCheatManager_EnableEmergentSharkSpawning_Params
{
};

// Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging
struct UAthenaCheatManager_EnableConsoleLogging_Params
{
};

// Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera
struct UAthenaCheatManager_EnableCinematicCamera_Params
{
};

// Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids
struct UAthenaCheatManager_EnableBeaconOnAllMermaids_Params
{
	int                                                Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning
struct UAthenaCheatManager_EnableAllEmergentWaterSpawning_Params
{
};

// Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour
struct UAthenaCheatManager_EnableAIBehaviour_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DrawVideprinter
struct UAthenaCheatManager_DrawVideprinter_Params
{
	FString                                            Id;                                                       // (Parm, ZeroConstructor)
	bool                                               Active;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug
struct UAthenaCheatManager_DrawTreasureDebug_Params
{
	int                                                Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug
struct UAthenaCheatManager_DrawTemporaryLandmarkDebug_Params
{
	bool                                               Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged
struct UAthenaCheatManager_DrawNearbyAISpawnPointsRanged_Params
{
	float                                              Range;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints
struct UAthenaCheatManager_DrawNearbyAISpawnPoints_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DownPlayer
struct UAthenaCheatManager_DownPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DownAllPlayers
struct UAthenaCheatManager_DownAllPlayers_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers
struct UAthenaCheatManager_DownAllOtherPlayers_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters
struct UAthenaCheatManager_DownAllOtherPlayerCharacters_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DouseClosestShip
struct UAthenaCheatManager_DouseClosestShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DouseAllShipFires
struct UAthenaCheatManager_DouseAllShipFires_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DiveShipByActorId
struct UAthenaCheatManager_DiveShipByActorId_Params
{
	FString                                            ShipActorIdString;                                        // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug
struct UAthenaCheatManager_DisplaySpireLocationsDebug_Params
{
	int                                                Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress
struct UAthenaCheatManager_DisplaySingleEmblemProgress_Params
{
	FString                                            StatName;                                                 // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults
struct UAthenaCheatManager_DisplayServersideHitsAtPlayerPosWithDefaults_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos
struct UAthenaCheatManager_DisplayServersideHitsAtPlayerPos_Params
{
	uint32_t                                           NumSamplesPerDimension;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceBetweenSamples;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TestHeight;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DisplayServerFPS
struct UAthenaCheatManager_DisplayServerFPS_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland
struct UAthenaCheatManager_DisplayNonVagueNonUniqueLandmarksForIsland_Params
{
	bool                                               Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport
struct UAthenaCheatManager_DisplayLoadingScreenTeleport_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot
struct UAthenaCheatManager_DisplayLoadingScreenBoot_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenArena
struct UAthenaCheatManager_DisplayLoadingScreenArena_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure
struct UAthenaCheatManager_DisplayLoadingScreenAdventure_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer
struct UAthenaCheatManager_DisplayLandmarkValidTreasureLocationsForPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions
struct UAthenaCheatManager_DisplayLandmarkRegions_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames
struct UAthenaCheatManager_DisplayLandmarkNames_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug
struct UAthenaCheatManager_DisplayFallDamageDebug_Params
{
	int                                                Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness
struct UAthenaCheatManager_DisplayDrunkenness_Params
{
	bool                                               Flag;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DismissProjectileAimAdjustmentsMessages
struct UAthenaCheatManager_DismissProjectileAimAdjustmentsMessages_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints
struct UAthenaCheatManager_DismissAllPickupPoints_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisableStormEffects
struct UAthenaCheatManager_DisableStormEffects_Params
{
	unsigned char                                      LockReason;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning
struct UAthenaCheatManager_DisableEmergentSirenSpawning_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning
struct UAthenaCheatManager_DisableEmergentSharkSpawning_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging
struct UAthenaCheatManager_DisableConsoleLogging_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera
struct UAthenaCheatManager_DisableCinematicCamera_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning
struct UAthenaCheatManager_DisableAllEmergentWaterSpawning_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour
struct UAthenaCheatManager_DisableAIBehaviour_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisableAIAbilities
struct UAthenaCheatManager_DisableAIAbilities_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DioramaStartNearest
struct UAthenaCheatManager_DioramaStartNearest_Params
{
	FString                                            Spawner;                                                  // (Parm, ZeroConstructor)
	FString                                            DioramaDesc;                                              // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.DioramaStart
struct UAthenaCheatManager_DioramaStart_Params
{
	FString                                            ActorName;                                                // (Parm, ZeroConstructor)
	FString                                            Spawner;                                                  // (Parm, ZeroConstructor)
	FString                                            DioramaDesc;                                              // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug
struct UAthenaCheatManager_DioramaKillAllDebug_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DestroyShip
struct UAthenaCheatManager_DestroyShip_Params
{
	FString                                            ShipActorIdConsoleString;                                 // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker
struct UAthenaCheatManager_DestroyNearestDebugReapersChestMarker_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DestroyMyShip
struct UAthenaCheatManager_DestroyMyShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DestroyKraken
struct UAthenaCheatManager_DestroyKraken_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests
struct UAthenaCheatManager_DestroyAllTreasureChests_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks
struct UAthenaCheatManager_DestroyAllTinySharks_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues
struct UAthenaCheatManager_DestroyAllSirenStatues_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DestroyAllShips
struct UAthenaCheatManager_DestroyAllShips_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI
struct UAthenaCheatManager_DespawnNumberOfAI_Params
{
	FString                                            AITypeString;                                             // (Parm, ZeroConstructor)
	int                                                NumToDespawn;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DespawnFirstAI
struct UAthenaCheatManager_DespawnFirstAI_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips
struct UAthenaCheatManager_DespawnAllAggressiveGhostShips_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DespawnAI
struct UAthenaCheatManager_DespawnAI_Params
{
	FString                                            AITypeString;                                             // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory
struct UAthenaCheatManager_DeleteVoyageHistory_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids
struct UAthenaCheatManager_DeleteAllMermaids_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage
struct UAthenaCheatManager_DecrementDebugHealthStage_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DebugIslandDelta
struct UAthenaCheatManager_DebugIslandDelta_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort
struct UAthenaCheatManager_DeactivateSkellyFort_Params
{
	FString                                            FortName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany
struct UAthenaCheatManager_DeactivateEmissaryFlagCompany_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect
struct UAthenaCheatManager_DeactivateDeathEffect_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor
struct UAthenaCheatManager_DamageShipFromRemoteActor_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	float                                              Strength;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraLocationX;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraLocationY;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraLocationZ;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraForwardDirectionX;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraForwardDirectionY;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraForwardDirectionZ;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DamageShip
struct UAthenaCheatManager_DamageShip_Params
{
	float                                              Strength;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor
struct UAthenaCheatManager_DamagePlayerFromRemoteActor_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	float                                              Strength;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraLocationX;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraLocationY;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraLocationZ;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraForwardDirectionX;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraForwardDirectionY;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraForwardDirectionZ;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DamagePlayer
struct UAthenaCheatManager_DamagePlayer_Params
{
	float                                              Strength;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.CureAllAilings
struct UAthenaCheatManager_CureAllAilings_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation
struct UAthenaCheatManager_CreateDebugReapersChestMarkerAtPlayerLocation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt
struct UAthenaCheatManager_CreateDebugAISpawnerAt_Params
{
	FString                                            SpawnerAssetName;                                         // (Parm, ZeroConstructor)
	FString                                            LocationActorName;                                        // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner
struct UAthenaCheatManager_CreateDebugAISpawner_Params
{
	FString                                            SpawnerAssetName;                                         // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI
struct UAthenaCheatManager_CoordinatedKrakenToggleAI_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction
struct UAthenaCheatManager_CoordinatedKrakenRequestAction_Params
{
	FString                                            ActionName;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging
struct UAthenaCheatManager_CoordinatedKrakenEnableDebugging_Params
{
	int                                                Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw
struct UAthenaCheatManager_ContextualPromptCountersToggleDebugDraw_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CompleteVoyage
struct UAthenaCheatManager_CompleteVoyage_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults
struct UAthenaCheatManager_CompleteAllActivePuzzleVaults_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests
struct UAthenaCheatManager_CompleteActiveQuests_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor
struct UAthenaCheatManager_CloseSkeletonFortDoor_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen
struct UAthenaCheatManager_CloseLoadingScreen_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ClearWorldSequences
struct UAthenaCheatManager_ClearWorldSequences_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters
struct UAthenaCheatManager_ClearVoiceChatMeters_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride
struct UAthenaCheatManager_ClearSlowMotionOverride_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary
struct UAthenaCheatManager_ClearGrogSecondary_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride
struct UAthenaCheatManager_ClearGlitterbeardRequiredPlayersOverride_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation
struct UAthenaCheatManager_ClearDebugStormLocation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ClearAxisBinding
struct UAthenaCheatManager_ClearAxisBinding_Params
{
	FString                                            InBindingName;                                            // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers
struct UAthenaCheatManager_ClearAIAbilityTimeMultipliers_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos
struct UAthenaCheatManager_CheckLandmarkValidTreasureLocationsAtPlayerPos_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation
struct UAthenaCheatManager_CheckLandmarkRelativeToIslandCalculation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CapsizeShip
struct UAthenaCheatManager_CapsizeShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CancelVoyage
struct UAthenaCheatManager_CancelVoyage_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CancelTale
struct UAthenaCheatManager_CancelTale_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages
struct UAthenaCheatManager_CancelEmergentVoyages_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages
struct UAthenaCheatManager_CancelAllCrewVoyages_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters
struct UAthenaCheatManager_CancelActiveAIShipEncounters_Params
{
};

// Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable
struct UAthenaCheatManager_BuryNearestBuriable_Params
{
};

// Function AthenaCheat.AthenaCheatManager.BuryItem
struct UAthenaCheatManager_BuryItem_Params
{
	FString                                            NameOfItemToBury;                                         // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.BreakLeg
struct UAthenaCheatManager_BreakLeg_Params
{
};

// Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer
struct UAthenaCheatManager_BlockMigrationForPlayer_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer
struct UAthenaCheatManager_ApplyStatusToPlayer_Params
{
	FString                                            StatusIdentifier;                                         // (Parm, ZeroConstructor)
	float                                              Duration;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones
struct UAthenaCheatManager_ApplyDamageToAllDamageZones_Params
{
	float                                              Damage;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip
struct UAthenaCheatManager_ApplyCursedCannonballStatusToShip_Params
{
	FString                                            CannonballTypeString;                                     // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer
struct UAthenaCheatManager_ApplyCursedCannonballStatusToPlayer_Params
{
	FString                                            CannonballTypeString;                                     // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems
struct UAthenaCheatManager_AllowTeleportWithItems_Params
{
	bool                                               CanTeleport;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned
struct UAthenaCheatManager_AllocatePortalToTunnelOfTheDamned_Params
{
	FString                                            TunnelDescAssetPath;                                      // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.AllJoinAlliance
struct UAthenaCheatManager_AllJoinAlliance_Params
{
};

// Function AthenaCheat.AthenaCheatManager.AIPlayerShip
struct UAthenaCheatManager_AIPlayerShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline
struct UAthenaCheatManager_AggressiveGhostShipRebuildSpline_Params
{
};

// Function AthenaCheat.AthenaCheatManager.AdjustGhostShader
struct UAthenaCheatManager_AdjustGhostShader_Params
{
	bool                                               Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InStartingAmount;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTargetAmount;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InVengeanceStartingAmount;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InVengeanceTargetAmount;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDelayBeforeStart;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBlendDuration;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation
struct UAthenaCheatManager_AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation
struct UAthenaCheatManager_AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation
struct UAthenaCheatManager_AddTradeRouteClueMarkToMapAtCurrentLocation_Params
{
};

// Function AthenaCheat.AthenaCheatManager.AddTornMapPiece
struct UAthenaCheatManager_AddTornMapPiece_Params
{
};

// Function AthenaCheat.AthenaCheatManager.AddShipToCrew
struct UAthenaCheatManager_AddShipToCrew_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	FString                                            CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers
struct UAthenaCheatManager_AddRandomPetForAllPlayers_Params
{
};

// Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew
struct UAthenaCheatManager_AddPlayerToCrew_Params
{
	FString                                            ActorIdString;                                            // (Parm, ZeroConstructor)
	FString                                            CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.AddPetForPlayer
struct UAthenaCheatManager_AddPetForPlayer_Params
{
	int                                                PetTypeIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PetPartIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers
struct UAthenaCheatManager_AddPetForAllPlayers_Params
{
	int                                                PetTypeIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PetPartIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.AddMysteriousNote
struct UAthenaCheatManager_AddMysteriousNote_Params
{
	FString                                            NoteType;                                                 // (Parm, ZeroConstructor)
	FString                                            NoteTitle;                                                // (Parm, ZeroConstructor)
	FString                                            NoteBody;                                                 // (Parm, ZeroConstructor)
	FString                                            CompletionStrings;                                        // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.AddDrunkenness
struct UAthenaCheatManager_AddDrunkenness_Params
{
	int                                                DrunkennessType;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrunkennessChange;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.AddAISpawnContext
struct UAthenaCheatManager_AddAISpawnContext_Params
{
	FString                                            ContextName;                                              // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort
struct UAthenaCheatManager_ActivateSkellyFort_Params
{
	FString                                            FortEventName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	FString                                            FortName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany
struct UAthenaCheatManager_ActivateEmissaryFlagCompany_Params
{
	FString                                            CompanyId;                                                // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService
struct UAthenaCheatManager_ActivateDebugTeleportationDestinationService_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
