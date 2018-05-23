// Sea of Thieves (1.0.5) SDK

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
// struct FPirateDescription      Desc                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UAnimationSwitchDataAsset::GetAnimSetIdForDesc(const struct FPirateDescription& Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc");

	UAnimationSwitchDataAsset_GetAnimSetIdForDesc_Params params;
	params.Desc = Desc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshSpecification     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         AsyncResult                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCharacterMeshBakeFunctionLibrary::STATIC_BakeCharacterMeshAsync(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, const struct FScriptDelegate& AsyncResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync");

	UCharacterMeshBakeFunctionLibrary_BakeCharacterMeshAsync_Params params;
	params.CharacterMeshSpecification = CharacterMeshSpecification;
	params.AsyncResult = AsyncResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshSpecification     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UCharacterMeshBakeFunctionLibrary::STATIC_BakeCharacterMesh(class UCharacterMeshBakeSpecification* CharacterMeshSpecification)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh");

	UCharacterMeshBakeFunctionLibrary_BakeCharacterMesh_Params params;
	params.CharacterMeshSpecification = CharacterMeshSpecification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature
// (Public, Delegate)
// Parameters:
// class USkeletalMesh*           Mesh                           (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterMeshBakeFunctionLibrary::AsyncBakeResultDynamic__DelegateSignature(class USkeletalMesh* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature");

	UCharacterMeshBakeFunctionLibrary_AsyncBakeResultDynamic__DelegateSignature_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshSpecification     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FIPGBlendShape>  BlendShapes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCharacterMeshBakeFunctionLibrary::STATIC_AppendCharacterBlendShapes(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, TArray<struct FIPGBlendShape> BlendShapes)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes");

	UCharacterMeshBakeFunctionLibrary_AppendCharacterBlendShapes_Params params;
	params.CharacterMeshSpecification = CharacterMeshSpecification;
	params.BlendShapes = BlendShapes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCharacterMeshBakeSpecification* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCharacterMeshBakeSpecification* UCharacterMeshBakeTestFunctionLibrary::STATIC_MakeCharacterMeshSpecification()
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification");

	UCharacterMeshBakeTestFunctionLibrary_MakeCharacterMeshSpecification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           BaseMesh                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseMeshWeight                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMeshPatchAsset*> MeshPatchAssets                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  MeshPatchAssetWeights          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMesh*           TargetMesh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCharacterMeshBakeTestFunctionLibrary::STATIC_BlendMeshWithMeshPatchAssets(class USkeletalMesh* BaseMesh, float BaseMeshWeight, TArray<class UMeshPatchAsset*> MeshPatchAssets, TArray<float> MeshPatchAssetWeights, class USkeletalMesh** TargetMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets");

	UCharacterMeshBakeTestFunctionLibrary_BlendMeshWithMeshPatchAssets_Params params;
	params.BaseMesh = BaseMesh;
	params.BaseMeshWeight = BaseMeshWeight;
	params.MeshPatchAssets = MeshPatchAssets;
	params.MeshPatchAssetWeights = MeshPatchAssetWeights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetMesh != nullptr)
		*TargetMesh = params.TargetMesh;
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  CharacterMeshBakeSpecificationClass (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UCharacterMeshBakeTestFunctionLibrary::STATIC_BakeCharacterMeshFromClassDefault(class UClass* CharacterMeshBakeSpecificationClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault");

	UCharacterMeshBakeTestFunctionLibrary_BakeCharacterMeshFromClassDefault_Params params;
	params.CharacterMeshBakeSpecificationClass = CharacterMeshBakeSpecificationClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           MeshA                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           MeshB                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterMeshBakeTestFunctionLibrary::STATIC_AreMeshesEquivalentByMeshPatchCriteria(class USkeletalMesh* MeshA, class USkeletalMesh* MeshB)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria");

	UCharacterMeshBakeTestFunctionLibrary_AreMeshesEquivalentByMeshPatchCriteria_Params params;
	params.MeshA = MeshA;
	params.MeshB = MeshB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  MeshPath                       (Parm, ZeroConstructor)
// class FString                  TypeName                       (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UFileAccessFunctionLibrary::STATIC_GetMeshPatchAssetPathFromMeshPathAndTypeName(const class FString& MeshPath, const class FString& TypeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName");

	UFileAccessFunctionLibrary_GetMeshPatchAssetPathFromMeshPathAndTypeName_Params params;
	params.MeshPath = MeshPath;
	params.TypeName = TypeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           Mesh                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  TypeName                       (Parm, ZeroConstructor)
// class UMeshPatchAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMeshPatchAsset* UFileAccessFunctionLibrary::STATIC_GetMeshPatchAssetForMeshFromTypeName(class USkeletalMesh* Mesh, const class FString& TypeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName");

	UFileAccessFunctionLibrary_GetMeshPatchAssetForMeshFromTypeName_Params params;
	params.Mesh = Mesh;
	params.TypeName = TypeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          BaseMeshBlendWeight            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          BodyShapeBlendNames            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  BodyShapeBlendWeights          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Threshold                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPirateBodyShapeFunctionLibrary::STATIC_GetHighestWeighted(float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights, float Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted");

	UPirateBodyShapeFunctionLibrary_GetHighestWeighted_Params params;
	params.BaseMeshBlendWeight = BaseMeshBlendWeight;
	params.BodyShapeBlendNames = BodyShapeBlendNames;
	params.BodyShapeBlendWeights = BodyShapeBlendWeights;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EIPGGender>        Gender                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRadialCoordinate       BodyShapeWheelRadialCoordinate (ConstParm, Parm, OutParm, ReferenceParm)
// float                          BaseMeshBlendWeight            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          BodyShapeBlendNames            (Parm, OutParm, ZeroConstructor)
// TArray<float>                  BodyShapeBlendWeights          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPirateBodyShapeFunctionLibrary::STATIC_FindBodyBlendsFromBodyShapeWheelRadialCoordinate(TEnumAsByte<EIPGGender> Gender, const struct FRadialCoordinate& BodyShapeWheelRadialCoordinate, float* BaseMeshBlendWeight, TArray<class FString>* BodyShapeBlendNames, TArray<float>* BodyShapeBlendWeights)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate");

	UPirateBodyShapeFunctionLibrary_FindBodyBlendsFromBodyShapeWheelRadialCoordinate_Params params;
	params.Gender = Gender;
	params.BodyShapeWheelRadialCoordinate = BodyShapeWheelRadialCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

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
// struct FVector2D               UV                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FRadialCoordinate       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRadialCoordinate UPirateBodyShapeFunctionLibrary::STATIC_ConvertToRadialCoordinate(const struct FVector2D& UV)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate");

	UPirateBodyShapeFunctionLibrary_ConvertToRadialCoordinate_Params params;
	params.UV = UV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRadialCoordinate       Coord                          (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UPirateBodyShapeFunctionLibrary::STATIC_ConvertFromRadialCoordinate(const struct FRadialCoordinate& Coord)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate");

	UPirateBodyShapeFunctionLibrary_ConvertFromRadialCoordinate_Params params;
	params.Coord = Coord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  RelativePath                   (Parm, ZeroConstructor)
// struct FPirateDescription      InDesc                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPirateGeneratorFunctionLibrary::STATIC_SavePirateDescription(const class FString& RelativePath, const struct FPirateDescription& InDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription");

	UPirateGeneratorFunctionLibrary_SavePirateDescription_Params params;
	params.RelativePath = RelativePath;
	params.InDesc = InDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRadialCoordinate       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRadialCoordinate UPirateGeneratorFunctionLibrary::STATIC_RandomBodyShape(int Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape");

	UPirateGeneratorFunctionLibrary_RandomBodyShape_Params params;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  RelativePath                   (Parm, ZeroConstructor)
// struct FPirateDescription      OutDesc                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPirateGeneratorFunctionLibrary::STATIC_LoadPirateDescription(const class FString& RelativePath, struct FPirateDescription* OutDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription");

	UPirateGeneratorFunctionLibrary_LoadPirateDescription_Params params;
	params.RelativePath = RelativePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDesc != nullptr)
		*OutDesc = params.OutDesc;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPirateDescription      Desc                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EPirateBakeFlags>  Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           OutMesh                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPirateDescription      OutDesc                        (Parm, OutParm)

void UPirateGeneratorFunctionLibrary::STATIC_K2_BakeFromDescriptionGameThread(const struct FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, class USkeletalMesh** OutMesh, struct FPirateDescription* OutDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread");

	UPirateGeneratorFunctionLibrary_K2_BakeFromDescriptionGameThread_Params params;
	params.Desc = Desc;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;
	if (OutDesc != nullptr)
		*OutDesc = params.OutDesc;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPirateGeneratorFunctionLibrary::STATIC_IPGLatestVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion");

	UPirateGeneratorFunctionLibrary_IPGLatestVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  RefName                        (Parm, ZeroConstructor)
// class FString                  Str                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPirateGeneratorFunctionLibrary::STATIC_GetSeedFromString(const class FString& RefName, const class FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString");

	UPirateGeneratorFunctionLibrary_GetSeedFromString_Params params;
	params.RefName = RefName;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPirateGeneratorTextureReference> OutReferences                  (Parm, OutParm, ZeroConstructor)

void UPirateGeneratorFunctionLibrary::STATIC_GetAllTextureReferences(class USkeletalMesh* Mesh, TArray<struct FPirateGeneratorTextureReference>* OutReferences)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences");

	UPirateGeneratorFunctionLibrary_GetAllTextureReferences_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReferences != nullptr)
		*OutReferences = params.OutReferences;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UPirateGeneratorFunctionLibrary::STATIC_GetAllDescriptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions");

	UPirateGeneratorFunctionLibrary_GetAllDescriptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Version                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideBodyShape             (Parm, ZeroConstructor, IsPlainOldData)
// struct FRadialCoordinate       BodyShapeOverride              (Parm)
// TEnumAsByte<EIPGGender>        SpecificGender                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGEthnicity>     SpecificEthnicity              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FIPGDynamicSlider> DynamicSliders                 (Parm, ZeroConstructor)
// TArray<struct FName>           TextureReferences              (Parm, ZeroConstructor)
// TArray<struct FIPGScalarParameter> ScalarParameters               (Parm, ZeroConstructor)
// struct FPirateDescription      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPirateDescription UPirateGeneratorFunctionLibrary::STATIC_GenerateRandomPirateWithVersion(int Seed, int Version, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<struct FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion");

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

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideBodyShape             (Parm, ZeroConstructor, IsPlainOldData)
// struct FRadialCoordinate       BodyShapeOverride              (Parm)
// TEnumAsByte<EIPGGender>        SpecificGender                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGEthnicity>     SpecificEthnicity              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FIPGDynamicSlider> DynamicSliders                 (Parm, ZeroConstructor)
// TArray<struct FName>           TextureReferences              (Parm, ZeroConstructor)
// TArray<struct FIPGScalarParameter> ScalarParameters               (Parm, ZeroConstructor)
// struct FPirateDescription      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPirateDescription UPirateGeneratorFunctionLibrary::STATIC_GenerateRandomPirate(int Seed, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<struct FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate");

	UPirateGeneratorFunctionLibrary_GenerateRandomPirate_Params params;
	params.Seed = Seed;
	params.bOverrideBodyShape = bOverrideBodyShape;
	params.BodyShapeOverride = BodyShapeOverride;
	params.SpecificGender = SpecificGender;
	params.SpecificEthnicity = SpecificEthnicity;
	params.DynamicSliders = DynamicSliders;
	params.TextureReferences = TextureReferences;
	params.ScalarParameters = ScalarParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPirateDescription      Desc                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EPirateBakeFlags>  Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         AsyncResult                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPirateGeneratorFunctionLibrary::STATIC_BakeFromDescriptionAsync(const struct FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, const struct FScriptDelegate& AsyncResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync");

	UPirateGeneratorFunctionLibrary_BakeFromDescriptionAsync_Params params;
	params.Desc = Desc;
	params.Flags = Flags;
	params.AsyncResult = AsyncResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           MeshWithBaseSkeleton           (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletonsDataAsset*     SkeletonsDataAsset             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MeshTypeSkeletonFileFormat     (Parm, ZeroConstructor)
// float                          BaseMeshBlendWeight            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          BodyShapeBlendNames            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  BodyShapeBlendWeights          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPreparePirateMeshBakeTestFunctionLibrary::STATIC_PopulateSkeletonBlendsInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, class USkeletalMesh* MeshWithBaseSkeleton, class USkeletonsDataAsset* SkeletonsDataAsset, const class FString& MeshTypeSkeletonFileFormat, float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification");

	UPreparePirateMeshBakeTestFunctionLibrary_PopulateSkeletonBlendsInCharacterMeshBakeSpecification_Params params;
	params.CharacterMeshBakeSpecification = CharacterMeshBakeSpecification;
	params.MeshWithBaseSkeleton = MeshWithBaseSkeleton;
	params.SkeletonsDataAsset = SkeletonsDataAsset;
	params.MeshTypeSkeletonFileFormat = MeshTypeSkeletonFileFormat;
	params.BaseMeshBlendWeight = BaseMeshBlendWeight;
	params.BodyShapeBlendNames = BodyShapeBlendNames;
	params.BodyShapeBlendWeights = BodyShapeBlendWeights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USkeletalMesh*>   SubMeshes                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          BaseMeshBlendWeight            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          BodyShapeBlendNames            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  BodyShapeBlendWeights          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPreparePirateMeshBakeTestFunctionLibrary::STATIC_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, TArray<class USkeletalMesh*> SubMeshes, float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification");

	UPreparePirateMeshBakeTestFunctionLibrary_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification_Params params;
	params.CharacterMeshBakeSpecification = CharacterMeshBakeSpecification;
	params.SubMeshes = SubMeshes;
	params.BaseMeshBlendWeight = BaseMeshBlendWeight;
	params.BodyShapeBlendNames = BodyShapeBlendNames;
	params.BodyShapeBlendWeights = BodyShapeBlendWeights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWardrobeOutfitDataAsset::GetBiasForCategory(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory");

	UWardrobeOutfitDataAsset_GetBiasForCategory_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           ClothingItemNames              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EIPGPirateType>    PirateType                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         AsyncResult                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWardrobeFunctionLibrary::STATIC_PickOutfitAsync(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, const struct FScriptDelegate& AsyncResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync");

	UWardrobeFunctionLibrary_PickOutfitAsync_Params params;
	params.ClothingItemNames = ClothingItemNames;
	params.Tags = Tags;
	params.PirateType = PirateType;
	params.Gender = Gender;
	params.AsyncResult = AsyncResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           ClothingItemNames              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EIPGPirateType>    PirateType                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FWardrobeOutfitResult   Result                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWardrobeFunctionLibrary::STATIC_PickOutfit(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, struct FWardrobeOutfitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit");

	UWardrobeFunctionLibrary_PickOutfit_Params params;
	params.ClothingItemNames = ClothingItemNames;
	params.Tags = Tags;
	params.PirateType = PirateType;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           InputItems                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::STATIC_GetRandomWardrobeItemsWithBias(int Seed, TArray<struct FName> InputItems, TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias");

	UWardrobeFunctionLibrary_GetRandomWardrobeItemsWithBias_Params params;
	params.Seed = Seed;
	params.InputItems = InputItems;
	params.BiasPerCategory = BiasPerCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           InputItems                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::STATIC_GetRandomWardrobeItems(int Seed, TArray<struct FName> InputItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems");

	UWardrobeFunctionLibrary_GetRandomWardrobeItems_Params params;
	params.Seed = Seed;
	params.InputItems = InputItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWardrobeOutfitDataAsset* Outfit                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::STATIC_GetRandomOutfit(class UWardrobeOutfitDataAsset* Outfit, int Seed, TEnumAsByte<EIPGGender> Gender)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit");

	UWardrobeFunctionLibrary_GetRandomOutfit_Params params;
	params.Outfit = Outfit;
	params.Seed = Seed;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::STATIC_GetAllWardrobeTypes()
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes");

	UWardrobeFunctionLibrary_GetAllWardrobeTypes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  TypeName                       (Parm, ZeroConstructor)
// TEnumAsByte<EIPGPirateType>    PirateType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithExclusions                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::STATIC_GetAllWardrobeItemsForType(const class FString& TypeName, TEnumAsByte<EIPGPirateType> PirateType, bool bWithExclusions)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType");

	UWardrobeFunctionLibrary_GetAllWardrobeItemsForType_Params params;
	params.TypeName = TypeName;
	params.PirateType = PirateType;
	params.bWithExclusions = bWithExclusions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EIPGPirateType>    PirateType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::STATIC_GetAllWardrobeItems(TEnumAsByte<EIPGPirateType> PirateType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems");

	UWardrobeFunctionLibrary_GetAllWardrobeItems_Params params;
	params.PirateType = PirateType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>           ClothingItemNames              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EIPGPirateType>    PirateType                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWardrobeFunctionLibrary::STATIC_CanLoadOutfit(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender)
{
	static auto fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit");

	UWardrobeFunctionLibrary_CanLoadOutfit_Params params;
	params.ClothingItemNames = ClothingItemNames;
	params.Tags = Tags;
	params.PirateType = PirateType;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USkeletalMesh*>   Meshes                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWardrobeFunctionLibrary::AsyncOutfitResultDynamic__DelegateSignature(bool Success, TArray<class USkeletalMesh*> Meshes)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature");

	UWardrobeFunctionLibrary_AsyncOutfitResultDynamic__DelegateSignature_Params params;
	params.Success = Success;
	params.Meshes = Meshes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
