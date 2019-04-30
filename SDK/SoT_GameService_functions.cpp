// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameService_classes.hpp"

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

void UGameServiceMapFunctions::UnregisterService(class UObject* Service, struct FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceMapFunctions.UnregisterService"));

	struct
	{
		struct FGameServiceMap         ServiceMap;
		class UObject*                 Service;
	} params;

	params.Service = Service;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;
}


// Function GameService.GameServiceMapFunctions.RegisterService
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (Parm, OutParm, ReferenceParm)
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameServiceMapFunctions::RegisterService(class UObject* Service, class UClass* Class, struct FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceMapFunctions.RegisterService"));

	struct
	{
		struct FGameServiceMap         ServiceMap;
		class UObject*                 Service;
		class UClass*                  Class;
	} params;

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
// struct FGameServiceMap         ServiceMap                     (Parm, OutParm, ReferenceParm)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGameServiceMapFunctions::GetService(class UClass* Class, struct FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceMapFunctions.GetService"));

	struct
	{
		struct FGameServiceMap         ServiceMap;
		class UClass*                  Class;
		class UObject*                 ReturnValue;
	} params;

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
// struct FGameServiceMap         ServiceMap                     (Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameServiceMapFunctions::GetNumServices(struct FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceMapFunctions.GetNumServices"));

	struct
	{
		struct FGameServiceMap         ServiceMap;
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceProviderInterface.UnregisterService"));

	struct
	{
		class UObject*                 Service;
	} params;

	params.Service = Service;

	UObject::ProcessEvent(fn, &params);
}


// Function GameService.GameServiceProviderInterface.RegisterService
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameServiceProviderInterface::RegisterService(class UObject* Service, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceProviderInterface.RegisterService"));

	struct
	{
		class UObject*                 Service;
		class UClass*                  Class;
	} params;

	params.Service = Service;
	params.Class = Class;

	UObject::ProcessEvent(fn, &params);
}


// Function GameService.GameServiceProviderInterface.GetService
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGameServiceProviderInterface::GetService(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameService.GameServiceProviderInterface.GetService"));

	struct
	{
		class UClass*                  Class;
		class UObject*                 ReturnValue;
	} params;

	params.Class = Class;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
