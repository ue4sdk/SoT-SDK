#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Foliage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0020 (0x0890 - 0x0870)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0870(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Foliage.FoliageStatistics
// 0x0000 (0x0028 - 0x0028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}


	int STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	int STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
};


// Class Foliage.FoliageType
// 0x0348 (0x0370 - 0x0028)
class UFoliageType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      bEnableStaticLighting : 1;                                // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      CastShadow : 1;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGuid                                       UpdateGuid;                                               // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityAdjustmentFactor;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFoliageScaling>                       Scaling;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleX;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleY;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleZ;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFoliageVertexColorMask>               VertexColorMask;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VertexColorMaskThreshold;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      VertexColorMaskInvert : 1;                                // 0x01E3(0x0001) (Edit)
	struct FFloatInterval                              ZOffset;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AlignToNormal : 1;                                        // 0x01E3(0x0001) (Edit)
	float                                              AlignMaxAngle;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomYaw : 1;                                            // 0x01E3(0x0001) (Edit)
	float                                              RandomPitchAngle;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              GroundSlopeAngle;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              Height;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LandscapeLayers;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FName                                       LandscapeLayer;                                           // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      CollisionWithWorld : 1;                                   // 0x01E3(0x0001) (Edit)
	struct FVector                                     CollisionScale;                                           // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumLayerWeight;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            MeshBounds;                                               // 0x01E3(0x001C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LowBoundOriginRadius;                                     // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FInt32Interval                              CullDistance;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 4;                                        // 0x01E3(0x0001)
	unsigned char                                      bCastDynamicShadow : 1;                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                ChangeCount;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReapplyDensity : 1;                                       // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomPitchAngle : 1;                              // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bOverrideLightMapRes : 1;                                 // 0x01E3(0x0001) (BlueprintVisible, BlueprintReadOnly)
	int                                                OverriddenLightMapRes;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAsOccluder : 1;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBodyInstance                               BodyInstance;                                             // 0x01E3(0x0190) (Edit)
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	uint64_t                                           HiddenEditorViews;                                        // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      IsSelected : 1;                                           // 0x01E3(0x0001)
	float                                              CollisionRadius;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadeRadius;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSteps;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialSeedDensity;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AverageSpreadDistance;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpreadVariance;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SeedsPerStep;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DistributionSeed;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInitialSeedOffset;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanGrowInShade;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnsInShade;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInitialAge;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverlapPriority;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ProceduralScale;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          ScaleCurve;                                               // 0x01E3(0x0080) (Edit)
	unsigned char                                      UnknownData02 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      ReapplyRadius : 1;                                        // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyGroundSlope : 1;                                   // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyAlignToNormal : 1;                                 // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyHeight : 1;                                        // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomYaw : 1;                                     // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyLandscapeLayers : 1;                               // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaling : 1;                                       // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyZOffset : 1;                                       // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      ReapplyScaleX : 1;                                        // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyCollisionWithWorld : 1;                            // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      ReapplyScaleY : 1;                                        // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      ReapplyScaleZ : 1;                                        // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x18C];                                     // 0x01E4(0x018C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}

};


// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0020 (0x0390 - 0x0370)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}

};


// Class Foliage.InstancedFoliageActor
// 0x0050 (0x04C0 - 0x0470)
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0470(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}

};


// Class Foliage.InteractiveFoliageActor
// 0x0060 (0x04E0 - 0x0480)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0480(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}


	void CapsuleTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class Foliage.InteractiveFoliageComponent
// 0x0010 (0x0700 - 0x06F0)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (0x04B0 - 0x04A8)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageComponent
// 0x0028 (0x00F8 - 0x00D0)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TileOverlap;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AVolume*                                     SpawningVolume;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ProceduralGuid;                                           // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageSpawner
// 0x0040 (0x0068 - 0x0028)
class UProceduralFoliageSpawner : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                RandomSeed;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileSize;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumUniqueTiles;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}


	void Simulate(int NumSteps);
};


// Class Foliage.ProceduralFoliageTile
// 0x0128 (0x0150 - 0x0028)
class UProceduralFoliageTile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageVolume
// 0x0008 (0x04B0 - 0x04A8)
class AProceduralFoliageVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
