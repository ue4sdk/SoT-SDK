#pragma once

// Sea of Thieves (2) SDK

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
// 0x0050 (0x0118 - 0x00C8)
class UDebugMenuComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C8(0x0028) MISSED OFFSET
	ADebugMenu*                                        DebugMenuInstance;                                        // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugMenu.DebugMenuComponent"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugMenu.DebugMenuEntryGenerator"));
		return ptr;
	}

};


// Class DebugMenu.DebugMenuDataAsset
// 0x0040 (0x0068 - 0x0028)
class UDebugMenuDataAsset : public UDataAsset
{
public:
	TArray<UDebugMenuDataAsset*>                       DataAssets;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<FDebugMenuDataAssetEntry>                   MenuEntires;                                              // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<FDebugMenuButtonShortcut>                   ButtonShortcuts;                                          // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<UDebugMenuEntryGenerator*>                  MenuEntryGenerators;                                      // 0x0058(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugMenu.DebugMenuDataAsset"));
		return ptr;
	}

};


// Class DebugMenu.DebugMenu
// 0x0060 (0x0430 - 0x03D0)
class ADebugMenu : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03D0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugMenu.DebugMenu"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugMenu.DebugMenuComponentMock"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugMenu.DebugMenuTestFunctions"));
		return ptr;
	}


	static bool IsDebugMenuReady(UObject* WorldContextObject);
	static bool IsDebugMenuOpen(UObject* WorldContextObject);
	static bool IsDebugMenuAvailable();
	static FKey GetDebugMenuToggleKeyComboBetaKeyboard();
	static FKey GetDebugMenuToggleKeyComboAlphaKeyboard();
	static FKey GetDebugMenuToggleButtonComboBetaGamepad();
	static FKey GetDebugMenuToggleButtonComboAlphaGamepad();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
