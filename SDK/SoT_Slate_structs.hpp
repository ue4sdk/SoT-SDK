#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_SlateCore_classes.hpp"
#include "SoT_InputCore_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	ETextJustify__Left             = 0,
	None                           = 1,
	EThreePlayerSplitScreenType__FavorTop = 2
};


// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	ETableViewMode__List           = 0,
	None                           = 1,
	EButtonTouchMethod__DownAndUp  = 2
};


// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	ESelectionMode__None           = 0,
	None                           = 1,
	ESelectionMode__ESelectionMode_MAX = 2,
	ESlateBrushTileType__NoTile    = 3
};


// Enum Slate.EStretch
enum class EStretch : uint8_t
{
	EStretch__None                 = 0,
	None                           = 1,
	EStretch__ScaleToFitY          = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	EStretchDirection__Both        = 0,
	None                           = 1,
	ETableViewMode__List           = 2
};


// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight = 0,
	None                           = 1,
	EProgressBarFillType__BottomToTop = 2,
	None01                         = 3,
	EFontHinting__Default          = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.InputChord
// 0x0028
struct FInputChord
{
	struct FKey                                        Key;                                                      // 0x0000(0x0020)
	unsigned char                                      bShift : 1;                                               // 0x0020(0x0001)
	unsigned char                                      bCtrl : 1;                                                // 0x0020(0x0001)
	unsigned char                                      bAlt : 1;                                                 // 0x0020(0x0001)
	unsigned char                                      bCmd : 1;                                                 // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Slate.Anchors
// 0x0010
struct FAnchors
{
	struct FVector2D                                   Minimum;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Maximum;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
