// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameService_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameService.GameServiceMapFunctions.UnregisterService
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (Parm, OutParm, ReferenceParm)
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameServiceMapFunctions::STATIC_UnregisterService(class UObject* Service, struct FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.UnregisterService");

	UGameServiceMapFunctions_UnregisterService_Params params;
	params.Service = Service;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;
}


// Function GameService.GameServiceMapFunctions.RegisterService
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (Parm, OutParm, ReferenceParm)
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameServiceMapFunctions::STATIC_RegisterService(class UObject* Service, class UClass* Class, struct FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.RegisterService");

	UGameServiceMapFunctions_RegisterService_Params params;
	params.Service = Service;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;
}


// Function GameService.GameServiceMapFunctions.GetService
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (Parm, OutParm, ReferenceParm)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGameServiceMapFunctions::STATIC_GetService(class UClass* Class, struct FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.GetService");

	UGameServiceMapFunctions_GetService_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;

	return params.ReturnValue;
}


// Function GameService.GameServiceMapFunctions.GetNumServices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameServiceMapFunctions::STATIC_GetNumServices(struct FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.GetNumServices");

	UGameServiceMapFunctions_GetNumServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;

	return params.ReturnValue;
}


// Function GameService.GameServiceProviderInterface.UnregisterService
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameServiceProviderInterface::UnregisterService(class UObject* Service)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceProviderInterface.UnregisterService");

	UGameServiceProviderInterface_UnregisterService_Params params;
	params.Service = Service;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameService.GameServiceProviderInterface.RegisterService
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameServiceProviderInterface::RegisterService(class UObject* Service, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceProviderInterface.RegisterService");

	UGameServiceProviderInterface_RegisterService_Params params;
	params.Service = Service;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameService.GameServiceProviderInterface.GetService
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGameServiceProviderInterface::GetService(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceProviderInterface.GetService");

	UGameServiceProviderInterface_GetService_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
