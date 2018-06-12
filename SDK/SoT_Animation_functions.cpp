// Sea of Thieves (1.1.1) SDK

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
// struct FAnimDataEntryStructWrapper Wrapper                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UScriptStruct*           DestinationStruct              (Parm, ZeroConstructor, IsPlainOldData)
// struct FGenericStruct          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimationDataFunctionLib::STATIC_UnwrapAnimDataEntryStruct(const struct FAnimDataEntryStructWrapper& Wrapper, class UScriptStruct* DestinationStruct, struct FGenericStruct* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct");

	UAnimationDataFunctionLib_UnwrapAnimDataEntryStruct_Params params;
	params.Wrapper = Wrapper;
	params.DestinationStruct = DestinationStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.MakeAnimationData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationData*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationData* UAnimationDataFunctionLib::STATIC_MakeAnimationData(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.MakeAnimationData");

	UAnimationDataFunctionLib_MakeAnimationData_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimationData*          AnimationDataObject            (Parm, ZeroConstructor, IsPlainOldData)
// class UScriptStruct*           TheClass                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimDataEntryStructWrapper ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAnimDataEntryStructWrapper UAnimationDataFunctionLib::STATIC_GetAnimDataEntryStructAsStructWrapper(class UAnimationData* AnimationDataObject, class UScriptStruct* TheClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper");

	UAnimationDataFunctionLib_GetAnimDataEntryStructAsStructWrapper_Params params;
	params.AnimationDataObject = AnimationDataObject;
	params.TheClass = TheClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void UAnimationDataFunctionLib::STATIC_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs");

	UAnimationDataFunctionLib_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.AnimationDataStoreAsset.LookupAnimationData
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  AnimDataId                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationData*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationData* UAnimationDataStoreAsset::LookupAnimationData(class UClass* AnimDataId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataStoreAsset.LookupAnimationData");

	UAnimationDataStoreAsset_LookupAnimationData_Params params;
	params.AnimDataId = AnimDataId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.AnimationDataStoreInterface.GetAnimationDataForId
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AnimDataId                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationData*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationData* UAnimationDataStoreInterface::GetAnimationDataForId(class UClass* AnimDataId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataStoreInterface.GetAnimationDataForId");

	UAnimationDataStoreInterface_GetAnimationDataForId_Params params;
	params.AnimDataId = AnimDataId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.DockableInterface.HandleDestroy
// (Native, Public)

void UDockableInterface::HandleDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockableInterface.HandleDestroy");

	UDockableInterface_HandleDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.DockableInterface.GetDockableInfo
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockableInfo UDockableInterface::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockableInterface.GetDockableInfo");

	UDockableInterface_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.UpdateDock
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDockerBlueprintFunctions::STATIC_UpdateDock(float DeltaTime, struct FDocker* Docker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.UpdateDock");

	UDockerBlueprintFunctions_UpdateDock_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;
}


// Function Animation.DockerBlueprintFunctions.StartDockingWithActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DockDuration                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDockerBlueprintFunctions::STATIC_StartDockingWithActor(class AActor* Owner, class AActor* Target, float DockDuration, struct FDocker* Docker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.StartDockingWithActor");

	UDockerBlueprintFunctions_StartDockingWithActor_Params params;
	params.Owner = Owner;
	params.Target = Target;
	params.DockDuration = DockDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;
}


// Function Animation.DockerBlueprintFunctions.IsFullyDocked
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDockerBlueprintFunctions::STATIC_IsFullyDocked(struct FDocker* Docker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.IsFullyDocked");

	UDockerBlueprintFunctions_IsFullyDocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;

	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.IsDocking
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDockerBlueprintFunctions::STATIC_IsDocking(struct FDocker* Docker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.IsDocking");

	UDockerBlueprintFunctions_IsDocking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;

	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.GetTargetLocalOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDocker                 Docker                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UDockerBlueprintFunctions::STATIC_GetTargetLocalOffset(const struct FDocker& Docker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.GetTargetLocalOffset");

	UDockerBlueprintFunctions_GetTargetLocalOffset_Params params;
	params.Docker = Docker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.EndDock
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)

void UDockerBlueprintFunctions::STATIC_EndDock(struct FDocker* Docker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.EndDock");

	UDockerBlueprintFunctions_EndDock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;
}


// Function Animation.LimbIKFunctionLibrary.SetTranslationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          InRotationStrength             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::STATIC_SetTranslationStrength(float InRotationStrength, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetTranslationStrength");

	ULimbIKFunctionLibrary_SetTranslationStrength_Params params;
	params.InRotationStrength = InRotationStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// struct FTransform              InTransform                    (ConstParm, Parm, IsPlainOldData)

void ULimbIKFunctionLibrary::STATIC_SetTransform(const struct FTransform& InTransform, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetTransform");

	ULimbIKFunctionLibrary_SetTransform_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetRotationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          InRotationStrength             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::STATIC_SetRotationStrength(float InRotationStrength, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetRotationStrength");

	ULimbIKFunctionLibrary_SetRotationStrength_Params params;
	params.InRotationStrength = InRotationStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetParentBone
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// struct FName                   Bone                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ULimbIKFunctionLibrary::STATIC_SetParentBone(const struct FName& Bone, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetParentBone");

	ULimbIKFunctionLibrary_SetParentBone_Params params;
	params.Bone = Bone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetIKSpace
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// TEnumAsByte<ELimbIKSpace>      IKSpace                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::STATIC_SetIKSpace(TEnumAsByte<ELimbIKSpace> IKSpace, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetIKSpace");

	ULimbIKFunctionLibrary_SetIKSpace_Params params;
	params.IKSpace = IKSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELimbIKSpace>      IKSpace                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParentBone                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::STATIC_SetEnabled(bool Enabled, TEnumAsByte<ELimbIKSpace> IKSpace, const struct FName& ParentBone, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetEnabled");

	ULimbIKFunctionLibrary_SetEnabled_Params params;
	params.Enabled = Enabled;
	params.IKSpace = IKSpace;
	params.ParentBone = ParentBone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          BlendOutSpeed                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::STATIC_SetBlendOutSpeed(float BlendOutSpeed, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed");

	ULimbIKFunctionLibrary_SetBlendOutSpeed_Params params;
	params.BlendOutSpeed = BlendOutSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          BlendInSpeed                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::STATIC_SetBlendInSpeed(float BlendInSpeed, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed");

	ULimbIKFunctionLibrary_SetBlendInSpeed_Params params;
	params.BlendInSpeed = BlendInSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetAnimationOverride
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           AnimationOverride              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::STATIC_SetAnimationOverride(bool AnimationOverride, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetAnimationOverride");

	ULimbIKFunctionLibrary_SetAnimationOverride_Params params;
	params.AnimationOverride = AnimationOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetAlphaTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          AlphaTarget                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::STATIC_SetAlphaTarget(float AlphaTarget, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetAlphaTarget");

	ULimbIKFunctionLibrary_SetAlphaTarget_Params params;
	params.AlphaTarget = AlphaTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.IsEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULimbIKFunctionLibrary::STATIC_IsEnabled(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.IsEnabled");

	ULimbIKFunctionLibrary_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetTranslationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::STATIC_GetTranslationStrength(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetTranslationStrength");

	ULimbIKFunctionLibrary_GetTranslationStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ULimbIKFunctionLibrary::STATIC_GetTransform(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetTransform");

	ULimbIKFunctionLibrary_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetRotationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::STATIC_GetRotationStrength(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetRotationStrength");

	ULimbIKFunctionLibrary_GetRotationStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetParentBone
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ULimbIKFunctionLibrary::STATIC_GetParentBone(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetParentBone");

	ULimbIKFunctionLibrary_GetParentBone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetIKSpace
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// TEnumAsByte<ELimbIKSpace>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ELimbIKSpace> ULimbIKFunctionLibrary::STATIC_GetIKSpace(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetIKSpace");

	ULimbIKFunctionLibrary_GetIKSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::STATIC_GetCurrentAlpha(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha");

	ULimbIKFunctionLibrary_GetCurrentAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetAnimationOverride
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULimbIKFunctionLibrary::STATIC_GetAnimationOverride(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetAnimationOverride");

	ULimbIKFunctionLibrary_GetAnimationOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetAlphaTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::STATIC_GetAlphaTarget(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetAlphaTarget");

	ULimbIKFunctionLibrary_GetAlphaTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           InBool                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::STATIC_ConvertBoolToAlpha(bool InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha");

	ULimbIKFunctionLibrary_ConvertBoolToAlpha_Params params;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                CharacterRotation              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          AngleSpeedMax                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleSpeedMin                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULocomotionFunctionLib::STATIC_UpdateControllerSpineRotation(const struct FRotator& CharacterRotation, float AngleSpeedMax, float AngleSpeedMin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation");

	ULocomotionFunctionLib_UpdateControllerSpineRotation_Params params;
	params.CharacterRotation = CharacterRotation;
	params.AngleSpeedMax = AngleSpeedMax;
	params.AngleSpeedMin = AngleSpeedMin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          CurrentMaxWalkSpeed            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          WantedMovementSpeed            (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseMaxWalkSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedBlendValue                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSwimming                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FActorVelocityData      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActorVelocityData ULocomotionFunctionLib::STATIC_UpdateCharacterSpeed(const struct FVector& Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed");

	ULocomotionFunctionLib_UpdateCharacterSpeed_Params params;
	params.Velocity = Velocity;
	params.CurrentMaxWalkSpeed = CurrentMaxWalkSpeed;
	params.WantedMovementSpeed = WantedMovementSpeed;
	params.BaseMaxWalkSpeed = BaseMaxWalkSpeed;
	params.SpeedBlendValue = SpeedBlendValue;
	params.IsSwimming = IsSwimming;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                CharacterRotation              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          LargeRate                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentCharacterYaw            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DeltaSeconds                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULocomotionFunctionLib::STATIC_UpdateCalculateRateAndCurrentYaw(const struct FRotator& CharacterRotation, float LargeRate, float DeltaSeconds, float* CurrentCharacterYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw");

	ULocomotionFunctionLib_UpdateCalculateRateAndCurrentYaw_Params params;
	params.CharacterRotation = CharacterRotation;
	params.LargeRate = LargeRate;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCharacterYaw != nullptr)
		*CurrentCharacterYaw = params.CurrentCharacterYaw;

	return params.ReturnValue;
}


// Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex
// (Final, Native, Protected)

void UNetworkSyncedAnimationComponent::OnRep_PlayingAnimationIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex");

	UNetworkSyncedAnimationComponent_OnRep_PlayingAnimationIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression
// (Final, Native, Protected)

void UNetworkSyncedAnimationComponent::OnRep_AnimationProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression");

	UNetworkSyncedAnimationComponent_OnRep_AnimationProgression_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
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

bool UTurningFunctionLib::STATIC_TurningUpdate(float DeltaSeconds, bool CharacterMoving, float TurnRate, float CounterMax, bool* DeadZone, float* DelayedCounter, bool* TurningLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.TurningFunctionLib.TurningUpdate");

	UTurningFunctionLib_TurningUpdate_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.CharacterMoving = CharacterMoving;
	params.TurnRate = TurnRate;
	params.CounterMax = CounterMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

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
// struct FName                   path                           (Parm, ZeroConstructor, IsPlainOldData)

void UWaitForAnimationStateEntryProxy::OnEnteredState(const struct FName& path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState");

	UWaitForAnimationStateEntryProxy_OnEnteredState_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated
// (Final, Native, Public)

void UWaitForAnimationStateEntryProxy::OnAnimationUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated");

	UWaitForAnimationStateEntryProxy_OnAnimationUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.WaitForAnimationStateEntryProxy.CreateProxy
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetPath                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWaitForAnimationStateEntryProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWaitForAnimationStateEntryProxy* UWaitForAnimationStateEntryProxy::STATIC_CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateEntryProxy.CreateProxy");

	UWaitForAnimationStateEntryProxy_CreateProxy_Params params;
	params.AnimInstance = AnimInstance;
	params.TargetPath = TargetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Animation.WaitForAnimationStateExitProxy.OnExitState
// (Final, Native, Public)
// Parameters:
// struct FName                   path                           (Parm, ZeroConstructor, IsPlainOldData)

void UWaitForAnimationStateExitProxy::OnExitState(const struct FName& path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateExitProxy.OnExitState");

	UWaitForAnimationStateExitProxy_OnExitState_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated
// (Final, Native, Public)

void UWaitForAnimationStateExitProxy::OnAnimationUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated");

	UWaitForAnimationStateExitProxy_OnAnimationUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Animation.WaitForAnimationStateExitProxy.CreateProxy
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetPath                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWaitForAnimationStateExitProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWaitForAnimationStateExitProxy* UWaitForAnimationStateExitProxy::STATIC_CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateExitProxy.CreateProxy");

	UWaitForAnimationStateExitProxy_CreateProxy_Params params;
	params.AnimInstance = AnimInstance;
	params.TargetPath = TargetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
