#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DebugMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DebugMenu.DebugMenuComponent
// 0x0048 (0x0118 - 0x00D0)
class UDebugMenuComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class ADebugMenu*                                  DebugMenuInstance;                                        // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugMenu.DebugMenuComponent");
		return ptr;
	}

};


// Class DebugMenu.DebugMenuEntryGenerator
// 0x0000 (0x0028 - 0x0028)
class UDebugMenuEntryGenerator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugMenu.DebugMenuEntryGenerator");
		return ptr;
	}

};


// Class DebugMenu.DebugMenuDataAsset
// 0x0040 (0x0068 - 0x0028)
class UDebugMenuDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class UDebugMenuDataAsset*>                 DataAssets;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDebugMenuDataAssetEntry>            MenuEntires;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDebugMenuButtonShortcut>            ButtonShortcuts;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugMenu.DebugMenuDataAsset");
		return ptr;
	}

};


// Class DebugMenu.DebugMenu
// 0x0060 (0x04D0 - 0x0470)
class ADebugMenu : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0470(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugMenu.DebugMenu");
		return ptr;
	}

};


// Class DebugMenu.DebugMenuComponentMock
// 0x0008 (0x0120 - 0x0118)
class UDebugMenuComponentMock : public UDebugMenuComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugMenu.DebugMenuComponentMock");
		return ptr;
	}

};


// Class DebugMenu.DebugMenuTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UDebugMenuTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugMenu.DebugMenuTestFunctions");
		return ptr;
	}


	bool STATIC_IsDebugMenuReady(class UObject* WorldContextObject);
	bool STATIC_IsDebugMenuOpen(class UObject* WorldContextObject);
	bool STATIC_IsDebugMenuAvailable();
	struct FKey STATIC_GetDebugMenuToggleKeyComboBetaKeyboard();
	struct FKey STATIC_GetDebugMenuToggleKeyComboAlphaKeyboard();
	struct FKey STATIC_GetDebugMenuToggleButtonComboBetaGamepad();
	struct FKey STATIC_GetDebugMenuToggleButtonComboAlphaGamepad();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
