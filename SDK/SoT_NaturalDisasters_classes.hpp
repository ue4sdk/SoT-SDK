#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NaturalDisasters_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NaturalDisasters.AshenLordAshCloudSetupDataAsset
// 0x0078 (0x00A0 - 0x0028)
class UAshenLordAshCloudSetupDataAsset : public UDataAsset
{
public:
	FWeightedProbabilityRangeOfRanges                  AshCloudRadiusInMetres;                                   // 0x0028(0x0030) (Edit)
	float                                              AshCloudHeightCoefficient;                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	FWeightedProbabilityRangeOfRanges                  AshCloudLifetime;                                         // 0x0060(0x0030) (Edit)
	UCurveFloat*                                       ScaleUpSpeedCurve;                                        // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UCurveFloat*                                       DissipationCurve;                                         // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.AshenLordAshCloudSetupDataAsset"));
		return ptr;
	}

};


// Class NaturalDisasters.AshenLordAshCloud
// 0x0088 (0x0458 - 0x03D0)
class AAshenLordAshCloud : public AActor
{
public:
	UStaticMeshComponent*                              CloudMesh;                                                // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UAshenLordAshCloudSetupDataAsset*                  SetupData;                                                // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRangeStartOffset;                                    // 0x03E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRangeStart;                                          // 0x03E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              NormalisedEngulfedRTPC;                                   // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RTPCSecondsBetweenUpdates;                                // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x03F8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x03FC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              TimeOffset;                                               // 0x0400(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAshCloudState>                        CloudState;                                               // 0x0404(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x37];                                      // 0x0405(0x0037) MISSED OFFSET
	float                                              MaxRadiusMultiplier;                                      // 0x043C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0440(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.AshenLordAshCloud"));
		return ptr;
	}


	void UpdatePostSettingsBP();
	void SetDissipationDensityBP(float CloudDensity);
	void OnRep_StateChanged();
};


// Class NaturalDisasters.AshenLordVolcano
// 0x0070 (0x0440 - 0x03D0)
class AAshenLordVolcano : public AActor
{
public:
	UAshenLordVolcanoSetupDataAsset*                   VolcanoSetupData;                                         // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x03D8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.AshenLordVolcano"));
		return ptr;
	}


	void Multicast_FireProjectile(int WeightedVolcanoProjectileIndex, const FVector& AuthoritySpawnLocation, const FVector& LaunchVelocity, const FVector& RotationRate);
};


// Class NaturalDisasters.VolcanoSetupDataAsset
// 0x0418 (0x0440 - 0x0028)
class UVolcanoSetupDataAsset : public UDataAsset
{
public:
	FWeightedProbabilityRangeOfRanges                  WarmUpDuration;                                           // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  EruptionDuration;                                         // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  DormantDuration;                                          // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	float                                              MinimumDurationForTheEffects;                             // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	FWeightedProbabilityRangeOfRanges                  GroundAndWaterStayHotDurationAfterVolcanoFinishesDuration;// 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  ProjectileTriggerFrequency;                               // 0x00F0(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  PercentageOfMaxTargetingRange;                            // 0x0120(0x0030) (Edit, DisableEditOnInstance)
	int                                                MinNumProjectilesToTrigger;                               // 0x0150(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumProjectilesToTrigger;                               // 0x0154(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExtraProjectilePoolNumProjectiles;                        // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	FVolcanoTargetChances                              ChanceToTargetPlayers;                                    // 0x0160(0x0058) (Edit, DisableEditOnInstance)
	FVolcanoTargetChances                              ChanceToTargetShips;                                      // 0x01B8(0x0058) (Edit, DisableEditOnInstance)
	FVolcanoTargetChances                              ChanceToTargetWatercraft;                                 // 0x0210(0x0058) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  PlayerNearMissDistanceInMetres;                           // 0x0268(0x0030) (Edit, DisableEditOnInstance)
	float                                              InnerShipNearMissRadiusInMetres;                          // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterShipNearMissRadiusInMetres;                          // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerWatercraftNearMissRadiusInMetres;                    // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterWatercraftNearMissRadiusInMetres;                    // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FWeightedVolcanoProjectile>                 Projectiles;                                              // 0x02A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<FLandmarkReactionEventPlayForceFeedbackEntry> ForceFeedbackIgnitionEffect;                              // 0x02B8(0x0010) (Edit, ZeroConstructor)
	UClass*                                            LocalMiniProjectilesClass;                                // 0x02C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  LocalMiniProjectilesSpawnHeightAbovePlayerInMetres;       // 0x02D0(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  LocalMiniProjectilesSpawnDistanceFromPlayerInMetres;      // 0x0300(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  LocalMiniProjectilesTimeBetweenSpawns;                    // 0x0330(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRange                          NumLocalMiniProjectilesToTrigger;                         // 0x0360(0x0020) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  LocalMiniProjectilesSpeed;                                // 0x0380(0x0030) (Edit, DisableEditOnInstance)
	float                                              LocalMiniProjectilesGravityScale;                         // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	FWeightedProbabilityRangeOfRanges                  LocalMiniProjectilesSpawnAngleRange;                      // 0x03B8(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  LocalMiniProjectilesSpawnStartPositionOffsetInMetres;     // 0x03E8(0x0030) (Edit, DisableEditOnInstance)
	float                                              LocalMiniProjectilesSpawnDistanceSpeedScalar;             // 0x0418(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalMiniProjectilesSpawnDistanceMaxPlayerSpeed;          // 0x041C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBetweenLocalEmbers;                                   // 0x0420(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	TArray<FVolcanoSetupDataEmbersEntry>               LocalEmbers;                                              // 0x0428(0x0010) (Edit, ZeroConstructor)
	float                                              EmbersSpawnOffsetInMetres;                                // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ServerMigrationDistanceAsMultipleOfOuterTargetRadius;     // 0x043C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.VolcanoSetupDataAsset"));
		return ptr;
	}

};


// Class NaturalDisasters.AshenLordVolcanoSetupDataAsset
// 0x0150 (0x0178 - 0x0028)
class UAshenLordVolcanoSetupDataAsset : public UDataAsset
{
public:
	FWeightedProbabilityRangeOfRanges                  ProjectileTriggerFrequency;                               // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRange                          NumProjectilesToTrigger;                                  // 0x0058(0x0020) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  SpawnHeightInMetres;                                      // 0x0078(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  TargetDistanceFromCenterInMetres;                         // 0x00A8(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  TimeBetweenSpawns;                                        // 0x00D8(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  StartPositionOffsetInMetres;                              // 0x0108(0x0030) (Edit, DisableEditOnInstance)
	TArray<FWeightedAshenLordVolcanoProjectile>        Projectiles;                                              // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FPoolableCollectionMapConfiguration                PoolableProjectilesConfig;                                // 0x0148(0x0018) (Edit, DisableEditOnInstance)
	FVolcanoSetupDataEmbersEntry                       Embers;                                                   // 0x0160(0x0010) (Edit)
	float                                              EmberSpawnHeightInMeters;                                 // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeBetweenEmbers;                                        // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.AshenLordVolcanoSetupDataAsset"));
		return ptr;
	}

};


// Class NaturalDisasters.AshenLordWorldEndCloud
// 0x0018 (0x03E8 - 0x03D0)
class AAshenLordWorldEndCloud : public AActor
{
public:
	float                                              SelfDestructDelayOnComplete;                              // 0x03D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAshenLordWorldEndCloudState>          CloudState;                                               // 0x03D4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	FAshenLordWorldEndCloudAnimation                   CurrentCloudAnimation;                                    // 0x03D8(0x0008) (Net)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.AshenLordWorldEndCloud"));
		return ptr;
	}


	void OnRep_CloudStateChange();
	void AnimateCloud(float AdjustedLifetime);
};


// Class NaturalDisasters.Geyser
// 0x0068 (0x0438 - 0x03D0)
class AGeyser : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	UGeyserSetupDataAsset*                             SetupData;                                                // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGeyserState>                          GeyserState;                                              // 0x03E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	UWwiseEvent*                                       StartActiveAudioLoopEvent;                                // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       StopActiveAudioLoopEvent;                                 // 0x03F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       PlayEruptingAudioEvent;                                   // 0x03F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEmitterComponent*                            AudioEmitterComponent;                                    // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UExplosionComponent*                               ExplosionComponent;                                       // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UParticleSystemComponent*                          ActiveParticlesComponent;                                 // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UParticleSystemComponent*                          EruptingParticlesComponent;                               // 0x0418(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     HitTestTraceChannel;                                      // 0x0420(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	UClass*                                            GeyserHoleClass;                                          // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	AHole*                                             GeyserHole;                                               // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.Geyser"));
		return ptr;
	}


	void OnRep_GeyserState();
	void Multicast_TriggerExplosion();
};


// Class NaturalDisasters.DisableGeyserMechanismAction
// 0x0018 (0x03E8 - 0x03D0)
class ADisableGeyserMechanismAction : public AActor
{
public:
	UMechanismActionComponent*                         MechanismActionComponent;                                 // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<AGeyser*>                                   GeysersToDisable;                                         // 0x03D8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.DisableGeyserMechanismAction"));
		return ptr;
	}


	void OnActionStateChanged(const TScriptInterface<class UMechanismActionInterface>& Action, TEnumAsByte<EMechanismActionState> PreviousState, TEnumAsByte<EMechanismActionState> NewState, AActor* InInstigator);
	void OnActionReset(const TScriptInterface<class UMechanismResetInterface>& Mechanism);
};


// Class NaturalDisasters.EarthquakeSetupDataAsset
// 0x02F8 (0x0320 - 0x0028)
class UEarthquakeSetupDataAsset : public UDataAsset
{
public:
	FWeightedProbabilityRangeOfRanges                  WarmUpDuration;                                           // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  EarthquakeDuration;                                       // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  CoolDownDuration;                                         // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  DormantDuration;                                          // 0x00B8(0x0030) (Edit, DisableEditOnInstance)
	float                                              ChanceOfTriggeringAVolcano;                               // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FFloatRange                                        PercentageThroughEarthquakeToStartVolcano;                // 0x00EC(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	FPlayerFeedback                                    WarmupPlayerFeedback;                                     // 0x0100(0x0080) (Edit, DisableEditOnInstance)
	FPlayerFeedback                                    ActivePlayerFeedback;                                     // 0x0180(0x0080) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  StaggerStrengthDuration;                                  // 0x0200(0x0030) (Edit, DisableEditOnInstance)
	float                                              StaggerStrengthModifierWhenOnAShip;                       // 0x0230(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FFloatRange                                        PercentageThroughCameraShakeToStartNextOne;               // 0x0234(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FFloatRange                                        TimeToShipPush;                                           // 0x0244(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	FWeightedProbabilityRangeOfRanges                  ForceToApplyToShip;                                       // 0x0258(0x0030) (Edit, DisableEditOnInstance)
	float                                              MaximumShipSpeedToBePushed;                               // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceEarthquakeTriggersGeysers;                          // 0x028C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  TimeBetweenLocalEffects;                                  // 0x0290(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRange                          NumberOfLocalEffectsToTrigger;                            // 0x02C0(0x0020) (Edit, DisableEditOnInstance)
	float                                              EffectConeAngle;                                          // 0x02E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectRaycastDistanceInMetres;                            // 0x02E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FDistanceThrottledRandomParticleSystemPicker       EarthquakeEffects;                                        // 0x02E8(0x0010) (Edit, DisableEditOnInstance)
	float                                              WarmupWindTurbulence;                                     // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FFloatRange                                        WarmupGustPower;                                          // 0x02FC(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveWindTurbulence;                                     // 0x030C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FFloatRange                                        ActiveGustPower;                                          // 0x0310(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.EarthquakeSetupDataAsset"));
		return ptr;
	}

};


// Class NaturalDisasters.Earthquake
// 0x01D0 (0x05A0 - 0x03D0)
class AEarthquake : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	UEarthquakeSetupDataAsset*                         EarthquakeSetupData;                                      // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	AVolcano*                                          AssociatedVolcano;                                        // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	AGeyserManager*                                    AssociatedGeyserManager;                                  // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EarthquakeEffectInnerRadiusOffsetInMetres;                // 0x03F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	UWwiseObjectPoolWrapper*                           AudioPool;                                                // 0x0400(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       PlayEarthquakeLarge;                                      // 0x0408(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       StopEarthquakeLarge;                                      // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       PlayEarthquakeSmall;                                      // 0x0418(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       StopEarthquakeSmall;                                      // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              EarthquakeRtpcName;                                       // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EarthquakeRtpcMin;                                        // 0x0430(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EarthquakeRtpcMax;                                        // 0x0434(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EarthquakeSizeToUseLargeAttenuation;                      // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	UCapsuleComponent*                                 HitDetectionVolume;                                       // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UWindZoneComponent*                                WindZone;                                                 // 0x0448(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<EEarthquakeState>                      EarthquakeState;                                          // 0x0450(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14F];                                     // 0x0451(0x014F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.Earthquake"));
		return ptr;
	}


	void OnRep_EarthquakeState(TEnumAsByte<EEarthquakeState> OldEarthquakeState);
};


// Class NaturalDisasters.MechanismGeyser
// 0x0010 (0x0448 - 0x0438)
class AMechanismGeyser : public AGeyser
{
public:
	TEnumAsByte<EGeyserState>                          GeyserStateWhenMechanismIsInactive;                       // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	UMechanismActionComponent*                         MechanismActionComponent;                                 // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.MechanismGeyser"));
		return ptr;
	}


	void OnMechanismActionStateChanged(const TScriptInterface<class UMechanismActionInterface>& Action, TEnumAsByte<EMechanismActionState> PreviousState, TEnumAsByte<EMechanismActionState> NewState, AActor* InInstigator);
	void OnMechanismActionReset(const TScriptInterface<class UMechanismResetInterface>& Action);
};


// Class NaturalDisasters.GeyserManagerSetupDataAsset
// 0x0190 (0x01B8 - 0x0028)
class UGeyserManagerSetupDataAsset : public UDataAsset
{
public:
	FWeightedProbabilityRangeOfRanges                  DormantDuration;                                          // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  ActiveDuration;                                           // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  DelayBetweenGeyserGroupsDuringGeyserEvent;                // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	bool                                               StartInactive;                                            // 0x00B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoRestartAfterGeyserSpurtComplete;                        // 0x00B9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseUniqueLocationsForEachGeyser;                          // 0x00BA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00BB(0x0001) MISSED OFFSET
	float                                              MinDistanceFromPlayerInMetres;                            // 0x00BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinGeyserSequenceSpacing;                                 // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	UClass*                                            GeyserToSpawn;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FWeightedProbabilityRange                          NumGeyserGroupsToSpawn;                                   // 0x00D0(0x0020) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRange                          NumGeysersToSpawnPerGroup;                                // 0x00F0(0x0020) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  SpawnDistanceFromPlayerInMetres;                          // 0x0110(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  SpawnRadiusInMetres;                                      // 0x0140(0x0030) (Edit, DisableEditOnInstance)
	TArray<FGeyserSpawnAngleOption>                    SpawnAngleRelativeToPlayerDirection;                      // 0x0170(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  DelayBetweenEachGeyserSpawningInAGroup;                   // 0x0180(0x0030) (Edit, DisableEditOnInstance)
	float                                              MaximumDensityRadiusInMetres;                             // 0x01B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaximumDensityMaxNumGeysersWithinRadius;                  // 0x01B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.GeyserManagerSetupDataAsset"));
		return ptr;
	}

};


// Class NaturalDisasters.NaturalDisasterRegistryInterface
// 0x0000 (0x0028 - 0x0028)
class UNaturalDisasterRegistryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.NaturalDisasterRegistryInterface"));
		return ptr;
	}

};


// Class NaturalDisasters.GeyserManager
// 0x0060 (0x0430 - 0x03D0)
class AGeyserManager : public AActor
{
public:
	UGeyserManagerSetupDataAsset*                      GeyserManagerSetupData;                                   // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	USceneComponent*                                   Root;                                                     // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EGeyserManagerState>                   State;                                                    // 0x03E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4F];                                      // 0x03E1(0x004F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.GeyserManager"));
		return ptr;
	}

};


// Class NaturalDisasters.GeyserItemSpawnComponent
// 0x0010 (0x04B0 - 0x04A0)
class UGeyserItemSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.GeyserItemSpawnComponent"));
		return ptr;
	}


	void OnGeyserSpawned(const FVector& GeyserSpawnLocation);
};


// Class NaturalDisasters.GeyserSetupDataAsset
// 0x00B8 (0x00E0 - 0x0028)
class UGeyserSetupDataAsset : public UDataAsset
{
public:
	FWeightedProbabilityRangeOfRanges                  DormantDuration;                                          // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  InitialWarningDuration;                                   // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRange                          NumSpurtsPerActivation;                                   // 0x0088(0x0020) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  TimeBetweenSpurts;                                        // 0x00A8(0x0030) (Edit, DisableEditOnInstance)
	bool                                               ShouldDestroyOnDeactivation;                              // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	float                                              DestroyAfterDeactivationDelay;                            // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.GeyserSetupDataAsset"));
		return ptr;
	}

};


// Class NaturalDisasters.LavaStatus
// 0x0000 (0x0030 - 0x0030)
class ULavaStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.LavaStatus"));
		return ptr;
	}

};


// Class NaturalDisasters.LavaZone
// 0x00A0 (0x0470 - 0x03D0)
class ALavaZone : public AActor
{
public:
	FWeightedProbabilityRangeOfRanges                  TimeBetweenActivations;                                   // 0x03D0(0x0030) (Edit)
	FWeightedProbabilityRangeOfRanges                  ActiveDuration;                                           // 0x0400(0x0030) (Edit)
	UPhysicalMaterial*                                 LavaMaterial;                                             // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<AActor*>                                    ActorsInZone;                                             // 0x0438(0x0010) (Net, ZeroConstructor, Transient)
	bool                                               Active;                                                   // 0x0448(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               InitializeFromGlobalState;                                // 0x0449(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SelfActivating;                                           // 0x044A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x044B(0x0005) MISSED OFFSET
	TScriptInterface<class UActivateableSurfaceMaterialStatusZoneInterface> MaterialZone;                                             // 0x0450(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class UObjectMessagingDispatcherInterface> LocalPlayerDispatcher;                                    // 0x0460(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.LavaZone"));
		return ptr;
	}


	void OnRep_ActorsInZone(TArray<AActor*> PreviousActors);
	void OnRep_Active();
};


// Class NaturalDisasters.VolcanoInterface
// 0x0000 (0x0028 - 0x0028)
class UVolcanoInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.VolcanoInterface"));
		return ptr;
	}

};


// Class NaturalDisasters.VolcanoServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UVolcanoServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.VolcanoServiceInterface"));
		return ptr;
	}

};


// Class NaturalDisasters.SeatStat_IslandVolcanoActive
// 0x0068 (0x00B0 - 0x0048)
class USeatStat_IslandVolcanoActive : public USeatStat
{
public:
	FName                                              VolcanoIslandName;                                        // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0050(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.SeatStat_IslandVolcanoActive"));
		return ptr;
	}

};


// Class NaturalDisasters.SuperheatedWaterSetupDataAsset
// 0x00C0 (0x00E8 - 0x0028)
class USuperheatedWaterSetupDataAsset : public UDataAsset
{
public:
	float                                              TimeBetweenHealthReduction;                               // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumWaterDepthToCauseDamage;                           // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  TimeBetweenLargeSurfaceEffects;                           // 0x0030(0x0030) (Edit, DisableEditOnInstance)
	float                                              LargeSurfaceEffectMinimumDistanceInMetres;                // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	FRandomParticleSystemPicker                        LargeSurfaceEffects;                                      // 0x0068(0x0010) (Edit, DisableEditOnInstance)
	float                                              EffectSpawnHeight;                                        // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MurkStrengthToStartEffects;                               // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  TimeBetweenSmallSurfaceEffects;                           // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRange                          NumSmallSurfaceEffects;                                   // 0x00B0(0x0020) (Edit, DisableEditOnInstance)
	FDistanceThrottledRandomParticleSystemPicker       SmallSurfaceEffects;                                      // 0x00D0(0x0010) (Edit, DisableEditOnInstance)
	float                                              SmallSurfaceEffectNearbyPlayerRadiusInMetres;             // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmallSurfaceEffectOffsetRadiusInMetres;                   // 0x00E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.SuperheatedWaterSetupDataAsset"));
		return ptr;
	}

};


// Class NaturalDisasters.SuperheatedWater
// 0x0108 (0x0578 - 0x0470)
class ASuperheatedWater : public AMurk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET
	USuperheatedWaterSetupDataAsset*                   SetupData;                                                // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UCapsuleComponent*                                 HitDetectionVolume;                                       // 0x0488(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              FakeUnderwaterLocationsMinDistanceInMetres;               // 0x0490(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FakeUnderwaterLocationsDistanceBetweenPointsInMetres;     // 0x0494(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TWeakObjectPtr<class AAthenaPlayerCharacter>> PlayersInZone;                                            // 0x0498(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0xD0];                                      // 0x04A8(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.SuperheatedWater"));
		return ptr;
	}


	void OnRep_PlayersInZone();
};


// Class NaturalDisasters.Volcano
// 0x01F0 (0x05C0 - 0x03D0)
class AVolcano : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET
	UCapsuleComponent*                                 HitDetectionVolume;                                       // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UseDormantDuration;                                       // 0x03F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	UVolcanoSetupDataAsset*                            VolcanoSetupData;                                         // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	AMurk*                                             AssociatedSuperheatedWater;                               // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ALavaZone*                                         AssociatedLavaZone;                                       // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerTargetRadiusInMetres;                                // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterTargetRadiusInMetres;                                // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearbyPlayerRangeToFireProjectilesInMetres;               // 0x0418(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomShipPositionScale;                                  // 0x041C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UParticleSystemComponent*                          WarmingUpEmitter;                                         // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UParticleSystemComponent*                          EruptingEmitter;                                          // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UBlendedLightingZoneComponent*                     BlendedLightingZoneComponent;                             // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UBlendedAtmosphericPressureZoneComponent*          BlendedAtmosphericPressureZoneComponent;                  // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UBlendedPostProcessingRainZoneComponent*           BlendedPostProcessingRainZoneComponent;                   // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FVector                                            ProjectileLaunchOffset;                                   // 0x0448(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	UWwiseObjectPoolWrapper*                           AudioPool;                                                // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       WarmupAudioPlayEvent;                                     // 0x0460(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       WarmupAudioStopEvent;                                     // 0x0468(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       EruptingAudioPlayEvent;                                   // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       EruptingAudioStopEvent;                                   // 0x0478(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UCapsuleComponent*                                 InstantKillZone;                                          // 0x0480(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InstantKillZoneTestInterval;                              // 0x0488(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FVolcanoStateData                                  StateData;                                                // 0x048C(0x000C) (Net)
	FName                                              AssociatedIslandName;                                     // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x120];                                     // 0x04A0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.Volcano"));
		return ptr;
	}


	void OnRep_VolcanoState(const FVolcanoStateData& OldVolcanoState);
	void Multicast_FireProjectile(const FVector& AuthoritySpawnLocation, TArray<FVolcanoProjectileData> VolcanoProjectileDataArray);
};


// Class NaturalDisasters.VolcanoService
// 0x0058 (0x0080 - 0x0028)
class UVolcanoService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NaturalDisasters.VolcanoService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
