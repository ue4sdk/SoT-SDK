#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RemoteActorDestruction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RemoteActorDestruction.RemoteActorDestructionInterface
// 0x0000 (0x0028 - 0x0028)
class URemoteActorDestructionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RemoteActorDestruction.RemoteActorDestructionInterface"));
		return ptr;
	}


	void DestroyExistingActors(TArray<UClass*> ClassesToDestroy);
	void DestroyActor(const FDestroyActorData& DestroyActorData);
};


// Class RemoteActorDestruction.RemoteActorDestructionService
// 0x0018 (0x03E8 - 0x03D0)
class ARemoteActorDestructionService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RemoteActorDestruction.RemoteActorDestructionService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
