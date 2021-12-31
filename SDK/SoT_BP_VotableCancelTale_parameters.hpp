#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VotableCancelTale_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VotableCancelTale.BP_VotableCancelTale_C.PlayShowTokenAnimation
struct ABP_VotableCancelTale_C_PlayShowTokenAnimation_Params
{
	UPrimitiveComponent*                               Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VotableCancelTale.BP_VotableCancelTale_C.Is Session Locked
struct ABP_VotableCancelTale_C_Is_Session_Locked_Params
{
	bool                                               IsLocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VotableCancelTale.BP_VotableCancelTale_C.GetObjectDisplayName
struct ABP_VotableCancelTale_C_GetObjectDisplayName_Params
{
	FText                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_VotableCancelTale.BP_VotableCancelTale_C.UserConstructionScript
struct ABP_VotableCancelTale_C_UserConstructionScript_Params
{
};

// Function BP_VotableCancelTale.BP_VotableCancelTale_C.ReceiveBeginPlay
struct ABP_VotableCancelTale_C_ReceiveBeginPlay_Params
{
};

// Function BP_VotableCancelTale.BP_VotableCancelTale_C.OnVoteAdded
struct ABP_VotableCancelTale_C_OnVoteAdded_Params
{
	TScriptInterface<class UVoterInterface>            Voter;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_VotableCancelTale.BP_VotableCancelTale_C.OnVoteRemoved
struct ABP_VotableCancelTale_C_OnVoteRemoved_Params
{
	TScriptInterface<class UVoterInterface>            Voter;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_VotableCancelTale.BP_VotableCancelTale_C.ExecuteUbergraph_BP_VotableCancelTale
struct ABP_VotableCancelTale_C_ExecuteUbergraph_BP_VotableCancelTale_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
