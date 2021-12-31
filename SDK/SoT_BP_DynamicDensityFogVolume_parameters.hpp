#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DynamicDensityFogVolume_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.BlendParams
struct ABP_DynamicDensityFogVolume_C_BlendParams_Params
{
	float                                              BlendAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.OnRep_NextState
struct ABP_DynamicDensityFogVolume_C_OnRep_NextState_Params
{
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UserConstructionScript
struct ABP_DynamicDensityFogVolume_C_UserConstructionScript_Params
{
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__FinishedFunc
struct ABP_DynamicDensityFogVolume_C_StateBlend__FinishedFunc_Params
{
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__UpdateFunc
struct ABP_DynamicDensityFogVolume_C_StateBlend__UpdateFunc_Params
{
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ReceiveBeginPlay
struct ABP_DynamicDensityFogVolume_C_ReceiveBeginPlay_Params
{
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UpdateCanvas
struct ABP_DynamicDensityFogVolume_C_UpdateCanvas_Params
{
	UCanvas*                                           Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ChangeState
struct ABP_DynamicDensityFogVolume_C_ChangeState_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.SetState
struct ABP_DynamicDensityFogVolume_C_SetState_Params
{
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ExecuteUbergraph_BP_DynamicDensityFogVolume
struct ABP_DynamicDensityFogVolume_C_ExecuteUbergraph_BP_DynamicDensityFogVolume_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
