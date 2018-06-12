#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AudioCoast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AudioCoast.BP_AudioCoast_C.UserConstructionScript
struct ABP_AudioCoast_C_UserConstructionScript_Params
{
};

// Function BP_AudioCoast.BP_AudioCoast_C.ReceiveBeginPlay
struct ABP_AudioCoast_C_ReceiveBeginPlay_Params
{
};

// Function BP_AudioCoast.BP_AudioCoast_C.ReceiveEndPlay
struct ABP_AudioCoast_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AudioCoast.BP_AudioCoast_C.ExecuteUbergraph_BP_AudioCoast
struct ABP_AudioCoast_C_ExecuteUbergraph_BP_AudioCoast_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
