#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_Kraken_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum NaturalDisasters.EEarthquakeState
enum class EEarthquakeState : uint8_t
{
	EEarthquakeState__Dormant      = 0,
	None                           = 1,
	EEarthquakeState__EEarthquakeState_MAX = 2
};


// Enum NaturalDisasters.EGeyserState
enum class EGeyserState : uint8_t
{
	EGeyserState__Dormant          = 0,
	None                           = 1
};


// Enum NaturalDisasters.EVolcanoState
enum class EVolcanoState : uint8_t
{
	EVolcanoState__Dormant         = 0,
	None                           = 1,
	EGameplayEffectAttributeCaptureSource__Source = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

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

// ScriptStruct NaturalDisasters.EarthquakeDistanceThrottling
// 0x000C
struct FEarthquakeDistanceThrottling
{
	float                                              DistanceInMetres;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumber;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct NaturalDisasters.EarthquakeSurfaceEffect
// 0x0018
struct FEarthquakeSurfaceEffect
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UObject*>                             LocalPlayerEffects;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct NaturalDisasters.GeyserSpawnAngleOption
// 0x000C
struct FGeyserSpawnAngleOption
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Range;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
