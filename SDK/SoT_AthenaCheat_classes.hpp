#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaCheat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaCheat.AthenaCheatManager
// 0x0030 (0x00A8 - 0x0078)
class UAthenaCheatManager : public UCheatManager
{
public:
	class ACinematicCameraController*                  CinematicCameraController;                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      CinematicCameraControllerClass;                           // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaCheat.AthenaCheatManager");
		return ptr;
	}


	void WindTriggerChange(int ChangeInstantly);
	void WindSetVector(float X, float Y);
	void WindSetMagnitude(float Magnitude);
	void WindSetDirection(float X, float Y);
	void WindReloadParams();
	void WindPrintDirection();
	void WindEnableDebug();
	void WindDisableDebug();
	void WindAlignWithCamera();
	void Walk();
	void VomitWithType(const struct FName& VomitType, float Duration);
	void Vomit();
	void UnlockAllEntitlements(int TrueFalse);
	void UnlockAllEmblemsAndAchievements();
	void TriggerRewardNotification(struct FName* Identifier);
	void TriggerLandmarkReaction(int ActionType);
	void TriggerEmblemUnlockedMessage(const class FString& EmblemFriendlyName);
	void TriggerControllerConnectionChange(bool IsConnect, int UserId, int ControllerId);
	void TriggerAIShipEncounter();
	void ToggleVideprinter(const class FString& Id);
	void ToggleThirdPerson();
	void ToggleNearestSuperheatedWater();
	void ToggleNearestLava();
	void ToggleFastShipControls();
	void ToggleDrawShipSpeed();
	void ToggleDisplayCannonAISpawnerZones();
	void ToggleDebugFlying();
	void ToggleDeathCamera();
	void ToggleCinematicCamera();
	void ToggleAttributeOverride();
	void TestCrashDumpCreationOnRunnableThread();
	void TestCrashDumpCreationOnMainThread();
	void TeleportToShip();
	void TeleportToPlayerStart();
	void TeleportToNearestTreasureLocation();
	void TeleportToLocation(float LocationX, float LocationY, float LocationZ);
	void TeleportToHideout();
	void TeleportShip(float X, float Y, float Z);
	void TeleportPlayerToSafety();
	void TeleportPlayerToKraken();
	void TeleportOutOfHideout();
	void TeleportCrewToShip(const class FString& CrewId);
	void TeleportCrewToSafeSpawnLocationFromRemoteActor(const class FString& ActorIdString, const class FString& CrewId);
	void TeleportCrewToSafeSpawnLocation(const class FString& CrewId);
	void TeleportCrewMemberToShip(const class FString& ActorIdString);
	void TeleportAllPlayersToShip();
	void TeleportAllPlayersToPlayerStart();
	void TeleportAllCrewsToCrewSpawnLocations();
	void TeleportActorToTeleportLocationActor(const class FString& ControllerActorIdString, const class FString& TeleportLocationActorIdString);
	void TeleportActorToLocation(const class FString& ActorIdString, float LocationX, float LocationY, float LocationZ, float Yaw);
	void TeleportActorToIsland(const class FString& ActorIdString, const class FString& IslandName);
	void TeleportActorToActorWithOffset(const class FString& ActorIdString, const class FString& DestinationActorIdString, float OffsetX, float OffsetY, float OffsetZ);
	void SuperSailor();
	void StartVoyage(const class FString& SourceAssetName);
	void StartNearestVolcano();
	void StartNearestGeysers();
	void StartNearestEarthquake();
	void StartDemoSession();
	void StartAllCrewVoyages();
	void SpinShip(float YawSpdInDegreesPerSecond);
	void SpawnWatercraft(const class FString& WatercraftClassString);
	void SpawnTreasureChestOfType(class FString* ChestTypeString);
	void SpawnTreasureArtifact(const class FString& TypeString);
	void SpawnTinySharkAtLocation(float X, float Y, float Z);
	void SpawnTinySharkAtCurrentLocation(int ControllerParamIndex);
	void SpawnStrongholdKey();
	void SpawnSmallShipAtIsland(const class FString& IslandName);
	void SpawnSmallShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw);
	void SpawnSkeletonAtNearestAISpawnPoint();
	void SpawnShipwreck(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ);
	void SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw);
	void SpawnShipFromDesc(const class FString& InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw);
	void SpawnShipAtIsland(const class FString& IslandName);
	void SpawnShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw);
	void SpawnNumberOfAI(const class FString& AITypeString, int NumToSpawn);
	void SpawnMessageInABottle(const class FString& MessageInABottleTypeString);
	void SpawnMermaid();
	void SpawnMerchantFauna(const class FString& FaunaTypeString);
	void SpawnMerchantCrate(const class FString& MerchantCrateTypeString);
	void SpawnMerchantCargo(const class FString& MerchantCargoTypeString);
	void SpawnKrakenAtCurrentLocationWithNumTentacles(uint32_t NumTentacles);
	void SpawnKrakenAtCurrentLocation();
	void SpawnKraken();
	void SpawnCursedCannonball(const class FString& CannonballTypeString);
	void SpawnBountyReward(const class FString& BountyTypeString);
	void SpawnBarrelGroup();
	void SpawnAINoTrigger(const class FString& AIDescString);
	void SpawnAIAtNearestAISpawnPoint(const class FString& AIDescString);
	void SpawnAIAtLocationDelayed(const class FString& AITypeString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay);
	void SpawnAIAtCurrentLocationDelayed(const class FString& AITypeString, float Delay);
	void SpawnAI(const class FString& AIDescString);
	void SlowMotionOverride(bool InValue);
	void SinkShipWithKeelOverIndex(int KeelOverConfigIndex);
	void SinkShipByActorId(const class FString& ShipActorIdString);
	void SinkShip();
	void SinkAllBarrels();
	void SinkAllAIShips();
	void ShowRandomCrewMemberGamerCard();
	void ShowAllItemsInRadialInventory();
	void ShowAllianceStatus(const class FString& CrewId);
	void ShipUpdateMassProperies();
	void SetWheelAngle(float Angle);
	void SetWeaponsLockedOut(bool WeaponsLockedOut);
	void SetWaveFlag(int InFlag);
	void SetWaterWaveParams(float Amplitude, float WaveLength, float PropagationSpeed);
	void SetVoiceChatEndpointXAudio2();
	void SetVoiceChatEndpointWwise();
	void SetUnattenuatedChatMixingMethodToUseWwise();
	void SetUnattenuatedChatMixingMethodToUsePlatform();
	void SetTimeScalar(float TimeScalar);
	void SetTimeHoursAndMinutes(int Hours, int Minutes);
	void SetTime(int Hours);
	void SetShipYaw(float Yaw);
	void SetShipBuoyancyBlend(float UnaryBlend);
	void SetSailLoweredProportions(float Proportion);
	void SetSailAngles(float Angle);
	void SetPreventLeakingOnAllDamageZones(bool PreventLeaking);
	void SetPlayerVisibleToAI();
	void SetPlayerInvisibleToAI();
	void SetPhotoMode(bool Enabled);
	void SetNonCrewChatSpatialisation(bool Enabled);
	void SetIdleDisconnectEnabled(bool Enabled);
	void SetGrogSecondary(bool InValue);
	void SetFOV(float InNewFOV);
	void SetDebugCameraUseProjectileCollisionChannel(bool bUseProjectileChannel);
	void SetDeathPenaltyRespawnTimer(float InSpawnTimer);
	void SetCapstanPosition(float Position);
	void SetAITeamAttitude(const class FString& TeamAString, const class FString& TeamBString, const class FString& AttitudeString);
	void SendStatEvent(const class FString& StatName, uint64_t StatValue);
	void SendRewardRequestEvent(const class FString& CompanyNameAndRewardIdSeparatedByColon);
	void ScuttleShip();
	void ScreenFadeStart();
	void ScreenFadeEnd();
	void SailShip();
	void RewindPhysicsSceneBy(float SecondsToRewindBy);
	void ResurfaceShipByActorId(const class FString& ShipActorIdString);
	void RestockIslandBarrels();
	void RestockAllReplenishables();
	void RespawnAllIslandItemSpawners();
	void ResetTinySharkSpawnTimerWithTime(float Timer);
	void ResetTinySharkSpawnTimer();
	void ResetStats();
	void ResetMouseDelta();
	void ResetDemoSession(bool StartNewSession);
	void ResetAITeamAttitudes();
	void ReplenishShip();
	void ReplaceShipWithSmallShip(const class FString& ShipActorIdConsoleString);
	void RepairShipAndClearInternalWater();
	void RenameTreasure(const class FString& InVendorName);
	void RemoveItemInSlot(int SlotIndex);
	void PushShip(float FwdSpdInMetersPerSecond);
	void PullLatestEmblemProgress();
	void PrintTime();
	void PrintAllNetworkActors();
	void PlayerAnimationOverride(const struct FName& Name);
	void OverrideShipPartFromCatalogue(const class FString& InShipActorIdConsoleString, int InCataloguePartIndex, int InCataloguePartCustomisationIndex);
	void OpenSkeletonFortDoor();
	void MessageBoxOnGraphicsThreadTest();
	void MakeSharksBrainDead();
	void LogShipHierarchy();
	void LogServerShipHierarchy();
	void LogAITeamAttitudes();
	void LocallyUnBreakLeg();
	void LeaveAlliance(const class FString& CrewId);
	void LaunchPlayer(float Velocity, float Angle);
	void KrakenAnimatedTentacleThrowPlayer();
	void KrakenAnimatedTentacleTakeDamage(float Damage);
	void KrakenAnimatedTentacleSwallowPlayer();
	void KrakenAnimatedTentacleSuckPlayer();
	void KrakenAnimatedTentaclePowerSlamPlayer();
	void KrakenAnimatedTentacleKill();
	void KrakenAnimatedTentacleIngestPlayer();
	void KrakenAnimatedTentacleDropPlayer();
	void KrakenAnimatedTentacleDespawn();
	void KrakenAnimatedTentacleDefeat();
	void KrakenAnimatedTentacleChangePlayerHoldState(const class FString& HoldState);
	void KillPlayer();
	void KillCrew(const class FString& CrewId);
	void KillAllPlayers();
	void KillAllCrews();
	void JoinAlliance(const class FString& OfferingCrew, const class FString& AcceptingCrew);
	void IPGOverride(const struct FName& BodyShape, float Distance);
	void IPGLoad(const class FString& path);
	void InfiniteGunAmmo(bool Enabled);
	void IncrementTime(int Hours, int Minutes);
	void HealthSet(float Value);
	void HealthReset();
	void HealthAdjust(float Amount);
	void God();
	void GenerateShipwrecks();
	void ForceOpenShop();
	void ForceCloseShop();
	void Fly();
	void FloodShipWithKeelOverIndex(float NormalisedWaterAmount, int KeelOverConfigIndex);
	void FloodShip(float NormalisedWaterAmount);
	void EquipPirateTitle(const class FString& PirateTitleType);
	void EquipCompassInLoadout();
	void EndDemoSession();
	void EnableVoiceChatMeteringForOutgoingSignals(bool Enabled);
	void EnableVoiceChatMeteringForIncomingSignals(bool Enabled);
	void EnableNTP(bool Enable);
	void EnableMermaidSpawning(int Enable);
	void EnableMermaidDeletion(int Enable);
	void EnableHeadphoneMixing(bool Enabled);
	void EnableCinematicCamera();
	void EnableBeaconOnAllMermaids(int Enable);
	void DrawVideprinter(const class FString& Id, bool Active);
	void DrawTreasureDebug(int Enabled);
	void DrawTemporaryLandmarkDebug(bool Enabled);
	void DrawShipwreckDebugBeacons(bool bEnabled);
	void DrawNearbyAISpawnPointsRanged(float Range);
	void DrawNearbyAISpawnPoints();
	void DiveShipByActorId(const class FString& ShipActorIdString);
	void DisplaySingleEmblemProgress(const class FString& StatName);
	void DisplayServersideHitsAtPlayerPosWithDefaults();
	void DisplayServersideHitsAtPlayerPos(uint32_t NumSamplesPerDimension, float DistanceBetweenSamples, float TestHeight);
	void DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled);
	void DisplayLoadingScreenTeleport();
	void DisplayLoadingScreenGame();
	void DisplayLoadingScreenBoot();
	void DisplayLandmarkValidTreasureLocationsForPlayer();
	void DisplayLandmarkRegions();
	void DisplayLandmarkNames();
	void DisplayFallDamageDebug(int Enable);
	void DisplayDrunkenness(bool Flag);
	void DisableCinematicCamera();
	void DestroyShip(const class FString& ShipActorIdConsoleString);
	void DestroyMyShip();
	void DestroyKraken();
	void DestroyAllTreasureChests();
	void DestroyAllTinySharks();
	void DestroyAllShips();
	void DespawnNumberOfAI(const class FString& AITypeString, int NumToDespawn);
	void DespawnFirstAI();
	void DespawnAI(const class FString& AITypeString);
	void DeleteVoyageHistory();
	void DeleteAllMermaids();
	void DebugIslandDelta();
	void DamageShipFromRemoteActor(const class FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ);
	void DamageShip(float Strength);
	void DamagePlayerFromRemoteActor(const class FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ);
	void DamagePlayer(float Strength);
	void CureAllAilings();
	void CompleteVoyage();
	void CompleteActiveQuests();
	void CloseSkeletonFortDoor();
	void CloseLoadingScreen();
	void ClearVoiceChatMeters();
	void ClearSlowMotionOverride();
	void ClearShipRestockingTimeouts();
	void ClearGrogSecondary();
	void ClearAllItemsInInventory();
	void CheckLandmarkValidTreasureLocationsAtPlayerPos();
	void CheckLandmarkRelativeToIslandCalculation();
	void CancelVoyage();
	void CancelAllCrewVoyages();
	void BreakLeg();
	void ApplyVenomWithParams(float InitialDamage, float DamagePerSecond, float DamageOverTimeDuration);
	void ApplyVenom();
	void ApplyDamageToAllDamageZones(float Damage);
	void AIPlayerShip();
	void AddShipToCrew(const class FString& ActorIdString, const class FString& CrewId);
	void AddPlayerToCrew(const class FString& ActorIdString, const class FString& CrewId);
	void AddDrunkenness(int DrunkennessType, float DrunkennessChange);
	void ActivateSkellyFort(const class FString& FortName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
