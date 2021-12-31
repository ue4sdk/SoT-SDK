// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RemoteActorDestruction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors
// (Native, Public, HasOutParms)
// Parameters:
// TArray<UClass*>                ClassesToDestroy               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void URemoteActorDestructionInterface::DestroyExistingActors(TArray<UClass*> ClassesToDestroy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors"));

	URemoteActorDestructionInterface_DestroyExistingActors_Params params;
	params.ClassesToDestroy = ClassesToDestroy;

	UObject::ProcessEvent(fn, &params);
}


// Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor
// (Native, Public, HasOutParms)
// Parameters:
// FDestroyActorData              DestroyActorData               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void URemoteActorDestructionInterface::DestroyActor(const FDestroyActorData& DestroyActorData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor"));

	URemoteActorDestructionInterface_DestroyActor_Params params;
	params.DestroyActorData = DestroyActorData;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
