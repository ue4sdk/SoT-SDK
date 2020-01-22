#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmotingFramework.EmoteId
// 0x0008
struct FEmoteId
{
	struct FName                                       EmoteId;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmotingFramework.EmoteData
// 0x0050
struct FEmoteData
{
	struct FEmoteId                                    EmoteId;                                                  // 0x0000(0x0008) (Edit)
	struct FText                                       EmoteDisplayName;                                         // 0x0008(0x0038) (Edit)
	float                                              DelayBeforeAllowingExit;                                  // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalOffsetFactorWhenZoomed;                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HideNameplate;                                            // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
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
// 0x0050
struct FEventEmoteStarted
{
	struct FEmoteData                                  EmoteData;                                                // 0x0000(0x0050)
};

// ScriptStruct EmotingFramework.EventEmoteRequested
// 0x0060
struct FEventEmoteRequested
{
	struct FEmoteData                                  EmoteData;                                                // 0x0000(0x0050)
	struct FName                                       ForcedEmoteIdentifier;                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ForcedEmote;                                              // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
