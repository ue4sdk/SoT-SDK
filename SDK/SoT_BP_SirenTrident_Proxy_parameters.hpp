#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SirenTrident_Proxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.GetClosestInteractionPoint
struct ABP_SirenTrident_Proxy_C_GetClosestInteractionPoint_Params
{
	FVector                                            ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.UserConstructionScript
struct ABP_SirenTrident_Proxy_C_UserConstructionScript_Params
{
};

// Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.ReceiveBeginPlay
struct ABP_SirenTrident_Proxy_C_ReceiveBeginPlay_Params
{
};

// Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.ExecuteUbergraph_BP_SirenTrident_Proxy
struct ABP_SirenTrident_Proxy_C_ExecuteUbergraph_BP_SirenTrident_Proxy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
