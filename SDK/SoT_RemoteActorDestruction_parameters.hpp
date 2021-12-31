#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RemoteActorDestruction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors
struct URemoteActorDestructionInterface_DestroyExistingActors_Params
{
	TArray<UClass*>                                    ClassesToDestroy;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor
struct URemoteActorDestructionInterface_DestroyActor_Params
{
	FDestroyActorData                                  DestroyActorData;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
