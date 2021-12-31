#pragma once

// Sea of Thieves (2) SDK

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
	FPirateDescription                                 Desc;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	UClass*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync
struct UCharacterMeshBakeFunctionLibrary_BakeCharacterMeshAsync_Params
{
	UCharacterMeshBakeSpecification*                   CharacterMeshSpecification;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    AsyncResult;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh
struct UCharacterMeshBakeFunctionLibrary_BakeCharacterMesh_Params
{
	UCharacterMeshBakeSpecification*                   CharacterMeshSpecification;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	USkeletalMesh*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature
struct UCharacterMeshBakeFunctionLibrary_AsyncBakeResultDynamic__DelegateSignature_Params
{
	USkeletalMesh*                                     Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes
struct UCharacterMeshBakeFunctionLibrary_AppendCharacterBlendShapes_Params
{
	UCharacterMeshBakeSpecification*                   CharacterMeshSpecification;                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FIPGBlendShape>                             BlendShapes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification
struct UCharacterMeshBakeTestFunctionLibrary_MakeCharacterMeshSpecification_Params
{
	UCharacterMeshBakeSpecification*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets
struct UCharacterMeshBakeTestFunctionLibrary_BlendMeshWithMeshPatchAssets_Params
{
	USkeletalMesh*                                     BaseMesh;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseMeshWeight;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<UMeshPatchAsset*>                           MeshPatchAssets;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      MeshPatchAssetWeights;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	USkeletalMesh*                                     TargetMesh;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault
struct UCharacterMeshBakeTestFunctionLibrary_BakeCharacterMeshFromClassDefault_Params
{
	UClass*                                            CharacterMeshBakeSpecificationClass;                      // (Parm, ZeroConstructor, IsPlainOldData)
	USkeletalMesh*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria
struct UCharacterMeshBakeTestFunctionLibrary_AreMeshesEquivalentByMeshPatchCriteria_Params
{
	USkeletalMesh*                                     MeshA;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	USkeletalMesh*                                     MeshB;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName
struct UFileAccessFunctionLibrary_GetMeshPatchAssetPathFromMeshPathAndTypeName_Params
{
	FString                                            MeshPath;                                                 // (Parm, ZeroConstructor)
	FString                                            TypeName;                                                 // (Parm, ZeroConstructor)
	FString                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName
struct UFileAccessFunctionLibrary_GetMeshPatchAssetForMeshFromTypeName_Params
{
	USkeletalMesh*                                     Mesh;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            TypeName;                                                 // (Parm, ZeroConstructor)
	UMeshPatchAsset*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted
struct UPirateBodyShapeFunctionLibrary_GetHighestWeighted_Params
{
	float                                              BaseMeshBlendWeight;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<FString>                                    BodyShapeBlendNames;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      BodyShapeBlendWeights;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Threshold;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FString                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_FindBodyBlendsFromBodyShapeWheelRadialCoordinate_Params
{
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FRadialCoordinate                                  BodyShapeWheelRadialCoordinate;                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              BaseMeshBlendWeight;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<FString>                                    BodyShapeBlendNames;                                      // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      BodyShapeBlendWeights;                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_ConvertToRadialCoordinate_Params
{
	FVector2D                                          UV;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FRadialCoordinate                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_ConvertFromRadialCoordinate_Params
{
	FRadialCoordinate                                  Coord;                                                    // (Parm)
	FVector2D                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription
struct UPirateGeneratorFunctionLibrary_SavePirateDescription_Params
{
	FString                                            RelativePath;                                             // (Parm, ZeroConstructor)
	FPirateDescription                                 InDesc;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape
struct UPirateGeneratorFunctionLibrary_RandomBodyShape_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FRadialCoordinate                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription
struct UPirateGeneratorFunctionLibrary_LoadPirateDescription_Params
{
	FString                                            RelativePath;                                             // (Parm, ZeroConstructor)
	FPirateDescription                                 OutDesc;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread
struct UPirateGeneratorFunctionLibrary_K2_BakeFromDescriptionGameThread_Params
{
	FPirateDescription                                 Desc;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EPirateBakeFlags>                      Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	USkeletalMesh*                                     OutMesh;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FPirateDescription                                 OutDesc;                                                  // (Parm, OutParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion
struct UPirateGeneratorFunctionLibrary_IPGLatestVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString
struct UPirateGeneratorFunctionLibrary_GetSeedFromString_Params
{
	FString                                            RefName;                                                  // (Parm, ZeroConstructor)
	FString                                            Str;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences
struct UPirateGeneratorFunctionLibrary_GetAllTextureReferences_Params
{
	USkeletalMesh*                                     Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FPirateGeneratorTextureReference>           OutReferences;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions
struct UPirateGeneratorFunctionLibrary_GetAllDescriptions_Params
{
	TArray<FString>                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion
struct UPirateGeneratorFunctionLibrary_GenerateRandomPirateWithVersion_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Version;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideBodyShape;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FRadialCoordinate                                  BodyShapeOverride;                                        // (Parm)
	TEnumAsByte<EIPGGender>                            SpecificGender;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGEthnicity>                         SpecificEthnicity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FIPGDynamicSlider>                          DynamicSliders;                                           // (Parm, ZeroConstructor)
	TArray<FName>                                      TextureReferences;                                        // (Parm, ZeroConstructor)
	TArray<FIPGScalarParameter>                        ScalarParameters;                                         // (Parm, ZeroConstructor)
	FPirateDescription                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate
struct UPirateGeneratorFunctionLibrary_GenerateRandomPirate_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideBodyShape;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FRadialCoordinate                                  BodyShapeOverride;                                        // (Parm)
	TEnumAsByte<EIPGGender>                            SpecificGender;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGEthnicity>                         SpecificEthnicity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FIPGDynamicSlider>                          DynamicSliders;                                           // (Parm, ZeroConstructor)
	TArray<FName>                                      TextureReferences;                                        // (Parm, ZeroConstructor)
	TArray<FIPGScalarParameter>                        ScalarParameters;                                         // (Parm, ZeroConstructor)
	FPirateDescription                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync
struct UPirateGeneratorFunctionLibrary_BakeFromDescriptionAsync_Params
{
	FPirateDescription                                 Desc;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EPirateBakeFlags>                      Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    AsyncResult;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification
struct UPreparePirateMeshBakeTestFunctionLibrary_PopulateSkeletonBlendsInCharacterMeshBakeSpecification_Params
{
	UCharacterMeshBakeSpecification*                   CharacterMeshBakeSpecification;                           // (Parm, ZeroConstructor, IsPlainOldData)
	USkeletalMesh*                                     MeshWithBaseSkeleton;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	USkeletonsDataAsset*                               SkeletonsDataAsset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            MeshTypeSkeletonFileFormat;                               // (Parm, ZeroConstructor)
	float                                              BaseMeshBlendWeight;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<FString>                                    BodyShapeBlendNames;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      BodyShapeBlendWeights;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification
struct UPreparePirateMeshBakeTestFunctionLibrary_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification_Params
{
	UCharacterMeshBakeSpecification*                   CharacterMeshBakeSpecification;                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<USkeletalMesh*>                             SubMeshes;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              BaseMeshBlendWeight;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<FString>                                    BodyShapeBlendNames;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      BodyShapeBlendWeights;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory
struct UWardrobeOutfitDataAsset_GetBiasForCategory_Params
{
	FName                                              Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync
struct UWardrobeFunctionLibrary_PickOutfitAsync_Params
{
	TArray<FName>                                      ClothingItemNames;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<FName>                                      Tags;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FScriptDelegate                                    AsyncResult;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit
struct UWardrobeFunctionLibrary_PickOutfit_Params
{
	TArray<FName>                                      ClothingItemNames;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<FName>                                      Tags;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FWardrobeOutfitResult                              Result;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias
struct UWardrobeFunctionLibrary_GetRandomWardrobeItemsWithBias_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FName>                                      InputItems;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<FWardrobeOutfitCategoryBias>                BiasPerCategory;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<FName>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems
struct UWardrobeFunctionLibrary_GetRandomWardrobeItems_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FName>                                      InputItems;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<FName>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit
struct UWardrobeFunctionLibrary_GetRandomOutfit_Params
{
	UWardrobeOutfitDataAsset*                          Outfit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FName>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes
struct UWardrobeFunctionLibrary_GetAllWardrobeTypes_Params
{
	TArray<FName>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType
struct UWardrobeFunctionLibrary_GetAllWardrobeItemsForType_Params
{
	FString                                            TypeName;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithExclusions;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FName>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems
struct UWardrobeFunctionLibrary_GetAllWardrobeItems_Params
{
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FName>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit
struct UWardrobeFunctionLibrary_CanLoadOutfit_Params
{
	TArray<FName>                                      ClothingItemNames;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<FName>                                      Tags;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature
struct UWardrobeFunctionLibrary_AsyncOutfitResultDynamic__DelegateSignature_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<USkeletalMesh*>                             Meshes;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
