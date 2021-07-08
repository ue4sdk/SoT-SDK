// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PirateGenerator_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc"));

	struct
	{
		struct FPirateDescription      Desc;
		class UClass*                  ReturnValue;
	} params;

	params.Desc = Desc;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshSpecification     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         AsyncResult                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCharacterMeshBakeFunctionLibrary::BakeCharacterMeshAsync(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, const struct FScriptDelegate& AsyncResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync"));

	struct
	{
		class UCharacterMeshBakeSpecification* CharacterMeshSpecification;
		struct FScriptDelegate         AsyncResult;
	} params;

	params.CharacterMeshSpecification = CharacterMeshSpecification;
	params.AsyncResult = AsyncResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshSpecification     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UCharacterMeshBakeFunctionLibrary::BakeCharacterMesh(class UCharacterMeshBakeSpecification* CharacterMeshSpecification)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh"));

	struct
	{
		class UCharacterMeshBakeSpecification* CharacterMeshSpecification;
		class USkeletalMesh*           ReturnValue;
	} params;

	params.CharacterMeshSpecification = CharacterMeshSpecification;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature
// (Public, Delegate)
// Parameters:
// class USkeletalMesh*           Mesh                           (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterMeshBakeFunctionLibrary::AsyncBakeResultDynamic__DelegateSignature(class USkeletalMesh* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature"));

	struct
	{
		class USkeletalMesh*           Mesh;
	} params;

	params.Mesh = Mesh;

	UObject::ProcessEvent(fn, &params);
}


// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshSpecification     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FIPGBlendShape>  BlendShapes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCharacterMeshBakeFunctionLibrary::AppendCharacterBlendShapes(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, TArray<struct FIPGBlendShape> BlendShapes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes"));

	struct
	{
		class UCharacterMeshBakeSpecification* CharacterMeshSpecification;
		TArray<struct FIPGBlendShape>  BlendShapes;
	} params;

	params.CharacterMeshSpecification = CharacterMeshSpecification;
	params.BlendShapes = BlendShapes;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCharacterMeshBakeSpecification* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCharacterMeshBakeSpecification* UCharacterMeshBakeTestFunctionLibrary::MakeCharacterMeshSpecification()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification"));

	struct
	{
		class UCharacterMeshBakeSpecification* ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

void UCharacterMeshBakeTestFunctionLibrary::BlendMeshWithMeshPatchAssets(class USkeletalMesh* BaseMesh, float BaseMeshWeight, TArray<class UMeshPatchAsset*> MeshPatchAssets, TArray<float> MeshPatchAssetWeights, class USkeletalMesh** TargetMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets"));

	struct
	{
		class USkeletalMesh*           BaseMesh;
		float                          BaseMeshWeight;
		TArray<class UMeshPatchAsset*> MeshPatchAssets;
		TArray<float>                  MeshPatchAssetWeights;
		class USkeletalMesh*           TargetMesh;
	} params;

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
// class UClass*                  CharacterMeshBakeSpecificationClass (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UCharacterMeshBakeTestFunctionLibrary::BakeCharacterMeshFromClassDefault(class UClass* CharacterMeshBakeSpecificationClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault"));

	struct
	{
		class UClass*                  CharacterMeshBakeSpecificationClass;
		class USkeletalMesh*           ReturnValue;
	} params;

	params.CharacterMeshBakeSpecificationClass = CharacterMeshBakeSpecificationClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           MeshA                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           MeshB                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterMeshBakeTestFunctionLibrary::AreMeshesEquivalentByMeshPatchCriteria(class USkeletalMesh* MeshA, class USkeletalMesh* MeshB)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria"));

	struct
	{
		class USkeletalMesh*           MeshA;
		class USkeletalMesh*           MeshB;
		bool                           ReturnValue;
	} params;

	params.MeshA = MeshA;
	params.MeshB = MeshB;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  MeshPath                       (Parm, ZeroConstructor)
// class FString                  TypeName                       (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UFileAccessFunctionLibrary::GetMeshPatchAssetPathFromMeshPathAndTypeName(const class FString& MeshPath, const class FString& TypeName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName"));

	struct
	{
		class FString                  MeshPath;
		class FString                  TypeName;
		class FString                  ReturnValue;
	} params;

	params.MeshPath = MeshPath;
	params.TypeName = TypeName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           Mesh                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  TypeName                       (Parm, ZeroConstructor)
// class UMeshPatchAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMeshPatchAsset* UFileAccessFunctionLibrary::GetMeshPatchAssetForMeshFromTypeName(class USkeletalMesh* Mesh, const class FString& TypeName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName"));

	struct
	{
		class USkeletalMesh*           Mesh;
		class FString                  TypeName;
		class UMeshPatchAsset*         ReturnValue;
	} params;

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
// TArray<class FString>          BodyShapeBlendNames            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  BodyShapeBlendWeights          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Threshold                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPirateBodyShapeFunctionLibrary::GetHighestWeighted(float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights, float Threshold)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted"));

	struct
	{
		float                          BaseMeshBlendWeight;
		TArray<class FString>          BodyShapeBlendNames;
		TArray<float>                  BodyShapeBlendWeights;
		float                          Threshold;
		class FString                  ReturnValue;
	} params;

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
// struct FRadialCoordinate       BodyShapeWheelRadialCoordinate (ConstParm, Parm, OutParm, ReferenceParm)
// float                          BaseMeshBlendWeight            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          BodyShapeBlendNames            (Parm, OutParm, ZeroConstructor)
// TArray<float>                  BodyShapeBlendWeights          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPirateBodyShapeFunctionLibrary::FindBodyBlendsFromBodyShapeWheelRadialCoordinate(TEnumAsByte<EIPGGender> Gender, const struct FRadialCoordinate& BodyShapeWheelRadialCoordinate, float* BaseMeshBlendWeight, TArray<class FString>* BodyShapeBlendNames, TArray<float>* BodyShapeBlendWeights)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate"));

	struct
	{
		TEnumAsByte<EIPGGender>        Gender;
		struct FRadialCoordinate       BodyShapeWheelRadialCoordinate;
		float                          BaseMeshBlendWeight;
		TArray<class FString>          BodyShapeBlendNames;
		TArray<float>                  BodyShapeBlendWeights;
		bool                           ReturnValue;
	} params;

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
// struct FVector2D               UV                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FRadialCoordinate       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRadialCoordinate UPirateBodyShapeFunctionLibrary::ConvertToRadialCoordinate(const struct FVector2D& UV)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate"));

	struct
	{
		struct FVector2D               UV;
		struct FRadialCoordinate       ReturnValue;
	} params;

	params.UV = UV;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRadialCoordinate       Coord                          (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UPirateBodyShapeFunctionLibrary::ConvertFromRadialCoordinate(const struct FRadialCoordinate& Coord)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate"));

	struct
	{
		struct FRadialCoordinate       Coord;
		struct FVector2D               ReturnValue;
	} params;

	params.Coord = Coord;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  RelativePath                   (Parm, ZeroConstructor)
// struct FPirateDescription      InDesc                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPirateGeneratorFunctionLibrary::SavePirateDescription(const class FString& RelativePath, const struct FPirateDescription& InDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription"));

	struct
	{
		class FString                  RelativePath;
		struct FPirateDescription      InDesc;
		bool                           ReturnValue;
	} params;

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
// struct FRadialCoordinate       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRadialCoordinate UPirateGeneratorFunctionLibrary::RandomBodyShape(int Seed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape"));

	struct
	{
		int                            Seed;
		struct FRadialCoordinate       ReturnValue;
	} params;

	params.Seed = Seed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  RelativePath                   (Parm, ZeroConstructor)
// struct FPirateDescription      OutDesc                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPirateGeneratorFunctionLibrary::LoadPirateDescription(const class FString& RelativePath, struct FPirateDescription* OutDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription"));

	struct
	{
		class FString                  RelativePath;
		struct FPirateDescription      OutDesc;
		bool                           ReturnValue;
	} params;

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
// struct FPirateDescription      Desc                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EPirateBakeFlags>  Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           OutMesh                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPirateDescription      OutDesc                        (Parm, OutParm)

void UPirateGeneratorFunctionLibrary::K2_BakeFromDescriptionGameThread(const struct FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, class USkeletalMesh** OutMesh, struct FPirateDescription* OutDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread"));

	struct
	{
		struct FPirateDescription      Desc;
		TEnumAsByte<EPirateBakeFlags>  Flags;
		class USkeletalMesh*           OutMesh;
		struct FPirateDescription      OutDesc;
	} params;

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

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  RefName                        (Parm, ZeroConstructor)
// class FString                  Str                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPirateGeneratorFunctionLibrary::GetSeedFromString(const class FString& RefName, const class FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString"));

	struct
	{
		class FString                  RefName;
		class FString                  Str;
		int                            ReturnValue;
	} params;

	params.RefName = RefName;
	params.Str = Str;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPirateGeneratorTextureReference> OutReferences                  (Parm, OutParm, ZeroConstructor)

void UPirateGeneratorFunctionLibrary::GetAllTextureReferences(class USkeletalMesh* Mesh, TArray<struct FPirateGeneratorTextureReference>* OutReferences)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences"));

	struct
	{
		class USkeletalMesh*           Mesh;
		TArray<struct FPirateGeneratorTextureReference> OutReferences;
	} params;

	params.Mesh = Mesh;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutReferences != nullptr)
		*OutReferences = params.OutReferences;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UPirateGeneratorFunctionLibrary::GetAllDescriptions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions"));

	struct
	{
		TArray<class FString>          ReturnValue;
	} params;


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
// struct FRadialCoordinate       BodyShapeOverride              (Parm)
// TEnumAsByte<EIPGGender>        SpecificGender                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGEthnicity>     SpecificEthnicity              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FIPGDynamicSlider> DynamicSliders                 (Parm, ZeroConstructor)
// TArray<struct FName>           TextureReferences              (Parm, ZeroConstructor)
// TArray<struct FIPGScalarParameter> ScalarParameters               (Parm, ZeroConstructor)
// struct FPirateDescription      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPirateDescription UPirateGeneratorFunctionLibrary::GenerateRandomPirateWithVersion(int Seed, int Version, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<struct FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion"));

	struct
	{
		int                            Seed;
		int                            Version;
		bool                           bOverrideBodyShape;
		struct FRadialCoordinate       BodyShapeOverride;
		TEnumAsByte<EIPGGender>        SpecificGender;
		TEnumAsByte<EIPGEthnicity>     SpecificEthnicity;
		TArray<struct FIPGDynamicSlider> DynamicSliders;
		TArray<struct FName>           TextureReferences;
		TArray<struct FIPGScalarParameter> ScalarParameters;
		struct FPirateDescription      ReturnValue;
	} params;

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
// struct FRadialCoordinate       BodyShapeOverride              (Parm)
// TEnumAsByte<EIPGGender>        SpecificGender                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGEthnicity>     SpecificEthnicity              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FIPGDynamicSlider> DynamicSliders                 (Parm, ZeroConstructor)
// TArray<struct FName>           TextureReferences              (Parm, ZeroConstructor)
// TArray<struct FIPGScalarParameter> ScalarParameters               (Parm, ZeroConstructor)
// struct FPirateDescription      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPirateDescription UPirateGeneratorFunctionLibrary::GenerateRandomPirate(int Seed, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<struct FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate"));

	struct
	{
		int                            Seed;
		bool                           bOverrideBodyShape;
		struct FRadialCoordinate       BodyShapeOverride;
		TEnumAsByte<EIPGGender>        SpecificGender;
		TEnumAsByte<EIPGEthnicity>     SpecificEthnicity;
		TArray<struct FIPGDynamicSlider> DynamicSliders;
		TArray<struct FName>           TextureReferences;
		TArray<struct FIPGScalarParameter> ScalarParameters;
		struct FPirateDescription      ReturnValue;
	} params;

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
// struct FPirateDescription      Desc                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EPirateBakeFlags>  Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         AsyncResult                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPirateGeneratorFunctionLibrary::BakeFromDescriptionAsync(const struct FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, const struct FScriptDelegate& AsyncResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync"));

	struct
	{
		struct FPirateDescription      Desc;
		TEnumAsByte<EPirateBakeFlags>  Flags;
		struct FScriptDelegate         AsyncResult;
	} params;

	params.Desc = Desc;
	params.Flags = Flags;
	params.AsyncResult = AsyncResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
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

void UPreparePirateMeshBakeTestFunctionLibrary::PopulateSkeletonBlendsInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, class USkeletalMesh* MeshWithBaseSkeleton, class USkeletonsDataAsset* SkeletonsDataAsset, const class FString& MeshTypeSkeletonFileFormat, float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification"));

	struct
	{
		class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification;
		class USkeletalMesh*           MeshWithBaseSkeleton;
		class USkeletonsDataAsset*     SkeletonsDataAsset;
		class FString                  MeshTypeSkeletonFileFormat;
		float                          BaseMeshBlendWeight;
		TArray<class FString>          BodyShapeBlendNames;
		TArray<float>                  BodyShapeBlendWeights;
	} params;

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
// class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USkeletalMesh*>   SubMeshes                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          BaseMeshBlendWeight            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          BodyShapeBlendNames            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  BodyShapeBlendWeights          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPreparePirateMeshBakeTestFunctionLibrary::PopulateBlendedSubMeshesInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, TArray<class USkeletalMesh*> SubMeshes, float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification"));

	struct
	{
		class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification;
		TArray<class USkeletalMesh*>   SubMeshes;
		float                          BaseMeshBlendWeight;
		TArray<class FString>          BodyShapeBlendNames;
		TArray<float>                  BodyShapeBlendWeights;
	} params;

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
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWardrobeOutfitDataAsset::GetBiasForCategory(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory"));

	struct
	{
		struct FName                   Name;
		float                          ReturnValue;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);

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

void UWardrobeFunctionLibrary::PickOutfitAsync(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, const struct FScriptDelegate& AsyncResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync"));

	struct
	{
		TArray<struct FName>           ClothingItemNames;
		TArray<struct FName>           Tags;
		TEnumAsByte<EIPGPirateType>    PirateType;
		TEnumAsByte<EIPGGender>        Gender;
		struct FScriptDelegate         AsyncResult;
	} params;

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
// TArray<struct FName>           ClothingItemNames              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EIPGPirateType>    PirateType                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FWardrobeOutfitResult   Result                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWardrobeFunctionLibrary::PickOutfit(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, struct FWardrobeOutfitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit"));

	struct
	{
		TArray<struct FName>           ClothingItemNames;
		TArray<struct FName>           Tags;
		TEnumAsByte<EIPGPirateType>    PirateType;
		TEnumAsByte<EIPGGender>        Gender;
		struct FWardrobeOutfitResult   Result;
		bool                           ReturnValue;
	} params;

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
// TArray<struct FName>           InputItems                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::GetRandomWardrobeItemsWithBias(int Seed, TArray<struct FName> InputItems, TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias"));

	struct
	{
		int                            Seed;
		TArray<struct FName>           InputItems;
		TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory;
		TArray<struct FName>           ReturnValue;
	} params;

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
// TArray<struct FName>           InputItems                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::GetRandomWardrobeItems(int Seed, TArray<struct FName> InputItems)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems"));

	struct
	{
		int                            Seed;
		TArray<struct FName>           InputItems;
		TArray<struct FName>           ReturnValue;
	} params;

	params.Seed = Seed;
	params.InputItems = InputItems;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWardrobeOutfitDataAsset* Outfit                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::GetRandomOutfit(class UWardrobeOutfitDataAsset* Outfit, int Seed, TEnumAsByte<EIPGGender> Gender)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit"));

	struct
	{
		class UWardrobeOutfitDataAsset* Outfit;
		int                            Seed;
		TEnumAsByte<EIPGGender>        Gender;
		TArray<struct FName>           ReturnValue;
	} params;

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
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::GetAllWardrobeTypes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes"));

	struct
	{
		TArray<struct FName>           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  TypeName                       (Parm, ZeroConstructor)
// TEnumAsByte<EIPGPirateType>    PirateType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithExclusions                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::GetAllWardrobeItemsForType(const class FString& TypeName, TEnumAsByte<EIPGPirateType> PirateType, bool bWithExclusions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType"));

	struct
	{
		class FString                  TypeName;
		TEnumAsByte<EIPGPirateType>    PirateType;
		bool                           bWithExclusions;
		TArray<struct FName>           ReturnValue;
	} params;

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
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::GetAllWardrobeItems(TEnumAsByte<EIPGPirateType> PirateType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems"));

	struct
	{
		TEnumAsByte<EIPGPirateType>    PirateType;
		TArray<struct FName>           ReturnValue;
	} params;

	params.PirateType = PirateType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

bool UWardrobeFunctionLibrary::CanLoadOutfit(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit"));

	struct
	{
		TArray<struct FName>           ClothingItemNames;
		TArray<struct FName>           Tags;
		TEnumAsByte<EIPGPirateType>    PirateType;
		TEnumAsByte<EIPGGender>        Gender;
		bool                           ReturnValue;
	} params;

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
// TArray<class USkeletalMesh*>   Meshes                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWardrobeFunctionLibrary::AsyncOutfitResultDynamic__DelegateSignature(bool Success, TArray<class USkeletalMesh*> Meshes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature"));

	struct
	{
		bool                           Success;
		TArray<class USkeletalMesh*>   Meshes;
	} params;

	params.Success = Success;
	params.Meshes = Meshes;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
