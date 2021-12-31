// Sea of Thieves (2) SDK

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
// FGameServiceMap                ServiceMap                     (Parm, OutParm, ReferenceParm)
// UObject*                       Service                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameServiceMapFunctions::UnregisterService(UObject* Service, FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceMapFunctions.UnregisterService"));

	UGameServiceMapFunctions_UnregisterService_Params params;
	params.Service = Service;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;
}


// Function GameService.GameServiceMapFunctions.RegisterService
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FGameServiceMap                ServiceMap                     (Parm, OutParm, ReferenceParm)
// UObject*                       Service                        (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        Class                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameServiceMapFunctions::RegisterService(UObject* Service, UClass* Class, FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceMapFunctions.RegisterService"));

	UGameServiceMapFunctions_RegisterService_Params params;
	params.Service = Service;
	params.Class = Class;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;
}


// Function GameService.GameServiceMapFunctions.GetService
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FGameServiceMap                ServiceMap                     (Parm, OutParm, ReferenceParm)
// UClass*                        Class                          (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UObject* UGameServiceMapFunctions::GetService(UClass* Class, FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceMapFunctions.GetService"));

	UGameServiceMapFunctions_GetService_Params params;
	params.Class = Class;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;

	return params.ReturnValue;
}


// Function GameService.GameServiceMapFunctions.GetNumServices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FGameServiceMap                ServiceMap                     (Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameServiceMapFunctions::GetNumServices(FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceMapFunctions.GetNumServices"));

	UGameServiceMapFunctions_GetNumServices_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;

	return params.ReturnValue;
}


// Function GameService.GameServiceProviderInterface.UnregisterService
// (Native, Public, BlueprintCallable)
// Parameters:
// UObject*                       Service                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameServiceProviderInterface::UnregisterService(UObject* Service)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceProviderInterface.UnregisterService"));

	UGameServiceProviderInterface_UnregisterService_Params params;
	params.Service = Service;

	UObject::ProcessEvent(fn, &params);
}


// Function GameService.GameServiceProviderInterface.RegisterService
// (Native, Public, BlueprintCallable)
// Parameters:
// UObject*                       Service                        (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        Class                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameServiceProviderInterface::RegisterService(UObject* Service, UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceProviderInterface.RegisterService"));

	UGameServiceProviderInterface_RegisterService_Params params;
	params.Service = Service;
	params.Class = Class;

	UObject::ProcessEvent(fn, &params);
}


// Function GameService.GameServiceProviderInterface.GetService
// (Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        Class                          (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UObject* UGameServiceProviderInterface::GetService(UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceProviderInterface.GetService"));

	UGameServiceProviderInterface_GetService_Params params;
	params.Class = Class;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
