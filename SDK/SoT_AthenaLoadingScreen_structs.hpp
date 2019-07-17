#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_SlateCore_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaLoadingScreen.SlateLoadingScreenImageParams
// 0x0020
struct FSlateLoadingScreenImageParams
{
	struct FStringAssetReference                       ImageAsset;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               ImageTips;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenStateResponse
// 0x0001
struct FEventAthenaLoadingScreenStateResponse
{
	bool                                               IsVisible;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenStateRequest
// 0x0001
struct FEventAthenaLoadingScreenStateRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenBlockUntilUIIntialisedClear
// 0x0010
struct FEventAthenaLoadingScreenBlockUntilUIIntialisedClear
{
	class FString                                      Description;                                              // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenBlockUntilUIIntialised
// 0x0010
struct FEventAthenaLoadingScreenBlockUntilUIIntialised
{
	class FString                                      Description;                                              // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenClose
// 0x0001
struct FEventAthenaLoadingScreenClose
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenOpen
// 0x0001
struct FEventAthenaLoadingScreenOpen
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
