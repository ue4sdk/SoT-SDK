#pragma once

// Sea of Thieves (2) SDK

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
	FDockableInfo                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Cannon.BP_Cannon_C.UserConstructionScript
struct ABP_Cannon_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
