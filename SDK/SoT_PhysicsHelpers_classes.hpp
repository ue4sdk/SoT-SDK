#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PhysicsHelpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PhysicsHelpers.PostPhysicsTickerInterface
// 0x0000 (0x0028 - 0x0028)
class UPostPhysicsTickerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PhysicsHelpers.PostPhysicsTickerInterface"));
		return ptr;
	}

};


// Class PhysicsHelpers.MockPostPhysicsTickerComponent
// 0x0010 (0x00D8 - 0x00C8)
class UMockPostPhysicsTickerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PhysicsHelpers.MockPostPhysicsTickerComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
