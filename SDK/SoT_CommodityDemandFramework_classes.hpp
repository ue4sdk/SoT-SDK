#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CommodityDemandFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CommodityDemandFramework.CommodityDemandFrameworkEditorSettings
// 0x0010 (0x0048 - 0x0038)
class UCommodityDemandFrameworkEditorSettings : public UDeveloperSettings
{
public:
	FStringAssetReference                              CommodityDataFileLocation;                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityDemandFrameworkEditorSettings"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommodityDemandFrameworkSettings
// 0x0030 (0x0068 - 0x0038)
class UCommodityDemandFrameworkSettings : public UDeveloperSettings
{
public:
	float                                              DemandRefreshFrequencyInSeconds;                          // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	FName                                              DemandCollectionId;                                       // 0x003C(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                CommodityPurchaseLockoutInGameDays;                       // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                InGameHourWhenCommoditiesRestock;                         // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	FGameTime                                          CommodityRedemptionTimeOutPeriodInDays;                   // 0x0050(0x0008) (Edit, Config)
	FStringAssetReference                              NPCListAsset;                                             // 0x0058(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityDemandFrameworkSettings"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommodityDemandServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UCommodityDemandServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityDemandServiceInterface"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommodityDemandService
// 0x0040 (0x0410 - 0x03D0)
class ACommodityDemandService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03D0(0x0020) MISSED OFFSET
	FActiveNPCDemands                                  ActiveCommodityDemands;                                   // 0x03F0(0x0020) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityDemandService"));
		return ptr;
	}


	void OnRep_ActiveCommodityDemands();
};


// Class CommodityDemandFramework.CommodityDemandStorageInterface
// 0x0000 (0x0028 - 0x0028)
class UCommodityDemandStorageInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityDemandStorageInterface"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommodityDemandStorageProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UCommodityDemandStorageProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityDemandStorageProviderInterface"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommodityEntitlementRedemptionAsset
// 0x0010 (0x0038 - 0x0028)
class UCommodityEntitlementRedemptionAsset : public UDataAsset
{
public:
	TArray<FEntitlementToRedeemItems>                  CommoditiesForRedemption;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityEntitlementRedemptionAsset"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommodityItemDesc
// 0x0010 (0x0140 - 0x0130)
class UCommodityItemDesc : public UBootyItemDesc
{
public:
	FCommoditySelectionType                            CommodityType;                                            // 0x0130(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<ECommodityDemand>                      CommodityDemand;                                          // 0x0138(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityItemDesc"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommodityPurchaseTrackingComponent
// 0x0080 (0x0148 - 0x00C8)
class UCommodityPurchaseTrackingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00C8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityPurchaseTrackingComponent"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommodityRedemptionInterface
// 0x0000 (0x0028 - 0x0028)
class UCommodityRedemptionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityRedemptionInterface"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommodityRedemptionComponent
// 0x00C8 (0x0190 - 0x00C8)
class UCommodityRedemptionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	FText                                              RedeemTooltipText;                                        // 0x00D0(0x0038) (Edit)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0108(0x0078) MISSED OFFSET
	TArray<AActor*>                                    PendingRedemptions;                                       // 0x0180(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityRedemptionComponent"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommoditySourceInterface
// 0x0000 (0x0028 - 0x0028)
class UCommoditySourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommoditySourceInterface"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommoditySourceComponent
// 0x0010 (0x00D8 - 0x00C8)
class UCommoditySourceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	FName                                              NPCIdentifier;                                            // 0x00D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommoditySourceComponent"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommodityTokenEntitlementDesc
// 0x0010 (0x00E8 - 0x00D8)
class UCommodityTokenEntitlementDesc : public UEntitlementDesc
{
public:
	FName                                              NPCToRedeemAt;                                            // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            ItemToRedeemFor;                                          // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityTokenEntitlementDesc"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CommodityTypeDataAsset
// 0x0010 (0x0038 - 0x0028)
class UCommodityTypeDataAsset : public UDataAsset
{
public:
	TArray<FCommodityTypeDataEntry>                    CommodityEntries;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CommodityTypeDataAsset"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CrateFillerInterface
// 0x0000 (0x0028 - 0x0028)
class UCrateFillerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CrateFillerInterface"));
		return ptr;
	}

};


// Class CommodityDemandFramework.CrateFillerComponent
// 0x0010 (0x00D8 - 0x00C8)
class UCrateFillerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.CrateFillerComponent"));
		return ptr;
	}

};


// Class CommodityDemandFramework.DeliverableCommodityRequirement
// 0x0000 (0x0030 - 0x0030)
class UDeliverableCommodityRequirement : public UDeliverableRequirementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.DeliverableCommodityRequirement"));
		return ptr;
	}

};


// Class CommodityDemandFramework.IsWieldedCommodityItemInDemandStatCondition
// 0x0020 (0x0050 - 0x0030)
class UIsWieldedCommodityItemInDemandStatCondition : public UTargetedStatCondition
{
public:
	TEnumAsByte<ECommodityDemand>                      CommodityDemand;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0031(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.IsWieldedCommodityItemInDemandStatCondition"));
		return ptr;
	}

};


// Class CommodityDemandFramework.SpecificItemsCrateFillerComponent
// 0x0018 (0x00E0 - 0x00C8)
class USpecificItemsCrateFillerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<FStorageContainerNode>                      ItemsToFillCrateWith;                                     // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.SpecificItemsCrateFillerComponent"));
		return ptr;
	}

};


// Class CommodityDemandFramework.WasWieldedCommodityItemBoughtAtDemandStatCondition
// 0x0008 (0x0038 - 0x0030)
class UWasWieldedCommodityItemBoughtAtDemandStatCondition : public UTargetedStatCondition
{
public:
	TEnumAsByte<ECommodityDemand>                      CommodityDemand;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommodityDemandFramework.WasWieldedCommodityItemBoughtAtDemandStatCondition"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
