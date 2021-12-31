// Sea of Thieves (2) SDK

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
// UObject*                       Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)

FObjectMessagingDispatcherHandle UServiceMessagingFunctions::GetServiceMessagingDispatcherFromActor(UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor"));

	UServiceMessagingFunctions_GetServiceMessagingDispatcherFromActor_Params params;
	params.Object = Object;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class UServiceMessagingDispatcherInterface> ServiceMessagingDispatcher     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)

FObjectMessagingDispatcherHandle UServiceMessagingFunctions::GetServiceMessagingDispatcher(const TScriptInterface<class UServiceMessagingDispatcherInterface>& ServiceMessagingDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher"));

	UServiceMessagingFunctions_GetServiceMessagingDispatcher_Params params;
	params.ServiceMessagingDispatcher = ServiceMessagingDispatcher;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage
// (Final, Native, Public, HasOutParms)
// Parameters:
// FServiceMessagingTestMessage   InMessage                      (Parm, OutParm)

void UServiceMessagingListenerTestObject::TestFunctionWithMessage(FServiceMessagingTestMessage* InMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage"));

	UServiceMessagingListenerTestObject_TestFunctionWithMessage_Params params;

	UObject::ProcessEvent(fn, &params);

	if (InMessage != nullptr)
		*InMessage = params.InMessage;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
