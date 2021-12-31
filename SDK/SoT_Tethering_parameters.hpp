#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tethering_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tethering.DynamicCordRenderComponent.SetCordEndPointB
struct UDynamicCordRenderComponent_SetCordEndPointB_Params
{
	USceneComponent*                                   EndPointB;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Tethering.DynamicCordRenderComponent.SetCordEndPointA
struct UDynamicCordRenderComponent_SetCordEndPointA_Params
{
	USceneComponent*                                   EndPointA;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
