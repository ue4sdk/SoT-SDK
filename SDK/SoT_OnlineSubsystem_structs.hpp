#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_OnlineSubsystem_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	FName                                              InterfaceName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	UObject*                                           InterfaceObject;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	FName                                              InterfaceName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FString                                            InterfaceClassName;                                       // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x00A0
struct FInAppPurchaseProductInfo
{
	FString                                            Identifier;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            TransactionIdentifier;                                    // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            DisplayName;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            DisplayDescription;                                       // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            DisplayPrice;                                             // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            CurrencyCode;                                             // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            CurrencySymbol;                                           // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            DecimalSeparator;                                         // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            GroupingSeparator;                                        // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            ReceiptData;                                              // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x0020
struct FInAppPurchaseRestoreInfo
{
	FString                                            Identifier;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            ReceiptData;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.AchievementUpdatedEvent
// 0x0038
struct FAchievementUpdatedEvent
{
	FString                                            AchievementId;                                            // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           Progress;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Successful;                                               // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	FString                                            Reason;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            Platform;                                                 // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.OnlineStoreCatalogItem
// 0x0090
struct FOnlineStoreCatalogItem
{
	FString                                            ProductId;                                                // 0x0000(0x0010) (ZeroConstructor)
	FString                                            Title;                                                    // 0x0010(0x0010) (ZeroConstructor)
	FString                                            Description;                                              // 0x0020(0x0010) (ZeroConstructor)
	FString                                            FormattedPrice;                                           // 0x0030(0x0010) (ZeroConstructor)
	FString                                            FormattedBasePrice;                                       // 0x0040(0x0010) (ZeroConstructor)
	bool                                               IsOnSale;                                                 // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	FDateTime                                          SaleEndDate;                                              // 0x0058(0x0008) (ZeroConstructor)
	FString                                            ImageUri;                                                 // 0x0060(0x0010) (ZeroConstructor)
	FString                                            CurrencyCode;                                             // 0x0070(0x0010) (ZeroConstructor)
	TArray<FString>                                    MetaTags;                                                 // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x0018
struct FInAppPurchaseProductRequest
{
	FString                                            ProductIdentifier;                                        // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bIsConsumable;                                            // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
