#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VotableTaleProposal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.PlayShowTokenAnimation
struct ABP_VotableTaleProposal_C_PlayShowTokenAnimation_Params
{
	class UPrimitiveComponent*                         Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.Is Session Locked
struct ABP_VotableTaleProposal_C_Is_Session_Locked_Params
{
	bool                                               IsLocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.UserConstructionScript
struct ABP_VotableTaleProposal_C_UserConstructionScript_Params
{
};

// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.ReceiveBeginPlay
struct ABP_VotableTaleProposal_C_ReceiveBeginPlay_Params
{
};

// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.OnVoteAdded
struct ABP_VotableTaleProposal_C_OnVoteAdded_Params
{
	TScriptInterface<class UVoterInterface>            Voter;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.OnVoteRemoved
struct ABP_VotableTaleProposal_C_OnVoteRemoved_Params
{
	TScriptInterface<class UVoterInterface>            Voter;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.ExecuteUbergraph_BP_VotableTaleProposal
struct ABP_VotableTaleProposal_C_ExecuteUbergraph_BP_VotableTaleProposal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
