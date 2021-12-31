// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomDeath_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow
// (Native, Public, HasOutParms)
// Parameters:
// FSetShouldUseRevivalFlowData   SetShouldUseRevivalFlowData    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::SetShouldUseRevivalFlow(const FSetShouldUseRevivalFlowData& SetShouldUseRevivalFlowData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow"));

	UCustomDeathInterface_SetShouldUseRevivalFlow_Params params;
	params.SetShouldUseRevivalFlowData = SetShouldUseRevivalFlowData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned
// (Native, Public, HasOutParms)
// Parameters:
// FSetShouldSkipFerryOfTheDamnedData SetShouldSkipFerryOfTheDamnedData (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::SetShouldSkipFerryOfTheDamned(const FSetShouldSkipFerryOfTheDamnedData& SetShouldSkipFerryOfTheDamnedData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned"));

	UCustomDeathInterface_SetShouldSkipFerryOfTheDamned_Params params;
	params.SetShouldSkipFerryOfTheDamnedData = SetShouldSkipFerryOfTheDamnedData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer
// (Native, Public, HasOutParms)
// Parameters:
// FGameModeDeathPenaltyRespawnTimerData GameModeDeathPenaltyRespawnTimerData (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::SetGameModeDeathPenaltyRespawnTimer(const FGameModeDeathPenaltyRespawnTimerData& GameModeDeathPenaltyRespawnTimerData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer"));

	UCustomDeathInterface_SetGameModeDeathPenaltyRespawnTimer_Params params;
	params.GameModeDeathPenaltyRespawnTimerData = GameModeDeathPenaltyRespawnTimerData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart
// (Native, Public, HasOutParms)
// Parameters:
// FSetCustomPlayerStartData      SetCustomPlayerStartData       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomDeathInterface::SetCustomPlayerStart(const FSetCustomPlayerStartData& SetCustomPlayerStartData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart"));

	UCustomDeathInterface_SetCustomPlayerStart_Params params;
	params.SetCustomPlayerStartData = SetCustomPlayerStartData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer
// (Native, Public, HasOutParms)
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// FCustomDeathConfiguration      CustomDeathConfiguration       (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomDeathInterface::SetCustomConfigForPlayer(int PlayerId, const FCustomDeathConfiguration& CustomDeathConfiguration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer"));

	UCustomDeathInterface_SetCustomConfigForPlayer_Params params;
	params.PlayerId = PlayerId;
	params.CustomDeathConfiguration = CustomDeathConfiguration;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer
// (Native, Public, HasOutParms)
// Parameters:
// FResetCustomConfigForPlayerData ResetCustomConfigForPlayerData (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::ResetCustomConfigForPlayer(const FResetCustomConfigForPlayerData& ResetCustomConfigForPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer"));

	UCustomDeathInterface_ResetCustomConfigForPlayer_Params params;
	params.ResetCustomConfigForPlayerData = ResetCustomConfigForPlayerData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.KillPlayer
// (Native, Public, HasOutParms)
// Parameters:
// FKillPlayerData                KillPlayerData                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::KillPlayer(const FKillPlayerData& KillPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.KillPlayer"));

	UCustomDeathInterface_KillPlayer_Params params;
	params.KillPlayerData = KillPlayerData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.KillCrew
// (Native, Public, HasOutParms)
// Parameters:
// FKillCrewData                  KillCrewData                   (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomDeathInterface::KillCrew(const FKillCrewData& KillCrewData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.KillCrew"));

	UCustomDeathInterface_KillCrew_Params params;
	params.KillCrewData = KillCrewData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow
// (Native, Public)
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDefaultValue                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomDeathInterface::GetShouldUseRevivalFlow(int PlayerId, bool bDefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow"));

	UCustomDeathInterface_GetShouldUseRevivalFlow_Params params;
	params.PlayerId = PlayerId;
	params.bDefaultValue = bDefaultValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned
// (Native, Public)
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomDeathInterface::GetShouldSkipFerryOfTheDamned(int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned"));

	UCustomDeathInterface_GetShouldSkipFerryOfTheDamned_Params params;
	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart
// (Native, Public)
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// APlayerStart*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

APlayerStart* UCustomDeathInterface::GetCustomPlayerStart(int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart"));

	UCustomDeathInterface_GetCustomPlayerStart_Params params;
	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn
// (Native, Public, HasOutParms)
// Parameters:
// FForcePlayerRespawnData        ForcePlayerRespawnData         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCustomDeathInterface::ForcePlayerRespawn(const FForcePlayerRespawnData& ForcePlayerRespawnData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn"));

	UCustomDeathInterface_ForcePlayerRespawn_Params params;
	params.ForcePlayerRespawnData = ForcePlayerRespawnData;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart
// (Native, Public, HasOutParms)
// Parameters:
// FDestroyCustomPlayerStartData  DestroyCustomPlayerStartData   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomDeathInterface::DestroyCustomPlayerStart(const FDestroyCustomPlayerStartData& DestroyCustomPlayerStartData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart"));

	UCustomDeathInterface_DestroyCustomPlayerStart_Params params;
	params.DestroyCustomPlayerStartData = DestroyCustomPlayerStartData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart
// (Native, Public, HasOutParms)
// Parameters:
// FCustomPlayerStartConfigData   CustomPlayerStartConfigData    (ConstParm, Parm, OutParm, ReferenceParm)
// APlayerStart*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

APlayerStart* UCustomDeathInterface::CreateNewCustomPlayerStart(const FCustomPlayerStartConfigData& CustomPlayerStartConfigData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart"));

	UCustomDeathInterface_CreateNewCustomPlayerStart_Params params;
	params.CustomPlayerStartConfigData = CustomPlayerStartConfigData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
