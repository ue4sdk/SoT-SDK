#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
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
	bool                                               AvailableInShippingBuilds;                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class FString                                      MenuPath;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class FString                                      DisplayName;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class FString                                      ConsoleCommand;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)
	bool                                               CloseMenuWhenExecuted;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DebugMenu.DebugMenuButtonShortcut
// 0x0040
struct FDebugMenuButtonShortcut
{
	bool                                               AvailableInShippingBuilds;                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class FString                                      DisplayName;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class FString                                      ConsoleCommand;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FKey>                                Buttons;                                                  // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              RequiredHoldTime;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DebugMenu.DebugMenuUserItem
// 0x0020
struct FDebugMenuUserItem
{
	class FString                                      Command;                                                  // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      path;                                                     // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct DebugMenu.DebugMenuOptionExecutedEvent
// 0x0020
struct FDebugMenuOptionExecutedEvent
{
	class FString                                      ConsoleCommand;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      DebugMenuItemName;                                        // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
