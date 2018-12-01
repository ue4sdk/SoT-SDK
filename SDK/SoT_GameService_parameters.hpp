#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameService_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameService.GameServiceMapFunctions.UnregisterService
struct UGameServiceMapFunctions_UnregisterService_Params
{
	struct FGameServiceMap                             ServiceMap;                                               // (Parm, OutParm, ReferenceParm)
	class UObject*                                     Service;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameService.GameServiceMapFunctions.RegisterService
struct UGameServiceMapFunctions_RegisterService_Params
{
	struct FGameServiceMap                             ServiceMap;                                               // (Parm, OutParm, ReferenceParm)
	class UObject*                                     Service;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameService.GameServiceMapFunctions.GetService
struct UGameServiceMapFunctions_GetService_Params
{
	struct FGameServiceMap                             ServiceMap;                                               // (Parm, OutParm, ReferenceParm)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameService.GameServiceMapFunctions.GetNumServices
struct UGameServiceMapFunctions_GetNumServices_Params
{
	struct FGameServiceMap                             ServiceMap;                                               // (Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameService.GameServiceProviderInterface.UnregisterService
struct UGameServiceProviderInterface_UnregisterService_Params
{
	class UObject*                                     Service;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameService.GameServiceProviderInterface.RegisterService
struct UGameServiceProviderInterface_RegisterService_Params
{
	class UObject*                                     Service;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameService.GameServiceProviderInterface.GetService
struct UGameServiceProviderInterface_GetService_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
