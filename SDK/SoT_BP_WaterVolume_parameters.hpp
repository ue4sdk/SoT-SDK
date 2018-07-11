#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaterVolume_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WaterVolume.BP_WaterVolume_C.CollectRippleGenerators
struct ABP_WaterVolume_C_CollectRippleGenerators_Params
{
};

// Function BP_WaterVolume.BP_WaterVolume_C.UserConstructionScript
struct ABP_WaterVolume_C_UserConstructionScript_Params
{
};

// Function BP_WaterVolume.BP_WaterVolume_C.ReceiveBeginPlay
struct ABP_WaterVolume_C_ReceiveBeginPlay_Params
{
};

// Function BP_WaterVolume.BP_WaterVolume_C.ReceiveActorBeginOverlap
struct ABP_WaterVolume_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WaterVolume.BP_WaterVolume_C.ReceiveActorEndOverlap
struct ABP_WaterVolume_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WaterVolume.BP_WaterVolume_C.ExecuteUbergraph_BP_WaterVolume
struct ABP_WaterVolume_C_ExecuteUbergraph_BP_WaterVolume_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
