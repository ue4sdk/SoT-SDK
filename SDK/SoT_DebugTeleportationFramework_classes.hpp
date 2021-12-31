#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DebugTeleportationFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DebugTeleportationFramework.DebugTeleportationLookupInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugTeleportationLookupInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugTeleportationFramework.DebugTeleportationLookupInterface"));
		return ptr;
	}

};


// Class DebugTeleportationFramework.DebugTeleportationPresentationInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugTeleportationPresentationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugTeleportationFramework.DebugTeleportationPresentationInterface"));
		return ptr;
	}

};


// Class DebugTeleportationFramework.DebugTeleportationRegistrationInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugTeleportationRegistrationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugTeleportationFramework.DebugTeleportationRegistrationInterface"));
		return ptr;
	}

};


// Class DebugTeleportationFramework.DebugTeleportationDestinationService
// 0x0028 (0x03F8 - 0x03D0)
class ADebugTeleportationDestinationService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET
	TArray<FDebugTeleportDestinationEntry>             DebugTeleportationRegistry;                               // 0x03E8(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugTeleportationFramework.DebugTeleportationDestinationService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
