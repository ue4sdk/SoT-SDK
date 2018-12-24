#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	None                           = 1,
	IntProperty                    = 2,
	EFontHinting__None             = 3,
	None01                         = 4,
	ETestArea__None                = 5
};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	None                           = 1,
	ESelectInfo__ESelectInfo_MAX   = 2
};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	None                           = 1,
	ETextCommit__ETextCommit_MAX   = 2,
	EAxis__None                    = 3
};


// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	None                           = 1
};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	None                           = 1
};


// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	None                           = 1,
	MenuPlacement_MenuRight        = 2,
	None01                         = 3,
	MenuPlacement_MAX              = 4,
	EPirateBakeFlags__None         = 5,
	None02                         = 6
};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	None                           = 1,
	VAlign_MAX                     = 2,
	ESlateColorStylingMode__UseColor_Specified = 3
};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	None                           = 1,
	HAlign_MAX                     = 2,
	VAlign_Fill                    = 3
};


// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	EUINavigation__Left            = 0,
	None                           = 1,
	EUINavigation__Next            = 2,
	None01                         = 3,
	NameProperty                   = 4,
	EUINavigation__EUINavigation_MAX = 5,
	MenuPlacement_BelowAnchor      = 6,
	None02                         = 7
};


// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp  = 0,
	None                           = 1,
	IntProperty                    = 2,
	EControllerHand__Left          = 3
};


// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	None                           = 1
};


// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	None                           = 1,
	EButtonClickMethod__EButtonClickMethod_MAX = 2
};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	None                           = 1,
	ESlateColorStylingMode__UseColor_MAX = 2,
	ESlateBrushMirrorType__NoMirror = 3
};


// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	None                           = 1,
	ESlateCheckBoxType__CheckBox   = 2
};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	None                           = 1,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 2,
	ESlateBrushTileType__NoTile    = 3
};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	None                           = 1,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 2,
	ESelectionMode__None           = 3
};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	None                           = 1,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 2
};


// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked      = 0,
	None                           = 1,
	ESlateBrushImageType__NoImage  = 2
};


// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	None                           = 1
};


// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	None                           = 1
};


// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	EFocusCause__Mouse             = 0,
	None                           = 1,
	EFocusCause__OtherWidgetLostFocus = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape      = 0,
	None                           = 1,
	EUINavigationRule__Custom      = 2,
	None01                         = 3,
	NameProperty                   = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateColor
// 0x0030
struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateColorStylingMode>                ColorUseRule;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0011(0x001F) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrush
// 0x0090
struct FSlateBrush
{
	struct FVector2D                                   ImageSize;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FMargin                                     Margin;                                                   // 0x000C(0x0010) (Edit, BlueprintVisible)
	struct FLinearColor                                Tint;                                                     // 0x001C(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FSlateColor                                 TintColor;                                                // 0x0030(0x0030) (Edit, BlueprintVisible)
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                   // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0063(0x0005) MISSED OFFSET
	class UObject*                                     ResourceObject;                                           // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResourceName;                                             // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDynamicallyLoaded;                                     // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasUObject;                                              // 0x0079(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	struct FBox2D                                      UVRegion;                                                 // 0x007C(0x0014) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.InputEvent
// 0x0028
struct FInputEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x0058 (0x0080 - 0x0028)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
};

// ScriptStruct SlateCore.Geometry
// 0x0034
struct FGeometry
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.ButtonStyle
// 0x02A0 (0x02A8 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                   // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Hovered;                                                  // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Pressed;                                                  // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Disabled;                                                 // 0x01B8(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     NormalPadding;                                            // 0x0248(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     PressedPadding;                                           // 0x0258(0x0010) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0268(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0280(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PressedSound;                                             // 0x0298(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       HoveredSound;                                             // 0x02A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x03D8 (0x03E0 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                              // 0x0008(0x02A8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x02B0(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MenuBorderBrush;                                          // 0x0340(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     MenuBorderPadding;                                        // 0x03D0(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x0420 (0x0428 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0008(0x03E0) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x03E8(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 SelectionChangeSlateSound;                                // 0x0400(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PressedSound;                                             // 0x0418(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       SelectionChangeSound;                                     // 0x0420(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0040
struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     FontMaterial;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
	struct FName                                       TypefaceFontName;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FontName;                                                 // 0x0034(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EFontHinting>                          Hinting;                                                  // 0x003C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x0220 (0x0228 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0040) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0048(0x0030) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageSelected;                                  // 0x0078(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageComposing;                                 // 0x0108(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CaretImage;                                               // 0x0198(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x0510 (0x0518 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HorizontalBackgroundImage;                                // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBackgroundImage;                                  // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalTopSlotImage;                                     // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalTopSlotImage;                                   // 0x01B8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBottomSlotImage;                                  // 0x0248(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalBottomSlotImage;                                // 0x02D8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0368(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredThumbImage;                                        // 0x03F8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DraggedThumbImage;                                        // 0x0488(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x0858 (0x0860 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImageNormal;                                    // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageHovered;                                   // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageFocused;                                   // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                  // 0x01B8(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              Font;                                                     // 0x0258(0x0040) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0298(0x0030) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x02C8(0x0030) (Edit, BlueprintVisible)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                  // 0x02F8(0x0030) (Edit, BlueprintVisible)
	struct FMargin                                     HScrollBarPadding;                                        // 0x0328(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     VScrollBarPadding;                                        // 0x0338(0x0010) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0348(0x0518) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0158 (0x0160 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0040) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0048(0x0030) (Edit, BlueprintVisible)
	struct FVector2D                                   ShadowOffset;                                             // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SelectedBackgroundColor;                                  // 0x0090(0x0030) (Edit)
	struct FLinearColor                                HighlightColor;                                           // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 HighlightShape;                                           // 0x00D0(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x0310 (0x0318 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                   // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveFillBrush;                                          // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveFillBrush;                                        // 0x01B8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ArrowsImage;                                              // 0x0248(0x0090) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x02D8(0x0030)
	struct FMargin                                     TextPadding;                                              // 0x0308(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.FontData
// 0x0030
struct FFontData
{
	class FString                                      FontFilename;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UFontBulkData*                               BulkDataPtr;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFontHinting>                          Hinting;                                                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<unsigned char>                              FontData;                                                 // 0x0020(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0038
struct FTypefaceEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFontData                                   Font;                                                     // 0x0008(0x0030) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.Typeface
// 0x0010
struct FTypeface
{
	TArray<struct FTypefaceEntry>                      Fonts;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0028
struct FCompositeSubFont
{
	struct FTypeface                                   Typeface;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FInt32Range>                         CharacterRanges;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ScalingFactor;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeFont
// 0x0028
struct FCompositeFont
{
	struct FTypeface                                   DefaultTypeface;                                          // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FCompositeSubFont>                   SubTypefaces;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.WindowStyle
// 0x1020 (0x1028 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                MinimizeButtonStyle;                                      // 0x0008(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                MaximizeButtonStyle;                                      // 0x02B0(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                RestoreButtonStyle;                                       // 0x0558(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0800(0x02A8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TitleTextStyle;                                           // 0x0AA8(0x0160) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveTitleBrush;                                         // 0x0C08(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveTitleBrush;                                       // 0x0C98(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FlashTitleBrush;                                          // 0x0D28(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OutlineBrush;                                             // 0x0DB8(0x0090) (Edit, BlueprintVisible)
	struct FSlateColor                                 OutlineColor;                                             // 0x0E48(0x0030) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BorderBrush;                                              // 0x0E78(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0F08(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ChildBackgroundBrush;                                     // 0x0F98(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0120 (0x0128 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0098(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0240 (0x0248 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LeftShadowBrush;                                          // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 RightShadowBrush;                                         // 0x01B8(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.DockTabStyle
// 0x06E0 (0x06E8 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0008(0x02A8) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x02B0(0x0090) (Edit)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0340(0x0090) (Edit)
	struct FSlateBrush                                 ColorOverlayBrush;                                        // 0x03D0(0x0090) (Edit)
	struct FSlateBrush                                 ForegroundBrush;                                          // 0x0460(0x0090) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x04F0(0x0090) (Edit)
	struct FSlateBrush                                 ContentAreaBrush;                                         // 0x0580(0x0090) (Edit)
	struct FSlateBrush                                 TabWellBrush;                                             // 0x0610(0x0090) (Edit)
	struct FMargin                                     TabPadding;                                               // 0x06A0(0x0010) (Edit)
	float                                              OverlapWidth;                                             // 0x06B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06B4(0x0004) MISSED OFFSET
	struct FSlateColor                                 FlashColor;                                               // 0x06B8(0x0030) (Edit)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x0510 (0x0518 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                // 0x0008(0x0090) (Edit)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                               // 0x0098(0x0090) (Edit)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                              // 0x0128(0x0090) (Edit)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                             // 0x01B8(0x0090) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0248(0x0090) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x02D8(0x0090) (Edit)
	struct FSlateBrush                                 MenuDropdownImage;                                        // 0x0368(0x0090) (Edit)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                            // 0x03F8(0x0090) (Edit)
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                           // 0x0488(0x0090) (Edit)
};

// ScriptStruct SlateCore.SplitterStyle
// 0x0120 (0x0128 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HandleNormalBrush;                                        // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HandleHighlightBrush;                                     // 0x0098(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0C18 (0x0C20 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle                     ColumnStyle;                                              // 0x0008(0x0518) (Edit)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                          // 0x0520(0x0518) (Edit)
	struct FSplitterStyle                              ColumnSplitterStyle;                                      // 0x0A38(0x0128) (Edit)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0B60(0x0090) (Edit)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0BF0(0x0030) (Edit)
};

// ScriptStruct SlateCore.TableRowStyle
// 0x0720 (0x0728 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SelectorFocusedBrush;                                     // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveHoveredBrush;                                       // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveHoveredBrush;                                     // 0x01B8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveBrush;                                            // 0x0248(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                            // 0x02D8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                   // 0x0368(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                             // 0x03F8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                    // 0x0488(0x0090) (Edit, BlueprintVisible)
	struct FSlateColor                                 TextColor;                                                // 0x0518(0x0030) (Edit, BlueprintVisible)
	struct FSlateColor                                 SelectedTextColor;                                        // 0x0548(0x0030) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Above;                                      // 0x0578(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Onto;                                       // 0x0608(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Below;                                      // 0x0698(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0098 (0x00A0 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                    // 0x0008(0x0090) (Edit)
	int16_t                                            Baseline;                                                 // 0x0098(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
};

// ScriptStruct SlateCore.SliderStyle
// 0x0240 (0x0248 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 NormalBarImage;                                           // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledBarImage;                                         // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledThumbImage;                                       // 0x01B8(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x0518 (0x0520 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                              // 0x0008(0x0248) (Edit)
	struct FSlateBrush                                 HighVolumeImage;                                          // 0x0250(0x0090) (Edit)
	struct FSlateBrush                                 MidVolumeImage;                                           // 0x02E0(0x0090) (Edit)
	struct FSlateBrush                                 LowVolumeImage;                                           // 0x0370(0x0090) (Edit)
	struct FSlateBrush                                 NoVolumeImage;                                            // 0x0400(0x0090) (Edit)
	struct FSlateBrush                                 MutedImage;                                               // 0x0490(0x0090) (Edit)
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0AF8 (0x0B00 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextBoxStyle;                                             // 0x0008(0x0860) (Edit)
	struct FSlateFontInfo                              ActiveFontInfo;                                           // 0x0868(0x0040) (Edit)
	struct FSlateBrush                                 UpArrowImage;                                             // 0x08A8(0x0090) (Edit)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0938(0x0090) (Edit)
	struct FSlateBrush                                 GlassImage;                                               // 0x09C8(0x0090) (Edit)
	struct FSlateBrush                                 ClearImage;                                               // 0x0A58(0x0090) (Edit)
	struct FMargin                                     ImagePadding;                                             // 0x0AE8(0x0010) (Edit)
	bool                                               bLeftAlignButtons;                                        // 0x0AF8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AF9(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0120 (0x0128 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CollapsedImage;                                           // 0x0008(0x0090) (Edit)
	struct FSlateBrush                                 ExpandedImage;                                            // 0x0098(0x0090) (Edit)
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x01B0 (0x01B8 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FillImage;                                                // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MarqueeImage;                                             // 0x0128(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x09C0 (0x09C8 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0008(0x0860) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0868(0x0160) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x0418 (0x0420 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                UnderlineStyle;                                           // 0x0008(0x02A8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x02B0(0x0160) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0410(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x05E8 (0x05F0 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FSlateBrush                                 UncheckedImage;                                           // 0x0010(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedHoveredImage;                                    // 0x00A0(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedPressedImage;                                    // 0x0130(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedImage;                                             // 0x01C0(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedHoveredImage;                                      // 0x0250(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedPressedImage;                                      // 0x02E0(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedImage;                                        // 0x0370(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                 // 0x0400(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedPressedImage;                                 // 0x0490(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0520(0x0010) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0530(0x0030) (Edit, BlueprintVisible)
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0560(0x0030) (Edit, BlueprintVisible)
	struct FSlateSound                                 CheckedSlateSound;                                        // 0x0590(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 UncheckedSlateSound;                                      // 0x05A8(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x05C0(0x0018) (Edit, BlueprintVisible)
	struct FName                                       CheckedSound;                                             // 0x05D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       UncheckedSound;                                           // 0x05E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       HoveredSound;                                             // 0x05E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct SlateCore.NavigationEvent
// 0x0008 (0x0030 - 0x0028)
struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x0058 - 0x0028)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
};

// ScriptStruct SlateCore.ControllerEvent
// 0x0028 (0x0050 - 0x0028)
struct FControllerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0030 - 0x0028)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyEvent
// 0x0028 (0x0050 - 0x0028)
struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0058 - 0x0050)
struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FFocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
