#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Occlusion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Occlusion.OcclusionService.OnPrimaryActorEndPlay
struct UOcclusionService_OnPrimaryActorEndPlay_Params
{
	AActor*                                            InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Occlusion.OcclusionService.OnIgnoredActorEndPlay
struct UOcclusionService_OnIgnoredActorEndPlay_Params
{
	AActor*                                            InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
