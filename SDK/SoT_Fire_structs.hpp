#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Fire_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_StatusEffects_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Fire.FireCellStateTimingParams
// 0x0084
struct FFireCellStateTimingParams
{
	struct FFloatRange                                 KindleTime;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 BurningTime;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CharringTime;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 SmoulderingTime;                                          // 0x0024(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 SteamingTime;                                             // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 WetTime;                                                  // 0x0044(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 SidewaysPropagationTime;                                  // 0x0054(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 UpwardPropagationTime;                                    // 0x0064(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 DownwardPropagationTime;                                  // 0x0074(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.FireCellAudioParams
// 0x0040
struct FFireCellAudioParams
{
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     DousePool;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 FirePlay;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 FireStop;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 FireDouse;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FireSwitchGroup;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FireSwitchBurning;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FireSwitchKindled;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.ShipFireCellAreaSelection
// 0x0044
struct FShipFireCellAreaSelection
{
	int                                                NumberOfAffectedCells;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AdjacencyRadius;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToAffectCellsAbove;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToAffectCellsBelow;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TreatDiagonalsAsAdjacent;                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideFirePropagationTimesForAffectedCells;             // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	struct FFloatRange                                 SidewaysPropagationTimeOverride;                          // 0x0014(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 UpwardPropagationTimeOverride;                            // 0x0024(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 DownwardPropagationTimeOverride;                          // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.ShipFireCellAreaSelectionParams
// 0x0050
struct FShipFireCellAreaSelectionParams
{
	class UClass*                                      ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToAffectTheShip;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FShipFireCellAreaSelection                  ShipFireCellAreaSelectionParams;                          // 0x000C(0x0044) (Edit)
};

// ScriptStruct Fire.ActorFireDamageParams
// 0x0038
struct FActorFireDamageParams
{
	TAssetPtr<class UClass>                            ActorClass;                                               // 0x0000(0x0020) (Edit)
	struct FFloatRange                                 TimeInFireBeforeDamage;                                   // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LevelsOfDamage;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireDamageParams
// 0x0018
struct FShipFireDamageParams
{
	class UClass*                                      DamagerType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FActorFireDamageParams>              ShipFireDamageParams;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Fire.FireCellStateParticleTemplate
// 0x0038
struct FFireCellStateParticleTemplate
{
	class UParticleSystem*                             Template;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TranslucencySortPriority;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshSpawnTime;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshDespawnTime;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MeshScale;                                                // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFireCellState>                        State;                                                    // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideMaxLODToSpawnFor;                                 // 0x002D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	int                                                MaxLODToSpawnFor;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireVFXParams
// 0x0038
struct FShipFireVFXParams
{
	TArray<struct FFireCellStateParticleTemplate>      DefaultParticleTemplates;                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UParticleSystem*                             TopDeckLowDetailParticleSystem;                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TopDeckSmokeParticleSystem;                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BelowDeckSmokeParticleSystem;                             // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumInterleaveSpawnSteps;                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TickIntervalForAllCells;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KillSphereRadiusForDousingFire;                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireMesh
// 0x0010
struct FShipFireMesh
{
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireRelativeSpawnDesc
// 0x0038
struct FShipFireRelativeSpawnDesc
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  GridLocation;                                             // 0x000C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumCellRowsToSpawnFor;                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNumCellsToActivate;                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        CellIndicesToSpawnFor;                                    // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
	TEnumAsByte<EShipDeck>                             Deck;                                                     // 0x0030(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireLowDetailRelativeSpawnDesc
// 0x0008 (0x0040 - 0x0038)
struct FShipFireLowDetailRelativeSpawnDesc : public FShipFireRelativeSpawnDesc
{
	struct FName                                       EmitterName;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.FireParticleSpawnData
// 0x0010
struct FFireParticleSpawnData
{
	float                                              MaximumLODDistance;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnInterval;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Fire.FireParticleSpawnList
// 0x0020
struct FFireParticleSpawnList
{
	TArray<struct FFireParticleSpawnData>              ParticleSpawnLODs;                                        // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireCellDesc
// 0x00D0
struct FShipFireCellDesc
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FBox                                        BoundingBox;                                              // 0x000C(0x001C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FIntVector                                  GridPosition;                                             // 0x0028(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               CanBurn;                                                  // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsExposedToWeather;                                       // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShipDeck>                             Deck;                                                     // 0x0036(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
	int                                                CellIndex;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               ShouldSpawnDefaultParticleEffect;                         // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FTransform                                  DefaultParticleEffectSpawnTransform;                      // 0x0040(0x0030) (Edit, IsPlainOldData)
	TArray<struct FFireCellStateParticleTemplate>      CustomParticleEffectTemplates;                            // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FTransform                                  CustomParticleEffectSpawnTransform;                       // 0x0080(0x0030) (Edit, IsPlainOldData)
	TArray<int>                                        NeighbourCellIndices;                                     // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              MinimumWaterHeightToFlood;                                // 0x00C0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireVfxSpawnSettings
// 0x0048
struct FShipFireVfxSpawnSettings
{
	TArray<struct FShipFireRelativeSpawnDesc>          BelowDeckSmokeSpawnDescs;                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShipFireLowDetailRelativeSpawnDesc> LowDetailVFXSpawnDescs;                                   // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFireParticleSpawnData>              ParticleSpawnLODSettings;                                 // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShipFireLowDetailRelativeSpawnDesc> TopDeckSmokeVFXSpawnDescs;                                // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UShipFireVFXParamsDataAsset*                 VFXParams;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Fire.ShipFireLightRelativeSpawnDesc
// 0x0028 (0x0060 - 0x0038)
struct FShipFireLightRelativeSpawnDesc : public FShipFireRelativeSpawnDesc
{
	struct FVector                                     LightPositionOffset;                                      // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EShipRegion>>                   DormantShipRegions;                                       // 0x0048(0x0010) (Edit, ZeroConstructor)
	float                                              DormantFadeDistance;                                      // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AreaLightScaleWhenNotOnShip;                              // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.ShipFireLight
// 0x0098
struct FShipFireLight
{
	struct FShipFireLightRelativeSpawnDesc             Desc;                                                     // 0x0000(0x0060)
	class UPointLightComponent*                        PointLight;                                               // 0x0060(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AreaLight;                                                // 0x0068(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AreaLightMaterial;                                        // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireLightManager
// 0x0118
struct FShipFireLightManager
{
	TArray<struct FShipFireLightRelativeSpawnDesc>     LightSpawnDescs;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGenericLightTemplate                       LightTemplate;                                            // 0x0010(0x00D0) (Edit, DisableEditOnInstance)
	TArray<struct FShipFireLight>                      Lights;                                                   // 0x00E0(0x0010) (ZeroConstructor, Transient)
	class UShipFirePropagator*                         Propagator;                                               // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMesh*                                 AreaLightMesh;                                            // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AreaLightZScale;                                          // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinLightRadius;                                           // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLightRadius;                                           // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFlickerScale;                                          // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightMovementSpeedCmPerSecond;                            // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0114(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Fire.ShipFireCharringManager
// 0x00E8
struct FShipFireCharringManager
{
	struct FName                                       FireGridTextureParameterName;                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FireGridDimensionsParameterName;                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FireGridCellSizeParameterName;                            // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LocalToOwnerTransformCol0Name;                            // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LocalToOwnerTransformCol1Name;                            // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LocalToOwnerTransformCol2Name;                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  ShipMaterials;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     AdditionalGridOffsetForCharring;                          // 0x0040(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UTexture2DDynamic*                           FireGridTexture;                                          // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0058(0x0090) MISSED OFFSET
};

// ScriptStruct Fire.ReplicatedFireCellData
// 0x0001
struct FReplicatedFireCellData
{
	TEnumAsByte<EFireCellState>                        State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.ReplicatedFireCellCharringData
// 0x0004
struct FReplicatedFireCellCharringData
{
	float                                              TimeSpentCharring;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.FireCellStateData
// 0x0024
struct FFireCellStateData
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireTickParams
// 0x0040
struct FShipFireTickParams
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class AActor*                                      PlayerShip;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      PlayerShipSize;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Fire.ShipFirePropagationComponentAggregateTickData
// 0x0010
struct FShipFirePropagationComponentAggregateTickData
{
	class UShipFirePropagationComponent*               ShipFirePropagationComponent;                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Fire.ShipFirePropagationComponentAggregateTickFunction
// 0x0038 (0x0080 - 0x0048)
struct FShipFirePropagationComponentAggregateTickFunction : public FTickFunction
{
	TArray<struct FShipFirePropagationComponentAggregateTickData> ShipFirePropagationComponents;                            // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET
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

// ScriptStruct Fire.FireExtinguishedEvent
// 0x000C
struct FFireExtinguishedEvent
{
	struct FVector                                     ExtinguishLocation;                                       // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.OnFireChangedEvent
// 0x0001
struct FOnFireChangedEvent
{
	bool                                               OnFire;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
