#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_NaturalDisasters_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_ResourceContentionFramework_classes.hpp"
#include "SoT_StatusEffects_classes.hpp"
#include "SoT_Kraken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NaturalDisasters.VolcanoTargetChances
// 0x0058
struct FVolcanoTargetChances
{
	float                                              OnTarget;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearMiss;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Random;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRange                   OnTargetNumExtraShots;                                    // 0x0010(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NearMissNumExtraShots;                                    // 0x0030(0x0020) (Edit, DisableEditOnInstance)
	float                                              CoolDownDuration;                                         // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct NaturalDisasters.WeightedVolcanoProjectile
// 0x00C0
struct FWeightedVolcanoProjectile
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ProjectileClass;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeedMinAtInnerRadius;                          // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeedMaxAtInnerRadius;                          // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeedMinAtOuterRadius;                          // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeedMaxAtOuterRadius;                          // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileGravityScale;                                   // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           RotationRatePitch;                                        // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           RotationRateRoll;                                         // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           RotationRateYaw;                                          // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	class UWwiseEvent*                                 LaunchAudioPlayEvent;                                     // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct NaturalDisasters.VolcanoSetupDataEmbersEntry
// 0x0010
struct FVolcanoSetupDataEmbersEntry
{
	float                                              MaxDistanceInMetres;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     Effect;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct NaturalDisasters.WeightedAshenLordVolcanoProjectile
// 0x00D0
struct FWeightedAshenLordVolcanoProjectile
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityMultiplier;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           Speed;                                                    // 0x0008(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           RotationRatePitch;                                        // 0x0038(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           RotationRateRoll;                                         // 0x0068(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           RotationRateYaw;                                          // 0x0098(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      ProjectileClass;                                          // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct NaturalDisasters.AshenLordWorldEndCloudAnimation
// 0x0008
struct FAshenLordWorldEndCloudAnimation
{
	float                                              ServerStartTime;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ServerLifeTime;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NaturalDisasters.EarthquakeForceFeedbackOption
// 0x0010
struct FEarthquakeForceFeedbackOption
{
	TArray<struct FLandmarkReactionEventPlayForceFeedbackEntry> ForceFeedback;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct NaturalDisasters.EarthquakeForceFeedback
// 0x0040
struct FEarthquakeForceFeedback
{
	TArray<struct FEarthquakeForceFeedbackOption>      ForceFeedbackOptions;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenRumbles;                                       // 0x0010(0x0030) (Edit, DisableEditOnInstance)
};

// ScriptStruct NaturalDisasters.PlayerFeedback
// 0x0080
struct FPlayerFeedback
{
	struct FEarthquakeForceFeedback                    ForceFeedback;                                            // 0x0000(0x0040) (Edit, DisableEditOnInstance)
	TArray<class UClass*>                              CameraShakes;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           StaggerStrength;                                          // 0x0050(0x0030) (Edit, DisableEditOnInstance)
};

// ScriptStruct NaturalDisasters.GeyserSpawnAngleOption
// 0x000C
struct FGeyserSpawnAngleOption
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Range;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct NaturalDisasters.VolcanoStateData
// 0x000C
struct FVolcanoStateData
{
	TEnumAsByte<EVolcanoState>                         State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              StateDuration;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PercentageOfMaxTargetingRange;                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NaturalDisasters.VolcanoProjectileData
// 0x001C
struct FVolcanoProjectileData
{
	int                                                WeightedVolcanoProjectileIndex;                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationRate;                                             // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NaturalDisasters.VolcanoTarget
// 0x0018
struct FVolcanoTarget
{
	TEnumAsByte<EVolcanoTargetType>                    Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVolcanoTargetHitType>                 HitType;                                                  // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumExtraShots;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct NaturalDisasters.VolcanoTargetCoolDown
// 0x0010
struct FVolcanoTargetCoolDown
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
