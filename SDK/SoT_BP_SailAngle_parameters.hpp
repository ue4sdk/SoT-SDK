#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SailAngle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SailAngle.BP_SailAngle_C.GetDockableInfo
struct ABP_SailAngle_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_SailAngle.BP_SailAngle_C.UserConstructionScript
struct ABP_SailAngle_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
