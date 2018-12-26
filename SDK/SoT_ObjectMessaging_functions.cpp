// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ObjectMessaging_classes.hpp"

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

void UObjectMessagingFunctions::UnregisterEventFromHandle(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle");

	struct
	{
		struct FObjectMessagingDispatcherHandle Dispatcher;
		struct FObjectMessagingHandle  Handle;
	} params;


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
// struct FObjectMessagingDispatcher Dispatcher                     (Parm, OutParm, ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)

void UObjectMessagingFunctions::UnregisterEvent(struct FObjectMessagingDispatcher* Dispatcher, struct FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent");

	struct
	{
		struct FObjectMessagingDispatcher Dispatcher;
		struct FObjectMessagingHandle  Handle;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

void UObjectMessagingFunctions::RegisterEventFromHandle(class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType, struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle");

	struct
	{
		struct FObjectMessagingDispatcherHandle MessageDispatcher;
		struct FObjectMessagingHandle  Handle;
		class UObject*                 FunctionOwner;
		class FString                  FunctionName;
		class UStruct*                 EventType;
	} params;

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
// struct FObjectMessagingDispatcher MessageDispatcher              (Parm, OutParm, ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)
// class UObject*                 FunctionOwner                  (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FunctionName                   (Parm, ZeroConstructor)
// class UStruct*                 EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UObjectMessagingFunctions::RegisterEvent(class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType, struct FObjectMessagingDispatcher* MessageDispatcher, struct FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent");

	struct
	{
		struct FObjectMessagingDispatcher MessageDispatcher;
		struct FObjectMessagingHandle  Handle;
		class UObject*                 FunctionOwner;
		class FString                  FunctionName;
		class UStruct*                 EventType;
	} params;

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
// struct FObjectMessagingDispatcherHandle Handle                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UObjectMessagingFunctions::IsObjectMessagingDispatcherValid(struct FObjectMessagingDispatcherHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid");

	struct
	{
		struct FObjectMessagingDispatcherHandle Handle;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UObjectMessagingFunctions::IsHandleRegistered(struct FObjectMessagingHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered");

	struct
	{
		struct FObjectMessagingHandle  Handle;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectMessagingDispatcherHandle UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor");

	struct
	{
		class UObject*                 Object;
		struct FObjectMessagingDispatcherHandle ReturnValue;
	} params;

	params.Object = Object;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UObjectMessagingDispatcherInterface> ObjectMessagingDispatcher      (Parm, ZeroConstructor, IsPlainOldData)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectMessagingDispatcherHandle UObjectMessagingFunctions::GetObjectMessagingDispatcher(const TScriptInterface<class UObjectMessagingDispatcherInterface>& ObjectMessagingDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher");

	struct
	{
		TScriptInterface<class UObjectMessagingDispatcherInterface> ObjectMessagingDispatcher;
		struct FObjectMessagingDispatcherHandle ReturnValue;
	} params;

	params.ObjectMessagingDispatcher = ObjectMessagingDispatcher;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

void UObjectMessagingFunctions::FireEventWithDataFromHandle(class UStruct* EventDataStruct, const class FString& Scope, const class FString& ScopeId, struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FGenericStruct* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle");

	struct
	{
		struct FObjectMessagingDispatcherHandle MessageDispatcher;
		class UStruct*                 EventDataStruct;
		class FString                  Scope;
		class FString                  ScopeId;
		struct FGenericStruct          Value;
	} params;

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
// struct FObjectMessagingDispatcher MessageDispatcher              (Parm, OutParm, ReferenceParm)
// class UStruct*                 EventDataStruct                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Scope                          (Parm, ZeroConstructor)
// class FString                  ScopeId                        (Parm, ZeroConstructor)
// struct FGenericStruct          Value                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UObjectMessagingFunctions::FireEventWithData(class UStruct* EventDataStruct, const class FString& Scope, const class FString& ScopeId, struct FObjectMessagingDispatcher* MessageDispatcher, struct FGenericStruct* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData");

	struct
	{
		struct FObjectMessagingDispatcher MessageDispatcher;
		class UStruct*                 EventDataStruct;
		class FString                  Scope;
		class FString                  ScopeId;
		struct FGenericStruct          Value;
	} params;

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
