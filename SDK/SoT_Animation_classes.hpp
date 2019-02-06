#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Animation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Animation.AnimationData
// 0x0000 (0x0028 - 0x0028)
class UAnimationData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.AnimationData"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.AnimationDataContainingNoDuplicateStructs"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.AnimationDataContainingThreeInstancesOfTheSameStruct"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.AnimationDataFunctionLib"));
		return ptr;
	}


	static bool UnwrapAnimDataEntryStruct(const struct FAnimDataEntryStructWrapper& Wrapper, class UScriptStruct* DestinationStruct, struct FGenericStruct* Value);
	static class UAnimationData* MakeAnimationData(class UClass* Class);
	static struct FAnimDataEntryStructWrapper GetAnimDataEntryStructAsStructWrapper(class UAnimationData* AnimationDataObject, class UScriptStruct* TheClass);
	static void CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(class UClass* InClass);
};


// Class Animation.AnimationDataStoreId
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataStoreId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.AnimationDataStoreId"));
		return ptr;
	}

};


// Class Animation.AnimationDataStore
// 0x0010 (0x0038 - 0x0028)
class UAnimationDataStore : public UObject
{
public:
	TArray<struct FAnimationDataStoreEntry>            Data;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.AnimationDataStore"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.AnimationDataStoreAsset"));
		return ptr;
	}


	class UAnimationData* LookupAnimationData(class UClass* AnimDataId);
	static class UClass* GetAnimationDataClass(struct FAnimationDataStoreAssetEntry* Entry);
};


// Class Animation.AnimationDataTestIdOne
// 0x0000 (0x0028 - 0x0028)
class UAnimationDataTestIdOne : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.AnimationDataTestIdOne"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.AnimationDataTestIdTwo"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.AnimationDataStoreInterface"));
		return ptr;
	}


	class UAnimationData* GetAnimationDataForId(class UClass* AnimDataId);
};


// Class Animation.ClientSkeletalMeshComponent
// 0x0000 (0x09B0 - 0x09B0)
class UClientSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.ClientSkeletalMeshComponent"));
		return ptr;
	}

};


// Class Animation.CustomAnimationInstanceInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomAnimationInstanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.CustomAnimationInstanceInterface"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.DockableInterface"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.DockerBlueprintFunctions"));
		return ptr;
	}


	static void UpdateDock(float DeltaTime, struct FDocker* Docker);
	static void StartDockingWithActor(class AActor* Owner, class AActor* Target, float DockDuration, float DelayAfterDocking, struct FDocker* Docker);
	static bool IsFullyDocked(struct FDocker* Docker);
	static bool IsDocking(struct FDocker* Docker);
	static struct FVector GetTargetLocalOffset(const struct FDocker& Docker);
	static void EndDock(struct FDocker* Docker);
};


// Class Animation.DockerInterface
// 0x0000 (0x0028 - 0x0028)
class UDockerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.DockerInterface"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.IndexedPlayableMontagesInterface"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.LimbIKFunctionLibrary"));
		return ptr;
	}


	static void SetTranslationStrength(float InRotationStrength, struct FLimbIK* LimbIK);
	static void SetTransform(const struct FTransform& InTransform, struct FLimbIK* LimbIK);
	static void SetRotationStrength(float InRotationStrength, struct FLimbIK* LimbIK);
	static void SetParentBone(const struct FName& Bone, struct FLimbIK* LimbIK);
	static void SetIKSpace(TEnumAsByte<ELimbIKSpace> IKSpace, struct FLimbIK* LimbIK);
	static void SetEnabled(bool Enabled, TEnumAsByte<ELimbIKSpace> IKSpace, const struct FName& ParentBone, struct FLimbIK* LimbIK);
	static void SetBlendOutSpeed(float BlendOutSpeed, struct FLimbIK* LimbIK);
	static void SetBlendInSpeed(float BlendInSpeed, struct FLimbIK* LimbIK);
	static void SetAnimationOverride(bool AnimationOverride, struct FLimbIK* LimbIK);
	static void SetAlphaTarget(float AlphaTarget, struct FLimbIK* LimbIK);
	static bool IsEnabled(struct FLimbIK* LimbIK);
	static float GetTranslationStrength(struct FLimbIK* LimbIK);
	static struct FTransform GetTransform(struct FLimbIK* LimbIK);
	static float GetRotationStrength(struct FLimbIK* LimbIK);
	static struct FName GetParentBone(struct FLimbIK* LimbIK);
	static TEnumAsByte<ELimbIKSpace> GetIKSpace(struct FLimbIK* LimbIK);
	static float GetCurrentAlpha(struct FLimbIK* LimbIK);
	static bool GetAnimationOverride(struct FLimbIK* LimbIK);
	static float GetAlphaTarget(struct FLimbIK* LimbIK);
	static float ConvertBoolToAlpha(bool InBool);
};


// Class Animation.LocomotionFunctionLib
// 0x0000 (0x0028 - 0x0028)
class ULocomotionFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.LocomotionFunctionLib"));
		return ptr;
	}


	static float UpdateControllerSpineRotation(const struct FRotator& CharacterRotation, float AngleSpeedMax, float AngleSpeedMin);
	static struct FActorVelocityData UpdateCharacterSpeed(const struct FVector& Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming);
	static float UpdateCalculateRateAndCurrentYaw(const struct FRotator& CharacterRotation, float LargeRate, float DeltaSeconds, float* CurrentCharacterYaw);
};


// Class Animation.NetworkSyncedAnimationInstanceInterface
// 0x0000 (0x0028 - 0x0028)
class UNetworkSyncedAnimationInstanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.NetworkSyncedAnimationInstanceInterface"));
		return ptr;
	}

};


// Class Animation.NetworkSyncedAnimationComponent
// 0x0048 (0x0118 - 0x00D0)
class UNetworkSyncedAnimationComponent : public UActorComponent
{
public:
	float                                              PlayRateAdjustMaxTimeDelta;                               // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PlayRateAdjustMaxPercentageToSpeedUpPlayRate;             // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PlayRateAdjustMaxPercentageToSlowDownPlayRate;            // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReplicatedAnimationProgression;                           // 0x00DC(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ReplicatedPlayingAnimationIndex;                          // 0x00E0(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ReplicatedPlayRate;                                       // 0x00E4(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	class UAnimInstance*                               AnimInstance;                                             // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.NetworkSyncedAnimationComponent"));
		return ptr;
	}


	void OnRep_PlayingAnimationIndex();
	void OnRep_AnimationProgression();
};


// Class Animation.RemoteAnimPlayableInterface
// 0x0000 (0x0028 - 0x0028)
class URemoteAnimPlayableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.RemoteAnimPlayableInterface"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.TurningFunctionLib"));
		return ptr;
	}


	static bool TurningUpdate(float DeltaSeconds, bool CharacterMoving, float TurnRate, float CounterMax, bool* DeadZone, float* DelayedCounter, bool* TurningLeft);
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.WaitForAnimationStateEntryProxy"));
		return ptr;
	}


	void OnEnteredState(const struct FName& path);
	void OnAnimationUpdated();
	static class UWaitForAnimationStateEntryProxy* CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath);
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Animation.WaitForAnimationStateExitProxy"));
		return ptr;
	}


	void OnExitState(const struct FName& path);
	void OnAnimationUpdated();
	static class UWaitForAnimationStateExitProxy* CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
