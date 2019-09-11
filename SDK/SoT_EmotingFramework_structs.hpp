#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmotingFramework.EmoteData
// 0x0048
struct FEmoteData
{
	struct FName                                       EmoteIdentifier;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       EmoteDisplayName;                                         // 0x0008(0x0038) (Edit)
	float                                              DelayBeforeAllowingExit;                                  // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalOffsetFactorWhenZoomed;                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmotingFramework.EventEmoteEndRequested
// 0x000C
struct FEventEmoteEndRequested
{
	struct FName                                       EmoteIdentifier;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               EndForcedEmote;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct EmotingFramework.EventEndEmoteAnimation
// 0x0001
struct FEventEndEmoteAnimation
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmotingFramework.EventEmoteCompleted
// 0x000C
struct FEventEmoteCompleted
{
	struct FName                                       EmoteName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           EmoteDuration;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmotingFramework.EventEmoteStarted
// 0x0048
struct FEventEmoteStarted
{
	struct FEmoteData                                  EmoteData;                                                // 0x0000(0x0048)
};

// ScriptStruct EmotingFramework.EventEmoteRequested
// 0x0058
struct FEventEmoteRequested
{
	struct FEmoteData                                  EmoteData;                                                // 0x0000(0x0048)
	struct FName                                       ForcedEmoteIdentifier;                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ForcedEmote;                                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
