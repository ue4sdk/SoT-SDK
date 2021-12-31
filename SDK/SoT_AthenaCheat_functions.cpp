// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaCheat_parameters.hpp"

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

	UAthenaCheatManager_WindTriggerChange_Params params;
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

	UAthenaCheatManager_WindSetVector_Params params;
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

	UAthenaCheatManager_WindSetMagnitude_Params params;
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

	UAthenaCheatManager_WindSetDirection_Params params;
	params.X = X;
	params.Y = Y;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindReloadParams
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindReloadParams()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindReloadParams"));

	UAthenaCheatManager_WindReloadParams_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindPrintDirection
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindPrintDirection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindPrintDirection"));

	UAthenaCheatManager_WindPrintDirection_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindEnableDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindEnableDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindEnableDebug"));

	UAthenaCheatManager_WindEnableDebug_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindDisableDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindDisableDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindDisableDebug"));

	UAthenaCheatManager_WindDisableDebug_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera
// (Final, Exec, Native, Public)

void UAthenaCheatManager::WindAlignWithCamera()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera"));

	UAthenaCheatManager_WindAlignWithCamera_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.Walk
// (Exec, Native, Public)

void UAthenaCheatManager::Walk()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.Walk"));

	UAthenaCheatManager_Walk_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.VomitWithType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// FName                          VomitType                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::VomitWithType(const FName& VomitType, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.VomitWithType"));

	UAthenaCheatManager_VomitWithType_Params params;
	params.VomitType = VomitType;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.Vomit
// (Final, Exec, Native, Public)

void UAthenaCheatManager::Vomit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.Vomit"));

	UAthenaCheatManager_Vomit_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew
// (Final, Exec, Native, Public)

void UAthenaCheatManager::UnlockTradeRouteSelectionForMyCrew()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew"));

	UAthenaCheatManager_UnlockTradeRouteSelectionForMyCrew_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew
// (Final, Exec, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// FGuid                          CrewId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAthenaCheatManager::UnlockTradeRouteSelectionForCrew(const FGuid& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew"));

	UAthenaCheatManager_UnlockTradeRouteSelectionForCrew_Params params;
	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.UnlockEntitlement
// (Final, Exec, Native, Public)
// Parameters:
// FString                        EntitlementId                  (Parm, ZeroConstructor)

void UAthenaCheatManager::UnlockEntitlement(const FString& EntitlementId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.UnlockEntitlement"));

	UAthenaCheatManager_UnlockEntitlement_Params params;
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

	UAthenaCheatManager_UnlockAllEntitlements_Params params;
	params.TrueFalse = TrueFalse;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements
// (Final, Exec, Native, Public)

void UAthenaCheatManager::UnlockAllEmblemsAndAchievements()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements"));

	UAthenaCheatManager_UnlockAllEmblemsAndAchievements_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.UnBreakLeg
// (Final, Exec, Native, Public)

void UAthenaCheatManager::UnBreakLeg()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.UnBreakLeg"));

	UAthenaCheatManager_UnBreakLeg_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TutorialAction
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ActionTypeString               (Parm, ZeroConstructor)

void UAthenaCheatManager::TutorialAction(const FString& ActionTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TutorialAction"));

	UAthenaCheatManager_TutorialAction_Params params;
	params.ActionTypeString = ActionTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerTunnelMigration
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerTunnelMigration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerTunnelMigration"));

	UAthenaCheatManager_TriggerTunnelMigration_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// FName                          Identifier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TriggerRewardNotification(FName* Identifier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification"));

	UAthenaCheatManager_TriggerRewardNotification_Params params;

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

	UAthenaCheatManager_TriggerLandmarkReaction_Params params;
	params.ActionType = ActionType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerFogManagerAtNearestIsland()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland"));

	UAthenaCheatManager_TriggerFogManagerAtNearestIsland_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage
// (Final, Exec, Native, Public)
// Parameters:
// FString                        EmblemFriendlyName             (Parm, ZeroConstructor)

void UAthenaCheatManager::TriggerEmblemUnlockedMessage(const FString& EmblemFriendlyName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage"));

	UAthenaCheatManager_TriggerEmblemUnlockedMessage_Params params;
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

	UAthenaCheatManager_TriggerControllerConnectionChange_Params params;
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

	UAthenaCheatManager_TriggerContestMatchmakingMigration_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerContestBannerUnfurl
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerContestBannerUnfurl()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerContestBannerUnfurl"));

	UAthenaCheatManager_TriggerContestBannerUnfurl_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerAIShipTimerBattle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle"));

	UAthenaCheatManager_TriggerAIShipTimerBattle_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerAIShipPassive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive"));

	UAthenaCheatManager_TriggerAIShipPassive_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerAIShipEncounter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter"));

	UAthenaCheatManager_TriggerAIShipEncounter_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TriggerAIShipAggressive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive"));

	UAthenaCheatManager_TriggerAIShipAggressive_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleVideprinter
// (Final, Exec, Native, Public)
// Parameters:
// FString                        Id                             (Parm, ZeroConstructor)

void UAthenaCheatManager::ToggleVideprinter(const FString& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleVideprinter"));

	UAthenaCheatManager_ToggleVideprinter_Params params;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleThirdPerson()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson"));

	UAthenaCheatManager_ToggleThirdPerson_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleSeaClueLocationQueryDebugDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay"));

	UAthenaCheatManager_ToggleSeaClueLocationQueryDebugDisplay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleRetailDrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug"));

	UAthenaCheatManager_ToggleRetailDrawDebug_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleProjectileAimBaseAdjustmentsServer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleProjectileAimBaseAdjustmentsServer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleProjectileAimBaseAdjustmentsServer"));

	UAthenaCheatManager_ToggleProjectileAimBaseAdjustmentsServer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleProjectileAimBaseAdjustmentsLocalClient
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleProjectileAimBaseAdjustmentsLocalClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleProjectileAimBaseAdjustmentsLocalClient"));

	UAthenaCheatManager_ToggleProjectileAimBaseAdjustmentsLocalClient_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleNoClip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleNoClip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleNoClip"));

	UAthenaCheatManager_ToggleNoClip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleNearestSuperheatedWater()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater"));

	UAthenaCheatManager_ToggleNearestSuperheatedWater_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleNearestLava
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleNearestLava()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleNearestLava"));

	UAthenaCheatManager_ToggleNearestLava_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ToggleMigrationPointOfInterestChecks(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks"));

	UAthenaCheatManager_ToggleMigrationPointOfInterestChecks_Params params;
	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleIslandSelectionDebugDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay"));

	UAthenaCheatManager_ToggleIslandSelectionDebugDisplay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleFastShipControls()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls"));

	UAthenaCheatManager_ToggleFastShipControls_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDrowning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDrowning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDrowning"));

	UAthenaCheatManager_ToggleDrowning_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDrawShipSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed"));

	UAthenaCheatManager_ToggleDrawShipSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDrawAboveIslandBounds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds"));

	UAthenaCheatManager_ToggleDrawAboveIslandBounds_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDisplayCannonAISpawnerZones()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones"));

	UAthenaCheatManager_ToggleDisplayCannonAISpawnerZones_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::ToggleDebugFlying()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying"));

	UAthenaCheatManager_ToggleDebugFlying_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDeathCamera()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera"));

	UAthenaCheatManager_ToggleDeathCamera_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleDamageAllowedToPlayerShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip"));

	UAthenaCheatManager_ToggleDamageAllowedToPlayerShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleContestScoreDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug"));

	UAthenaCheatManager_ToggleContestScoreDebug_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleCinematicCamera()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera"));

	UAthenaCheatManager_ToggleCinematicCamera_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ToggleAttributeOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride"));

	UAthenaCheatManager_ToggleAttributeOverride_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TestForceArchiveAsyncPoolCanaryCrash
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TestForceArchiveAsyncPoolCanaryCrash()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TestForceArchiveAsyncPoolCanaryCrash"));

	UAthenaCheatManager_TestForceArchiveAsyncPoolCanaryCrash_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TestCrashDumpCreationOnRunnableThread()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread"));

	UAthenaCheatManager_TestCrashDumpCreationOnRunnableThread_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TestCrashDumpCreationOnMainThread()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread"));

	UAthenaCheatManager_TestCrashDumpCreationOnMainThread_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportToShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportToShip"));

	UAthenaCheatManager_TeleportToShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportToPlayerStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart"));

	UAthenaCheatManager_TeleportToPlayerStart_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportToNearestTreasureLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation"));

	UAthenaCheatManager_TeleportToNearestTreasureLocation_Params params;

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

	UAthenaCheatManager_TeleportToLocation_Params params;
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

	UAthenaCheatManager_TeleportToHideout_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// FString                        DestinationId                  (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportToDebugDestinationLocation(const FString& ActorIdString, const FString& DestinationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation"));

	UAthenaCheatManager_TeleportToDebugDestinationLocation_Params params;
	params.ActorIdString = ActorIdString;
	params.DestinationId = DestinationId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportToAggressiveGhostShipEncounter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter"));

	UAthenaCheatManager_TeleportToAggressiveGhostShipEncounter_Params params;

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

	UAthenaCheatManager_TeleportShip_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation
// (Final, Exec, Native, Public)
// Parameters:
// int                            SpireIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TeleportPlayerToSpireLocation(int SpireIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation"));

	UAthenaCheatManager_TeleportPlayerToSpireLocation_Params params;
	params.SpireIndex = SpireIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportPlayerToSafety()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety"));

	UAthenaCheatManager_TeleportPlayerToSafety_Params params;

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

	UAthenaCheatManager_TeleportPlayerToOffsetAndReturn_Params params;
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

	UAthenaCheatManager_TeleportPlayerToKraken_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::TeleportPlayersCrewShipToPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation"));

	UAthenaCheatManager_TeleportPlayersCrewShipToPlayerLocation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportOutOfHideout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout"));

	UAthenaCheatManager_TeleportOutOfHideout_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip
// (Final, Exec, Native, Public)
// Parameters:
// FString                        CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportCrewToShip(const FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip"));

	UAthenaCheatManager_TeleportCrewToShip_Params params;
	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// FString                        CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportCrewToSafeSpawnLocationFromRemoteActor(const FString& ActorIdString, const FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor"));

	UAthenaCheatManager_TeleportCrewToSafeSpawnLocationFromRemoteActor_Params params;
	params.ActorIdString = ActorIdString;
	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation
// (Final, Exec, Native, Public)
// Parameters:
// FString                        CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportCrewToSafeSpawnLocation(const FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation"));

	UAthenaCheatManager_TeleportCrewToSafeSpawnLocation_Params params;
	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportCrewMemberToShip(const FString& ActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip"));

	UAthenaCheatManager_TeleportCrewMemberToShip_Params params;
	params.ActorIdString = ActorIdString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportAllPlayersToShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip"));

	UAthenaCheatManager_TeleportAllPlayersToShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportAllPlayersToPlayerStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart"));

	UAthenaCheatManager_TeleportAllPlayersToPlayerStart_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportAllCrewsToShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips"));

	UAthenaCheatManager_TeleportAllCrewsToShips_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations
// (Final, Exec, Native, Public)

void UAthenaCheatManager::TeleportAllCrewsToCrewSpawnLocations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations"));

	UAthenaCheatManager_TeleportAllCrewsToCrewSpawnLocations_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// int                            DestinationActorType           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TeleportActorToTrackedActorType(const FString& ActorIdString, int DestinationActorType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType"));

	UAthenaCheatManager_TeleportActorToTrackedActorType_Params params;
	params.ActorIdString = ActorIdString;
	params.DestinationActorType = DestinationActorType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// FString                        ControllerActorIdString        (Parm, ZeroConstructor)
// FString                        TeleportLocationActorIdString  (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportActorToTeleportLocationActor(const FString& ControllerActorIdString, const FString& TeleportLocationActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor"));

	UAthenaCheatManager_TeleportActorToTeleportLocationActor_Params params;
	params.ControllerActorIdString = ControllerActorIdString;
	params.TeleportLocationActorIdString = TeleportLocationActorIdString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToPlayerBuriedDigSite
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportActorToPlayerBuriedDigSite(const FString& ActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToPlayerBuriedDigSite"));

	UAthenaCheatManager_TeleportActorToPlayerBuriedDigSite_Params params;
	params.ActorIdString = ActorIdString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TeleportActorToLocation(const FString& ActorIdString, float LocationX, float LocationY, float LocationZ, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation"));

	UAthenaCheatManager_TeleportActorToLocation_Params params;
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
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// FString                        IslandName                     (Parm, ZeroConstructor)

void UAthenaCheatManager::TeleportActorToIsland(const FString& ActorIdString, const FString& IslandName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland"));

	UAthenaCheatManager_TeleportActorToIsland_Params params;
	params.ActorIdString = ActorIdString;
	params.IslandName = IslandName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// bool                           WasBuriedByPlayer              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TeleportActorToDigSite(const FString& ActorIdString, bool WasBuriedByPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite"));

	UAthenaCheatManager_TeleportActorToDigSite_Params params;
	params.ActorIdString = ActorIdString;
	params.WasBuriedByPlayer = WasBuriedByPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// FString                        DestinationActorIdString       (Parm, ZeroConstructor)
// float                          OffsetX                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetY                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetZ                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::TeleportActorToActorWithOffset(const FString& ActorIdString, const FString& DestinationActorIdString, float OffsetX, float OffsetY, float OffsetZ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset"));

	UAthenaCheatManager_TeleportActorToActorWithOffset_Params params;
	params.ActorIdString = ActorIdString;
	params.DestinationActorIdString = DestinationActorIdString;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;
	params.OffsetZ = OffsetZ;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SuperShovel
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SuperShovel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SuperShovel"));

	UAthenaCheatManager_SuperShovel_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SuperSailor
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SuperSailor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SuperSailor"));

	UAthenaCheatManager_SuperSailor_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StoreWieldedItemInBootyStorageInCurrentIsland()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland"));

	UAthenaCheatManager_StoreWieldedItemInBootyStorageInCurrentIsland_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage
// (Final, Exec, Native, Public)
// Parameters:
// FString                        IslandName                     (Parm, ZeroConstructor)

void UAthenaCheatManager::StoreWieldedItemInBootyStorage(const FString& IslandName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage"));

	UAthenaCheatManager_StoreWieldedItemInBootyStorage_Params params;
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

	UAthenaCheatManager_StoreShipLocation_Params params;
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

	UAthenaCheatManager_StopShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StopPetHangout
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StopPetHangout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StopPetHangout"));

	UAthenaCheatManager_StopPetHangout_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StopLocalSequences
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StopLocalSequences()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StopLocalSequences"));

	UAthenaCheatManager_StopLocalSequences_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StopAllShips
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::StopAllShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StopAllShips"));

	UAthenaCheatManager_StopAllShips_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StopAllPetsHangout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout"));

	UAthenaCheatManager_StopAllPetsHangout_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartVoyage
// (Final, Exec, Native, Public)
// Parameters:
// FString                        SourceAssetName                (Parm, ZeroConstructor)
// bool                           Development                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::StartVoyage(const FString& SourceAssetName, bool Development)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartVoyage"));

	UAthenaCheatManager_StartVoyage_Params params;
	params.SourceAssetName = SourceAssetName;
	params.Development = Development;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartSicknessOnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer"));

	UAthenaCheatManager_StartSicknessOnPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage
// (Final, Exec, Native, Public)
// Parameters:
// FString                        RomeVoyageString               (Parm, ZeroConstructor)

void UAthenaCheatManager::StartSelectedRomeVoyage(const FString& RomeVoyageString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage"));

	UAthenaCheatManager_StartSelectedRomeVoyage_Params params;
	params.RomeVoyageString = RomeVoyageString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartNearestVolcano
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartNearestVolcano()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartNearestVolcano"));

	UAthenaCheatManager_StartNearestVolcano_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartNearestGeysers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartNearestGeysers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartNearestGeysers"));

	UAthenaCheatManager_StartNearestGeysers_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartNearestEarthquake()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake"));

	UAthenaCheatManager_StartNearestEarthquake_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartDemoSession
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartDemoSession()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartDemoSession"));

	UAthenaCheatManager_StartDemoSession_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC
// (Final, Exec, Native, Public)
// Parameters:
// int                            NumOfCrates                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::StartCargoRunFromNearestNPC(int NumOfCrates)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC"));

	UAthenaCheatManager_StartCargoRunFromNearestNPC_Params params;
	params.NumOfCrates = NumOfCrates;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartAshenLordGeysers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers"));

	UAthenaCheatManager_StartAshenLordGeysers_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartAllVolcanos
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartAllVolcanos()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartAllVolcanos"));

	UAthenaCheatManager_StartAllVolcanos_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages
// (Final, Exec, Native, Public)

void UAthenaCheatManager::StartAllCrewVoyages()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages"));

	UAthenaCheatManager_StartAllCrewVoyages_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpireStreamOut
// (Final, Exec, Native, Public)
// Parameters:
// int                            SpireIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpireStreamOut(int SpireIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpireStreamOut"));

	UAthenaCheatManager_SpireStreamOut_Params params;
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

	UAthenaCheatManager_SpireStreamIn_Params params;
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

	UAthenaCheatManager_SpinShip_Params params;
	params.YawSpdInDegreesPerSecond = YawSpdInDegreesPerSecond;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnWatercraft
// (Final, Exec, Native, Public)
// Parameters:
// FString                        WatercraftClassString          (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnWatercraft(const FString& WatercraftClassString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnWatercraft"));

	UAthenaCheatManager_SpawnWatercraft_Params params;
	params.WatercraftClassString = WatercraftClassString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// FString                        ChestTypeString                (Parm, OutParm, ZeroConstructor)

void UAthenaCheatManager::SpawnTreasureChestOfType(FString* ChestTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType"));

	UAthenaCheatManager_SpawnTreasureChestOfType_Params params;

	UObject::ProcessEvent(fn, &params);

	if (ChestTypeString != nullptr)
		*ChestTypeString = params.ChestTypeString;
}


// Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact
// (Final, Exec, Native, Public)
// Parameters:
// FString                        TypeString                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnTreasureArtifact(const FString& TypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact"));

	UAthenaCheatManager_SpawnTreasureArtifact_Params params;
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

	UAthenaCheatManager_SpawnTinySharkAtLocation_Params params;
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

	UAthenaCheatManager_SpawnTinySharkAtCurrentLocation_Params params;
	params.ControllerParamIndex = ControllerParamIndex;
	params.PartIndex = PartIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// FString                        FortEventName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaCheatManager::SpawnStrongholdKeyFromGameEventType(const FString& FortEventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType"));

	UAthenaCheatManager_SpawnStrongholdKeyFromGameEventType_Params params;
	params.FortEventName = FortEventName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnStrongholdKey()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey"));

	UAthenaCheatManager_SpawnStrongholdKey_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// FString                        IslandName                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnSmallShipAtIsland(const FString& IslandName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland"));

	UAthenaCheatManager_SpawnSmallShipAtIsland_Params params;
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

	UAthenaCheatManager_SpawnSmallShip_Params params;
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

	UAthenaCheatManager_SpawnSkeletonAtNearestAISpawnPoint_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnShipOfType
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnYaw                       (Parm, ZeroConstructor, IsPlainOldData)
// FString                        TypeString                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnShipOfType(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw, const FString& TypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnShipOfType"));

	UAthenaCheatManager_SpawnShipOfType_Params params;
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
// FString                        TypeString                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw, const FString& TypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable"));

	UAthenaCheatManager_SpawnShipInFrontOfNearestAIInteractable_Params params;
	params.XProportion = XProportion;
	params.YProportion = YProportion;
	params.Yaw = Yaw;
	params.TypeString = TypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// FString                        InShipDescAssetString          (Parm, ZeroConstructor)
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpawnYaw                       (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnShipFromDesc(const FString& InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc"));

	UAthenaCheatManager_SpawnShipFromDesc_Params params;
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
// FString                        IslandName                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnShipAtIsland(const FString& IslandName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland"));

	UAthenaCheatManager_SpawnShipAtIsland_Params params;
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

	UAthenaCheatManager_SpawnShip_Params params;
	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;
	params.SpawnYaw = SpawnYaw;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnRomeTreasureChestOfType
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ChestTypeString                (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnRomeTreasureChestOfType(const FString& ChestTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnRomeTreasureChestOfType"));

	UAthenaCheatManager_SpawnRomeTreasureChestOfType_Params params;
	params.ChestTypeString = ChestTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI
// (Final, Exec, Native, Public)
// Parameters:
// FString                        AIDescString                   (Parm, ZeroConstructor)
// int                            NumToSpawn                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnNumberOfAI(const FString& AIDescString, int NumToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI"));

	UAthenaCheatManager_SpawnNumberOfAI_Params params;
	params.AIDescString = AIDescString;
	params.NumToSpawn = NumToSpawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnNightmareAggressiveGhostShipEncountersRandom()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom"));

	UAthenaCheatManager_SpawnNightmareAggressiveGhostShipEncountersRandom_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnNightmareAggressiveGhostShipEncountersNearToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer"));

	UAthenaCheatManager_SpawnNightmareAggressiveGhostShipEncountersNearToPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// FString                        ChestTypeString                (Parm, OutParm, ZeroConstructor)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnMultipleTreasureChestsOfType(int Num, FString* ChestTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType"));

	UAthenaCheatManager_SpawnMultipleTreasureChestsOfType_Params params;
	params.Num = Num;

	UObject::ProcessEvent(fn, &params);

	if (ChestTypeString != nullptr)
		*ChestTypeString = params.ChestTypeString;
}


// Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle
// (Final, Exec, Native, Public)
// Parameters:
// FString                        MessageInABottleTypeString     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnMessageInABottle(const FString& MessageInABottleTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle"));

	UAthenaCheatManager_SpawnMessageInABottle_Params params;
	params.MessageInABottleTypeString = MessageInABottleTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnMermaid
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnMermaid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnMermaid"));

	UAthenaCheatManager_SpawnMermaid_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna
// (Final, Exec, Native, Public)
// Parameters:
// FString                        FaunaTypeString                (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnMerchantFauna(const FString& FaunaTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna"));

	UAthenaCheatManager_SpawnMerchantFauna_Params params;
	params.FaunaTypeString = FaunaTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate
// (Final, Exec, Native, Public)
// Parameters:
// FString                        MerchantCrateTypeString        (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnMerchantCrate(const FString& MerchantCrateTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate"));

	UAthenaCheatManager_SpawnMerchantCrate_Params params;
	params.MerchantCrateTypeString = MerchantCrateTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo
// (Final, Exec, Native, Public)
// Parameters:
// FString                        MerchantCargoTypeString        (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnMerchantCargo(const FString& MerchantCargoTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo"));

	UAthenaCheatManager_SpawnMerchantCargo_Params params;
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

	UAthenaCheatManager_SpawnKrakenAtCurrentLocationWithNumTentacles_Params params;
	params.NumTentacles = NumTentacles;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnKrakenAtCurrentLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation"));

	UAthenaCheatManager_SpawnKrakenAtCurrentLocation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ItemString                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnItemOnFloor(const FString& ItemString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor"));

	UAthenaCheatManager_SpawnItemOnFloor_Params params;
	params.ItemString = ItemString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnItemInHand
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ItemString                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnItemInHand(const FString& ItemString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnItemInHand"));

	UAthenaCheatManager_SpawnItemInHand_Params params;
	params.ItemString = ItemString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnGoldMound
// (Final, Exec, Native, Public)
// Parameters:
// FString                        GoldMoundTypeString            (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnGoldMound(const FString& GoldMoundTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnGoldMound"));

	UAthenaCheatManager_SpawnGoldMound_Params params;
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

	UAthenaCheatManager_SpawnGeyserAtPlayerLocationWithDormancy_Params params;
	params.Dormancy = Dormancy;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnGeyserAtPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation"));

	UAthenaCheatManager_SpawnGeyserAtPlayerLocation_Params params;

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

	UAthenaCheatManager_SpawnGeyserAtLocation_Params params;
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

	UAthenaCheatManager_SpawnFogAtPlayerPosition_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation
// (Final, Exec, Native, Public)
// Parameters:
// FString                        InBaitType                     (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnFishAtPlayerLocation(const FString& InBaitType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation"));

	UAthenaCheatManager_SpawnFishAtPlayerLocation_Params params;
	params.InBaitType = InBaitType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnFirework
// (Final, Exec, Native, Public)
// Parameters:
// FString                        FireworkItemString             (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnFirework(const FString& FireworkItemString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnFirework"));

	UAthenaCheatManager_SpawnFirework_Params params;
	params.FireworkItemString = FireworkItemString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball
// (Final, Exec, Native, Public)
// Parameters:
// FString                        CannonballTypeString           (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnCursedCannonball(const FString& CannonballTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball"));

	UAthenaCheatManager_SpawnCursedCannonball_Params params;
	params.CannonballTypeString = CannonballTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnContextualPrompt
// (Final, Exec, Native, Public)
// Parameters:
// FString                        PromptAccessKey                (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnContextualPrompt(const FString& PromptAccessKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnContextualPrompt"));

	UAthenaCheatManager_SpawnContextualPrompt_Params params;
	params.PromptAccessKey = PromptAccessKey;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// FString                        ChestTypeString                (Parm, OutParm, ZeroConstructor)

void UAthenaCheatManager::SpawnCollectorsChestOfType(FString* ChestTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType"));

	UAthenaCheatManager_SpawnCollectorsChestOfType_Params params;

	UObject::ProcessEvent(fn, &params);

	if (ChestTypeString != nullptr)
		*ChestTypeString = params.ChestTypeString;
}


// Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate
// (Final, Exec, Native, Public)
// Parameters:
// FString                        SpawnCargoRunCrateString       (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnCargoRunCrate(const FString& SpawnCargoRunCrateString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate"));

	UAthenaCheatManager_SpawnCargoRunCrate_Params params;
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

	UAthenaCheatManager_SpawnCabinDoorInFrontOfPlayer_Params params;
	params.Distance = Distance;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnBountyReward
// (Final, Exec, Native, Public)
// Parameters:
// FString                        BountyTypeString               (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnBountyReward(const FString& BountyTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnBountyReward"));

	UAthenaCheatManager_SpawnBountyReward_Params params;
	params.BountyTypeString = BountyTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnBootyPickupPoint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint"));

	UAthenaCheatManager_SpawnBootyPickupPoint_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup
// (Final, Exec, Native, Public)
// Parameters:
// bool                           ForcedCloseSpawn               (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnBarrelGroup(bool ForcedCloseSpawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup"));

	UAthenaCheatManager_SpawnBarrelGroup_Params params;
	params.ForcedCloseSpawn = ForcedCloseSpawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnAThousandTreasureChests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests"));

	UAthenaCheatManager_SpawnAThousandTreasureChests_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable
// (Final, Exec, Native, Public)
// Parameters:
// FString                        DebugWieldableTypeString       (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnAndEquipDebugWieldable(const FString& DebugWieldableTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable"));

	UAthenaCheatManager_SpawnAndEquipDebugWieldable_Params params;
	params.DebugWieldableTypeString = DebugWieldableTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger
// (Final, Exec, Native, Public)
// Parameters:
// FString                        AIDescString                   (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnAINoTrigger(const FString& AIDescString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger"));

	UAthenaCheatManager_SpawnAINoTrigger_Params params;
	params.AIDescString = AIDescString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter
// (Final, Exec, Native, Public)
// Parameters:
// FString                        AIEncounterString              (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnAIEncounter(const FString& AIEncounterString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter"));

	UAthenaCheatManager_SpawnAIEncounter_Params params;
	params.AIEncounterString = AIEncounterString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint
// (Final, Exec, Native, Public)
// Parameters:
// FString                        AIDescString                   (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnAIAtNearestAISpawnPoint(const FString& AIDescString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint"));

	UAthenaCheatManager_SpawnAIAtNearestAISpawnPoint_Params params;
	params.AIDescString = AIDescString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed
// (Final, Exec, Native, Public)
// Parameters:
// FString                        AIDescString                   (Parm, ZeroConstructor)
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnAIAtLocationDelayed(const FString& AIDescString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed"));

	UAthenaCheatManager_SpawnAIAtLocationDelayed_Params params;
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
// FString                        AIDescString                   (Parm, ZeroConstructor)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SpawnAIAtCurrentLocationDelayed(const FString& AIDescString, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed"));

	UAthenaCheatManager_SpawnAIAtCurrentLocationDelayed_Params params;
	params.AIDescString = AIDescString;
	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAI
// (Final, Exec, Native, Public)
// Parameters:
// FString                        AIDescString                   (Parm, ZeroConstructor)

void UAthenaCheatManager::SpawnAI(const FString& AIDescString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAI"));

	UAthenaCheatManager_SpawnAI_Params params;
	params.AIDescString = AIDescString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid"));

	UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpireFriendlyFormation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation"));

	UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireFriendlyFormation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpireEnemyFormation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation"));

	UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireEnemyFormation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire"));

	UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpire_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SpawnAggressiveGhostShipEncounter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter"));

	UAthenaCheatManager_SpawnAggressiveGhostShipEncounter_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::SmoulderClosestShipFire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire"));

	UAthenaCheatManager_SmoulderClosestShipFire_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::SmoulderAllShipFires()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires"));

	UAthenaCheatManager_SmoulderAllShipFires_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SlowMotionOverride
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SlowMotionOverride(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SlowMotionOverride"));

	UAthenaCheatManager_SlowMotionOverride_Params params;
	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SkipToEndOfOnboarding()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding"));

	UAthenaCheatManager_SkipToEndOfOnboarding_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex
// (Final, Exec, Native, Public)
// Parameters:
// int                            KeelOverConfigIndex            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SinkShipWithKeelOverIndex(int KeelOverConfigIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex"));

	UAthenaCheatManager_SinkShipWithKeelOverIndex_Params params;
	params.KeelOverConfigIndex = KeelOverConfigIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkShipByActorId
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ShipActorIdString              (Parm, ZeroConstructor)

void UAthenaCheatManager::SinkShipByActorId(const FString& ShipActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SinkShipByActorId"));

	UAthenaCheatManager_SinkShipByActorId_Params params;
	params.ShipActorIdString = ShipActorIdString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SinkShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SinkShip"));

	UAthenaCheatManager_SinkShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SinkClosestItemProxy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy"));

	UAthenaCheatManager_SinkClosestItemProxy_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkAllBarrels
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SinkAllBarrels()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SinkAllBarrels"));

	UAthenaCheatManager_SinkAllBarrels_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SinkAllAIShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SinkAllAIShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SinkAllAIShips"));

	UAthenaCheatManager_SinkAllAIShips_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SingleStickRight
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SingleStickRight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SingleStickRight"));

	UAthenaCheatManager_SingleStickRight_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SingleStickOff
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SingleStickOff()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SingleStickOff"));

	UAthenaCheatManager_SingleStickOff_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SingleStickLeft
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SingleStickLeft()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SingleStickLeft"));

	UAthenaCheatManager_SingleStickLeft_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SimulateTunnelFailure()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure"));

	UAthenaCheatManager_SimulateTunnelFailure_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest
// (Final, Exec, Native, Public)
// Parameters:
// FString                        Id                             (Parm, ZeroConstructor)

void UAthenaCheatManager::SimulatePetReactRequest(const FString& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest"));

	UAthenaCheatManager_SimulatePetReactRequest_Params params;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation
// (Final, Exec, Native, Public)
// Parameters:
// FString                        Id                             (Parm, ZeroConstructor)

void UAthenaCheatManager::SimulatePetReactCancellation(const FString& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation"));

	UAthenaCheatManager_SimulatePetReactCancellation_Params params;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowTavernBanners
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowTavernBanners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowTavernBanners"));

	UAthenaCheatManager_ShowTavernBanners_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowTaleDebug_WithVariables()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables"));

	UAthenaCheatManager_ShowTaleDebug_WithVariables_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowTaleDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowTaleDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowTaleDebug"));

	UAthenaCheatManager_ShowTaleDebug_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowRandomCrewMemberGamerCard()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard"));

	UAthenaCheatManager_ShowRandomCrewMemberGamerCard_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowEmissaryVoteIndicators()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators"));

	UAthenaCheatManager_ShowEmissaryVoteIndicators_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowAllWelds
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowAllWelds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowAllWelds"));

	UAthenaCheatManager_ShowAllWelds_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowAllRomeBeacons
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShowAllRomeBeacons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowAllRomeBeacons"));

	UAthenaCheatManager_ShowAllRomeBeacons_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus
// (Final, Exec, Native, Public)
// Parameters:
// FString                        CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::ShowAllianceStatus(const FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus"));

	UAthenaCheatManager_ShowAllianceStatus_Params params;
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

	UAthenaCheatManager_ShipwrecksSpawnOne_Params params;
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
// FString                        WreckAsset                     (Parm, ZeroConstructor)

void UAthenaCheatManager::ShipwrecksSpawnCustom(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, const FString& WreckAsset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom"));

	UAthenaCheatManager_ShipwrecksSpawnCustom_Params params;
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

	UAthenaCheatManager_ShipwrecksRemoveCustom_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShipwrecksRegen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen"));

	UAthenaCheatManager_ShipwrecksRegen_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ShipUpdateMassProperies()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies"));

	UAthenaCheatManager_ShipUpdateMassProperies_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetWheelAngle
// (Final, Exec, Native, Public)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetWheelAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetWheelAngle"));

	UAthenaCheatManager_SetWheelAngle_Params params;
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

	UAthenaCheatManager_SetWeaponsLockedOut_Params params;
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

	UAthenaCheatManager_SetWaveFlag_Params params;
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

	UAthenaCheatManager_SetWaterWaveParams_Params params;
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

	UAthenaCheatManager_SetVoiceChatEndpointXAudio2_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetVoiceChatEndpointWwise()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise"));

	UAthenaCheatManager_SetVoiceChatEndpointWwise_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetUnattenuatedChatMixingMethodToUseWwise()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise"));

	UAthenaCheatManager_SetUnattenuatedChatMixingMethodToUseWwise_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetUnattenuatedChatMixingMethodToUsePlatform()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform"));

	UAthenaCheatManager_SetUnattenuatedChatMixingMethodToUsePlatform_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetTinySharkToOneHealth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth"));

	UAthenaCheatManager_SetTinySharkToOneHealth_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetTimeScalar
// (Final, Exec, Native, Public)
// Parameters:
// float                          TimeScalar                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetTimeScalar(float TimeScalar)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetTimeScalar"));

	UAthenaCheatManager_SetTimeScalar_Params params;
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

	UAthenaCheatManager_SetTimeHoursAndMinutes_Params params;
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

	UAthenaCheatManager_SetTime_Params params;
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

	UAthenaCheatManager_SetTaleSelectorSeed_Params params;
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

	UAthenaCheatManager_SetShroudbreakerActive_Params params;
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

	UAthenaCheatManager_SetShipYaw_Params params;
	params.Yaw = Yaw;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipWheelFullyRepaired()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired"));

	UAthenaCheatManager_SetShipWheelFullyRepaired_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipWheelFullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged"));

	UAthenaCheatManager_SetShipWheelFullyDamaged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipRoll
// (Final, Exec, Native, Public)
// Parameters:
// float                          Roll                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetShipRoll(float Roll)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipRoll"));

	UAthenaCheatManager_SetShipRoll_Params params;
	params.Roll = Roll;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipFullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged"));

	UAthenaCheatManager_SetShipFullyDamaged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipCapstanFullyRepaired()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired"));

	UAthenaCheatManager_SetShipCapstanFullyRepaired_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetShipCapstanFullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged"));

	UAthenaCheatManager_SetShipCapstanFullyDamaged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend
// (Final, Exec, Native, Public)
// Parameters:
// float                          UnaryBlend                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetShipBuoyancyBlend(float UnaryBlend)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend"));

	UAthenaCheatManager_SetShipBuoyancyBlend_Params params;
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

	UAthenaCheatManager_SetSailLoweredProportions_Params params;
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

	UAthenaCheatManager_SetSailAngles_Params params;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetPreventLeakingOnAllShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips"));

	UAthenaCheatManager_SetPreventLeakingOnAllShips_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones
// (Final, Exec, Native, Public)
// Parameters:
// bool                           PreventLeaking                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetPreventLeakingOnAllDamageZones(bool PreventLeaking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones"));

	UAthenaCheatManager_SetPreventLeakingOnAllDamageZones_Params params;
	params.PreventLeaking = PreventLeaking;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetPlayerVisibleToAI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI"));

	UAthenaCheatManager_SetPlayerVisibleToAI_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPlayerMaxTicks
// (Final, Exec, Native, Public)
// Parameters:
// int                            InMaxTicksPerFrame             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetPlayerMaxTicks(int InMaxTicksPerFrame)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetPlayerMaxTicks"));

	UAthenaCheatManager_SetPlayerMaxTicks_Params params;
	params.InMaxTicksPerFrame = InMaxTicksPerFrame;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetPlayerInvisibleToAI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI"));

	UAthenaCheatManager_SetPlayerInvisibleToAI_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetPhotoMode
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetPhotoMode(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetPhotoMode"));

	UAthenaCheatManager_SetPhotoMode_Params params;
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

	UAthenaCheatManager_SetPetMovementTimeWindow_Params params;
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

	UAthenaCheatManager_SetNonCrewChatSpatialisation_Params params;
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

	UAthenaCheatManager_SetMaxNumOfSpawnedAI_Params params;
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

	UAthenaCheatManager_SetMaxMovingPetsOnShips_Params params;
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

	UAthenaCheatManager_SetMaxMovingPetsOnServer_Params params;
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

	UAthenaCheatManager_SetMaxMovingPetsOnLand_Params params;
	params.MaxMovingPets = MaxMovingPets;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetMastsFullyRepaired()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired"));

	UAthenaCheatManager_SetMastsFullyRepaired_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetMastsFullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged"));

	UAthenaCheatManager_SetMastsFullyDamaged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled
// (Exec, Native, Public)
// Parameters:
// bool                           Disabled                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetKnockbackDisabled(bool Disabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled"));

	UAthenaCheatManager_SetKnockbackDisabled_Params params;
	params.Disabled = Disabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetIsTinSession
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InIsCaptainedSession           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetIsTinSession(bool InIsCaptainedSession)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetIsTinSession"));

	UAthenaCheatManager_SetIsTinSession_Params params;
	params.InIsCaptainedSession = InIsCaptainedSession;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetIsTinOwner
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InIsCaptain                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetIsTinOwner(bool InIsCaptain)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetIsTinOwner"));

	UAthenaCheatManager_SetIsTinOwner_Params params;
	params.InIsCaptain = InIsCaptain;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetIdleDisconnectEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled"));

	UAthenaCheatManager_SetIdleDisconnectEnabled_Params params;
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

	UAthenaCheatManager_SetHealthInfoReplicateOverride_Params params;
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

	UAthenaCheatManager_SetGrogSecondary_Params params;
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

	UAthenaCheatManager_SetGodMode_Params params;
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

	UAthenaCheatManager_SetGlitterbeardRequiredPlayersOverride_Params params;
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

	UAthenaCheatManager_SetFOV_Params params;
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

	UAthenaCheatManager_SetFlameOfFateColour_Params params;
	params.InFlameOfFateType = InFlameOfFateType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetDebugItemSource
// (Final, Exec, Native, Public)
// Parameters:
// FString                        Source                         (Parm, ZeroConstructor)

void UAthenaCheatManager::SetDebugItemSource(const FString& Source)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetDebugItemSource"));

	UAthenaCheatManager_SetDebugItemSource_Params params;
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

	UAthenaCheatManager_SetDebugHealthStage_Params params;
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

	UAthenaCheatManager_SetDebugCameraUseProjectileCollisionChannel_Params params;
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

	UAthenaCheatManager_SetDeathPenaltyRespawnTimer_Params params;
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

	UAthenaCheatManager_SetDamageAllowedToPlayerShip_Params params;
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

	UAthenaCheatManager_SetCutsceneResponseCoordinatorDebug_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetCurrentCulture
// (Final, Exec, Native, Public)
// Parameters:
// FString                        Culture                        (Parm, ZeroConstructor)

void UAthenaCheatManager::SetCurrentCulture(const FString& Culture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetCurrentCulture"));

	UAthenaCheatManager_SetCurrentCulture_Params params;
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

	UAthenaCheatManager_SetCoordinatedKrakenPhaseAsset_Params params;
	params.AssetIndex = AssetIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetCoordinatedKrakenCurrentPhaseAssetInactive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive"));

	UAthenaCheatManager_SetCoordinatedKrakenCurrentPhaseAssetInactive_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SetCoordinatedKrakenCurrentPhaseAssetActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive"));

	UAthenaCheatManager_SetCoordinatedKrakenCurrentPhaseAssetActive_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetCapstanPosition
// (Final, Exec, Native, Public)
// Parameters:
// float                          Position                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetCapstanPosition(float Position)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetCapstanPosition"));

	UAthenaCheatManager_SetCapstanPosition_Params params;
	params.Position = Position;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetAxisBinding
// (Final, Exec, Native, Public)
// Parameters:
// FString                        InBindingName                  (Parm, ZeroConstructor)
// FString                        InKeyName                      (Parm, ZeroConstructor)

void UAthenaCheatManager::SetAxisBinding(const FString& InBindingName, const FString& InKeyName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetAxisBinding"));

	UAthenaCheatManager_SetAxisBinding_Params params;
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

	UAthenaCheatManager_SetAllAIOverrideCannonShotHitChance_Params params;
	params.HitChance = HitChance;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude
// (Final, Exec, Native, Public)
// Parameters:
// FString                        TeamAString                    (Parm, ZeroConstructor)
// FString                        TeamBString                    (Parm, ZeroConstructor)
// FString                        AttitudeString                 (Parm, ZeroConstructor)

void UAthenaCheatManager::SetAITeamAttitude(const FString& TeamAString, const FString& TeamBString, const FString& AttitudeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude"));

	UAthenaCheatManager_SetAITeamAttitude_Params params;
	params.TeamAString = TeamAString;
	params.TeamBString = TeamBString;
	params.AttitudeString = AttitudeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility
// (Final, Exec, Native, Public)
// Parameters:
// FString                        AIAbilityString                (Parm, ZeroConstructor)

void UAthenaCheatManager::SetAIExclusiveAbility(const FString& AIAbilityString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility"));

	UAthenaCheatManager_SetAIExclusiveAbility_Params params;
	params.AIAbilityString = AIAbilityString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier
// (Final, Exec, Native, Public)
// Parameters:
// FString                        AIAbilityString                (Parm, ZeroConstructor)
// float                          IntervalCooldownMultiplier     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ActivationCooldownMultiplier   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SetAIAbilityTimeMultiplier(const FString& AIAbilityString, float IntervalCooldownMultiplier, float ActivationCooldownMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier"));

	UAthenaCheatManager_SetAIAbilityTimeMultiplier_Params params;
	params.AIAbilityString = AIAbilityString;
	params.IntervalCooldownMultiplier = IntervalCooldownMultiplier;
	params.ActivationCooldownMultiplier = ActivationCooldownMultiplier;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn
// (Final, Exec, Native, Public)
// Parameters:
// FString                        AIAbilityString                (Parm, ZeroConstructor)

void UAthenaCheatManager::SetAbilityAlwaysOn(const FString& AIAbilityString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn"));

	UAthenaCheatManager_SetAbilityAlwaysOn_Params params;
	params.AIAbilityString = AIAbilityString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SendUpdateVoyageProgressEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent"));

	UAthenaCheatManager_SendUpdateVoyageProgressEvent_Params params;

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

	UAthenaCheatManager_SendStatEvent_Params params;
	params.StatId = StatId;
	params.StatValue = StatValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent
// (Final, Exec, Native, Public)
// Parameters:
// FString                        CompanyNameAndRewardIdSeparatedByColon (Parm, ZeroConstructor)

void UAthenaCheatManager::SendRewardRequestEvent(const FString& CompanyNameAndRewardIdSeparatedByColon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent"));

	UAthenaCheatManager_SendRewardRequestEvent_Params params;
	params.CompanyNameAndRewardIdSeparatedByColon = CompanyNameAndRewardIdSeparatedByColon;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SendResetReaperLevelEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent"));

	UAthenaCheatManager_SendResetReaperLevelEvent_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ScuttleShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::ScuttleShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ScuttleShip"));

	UAthenaCheatManager_ScuttleShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ScreenFadeStart
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ScreenFadeStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ScreenFadeStart"));

	UAthenaCheatManager_ScreenFadeStart_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ScreenFadeEnd()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd"));

	UAthenaCheatManager_ScreenFadeEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerToggleDebugDraw()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw"));

	UAthenaCheatManager_SchedulerToggleDebugDraw_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerSkipToNext()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext"));

	UAthenaCheatManager_SchedulerSkipToNext_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitTinyShark()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark"));

	UAthenaCheatManager_SchedulerInitTinyShark_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitSkellyFort()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort"));

	UAthenaCheatManager_SchedulerInitSkellyFort_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitKraken()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken"));

	UAthenaCheatManager_SchedulerInitKraken_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitDefault()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault"));

	UAthenaCheatManager_SchedulerInitDefault_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitAshenLord()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord"));

	UAthenaCheatManager_SchedulerInitAshenLord_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitAIShipPassive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive"));

	UAthenaCheatManager_SchedulerInitAIShipPassive_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitAIShipBattle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle"));

	UAthenaCheatManager_SchedulerInitAIShipBattle_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitAIShipAggro()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro"));

	UAthenaCheatManager_SchedulerInitAIShipAggro_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::SchedulerInitAggroGhostShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip"));

	UAthenaCheatManager_SchedulerInitAggroGhostShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SchedulerAdvance
// (Final, Exec, Native, Public)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::SchedulerAdvance(float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SchedulerAdvance"));

	UAthenaCheatManager_SchedulerAdvance_Params params;
	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SaveMyShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::SaveMyShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SaveMyShip"));

	UAthenaCheatManager_SaveMyShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SailShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::SailShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SailShip"));

	UAthenaCheatManager_SailShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.SailAllShips
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::SailAllShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.SailAllShips"));

	UAthenaCheatManager_SailAllShips_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy
// (Final, Exec, Native, Public)
// Parameters:
// float                          SecondsToRewindBy              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::RewindPhysicsSceneBy(float SecondsToRewindBy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy"));

	UAthenaCheatManager_RewindPhysicsSceneBy_Params params;
	params.SecondsToRewindBy = SecondsToRewindBy;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReviveLocalPlayerInstantly()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly"));

	UAthenaCheatManager_ReviveLocalPlayerInstantly_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReviveLocalPlayerAccordingToReviveTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime"));

	UAthenaCheatManager_ReviveLocalPlayerAccordingToReviveTime_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReviveAllPlayerCharactersAccordingToReviveTime
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReviveAllPlayerCharactersAccordingToReviveTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReviveAllPlayerCharactersAccordingToReviveTime"));

	UAthenaCheatManager_ReviveAllPlayerCharactersAccordingToReviveTime_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RetrieveItemsFromBootyStorageInCurrentIsland()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland"));

	UAthenaCheatManager_RetrieveItemsFromBootyStorageInCurrentIsland_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage
// (Final, Exec, Native, Public)
// Parameters:
// FString                        IslandName                     (Parm, ZeroConstructor)

void UAthenaCheatManager::RetrieveItemsFromBootyStorage(const FString& IslandName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage"));

	UAthenaCheatManager_RetrieveItemsFromBootyStorage_Params params;
	params.IslandName = IslandName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ShipActorIdString              (Parm, ZeroConstructor)

void UAthenaCheatManager::ResurfaceShipByActorId(const FString& ShipActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId"));

	UAthenaCheatManager_ResurfaceShipByActorId_Params params;
	params.ShipActorIdString = ShipActorIdString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RestoreAndRestockShipAndPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer"));

	UAthenaCheatManager_RestoreAndRestockShipAndPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RestockIslandBarrels()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels"));

	UAthenaCheatManager_RestockIslandBarrels_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RestockAllReplenishables()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables"));

	UAthenaCheatManager_RestockAllReplenishables_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RespawnAllIslandItemSpawners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners"));

	UAthenaCheatManager_RespawnAllIslandItemSpawners_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimerWithTime
// (Final, Exec, Native, Public)
// Parameters:
// float                          Timer                          (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ResetTinySharkSpawnTimerWithTime(float Timer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimerWithTime"));

	UAthenaCheatManager_ResetTinySharkSpawnTimerWithTime_Params params;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetTinySharkSpawnTimer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimer"));

	UAthenaCheatManager_ResetTinySharkSpawnTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetTaleSelectorSeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed"));

	UAthenaCheatManager_ResetTaleSelectorSeed_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetStats
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetStats()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetStats"));

	UAthenaCheatManager_ResetStats_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetNearestVault
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetNearestVault()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetNearestVault"));

	UAthenaCheatManager_ResetNearestVault_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetNearestEventRoom()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom"));

	UAthenaCheatManager_ResetNearestEventRoom_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetMouseDelta
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetMouseDelta()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetMouseDelta"));

	UAthenaCheatManager_ResetMouseDelta_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetMaxNumOfSpawnedAI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI"));

	UAthenaCheatManager_ResetMaxNumOfSpawnedAI_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetMaxMovingPetsOnServerToDefault()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault"));

	UAthenaCheatManager_ResetMaxMovingPetsOnServerToDefault_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetGlitterbeardTree()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree"));

	UAthenaCheatManager_ResetGlitterbeardTree_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetDemoSession
// (Final, Exec, Native, Public)
// Parameters:
// bool                           StartNewSession                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ResetDemoSession(bool StartNewSession)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetDemoSession"));

	UAthenaCheatManager_ResetDemoSession_Params params;
	params.StartNewSession = StartNewSession;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetAllOverrideCannonShotHitChance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance"));

	UAthenaCheatManager_ResetAllOverrideCannonShotHitChance_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetAllMechanisms()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms"));

	UAthenaCheatManager_ResetAllMechanisms_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetAITeamAttitudes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes"));

	UAthenaCheatManager_ResetAITeamAttitudes_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetAIExclusiveAbilities()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities"));

	UAthenaCheatManager_ResetAIExclusiveAbilities_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ResetAbilityAlwaysOn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn"));

	UAthenaCheatManager_ResetAbilityAlwaysOn_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RequestSmallPassiveAIShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip"));

	UAthenaCheatManager_RequestSmallPassiveAIShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RequestSmallAggressiveAIShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip"));

	UAthenaCheatManager_RequestSmallAggressiveAIShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RequestMysteriousNotesForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer"));

	UAthenaCheatManager_RequestMysteriousNotesForPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RequestLargePassiveAIShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip"));

	UAthenaCheatManager_RequestLargePassiveAIShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RequestLargeAggressiveAIShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip"));

	UAthenaCheatManager_RequestLargeAggressiveAIShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReplenishShipWithDebugSpawner()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner"));

	UAthenaCheatManager_ReplenishShipWithDebugSpawner_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReplenishShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReplenishShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReplenishShip"));

	UAthenaCheatManager_ReplenishShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ShipActorIdConsoleString       (Parm, ZeroConstructor)

void UAthenaCheatManager::ReplaceShipWithSmallShip(const FString& ShipActorIdConsoleString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip"));

	UAthenaCheatManager_ReplaceShipWithSmallShip_Params params;
	params.ShipActorIdConsoleString = ShipActorIdConsoleString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RepairShipAndClearInternalWater()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater"));

	UAthenaCheatManager_RepairShipAndClearInternalWater_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RepairAndClearInternalWaterOnAllShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips"));

	UAthenaCheatManager_RepairAndClearInternalWaterOnAllShips_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RenameTreasure
// (Final, Exec, Native, Public)
// Parameters:
// FString                        InVendorName                   (Parm, ZeroConstructor)

void UAthenaCheatManager::RenameTreasure(const FString& InVendorName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RenameTreasure"));

	UAthenaCheatManager_RenameTreasure_Params params;
	params.InVendorName = InVendorName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemovePetsFromAllPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers"));

	UAthenaCheatManager_RemovePetsFromAllPlayers_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemovePetFromPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer"));

	UAthenaCheatManager_RemovePetFromPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemoveLostShipmentsDebugging()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging"));

	UAthenaCheatManager_RemoveLostShipmentsDebugging_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot
// (Final, Exec, Native, Public)
// Parameters:
// int                            SlotIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::RemoveItemInSlot(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot"));

	UAthenaCheatManager_RemoveItemInSlot_Params params;
	params.SlotIndex = SlotIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemoveDebugPetSpawners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners"));

	UAthenaCheatManager_RemoveDebugPetSpawners_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemoveDebugHealthStage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage"));

	UAthenaCheatManager_RemoveDebugHealthStage_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveAllFog
// (Final, Exec, Native, Public)

void UAthenaCheatManager::RemoveAllFog()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemoveAllFog"));

	UAthenaCheatManager_RemoveAllFog_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ContextName                    (Parm, ZeroConstructor)

void UAthenaCheatManager::RemoveAISpawnContext(const FString& ContextName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext"));

	UAthenaCheatManager_RemoveAISpawnContext_Params params;
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

	UAthenaCheatManager_RebuildPirateFromSeed_Params params;
	params.Seed = Seed;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ReallyScrambleMyGamertag()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag"));

	UAthenaCheatManager_ReallyScrambleMyGamertag_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PushShip
// (Final, Exec, Native, Public)
// Parameters:
// float                          FwdSpdInMetersPerSecond        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::PushShip(float FwdSpdInMetersPerSecond)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PushShip"));

	UAthenaCheatManager_PushShip_Params params;
	params.FwdSpdInMetersPerSecond = FwdSpdInMetersPerSecond;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PullLatestEmblemProgress()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress"));

	UAthenaCheatManager_PullLatestEmblemProgress_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ProceedToNextContestState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState"));

	UAthenaCheatManager_ProceedToNextContestState_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PrintTime
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PrintTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PrintTime"));

	UAthenaCheatManager_PrintTime_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PrintNPCs
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PrintNPCs()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PrintNPCs"));

	UAthenaCheatManager_PrintNPCs_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PrintAllNetworkActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors"));

	UAthenaCheatManager_PrintAllNetworkActors_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PrintAISpawners
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PrintAISpawners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PrintAISpawners"));

	UAthenaCheatManager_PrintAISpawners_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PrintAISpawnContexts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts"));

	UAthenaCheatManager_PrintAISpawnContexts_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PlayWorldSequence
// (Final, Exec, Native, Public)
// Parameters:
// FString                        InReference                    (Parm, ZeroConstructor)

void UAthenaCheatManager::PlayWorldSequence(const FString& InReference)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PlayWorldSequence"));

	UAthenaCheatManager_PlayWorldSequence_Params params;
	params.InReference = InReference;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PlayLocalSequences
// (Final, Exec, Native, Public)

void UAthenaCheatManager::PlayLocalSequences()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PlayLocalSequences"));

	UAthenaCheatManager_PlayLocalSequences_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// FName                          Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAthenaCheatManager::PlayerAnimationOverride(const FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride"));

	UAthenaCheatManager_PlayerAnimationOverride_Params params;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// FString                        InShipActorIdConsoleString     (Parm, ZeroConstructor)
// int                            InCataloguePartIndex           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InCataloguePartCustomisationIndex (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::OverrideShipPartFromCatalogue(const FString& InShipActorIdConsoleString, int InCataloguePartIndex, int InCataloguePartCustomisationIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue"));

	UAthenaCheatManager_OverrideShipPartFromCatalogue_Params params;
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

	UAthenaCheatManager_OpenSkeletonFortDoor_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::MoveStormToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer"));

	UAthenaCheatManager_MoveStormToPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.MoveStormToLocation
// (Final, Exec, Native, Public)
// Parameters:
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::MoveStormToLocation(float LocationX, float LocationY)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.MoveStormToLocation"));

	UAthenaCheatManager_MoveStormToLocation_Params params;
	params.LocationX = LocationX;
	params.LocationY = LocationY;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.MoveStormToIsland
// (Final, Exec, Native, Public)
// Parameters:
// FString                        IslandNameString               (Parm, ZeroConstructor)

void UAthenaCheatManager::MoveStormToIsland(const FString& IslandNameString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.MoveStormToIsland"));

	UAthenaCheatManager_MoveStormToIsland_Params params;
	params.IslandNameString = IslandNameString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest
// (Final, Exec, Native, Public)

void UAthenaCheatManager::MessageBoxOnGraphicsThreadTest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest"));

	UAthenaCheatManager_MessageBoxOnGraphicsThreadTest_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead
// (Final, Exec, Native, Public)

void UAthenaCheatManager::MakeSharksBrainDead()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead"));

	UAthenaCheatManager_MakeSharksBrainDead_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner
// (Final, Exec, Native, Public)

void UAthenaCheatManager::MakeDebugPetSpawner()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner"));

	UAthenaCheatManager_MakeDebugPetSpawner_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LogShipHierarchy
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LogShipHierarchy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LogShipHierarchy"));

	UAthenaCheatManager_LogShipHierarchy_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LogServerShipHierarchy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy"));

	UAthenaCheatManager_LogServerShipHierarchy_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LogAITeamAttitudes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes"));

	UAthenaCheatManager_LogAITeamAttitudes_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew
// (Final, Exec, Native, Public)
// Parameters:
// FString                        RouteReferencePath             (Parm, ZeroConstructor)

void UAthenaCheatManager::LockTradeRouteSelectionToSpecificRouteForMyCrew(const FString& RouteReferencePath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew"));

	UAthenaCheatManager_LockTradeRouteSelectionToSpecificRouteForMyCrew_Params params;
	params.RouteReferencePath = RouteReferencePath;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew
// (Final, Exec, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// FGuid                          CrewId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FString                        RouteReferencePath             (Parm, ZeroConstructor)

void UAthenaCheatManager::LockTradeRouteSelectionToSpecificRouteForCrew(const FGuid& CrewId, const FString& RouteReferencePath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew"));

	UAthenaCheatManager_LockTradeRouteSelectionToSpecificRouteForCrew_Params params;
	params.CrewId = CrewId;
	params.RouteReferencePath = RouteReferencePath;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LocallyUnBreakLeg()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg"));

	UAthenaCheatManager_LocallyUnBreakLeg_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LocallyDisableTutorial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial"));

	UAthenaCheatManager_LocallyDisableTutorial_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LoadMyShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::LoadMyShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LoadMyShip"));

	UAthenaCheatManager_LoadMyShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LightLocalBraziers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::LightLocalBraziers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LightLocalBraziers"));

	UAthenaCheatManager_LightLocalBraziers_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius
// (Final, Exec, Native, Public)
// Parameters:
// float                          Radius                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::LightBraziersInRadius(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius"));

	UAthenaCheatManager_LightBraziersInRadius_Params params;
	params.Radius = Radius;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.LeaveAlliance
// (Final, Exec, Native, Public)
// Parameters:
// FString                        CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::LeaveAlliance(const FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.LeaveAlliance"));

	UAthenaCheatManager_LeaveAlliance_Params params;
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

	UAthenaCheatManager_LaunchPlayer_Params params;
	params.Velocity = Velocity;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenSetTentaclesToOneHealth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth"));

	UAthenaCheatManager_KrakenSetTentaclesToOneHealth_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleThrowPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer"));

	UAthenaCheatManager_KrakenAnimatedTentacleThrowPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage
// (Final, Exec, Native, Public)
// Parameters:
// float                          Damage                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::KrakenAnimatedTentacleTakeDamage(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage"));

	UAthenaCheatManager_KrakenAnimatedTentacleTakeDamage_Params params;
	params.Damage = Damage;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleSwallowPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer"));

	UAthenaCheatManager_KrakenAnimatedTentacleSwallowPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleSuckPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer"));

	UAthenaCheatManager_KrakenAnimatedTentacleSuckPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentaclePowerSlamPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer"));

	UAthenaCheatManager_KrakenAnimatedTentaclePowerSlamPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleKill()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill"));

	UAthenaCheatManager_KrakenAnimatedTentacleKill_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleIngestPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer"));

	UAthenaCheatManager_KrakenAnimatedTentacleIngestPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleDropPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer"));

	UAthenaCheatManager_KrakenAnimatedTentacleDropPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleDespawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn"));

	UAthenaCheatManager_KrakenAnimatedTentacleDespawn_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KrakenAnimatedTentacleDefeat()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat"));

	UAthenaCheatManager_KrakenAnimatedTentacleDefeat_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState
// (Final, Exec, Native, Public)
// Parameters:
// FString                        HoldState                      (Parm, ZeroConstructor)

void UAthenaCheatManager::KrakenAnimatedTentacleChangePlayerHoldState(const FString& HoldState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState"));

	UAthenaCheatManager_KrakenAnimatedTentacleChangePlayerHoldState_Params params;
	params.HoldState = HoldState;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KindleClosestShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::KindleClosestShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KindleClosestShip"));

	UAthenaCheatManager_KindleClosestShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KindleAllShipFires
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::KindleAllShipFires()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KindleAllShipFires"));

	UAthenaCheatManager_KindleAllShipFires_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillPlayer"));

	UAthenaCheatManager_KillPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillCrew
// (Final, Exec, Native, Public)
// Parameters:
// FString                        CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::KillCrew(const FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillCrew"));

	UAthenaCheatManager_KillCrew_Params params;
	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllSkeletons
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllSkeletons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllSkeletons"));

	UAthenaCheatManager_KillAllSkeletons_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllPlayers"));

	UAthenaCheatManager_KillAllPlayers_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllOtherPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers"));

	UAthenaCheatManager_KillAllOtherPlayers_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllOtherPlayerCharacters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters"));

	UAthenaCheatManager_KillAllOtherPlayerCharacters_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllDebugAISpawners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners"));

	UAthenaCheatManager_KillAllDebugAISpawners_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllCrews
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllCrews()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllCrews"));

	UAthenaCheatManager_KillAllCrews_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllAI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllAI"));

	UAthenaCheatManager_KillAllAI_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllAggressiveGhostShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips"));

	UAthenaCheatManager_KillAllAggressiveGhostShips_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters
// (Final, Exec, Native, Public)

void UAthenaCheatManager::KillAllAggressiveGhostShipEncounters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters"));

	UAthenaCheatManager_KillAllAggressiveGhostShipEncounters_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.JoinAlliance
// (Final, Exec, Native, Public)
// Parameters:
// FString                        OfferingCrew                   (Parm, ZeroConstructor)
// FString                        AcceptingCrew                  (Parm, ZeroConstructor)

void UAthenaCheatManager::JoinAlliance(const FString& OfferingCrew, const FString& AcceptingCrew)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.JoinAlliance"));

	UAthenaCheatManager_JoinAlliance_Params params;
	params.OfferingCrew = OfferingCrew;
	params.AcceptingCrew = AcceptingCrew;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IPGOverride
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// FName                          BodyShape                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::IPGOverride(const FName& BodyShape, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IPGOverride"));

	UAthenaCheatManager_IPGOverride_Params params;
	params.BodyShape = BodyShape;
	params.Distance = Distance;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// FString                        path                           (Parm, ZeroConstructor)

void UAthenaCheatManager::IPGLoadWithoutClothing(const FString& ActorIdString, const FString& path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing"));

	UAthenaCheatManager_IPGLoadWithoutClothing_Params params;
	params.ActorIdString = ActorIdString;
	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// FString                        path                           (Parm, ZeroConstructor)

void UAthenaCheatManager::IPGLoadWithClothing(const FString& ActorIdString, const FString& path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing"));

	UAthenaCheatManager_IPGLoadWithClothing_Params params;
	params.ActorIdString = ActorIdString;
	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IPGLoad
// (Final, Exec, Native, Public)
// Parameters:
// FString                        path                           (Parm, ZeroConstructor)

void UAthenaCheatManager::IPGLoad(const FString& path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IPGLoad"));

	UAthenaCheatManager_IPGLoad_Params params;
	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.InvincibleEverything
// (Final, Exec, Native, Public)

void UAthenaCheatManager::InvincibleEverything()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.InvincibleEverything"));

	UAthenaCheatManager_InvincibleEverything_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::InterruptSicknessOnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer"));

	UAthenaCheatManager_InterruptSicknessOnPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::InfiniteGunAmmo(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo"));

	UAthenaCheatManager_InfiniteGunAmmo_Params params;
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

	UAthenaCheatManager_IncrementTime_Params params;
	params.Hours = Hours;
	params.Minutes = Minutes;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage
// (Final, Exec, Native, Public)

void UAthenaCheatManager::IncrementDebugHealthStage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage"));

	UAthenaCheatManager_IncrementDebugHealthStage_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::IncreaseEmissaryCount(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount"));

	UAthenaCheatManager_IncreaseEmissaryCount_Params params;
	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::IgniteShipAtPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation"));

	UAthenaCheatManager_IgniteShipAtPlayerLocation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::IgniteLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer"));

	UAthenaCheatManager_IgniteLocalPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IgniteClosestShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::IgniteClosestShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IgniteClosestShip"));

	UAthenaCheatManager_IgniteClosestShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::IgniteAllShipFires()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires"));

	UAthenaCheatManager_IgniteAllShipFires_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsToggleOnScreenStatus
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HitRegSnapshotsToggleOnScreenStatus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsToggleOnScreenStatus"));

	UAthenaCheatManager_HitRegSnapshotsToggleOnScreenStatus_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplaySnapshots
// (Final, Exec, Native, Public)
// Parameters:
// bool                           ShowSnapshots                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AffectAllSnapshots             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LocalClientOnly                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HitRegSnapshotsSetDisplaySnapshots(bool ShowSnapshots, bool AffectAllSnapshots, bool LocalClientOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplaySnapshots"));

	UAthenaCheatManager_HitRegSnapshotsSetDisplaySnapshots_Params params;
	params.ShowSnapshots = ShowSnapshots;
	params.AffectAllSnapshots = AffectAllSnapshots;
	params.LocalClientOnly = LocalClientOnly;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayServerData
// (Final, Exec, Native, Public)
// Parameters:
// bool                           ShowServerData                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AffectAllSnapshots             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LocalClientOnly                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HitRegSnapshotsSetDisplayServerData(bool ShowServerData, bool AffectAllSnapshots, bool LocalClientOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayServerData"));

	UAthenaCheatManager_HitRegSnapshotsSetDisplayServerData_Params params;
	params.ShowServerData = ShowServerData;
	params.AffectAllSnapshots = AffectAllSnapshots;
	params.LocalClientOnly = LocalClientOnly;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayDetailedExplanations
// (Final, Exec, Native, Public)
// Parameters:
// bool                           ShowExplanations               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AffectAllSnapshots             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LocalClientOnly                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HitRegSnapshotsSetDisplayDetailedExplanations(bool ShowExplanations, bool AffectAllSnapshots, bool LocalClientOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayDetailedExplanations"));

	UAthenaCheatManager_HitRegSnapshotsSetDisplayDetailedExplanations_Params params;
	params.ShowExplanations = ShowExplanations;
	params.AffectAllSnapshots = AffectAllSnapshots;
	params.LocalClientOnly = LocalClientOnly;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayAttackingClientData
// (Final, Exec, Native, Public)
// Parameters:
// bool                           ShowClientData                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AffectAllSnapshots             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LocalClientOnly                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HitRegSnapshotsSetDisplayAttackingClientData(bool ShowClientData, bool AffectAllSnapshots, bool LocalClientOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayAttackingClientData"));

	UAthenaCheatManager_HitRegSnapshotsSetDisplayAttackingClientData_Params params;
	params.ShowClientData = ShowClientData;
	params.AffectAllSnapshots = AffectAllSnapshots;
	params.LocalClientOnly = LocalClientOnly;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToComponents
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HitRegSnapshotsSetDisagreementModeToComponents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToComponents"));

	UAthenaCheatManager_HitRegSnapshotsSetDisagreementModeToComponents_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToAllShots
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HitRegSnapshotsSetDisagreementModeToAllShots()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToAllShots"));

	UAthenaCheatManager_HitRegSnapshotsSetDisagreementModeToAllShots_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToActors
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HitRegSnapshotsSetDisagreementModeToActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToActors"));

	UAthenaCheatManager_HitRegSnapshotsSetDisagreementModeToActors_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsResetVisibilitySettingsToDefault
// (Final, Exec, Native, Public)
// Parameters:
// bool                           AffectAllSnapshots             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LocalClientOnly                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HitRegSnapshotsResetVisibilitySettingsToDefault(bool AffectAllSnapshots, bool LocalClientOnly)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsResetVisibilitySettingsToDefault"));

	UAthenaCheatManager_HitRegSnapshotsResetVisibilitySettingsToDefault_Params params;
	params.AffectAllSnapshots = AffectAllSnapshots;
	params.LocalClientOnly = LocalClientOnly;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsEnableSystem
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HitRegSnapshotsEnableSystem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsEnableSystem"));

	UAthenaCheatManager_HitRegSnapshotsEnableSystem_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDisableSystem
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HitRegSnapshotsDisableSystem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDisableSystem"));

	UAthenaCheatManager_HitRegSnapshotsDisableSystem_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDestroyAll
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HitRegSnapshotsDestroyAll()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDestroyAll"));

	UAthenaCheatManager_HitRegSnapshotsDestroyAll_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HideTaleDebug
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HideTaleDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HideTaleDebug"));

	UAthenaCheatManager_HideTaleDebug_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HideEmissaryVoteIndicators()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators"));

	UAthenaCheatManager_HideEmissaryVoteIndicators_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HideAllRomeBeacons
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HideAllRomeBeacons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HideAllRomeBeacons"));

	UAthenaCheatManager_HideAllRomeBeacons_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthSet
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HealthSet(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthSet"));

	UAthenaCheatManager_HealthSet_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthReset
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HealthReset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthReset"));

	UAthenaCheatManager_HealthReset_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HealthRegenResetToEmpty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty"));

	UAthenaCheatManager_HealthRegenResetToEmpty_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthRegenAdd
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::HealthRegenAdd(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthRegenAdd"));

	UAthenaCheatManager_HealthRegenAdd_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason
// (Final, Exec, Native, Public)

void UAthenaCheatManager::HealthContinuousStopWithTestReason()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason"));

	UAthenaCheatManager_HealthContinuousStopWithTestReason_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason
// (Final, Exec, Native, Public)
// Parameters:
// FString                        Reason                         (Parm, ZeroConstructor)

void UAthenaCheatManager::HealthContinuousStopWithReason(const FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason"));

	UAthenaCheatManager_HealthContinuousStopWithReason_Params params;
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

	UAthenaCheatManager_HealthContinuousStartWithTestReason_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FString                        Reason                         (Parm, ZeroConstructor)

void UAthenaCheatManager::HealthContinuousStartWithReason(float Value, const FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason"));

	UAthenaCheatManager_HealthContinuousStartWithReason_Params params;
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

	UAthenaCheatManager_HealthAdjust_Params params;
	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.God
// (Exec, Native, Public)

void UAthenaCheatManager::God()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.God"));

	UAthenaCheatManager_God_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceStopAllPetsDanger()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger"));

	UAthenaCheatManager_ForceStopAllPetsDanger_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ResponseType                   (Parm, ZeroConstructor)
// float                          UpdateThreatLocationTime       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ForceStartAllPetsDangerWithChangingThreatLocation(const FString& ResponseType, float UpdateThreatLocationTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation"));

	UAthenaCheatManager_ForceStartAllPetsDangerWithChangingThreatLocation_Params params;
	params.ResponseType = ResponseType;
	params.UpdateThreatLocationTime = UpdateThreatLocationTime;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ResponseType                   (Parm, ZeroConstructor)

void UAthenaCheatManager::ForceStartAllPetsDanger(const FString& ResponseType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger"));

	UAthenaCheatManager_ForceStartAllPetsDanger_Params params;
	params.ResponseType = ResponseType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceSkipTallTaleSteps_WaitAndCutscenes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes"));

	UAthenaCheatManager_ForceSkipTallTaleSteps_WaitAndCutscenes_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceRequestCampaignsFromServices()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices"));

	UAthenaCheatManager_ForceRequestCampaignsFromServices_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForcePetHangout
// (Final, Exec, Native, Public)
// Parameters:
// FName                          HangoutName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            PositionIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ForcePetHangout(const FName& HangoutName, int PositionIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForcePetHangout"));

	UAthenaCheatManager_ForcePetHangout_Params params;
	params.HangoutName = HangoutName;
	params.PositionIndex = PositionIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceOpenShop
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceOpenShop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceOpenShop"));

	UAthenaCheatManager_ForceOpenShop_Params params;

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

	UAthenaCheatManager_ForceNPCOnSurfaceToMove_Params params;
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

	UAthenaCheatManager_ForceNPCOnSurfaceLocation_Params params;
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

	UAthenaCheatManager_ForceNPCOnShipIsCurrentlyInDanger_Params params;
	params.IsCurrentlyInDanger = IsCurrentlyInDanger;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceMigrationServiceHeartBeat
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceMigrationServiceHeartBeat()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceMigrationServiceHeartBeat"));

	UAthenaCheatManager_ForceMigrationServiceHeartBeat_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceGarbageCollect
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceGarbageCollect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceGarbageCollect"));

	UAthenaCheatManager_ForceGarbageCollect_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// FName                          EmoteIdentifier                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FString                        DisplayName                    (Parm, ZeroConstructor)
// FString                        AudioDescription               (Parm, ZeroConstructor)

void UAthenaCheatManager::ForceEmoteWithDescription(const FName& EmoteIdentifier, const FString& DisplayName, const FString& AudioDescription)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription"));

	UAthenaCheatManager_ForceEmoteWithDescription_Params params;
	params.EmoteIdentifier = EmoteIdentifier;
	params.DisplayName = DisplayName;
	params.AudioDescription = AudioDescription;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceEmote
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// FName                          EmoteIdentifier                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAthenaCheatManager::ForceEmote(const FName& EmoteIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceEmote"));

	UAthenaCheatManager_ForceEmote_Params params;
	params.EmoteIdentifier = EmoteIdentifier;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceCloseShop
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceCloseShop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceCloseShop"));

	UAthenaCheatManager_ForceCloseShop_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ResponseType                   (Parm, ZeroConstructor)
// float                          UpdateThreatLocationTime       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation(const FString& ResponseType, float UpdateThreatLocationTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation"));

	UAthenaCheatManager_ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation_Params params;
	params.ResponseType = ResponseType;
	params.UpdateThreatLocationTime = UpdateThreatLocationTime;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ResponseType                   (Parm, ZeroConstructor)

void UAthenaCheatManager::ForceAllPetsDangerWithNoiseEvent(const FString& ResponseType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent"));

	UAthenaCheatManager_ForceAllPetsDangerWithNoiseEvent_Params params;
	params.ResponseType = ResponseType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceAggressiveGhostShipStartSinkingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation"));

	UAthenaCheatManager_ForceAggressiveGhostShipStartSinkingAnimation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceAggressiveGhostShipStartDisappearAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation"));

	UAthenaCheatManager_ForceAggressiveGhostShipStartDisappearAnimation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceAggressiveGhostShipStartAppearAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation"));

	UAthenaCheatManager_ForceAggressiveGhostShipStartAppearAnimation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ForceAggressiveGhostShipPortalJump()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump"));

	UAthenaCheatManager_ForceAggressiveGhostShipPortalJump_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.Fly
// (Exec, Native, Public)

void UAthenaCheatManager::Fly()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.Fly"));

	UAthenaCheatManager_Fly_Params params;

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

	UAthenaCheatManager_FloodShipWithKeelOverIndex_Params params;
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

	UAthenaCheatManager_FloodShip_Params params;
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

	UAthenaCheatManager_FireSeasonRewardEarnedMessage_Params params;
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
// FString                        InGoalCategory                 (Parm, ZeroConstructor)

void UAthenaCheatManager::FireSeasonGoalProgressionMessage(int InNumSeason, int InPreviousProgress, int InCurrentProgress, int InCompletionTreshold, int InGoalType, const FString& InGoalCategory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage"));

	UAthenaCheatManager_FireSeasonGoalProgressionMessage_Params params;
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
// FString                        InGoalCategory                 (Parm, ZeroConstructor)

void UAthenaCheatManager::FireSeasonGoalCompletionMessage(int InNumSeason, int InGoalType, const FString& InGoalCategory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage"));

	UAthenaCheatManager_FireSeasonGoalCompletionMessage_Params params;
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

	UAthenaCheatManager_FireLevelCompletionMessage_Params params;
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

	UAthenaCheatManager_FireCreatorCrewSignedUpStat_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumMinutes                   (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::FireCreatorCrewMinutesViewedStat(int InNumMinutes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat"));

	UAthenaCheatManager_FireCreatorCrewMinutesViewedStat_Params params;
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

	UAthenaCheatManager_FireCreatorCrewMinutesStreamedStat_Params params;
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

	UAthenaCheatManager_FireCreatorCrewCurrentViewersStat_Params params;
	params.InNumViewers = InNumViewers;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FindText
// (Final, Exec, Native, Public)
// Parameters:
// FString                        Namespace                      (Parm, ZeroConstructor)
// FString                        Key                            (Parm, ZeroConstructor)

void UAthenaCheatManager::FindText(const FString& Namespace, const FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FindText"));

	UAthenaCheatManager_FindText_Params params;
	params.Namespace = Namespace;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests
// (Final, Exec, Native, Public)

void UAthenaCheatManager::FakeMigrateBountyQuests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests"));

	UAthenaCheatManager_FakeMigrateBountyQuests_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EquipPirateTitle
// (Final, Exec, Native, Public)
// Parameters:
// FString                        PirateTitleType                (Parm, ZeroConstructor)

void UAthenaCheatManager::EquipPirateTitle(const FString& PirateTitleType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EquipPirateTitle"));

	UAthenaCheatManager_EquipPirateTitle_Params params;
	params.PirateTitleType = PirateTitleType;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EquipCompassInLoadout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout"));

	UAthenaCheatManager_EquipCompassInLoadout_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EndDemoSession
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EndDemoSession()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EndDemoSession"));

	UAthenaCheatManager_EndDemoSession_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableVoiceChatMeteringForOutgoingSignals(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals"));

	UAthenaCheatManager_EnableVoiceChatMeteringForOutgoingSignals_Params params;
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

	UAthenaCheatManager_EnableVoiceChatMeteringForIncomingSignals_Params params;
	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableStormEffects
// (Final, Exec, Native, Public)
// Parameters:
// unsigned char                  LockReason                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableStormEffects(unsigned char LockReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableStormEffects"));

	UAthenaCheatManager_EnableStormEffects_Params params;
	params.LockReason = LockReason;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay
// (Final, Exec, Native, Public)
// Parameters:
// int                            TrueFalse                      (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay(int TrueFalse)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay"));

	UAthenaCheatManager_EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay_Params params;
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

	UAthenaCheatManager_EnableNTP_Params params;
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

	UAthenaCheatManager_EnableMermaidSpawning_Params params;
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

	UAthenaCheatManager_EnableMermaidDeletion_Params params;
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

	UAthenaCheatManager_EnableHeadphoneMixing_Params params;
	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EnableEmergentSirenSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning"));

	UAthenaCheatManager_EnableEmergentSirenSpawning_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EnableEmergentSharkSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning"));

	UAthenaCheatManager_EnableEmergentSharkSpawning_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EnableConsoleLogging()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging"));

	UAthenaCheatManager_EnableConsoleLogging_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera
// (Final, Exec, Native, Protected)

void UAthenaCheatManager::EnableCinematicCamera()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera"));

	UAthenaCheatManager_EnableCinematicCamera_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::EnableBeaconOnAllMermaids(int Enable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids"));

	UAthenaCheatManager_EnableBeaconOnAllMermaids_Params params;
	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EnableAllEmergentWaterSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning"));

	UAthenaCheatManager_EnableAllEmergentWaterSpawning_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour
// (Final, Exec, Native, Public)

void UAthenaCheatManager::EnableAIBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour"));

	UAthenaCheatManager_EnableAIBehaviour_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DrawVideprinter
// (Final, Exec, Native, Public)
// Parameters:
// FString                        Id                             (Parm, ZeroConstructor)
// bool                           Active                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DrawVideprinter(const FString& Id, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DrawVideprinter"));

	UAthenaCheatManager_DrawVideprinter_Params params;
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

	UAthenaCheatManager_DrawTreasureDebug_Params params;
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

	UAthenaCheatManager_DrawTemporaryLandmarkDebug_Params params;
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

	UAthenaCheatManager_DrawNearbyAISpawnPointsRanged_Params params;
	params.Range = Range;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DrawNearbyAISpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints"));

	UAthenaCheatManager_DrawNearbyAISpawnPoints_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DownPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DownPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DownPlayer"));

	UAthenaCheatManager_DownPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DownAllPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DownAllPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DownAllPlayers"));

	UAthenaCheatManager_DownAllPlayers_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DownAllOtherPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers"));

	UAthenaCheatManager_DownAllOtherPlayers_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DownAllOtherPlayerCharacters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters"));

	UAthenaCheatManager_DownAllOtherPlayerCharacters_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DouseClosestShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::DouseClosestShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DouseClosestShip"));

	UAthenaCheatManager_DouseClosestShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DouseAllShipFires
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::DouseAllShipFires()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DouseAllShipFires"));

	UAthenaCheatManager_DouseAllShipFires_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DiveShipByActorId
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ShipActorIdString              (Parm, ZeroConstructor)

void UAthenaCheatManager::DiveShipByActorId(const FString& ShipActorIdString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DiveShipByActorId"));

	UAthenaCheatManager_DiveShipByActorId_Params params;
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

	UAthenaCheatManager_DisplaySpireLocationsDebug_Params params;
	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress
// (Final, Exec, Native, Public)
// Parameters:
// FString                        StatName                       (Parm, ZeroConstructor)

void UAthenaCheatManager::DisplaySingleEmblemProgress(const FString& StatName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress"));

	UAthenaCheatManager_DisplaySingleEmblemProgress_Params params;
	params.StatName = StatName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayServersideHitsAtPlayerPosWithDefaults()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults"));

	UAthenaCheatManager_DisplayServersideHitsAtPlayerPosWithDefaults_Params params;

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

	UAthenaCheatManager_DisplayServersideHitsAtPlayerPos_Params params;
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

	UAthenaCheatManager_DisplayServerFPS_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland"));

	UAthenaCheatManager_DisplayNonVagueNonUniqueLandmarksForIsland_Params params;
	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLoadingScreenTeleport()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport"));

	UAthenaCheatManager_DisplayLoadingScreenTeleport_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLoadingScreenBoot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot"));

	UAthenaCheatManager_DisplayLoadingScreenBoot_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenArena
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLoadingScreenArena()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenArena"));

	UAthenaCheatManager_DisplayLoadingScreenArena_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLoadingScreenAdventure()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure"));

	UAthenaCheatManager_DisplayLoadingScreenAdventure_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLandmarkValidTreasureLocationsForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer"));

	UAthenaCheatManager_DisplayLandmarkValidTreasureLocationsForPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLandmarkRegions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions"));

	UAthenaCheatManager_DisplayLandmarkRegions_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisplayLandmarkNames()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames"));

	UAthenaCheatManager_DisplayLandmarkNames_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DisplayFallDamageDebug(int Enable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug"));

	UAthenaCheatManager_DisplayFallDamageDebug_Params params;
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

	UAthenaCheatManager_DisplayDrunkenness_Params params;
	params.Flag = Flag;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DismissProjectileAimAdjustmentsMessages
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DismissProjectileAimAdjustmentsMessages()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DismissProjectileAimAdjustmentsMessages"));

	UAthenaCheatManager_DismissProjectileAimAdjustmentsMessages_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DismissAllPickupPoints()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints"));

	UAthenaCheatManager_DismissAllPickupPoints_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableStormEffects
// (Final, Exec, Native, Public)
// Parameters:
// unsigned char                  LockReason                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DisableStormEffects(unsigned char LockReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableStormEffects"));

	UAthenaCheatManager_DisableStormEffects_Params params;
	params.LockReason = LockReason;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisableEmergentSirenSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning"));

	UAthenaCheatManager_DisableEmergentSirenSpawning_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisableEmergentSharkSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning"));

	UAthenaCheatManager_DisableEmergentSharkSpawning_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisableConsoleLogging()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging"));

	UAthenaCheatManager_DisableConsoleLogging_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera
// (Final, Exec, Native, Protected)

void UAthenaCheatManager::DisableCinematicCamera()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera"));

	UAthenaCheatManager_DisableCinematicCamera_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisableAllEmergentWaterSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning"));

	UAthenaCheatManager_DisableAllEmergentWaterSpawning_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DisableAIBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour"));

	UAthenaCheatManager_DisableAIBehaviour_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DisableAIAbilities
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::DisableAIAbilities()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DisableAIAbilities"));

	UAthenaCheatManager_DisableAIAbilities_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DioramaStartNearest
// (Final, Exec, Native, Public)
// Parameters:
// FString                        Spawner                        (Parm, ZeroConstructor)
// FString                        DioramaDesc                    (Parm, ZeroConstructor)

void UAthenaCheatManager::DioramaStartNearest(const FString& Spawner, const FString& DioramaDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DioramaStartNearest"));

	UAthenaCheatManager_DioramaStartNearest_Params params;
	params.Spawner = Spawner;
	params.DioramaDesc = DioramaDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DioramaStart
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ActorName                      (Parm, ZeroConstructor)
// FString                        Spawner                        (Parm, ZeroConstructor)
// FString                        DioramaDesc                    (Parm, ZeroConstructor)

void UAthenaCheatManager::DioramaStart(const FString& ActorName, const FString& Spawner, const FString& DioramaDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DioramaStart"));

	UAthenaCheatManager_DioramaStart_Params params;
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

	UAthenaCheatManager_DioramaKillAllDebug_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyShip
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// FString                        ShipActorIdConsoleString       (Parm, ZeroConstructor)

void UAthenaCheatManager::DestroyShip(const FString& ShipActorIdConsoleString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyShip"));

	UAthenaCheatManager_DestroyShip_Params params;
	params.ShipActorIdConsoleString = ShipActorIdConsoleString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DestroyNearestDebugReapersChestMarker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker"));

	UAthenaCheatManager_DestroyNearestDebugReapersChestMarker_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyMyShip
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::DestroyMyShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyMyShip"));

	UAthenaCheatManager_DestroyMyShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyKraken
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DestroyKraken()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyKraken"));

	UAthenaCheatManager_DestroyKraken_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DestroyAllTreasureChests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests"));

	UAthenaCheatManager_DestroyAllTreasureChests_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DestroyAllTinySharks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks"));

	UAthenaCheatManager_DestroyAllTinySharks_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DestroyAllSirenStatues()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues"));

	UAthenaCheatManager_DestroyAllSirenStatues_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DestroyAllShips
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::DestroyAllShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DestroyAllShips"));

	UAthenaCheatManager_DestroyAllShips_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI
// (Final, Exec, Native, Public)
// Parameters:
// FString                        AITypeString                   (Parm, ZeroConstructor)
// int                            NumToDespawn                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DespawnNumberOfAI(const FString& AITypeString, int NumToDespawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI"));

	UAthenaCheatManager_DespawnNumberOfAI_Params params;
	params.AITypeString = AITypeString;
	params.NumToDespawn = NumToDespawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DespawnFirstAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DespawnFirstAI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DespawnFirstAI"));

	UAthenaCheatManager_DespawnFirstAI_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DespawnAllAggressiveGhostShips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips"));

	UAthenaCheatManager_DespawnAllAggressiveGhostShips_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DespawnAI
// (Final, Exec, Native, Public)
// Parameters:
// FString                        AITypeString                   (Parm, ZeroConstructor)

void UAthenaCheatManager::DespawnAI(const FString& AITypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DespawnAI"));

	UAthenaCheatManager_DespawnAI_Params params;
	params.AITypeString = AITypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DeleteVoyageHistory()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory"));

	UAthenaCheatManager_DeleteVoyageHistory_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DeleteAllMermaids()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids"));

	UAthenaCheatManager_DeleteAllMermaids_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DecrementDebugHealthStage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage"));

	UAthenaCheatManager_DecrementDebugHealthStage_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DebugIslandDelta
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DebugIslandDelta()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DebugIslandDelta"));

	UAthenaCheatManager_DebugIslandDelta_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// FString                        FortName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaCheatManager::DeactivateSkellyFort(const FString& FortName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort"));

	UAthenaCheatManager_DeactivateSkellyFort_Params params;
	params.FortName = FortName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DeactivateEmissaryFlagCompany()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany"));

	UAthenaCheatManager_DeactivateEmissaryFlagCompany_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect
// (Final, Exec, Native, Public)

void UAthenaCheatManager::DeactivateDeathEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect"));

	UAthenaCheatManager_DeactivateDeathEffect_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// float                          Strength                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraLocationX                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraLocationY                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraLocationZ                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraForwardDirectionX        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraForwardDirectionY        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraForwardDirectionZ        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DamageShipFromRemoteActor(const FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor"));

	UAthenaCheatManager_DamageShipFromRemoteActor_Params params;
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

	UAthenaCheatManager_DamageShip_Params params;
	params.Strength = Strength;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// float                          Strength                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraLocationX                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraLocationY                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraLocationZ                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraForwardDirectionX        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraForwardDirectionY        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraForwardDirectionZ        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::DamagePlayerFromRemoteActor(const FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor"));

	UAthenaCheatManager_DamagePlayerFromRemoteActor_Params params;
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

	UAthenaCheatManager_DamagePlayer_Params params;
	params.Strength = Strength;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CureAllAilings
// (Final, Exec, Native, Public, BlueprintCallable)

void UAthenaCheatManager::CureAllAilings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CureAllAilings"));

	UAthenaCheatManager_CureAllAilings_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CreateDebugReapersChestMarkerAtPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation"));

	UAthenaCheatManager_CreateDebugReapersChestMarkerAtPlayerLocation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt
// (Final, Exec, Native, Public)
// Parameters:
// FString                        SpawnerAssetName               (Parm, ZeroConstructor)
// FString                        LocationActorName              (Parm, ZeroConstructor)

void UAthenaCheatManager::CreateDebugAISpawnerAt(const FString& SpawnerAssetName, const FString& LocationActorName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt"));

	UAthenaCheatManager_CreateDebugAISpawnerAt_Params params;
	params.SpawnerAssetName = SpawnerAssetName;
	params.LocationActorName = LocationActorName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner
// (Final, Exec, Native, Public)
// Parameters:
// FString                        SpawnerAssetName               (Parm, ZeroConstructor)

void UAthenaCheatManager::CreateDebugAISpawner(const FString& SpawnerAssetName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner"));

	UAthenaCheatManager_CreateDebugAISpawner_Params params;
	params.SpawnerAssetName = SpawnerAssetName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CoordinatedKrakenToggleAI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI"));

	UAthenaCheatManager_CoordinatedKrakenToggleAI_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ActionName                     (Parm, ZeroConstructor)

void UAthenaCheatManager::CoordinatedKrakenRequestAction(const FString& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction"));

	UAthenaCheatManager_CoordinatedKrakenRequestAction_Params params;
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

	UAthenaCheatManager_CoordinatedKrakenEnableDebugging_Params params;
	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ContextualPromptCountersToggleDebugDraw()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw"));

	UAthenaCheatManager_ContextualPromptCountersToggleDebugDraw_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CompleteVoyage
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CompleteVoyage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CompleteVoyage"));

	UAthenaCheatManager_CompleteVoyage_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CompleteAllActivePuzzleVaults()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults"));

	UAthenaCheatManager_CompleteAllActivePuzzleVaults_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CompleteActiveQuests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests"));

	UAthenaCheatManager_CompleteActiveQuests_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CloseSkeletonFortDoor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor"));

	UAthenaCheatManager_CloseSkeletonFortDoor_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CloseLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen"));

	UAthenaCheatManager_CloseLoadingScreen_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearWorldSequences
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearWorldSequences()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearWorldSequences"));

	UAthenaCheatManager_ClearWorldSequences_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearVoiceChatMeters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters"));

	UAthenaCheatManager_ClearVoiceChatMeters_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearSlowMotionOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride"));

	UAthenaCheatManager_ClearSlowMotionOverride_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearGrogSecondary()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary"));

	UAthenaCheatManager_ClearGrogSecondary_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearGlitterbeardRequiredPlayersOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride"));

	UAthenaCheatManager_ClearGlitterbeardRequiredPlayersOverride_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearDebugStormLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation"));

	UAthenaCheatManager_ClearDebugStormLocation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearAxisBinding
// (Final, Exec, Native, Public)
// Parameters:
// FString                        InBindingName                  (Parm, ZeroConstructor)

void UAthenaCheatManager::ClearAxisBinding(const FString& InBindingName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearAxisBinding"));

	UAthenaCheatManager_ClearAxisBinding_Params params;
	params.InBindingName = InBindingName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ClearAIAbilityTimeMultipliers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers"));

	UAthenaCheatManager_ClearAIAbilityTimeMultipliers_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CheckLandmarkValidTreasureLocationsAtPlayerPos()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos"));

	UAthenaCheatManager_CheckLandmarkValidTreasureLocationsAtPlayerPos_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CheckLandmarkRelativeToIslandCalculation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation"));

	UAthenaCheatManager_CheckLandmarkRelativeToIslandCalculation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CapsizeShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CapsizeShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CapsizeShip"));

	UAthenaCheatManager_CapsizeShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelVoyage
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelVoyage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CancelVoyage"));

	UAthenaCheatManager_CancelVoyage_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelTale
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelTale()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CancelTale"));

	UAthenaCheatManager_CancelTale_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelEmergentVoyages()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages"));

	UAthenaCheatManager_CancelEmergentVoyages_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelAllCrewVoyages()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages"));

	UAthenaCheatManager_CancelAllCrewVoyages_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters
// (Final, Exec, Native, Public)

void UAthenaCheatManager::CancelActiveAIShipEncounters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters"));

	UAthenaCheatManager_CancelActiveAIShipEncounters_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable
// (Final, Exec, Native, Public)

void UAthenaCheatManager::BuryNearestBuriable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable"));

	UAthenaCheatManager_BuryNearestBuriable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.BuryItem
// (Final, Exec, Native, Public)
// Parameters:
// FString                        NameOfItemToBury               (Parm, ZeroConstructor)

void UAthenaCheatManager::BuryItem(const FString& NameOfItemToBury)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.BuryItem"));

	UAthenaCheatManager_BuryItem_Params params;
	params.NameOfItemToBury = NameOfItemToBury;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.BreakLeg
// (Final, Exec, Native, Public)

void UAthenaCheatManager::BreakLeg()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.BreakLeg"));

	UAthenaCheatManager_BreakLeg_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::BlockMigrationForPlayer(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer"));

	UAthenaCheatManager_BlockMigrationForPlayer_Params params;
	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer
// (Final, Exec, Native, Public)
// Parameters:
// FString                        StatusIdentifier               (Parm, ZeroConstructor)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCheatManager::ApplyStatusToPlayer(const FString& StatusIdentifier, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer"));

	UAthenaCheatManager_ApplyStatusToPlayer_Params params;
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

	UAthenaCheatManager_ApplyDamageToAllDamageZones_Params params;
	params.Damage = Damage;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip
// (Final, Exec, Native, Public)
// Parameters:
// FString                        CannonballTypeString           (Parm, ZeroConstructor)

void UAthenaCheatManager::ApplyCursedCannonballStatusToShip(const FString& CannonballTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip"));

	UAthenaCheatManager_ApplyCursedCannonballStatusToShip_Params params;
	params.CannonballTypeString = CannonballTypeString;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer
// (Final, Exec, Native, Public)
// Parameters:
// FString                        CannonballTypeString           (Parm, ZeroConstructor)

void UAthenaCheatManager::ApplyCursedCannonballStatusToPlayer(const FString& CannonballTypeString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer"));

	UAthenaCheatManager_ApplyCursedCannonballStatusToPlayer_Params params;
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

	UAthenaCheatManager_AllowTeleportWithItems_Params params;
	params.CanTeleport = CanTeleport;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned
// (Final, Exec, Native, Public)
// Parameters:
// FString                        TunnelDescAssetPath            (Parm, ZeroConstructor)

void UAthenaCheatManager::AllocatePortalToTunnelOfTheDamned(const FString& TunnelDescAssetPath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned"));

	UAthenaCheatManager_AllocatePortalToTunnelOfTheDamned_Params params;
	params.TunnelDescAssetPath = TunnelDescAssetPath;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AllJoinAlliance
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AllJoinAlliance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AllJoinAlliance"));

	UAthenaCheatManager_AllJoinAlliance_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AIPlayerShip
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AIPlayerShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AIPlayerShip"));

	UAthenaCheatManager_AIPlayerShip_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AggressiveGhostShipRebuildSpline()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline"));

	UAthenaCheatManager_AggressiveGhostShipRebuildSpline_Params params;

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

	UAthenaCheatManager_AdjustGhostShader_Params params;
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

	UAthenaCheatManager_AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation"));

	UAthenaCheatManager_AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AddTradeRouteClueMarkToMapAtCurrentLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation"));

	UAthenaCheatManager_AddTradeRouteClueMarkToMapAtCurrentLocation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddTornMapPiece
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AddTornMapPiece()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddTornMapPiece"));

	UAthenaCheatManager_AddTornMapPiece_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddShipToCrew
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// FString                        CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::AddShipToCrew(const FString& ActorIdString, const FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddShipToCrew"));

	UAthenaCheatManager_AddShipToCrew_Params params;
	params.ActorIdString = ActorIdString;
	params.CrewId = CrewId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers
// (Final, Exec, Native, Public)

void UAthenaCheatManager::AddRandomPetForAllPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers"));

	UAthenaCheatManager_AddRandomPetForAllPlayers_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ActorIdString                  (Parm, ZeroConstructor)
// FString                        CrewId                         (Parm, ZeroConstructor)

void UAthenaCheatManager::AddPlayerToCrew(const FString& ActorIdString, const FString& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew"));

	UAthenaCheatManager_AddPlayerToCrew_Params params;
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

	UAthenaCheatManager_AddPetForPlayer_Params params;
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

	UAthenaCheatManager_AddPetForAllPlayers_Params params;
	params.PetTypeIndex = PetTypeIndex;
	params.PetPartIndex = PetPartIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddMysteriousNote
// (Final, Exec, Native, Public)
// Parameters:
// FString                        NoteType                       (Parm, ZeroConstructor)
// FString                        NoteTitle                      (Parm, ZeroConstructor)
// FString                        NoteBody                       (Parm, ZeroConstructor)
// FString                        CompletionStrings              (Parm, ZeroConstructor)

void UAthenaCheatManager::AddMysteriousNote(const FString& NoteType, const FString& NoteTitle, const FString& NoteBody, const FString& CompletionStrings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddMysteriousNote"));

	UAthenaCheatManager_AddMysteriousNote_Params params;
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

	UAthenaCheatManager_AddDrunkenness_Params params;
	params.DrunkennessType = DrunkennessType;
	params.DrunkennessChange = DrunkennessChange;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.AddAISpawnContext
// (Final, Exec, Native, Public)
// Parameters:
// FString                        ContextName                    (Parm, ZeroConstructor)

void UAthenaCheatManager::AddAISpawnContext(const FString& ContextName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.AddAISpawnContext"));

	UAthenaCheatManager_AddAISpawnContext_Params params;
	params.ContextName = ContextName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// FString                        FortEventName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FString                        FortName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaCheatManager::ActivateSkellyFort(const FString& FortEventName, const FString& FortName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort"));

	UAthenaCheatManager_ActivateSkellyFort_Params params;
	params.FortEventName = FortEventName;
	params.FortName = FortName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany
// (Final, Exec, Native, Public)
// Parameters:
// FString                        CompanyId                      (Parm, ZeroConstructor)

void UAthenaCheatManager::ActivateEmissaryFlagCompany(const FString& CompanyId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany"));

	UAthenaCheatManager_ActivateEmissaryFlagCompany_Params params;
	params.CompanyId = CompanyId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService
// (Final, Exec, Native, Public)

void UAthenaCheatManager::ActivateDebugTeleportationDestinationService()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService"));

	UAthenaCheatManager_ActivateDebugTeleportationDestinationService_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
