#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DecalGlow_Reverse_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StartGlowEffect
struct ABP_DecalGlow_Reverse_C_StartGlowEffect_Params
{
};

// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StartReaction
struct ABP_DecalGlow_Reverse_C_StartReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StopReaction
struct ABP_DecalGlow_Reverse_C_StopReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.CollectDecalMaterials
struct ABP_DecalGlow_Reverse_C_CollectDecalMaterials_Params
{
};

// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.UserConstructionScript
struct ABP_DecalGlow_Reverse_C_UserConstructionScript_Params
{
};

// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.ReceiveBeginPlay
struct ABP_DecalGlow_Reverse_C_ReceiveBeginPlay_Params
{
};

// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.ExecuteUbergraph_BP_DecalGlow_Reverse
struct ABP_DecalGlow_Reverse_C_ExecuteUbergraph_BP_DecalGlow_Reverse_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
