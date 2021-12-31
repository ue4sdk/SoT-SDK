#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_SlateCore_enums.hpp"
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
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateColor
// 0x0030
struct FSlateColor
{
	FLinearColor                                       SpecifiedColor;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateColorStylingMode>                ColorUseRule;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0011(0x001F) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrush
// 0x0090
struct FSlateBrush
{
	FVector2D                                          ImageSize;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	FMargin                                            Margin;                                                   // 0x000C(0x0010) (Edit, BlueprintVisible)
	FLinearColor                                       Tint;                                                     // 0x001C(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	FSlateColor                                        TintColor;                                                // 0x0030(0x0030) (Edit, BlueprintVisible)
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                   // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0063(0x0005) MISSED OFFSET
	UObject*                                           ResourceObject;                                           // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FName                                              ResourceName;                                             // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDynamicallyLoaded;                                     // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasUObject;                                              // 0x0079(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	FBox2D                                             UVRegion;                                                 // 0x007C(0x0014) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.InputEvent
// 0x0028
struct FInputEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x0060 (0x0088 - 0x0028)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
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
	UObject*                                           ResourceObject;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.ButtonStyle
// 0x02A0 (0x02A8 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        Normal;                                                   // 0x0008(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        Hovered;                                                  // 0x0098(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        Pressed;                                                  // 0x0128(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        Disabled;                                                 // 0x01B8(0x0090) (Edit, BlueprintVisible)
	FMargin                                            NormalPadding;                                            // 0x0248(0x0010) (Edit, BlueprintVisible)
	FMargin                                            PressedPadding;                                           // 0x0258(0x0010) (Edit, BlueprintVisible)
	FSlateSound                                        PressedSlateSound;                                        // 0x0268(0x0018) (Edit, BlueprintVisible)
	FSlateSound                                        HoveredSlateSound;                                        // 0x0280(0x0018) (Edit, BlueprintVisible)
	FName                                              PressedSound;                                             // 0x0298(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	FName                                              HoveredSound;                                             // 0x02A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x03D8 (0x03E0 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	FButtonStyle                                       ButtonStyle;                                              // 0x0008(0x02A8) (Edit, BlueprintVisible)
	FSlateBrush                                        DownArrowImage;                                           // 0x02B0(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        MenuBorderBrush;                                          // 0x0340(0x0090) (Edit, BlueprintVisible)
	FMargin                                            MenuBorderPadding;                                        // 0x03D0(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x0420 (0x0428 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	FComboButtonStyle                                  ComboButtonStyle;                                         // 0x0008(0x03E0) (Edit, BlueprintVisible)
	FSlateSound                                        PressedSlateSound;                                        // 0x03E8(0x0018) (Edit, BlueprintVisible)
	FSlateSound                                        SelectionChangeSlateSound;                                // 0x0400(0x0018) (Edit, BlueprintVisible)
	FName                                              PressedSound;                                             // 0x0418(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	FName                                              SelectionChangeSound;                                     // 0x0420(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0040
struct FSlateFontInfo
{
	UObject*                                           FontObject;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UObject*                                           FontMaterial;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
	FName                                              TypefaceFontName;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FName                                              FontName;                                                 // 0x0034(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EFontHinting>                          Hinting;                                                  // 0x003C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x0220 (0x0228 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	FSlateFontInfo                                     Font;                                                     // 0x0008(0x0040) (Edit, BlueprintVisible)
	FSlateColor                                        ColorAndOpacity;                                          // 0x0048(0x0030) (Edit, BlueprintVisible)
	FSlateBrush                                        BackgroundImageSelected;                                  // 0x0078(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        BackgroundImageComposing;                                 // 0x0108(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        CaretImage;                                               // 0x0198(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x0510 (0x0518 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        HorizontalBackgroundImage;                                // 0x0008(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        VerticalBackgroundImage;                                  // 0x0098(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        VerticalTopSlotImage;                                     // 0x0128(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        HorizontalTopSlotImage;                                   // 0x01B8(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        VerticalBottomSlotImage;                                  // 0x0248(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        HorizontalBottomSlotImage;                                // 0x02D8(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        NormalThumbImage;                                         // 0x0368(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        HoveredThumbImage;                                        // 0x03F8(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        DraggedThumbImage;                                        // 0x0488(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x0858 (0x0860 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        BackgroundImageNormal;                                    // 0x0008(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        BackgroundImageHovered;                                   // 0x0098(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        BackgroundImageFocused;                                   // 0x0128(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        BackgroundImageReadOnly;                                  // 0x01B8(0x0090) (Edit, BlueprintVisible)
	FMargin                                            Padding;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible)
	FSlateFontInfo                                     Font;                                                     // 0x0258(0x0040) (Edit, BlueprintVisible)
	FSlateColor                                        ForegroundColor;                                          // 0x0298(0x0030) (Edit, BlueprintVisible)
	FSlateColor                                        BackgroundColor;                                          // 0x02C8(0x0030) (Edit, BlueprintVisible)
	FSlateColor                                        ReadOnlyForegroundColor;                                  // 0x02F8(0x0030) (Edit, BlueprintVisible)
	FMargin                                            HScrollBarPadding;                                        // 0x0328(0x0010) (Edit, BlueprintVisible)
	FMargin                                            VScrollBarPadding;                                        // 0x0338(0x0010) (Edit, BlueprintVisible)
	FScrollBarStyle                                    ScrollBarStyle;                                           // 0x0348(0x0518) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0158 (0x0160 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	FSlateFontInfo                                     Font;                                                     // 0x0008(0x0040) (Edit, BlueprintVisible)
	FSlateColor                                        ColorAndOpacity;                                          // 0x0048(0x0030) (Edit, BlueprintVisible)
	FVector2D                                          ShadowOffset;                                             // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FLinearColor                                       ShadowColorAndOpacity;                                    // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FSlateColor                                        SelectedBackgroundColor;                                  // 0x0090(0x0030) (Edit)
	FLinearColor                                       HighlightColor;                                           // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FSlateBrush                                        HighlightShape;                                           // 0x00D0(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x0310 (0x0318 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        BackgroundBrush;                                          // 0x0008(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        HoveredBackgroundBrush;                                   // 0x0098(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        ActiveFillBrush;                                          // 0x0128(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        InactiveFillBrush;                                        // 0x01B8(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        ArrowsImage;                                              // 0x0248(0x0090) (Edit, BlueprintVisible)
	FSlateColor                                        ForegroundColor;                                          // 0x02D8(0x0030)
	FMargin                                            TextPadding;                                              // 0x0308(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.FontData
// 0x0030
struct FFontData
{
	FString                                            FontFilename;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UFontBulkData*                                     BulkDataPtr;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFontHinting>                          Hinting;                                                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<unsigned char>                              FontData;                                                 // 0x0020(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0038
struct FTypefaceEntry
{
	FName                                              Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FFontData                                          Font;                                                     // 0x0008(0x0030) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.Typeface
// 0x0010
struct FTypeface
{
	TArray<FTypefaceEntry>                             Fonts;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0038
struct FCompositeSubFont
{
	FTypeface                                          Typeface;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<FInt32Range>                                CharacterRanges;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EFontLanguage>>                 Languages;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ScalingFactor;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeFont
// 0x0028
struct FCompositeFont
{
	FTypeface                                          DefaultTypeface;                                          // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<FCompositeSubFont>                          SubTypefaces;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.WindowStyle
// 0x1020 (0x1028 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	FButtonStyle                                       MinimizeButtonStyle;                                      // 0x0008(0x02A8) (Edit, BlueprintVisible)
	FButtonStyle                                       MaximizeButtonStyle;                                      // 0x02B0(0x02A8) (Edit, BlueprintVisible)
	FButtonStyle                                       RestoreButtonStyle;                                       // 0x0558(0x02A8) (Edit, BlueprintVisible)
	FButtonStyle                                       CloseButtonStyle;                                         // 0x0800(0x02A8) (Edit, BlueprintVisible)
	FTextBlockStyle                                    TitleTextStyle;                                           // 0x0AA8(0x0160) (Edit, BlueprintVisible)
	FSlateBrush                                        ActiveTitleBrush;                                         // 0x0C08(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        InactiveTitleBrush;                                       // 0x0C98(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        FlashTitleBrush;                                          // 0x0D28(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        OutlineBrush;                                             // 0x0DB8(0x0090) (Edit, BlueprintVisible)
	FSlateColor                                        OutlineColor;                                             // 0x0E48(0x0030) (Edit, BlueprintVisible)
	FSlateBrush                                        BorderBrush;                                              // 0x0E78(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        BackgroundBrush;                                          // 0x0F08(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        ChildBackgroundBrush;                                     // 0x0F98(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0120 (0x0128 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        TopShadowBrush;                                           // 0x0008(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        BottomShadowBrush;                                        // 0x0098(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0240 (0x0248 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        TopShadowBrush;                                           // 0x0008(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        BottomShadowBrush;                                        // 0x0098(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        LeftShadowBrush;                                          // 0x0128(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        RightShadowBrush;                                         // 0x01B8(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.DockTabStyle
// 0x06E0 (0x06E8 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	FButtonStyle                                       CloseButtonStyle;                                         // 0x0008(0x02A8) (Edit)
	FSlateBrush                                        NormalBrush;                                              // 0x02B0(0x0090) (Edit)
	FSlateBrush                                        ActiveBrush;                                              // 0x0340(0x0090) (Edit)
	FSlateBrush                                        ColorOverlayBrush;                                        // 0x03D0(0x0090) (Edit)
	FSlateBrush                                        ForegroundBrush;                                          // 0x0460(0x0090) (Edit)
	FSlateBrush                                        HoveredBrush;                                             // 0x04F0(0x0090) (Edit)
	FSlateBrush                                        ContentAreaBrush;                                         // 0x0580(0x0090) (Edit)
	FSlateBrush                                        TabWellBrush;                                             // 0x0610(0x0090) (Edit)
	FMargin                                            TabPadding;                                               // 0x06A0(0x0010) (Edit)
	float                                              OverlapWidth;                                             // 0x06B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06B4(0x0004) MISSED OFFSET
	FSlateColor                                        FlashColor;                                               // 0x06B8(0x0030) (Edit)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x0510 (0x0518 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        SortPrimaryAscendingImage;                                // 0x0008(0x0090) (Edit)
	FSlateBrush                                        SortPrimaryDescendingImage;                               // 0x0098(0x0090) (Edit)
	FSlateBrush                                        SortSecondaryAscendingImage;                              // 0x0128(0x0090) (Edit)
	FSlateBrush                                        SortSecondaryDescendingImage;                             // 0x01B8(0x0090) (Edit)
	FSlateBrush                                        NormalBrush;                                              // 0x0248(0x0090) (Edit)
	FSlateBrush                                        HoveredBrush;                                             // 0x02D8(0x0090) (Edit)
	FSlateBrush                                        MenuDropdownImage;                                        // 0x0368(0x0090) (Edit)
	FSlateBrush                                        MenuDropdownNormalBorderBrush;                            // 0x03F8(0x0090) (Edit)
	FSlateBrush                                        MenuDropdownHoveredBorderBrush;                           // 0x0488(0x0090) (Edit)
};

// ScriptStruct SlateCore.SplitterStyle
// 0x0120 (0x0128 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        HandleNormalBrush;                                        // 0x0008(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        HandleHighlightBrush;                                     // 0x0098(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0C18 (0x0C20 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	FTableColumnHeaderStyle                            ColumnStyle;                                              // 0x0008(0x0518) (Edit)
	FTableColumnHeaderStyle                            LastColumnStyle;                                          // 0x0520(0x0518) (Edit)
	FSplitterStyle                                     ColumnSplitterStyle;                                      // 0x0A38(0x0128) (Edit)
	FSlateBrush                                        BackgroundBrush;                                          // 0x0B60(0x0090) (Edit)
	FSlateColor                                        ForegroundColor;                                          // 0x0BF0(0x0030) (Edit)
};

// ScriptStruct SlateCore.TableRowStyle
// 0x0720 (0x0728 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        SelectorFocusedBrush;                                     // 0x0008(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        ActiveHoveredBrush;                                       // 0x0098(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        ActiveBrush;                                              // 0x0128(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        InactiveHoveredBrush;                                     // 0x01B8(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        InactiveBrush;                                            // 0x0248(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        EvenRowBackgroundHoveredBrush;                            // 0x02D8(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        EvenRowBackgroundBrush;                                   // 0x0368(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        OddRowBackgroundHoveredBrush;                             // 0x03F8(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        OddRowBackgroundBrush;                                    // 0x0488(0x0090) (Edit, BlueprintVisible)
	FSlateColor                                        TextColor;                                                // 0x0518(0x0030) (Edit, BlueprintVisible)
	FSlateColor                                        SelectedTextColor;                                        // 0x0548(0x0030) (Edit, BlueprintVisible)
	FSlateBrush                                        DropIndicator_Above;                                      // 0x0578(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        DropIndicator_Onto;                                       // 0x0608(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        DropIndicator_Below;                                      // 0x0698(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0098 (0x00A0 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        Image;                                                    // 0x0008(0x0090) (Edit)
	int16_t                                            Baseline;                                                 // 0x0098(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
};

// ScriptStruct SlateCore.SliderStyle
// 0x0240 (0x0248 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        NormalBarImage;                                           // 0x0008(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        DisabledBarImage;                                         // 0x0098(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        NormalThumbImage;                                         // 0x0128(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        DisabledThumbImage;                                       // 0x01B8(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x0518 (0x0520 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	FSliderStyle                                       SliderStyle;                                              // 0x0008(0x0248) (Edit)
	FSlateBrush                                        HighVolumeImage;                                          // 0x0250(0x0090) (Edit)
	FSlateBrush                                        MidVolumeImage;                                           // 0x02E0(0x0090) (Edit)
	FSlateBrush                                        LowVolumeImage;                                           // 0x0370(0x0090) (Edit)
	FSlateBrush                                        NoVolumeImage;                                            // 0x0400(0x0090) (Edit)
	FSlateBrush                                        MutedImage;                                               // 0x0490(0x0090) (Edit)
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0AF8 (0x0B00 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	FEditableTextBoxStyle                              TextBoxStyle;                                             // 0x0008(0x0860) (Edit)
	FSlateFontInfo                                     ActiveFontInfo;                                           // 0x0868(0x0040) (Edit)
	FSlateBrush                                        UpArrowImage;                                             // 0x08A8(0x0090) (Edit)
	FSlateBrush                                        DownArrowImage;                                           // 0x0938(0x0090) (Edit)
	FSlateBrush                                        GlassImage;                                               // 0x09C8(0x0090) (Edit)
	FSlateBrush                                        ClearImage;                                               // 0x0A58(0x0090) (Edit)
	FMargin                                            ImagePadding;                                             // 0x0AE8(0x0010) (Edit)
	bool                                               bLeftAlignButtons;                                        // 0x0AF8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AF9(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0120 (0x0128 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        CollapsedImage;                                           // 0x0008(0x0090) (Edit)
	FSlateBrush                                        ExpandedImage;                                            // 0x0098(0x0090) (Edit)
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x01B0 (0x01B8 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	FSlateBrush                                        BackgroundImage;                                          // 0x0008(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        FillImage;                                                // 0x0098(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        MarqueeImage;                                             // 0x0128(0x0090) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x09C0 (0x09C8 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                     // 0x0008(0x0860) (Edit, BlueprintVisible)
	FTextBlockStyle                                    TextStyle;                                                // 0x0868(0x0160) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x0418 (0x0420 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	FButtonStyle                                       UnderlineStyle;                                           // 0x0008(0x02A8) (Edit, BlueprintVisible)
	FTextBlockStyle                                    TextStyle;                                                // 0x02B0(0x0160) (Edit, BlueprintVisible)
	FMargin                                            Padding;                                                  // 0x0410(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x05E8 (0x05F0 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	FSlateBrush                                        UncheckedImage;                                           // 0x0010(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        UncheckedHoveredImage;                                    // 0x00A0(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        UncheckedPressedImage;                                    // 0x0130(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        CheckedImage;                                             // 0x01C0(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        CheckedHoveredImage;                                      // 0x0250(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        CheckedPressedImage;                                      // 0x02E0(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        UndeterminedImage;                                        // 0x0370(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        UndeterminedHoveredImage;                                 // 0x0400(0x0090) (Edit, BlueprintVisible)
	FSlateBrush                                        UndeterminedPressedImage;                                 // 0x0490(0x0090) (Edit, BlueprintVisible)
	FMargin                                            Padding;                                                  // 0x0520(0x0010) (Edit, BlueprintVisible)
	FSlateColor                                        ForegroundColor;                                          // 0x0530(0x0030) (Edit, BlueprintVisible)
	FSlateColor                                        BorderBackgroundColor;                                    // 0x0560(0x0030) (Edit, BlueprintVisible)
	FSlateSound                                        CheckedSlateSound;                                        // 0x0590(0x0018) (Edit, BlueprintVisible)
	FSlateSound                                        UncheckedSlateSound;                                      // 0x05A8(0x0018) (Edit, BlueprintVisible)
	FSlateSound                                        HoveredSlateSound;                                        // 0x05C0(0x0018) (Edit, BlueprintVisible)
	FName                                              CheckedSound;                                             // 0x05D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	FName                                              UncheckedSound;                                           // 0x05E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	FName                                              HoveredSound;                                             // 0x05E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
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
