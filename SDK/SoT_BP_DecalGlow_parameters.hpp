#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DecalGlow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DecalGlow.BP_DecalGlow_C.StartGlowEffect
struct ABP_DecalGlow_C_StartGlowEffect_Params
{
};

// Function BP_DecalGlow.BP_DecalGlow_C.StartReaction
struct ABP_DecalGlow_C_StartReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DecalGlow.BP_DecalGlow_C.StopReaction
struct ABP_DecalGlow_C_StopReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DecalGlow.BP_DecalGlow_C.CollectDecalMaterials
struct ABP_DecalGlow_C_CollectDecalMaterials_Params
{
};

// Function BP_DecalGlow.BP_DecalGlow_C.UserConstructionScript
struct ABP_DecalGlow_C_UserConstructionScript_Params
{
};

// Function BP_DecalGlow.BP_DecalGlow_C.ReceiveBeginPlay
struct ABP_DecalGlow_C_ReceiveBeginPlay_Params
{
};

// Function BP_DecalGlow.BP_DecalGlow_C.ExecuteUbergraph_BP_DecalGlow
struct ABP_DecalGlow_C_ExecuteUbergraph_BP_DecalGlow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
