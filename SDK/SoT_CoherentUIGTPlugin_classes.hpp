#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CoherentUIGTPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CoherentUIGTPlugin.CoherentUIGTBaseComponent
// 0x0270 (0x0340 - 0x00D0)
class UCoherentUIGTBaseComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                               // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                 // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                             // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                               // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                          // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                       // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             LiveViewSizeRequested;                                    // 0x01E3(0x0014) (ZeroConstructor, InstancedReference)
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInput;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInputWhenTransparent;                             // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPerformanceWarnings;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExecuteJSTimersThresholdMs;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PaintWarningThresholdMs;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayersCountThreshold;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerWidthThreshold;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerHeightThreshold;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAdditionalDefaultStyles;                           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayedUpdate;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x15C];                                     // 0x01E4(0x015C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTBaseComponent");
		return ptr;
	}


	void UpdateWholeDataModelFromStruct(class UStructProperty* Arg);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const class FString& Name, class UCoherentUIGTJSEvent* eventData);
	void SynchronizeModels();
	void ShowPaintRects(bool show);
	void SetClickThroughAlphaThreshold(float Threshold);
	void Resize(int Width, int Height);
	void Reload();
	void Redraw();
	void Load(const class FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	float GetClickThroughAlphaThreshold();
	void EndDebugFrameSave();
	void EnableDelayedUpdate(bool bEnabled);
	void DebugSaveNextFrame();
	class UCoherentUIGTJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const class FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
};


// Class CoherentUIGTPlugin.CoherentUIGTComponent
// 0x0038 (0x0378 - 0x0340)
class UCoherentUIGTComponent : public UCoherentUIGTBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0340(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTComponent");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTLiveView
// 0x0030 (0x0100 - 0x00D0)
class UCoherentUIGTLiveView : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class FString                                      LinkName;                                                 // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTLiveView");
		return ptr;
	}


	void OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* BaseComponent, const class FString& Name, int* Width, int* Height);
};


// Class CoherentUIGTPlugin.CoherentUIGTRenderToTextureLiveView
// 0x0008 (0x0108 - 0x0100)
class UCoherentUIGTRenderToTextureLiveView : public UCoherentUIGTLiveView
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTRenderToTextureLiveView");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTAssetReferencer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTSystem
// 0x0050 (0x04C0 - 0x0470)
class ACoherentUIGTSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0470(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTSystem");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTJSEvent
// 0x0080 (0x00A8 - 0x0028)
class UCoherentUIGTJSEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTJSEvent");
		return ptr;
	}


	void AddStructArg(class UStructProperty* Arg);
	void AddString(const class FString& Str);
	void AddObject(class UObject* Object);
	void AddInt32(int integer);
	void AddFloat(float fl);
	void AddByte(unsigned char byte);
	void AddBool(bool B);
	void AddArray(TArray<int> Array);
};


// Class CoherentUIGTPlugin.CoherentUIGTJSPayload
// 0x0018 (0x0040 - 0x0028)
class UCoherentUIGTJSPayload : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTJSPayload");
		return ptr;
	}


	void ReadObject(int Index, class UObject* Object);
	class FString GetString(int Index);
	float GetNumber(int Index);
	int GetInt32(int Index);
	bool GetBool(int Index);
};


// Class CoherentUIGTPlugin.CoherentUIGTEventHelpers
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTEventHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTEventHelpers");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTHUD
// 0x0028 (0x0368 - 0x0340)
class UCoherentUIGTHUD : public UCoherentUIGTBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0340(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTHUD");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_TriggerJSEvent(class UCoherentUIGTBaseComponent* Component, const class FString& EventName, class UCoherentUIGTJSEvent* JSEvent);
	void STATIC_SetupLoadingScreen(class UObject* WorldContextObject, const struct FCoherentUIGTLoadingScreenSettings& Settings);
	class UCoherentUIGTJSEvent* STATIC_CreateJSEvent(class UObject* WorldContextObject);
	void STATIC_AddStructArg(class UCoherentUIGTJSEvent* JSEvent, class UStructProperty* Arg);
	void STATIC_AddString(class UCoherentUIGTJSEvent* JSEvent, const class FString& Arg);
	void STATIC_AddObject(class UCoherentUIGTJSEvent* JSEvent, class UObject* Arg);
	void STATIC_AddInt32(class UCoherentUIGTJSEvent* JSEvent, int Arg);
	void STATIC_AddFloat(class UCoherentUIGTJSEvent* JSEvent, float Arg);
	void STATIC_AddByte(class UCoherentUIGTJSEvent* JSEvent, unsigned char Arg);
	void STATIC_AddBool(class UCoherentUIGTJSEvent* JSEvent, bool Arg);
	void STATIC_AddArrayOfStructs(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg);
	void STATIC_AddArray(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg, int ArrayType);
};


// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// 0x0088 (0x05F0 - 0x0568)
class ACoherentUIGTGameHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0568(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTGameHUD");
		return ptr;
	}


	void SetupUIGTView(const class FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate);
};


// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// 0x0060 (0x04D0 - 0x0470)
class ACoherentUIGTInputActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0470(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTInputActor");
		return ptr;
	}


	void ToggleCoherentUIGTInputFocus();
	void SetLineTraceMode(TEnumAsByte<EGTInputWidgetLineTraceMode> Mode);
	void SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation);
	void SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView);
	void SetCoherentUIGTInputFocus(bool FocusUI);
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED();
	bool IsCoherentUIGTFocused();
	void Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ETextureAddress> AddressMode, TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality, int UVChannel);
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> GetInputPropagationBehaviour();
	void AlwaysAcceptMouseInput(bool bAccept);
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow);
};


// Class CoherentUIGTPlugin.CoherentUIGTSettings
// 0x0040 (0x0068 - 0x0028)
class UCoherentUIGTSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               EnableLiveReload;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                InspectorPort;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                WebdriverPort;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableWebSecurity;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableLocalization;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               RunAsynchronous;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRecursivelyBindUStructs;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               LoadSystemFonts;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowPerformanceWarningsInEditor;                         // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ShowWarningsOnScreen;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECoherentUIGTSettingsSeverity>         LogSeverity;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRespectTitleSafeZone;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRespectLetterboxing;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class FString                                      HUDMaterialName;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      CoUIResourcesRoot;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               TickWhileGameIsPaused;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTSettings");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTWidget
// 0x02D0 (0x0408 - 0x0138)
class UCoherentUIGTWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xAB];                                      // 0x0138(0x00AB) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x01E3(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                               // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                 // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                             // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                               // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                          // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                       // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInput;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInputWhenTransparent;                             // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGammaCorrectedMaterial;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPerformanceWarnings;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExecuteJSTimersThresholdMs;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PaintWarningThresholdMs;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayersCountThreshold;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerWidthThreshold;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerHeightThreshold;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAdditionalDefaultStyles;                           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      URL;                                                      // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ClickThroughAlphaThreshold;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Transparent;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x224];                                     // 0x01E4(0x0224) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTWidget");
		return ptr;
	}


	void UpdateWholeDataModelFromStruct(class UStructProperty* Arg);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const class FString& Name, class UCoherentUIGTJSEvent* eventData);
	void SynchronizeModels();
	void ShowPaintRects(bool show);
	void SetClickThroughAlphaThreshold(float Threshold);
	void Reload();
	void Redraw();
	void Load(const class FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	float GetClickThroughAlphaThreshold();
	void EndDebugFrameSave();
	void DebugSaveNextFrame();
	class UCoherentUIGTJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const class FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
