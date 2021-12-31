#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Constellation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Constellation.BP_Constellation_C.UserConstructionScript
struct ABP_Constellation_C_UserConstructionScript_Params
{
};

// Function BP_Constellation.BP_Constellation_C.ReceiveBeginPlay
struct ABP_Constellation_C_ReceiveBeginPlay_Params
{
};

// Function BP_Constellation.BP_Constellation_C.ExecuteUbergraph_BP_Constellation
struct ABP_Constellation_C_ExecuteUbergraph_BP_Constellation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
