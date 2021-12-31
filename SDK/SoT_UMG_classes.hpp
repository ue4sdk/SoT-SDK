#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_UMG_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UMG.AsyncTaskDownloadImage
// 0x0020 (0x0048 - 0x0028)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	FScriptMulticastDelegate                           OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.AsyncTaskDownloadImage"));
		return ptr;
	}


	static UAsyncTaskDownloadImage* DownloadImage(const FString& URL);
};


// Class UMG.DragDropOperation
// 0x0060 (0x0088 - 0x0028)
class UDragDropOperation : public UObject
{
public:
	FString                                            Tag;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UObject*                                           payload;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWidget*                                           DefaultDragVisual;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDragPivot>                            Pivot;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	FVector2D                                          Offset;                                                   // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	FScriptMulticastDelegate                           OnDrop;                                                   // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnDragCancelled;                                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnDragged;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.DragDropOperation"));
		return ptr;
	}


	void Drop(const FPointerEvent& PointerEvent);
	void Dragged(const FPointerEvent& PointerEvent);
	void DragCancelled(const FPointerEvent& PointerEvent);
};


// Class UMG.MovieScene2DTransformSection
// 0x0350 (0x03E8 - 0x0098)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	FRichCurve                                         Translation[0x2];                                         // 0x00A0(0x0078)
	FRichCurve                                         Rotation;                                                 // 0x0190(0x0078)
	FRichCurve                                         Scale[0x2];                                               // 0x0208(0x0078)
	FRichCurve                                         Shear[0x2];                                               // 0x02F8(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.MovieScene2DTransformSection"));
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x00B0 - 0x00B0)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.MovieScene2DTransformTrack"));
		return ptr;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x01E8 (0x0280 - 0x0098)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	FRichCurve                                         TopCurve;                                                 // 0x00A0(0x0078)
	FRichCurve                                         LeftCurve;                                                // 0x0118(0x0078)
	FRichCurve                                         RightCurve;                                               // 0x0190(0x0078)
	FRichCurve                                         BottomCurve;                                              // 0x0208(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.MovieSceneMarginSection"));
		return ptr;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0x0000 (0x00B0 - 0x00B0)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.MovieSceneMarginTrack"));
		return ptr;
	}

};


// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0018 (0x00B0 - 0x0098)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	TArray<FName>                                      BrushPropertyNamePath;                                    // 0x0098(0x0010) (ZeroConstructor)
	FName                                              TrackName;                                                // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.MovieSceneWidgetMaterialTrack"));
		return ptr;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000 (0x0028 - 0x0028)
class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.NamedSlotInterface"));
		return ptr;
	}

};


// Class UMG.PropertyBinding
// 0x0020 (0x0048 - 0x0028)
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	FDynamicPropertyPath                               SourcePath;                                               // 0x0030(0x0010)
	FName                                              DestinationProperty;                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.PropertyBinding"));
		return ptr;
	}

};


// Class UMG.BoolBinding
// 0x0000 (0x0048 - 0x0048)
class UBoolBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.BoolBinding"));
		return ptr;
	}


	bool GetValue();
};


// Class UMG.BrushBinding
// 0x0008 (0x0050 - 0x0048)
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.BrushBinding"));
		return ptr;
	}


	FSlateBrush GetValue();
};


// Class UMG.CheckedStateBinding
// 0x0008 (0x0050 - 0x0048)
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.CheckedStateBinding"));
		return ptr;
	}


	TEnumAsByte<ECheckBoxState> GetValue();
};


// Class UMG.ColorBinding
// 0x0008 (0x0050 - 0x0048)
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ColorBinding"));
		return ptr;
	}


	FSlateColor GetSlateValue();
	FLinearColor GetLinearValue();
};


// Class UMG.FloatBinding
// 0x0000 (0x0048 - 0x0048)
class UFloatBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.FloatBinding"));
		return ptr;
	}


	float GetValue();
};


// Class UMG.Int32Binding
// 0x0000 (0x0048 - 0x0048)
class UInt32Binding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.Int32Binding"));
		return ptr;
	}


	int GetValue();
};


// Class UMG.MouseCursorBinding
// 0x0000 (0x0048 - 0x0048)
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.MouseCursorBinding"));
		return ptr;
	}


	TEnumAsByte<EMouseCursor> GetValue();
};


// Class UMG.TextBinding
// 0x0008 (0x0050 - 0x0048)
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.TextBinding"));
		return ptr;
	}


	FText GetTextValue();
	FString GetStringValue();
};


// Class UMG.VisibilityBinding
// 0x0000 (0x0048 - 0x0048)
class UVisibilityBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.VisibilityBinding"));
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetValue();
};


// Class UMG.WidgetBinding
// 0x0000 (0x0048 - 0x0048)
class UWidgetBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.WidgetBinding"));
		return ptr;
	}


	UWidget* GetValue();
};


// Class UMG.RichTextBlockDecorator
// 0x0008 (0x0030 - 0x0028)
class URichTextBlockDecorator : public UObject
{
public:
	bool                                               bReveal;                                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                RevealedIndex;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.RichTextBlockDecorator"));
		return ptr;
	}

};


// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.SlateBlueprintLibrary"));
		return ptr;
	}


	static void LocalToViewport(UObject* WorldContextObject, const FGeometry& Geometry, const FVector2D& LocalCoordinate, FVector2D* PixelPosition, FVector2D* ViewportPosition);
	static FVector2D LocalToAbsolute(const FGeometry& Geometry, const FVector2D& LocalCoordinate);
	static bool IsUnderLocation(const FGeometry& Geometry, const FVector2D& AbsoluteCoordinate);
	static FVector2D GetLocalSize(const FGeometry& Geometry);
	static void AbsoluteToViewport(UObject* WorldContextObject, const FVector2D& AbsoluteDesktopCoordinate, FVector2D* PixelPosition, FVector2D* ViewportPosition);
	static FVector2D AbsoluteToLocal(const FGeometry& Geometry, const FVector2D& AbsoluteCoordinate);
};


// Class UMG.Visual
// 0x0000 (0x0028 - 0x0028)
class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.Visual"));
		return ptr;
	}

};


// Class UMG.Widget
// 0x0110 (0x0138 - 0x0028)
class UWidget : public UVisual
{
public:
	bool                                               bIsVariable;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCreatedByConstructionScript;                             // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	UPanelSlot*                                        Slot;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	FScriptDelegate                                    bIsEnabledDelegate;                                       // 0x003C(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	FText                                              ToolTipText;                                              // 0x0050(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly)
	FScriptDelegate                                    ToolTipTextDelegate;                                      // 0x0088(0x0010) (ZeroConstructor, InstancedReference)
	UWidget*                                           ToolTipWidget;                                            // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    ToolTipWidgetDelegate;                                    // 0x00A0(0x0010) (ZeroConstructor, InstancedReference)
	TEnumAsByte<ESlateVisibility>                      Visiblity;                                                // 0x00B0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      Visibility;                                               // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	FScriptDelegate                                    VisibilityDelegate;                                       // 0x00B4(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      bOverride_Cursor : 1;                                     // 0x00C4(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	TEnumAsByte<EMouseCursor>                          Cursor;                                                   // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVolatile;                                              // 0x00C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00CA(0x0002) MISSED OFFSET
	FWidgetTransform                                   RenderTransform;                                          // 0x00CC(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly)
	FVector2D                                          RenderTransformPivot;                                     // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UWidgetNavigation*                                 Navigation;                                               // 0x00F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x30];                                      // 0x00F8(0x0030) MISSED OFFSET
	TArray<UPropertyBinding*>                          NativeBindings;                                           // 0x0128(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.Widget"));
		return ptr;
	}


	void SetVisibility(TEnumAsByte<ESlateVisibility> InVisibility);
	void SetUserFocus(APlayerController* PlayerController);
	void SetToolTipText(const FText& InToolTipText);
	void SetToolTip(UWidget* Widget);
	void SetRenderTranslation(const FVector2D& Translation);
	void SetRenderTransformPivot(const FVector2D& Pivot);
	void SetRenderTransform(const FWidgetTransform& InTransform);
	void SetRenderShear(const FVector2D& Shear);
	void SetRenderScale(const FVector2D& Scale);
	void SetRenderAngle(float Angle);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetCursor(TEnumAsByte<EMouseCursor> InCursor);
	void ResetCursor();
	void RemoveFromParent();
	FEventReply OnReply__DelegateSignature();
	FEventReply OnPointerEvent__DelegateSignature(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(APlayerController* PlayerController);
	bool HasUserFocus(APlayerController* PlayerController);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	UWidget* GetWidget__DelegateSignature();
	TEnumAsByte<ESlateVisibility> GetVisibility();
	FText GetText__DelegateSignature();
	TEnumAsByte<ESlateVisibility> GetSlateVisibility__DelegateSignature();
	FSlateColor GetSlateColor__DelegateSignature();
	FSlateBrush GetSlateBrush__DelegateSignature();
	UPanelWidget* GetParent();
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();
	FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	float GetFloat__DelegateSignature();
	FVector2D GetDesiredSize();
	TEnumAsByte<ECheckBoxState> GetCheckBoxState__DelegateSignature();
	bool GetBool__DelegateSignature();
	UWidget* GenerateWidgetForString__DelegateSignature(const FString& Item);
	UWidget* GenerateWidgetForObject__DelegateSignature(UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};


// Class UMG.UserWidget
// 0x00F8 (0x0230 - 0x0138)
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	FLinearColor                                       ColorAndOpacity;                                          // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    ColorAndOpacityDelegate;                                  // 0x0150(0x0010) (ZeroConstructor, InstancedReference)
	FSlateColor                                        ForegroundColor;                                          // 0x0160(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	FScriptDelegate                                    ForegroundColorDelegate;                                  // 0x0190(0x0010) (ZeroConstructor, InstancedReference)
	bool                                               bSupportsKeyboardFocus;                                   // 0x01A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	UWidgetTree*                                       WidgetTree;                                               // 0x01A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<UUMGSequencePlayer*>                        ActiveSequencePlayers;                                    // 0x01B0(0x0010) (ZeroConstructor, Transient)
	TArray<UUMGSequencePlayer*>                        StoppedSequencePlayers;                                   // 0x01C0(0x0010) (ZeroConstructor, Transient)
	TArray<FNamedSlotBinding>                          NamedSlotBindings;                                        // 0x01D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x01E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.UserWidget"));
		return ptr;
	}


	void Tick(const FGeometry& MyGeometry, float InDeltaTime);
	void StopAnimation(UWidgetAnimation* InAnimation);
	void SetPositionInViewport(const FVector2D& Position, bool bRemoveDPIScale);
	void SetOwningLocalPlayer(ULocalPlayer* LocalPlayer);
	void SetForegroundColor(const FSlateColor& InForegroundColor);
	void SetDesiredSizeInViewport(const FVector2D& Size);
	void SetColorAndOpacity(const FLinearColor& InColorAndOpacity);
	void SetAnchorsInViewport(const FAnchors& Anchors);
	void SetAlignmentInViewport(const FVector2D& Alignment);
	void RemoveFromViewport();
	void PlaySound(USoundBase* SoundToPlay);
	void PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> Playmode);
	float PauseAnimation(UWidgetAnimation* InAnimation);
	FEventReply OnTouchStarted(const FGeometry& MyGeometry, const FPointerEvent& InTouchEvent);
	FEventReply OnTouchMoved(const FGeometry& MyGeometry, const FPointerEvent& InTouchEvent);
	FEventReply OnTouchGesture(const FGeometry& MyGeometry, const FPointerEvent& GestureEvent);
	FEventReply OnTouchEnded(const FGeometry& MyGeometry, const FPointerEvent& InTouchEvent);
	FEventReply OnPreviewMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	FEventReply OnPreviewKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);
	void OnPaint(FPaintContext* Context);
	FEventReply OnMouseWheel(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	FEventReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	void OnMouseLeave(const FPointerEvent& MouseEvent);
	void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	FEventReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	FEventReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	FEventReply OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent);
	FEventReply OnMotionDetected(const FGeometry& MyGeometry, const FMotionEvent& InMotionEvent);
	FEventReply OnKeyUp(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);
	FEventReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);
	FEventReply OnKeyChar(const FGeometry& MyGeometry, const FCharacterEvent& InCharacterEvent);
	FEventReply OnFocusReceived(const FGeometry& MyGeometry, const FFocusEvent& InFocusEvent);
	void OnFocusLost(const FFocusEvent& InFocusEvent);
	bool OnDrop(const FGeometry& MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation* Operation);
	bool OnDragOver(const FGeometry& MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation* Operation);
	void OnDragLeave(const FPointerEvent& PointerEvent, UDragDropOperation* Operation);
	void OnDragEnter(const FGeometry& MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation* Operation);
	void OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation** Operation);
	void OnDragCancelled(const FPointerEvent& PointerEvent, UDragDropOperation* Operation);
	FEventReply OnControllerButtonReleased(const FGeometry& MyGeometry, const FControllerEvent& ControllerEvent);
	FEventReply OnControllerButtonPressed(const FGeometry& MyGeometry, const FControllerEvent& ControllerEvent);
	FEventReply OnControllerAnalogValueChanged(const FGeometry& MyGeometry, const FControllerEvent& ControllerEvent);
	void OnAnimationStarted(UWidgetAnimation* Animation);
	void OnAnimationFinished(UWidgetAnimation* Animation);
	FEventReply OnAnalogValueChanged(const FGeometry& MyGeometry, const FAnalogInputEvent& InAnalogInputEvent);
	bool IsInViewport();
	bool IsInteractable();
	APawn* GetOwningPlayerPawn();
	APlayerController* GetOwningPlayer();
	ULocalPlayer* GetOwningLocalPlayer();
	bool GetIsVisible();
	void Destruct();
	void Construct();
	void AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};


// Class UMG.UMGSequencePlayer
// 0x05A0 (0x05C8 - 0x0028)
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x368];                                     // 0x0028(0x0368) MISSED OFFSET
	UWidgetAnimation*                                  Animation;                                                // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x230];                                     // 0x0398(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.UMGSequencePlayer"));
		return ptr;
	}

};


// Class UMG.PanelSlot
// 0x0010 (0x0038 - 0x0028)
class UPanelSlot : public UVisual
{
public:
	UPanelWidget*                                      Parent;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	UWidget*                                           Content;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.PanelSlot"));
		return ptr;
	}

};


// Class UMG.BorderSlot
// 0x0030 (0x0068 - 0x0038)
class UBorderSlot : public UPanelSlot
{
public:
	FMargin                                            Padding;                                                  // 0x0038(0x0010) (Edit)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x004A(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.BorderSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ButtonSlot
// 0x0030 (0x0068 - 0x0038)
class UButtonSlot : public UPanelSlot
{
public:
	FMargin                                            Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x004A(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ButtonSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.CanvasPanelSlot
// 0x0038 (0x0070 - 0x0038)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	FAnchorData                                        LayoutData;                                               // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoSize;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.CanvasPanelSlot"));
		return ptr;
	}


	void SetZOrder(int InZOrder);
	void SetSize(const FVector2D& InSize);
	void SetPosition(const FVector2D& InPosition);
	void SetOffsets(const FMargin& InOffset);
	void SetMinimum(const FVector2D& InMinimumAnchors);
	void SetMaximum(const FVector2D& InMaximumAnchors);
	void SetLayout(const FAnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const FAnchors& InAnchors);
	void SetAlignment(const FVector2D& InAlignment);
	int GetZOrder();
	FVector2D GetSize();
	FVector2D GetPosition();
	FMargin GetOffsets();
	FAnchorData GetLayout();
	bool GetAutoSize();
	FAnchors GetAnchors();
	FVector2D GetAlignment();
};


// Class UMG.GridSlot
// 0x0028 (0x0060 - 0x0038)
class UGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RowSpan;                                                  // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ColumnSpan;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FVector2D                                          Nudge;                                                    // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.GridSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
};


// Class UMG.HorizontalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	FMargin                                            Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	FSlateChildSize                                    Size;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.HorizontalBoxSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const FSlateChildSize& InSize);
	void SetPadding(const FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.OverlaySlot
// 0x0020 (0x0058 - 0x0038)
class UOverlaySlot : public UPanelSlot
{
public:
	FMargin                                            Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.OverlaySlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SafeZoneSlot
// 0x0018 (0x0050 - 0x0038)
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                   // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003B(0x0001) MISSED OFFSET
	FMargin                                            Padding;                                                  // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.SafeZoneSlot"));
		return ptr;
	}

};


// Class UMG.ScaleBoxSlot
// 0x0030 (0x0068 - 0x0038)
class UScaleBoxSlot : public UPanelSlot
{
public:
	FMargin                                            Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x004A(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ScaleBoxSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ScrollBoxSlot
// 0x0020 (0x0058 - 0x0038)
class UScrollBoxSlot : public UPanelSlot
{
public:
	FMargin                                            Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0049(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ScrollBoxSlot"));
		return ptr;
	}


	void SetPadding(const FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SizeBoxSlot
// 0x0030 (0x0068 - 0x0038)
class USizeBoxSlot : public UPanelSlot
{
public:
	FMargin                                            Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x004A(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.SizeBoxSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.UniformGridSlot
// 0x0018 (0x0050 - 0x0038)
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.UniformGridSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
};


// Class UMG.VerticalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	FMargin                                            Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	FSlateChildSize                                    Size;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.VerticalBoxSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const FSlateChildSize& InSize);
	void SetPadding(const FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WidgetSwitcherSlot
// 0x0020 (0x0058 - 0x0038)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	FMargin                                            Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.WidgetSwitcherSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WrapBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UWrapBoxSlot : public UPanelSlot
{
public:
	FMargin                                            Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bFillEmptySpace;                                          // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              FillSpanWhenLessThan;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.WrapBoxSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};


// Class UMG.CircularThrobber
// 0x00C0 (0x01F8 - 0x0138)
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	USlateBrushAsset*                                  PieceImage;                                               // 0x0148(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	FSlateBrush                                        Image;                                                    // 0x0150(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x18];                                      // 0x01E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.CircularThrobber"));
		return ptr;
	}


	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
};


// Class UMG.ComboBox
// 0x0038 (0x0170 - 0x0138)
class UComboBox : public UWidget
{
public:
	TArray<UObject*>                                   Items;                                                    // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	FScriptDelegate                                    OnGenerateWidgetEvent;                                    // 0x0148(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ComboBox"));
		return ptr;
	}

};


// Class UMG.ComboBoxString
// 0x04E8 (0x0620 - 0x0138)
class UComboBoxString : public UWidget
{
public:
	TArray<FString>                                    DefaultOptions;                                           // 0x0138(0x0010) (Edit, ZeroConstructor)
	FString                                            SelectedOption;                                           // 0x0148(0x0010) (Edit, ZeroConstructor)
	FComboBoxStyle                                     WidgetStyle;                                              // 0x0158(0x0428) (Edit, BlueprintVisible)
	FMargin                                            ContentPadding;                                           // 0x0580(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MaxListHeight;                                            // 0x0590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasDownArrow;                                             // 0x0594(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	FScriptDelegate                                    OnGenerateWidgetEvent;                                    // 0x0598(0x0010) (Edit, ZeroConstructor, InstancedReference)
	FScriptMulticastDelegate                           OnSelectionChanged;                                       // 0x05A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnOpening;                                                // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x58];                                      // 0x05C8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ComboBoxString"));
		return ptr;
	}


	void SetSelectedOption(const FString& Option);
	bool RemoveOption(const FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	FString GetSelectedOption();
	int GetOptionCount();
	FString GetOptionAtIndex(int Index);
	int FindOptionIndex(const FString& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const FString& Option);
};


// Class UMG.EditableText
// 0x0390 (0x04C8 - 0x0138)
class UEditableText : public UWidget
{
public:
	FText                                              Text;                                                     // 0x0138(0x0038) (Edit)
	FScriptDelegate                                    TextDelegate;                                             // 0x0170(0x0010) (ZeroConstructor, InstancedReference)
	FText                                              HintText;                                                 // 0x0180(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly)
	FScriptDelegate                                    HintTextDelegate;                                         // 0x01B8(0x0010) (ZeroConstructor, InstancedReference)
	FEditableTextStyle                                 WidgetStyle;                                              // 0x01C8(0x0228) (Edit, BlueprintVisible)
	USlateWidgetStyleAsset*                            Style;                                                    // 0x03F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  BackgroundImageSelected;                                  // 0x03F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  BackgroundImageComposing;                                 // 0x0400(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  CaretImage;                                               // 0x0408(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	FSlateFontInfo                                     Font;                                                     // 0x0410(0x0040) (Deprecated)
	FSlateColor                                        ColorAndOpacity;                                          // 0x0450(0x0030) (Deprecated)
	bool                                               IsReadOnly;                                               // 0x0480(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x0481(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0482(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x0484(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0488(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0489(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x048A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x048B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x048C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	FScriptMulticastDelegate                           OnTextChanged;                                            // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnTextCommitted;                                          // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x04B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.EditableText"));
		return ptr;
	}


	void SetText(const FText& InText);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const FText& InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
	FText GetText();
};


// Class UMG.EditableTextBox
// 0x09C0 (0x0AF8 - 0x0138)
class UEditableTextBox : public UWidget
{
public:
	FText                                              Text;                                                     // 0x0138(0x0038) (Edit)
	FScriptDelegate                                    TextDelegate;                                             // 0x0170(0x0010) (ZeroConstructor, InstancedReference)
	FEditableTextBoxStyle                              WidgetStyle;                                              // 0x0180(0x0860) (Edit, BlueprintVisible)
	USlateWidgetStyleAsset*                            Style;                                                    // 0x09E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	FText                                              HintText;                                                 // 0x09E8(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly)
	FScriptDelegate                                    HintTextDelegate;                                         // 0x0A20(0x0010) (ZeroConstructor, InstancedReference)
	FSlateFontInfo                                     Font;                                                     // 0x0A30(0x0040) (Deprecated)
	FLinearColor                                       ForegroundColor;                                          // 0x0A70(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	FLinearColor                                       BackgroundColor;                                          // 0x0A80(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	FLinearColor                                       ReadOnlyForegroundColor;                                  // 0x0A90(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               IsReadOnly;                                               // 0x0AA0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x0AA1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0AA2(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x0AA4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FMargin                                            Padding;                                                  // 0x0AA8(0x0010) (Deprecated)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0AB8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0AB9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x0ABA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0ABB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0ABC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0ABD(0x0003) MISSED OFFSET
	FScriptMulticastDelegate                           OnTextChanged;                                            // 0x0AC0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnTextCommitted;                                          // 0x0AD0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0AE0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.EditableTextBox"));
		return ptr;
	}


	void SetText(const FText& InText);
	void SetError(const FText& InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
	FText GetText();
	void ClearError();
};


// Class UMG.ExpandableArea
// 0x0058 (0x0190 - 0x0138)
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	bool                                               bIsExpanded;                                              // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	float                                              MaxHeight;                                                // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FMargin                                            AreaPadding;                                              // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	FScriptMulticastDelegate                           OnExpansionChanged;                                       // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	UWidget*                                           HeaderContent;                                            // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	UWidget*                                           BodyContent;                                              // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0178(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ExpandableArea"));
		return ptr;
	}


	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};


// Class UMG.Image
// 0x00F0 (0x0228 - 0x0138)
class UImage : public UWidget
{
public:
	USlateBrushAsset*                                  Image;                                                    // 0x0138(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	FSlateBrush                                        Brush;                                                    // 0x0140(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	FScriptDelegate                                    BrushDelegate;                                            // 0x01D0(0x0010) (ZeroConstructor, InstancedReference)
	FLinearColor                                       ColorAndOpacity;                                          // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    ColorAndOpacityDelegate;                                  // 0x01F0(0x0010) (ZeroConstructor, InstancedReference)
	FScriptDelegate                                    OnMouseButtonDownEvent;                                   // 0x0200(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0210(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.Image"));
		return ptr;
	}


	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(const FLinearColor& InColorAndOpacity);
	void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromMaterial(UMaterialInterface* Material);
	void SetBrushFromAsset(USlateBrushAsset* Asset);
	void SetBrush(const FSlateBrush& InBrush);
	UMaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.MultiLineEditableText
// 0x0218 (0x0350 - 0x0138)
class UMultiLineEditableText : public UWidget
{
public:
	FText                                              Text;                                                     // 0x0138(0x0038) (Edit)
	FTextBlockStyle                                    WidgetStyle;                                              // 0x0170(0x0160) (Edit, BlueprintVisible)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoWrapText;                                            // 0x02D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02D2(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FSlateFontInfo                                     Font;                                                     // 0x02D8(0x0040) (Deprecated)
	FScriptMulticastDelegate                           OnTextChanged;                                            // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnTextCommitted;                                          // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0338(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.MultiLineEditableText"));
		return ptr;
	}


	void SetText(const FText& InText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const FText& Text);
	FText GetText();
};


// Class UMG.MultiLineEditableTextBox
// 0x0AB0 (0x0BE8 - 0x0138)
class UMultiLineEditableTextBox : public UWidget
{
public:
	FText                                              Text;                                                     // 0x0138(0x0038) (Edit)
	FEditableTextBoxStyle                              WidgetStyle;                                              // 0x0170(0x0860) (Edit, BlueprintVisible)
	FTextBlockStyle                                    TextStyle;                                                // 0x09D0(0x0160) (Edit, BlueprintVisible)
	USlateWidgetStyleAsset*                            Style;                                                    // 0x0B30(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0B38(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoWrapText;                                            // 0x0B39(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0B3A(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0B3C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FSlateFontInfo                                     Font;                                                     // 0x0B40(0x0040) (Deprecated)
	FLinearColor                                       ForegroundColor;                                          // 0x0B80(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	FLinearColor                                       BackgroundColor;                                          // 0x0B90(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	FLinearColor                                       ReadOnlyForegroundColor;                                  // 0x0BA0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	FScriptMulticastDelegate                           OnTextChanged;                                            // 0x0BB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnTextCommitted;                                          // 0x0BC0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0BD0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.MultiLineEditableTextBox"));
		return ptr;
	}


	void SetText(const FText& InText);
	void SetError(const FText& InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
	FText GetText();
};


// Class UMG.NativeWidgetHost
// 0x0018 (0x0150 - 0x0138)
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0138(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.NativeWidgetHost"));
		return ptr;
	}

};


// Class UMG.PanelWidget
// 0x0018 (0x0150 - 0x0138)
class UPanelWidget : public UWidget
{
public:
	TArray<UPanelSlot*>                                Slots;                                                    // 0x0138(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.PanelWidget"));
		return ptr;
	}


	bool RemoveChildAt(int Index);
	bool RemoveChild(UWidget* Content);
	bool HasChild(UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(UWidget* Content);
	UWidget* GetChildAt(int Index);
	void ClearChildren();
	UPanelSlot* AddChild(UWidget* Content);
};


// Class UMG.CanvasPanel
// 0x0018 (0x0168 - 0x0150)
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0150(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.CanvasPanel"));
		return ptr;
	}


	UCanvasPanelSlot* AddChildToCanvas(UWidget* Content);
};


// Class UMG.ContentWidget
// 0x0000 (0x0150 - 0x0150)
class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ContentWidget"));
		return ptr;
	}


	UPanelSlot* GetContentSlot();
};


// Class UMG.Border
// 0x0160 (0x02B0 - 0x0150)
class UBorder : public UContentWidget
{
public:
	FLinearColor                                       ContentColorAndOpacity;                                   // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    ContentColorAndOpacityDelegate;                           // 0x0160(0x0010) (ZeroConstructor, InstancedReference)
	FMargin                                            Padding;                                                  // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0180(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0181(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0182(0x0006) MISSED OFFSET
	FSlateBrush                                        Background;                                               // 0x0188(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	FScriptDelegate                                    BackgroundDelegate;                                       // 0x0218(0x0010) (ZeroConstructor, InstancedReference)
	FLinearColor                                       BrushColor;                                               // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    BrushColorDelegate;                                       // 0x0238(0x0010) (ZeroConstructor, InstancedReference)
	bool                                               bShowEffectWhenDisabled;                                  // 0x0248(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	FScriptDelegate                                    OnMouseButtonDownEvent;                                   // 0x024C(0x0010) (Edit, ZeroConstructor, InstancedReference)
	FScriptDelegate                                    OnMouseButtonUpEvent;                                     // 0x025C(0x0010) (Edit, ZeroConstructor, InstancedReference)
	FScriptDelegate                                    OnMouseMoveEvent;                                         // 0x026C(0x0010) (Edit, ZeroConstructor, InstancedReference)
	FScriptDelegate                                    OnMouseDoubleClickEvent;                                  // 0x027C(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x028C(0x001C) MISSED OFFSET
	USlateBrushAsset*                                  Brush;                                                    // 0x02A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.Border"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetContentColorAndOpacity(const FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(UTexture2D* Texture);
	void SetBrushFromMaterial(UMaterialInterface* Material);
	void SetBrushFromAsset(USlateBrushAsset* Asset);
	void SetBrushColor(const FLinearColor& InBrushColor);
	void SetBrush(const FSlateBrush& InBrush);
	UMaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.Button
// 0x0320 (0x0470 - 0x0150)
class UButton : public UContentWidget
{
public:
	USlateWidgetStyleAsset*                            Style;                                                    // 0x0150(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	FButtonStyle                                       WidgetStyle;                                              // 0x0158(0x02A8) (Edit, BlueprintVisible)
	FLinearColor                                       ColorAndOpacity;                                          // 0x0400(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FLinearColor                                       BackgroundColor;                                          // 0x0410(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0420(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0421(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0422(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0423(0x0005) MISSED OFFSET
	FScriptMulticastDelegate                           OnClicked;                                                // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnPressed;                                                // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnReleased;                                               // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0458(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.Button"));
		return ptr;
	}


	void SetColorAndOpacity(const FLinearColor& InColorAndOpacity);
	void SetBackgroundColor(const FLinearColor& InBackgroundColor);
	bool IsPressed();
};


// Class UMG.CheckBox
// 0x06C8 (0x0818 - 0x0150)
class UCheckBox : public UContentWidget
{
public:
	TEnumAsByte<ECheckBoxState>                        CheckedState;                                             // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	FScriptDelegate                                    CheckedStateDelegate;                                     // 0x0154(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	FCheckBoxStyle                                     WidgetStyle;                                              // 0x0168(0x05F0) (Edit, BlueprintVisible)
	USlateWidgetStyleAsset*                            Style;                                                    // 0x0758(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  UncheckedImage;                                           // 0x0760(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  UncheckedHoveredImage;                                    // 0x0768(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  UncheckedPressedImage;                                    // 0x0770(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  CheckedImage;                                             // 0x0778(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  CheckedHoveredImage;                                      // 0x0780(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  CheckedPressedImage;                                      // 0x0788(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  UndeterminedImage;                                        // 0x0790(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  UndeterminedHoveredImage;                                 // 0x0798(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  UndeterminedPressedImage;                                 // 0x07A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x07A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07A9(0x0003) MISSED OFFSET
	FMargin                                            Padding;                                                  // 0x07AC(0x0010) (Deprecated)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07BC(0x0004) MISSED OFFSET
	FSlateColor                                        BorderBackgroundColor;                                    // 0x07C0(0x0030) (Deprecated)
	FScriptMulticastDelegate                           OnCheckStateChanged;                                      // 0x07F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0800(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.CheckBox"));
		return ptr;
	}


	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(TEnumAsByte<ECheckBoxState> InCheckedState);
	bool IsPressed();
	bool IsChecked();
	TEnumAsByte<ECheckBoxState> GetCheckedState();
};


// Class UMG.InvalidationBox
// 0x0020 (0x0170 - 0x0150)
class UInvalidationBox : public UContentWidget
{
public:
	bool                                               CacheRelativeTransforms;                                  // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0151(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.InvalidationBox"));
		return ptr;
	}


	void InvalidateCache();
};


// Class UMG.MenuAnchor
// 0x0048 (0x0198 - 0x0150)
class UMenuAnchor : public UContentWidget
{
public:
	UClass*                                            MenuClass;                                                // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    OnGetMenuContentEvent;                                    // 0x0158(0x0010) (Edit, ZeroConstructor, InstancedReference)
	TEnumAsByte<EMenuPlacement>                        Placement;                                                // 0x0168(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	FScriptMulticastDelegate                           OnMenuOpenChanged;                                        // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0180(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.MenuAnchor"));
		return ptr;
	}


	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	FVector2D GetMenuPosition();
	void Close();
};


// Class UMG.NamedSlot
// 0x0018 (0x0168 - 0x0150)
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0150(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.NamedSlot"));
		return ptr;
	}

};


// Class UMG.SafeZone
// 0x0018 (0x0168 - 0x0150)
class USafeZone : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0150(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.SafeZone"));
		return ptr;
	}

};


// Class UMG.ScaleBox
// 0x0020 (0x0170 - 0x0150)
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<EStretchDirection>                     StretchDirection;                                         // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStretch>                              Stretch;                                                  // 0x0151(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
	float                                              UserSpecifiedScale;                                       // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ScaleBox"));
		return ptr;
	}

};


// Class UMG.SizeBox
// 0x0038 (0x0188 - 0x0150)
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      bOverride_WidthOverride : 1;                              // 0x0150(0x0001)
	unsigned char                                      bOverride_HeightOverride : 1;                             // 0x0150(0x0001)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                            // 0x0150(0x0001)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                           // 0x0150(0x0001)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                            // 0x0150(0x0001)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                           // 0x0150(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              WidthOverride;                                            // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeightOverride;                                           // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredWidth;                                          // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredHeight;                                         // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredWidth;                                          // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredHeight;                                         // 0x0168(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x016C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.SizeBox"));
		return ptr;
	}


	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearHeightOverride();
};


// Class UMG.Viewport
// 0x0040 (0x0190 - 0x0150)
class UViewport : public UContentWidget
{
public:
	FLinearColor                                       BackgroundColor;                                          // 0x0150(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0160(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.Viewport"));
		return ptr;
	}


	AActor* Spawn(UClass* ActorClass);
	void SetViewRotation(const FRotator& Rotation);
	void SetViewLocation(const FVector& Location);
	FRotator GetViewRotation();
	UWorld* GetViewportWorld();
	FVector GetViewLocation();
};


// Class UMG.GridPanel
// 0x0038 (0x0188 - 0x0150)
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                               // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      RowFill;                                                  // 0x0160(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0170(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.GridPanel"));
		return ptr;
	}


	UGridSlot* AddChildToGrid(UWidget* Content);
};


// Class UMG.HorizontalBox
// 0x0018 (0x0168 - 0x0150)
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0150(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.HorizontalBox"));
		return ptr;
	}


	UHorizontalBoxSlot* AddChildToHorizontalBox(UWidget* Content);
};


// Class UMG.Overlay
// 0x0018 (0x0168 - 0x0150)
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0150(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.Overlay"));
		return ptr;
	}


	UOverlaySlot* AddChildToOverlay(UWidget* Content);
};


// Class UMG.ScrollBox
// 0x07A0 (0x08F0 - 0x0150)
class UScrollBox : public UPanelWidget
{
public:
	FScrollBoxStyle                                    WidgetStyle;                                              // 0x0150(0x0248) (Edit, BlueprintVisible)
	FScrollBarStyle                                    WidgetBarStyle;                                           // 0x0398(0x0518) (Edit, BlueprintVisible)
	USlateWidgetStyleAsset*                            Style;                                                    // 0x08B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateWidgetStyleAsset*                            BarStyle;                                                 // 0x08B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x08C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      ScrollBarVisibility;                                      // 0x08C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConsumeMouseWheel>                    ConsumeMouseWheel;                                        // 0x08C2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x08C3(0x0001) MISSED OFFSET
	FVector2D                                          ScrollbarThickness;                                       // 0x08C4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysShowScrollbar;                                      // 0x08CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x23];                                      // 0x08CD(0x0023) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ScrollBox"));
		return ptr;
	}


	void SetScrollOffset(float NewScrollOffset);
	void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll);
	void ScrollToStart();
	void ScrollToEnd();
	float GetScrollOffset();
};


// Class UMG.UniformGridPanel
// 0x0030 (0x0180 - 0x0150)
class UUniformGridPanel : public UPanelWidget
{
public:
	FMargin                                            SlotPadding;                                              // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MinDesiredSlotWidth;                                      // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSlotHeight;                                     // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0168(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.UniformGridPanel"));
		return ptr;
	}


	void SetSlotPadding(const FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	UUniformGridSlot* AddChildToUniformGrid(UWidget* Content);
};


// Class UMG.VerticalBox
// 0x0018 (0x0168 - 0x0150)
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0150(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.VerticalBox"));
		return ptr;
	}


	UVerticalBoxSlot* AddChildToVerticalBox(UWidget* Content);
};


// Class UMG.WidgetSwitcher
// 0x0020 (0x0170 - 0x0150)
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0154(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.WidgetSwitcher"));
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(UWidget* Widget);
	UWidget* GetWidgetAtIndex(int Index);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
};


// Class UMG.WrapBox
// 0x0020 (0x0170 - 0x0150)
class UWrapBox : public UPanelWidget
{
public:
	FVector2D                                          InnerSlotPadding;                                         // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.WrapBox"));
		return ptr;
	}


	void SetInnerSlotPadding(const FVector2D& InPadding);
	UWrapBoxSlot* AddChildWrapBox(UWidget* Content);
};


// Class UMG.ProgressBar
// 0x0228 (0x0360 - 0x0138)
class UProgressBar : public UWidget
{
public:
	FProgressBarStyle                                  WidgetStyle;                                              // 0x0138(0x01B8) (Edit, BlueprintVisible)
	USlateWidgetStyleAsset*                            Style;                                                    // 0x02F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  BackgroundImage;                                          // 0x02F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  FillImage;                                                // 0x0300(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	USlateBrushAsset*                                  MarqueeImage;                                             // 0x0308(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Percent;                                                  // 0x0310(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                              // 0x0314(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMarquee;                                               // 0x0315(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0316(0x0002) MISSED OFFSET
	FScriptDelegate                                    PercentDelegate;                                          // 0x0318(0x0010) (ZeroConstructor, InstancedReference)
	FLinearColor                                       FillColorAndOpacity;                                      // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    FillColorAndOpacityDelegate;                              // 0x0338(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0348(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ProgressBar"));
		return ptr;
	}


	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const FLinearColor& InColor);
};


// Class UMG.RichTextBlock
// 0x0240 (0x0378 - 0x0138)
class URichTextBlock : public UWidget
{
public:
	FText                                              Text;                                                     // 0x0138(0x0038) (Edit)
	FScriptDelegate                                    TextDelegate;                                             // 0x0170(0x0010) (ZeroConstructor, InstancedReference)
	FSlateFontInfo                                     Font;                                                     // 0x0180(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	FLinearColor                                       Color;                                                    // 0x01C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x01D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x01D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01D2(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x01D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FMargin                                            Margin;                                                   // 0x01D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              LineHeightPercentage;                                     // 0x01E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	TArray<URichTextBlockDecorator*>                   Decorators;                                               // 0x01F0(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x178];                                     // 0x0200(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.RichTextBlock"));
		return ptr;
	}

};


// Class UMG.ScrollBar
// 0x0548 (0x0680 - 0x0138)
class UScrollBar : public UWidget
{
public:
	FScrollBarStyle                                    WidgetStyle;                                              // 0x0138(0x0518) (Edit, BlueprintVisible)
	USlateWidgetStyleAsset*                            Style;                                                    // 0x0650(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bAlwaysShowScrollbar;                                     // 0x0658(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0659(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x065A(0x0002) MISSED OFFSET
	FVector2D                                          Thickness;                                                // 0x065C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0664(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ScrollBar"));
		return ptr;
	}


	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};


// Class UMG.Slider
// 0x02D0 (0x0408 - 0x0138)
class USlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    ValueDelegate;                                            // 0x013C(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	FSliderStyle                                       WidgetStyle;                                              // 0x0150(0x0248) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	FLinearColor                                       SliderBarColor;                                           // 0x039C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FLinearColor                                       SliderHandleColor;                                        // 0x03AC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x03BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x03BD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03BE(0x0002) MISSED OFFSET
	FScriptMulticastDelegate                           OnMouseCaptureBegin;                                      // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnMouseCaptureEnd;                                        // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnValueChanged;                                           // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x18];                                      // 0x03F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.Slider"));
		return ptr;
	}


	void SetValue(float InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
};


// Class UMG.Spacer
// 0x0020 (0x0158 - 0x0138)
class USpacer : public UWidget
{
public:
	FVector2D                                          Size;                                                     // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0140(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.Spacer"));
		return ptr;
	}


	void SetSize(const FVector2D& InSize);
};


// Class UMG.SpinBox
// 0x0428 (0x0560 - 0x0138)
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                    // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    ValueDelegate;                                            // 0x013C(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	FSpinBoxStyle                                      WidgetStyle;                                              // 0x0150(0x0318) (Edit, BlueprintVisible)
	USlateWidgetStyleAsset*                            Style;                                                    // 0x0468(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Delta;                                                    // 0x0470(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SliderExponent;                                           // 0x0474(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FSlateFontInfo                                     Font;                                                     // 0x0478(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MinDesiredWidth;                                          // 0x04B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x04BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x04BD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04BE(0x0002) MISSED OFFSET
	FSlateColor                                        ForegroundColor;                                          // 0x04C0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	FScriptMulticastDelegate                           OnValueChanged;                                           // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnValueCommitted;                                         // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnBeginSliderMovement;                                    // 0x0510(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnEndSliderMovement;                                      // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bOverride_MinValue : 1;                                   // 0x0530(0x0001)
	unsigned char                                      bOverride_MaxValue : 1;                                   // 0x0530(0x0001)
	unsigned char                                      bOverride_MinSliderValue : 1;                             // 0x0530(0x0001)
	unsigned char                                      bOverride_MaxSliderValue : 1;                             // 0x0530(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x0534(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0538(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSliderValue;                                           // 0x053C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSliderValue;                                           // 0x0540(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1C];                                      // 0x0544(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.SpinBox"));
		return ptr;
	}


	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetForegroundColor(const FSlateColor& InForegroundColor);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};


// Class UMG.TableViewBase
// 0x0000 (0x0138 - 0x0138)
class UTableViewBase : public UWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.TableViewBase"));
		return ptr;
	}


	UWidget* OnGenerateRowUObject__DelegateSignature(UObject* Item);
};


// Class UMG.ListView
// 0x0048 (0x0180 - 0x0138)
class UListView : public UTableViewBase
{
public:
	float                                              ItemHeight;                                               // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	TArray<UObject*>                                   Items;                                                    // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	FScriptDelegate                                    OnGenerateRowEvent;                                       // 0x0154(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x0164(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.ListView"));
		return ptr;
	}

};


// Class UMG.TileView
// 0x0048 (0x0180 - 0x0138)
class UTileView : public UTableViewBase
{
public:
	float                                              ItemWidth;                                                // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ItemHeight;                                               // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<UObject*>                                   Items;                                                    // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	FScriptDelegate                                    OnGenerateTileEvent;                                      // 0x0154(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0164(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.TileView"));
		return ptr;
	}


	void SetItemWidth(float Width);
	void SetItemHeight(float Height);
	void RequestListRefresh();
};


// Class UMG.TextBlock
// 0x0130 (0x0268 - 0x0138)
class UTextBlock : public UWidget
{
public:
	USlateWidgetStyleAsset*                            Style;                                                    // 0x0138(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	FText                                              Text;                                                     // 0x0140(0x0038) (Edit)
	FScriptDelegate                                    TextDelegate;                                             // 0x0178(0x0010) (ZeroConstructor, InstancedReference)
	FSlateColor                                        ColorAndOpacity;                                          // 0x0188(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	FScriptDelegate                                    ColorAndOpacityDelegate;                                  // 0x01B8(0x0010) (ZeroConstructor, InstancedReference)
	FSlateFontInfo                                     Font;                                                     // 0x01C8(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	FVector2D                                          ShadowOffset;                                             // 0x0208(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FLinearColor                                       ShadowColorAndOpacity;                                    // 0x0210(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    ShadowColorAndOpacityDelegate;                            // 0x0220(0x0010) (ZeroConstructor, InstancedReference)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0230(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x0231(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0232(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredWidth;                                          // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FMargin                                            Margin;                                                   // 0x023C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              LineHeightPercentage;                                     // 0x024C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0250(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.TextBlock"));
		return ptr;
	}


	void SetText(const FText& InText);
	void SetShadowOffset(const FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetFont(const FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const FSlateColor& InColorAndOpacity);
	FText GetText();
};


// Class UMG.Throbber
// 0x00B8 (0x01F0 - 0x0138)
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateHorizontally;                                     // 0x013C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateVertically;                                       // 0x013D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateOpacity;                                          // 0x013E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x013F(0x0001) MISSED OFFSET
	USlateBrushAsset*                                  PieceImage;                                               // 0x0140(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	FSlateBrush                                        Image;                                                    // 0x0148(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x18];                                      // 0x01D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.Throbber"));
		return ptr;
	}


	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};


// Class UMG.WidgetAnimation
// 0x0038 (0x02E0 - 0x02A8)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	FScriptMulticastDelegate                           OnAnimationStarted;                                       // 0x02A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnAnimationFinished;                                      // 0x02B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	UMovieScene*                                       MovieScene;                                               // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<FWidgetAnimationBinding>                    AnimationBindings;                                        // 0x02D0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.WidgetAnimation"));
		return ptr;
	}


	float GetStartTime();
	float GetEndTime();
};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x0038 (0x0260 - 0x0228)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	UWidgetTree*                                       WidgetTree;                                               // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<FDelegateRuntimeBinding>                    Bindings;                                                 // 0x0230(0x0010) (ZeroConstructor)
	TArray<UWidgetAnimation*>                          Animations;                                               // 0x0240(0x0010) (ZeroConstructor)
	TArray<FName>                                      NamedSlots;                                               // 0x0250(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.WidgetBlueprintGeneratedClass"));
		return ptr;
	}

};


// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.WidgetBlueprintLibrary"));
		return ptr;
	}


	static FEventReply UnlockMouse(FEventReply* Reply);
	static FEventReply Unhandled();
	static FEventReply SetUserFocus(UWidget* FocusWidget, bool bInAllUsers, FEventReply* Reply);
	static FEventReply SetMousePosition(const FVector2D& NewMousePosition, FEventReply* Reply);
	static void SetInputMode_UIOnly(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	static void SetInputMode_GameOnly(APlayerController* Target);
	static void SetInputMode_GameAndUI(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	static void SetFocusToGameViewport();
	static void SetBrushResourceToTexture(UTexture2D* Texture, FSlateBrush* Brush);
	static void SetBrushResourceToMaterial(UMaterialInterface* Material, FSlateBrush* Brush);
	static FEventReply ReleaseMouseCapture(FEventReply* Reply);
	static FEventReply ReleaseJoystickCapture(bool bInAllJoysticks, FEventReply* Reply);
	static FSlateBrush NoResourceBrush();
	static FSlateBrush MakeBrushFromTexture(UTexture2D* Texture, int Width, int Height);
	static FSlateBrush MakeBrushFromMaterial(UMaterialInterface* Material, int Width, int Height);
	static FSlateBrush MakeBrushFromAsset(USlateBrushAsset* BrushAsset);
	static FEventReply LockMouse(UWidget* CapturingWidget, FEventReply* Reply);
	static bool IsDragDropping();
	static FEventReply Handled();
	static FKeyEvent GetKeyEventFromAnalogInputEvent(const FAnalogInputEvent& Event);
	static FInputEvent GetInputEventFromPointerEvent(const FPointerEvent& Event);
	static FInputEvent GetInputEventFromNavigationEvent(const FNavigationEvent& Event);
	static FInputEvent GetInputEventFromKeyEvent(const FKeyEvent& Event);
	static FInputEvent GetInputEventFromControllerEvent(const FControllerEvent& Event);
	static FInputEvent GetInputEventFromCharacterEvent(const FCharacterEvent& Event);
	static UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush* Brush);
	static UDragDropOperation* GetDragDroppingContent();
	static UTexture2D* GetBrushResourceAsTexture2D(FSlateBrush* Brush);
	static UMaterialInterface* GetBrushResourceAsMaterial(FSlateBrush* Brush);
	static UObject* GetBrushResource(FSlateBrush* Brush);
	static void GetAllWidgetsWithInterface(UObject* WorldContextObject, UClass* Interface, bool TopLevelOnly, TArray<UUserWidget*>* FoundWidgets);
	static void GetAllWidgetsOfClass(UObject* WorldContextObject, UClass* WidgetClass, bool TopLevelOnly, TArray<UUserWidget*>* FoundWidgets);
	static FEventReply EndDragDrop(FEventReply* Reply);
	static void DrawTextFormatted(const FText& Text, const FVector2D& Position, UFont* Font, int FontSize, const FName& FontTypeFace, const FLinearColor& Tint, FPaintContext* Context);
	static void DrawText(const FString& InString, const FVector2D& Position, const FLinearColor& Tint, FPaintContext* Context);
	static void DrawLines(TArray<FVector2D> Points, const FLinearColor& Tint, bool bAntiAlias, FPaintContext* Context);
	static void DrawLine(const FVector2D& PositionA, const FVector2D& PositionB, const FLinearColor& Tint, bool bAntiAlias, FPaintContext* Context);
	static void DrawBox(const FVector2D& Position, const FVector2D& Size, USlateBrushAsset* Brush, const FLinearColor& Tint, FPaintContext* Context);
	static void DismissAllMenus();
	static FEventReply DetectDragIfPressed(const FPointerEvent& PointerEvent, UWidget* WidgetDetectingDrag, const FKey& DragKey);
	static FEventReply DetectDrag(UWidget* WidgetDetectingDrag, const FKey& DragKey, FEventReply* Reply);
	static UDragDropOperation* CreateDragDropOperation(UClass* OperationClass);
	static UUserWidget* Create(UObject* WorldContextObject, UClass* WidgetType, APlayerController* OwningPlayer);
	static FEventReply ClearUserFocus(bool bInAllUsers, FEventReply* Reply);
	static FEventReply CaptureMouse(UWidget* CapturingWidget, FEventReply* Reply);
	static FEventReply CaptureJoystick(UWidget* CapturingWidget, bool bInAllJoysticks, FEventReply* Reply);
	static void CancelDragDrop();
};


// Class UMG.WidgetComponent
// 0x00F0 (0x0680 - 0x0590)
class UWidgetComponent : public UPrimitiveComponent
{
public:
	UClass*                                            WidgetClass;                                              // 0x0590(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FIntPoint                                          DrawSize;                                                 // 0x0598(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FVector2D                                          Pivot;                                                    // 0x05A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInteractionDistance;                                   // 0x05A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	ULocalPlayer*                                      OwnerPlayer;                                              // 0x05B0(0x0008) (ZeroConstructor, IsPlainOldData)
	FLinearColor                                       BackgroundColor;                                          // 0x05B8(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWidgetBlendMode>                      BlendMode;                                                // 0x05C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOpaque;                                                // 0x05C9(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bIsTwoSided;                                              // 0x05CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x05CB(0x0001) MISSED OFFSET
	float                                              ParabolaDistortion;                                       // 0x05CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TickWhenOffscreen;                                        // 0x05D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05D1(0x0007) MISSED OFFSET
	UUserWidget*                                       Widget;                                                   // 0x05D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	UBodySetup*                                        BodySetup;                                                // 0x05E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	UMaterialInterface*                                TranslucentMaterial;                                      // 0x05E8(0x0008) (ZeroConstructor, IsPlainOldData)
	UMaterialInterface*                                TranslucentMaterial_OneSided;                             // 0x05F0(0x0008) (ZeroConstructor, IsPlainOldData)
	UMaterialInterface*                                OpaqueMaterial;                                           // 0x05F8(0x0008) (ZeroConstructor, IsPlainOldData)
	UMaterialInterface*                                OpaqueMaterial_OneSided;                                  // 0x0600(0x0008) (ZeroConstructor, IsPlainOldData)
	UMaterialInterface*                                MaskedMaterial;                                           // 0x0608(0x0008) (ZeroConstructor, IsPlainOldData)
	UMaterialInterface*                                MaskedMaterial_OneSided;                                  // 0x0610(0x0008) (ZeroConstructor, IsPlainOldData)
	UTextureRenderTarget2D*                            RenderTarget;                                             // 0x0618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	UMaterialInstanceDynamic*                          MaterialInstance;                                         // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bUseLegacyRotation;                                       // 0x0628(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAddedToScreen;                                           // 0x0629(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x56];                                      // 0x062A(0x0056) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.WidgetComponent"));
		return ptr;
	}


	void SetWidget(UUserWidget* Widget);
	void SetOwnerPlayer(ULocalPlayer* LocalPlayer);
	void SetMaxInteractionDistance(float Distance);
	void SetDrawSize(const FVector2D& Size);
	UUserWidget* GetUserWidgetObject();
	ULocalPlayer* GetOwnerPlayer();
	float GetMaxInteractionDistance();
	FVector2D GetDrawSize();
};


// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.WidgetLayoutLibrary"));
		return ptr;
	}


	static UVerticalBoxSlot* SlotAsVerticalBoxSlot(UWidget* Widget);
	static UUniformGridSlot* SlotAsUniformGridSlot(UWidget* Widget);
	static UOverlaySlot* SlotAsOverlaySlot(UWidget* Widget);
	static UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(UWidget* Widget);
	static UGridSlot* SlotAsGridSlot(UWidget* Widget);
	static UCanvasPanelSlot* SlotAsCanvasSlot(UWidget* Widget);
	static void RemoveAllWidgets(UObject* WorldContextObject);
	static bool ProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, const FVector& WorldLocation, FVector2D* ScreenPosition);
	static FVector2D GetViewportSize(UObject* WorldContextObject);
	static float GetViewportScale(UObject* WorldContextObject);
	static bool GetMousePositionScaledByDPI(APlayerController* Player, float* LocationX, float* LocationY);
};


// Class UMG.WidgetNavigation
// 0x0078 (0x00A0 - 0x0028)
class UWidgetNavigation : public UObject
{
public:
	FWidgetNavigationData                              Up;                                                       // 0x0028(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	FWidgetNavigationData                              Down;                                                     // 0x003C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	FWidgetNavigationData                              Left;                                                     // 0x0050(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	FWidgetNavigationData                              Right;                                                    // 0x0064(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	FWidgetNavigationData                              Next;                                                     // 0x0078(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	FWidgetNavigationData                              Previous;                                                 // 0x008C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.WidgetNavigation"));
		return ptr;
	}

};


// Class UMG.WidgetTree
// 0x0018 (0x0040 - 0x0028)
class UWidgetTree : public UObject
{
public:
	UWidget*                                           RootWidget;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<UWidget*>                                   AllWidgets;                                               // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UMG.WidgetTree"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
