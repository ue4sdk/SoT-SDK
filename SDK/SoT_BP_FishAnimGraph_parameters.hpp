#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishAnimGraph_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FishAnimGraph.BP_FishAnimGraph_C.AnimNotify_StartJump
struct UBP_FishAnimGraph_C_AnimNotify_StartJump_Params
{
};

// Function BP_FishAnimGraph.BP_FishAnimGraph_C.AnimNotify_EndJump
struct UBP_FishAnimGraph_C_AnimNotify_EndJump_Params
{
};

// Function BP_FishAnimGraph.BP_FishAnimGraph_C.ExecuteUbergraph_BP_FishAnimGraph
struct UBP_FishAnimGraph_C_ExecuteUbergraph_BP_FishAnimGraph_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
