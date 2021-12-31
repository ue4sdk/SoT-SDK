#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomDeath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow
struct UCustomDeathInterface_SetShouldUseRevivalFlow_Params
{
	FSetShouldUseRevivalFlowData                       SetShouldUseRevivalFlowData;                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned
struct UCustomDeathInterface_SetShouldSkipFerryOfTheDamned_Params
{
	FSetShouldSkipFerryOfTheDamnedData                 SetShouldSkipFerryOfTheDamnedData;                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer
struct UCustomDeathInterface_SetGameModeDeathPenaltyRespawnTimer_Params
{
	FGameModeDeathPenaltyRespawnTimerData              GameModeDeathPenaltyRespawnTimerData;                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart
struct UCustomDeathInterface_SetCustomPlayerStart_Params
{
	FSetCustomPlayerStartData                          SetCustomPlayerStartData;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer
struct UCustomDeathInterface_SetCustomConfigForPlayer_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FCustomDeathConfiguration                          CustomDeathConfiguration;                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer
struct UCustomDeathInterface_ResetCustomConfigForPlayer_Params
{
	FResetCustomConfigForPlayerData                    ResetCustomConfigForPlayerData;                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CustomDeath.CustomDeathInterface.KillPlayer
struct UCustomDeathInterface_KillPlayer_Params
{
	FKillPlayerData                                    KillPlayerData;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CustomDeath.CustomDeathInterface.KillCrew
struct UCustomDeathInterface_KillCrew_Params
{
	FKillCrewData                                      KillCrewData;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow
struct UCustomDeathInterface_GetShouldUseRevivalFlow_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDefaultValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned
struct UCustomDeathInterface_GetShouldSkipFerryOfTheDamned_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart
struct UCustomDeathInterface_GetCustomPlayerStart_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerStart*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn
struct UCustomDeathInterface_ForcePlayerRespawn_Params
{
	FForcePlayerRespawnData                            ForcePlayerRespawnData;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart
struct UCustomDeathInterface_DestroyCustomPlayerStart_Params
{
	FDestroyCustomPlayerStartData                      DestroyCustomPlayerStartData;                             // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart
struct UCustomDeathInterface_CreateNewCustomPlayerStart_Params
{
	FCustomPlayerStartConfigData                       CustomPlayerStartConfigData;                              // (ConstParm, Parm, OutParm, ReferenceParm)
	APlayerStart*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
