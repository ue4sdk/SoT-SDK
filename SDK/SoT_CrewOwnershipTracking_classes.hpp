#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CrewOwnershipTracking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CrewOwnershipTracking.CrewOwnershipTrackingInterface
// 0x0000 (0x0028 - 0x0028)
class UCrewOwnershipTrackingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrewOwnershipTracking.CrewOwnershipTrackingInterface"));
		return ptr;
	}

};


// Class CrewOwnershipTracking.CrewSpawnOwnershipTrackingInterface
// 0x0000 (0x0028 - 0x0028)
class UCrewSpawnOwnershipTrackingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrewOwnershipTracking.CrewSpawnOwnershipTrackingInterface"));
		return ptr;
	}

};


// Class CrewOwnershipTracking.CustomCrewTrackingInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomCrewTrackingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrewOwnershipTracking.CustomCrewTrackingInterface"));
		return ptr;
	}

};


// Class CrewOwnershipTracking.CrewOwnershipTrackingComponent
// 0x00A8 (0x0170 - 0x00C8)
class UCrewOwnershipTrackingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET
	FGuid                                              SpawningCrewId;                                           // 0x00E0(0x0010) (Net, ZeroConstructor, IsPlainOldData)
	FGuid                                              CurrentOwnedByCrewId;                                     // 0x00F0(0x0010) (Net, ZeroConstructor, IsPlainOldData)
	FOwnerListEntry                                    PreviousOwnedByCrewIdList;                                // 0x0100(0x0010) (Net)
	TMap<FName, FOwnerListEntry>                       CustomTrackingMap;                                        // 0x0110(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrewOwnershipTracking.CrewOwnershipTrackingComponent"));
		return ptr;
	}

};


// Class CrewOwnershipTracking.CrewOwnershipTrackingControlInterface
// 0x0000 (0x0028 - 0x0028)
class UCrewOwnershipTrackingControlInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrewOwnershipTracking.CrewOwnershipTrackingControlInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
