#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaEngine.NetDormancyHelpers.SetNetDormancy
struct UNetDormancyHelpers_SetNetDormancy_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetDormancy>                          DormancyMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEngine.NetDormancyHelpers.FlushNetDormancy
struct UNetDormancyHelpers_FlushNetDormancy_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
