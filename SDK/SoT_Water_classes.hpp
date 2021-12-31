#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Water_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Water.AthenaFFTWater
// 0x0028 (0x0440 - 0x0418)
class AAthenaFFTWater : public AFFTWater
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0418(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.AthenaFFTWater"));
		return ptr;
	}

};


// Class Water.WaterEmissionVolumeInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterEmissionVolumeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterEmissionVolumeInterface"));
		return ptr;
	}

};


// Class Water.AthenaWaterEmissionVolume
// 0x0008 (0x03E0 - 0x03D8)
class AAthenaWaterEmissionVolume : public AWaterEmissionVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.AthenaWaterEmissionVolume"));
		return ptr;
	}

};


// Class Water.FFTWaterInterface
// 0x0000 (0x0028 - 0x0028)
class UFFTWaterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.FFTWaterInterface"));
		return ptr;
	}


	void SetExtendedPlaneComponent(UFFTWaterExtendedPlaneComponent* InFFTWaterComponent);
	void SetComponent(UFFTWaterComponent* InFFTWaterComponent);
	void SetActor(AAthenaFFTWater* InFFTWaterActor);
	UFFTWaterExtendedPlaneComponent* GetExtendedPlaneComponent();
	UFFTWaterComponent* GetComponent();
	AAthenaFFTWater* GetActor();
};


// Class Water.WaterProperties
// 0x0010 (0x0038 - 0x0028)
class UWaterProperties : public UObject
{
public:
	TArray<FWaterInformation>                          WaterInfo;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterProperties"));
		return ptr;
	}

};


// Class Water.WaterInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterInterface"));
		return ptr;
	}


	bool IsReadyToBeQueried();
	TEnumAsByte<EWaterQueryResult> GetWaterInformationWithScaledChoppyness(const FVector& SamplePosition, AActor* Actor, float ChoppynessScalar, float* Height, FVector2D* ApproxVelocity, FVector* Normal);
	TEnumAsByte<EWaterQueryResult> GetWaterInformationBatched(TArray<FVector2D> SamplePositions, AActor* Actor, TArray<float>* Heights, TArray<FVector2D>* ApproxVelocities, TArray<FVector>* Normals);
	TEnumAsByte<EWaterQueryResult> GetWaterInformation(const FVector& SamplePosition, AActor* Actor, float* Height, FVector2D* ApproxVelocity, FVector* Normal);
	TEnumAsByte<EWaterQueryResult> GetWaterHeightWithScaledChoppyness(const FVector& SamplePosition, AActor* Actor, bool Interpolate, float ChoppynessScalar, float* Height);
	TEnumAsByte<EWaterQueryResult> GetWaterHeight(const FVector& SamplePosition, AActor* Actor, bool Interpolate, float* Height);
	FWaterSimPlane GetActorWaterPlane(AActor* Actor);
	FWaterInformation GetActorWaterInformation(AActor* Actor);
};


// Class Water.FFTWaterService
// 0x0080 (0x0450 - 0x03D0)
class AFFTWaterService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	TWeakObjectPtr<class AAthenaFFTWater>              FFTWaterActor;                                            // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UFFTWaterComponent>           FFTWaterComponent;                                        // 0x03E8(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UFFTWaterExtendedPlaneComponent> ExtendedPlaneComponent;                                   // 0x03F0(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x03F8(0x0050) MISSED OFFSET
	double                                             ReplicatedServerCreationTime;                             // 0x0448(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.FFTWaterService"));
		return ptr;
	}


	void OnRep_FFTWaterComponent();
	void OnRep_ExtendedPlaneComponent();
};


// Class Water.FlatWaterPlaneComponent
// 0x0010 (0x05B0 - 0x05A0)
class UFlatWaterPlaneComponent : public UBaseWaterComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.FlatWaterPlaneComponent"));
		return ptr;
	}


	void OnActorLeaveWaterPlane(AActor* Actor);
	void OnActorEnterWaterPlane(AActor* Actor);
	FVector2D ConvertToWaterSpace(const FVector& WorldSpacePosition);
};


// Class Water.MockWaterInterface
// 0x0010 (0x0038 - 0x0028)
class UMockWaterInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.MockWaterInterface"));
		return ptr;
	}

};


// Class Water.MockWaterServiceWithValidWaterPlane
// 0x0008 (0x0040 - 0x0038)
class UMockWaterServiceWithValidWaterPlane : public UMockWaterInterface
{
public:
	UFFTWaterComponent*                                DefaultWaterComponent;                                    // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.MockWaterServiceWithValidWaterPlane"));
		return ptr;
	}

};


// Class Water.NoSwimWaterId
// 0x0000 (0x0028 - 0x0028)
class UNoSwimWaterId : public UWaterId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.NoSwimWaterId"));
		return ptr;
	}

};


// Class Water.SeaWaterId
// 0x0000 (0x0028 - 0x0028)
class USeaWaterId : public UWaterId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.SeaWaterId"));
		return ptr;
	}

};


// Class Water.ShipWaterId
// 0x0000 (0x0028 - 0x0028)
class UShipWaterId : public UWaterId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.ShipWaterId"));
		return ptr;
	}

};


// Class Water.SplashProbeDataAsset
// 0x0010 (0x0038 - 0x0028)
class USplashProbeDataAsset : public UDataAsset
{
public:
	TArray<FSplashProbe>                               Probes;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.SplashProbeDataAsset"));
		return ptr;
	}

};


// Class Water.SplashProbeVFXComponent
// 0x0050 (0x0118 - 0x00C8)
class USplashProbeVFXComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C8(0x0028) MISSED OFFSET
	USplashProbeDataAsset*                             Probes;                                                   // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	USplashProbeDataAsset*                             ProbesInstance;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	FActorComponentSelector                            AttachProbesToOwner;                                      // 0x0100(0x0010) (Edit, DisableEditOnInstance)
	USceneComponent*                                   AttachProbesToComponent;                                  // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.SplashProbeVFXComponent"));
		return ptr;
	}

};


// Class Water.UndergroundSeaWaterId
// 0x0000 (0x0028 - 0x0028)
class UUndergroundSeaWaterId : public UWaterId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.UndergroundSeaWaterId"));
		return ptr;
	}

};


// Class Water.WaterBuoyancyFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWaterBuoyancyFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterBuoyancyFunctionLibrary"));
		return ptr;
	}


	static float TickBuoyancy(AActor* InOwner, float InDeltaTime, float InChoppinessScalar, float FakeZOffsetGeneratorScalar, FWaterBuoyancy* InWaterBuoyancy);
	static void SetBuoyancySamplesZOffsetSymmetricalAroundXAxis(float ZOffset, FWaterBuoyancy* InWaterBuoyancy);
	static void SetBuoyancyProbeCurveBlendDebugOverride(float UnaryBlendOverride, FWaterBuoyancy* InWaterBuoyancy);
	static void SetBuoyancyProbeCurveBlend(float Blend, TEnumAsByte<EBuoyancyBlend> BlendType, FWaterBuoyancy* InWaterBuoyancy);
};


// Class Water.WaterBuoyancySampleMovementFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWaterBuoyancySampleMovementFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterBuoyancySampleMovementFunctionLibrary"));
		return ptr;
	}


	static void TickLocalSampleMovement(AActor* InActor, float DeltaTime, FWaterBuoyancy* InWaterBuoyancy, FBuoyancySampleMovement* InSampleMovement);
	static void StartMovingVolumeSamplesLocallyByRandomConfigurationIndex(AActor* InActor, FWaterBuoyancy* InWaterBuoyancy, FBuoyancySampleMovement* InSampleMovement);
	static void StartMovingVolumeSamplesLocallyByConfigurationIndex(AActor* InActor, int ConfigurationIndex, FWaterBuoyancy* InWaterBuoyancy, FBuoyancySampleMovement* InSampleMovement);
	static void StartMovingVolumeSamplesLocally(AActor* InActor, UCurveVector* InCenterOfMassOffsetCurve, float BuoyancyScalarAtNewPosition, UCurveFloat* BuoyancyScalarCurve, UCurveFloat* ProbeMovementCurve, float MoveTime, FWaterBuoyancy* InWaterBuoyancy, FBuoyancySampleMovement* InSampleMovement, TArray<FBuoyancySampleMovementConfigurationEntry>* NewSampleData);
};


// Class Water.WaterEmissionVolumeService
// 0x0020 (0x0048 - 0x0028)
class UWaterEmissionVolumeService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterEmissionVolumeService"));
		return ptr;
	}

};


// Class Water.WaterExclusionSurfaceInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterExclusionSurfaceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterExclusionSurfaceInterface"));
		return ptr;
	}

};


// Class Water.WaterPlaneInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterPlaneInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterPlaneInterface"));
		return ptr;
	}

};


// Class Water.WaterInteractionComponent
// 0x0020 (0x05E0 - 0x05C0)
class UWaterInteractionComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterInteractionComponent"));
		return ptr;
	}


	void LeaveWaterPlane(UBaseWaterComponent* WaterComponent);
	void LeaveWaterExclusionZone();
	bool IsUsingWaterExcludedZone();
	bool IsUsingNonDefaultWaterPlane();
	bool IsInWaterExcludedZone();
	UBaseWaterComponent* GetWaterPlaneComponent();
	unsigned char GetNumberOfWaterPlanes();
	void EnterWaterPlane(UBaseWaterComponent* WaterComponent);
	void EnterWaterExclusionZone();
};


// Class Water.WaterPlaneExclusionComponent
// 0x0010 (0x00D8 - 0x00C8)
class UWaterPlaneExclusionComponent : public UActorComponent
{
public:
	FActorComponentSelector                            UseSpecificComponentForOverlaps;                          // 0x00C8(0x0010) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterPlaneExclusionComponent"));
		return ptr;
	}


	void OnOverlapEnd(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
};


// Class Water.WaterPlaneRetrievalProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterPlaneRetrievalProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterPlaneRetrievalProviderInterface"));
		return ptr;
	}

};


// Class Water.WaterSplashProbeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWaterSplashProbeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterSplashProbeFunctionLibrary"));
		return ptr;
	}


	static void TickProbes(AActor* InOwner, float InDeltaTime, TArray<FWaterSplashProbe>* InSplashProbes);
	static void TickProbe(AActor* InOwner, float InDeltaTime, FWaterSplashProbe* InSplashProbe);
	static void SetSamplingTime(float SamplingTime, TArray<FWaterSplashProbe>* InSplashProbes);
	static FVector GetRelativeWaterHeightChangeSpd(int ProbeIndex, TArray<FWaterSplashProbe>* InSplashProbes);
};


// Class Water.WaterSpoutVFXComponent
// 0x0090 (0x0158 - 0x00C8)
class UWaterSpoutVFXComponent : public UActorComponent
{
public:
	TArray<FWaterSpout>                                WaterSpouts;                                              // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FVector                                            SplashEffectPointBottomZ;                                 // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	UObject*                                           SpoutParticleSystem;                                      // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UObject*                                           SplashParticleSystem;                                     // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WaterSplashDelayMin;                                      // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterSplashDelayMax;                                      // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplashEffectVFXOffset;                                    // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplashSweepRadius;                                        // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldSpawnKillPlaneAtSplash;                             // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	UStaticMesh*                                       SplashKillPlaneMesh;                                      // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FVector                                            SplashKillPlaneScale;                                     // 0x0118(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	UStaticMeshComponent*                              SplashKillPlane;                                          // 0x0128(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<FWaterSpout>                                ActiveWaterSpouts;                                        // 0x0130(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0140(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterSpoutVFXComponent"));
		return ptr;
	}


	void AddSplashVFXSpawnerWithLocation(FWaterSpout* WaterSplashLocator);
	void ActivateSplashVFXWithDelay();
};


// Class Water.WaterVolumeInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterVolumeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Water.WaterVolumeInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
