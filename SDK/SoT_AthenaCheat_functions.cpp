// Sea of Thieves (2.1) SDK

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindTriggerChange"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindSetVector"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindSetMagnitude"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindSetDirection"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindReloadParams"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindPrintDirection
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindPrintDirection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindPrintDirection"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindEnableDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindEnableDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindEnableDebug"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindDisableDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindDisableDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindDisableDebug"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindAlignWithCamera()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.Walk
// (Exec, Native, Public)

void UAthenaCheatManager::Walk()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.Walk"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.VomitWithType"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.Vomit"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew
// (Final, Exec, Native, Public)

void UAthenaCheatManager::UnlockTradeRouteSelectionForMyCrew()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew
// (Final, Exec, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FGuid                   CrewId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAthenaCheatManager::UnlockTradeRouteSelectionForCrew(const struct FGuid& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew"));

	struct
	{
		struct FGuid                   CrewId;
	} params;

	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.UnlockEntitlement
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  EntitlementId                  (Parm, ZeroConstructor)

void UAthenaCheatManager::UnlockEntitlement(const class FString& EntitlementId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.UnlockEntitlement"));

	struct
	{
		class FString                  EntitlementId;
	} params;

	params.EntitlementId = EntitlementId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements
// (Final, Exec, Native, Public)
// Parameters:
// int                            TrueFalse                      (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::UnlockAllEntitlements(int TrueFalse)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.UnBreakLeg
// (Final, Exec, Native, Public)

void UAthenaCheatManager::UnBreakLeg()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.UnBreakLeg"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TutorialAction"));

	struct
	{
		class FString                  ActionTypeString;
	} params;

	params.ActionTypeString = ActionTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerTunnelMigration
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerTunnelMigration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerTunnelMigration"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   Identifier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TriggerRewardNotification(struct FName* Identifier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange"));

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


// Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerContestMatchmakingMigration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerContestBannerUnfurl
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerContestBannerUnfurl()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerContestBannerUnfurl"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerAIShipTimerBattle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerAIShipPassive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerAIShipEncounter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerAIShipAggressive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleVideprinter"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleSeaClueLocationQueryDebugDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleRetailDrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleNearestSuperheatedWater()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleNearestLava
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleNearestLava()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleNearestLava"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ToggleMigrationPointOfInterestChecks(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks"));

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleIslandSelectionDebugDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleFastShipControls()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDrowning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDrowning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDrowning"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDrawShipSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDrawAboveIslandBounds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDisplayCannonAISpawnerZones()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::ToggleDebugFlying()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDeathCamera()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDamageAllowedToPlayerShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleContestScoreDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleCinematicCamera()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleAttributeOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TestCrashDumpCreationOnRunnableThread()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TestCrashDumpCreationOnMainThread()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportToShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportToShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportToPlayerStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportToNearestTreasureLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportToLocation"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportToHideout"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportToAggressiveGhostShipEncounter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportShip"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          OffsetX                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetY                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetZ                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TeleportPlayerToOffsetAndReturn(float OffsetX, float OffsetY, float OffsetZ, float ReturnTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn"));

	struct
	{
		float                          OffsetX;
		float                          OffsetY;
		float                          OffsetZ;
		float                          ReturnTime;
	} params;

	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;
	params.OffsetZ = OffsetZ;
	params.ReturnTime = ReturnTime;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportPlayerToKraken()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::TeleportPlayersCrewShipToPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportOutOfHideout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportAllPlayersToPlayerStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportAllCrewsToShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportAllCrewsToCrewSpawnLocations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)
// int                            DestinationActorType           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TeleportActorToTrackedActorType(const class FString& ActorIdString, int DestinationActorType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType"));

	struct
	{
		class FString                  ActorIdString;
		int                            DestinationActorType;
	} params;

	params.ActorIdString = ActorIdString;
	params.DestinationActorType = DestinationActorType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ControllerActorIdString        (Parm, ZeroConstructor)
// class FString                  TeleportLocationActorIdString  (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportActorToTeleportLocationActor(const class FString& ControllerActorIdString, const class FString& TeleportLocationActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland"));

	struct
	{
		class FString                  ActorIdString;
		class FString                  IslandName;
	} params;

	params.ActorIdString = ActorIdString;
	params.IslandName = IslandName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportActorToDigSite(const class FString& ActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite"));

	struct
	{
		class FString                  ActorIdString;
	} params;

	params.ActorIdString = ActorIdString;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SuperSailor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StoreWieldedItemInBootyStorageInCurrentIsland()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  IslandName                     (Parm, ZeroConstructor)

void UAthenaCheatManager::StoreWieldedItemInBootyStorage(const class FString& IslandName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage"));

	struct
	{
		class FString                  IslandName;
	} params;

	params.IslandName = IslandName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StoreShipLocation
// (Final, Exec, Native, Public)
// Parameters:
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::StoreShipLocation(float LocationX, float LocationY, float LocationZ, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StoreShipLocation"));

	struct
	{
		float                          LocationX;
		float                          LocationY;
		float                          LocationZ;
		float                          Yaw;
	} params;

	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;
	params.Yaw = Yaw;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StopShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::StopShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StopShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StopPetHangout
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StopPetHangout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StopPetHangout"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StopLocalSequences
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StopLocalSequences()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StopLocalSequences"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StopAllShips
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::StopAllShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StopAllShips"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StopAllPetsHangout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartVoyage
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  SourceAssetName                (Parm, ZeroConstructor)
// bool                           Development                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::StartVoyage(const class FString& SourceAssetName, bool Development)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartVoyage"));

	struct
	{
		class FString                  SourceAssetName;
		bool                           Development;
	} params;

	params.SourceAssetName = SourceAssetName;
	params.Development = Development;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartSicknessOnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  RomeVoyageString               (Parm, ZeroConstructor)

void UAthenaCheatManager::StartSelectedRomeVoyage(const class FString& RomeVoyageString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage"));

	struct
	{
		class FString                  RomeVoyageString;
	} params;

	params.RomeVoyageString = RomeVoyageString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartNearestVolcano
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartNearestVolcano()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartNearestVolcano"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartNearestGeysers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartNearestGeysers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartNearestGeysers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartNearestEarthquake()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartDemoSession
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartDemoSession()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartDemoSession"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC
// (Final, Exec, Native, Public)
// Parameters:
// int                            NumOfCrates                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::StartCargoRunFromNearestNPC(int NumOfCrates)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC"));

	struct
	{
		int                            NumOfCrates;
	} params;

	params.NumOfCrates = NumOfCrates;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartAshenLordGeysers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartAllVolcanos
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartAllVolcanos()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartAllVolcanos"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartAllCrewVoyages()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpireStreamOut
// (Final, Exec, Native, Public)
// Parameters:
// int                            SpireIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpireStreamOut(int SpireIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpireStreamOut"));

	struct
	{
		int                            SpireIndex;
	} params;

	params.SpireIndex = SpireIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpireStreamIn
// (Final, Exec, Native, Public)
// Parameters:
// int                            SpireIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpireStreamIn(int SpireIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpireStreamIn"));

	struct
	{
		int                            SpireIndex;
	} params;

	params.SpireIndex = SpireIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpinShip
// (Final, Exec, Native, Public)
// Parameters:
// float                          YawSpdInDegreesPerSecond       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpinShip(float YawSpdInDegreesPerSecond)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpinShip"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnWatercraft"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation"));

	struct
	{
		int                            ControllerParamIndex;
		int                            PartIndex;
	} params;

	params.ControllerParamIndex = ControllerParamIndex;
	params.PartIndex = PartIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// class FString                  FortEventName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaCheatManager::SpawnStrongholdKeyFromGameEventType(const class FString& FortEventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType"));

	struct
	{
		class FString                  FortEventName;
	} params;

	params.FortEventName = FortEventName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnStrongholdKey()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnSmallShip"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnShipOfType"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnShip"));

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


// Function AthenaCheat.AthenaCheatManager.SpawnRomeTreasureChestOfType
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ChestTypeString                (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnRomeTreasureChestOfType(const class FString& ChestTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnRomeTreasureChestOfType"));

	struct
	{
		class FString                  ChestTypeString;
	} params;

	params.ChestTypeString = ChestTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AIDescString                   (Parm, ZeroConstructor)
// int                            NumToSpawn                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnNumberOfAI(const class FString& AIDescString, int NumToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI"));

	struct
	{
		class FString                  AIDescString;
		int                            NumToSpawn;
	} params;

	params.AIDescString = AIDescString;
	params.NumToSpawn = NumToSpawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnNightmareAggressiveGhostShipEncountersRandom()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnNightmareAggressiveGhostShipEncountersNearToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// class FString                  ChestTypeString                (Parm, OutParm, ZeroConstructor)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnMultipleTreasureChestsOfType(int Num, class FString* ChestTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType"));

	struct
	{
		class FString                  ChestTypeString;
		int                            Num;
	} params;

	params.Num = Num;

	UObject::ProcessEvent(fn, &params);

	if (ChestTypeString != nullptr)
		*ChestTypeString = params.ChestTypeString;
}


// Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  MessageInABottleTypeString     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnMessageInABottle(const class FString& MessageInABottleTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnMermaid"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ItemString                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnItemOnFloor(const class FString& ItemString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor"));

	struct
	{
		class FString                  ItemString;
	} params;

	params.ItemString = ItemString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnItemInHand
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ItemString                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnItemInHand(const class FString& ItemString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnItemInHand"));

	struct
	{
		class FString                  ItemString;
	} params;

	params.ItemString = ItemString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnGoldMound
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  GoldMoundTypeString            (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnGoldMound(const class FString& GoldMoundTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnGoldMound"));

	struct
	{
		class FString                  GoldMoundTypeString;
	} params;

	params.GoldMoundTypeString = GoldMoundTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy
// (Final, Exec, Native, Public)
// Parameters:
// float                          Dormancy                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnGeyserAtPlayerLocationWithDormancy(float Dormancy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  InBaitType                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnFishAtPlayerLocation(const class FString& InBaitType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation"));

	struct
	{
		class FString                  InBaitType;
	} params;

	params.InBaitType = InBaitType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CannonballTypeString           (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnCursedCannonball(const class FString& CannonballTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate"));

	struct
	{
		class FString                  SpawnCargoRunCrateString;
	} params;

	params.SpawnCargoRunCrateString = SpawnCargoRunCrateString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer
// (Final, Exec, Native, Public)
// Parameters:
// float                          Distance                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnCabinDoorInFrontOfPlayer(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer"));

	struct
	{
		float                          Distance;
	} params;

	params.Distance = Distance;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnBountyReward
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  BountyTypeString               (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnBountyReward(const class FString& BountyTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnBountyReward"));

	struct
	{
		class FString                  BountyTypeString;
	} params;

	params.BountyTypeString = BountyTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnBootyPickupPoint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup
// (Final, Exec, Native, Public)
// Parameters:
// bool                           ForcedCloseSpawn               (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnBarrelGroup(bool ForcedCloseSpawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup"));

	struct
	{
		bool                           ForcedCloseSpawn;
	} params;

	params.ForcedCloseSpawn = ForcedCloseSpawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnAThousandTreasureChests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger"));

	struct
	{
		class FString                  AIDescString;
	} params;

	params.AIDescString = AIDescString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AIEncounterString              (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnAIEncounter(const class FString& AIEncounterString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter"));

	struct
	{
		class FString                  AIEncounterString;
	} params;

	params.AIEncounterString = AIEncounterString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AIDescString                   (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnAIAtNearestAISpawnPoint(const class FString& AIDescString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint"));

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
// class FString                  AIDescString                   (Parm, ZeroConstructor)
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnAIAtLocationDelayed(const class FString& AIDescString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed"));

	struct
	{
		class FString                  AIDescString;
		float                          LocationX;
		float                          LocationY;
		float                          LocationZ;
		float                          Yaw;
		float                          Delay;
	} params;

	params.AIDescString = AIDescString;
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
// class FString                  AIDescString                   (Parm, ZeroConstructor)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnAIAtCurrentLocationDelayed(const class FString& AIDescString, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed"));

	struct
	{
		class FString                  AIDescString;
		float                          Delay;
	} params;

	params.AIDescString = AIDescString;
	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAI
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AIDescString                   (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnAI(const class FString& AIDescString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAI"));

	struct
	{
		class FString                  AIDescString;
	} params;

	params.AIDescString = AIDescString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpireFriendlyFormation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpireEnemyFormation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnAggressiveGhostShipEncounter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::SmoulderClosestShipFire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::SmoulderAllShipFires()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SlowMotionOverride
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SlowMotionOverride(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SlowMotionOverride"));

	struct
	{
		bool                           InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SkipToEndOfOnboarding()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex
// (Final, Exec, Native, Public)
// Parameters:
// int                            KeelOverConfigIndex            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SinkShipWithKeelOverIndex(int KeelOverConfigIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SinkShipByActorId"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SinkShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SinkClosestItemProxy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkAllBarrels
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SinkAllBarrels()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SinkAllBarrels"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkAllAIShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SinkAllAIShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SinkAllAIShips"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SingleStickRight
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SingleStickRight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SingleStickRight"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SingleStickOff
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SingleStickOff()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SingleStickOff"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SingleStickLeft
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SingleStickLeft()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SingleStickLeft"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SimulateTunnelFailure()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  Id                             (Parm, ZeroConstructor)

void UAthenaCheatManager::SimulatePetReactRequest(const class FString& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest"));

	struct
	{
		class FString                  Id;
	} params;

	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  Id                             (Parm, ZeroConstructor)

void UAthenaCheatManager::SimulatePetReactCancellation(const class FString& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation"));

	struct
	{
		class FString                  Id;
	} params;

	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowTavernBanners
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowTavernBanners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowTavernBanners"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowTaleDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowTaleDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowTaleDebug"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowRandomCrewMemberGamerCard()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowEmissaryVoteIndicators()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowAllWelds
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowAllWelds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowAllWelds"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowAllRomeBeacons
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowAllRomeBeacons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowAllRomeBeacons"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne"));

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


// Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom
// (Final, Exec, Native, Public)
// Parameters:
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  WreckAsset                     (Parm, ZeroConstructor)

void UAthenaCheatManager::ShipwrecksSpawnCustom(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, const class FString& WreckAsset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom"));

	struct
	{
		float                          SpawnLocationX;
		float                          SpawnLocationY;
		float                          SpawnLocationZ;
		class FString                  WreckAsset;
	} params;

	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;
	params.WreckAsset = WreckAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShipwrecksRemoveCustom()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShipwrecksRegen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShipUpdateMassProperies()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetWheelAngle"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetWaveFlag"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetVoiceChatEndpointWwise()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetUnattenuatedChatMixingMethodToUseWwise()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetUnattenuatedChatMixingMethodToUsePlatform()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetTinySharkToOneHealth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetTimeScalar"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetTime"));

	struct
	{
		int                            Hours;
	} params;

	params.Hours = Hours;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed
// (Final, Exec, Native, Public)
// Parameters:
// int                            Seed                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetTaleSelectorSeed(int Seed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed"));

	struct
	{
		int                            Seed;
	} params;

	params.Seed = Seed;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bActive                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetShroudbreakerActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive"));

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipYaw
// (Final, Exec, Native, Public)
// Parameters:
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetShipYaw(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipYaw"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipWheelFullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipRoll"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipCapstanFullyRepaired()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipCapstanFullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetSailAngles"));

	struct
	{
		float                          Angle;
	} params;

	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetPreventLeakingOnAllShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones
// (Final, Exec, Native, Public)
// Parameters:
// bool                           PreventLeaking                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetPreventLeakingOnAllDamageZones(bool PreventLeaking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetPlayerInvisibleToAI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetPhotoMode"));

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow
// (Final, Exec, Native, Public)
// Parameters:
// float                          TimeWindow                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetPetMovementTimeWindow(float TimeWindow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow"));

	struct
	{
		float                          TimeWindow;
	} params;

	params.TimeWindow = TimeWindow;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetNonCrewChatSpatialisation(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation"));

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI
// (Final, Exec, Native, Public)
// Parameters:
// int                            MaxNumOfSpawnedActors          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetMaxNumOfSpawnedAI(int MaxNumOfSpawnedActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI"));

	struct
	{
		int                            MaxNumOfSpawnedActors;
	} params;

	params.MaxNumOfSpawnedActors = MaxNumOfSpawnedActors;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips
// (Final, Exec, Native, Public)
// Parameters:
// int                            MaxMovingPets                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetMaxMovingPetsOnShips(int MaxMovingPets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips"));

	struct
	{
		int                            MaxMovingPets;
	} params;

	params.MaxMovingPets = MaxMovingPets;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer
// (Final, Exec, Native, Public)
// Parameters:
// int                            MaxMovingPets                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetMaxMovingPetsOnServer(int MaxMovingPets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer"));

	struct
	{
		int                            MaxMovingPets;
	} params;

	params.MaxMovingPets = MaxMovingPets;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand
// (Final, Exec, Native, Public)
// Parameters:
// int                            MaxMovingPets                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetMaxMovingPetsOnLand(int MaxMovingPets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand"));

	struct
	{
		int                            MaxMovingPets;
	} params;

	params.MaxMovingPets = MaxMovingPets;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetMastsFullyRepaired()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetMastsFullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled
// (Exec, Native, Public)
// Parameters:
// bool                           Disabled                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetKnockbackDisabled(bool Disabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled"));

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bActive                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetHealthInfoReplicateOverride(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride"));

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetGrogSecondary
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetGrogSecondary(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetGrogSecondary"));

	struct
	{
		bool                           InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetGodMode
// (Final, Exec, Native, Public)
// Parameters:
// bool                           GodModeOn                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetGodMode(bool GodModeOn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetGodMode"));

	struct
	{
		bool                           GodModeOn;
	} params;

	params.GodModeOn = GodModeOn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride
// (Final, Exec, Native, Public)
// Parameters:
// int                            RequiredPlayerCount            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetGlitterbeardRequiredPlayersOverride(int RequiredPlayerCount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride"));

	struct
	{
		int                            RequiredPlayerCount;
	} params;

	params.RequiredPlayerCount = RequiredPlayerCount;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetFOV
// (Final, Exec, Native, Public)
// Parameters:
// float                          InNewFOV                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetFOV(float InNewFOV)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetFOV"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetDebugItemSource"));

	struct
	{
		class FString                  Source;
	} params;

	params.Source = Source;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage
// (Final, Exec, Native, Public)
// Parameters:
// int                            InStage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetDebugHealthStage(int InStage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage"));

	struct
	{
		int                            InStage;
	} params;

	params.InStage = InStage;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bUseProjectileChannel          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetDebugCameraUseProjectileCollisionChannel(bool bUseProjectileChannel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer"));

	struct
	{
		float                          InSpawnTimer;
	} params;

	params.InSpawnTimer = InSpawnTimer;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InAllowDamage                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetDamageAllowedToPlayerShip(bool InAllowDamage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip"));

	struct
	{
		bool                           InAllowDamage;
	} params;

	params.InAllowDamage = InAllowDamage;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetCutsceneResponseCoordinatorDebug(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug"));

	struct
	{
		bool                           Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetCurrentCulture
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  Culture                        (Parm, ZeroConstructor)

void UAthenaCheatManager::SetCurrentCulture(const class FString& Culture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetCurrentCulture"));

	struct
	{
		class FString                  Culture;
	} params;

	params.Culture = Culture;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset
// (Final, Exec, Native, Public)
// Parameters:
// int                            AssetIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetCoordinatedKrakenPhaseAsset(int AssetIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset"));

	struct
	{
		int                            AssetIndex;
	} params;

	params.AssetIndex = AssetIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetCoordinatedKrakenCurrentPhaseAssetInactive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetCoordinatedKrakenCurrentPhaseAssetActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetCapstanPosition
// (Final, Exec, Native, Public)
// Parameters:
// float                          Position                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetCapstanPosition(float Position)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetCapstanPosition"));

	struct
	{
		float                          Position;
	} params;

	params.Position = Position;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetAxisBinding
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  InBindingName                  (Parm, ZeroConstructor)
// class FString                  InKeyName                      (Parm, ZeroConstructor)

void UAthenaCheatManager::SetAxisBinding(const class FString& InBindingName, const class FString& InKeyName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetAxisBinding"));

	struct
	{
		class FString                  InBindingName;
		class FString                  InKeyName;
	} params;

	params.InBindingName = InBindingName;
	params.InKeyName = InKeyName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance
// (Final, Exec, Native, Public)
// Parameters:
// float                          HitChance                      (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetAllAIOverrideCannonShotHitChance(float HitChance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance"));

	struct
	{
		float                          HitChance;
	} params;

	params.HitChance = HitChance;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude"));

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


// Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AIAbilityString                (Parm, ZeroConstructor)

void UAthenaCheatManager::SetAIExclusiveAbility(const class FString& AIAbilityString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility"));

	struct
	{
		class FString                  AIAbilityString;
	} params;

	params.AIAbilityString = AIAbilityString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AIAbilityString                (Parm, ZeroConstructor)
// float                          IntervalCooldownMultiplier     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ActivationCooldownMultiplier   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetAIAbilityTimeMultiplier(const class FString& AIAbilityString, float IntervalCooldownMultiplier, float ActivationCooldownMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier"));

	struct
	{
		class FString                  AIAbilityString;
		float                          IntervalCooldownMultiplier;
		float                          ActivationCooldownMultiplier;
	} params;

	params.AIAbilityString = AIAbilityString;
	params.IntervalCooldownMultiplier = IntervalCooldownMultiplier;
	params.ActivationCooldownMultiplier = ActivationCooldownMultiplier;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  AIAbilityString                (Parm, ZeroConstructor)

void UAthenaCheatManager::SetAbilityAlwaysOn(const class FString& AIAbilityString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn"));

	struct
	{
		class FString                  AIAbilityString;
	} params;

	params.AIAbilityString = AIAbilityString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SendUpdateVoyageProgressEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SendStatEvent
// (Final, Exec, Native, Public)
// Parameters:
// uint32_t                       StatId                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       StatValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SendStatEvent(uint32_t StatId, uint64_t StatValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SendStatEvent"));

	struct
	{
		uint32_t                       StatId;
		uint64_t                       StatValue;
	} params;

	params.StatId = StatId;
	params.StatValue = StatValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CompanyNameAndRewardIdSeparatedByColon (Parm, ZeroConstructor)

void UAthenaCheatManager::SendRewardRequestEvent(const class FString& CompanyNameAndRewardIdSeparatedByColon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent"));

	struct
	{
		class FString                  CompanyNameAndRewardIdSeparatedByColon;
	} params;

	params.CompanyNameAndRewardIdSeparatedByColon = CompanyNameAndRewardIdSeparatedByColon;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SendResetReaperLevelEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ScuttleShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::ScuttleShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ScuttleShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ScreenFadeStart
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ScreenFadeStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ScreenFadeStart"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ScreenFadeEnd()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerToggleDebugDraw()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerSkipToNext()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitTinyShark()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitSkellyFort()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitKraken()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitDefault()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitAshenLord()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitAIShipPassive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitAIShipBattle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitAIShipAggro()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitAggroGhostShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerAdvance"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SailShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SailAllShips
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::SailAllShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SailAllShips"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy"));

	struct
	{
		float                          SecondsToRewindBy;
	} params;

	params.SecondsToRewindBy = SecondsToRewindBy;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReviveLocalPlayerInstantly()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReviveLocalPlayerAccordingToReviveTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReviveAllPlayerCharactersAccordingToReviveTime
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReviveAllPlayerCharactersAccordingToReviveTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReviveAllPlayerCharactersAccordingToReviveTime"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RetrieveItemsFromBootyStorageInCurrentIsland()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  IslandName                     (Parm, ZeroConstructor)

void UAthenaCheatManager::RetrieveItemsFromBootyStorage(const class FString& IslandName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage"));

	struct
	{
		class FString                  IslandName;
	} params;

	params.IslandName = IslandName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ShipActorIdString              (Parm, ZeroConstructor)

void UAthenaCheatManager::ResurfaceShipByActorId(const class FString& ShipActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId"));

	struct
	{
		class FString                  ShipActorIdString;
	} params;

	params.ShipActorIdString = ShipActorIdString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RestoreAndRestockShipAndPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RestockIslandBarrels()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RestockAllReplenishables()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RespawnAllIslandItemSpawners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimerWithTime"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetTaleSelectorSeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetStats
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetStats()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetStats"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetNearestVault
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetNearestVault()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetNearestVault"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetNearestEventRoom()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetMouseDelta
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetMouseDelta()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetMouseDelta"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetMaxNumOfSpawnedAI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetMaxMovingPetsOnServerToDefault()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetGlitterbeardTree()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetDemoSession"));

	struct
	{
		bool                           StartNewSession;
	} params;

	params.StartNewSession = StartNewSession;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetAllOverrideCannonShotHitChance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetAllMechanisms()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetAITeamAttitudes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetAIExclusiveAbilities()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetAbilityAlwaysOn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RequestSmallPassiveAIShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RequestSmallAggressiveAIShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RequestMysteriousNotesForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RequestLargePassiveAIShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RequestLargeAggressiveAIShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReplenishShipWithDebugSpawner()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReplenishShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReplenishShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReplenishShip"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RepairAndClearInternalWaterOnAllShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RenameTreasure"));

	struct
	{
		class FString                  InVendorName;
	} params;

	params.InVendorName = InVendorName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemovePetsFromAllPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemovePetFromPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemoveLostShipmentsDebugging()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot
// (Final, Exec, Native, Public)
// Parameters:
// int                            SlotIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::RemoveItemInSlot(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot"));

	struct
	{
		int                            SlotIndex;
	} params;

	params.SlotIndex = SlotIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemoveDebugPetSpawners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemoveDebugHealthStage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveAllFog
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemoveAllFog()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemoveAllFog"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ContextName                    (Parm, ZeroConstructor)

void UAthenaCheatManager::RemoveAISpawnContext(const class FString& ContextName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext"));

	struct
	{
		class FString                  ContextName;
	} params;

	params.ContextName = ContextName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed
// (Final, Exec, Native, Public)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::RebuildPirateFromSeed(int Seed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed"));

	struct
	{
		int                            Seed;
	} params;

	params.Seed = Seed;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReallyScrambleMyGamertag()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PushShip"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ProceedToNextContestState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PrintTime
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PrintTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PrintTime"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PrintNPCs
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PrintNPCs()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PrintNPCs"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PrintAllNetworkActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PrintAISpawners
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PrintAISpawners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PrintAISpawners"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PrintAISpawnContexts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PlayWorldSequence
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  InReference                    (Parm, ZeroConstructor)

void UAthenaCheatManager::PlayWorldSequence(const class FString& InReference)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PlayWorldSequence"));

	struct
	{
		class FString                  InReference;
	} params;

	params.InReference = InReference;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PlayLocalSequences
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PlayLocalSequences()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PlayLocalSequences"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::MoveStormToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest
// (Final, Exec, Native, Public)

void UAthenaCheatManager::MessageBoxOnGraphicsThreadTest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead
// (Final, Exec, Native, Public)

void UAthenaCheatManager::MakeSharksBrainDead()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner
// (Final, Exec, Native, Public)

void UAthenaCheatManager::MakeDebugPetSpawner()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LogShipHierarchy
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LogShipHierarchy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LogShipHierarchy"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LogServerShipHierarchy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LogAITeamAttitudes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  RouteReferencePath             (Parm, ZeroConstructor)

void UAthenaCheatManager::LockTradeRouteSelectionToSpecificRouteForMyCrew(const class FString& RouteReferencePath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew"));

	struct
	{
		class FString                  RouteReferencePath;
	} params;

	params.RouteReferencePath = RouteReferencePath;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew
// (Final, Exec, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FGuid                   CrewId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class FString                  RouteReferencePath             (Parm, ZeroConstructor)

void UAthenaCheatManager::LockTradeRouteSelectionToSpecificRouteForCrew(const struct FGuid& CrewId, const class FString& RouteReferencePath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew"));

	struct
	{
		struct FGuid                   CrewId;
		class FString                  RouteReferencePath;
	} params;

	params.CrewId = CrewId;
	params.RouteReferencePath = RouteReferencePath;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LocallyUnBreakLeg()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LocallyDisableTutorial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LightLocalBraziers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LightLocalBraziers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LightLocalBraziers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius
// (Final, Exec, Native, Public)
// Parameters:
// float                          Radius                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::LightBraziersInRadius(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius"));

	struct
	{
		float                          Radius;
	} params;

	params.Radius = Radius;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LeaveAlliance
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::LeaveAlliance(const class FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LeaveAlliance"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LaunchPlayer"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleThrowPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleSuckPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentaclePowerSlamPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleKill()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleIngestPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleDropPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleDespawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleDefeat()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState"));

	struct
	{
		class FString                  HoldState;
	} params;

	params.HoldState = HoldState;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KindleClosestShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::KindleClosestShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KindleClosestShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KindleAllShipFires
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::KindleAllShipFires()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KindleAllShipFires"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillPlayer"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillCrew"));

	struct
	{
		class FString                  CrewId;
	} params;

	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllSkeletons
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllSkeletons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllSkeletons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllPlayers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllOtherPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllOtherPlayerCharacters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllDebugAISpawners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllCrews
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllCrews()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllCrews"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllAI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllAI"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllAggressiveGhostShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllAggressiveGhostShipEncounters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.JoinAlliance"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IPGOverride"));

	struct
	{
		struct FName                   BodyShape;
		float                          Distance;
	} params;

	params.BodyShape = BodyShape;
	params.Distance = Distance;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)
// class FString                  path                           (Parm, ZeroConstructor)

void UAthenaCheatManager::IPGLoadWithoutClothing(const class FString& ActorIdString, const class FString& path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing"));

	struct
	{
		class FString                  ActorIdString;
		class FString                  path;
	} params;

	params.ActorIdString = ActorIdString;
	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)
// class FString                  path                           (Parm, ZeroConstructor)

void UAthenaCheatManager::IPGLoadWithClothing(const class FString& ActorIdString, const class FString& path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing"));

	struct
	{
		class FString                  ActorIdString;
		class FString                  path;
	} params;

	params.ActorIdString = ActorIdString;
	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IPGLoad
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  path                           (Parm, ZeroConstructor)

void UAthenaCheatManager::IPGLoad(const class FString& path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IPGLoad"));

	struct
	{
		class FString                  path;
	} params;

	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.InvincibleEverything
// (Final, Exec, Native, Public)

void UAthenaCheatManager::InvincibleEverything()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.InvincibleEverything"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::InterruptSicknessOnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::InfiniteGunAmmo(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IncrementTime"));

	struct
	{
		int                            Hours;
		int                            Minutes;
	} params;

	params.Hours = Hours;
	params.Minutes = Minutes;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage
// (Final, Exec, Native, Public)

void UAthenaCheatManager::IncrementDebugHealthStage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::IncreaseEmissaryCount(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount"));

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::IgniteShipAtPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::IgniteLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IgniteClosestShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::IgniteClosestShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IgniteClosestShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::IgniteAllShipFires()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HideTaleDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HideTaleDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HideTaleDebug"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HideEmissaryVoteIndicators()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HideAllRomeBeacons
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HideAllRomeBeacons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HideAllRomeBeacons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthSet
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HealthSet(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthSet"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthReset"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HealthRegenResetToEmpty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthRegenAdd
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HealthRegenAdd(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthRegenAdd"));

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HealthContinuousStopWithTestReason()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  Reason                         (Parm, ZeroConstructor)

void UAthenaCheatManager::HealthContinuousStopWithReason(const class FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason"));

	struct
	{
		class FString                  Reason;
	} params;

	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HealthContinuousStartWithTestReason(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason"));

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Reason                         (Parm, ZeroConstructor)

void UAthenaCheatManager::HealthContinuousStartWithReason(float Value, const class FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason"));

	struct
	{
		float                          Value;
		class FString                  Reason;
	} params;

	params.Value = Value;
	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthAdjust
// (Final, Exec, Native, Public)
// Parameters:
// float                          Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HealthAdjust(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthAdjust"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.God"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceStopAllPetsDanger()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ResponseType                   (Parm, ZeroConstructor)
// float                          UpdateThreatLocationTime       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ForceStartAllPetsDangerWithChangingThreatLocation(const class FString& ResponseType, float UpdateThreatLocationTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation"));

	struct
	{
		class FString                  ResponseType;
		float                          UpdateThreatLocationTime;
	} params;

	params.ResponseType = ResponseType;
	params.UpdateThreatLocationTime = UpdateThreatLocationTime;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ResponseType                   (Parm, ZeroConstructor)

void UAthenaCheatManager::ForceStartAllPetsDanger(const class FString& ResponseType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger"));

	struct
	{
		class FString                  ResponseType;
	} params;

	params.ResponseType = ResponseType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceRequestCampaignsFromServices()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForcePetHangout
// (Final, Exec, Native, Public)
// Parameters:
// struct FName                   HangoutName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            PositionIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ForcePetHangout(const struct FName& HangoutName, int PositionIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForcePetHangout"));

	struct
	{
		struct FName                   HangoutName;
		int                            PositionIndex;
	} params;

	params.HangoutName = HangoutName;
	params.PositionIndex = PositionIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceOpenShop
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceOpenShop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceOpenShop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove
// (Final, Exec, Native, Public)
// Parameters:
// bool                           FastMove                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           KeepCurrentLocation            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ForceNPCOnSurfaceToMove(bool FastMove, bool KeepCurrentLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove"));

	struct
	{
		bool                           FastMove;
		bool                           KeepCurrentLocation;
	} params;

	params.FastMove = FastMove;
	params.KeepCurrentLocation = KeepCurrentLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation
// (Final, Exec, Native, Public)
// Parameters:
// int                            LoctationIndex                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            LoctationPointIndex            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ForceNPCOnSurfaceLocation(int LoctationIndex, int LoctationPointIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation"));

	struct
	{
		int                            LoctationIndex;
		int                            LoctationPointIndex;
	} params;

	params.LoctationIndex = LoctationIndex;
	params.LoctationPointIndex = LoctationPointIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger
// (Final, Exec, Native, Public)
// Parameters:
// bool                           IsCurrentlyInDanger            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ForceNPCOnShipIsCurrentlyInDanger(bool IsCurrentlyInDanger)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger"));

	struct
	{
		bool                           IsCurrentlyInDanger;
	} params;

	params.IsCurrentlyInDanger = IsCurrentlyInDanger;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceMigrationServiceHeartBeat
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceMigrationServiceHeartBeat()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceMigrationServiceHeartBeat"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   EmoteIdentifier                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class FString                  DisplayName                    (Parm, ZeroConstructor)
// class FString                  AudioDescription               (Parm, ZeroConstructor)

void UAthenaCheatManager::ForceEmoteWithDescription(const struct FName& EmoteIdentifier, const class FString& DisplayName, const class FString& AudioDescription)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription"));

	struct
	{
		struct FName                   EmoteIdentifier;
		class FString                  DisplayName;
		class FString                  AudioDescription;
	} params;

	params.EmoteIdentifier = EmoteIdentifier;
	params.DisplayName = DisplayName;
	params.AudioDescription = AudioDescription;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceEmote
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   EmoteIdentifier                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAthenaCheatManager::ForceEmote(const struct FName& EmoteIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceEmote"));

	struct
	{
		struct FName                   EmoteIdentifier;
	} params;

	params.EmoteIdentifier = EmoteIdentifier;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceCloseShop
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceCloseShop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceCloseShop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ResponseType                   (Parm, ZeroConstructor)
// float                          UpdateThreatLocationTime       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation(const class FString& ResponseType, float UpdateThreatLocationTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation"));

	struct
	{
		class FString                  ResponseType;
		float                          UpdateThreatLocationTime;
	} params;

	params.ResponseType = ResponseType;
	params.UpdateThreatLocationTime = UpdateThreatLocationTime;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ResponseType                   (Parm, ZeroConstructor)

void UAthenaCheatManager::ForceAllPetsDangerWithNoiseEvent(const class FString& ResponseType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent"));

	struct
	{
		class FString                  ResponseType;
	} params;

	params.ResponseType = ResponseType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceAggressiveGhostShipStartSinkingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceAggressiveGhostShipStartDisappearAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceAggressiveGhostShipStartAppearAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceAggressiveGhostShipPortalJump()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.Fly
// (Exec, Native, Public)

void UAthenaCheatManager::Fly()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.Fly"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FloodShip"));

	struct
	{
		float                          NormalisedWaterAmount;
	} params;

	params.NormalisedWaterAmount = NormalisedWaterAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumSeason                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InRewardsLevel                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InMultipleRewards              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::FireSeasonRewardEarnedMessage(int InNumSeason, int InRewardsLevel, bool InMultipleRewards)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage"));

	struct
	{
		int                            InNumSeason;
		int                            InRewardsLevel;
		bool                           InMultipleRewards;
	} params;

	params.InNumSeason = InNumSeason;
	params.InRewardsLevel = InRewardsLevel;
	params.InMultipleRewards = InMultipleRewards;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumSeason                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InPreviousProgress             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InCurrentProgress              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InCompletionTreshold           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InGoalType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InGoalCategory                 (Parm, ZeroConstructor)

void UAthenaCheatManager::FireSeasonGoalProgressionMessage(int InNumSeason, int InPreviousProgress, int InCurrentProgress, int InCompletionTreshold, int InGoalType, const class FString& InGoalCategory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage"));

	struct
	{
		int                            InNumSeason;
		int                            InPreviousProgress;
		int                            InCurrentProgress;
		int                            InCompletionTreshold;
		int                            InGoalType;
		class FString                  InGoalCategory;
	} params;

	params.InNumSeason = InNumSeason;
	params.InPreviousProgress = InPreviousProgress;
	params.InCurrentProgress = InCurrentProgress;
	params.InCompletionTreshold = InCompletionTreshold;
	params.InGoalType = InGoalType;
	params.InGoalCategory = InGoalCategory;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumSeason                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InGoalType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InGoalCategory                 (Parm, ZeroConstructor)

void UAthenaCheatManager::FireSeasonGoalCompletionMessage(int InNumSeason, int InGoalType, const class FString& InGoalCategory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage"));

	struct
	{
		int                            InNumSeason;
		int                            InGoalType;
		class FString                  InGoalCategory;
	} params;

	params.InNumSeason = InNumSeason;
	params.InGoalType = InGoalType;
	params.InGoalCategory = InGoalCategory;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumSeason                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InLevel                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InTimeSpentInLevel             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InTier                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InTimeSpentInTier              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InTierCompleted                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InSeasonCompleted              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::FireLevelCompletionMessage(int InNumSeason, int InLevel, int InTimeSpentInLevel, int InTier, int InTimeSpentInTier, bool InTierCompleted, bool InSeasonCompleted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage"));

	struct
	{
		int                            InNumSeason;
		int                            InLevel;
		int                            InTimeSpentInLevel;
		int                            InTier;
		int                            InTimeSpentInTier;
		bool                           InTierCompleted;
		bool                           InSeasonCompleted;
	} params;

	params.InNumSeason = InNumSeason;
	params.InLevel = InLevel;
	params.InTimeSpentInLevel = InTimeSpentInLevel;
	params.InTier = InTier;
	params.InTimeSpentInTier = InTimeSpentInTier;
	params.InTierCompleted = InTierCompleted;
	params.InSeasonCompleted = InSeasonCompleted;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat
// (Final, Exec, Native, Public)

void UAthenaCheatManager::FireCreatorCrewSignedUpStat()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumMinutes                   (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::FireCreatorCrewMinutesViewedStat(int InNumMinutes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat"));

	struct
	{
		int                            InNumMinutes;
	} params;

	params.InNumMinutes = InNumMinutes;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumMinutes                   (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::FireCreatorCrewMinutesStreamedStat(int InNumMinutes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat"));

	struct
	{
		int                            InNumMinutes;
	} params;

	params.InNumMinutes = InNumMinutes;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumViewers                   (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::FireCreatorCrewCurrentViewersStat(int InNumViewers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat"));

	struct
	{
		int                            InNumViewers;
	} params;

	params.InNumViewers = InNumViewers;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FindText
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  Namespace                      (Parm, ZeroConstructor)
// class FString                  Key                            (Parm, ZeroConstructor)

void UAthenaCheatManager::FindText(const class FString& Namespace, const class FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FindText"));

	struct
	{
		class FString                  Namespace;
		class FString                  Key;
	} params;

	params.Namespace = Namespace;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests
// (Final, Exec, Native, Public)

void UAthenaCheatManager::FakeMigrateBountyQuests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EquipPirateTitle"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EndDemoSession
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EndDemoSession()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EndDemoSession"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals"));

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay
// (Final, Exec, Native, Public)
// Parameters:
// int                            TrueFalse                      (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay(int TrueFalse)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay"));

	struct
	{
		int                            TrueFalse;
	} params;

	params.TrueFalse = TrueFalse;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableNTP
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableNTP(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableNTP"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing"));

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EnableEmergentSirenSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EnableEmergentSharkSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EnableConsoleLogging()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera
// (Final, Exec, Native, Protected)

void UAthenaCheatManager::EnableCinematicCamera()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids"));

	struct
	{
		int                            Enable;
	} params;

	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EnableAllEmergentWaterSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EnableAIBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DrawVideprinter"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DownPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DownPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DownPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DownAllPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DownAllPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DownAllPlayers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DownAllOtherPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DownAllOtherPlayerCharacters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DouseClosestShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::DouseClosestShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DouseClosestShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DouseAllShipFires
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::DouseAllShipFires()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DouseAllShipFires"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DiveShipByActorId"));

	struct
	{
		class FString                  ShipActorIdString;
	} params;

	params.ShipActorIdString = ShipActorIdString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DisplaySpireLocationsDebug(int Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug"));

	struct
	{
		int                            Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  StatName                       (Parm, ZeroConstructor)

void UAthenaCheatManager::DisplaySingleEmblemProgress(const class FString& StatName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos"));

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


// Function AthenaCheat.AthenaCheatManager.DisplayServerFPS
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayServerFPS()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayServerFPS"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLoadingScreenBoot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenArena
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLoadingScreenArena()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenArena"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLoadingScreenAdventure()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLandmarkValidTreasureLocationsForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLandmarkRegions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLandmarkNames()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness"));

	struct
	{
		bool                           Flag;
	} params;

	params.Flag = Flag;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DismissAllPickupPoints()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisableEmergentSirenSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisableEmergentSharkSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisableConsoleLogging()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera
// (Final, Exec, Native, Protected)

void UAthenaCheatManager::DisableCinematicCamera()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisableAllEmergentWaterSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisableAIBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableAIAbilities
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::DisableAIAbilities()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableAIAbilities"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DioramaStartNearest
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  Spawner                        (Parm, ZeroConstructor)
// class FString                  DioramaDesc                    (Parm, ZeroConstructor)

void UAthenaCheatManager::DioramaStartNearest(const class FString& Spawner, const class FString& DioramaDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DioramaStartNearest"));

	struct
	{
		class FString                  Spawner;
		class FString                  DioramaDesc;
	} params;

	params.Spawner = Spawner;
	params.DioramaDesc = DioramaDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DioramaStart
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActorName                      (Parm, ZeroConstructor)
// class FString                  Spawner                        (Parm, ZeroConstructor)
// class FString                  DioramaDesc                    (Parm, ZeroConstructor)

void UAthenaCheatManager::DioramaStart(const class FString& ActorName, const class FString& Spawner, const class FString& DioramaDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DioramaStart"));

	struct
	{
		class FString                  ActorName;
		class FString                  Spawner;
		class FString                  DioramaDesc;
	} params;

	params.ActorName = ActorName;
	params.Spawner = Spawner;
	params.DioramaDesc = DioramaDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DioramaKillAllDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyShip"));

	struct
	{
		class FString                  ShipActorIdConsoleString;
	} params;

	params.ShipActorIdConsoleString = ShipActorIdConsoleString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DestroyNearestDebugReapersChestMarker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyMyShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::DestroyMyShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyMyShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyKraken
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DestroyKraken()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyKraken"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DestroyAllTreasureChests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DestroyAllTinySharks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyAllShips
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::DestroyAllShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyAllShips"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DespawnFirstAI"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DespawnAllAggressiveGhostShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DespawnAI"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DeleteAllMermaids()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DecrementDebugHealthStage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DebugIslandDelta
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DebugIslandDelta()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DebugIslandDelta"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort"));

	struct
	{
		class FString                  FortName;
	} params;

	params.FortName = FortName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DeactivateEmissaryFlagCompany()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DeactivateDeathEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect"));

	struct
	{
	} params;


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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DamageShip"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DamagePlayer"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CureAllAilings"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CreateDebugReapersChestMarkerAtPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  SpawnerAssetName               (Parm, ZeroConstructor)
// class FString                  LocationActorName              (Parm, ZeroConstructor)

void UAthenaCheatManager::CreateDebugAISpawnerAt(const class FString& SpawnerAssetName, const class FString& LocationActorName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt"));

	struct
	{
		class FString                  SpawnerAssetName;
		class FString                  LocationActorName;
	} params;

	params.SpawnerAssetName = SpawnerAssetName;
	params.LocationActorName = LocationActorName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  SpawnerAssetName               (Parm, ZeroConstructor)

void UAthenaCheatManager::CreateDebugAISpawner(const class FString& SpawnerAssetName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner"));

	struct
	{
		class FString                  SpawnerAssetName;
	} params;

	params.SpawnerAssetName = SpawnerAssetName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CoordinatedKrakenToggleAI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActionName                     (Parm, ZeroConstructor)

void UAthenaCheatManager::CoordinatedKrakenRequestAction(const class FString& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction"));

	struct
	{
		class FString                  ActionName;
	} params;

	params.ActionName = ActionName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::CoordinatedKrakenEnableDebugging(int Enable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging"));

	struct
	{
		int                            Enable;
	} params;

	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ContextualPromptCountersToggleDebugDraw()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CompleteVoyage
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CompleteVoyage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CompleteVoyage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CompleteAllActivePuzzleVaults()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CompleteActiveQuests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CloseSkeletonFortDoor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CloseLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearWorldSequences
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearWorldSequences()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearWorldSequences"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearVoiceChatMeters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearSlowMotionOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearGrogSecondary()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearGlitterbeardRequiredPlayersOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearDebugStormLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearAxisBinding
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  InBindingName                  (Parm, ZeroConstructor)

void UAthenaCheatManager::ClearAxisBinding(const class FString& InBindingName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearAxisBinding"));

	struct
	{
		class FString                  InBindingName;
	} params;

	params.InBindingName = InBindingName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearAIAbilityTimeMultipliers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CheckLandmarkValidTreasureLocationsAtPlayerPos()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CheckLandmarkRelativeToIslandCalculation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CapsizeShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CapsizeShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CapsizeShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelVoyage
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelVoyage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CancelVoyage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelTale
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelTale()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CancelTale"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelEmergentVoyages()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelAllCrewVoyages()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelActiveAIShipEncounters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.BuryItem
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  NameOfItemToBury               (Parm, ZeroConstructor)

void UAthenaCheatManager::BuryItem(const class FString& NameOfItemToBury)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.BuryItem"));

	struct
	{
		class FString                  NameOfItemToBury;
	} params;

	params.NameOfItemToBury = NameOfItemToBury;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.BreakLeg
// (Final, Exec, Native, Public)

void UAthenaCheatManager::BreakLeg()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.BreakLeg"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ApplyVenomWithParams"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ApplyVenom"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  StatusIdentifier               (Parm, ZeroConstructor)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ApplyStatusToPlayer(const class FString& StatusIdentifier, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer"));

	struct
	{
		class FString                  StatusIdentifier;
		float                          Duration;
	} params;

	params.StatusIdentifier = StatusIdentifier;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones
// (Final, Exec, Native, Public)
// Parameters:
// float                          Damage                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ApplyDamageToAllDamageZones(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer"));

	struct
	{
		class FString                  CannonballTypeString;
	} params;

	params.CannonballTypeString = CannonballTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           CanTeleport                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::AllowTeleportWithItems(bool CanTeleport)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems"));

	struct
	{
		bool                           CanTeleport;
	} params;

	params.CanTeleport = CanTeleport;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  TunnelDescAssetPath            (Parm, ZeroConstructor)

void UAthenaCheatManager::AllocatePortalToTunnelOfTheDamned(const class FString& TunnelDescAssetPath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned"));

	struct
	{
		class FString                  TunnelDescAssetPath;
	} params;

	params.TunnelDescAssetPath = TunnelDescAssetPath;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AllJoinAlliance
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AllJoinAlliance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AllJoinAlliance"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AIPlayerShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AIPlayerShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AIPlayerShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AggressiveGhostShipRebuildSpline()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AdjustGhostShader
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InStartingAmount               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InTargetAmount                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InVengeanceStartingAmount      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InVengeanceTargetAmount        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InDelayBeforeStart             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InBlendDuration                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::AdjustGhostShader(bool Enabled, float InStartingAmount, float InTargetAmount, float InVengeanceStartingAmount, float InVengeanceTargetAmount, float InDelayBeforeStart, float InBlendDuration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AdjustGhostShader"));

	struct
	{
		bool                           Enabled;
		float                          InStartingAmount;
		float                          InTargetAmount;
		float                          InVengeanceStartingAmount;
		float                          InVengeanceTargetAmount;
		float                          InDelayBeforeStart;
		float                          InBlendDuration;
	} params;

	params.Enabled = Enabled;
	params.InStartingAmount = InStartingAmount;
	params.InTargetAmount = InTargetAmount;
	params.InVengeanceStartingAmount = InVengeanceStartingAmount;
	params.InVengeanceTargetAmount = InVengeanceTargetAmount;
	params.InDelayBeforeStart = InDelayBeforeStart;
	params.InBlendDuration = InBlendDuration;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AddTradeRouteClueMarkToMapAtCurrentLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddTornMapPiece
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AddTornMapPiece()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddTornMapPiece"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddShipToCrew"));

	struct
	{
		class FString                  ActorIdString;
		class FString                  CrewId;
	} params;

	params.ActorIdString = ActorIdString;
	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AddRandomPetForAllPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActorIdString                  (Parm, ZeroConstructor)
// class FString                  CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::AddPlayerToCrew(const class FString& ActorIdString, const class FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew"));

	struct
	{
		class FString                  ActorIdString;
		class FString                  CrewId;
	} params;

	params.ActorIdString = ActorIdString;
	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddPetForPlayer
// (Final, Exec, Native, Public)
// Parameters:
// int                            PetTypeIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            PetPartIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::AddPetForPlayer(int PetTypeIndex, int PetPartIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddPetForPlayer"));

	struct
	{
		int                            PetTypeIndex;
		int                            PetPartIndex;
	} params;

	params.PetTypeIndex = PetTypeIndex;
	params.PetPartIndex = PetPartIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers
// (Final, Exec, Native, Public)
// Parameters:
// int                            PetTypeIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            PetPartIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::AddPetForAllPlayers(int PetTypeIndex, int PetPartIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers"));

	struct
	{
		int                            PetTypeIndex;
		int                            PetPartIndex;
	} params;

	params.PetTypeIndex = PetTypeIndex;
	params.PetPartIndex = PetPartIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddMysteriousNote
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  NoteType                       (Parm, ZeroConstructor)
// class FString                  NoteTitle                      (Parm, ZeroConstructor)
// class FString                  NoteBody                       (Parm, ZeroConstructor)
// class FString                  CompletionStrings              (Parm, ZeroConstructor)

void UAthenaCheatManager::AddMysteriousNote(const class FString& NoteType, const class FString& NoteTitle, const class FString& NoteBody, const class FString& CompletionStrings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddMysteriousNote"));

	struct
	{
		class FString                  NoteType;
		class FString                  NoteTitle;
		class FString                  NoteBody;
		class FString                  CompletionStrings;
	} params;

	params.NoteType = NoteType;
	params.NoteTitle = NoteTitle;
	params.NoteBody = NoteBody;
	params.CompletionStrings = CompletionStrings;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddDrunkenness
// (Final, Exec, Native, Public)
// Parameters:
// int                            DrunkennessType                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DrunkennessChange              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::AddDrunkenness(int DrunkennessType, float DrunkennessChange)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddDrunkenness"));

	struct
	{
		int                            DrunkennessType;
		float                          DrunkennessChange;
	} params;

	params.DrunkennessType = DrunkennessType;
	params.DrunkennessChange = DrunkennessChange;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddAISpawnContext
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ContextName                    (Parm, ZeroConstructor)

void UAthenaCheatManager::AddAISpawnContext(const class FString& ContextName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddAISpawnContext"));

	struct
	{
		class FString                  ContextName;
	} params;

	params.ContextName = ContextName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// class FString                  FortEventName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FString                  FortName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaCheatManager::ActivateSkellyFort(const class FString& FortEventName, const class FString& FortName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort"));

	struct
	{
		class FString                  FortEventName;
		class FString                  FortName;
	} params;

	params.FortEventName = FortEventName;
	params.FortName = FortName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  CompanyId                      (Parm, ZeroConstructor)

void UAthenaCheatManager::ActivateEmissaryFlagCompany(const class FString& CompanyId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany"));

	struct
	{
		class FString                  CompanyId;
	} params;

	params.CompanyId = CompanyId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
