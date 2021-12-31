#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Animation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct
struct UAnimationDataFunctionLib_UnwrapAnimDataEntryStruct_Params
{
	FAnimDataEntryStructWrapper                        Wrapper;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	UScriptStruct*                                     DestinationStruct;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	FGenericStruct                                     Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.AnimationDataFunctionLib.MakeAnimationData
struct UAnimationDataFunctionLib_MakeAnimationData_Params
{
	UClass*                                            Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	UAnimationData*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper
struct UAnimationDataFunctionLib_GetAnimDataEntryStructAsStructWrapper_Params
{
	UAnimationData*                                    AnimationDataObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	UScriptStruct*                                     TheClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FAnimDataEntryStructWrapper                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs
struct UAnimationDataFunctionLib_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs_Params
{
	UClass*                                            InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.AnimationDataStoreAsset.LookupAnimationData
struct UAnimationDataStoreAsset_LookupAnimationData_Params
{
	UClass*                                            AnimDataId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UAnimationData*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.AnimationDataStoreAsset.GetAnimationDataClass
struct UAnimationDataStoreAsset_GetAnimationDataClass_Params
{
	FAnimationDataStoreAssetEntry                      Entry;                                                    // (Parm, OutParm, ReferenceParm)
	UClass*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.AnimationDataStoreInterface.GetAnimationDataForId
struct UAnimationDataStoreInterface_GetAnimationDataForId_Params
{
	UClass*                                            AnimDataId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UAnimationData*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.CosmeticItemAnimationComponent.SpawnCosmeticItem
struct UCosmeticItemAnimationComponent_SpawnCosmeticItem_Params
{
	USkeletalMeshComponent*                            MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	UClass*                                            ObjectToSpawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldAnimationLocation>               SpawnLocation;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	UCosmeticItemAnimationSetDataAsset*                CosmeticData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnHidden;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.CosmeticItemAnimationComponent.DestroyAllCosmeticItems
struct UCosmeticItemAnimationComponent_DestroyAllCosmeticItems_Params
{
};

// Function Animation.CustomAnimationMontageComponent.OnRep_ReplicatedData
struct UCustomAnimationMontageComponent_OnRep_ReplicatedData_Params
{
	FCustomAnimationMontageComponentReplicatedData     PriorData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Animation.LimbIKFunctionLibrary.SetTranslationStrength
struct ULimbIKFunctionLibrary_SetTranslationStrength_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              InRotationStrength;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetTransform
struct ULimbIKFunctionLibrary_SetTransform_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	FTransform                                         InTransform;                                              // (ConstParm, Parm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetRotationStrength
struct ULimbIKFunctionLibrary_SetRotationStrength_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              InRotationStrength;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetParentBone
struct ULimbIKFunctionLibrary_SetParentBone_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	FName                                              Bone;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetIKSpace
struct ULimbIKFunctionLibrary_SetIKSpace_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	TEnumAsByte<ELimbIKSpace>                          IKSpace;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetEnabled
struct ULimbIKFunctionLibrary_SetEnabled_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELimbIKSpace>                          IKSpace;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FName                                              ParentBone;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed
struct ULimbIKFunctionLibrary_SetBlendOutSpeed_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              BlendOutSpeed;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed
struct ULimbIKFunctionLibrary_SetBlendInSpeed_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              BlendInSpeed;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetAnimationOverride
struct ULimbIKFunctionLibrary_SetAnimationOverride_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               AnimationOverride;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetAlphaTarget
struct ULimbIKFunctionLibrary_SetAlphaTarget_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              AlphaTarget;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.IsEnabled
struct ULimbIKFunctionLibrary_IsEnabled_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetTranslationStrength
struct ULimbIKFunctionLibrary_GetTranslationStrength_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetTransform
struct ULimbIKFunctionLibrary_GetTransform_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	FTransform                                         ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetRotationStrength
struct ULimbIKFunctionLibrary_GetRotationStrength_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetParentBone
struct ULimbIKFunctionLibrary_GetParentBone_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	FName                                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetIKSpace
struct ULimbIKFunctionLibrary_GetIKSpace_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	TEnumAsByte<ELimbIKSpace>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha
struct ULimbIKFunctionLibrary_GetCurrentAlpha_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetAnimationOverride
struct ULimbIKFunctionLibrary_GetAnimationOverride_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetAlphaTarget
struct ULimbIKFunctionLibrary_GetAlphaTarget_Params
{
	FLimbIK                                            LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha
struct ULimbIKFunctionLibrary_ConvertBoolToAlpha_Params
{
	bool                                               InBool;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation
struct ULocomotionFunctionLib_UpdateControllerSpineRotation_Params
{
	FRotator                                           CharacterRotation;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              AngleSpeedMax;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleSpeedMin;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed
struct ULocomotionFunctionLib_UpdateCharacterSpeed_Params
{
	FVector                                            Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              CurrentMaxWalkSpeed;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WantedMovementSpeed;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseMaxWalkSpeed;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedBlendValue;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSwimming;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeadZone;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FActorVelocityData                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw
struct ULocomotionFunctionLib_UpdateCalculateRateAndCurrentYaw_Params
{
	FRotator                                           CharacterRotation;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              LargeRate;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentCharacterYaw;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex
struct UNetworkSyncedAnimationComponent_OnRep_PlayingAnimationIndex_Params
{
};

// Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression
struct UNetworkSyncedAnimationComponent_OnRep_AnimationProgression_Params
{
};

// Function Animation.TurningFunctionLib.TurningUpdate
struct UTurningFunctionLib_TurningUpdate_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CharacterMoving;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeadZone;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              TurnRate;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelayedCounter;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              CounterMax;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TurningLeft;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState
struct UWaitForAnimationStateEntryProxy_OnEnteredState_Params
{
	FName                                              path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated
struct UWaitForAnimationStateEntryProxy_OnAnimationUpdated_Params
{
};

// Function Animation.WaitForAnimationStateEntryProxy.CreateProxy
struct UWaitForAnimationStateEntryProxy_CreateProxy_Params
{
	UAnimInstance*                                     AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              TargetPath;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	UWaitForAnimationStateEntryProxy*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.WaitForAnimationStateExitProxy.OnExitState
struct UWaitForAnimationStateExitProxy_OnExitState_Params
{
	FName                                              path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated
struct UWaitForAnimationStateExitProxy_OnAnimationUpdated_Params
{
};

// Function Animation.WaitForAnimationStateExitProxy.CreateProxy
struct UWaitForAnimationStateExitProxy_CreateProxy_Params
{
	UAnimInstance*                                     AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              TargetPath;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	UWaitForAnimationStateExitProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.WeightedAnimSequenceLoadOnDemand.Initialise
struct UWeightedAnimSequenceLoadOnDemand_Initialise_Params
{
	UWeightedAnimationLoadOnDemandDataAsset*           InAnimationData;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.WeightedAnimSequenceLoadOnDemand.CreateNewWeightedAnimSequenceLoadOnDemand
struct UWeightedAnimSequenceLoadOnDemand_CreateNewWeightedAnimSequenceLoadOnDemand_Params
{
	UWeightedAnimSequenceLoadOnDemand*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.DockableInterface.HandleDestroy
struct UDockableInterface_HandleDestroy_Params
{
};

// Function Animation.DockableInterface.GetDockableInfo
struct UDockableInterface_GetDockableInfo_Params
{
	FDockableInfo                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
