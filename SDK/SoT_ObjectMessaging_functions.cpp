// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ObjectMessaging_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventsForObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FObjectMessagingObjectScoper   ObjectScoper                   (Parm, OutParm, ReferenceParm)
// UObject*                       EventSource                    (Parm, ZeroConstructor, IsPlainOldData)

void UObjectMessagingFunctions::UnregisterEventsForObject(UObject* EventSource, FObjectMessagingObjectScoper* ObjectScoper)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventsForObject"));

	UObjectMessagingFunctions_UnregisterEventsForObject_Params params;
	params.EventSource = EventSource;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ObjectScoper != nullptr)
		*ObjectScoper = params.ObjectScoper;
}


// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvents
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FObjectMessagingObjectScoper   ObjectScoper                   (Parm, OutParm, ReferenceParm)

void UObjectMessagingFunctions::UnregisterEvents(FObjectMessagingObjectScoper* ObjectScoper)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvents"));

	UObjectMessagingFunctions_UnregisterEvents_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ObjectScoper != nullptr)
		*ObjectScoper = params.ObjectScoper;
}


// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FObjectMessagingDispatcherHandle Dispatcher                     (Parm, OutParm, ReferenceParm)
// FObjectMessagingHandle         Handle                         (Parm, OutParm, ReferenceParm)

void UObjectMessagingFunctions::UnregisterEventFromHandle(FObjectMessagingDispatcherHandle* Dispatcher, FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle"));

	UObjectMessagingFunctions_UnregisterEventFromHandle_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FObjectMessagingDispatcher     Dispatcher                     (Parm, OutParm, ReferenceParm)
// FObjectMessagingHandle         Handle                         (Parm, OutParm, ReferenceParm)

void UObjectMessagingFunctions::UnregisterEvent(FObjectMessagingDispatcher* Dispatcher, FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent"));

	UObjectMessagingFunctions_UnregisterEvent_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventWithObjectScoper
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UObject*                       EventSource                    (Parm, ZeroConstructor, IsPlainOldData)
// FObjectMessagingObjectScoper   ObjectScoper                   (Parm, OutParm, ReferenceParm)
// UObject*                       FunctionOwner                  (Parm, ZeroConstructor, IsPlainOldData)
// FString                        FunctionName                   (Parm, ZeroConstructor)
// UStruct*                       EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UObjectMessagingFunctions::RegisterEventWithObjectScoper(UObject* EventSource, UObject* FunctionOwner, const FString& FunctionName, UStruct* EventType, FObjectMessagingObjectScoper* ObjectScoper)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventWithObjectScoper"));

	UObjectMessagingFunctions_RegisterEventWithObjectScoper_Params params;
	params.EventSource = EventSource;
	params.FunctionOwner = FunctionOwner;
	params.FunctionName = FunctionName;
	params.EventType = EventType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ObjectScoper != nullptr)
		*ObjectScoper = params.ObjectScoper;
}


// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FObjectMessagingDispatcherHandle MessageDispatcher              (Parm, OutParm, ReferenceParm)
// FObjectMessagingHandle         Handle                         (Parm, OutParm, ReferenceParm)
// UObject*                       FunctionOwner                  (Parm, ZeroConstructor, IsPlainOldData)
// FString                        FunctionName                   (Parm, ZeroConstructor)
// UStruct*                       EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UObjectMessagingFunctions::RegisterEventFromHandle(UObject* FunctionOwner, const FString& FunctionName, UStruct* EventType, FObjectMessagingDispatcherHandle* MessageDispatcher, FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle"));

	UObjectMessagingFunctions_RegisterEventFromHandle_Params params;
	params.FunctionOwner = FunctionOwner;
	params.FunctionName = FunctionName;
	params.EventType = EventType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FObjectMessagingDispatcher     MessageDispatcher              (Parm, OutParm, ReferenceParm)
// FObjectMessagingHandle         Handle                         (Parm, OutParm, ReferenceParm)
// UObject*                       FunctionOwner                  (Parm, ZeroConstructor, IsPlainOldData)
// FString                        FunctionName                   (Parm, ZeroConstructor)
// UStruct*                       EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UObjectMessagingFunctions::RegisterEvent(UObject* FunctionOwner, const FString& FunctionName, UStruct* EventType, FObjectMessagingDispatcher* MessageDispatcher, FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent"));

	UObjectMessagingFunctions_RegisterEvent_Params params;
	params.FunctionOwner = FunctionOwner;
	params.FunctionName = FunctionName;
	params.EventType = EventType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FObjectMessagingDispatcherHandle Handle                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UObjectMessagingFunctions::IsObjectMessagingDispatcherValid(FObjectMessagingDispatcherHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid"));

	UObjectMessagingFunctions_IsObjectMessagingDispatcherValid_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FObjectMessagingHandle         Handle                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UObjectMessagingFunctions::IsHandleRegistered(FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered"));

	UObjectMessagingFunctions_IsHandleRegistered_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)

FObjectMessagingDispatcherHandle UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor"));

	UObjectMessagingFunctions_GetObjectMessagingDispatcherFromActor_Params params;
	params.Object = Object;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UObjectMessagingDispatcherInterface> ObjectMessagingDispatcher      (Parm, ZeroConstructor, IsPlainOldData)
// FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)

FObjectMessagingDispatcherHandle UObjectMessagingFunctions::GetObjectMessagingDispatcher(const TScriptInterface<class UObjectMessagingDispatcherInterface>& ObjectMessagingDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher"));

	UObjectMessagingFunctions_GetObjectMessagingDispatcher_Params params;
	params.ObjectMessagingDispatcher = ObjectMessagingDispatcher;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FObjectMessagingDispatcherHandle MessageDispatcher              (Parm, OutParm, ReferenceParm)
// UStruct*                       EventDataStruct                (Parm, ZeroConstructor, IsPlainOldData)
// FString                        Scope                          (Parm, ZeroConstructor)
// FString                        ScopeId                        (Parm, ZeroConstructor)
// FGenericStruct                 Value                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UObjectMessagingFunctions::FireEventWithDataFromHandle(UStruct* EventDataStruct, const FString& Scope, const FString& ScopeId, FObjectMessagingDispatcherHandle* MessageDispatcher, FGenericStruct* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle"));

	UObjectMessagingFunctions_FireEventWithDataFromHandle_Params params;
	params.EventDataStruct = EventDataStruct;
	params.Scope = Scope;
	params.ScopeId = ScopeId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FObjectMessagingDispatcher     MessageDispatcher              (Parm, OutParm, ReferenceParm)
// UStruct*                       EventDataStruct                (Parm, ZeroConstructor, IsPlainOldData)
// FString                        Scope                          (Parm, ZeroConstructor)
// FString                        ScopeId                        (Parm, ZeroConstructor)
// FGenericStruct                 Value                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UObjectMessagingFunctions::FireEventWithData(UStruct* EventDataStruct, const FString& Scope, const FString& ScopeId, FObjectMessagingDispatcher* MessageDispatcher, FGenericStruct* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData"));

	UObjectMessagingFunctions_FireEventWithData_Params params;
	params.EventDataStruct = EventDataStruct;
	params.Scope = Scope;
	params.ScopeId = ScopeId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Value != nullptr)
		*Value = params.Value;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
