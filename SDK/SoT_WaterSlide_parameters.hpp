#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WaterSlide_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WaterSlide.WaterSlide.SetEntranceCollisionComponent
struct AWaterSlide_SetEntranceCollisionComponent_Params
{
	UPrimitiveComponent*                               InEntranceCollisionComponent;                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack
struct AWaterSlide_ComponentBeginOverlapCallBack_Params
{
	AActor*                                            InOtherActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               InOtherComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InOtherBodyIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InFromSweep;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FHitResult                                         InSweepResult;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
