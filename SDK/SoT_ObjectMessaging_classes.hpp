#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ObjectMessaging_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ObjectMessaging.ObjectMessagingDispatcherInterface
// 0x0000 (0x0028 - 0x0028)
class UObjectMessagingDispatcherInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ObjectMessaging.ObjectMessagingDispatcherInterface"));
		return ptr;
	}

};


// Class ObjectMessaging.ObjectMessagingDispatcherComponent
// 0x00A8 (0x0170 - 0x00C8)
class UObjectMessagingDispatcherComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00C8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ObjectMessaging.ObjectMessagingDispatcherComponent"));
		return ptr;
	}

};


// Class ObjectMessaging.ObjectMessagingInterface
// 0x0000 (0x0028 - 0x0028)
class UObjectMessagingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ObjectMessaging.ObjectMessagingInterface"));
		return ptr;
	}

};


// Class ObjectMessaging.ObjectMessagingFunctions
// 0x0000 (0x0028 - 0x0028)
class UObjectMessagingFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ObjectMessaging.ObjectMessagingFunctions"));
		return ptr;
	}


	static void UnregisterEventsForObject(UObject* EventSource, FObjectMessagingObjectScoper* ObjectScoper);
	static void UnregisterEvents(FObjectMessagingObjectScoper* ObjectScoper);
	static void UnregisterEventFromHandle(FObjectMessagingDispatcherHandle* Dispatcher, FObjectMessagingHandle* Handle);
	static void UnregisterEvent(FObjectMessagingDispatcher* Dispatcher, FObjectMessagingHandle* Handle);
	static void RegisterEventWithObjectScoper(UObject* EventSource, UObject* FunctionOwner, const FString& FunctionName, UStruct* EventType, FObjectMessagingObjectScoper* ObjectScoper);
	static void RegisterEventFromHandle(UObject* FunctionOwner, const FString& FunctionName, UStruct* EventType, FObjectMessagingDispatcherHandle* MessageDispatcher, FObjectMessagingHandle* Handle);
	static void RegisterEvent(UObject* FunctionOwner, const FString& FunctionName, UStruct* EventType, FObjectMessagingDispatcher* MessageDispatcher, FObjectMessagingHandle* Handle);
	static bool IsObjectMessagingDispatcherValid(FObjectMessagingDispatcherHandle* Handle);
	static bool IsHandleRegistered(FObjectMessagingHandle* Handle);
	static FObjectMessagingDispatcherHandle GetObjectMessagingDispatcherFromActor(UObject* Object);
	static FObjectMessagingDispatcherHandle GetObjectMessagingDispatcher(const TScriptInterface<class UObjectMessagingDispatcherInterface>& ObjectMessagingDispatcher);
	static void FireEventWithDataFromHandle(UStruct* EventDataStruct, const FString& Scope, const FString& ScopeId, FObjectMessagingDispatcherHandle* MessageDispatcher, FGenericStruct* Value);
	static void FireEventWithData(UStruct* EventDataStruct, const FString& Scope, const FString& ScopeId, FObjectMessagingDispatcher* MessageDispatcher, FGenericStruct* Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
