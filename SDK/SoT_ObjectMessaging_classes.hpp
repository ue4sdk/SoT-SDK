#pragma once

// Sea of Thieves (2.1) SDK

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


	static void UnregisterEventsForObject(class UObject* EventSource, struct FObjectMessagingObjectScoper* ObjectScoper);
	static void UnregisterEvents(struct FObjectMessagingObjectScoper* ObjectScoper);
	static void UnregisterEventFromHandle(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle);
	static void UnregisterEvent(struct FObjectMessagingDispatcher* Dispatcher, struct FObjectMessagingHandle* Handle);
	static void RegisterEventWithObjectScoper(class UObject* EventSource, class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType, struct FObjectMessagingObjectScoper* ObjectScoper);
	static void RegisterEventFromHandle(class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType, struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FObjectMessagingHandle* Handle);
	static void RegisterEvent(class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType, struct FObjectMessagingDispatcher* MessageDispatcher, struct FObjectMessagingHandle* Handle);
	static bool IsObjectMessagingDispatcherValid(struct FObjectMessagingDispatcherHandle* Handle);
	static bool IsHandleRegistered(struct FObjectMessagingHandle* Handle);
	static struct FObjectMessagingDispatcherHandle GetObjectMessagingDispatcherFromActor(class UObject* Object);
	static struct FObjectMessagingDispatcherHandle GetObjectMessagingDispatcher(const TScriptInterface<class UObjectMessagingDispatcherInterface>& ObjectMessagingDispatcher);
	static void FireEventWithDataFromHandle(class UStruct* EventDataStruct, const class FString& Scope, const class FString& ScopeId, struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FGenericStruct* Value);
	static void FireEventWithData(class UStruct* EventDataStruct, const class FString& Scope, const class FString& ScopeId, struct FObjectMessagingDispatcher* MessageDispatcher, struct FGenericStruct* Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
