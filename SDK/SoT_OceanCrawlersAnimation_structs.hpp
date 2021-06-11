#pragma once

// Sea of Thieves (2.1) SDK

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
// 0x0020
struct FOceanCrawlerLocomotionAnimationDataStructure
{
	class UAnimSequence*                               Idle;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               LocomotionOutOf;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace1D*                               LocomotionOutOfAsBlendspace;                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 Locomotion;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OceanCrawlersAnimation.OceanCrawlerSporeBreathAnimationData
// 0x0018
struct FOceanCrawlerSporeBreathAnimationData
{
	class UBlendSpace1D*                               Into;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace1D*                               Locomotion;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace1D*                               Outof;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OceanCrawlersAnimation.OceanCrawlerAnimationDataStructure
// 0x0058
struct FOceanCrawlerAnimationDataStructure
{
	struct FOceanCrawlerLocomotionAnimationDataStructure LocomotionData;                                           // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UCustomAnimationMontageDefinitionListingDataAsset* MontageData;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAthenaAnimationWeaponDataAsset*             AttackAnimations;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitReactionAnimationData                   HitReactionData;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FOceanCrawlerSporeBreathAnimationData       SporeBreathData;                                          // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCustomAnimationMontageId                   DeathMontageId;                                           // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
