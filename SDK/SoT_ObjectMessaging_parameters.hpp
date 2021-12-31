#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ObjectMessaging_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventsForObject
struct UObjectMessagingFunctions_UnregisterEventsForObject_Params
{
	FObjectMessagingObjectScoper                       ObjectScoper;                                             // (Parm, OutParm, ReferenceParm)
	UObject*                                           EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvents
struct UObjectMessagingFunctions_UnregisterEvents_Params
{
	FObjectMessagingObjectScoper                       ObjectScoper;                                             // (Parm, OutParm, ReferenceParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle
struct UObjectMessagingFunctions_UnregisterEventFromHandle_Params
{
	FObjectMessagingDispatcherHandle                   Dispatcher;                                               // (Parm, OutParm, ReferenceParm)
	FObjectMessagingHandle                             Handle;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent
struct UObjectMessagingFunctions_UnregisterEvent_Params
{
	FObjectMessagingDispatcher                         Dispatcher;                                               // (Parm, OutParm, ReferenceParm)
	FObjectMessagingHandle                             Handle;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventWithObjectScoper
struct UObjectMessagingFunctions_RegisterEventWithObjectScoper_Params
{
	UObject*                                           EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FObjectMessagingObjectScoper                       ObjectScoper;                                             // (Parm, OutParm, ReferenceParm)
	UObject*                                           FunctionOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            FunctionName;                                             // (Parm, ZeroConstructor)
	UStruct*                                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle
struct UObjectMessagingFunctions_RegisterEventFromHandle_Params
{
	FObjectMessagingDispatcherHandle                   MessageDispatcher;                                        // (Parm, OutParm, ReferenceParm)
	FObjectMessagingHandle                             Handle;                                                   // (Parm, OutParm, ReferenceParm)
	UObject*                                           FunctionOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            FunctionName;                                             // (Parm, ZeroConstructor)
	UStruct*                                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent
struct UObjectMessagingFunctions_RegisterEvent_Params
{
	FObjectMessagingDispatcher                         MessageDispatcher;                                        // (Parm, OutParm, ReferenceParm)
	FObjectMessagingHandle                             Handle;                                                   // (Parm, OutParm, ReferenceParm)
	UObject*                                           FunctionOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            FunctionName;                                             // (Parm, ZeroConstructor)
	UStruct*                                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid
struct UObjectMessagingFunctions_IsObjectMessagingDispatcherValid_Params
{
	FObjectMessagingDispatcherHandle                   Handle;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered
struct UObjectMessagingFunctions_IsHandleRegistered_Params
{
	FObjectMessagingHandle                             Handle;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor
struct UObjectMessagingFunctions_GetObjectMessagingDispatcherFromActor_Params
{
	UObject*                                           Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FObjectMessagingDispatcherHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher
struct UObjectMessagingFunctions_GetObjectMessagingDispatcher_Params
{
	TScriptInterface<class UObjectMessagingDispatcherInterface> ObjectMessagingDispatcher;                                // (Parm, ZeroConstructor, IsPlainOldData)
	FObjectMessagingDispatcherHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle
struct UObjectMessagingFunctions_FireEventWithDataFromHandle_Params
{
	FObjectMessagingDispatcherHandle                   MessageDispatcher;                                        // (Parm, OutParm, ReferenceParm)
	UStruct*                                           EventDataStruct;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            Scope;                                                    // (Parm, ZeroConstructor)
	FString                                            ScopeId;                                                  // (Parm, ZeroConstructor)
	FGenericStruct                                     Value;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData
struct UObjectMessagingFunctions_FireEventWithData_Params
{
	FObjectMessagingDispatcher                         MessageDispatcher;                                        // (Parm, OutParm, ReferenceParm)
	UStruct*                                           EventDataStruct;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            Scope;                                                    // (Parm, ZeroConstructor)
	FString                                            ScopeId;                                                  // (Parm, ZeroConstructor)
	FGenericStruct                                     Value;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
