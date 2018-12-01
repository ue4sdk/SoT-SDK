#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Seagull01_8POI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.seagull_Fade
struct ABP_Seagull01_8POI_C_seagull_Fade_Params
{
	class UMaterialInstance*                           Seagull_Material;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           Seagull_MT_LOD;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.UserConstructionScript
struct ABP_Seagull01_8POI_C_UserConstructionScript_Params
{
};

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ReceiveBeginPlay
struct ABP_Seagull01_8POI_C_ReceiveBeginPlay_Params
{
};

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeIn
struct ABP_Seagull01_8POI_C_FadeIn_Params
{
};

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeOut
struct ABP_Seagull01_8POI_C_FadeOut_Params
{
};

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ExecuteUbergraph_BP_Seagull01_8POI
struct ABP_Seagull01_8POI_C_ExecuteUbergraph_BP_Seagull01_8POI_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
