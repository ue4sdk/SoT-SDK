#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_EmissaryLevel_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"
#include "SoT_EmissaryFramework_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_ItemQuality_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmissaryLevel.MaterialVisualisation
// 0x0030
struct FMaterialVisualisation
{
	struct FActorComponentSelector                     TargetMesh;                                               // 0x0000(0x0010) (Edit)
	float                                              TransitionTime;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndex;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActiveValue;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InactiveValue;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.LightVisualisation
// 0x0028
struct FLightVisualisation
{
	struct FActorComponentSelector                     TargetLight;                                              // 0x0000(0x0010) (Edit)
	float                                              TransitionTime;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActiveValue;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InactiveValue;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class ULightComponent*                             Light;                                                    // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.ParticleVisualisation
// 0x0028
struct FParticleVisualisation
{
	struct FActorComponentSelector                     TargetParticles;                                          // 0x0000(0x0010) (Edit)
	float                                              Delay;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DelayAfterPutOutParticles;                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PutOutParticles;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryFlagMeshReferences
// 0x0020
struct FEmissaryFlagMeshReferences
{
	struct FStringAssetReference                       BackOfShipEmissaryFlagMeshAssetReference;                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       MastEmissaryFlagMeshAssetReference;                       // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryLevelData
// 0x0070
struct FEmissaryLevelData
{
	int                                                LevelTarget;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FEmissaryFlagMeshReferences                 EmissaryFlagMeshAssetReferences;                          // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UWeightedItemDescSpawnDataAsset>   EmissaryFlotsamSpawnDataAsset;                            // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	struct FRewardId                                   EmissaryDeactivationReward;                               // 0x0048(0x0008) (Edit, DisableEditOnInstance)
	TArray<struct FPlayerStat>                         StatsToFireOnEmissaryLevelReached;                        // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       TreasureSoldNotificationFlag;                             // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryCompanyCosmetics
// 0x0020
struct FEmissaryCompanyCosmetics
{
	TArray<class UClass*>                              CompanyCostumeCosmetics;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              CompanyShipCosmetics;                                     // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryLevelEntry
// 0x0078
struct FEmissaryLevelEntry
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FEmissaryLevelData>                  CompanyLevelData;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UDataAsset*                                  MaxRankPopUpToastData;                                    // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataAsset*                                  EmissarySunkPopUpToastData;                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FEmissaryCompanyCosmetics                   CompanyCosmetics;                                         // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FPlayerStat>                         StatsToFireOnFullEmissaryClothing;                        // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPlayerStat>                         StatsToFireOnFullEmissaryShipCustomizations;              // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPlayerStat>                         StatsToFireOnFullShipCustomizationsAndClothing;           // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryPointBoostMultipliers
// 0x0008
struct FEmissaryPointBoostMultipliers
{
	float                                              PlayerWearningCompanyCostume;                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrewShipFullyEquippedWithCompanyCosmetics;                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryCompanyCampaignScale
// 0x000C
struct FEmissaryCompanyCampaignScale
{
	struct FName                                       Campaign;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryCompanyCampaignKillPlayer
// 0x0018
struct FEmissaryCompanyCampaignKillPlayer
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FEmissaryCompanyCampaignScale>       Scales;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryCompanyCampaignGameEvent
// 0x0018
struct FEmissaryCompanyCampaignGameEvent
{
	class UClass*                                      EventType;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FEmissaryCompanyCampaignScale>       Scales;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryCompanyCampaignSettings
// 0x0028
struct FEmissaryCompanyCampaignSettings
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FEmissaryCompanyCampaignKillPlayer>  KillPlayers;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEmissaryCompanyCampaignGameEvent>   GameEvents;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryEventAward
// 0x0008
struct FEmissaryEventAward
{
	bool                                               FirstTimeOnly;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NotOriginalOwner;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEmissaryQualityLevel>                 ItemQualityRequirement;                                   // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                EmissaryLevelIncrease;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryKillScaleFactor
// 0x0008
struct FEmissaryKillScaleFactor
{
	int                                                KillCount;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleFactor;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryKillPlayerReward
// 0x0028
struct FEmissaryKillPlayerReward
{
	int                                                EmissaryLevelIncrease;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FEmissaryKillScaleFactor>            EmissaryLevelKillCountScaleFactors;                       // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ValidEmissariesToKill;                                    // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryGameEventsReward
// 0x0010
struct FEmissaryGameEventsReward
{
	class UClass*                                      FinishedEventType;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Amount;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct EmissaryLevel.EmissaryCompanyActionReward
// 0x0008
struct FEmissaryCompanyActionReward
{
	TEnumAsByte<EEmisaryCompanyActionType>             CompanyActionType;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Amount;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryActionRewardData
// 0x0078
struct FEmissaryActionRewardData
{
	TArray<struct FEmissaryEventAward>                 OwnershipChangedRewards;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEmissaryEventAward>                 PlacedOnShipRewards;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FEmissaryKillPlayerReward                   KillPlayerReward;                                         // 0x0020(0x0028) (Edit, DisableEditOnInstance)
	TArray<struct FEmissaryGameEventsReward>           GameEventsRewards;                                        // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEmissaryEventAward>                 HandinRewards;                                            // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEmissaryCompanyActionReward>        CompanyActionRewards;                                     // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryRewardEntry
// 0x0080
struct FEmissaryRewardEntry
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FEmissaryActionRewardData                   ActionRewardData;                                         // 0x0008(0x0078) (Edit, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.PerCompanyVotes
// 0x0018
struct FPerCompanyVotes
{
	TArray<class APlayerState*>                        MemberVotes;                                              // 0x0000(0x0010) (ZeroConstructor, Transient)
	struct FName                                       CompanyIdentifier;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.CrewMemberVotes
// 0x0020
struct FCrewMemberVotes
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPerCompanyVotes>                    CompanyVotes;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmissaryLevel.EmissaryLevelStatusStatInfo
// 0x000C
struct FEmissaryLevelStatusStatInfo
{
	struct FPlayerStat                                 StatToFire;                                               // 0x0000(0x000C) (Edit, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryPointsBoostCriteria
// 0x0008
struct FEmissaryPointsBoostCriteria
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct EmissaryLevel.TrackedPlayerKillEntry
// 0x0018
struct FTrackedPlayerKillEntry
{
	class FString                                      KilledPlayer;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                KillCount;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              KillTime;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.ChaliceStatuePhaseUpdate
// 0x0004
struct FChaliceStatuePhaseUpdate
{
	int                                                NewLevel;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryEncounteredSkellyFortNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissaryEncounteredSkellyFortNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryEncounteredAIShipEvent
// 0x0008
struct FEmissaryEncounteredAIShipEvent
{
	struct FName                                       CompanyName;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryEncounteredTinySharkEvent
// 0x0008
struct FEmissaryEncounteredTinySharkEvent
{
	struct FName                                       CompanyName;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryEncounteredKrakenEvent
// 0x0008
struct FEmissaryEncounteredKrakenEvent
{
	struct FName                                       CompanyName;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryEntitlementPurchasedEvent
// 0x0010
struct FEmissaryEntitlementPurchasedEvent
{
	struct FGuid                                       OfferId;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryLevelRankChange
// 0x000C
struct FEmissaryLevel_FEmissaryLevelRankChange
{
	int                                                NewLevel;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       CompanyName;                                              // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryActivated
// 0x0008
struct FEmissaryLevel_FEmissaryActivated
{
	struct FName                                       CompanyName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryKilledAnotherEmissaryNetworkEvent
// 0x0010 (0x0020 - 0x0010)
struct FEmissaryKilledAnotherEmissaryNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       VictimCompanyName;                                        // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissarySoldLootNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissarySoldLootNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryStoleLootNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissaryStoleLootNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryDiscoveredCargoRunCrateNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissaryDiscoveredCargoRunCrateNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryDiscoveredLootNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissaryDiscoveredLootNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissarySecuredLootOnShipNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissarySecuredLootOnShipNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissarySunkNetworkEvent
// 0x0010 (0x0020 - 0x0010)
struct FEmissarySunkNetworkEvent : public FNetworkEventStruct
{
	class UDataAsset*                                  PopUpDesc;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CompanyName;                                              // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryMaxLevelReachedNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissaryMaxLevelReachedNetworkEvent : public FNetworkEventStruct
{
	class UDataAsset*                                  PopUpDesc;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryDeactivatedNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FEmissaryDeactivatedNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct EmissaryLevel.EmissaryStateUpdateEvent
// 0x000C
struct FEmissaryStateUpdateEvent
{
	float                                              CurrentRepTotal;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CompanyId;                                                // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryProgressUpdatedNetworkEvent
// 0x0010 (0x0020 - 0x0010)
struct FEmissaryProgressUpdatedNetworkEvent : public FNetworkEventStruct
{
	float                                              OldRepTotal;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NewRepTotal;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CompanyId;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryLevelProgressUpdatedEvent
// 0x0014
struct FEmissaryLevelProgressUpdatedEvent
{
	float                                              LevelProgress;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.ActivateEmissaryMaxRankQuestForSession
// 0x0001
struct FActivateEmissaryMaxRankQuestForSession
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmissaryLevel.UpdateEmissaryValueForCompany
// 0x0030
struct FUpdateEmissaryValueForCompany
{
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Company;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBootyRewardType>                      RewardType;                                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                UpdateAmount;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.ReactivateEmissaryForMigratedCrew
// 0x0028
struct FReactivateEmissaryForMigratedCrew
{
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Company;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.DeactivateEmissaryForCrew
// 0x0030
struct FDeactivateEmissaryForCrew
{
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Company;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmissaryDeactivateReason>             EmissaryDeactivateReason;                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                EmissaryTotal;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.ActivateEmissaryForCrew
// 0x0028
struct FActivateEmissaryForCrew
{
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Company;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryLevelChanged
// 0x001C
struct FEmissaryLevelChanged
{
	int                                                NewLevel;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CompanyName;                                              // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryLevelResetProgress
// 0x0001
struct FEmissaryLevelResetProgress
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmissaryLevel.PlayerRemovedFromEmissaryCrew
// 0x0001
struct FPlayerRemovedFromEmissaryCrew
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmissaryLevel.PlayerAddedToEmissaryCrew
// 0x0010
struct FPlayerAddedToEmissaryCrew
{
	int                                                EmissaryLevel;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissaryLevelProgress;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EmissaryCompany;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryRoleplayActionTelemetryEvent
// 0x002C
struct FEmissaryRoleplayActionTelemetryEvent
{
	struct FGuid                                       EmissarySessionId;                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EmissaryCompany;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                EmissaryRank;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBootyRewardType>                      ActionName;                                               // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                PointsRewarded;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PointsAccumulated;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PointsRequiredToNextRank;                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissarySessionEndTelemetryEvent
// 0x001C
struct FEmissarySessionEndTelemetryEvent
{
	struct FGuid                                       EmissarySessionId;                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EmissaryCompany;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmissaryDeactivateReason>             DisbandedReason;                                          // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct EmissaryLevel.EmissarySessionStartTelemetryEvent
// 0x001C
struct FEmissarySessionStartTelemetryEvent
{
	struct FGuid                                       EmissarySessionId;                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EmissaryCompany;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                EmisarriesOnServerCount;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryVotePassedEvent
// 0x0030
struct FEmissaryVotePassedEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	TArray<class APlayerState*>                        Voters;                                                   // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmissaryLevel.EmissaryVotesChangedEvent
// 0x0001
struct FEmissaryVotesChangedEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmissaryLevel.EmissaryVoteRemovedEvent
// 0x0008
struct FEmissaryVoteRemovedEvent
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryVoteAddedEvent
// 0x0008
struct FEmissaryVoteAddedEvent
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.VoteAddedNetworkEvent
// 0x0018 (0x0028 - 0x0010)
struct FVoteAddedNetworkEvent : public FBoxedRpc
{
	struct FName                                       CompanyId;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.VoteRemovedNetworkEvent
// 0x0018 (0x0028 - 0x0010)
struct FVoteRemovedNetworkEvent : public FBoxedRpc
{
	struct FName                                       CompanyId;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
