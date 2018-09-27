#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Cannon.BP_Cannon_C.GetDockableInfo
struct ABP_Cannon_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Cannon.BP_Cannon_C.UserConstructionScript
struct ABP_Cannon_C_UserConstructionScript_Params
{
};

// Function BP_Cannon.BP_Cannon_C.OnCannonDescLoaded
struct ABP_Cannon_C_OnCannonDescLoaded_Params
{
	class UCannonDescAsset*                            CannonDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Cannon.BP_Cannon_C.ExecuteUbergraph_BP_Cannon
struct ABP_Cannon_C_ExecuteUbergraph_BP_Cannon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
