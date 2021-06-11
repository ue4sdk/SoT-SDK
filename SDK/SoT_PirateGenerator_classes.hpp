#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PirateGenerator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PirateGenerator.AnimationSwitchDataAsset
// 0x0018 (0x0040 - 0x0028)
class UAnimationSwitchDataAsset : public UDataAsset
{
public:
	float                                              Threshold;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FAnimationSwitchEntry>               Entries;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.AnimationSwitchDataAsset"));
		return ptr;
	}


	class UClass* GetAnimSetIdForDesc(const struct FPirateDescription& Desc);
};


// Class PirateGenerator.CharacterMeshBakeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCharacterMeshBakeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.CharacterMeshBakeFunctionLibrary"));
		return ptr;
	}


	static void BakeCharacterMeshAsync(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, const struct FScriptDelegate& AsyncResult);
	static class USkeletalMesh* BakeCharacterMesh(class UCharacterMeshBakeSpecification* CharacterMeshSpecification);
	void AsyncBakeResultDynamic__DelegateSignature(class USkeletalMesh* Mesh);
	static void AppendCharacterBlendShapes(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, TArray<struct FIPGBlendShape> BlendShapes);
};


// Class PirateGenerator.SkeletonsDataAsset
// 0x0050 (0x0078 - 0x0028)
class USkeletonsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.SkeletonsDataAsset"));
		return ptr;
	}

};


// Class PirateGenerator.CharacterMeshBakeSpecification
// 0x0070 (0x0098 - 0x0028)
class UCharacterMeshBakeSpecification : public UObject
{
public:
	bool                                               StripTopLOD;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class USkeletalMesh*                               CharacterMesh;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMesh*                               BaseMeshReferenceSkeleton;                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletonsDataAsset*                         SourceSkeletons;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SourceSkeletonNames;                                      // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      SourceSkeletonWeights;                                    // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FBlendedSubMeshSpecification>        BlendedSubMeshes;                                         // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class USkeletalMesh*>                       UnblendedSubMeshes;                                       // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FIPGBlendShape>                      BlendShapes;                                              // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.CharacterMeshBakeSpecification"));
		return ptr;
	}

};


// Class PirateGenerator.CharacterMeshBakeTestFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCharacterMeshBakeTestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.CharacterMeshBakeTestFunctionLibrary"));
		return ptr;
	}


	static class UCharacterMeshBakeSpecification* MakeCharacterMeshSpecification();
	static void BlendMeshWithMeshPatchAssets(class USkeletalMesh* BaseMesh, float BaseMeshWeight, TArray<class UMeshPatchAsset*> MeshPatchAssets, TArray<float> MeshPatchAssetWeights, class USkeletalMesh** TargetMesh);
	static class USkeletalMesh* BakeCharacterMeshFromClassDefault(class UClass* CharacterMeshBakeSpecificationClass);
	static bool AreMeshesEquivalentByMeshPatchCriteria(class USkeletalMesh* MeshA, class USkeletalMesh* MeshB);
};


// Class PirateGenerator.ColorTexture
// 0x0010 (0x0148 - 0x0138)
class UColorTexture : public UTexture
{
public:
	struct FLinearColor                                Color;                                                    // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.ColorTexture"));
		return ptr;
	}

};


// Class PirateGenerator.FileAccessFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFileAccessFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.FileAccessFunctionLibrary"));
		return ptr;
	}


	static class FString GetMeshPatchAssetPathFromMeshPathAndTypeName(const class FString& MeshPath, const class FString& TypeName);
	static class UMeshPatchAsset* GetMeshPatchAssetForMeshFromTypeName(class USkeletalMesh* Mesh, const class FString& TypeName);
};


// Class PirateGenerator.MaterialReferencesDataAsset
// 0x0010 (0x0038 - 0x0028)
class UMaterialReferencesDataAsset : public UDataAsset
{
public:
	TArray<struct FMaterialReferencesEntry>            MaterialReferences;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.MaterialReferencesDataAsset"));
		return ptr;
	}

};


// Class PirateGenerator.PirateBodyShapeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPirateBodyShapeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.PirateBodyShapeFunctionLibrary"));
		return ptr;
	}


	static class FString GetHighestWeighted(float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights, float Threshold);
	static bool FindBodyBlendsFromBodyShapeWheelRadialCoordinate(TEnumAsByte<EIPGGender> Gender, const struct FRadialCoordinate& BodyShapeWheelRadialCoordinate, float* BaseMeshBlendWeight, TArray<class FString>* BodyShapeBlendNames, TArray<float>* BodyShapeBlendWeights);
	static struct FRadialCoordinate ConvertToRadialCoordinate(const struct FVector2D& UV);
	static struct FVector2D ConvertFromRadialCoordinate(const struct FRadialCoordinate& Coord);
};


// Class PirateGenerator.PirateGeneratorMaterials
// 0x0010 (0x0038 - 0x0028)
class UPirateGeneratorMaterials : public UObject
{
public:
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.PirateGeneratorMaterials"));
		return ptr;
	}

};


// Class PirateGenerator.PirateGeneratorFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPirateGeneratorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.PirateGeneratorFunctionLibrary"));
		return ptr;
	}


	static bool SavePirateDescription(const class FString& RelativePath, const struct FPirateDescription& InDesc);
	static struct FRadialCoordinate RandomBodyShape(int Seed);
	static bool LoadPirateDescription(const class FString& RelativePath, struct FPirateDescription* OutDesc);
	static void K2_BakeFromDescriptionGameThread(const struct FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, class USkeletalMesh** OutMesh, struct FPirateDescription* OutDesc);
	static int IPGLatestVersion();
	static int GetSeedFromString(const class FString& RefName, const class FString& Str);
	static void GetAllTextureReferences(class USkeletalMesh* Mesh, TArray<struct FPirateGeneratorTextureReference>* OutReferences);
	static TArray<class FString> GetAllDescriptions();
	static struct FPirateDescription GenerateRandomPirateWithVersion(int Seed, int Version, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<struct FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters);
	static struct FPirateDescription GenerateRandomPirate(int Seed, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<struct FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters);
	static void BakeFromDescriptionAsync(const struct FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, const struct FScriptDelegate& AsyncResult);
};


// Class PirateGenerator.PirateGeneratorSettings
// 0x00E0 (0x0108 - 0x0028)
class UPirateGeneratorSettings : public UObject
{
public:
	class FString                                      ConfigJson;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      PiratesFolder;                                            // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      WardrobeFolder;                                           // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       WardrobeDataAsset;                                        // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               DefaultWardrobeItems;                                     // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       MaterialReferencesDataAsset;                              // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       SkeletonsDataAsset;                                       // 0x0088(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               BaseSkeletonMeshes;                                       // 0x0098(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               Characterization;                                         // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class FString>                              SkeletonMeshFormats;                                      // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       FirstPersonAnimations;                                    // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       ThirdPersonAnimations;                                    // 0x00D8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<float>                                      LODScreenSizes;                                           // 0x00E8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<float>                                      LODHysteresis;                                            // 0x00F8(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.PirateGeneratorSettings"));
		return ptr;
	}

};


// Class PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPreparePirateMeshBakeTestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary"));
		return ptr;
	}


	static void PopulateSkeletonBlendsInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, class USkeletalMesh* MeshWithBaseSkeleton, class USkeletonsDataAsset* SkeletonsDataAsset, const class FString& MeshTypeSkeletonFileFormat, float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights);
	static void PopulateBlendedSubMeshesInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, TArray<class USkeletalMesh*> SubMeshes, float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights);
};


// Class PirateGenerator.TextureSwitch
// 0x00E0 (0x0220 - 0x0140)
class UTextureSwitch : public UTextureProxy
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0140(0x0080) MISSED OFFSET
	bool                                               bDuplicated;                                              // 0x01C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FTextureSwitchParameters                    DefaultParameters;                                        // 0x01C8(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.TextureSwitch"));
		return ptr;
	}

};


// Class PirateGenerator.TextureSwitchBySeed
// 0x0038 (0x0258 - 0x0220)
class UTextureSwitchBySeed : public UTextureSwitch
{
public:
	struct FName                                       HashSource;                                               // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FallbackProbability;                                      // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FallbackReferenceName;                                    // 0x022C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	struct FStringAssetReference                       FallbackTexture;                                          // 0x0238(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTextureSwitchSeedEntry>             Entries;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.TextureSwitchBySeed"));
		return ptr;
	}

};


// Class PirateGenerator.TextureSwitchByGender
// 0x0010 (0x0230 - 0x0220)
class UTextureSwitchByGender : public UTextureSwitch
{
public:
	TArray<struct FTextureSwitchGenderEntry>           Entries;                                                  // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.TextureSwitchByGender"));
		return ptr;
	}

};


// Class PirateGenerator.TextureSwitchByEthnicity
// 0x0010 (0x0230 - 0x0220)
class UTextureSwitchByEthnicity : public UTextureSwitch
{
public:
	TArray<struct FTextureSwitchEthnicityEntry>        Entries;                                                  // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.TextureSwitchByEthnicity"));
		return ptr;
	}

};


// Class PirateGenerator.TextureSwitchByBodyShape
// 0x0010 (0x0230 - 0x0220)
class UTextureSwitchByBodyShape : public UTextureSwitch
{
public:
	TArray<struct FTextureSwitchBodyShapeEntry>        Entries;                                                  // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.TextureSwitchByBodyShape"));
		return ptr;
	}

};


// Class PirateGenerator.TextureSwitchByItem
// 0x0020 (0x0240 - 0x0220)
class UTextureSwitchByItem : public UTextureSwitch
{
public:
	struct FStringAssetReference                       FallbackTexture;                                          // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTextureSwitchItemEntry>             Entries;                                                  // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.TextureSwitchByItem"));
		return ptr;
	}

};


// Class PirateGenerator.ColorTextureSwitchBySeed
// 0x0018 (0x0238 - 0x0220)
class UColorTextureSwitchBySeed : public UTextureSwitch
{
public:
	struct FName                                       HashSource;                                               // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FColorTextureSwitchSeedEntry>        Entries;                                                  // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.ColorTextureSwitchBySeed"));
		return ptr;
	}

};


// Class PirateGenerator.WardrobeExcludeDataAsset
// 0x0010 (0x0038 - 0x0028)
class UWardrobeExcludeDataAsset : public UDataAsset
{
public:
	TArray<struct FName>                               ExcludeItems;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.WardrobeExcludeDataAsset"));
		return ptr;
	}

};


// Class PirateGenerator.WardrobeDataAsset
// 0x00C0 (0x00E8 - 0x0028)
class UWardrobeDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET
	TArray<class UWardrobeExcludeDataAsset*>           ExcludeDataAssets;                                        // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMeshPatchEntry>                     AssetMap;                                                 // 0x00D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.WardrobeDataAsset"));
		return ptr;
	}

};


// Class PirateGenerator.WardrobeOutfitDataAsset
// 0x0030 (0x0058 - 0x0028)
class UWardrobeOutfitDataAsset : public UDataAsset
{
public:
	TArray<struct FName>                               FemaleWardrobeItems;                                      // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               MaleWardrobeItems;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FWardrobeOutfitCategoryBias>         BiasPerCategory;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.WardrobeOutfitDataAsset"));
		return ptr;
	}


	float GetBiasForCategory(const struct FName& Name);
};


// Class PirateGenerator.WardrobeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWardrobeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.WardrobeFunctionLibrary"));
		return ptr;
	}


	static void PickOutfitAsync(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, const struct FScriptDelegate& AsyncResult);
	static bool PickOutfit(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, struct FWardrobeOutfitResult* Result);
	static TArray<struct FName> GetRandomWardrobeItemsWithBias(int Seed, TArray<struct FName> InputItems, TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory);
	static TArray<struct FName> GetRandomWardrobeItems(int Seed, TArray<struct FName> InputItems);
	static TArray<struct FName> GetRandomOutfit(class UWardrobeOutfitDataAsset* Outfit, int Seed, TEnumAsByte<EIPGGender> Gender);
	static TArray<struct FName> GetAllWardrobeTypes();
	static TArray<struct FName> GetAllWardrobeItemsForType(const class FString& TypeName, TEnumAsByte<EIPGPirateType> PirateType, bool bWithExclusions);
	static TArray<struct FName> GetAllWardrobeItems(TEnumAsByte<EIPGPirateType> PirateType);
	static bool CanLoadOutfit(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender);
	void AsyncOutfitResultDynamic__DelegateSignature(bool Success, TArray<class USkeletalMesh*> Meshes);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
