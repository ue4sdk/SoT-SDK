#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_large_mast_fore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_large_mast_fore.BP_large_mast_fore_C.UserConstructionScript
struct ABP_large_mast_fore_C_UserConstructionScript_Params
{
};

// Function BP_large_mast_fore.BP_large_mast_fore_C.OnMastDescLoaded
struct ABP_large_mast_fore_C_OnMastDescLoaded_Params
{
	UMastDescAsset*                                    MastDesc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_large_mast_fore.BP_large_mast_fore_C.ExecuteUbergraph_BP_large_mast_fore
struct ABP_large_mast_fore_C_ExecuteUbergraph_BP_large_mast_fore_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
