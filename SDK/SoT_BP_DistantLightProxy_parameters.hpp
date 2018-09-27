#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DistantLightProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.FindExistingLight
struct ABP_DistantLightProxy_C_FindExistingLight_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Create Lights
struct ABP_DistantLightProxy_C_Create_Lights_Params
{
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.UserConstructionScript
struct ABP_DistantLightProxy_C_UserConstructionScript_Params
{
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Add Light
struct ABP_DistantLightProxy_C_Add_Light_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.ExecuteUbergraph_BP_DistantLightProxy
struct ABP_DistantLightProxy_C_ExecuteUbergraph_BP_DistantLightProxy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
