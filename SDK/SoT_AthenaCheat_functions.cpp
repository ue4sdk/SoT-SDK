// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaCheat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaCheat.AthenaCheatManager.WindTriggerChange
// (Final, Exec, Native, Public)
// Parameters:
// int                            ChangeInstantly                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::WindTriggerChange(int ChangeInstantly)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindTriggerChange");

	struct
	{
		int                            ChangeInstantly;
	} params;

	params.ChangeInstantly = ChangeInstantly;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindSetVector
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::WindSetVector(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindSetVector");

	struct
	{
		float                          X;
		float                          Y;
	} params;

	params.X = X;
	params.Y = Y;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindSetMagnitude
// (Final, Exec, Native, Public)
// Parameters:
// float                          Magnitude                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::WindSetMagnitude(float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindSetMagnitude");

	struct
	{
		float                          Magnitude;
	} params;

	params.Magnitude = Magnitude;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindSetDirection
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::WindSetDirection(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindSetDirection");

	struct
	{
		float                          X;
		float                          Y;
	} params;

	params.X = X;
	params.Y = Y;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindReloadParams
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindReloadParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindReloadParams");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindPrintDirection
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindPrintDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindPrintDirection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindEnableDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindEnableDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindEnableDebug");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindDisableDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindDisableDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindDisableDebug");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindAlignWithCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.Walk
// (Exec, Native, Public)

void UAthenaCheatManager::Walk()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Walk");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.VomitWithType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   VomitType                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::VomitWithType(const struct FName& VomitType, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.VomitWithType");

	struct
	{
		struct FName                   VomitType;
		float                          Duration;
	} params;

	params.VomitType = VomitType;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.Vomit
// (Final, Exec, Native, Public)

void UAthenaCheatManager::Vomit()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Vomit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements
// (Final, Exec, Native, Public)
// Parameters:
// int                            TrueFalse                      (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::UnlockAllEntitlements(int TrueFalse)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements");

	struct
	{
		int                            TrueFalse;
	} params;

	params.TrueFalse = TrueFalse;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements
// (Final, Exec, Native, Public)

void UAthenaCheatManager::UnlockAllEmblemsAndAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TutorialAction
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActionTypeString               (Parm, ZeroConstructor)

void UAthenaCheatManager::TutorialAction(const class FString& ActionTypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TutorialAction");

	struct
	{
		class FString                  ActionTypeString;
	} params;

	params.ActionTypeString = ActionTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   Identifier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TriggerRewardNotification(struct FName* Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification");

	struct
	{
		struct FName                   Identifier;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Identifier != nullptr)
		*Identifier = params.Identifier;
}


// Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction
// (Final, Exec, Native, Public)
// Parameters:
// int                            ActionType                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TriggerLandmarkReaction(int ActionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction");

	struct
	{
		int                            ActionType;
	} params;

	params.ActionType = ActionType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerFogManagerAtNearestIsland()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  EmblemFriendlyName             (Parm, ZeroConstructor)

void UAthenaCheatManager::TriggerEmblemUnlockedMessage(const class FString& EmblemFriendlyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage");

	struct
	{
		class FString                  EmblemFriendlyName;
	} params;

	params.EmblemFriendlyName = EmblemFriendlyName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange
// (Final, Exec, Native, Public)
// Parameters:
// bool                           IsConnect                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            UserId                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControllerId                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TriggerControllerConnectionChange(bool IsConnect, int UserId, int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange");

	struct
	{
		bool                           IsConnect;
		int                            UserId;
		int                            ControllerId;
	} params;

	params.IsConnect = IsConnect;
	params.UserId = UserId;
	params.ControllerId = ControllerId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerAIShipTimerBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerAIShipPassive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerAIShipEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerAIShipAggressive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleVideprinter
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  Id                             (Parm, ZeroConstructor)

void UAthenaCheatManager::ToggleVideprinter(const class FString& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleVideprinter");

	struct
	{
		class FString                  Id;
	} params;

	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleThirdPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleNearestSuperheatedWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleNearestLava
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleNearestLava()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleNearestLava");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleFastShipControls()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDrawShipSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDisplayCannonAISpawnerZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::ToggleDebugFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDeathCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleContestScoreDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleCinematicCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleAttributeOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TestCrashDumpCreationOnRunnableThread()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TestCrashDumpCreationOnMainThread()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportToShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToShip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportToPlayerStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportToNearestTreasureLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToLocation
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TeleportToLocation(float LocationX, float LocationY, float LocationZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToLocation");

	struct
	{
		float                          LocationX;
		float                          LocationY;
		float                          LocationZ;
	} params;

	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToHideout
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportToHideout()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToHideout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportShip
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TeleportShip(float X, float Y, float Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportShip");

	struct
	{
		float                          X;
		float                          Y;
		float                          Z;
	} params;

	params.X = X;
	params.Y = Y;
	params.Z = Z;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportPlayerToSafety()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportPlayerToKraken()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportOutOfHideout()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportCrewToShip(const class FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip");

	struct
	{
		class FString                  CrewId;
	} params;

	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)
// class FString                  CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportCrewToSafeSpawnLocationFromRemoteActor(const class FString& ActorIdString, const class FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor");

	struct
	{
		class FString                  ActorIdString;
		class FString                  CrewId;
	} params;

	params.ActorIdString = ActorIdString;
	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportCrewToSafeSpawnLocation(const class FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation");

	struct
	{
		class FString                  CrewId;
	} params;

	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportCrewMemberToShip(const class FString& ActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip");

	struct
	{
		class FString                  ActorIdString;
	} params;

	params.ActorIdString = ActorIdString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportAllPlayersToShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportAllPlayersToPlayerStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportAllCrewsToCrewSpawnLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ControllerActorIdString        (Parm, ZeroConstructor)
// class FString                  TeleportLocationActorIdString  (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportActorToTeleportLocationActor(const class FString& ControllerActorIdString, const class FString& TeleportLocationActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor");

	struct
	{
		class FString                  ControllerActorIdString;
		class FString                  TeleportLocationActorIdString;
	} params;

	params.ControllerActorIdString = ControllerActorIdString;
	params.TeleportLocationActorIdString = TeleportLocationActorIdString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TeleportActorToLocation(const class FString& ActorIdString, float LocationX, float LocationY, float LocationZ, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation");

	struct
	{
		class FString                  ActorIdString;
		float                          LocationX;
		float                          LocationY;
		float                          LocationZ;
		float                          Yaw;
	} params;

	params.ActorIdString = ActorIdString;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;
	params.Yaw = Yaw;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)
// class FString                  IslandName                     (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportActorToIsland(const class FString& ActorIdString, const class FString& IslandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland");

	struct
	{
		class FString                  ActorIdString;
		class FString                  IslandName;
	} params;

	params.ActorIdString = ActorIdString;
	params.IslandName = IslandName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)
// class FString                  DestinationActorIdString       (Parm, ZeroConstructor)
// float                          OffsetX                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetY                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetZ                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TeleportActorToActorWithOffset(const class FString& ActorIdString, const class FString& DestinationActorIdString, float OffsetX, float OffsetY, float OffsetZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset");

	struct
	{
		class FString                  ActorIdString;
		class FString                  DestinationActorIdString;
		float                          OffsetX;
		float                          OffsetY;
		float                          OffsetZ;
	} params;

	params.ActorIdString = ActorIdString;
	params.DestinationActorIdString = DestinationActorIdString;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;
	params.OffsetZ = OffsetZ;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SuperSailor
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SuperSailor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SuperSailor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartVoyage
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  SourceAssetName                (Parm, ZeroConstructor)

void UAthenaCheatManager::StartVoyage(const class FString& SourceAssetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartVoyage");

	struct
	{
		class FString                  SourceAssetName;
	} params;

	params.SourceAssetName = SourceAssetName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartNearestVolcano
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartNearestVolcano()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartNearestVolcano");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartNearestGeysers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartNearestGeysers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartNearestGeysers");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartNearestEarthquake()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartDemoSession
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartDemoSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartDemoSession");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartAllVolcanos
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartAllVolcanos()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartAllVolcanos");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartAllCrewVoyages()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpinShip
// (Final, Exec, Native, Public)
// Parameters:
// float                          YawSpdInDegreesPerSecond       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpinShip(float YawSpdInDegreesPerSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpinShip");

	struct
	{
		float                          YawSpdInDegreesPerSecond;
	} params;

	params.YawSpdInDegreesPerSecond = YawSpdInDegreesPerSecond;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnWatercraft
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  WatercraftClassString          (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnWatercraft(const class FString& WatercraftClassString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnWatercraft");

	struct
	{
		class FString                  WatercraftClassString;
	} params;

	params.WatercraftClassString = WatercraftClassString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// class FString                  ChestTypeString                (Parm, OutParm, ZeroConstructor)

void UAthenaCheatManager::SpawnTreasureChestOfType(class FString* ChestTypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType");

	struct
	{
		class FString                  ChestTypeString;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ChestTypeString != nullptr)
		*ChestTypeString = params.ChestTypeString;
}


// Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  TypeString                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnTreasureArtifact(const class FString& TypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact");

	struct
	{
		class FString                  TypeString;
	} params;

	params.TypeString = TypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnTinySharkAtLocation(float X, float Y, float Z, int PartIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation");

	struct
	{
		float                          X;
		float                          Y;
		float                          Z;
		int                            PartIndex;
	} params;

	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.PartIndex = PartIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation
// (Final, Exec, Native, Public)
// Parameters:
// int                            ControllerParamIndex           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            PartIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnTinySharkAtCurrentLocation(int ControllerParamIndex, int PartIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation");

	struct
	{
		int                            ControllerParamIndex;
		int                            PartIndex;
	} params;

	params.ControllerParamIndex = ControllerParamIndex;
	params.PartIndex = PartIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnStrongholdKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  IslandName                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnSmallShipAtIsland(const class FString& IslandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland");

	struct
	{
		class FString                  IslandName;
	} params;

	params.IslandName = IslandName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnSmallShip
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnYaw                       (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnSmallShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnSmallShip");

	struct
	{
		float                          SpawnLocationX;
		float                          SpawnLocationY;
		float                          SpawnLocationZ;
		float                          SpawnYaw;
	} params;

	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;
	params.SpawnYaw = SpawnYaw;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnSkeletonAtNearestAISpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnShipOfType
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnYaw                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  TypeString                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnShipOfType(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw, const class FString& TypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShipOfType");

	struct
	{
		float                          SpawnLocationX;
		float                          SpawnLocationY;
		float                          SpawnLocationZ;
		float                          SpawnYaw;
		class FString                  TypeString;
	} params;

	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;
	params.SpawnYaw = SpawnYaw;
	params.TypeString = TypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable
// (Final, Exec, Native, Public)
// Parameters:
// float                          XProportion                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          YProportion                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  TypeString                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw, const class FString& TypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable");

	struct
	{
		float                          XProportion;
		float                          YProportion;
		float                          Yaw;
		class FString                  TypeString;
	} params;

	params.XProportion = XProportion;
	params.YProportion = YProportion;
	params.Yaw = Yaw;
	params.TypeString = TypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  InShipDescAssetString          (Parm, ZeroConstructor)
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnYaw                       (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnShipFromDesc(const class FString& InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc");

	struct
	{
		class FString                  InShipDescAssetString;
		float                          SpawnLocationX;
		float                          SpawnLocationY;
		float                          SpawnLocationZ;
		float                          SpawnYaw;
	} params;

	params.InShipDescAssetString = InShipDescAssetString;
	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;
	params.SpawnYaw = SpawnYaw;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  IslandName                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnShipAtIsland(const class FString& IslandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland");

	struct
	{
		class FString                  IslandName;
	} params;

	params.IslandName = IslandName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnShip
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnYaw                       (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShip");

	struct
	{
		float                          SpawnLocationX;
		float                          SpawnLocationY;
		float                          SpawnLocationZ;
		float                          SpawnYaw;
	} params;

	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;
	params.SpawnYaw = SpawnYaw;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AITypeString                   (Parm, ZeroConstructor)
// int                            NumToSpawn                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnNumberOfAI(const class FString& AITypeString, int NumToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI");

	struct
	{
		class FString                  AITypeString;
		int                            NumToSpawn;
	} params;

	params.AITypeString = AITypeString;
	params.NumToSpawn = NumToSpawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  MessageInABottleTypeString     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnMessageInABottle(const class FString& MessageInABottleTypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle");

	struct
	{
		class FString                  MessageInABottleTypeString;
	} params;

	params.MessageInABottleTypeString = MessageInABottleTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnMermaid
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnMermaid()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMermaid");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  FaunaTypeString                (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnMerchantFauna(const class FString& FaunaTypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna");

	struct
	{
		class FString                  FaunaTypeString;
	} params;

	params.FaunaTypeString = FaunaTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  MerchantCrateTypeString        (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnMerchantCrate(const class FString& MerchantCrateTypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate");

	struct
	{
		class FString                  MerchantCrateTypeString;
	} params;

	params.MerchantCrateTypeString = MerchantCrateTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  MerchantCargoTypeString        (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnMerchantCargo(const class FString& MerchantCargoTypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo");

	struct
	{
		class FString                  MerchantCargoTypeString;
	} params;

	params.MerchantCargoTypeString = MerchantCargoTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles
// (Final, Exec, Native, Public)
// Parameters:
// uint32_t                       NumTentacles                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnKrakenAtCurrentLocationWithNumTentacles(uint32_t NumTentacles)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles");

	struct
	{
		uint32_t                       NumTentacles;
	} params;

	params.NumTentacles = NumTentacles;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnKrakenAtCurrentLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy
// (Final, Exec, Native, Public)
// Parameters:
// float                          Dormancy                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnGeyserAtPlayerLocationWithDormancy(float Dormancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy");

	struct
	{
		float                          Dormancy;
	} params;

	params.Dormancy = Dormancy;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnGeyserAtPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation
// (Final, Exec, Native, Public)
// Parameters:
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Dormancy                       (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnGeyserAtLocation(float LocationX, float LocationY, float LocationZ, float Dormancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation");

	struct
	{
		float                          LocationX;
		float                          LocationY;
		float                          LocationZ;
		float                          Dormancy;
	} params;

	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;
	params.Dormancy = Dormancy;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnFogAtPlayerPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CannonballTypeString           (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnCursedCannonball(const class FString& CannonballTypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball");

	struct
	{
		class FString                  CannonballTypeString;
	} params;

	params.CannonballTypeString = CannonballTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// class FString                  ChestTypeString                (Parm, OutParm, ZeroConstructor)

void UAthenaCheatManager::SpawnCollectorsChestOfType(class FString* ChestTypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType");

	struct
	{
		class FString                  ChestTypeString;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ChestTypeString != nullptr)
		*ChestTypeString = params.ChestTypeString;
}


// Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  SpawnCargoRunCrateString       (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnCargoRunCrate(const class FString& SpawnCargoRunCrateString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate");

	struct
	{
		class FString                  SpawnCargoRunCrateString;
	} params;

	params.SpawnCargoRunCrateString = SpawnCargoRunCrateString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnBountyReward
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  BountyTypeString               (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnBountyReward(const class FString& BountyTypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnBountyReward");

	struct
	{
		class FString                  BountyTypeString;
	} params;

	params.BountyTypeString = BountyTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnBarrelGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  DebugWieldableTypeString       (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnAndEquipDebugWieldable(const class FString& DebugWieldableTypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable");

	struct
	{
		class FString                  DebugWieldableTypeString;
	} params;

	params.DebugWieldableTypeString = DebugWieldableTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AIDescString                   (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnAINoTrigger(const class FString& AIDescString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger");

	struct
	{
		class FString                  AIDescString;
	} params;

	params.AIDescString = AIDescString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AIDescString                   (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnAIAtNearestAISpawnPoint(const class FString& AIDescString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint");

	struct
	{
		class FString                  AIDescString;
	} params;

	params.AIDescString = AIDescString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AITypeString                   (Parm, ZeroConstructor)
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnAIAtLocationDelayed(const class FString& AITypeString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed");

	struct
	{
		class FString                  AITypeString;
		float                          LocationX;
		float                          LocationY;
		float                          LocationZ;
		float                          Yaw;
		float                          Delay;
	} params;

	params.AITypeString = AITypeString;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;
	params.Yaw = Yaw;
	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AITypeString                   (Parm, ZeroConstructor)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnAIAtCurrentLocationDelayed(const class FString& AITypeString, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed");

	struct
	{
		class FString                  AITypeString;
		float                          Delay;
	} params;

	params.AITypeString = AITypeString;
	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAI
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AIDescString                   (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnAI(const class FString& AIDescString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAI");

	struct
	{
		class FString                  AIDescString;
	} params;

	params.AIDescString = AIDescString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SlowMotionOverride
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SlowMotionOverride(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SlowMotionOverride");

	struct
	{
		bool                           InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex
// (Final, Exec, Native, Public)
// Parameters:
// int                            KeelOverConfigIndex            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SinkShipWithKeelOverIndex(int KeelOverConfigIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex");

	struct
	{
		int                            KeelOverConfigIndex;
	} params;

	params.KeelOverConfigIndex = KeelOverConfigIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkShipByActorId
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ShipActorIdString              (Parm, ZeroConstructor)

void UAthenaCheatManager::SinkShipByActorId(const class FString& ShipActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkShipByActorId");

	struct
	{
		class FString                  ShipActorIdString;
	} params;

	params.ShipActorIdString = ShipActorIdString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SinkShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkShip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkAllBarrels
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SinkAllBarrels()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkAllBarrels");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkAllAIShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SinkAllAIShips()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkAllAIShips");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowRandomCrewMemberGamerCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowAllWelds
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowAllWelds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowAllWelds");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowAllItemsInRadialInventory
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowAllItemsInRadialInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowAllItemsInRadialInventory");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::ShowAllianceStatus(const class FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus");

	struct
	{
		class FString                  CrewId;
	} params;

	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne
// (Final, Exec, Native, Public)
// Parameters:
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ShipwrecksSpawnOne(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne");

	struct
	{
		float                          SpawnLocationX;
		float                          SpawnLocationY;
		float                          SpawnLocationZ;
	} params;

	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShipwrecksRegen()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShipwrecksDrawDebugBeacons
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnabled                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ShipwrecksDrawDebugBeacons(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipwrecksDrawDebugBeacons");

	struct
	{
		bool                           bEnabled;
	} params;

	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShipUpdateMassProperies()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetWheelAngle
// (Final, Exec, Native, Public)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetWheelAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetWheelAngle");

	struct
	{
		float                          Angle;
	} params;

	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut
// (Final, Exec, Native, Public)
// Parameters:
// bool                           WeaponsLockedOut               (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetWeaponsLockedOut(bool WeaponsLockedOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut");

	struct
	{
		bool                           WeaponsLockedOut;
	} params;

	params.WeaponsLockedOut = WeaponsLockedOut;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetWaveFlag
// (Final, Exec, Native, Public)
// Parameters:
// int                            InFlag                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetWaveFlag(int InFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetWaveFlag");

	struct
	{
		int                            InFlag;
	} params;

	params.InFlag = InFlag;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams
// (Final, Exec, Native, Public)
// Parameters:
// float                          Amplitude                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          WaveLength                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PropagationSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetWaterWaveParams(float Amplitude, float WaveLength, float PropagationSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams");

	struct
	{
		float                          Amplitude;
		float                          WaveLength;
		float                          PropagationSpeed;
	} params;

	params.Amplitude = Amplitude;
	params.WaveLength = WaveLength;
	params.PropagationSpeed = PropagationSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetVoiceChatEndpointXAudio2()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetVoiceChatEndpointWwise()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetUnattenuatedChatMixingMethodToUseWwise()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetUnattenuatedChatMixingMethodToUsePlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetTinySharkToOneHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetTimeScalar
// (Final, Exec, Native, Public)
// Parameters:
// float                          TimeScalar                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetTimeScalar(float TimeScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTimeScalar");

	struct
	{
		float                          TimeScalar;
	} params;

	params.TimeScalar = TimeScalar;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes
// (Final, Exec, Native, Public)
// Parameters:
// int                            Hours                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Minutes                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetTimeHoursAndMinutes(int Hours, int Minutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes");

	struct
	{
		int                            Hours;
		int                            Minutes;
	} params;

	params.Hours = Hours;
	params.Minutes = Minutes;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetTime
// (Final, Exec, Native, Public)
// Parameters:
// int                            Hours                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetTime(int Hours)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTime");

	struct
	{
		int                            Hours;
	} params;

	params.Hours = Hours;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipYaw
// (Final, Exec, Native, Public)
// Parameters:
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetShipYaw(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipYaw");

	struct
	{
		float                          Yaw;
	} params;

	params.Yaw = Yaw;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipWheelFullyRepaired()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipWheelFullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipRoll
// (Final, Exec, Native, Public)
// Parameters:
// float                          Roll                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetShipRoll(float Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipRoll");

	struct
	{
		float                          Roll;
	} params;

	params.Roll = Roll;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipFullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipCapstanFullyRepaired()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipCapstanFullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend
// (Final, Exec, Native, Public)
// Parameters:
// float                          UnaryBlend                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetShipBuoyancyBlend(float UnaryBlend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend");

	struct
	{
		float                          UnaryBlend;
	} params;

	params.UnaryBlend = UnaryBlend;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions
// (Final, Exec, Native, Public)
// Parameters:
// float                          Proportion                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetSailLoweredProportions(float Proportion)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions");

	struct
	{
		float                          Proportion;
	} params;

	params.Proportion = Proportion;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetSailAngles
// (Final, Exec, Native, Public)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetSailAngles(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetSailAngles");

	struct
	{
		float                          Angle;
	} params;

	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones
// (Final, Exec, Native, Public)
// Parameters:
// bool                           PreventLeaking                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetPreventLeakingOnAllDamageZones(bool PreventLeaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones");

	struct
	{
		bool                           PreventLeaking;
	} params;

	params.PreventLeaking = PreventLeaking;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetPlayerVisibleToAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetPlayerInvisibleToAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPhotoMode
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetPhotoMode(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPhotoMode");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetNonCrewChatSpatialisation(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled
// (Exec, Native, Public)
// Parameters:
// bool                           Disabled                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetKnockbackDisabled(bool Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled");

	struct
	{
		bool                           Disabled;
	} params;

	params.Disabled = Disabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetIdleDisconnectEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetGrogSecondary
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetGrogSecondary(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetGrogSecondary");

	struct
	{
		bool                           InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetFOV
// (Final, Exec, Native, Public)
// Parameters:
// float                          InNewFOV                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetFOV(float InNewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetFOV");

	struct
	{
		float                          InNewFOV;
	} params;

	params.InNewFOV = InNewFOV;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour
// (Final, Exec, Native, Public)
// Parameters:
// int                            InFlameOfFateType              (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetFlameOfFateColour(int InFlameOfFateType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour");

	struct
	{
		int                            InFlameOfFateType;
	} params;

	params.InFlameOfFateType = InFlameOfFateType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetDebugItemSource
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  Source                         (Parm, ZeroConstructor)

void UAthenaCheatManager::SetDebugItemSource(const class FString& Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDebugItemSource");

	struct
	{
		class FString                  Source;
	} params;

	params.Source = Source;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bUseProjectileChannel          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetDebugCameraUseProjectileCollisionChannel(bool bUseProjectileChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel");

	struct
	{
		bool                           bUseProjectileChannel;
	} params;

	params.bUseProjectileChannel = bUseProjectileChannel;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer
// (Final, Exec, Native, Public)
// Parameters:
// float                          InSpawnTimer                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetDeathPenaltyRespawnTimer(float InSpawnTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer");

	struct
	{
		float                          InSpawnTimer;
	} params;

	params.InSpawnTimer = InSpawnTimer;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetCapstanPosition
// (Final, Exec, Native, Public)
// Parameters:
// float                          Position                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetCapstanPosition(float Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCapstanPosition");

	struct
	{
		float                          Position;
	} params;

	params.Position = Position;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  TeamAString                    (Parm, ZeroConstructor)
// class FString                  TeamBString                    (Parm, ZeroConstructor)
// class FString                  AttitudeString                 (Parm, ZeroConstructor)

void UAthenaCheatManager::SetAITeamAttitude(const class FString& TeamAString, const class FString& TeamBString, const class FString& AttitudeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude");

	struct
	{
		class FString                  TeamAString;
		class FString                  TeamBString;
		class FString                  AttitudeString;
	} params;

	params.TeamAString = TeamAString;
	params.TeamBString = TeamBString;
	params.AttitudeString = AttitudeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SendStatEvent
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  StatName                       (Parm, ZeroConstructor)
// uint64_t                       StatValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SendStatEvent(const class FString& StatName, uint64_t StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SendStatEvent");

	struct
	{
		class FString                  StatName;
		uint64_t                       StatValue;
	} params;

	params.StatName = StatName;
	params.StatValue = StatValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CompanyNameAndRewardIdSeparatedByColon (Parm, ZeroConstructor)

void UAthenaCheatManager::SendRewardRequestEvent(const class FString& CompanyNameAndRewardIdSeparatedByColon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent");

	struct
	{
		class FString                  CompanyNameAndRewardIdSeparatedByColon;
	} params;

	params.CompanyNameAndRewardIdSeparatedByColon = CompanyNameAndRewardIdSeparatedByColon;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SelectTale
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  SourceAssetName                (Parm, ZeroConstructor)

void UAthenaCheatManager::SelectTale(const class FString& SourceAssetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SelectTale");

	struct
	{
		class FString                  SourceAssetName;
	} params;

	params.SourceAssetName = SourceAssetName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ScuttleShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::ScuttleShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ScuttleShip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ScreenFadeStart
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ScreenFadeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ScreenFadeStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ScreenFadeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerSkipToNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerAdvance
// (Final, Exec, Native, Public)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SchedulerAdvance(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerAdvance");

	struct
	{
		float                          Time;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SailShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::SailShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SailShip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy
// (Final, Exec, Native, Public)
// Parameters:
// float                          SecondsToRewindBy              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::RewindPhysicsSceneBy(float SecondsToRewindBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy");

	struct
	{
		float                          SecondsToRewindBy;
	} params;

	params.SecondsToRewindBy = SecondsToRewindBy;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ShipActorIdString              (Parm, ZeroConstructor)

void UAthenaCheatManager::ResurfaceShipByActorId(const class FString& ShipActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId");

	struct
	{
		class FString                  ShipActorIdString;
	} params;

	params.ShipActorIdString = ShipActorIdString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RestockIslandBarrels()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RestockAllReplenishables()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RespawnAllIslandItemSpawners()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimerWithTime
// (Final, Exec, Native, Public)
// Parameters:
// float                          Timer                          (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ResetTinySharkSpawnTimerWithTime(float Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimerWithTime");

	struct
	{
		float                          Timer;
	} params;

	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetTinySharkSpawnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetStats
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetMouseDelta
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetMouseDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetMouseDelta");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetDemoSession
// (Final, Exec, Native, Public)
// Parameters:
// bool                           StartNewSession                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ResetDemoSession(bool StartNewSession)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetDemoSession");

	struct
	{
		bool                           StartNewSession;
	} params;

	params.StartNewSession = StartNewSession;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetAITeamAttitudes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReplenishShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReplenishShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReplenishShip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ShipActorIdConsoleString       (Parm, ZeroConstructor)

void UAthenaCheatManager::ReplaceShipWithSmallShip(const class FString& ShipActorIdConsoleString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip");

	struct
	{
		class FString                  ShipActorIdConsoleString;
	} params;

	params.ShipActorIdConsoleString = ShipActorIdConsoleString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RepairShipAndClearInternalWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RenameTreasure
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  InVendorName                   (Parm, ZeroConstructor)

void UAthenaCheatManager::RenameTreasure(const class FString& InVendorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RenameTreasure");

	struct
	{
		class FString                  InVendorName;
	} params;

	params.InVendorName = InVendorName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot
// (Final, Exec, Native, Public)
// Parameters:
// int                            SlotIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::RemoveItemInSlot(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot");

	struct
	{
		int                            SlotIndex;
	} params;

	params.SlotIndex = SlotIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveAllFog
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemoveAllFog()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveAllFog");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PushShip
// (Final, Exec, Native, Public)
// Parameters:
// float                          FwdSpdInMetersPerSecond        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::PushShip(float FwdSpdInMetersPerSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PushShip");

	struct
	{
		float                          FwdSpdInMetersPerSecond;
	} params;

	params.FwdSpdInMetersPerSecond = FwdSpdInMetersPerSecond;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PullLatestEmblemProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PrintTime
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PrintTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrintTime");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PrintAllNetworkActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAthenaCheatManager::PlayerAnimationOverride(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride");

	struct
	{
		struct FName                   Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  InShipActorIdConsoleString     (Parm, ZeroConstructor)
// int                            InCataloguePartIndex           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InCataloguePartCustomisationIndex (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::OverrideShipPartFromCatalogue(const class FString& InShipActorIdConsoleString, int InCataloguePartIndex, int InCataloguePartCustomisationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue");

	struct
	{
		class FString                  InShipActorIdConsoleString;
		int                            InCataloguePartIndex;
		int                            InCataloguePartCustomisationIndex;
	} params;

	params.InShipActorIdConsoleString = InShipActorIdConsoleString;
	params.InCataloguePartIndex = InCataloguePartIndex;
	params.InCataloguePartCustomisationIndex = InCataloguePartCustomisationIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor
// (Final, Exec, Native, Public)

void UAthenaCheatManager::OpenSkeletonFortDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest
// (Final, Exec, Native, Public)

void UAthenaCheatManager::MessageBoxOnGraphicsThreadTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead
// (Final, Exec, Native, Public)

void UAthenaCheatManager::MakeSharksBrainDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LogShipHierarchy
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LogShipHierarchy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LogShipHierarchy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LogServerShipHierarchy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LogAITeamAttitudes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LocallyUnBreakLeg()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LeaveAlliance
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::LeaveAlliance(const class FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LeaveAlliance");

	struct
	{
		class FString                  CrewId;
	} params;

	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LaunchPlayer
// (Final, Exec, Native, Public)
// Parameters:
// float                          Velocity                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::LaunchPlayer(float Velocity, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LaunchPlayer");

	struct
	{
		float                          Velocity;
		float                          Angle;
	} params;

	params.Velocity = Velocity;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenSetTentaclesToOneHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleThrowPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage
// (Final, Exec, Native, Public)
// Parameters:
// float                          Damage                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::KrakenAnimatedTentacleTakeDamage(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage");

	struct
	{
		float                          Damage;
	} params;

	params.Damage = Damage;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleSwallowPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleSuckPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentaclePowerSlamPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleIngestPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleDropPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleDespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleDefeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  HoldState                      (Parm, ZeroConstructor)

void UAthenaCheatManager::KrakenAnimatedTentacleChangePlayerHoldState(const class FString& HoldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState");

	struct
	{
		class FString                  HoldState;
	} params;

	params.HoldState = HoldState;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillCrew
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::KillCrew(const class FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillCrew");

	struct
	{
		class FString                  CrewId;
	} params;

	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllPlayers");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllCrews
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllCrews()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllCrews");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.JoinAlliance
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  OfferingCrew                   (Parm, ZeroConstructor)
// class FString                  AcceptingCrew                  (Parm, ZeroConstructor)

void UAthenaCheatManager::JoinAlliance(const class FString& OfferingCrew, const class FString& AcceptingCrew)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.JoinAlliance");

	struct
	{
		class FString                  OfferingCrew;
		class FString                  AcceptingCrew;
	} params;

	params.OfferingCrew = OfferingCrew;
	params.AcceptingCrew = AcceptingCrew;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IPGOverride
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   BodyShape                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::IPGOverride(const struct FName& BodyShape, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IPGOverride");

	struct
	{
		struct FName                   BodyShape;
		float                          Distance;
	} params;

	params.BodyShape = BodyShape;
	params.Distance = Distance;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IPGLoad
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  path                           (Parm, ZeroConstructor)

void UAthenaCheatManager::IPGLoad(const class FString& path)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IPGLoad");

	struct
	{
		class FString                  path;
	} params;

	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::InfiniteGunAmmo(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IncrementTime
// (Final, Exec, Native, Public)
// Parameters:
// int                            Hours                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Minutes                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::IncrementTime(int Hours, int Minutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IncrementTime");

	struct
	{
		int                            Hours;
		int                            Minutes;
	} params;

	params.Hours = Hours;
	params.Minutes = Minutes;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthSet
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HealthSet(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthSet");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthReset
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HealthReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthReset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthAdjust
// (Final, Exec, Native, Public)
// Parameters:
// float                          Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HealthAdjust(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthAdjust");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.God
// (Exec, Native, Public)

void UAthenaCheatManager::God()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.God");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceOpenShop
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceOpenShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceOpenShop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceCloseShop
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceCloseShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceCloseShop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.Fly
// (Exec, Native, Public)

void UAthenaCheatManager::Fly()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Fly");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex
// (Final, Exec, Native, Public)
// Parameters:
// float                          NormalisedWaterAmount          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            KeelOverConfigIndex            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::FloodShipWithKeelOverIndex(float NormalisedWaterAmount, int KeelOverConfigIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex");

	struct
	{
		float                          NormalisedWaterAmount;
		int                            KeelOverConfigIndex;
	} params;

	params.NormalisedWaterAmount = NormalisedWaterAmount;
	params.KeelOverConfigIndex = KeelOverConfigIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FloodShip
// (Final, Exec, Native, Public)
// Parameters:
// float                          NormalisedWaterAmount          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::FloodShip(float NormalisedWaterAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FloodShip");

	struct
	{
		float                          NormalisedWaterAmount;
	} params;

	params.NormalisedWaterAmount = NormalisedWaterAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests
// (Final, Exec, Native, Public)

void UAthenaCheatManager::FakeMigrateBountyQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EquipPirateTitle
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  PirateTitleType                (Parm, ZeroConstructor)

void UAthenaCheatManager::EquipPirateTitle(const class FString& PirateTitleType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EquipPirateTitle");

	struct
	{
		class FString                  PirateTitleType;
	} params;

	params.PirateTitleType = PirateTitleType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EquipCompassInLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EndDemoSession
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EndDemoSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EndDemoSession");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableVoiceChatMeteringForOutgoingSignals(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableVoiceChatMeteringForIncomingSignals(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableNTP
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableNTP(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableNTP");

	struct
	{
		bool                           Enable;
	} params;

	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableMermaidSpawning(int Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning");

	struct
	{
		int                            Enable;
	} params;

	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableMermaidDeletion(int Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion");

	struct
	{
		int                            Enable;
	} params;

	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableHeadphoneMixing(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera
// (Final, Exec, Native, Protected)

void UAthenaCheatManager::EnableCinematicCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableBeaconOnAllMermaids(int Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids");

	struct
	{
		int                            Enable;
	} params;

	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EnableAIBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DrawVideprinter
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  Id                             (Parm, ZeroConstructor)
// bool                           Active                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DrawVideprinter(const class FString& Id, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawVideprinter");

	struct
	{
		class FString                  Id;
		bool                           Active;
	} params;

	params.Id = Id;
	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DrawTreasureDebug(int Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug");

	struct
	{
		int                            Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DrawTemporaryLandmarkDebug(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged
// (Final, Exec, Native, Public)
// Parameters:
// float                          Range                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DrawNearbyAISpawnPointsRanged(float Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged");

	struct
	{
		float                          Range;
	} params;

	params.Range = Range;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DrawNearbyAISpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DiveShipByActorId
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ShipActorIdString              (Parm, ZeroConstructor)

void UAthenaCheatManager::DiveShipByActorId(const class FString& ShipActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DiveShipByActorId");

	struct
	{
		class FString                  ShipActorIdString;
	} params;

	params.ShipActorIdString = ShipActorIdString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  StatName                       (Parm, ZeroConstructor)

void UAthenaCheatManager::DisplaySingleEmblemProgress(const class FString& StatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress");

	struct
	{
		class FString                  StatName;
	} params;

	params.StatName = StatName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayServersideHitsAtPlayerPosWithDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos
// (Final, Exec, Native, Public)
// Parameters:
// uint32_t                       NumSamplesPerDimension         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceBetweenSamples         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          TestHeight                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DisplayServersideHitsAtPlayerPos(uint32_t NumSamplesPerDimension, float DistanceBetweenSamples, float TestHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos");

	struct
	{
		uint32_t                       NumSamplesPerDimension;
		float                          DistanceBetweenSamples;
		float                          TestHeight;
	} params;

	params.NumSamplesPerDimension = NumSamplesPerDimension;
	params.DistanceBetweenSamples = DistanceBetweenSamples;
	params.TestHeight = TestHeight;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLoadingScreenTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenGame
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLoadingScreenGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenGame");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLoadingScreenBoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLandmarkValidTreasureLocationsForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLandmarkRegions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLandmarkNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DisplayFallDamageDebug(int Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug");

	struct
	{
		int                            Enable;
	} params;

	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Flag                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DisplayDrunkenness(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness");

	struct
	{
		bool                           Flag;
	} params;

	params.Flag = Flag;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera
// (Final, Exec, Native, Protected)

void UAthenaCheatManager::DisableCinematicCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisableAIBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyShip
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ShipActorIdConsoleString       (Parm, ZeroConstructor)

void UAthenaCheatManager::DestroyShip(const class FString& ShipActorIdConsoleString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyShip");

	struct
	{
		class FString                  ShipActorIdConsoleString;
	} params;

	params.ShipActorIdConsoleString = ShipActorIdConsoleString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyMyShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::DestroyMyShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyMyShip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyKraken
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DestroyKraken()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyKraken");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DestroyAllTreasureChests()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DestroyAllTinySharks()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyAllShips
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::DestroyAllShips()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyAllShips");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AITypeString                   (Parm, ZeroConstructor)
// int                            NumToDespawn                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DespawnNumberOfAI(const class FString& AITypeString, int NumToDespawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI");

	struct
	{
		class FString                  AITypeString;
		int                            NumToDespawn;
	} params;

	params.AITypeString = AITypeString;
	params.NumToDespawn = NumToDespawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DespawnFirstAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DespawnFirstAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DespawnFirstAI");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DespawnAI
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AITypeString                   (Parm, ZeroConstructor)

void UAthenaCheatManager::DespawnAI(const class FString& AITypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DespawnAI");

	struct
	{
		class FString                  AITypeString;
	} params;

	params.AITypeString = AITypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DeleteVoyageHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DeleteAllMermaids()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DebugIslandDelta
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DebugIslandDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DebugIslandDelta");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// class FString                  FortName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaCheatManager::DeactivateSkellyFort(const class FString& FortName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort");

	struct
	{
		class FString                  FortName;
	} params;

	params.FortName = FortName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)
// float                          Strength                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraLocationX                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraLocationY                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraLocationZ                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraForwardDirectionX        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraForwardDirectionY        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraForwardDirectionZ        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DamageShipFromRemoteActor(const class FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor");

	struct
	{
		class FString                  ActorIdString;
		float                          Strength;
		float                          CameraLocationX;
		float                          CameraLocationY;
		float                          CameraLocationZ;
		float                          CameraForwardDirectionX;
		float                          CameraForwardDirectionY;
		float                          CameraForwardDirectionZ;
	} params;

	params.ActorIdString = ActorIdString;
	params.Strength = Strength;
	params.CameraLocationX = CameraLocationX;
	params.CameraLocationY = CameraLocationY;
	params.CameraLocationZ = CameraLocationZ;
	params.CameraForwardDirectionX = CameraForwardDirectionX;
	params.CameraForwardDirectionY = CameraForwardDirectionY;
	params.CameraForwardDirectionZ = CameraForwardDirectionZ;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DamageShip
// (Final, Exec, Native, Public)
// Parameters:
// float                          Strength                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DamageShip(float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DamageShip");

	struct
	{
		float                          Strength;
	} params;

	params.Strength = Strength;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)
// float                          Strength                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraLocationX                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraLocationY                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraLocationZ                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraForwardDirectionX        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraForwardDirectionY        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraForwardDirectionZ        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DamagePlayerFromRemoteActor(const class FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor");

	struct
	{
		class FString                  ActorIdString;
		float                          Strength;
		float                          CameraLocationX;
		float                          CameraLocationY;
		float                          CameraLocationZ;
		float                          CameraForwardDirectionX;
		float                          CameraForwardDirectionY;
		float                          CameraForwardDirectionZ;
	} params;

	params.ActorIdString = ActorIdString;
	params.Strength = Strength;
	params.CameraLocationX = CameraLocationX;
	params.CameraLocationY = CameraLocationY;
	params.CameraLocationZ = CameraLocationZ;
	params.CameraForwardDirectionX = CameraForwardDirectionX;
	params.CameraForwardDirectionY = CameraForwardDirectionY;
	params.CameraForwardDirectionZ = CameraForwardDirectionZ;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DamagePlayer
// (Final, Exec, Native, Public)
// Parameters:
// float                          Strength                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DamagePlayer(float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DamagePlayer");

	struct
	{
		float                          Strength;
	} params;

	params.Strength = Strength;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CureAllAilings
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::CureAllAilings()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CureAllAilings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CompleteVoyage
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CompleteVoyage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CompleteVoyage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CompleteActiveQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CloseSkeletonFortDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CloseLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearVoiceChatMeters()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearSlowMotionOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearShipRestockingTimeouts
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearShipRestockingTimeouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearShipRestockingTimeouts");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearGrogSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearAllItemsInInventory
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearAllItemsInInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearAllItemsInInventory");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CheckLandmarkValidTreasureLocationsAtPlayerPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CheckLandmarkRelativeToIslandCalculation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CapsizeShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CapsizeShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CapsizeShip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelVoyage
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelVoyage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelVoyage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelEmergentVoyages()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelAllCrewVoyages()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelActiveAIShipEncounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.BreakLeg
// (Final, Exec, Native, Public)

void UAthenaCheatManager::BreakLeg()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.BreakLeg");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::BlockMigrationForPlayer(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ApplyVenomWithParams
// (Final, Exec, Native, Public)
// Parameters:
// float                          InitialDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamagePerSecond                (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageOverTimeDuration         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ApplyVenomWithParams(float InitialDamage, float DamagePerSecond, float DamageOverTimeDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyVenomWithParams");

	struct
	{
		float                          InitialDamage;
		float                          DamagePerSecond;
		float                          DamageOverTimeDuration;
	} params;

	params.InitialDamage = InitialDamage;
	params.DamagePerSecond = DamagePerSecond;
	params.DamageOverTimeDuration = DamageOverTimeDuration;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ApplyVenom
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ApplyVenom()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyVenom");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones
// (Final, Exec, Native, Public)
// Parameters:
// float                          Damage                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ApplyDamageToAllDamageZones(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones");

	struct
	{
		float                          Damage;
	} params;

	params.Damage = Damage;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CannonballTypeString           (Parm, ZeroConstructor)

void UAthenaCheatManager::ApplyCursedCannonballStatusToShip(const class FString& CannonballTypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip");

	struct
	{
		class FString                  CannonballTypeString;
	} params;

	params.CannonballTypeString = CannonballTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CannonballTypeString           (Parm, ZeroConstructor)

void UAthenaCheatManager::ApplyCursedCannonballStatusToPlayer(const class FString& CannonballTypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer");

	struct
	{
		class FString                  CannonballTypeString;
	} params;

	params.CannonballTypeString = CannonballTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AIPlayerShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AIPlayerShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AIPlayerShip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddShipToCrew
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)
// class FString                  CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::AddShipToCrew(const class FString& ActorIdString, const class FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddShipToCrew");

	struct
	{
		class FString                  ActorIdString;
		class FString                  CrewId;
	} params;

	params.ActorIdString = ActorIdString;
	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)
// class FString                  CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::AddPlayerToCrew(const class FString& ActorIdString, const class FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew");

	struct
	{
		class FString                  ActorIdString;
		class FString                  CrewId;
	} params;

	params.ActorIdString = ActorIdString;
	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddDrunkenness
// (Final, Exec, Native, Public)
// Parameters:
// int                            DrunkennessType                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DrunkennessChange              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::AddDrunkenness(int DrunkennessType, float DrunkennessChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddDrunkenness");

	struct
	{
		int                            DrunkennessType;
		float                          DrunkennessChange;
	} params;

	params.DrunkennessType = DrunkennessType;
	params.DrunkennessChange = DrunkennessChange;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// class FString                  FortName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaCheatManager::ActivateSkellyFort(const class FString& FortName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort");

	struct
	{
		class FString                  FortName;
	} params;

	params.FortName = FortName;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
