#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ObjectMessaging_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle
struct UObjectMessagingFunctions_UnregisterEventFromHandle_Params
{
	struct FObjectMessagingDispatcherHandle            Dispatcher;                                               // (Parm, OutParm, ReferenceParm)
	struct FObjectMessagingHandle                      Handle;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent
struct UObjectMessagingFunctions_UnregisterEvent_Params
{
	struct FObjectMessagingDispatcher                  Dispatcher;                                               // (Parm, OutParm, ReferenceParm)
	struct FObjectMessagingHandle                      Handle;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle
struct UObjectMessagingFunctions_RegisterEventFromHandle_Params
{
	struct FObjectMessagingDispatcherHandle            MessageDispatcher;                                        // (Parm, OutParm, ReferenceParm)
	struct FObjectMessagingHandle                      Handle;                                                   // (Parm, OutParm, ReferenceParm)
	class UObject*                                     FunctionOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FunctionName;                                             // (Parm, ZeroConstructor)
	class UStruct*                                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent
struct UObjectMessagingFunctions_RegisterEvent_Params
{
	struct FObjectMessagingDispatcher                  MessageDispatcher;                                        // (Parm, OutParm, ReferenceParm)
	struct FObjectMessagingHandle                      Handle;                                                   // (Parm, OutParm, ReferenceParm)
	class UObject*                                     FunctionOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FunctionName;                                             // (Parm, ZeroConstructor)
	class UStruct*                                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid
struct UObjectMessagingFunctions_IsObjectMessagingDispatcherValid_Params
{
	struct FObjectMessagingDispatcherHandle            Handle;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered
struct UObjectMessagingFunctions_IsHandleRegistered_Params
{
	struct FObjectMessagingHandle                      Handle;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor
struct UObjectMessagingFunctions_GetObjectMessagingDispatcherFromActor_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingDispatcherHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher
struct UObjectMessagingFunctions_GetObjectMessagingDispatcher_Params
{
	TScriptInterface<class UObjectMessagingDispatcherInterface> ObjectMessagingDispatcher;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingDispatcherHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle
struct UObjectMessagingFunctions_FireEventWithDataFromHandle_Params
{
	struct FObjectMessagingDispatcherHandle            MessageDispatcher;                                        // (Parm, OutParm, ReferenceParm)
	class UStruct*                                     EventDataStruct;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Scope;                                                    // (Parm, ZeroConstructor)
	class FString                                      ScopeId;                                                  // (Parm, ZeroConstructor)
	struct FGenericStruct                              Value;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData
struct UObjectMessagingFunctions_FireEventWithData_Params
{
	struct FObjectMessagingDispatcher                  MessageDispatcher;                                        // (Parm, OutParm, ReferenceParm)
	class UStruct*                                     EventDataStruct;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Scope;                                                    // (Parm, ZeroConstructor)
	class FString                                      ScopeId;                                                  // (Parm, ZeroConstructor)
	struct FGenericStruct                              Value;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
