#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DebugMenu.DebugMenuDataAssetEntry
// 0x0038
struct FDebugMenuDataAssetEntry
{
	FString                                            MenuPath;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	FString                                            DisplayName;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
	FString                                            ConsoleCommand;                                           // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               CloseMenuWhenExecuted;                                    // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AvailableInShippingBuilds;                                // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AddToCommonlyUsedMenu;                                    // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
};

// ScriptStruct DebugMenu.DebugMenuButtonShortcut
// 0x0040
struct FDebugMenuButtonShortcut
{
	FString                                            DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	FString                                            ConsoleCommand;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<FKey>                                       Buttons;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	float                                              RequiredHoldTime;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AvailableInShippingBuilds;                                // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0035(0x000B) MISSED OFFSET
};

// ScriptStruct DebugMenu.DebugMenuUserItem
// 0x0020
struct FDebugMenuUserItem
{
	FString                                            path;                                                     // 0x0000(0x0010) (ZeroConstructor)
	FString                                            Command;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct DebugMenu.DebugErrorHappeningEvent
// 0x0001
struct FDebugErrorHappeningEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct DebugMenu.DebugMenuOptionExecutedEvent
// 0x0020
struct FDebugMenuOptionExecutedEvent
{
	FString                                            DebugMenuItemName;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            ConsoleCommand;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
