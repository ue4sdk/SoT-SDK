#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SailAnim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SailAnim.BP_SailAnim_C.Set Billow Animation Rate
struct UBP_SailAnim_C_Set_Billow_Animation_Rate_Params
{
};

// Function BP_SailAnim.BP_SailAnim_C.InitialiseSail
struct UBP_SailAnim_C_InitialiseSail_Params
{
	float*                                             PlayRateMultiplier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MainSail;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SailAnim.BP_SailAnim_C.ExecuteUbergraph_BP_SailAnim
struct UBP_SailAnim_C_ExecuteUbergraph_BP_SailAnim_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
