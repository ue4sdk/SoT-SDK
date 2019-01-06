// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Animation_classes.hpp"

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

bool UAnimationDataFunctionLib::UnwrapAnimDataEntryStruct(const struct FAnimDataEntryStructWrapper& Wrapper, class UScriptStruct* DestinationStruct, struct FGenericStruct* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct");

	struct
	{
		struct FAnimDataEntryStructWrapper Wrapper;
		class UScriptStruct*           DestinationStruct;
		struct FGenericStruct          Value;
		bool                           ReturnValue;
	} params;

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
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationData*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationData* UAnimationDataFunctionLib::MakeAnimationData(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.MakeAnimationData");

	struct
	{
		class UClass*                  Class;
		class UAnimationData*          ReturnValue;
	} params;

	params.Class = Class;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimationData*          AnimationDataObject            (Parm, ZeroConstructor, IsPlainOldData)
// class UScriptStruct*           TheClass                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimDataEntryStructWrapper ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAnimDataEntryStructWrapper UAnimationDataFunctionLib::GetAnimDataEntryStructAsStructWrapper(class UAnimationData* AnimationDataObject, class UScriptStruct* TheClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper");

	struct
	{
		class UAnimationData*          AnimationDataObject;
		class UScriptStruct*           TheClass;
		struct FAnimDataEntryStructWrapper ReturnValue;
	} params;

	params.AnimationDataObject = AnimationDataObject;
	params.TheClass = TheClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void UAnimationDataFunctionLib::CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs");

	struct
	{
		class UClass*                  InClass;
	} params;

	params.InClass = InClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Animation.AnimationDataStoreAsset.LookupAnimationData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AnimDataId                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationData*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationData* UAnimationDataStoreAsset::LookupAnimationData(class UClass* AnimDataId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataStoreAsset.LookupAnimationData");

	struct
	{
		class UClass*                  AnimDataId;
		class UAnimationData*          ReturnValue;
	} params;

	params.AnimDataId = AnimDataId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.AnimationDataStoreAsset.GetAnimationDataClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimationDataStoreAssetEntry Entry                          (Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UAnimationDataStoreAsset::GetAnimationDataClass(struct FAnimationDataStoreAssetEntry* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataStoreAsset.GetAnimationDataClass");

	struct
	{
		struct FAnimationDataStoreAssetEntry Entry;
		class UClass*                  ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Entry != nullptr)
		*Entry = params.Entry;

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

	struct
	{
		class UClass*                  AnimDataId;
		class UAnimationData*          ReturnValue;
	} params;

	params.AnimDataId = AnimDataId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.DockableInterface.HandleDestroy
// (Native, Public)

void UDockableInterface::HandleDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockableInterface.HandleDestroy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Animation.DockableInterface.GetDockableInfo
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockableInfo UDockableInterface::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockableInterface.GetDockableInfo");

	struct
	{
		struct FDockableInfo           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.UpdateDock
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDockerBlueprintFunctions::UpdateDock(float DeltaTime, struct FDocker* Docker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.UpdateDock");

	struct
	{
		struct FDocker                 Docker;
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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
// float                          DelayAfterDocking              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDockerBlueprintFunctions::StartDockingWithActor(class AActor* Owner, class AActor* Target, float DockDuration, float DelayAfterDocking, struct FDocker* Docker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.StartDockingWithActor");

	struct
	{
		struct FDocker                 Docker;
		class AActor*                  Owner;
		class AActor*                  Target;
		float                          DockDuration;
		float                          DelayAfterDocking;
	} params;

	params.Owner = Owner;
	params.Target = Target;
	params.DockDuration = DockDuration;
	params.DelayAfterDocking = DelayAfterDocking;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Docker != nullptr)
		*Docker = params.Docker;
}


// Function Animation.DockerBlueprintFunctions.IsFullyDocked
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDockerBlueprintFunctions::IsFullyDocked(struct FDocker* Docker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.IsFullyDocked");

	struct
	{
		struct FDocker                 Docker;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Docker != nullptr)
		*Docker = params.Docker;

	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.IsDocking
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDockerBlueprintFunctions::IsDocking(struct FDocker* Docker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.IsDocking");

	struct
	{
		struct FDocker                 Docker;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Docker != nullptr)
		*Docker = params.Docker;

	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.GetTargetLocalOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDocker                 Docker                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UDockerBlueprintFunctions::GetTargetLocalOffset(const struct FDocker& Docker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.GetTargetLocalOffset");

	struct
	{
		struct FDocker                 Docker;
		struct FVector                 ReturnValue;
	} params;

	params.Docker = Docker;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.EndDock
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)

void UDockerBlueprintFunctions::EndDock(struct FDocker* Docker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.EndDock");

	struct
	{
		struct FDocker                 Docker;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Docker != nullptr)
		*Docker = params.Docker;
}


// Function Animation.LimbIKFunctionLibrary.SetTranslationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          InRotationStrength             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetTranslationStrength(float InRotationStrength, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetTranslationStrength");

	struct
	{
		struct FLimbIK                 LimbIK;
		float                          InRotationStrength;
	} params;

	params.InRotationStrength = InRotationStrength;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// struct FTransform              InTransform                    (ConstParm, Parm, IsPlainOldData)

void ULimbIKFunctionLibrary::SetTransform(const struct FTransform& InTransform, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetTransform");

	struct
	{
		struct FLimbIK                 LimbIK;
		struct FTransform              InTransform;
	} params;

	params.InTransform = InTransform;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetRotationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          InRotationStrength             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetRotationStrength(float InRotationStrength, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetRotationStrength");

	struct
	{
		struct FLimbIK                 LimbIK;
		float                          InRotationStrength;
	} params;

	params.InRotationStrength = InRotationStrength;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetParentBone
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// struct FName                   Bone                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ULimbIKFunctionLibrary::SetParentBone(const struct FName& Bone, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetParentBone");

	struct
	{
		struct FLimbIK                 LimbIK;
		struct FName                   Bone;
	} params;

	params.Bone = Bone;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetIKSpace
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// TEnumAsByte<ELimbIKSpace>      IKSpace                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetIKSpace(TEnumAsByte<ELimbIKSpace> IKSpace, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetIKSpace");

	struct
	{
		struct FLimbIK                 LimbIK;
		TEnumAsByte<ELimbIKSpace>      IKSpace;
	} params;

	params.IKSpace = IKSpace;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

void ULimbIKFunctionLibrary::SetEnabled(bool Enabled, TEnumAsByte<ELimbIKSpace> IKSpace, const struct FName& ParentBone, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetEnabled");

	struct
	{
		struct FLimbIK                 LimbIK;
		bool                           Enabled;
		TEnumAsByte<ELimbIKSpace>      IKSpace;
		struct FName                   ParentBone;
	} params;

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
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          BlendOutSpeed                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetBlendOutSpeed(float BlendOutSpeed, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed");

	struct
	{
		struct FLimbIK                 LimbIK;
		float                          BlendOutSpeed;
	} params;

	params.BlendOutSpeed = BlendOutSpeed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          BlendInSpeed                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetBlendInSpeed(float BlendInSpeed, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed");

	struct
	{
		struct FLimbIK                 LimbIK;
		float                          BlendInSpeed;
	} params;

	params.BlendInSpeed = BlendInSpeed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetAnimationOverride
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           AnimationOverride              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetAnimationOverride(bool AnimationOverride, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetAnimationOverride");

	struct
	{
		struct FLimbIK                 LimbIK;
		bool                           AnimationOverride;
	} params;

	params.AnimationOverride = AnimationOverride;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.SetAlphaTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          AlphaTarget                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULimbIKFunctionLibrary::SetAlphaTarget(float AlphaTarget, struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetAlphaTarget");

	struct
	{
		struct FLimbIK                 LimbIK;
		float                          AlphaTarget;
	} params;

	params.AlphaTarget = AlphaTarget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;
}


// Function Animation.LimbIKFunctionLibrary.IsEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULimbIKFunctionLibrary::IsEnabled(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.IsEnabled");

	struct
	{
		struct FLimbIK                 LimbIK;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetTranslationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::GetTranslationStrength(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetTranslationStrength");

	struct
	{
		struct FLimbIK                 LimbIK;
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ULimbIKFunctionLibrary::GetTransform(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetTransform");

	struct
	{
		struct FLimbIK                 LimbIK;
		struct FTransform              ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetRotationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::GetRotationStrength(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetRotationStrength");

	struct
	{
		struct FLimbIK                 LimbIK;
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetParentBone
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ULimbIKFunctionLibrary::GetParentBone(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetParentBone");

	struct
	{
		struct FLimbIK                 LimbIK;
		struct FName                   ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetIKSpace
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// TEnumAsByte<ELimbIKSpace>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ELimbIKSpace> ULimbIKFunctionLibrary::GetIKSpace(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetIKSpace");

	struct
	{
		struct FLimbIK                 LimbIK;
		TEnumAsByte<ELimbIKSpace>      ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::GetCurrentAlpha(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha");

	struct
	{
		struct FLimbIK                 LimbIK;
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetAnimationOverride
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULimbIKFunctionLibrary::GetAnimationOverride(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetAnimationOverride");

	struct
	{
		struct FLimbIK                 LimbIK;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetAlphaTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULimbIKFunctionLibrary::GetAlphaTarget(struct FLimbIK* LimbIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetAlphaTarget");

	struct
	{
		struct FLimbIK                 LimbIK;
		float                          ReturnValue;
	} params;


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
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha");

	struct
	{
		bool                           InBool;
		float                          ReturnValue;
	} params;

	params.InBool = InBool;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                CharacterRotation              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          AngleSpeedMax                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleSpeedMin                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULocomotionFunctionLib::UpdateControllerSpineRotation(const struct FRotator& CharacterRotation, float AngleSpeedMax, float AngleSpeedMin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation");

	struct
	{
		struct FRotator                CharacterRotation;
		float                          AngleSpeedMax;
		float                          AngleSpeedMin;
		float                          ReturnValue;
	} params;

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
// struct FVector                 Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          CurrentMaxWalkSpeed            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          WantedMovementSpeed            (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseMaxWalkSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedBlendValue                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSwimming                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FActorVelocityData      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActorVelocityData ULocomotionFunctionLib::UpdateCharacterSpeed(const struct FVector& Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed");

	struct
	{
		struct FVector                 Velocity;
		float                          CurrentMaxWalkSpeed;
		float                          WantedMovementSpeed;
		float                          BaseMaxWalkSpeed;
		float                          SpeedBlendValue;
		bool                           IsSwimming;
		struct FActorVelocityData      ReturnValue;
	} params;

	params.Velocity = Velocity;
	params.CurrentMaxWalkSpeed = CurrentMaxWalkSpeed;
	params.WantedMovementSpeed = WantedMovementSpeed;
	params.BaseMaxWalkSpeed = BaseMaxWalkSpeed;
	params.SpeedBlendValue = SpeedBlendValue;
	params.IsSwimming = IsSwimming;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

float ULocomotionFunctionLib::UpdateCalculateRateAndCurrentYaw(const struct FRotator& CharacterRotation, float LargeRate, float DeltaSeconds, float* CurrentCharacterYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw");

	struct
	{
		struct FRotator                CharacterRotation;
		float                          LargeRate;
		float                          CurrentCharacterYaw;
		float                          DeltaSeconds;
		float                          ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>("Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression
// (Final, Native, Protected)

void UNetworkSyncedAnimationComponent::OnRep_AnimationProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression");

	struct
	{
	} params;


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
	static auto fn = UObject::FindObject<UFunction>("Function Animation.TurningFunctionLib.TurningUpdate");

	struct
	{
		float                          DeltaSeconds;
		bool                           CharacterMoving;
		bool                           DeadZone;
		float                          TurnRate;
		float                          DelayedCounter;
		float                          CounterMax;
		bool                           TurningLeft;
		bool                           ReturnValue;
	} params;

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
// struct FName                   path                           (Parm, ZeroConstructor, IsPlainOldData)

void UWaitForAnimationStateEntryProxy::OnEnteredState(const struct FName& path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState");

	struct
	{
		struct FName                   path;
	} params;

	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated
// (Final, Native, Public)

void UWaitForAnimationStateEntryProxy::OnAnimationUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Animation.WaitForAnimationStateEntryProxy.CreateProxy
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetPath                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWaitForAnimationStateEntryProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWaitForAnimationStateEntryProxy* UWaitForAnimationStateEntryProxy::CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateEntryProxy.CreateProxy");

	struct
	{
		class UAnimInstance*           AnimInstance;
		struct FName                   TargetPath;
		class UWaitForAnimationStateEntryProxy* ReturnValue;
	} params;

	params.AnimInstance = AnimInstance;
	params.TargetPath = TargetPath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Animation.WaitForAnimationStateExitProxy.OnExitState
// (Final, Native, Public)
// Parameters:
// struct FName                   path                           (Parm, ZeroConstructor, IsPlainOldData)

void UWaitForAnimationStateExitProxy::OnExitState(const struct FName& path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateExitProxy.OnExitState");

	struct
	{
		struct FName                   path;
	} params;

	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated
// (Final, Native, Public)

void UWaitForAnimationStateExitProxy::OnAnimationUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Animation.WaitForAnimationStateExitProxy.CreateProxy
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetPath                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWaitForAnimationStateExitProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWaitForAnimationStateExitProxy* UWaitForAnimationStateExitProxy::CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateExitProxy.CreateProxy");

	struct
	{
		class UAnimInstance*           AnimInstance;
		struct FName                   TargetPath;
		class UWaitForAnimationStateExitProxy* ReturnValue;
	} params;

	params.AnimInstance = AnimInstance;
	params.TargetPath = TargetPath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
