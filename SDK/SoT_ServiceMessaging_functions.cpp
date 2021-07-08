// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ServiceMessaging_classes.hpp"

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

struct FObjectMessagingDispatcherHandle UServiceMessagingFunctions::GetServiceMessagingDispatcherFromActor(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor"));

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


// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class UServiceMessagingDispatcherInterface> ServiceMessagingDispatcher     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectMessagingDispatcherHandle UServiceMessagingFunctions::GetServiceMessagingDispatcher(const TScriptInterface<class UServiceMessagingDispatcherInterface>& ServiceMessagingDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher"));

	struct
	{
		TScriptInterface<class UServiceMessagingDispatcherInterface> ServiceMessagingDispatcher;
		struct FObjectMessagingDispatcherHandle ReturnValue;
	} params;

	params.ServiceMessagingDispatcher = ServiceMessagingDispatcher;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FServiceMessagingTestMessage InMessage                      (Parm, OutParm)

void UServiceMessagingListenerTestObject::TestFunctionWithMessage(struct FServiceMessagingTestMessage* InMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage"));

	struct
	{
		struct FServiceMessagingTestMessage InMessage;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InMessage != nullptr)
		*InMessage = params.InMessage;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
