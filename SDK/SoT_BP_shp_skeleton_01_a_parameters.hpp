#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_shp_skeleton_01_a_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.UserConstructionScript
struct ABP_shp_skeleton_01_a_C_UserConstructionScript_Params
{
};

// Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.StartWetEffect
struct ABP_shp_skeleton_01_a_C_StartWetEffect_Params
{
};

// Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.HideWetDecals
struct ABP_shp_skeleton_01_a_C_HideWetDecals_Params
{
};

// Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.SetSailColour
struct ABP_shp_skeleton_01_a_C_SetSailColour_Params
{
	struct FAIShipSailData                             SailParams;                                               // (Parm)
};

// Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.ExecuteUbergraph_BP_shp_skeleton_01_a
struct ABP_shp_skeleton_01_a_C_ExecuteUbergraph_BP_shp_skeleton_01_a_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
