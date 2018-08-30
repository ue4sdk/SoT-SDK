#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NaturalDisasters_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NaturalDisasters.EarthquakeSetupDataAsset
// 0x02F0 (0x0318 - 0x0028)
class UEarthquakeSetupDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           WarmUpDuration;                                           // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           EarthquakeDuration;                                       // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           CooldownDuration;                                         // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DormantDuration;                                          // 0x00B8(0x0030) (Edit, DisableEditOnInstance)
	float                                              ChanceOfTriggeringAVolcano;                               // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 PercentageThroughEarthquakeToStartVolcano;                // 0x00EC(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FPlayerFeedback                             WarmupPlayerFeedback;                                     // 0x0100(0x0080) (Edit, DisableEditOnInstance)
	struct FPlayerFeedback                             ActivePlayerFeedback;                                     // 0x0180(0x0080) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           StaggerStrengthDuration;                                  // 0x0200(0x0030) (Edit, DisableEditOnInstance)
	struct FFloatRange                                 PercentageThroughCameraShakeToStartNextOne;               // 0x0230(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 TimeToShipPush;                                           // 0x0240(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           ForceToApplyToShip;                                       // 0x0250(0x0030) (Edit, DisableEditOnInstance)
	float                                              ChanceEarthquakeTriggersGeysers;                          // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenLocalEffects;                                  // 0x0288(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumberOfLocalEffectsToTrigger;                            // 0x02B8(0x0020) (Edit, DisableEditOnInstance)
	float                                              EffectConeAngle;                                          // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectRaycastDistanceInMetres;                            // 0x02DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDistanceThrottledRandomParticleSystemPicker EarthquakeEffects;                                        // 0x02E0(0x0010) (Edit, DisableEditOnInstance)
	float                                              WarmupWindTurbulence;                                     // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 WarmupGustPower;                                          // 0x02F4(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveWindTurbulence;                                     // 0x0304(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 ActiveGustPower;                                          // 0x0308(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NaturalDisasters.EarthquakeSetupDataAsset");
		return ptr;
	}

};


// Class NaturalDisasters.Earthquake
// 0x01E8 (0x0678 - 0x0490)
class AEarthquake : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0490(0x0008) MISSED OFFSET
	class UEarthquakeSetupDataAsset*                   EarthquakeSetupData;                                      // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AVolcano*                                    AssociatedVolcano;                                        // 0x04A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AGeyserManager*                              AssociatedGeyserManager;                                  // 0x04A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EarthquakeEffectInnerRadiusOffsetInMetres;                // 0x04B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     AudioPool;                                                // 0x04B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 PlayEarthquakeLarge;                                      // 0x04C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopEarthquakeLarge;                                      // 0x04C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 PlayEarthquakeSmall;                                      // 0x04D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopEarthquakeSmall;                                      // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EarthquakeRtpcName;                                       // 0x04E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EarthquakeRtpcMin;                                        // 0x04E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EarthquakeRtpcMax;                                        // 0x04EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EarthquakeSizeToUseLargeAttenuation;                      // 0x04F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	class UCapsuleComponent*                           HitDetectionVolume;                                       // 0x04F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWindZoneComponent*                          WindZone;                                                 // 0x0500(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<EEarthquakeState>                      EarthquakeState;                                          // 0x0508(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x16F];                                     // 0x0509(0x016F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NaturalDisasters.Earthquake");
		return ptr;
	}


	void OnRep_EarthquakeState(TEnumAsByte<EEarthquakeState> OldEarthquakeState);
};


// Class NaturalDisasters.Geyser
// 0x0060 (0x04F0 - 0x0490)
class AGeyser : public AActor
{
public:
	class UGeyserSetupDataAsset*                       SetupData;                                                // 0x0490(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StartActiveAudioLoopEvent;                                // 0x0498(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopActiveAudioLoopEvent;                                 // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 PlayEruptingAudioEvent;                                   // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEmitterComponent*                      AudioEmitterComponent;                                    // 0x04B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UExplosionComponent*                         ExplosionComponent;                                       // 0x04B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveParticlesComponent;                                 // 0x04C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    EruptingParticlesComponent;                               // 0x04C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     HitTestTraceChannel;                                      // 0x04D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	class UClass*                                      GeyserHoleClass;                                          // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGeyserState>                          GeyserState;                                              // 0x04E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	class AHole*                                       GeyserHole;                                               // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NaturalDisasters.Geyser");
		return ptr;
	}


	void OnRep_GeyserState();
	void Multicast_TriggerExplosion();
};


// Class NaturalDisasters.GeyserManagerSetupDataAsset
// 0x0118 (0x0140 - 0x0028)
class UGeyserManagerSetupDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           DormantDuration;                                          // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      GeyserToSpawn;                                            // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRange                   NumGeyserGroupsToSpawn;                                   // 0x0060(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumGeysersToSpawnPerGroup;                                // 0x0080(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           SpawnDistanceFromPlayerInMetres;                          // 0x00A0(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           SpawnRadiusInMetres;                                      // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FGeyserSpawnAngleOption>             SpawnAngleRelativeToPlayerDirection;                      // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DelayBetweenEachGeyserSpawningInAGroup;                   // 0x0110(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NaturalDisasters.GeyserManagerSetupDataAsset");
		return ptr;
	}

};


// Class NaturalDisasters.GeyserManager
// 0x0010 (0x04A0 - 0x0490)
class AGeyserManager : public AActor
{
public:
	class USceneComponent*                             Root;                                                     // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGeyserManagerSetupDataAsset*                GeyserManagerSetupData;                                   // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NaturalDisasters.GeyserManager");
		return ptr;
	}

};


// Class NaturalDisasters.GeyserSetupDataAsset
// 0x00B8 (0x00E0 - 0x0028)
class UGeyserSetupDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           DormantDuration;                                          // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           InitialWarningDuration;                                   // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumSpurtsPerActivation;                                   // 0x0088(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSpurts;                                        // 0x00A8(0x0030) (Edit, DisableEditOnInstance)
	bool                                               ShouldDestroyOnDeactivation;                              // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	float                                              DestroyAfterDeactivationDelay;                            // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NaturalDisasters.GeyserSetupDataAsset");
		return ptr;
	}

};


// Class NaturalDisasters.LavaZone
// 0x00A0 (0x0530 - 0x0490)
class ALavaZone : public AActor
{
public:
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenActivations;                                   // 0x0490(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           ActiveDuration;                                           // 0x04C0(0x0030) (Edit)
	class UPhysicalMaterial*                           LavaMaterial;                                             // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              ActorsInZone;                                             // 0x04F8(0x0010) (Net, ZeroConstructor, Transient)
	bool                                               Active;                                                   // 0x0508(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               InitializeFromGlobalState;                                // 0x0509(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SelfActivating;                                           // 0x050A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x050B(0x0005) MISSED OFFSET
	TScriptInterface<class UActivateableSurfaceMaterialStatusZoneInterface> MaterialZone;                                             // 0x0510(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0520(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NaturalDisasters.LavaZone");
		return ptr;
	}


	void OnRep_ActorsInZone(TArray<class AActor*> PreviousActors);
	void OnRep_Active();
};


// Class NaturalDisasters.SuperheatedWaterSetupDataAsset
// 0x00C8 (0x00F0 - 0x0028)
class USuperheatedWaterSetupDataAsset : public UDataAsset
{
public:
	float                                              HealthChange;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBetweenHealthReduction;                               // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumWaterDepthToCauseDamage;                           // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenLargeSurfaceEffects;                           // 0x0038(0x0030) (Edit, DisableEditOnInstance)
	float                                              LargeSurfaceEffectMinimumDistanceInMetres;                // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FRandomParticleSystemPicker                 LargeSurfaceEffects;                                      // 0x0070(0x0010) (Edit, DisableEditOnInstance)
	float                                              EffectSpawnHeight;                                        // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MurkStrengthToStartEffects;                               // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSmallSurfaceEffects;                           // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumSmallSurfaceEffects;                                   // 0x00B8(0x0020) (Edit, DisableEditOnInstance)
	struct FDistanceThrottledRandomParticleSystemPicker SmallSurfaceEffects;                                      // 0x00D8(0x0010) (Edit, DisableEditOnInstance)
	float                                              SmallSurfaceEffectNearbyPlayerRadiusInMetres;             // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmallSurfaceEffectOffsetRadiusInMetres;                   // 0x00EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NaturalDisasters.SuperheatedWaterSetupDataAsset");
		return ptr;
	}

};


// Class NaturalDisasters.SuperheatedWater
// 0x00E0 (0x05E8 - 0x0508)
class ASuperheatedWater : public AMurk
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0508(0x0008) MISSED OFFSET
	class USuperheatedWaterSetupDataAsset*             SetupData;                                                // 0x0510(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCapsuleComponent*                           HitDetectionVolume;                                       // 0x0518(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<TWeakObjectPtr<class AAthenaPlayerCharacter>> PlayersInZone;                                            // 0x0520(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x0530(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NaturalDisasters.SuperheatedWater");
		return ptr;
	}


	void OnRep_PlayersInZone();
};


// Class NaturalDisasters.VolcanoSetupDataAsset
// 0x0320 (0x0348 - 0x0028)
class UVolcanoSetupDataAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           WarmUpDuration;                                           // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           EruptionDuration;                                         // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DormantDuration;                                          // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	float                                              MinimumDurationForTheEffects;                             // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           GroundAndWaterStayHotDurationAfterVolcanoFinishesDuration;// 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           ProjectileTriggerFrequency;                               // 0x00F0(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumProjectilesToTrigger;                                  // 0x0120(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumProjectilesThatCanTargetAnything;                      // 0x0140(0x0020) (Edit, DisableEditOnInstance)
	float                                              ChanceToTargetPlayers;                                    // 0x0160(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceToNearMissPlayers;                                  // 0x0164(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceToTargetShips;                                      // 0x0168(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceToNearMissShips;                                    // 0x016C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceToTargetRandomPosition;                             // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           PlayerNearMissDistanceInMetres;                           // 0x0178(0x0030) (Edit, DisableEditOnInstance)
	float                                              InnerShipNearMissRadiusInMetres;                          // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterShipNearMissRadiusInMetres;                          // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FWeightedVolcanoProjectile>          Projectiles;                                              // 0x01B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLandmarkReactionEventPlayForceFeedbackEntry> ForceFeedbackIgnitionEffect;                              // 0x01C0(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      LocalMiniProjectilesClass;                                // 0x01D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           LocalMiniProjectilesSpawnHeightAbovePlayerInMetres;       // 0x01D8(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           LocalMiniProjectilesSpawnDistanceFromPlayerInMetres;      // 0x0208(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           LocalMiniProjectilesTimeBetweenSpawns;                    // 0x0238(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   NumLocalMiniProjectilesToTrigger;                         // 0x0268(0x0020) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           LocalMiniProjectilesSpeed;                                // 0x0288(0x0030) (Edit, DisableEditOnInstance)
	float                                              LocalMiniProjectilesGravityScale;                         // 0x02B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           LocalMiniProjectilesSpawnAngleRange;                      // 0x02C0(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           LocalMiniProjectilesSpawnStartPositionOffsetInMetres;     // 0x02F0(0x0030) (Edit, DisableEditOnInstance)
	float                                              LocalMiniProjectilesSpawnDistanceSpeedScalar;             // 0x0320(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalMiniProjectilesSpawnDistanceMaxPlayerSpeed;          // 0x0324(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBetweenLocalEmbers;                                   // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	TArray<struct FVolcanoSetupDataEmbersEntry>        LocalEmbers;                                              // 0x0330(0x0010) (Edit, ZeroConstructor)
	float                                              EmbersSpawnOffsetInMetres;                                // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0344(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NaturalDisasters.VolcanoSetupDataAsset");
		return ptr;
	}

};


// Class NaturalDisasters.Volcano
// 0x01C0 (0x0650 - 0x0490)
class AVolcano : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0490(0x0010) MISSED OFFSET
	class UCapsuleComponent*                           HitDetectionVolume;                                       // 0x04A0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UseDormantDuration;                                       // 0x04A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class UVolcanoSetupDataAsset*                      VolcanoSetupData;                                         // 0x04B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AMurk*                                       AssociatedSuperheatedWater;                               // 0x04B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ALavaZone*                                   AssociatedLavaZone;                                       // 0x04C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerTargetRadiusInMetres;                                // 0x04C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterTargetRadiusInMetres;                                // 0x04CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearbyPlayerRangeToFireProjectilesInMetres;               // 0x04D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomShipPositionScale;                                  // 0x04D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WarmingUpEmitter;                                         // 0x04D8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    EruptingEmitter;                                          // 0x04E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlendedLightingZoneComponent*               BlendedLightingZoneComponent;                             // 0x04E8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlendedAtmosphericPressureZoneComponent*    BlendedAtmosphericPressureZoneComponent;                  // 0x04F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlendedPostProcessingRainZoneComponent*     BlendedPostProcessingRainZoneComponent;                   // 0x04F8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ProjectileLaunchOffset;                                   // 0x0500(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     AudioPool;                                                // 0x0510(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 WarmupAudioPlayEvent;                                     // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 WarmupAudioStopEvent;                                     // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 EruptingAudioPlayEvent;                                   // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 EruptingAudioStopEvent;                                   // 0x0530(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVolcanoStateData                           StateData;                                                // 0x0538(0x0008) (Net)
	unsigned char                                      UnknownData03[0xF0];                                      // 0x0540(0x00F0) MISSED OFFSET
	TArray<TWeakObjectPtr<class AActor>>               PlayersInZone;                                            // 0x0630(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0640(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NaturalDisasters.Volcano");
		return ptr;
	}


	void OnRep_VolcanoState(const struct FVolcanoStateData& OldVolcanoState);
	void OnRep_PlayersInZone();
	void Multicast_FireProjectile(class UClass* ProjectileType, const struct FVector& AuthoritySpawnLocation, const struct FVector& LaunchVelocity, const struct FVector& RotationRate, float ProjectileGravityScale, class UWwiseEvent* LaunchAudioPlayEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
