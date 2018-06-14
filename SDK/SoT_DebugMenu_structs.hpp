#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_InputCore_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DebugMenu.DebugMenuDataAssetEntry
// 0x0038
struct FDebugMenuDataAssetEntry
{
	class FString                                      MenuPath;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      DisplayName;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
	class FString                                      ConsoleCommand;                                           // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               CloseMenuWhenExecuted;                                    // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AvailableInShippingBuilds;                                // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct DebugMenu.DebugMenuButtonShortcut
// 0x0040
struct FDebugMenuButtonShortcut
{
	class FString                                      DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      ConsoleCommand;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FKey>                                Buttons;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	float                                              RequiredHoldTime;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AvailableInShippingBuilds;                                // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0035(0x000B) MISSED OFFSET
};

// ScriptStruct DebugMenu.DebugMenuUserItem
// 0x0020
struct FDebugMenuUserItem
{
	class FString                                      path;                                                     // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Command;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct DebugMenu.DebugMenuOptionExecutedEvent
// 0x0020
struct FDebugMenuOptionExecutedEvent
{
	class FString                                      DebugMenuItemName;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ConsoleCommand;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
