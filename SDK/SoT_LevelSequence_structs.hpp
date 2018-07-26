#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_MovieScene_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
struct FLevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
struct FLevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                            // 0x0000(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class FString                                      ComponentName;                                            // 0x0020(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UObject>                      CachedComponent;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequencePlaybackSettings
// 0x0008
struct FLevelSequencePlaybackSettings
{
	int                                                LoopCount;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequenceObjectReference
// 0x0020
struct FLevelSequenceObjectReference
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
