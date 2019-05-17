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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
