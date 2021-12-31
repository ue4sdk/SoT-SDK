// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PirateGenerator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FPirateDescription             Desc                           (ConstParm, Parm, OutParm, ReferenceParm)
// UClass*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UClass* UAnimationSwitchDataAsset::GetAnimSetIdForDesc(const FPirateDescription& Desc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc"));

	UAnimationSwitchDataAsset_GetAnimSetIdForDesc_Params params;
	params.Desc = Desc;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UCharacterMeshBakeSpecification* CharacterMeshSpecification     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FScriptDelegate                AsyncResult                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCharacterMeshBakeFunctionLibrary::BakeCharacterMeshAsync(UCharacterMeshBakeSpecification* CharacterMeshSpecification, const FScriptDelegate& AsyncResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync"));

	UCharacterMeshBakeFunctionLibrary_BakeCharacterMeshAsync_Params params;
	params.CharacterMeshSpecification = CharacterMeshSpecification;
	params.AsyncResult = AsyncResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UCharacterMeshBakeSpecification* CharacterMeshSpecification     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// USkeletalMesh*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

USkeletalMesh* UCharacterMeshBakeFunctionLibrary::BakeCharacterMesh(UCharacterMeshBakeSpecification* CharacterMeshSpecification)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh"));

	UCharacterMeshBakeFunctionLibrary_BakeCharacterMesh_Params params;
	params.CharacterMeshSpecification = CharacterMeshSpecification;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature
// (Public, Delegate)
// Parameters:
// USkeletalMesh*                 Mesh                           (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterMeshBakeFunctionLibrary::AsyncBakeResultDynamic__DelegateSignature(USkeletalMesh* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature"));

	UCharacterMeshBakeFunctionLibrary_AsyncBakeResultDynamic__DelegateSignature_Params params;
	params.Mesh = Mesh;

	UObject::ProcessEvent(fn, &params);
}


// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UCharacterMeshBakeSpecification* CharacterMeshSpecification     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FIPGBlendShape>         BlendShapes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCharacterMeshBakeFunctionLibrary::AppendCharacterBlendShapes(UCharacterMeshBakeSpecification* CharacterMeshSpecification, TArray<FIPGBlendShape> BlendShapes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes"));

	UCharacterMeshBakeFunctionLibrary_AppendCharacterBlendShapes_Params params;
	params.CharacterMeshSpecification = CharacterMeshSpecification;
	params.BlendShapes = BlendShapes;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UCharacterMeshBakeSpecification* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UCharacterMeshBakeSpecification* UCharacterMeshBakeTestFunctionLibrary::MakeCharacterMeshSpecification()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification"));

	UCharacterMeshBakeTestFunctionLibrary_MakeCharacterMeshSpecification_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// USkeletalMesh*                 BaseMesh                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseMeshWeight                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<UMeshPatchAsset*>       MeshPatchAssets                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  MeshPatchAssetWeights          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// USkeletalMesh*                 TargetMesh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCharacterMeshBakeTestFunctionLibrary::BlendMeshWithMeshPatchAssets(USkeletalMesh* BaseMesh, float BaseMeshWeight, TArray<UMeshPatchAsset*> MeshPatchAssets, TArray<float> MeshPatchAssetWeights, USkeletalMesh** TargetMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets"));

	UCharacterMeshBakeTestFunctionLibrary_BlendMeshWithMeshPatchAssets_Params params;
	params.BaseMesh = BaseMesh;
	params.BaseMeshWeight = BaseMeshWeight;
	params.MeshPatchAssets = MeshPatchAssets;
	params.MeshPatchAssetWeights = MeshPatchAssetWeights;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TargetMesh != nullptr)
		*TargetMesh = params.TargetMesh;
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UClass*                        CharacterMeshBakeSpecificationClass (Parm, ZeroConstructor, IsPlainOldData)
// USkeletalMesh*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

USkeletalMesh* UCharacterMeshBakeTestFunctionLibrary::BakeCharacterMeshFromClassDefault(UClass* CharacterMeshBakeSpecificationClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault"));

	UCharacterMeshBakeTestFunctionLibrary_BakeCharacterMeshFromClassDefault_Params params;
	params.CharacterMeshBakeSpecificationClass = CharacterMeshBakeSpecificationClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// USkeletalMesh*                 MeshA                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// USkeletalMesh*                 MeshB                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterMeshBakeTestFunctionLibrary::AreMeshesEquivalentByMeshPatchCriteria(USkeletalMesh* MeshA, USkeletalMesh* MeshB)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria"));

	UCharacterMeshBakeTestFunctionLibrary_AreMeshesEquivalentByMeshPatchCriteria_Params params;
	params.MeshA = MeshA;
	params.MeshB = MeshB;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FString                        MeshPath                       (Parm, ZeroConstructor)
// FString                        TypeName                       (Parm, ZeroConstructor)
// FString                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FString UFileAccessFunctionLibrary::GetMeshPatchAssetPathFromMeshPathAndTypeName(const FString& MeshPath, const FString& TypeName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName"));

	UFileAccessFunctionLibrary_GetMeshPatchAssetPathFromMeshPathAndTypeName_Params params;
	params.MeshPath = MeshPath;
	params.TypeName = TypeName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// USkeletalMesh*                 Mesh                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FString                        TypeName                       (Parm, ZeroConstructor)
// UMeshPatchAsset*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UMeshPatchAsset* UFileAccessFunctionLibrary::GetMeshPatchAssetForMeshFromTypeName(USkeletalMesh* Mesh, const FString& TypeName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName"));

	UFileAccessFunctionLibrary_GetMeshPatchAssetForMeshFromTypeName_Params params;
	params.Mesh = Mesh;
	params.TypeName = TypeName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          BaseMeshBlendWeight            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<FString>                BodyShapeBlendNames            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  BodyShapeBlendWeights          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Threshold                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FString                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FString UPirateBodyShapeFunctionLibrary::GetHighestWeighted(float BaseMeshBlendWeight, TArray<FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights, float Threshold)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted"));

	UPirateBodyShapeFunctionLibrary_GetHighestWeighted_Params params;
	params.BaseMeshBlendWeight = BaseMeshBlendWeight;
	params.BodyShapeBlendNames = BodyShapeBlendNames;
	params.BodyShapeBlendWeights = BodyShapeBlendWeights;
	params.Threshold = Threshold;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EIPGGender>        Gender                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FRadialCoordinate              BodyShapeWheelRadialCoordinate (ConstParm, Parm, OutParm, ReferenceParm)
// float                          BaseMeshBlendWeight            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<FString>                BodyShapeBlendNames            (Parm, OutParm, ZeroConstructor)
// TArray<float>                  BodyShapeBlendWeights          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPirateBodyShapeFunctionLibrary::FindBodyBlendsFromBodyShapeWheelRadialCoordinate(TEnumAsByte<EIPGGender> Gender, const FRadialCoordinate& BodyShapeWheelRadialCoordinate, float* BaseMeshBlendWeight, TArray<FString>* BodyShapeBlendNames, TArray<float>* BodyShapeBlendWeights)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate"));

	UPirateBodyShapeFunctionLibrary_FindBodyBlendsFromBodyShapeWheelRadialCoordinate_Params params;
	params.Gender = Gender;
	params.BodyShapeWheelRadialCoordinate = BodyShapeWheelRadialCoordinate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (BaseMeshBlendWeight != nullptr)
		*BaseMeshBlendWeight = params.BaseMeshBlendWeight;
	if (BodyShapeBlendNames != nullptr)
		*BodyShapeBlendNames = params.BodyShapeBlendNames;
	if (BodyShapeBlendWeights != nullptr)
		*BodyShapeBlendWeights = params.BodyShapeBlendWeights;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FVector2D                      UV                             (Parm, ZeroConstructor, IsPlainOldData)
// FRadialCoordinate              ReturnValue                    (Parm, OutParm, ReturnParm)

FRadialCoordinate UPirateBodyShapeFunctionLibrary::ConvertToRadialCoordinate(const FVector2D& UV)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate"));

	UPirateBodyShapeFunctionLibrary_ConvertToRadialCoordinate_Params params;
	params.UV = UV;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FRadialCoordinate              Coord                          (Parm)
// FVector2D                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector2D UPirateBodyShapeFunctionLibrary::ConvertFromRadialCoordinate(const FRadialCoordinate& Coord)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate"));

	UPirateBodyShapeFunctionLibrary_ConvertFromRadialCoordinate_Params params;
	params.Coord = Coord;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FString                        RelativePath                   (Parm, ZeroConstructor)
// FPirateDescription             InDesc                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPirateGeneratorFunctionLibrary::SavePirateDescription(const FString& RelativePath, const FPirateDescription& InDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription"));

	UPirateGeneratorFunctionLibrary_SavePirateDescription_Params params;
	params.RelativePath = RelativePath;
	params.InDesc = InDesc;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// FRadialCoordinate              ReturnValue                    (Parm, OutParm, ReturnParm)

FRadialCoordinate UPirateGeneratorFunctionLibrary::RandomBodyShape(int Seed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape"));

	UPirateGeneratorFunctionLibrary_RandomBodyShape_Params params;
	params.Seed = Seed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FString                        RelativePath                   (Parm, ZeroConstructor)
// FPirateDescription             OutDesc                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPirateGeneratorFunctionLibrary::LoadPirateDescription(const FString& RelativePath, FPirateDescription* OutDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription"));

	UPirateGeneratorFunctionLibrary_LoadPirateDescription_Params params;
	params.RelativePath = RelativePath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutDesc != nullptr)
		*OutDesc = params.OutDesc;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FPirateDescription             Desc                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EPirateBakeFlags>  Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// USkeletalMesh*                 OutMesh                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FPirateDescription             OutDesc                        (Parm, OutParm)

void UPirateGeneratorFunctionLibrary::K2_BakeFromDescriptionGameThread(const FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, USkeletalMesh** OutMesh, FPirateDescription* OutDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread"));

	UPirateGeneratorFunctionLibrary_K2_BakeFromDescriptionGameThread_Params params;
	params.Desc = Desc;
	params.Flags = Flags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;
	if (OutDesc != nullptr)
		*OutDesc = params.OutDesc;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPirateGeneratorFunctionLibrary::IPGLatestVersion()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion"));

	UPirateGeneratorFunctionLibrary_IPGLatestVersion_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FString                        RefName                        (Parm, ZeroConstructor)
// FString                        Str                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPirateGeneratorFunctionLibrary::GetSeedFromString(const FString& RefName, const FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString"));

	UPirateGeneratorFunctionLibrary_GetSeedFromString_Params params;
	params.RefName = RefName;
	params.Str = Str;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// USkeletalMesh*                 Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FPirateGeneratorTextureReference> OutReferences                  (Parm, OutParm, ZeroConstructor)

void UPirateGeneratorFunctionLibrary::GetAllTextureReferences(USkeletalMesh* Mesh, TArray<FPirateGeneratorTextureReference>* OutReferences)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences"));

	UPirateGeneratorFunctionLibrary_GetAllTextureReferences_Params params;
	params.Mesh = Mesh;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutReferences != nullptr)
		*OutReferences = params.OutReferences;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<FString>                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FString> UPirateGeneratorFunctionLibrary::GetAllDescriptions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions"));

	UPirateGeneratorFunctionLibrary_GetAllDescriptions_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Version                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideBodyShape             (Parm, ZeroConstructor, IsPlainOldData)
// FRadialCoordinate              BodyShapeOverride              (Parm)
// TEnumAsByte<EIPGGender>        SpecificGender                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGEthnicity>     SpecificEthnicity              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FIPGDynamicSlider>      DynamicSliders                 (Parm, ZeroConstructor)
// TArray<FName>                  TextureReferences              (Parm, ZeroConstructor)
// TArray<FIPGScalarParameter>    ScalarParameters               (Parm, ZeroConstructor)
// FPirateDescription             ReturnValue                    (Parm, OutParm, ReturnParm)

FPirateDescription UPirateGeneratorFunctionLibrary::GenerateRandomPirateWithVersion(int Seed, int Version, bool bOverrideBodyShape, const FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<FIPGDynamicSlider> DynamicSliders, TArray<FName> TextureReferences, TArray<FIPGScalarParameter> ScalarParameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion"));

	UPirateGeneratorFunctionLibrary_GenerateRandomPirateWithVersion_Params params;
	params.Seed = Seed;
	params.Version = Version;
	params.bOverrideBodyShape = bOverrideBodyShape;
	params.BodyShapeOverride = BodyShapeOverride;
	params.SpecificGender = SpecificGender;
	params.SpecificEthnicity = SpecificEthnicity;
	params.DynamicSliders = DynamicSliders;
	params.TextureReferences = TextureReferences;
	params.ScalarParameters = ScalarParameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideBodyShape             (Parm, ZeroConstructor, IsPlainOldData)
// FRadialCoordinate              BodyShapeOverride              (Parm)
// TEnumAsByte<EIPGGender>        SpecificGender                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGEthnicity>     SpecificEthnicity              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FIPGDynamicSlider>      DynamicSliders                 (Parm, ZeroConstructor)
// TArray<FName>                  TextureReferences              (Parm, ZeroConstructor)
// TArray<FIPGScalarParameter>    ScalarParameters               (Parm, ZeroConstructor)
// FPirateDescription             ReturnValue                    (Parm, OutParm, ReturnParm)

FPirateDescription UPirateGeneratorFunctionLibrary::GenerateRandomPirate(int Seed, bool bOverrideBodyShape, const FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<FIPGDynamicSlider> DynamicSliders, TArray<FName> TextureReferences, TArray<FIPGScalarParameter> ScalarParameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate"));

	UPirateGeneratorFunctionLibrary_GenerateRandomPirate_Params params;
	params.Seed = Seed;
	params.bOverrideBodyShape = bOverrideBodyShape;
	params.BodyShapeOverride = BodyShapeOverride;
	params.SpecificGender = SpecificGender;
	params.SpecificEthnicity = SpecificEthnicity;
	params.DynamicSliders = DynamicSliders;
	params.TextureReferences = TextureReferences;
	params.ScalarParameters = ScalarParameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FPirateDescription             Desc                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EPirateBakeFlags>  Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// FScriptDelegate                AsyncResult                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPirateGeneratorFunctionLibrary::BakeFromDescriptionAsync(const FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, const FScriptDelegate& AsyncResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync"));

	UPirateGeneratorFunctionLibrary_BakeFromDescriptionAsync_Params params;
	params.Desc = Desc;
	params.Flags = Flags;
	params.AsyncResult = AsyncResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification (Parm, ZeroConstructor, IsPlainOldData)
// USkeletalMesh*                 MeshWithBaseSkeleton           (Parm, ZeroConstructor, IsPlainOldData)
// USkeletonsDataAsset*           SkeletonsDataAsset             (Parm, ZeroConstructor, IsPlainOldData)
// FString                        MeshTypeSkeletonFileFormat     (Parm, ZeroConstructor)
// float                          BaseMeshBlendWeight            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<FString>                BodyShapeBlendNames            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  BodyShapeBlendWeights          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPreparePirateMeshBakeTestFunctionLibrary::PopulateSkeletonBlendsInCharacterMeshBakeSpecification(UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, USkeletalMesh* MeshWithBaseSkeleton, USkeletonsDataAsset* SkeletonsDataAsset, const FString& MeshTypeSkeletonFileFormat, float BaseMeshBlendWeight, TArray<FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification"));

	UPreparePirateMeshBakeTestFunctionLibrary_PopulateSkeletonBlendsInCharacterMeshBakeSpecification_Params params;
	params.CharacterMeshBakeSpecification = CharacterMeshBakeSpecification;
	params.MeshWithBaseSkeleton = MeshWithBaseSkeleton;
	params.SkeletonsDataAsset = SkeletonsDataAsset;
	params.MeshTypeSkeletonFileFormat = MeshTypeSkeletonFileFormat;
	params.BaseMeshBlendWeight = BaseMeshBlendWeight;
	params.BodyShapeBlendNames = BodyShapeBlendNames;
	params.BodyShapeBlendWeights = BodyShapeBlendWeights;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification (Parm, ZeroConstructor, IsPlainOldData)
// TArray<USkeletalMesh*>         SubMeshes                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          BaseMeshBlendWeight            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<FString>                BodyShapeBlendNames            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  BodyShapeBlendWeights          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPreparePirateMeshBakeTestFunctionLibrary::PopulateBlendedSubMeshesInCharacterMeshBakeSpecification(UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, TArray<USkeletalMesh*> SubMeshes, float BaseMeshBlendWeight, TArray<FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification"));

	UPreparePirateMeshBakeTestFunctionLibrary_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification_Params params;
	params.CharacterMeshBakeSpecification = CharacterMeshBakeSpecification;
	params.SubMeshes = SubMeshes;
	params.BaseMeshBlendWeight = BaseMeshBlendWeight;
	params.BodyShapeBlendNames = BodyShapeBlendNames;
	params.BodyShapeBlendWeights = BodyShapeBlendWeights;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FName                          Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWardrobeOutfitDataAsset::GetBiasForCategory(const FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory"));

	UWardrobeOutfitDataAsset_GetBiasForCategory_Params params;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<FName>                  ClothingItemNames              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<FName>                  Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EIPGPirateType>    PirateType                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (Parm, ZeroConstructor, IsPlainOldData)
// FScriptDelegate                AsyncResult                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWardrobeFunctionLibrary::PickOutfitAsync(TArray<FName> ClothingItemNames, TArray<FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, const FScriptDelegate& AsyncResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync"));

	UWardrobeFunctionLibrary_PickOutfitAsync_Params params;
	params.ClothingItemNames = ClothingItemNames;
	params.Tags = Tags;
	params.PirateType = PirateType;
	params.Gender = Gender;
	params.AsyncResult = AsyncResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<FName>                  ClothingItemNames              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<FName>                  Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EIPGPirateType>    PirateType                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (Parm, ZeroConstructor, IsPlainOldData)
// FWardrobeOutfitResult          Result                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWardrobeFunctionLibrary::PickOutfit(TArray<FName> ClothingItemNames, TArray<FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, FWardrobeOutfitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit"));

	UWardrobeFunctionLibrary_PickOutfit_Params params;
	params.ClothingItemNames = ClothingItemNames;
	params.Tags = Tags;
	params.PirateType = PirateType;
	params.Gender = Gender;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FName>                  InputItems                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<FWardrobeOutfitCategoryBias> BiasPerCategory                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<FName>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FName> UWardrobeFunctionLibrary::GetRandomWardrobeItemsWithBias(int Seed, TArray<FName> InputItems, TArray<FWardrobeOutfitCategoryBias> BiasPerCategory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias"));

	UWardrobeFunctionLibrary_GetRandomWardrobeItemsWithBias_Params params;
	params.Seed = Seed;
	params.InputItems = InputItems;
	params.BiasPerCategory = BiasPerCategory;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FName>                  InputItems                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<FName>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FName> UWardrobeFunctionLibrary::GetRandomWardrobeItems(int Seed, TArray<FName> InputItems)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems"));

	UWardrobeFunctionLibrary_GetRandomWardrobeItems_Params params;
	params.Seed = Seed;
	params.InputItems = InputItems;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UWardrobeOutfitDataAsset*      Outfit                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FName>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FName> UWardrobeFunctionLibrary::GetRandomOutfit(UWardrobeOutfitDataAsset* Outfit, int Seed, TEnumAsByte<EIPGGender> Gender)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit"));

	UWardrobeFunctionLibrary_GetRandomOutfit_Params params;
	params.Outfit = Outfit;
	params.Seed = Seed;
	params.Gender = Gender;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<FName>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FName> UWardrobeFunctionLibrary::GetAllWardrobeTypes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes"));

	UWardrobeFunctionLibrary_GetAllWardrobeTypes_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FString                        TypeName                       (Parm, ZeroConstructor)
// TEnumAsByte<EIPGPirateType>    PirateType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithExclusions                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FName>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FName> UWardrobeFunctionLibrary::GetAllWardrobeItemsForType(const FString& TypeName, TEnumAsByte<EIPGPirateType> PirateType, bool bWithExclusions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType"));

	UWardrobeFunctionLibrary_GetAllWardrobeItemsForType_Params params;
	params.TypeName = TypeName;
	params.PirateType = PirateType;
	params.bWithExclusions = bWithExclusions;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EIPGPirateType>    PirateType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FName>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FName> UWardrobeFunctionLibrary::GetAllWardrobeItems(TEnumAsByte<EIPGPirateType> PirateType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems"));

	UWardrobeFunctionLibrary_GetAllWardrobeItems_Params params;
	params.PirateType = PirateType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<FName>                  ClothingItemNames              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<FName>                  Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EIPGPirateType>    PirateType                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWardrobeFunctionLibrary::CanLoadOutfit(TArray<FName> ClothingItemNames, TArray<FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit"));

	UWardrobeFunctionLibrary_CanLoadOutfit_Params params;
	params.ClothingItemNames = ClothingItemNames;
	params.Tags = Tags;
	params.PirateType = PirateType;
	params.Gender = Gender;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<USkeletalMesh*>         Meshes                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWardrobeFunctionLibrary::AsyncOutfitResultDynamic__DelegateSignature(bool Success, TArray<USkeletalMesh*> Meshes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature"));

	UWardrobeFunctionLibrary_AsyncOutfitResultDynamic__DelegateSignature_Params params;
	params.Success = Success;
	params.Meshes = Meshes;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
