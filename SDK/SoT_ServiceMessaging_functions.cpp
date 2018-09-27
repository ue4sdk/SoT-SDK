// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ServiceMessaging_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectMessagingDispatcherHandle UServiceMessagingFunctions::STATIC_GetServiceMessagingDispatcherFromActor(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor");

	UServiceMessagingFunctions_GetServiceMessagingDispatcherFromActor_Params params;
	params.Object = Object;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class UServiceMessagingDispatcherInterface> ServiceMessagingDispatcher     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectMessagingDispatcherHandle UServiceMessagingFunctions::STATIC_GetServiceMessagingDispatcher(const TScriptInterface<class UServiceMessagingDispatcherInterface>& ServiceMessagingDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher");

	UServiceMessagingFunctions_GetServiceMessagingDispatcher_Params params;
	params.ServiceMessagingDispatcher = ServiceMessagingDispatcher;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FServiceMessagingTestMessage InMessage                      (Parm, OutParm)

void UServiceMessagingListenerTestObject::TestFunctionWithMessage(struct FServiceMessagingTestMessage* InMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage");

	UServiceMessagingListenerTestObject_TestFunctionWithMessage_Params params;

	UObject::ProcessEvent(fn, &params);

	if (InMessage != nullptr)
		*InMessage = params.InMessage;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
