#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VotableVoyageProposal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.PlayShowTokenAnimation
struct ABP_VotableVoyageProposal_C_PlayShowTokenAnimation_Params
{
	class UPrimitiveComponent*                         Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.Is Session Locked
struct ABP_VotableVoyageProposal_C_Is_Session_Locked_Params
{
	bool                                               IsLocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.UserConstructionScript
struct ABP_VotableVoyageProposal_C_UserConstructionScript_Params
{
};

// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.ReceiveBeginPlay
struct ABP_VotableVoyageProposal_C_ReceiveBeginPlay_Params
{
};

// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.OnVoteAdded
struct ABP_VotableVoyageProposal_C_OnVoteAdded_Params
{
	TScriptInterface<class UVoterInterface>            Voter;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.OnVoteRemoved
struct ABP_VotableVoyageProposal_C_OnVoteRemoved_Params
{
	TScriptInterface<class UVoterInterface>            Voter;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.ExecuteUbergraph_BP_VotableVoyageProposal
struct ABP_VotableVoyageProposal_C_ExecuteUbergraph_BP_VotableVoyageProposal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
