#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DecalGlow_Longer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.StartGlowEffect
struct ABP_DecalGlow_Longer_C_StartGlowEffect_Params
{
};

// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.StartReaction
struct ABP_DecalGlow_Longer_C_StartReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.StopReaction
struct ABP_DecalGlow_Longer_C_StopReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.CollectDecalMaterials
struct ABP_DecalGlow_Longer_C_CollectDecalMaterials_Params
{
};

// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.UserConstructionScript
struct ABP_DecalGlow_Longer_C_UserConstructionScript_Params
{
};

// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.ReceiveBeginPlay
struct ABP_DecalGlow_Longer_C_ReceiveBeginPlay_Params
{
};

// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.ExecuteUbergraph_BP_DecalGlow_Longer
struct ABP_DecalGlow_Longer_C_ExecuteUbergraph_BP_DecalGlow_Longer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
