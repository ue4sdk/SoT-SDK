#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PirateGenerator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc
struct UAnimationSwitchDataAsset_GetAnimSetIdForDesc_Params
{
	struct FPirateDescription                          Desc;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync
struct UCharacterMeshBakeFunctionLibrary_BakeCharacterMeshAsync_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshSpecification;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             AsyncResult;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh
struct UCharacterMeshBakeFunctionLibrary_BakeCharacterMesh_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshSpecification;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature
struct UCharacterMeshBakeFunctionLibrary_AsyncBakeResultDynamic__DelegateSignature_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes
struct UCharacterMeshBakeFunctionLibrary_AppendCharacterBlendShapes_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshSpecification;                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FIPGBlendShape>                      BlendShapes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification
struct UCharacterMeshBakeTestFunctionLibrary_MakeCharacterMeshSpecification_Params
{
	class UCharacterMeshBakeSpecification*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets
struct UCharacterMeshBakeTestFunctionLibrary_BlendMeshWithMeshPatchAssets_Params
{
	class USkeletalMesh*                               BaseMesh;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseMeshWeight;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMeshPatchAsset*>                     MeshPatchAssets;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      MeshPatchAssetWeights;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMesh*                               TargetMesh;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault
struct UCharacterMeshBakeTestFunctionLibrary_BakeCharacterMeshFromClassDefault_Params
{
	class UClass*                                      CharacterMeshBakeSpecificationClass;                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria
struct UCharacterMeshBakeTestFunctionLibrary_AreMeshesEquivalentByMeshPatchCriteria_Params
{
	class USkeletalMesh*                               MeshA;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MeshB;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName
struct UFileAccessFunctionLibrary_GetMeshPatchAssetPathFromMeshPathAndTypeName_Params
{
	class FString                                      MeshPath;                                                 // (Parm, ZeroConstructor)
	class FString                                      TypeName;                                                 // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName
struct UFileAccessFunctionLibrary_GetMeshPatchAssetForMeshFromTypeName_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      TypeName;                                                 // (Parm, ZeroConstructor)
	class UMeshPatchAsset*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted
struct UPirateBodyShapeFunctionLibrary_GetHighestWeighted_Params
{
	float                                              BaseMeshBlendWeight;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              BodyShapeBlendNames;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      BodyShapeBlendWeights;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Threshold;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_FindBodyBlendsFromBodyShapeWheelRadialCoordinate_Params
{
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRadialCoordinate                           BodyShapeWheelRadialCoordinate;                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              BaseMeshBlendWeight;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              BodyShapeBlendNames;                                      // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      BodyShapeBlendWeights;                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_ConvertToRadialCoordinate_Params
{
	struct FVector2D                                   UV;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRadialCoordinate                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_ConvertFromRadialCoordinate_Params
{
	struct FRadialCoordinate                           Coord;                                                    // (Parm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription
struct UPirateGeneratorFunctionLibrary_SavePirateDescription_Params
{
	class FString                                      RelativePath;                                             // (Parm, ZeroConstructor)
	struct FPirateDescription                          InDesc;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape
struct UPirateGeneratorFunctionLibrary_RandomBodyShape_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRadialCoordinate                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription
struct UPirateGeneratorFunctionLibrary_LoadPirateDescription_Params
{
	class FString                                      RelativePath;                                             // (Parm, ZeroConstructor)
	struct FPirateDescription                          OutDesc;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread
struct UPirateGeneratorFunctionLibrary_K2_BakeFromDescriptionGameThread_Params
{
	struct FPirateDescription                          Desc;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EPirateBakeFlags>                      Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               OutMesh;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FPirateDescription                          OutDesc;                                                  // (Parm, OutParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString
struct UPirateGeneratorFunctionLibrary_GetSeedFromString_Params
{
	class FString                                      RefName;                                                  // (Parm, ZeroConstructor)
	class FString                                      Str;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences
struct UPirateGeneratorFunctionLibrary_GetAllTextureReferences_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPirateGeneratorTextureReference>    OutReferences;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions
struct UPirateGeneratorFunctionLibrary_GetAllDescriptions_Params
{
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate
struct UPirateGeneratorFunctionLibrary_GenerateRandomPirate_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideBodyShape;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRadialCoordinate                           BodyShapeOverride;                                        // (Parm)
	TEnumAsByte<EIPGGender>                            SpecificGender;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGEthnicity>                         SpecificEthnicity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FIPGDynamicSlider>                   DynamicSliders;                                           // (Parm, ZeroConstructor)
	TArray<struct FName>                               TextureReferences;                                        // (Parm, ZeroConstructor)
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                         // (Parm, ZeroConstructor)
	struct FPirateDescription                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync
struct UPirateGeneratorFunctionLibrary_BakeFromDescriptionAsync_Params
{
	struct FPirateDescription                          Desc;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EPirateBakeFlags>                      Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             AsyncResult;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification
struct UPreparePirateMeshBakeTestFunctionLibrary_PopulateSkeletonBlendsInCharacterMeshBakeSpecification_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshBakeSpecification;                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MeshWithBaseSkeleton;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletonsDataAsset*                         SkeletonsDataAsset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MeshTypeSkeletonFileFormat;                               // (Parm, ZeroConstructor)
	float                                              BaseMeshBlendWeight;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              BodyShapeBlendNames;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      BodyShapeBlendWeights;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification
struct UPreparePirateMeshBakeTestFunctionLibrary_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshBakeSpecification;                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USkeletalMesh*>                       SubMeshes;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              BaseMeshBlendWeight;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              BodyShapeBlendNames;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      BodyShapeBlendWeights;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory
struct UWardrobeOutfitDataAsset_GetBiasForCategory_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync
struct UWardrobeFunctionLibrary_PickOutfitAsync_Params
{
	TArray<struct FName>                               ClothingItemNames;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Tags;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             AsyncResult;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit
struct UWardrobeFunctionLibrary_PickOutfit_Params
{
	TArray<struct FName>                               ClothingItemNames;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Tags;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWardrobeOutfitResult                       Result;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias
struct UWardrobeFunctionLibrary_GetRandomWardrobeItemsWithBias_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               InputItems;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FWardrobeOutfitCategoryBias>         BiasPerCategory;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems
struct UWardrobeFunctionLibrary_GetRandomWardrobeItems_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               InputItems;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit
struct UWardrobeFunctionLibrary_GetRandomOutfit_Params
{
	class UWardrobeOutfitDataAsset*                    Outfit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes
struct UWardrobeFunctionLibrary_GetAllWardrobeTypes_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType
struct UWardrobeFunctionLibrary_GetAllWardrobeItemsForType_Params
{
	class FString                                      TypeName;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithExclusions;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems
struct UWardrobeFunctionLibrary_GetAllWardrobeItems_Params
{
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit
struct UWardrobeFunctionLibrary_CanLoadOutfit_Params
{
	TArray<struct FName>                               ClothingItemNames;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Tags;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature
struct UWardrobeFunctionLibrary_AsyncOutfitResultDynamic__DelegateSignature_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USkeletalMesh*>                       Meshes;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
