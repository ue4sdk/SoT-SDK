#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameService_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameService.GameServiceLifecycleInterface
// 0x0000 (0x0028 - 0x0028)
class UGameServiceLifecycleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameService.GameServiceLifecycleInterface");
		return ptr;
	}

};


// Class GameService.GameServiceMapFunctions
// 0x0000 (0x0028 - 0x0028)
class UGameServiceMapFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameService.GameServiceMapFunctions");
		return ptr;
	}


	void STATIC_UnregisterService(class UObject* Service, struct FGameServiceMap* ServiceMap);
	void STATIC_RegisterService(class UObject* Service, class UClass* Class, struct FGameServiceMap* ServiceMap);
	class UObject* STATIC_GetService(class UClass* Class, struct FGameServiceMap* ServiceMap);
	int STATIC_GetNumServices(struct FGameServiceMap* ServiceMap);
};


// Class GameService.GameServiceProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UGameServiceProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameService.GameServiceProviderInterface");
		return ptr;
	}


	void UnregisterService(class UObject* Service);
	void RegisterService(class UObject* Service, class UClass* Class);
	class UObject* GetService(class UClass* Class);
};


// Class GameService.GameServiceTickInterface
// 0x0000 (0x0028 - 0x0028)
class UGameServiceTickInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameService.GameServiceTickInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
