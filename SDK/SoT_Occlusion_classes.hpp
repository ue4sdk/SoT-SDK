#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Occlusion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Occlusion.OcclusionInterface
// 0x0000 (0x0028 - 0x0028)
class UOcclusionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Occlusion.OcclusionInterface"));
		return ptr;
	}

};


// Class Occlusion.OcclusionService
// 0x0068 (0x0090 - 0x0028)
class UOcclusionService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Occlusion.OcclusionService"));
		return ptr;
	}


	void OnPrimaryActorEndPlay(class AActor* InActor);
	void OnIgnoredActorEndPlay(class AActor* InActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
