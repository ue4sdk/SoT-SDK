#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MerchantContracts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MerchantContracts.MerchantContractsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UMerchantContractsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MerchantContracts.MerchantContractsBlueprintLibrary"));
		return ptr;
	}


	static struct FText GetDateFromTimeLimit(const TScriptInterface<class UGameServiceProviderInterface>& ServiceProviderInterface, float TimeLimit);
};


// Class MerchantContracts.MerchantContractsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UMerchantContractsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MerchantContracts.MerchantContractsServiceInterface"));
		return ptr;
	}

};


// Class MerchantContracts.MerchantContractsService
// 0x0030 (0x0058 - 0x0028)
class UMerchantContractsService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FMerchantContract>                   Contracts;                                                // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MerchantContracts.MerchantContractsService"));
		return ptr;
	}

};


// Class MerchantContracts.PlayerMerchantContractsInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerMerchantContractsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MerchantContracts.PlayerMerchantContractsInterface"));
		return ptr;
	}

};


// Class MerchantContracts.PlayerMerchantContractsComponent
// 0x0018 (0x00E8 - 0x00D0)
class UPlayerMerchantContractsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	TArray<struct FPlayerMerchantContract>             Contracts;                                                // 0x00D8(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MerchantContracts.PlayerMerchantContractsComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
