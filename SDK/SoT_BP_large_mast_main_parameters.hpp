#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_large_mast_main_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_large_mast_main.BP_large_mast_main_C.UserConstructionScript
struct ABP_large_mast_main_C_UserConstructionScript_Params
{
};

// Function BP_large_mast_main.BP_large_mast_main_C.OnMastDescLoaded
struct ABP_large_mast_main_C_OnMastDescLoaded_Params
{
	class UMastDescAsset*                              MastDesc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_large_mast_main.BP_large_mast_main_C.ExecuteUbergraph_BP_large_mast_main
struct ABP_large_mast_main_C_ExecuteUbergraph_BP_large_mast_main_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
