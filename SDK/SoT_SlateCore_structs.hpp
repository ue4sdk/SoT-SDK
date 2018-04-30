#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Bottom;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              Left;                                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateColor
// 0x0030
struct FSlateColor
{
	TEnumAsByte<ESlateColorStylingMode>                ColorUseRule;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FLinearColor                                SpecifiedColor;                                           // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateBrush
// 0x0090
struct FSlateBrush
{
	struct FBox2D                                      UVRegion;                                                 // 0x0000(0x0014) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1CF];                                     // 0x0014(0x01CF) MISSED OFFSET
	struct FVector2D                                   ImageSize;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FLinearColor                                Tint;                                                     // 0x01E3(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateColor                                 TintColor;                                                // 0x01E3(0x0030) (Edit, BlueprintVisible)
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     ResourceObject;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResourceName;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDynamicallyLoaded;                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasUObject;                                              // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
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
	struct FName                                       HoveredSound;                                             // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FSlateBrush                                 Normal;                                                   // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Hovered;                                                  // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Pressed;                                                  // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Disabled;                                                 // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     NormalPadding;                                            // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     PressedPadding;                                           // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x01E3(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x01E3(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PressedSound;                                             // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0xBD];                                      // 0x01EB(0x00BD) MISSED OFFSET
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x03D8 (0x03E0 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FMargin                                     MenuBorderPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FButtonStyle                                ButtonStyle;                                              // 0x01E3(0x02A8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MenuBorderBrush;                                          // 0x01E3(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x16D];                                     // 0x0273(0x016D) MISSED OFFSET
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x0420 (0x0428 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FName                                       SelectionChangeSound;                                     // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x01E3(0x03E0) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x01E3(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 SelectionChangeSlateSound;                                // 0x01E3(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PressedSound;                                             // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x23D];                                     // 0x01EB(0x023D) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0040
struct FSlateFontInfo
{
	TEnumAsByte<EFontHinting>                          Hinting;                                                  // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UObject*                                     FontObject;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     FontMaterial;                                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TypefaceFontName;                                         // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FontName;                                                 // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x0220 (0x0228 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CaretImage;                                               // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x01E3(0x0040) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x01E3(0x0030) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageSelected;                                  // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageComposing;                                 // 0x01E3(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x0510 (0x0518 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 DraggedThumbImage;                                        // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FSlateBrush                                 HorizontalBackgroundImage;                                // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBackgroundImage;                                  // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalTopSlotImage;                                     // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalTopSlotImage;                                   // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBottomSlotImage;                                  // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalBottomSlotImage;                                // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredThumbImage;                                        // 0x01E3(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x2A5];                                     // 0x0273(0x02A5) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x0858 (0x0860 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0000(0x0518) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageNormal;                                    // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageHovered;                                   // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageFocused;                                   // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                  // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              Font;                                                     // 0x01E3(0x0040) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x01E3(0x0030) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x01E3(0x0030) (Edit, BlueprintVisible)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                  // 0x01E3(0x0030) (Edit, BlueprintVisible)
	struct FMargin                                     HScrollBarPadding;                                        // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     VScrollBarPadding;                                        // 0x01E3(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x66D];                                     // 0x01F3(0x066D) MISSED OFFSET
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0158 (0x0160 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HighlightShape;                                           // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x01E3(0x0040) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x01E3(0x0030) (Edit, BlueprintVisible)
	struct FVector2D                                   ShadowOffset;                                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SelectedBackgroundColor;                                  // 0x01E3(0x0030) (Edit)
	struct FLinearColor                                HighlightColor;                                           // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x0310 (0x0318 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FMargin                                     TextPadding;                                              // 0x0000(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                   // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveFillBrush;                                          // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveFillBrush;                                        // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ArrowsImage;                                              // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x01E3(0x0030)
	unsigned char                                      UnknownData01[0x105];                                     // 0x0213(0x0105) MISSED OFFSET
};

// ScriptStruct SlateCore.FontData
// 0x0030
struct FFontData
{
	TArray<unsigned char>                              FontData;                                                 // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      FontFilename;                                             // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UFontBulkData*                               BulkDataPtr;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFontHinting>                          Hinting;                                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0038
struct FTypefaceEntry
{
	struct FFontData                                   Font;                                                     // 0x0000(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
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
	float                                              ScalingFactor;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FTypeface                                   Typeface;                                                 // 0x01E3(0x0010) (Edit, BlueprintVisible)
	TArray<struct FInt32Range>                         CharacterRanges;                                          // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SlateCore.CompositeFont
// 0x0028
struct FCompositeFont
{
	TArray<struct FCompositeSubFont>                   SubTypefaces;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FTypeface                                   DefaultTypeface;                                          // 0x01E3(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.WindowStyle
// 0x1020 (0x1028 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 ChildBackgroundBrush;                                     // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FButtonStyle                                MinimizeButtonStyle;                                      // 0x01E3(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                MaximizeButtonStyle;                                      // 0x01E3(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                RestoreButtonStyle;                                       // 0x01E3(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x01E3(0x02A8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TitleTextStyle;                                           // 0x01E3(0x0160) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveTitleBrush;                                         // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveTitleBrush;                                       // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FlashTitleBrush;                                          // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OutlineBrush;                                             // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateColor                                 OutlineColor;                                             // 0x01E3(0x0030) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BorderBrush;                                              // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x01E3(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0xDB5];                                     // 0x0273(0x0DB5) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0120 (0x0128 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x01E3(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0240 (0x0248 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 RightShadowBrush;                                         // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LeftShadowBrush;                                          // 0x01E3(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.DockTabStyle
// 0x06E0 (0x06E8 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FSlateColor                                 FlashColor;                                               // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x01E3(0x02A8) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 ColorOverlayBrush;                                        // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 ForegroundBrush;                                          // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 ContentAreaBrush;                                         // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 TabWellBrush;                                             // 0x01E3(0x0090) (Edit)
	struct FMargin                                     TabPadding;                                               // 0x01E3(0x0010) (Edit)
	float                                              OverlapWidth;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x501];                                     // 0x01E7(0x0501) MISSED OFFSET
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x0510 (0x0518 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                           // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                               // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                              // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                             // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 MenuDropdownImage;                                        // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                            // 0x01E3(0x0090) (Edit)
	unsigned char                                      UnknownData01[0x2A5];                                     // 0x0273(0x02A5) MISSED OFFSET
};

// ScriptStruct SlateCore.SplitterStyle
// 0x0120 (0x0128 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HandleHighlightBrush;                                     // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FSlateBrush                                 HandleNormalBrush;                                        // 0x01E3(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0C18 (0x0C20 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FSlateColor                                 ForegroundColor;                                          // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FTableColumnHeaderStyle                     ColumnStyle;                                              // 0x01E3(0x0518) (Edit)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                          // 0x01E3(0x0518) (Edit)
	struct FSplitterStyle                              ColumnSplitterStyle;                                      // 0x01E3(0x0128) (Edit)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x01E3(0x0090) (Edit)
	unsigned char                                      UnknownData01[0x9AD];                                     // 0x0273(0x09AD) MISSED OFFSET
};

// ScriptStruct SlateCore.TableRowStyle
// 0x0720 (0x0728 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 DropIndicator_Below;                                      // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FSlateBrush                                 SelectorFocusedBrush;                                     // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveHoveredBrush;                                       // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveHoveredBrush;                                     // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveBrush;                                            // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                            // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                   // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                             // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                    // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateColor                                 TextColor;                                                // 0x01E3(0x0030) (Edit, BlueprintVisible)
	struct FSlateColor                                 SelectedTextColor;                                        // 0x01E3(0x0030) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Above;                                      // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Onto;                                       // 0x01E3(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4B5];                                     // 0x0273(0x04B5) MISSED OFFSET
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0098 (0x00A0 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	int16_t                                            Baseline;                                                 // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E1];                                     // 0x0002(0x01E1) MISSED OFFSET
	struct FSlateBrush                                 Image;                                                    // 0x01E3(0x0090) (Edit)
};

// ScriptStruct SlateCore.SliderStyle
// 0x0240 (0x0248 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 DisabledThumbImage;                                       // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FSlateBrush                                 NormalBarImage;                                           // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledBarImage;                                         // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x01E3(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x0518 (0x0520 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 MutedImage;                                               // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FSliderStyle                                SliderStyle;                                              // 0x01E3(0x0248) (Edit)
	struct FSlateBrush                                 HighVolumeImage;                                          // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 MidVolumeImage;                                           // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 LowVolumeImage;                                           // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 NoVolumeImage;                                            // 0x01E3(0x0090) (Edit)
	unsigned char                                      UnknownData01[0x2AD];                                     // 0x0273(0x02AD) MISSED OFFSET
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0AF8 (0x0B00 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	bool                                               bLeftAlignButtons;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FEditableTextBoxStyle                       TextBoxStyle;                                             // 0x01E3(0x0860) (Edit)
	struct FSlateFontInfo                              ActiveFontInfo;                                           // 0x01E3(0x0040) (Edit)
	struct FSlateBrush                                 UpArrowImage;                                             // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 GlassImage;                                               // 0x01E3(0x0090) (Edit)
	struct FSlateBrush                                 ClearImage;                                               // 0x01E3(0x0090) (Edit)
	struct FMargin                                     ImagePadding;                                             // 0x01E3(0x0010) (Edit)
	unsigned char                                      UnknownData01[0x90D];                                     // 0x01F3(0x090D) MISSED OFFSET
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0120 (0x0128 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 ExpandedImage;                                            // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FSlateBrush                                 CollapsedImage;                                           // 0x01E3(0x0090) (Edit)
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x01B0 (0x01B8 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 MarqueeImage;                                             // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FSlateBrush                                 BackgroundImage;                                          // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FillImage;                                                // 0x01E3(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x09C0 (0x09C8 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FTextBlockStyle                             TextStyle;                                                // 0x0000(0x0160) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x83];                                      // 0x0160(0x0083) MISSED OFFSET
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x01E3(0x0860) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x0418 (0x0420 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FButtonStyle                                UnderlineStyle;                                           // 0x01E3(0x02A8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x01E3(0x0160) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0xDD];                                      // 0x0343(0x00DD) MISSED OFFSET
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x05E8 (0x05F0 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	struct FName                                       HoveredSound;                                             // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 UncheckedImage;                                           // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedHoveredImage;                                    // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedPressedImage;                                    // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedImage;                                             // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedHoveredImage;                                      // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedPressedImage;                                      // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedImage;                                        // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                 // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedPressedImage;                                 // 0x01E3(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x01E3(0x0030) (Edit, BlueprintVisible)
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x01E3(0x0030) (Edit, BlueprintVisible)
	struct FSlateSound                                 CheckedSlateSound;                                        // 0x01E3(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 UncheckedSlateSound;                                      // 0x01E3(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x01E3(0x0018) (Edit, BlueprintVisible)
	struct FName                                       CheckedSound;                                             // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       UncheckedSound;                                           // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x405];                                     // 0x01EB(0x0405) MISSED OFFSET
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
