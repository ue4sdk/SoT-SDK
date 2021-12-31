// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Animation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FAnimDataEntryStructWrapper    Wrapper                        (ConstParm, Parm, OutParm, ReferenceParm)
// UScriptStruct*                 DestinationStruct              (Parm, ZeroConstructor, IsPlainOldData)
// FGenericStruct                 Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimationDataFunctionLib::UnwrapAnimDataEntryStruct(const FAnimDataEntryStructWrapper& Wrapper, UScriptStruct* DestinationStruct, FGenericStruct* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct"));

	UAnimationDataFunctionLib_UnwrapAnimDataEntryStruct_Params params;
	params.Wrapper = Wrapper;
	params.DestinationStruct = DestinationStruct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.MakeAnimationData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UClass*                        Class                          (Parm, ZeroConstructor, IsPlainOldData)
// UAnimationData*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAnimationData* UAnimationDataFunctionLib::MakeAnimationData(UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataFunctionLib.MakeAnimationData"));

	UAnimationDataFunctionLib_MakeAnimationData_Params params;
	params.Class = Class;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UAnimationData*                AnimationDataObject            (Parm, ZeroConstructor, IsPlainOldData)
// UScriptStruct*                 TheClass                       (Parm, ZeroConstructor, IsPlainOldData)
// FAnimDataEntryStructWrapper    ReturnValue                    (Parm, OutParm, ReturnParm)

FAnimDataEntryStructWrapper UAnimationDataFunctionLib::GetAnimDataEntryStructAsStructWrapper(UAnimationData* AnimationDataObject, UScriptStruct* TheClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper"));

	UAnimationDataFunctionLib_GetAnimDataEntryStructAsStructWrapper_Params params;
	params.AnimationDataObject = AnimationDataObject;
	params.TheClass = TheClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs
// (Final, Native, Static, Public)
// Parameters:
// UClass*                        InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void UAnimationDataFunctionLib::CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs"));

	UAnimationDataFunctionLib_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs_Params params;
	params.InClass = InClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Animation.AnimationDataStoreAsset.LookupAnimationData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        AnimDataId                     (Parm, ZeroConstructor, IsPlainOldData)
// UAnimationData*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAnimationData* UAnimationDataStoreAsset::LookupAnimationData(UClass* AnimDataId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataStoreAsset.LookupAnimationData"));

	UAnimationDataStoreAsset_LookupAnimationData_Params params;
	params.AnimDataId = AnimDataId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.AnimationDataStoreAsset.GetAnimationDataClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FAnimationDataStoreAssetEntry  Entry                          (Parm, OutParm, ReferenceParm)
// UClass*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UClass* UAnimationDataStoreAsset::GetAnimationDataClass(FAnimationDataStoreAssetEntry* Entry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataStoreAsset.GetAnimationDataClass"));

	UAnimationDataStoreAsset_GetAnimationDataClass_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Entry != nullptr)
		*Entry = params.Entry;

	return params.ReturnValue;
}


// Function Animation.AnimationDataStoreInterface.GetAnimationDataForId
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UClass*                        AnimDataId                     (Parm, ZeroConstructor, IsPlainOldData)
// UAnimationData*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAnimationData* UAnimationDataStoreInterface::GetAnimationDataForId(UClass* AnimDataId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.AnimationDataStoreInterface.GetAnimationDataForId"));

	UAnimationDataStoreInterface_GetAnimationDataForId_Params params;
	params.AnimDataId = AnimDataId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.CosmeticItemAnimationComponent.SpawnCosmeticItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// USkeletalMeshComponent*        MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// UClass*                        ObjectToSpawn                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWieldAnimationLocation> SpawnLocation                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// UCosmeticItemAnimationSetDataAsset* CosmeticData                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnHidden                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticItemAnimationComponent::SpawnCosmeticItem(USkeletalMeshComponent* MeshComponent, UClass* ObjectToSpawn, TEnumAsByte<EWieldAnimationLocation> SpawnLocation, UCosmeticItemAnimationSetDataAsset* CosmeticData, bool SpawnHidden)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.CosmeticItemAnimationComponent.SpawnCosmeticItem"));

	UCosmeticItemAnimationComponent_SpawnCosmeticItem_Params params;
	params.MeshComponent = MeshComponent;
	params.ObjectToSpawn = ObjectToSpawn;
	params.SpawnLocation = SpawnLocation;
	params.CosmeticData = CosmeticData;
	params.SpawnHidden = SpawnHidden;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.CosmeticItemAnimationComponent.DestroyAllCosmeticItems
// (Native, Public, BlueprintCallable)

void UCosmeticItemAnimationComponent::DestroyAllCosmeticItems()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.CosmeticItemAnimationComponent.DestroyAllCosmeticItems"));

	UCosmeticItemAnimationComponent_DestroyAllCosmeticItems_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Animation.CustomAnimationMontageComponent.OnRep_ReplicatedData
// (Final, Native, Private, HasOutParms)
// Parameters:
// FCustomAnimationMontageComponentReplicatedData PriorData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomAnimationMontageComponent::OnRep_ReplicatedData(const FCustomAnimationMontageComponentReplicatedData& PriorData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.CustomAnimationMontageComponent.OnRep_ReplicatedData"));

	UCustomAnimationMontageComponent_OnRep_ReplicatedData_Params params;
	params.PriorData = PriorData;

	UObject::ProcessEvent(fn, &params);
}


// Function Animation.LimbIKFunctionLibrary.SetTranslationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          InRotationStrength             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetTranslationStrength(float InRotationStrength, FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetTranslationStrength"));

	ULimbIKFunctionLibrary_SetTranslationStrength_Params params;
	params.InRotationStrength = InRotationStrength;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// FTransform                     InTransform                    (ConstParm, Parm, IsPlainOldData)

void ULimbIKFunctionLibrary::SetTransform(const FTransform& InTransform, FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetTransform"));

	ULimbIKFunctionLibrary_SetTransform_Params params;
	params.InTransform = InTransform;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetRotationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          InRotationStrength             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetRotationStrength(float InRotationStrength, FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetRotationStrength"));

	ULimbIKFunctionLibrary_SetRotationStrength_Params params;
	params.InRotationStrength = InRotationStrength;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetParentBone
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// FName                          Bone                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ULimbIKFunctionLibrary::SetParentBone(const FName& Bone, FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetParentBone"));

	ULimbIKFunctionLibrary_SetParentBone_Params params;
	params.Bone = Bone;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetIKSpace
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// TEnumAsByte<ELimbIKSpace>      IKSpace                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetIKSpace(TEnumAsByte<ELimbIKSpace> IKSpace, FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetIKSpace"));

	ULimbIKFunctionLibrary_SetIKSpace_Params params;
	params.IKSpace = IKSpace;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELimbIKSpace>      IKSpace                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FName                          ParentBone                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetEnabled(bool Enabled, TEnumAsByte<ELimbIKSpace> IKSpace, const FName& ParentBone, FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetEnabled"));

	ULimbIKFunctionLibrary_SetEnabled_Params params;
	params.Enabled = Enabled;
	params.IKSpace = IKSpace;
	params.ParentBone = ParentBone;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          BlendOutSpeed                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetBlendOutSpeed(float BlendOutSpeed, FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed"));

	ULimbIKFunctionLibrary_SetBlendOutSpeed_Params params;
	params.BlendOutSpeed = BlendOutSpeed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          BlendInSpeed                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetBlendInSpeed(float BlendInSpeed, FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed"));

	ULimbIKFunctionLibrary_SetBlendInSpeed_Params params;
	params.BlendInSpeed = BlendInSpeed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetAnimationOverride
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           AnimationOverride              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetAnimationOverride(bool AnimationOverride, FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetAnimationOverride"));

	ULimbIKFunctionLibrary_SetAnimationOverride_Params params;
	params.AnimationOverride = AnimationOverride;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetAlphaTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          AlphaTarget                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetAlphaTarget(float AlphaTarget, FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.SetAlphaTarget"));

	ULimbIKFunctionLibrary_SetAlphaTarget_Params params;
	params.AlphaTarget = AlphaTarget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.IsEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULimbIKFunctionLibrary::IsEnabled(FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.IsEnabled"));

	ULimbIKFunctionLibrary_IsEnabled_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetTranslationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::GetTranslationStrength(FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetTranslationStrength"));

	ULimbIKFunctionLibrary_GetTranslationStrength_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// FTransform                     ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

FTransform ULimbIKFunctionLibrary::GetTransform(FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetTransform"));

	ULimbIKFunctionLibrary_GetTransform_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetRotationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::GetRotationStrength(FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetRotationStrength"));

	ULimbIKFunctionLibrary_GetRotationStrength_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetParentBone
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// FName                          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FName ULimbIKFunctionLibrary::GetParentBone(FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetParentBone"));

	ULimbIKFunctionLibrary_GetParentBone_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetIKSpace
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// TEnumAsByte<ELimbIKSpace>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ELimbIKSpace> ULimbIKFunctionLibrary::GetIKSpace(FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetIKSpace"));

	ULimbIKFunctionLibrary_GetIKSpace_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::GetCurrentAlpha(FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha"));

	ULimbIKFunctionLibrary_GetCurrentAlpha_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetAnimationOverride
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULimbIKFunctionLibrary::GetAnimationOverride(FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetAnimationOverride"));

	ULimbIKFunctionLibrary_GetAnimationOverride_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetAlphaTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FLimbIK                        LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::GetAlphaTarget(FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.GetAlphaTarget"));

	ULimbIKFunctionLibrary_GetAlphaTarget_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           InBool                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::ConvertBoolToAlpha(bool InBool)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha"));

	ULimbIKFunctionLibrary_ConvertBoolToAlpha_Params params;
	params.InBool = InBool;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FRotator                       CharacterRotation              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          AngleSpeedMax                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleSpeedMin                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULocomotionFunctionLib::UpdateControllerSpineRotation(const FRotator& CharacterRotation, float AngleSpeedMax, float AngleSpeedMin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation"));

	ULocomotionFunctionLib_UpdateControllerSpineRotation_Params params;
	params.CharacterRotation = CharacterRotation;
	params.AngleSpeedMax = AngleSpeedMax;
	params.AngleSpeedMin = AngleSpeedMin;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FVector                        Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          CurrentMaxWalkSpeed            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          WantedMovementSpeed            (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseMaxWalkSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedBlendValue                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSwimming                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeadZone                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FActorVelocityData             ReturnValue                    (Parm, OutParm, ReturnParm)

FActorVelocityData ULocomotionFunctionLib::UpdateCharacterSpeed(const FVector& Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming, float DeadZone)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed"));

	ULocomotionFunctionLib_UpdateCharacterSpeed_Params params;
	params.Velocity = Velocity;
	params.CurrentMaxWalkSpeed = CurrentMaxWalkSpeed;
	params.WantedMovementSpeed = WantedMovementSpeed;
	params.BaseMaxWalkSpeed = BaseMaxWalkSpeed;
	params.SpeedBlendValue = SpeedBlendValue;
	params.IsSwimming = IsSwimming;
	params.DeadZone = DeadZone;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FRotator                       CharacterRotation              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          LargeRate                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentCharacterYaw            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DeltaSeconds                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULocomotionFunctionLib::UpdateCalculateRateAndCurrentYaw(const FRotator& CharacterRotation, float LargeRate, float DeltaSeconds, float* CurrentCharacterYaw)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw"));

	ULocomotionFunctionLib_UpdateCalculateRateAndCurrentYaw_Params params;
	params.CharacterRotation = CharacterRotation;
	params.LargeRate = LargeRate;
	params.DeltaSeconds = DeltaSeconds;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (CurrentCharacterYaw != nullptr)
		*CurrentCharacterYaw = params.CurrentCharacterYaw;

	return params.ReturnValue;
}


// Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex
// (Final, Native, Protected)

void UNetworkSyncedAnimationComponent::OnRep_PlayingAnimationIndex()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex"));

	UNetworkSyncedAnimationComponent_OnRep_PlayingAnimationIndex_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression
// (Final, Native, Protected)

void UNetworkSyncedAnimationComponent::OnRep_AnimationProgression()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression"));

	UNetworkSyncedAnimationComponent_OnRep_AnimationProgression_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Animation.TurningFunctionLib.TurningUpdate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CharacterMoving                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeadZone                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          TurnRate                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DelayedCounter                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          CounterMax                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TurningLeft                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTurningFunctionLib::TurningUpdate(float DeltaSeconds, bool CharacterMoving, float TurnRate, float CounterMax, bool* DeadZone, float* DelayedCounter, bool* TurningLeft)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.TurningFunctionLib.TurningUpdate"));

	UTurningFunctionLib_TurningUpdate_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.CharacterMoving = CharacterMoving;
	params.TurnRate = TurnRate;
	params.CounterMax = CounterMax;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DeadZone != nullptr)
		*DeadZone = params.DeadZone;
	if (DelayedCounter != nullptr)
		*DelayedCounter = params.DelayedCounter;
	if (TurningLeft != nullptr)
		*TurningLeft = params.TurningLeft;

	return params.ReturnValue;
}


// Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState
// (Final, Native, Public)
// Parameters:
// FName                          path                           (Parm, ZeroConstructor, IsPlainOldData)

void UWaitForAnimationStateEntryProxy::OnEnteredState(const FName& path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState"));

	UWaitForAnimationStateEntryProxy_OnEnteredState_Params params;
	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated
// (Final, Native, Public)

void UWaitForAnimationStateEntryProxy::OnAnimationUpdated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated"));

	UWaitForAnimationStateEntryProxy_OnAnimationUpdated_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Animation.WaitForAnimationStateEntryProxy.CreateProxy
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UAnimInstance*                 AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// FName                          TargetPath                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// UWaitForAnimationStateEntryProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UWaitForAnimationStateEntryProxy* UWaitForAnimationStateEntryProxy::CreateProxy(UAnimInstance* AnimInstance, const FName& TargetPath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WaitForAnimationStateEntryProxy.CreateProxy"));

	UWaitForAnimationStateEntryProxy_CreateProxy_Params params;
	params.AnimInstance = AnimInstance;
	params.TargetPath = TargetPath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.WaitForAnimationStateExitProxy.OnExitState
// (Final, Native, Public)
// Parameters:
// FName                          path                           (Parm, ZeroConstructor, IsPlainOldData)

void UWaitForAnimationStateExitProxy::OnExitState(const FName& path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WaitForAnimationStateExitProxy.OnExitState"));

	UWaitForAnimationStateExitProxy_OnExitState_Params params;
	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated
// (Final, Native, Public)

void UWaitForAnimationStateExitProxy::OnAnimationUpdated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated"));

	UWaitForAnimationStateExitProxy_OnAnimationUpdated_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Animation.WaitForAnimationStateExitProxy.CreateProxy
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UAnimInstance*                 AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// FName                          TargetPath                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// UWaitForAnimationStateExitProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UWaitForAnimationStateExitProxy* UWaitForAnimationStateExitProxy::CreateProxy(UAnimInstance* AnimInstance, const FName& TargetPath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WaitForAnimationStateExitProxy.CreateProxy"));

	UWaitForAnimationStateExitProxy_CreateProxy_Params params;
	params.AnimInstance = AnimInstance;
	params.TargetPath = TargetPath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.WeightedAnimSequenceLoadOnDemand.Initialise
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWeightedAnimationLoadOnDemandDataAsset* InAnimationData                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWeightedAnimSequenceLoadOnDemand::Initialise(UWeightedAnimationLoadOnDemandDataAsset* InAnimationData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WeightedAnimSequenceLoadOnDemand.Initialise"));

	UWeightedAnimSequenceLoadOnDemand_Initialise_Params params;
	params.InAnimationData = InAnimationData;

	UObject::ProcessEvent(fn, &params);
}


// Function Animation.WeightedAnimSequenceLoadOnDemand.CreateNewWeightedAnimSequenceLoadOnDemand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UWeightedAnimSequenceLoadOnDemand* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UWeightedAnimSequenceLoadOnDemand* UWeightedAnimSequenceLoadOnDemand::CreateNewWeightedAnimSequenceLoadOnDemand()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.WeightedAnimSequenceLoadOnDemand.CreateNewWeightedAnimSequenceLoadOnDemand"));

	UWeightedAnimSequenceLoadOnDemand_CreateNewWeightedAnimSequenceLoadOnDemand_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.DockableInterface.HandleDestroy
// (Native, Public)

void UDockableInterface::HandleDestroy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.DockableInterface.HandleDestroy"));

	UDockableInterface_HandleDestroy_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Animation.DockableInterface.GetDockableInfo
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDockableInfo                  ReturnValue                    (Parm, OutParm, ReturnParm)

FDockableInfo UDockableInterface::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Animation.DockableInterface.GetDockableInfo"));

	UDockableInterface_GetDockableInfo_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
