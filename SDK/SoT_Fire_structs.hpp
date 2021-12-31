#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Fire_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_StatusEffects_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Fire.FireGridCellSelection
// 0x0044
struct FFireGridCellSelection
{
	int                                                NumberOfAffectedCells;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AdjacencyRadius;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToAffectCellsAbove;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToAffectCellsBelow;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TreatDiagonalsAsAdjacent;                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideFirePropagationTimesForAffectedCells;             // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	FFloatRange                                        SidewaysPropagationTimeOverride;                          // 0x0014(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	FFloatRange                                        UpwardPropagationTimeOverride;                            // 0x0024(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	FFloatRange                                        DownwardPropagationTimeOverride;                          // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.FireGridCellSelectionParams
// 0x0050
struct FFireGridCellSelectionParams
{
	UClass*                                            ActorClassFilter;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToAffectTheActor;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FFireGridCellSelection                             FireGridCellSelectionParams;                              // 0x000C(0x0044) (Edit)
};

// ScriptStruct Fire.CookerIgnitionParams
// 0x0078
struct FCookerIgnitionParams
{
	FFloatRange                                        InitialIgnitionTime;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	FFloatRange                                        SuccessIgnitionTime;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	FFloatRange                                        FailureIgnitionTime;                                      // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToIgnite;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FFireGridCellSelection                             IgnitionSelection;                                        // 0x0034(0x0044) (Edit)
};

// ScriptStruct Fire.FireCellStateTimingParams
// 0x0094
struct FFireCellStateTimingParams
{
	FFloatRange                                        KindleTime;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	FFloatRange                                        BurningTime;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	FFloatRange                                        RainExposureTime;                                         // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CharringTime;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FFloatRange                                        SmoulderingTime;                                          // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	FFloatRange                                        SteamingTime;                                             // 0x0044(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	FFloatRange                                        WetTime;                                                  // 0x0054(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	FFloatRange                                        SidewaysPropagationTime;                                  // 0x0064(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	FFloatRange                                        UpwardPropagationTime;                                    // 0x0074(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	FFloatRange                                        DownwardPropagationTime;                                  // 0x0084(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.FireCellAudioParams
// 0x0040
struct FFireCellAudioParams
{
	UWwiseObjectPoolWrapper*                           EmitterPool;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseObjectPoolWrapper*                           DousePool;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       FirePlay;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       FireStop;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       FireDouse;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              FireSwitchGroup;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              FireSwitchBurning;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              FireSwitchKindled;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.FireCellStateParticleTemplate
// 0x0038
struct FFireCellStateParticleTemplate
{
	UParticleSystem*                                   Template;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TranslucencySortPriority;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	UStaticMesh*                                       Mesh;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshSpawnTime;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshDespawnTime;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            MeshScale;                                                // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFireCellState>                        State;                                                    // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideMaxLODToSpawnFor;                                 // 0x002D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	int                                                MaxLODToSpawnFor;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnWithLowFrequencySettings;                            // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VisibleInLowDetailMode;                                   // 0x0035(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
};

// ScriptStruct Fire.FireGridVFXParams
// 0x0040
struct FFireGridVFXParams
{
	TArray<FFireCellStateParticleTemplate>             DefaultParticleTemplates;                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	UParticleSystem*                                   ExteriorLowDetailParticleSystem;                          // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UParticleSystem*                                   ExteriorSmokeParticleSystem;                              // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UParticleSystem*                                   InteriorSmokeParticleSystem;                              // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InteriorSmokeTranslucencySortPriority;                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumInterleaveSpawnSteps;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TickIntervalForAllCells;                                  // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KillSphereRadiusForDousingFire;                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLowDetailTransitionWarmupTime;                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxDefaultVFXToSpawnPerFrame;                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.FireParticleSystem
// 0x0048
struct FFireParticleSystem
{
	UParticleSystemComponent*                          SpawnedParticleSystem;                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	FFireCellStateParticleTemplate                     ParticleTemplate;                                         // 0x0010(0x0038)
};

// ScriptStruct Fire.FireMesh
// 0x0010
struct FFireMesh
{
	UStaticMeshComponent*                              Mesh;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Fire.FireGridRelativeSpawnDesc
// 0x0030
struct FFireGridRelativeSpawnDesc
{
	FVector                                            Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	FIntVector                                         GridLocation;                                             // 0x000C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumCellRowsToSpawnFor;                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNumCellsToActivate;                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        CellIndicesToSpawnFor;                                    // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Fire.FireGridLowDetailRelativeSpawnDesc
// 0x0008 (0x0038 - 0x0030)
struct FFireGridLowDetailRelativeSpawnDesc : public FFireGridRelativeSpawnDesc
{
	FName                                              EmitterName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.FireParticleSpawnData
// 0x0010
struct FFireParticleSpawnData
{
	float                                              MaximumLODDistance;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnInterval;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Fire.FireCellDesc
// 0x0100
struct FFireCellDesc
{
	FVector                                            Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	FBox                                               BoundingBox;                                              // 0x000C(0x001C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	FIntVector                                         GridPosition;                                             // 0x0028(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               CanBurn;                                                  // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsExposedToWeather;                                       // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShipDeck>                             Deck;                                                     // 0x0036(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
	int                                                CellIndex;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MasterCellFlatIndex;                                      // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               ShouldSpawnDefaultParticleEffect;                         // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
	FTransform                                         DefaultParticleEffectSpawnTransform;                      // 0x0050(0x0030) (Edit, IsPlainOldData)
	FPlane                                             DefaultParticleEffectPlane;                               // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<FFireCellStateParticleTemplate>             CustomParticleEffectTemplates;                            // 0x0090(0x0010) (Edit, ZeroConstructor)
	FTransform                                         CustomParticleEffectSpawnTransform;                       // 0x00A0(0x0030) (Edit, IsPlainOldData)
	TArray<int>                                        NeighbourCellIndices;                                     // 0x00D0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<FIntVector>                                 CustomAddedDiagonalNeighbourOffsets;                      // 0x00E0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<FIntVector>                                 CustomRemovedDefaultNeighbourOffsets;                     // 0x00F0(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Fire.FireDefaultVFXSpawnData
// 0x0140
struct FFireDefaultVFXSpawnData
{
	FFireCellStateParticleTemplate                     Template;                                                 // 0x0000(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	FFireCellDesc                                      CellDesc;                                                 // 0x0040(0x0100)
};

// ScriptStruct Fire.FireParticleSpawnList
// 0x0020
struct FFireParticleSpawnList
{
	TArray<FFireParticleSpawnData>                     ParticleSpawnLODs;                                        // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Fire.ActorFireDamageParams
// 0x0038
struct FActorFireDamageParams
{
	TAssetPtr<class UClass>                            ActorClass;                                               // 0x0000(0x0020) (Edit)
	FFloatRange                                        TimeInFireBeforeDamage;                                   // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LevelsOfDamage;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireDamageParams
// 0x0018
struct FShipFireDamageParams
{
	UClass*                                            DamagerType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FActorFireDamageParams>                     ShipFireDamageParams;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Fire.ShipFireLightParams
// 0x0014
struct FShipFireLightParams
{
	float                                              FadeOutTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              FirePostprocessComponentName;                             // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToFireToActivatePostProcessSq;                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PostProcessSpringAcceleration;                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.FireGridVfxSpawnSettings
// 0x0058
struct FFireGridVfxSpawnSettings
{
	TArray<FFireGridRelativeSpawnDesc>                 InteriorSmokeSpawnDescs;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<FFireGridLowDetailRelativeSpawnDesc>        LowDetailVFXSpawnDescs;                                   // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<FFireParticleSpawnData>                     ParticleSpawnLODSettings;                                 // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FFireParticleSpawnData                             LowFrequencyParticleSpawnSettings;                        // 0x0030(0x0010) (Edit, DisableEditOnInstance)
	TArray<FFireGridLowDetailRelativeSpawnDesc>        ExteriorSmokeVFXSpawnDescs;                               // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UFireGridVFXParamsDataAsset*                       VFXParams;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Fire.ShipFireLightRelativeSpawnDesc
// 0x0028 (0x0058 - 0x0030)
struct FShipFireLightRelativeSpawnDesc : public FFireGridRelativeSpawnDesc
{
	FVector                                            LightPositionOffset;                                      // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EShipRegion>>                   DormantShipRegions;                                       // 0x0040(0x0010) (Edit, ZeroConstructor)
	float                                              DormantFadeDistance;                                      // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AreaLightScaleWhenNotOnShip;                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.ShipFireLight
// 0x0090
struct FShipFireLight
{
	FShipFireLightRelativeSpawnDesc                    Desc;                                                     // 0x0000(0x0058)
	UPointLightComponent*                              PointLight;                                               // 0x0058(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	UStaticMeshComponent*                              AreaLight;                                                // 0x0060(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	UMaterialInstanceDynamic*                          AreaLightMaterial;                                        // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireLightManager
// 0x0150
struct FShipFireLightManager
{
	TArray<FShipFireLightRelativeSpawnDesc>            LightSpawnDescs;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FGenericLightTemplate                              LightTemplate;                                            // 0x0010(0x00D0) (Edit, DisableEditOnInstance)
	TArray<FShipFireLight>                             Lights;                                                   // 0x00E0(0x0010) (ZeroConstructor, Transient)
	UFirePropagator*                                   Propagator;                                               // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UStaticMesh*                                       AreaLightMesh;                                            // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AreaLightZScale;                                          // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinLightRadius;                                           // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLightRadius;                                           // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFlickerScale;                                          // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightMovementSpeedCmPerSecond;                            // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	UShipFireLightParamsDataAsset*                     LightParams;                                              // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPostProcessComponent*                             ShipPostProcessComponent;                                 // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0128(0x0028) MISSED OFFSET
};

// ScriptStruct Fire.FireGridCharringManager
// 0x00C8
struct FFireGridCharringManager
{
	TArray<UMaterialInterface*>                        OwnerMaterials;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FVector                                            AdditionalGridOffsetForCharring;                          // 0x0010(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	UTexture2DDynamic*                                 FireGridTexture;                                          // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET
};

// ScriptStruct Fire.ReplicatedFireCellData
// 0x0001
struct FReplicatedFireCellData
{
	TEnumAsByte<EFireCellState>                        State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.ReplicatedFireCellCharringData
// 0x0018
struct FReplicatedFireCellCharringData
{
	float                                              MaxCharringTime;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<float>                                      TimeSpentCharring;                                        // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Fire.PlayerNearBurningFireGridUpdatedEvent
// 0x0008
struct FPlayerNearBurningFireGridUpdatedEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Fire.ShipOnFireEndEvent
// 0x0001
struct FShipOnFireEndEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Fire.ShipOnFireBeginEvent
// 0x0001
struct FShipOnFireBeginEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Fire.OnShipIgnitedEvent
// 0x0001
struct FOnShipIgnitedEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Fire.FireExtinguishedEvent
// 0x000C
struct FFireExtinguishedEvent
{
	FVector                                            ExtinguishLocation;                                       // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.OnFireChangedEvent
// 0x0001
struct FOnFireChangedEvent
{
	bool                                               OnFire;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.FireCellStateData
// 0x0030
struct FFireCellStateData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Fire.PlayerFireGridTickParams
// 0x0048
struct FPlayerFireGridTickParams
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	AActor*                                            FireGridActorPlayerIsInsideOf;                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	UClass*                                            PlayerShipSize;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
