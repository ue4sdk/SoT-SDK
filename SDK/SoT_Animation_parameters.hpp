#pragma once

// Sea of Thieves (1.1.6) SDK

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
	struct FAnimDataEntryStructWrapper                 Wrapper;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UScriptStruct*                               DestinationStruct;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGenericStruct                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.AnimationDataFunctionLib.MakeAnimationData
struct UAnimationDataFunctionLib_MakeAnimationData_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationData*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper
struct UAnimationDataFunctionLib_GetAnimDataEntryStructAsStructWrapper_Params
{
	class UAnimationData*                              AnimationDataObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UScriptStruct*                               TheClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimDataEntryStructWrapper                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs
struct UAnimationDataFunctionLib_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.AnimationDataStoreAsset.LookupAnimationData
struct UAnimationDataStoreAsset_LookupAnimationData_Params
{
	class UClass*                                      AnimDataId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationData*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.AnimationDataStoreAsset.GetAnimationDataClass
struct UAnimationDataStoreAsset_GetAnimationDataClass_Params
{
	struct FAnimationDataStoreAssetEntry               Entry;                                                    // (Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.AnimationDataStoreInterface.GetAnimationDataForId
struct UAnimationDataStoreInterface_GetAnimationDataForId_Params
{
	class UClass*                                      AnimDataId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationData*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.DockableInterface.HandleDestroy
struct UDockableInterface_HandleDestroy_Params
{
};

// Function Animation.DockableInterface.GetDockableInfo
struct UDockableInterface_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Animation.DockerBlueprintFunctions.UpdateDock
struct UDockerBlueprintFunctions_UpdateDock_Params
{
	struct FDocker                                     Docker;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.DockerBlueprintFunctions.StartDockingWithActor
struct UDockerBlueprintFunctions_StartDockingWithActor_Params
{
	struct FDocker                                     Docker;                                                   // (Parm, OutParm, ReferenceParm)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DockDuration;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.DockerBlueprintFunctions.IsFullyDocked
struct UDockerBlueprintFunctions_IsFullyDocked_Params
{
	struct FDocker                                     Docker;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.DockerBlueprintFunctions.IsDocking
struct UDockerBlueprintFunctions_IsDocking_Params
{
	struct FDocker                                     Docker;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.DockerBlueprintFunctions.GetTargetLocalOffset
struct UDockerBlueprintFunctions_GetTargetLocalOffset_Params
{
	struct FDocker                                     Docker;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.DockerBlueprintFunctions.EndDock
struct UDockerBlueprintFunctions_EndDock_Params
{
	struct FDocker                                     Docker;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function Animation.LimbIKFunctionLibrary.SetTranslationStrength
struct ULimbIKFunctionLibrary_SetTranslationStrength_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              InRotationStrength;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetTransform
struct ULimbIKFunctionLibrary_SetTransform_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetRotationStrength
struct ULimbIKFunctionLibrary_SetRotationStrength_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              InRotationStrength;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetParentBone
struct ULimbIKFunctionLibrary_SetParentBone_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	struct FName                                       Bone;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetIKSpace
struct ULimbIKFunctionLibrary_SetIKSpace_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	TEnumAsByte<ELimbIKSpace>                          IKSpace;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetEnabled
struct ULimbIKFunctionLibrary_SetEnabled_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELimbIKSpace>                          IKSpace;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParentBone;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed
struct ULimbIKFunctionLibrary_SetBlendOutSpeed_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              BlendOutSpeed;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed
struct ULimbIKFunctionLibrary_SetBlendInSpeed_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              BlendInSpeed;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetAnimationOverride
struct ULimbIKFunctionLibrary_SetAnimationOverride_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               AnimationOverride;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.SetAlphaTarget
struct ULimbIKFunctionLibrary_SetAlphaTarget_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              AlphaTarget;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.IsEnabled
struct ULimbIKFunctionLibrary_IsEnabled_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetTranslationStrength
struct ULimbIKFunctionLibrary_GetTranslationStrength_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetTransform
struct ULimbIKFunctionLibrary_GetTransform_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetRotationStrength
struct ULimbIKFunctionLibrary_GetRotationStrength_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetParentBone
struct ULimbIKFunctionLibrary_GetParentBone_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetIKSpace
struct ULimbIKFunctionLibrary_GetIKSpace_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	TEnumAsByte<ELimbIKSpace>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha
struct ULimbIKFunctionLibrary_GetCurrentAlpha_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetAnimationOverride
struct ULimbIKFunctionLibrary_GetAnimationOverride_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LimbIKFunctionLibrary.GetAlphaTarget
struct ULimbIKFunctionLibrary_GetAlphaTarget_Params
{
	struct FLimbIK                                     LimbIK;                                                   // (Parm, OutParm, ReferenceParm)
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
	struct FRotator                                    CharacterRotation;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              AngleSpeedMax;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleSpeedMin;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed
struct ULocomotionFunctionLib_UpdateCharacterSpeed_Params
{
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              CurrentMaxWalkSpeed;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WantedMovementSpeed;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseMaxWalkSpeed;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedBlendValue;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSwimming;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FActorVelocityData                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw
struct ULocomotionFunctionLib_UpdateCalculateRateAndCurrentYaw_Params
{
	struct FRotator                                    CharacterRotation;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
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
	struct FName                                       path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated
struct UWaitForAnimationStateEntryProxy_OnAnimationUpdated_Params
{
};

// Function Animation.WaitForAnimationStateEntryProxy.CreateProxy
struct UWaitForAnimationStateEntryProxy_CreateProxy_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetPath;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWaitForAnimationStateEntryProxy*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Animation.WaitForAnimationStateExitProxy.OnExitState
struct UWaitForAnimationStateExitProxy_OnExitState_Params
{
	struct FName                                       path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated
struct UWaitForAnimationStateExitProxy_OnAnimationUpdated_Params
{
};

// Function Animation.WaitForAnimationStateExitProxy.CreateProxy
struct UWaitForAnimationStateExitProxy_CreateProxy_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetPath;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWaitForAnimationStateExitProxy*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
