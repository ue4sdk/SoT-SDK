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

// ScriptStruct StoryFramework.StoryInfo
// 0x0018
struct FStoryInfo
{
	FName                                              StoryName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FDateTime                                          ActiveFrom;                                               // 0x0008(0x0008) (ZeroConstructor)
	FDateTime                                          ActiveUntil;                                              // 0x0010(0x0008) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
