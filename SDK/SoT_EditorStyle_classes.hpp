#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EditorStyle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EditorStyle.EditorStyleSettings
// 0x0068 (0x0090 - 0x0028)
class UEditorStyleSettings : public UObject
{
public:
	FLinearColor                                       SelectionColor;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	FLinearColor                                       PressedSelectionColor;                                    // 0x0038(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	FLinearColor                                       InactiveSelectionColor;                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	FLinearColor                                       KeyboardFocusColor;                                       // 0x0058(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EColorVisionDeficiency>                ColorVisionDeficiencyPreviewType;                         // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	unsigned char                                      bUseSmallToolBarIcons : 1;                                // 0x006C(0x0001) (Edit, Config)
	unsigned char                                      bEnableWindowAnimations : 1;                              // 0x006C(0x0001) (Edit, Config)
	unsigned char                                      bShowFriendlyNames : 1;                                   // 0x006C(0x0001) (Edit, Config)
	unsigned char                                      bExpandConfigurationMenus : 1;                            // 0x006C(0x0001) (Edit, Config)
	unsigned char                                      bShowProjectMenus : 1;                                    // 0x006C(0x0001) (Config)
	unsigned char                                      bShowLaunchMenus : 1;                                     // 0x006C(0x0001) (Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	TEnumAsByte<ELogTimes>                             LogTimestampMode;                                         // 0x0070(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOpenAssetEditorTabsInNewWindow;                          // 0x0071(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1E];                                      // 0x0072(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EditorStyle.EditorStyleSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
