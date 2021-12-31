#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_ShipDamage_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShipDamage.DistanceAndLevelOfDamage
// 0x0008
struct FDistanceAndLevelOfDamage
{
	float                                              DistanceLimit;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LevelOfDamage;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShipDamage.ShipPartLevelsOfDamage
// 0x0030
struct FShipPartLevelsOfDamage
{
	TAssetPtr<class UClass>                            ActorClass;                                               // 0x0000(0x0020) (Edit)
	TArray<FDistanceAndLevelOfDamage>                  DamagePerDistance;                                        // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShipDamage.ShipDamageParams
// 0x0010
struct FShipDamageParams
{
	TArray<FShipPartLevelsOfDamage>                    DamageParams;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShipDamage.HullDamageHit
// 0x0024
struct FHullDamageHit
{
	FVector                                            HitPosition;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FVector                                            HitNormal;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitStrength;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HitLevel;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasDecal;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct ShipDamage.EventShipDamageApplied
// 0x0070
struct FEventShipDamageApplied
{
	AActor*                                            Ship;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FName                                              DamagedShipPartIdentifier;                                // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NewDamageLevel;                                           // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	FImpactDamageEvent                                 ImpactDamageEvent;                                        // 0x0018(0x0058) (BlueprintVisible)
};

// ScriptStruct ShipDamage.EventShipDamaged
// 0x0060
struct FEventShipDamaged
{
	AActor*                                            Ship;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FImpactDamageEvent                                 ImpactDamageEvent;                                        // 0x0008(0x0058) (BlueprintVisible)
};

// ScriptStruct ShipDamage.DamageZoneDamageLevelChanged
// 0x0010
struct FDamageZoneDamageLevelChanged
{
	AActor*                                            DamageZone;                                               // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DamageLevel;                                              // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShipDamage.AppliedDamageToShipEvent
// 0x0010
struct FAppliedDamageToShipEvent
{
	UClass*                                            ShipType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	AActor*                                            Ship;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
