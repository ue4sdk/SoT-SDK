#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ServiceMessaging_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor
struct UServiceMessagingFunctions_GetServiceMessagingDispatcherFromActor_Params
{
	UObject*                                           Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FObjectMessagingDispatcherHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher
struct UServiceMessagingFunctions_GetServiceMessagingDispatcher_Params
{
	TScriptInterface<class UServiceMessagingDispatcherInterface> ServiceMessagingDispatcher;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FObjectMessagingDispatcherHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage
struct UServiceMessagingListenerTestObject_TestFunctionWithMessage_Params
{
	FServiceMessagingTestMessage                       InMessage;                                                // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
