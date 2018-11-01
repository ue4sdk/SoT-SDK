// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CoherentUIGTPlugin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::UpdateWholeDataModelFromStruct(class UStructProperty* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct");

	UCoherentUIGTBaseComponent_UpdateWholeDataModelFromStruct_Params params;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                 Model                          (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::UpdateWholeDataModelFromObject(class UObject* Model)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject");

	UCoherentUIGTBaseComponent_UpdateWholeDataModelFromObject_Params params;
	params.Model = Model;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// class UCoherentUIGTJSEvent*    EventData                      (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::TriggerJSEvent(const class FString& Name, class UCoherentUIGTJSEvent* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent");

	UCoherentUIGTBaseComponent_TriggerJSEvent_Params params;
	params.Name = Name;
	params.EventData = EventData;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels
// (Final, Native, Public, BlueprintCallable, Const)

void UCoherentUIGTBaseComponent::SynchronizeModels()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels");

	UCoherentUIGTBaseComponent_SynchronizeModels_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           show                           (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::ShowPaintRects(bool show)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects");

	UCoherentUIGTBaseComponent_ShowPaintRects_Params params;
	params.show = show;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Threshold                      (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::SetClickThroughAlphaThreshold(float Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold");

	UCoherentUIGTBaseComponent_SetClickThroughAlphaThreshold_Params params;
	params.Threshold = Threshold;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::Resize(int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize");

	UCoherentUIGTBaseComponent_Resize_Params params;
	params.Width = Width;
	params.Height = Height;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
// (Final, Native, Public, BlueprintCallable)

void UCoherentUIGTBaseComponent::Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload");

	UCoherentUIGTBaseComponent_Reload_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
// (Final, Native, Public, BlueprintCallable, Const)

void UCoherentUIGTBaseComponent::Redraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw");

	UCoherentUIGTBaseComponent_Redraw_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  path                           (Parm, ZeroConstructor)

void UCoherentUIGTBaseComponent::Load(const class FString& path)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load");

	UCoherentUIGTBaseComponent_Load_Params params;
	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTBaseComponent::IsTransparent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent");

	UCoherentUIGTBaseComponent_IsTransparent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTBaseComponent::IsReadyToCreateView()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView");

	UCoherentUIGTBaseComponent_IsReadyToCreateView_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTBaseComponent::IsReadyForBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings");

	UCoherentUIGTBaseComponent_IsReadyForBindings_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTBaseComponent::IsDocumentReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady");

	UCoherentUIGTBaseComponent_IsDocumentReady_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTBaseComponent::HasRequestedView()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView");

	UCoherentUIGTBaseComponent_HasRequestedView_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCoherentUIGTBaseComponent::GetClickThroughAlphaThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold");

	UCoherentUIGTBaseComponent_GetClickThroughAlphaThreshold_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave
// (Final, Native, Public, BlueprintCallable)

void UCoherentUIGTBaseComponent::EndDebugFrameSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave");

	UCoherentUIGTBaseComponent_EndDebugFrameSave_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::EnableDelayedUpdate(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate");

	UCoherentUIGTBaseComponent_EnableDelayedUpdate_Params params;
	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame
// (Final, Native, Public, BlueprintCallable)

void UCoherentUIGTBaseComponent::DebugSaveNextFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame");

	UCoherentUIGTBaseComponent_DebugSaveNextFrame_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCoherentUIGTJSEvent* UCoherentUIGTBaseComponent::CreateJSEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent");

	UCoherentUIGTBaseComponent_CreateJSEvent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct");

	UCoherentUIGTBaseComponent_CreateDataModelFromStruct_Params params;
	params.Name = Name;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// class UObject*                 Model                          (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::CreateDataModelFromObject(const class FString& Name, class UObject* Model)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject");

	UCoherentUIGTBaseComponent_CreateDataModelFromObject_Params params;
	params.Name = Name;
	params.Model = Model;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave
// (Final, Native, Public, BlueprintCallable)

void UCoherentUIGTBaseComponent::BeginDebugFrameSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave");

	UCoherentUIGTBaseComponent_BeginDebugFrameSave_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCoherentUIGTBaseComponent* BaseComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTLiveView::OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* BaseComponent, const class FString& Name, int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest");

	UCoherentUIGTLiveView_OnLiveViewSizeRequest_Params params;
	params.BaseComponent = BaseComponent;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSEvent::AddStructArg(class UStructProperty* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg");

	UCoherentUIGTJSEvent_AddStructArg_Params params;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Str                            (Parm, ZeroConstructor)

void UCoherentUIGTJSEvent::AddString(const class FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString");

	UCoherentUIGTJSEvent_AddString_Params params;
	params.Str = Str;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSEvent::AddObject(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject");

	UCoherentUIGTJSEvent_AddObject_Params params;
	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            integer                        (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSEvent::AddInt32(int integer)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32");

	UCoherentUIGTJSEvent_AddInt32_Params params;
	params.integer = integer;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          fl                             (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSEvent::AddFloat(float fl)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat");

	UCoherentUIGTJSEvent_AddFloat_Params params;
	params.fl = fl;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  byte                           (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSEvent::AddByte(unsigned char byte)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte");

	UCoherentUIGTJSEvent_AddByte_Params params;
	params.byte = byte;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           B                              (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSEvent::AddBool(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool");

	UCoherentUIGTJSEvent_AddBool_Params params;
	params.B = B;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCoherentUIGTJSEvent::AddArray(TArray<int> Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray");

	UCoherentUIGTJSEvent_AddArray_Params params;
	params.Array = Array;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSPayload::ReadObject(int Index, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject");

	UCoherentUIGTJSPayload_ReadObject_Params params;
	params.Index = Index;
	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UCoherentUIGTJSPayload::GetString(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString");

	UCoherentUIGTJSPayload_GetString_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCoherentUIGTJSPayload::GetNumber(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber");

	UCoherentUIGTJSPayload_GetNumber_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCoherentUIGTJSPayload::GetInt32(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32");

	UCoherentUIGTJSPayload_GetInt32_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTJSPayload::GetBool(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool");

	UCoherentUIGTJSPayload_GetBool_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTBaseComponent* Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class FString                  EventName                      (Parm, ZeroConstructor)
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_TriggerJSEvent(class UCoherentUIGTBaseComponent* Component, const class FString& EventName, class UCoherentUIGTJSEvent* JSEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent");

	UCoherentUIGTBlueprintFunctionLibrary_TriggerJSEvent_Params params;
	params.Component = Component;
	params.EventName = EventName;
	params.JSEvent = JSEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FCoherentUIGTLoadingScreenSettings Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_SetupLoadingScreen(class UObject* WorldContextObject, const struct FCoherentUIGTLoadingScreenSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen");

	UCoherentUIGTBlueprintFunctionLibrary_SetupLoadingScreen_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UCoherentUIGTJSEvent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCoherentUIGTJSEvent* UCoherentUIGTBlueprintFunctionLibrary::STATIC_CreateJSEvent(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent");

	UCoherentUIGTBlueprintFunctionLibrary_CreateJSEvent_Params params;
	params.WorldContextObject = WorldContextObject;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddStructArg(class UCoherentUIGTJSEvent* JSEvent, class UStructProperty* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg");

	UCoherentUIGTBlueprintFunctionLibrary_AddStructArg_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Arg                            (Parm, ZeroConstructor)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddString(class UCoherentUIGTJSEvent* JSEvent, const class FString& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString");

	UCoherentUIGTBlueprintFunctionLibrary_AddString_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddObject(class UCoherentUIGTJSEvent* JSEvent, class UObject* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject");

	UCoherentUIGTBlueprintFunctionLibrary_AddObject_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddInt32(class UCoherentUIGTJSEvent* JSEvent, int Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32");

	UCoherentUIGTBlueprintFunctionLibrary_AddInt32_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddFloat(class UCoherentUIGTJSEvent* JSEvent, float Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat");

	UCoherentUIGTBlueprintFunctionLibrary_AddFloat_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddByte(class UCoherentUIGTJSEvent* JSEvent, unsigned char Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte");

	UCoherentUIGTBlueprintFunctionLibrary_AddByte_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddBool(class UCoherentUIGTJSEvent* JSEvent, bool Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool");

	UCoherentUIGTBlueprintFunctionLibrary_AddBool_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Arg                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArrayOfStructs(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs");

	UCoherentUIGTBlueprintFunctionLibrary_AddArrayOfStructs_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Arg                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ArrayType                      (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArray(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg, int ArrayType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray");

	UCoherentUIGTBlueprintFunctionLibrary_AddArray_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;
	params.ArrayType = ArrayType;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  PageUrl                        (Parm, ZeroConstructor)
// bool                           bIsTransparent                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ClickThroughAlphaThreshold     (Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimationFrameDefer            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDelayedUpdate                 (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTGameHUD::SetupUIGTView(const class FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView");

	ACoherentUIGTGameHUD_SetupUIGTView_Params params;
	params.PageUrl = PageUrl;
	params.bIsTransparent = bIsTransparent;
	params.ClickThroughAlphaThreshold = ClickThroughAlphaThreshold;
	params.AnimationFrameDefer = AnimationFrameDefer;
	params.bDelayedUpdate = bDelayedUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
// (Final, Native, Public, BlueprintCallable)

void ACoherentUIGTInputActor::ToggleCoherentUIGTInputFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus");

	ACoherentUIGTInputActor_ToggleCoherentUIGTInputFocus_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EGTInputWidgetLineTraceMode> Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTInputActor::SetLineTraceMode(TEnumAsByte<EGTInputWidgetLineTraceMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode");

	ACoherentUIGTInputActor_SetLineTraceMode_Params params;
	params.Mode = Mode;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation                    (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTInputActor::SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour");

	ACoherentUIGTInputActor_SetInputPropagationBehaviour_Params params;
	params.Propagation = Propagation;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTBaseComponent* NewFocusedView                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACoherentUIGTInputActor::SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus");

	ACoherentUIGTInputActor_SetCoherentUIGTViewFocus_Params params;
	params.NewFocusedView = NewFocusedView;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           FocusUI                        (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTInputActor::SetCoherentUIGTInputFocus(bool FocusUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus");

	ACoherentUIGTInputActor_SetCoherentUIGTInputFocus_Params params;
	params.FocusUI = FocusUI;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACoherentUIGTInputActor::IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED");

	ACoherentUIGTInputActor_IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACoherentUIGTInputActor::IsCoherentUIGTFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused");

	ACoherentUIGTInputActor_IsCoherentUIGTFocused_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel> CollisionChannel               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextureAddress>   AddressMode                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            UVChannel                      (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTInputActor::Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ETextureAddress> AddressMode, TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality, int UVChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize");

	ACoherentUIGTInputActor_Initialize_Params params;
	params.CollisionChannel = CollisionChannel;
	params.AddressMode = AddressMode;
	params.RaycastQuality = RaycastQuality;
	params.UVChannel = UVChannel;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ACoherentUIGTInputActor::GetInputPropagationBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour");

	ACoherentUIGTInputActor_GetInputPropagationBehaviour_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAccept                        (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTInputActor::AlwaysAcceptMouseInput(bool bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput");

	ACoherentUIGTInputActor_AlwaysAcceptMouseInput_Params params;
	params.bAccept = bAccept;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllow                         (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTInputActor::AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED");

	ACoherentUIGTInputActor_AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params params;
	params.bAllow = bAllow;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTWidget::UpdateWholeDataModelFromStruct(class UStructProperty* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct");

	UCoherentUIGTWidget_UpdateWholeDataModelFromStruct_Params params;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                 Model                          (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTWidget::UpdateWholeDataModelFromObject(class UObject* Model)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject");

	UCoherentUIGTWidget_UpdateWholeDataModelFromObject_Params params;
	params.Model = Model;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// class UCoherentUIGTJSEvent*    EventData                      (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTWidget::TriggerJSEvent(const class FString& Name, class UCoherentUIGTJSEvent* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent");

	UCoherentUIGTWidget_TriggerJSEvent_Params params;
	params.Name = Name;
	params.EventData = EventData;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels
// (Final, Native, Public, BlueprintCallable, Const)

void UCoherentUIGTWidget::SynchronizeModels()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels");

	UCoherentUIGTWidget_SynchronizeModels_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           show                           (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTWidget::ShowPaintRects(bool show)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects");

	UCoherentUIGTWidget_ShowPaintRects_Params params;
	params.show = show;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Threshold                      (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTWidget::SetClickThroughAlphaThreshold(float Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold");

	UCoherentUIGTWidget_SetClickThroughAlphaThreshold_Params params;
	params.Threshold = Threshold;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
// (Final, Native, Public, BlueprintCallable)

void UCoherentUIGTWidget::Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload");

	UCoherentUIGTWidget_Reload_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
// (Final, Native, Public, BlueprintCallable, Const)

void UCoherentUIGTWidget::Redraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw");

	UCoherentUIGTWidget_Redraw_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  path                           (Parm, ZeroConstructor)

void UCoherentUIGTWidget::Load(const class FString& path)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.Load");

	UCoherentUIGTWidget_Load_Params params;
	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTWidget::IsTransparent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent");

	UCoherentUIGTWidget_IsTransparent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTWidget::IsReadyToCreateView()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView");

	UCoherentUIGTWidget_IsReadyToCreateView_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTWidget::IsReadyForBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings");

	UCoherentUIGTWidget_IsReadyForBindings_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTWidget::IsDocumentReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady");

	UCoherentUIGTWidget_IsDocumentReady_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTWidget::HasRequestedView()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView");

	UCoherentUIGTWidget_HasRequestedView_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCoherentUIGTWidget::GetClickThroughAlphaThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold");

	UCoherentUIGTWidget_GetClickThroughAlphaThreshold_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave
// (Final, Native, Public, BlueprintCallable)

void UCoherentUIGTWidget::EndDebugFrameSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave");

	UCoherentUIGTWidget_EndDebugFrameSave_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame
// (Final, Native, Public, BlueprintCallable)

void UCoherentUIGTWidget::DebugSaveNextFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame");

	UCoherentUIGTWidget_DebugSaveNextFrame_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCoherentUIGTJSEvent* UCoherentUIGTWidget::CreateJSEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent");

	UCoherentUIGTWidget_CreateJSEvent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTWidget::CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct");

	UCoherentUIGTWidget_CreateDataModelFromStruct_Params params;
	params.Name = Name;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// class UObject*                 Model                          (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTWidget::CreateDataModelFromObject(const class FString& Name, class UObject* Model)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject");

	UCoherentUIGTWidget_CreateDataModelFromObject_Params params;
	params.Name = Name;
	params.Model = Model;

	UObject::ProcessEvent(fn, &params);
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave
// (Final, Native, Public, BlueprintCallable)

void UCoherentUIGTWidget::BeginDebugFrameSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave");

	UCoherentUIGTWidget_BeginDebugFrameSave_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
