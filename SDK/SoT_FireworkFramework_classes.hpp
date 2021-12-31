#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_FireworkFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FireworkFramework.FireworkAmbientLightComponent
// 0x0050 (0x04C0 - 0x0470)
class UFireworkAmbientLightComponent : public UAmbientLightSourceComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0470(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkAmbientLightComponent"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkDamagerType
// 0x0000 (0x0028 - 0x0028)
class UFireworkDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkDamagerType"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkDataAsset
// 0x0130 (0x0158 - 0x0028)
class UFireworkDataAsset : public UDataAsset
{
public:
	FWeightedProbabilityRangeOfRanges                  PercentageTimeUntilTrailDisappears;                       // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  TimeUntilExplosion;                                       // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	bool                                               IsFlare;                                                  // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldCastAmbientLight;                                   // 0x0089(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	FFireworkAmbientLightData                          FireworkAmbientLightData;                                 // 0x008C(0x0014) (Edit, DisableEditOnInstance)
	TArray<FWeightedFireworkVFXData>                   Explosions;                                               // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FWeightedProbabilityRange                          NumExplosions;                                            // 0x00B0(0x0020) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  TimeBetweenExplosions;                                    // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  ExplosionLocationOffset;                                  // 0x0100(0x0030) (Edit, DisableEditOnInstance)
	UWwiseObjectPoolWrapper*                           ExplosionSfxPool;                                         // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       LaunchSfx;                                                // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            CameraShake;                                              // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShakeInnerRadiusMultiplier;                         // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxExplosionRadius;                                       // 0x014C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UForceFeedbackEffect*                              ExplosionRumble;                                          // 0x0150(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkDataAsset"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkExplosion
// 0x00C8 (0x0498 - 0x03D0)
class AFireworkExplosion : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	FGeneratedFireworkData                             GeneratedFireworkData;                                    // 0x03D8(0x0060) (Transient)
	USceneComponent*                                   RootSceneComponent;                                       // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UFireworkAmbientLightComponent*                    FireworkAmbientLightComponent;                            // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UParticleSystemComponent*                          SpawnedExplosionParticles;                                // 0x0448(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	FWwiseEmitter                                      AudioEmitter;                                             // 0x0450(0x0020) (Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0470(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkExplosion"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkItemInfo
// 0x0020 (0x0520 - 0x0500)
class AFireworkItemInfo : public AItemInfo
{
public:
	ULoadableFireworkComponent*                        LoadableProjectileComponent;                              // 0x0500(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	FStringAssetReference                              FireworkDataAsset;                                        // 0x0508(0x0010) (Edit, ZeroConstructor)
	int                                                GeneratedDataRNGSeed;                                     // 0x0518(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x051C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkItemInfo"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UFireworkServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkServiceInterface"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkProjectile
// 0x0110 (0x0718 - 0x0608)
class AFireworkProjectile : public ALaunchableProjectile
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0608(0x0010) MISSED OFFSET
	USphereComponent*                                  CollisionComponent;                                       // 0x0618(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UStaticMeshComponent*                              MeshComponent;                                            // 0x0620(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UExplosionComponent*                               ExplosionComponent;                                       // 0x0628(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UFireworkStatsComponent*                           FireworkStatsComponent;                                   // 0x0630(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	USceneComponent*                                   MeshDirectionComponent;                                   // 0x0638(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	UProjectileAnimationComponent*                     AnimationComponent;                                       // 0x0640(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	FGeneratedFireworkData                             GeneratedFireworkData;                                    // 0x0648(0x0060) (Transient)
	unsigned char                                      UnknownData01[0x70];                                      // 0x06A8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkProjectile"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkService
// 0x0090 (0x0460 - 0x03D0)
class AFireworkService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x03D0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkService"));
		return ptr;
	}

};


// Class FireworkFramework.FireworksSettings
// 0x0018 (0x0050 - 0x0038)
class UFireworksSettings : public UDeveloperSettings
{
public:
	float                                              FlashbangRadius;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlashbangFlashTimer;                                      // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlashbangFadeOutTimer;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlashbangCooldown;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoadedFuseTimer;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworksSettings"));
		return ptr;
	}

};


// Class FireworkFramework.FireworksSettingsDataAsset
// 0x0040 (0x0068 - 0x0028)
class UFireworksSettingsDataAsset : public UDataAsset
{
public:
	float                                              LoadedFuseTimer;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	UWwiseObjectPoolWrapper*                           FuseSoundWisePool;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       FuseActivateSoundPlayEvent;                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       FuseSoundPlayEvent;                                       // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       FuseSoundStopEvent;                                       // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UObject*                                           FuseParticleSystem;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FStringAssetReference                              FuseMeshAssetReference;                                   // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworksSettingsDataAsset"));
		return ptr;
	}

};


// Class FireworkFramework.FireworkStatsComponent
// 0x00C0 (0x0188 - 0x00C8)
class UFireworkStatsComponent : public UActorComponent
{
public:
	float                                              FlareRadius;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	int                                                NumberOfFireworksFiredAtNight;                            // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireworksFiredAtNightRadius;                              // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FiredFireworksAtNightTimer;                               // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xAC];                                      // 0x00DC(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.FireworkStatsComponent"));
		return ptr;
	}

};


// Class FireworkFramework.ImpactProjectileIdFirework
// 0x0000 (0x0028 - 0x0028)
class UImpactProjectileIdFirework : public UImpactProjectileId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.ImpactProjectileIdFirework"));
		return ptr;
	}

};


// Class FireworkFramework.LoadableFireworkComponent
// 0x0010 (0x0138 - 0x0128)
class ULoadableFireworkComponent : public ULoadableProjectileComponent
{
public:
	bool                                               ShouldProjectileTrailDoReflections;                       // 0x0128(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldUseGlobalOverrideFuseTimer;                         // 0x0129(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldUseGlobalOverrideFuseSfx;                           // 0x012A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldUseGlobalOverrideFuseVfx;                           // 0x012B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldUseGlobalOverrideFuseMesh;                          // 0x012C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
	UFireworksSettingsDataAsset*                       FireworksSettingsDataAsset;                               // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.LoadableFireworkComponent"));
		return ptr;
	}

};


// Class FireworkFramework.ProjectileAnimationComponent
// 0x01C8 (0x0290 - 0x00C8)
class UProjectileAnimationComponent : public UActorComponent
{
public:
	TArray<FWeightedProjectileMeshAnimationData>       ProjectileAnimationCurves;                                // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UStaticMeshComponent*                              MeshComponent;                                            // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	FRuntimeVectorCurve                                AnimationOffsetCurve;                                     // 0x00E0(0x0170) (Transient)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0250(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.ProjectileAnimationComponent"));
		return ptr;
	}

};


// Class FireworkFramework.PrototypeFireworkProjectile
// 0x0098 (0x06A0 - 0x0608)
class APrototypeFireworkProjectile : public ALaunchableProjectile
{
public:
	USceneComponent*                                   Root;                                                     // 0x0608(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UCapsuleComponent*                                 FireworkCollision;                                        // 0x0610(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UStaticMeshComponent*                              FireworkMesh;                                             // 0x0618(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	FFloatInterval                                     FireworkTravelDistanceRangeInMeters;                      // 0x0620(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FRuntimeFloatCurve>                         FireworkSpeedCurves;                                      // 0x0628(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FFloatInterval                                     TrajectoryAngleRange;                                     // 0x0638(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FRuntimeFloatCurve>                         FireworkTrajectoryCurves;                                 // 0x0640(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<FRuntimeVectorCurve>                        FireworkTrajectoryOffsetAnimationCurves;                  // 0x0650(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0660(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FireworkFramework.PrototypeFireworkProjectile"));
		return ptr;
	}


	void Explode();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
