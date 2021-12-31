#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomServerObjectMessaging.CustomServerEvent
// 0x0018
struct FCustomServerEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	FName                                              EventID;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	FDateTime                                          ServerTimeUTC;                                            // 0x0010(0x0008) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.EntityCustomServerEvent
// 0x0008 (0x0020 - 0x0018)
struct FEntityCustomServerEvent : public FCustomServerEvent
{
	int                                                EntityNetId;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.GlobalCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FGlobalCustomServerEvent : public FCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.OnCannonBallHitShipCustomServerEvent
// 0x0018 (0x0030 - 0x0018)
struct FOnCannonBallHitShipCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            CannonBallType;                                           // 0x0018(0x0010) (ZeroConstructor)
	int                                                ShipId;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.PlayerCharacterEnteredShipCustomServerEvent
// 0x0008 (0x0020 - 0x0018)
struct FPlayerCharacterEnteredShipCustomServerEvent : public FGlobalCustomServerEvent
{
	int                                                UserId;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShipId;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomServerObjectMessaging.WatercraftSpawnCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FWatercraftSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            WatercraftId;                                             // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.WatercraftDespawnCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FWatercraftDespawnCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            WatercraftId;                                             // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.TreasureSpawnedCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FTreasureSpawnedCustomServerEvent : public FGlobalCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.TreasureSoldCustomServerEvent
// 0x0050 (0x0068 - 0x0018)
struct FTreasureSoldCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            CrewId;                                                   // 0x0028(0x0010) (ZeroConstructor)
	FString                                            TreasureType;                                             // 0x0038(0x0010) (ZeroConstructor)
	FString                                            VendorId;                                                 // 0x0048(0x0010) (ZeroConstructor)
	FString                                            CompanyId;                                                // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.TreasurePickedUpCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FTreasurePickedUpCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.TreasureFoundCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FTreasureFoundCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            TreasureType;                                             // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.TreasureDroppedCustomServerEvent
// 0x0030 (0x0048 - 0x0018)
struct FTreasureDroppedCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            TreasureType;                                             // 0x0028(0x0010) (ZeroConstructor)
	FVector                                            Position;                                                 // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.ShovelCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FShovelCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.ShipSpawnedCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FShipSpawnedCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            ShipId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            ShipType;                                                 // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.ShipRepairCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FShipRepairCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            ShipId;                                                   // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.ShipOnFireEndCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FShipOnFireEndCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            ShipId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.ShipMastCollapseStateCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FShipMastCollapseStateCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            ShipId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            MastId;                                                   // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.ShipDestroyedCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FShipDestroyedCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            ShipId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.ShipDamagedCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FShipDamagedCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            ShipId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.ProjectileWeaponFiredCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FProjectileWeaponFiredCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.ProjectileHitCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FProjectileHitCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            ProjectileType;                                           // 0x0018(0x0010) (ZeroConstructor)
	FString                                            RecipientId;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerStatusEffectActivatedCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerStatusEffectActivatedCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            Effect;                                                   // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerStatusEffectDeactivatedCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerStatusEffectDeactivatedCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            Effect;                                                   // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerSpawnCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerSetFootLocationCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerSetFootLocationCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            Location;                                                 // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerRevivalCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerRevivalCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerRequiresMermaidCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FPlayerRequiresMermaidCustomServerEvent : public FGlobalCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerRadialChatCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerRadialChatCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerObjectUsageStartCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerObjectUsageStartCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerLeftGhostShipCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FPlayerLeftGhostShipCustomServerEvent : public FGlobalCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerKillAICustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerKillAICustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerItemUsageEndCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerItemUsageEndCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerItemRetrievalFromContainerCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerItemRetrievalFromContainerCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerItemEquipCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerItemEquipCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerItemAddToContainerCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerItemAddToContainerCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerInReviveableStateCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerInReviveableStateCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerHeartbeatCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerHeartbeatCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerHealthChangeCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerHealthChangeCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerGameFishingCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerGameFishingCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerEncounterStartCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FPlayerEncounterStartCustomServerEvent : public FGlobalCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerEncounterEndCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FPlayerEncounterEndCustomServerEvent : public FGlobalCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.PlayerEmoteCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerEmoteCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            Emote;                                                    // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerDeathCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerDeathCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerChangedShipLoadoutCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerChangedShipLoadoutCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            ShipId;                                                   // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerChangedLoadoutCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerChangedLoadoutCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerCapstanUsageStartCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerCapstanUsageStartCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            ShipId;                                                   // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerCapstanUsageEndCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerCapstanUsageEndCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            ShipId;                                                   // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerBucketScoopCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerBucketScoopCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerBucketEmptyCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerBucketEmptyCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerActionCannonCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerActionCannonCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            ShipId;                                                   // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.PlayerActionCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerActionCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            Action;                                                   // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.MermaidUsedCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FMermaidUsedCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.MermaidSpawnedCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FMermaidSpawnedCustomServerEvent : public FGlobalCustomServerEvent
{
	FVector                                            Position;                                                 // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.MeleeWeaponAttackCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FMeleeWeaponAttackCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.LevelLoadCompletedCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FLevelLoadCompletedCustomServerEvent : public FGlobalCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.KrakenTentacleDestroyedCustomServerEvent
// 0x0008 (0x0020 - 0x0018)
struct FKrakenTentacleDestroyedCustomServerEvent : public FGlobalCustomServerEvent
{
	int                                                TentacleRemaining;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.KrakenSpawnCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FKrakenSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	FVector                                            Position;                                                 // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.ItemSpawnCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FItemSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            ItemId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            ItemType;                                                 // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.FortWaveCompletedCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FFortWaveCompletedCustomServerEvent : public FGlobalCustomServerEvent
{

};

// ScriptStruct CustomServerObjectMessaging.FortKeyUsedCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FFortKeyUsedCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.CustomTriggerOverlapCustomServerEvent
// 0x0008 (0x0020 - 0x0018)
struct FCustomTriggerOverlapCustomServerEvent : public FGlobalCustomServerEvent
{
	int                                                TriggerNetId;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OtherNetId;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomServerObjectMessaging.CrewSessionLeaveCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FCrewSessionLeaveCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            CrewId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.CrewPlayerLeftCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FCrewPlayerLeftCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            CrewId;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.CookStartCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FCookStartCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            FoodType;                                                 // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.CookEndCustomServerEvent
// 0x0030 (0x0048 - 0x0018)
struct FCookEndCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            UserId;                                                   // 0x0018(0x0010) (ZeroConstructor)
	FString                                            FoodType;                                                 // 0x0028(0x0010) (ZeroConstructor)
	FString                                            CookedState;                                              // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.AISpawnCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FAISpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            AIId;                                                     // 0x0018(0x0010) (ZeroConstructor)
	FString                                            AIType;                                                   // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.AIShipSpawnCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FAIShipSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            AIShipId;                                                 // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.AIShipDespawnCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FAIShipDespawnCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            AIShipId;                                                 // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerObjectMessaging.AIShipDamagedCustomServerEvent
// 0x0018 (0x0030 - 0x0018)
struct FAIShipDamagedCustomServerEvent : public FGlobalCustomServerEvent
{
	FString                                            AIShipId;                                                 // 0x0018(0x0010) (ZeroConstructor)
	float                                              AIShipWaterLevel;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomServerObjectMessaging.TinySharkSpawnCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FTinySharkSpawnCustomServerEvent : public FGlobalCustomServerEvent
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
