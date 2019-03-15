#pragma once

// Sea of Thieves (1.4) SDK

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

// ScriptStruct ShipDamage.ActorClassAndLevelOfDamage
// 0x0028
struct FActorClassAndLevelOfDamage
{
	TAssetPtr<class UClass>                            ActorClass;                                               // 0x0000(0x0020) (Edit, BlueprintVisible)
	float                                              ChanceOfDamage;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LevelOfDamage;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShipDamage.ShipPartsDamageMap
// 0x0010
struct FShipPartsDamageMap
{
	TArray<struct FActorClassAndLevelOfDamage>         DamageMap;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
