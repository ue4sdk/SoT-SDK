#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PirateGenerator.EIPGEthnicity
enum class EIPGEthnicity : uint8_t
{
	EIPGEthnicity__UNSPECIFIED     = 0,
	EIPGEthnicity__ASIAN           = 1,
	EIPGEthnicity__BLACK           = 2,
	EIPGEthnicity__WHITE           = 3,
	EIPGEthnicity__EIPGEthnicity_MAX = 4
};


// Enum PirateGenerator.EIPGGender
enum class EIPGGender : uint8_t
{
	EIPGGender__UNSPECIFIED        = 0,
	EIPGGender__MALE               = 1,
	EIPGGender__FEMALE             = 2,
	EIPGGender__EIPGGender_MAX     = 3
};


// Enum PirateGenerator.EIPGPirateType
enum class EIPGPirateType : uint8_t
{
	EIPGPirateType__PLAYER         = 0,
	EIPGPirateType__NPC            = 1,
	EIPGPirateType__EIPGPirateType_MAX = 2
};


// Enum PirateGenerator.EIPGTestEnum
enum class EIPGTestEnum : uint8_t
{
	EIPGTestEnum__RANDOM           = 0,
	EIPGTestEnum__RANDOM_OR_NONE   = 1,
	EIPGTestEnum__EIPGTestEnum_MAX = 2
};


// Enum PirateGenerator.EIPGSetMode
enum class EIPGSetMode : uint8_t
{
	EIPGSetMode__RANDOM            = 0,
	EIPGSetMode__RANDOM_OR_NONE    = 1,
	EIPGSetMode__BLEND2_FIRST_ORDER = 2,
	EIPGSetMode__BLEND2_RANDOM     = 3,
	EIPGSetMode__NONE              = 4,
	EIPGSetMode__BLEND2_LAST_UNDERSCORE = 5,
	EIPGSetMode__EIPGSetMode_MAX   = 6
};


// Enum PirateGenerator.EIPGBlendType
enum class EIPGBlendType : uint8_t
{
	EIPGBlendType__NIX             = 0,
	EIPGBlendType__NIL             = 1,
	EIPGBlendType__RND             = 2,
	EIPGBlendType__ONOFF           = 3,
	EIPGBlendType__POSNEG          = 4,
	EIPGBlendType__MAP             = 5,
	EIPGBlendType__ON              = 6,
	EIPGBlendType__ONOFF_NEAREST   = 7,
	EIPGBlendType__ONOFF_BIAS      = 8,
	EIPGBlendType__ONOFF_BIAS_NEAREST = 9,
	EIPGBlendType__EIPGBlendType_MAX = 10
};


// Enum PirateGenerator.EPirateBakeFlags
enum class EPirateBakeFlags : uint8_t
{
	EPirateBakeFlags__None         = 0,
	EPirateBakeFlags__FirstPerson  = 1,
	EPirateBakeFlags__NoObjectFading = 2,
	EPirateBakeFlags__NoLODs       = 3,
	EPirateBakeFlags__StripTopLOD  = 4,
	EPirateBakeFlags__KeepCPUData  = 5,
	EPirateBakeFlags__DiscardImmediately = 6,
	EPirateBakeFlags__HighPriority = 7,
	EPirateBakeFlags__EPirateBakeFlags_MAX = 8
};


// Enum PirateGenerator.EFileAccessAsyncResult
enum class EFileAccessAsyncResult : uint8_t
{
	EFileAccessAsyncResult__Succeeded = 0,
	EFileAccessAsyncResult__Failed = 1,
	EFileAccessAsyncResult__EFileAccessAsyncResult_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PirateGenerator.AnimationSwitchEntry
// 0x0010
struct FAnimationSwitchEntry
{
	struct FName                                       BodyShape;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimSetDataId;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.RadialCoordinate
// 0x0008
struct FRadialCoordinate
{
	float                                              NormalizedAngle;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadialDistance;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGBlendShape
// 0x0014
struct FIPGBlendShape
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NodeName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGDynamicSlider
// 0x0008
struct FIPGDynamicSlider
{
	int                                                AffectedPriority;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGScalarParameter
// 0x000C
struct FIPGScalarParameter
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.PirateDescription
// 0x0080
struct FPirateDescription
{
	TEnumAsByte<EIPGPirateType>                        Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Version;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGEthnicity>                         Ethnicity;                                                // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	struct FRadialCoordinate                           BodyShapeCoordinate;                                      // 0x000C(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FIPGBlendShape>                      BlendShapes;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FIPGDynamicSlider>                   DynamicSliders;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Seed;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FName>                               Items;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               TextureReferences;                                        // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               MaterialReferences;                                       // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                         // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.BlendedSubMeshSpecification
// 0x0030
struct FBlendedSubMeshSpecification
{
	class USkeletalMesh*                               Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BaseMeshWeight;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UMeshPatchAsset*>                     MeshPatchAssets;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      MeshPatchAssetWeights;                                    // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PirateGenerator.MaterialReferenceEntry
// 0x0018
struct FMaterialReferenceEntry
{
	bool                                               bCopyParametersAcross;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UMaterialInterface*                          FromMaterial;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ToMaterial;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.MaterialReferencesEntry
// 0x0018
struct FMaterialReferencesEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FMaterialReferenceEntry>             References;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PirateGenerator.PirateGeneratorTextureReference
// 0x0018
struct FPirateGeneratorTextureReference
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               References;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.TextureSwitchParameters
// 0x0058
struct FTextureSwitchParameters
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	bool                                               bAsync;                                                   // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHighPriority;                                            // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                Seed;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            SelectedGender;                                           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGEthnicity>                         SelectedEthnicity;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	struct FName                                       SelectedBodyShape;                                        // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FName>                               SelectedItems;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               SelectedReferences;                                       // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
};

// ScriptStruct PirateGenerator.TextureSwitchSeedEntry
// 0x0018
struct FTextureSwitchSeedEntry
{
	struct FName                                       ReferenceName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       Texture;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PirateGenerator.TextureSwitchGenderEntry
// 0x0018
struct FTextureSwitchGenderEntry
{
	TEnumAsByte<EIPGGender>                            Gender;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FStringAssetReference                       Texture;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PirateGenerator.TextureSwitchEthnicityEntry
// 0x0018
struct FTextureSwitchEthnicityEntry
{
	TEnumAsByte<EIPGEthnicity>                         Ethnicity;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FStringAssetReference                       Texture;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PirateGenerator.TextureSwitchBodyShapeEntry
// 0x0018
struct FTextureSwitchBodyShapeEntry
{
	struct FName                                       BodyShape;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       Texture;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PirateGenerator.TextureSwitchItemEntry
// 0x0018
struct FTextureSwitchItemEntry
{
	struct FName                                       ItemName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       Texture;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PirateGenerator.ColorTextureSwitchSeedEntry
// 0x0018
struct FColorTextureSwitchSeedEntry
{
	struct FName                                       ReferenceName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.MeshPatchEntry
// 0x0018
struct FMeshPatchEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       Reference;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PirateGenerator.WardrobeOutfitCategoryBias
// 0x000C
struct FWardrobeOutfitCategoryBias
{
	struct FName                                       CategoryName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EmptyProbability;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.WardrobeOutfitResult
// 0x0020
struct FWardrobeOutfitResult
{
	TArray<class USkeletalMesh*>                       Meshes;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                         // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PirateGenerator.IPGTestSimpleType
// 0x000C
struct FIPGTestSimpleType
{
	struct FName                                       StringTest;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IntTest;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGTestClass
// 0x0060
struct FIPGTestClass
{
	struct FName                                       StringTest;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatTest;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IntTest;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGTestEnum>                          EnumTest;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FIPGTestSimpleType                          ObjectTest;                                               // 0x0014(0x000C) (Edit, BlueprintVisible)
	struct FIPGTestSimpleType                          ObjectNoneTest;                                           // 0x0020(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FIPGTestSimpleType>                  VectorTest;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               StrVectorTest;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EIPGTestEnum>>                  EnumVectorTest;                                           // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.IPGDynamicSliderName
// 0x000C
struct FIPGDynamicSliderName
{
	int                                                AffectedPriority;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGBlendingMethod
// 0x0010
struct FIPGBlendingMethod
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGBlendType>                         BlendType;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct PirateGenerator.IPGSetGroup
// 0x0008
struct FIPGSetGroup
{
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGSetMode>                           Mode;                                                     // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
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
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Env;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FIPGCompatibleSet>                   Compatibility;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.IPGBlendNode
// 0x0018
struct FIPGBlendNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FIPGBlendRange>                      Ranges;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.IPGSetData
// 0x0020
struct FIPGSetData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGEthnicity>                         Ethnicity;                                                // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                Priority;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FIPGBlendNode>                       Nodes;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.IPGSetsData
// 0x0018
struct FIPGSetsData
{
	int                                                Version;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FIPGSetData>                         Sets;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.IPGData
// 0x0048
struct FIPGData
{
	TArray<struct FIPGDynamicSliderName>               DynamicSliderNames;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FIPGBlendingMethod>                  BlendingMethods;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FIPGSetGroup>                        Groups;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CurrentVersion;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FIPGSetsData>                        Versions;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.IPGBodyShape
// 0x000C
struct FIPGBodyShape
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalizedWheelAngle;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PirateGenerator.IPGBodyShapes
// 0x0020
struct FIPGBodyShapes
{
	TArray<struct FIPGBodyShape>                       Male;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FIPGBodyShape>                       Female;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.Config
// 0x0078
struct FConfig
{
	struct FIPGData                                    IPG;                                                      // 0x0000(0x0048) (Edit, BlueprintVisible)
	struct FName                                       MaleBaseShape;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FemaleBaseShape;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIPGBodyShapes                              BodyShapes;                                               // 0x0058(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct PirateGenerator.ClothingSlot
// 0x0018
struct FClothingSlot
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Tags;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.WardrobeConfig
// 0x0020
struct FWardrobeConfig
{
	TArray<struct FClothingSlot>                       Slots;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Priority;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.Outfit
// 0x0030
struct FOutfit
{
	TArray<struct FName>                               PartNames;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               FreeSlots;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PirateGenerator.ClothingPart
// 0x0020
struct FClothingPart
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Slots;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EIPGGender>                            Gender;                                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct PirateGenerator.ClothingItem
// 0x0058
struct FClothingItem
{
	struct FName                                       Type;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EIPGPirateType>>                CompatiblePirateTypes;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Variants;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       Parent;                                                   // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FClothingPart>                       Parts;                                                    // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
