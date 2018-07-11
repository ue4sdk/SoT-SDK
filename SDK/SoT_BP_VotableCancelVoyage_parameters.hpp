#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VotableCancelVoyage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.PlayShowTokenAnimation
struct ABP_VotableCancelVoyage_C_PlayShowTokenAnimation_Params
{
	class UPrimitiveComponent*                         Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.Is Session Locked
struct ABP_VotableCancelVoyage_C_Is_Session_Locked_Params
{
	bool                                               IsLocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.GetObjectDisplayName
struct ABP_VotableCancelVoyage_C_GetObjectDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.UserConstructionScript
struct ABP_VotableCancelVoyage_C_UserConstructionScript_Params
{
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ReceiveBeginPlay
struct ABP_VotableCancelVoyage_C_ReceiveBeginPlay_Params
{
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteAdded
struct ABP_VotableCancelVoyage_C_OnVoteAdded_Params
{
	TScriptInterface<class UVoterInterface>*           Voter;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteRemoved
struct ABP_VotableCancelVoyage_C_OnVoteRemoved_Params
{
	TScriptInterface<class UVoterInterface>*           Voter;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ExecuteUbergraph_BP_VotableCancelVoyage
struct ABP_VotableCancelVoyage_C_ExecuteUbergraph_BP_VotableCancelVoyage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
