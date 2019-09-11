#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameService_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameService.ServiceProviderGameState
// 0x0120 (0x0620 - 0x0500)
class AServiceProviderGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0500(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameService.ServiceProviderGameState"));
		return ptr;
	}

};


// Class GameService.GameServiceLifecycleInterface
// 0x0000 (0x0028 - 0x0028)
class UGameServiceLifecycleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameService.GameServiceLifecycleInterface"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameService.GameServiceMapFunctions"));
		return ptr;
	}


	static void UnregisterService(class UObject* Service, struct FGameServiceMap* ServiceMap);
	static void RegisterService(class UObject* Service, class UClass* Class, struct FGameServiceMap* ServiceMap);
	static class UObject* GetService(class UClass* Class, struct FGameServiceMap* ServiceMap);
	static int GetNumServices(struct FGameServiceMap* ServiceMap);
};


// Class GameService.GameServiceProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UGameServiceProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameService.GameServiceProviderInterface"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameService.GameServiceTickInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
