#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_FireworkFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_RareAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FireworkFramework.FireworkAmbientLightData
// 0x0014
struct FFireworkAmbientLightData
{
	float                                              FadeInTimer;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTimer;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifetimeTimer;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbientIntensity;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FireworkFramework.WeightedFireworkVFXData
// 0x0030
struct FWeightedFireworkVFXData
{
	UObject*                                           VFX;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       Sfx;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       SecondarySFX;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FLinearColor                                       AmbientLightColour;                                       // 0x001C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FireworkFramework.FireworkExplosionData
// 0x0040
struct FFireworkExplosionData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	UObject*                                           VFX;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       Sfx;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       SecondarySFX;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct FireworkFramework.GeneratedFireworkData
// 0x0060
struct FGeneratedFireworkData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
	FFireworkAmbientLightData                          FireworkAmbientLightData;                                 // 0x000C(0x0014)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	TArray<FFireworkExplosionData>                     ExplosionData;                                            // 0x0028(0x0010) (ZeroConstructor)
	UWwiseObjectPoolWrapper*                           SfxPool;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       LaunchSfx;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	UClass*                                            CameraShake;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	UForceFeedbackEffect*                              ExplosionRumble;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FireworkFramework.WeightedProjectileMeshAnimationData
// 0x0178
struct FWeightedProjectileMeshAnimationData
{
	FRuntimeVectorCurve                                AnimationCurve;                                           // 0x0000(0x0170) (Edit, DisableEditOnInstance)
	float                                              Weight;                                                   // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
