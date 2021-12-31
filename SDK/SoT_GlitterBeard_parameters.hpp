#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GlitterBeard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState
struct UGlitterBeardFinaleCoordinatorComponent_OnRep_ReplicationState_Params
{
	FFinaleReplicationState                            OldState;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlitterBeard.GlitterBeardTree.StopVocals
struct AGlitterBeardTree_StopVocals_Params
{
};

// Function GlitterBeard.GlitterBeardTree.StopReaction
struct AGlitterBeardTree_StopReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlitterBeard.GlitterBeardTree.StartVocals
struct AGlitterBeardTree_StartVocals_Params
{
};

// Function GlitterBeard.GlitterBeardTree.StartReaction
struct AGlitterBeardTree_StartReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlitterBeard.GlitterBeardTree.Reset_Impl
struct AGlitterBeardTree_Reset_Impl_Params
{
};

// Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent
struct UGlitterBeardTreeVisualFeedbackComponent_OnRep_NextStateEvent_Params
{
	TArray<TEnumAsByte<EGlitterbeardVFXState>>         OldStates;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
