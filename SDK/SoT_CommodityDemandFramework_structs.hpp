#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CommodityDemandFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Time_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_DeliverableFramework_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CommodityDemandFramework.ActiveCommodityDemands
// 0x0020
struct FActiveCommodityDemands
{
	TArray<struct FName>                               CommodityIds;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<TEnumAsByte<ECommodityDemand>>              CommodityDemands;                                         // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct CommodityDemandFramework.ActiveNPCDemands
// 0x0020
struct FActiveNPCDemands
{
	TArray<struct FName>                               NPCIds;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FActiveCommodityDemands>             NPCDemands;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct CommodityDemandFramework.CommoditySelectionType
// 0x0008
struct FCommoditySelectionType
{
	struct FName                                       CommodityType;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CommodityDemandFramework.CommodityDescWithRedeemId
// 0x0010
struct FCommodityDescWithRedeemId
{
	struct FCommoditySelectionType                     RedeemId;                                                 // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	class UClass*                                      RedeemItemDesc;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct CommodityDemandFramework.EntitlementToRedeemItems
// 0x0018
struct FEntitlementToRedeemItems
{
	class UClass*                                      RequiredEntitlement;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCommodityDescWithRedeemId>          RedeemItems;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct CommodityDemandFramework.CommodityTypeDataEntry
// 0x0010
struct FCommodityTypeDataEntry
{
	struct FName                                       CommodityType;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DisplayName;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct CommodityDemandFramework.EventCommodityCrateRedeemed
// 0x0018
struct FEventCommodityCrateRedeemed
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct CommodityDemandFramework.CommodityRedemptionTrackingModel
// 0x0010
struct FCommodityRedemptionTrackingModel
{
	uint16_t                                           EntitlementDesc;                                          // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NPCName;                                                  // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	int64_t                                            TickWhenTracked;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CommodityDemandFramework.CommodityTrackingModel
// 0x0020
struct FCommodityTrackingModel
{
	struct FGuid                                       ItemOfferId;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NPCName;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	int64_t                                            TickWhenTracked;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CommodityDemandFramework.TrackCommodityPurchaseOnServerRpc
// 0x0030 (0x0040 - 0x0010)
struct FTrackCommodityPurchaseOnServerRpc : public FBoxedRpc
{
	class UObject*                                     CommodityDemandStorageObject;                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NPCName;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ItemOfferId;                                              // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      ItemClientId;                                             // 0x0030(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
