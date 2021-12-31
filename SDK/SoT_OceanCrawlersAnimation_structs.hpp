#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Animation_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OceanCrawlersAnimation.OceanCrawlerLocomotionAnimationDataStructure
// 0x0030
struct FOceanCrawlerLocomotionAnimationDataStructure
{
	UBlendSpace1D*                                     LocomotionIntoAsBlendspace;                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UAnimSequence*                                     Idle;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UAnimSequence*                                     LocomotionOutOf;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UBlendSpace1D*                                     LocomotionOutOfAsBlendspace;                              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UBlendSpace*                                       Locomotion;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntoDeadZone;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutOfDeadZone;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OceanCrawlersAnimation.OceanCrawlerSporeBreathAnimationData
// 0x0018
struct FOceanCrawlerSporeBreathAnimationData
{
	UBlendSpace1D*                                     Into;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UBlendSpace1D*                                     Locomotion;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UBlendSpace1D*                                     Outof;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OceanCrawlersAnimation.OceanCrawlerAnimationDataStructure
// 0x0090
struct FOceanCrawlerAnimationDataStructure
{
	FOceanCrawlerLocomotionAnimationDataStructure      LocomotionData;                                           // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	UCustomAnimationMontageDefinitionListingDataAsset* MontageData;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UAthenaAnimationWeaponDataAsset*                   AttackAnimations;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FHitReactionAnimationData                          HitReactionData;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FOceanCrawlerSporeBreathAnimationData              SporeBreathData;                                          // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<FCustomAnimationMontageId>                  AttackInterruptMontages;                                  // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	FCustomAnimationMontageId                          DeathMontageId;                                           // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FCustomAnimationMontageId                          SpawnMontageId;                                           // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FCustomAnimationMontageId                          SpawnOnShipMontageId;                                     // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FCustomAnimationMontageId                          SpawnBoardedMontageId;                                    // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
