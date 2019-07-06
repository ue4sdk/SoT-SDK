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
#include "SoT_ShipDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Fire.FireCellStateTimingParams
// 0x0080
struct FFireCellStateTimingParams
{
	struct FFloatRange                                 KindleTime;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 BurningTime;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 SmoulderingTime;                                          // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 SteamingTime;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 WetTime;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 SidewaysPropagationTime;                                  // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 UpwardPropagationTime;                                    // 0x0060(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 DownwardPropagationTime;                                  // 0x0070(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.FireCellAudioParams
// 0x0038
struct FFireCellAudioParams
{
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 FirePlay;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 FireStop;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 FireDouse;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FireSwitchGroup;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FireSwitchBurning;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FireSwitchKindled;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.ShipFireDamageParams
// 0x0020
struct FShipFireDamageParams
{
	float                                              DamageTime;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      DamagerType;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FShipPartsDamageMap                         ShipDamageMap;                                            // 0x0010(0x0010) (Edit)
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

// ScriptStruct Fire.ShipFireLightRelativeSpawnDesc
// 0x0028 (0x0060 - 0x0038)
struct FShipFireLightRelativeSpawnDesc : public FShipFireRelativeSpawnDesc
{
	struct FVector                                     LightPositionOffset;                                      // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EShipRegion>>                   DormantShipRegions;                                       // 0x0048(0x0010) (Edit, ZeroConstructor)
	float                                              DormantFadeDistance;                                      // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireLight
// 0x0090
struct FShipFireLight
{
	struct FShipFireLightRelativeSpawnDesc             Desc;                                                     // 0x0000(0x0060)
	class UPointLightComponent*                        PointLight;                                               // 0x0060(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AreaLight;                                                // 0x0068(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET
};

// ScriptStruct Fire.FireCellStateParticleTemplate
// 0x0010
struct FFireCellStateParticleTemplate
{
	class UParticleSystem*                             Template;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFireCellState>                        State;                                                    // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideMaxLODToSpawnFor;                                 // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                MaxLODToSpawnFor;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Fire.ShipFireCellDesc
// 0x00C0
struct FShipFireCellDesc
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FBox                                        BoundingBox;                                              // 0x000C(0x001C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FIntVector                                  GridPosition;                                             // 0x0028(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               CanBurn;                                                  // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShipDeck>                             Deck;                                                     // 0x0035(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	int                                                CellIndex;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               ShouldSpawnDefaultParticleEffect;                         // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FTransform                                  DefaultParticleEffectSpawnTransform;                      // 0x0040(0x0030) (Edit, IsPlainOldData)
	TArray<struct FFireCellStateParticleTemplate>      CustomParticleEffectTemplates;                            // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FTransform                                  CustomParticleEffectSpawnTransform;                       // 0x0080(0x0030) (Edit, IsPlainOldData)
	TArray<int>                                        NeighbourCellIndices;                                     // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Fire.ReplicatedFireCellData
// 0x0001
struct FReplicatedFireCellData
{
	TEnumAsByte<EFireCellState>                        State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Fire.ShipFireCell
// 0x00F0
struct FShipFireCell
{
	struct FShipFireCellDesc                           Desc;                                                     // 0x0000(0x00C0)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00C0(0x0030) MISSED OFFSET
};

// ScriptStruct Fire.ShipFireVFXParams
// 0x0038
struct FShipFireVFXParams
{
	TArray<struct FFireCellStateParticleTemplate>      DefaultParticleTemplates;                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UParticleSystem*                             TopDeckLowDetailParticleSystem;                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TopDeckSmokeParticleSystem;                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BelowDeckSmokeParticleSystem;                             // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OnFireThresholdBeforeTopDeckSmokeAppears;                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumInterleaveSpawnSteps;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TickIntervalForAllCells;                                  // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
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

// ScriptStruct Fire.FireCellStateData
// 0x001C
struct FFireCellStateData
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Fire.FlammableActorData
// 0x0001
struct FFlammableActorData
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
