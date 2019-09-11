#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MerchantContracts.ItemAndReward
// 0x0010
struct FItemAndReward
{
	class UClass*                                      ItemDesc;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRewardId                                   HandInOnTimeRewardId;                                     // 0x0008(0x0008) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct MerchantContracts.MerchantContractItemDesc
// 0x0028
struct FMerchantContractItemDesc
{
	class UClass*                                      AllocatedCrate;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FItemAndReward>                      ItemData;                                                 // 0x0008(0x0010) (ZeroConstructor)
	class UClass*                                      FaunaSpecies;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      FaunaBreed;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MerchantContracts.MerchantContractDeliveryRequest
// 0x0038
struct FMerchantContractDeliveryRequest
{
	struct FMerchantContractItemDesc                   ItemDesc;                                                 // 0x0000(0x0028)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

// ScriptStruct MerchantContracts.MerchantContract
// 0x00A8
struct FMerchantContract
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	TArray<struct FMerchantContractDeliveryRequest>    DeliveryRequests;                                         // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
};

// ScriptStruct MerchantContracts.PlayerMerchantContract
// 0x0028
struct FPlayerMerchantContract
{
	struct FGuid                                       Id;                                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       IslandName;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMerchantContractDeliveryRequest>    Requests;                                                 // 0x0018(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
