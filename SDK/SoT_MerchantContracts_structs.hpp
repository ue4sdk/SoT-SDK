#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MerchantContracts.ItemAndReward
// 0x0010
struct FItemAndReward
{
	class UClass*                                      ItemDesc;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRewardId                                   HandInOnTimeRewardId;                                     // 0x0008(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct MerchantContracts.MerchantContractItemDesc
// 0x0028
struct FMerchantContractItemDesc
{
	class UClass*                                      AllocatedCrate;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemAndReward>                      ItemData;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      FaunaSpecies;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FaunaBreed;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MerchantContracts.MerchantContractDeliveryRequest
// 0x0040
struct FMerchantContractDeliveryRequest
{
	int                                                Id;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FMerchantContractItemDesc                   ItemDesc;                                                 // 0x0008(0x0028)
	int                                                NumToAllocate;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumToCollect;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumToDeliver;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct MerchantContracts.MerchantContract
// 0x00C0
struct FMerchantContract
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	TArray<struct FMerchantContractDeliveryRequest>    DeliveryRequests;                                         // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x98];                                      // 0x0028(0x0098) MISSED OFFSET
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
