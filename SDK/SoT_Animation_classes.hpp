#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Animation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Animation.AnimationDataStoreId
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataStoreId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataStoreId");
		return ptr;
	}

};


// Class Animation.AnimationData
// 0x0000 (0x0028 - 0x0028)
class UAnimationData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationData");
		return ptr;
	}

};


// Class Animation.AnimationDataContainingNoDuplicateStructs
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataContainingNoDuplicateStructs : public UAnimationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataContainingNoDuplicateStructs");
		return ptr;
	}

};


// Class Animation.AnimationDataContainingThreeInstancesOfTheSameStruct
// 0x0008 (0x0030 - 0x0028)
class UAnimationDataContainingThreeInstancesOfTheSameStruct : public UAnimationData
{
public:
	struct FEmptyStructForAnimationDataDuplicateStructTest StructInstance1;                                          // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FEmptyStructForAnimationDataDuplicateStructTest StructInstance2;                                          // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FEmptyStructForAnimationDataDuplicateStructTest StructInstance3;                                          // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataContainingThreeInstancesOfTheSameStruct");
		return ptr;
	}

};


// Class Animation.AnimationDataFunctionLib
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataFunctionLib");
		return ptr;
	}


	bool STATIC_UnwrapAnimDataEntryStruct(const struct FAnimDataEntryStructWrapper& Wrapper, class UScriptStruct* DestinationStruct, struct FGenericStruct* Value);
	class UAnimationData* STATIC_MakeAnimationData(class UClass* Class);
	struct FAnimDataEntryStructWrapper STATIC_GetAnimDataEntryStructAsStructWrapper(class UAnimationData* AnimationDataObject, class UScriptStruct* TheClass);
	void STATIC_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(class UClass* InClass);
};


// Class Animation.AnimationDataStore
// 0x0010 (0x0038 - 0x0028)
class UAnimationDataStore : public UObject
{
public:
	TArray<struct FAnimationDataStoreEntry>            Data;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataStore");
		return ptr;
	}

};


// Class Animation.AnimationDataStoreAsset
// 0x0010 (0x0038 - 0x0028)
class UAnimationDataStoreAsset : public UDataAsset
{
public:
	TArray<struct FAnimationDataStoreAssetEntry>       AssetRefs;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataStoreAsset");
		return ptr;
	}


	class UAnimationData* LookupAnimationData(class UClass* AnimDataId);
};


// Class Animation.AnimationDataTestIdOne
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataTestIdOne : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataTestIdOne");
		return ptr;
	}

};


// Class Animation.AnimationDataTestIdTwo
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataTestIdTwo : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataTestIdTwo");
		return ptr;
	}

};


// Class Animation.AnimationDataStoreInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataStoreInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.AnimationDataStoreInterface");
		return ptr;
	}


	class UAnimationData* GetAnimationDataForId(class UClass* AnimDataId);
};


// Class Animation.ClientSkeletalMeshComponent
// 0x0000 (0x0A90 - 0x0A90)
class UClientSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.ClientSkeletalMeshComponent");
		return ptr;
	}

};


// Class Animation.DockableInterface
// 0x0000 (0x0028 - 0x0028)
class UDockableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.DockableInterface");
		return ptr;
	}


	void HandleDestroy();
	struct FDockableInfo GetDockableInfo();
};


// Class Animation.DockerBlueprintFunctions
// 0x0000 (0x0028 - 0x0028)
class UDockerBlueprintFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.DockerBlueprintFunctions");
		return ptr;
	}


	void STATIC_UpdateDock(float DeltaTime, struct FDocker* Docker);
	void STATIC_StartDockingWithActor(class AActor* Owner, class AActor* Target, float DockDuration, struct FDocker* Docker);
	bool STATIC_IsFullyDocked(struct FDocker* Docker);
	bool STATIC_IsDocking(struct FDocker* Docker);
	struct FVector STATIC_GetTargetLocalOffset(const struct FDocker& Docker);
	void STATIC_EndDock(struct FDocker* Docker);
};


// Class Animation.DockerInterface
// 0x0000 (0x0028 - 0x0028)
class UDockerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.DockerInterface");
		return ptr;
	}

};


// Class Animation.IndexedPlayableMontagesInterface
// 0x0000 (0x0028 - 0x0028)
class UIndexedPlayableMontagesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.IndexedPlayableMontagesInterface");
		return ptr;
	}

};


// Class Animation.LimbIKFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULimbIKFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.LimbIKFunctionLibrary");
		return ptr;
	}


	void STATIC_SetTranslationStrength(float InRotationStrength, struct FLimbIK* LimbIK);
	void STATIC_SetTransform(const struct FTransform& InTransform, struct FLimbIK* LimbIK);
	void STATIC_SetRotationStrength(float InRotationStrength, struct FLimbIK* LimbIK);
	void STATIC_SetParentBone(const struct FName& Bone, struct FLimbIK* LimbIK);
	void STATIC_SetIKSpace(TEnumAsByte<ELimbIKSpace> IKSpace, struct FLimbIK* LimbIK);
	void STATIC_SetEnabled(bool Enabled, TEnumAsByte<ELimbIKSpace> IKSpace, const struct FName& ParentBone, struct FLimbIK* LimbIK);
	void STATIC_SetBlendOutSpeed(float BlendOutSpeed, struct FLimbIK* LimbIK);
	void STATIC_SetBlendInSpeed(float BlendInSpeed, struct FLimbIK* LimbIK);
	void STATIC_SetAnimationOverride(bool AnimationOverride, struct FLimbIK* LimbIK);
	void STATIC_SetAlphaTarget(float AlphaTarget, struct FLimbIK* LimbIK);
	bool STATIC_IsEnabled(struct FLimbIK* LimbIK);
	float STATIC_GetTranslationStrength(struct FLimbIK* LimbIK);
	struct FTransform STATIC_GetTransform(struct FLimbIK* LimbIK);
	float STATIC_GetRotationStrength(struct FLimbIK* LimbIK);
	struct FName STATIC_GetParentBone(struct FLimbIK* LimbIK);
	TEnumAsByte<ELimbIKSpace> STATIC_GetIKSpace(struct FLimbIK* LimbIK);
	float STATIC_GetCurrentAlpha(struct FLimbIK* LimbIK);
	bool STATIC_GetAnimationOverride(struct FLimbIK* LimbIK);
	float STATIC_GetAlphaTarget(struct FLimbIK* LimbIK);
	float STATIC_ConvertBoolToAlpha(bool InBool);
};


// Class Animation.LocomotionFunctionLib
// 0x0000 (0x0028 - 0x0028)
class ULocomotionFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.LocomotionFunctionLib");
		return ptr;
	}


	float STATIC_UpdateControllerSpineRotation(const struct FRotator& CharacterRotation, float AngleSpeedMax, float AngleSpeedMin);
	struct FActorVelocityData STATIC_UpdateCharacterSpeed(const struct FVector& Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming);
	float STATIC_UpdateCalculateRateAndCurrentYaw(const struct FRotator& CharacterRotation, float LargeRate, float DeltaSeconds, float* CurrentCharacterYaw);
};


// Class Animation.RemoteAnimPlayableInterface
// 0x0000 (0x0028 - 0x0028)
class URemoteAnimPlayableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.RemoteAnimPlayableInterface");
		return ptr;
	}

};


// Class Animation.TurningFunctionLib
// 0x0000 (0x0028 - 0x0028)
class UTurningFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.TurningFunctionLib");
		return ptr;
	}


	bool STATIC_TurningUpdate(float DeltaSeconds, bool CharacterMoving, float TurnRate, float CounterMax, bool* DeadZone, float* DelayedCounter, bool* TurningLeft);
};


// Class Animation.WaitForAnimationStateEntryProxy
// 0x0020 (0x0048 - 0x0028)
class UWaitForAnimationStateEntryProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnReachedState;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.WaitForAnimationStateEntryProxy");
		return ptr;
	}


	void OnEnteredState(const struct FName& path);
	void OnAnimationUpdated();
	class UWaitForAnimationStateEntryProxy* STATIC_CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath);
};


// Class Animation.WaitForAnimationStateExitProxy
// 0x0020 (0x0048 - 0x0028)
class UWaitForAnimationStateExitProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnStateExit;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Animation.WaitForAnimationStateExitProxy");
		return ptr;
	}


	void OnExitState(const struct FName& path);
	void OnAnimationUpdated();
	class UWaitForAnimationStateExitProxy* STATIC_CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
