#pragma once

// Sea of Thieves (2) SDK

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
// 0x0120 (0x0548 - 0x0428)
class AServiceProviderGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0428(0x0120) MISSED OFFSET

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


	static void UnregisterService(UObject* Service, FGameServiceMap* ServiceMap);
	static void RegisterService(UObject* Service, UClass* Class, FGameServiceMap* ServiceMap);
	static UObject* GetService(UClass* Class, FGameServiceMap* ServiceMap);
	static int GetNumServices(FGameServiceMap* ServiceMap);
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


	void UnregisterService(UObject* Service);
	void RegisterService(UObject* Service, UClass* Class);
	UObject* GetService(UClass* Class);
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
