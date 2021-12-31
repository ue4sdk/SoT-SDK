#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CrewOwnershipTracking.OwnerListEntry
// 0x0010
struct FOwnerListEntry
{
	TArray<FGuid>                                      OwnerList;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct CrewOwnershipTracking.CrewTrackedItemOwnershipSet
// 0x0018
struct FCrewTrackedItemOwnershipSet
{
	AActor*                                            Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FGuid                                              CrewId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CrewOwnershipTracking.CrewTrackedItemOwnershipChanged
// 0x0030
struct FCrewTrackedItemOwnershipChanged
{
	AActor*                                            Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FGuid                                              CrewId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	FGuid                                              PreviousCrewId;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstTimeOwnedByThisCrew;                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct CrewOwnershipTracking.TrackItemOwnershipEvent
// 0x0018
struct FTrackItemOwnershipEvent
{
	AActor*                                            TrackedItem;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UCrewMembershipInterface>   CrewMembershipInterface;                                  // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
