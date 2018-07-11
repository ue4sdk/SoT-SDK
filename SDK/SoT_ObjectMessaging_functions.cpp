// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ObjectMessaging_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcherHandle Dispatcher                     (Parm, OutParm, ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)

void UObjectMessagingFunctions::STATIC_UnregisterEventFromHandle(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle");

	UObjectMessagingFunctions_UnregisterEventFromHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcher Dispatcher                     (Parm, OutParm, ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)

void UObjectMessagingFunctions::STATIC_UnregisterEvent(struct FObjectMessagingDispatcher* Dispatcher, struct FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent");

	UObjectMessagingFunctions_UnregisterEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcherHandle MessageDispatcher              (Parm, OutParm, ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)
// class UObject*                 FunctionOwner                  (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FunctionName                   (Parm, ZeroConstructor)
// class UStruct*                 EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UObjectMessagingFunctions::STATIC_RegisterEventFromHandle(class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType, struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle");

	UObjectMessagingFunctions_RegisterEventFromHandle_Params params;
	params.FunctionOwner = FunctionOwner;
	params.FunctionName = FunctionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcher MessageDispatcher              (Parm, OutParm, ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)
// class UObject*                 FunctionOwner                  (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FunctionName                   (Parm, ZeroConstructor)
// class UStruct*                 EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UObjectMessagingFunctions::STATIC_RegisterEvent(class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType, struct FObjectMessagingDispatcher* MessageDispatcher, struct FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent");

	UObjectMessagingFunctions_RegisterEvent_Params params;
	params.FunctionOwner = FunctionOwner;
	params.FunctionName = FunctionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcherHandle Handle                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UObjectMessagingFunctions::STATIC_IsObjectMessagingDispatcherValid(struct FObjectMessagingDispatcherHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid");

	UObjectMessagingFunctions_IsObjectMessagingDispatcherValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UObjectMessagingFunctions::STATIC_IsHandleRegistered(struct FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered");

	UObjectMessagingFunctions_IsHandleRegistered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectMessagingDispatcherHandle UObjectMessagingFunctions::STATIC_GetObjectMessagingDispatcherFromActor(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor");

	UObjectMessagingFunctions_GetObjectMessagingDispatcherFromActor_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UObjectMessagingDispatcherInterface> ObjectMessagingDispatcher      (Parm, ZeroConstructor, IsPlainOldData)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectMessagingDispatcherHandle UObjectMessagingFunctions::STATIC_GetObjectMessagingDispatcher(const TScriptInterface<class UObjectMessagingDispatcherInterface>& ObjectMessagingDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher");

	UObjectMessagingFunctions_GetObjectMessagingDispatcher_Params params;
	params.ObjectMessagingDispatcher = ObjectMessagingDispatcher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcherHandle MessageDispatcher              (Parm, OutParm, ReferenceParm)
// class UStruct*                 EventDataStruct                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Scope                          (Parm, ZeroConstructor)
// class FString                  ScopeId                        (Parm, ZeroConstructor)
// struct FGenericStruct          Value                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UObjectMessagingFunctions::STATIC_FireEventWithDataFromHandle(class UStruct* EventDataStruct, const class FString& Scope, const class FString& ScopeId, struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FGenericStruct* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle");

	UObjectMessagingFunctions_FireEventWithDataFromHandle_Params params;
	params.EventDataStruct = EventDataStruct;
	params.Scope = Scope;
	params.ScopeId = ScopeId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcher MessageDispatcher              (Parm, OutParm, ReferenceParm)
// class UStruct*                 EventDataStruct                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Scope                          (Parm, ZeroConstructor)
// class FString                  ScopeId                        (Parm, ZeroConstructor)
// struct FGenericStruct          Value                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UObjectMessagingFunctions::STATIC_FireEventWithData(class UStruct* EventDataStruct, const class FString& Scope, const class FString& ScopeId, struct FObjectMessagingDispatcher* MessageDispatcher, struct FGenericStruct* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData");

	UObjectMessagingFunctions_FireEventWithData_Params params;
	params.EventDataStruct = EventDataStruct;
	params.Scope = Scope;
	params.ScopeId = ScopeId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Value != nullptr)
		*Value = params.Value;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
