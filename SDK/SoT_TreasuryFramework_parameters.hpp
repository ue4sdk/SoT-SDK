#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TreasuryFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer
struct AShimmerActor_OnDeactivateShimmer_Params
{
};

// Function TreasuryFramework.ShimmerActor.OnActivateShimmer
struct AShimmerActor_OnActivateShimmer_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnWaveStart
struct ATreasuryRoom_OnWaveStart_Params
{
	TEnumAsByte<ETreasuryEncounterType>                EncounterType;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETreasuryWaveType>                     WaveType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TreasuryFramework.TreasuryRoom.OnWaveFinished
struct ATreasuryRoom_OnWaveFinished_Params
{
	TScriptInterface<class UMechanismActionInterface>  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TreasuryFramework.TreasuryRoom.OnWaveComplete
struct ATreasuryRoom_OnWaveComplete_Params
{
	TEnumAsByte<ETreasuryEncounterType>                EncounterType;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TreasuryFramework.TreasuryRoom.OnVaultOpen
struct ATreasuryRoom_OnVaultOpen_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnVaultClosed
struct ATreasuryRoom_OnVaultClosed_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange
struct ATreasuryRoom_OnTreasuryStateChange_Params
{
	TEnumAsByte<ETreasuryState>                        PrevState;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETreasuryState>                        NewState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate
struct ATreasuryRoom_OnTreasuryDeactivate_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate
struct ATreasuryRoom_OnTreasuryActivate_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater
struct ATreasuryRoom_OnStartRaiseWater_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnStartDrainWater
struct ATreasuryRoom_OnStartDrainWater_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnRoomStarted
struct ATreasuryRoom_OnRoomStarted_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnRaisedWater
struct ATreasuryRoom_OnRaisedWater_Params
{
	TScriptInterface<class UMechanismResetInterface>   Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TreasuryFramework.TreasuryRoom.OnLeaveRoom
struct ATreasuryRoom_OnLeaveRoom_Params
{
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TreasuryFramework.TreasuryRoom.OnEnterRoom
struct ATreasuryRoom_OnEnterRoom_Params
{
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup
struct ATreasuryRoom_OnEncounterParamsSetup_Params
{
};

// Function TreasuryFramework.TreasuryRoom.OnDrainedWater
struct ATreasuryRoom_OnDrainedWater_Params
{
	TScriptInterface<class UMechanismResetInterface>   Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TreasuryFramework.TreasuryRoom.GetState
struct ATreasuryRoom_GetState_Params
{
	TEnumAsByte<ETreasuryState>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
