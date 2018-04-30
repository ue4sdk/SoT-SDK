#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PirateGenerator.AnimationSwitchEntry
// 0x0010
struct FAnimationSwitchEntry
{
	class UClass*                                      AnimSetDataId;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       BodyShape;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.RadialCoordinate
// 0x0008
struct FRadialCoordinate
{
	float                                              RadialDistance;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              NormalizedAngle;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGBlendShape
// 0x0014
struct FIPGBlendShape
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NodeName;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGDynamicSlider
// 0x0008
struct FIPGDynamicSlider
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	int                                                AffectedPriority;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGScalarParameter
// 0x000C
struct FIPGScalarParameter
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.PirateDescription
// 0x0078
struct FPirateDescription
{
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TEnumAsByte<EIPGPirateType>                        Type;                                                     // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGEthnicity>                         Ethnicity;                                                // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRadialCoordinate                           BodyShapeCoordinate;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible)
	TArray<struct FIPGBlendShape>                      BlendShapes;                                              // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FIPGDynamicSlider>                   DynamicSliders;                                           // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Seed;                                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Items;                                                    // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               TextureReferences;                                        // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               MaterialReferences;                                       // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.BlendedSubMeshSpecification
// 0x0030
struct FBlendedSubMeshSpecification
{
	TArray<float>                                      MeshPatchAssetWeights;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class USkeletalMesh*                               Mesh;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BaseMeshWeight;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMeshPatchAsset*>                     MeshPatchAssets;                                          // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PirateGenerator.MaterialReferenceEntry
// 0x0018
struct FMaterialReferenceEntry
{
	class UMaterialInterface*                          ToMaterial;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	bool                                               bCopyParametersAcross;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          FromMaterial;                                             // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.MaterialReferencesEntry
// 0x0018
struct FMaterialReferencesEntry
{
	TArray<struct FMaterialReferenceEntry>             References;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.PirateGeneratorTextureReference
// 0x0018
struct FPirateGeneratorTextureReference
{
	TArray<struct FName>                               References;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.TextureSwitchParameters
// 0x0058
struct FTextureSwitchParameters
{
	TArray<struct FName>                               SelectedReferences;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	bool                                               bAsync;                                                   // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            SelectedGender;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGEthnicity>                         SelectedEthnicity;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SelectedBodyShape;                                        // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SelectedItems;                                            // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.TextureSwitchSeedEntry
// 0x0018
struct FTextureSwitchSeedEntry
{
	struct FStringAssetReference                       Texture;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       ReferenceName;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.TextureSwitchGenderEntry
// 0x0018
struct FTextureSwitchGenderEntry
{
	struct FStringAssetReference                       Texture;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TEnumAsByte<EIPGGender>                            Gender;                                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.TextureSwitchEthnicityEntry
// 0x0018
struct FTextureSwitchEthnicityEntry
{
	struct FStringAssetReference                       Texture;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TEnumAsByte<EIPGEthnicity>                         Ethnicity;                                                // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.TextureSwitchBodyShapeEntry
// 0x0018
struct FTextureSwitchBodyShapeEntry
{
	struct FStringAssetReference                       Texture;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       BodyShape;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.TextureSwitchItemEntry
// 0x0018
struct FTextureSwitchItemEntry
{
	struct FStringAssetReference                       Texture;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       ItemName;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.ColorTextureSwitchSeedEntry
// 0x0018
struct FColorTextureSwitchSeedEntry
{
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       ReferenceName;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.MeshPatchEntry
// 0x0018
struct FMeshPatchEntry
{
	struct FStringAssetReference                       Reference;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.WardrobeOutfitCategoryBias
// 0x000C
struct FWardrobeOutfitCategoryBias
{
	float                                              EmptyProbability;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       CategoryName;                                             // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.WardrobeOutfitResult
// 0x0020
struct FWardrobeOutfitResult
{
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                         // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<class USkeletalMesh*>                       Meshes;                                                   // 0x01E3(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PirateGenerator.IPGTestSimpleType
// 0x000C
struct FIPGTestSimpleType
{
	int                                                IntTest;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       StringTest;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGTestClass
// 0x0060
struct FIPGTestClass
{
	TArray<TEnumAsByte<EIPGTestEnum>>                  EnumVectorTest;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       StringTest;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatTest;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IntTest;                                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGTestEnum>                          EnumTest;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIPGTestSimpleType                          ObjectTest;                                               // 0x01E3(0x000C) (Edit, BlueprintVisible)
	struct FIPGTestSimpleType                          ObjectNoneTest;                                           // 0x01E3(0x000C) (Edit, BlueprintVisible)
	TArray<struct FIPGTestSimpleType>                  VectorTest;                                               // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               StrVectorTest;                                            // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.IPGDynamicSliderName
// 0x000C
struct FIPGDynamicSliderName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	int                                                AffectedPriority;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGBlendingMethod
// 0x0010
struct FIPGBlendingMethod
{
	TEnumAsByte<EIPGBlendType>                         BlendType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGSetGroup
// 0x0008
struct FIPGSetGroup
{
	TEnumAsByte<EIPGSetMode>                           Mode;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	int                                                Priority;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGCompatibleSet
// 0x0008
struct FIPGCompatibleSet
{
	struct FName                                       SetName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGBlendRange
// 0x0028
struct FIPGBlendRange
{
	TArray<struct FIPGCompatibleSet>                   Compatibility;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Env;                                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGBlendNode
// 0x0018
struct FIPGBlendNode
{
	TArray<struct FIPGBlendRange>                      Ranges;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGSetData
// 0x0020
struct FIPGSetData
{
	TArray<struct FIPGBlendNode>                       Nodes;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGEthnicity>                         Ethnicity;                                                // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGData
// 0x0040
struct FIPGData
{
	TArray<struct FIPGSetData>                         Sets;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FIPGDynamicSliderName>               DynamicSliderNames;                                       // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FIPGBlendingMethod>                  BlendingMethods;                                          // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FIPGSetGroup>                        Groups;                                                   // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.IPGBodyShape
// 0x000C
struct FIPGBodyShape
{
	float                                              NormalizedWheelAngle;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGBodyShapes
// 0x0020
struct FIPGBodyShapes
{
	TArray<struct FIPGBodyShape>                       Female;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FIPGBodyShape>                       Male;                                                     // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.Config
// 0x0070
struct FConfig
{
	struct FIPGBodyShapes                              BodyShapes;                                               // 0x0000(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1C3];                                     // 0x0020(0x01C3) MISSED OFFSET
	struct FIPGData                                    IPG;                                                      // 0x01E3(0x0040) (Edit, BlueprintVisible)
	struct FName                                       MaleBaseShape;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FemaleBaseShape;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.ClothingSlot
// 0x0018
struct FClothingSlot
{
	TArray<struct FName>                               Tags;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.WardrobeConfig
// 0x0020
struct FWardrobeConfig
{
	TArray<struct FName>                               Priority;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FClothingSlot>                       Slots;                                                    // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.Outfit
// 0x0030
struct FOutfit
{
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FName>                               PartNames;                                                // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               FreeSlots;                                                // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.ClothingPart
// 0x0020
struct FClothingPart
{
	TEnumAsByte<EIPGGender>                            Gender;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Slots;                                                    // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.ClothingItem
// 0x0058
struct FClothingItem
{
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       Type;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EIPGPirateType>>                CompatiblePirateTypes;                                    // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Variants;                                                 // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       Parent;                                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FClothingPart>                       Parts;                                                    // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
