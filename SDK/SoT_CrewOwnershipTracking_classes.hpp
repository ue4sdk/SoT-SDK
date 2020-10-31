#pragma once

// Sea of Thieves (2.0) SDK

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


// Class CrewOwnershipTracking.CrewOwnershipTrackingComponent
// 0x0098 (0x0160 - 0x00C8)
class UCrewOwnershipTrackingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FGuid                                       FirstOwnedByCrewId;                                       // 0x00D0(0x0010) (Net, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       LastOwnedByCrewId;                                        // 0x00E0(0x0010) (Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               PreviousOwnerList;                                        // 0x00F0(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FOwnerListEntry>         PreviousOwnerMap;                                         // 0x0100(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

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
