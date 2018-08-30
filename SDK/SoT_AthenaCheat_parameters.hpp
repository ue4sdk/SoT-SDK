#pragma once

// Sea of Thieves (1.1.6) SDK

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
	struct FName                                       VomitType;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Duration;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.Vomit
struct UAthenaCheatManager_Vomit_Params
{
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

// Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification
struct UAthenaCheatManager_TriggerRewardNotification_Params
{
	struct FName                                       Identifier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction
struct UAthenaCheatManager_TriggerLandmarkReaction_Params
{
	int                                                ActionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage
struct UAthenaCheatManager_TriggerEmblemUnlockedMessage_Params
{
	class FString                                      EmblemFriendlyName;                                       // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange
struct UAthenaCheatManager_TriggerControllerConnectionChange_Params
{
	bool                                               IsConnect;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UserId;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerId;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle
struct UAthenaCheatManager_TriggerAIShipTimerBattle_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter
struct UAthenaCheatManager_TriggerAIShipEncounter_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleVideprinter
struct UAthenaCheatManager_ToggleVideprinter_Params
{
	class FString                                      Id;                                                       // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson
struct UAthenaCheatManager_ToggleThirdPerson_Params
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

// Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls
struct UAthenaCheatManager_ToggleFastShipControls_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed
struct UAthenaCheatManager_ToggleDrawShipSpeed_Params
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

// Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera
struct UAthenaCheatManager_ToggleCinematicCamera_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride
struct UAthenaCheatManager_ToggleAttributeOverride_Params
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

// Function AthenaCheat.AthenaCheatManager.TeleportShip
struct UAthenaCheatManager_TeleportShip_Params
{
	float                                              X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety
struct UAthenaCheatManager_TeleportPlayerToSafety_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken
struct UAthenaCheatManager_TeleportPlayerToKraken_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout
struct UAthenaCheatManager_TeleportOutOfHideout_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip
struct UAthenaCheatManager_TeleportCrewToShip_Params
{
	class FString                                      CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor
struct UAthenaCheatManager_TeleportCrewToSafeSpawnLocationFromRemoteActor_Params
{
	class FString                                      ActorIdString;                                            // (Parm, ZeroConstructor)
	class FString                                      CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation
struct UAthenaCheatManager_TeleportCrewToSafeSpawnLocation_Params
{
	class FString                                      CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip
struct UAthenaCheatManager_TeleportCrewMemberToShip_Params
{
	class FString                                      ActorIdString;                                            // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip
struct UAthenaCheatManager_TeleportAllPlayersToShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart
struct UAthenaCheatManager_TeleportAllPlayersToPlayerStart_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations
struct UAthenaCheatManager_TeleportAllCrewsToCrewSpawnLocations_Params
{
};

// Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor
struct UAthenaCheatManager_TeleportActorToTeleportLocationActor_Params
{
	class FString                                      ControllerActorIdString;                                  // (Parm, ZeroConstructor)
	class FString                                      TeleportLocationActorIdString;                            // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation
struct UAthenaCheatManager_TeleportActorToLocation_Params
{
	class FString                                      ActorIdString;                                            // (Parm, ZeroConstructor)
	float                                              LocationX;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationZ;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland
struct UAthenaCheatManager_TeleportActorToIsland_Params
{
	class FString                                      ActorIdString;                                            // (Parm, ZeroConstructor)
	class FString                                      IslandName;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset
struct UAthenaCheatManager_TeleportActorToActorWithOffset_Params
{
	class FString                                      ActorIdString;                                            // (Parm, ZeroConstructor)
	class FString                                      DestinationActorIdString;                                 // (Parm, ZeroConstructor)
	float                                              OffsetX;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetY;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetZ;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SuperSailor
struct UAthenaCheatManager_SuperSailor_Params
{
};

// Function AthenaCheat.AthenaCheatManager.StartVoyage
struct UAthenaCheatManager_StartVoyage_Params
{
	class FString                                      SourceAssetName;                                          // (Parm, ZeroConstructor)
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

// Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages
struct UAthenaCheatManager_StartAllCrewVoyages_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpinShip
struct UAthenaCheatManager_SpinShip_Params
{
	float                                              YawSpdInDegreesPerSecond;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnWatercraft
struct UAthenaCheatManager_SpawnWatercraft_Params
{
	class FString                                      WatercraftClassString;                                    // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType
struct UAthenaCheatManager_SpawnTreasureChestOfType_Params
{
	class FString                                      ChestTypeString;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact
struct UAthenaCheatManager_SpawnTreasureArtifact_Params
{
	class FString                                      TypeString;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation
struct UAthenaCheatManager_SpawnTinySharkAtLocation_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation
struct UAthenaCheatManager_SpawnTinySharkAtCurrentLocation_Params
{
	int                                                ControllerParamIndex;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey
struct UAthenaCheatManager_SpawnStrongholdKey_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland
struct UAthenaCheatManager_SpawnSmallShipAtIsland_Params
{
	class FString                                      IslandName;                                               // (Parm, ZeroConstructor)
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

// Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable
struct UAthenaCheatManager_SpawnShipInFrontOfNearestAIInteractable_Params
{
	float                                              XProportion;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              YProportion;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc
struct UAthenaCheatManager_SpawnShipFromDesc_Params
{
	class FString                                      InShipDescAssetString;                                    // (Parm, ZeroConstructor)
	float                                              SpawnLocationX;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationY;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationZ;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnYaw;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland
struct UAthenaCheatManager_SpawnShipAtIsland_Params
{
	class FString                                      IslandName;                                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnShip
struct UAthenaCheatManager_SpawnShip_Params
{
	float                                              SpawnLocationX;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationY;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationZ;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnYaw;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI
struct UAthenaCheatManager_SpawnNumberOfAI_Params
{
	class FString                                      AITypeString;                                             // (Parm, ZeroConstructor)
	int                                                NumToSpawn;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle
struct UAthenaCheatManager_SpawnMessageInABottle_Params
{
	class FString                                      MessageInABottleTypeString;                               // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnMermaid
struct UAthenaCheatManager_SpawnMermaid_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna
struct UAthenaCheatManager_SpawnMerchantFauna_Params
{
	class FString                                      FaunaTypeString;                                          // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate
struct UAthenaCheatManager_SpawnMerchantCrate_Params
{
	class FString                                      MerchantCrateTypeString;                                  // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo
struct UAthenaCheatManager_SpawnMerchantCargo_Params
{
	class FString                                      MerchantCargoTypeString;                                  // (Parm, ZeroConstructor)
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

// Function AthenaCheat.AthenaCheatManager.SpawnKraken
struct UAthenaCheatManager_SpawnKraken_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball
struct UAthenaCheatManager_SpawnCursedCannonball_Params
{
	class FString                                      CannonballTypeString;                                     // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate
struct UAthenaCheatManager_SpawnCargoRunCrate_Params
{
	class FString                                      SpawnCargoRunCrateString;                                 // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnBountyReward
struct UAthenaCheatManager_SpawnBountyReward_Params
{
	class FString                                      BountyTypeString;                                         // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup
struct UAthenaCheatManager_SpawnBarrelGroup_Params
{
};

// Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger
struct UAthenaCheatManager_SpawnAINoTrigger_Params
{
	class FString                                      AIDescString;                                             // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint
struct UAthenaCheatManager_SpawnAIAtNearestAISpawnPoint_Params
{
	class FString                                      AIDescString;                                             // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed
struct UAthenaCheatManager_SpawnAIAtLocationDelayed_Params
{
	class FString                                      AITypeString;                                             // (Parm, ZeroConstructor)
	float                                              LocationX;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationZ;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed
struct UAthenaCheatManager_SpawnAIAtCurrentLocationDelayed_Params
{
	class FString                                      AITypeString;                                             // (Parm, ZeroConstructor)
	float                                              Delay;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SpawnAI
struct UAthenaCheatManager_SpawnAI_Params
{
	class FString                                      AIDescString;                                             // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SlowMotionOverride
struct UAthenaCheatManager_SlowMotionOverride_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex
struct UAthenaCheatManager_SinkShipWithKeelOverIndex_Params
{
	int                                                KeelOverConfigIndex;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SinkShipByActorId
struct UAthenaCheatManager_SinkShipByActorId_Params
{
	class FString                                      ShipActorIdString;                                        // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SinkShip
struct UAthenaCheatManager_SinkShip_Params
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

// Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard
struct UAthenaCheatManager_ShowRandomCrewMemberGamerCard_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ShowAllItemsInRadialInventory
struct UAthenaCheatManager_ShowAllItemsInRadialInventory_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus
struct UAthenaCheatManager_ShowAllianceStatus_Params
{
	class FString                                      CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne
struct UAthenaCheatManager_ShipwrecksSpawnOne_Params
{
	float                                              SpawnLocationX;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationY;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationZ;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen
struct UAthenaCheatManager_ShipwrecksRegen_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ShipwrecksDrawDebugBeacons
struct UAthenaCheatManager_ShipwrecksDrawDebugBeacons_Params
{
	bool                                               bEnabled;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
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

// Function AthenaCheat.AthenaCheatManager.SetShipYaw
struct UAthenaCheatManager_SetShipYaw_Params
{
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetShipRoll
struct UAthenaCheatManager_SetShipRoll_Params
{
	float                                              Roll;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
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

// Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones
struct UAthenaCheatManager_SetPreventLeakingOnAllDamageZones_Params
{
	bool                                               PreventLeaking;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI
struct UAthenaCheatManager_SetPlayerVisibleToAI_Params
{
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

// Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation
struct UAthenaCheatManager_SetNonCrewChatSpatialisation_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled
struct UAthenaCheatManager_SetIdleDisconnectEnabled_Params
{
	bool                                               Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetGrogSecondary
struct UAthenaCheatManager_SetGrogSecondary_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetFOV
struct UAthenaCheatManager_SetFOV_Params
{
	float                                              InNewFOV;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
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

// Function AthenaCheat.AthenaCheatManager.SetCapstanPosition
struct UAthenaCheatManager_SetCapstanPosition_Params
{
	float                                              Position;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude
struct UAthenaCheatManager_SetAITeamAttitude_Params
{
	class FString                                      TeamAString;                                              // (Parm, ZeroConstructor)
	class FString                                      TeamBString;                                              // (Parm, ZeroConstructor)
	class FString                                      AttitudeString;                                           // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.SendStatEvent
struct UAthenaCheatManager_SendStatEvent_Params
{
	class FString                                      StatName;                                                 // (Parm, ZeroConstructor)
	uint64_t                                           StatValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent
struct UAthenaCheatManager_SendRewardRequestEvent_Params
{
	class FString                                      CompanyNameAndRewardIdSeparatedByColon;                   // (Parm, ZeroConstructor)
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

// Function AthenaCheat.AthenaCheatManager.SailShip
struct UAthenaCheatManager_SailShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy
struct UAthenaCheatManager_RewindPhysicsSceneBy_Params
{
	float                                              SecondsToRewindBy;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId
struct UAthenaCheatManager_ResurfaceShipByActorId_Params
{
	class FString                                      ShipActorIdString;                                        // (Parm, ZeroConstructor)
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

// Function AthenaCheat.AthenaCheatManager.ResetStats
struct UAthenaCheatManager_ResetStats_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetMouseDelta
struct UAthenaCheatManager_ResetMouseDelta_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ResetDemoSession
struct UAthenaCheatManager_ResetDemoSession_Params
{
	bool                                               StartNewSession;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes
struct UAthenaCheatManager_ResetAITeamAttitudes_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ReplenishShip
struct UAthenaCheatManager_ReplenishShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip
struct UAthenaCheatManager_ReplaceShipWithSmallShip_Params
{
	class FString                                      ShipActorIdConsoleString;                                 // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater
struct UAthenaCheatManager_RepairShipAndClearInternalWater_Params
{
};

// Function AthenaCheat.AthenaCheatManager.RenameTreasure
struct UAthenaCheatManager_RenameTreasure_Params
{
	class FString                                      InVendorName;                                             // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot
struct UAthenaCheatManager_RemoveItemInSlot_Params
{
	int                                                SlotIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
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

// Function AthenaCheat.AthenaCheatManager.PrintTime
struct UAthenaCheatManager_PrintTime_Params
{
};

// Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors
struct UAthenaCheatManager_PrintAllNetworkActors_Params
{
};

// Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride
struct UAthenaCheatManager_PlayerAnimationOverride_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue
struct UAthenaCheatManager_OverrideShipPartFromCatalogue_Params
{
	class FString                                      InShipActorIdConsoleString;                               // (Parm, ZeroConstructor)
	int                                                InCataloguePartIndex;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCataloguePartCustomisationIndex;                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor
struct UAthenaCheatManager_OpenSkeletonFortDoor_Params
{
};

// Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest
struct UAthenaCheatManager_MessageBoxOnGraphicsThreadTest_Params
{
};

// Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead
struct UAthenaCheatManager_MakeSharksBrainDead_Params
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

// Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg
struct UAthenaCheatManager_LocallyUnBreakLeg_Params
{
};

// Function AthenaCheat.AthenaCheatManager.LeaveAlliance
struct UAthenaCheatManager_LeaveAlliance_Params
{
	class FString                                      CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.LaunchPlayer
struct UAthenaCheatManager_LaunchPlayer_Params
{
	float                                              Velocity;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
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
	class FString                                      HoldState;                                                // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.KillPlayer
struct UAthenaCheatManager_KillPlayer_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KillCrew
struct UAthenaCheatManager_KillCrew_Params
{
	class FString                                      CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.KillAllPlayers
struct UAthenaCheatManager_KillAllPlayers_Params
{
};

// Function AthenaCheat.AthenaCheatManager.KillAllCrews
struct UAthenaCheatManager_KillAllCrews_Params
{
};

// Function AthenaCheat.AthenaCheatManager.JoinAlliance
struct UAthenaCheatManager_JoinAlliance_Params
{
	class FString                                      OfferingCrew;                                             // (Parm, ZeroConstructor)
	class FString                                      AcceptingCrew;                                            // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.IPGOverride
struct UAthenaCheatManager_IPGOverride_Params
{
	struct FName                                       BodyShape;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.IPGLoad
struct UAthenaCheatManager_IPGLoad_Params
{
	class FString                                      path;                                                     // (Parm, ZeroConstructor)
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

// Function AthenaCheat.AthenaCheatManager.HealthSet
struct UAthenaCheatManager_HealthSet_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.HealthReset
struct UAthenaCheatManager_HealthReset_Params
{
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

// Function AthenaCheat.AthenaCheatManager.ForceOpenShop
struct UAthenaCheatManager_ForceOpenShop_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ForceCloseShop
struct UAthenaCheatManager_ForceCloseShop_Params
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

// Function AthenaCheat.AthenaCheatManager.EquipPirateTitle
struct UAthenaCheatManager_EquipPirateTitle_Params
{
	class FString                                      PirateTitleType;                                          // (Parm, ZeroConstructor)
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

// Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera
struct UAthenaCheatManager_EnableCinematicCamera_Params
{
};

// Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids
struct UAthenaCheatManager_EnableBeaconOnAllMermaids_Params
{
	int                                                Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DrawVideprinter
struct UAthenaCheatManager_DrawVideprinter_Params
{
	class FString                                      Id;                                                       // (Parm, ZeroConstructor)
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

// Function AthenaCheat.AthenaCheatManager.DiveShipByActorId
struct UAthenaCheatManager_DiveShipByActorId_Params
{
	class FString                                      ShipActorIdString;                                        // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress
struct UAthenaCheatManager_DisplaySingleEmblemProgress_Params
{
	class FString                                      StatName;                                                 // (Parm, ZeroConstructor)
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

// Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland
struct UAthenaCheatManager_DisplayNonVagueNonUniqueLandmarksForIsland_Params
{
	bool                                               Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport
struct UAthenaCheatManager_DisplayLoadingScreenTeleport_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenGame
struct UAthenaCheatManager_DisplayLoadingScreenGame_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot
struct UAthenaCheatManager_DisplayLoadingScreenBoot_Params
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

// Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera
struct UAthenaCheatManager_DisableCinematicCamera_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DestroyShip
struct UAthenaCheatManager_DestroyShip_Params
{
	class FString                                      ShipActorIdConsoleString;                                 // (Parm, ZeroConstructor)
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

// Function AthenaCheat.AthenaCheatManager.DestroyAllShips
struct UAthenaCheatManager_DestroyAllShips_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI
struct UAthenaCheatManager_DespawnNumberOfAI_Params
{
	class FString                                      AITypeString;                                             // (Parm, ZeroConstructor)
	int                                                NumToDespawn;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.DespawnFirstAI
struct UAthenaCheatManager_DespawnFirstAI_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DespawnAI
struct UAthenaCheatManager_DespawnAI_Params
{
	class FString                                      AITypeString;                                             // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory
struct UAthenaCheatManager_DeleteVoyageHistory_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids
struct UAthenaCheatManager_DeleteAllMermaids_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DebugIslandDelta
struct UAthenaCheatManager_DebugIslandDelta_Params
{
};

// Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor
struct UAthenaCheatManager_DamageShipFromRemoteActor_Params
{
	class FString                                      ActorIdString;                                            // (Parm, ZeroConstructor)
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
	class FString                                      ActorIdString;                                            // (Parm, ZeroConstructor)
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

// Function AthenaCheat.AthenaCheatManager.CompleteVoyage
struct UAthenaCheatManager_CompleteVoyage_Params
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

// Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters
struct UAthenaCheatManager_ClearVoiceChatMeters_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride
struct UAthenaCheatManager_ClearSlowMotionOverride_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ClearShipRestockingTimeouts
struct UAthenaCheatManager_ClearShipRestockingTimeouts_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary
struct UAthenaCheatManager_ClearGrogSecondary_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ClearAllItemsInInventory
struct UAthenaCheatManager_ClearAllItemsInInventory_Params
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

// Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages
struct UAthenaCheatManager_CancelAllCrewVoyages_Params
{
};

// Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters
struct UAthenaCheatManager_CancelActiveAIShipEncounters_Params
{
};

// Function AthenaCheat.AthenaCheatManager.BreakLeg
struct UAthenaCheatManager_BreakLeg_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ApplyVenomWithParams
struct UAthenaCheatManager_ApplyVenomWithParams_Params
{
	float                                              InitialDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamagePerSecond;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageOverTimeDuration;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ApplyVenom
struct UAthenaCheatManager_ApplyVenom_Params
{
};

// Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones
struct UAthenaCheatManager_ApplyDamageToAllDamageZones_Params
{
	float                                              Damage;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip
struct UAthenaCheatManager_ApplyCursedCannonballStatusToShip_Params
{
	class FString                                      CannonballTypeString;                                     // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer
struct UAthenaCheatManager_ApplyCursedCannonballStatusToPlayer_Params
{
	class FString                                      CannonballTypeString;                                     // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.AIPlayerShip
struct UAthenaCheatManager_AIPlayerShip_Params
{
};

// Function AthenaCheat.AthenaCheatManager.AddShipToCrew
struct UAthenaCheatManager_AddShipToCrew_Params
{
	class FString                                      ActorIdString;                                            // (Parm, ZeroConstructor)
	class FString                                      CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew
struct UAthenaCheatManager_AddPlayerToCrew_Params
{
	class FString                                      ActorIdString;                                            // (Parm, ZeroConstructor)
	class FString                                      CrewId;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaCheat.AthenaCheatManager.AddDrunkenness
struct UAthenaCheatManager_AddDrunkenness_Params
{
	int                                                DrunkennessType;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrunkennessChange;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort
struct UAthenaCheatManager_ActivateSkellyFort_Params
{
	class FString                                      FortName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
