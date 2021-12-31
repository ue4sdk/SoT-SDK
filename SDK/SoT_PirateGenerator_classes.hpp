#pragma once

// Sea of Thieves (2) SDK

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
	TArray<FAnimationSwitchEntry>                      Entries;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.AnimationSwitchDataAsset"));
		return ptr;
	}


	UClass* GetAnimSetIdForDesc(const FPirateDescription& Desc);
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


	static void BakeCharacterMeshAsync(UCharacterMeshBakeSpecification* CharacterMeshSpecification, const FScriptDelegate& AsyncResult);
	static USkeletalMesh* BakeCharacterMesh(UCharacterMeshBakeSpecification* CharacterMeshSpecification);
	void AsyncBakeResultDynamic__DelegateSignature(USkeletalMesh* Mesh);
	static void AppendCharacterBlendShapes(UCharacterMeshBakeSpecification* CharacterMeshSpecification, TArray<FIPGBlendShape> BlendShapes);
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
	USkeletalMesh*                                     CharacterMesh;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	USkeletalMesh*                                     BaseMeshReferenceSkeleton;                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	USkeletonsDataAsset*                               SourceSkeletons;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<FName>                                      SourceSkeletonNames;                                      // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      SourceSkeletonWeights;                                    // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<FBlendedSubMeshSpecification>               BlendedSubMeshes;                                         // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<USkeletalMesh*>                             UnblendedSubMeshes;                                       // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<FIPGBlendShape>                             BlendShapes;                                              // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

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


	static UCharacterMeshBakeSpecification* MakeCharacterMeshSpecification();
	static void BlendMeshWithMeshPatchAssets(USkeletalMesh* BaseMesh, float BaseMeshWeight, TArray<UMeshPatchAsset*> MeshPatchAssets, TArray<float> MeshPatchAssetWeights, USkeletalMesh** TargetMesh);
	static USkeletalMesh* BakeCharacterMeshFromClassDefault(UClass* CharacterMeshBakeSpecificationClass);
	static bool AreMeshesEquivalentByMeshPatchCriteria(USkeletalMesh* MeshA, USkeletalMesh* MeshB);
};


// Class PirateGenerator.ColorTexture
// 0x0010 (0x0148 - 0x0138)
class UColorTexture : public UTexture
{
public:
	FLinearColor                                       Color;                                                    // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

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


	static FString GetMeshPatchAssetPathFromMeshPathAndTypeName(const FString& MeshPath, const FString& TypeName);
	static UMeshPatchAsset* GetMeshPatchAssetForMeshFromTypeName(USkeletalMesh* Mesh, const FString& TypeName);
};


// Class PirateGenerator.MaterialReferencesDataAsset
// 0x0010 (0x0038 - 0x0028)
class UMaterialReferencesDataAsset : public UDataAsset
{
public:
	TArray<FMaterialReferencesEntry>                   MaterialReferences;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

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


	static FString GetHighestWeighted(float BaseMeshBlendWeight, TArray<FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights, float Threshold);
	static bool FindBodyBlendsFromBodyShapeWheelRadialCoordinate(TEnumAsByte<EIPGGender> Gender, const FRadialCoordinate& BodyShapeWheelRadialCoordinate, float* BaseMeshBlendWeight, TArray<FString>* BodyShapeBlendNames, TArray<float>* BodyShapeBlendWeights);
	static FRadialCoordinate ConvertToRadialCoordinate(const FVector2D& UV);
	static FVector2D ConvertFromRadialCoordinate(const FRadialCoordinate& Coord);
};


// Class PirateGenerator.PirateGeneratorMaterials
// 0x0010 (0x0038 - 0x0028)
class UPirateGeneratorMaterials : public UObject
{
public:
	TArray<UMaterialInterface*>                        Materials;                                                // 0x0028(0x0010) (ZeroConstructor)

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


	static bool SavePirateDescription(const FString& RelativePath, const FPirateDescription& InDesc);
	static FRadialCoordinate RandomBodyShape(int Seed);
	static bool LoadPirateDescription(const FString& RelativePath, FPirateDescription* OutDesc);
	static void K2_BakeFromDescriptionGameThread(const FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, USkeletalMesh** OutMesh, FPirateDescription* OutDesc);
	static int IPGLatestVersion();
	static int GetSeedFromString(const FString& RefName, const FString& Str);
	static void GetAllTextureReferences(USkeletalMesh* Mesh, TArray<FPirateGeneratorTextureReference>* OutReferences);
	static TArray<FString> GetAllDescriptions();
	static FPirateDescription GenerateRandomPirateWithVersion(int Seed, int Version, bool bOverrideBodyShape, const FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<FIPGDynamicSlider> DynamicSliders, TArray<FName> TextureReferences, TArray<FIPGScalarParameter> ScalarParameters);
	static FPirateDescription GenerateRandomPirate(int Seed, bool bOverrideBodyShape, const FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<FIPGDynamicSlider> DynamicSliders, TArray<FName> TextureReferences, TArray<FIPGScalarParameter> ScalarParameters);
	static void BakeFromDescriptionAsync(const FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, const FScriptDelegate& AsyncResult);
};


// Class PirateGenerator.PirateGeneratorSettings
// 0x00E8 (0x0110 - 0x0028)
class UPirateGeneratorSettings : public UObject
{
public:
	FString                                            ConfigJson;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            PiratesFolder;                                            // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            WardrobeFolder;                                           // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	FStringAssetReference                              WardrobeDataAsset;                                        // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	TArray<FName>                                      DefaultWardrobeItems;                                     // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	FStringAssetReference                              MaterialReferencesDataAsset;                              // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	FStringAssetReference                              SkeletonsDataAsset;                                       // 0x0088(0x0010) (Edit, ZeroConstructor, Config)
	TArray<FStringAssetReference>                      BaseSkeletonMeshes;                                       // 0x0098(0x0010) (Edit, ZeroConstructor, Config)
	TArray<FStringAssetReference>                      Characterization;                                         // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<FString>                                    SkeletonMeshFormats;                                      // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	FStringAssetReference                              FirstPersonAnimations;                                    // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)
	FStringAssetReference                              ThirdPersonAnimations;                                    // 0x00D8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<float>                                      LODScreenSizes;                                           // 0x00E8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<float>                                      LODHysteresis;                                            // 0x00F8(0x0010) (Edit, ZeroConstructor, Config)
	int                                                DefaultPirateGenerationSeed;                              // 0x0108(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

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


	static void PopulateSkeletonBlendsInCharacterMeshBakeSpecification(UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, USkeletalMesh* MeshWithBaseSkeleton, USkeletonsDataAsset* SkeletonsDataAsset, const FString& MeshTypeSkeletonFileFormat, float BaseMeshBlendWeight, TArray<FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights);
	static void PopulateBlendedSubMeshesInCharacterMeshBakeSpecification(UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, TArray<USkeletalMesh*> SubMeshes, float BaseMeshBlendWeight, TArray<FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights);
};


// Class PirateGenerator.TextureSwitch
// 0x00E0 (0x0220 - 0x0140)
class UTextureSwitch : public UTextureProxy
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0140(0x0080) MISSED OFFSET
	bool                                               bDuplicated;                                              // 0x01C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	FTextureSwitchParameters                           DefaultParameters;                                        // 0x01C8(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)

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
	FName                                              HashSource;                                               // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FallbackProbability;                                      // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FName                                              FallbackReferenceName;                                    // 0x022C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	FStringAssetReference                              FallbackTexture;                                          // 0x0238(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<FTextureSwitchSeedEntry>                    Entries;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

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
	TArray<FTextureSwitchGenderEntry>                  Entries;                                                  // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

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
	TArray<FTextureSwitchEthnicityEntry>               Entries;                                                  // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

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
	TArray<FTextureSwitchBodyShapeEntry>               Entries;                                                  // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

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
	FStringAssetReference                              FallbackTexture;                                          // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<FTextureSwitchItemEntry>                    Entries;                                                  // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

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
	FName                                              HashSource;                                               // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<FColorTextureSwitchSeedEntry>               Entries;                                                  // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

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
	TArray<FName>                                      ExcludeItems;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

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
	TArray<UWardrobeExcludeDataAsset*>                 ExcludeDataAssets;                                        // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<FMeshPatchEntry>                            AssetMap;                                                 // 0x00D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

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
	TArray<FName>                                      FemaleWardrobeItems;                                      // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<FName>                                      MaleWardrobeItems;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<FWardrobeOutfitCategoryBias>                BiasPerCategory;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateGenerator.WardrobeOutfitDataAsset"));
		return ptr;
	}


	float GetBiasForCategory(const FName& Name);
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


	static void PickOutfitAsync(TArray<FName> ClothingItemNames, TArray<FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, const FScriptDelegate& AsyncResult);
	static bool PickOutfit(TArray<FName> ClothingItemNames, TArray<FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, FWardrobeOutfitResult* Result);
	static TArray<FName> GetRandomWardrobeItemsWithBias(int Seed, TArray<FName> InputItems, TArray<FWardrobeOutfitCategoryBias> BiasPerCategory);
	static TArray<FName> GetRandomWardrobeItems(int Seed, TArray<FName> InputItems);
	static TArray<FName> GetRandomOutfit(UWardrobeOutfitDataAsset* Outfit, int Seed, TEnumAsByte<EIPGGender> Gender);
	static TArray<FName> GetAllWardrobeTypes();
	static TArray<FName> GetAllWardrobeItemsForType(const FString& TypeName, TEnumAsByte<EIPGPirateType> PirateType, bool bWithExclusions);
	static TArray<FName> GetAllWardrobeItems(TEnumAsByte<EIPGPirateType> PirateType);
	static bool CanLoadOutfit(TArray<FName> ClothingItemNames, TArray<FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender);
	void AsyncOutfitResultDynamic__DelegateSignature(bool Success, TArray<USkeletalMesh*> Meshes);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
